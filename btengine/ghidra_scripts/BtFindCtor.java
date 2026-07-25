// No RTTI COL for BT nodes. Names are plain registration strings. Find code refs to each
// node-type string, decompile the registrar, and auto-surface candidate creator/ctor fn ptrs
// (immediates that land in .text) so we can follow name -> creator -> ctor -> vtable.
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

public class BtFindCtor extends GhidraScript {
    static final String OUT = "/home/fallen/.claude/jobs/58b1921c/tmp/re_out2";
    static final long BASE = 0x10000000L;
    long TX_LO = 0x10001000L, TX_HI = 0x112faa56L;
    long RD_LO = 0x112fb000L, RD_HI = 0x113cb09aL;

    static final Object[][] NAMES = {
        {"CSelectorVoter",             0x1130d0fcL},
        {"CBTRandomSelecNode",         0x113bf5acL},
        {"CBTRandomSelectAction",      0x113bf5c0L},
        {"CLoopFilter",                0x113bf5d8L},
        {"CBTOperation",               0x11306a50L},
        {"CNodeRepeatExecuteCounter",  0x1130d778L},
    };

    Memory mem;
    DecompInterface dec;
    Set<Long> emitted = new HashSet<>();

    long ptrAt(Address a) throws MemoryAccessException { return mem.getInt(a) & 0xFFFFFFFFL; }
    byte[] le(long v){ return new byte[]{(byte)(v&0xff),(byte)((v>>8)&0xff),(byte)((v>>16)&0xff),(byte)((v>>24)&0xff)}; }

    List<Address> scan(long lo, long hi, long val) {
        List<Address> out = new ArrayList<>();
        Address end = toAddr(hi);
        Address f = mem.findBytes(toAddr(lo), le(val), null, true, monitor);
        while (f != null && f.compareTo(end) < 0) { out.add(f); f = mem.findBytes(f.add(1), le(val), null, true, monitor); }
        return out;
    }

    String decomp(Function f) {
        if (f == null) return "// <null>\n";
        try { DecompileResults r = dec.decompileFunction(f, 90, monitor);
            return (r!=null && r.decompileCompleted()) ? r.getDecompiledFunction().getC() : "// <decompile failed>\n";
        } catch (Exception e){ return "// <exc "+e.getMessage()+">\n"; }
    }

    @Override public void run() throws Exception {
        String pn = currentProgram.getName();
        if (!pn.toLowerCase().contains("cryaction")) { println("skip "+pn); return; }
        mem = currentProgram.getMemory();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        var fm = currentProgram.getFunctionManager();
        new File(OUT).mkdirs();
        StringBuilder rep = new StringBuilder();

        for (Object[] row : NAMES) {
            String nm = (String) row[0]; long sva = (Long) row[1];
            rep.append("\n================ ").append(nm).append(String.format(" (str @ %08x) ================\n", sva));
            List<Address> sites = scan(TX_LO, TX_HI, sva);
            rep.append("code refs (imm==strVA in .text): ").append(sites.size()).append("\n");
            Set<Long> regFns = new LinkedHashSet<>();
            for (Address s : sites) {
                Function f = getFunctionContaining(s);
                rep.append(String.format("  @%08x in %s\n", s.getOffset(), f==null?"<none>":(f.getName()+"@"+f.getEntryPoint())));
                if (f != null) regFns.add(f.getEntryPoint().getOffset());
            }
            // decompile each registrar, and surface candidate function-ptr immediates within it
            List<String> dumps = new ArrayList<>();
            for (Long rf : regFns) {
                Function f = fm.getFunctionAt(toAddr(rf));
                if (f == null) continue;
                String code = decomp(f);
                dumps.add("// ===== registrar " + f.getName()+" @ "+f.getEntryPoint()+" =====\n"+code);
                // scan the function's byte range for immediates that are .text function starts (creator ptrs)
                Address fa = f.getEntryPoint();
                long lo = fa.getOffset();
                long hi = f.getBody().getMaxAddress().getOffset();
                rep.append("    -- fn ptr immediates inside "+f.getName()+":\n");
                for (long a = lo; a + 4 <= hi; a++) {
                    long v;
                    try { v = ptrAt(toAddr(a)); } catch (Exception e){ continue; }
                    if (v >= TX_LO && v < TX_HI) {
                        Function tf = fm.getFunctionAt(toAddr(v));
                        if (tf != null && tf.getEntryPoint().getOffset()!=rf)
                            rep.append(String.format("        %08x -> %s\n", v, tf.getName()));
                    }
                }
            }
            try (FileWriter w = new FileWriter(new File(OUT, "reg_"+nm+".c"))) {
                for (String d : dumps){ w.write(d); w.write("\n"); }
            }
        }
        try (FileWriter w = new FileWriter(new File(OUT, "reg_report.txt"))) { w.write(rep.toString()); }
        println(rep.toString());
        println("[BtFindCtor] done.");
    }
}
