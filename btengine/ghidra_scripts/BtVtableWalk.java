// Robust MSVC RTTI walk via RAW BYTE SCAN (not Ghidra ref DB, which came up empty before).
// For each composite BT node class:
//   TypeDescriptor(td) = nameStr-8 ; scan .rdata for LE ptr==td (COL+0xC field) ;
//   COL = field-0xC ; scan .rdata for LE ptr==COL (vtable[-1]) ; vtable=that+4 ;
//   read fn ptrs ; decompile every vmethod ; find constructor by scanning .text for ptr==vtable.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;

public class BtVtableWalk extends GhidraScript {
    static final String OUT = "/home/fallen/.claude/jobs/58b1921c/tmp/re_out2";
    static final long BASE = 0x10000000L;

    // class -> RTTI name-string address (from prior rt_report). td = nameStr - 8.
    static final Object[][] CLS = {
        {"CSelector",             0x1130d0fcL},
        {"CBTRandomSelecNode",    0x113bf5acL},
        {"CBTRandomSelectAction", 0x113bf5c0L},
        {"CLoopFilter",           0x113bf5d8L},
        {"CNodeRepeatExecuteCounter", 0x1130d778L},
        {"CBTOperation",          0x11306a50L},
        {"CConditionSuccessful",  0x1131449cL},
        {"CConditionFailure",     0x11314434L},
    };

    Memory mem;
    DecompInterface dec;
    Set<Long> decompiled = new HashSet<>();

    long ptrAt(Address a) throws MemoryAccessException { return mem.getInt(a) & 0xFFFFFFFFL; }

    byte[] le(long v){ return new byte[]{(byte)(v&0xff),(byte)((v>>8)&0xff),(byte)((v>>16)&0xff),(byte)((v>>24)&0xff)}; }

    List<Address> scan(long lo, long hi, long val) {
        List<Address> out = new ArrayList<>();
        Address start = toAddr(lo);
        Address end = toAddr(hi);
        byte[] pat = le(val);
        Address f = mem.findBytes(start, pat, null, true, monitor);
        while (f != null && f.compareTo(end) < 0) {
            out.add(f);
            Address n = f.add(1);
            f = mem.findBytes(n, pat, null, true, monitor);
        }
        return out;
    }

    String decomp(Function f, StringBuilder rep) {
        if (f == null) return "// <null fn>\n";
        long key = f.getEntryPoint().getOffset();
        if (!decompiled.add(key)) return "// (already emitted " + f.getName() + " @ " + f.getEntryPoint() + ")\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 90, monitor);
            return (r != null && r.decompileCompleted()) ? r.getDecompiledFunction().getC() : "// <decompile failed>\n";
        } catch (Exception e) { return "// <exc " + e.getMessage() + ">\n"; }
    }

    @Override
    public void run() throws Exception {
        String pname = currentProgram.getName();
        if (!pname.toLowerCase().contains("cryaction")) { println("skip " + pname); return; }
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        var fm = currentProgram.getFunctionManager();
        new File(OUT).mkdirs();

        // section bounds
        long RD_LO = 0x112fb000L, RD_HI = 0x113cb09aL;   // .rdata
        long TX_LO = 0x10001000L, TX_HI = 0x112faa56L;   // .text

        StringBuilder rep = new StringBuilder();
        for (Object[] row : CLS) {
            String cname = (String) row[0];
            long nameAddr = (Long) row[1];
            long td = nameAddr - 8;
            rep.append("\n================ ").append(cname).append(" ================\n");
            rep.append(String.format("nameStr=%08x td=%08x\n", nameAddr, td));

            List<Address> tdRefs = scan(RD_LO, RD_HI, td);
            rep.append("COL-field candidates (ptr==td in .rdata): ");
            for (Address a: tdRefs) rep.append(String.format("%08x ", a.getOffset()));
            rep.append("\n");

            Set<Long> vtables = new LinkedHashSet<>();
            for (Address tdRef : tdRefs) {
                long colBase = tdRef.getOffset() - 0xC;
                // sanity: COL signature at colBase should be 0
                long sig = -1; try { sig = ptrAt(toAddr(colBase)); } catch (Exception e) {}
                List<Address> colRefs = scan(RD_LO, RD_HI, colBase);
                rep.append(String.format("  td-ref@%08x -> COL=%08x sig=%d ; vtbl[-1] slots: ", tdRef.getOffset(), colBase, sig));
                for (Address cr : colRefs) {
                    long vtbl = cr.getOffset() + 4;
                    vtables.add(vtbl);
                    rep.append(String.format("%08x(vtbl=%08x) ", cr.getOffset(), vtbl));
                }
                rep.append("\n");
            }

            // dump each vtable + decompile methods; find ctor
            List<String> methodDumps = new ArrayList<>();
            for (long vtbl : vtables) {
                rep.append(String.format("  --- VTABLE @ %08x (RVA %x) ---\n", vtbl, vtbl-BASE));
                List<Long> slots = new ArrayList<>();
                for (int i = 0; i < 64; i++) {
                    Address slot = toAddr(vtbl + i*4L);
                    long fp;
                    try { fp = ptrAt(slot); } catch (Exception e) { break; }
                    Function f = fm.getFunctionAt(toAddr(fp));
                    if (f == null) {
                        // allow a couple of thunks? stop at first non-function
                        rep.append(String.format("    [%2d] %08x  <not-a-function-start, stop>\n", i, fp));
                        break;
                    }
                    slots.add(fp);
                    rep.append(String.format("    [%2d] %08x  %s\n", i, fp, f.getName()));
                }
                // decompile each slot method
                for (int i=0;i<slots.size();i++){
                    long fp = slots.get(i);
                    Function f = fm.getFunctionAt(toAddr(fp));
                    methodDumps.add("// ===== " + cname + " vtable["+i+"] @ " + String.format("%08x",fp) + "  " + f.getName() + " =====\n" + decomp(f, rep));
                }
                // find constructor(s): scan .text for immediate == vtbl
                List<Address> ctorSites = scan(TX_LO, TX_HI, vtbl);
                rep.append("  ctor sites (imm==vtbl in .text): ");
                Set<Long> ctors = new LinkedHashSet<>();
                for (Address cs : ctorSites) {
                    Function cf = getFunctionContaining(cs);
                    if (cf != null) ctors.add(cf.getEntryPoint().getOffset());
                    rep.append(String.format("%08x%s ", cs.getOffset(), cf==null?"":("(in "+cf.getName()+")")));
                }
                rep.append("\n");
                for (Long c : ctors) {
                    Function cf = fm.getFunctionAt(toAddr(c));
                    methodDumps.add("// ===== " + cname + " CTOR @ " + String.format("%08x",c) + " =====\n" + decomp(cf, rep));
                }
            }
            // write per-class decompilation
            try (FileWriter w = new FileWriter(new File(OUT, "vt_"+cname+".c"))) {
                w.write("// class " + cname + "  td="+String.format("%08x",td)+"\n\n");
                for (String s : methodDumps){ w.write(s); w.write("\n"); }
            }
        }
        try (FileWriter w = new FileWriter(new File(OUT, "vtable_report.txt"))) { w.write(rep.toString()); }
        println(rep.toString());
        println("[BtVtableWalk] done -> " + OUT);
    }
}
