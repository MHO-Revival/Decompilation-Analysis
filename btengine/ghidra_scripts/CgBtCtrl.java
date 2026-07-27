// FUN_10be8430 @10be8430 is the CSBBVarList -> client-blackboard applier the monster-appear handler calls
// (comp->vtbl[0x10c](&msg->BBVars, 0xa22)). It writes into the entity extension "BTCtrlObject" (NOT
// "BehaviorTreeBase"), gated on the first list entry's Name matching the literal at DAT_11cc35f8.
//
// This pass answers the remaining questions:
//   1. What string is DAT_11cc35f8 (the magic header var name)?
//   2. Complete xref set of "BTCtrlObject" = everything that can write this blackboard.
//   3. Which vtable(s) contain FUN_10be8430 / FUN_10be8380, and what are their neighbouring slots
//      (0x10c = SetBBVars, 0x114 = SetLcmState) -- i.e. the class's full network-state interface.
//   4. All references to FUN_10be8430 and FUN_10be8380 (call or data) so we can see every invoker.
//
// Output: /home/fallen/Projets/MHO/decompiled/bbsync/btctrl_*.{txt,c}
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.StringDataInstance;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class CgBtCtrl extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbsync";
    static final long HEADER_STR = 0x11cc35f8L;
    static final long[] TARGETS = { 0x10be8430L, 0x10be8380L };

    DecompInterface dec;
    FunctionManager fm;
    Memory mem;
    long TX_LO, TX_HI;

    boolean inText(long v) { return v >= TX_LO && v < TX_HI; }

    String decomp(Function f) {
        if (f == null) return "// <no function>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 120, monitor);
            if (r != null && r.getDecompiledFunction() != null) return r.getDecompiledFunction().getC();
        } catch (Exception e) { }
        return "// <decompile failed>\n";
    }

    String fname(Function f) { return f == null ? "?" : f.getName() + "@" + f.getEntryPoint(); }

    String cstr(long a) {
        StringBuilder sb = new StringBuilder();
        try {
            for (int i = 0; i < 200; i++) {
                int b = mem.getByte(toAddr(a + i)) & 0xFF;
                if (b == 0) break;
                sb.append((b >= 32 && b < 127) ? (char) b : '.');
            }
        } catch (Exception e) { sb.append("<unreadable>"); }
        return sb.toString();
    }

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        fm = currentProgram.getFunctionManager();
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        for (MemoryBlock b : mem.getBlocks())
            if (b.getName().equals(".text")) { TX_LO = b.getStart().getOffset(); TX_HI = b.getEnd().getOffset(); }

        StringBuilder rep = new StringBuilder();

        // 1. the magic header string
        rep.append("=== (1) DAT_").append(Long.toHexString(HEADER_STR)).append(" ===\n");
        rep.append("  as C string: \"").append(cstr(HEADER_STR)).append("\"\n");
        rep.append("  referencing functions:\n");
        ReferenceIterator ri = currentProgram.getReferenceManager().getReferencesTo(toAddr(HEADER_STR));
        Set<Address> seen = new HashSet<>();
        while (ri.hasNext()) {
            Function c = fm.getFunctionContaining(ri.next().getFromAddress());
            if (c != null && seen.add(c.getEntryPoint())) rep.append("    ").append(fname(c)).append("\n");
        }

        // 2. "BTCtrlObject" xrefs
        rep.append("\n=== (2) \"BTCtrlObject\" XREFS ===\n");
        List<Address> lits = new ArrayList<>();
        DataIterator di = currentProgram.getListing().getDefinedData(true);
        while (di.hasNext()) {
            Data d = di.next();
            if (!d.getDataType().getName().toLowerCase().contains("string")) continue;
            Object v = d.getValue();
            if (v != null && v.toString().equals("BTCtrlObject")) lits.add(d.getAddress());
        }
        StringBuilder bodies = new StringBuilder();
        Set<Address> dumped = new HashSet<>();
        for (Address a : lits) {
            rep.append("  literal @ ").append(a).append("\n");
            ri = currentProgram.getReferenceManager().getReferencesTo(a);
            Set<Address> s2 = new HashSet<>();
            while (ri.hasNext()) {
                Reference r = ri.next();
                Function c = fm.getFunctionContaining(r.getFromAddress());
                if (c == null) { rep.append("      (data ref @ ").append(r.getFromAddress()).append(")\n"); continue; }
                if (!s2.add(c.getEntryPoint())) continue;
                rep.append("      ").append(fname(c)).append("\n");
                if (dumped.add(c.getEntryPoint()))
                    bodies.append("\n// ===== \"BTCtrlObject\" user ").append(fname(c)).append(" =====\n").append(decomp(c));
            }
            rep.append("      total: ").append(s2.size()).append(" functions\n");
        }

        // 3/4. every reference to the two apply/serialize functions, and the vtables holding them
        rep.append("\n=== (3/4) REFERENCES TO THE APPLY/SERIALIZE PAIR ===\n");
        for (long t : TARGETS) {
            Function tf = fm.getFunctionAt(toAddr(t));
            rep.append("\n-- ").append(fname(tf)).append("\n");
            ri = currentProgram.getReferenceManager().getReferencesTo(toAddr(t));
            int n = 0;
            while (ri.hasNext()) {
                Reference r = ri.next();
                Address from = r.getFromAddress();
                Function c = fm.getFunctionContaining(from);
                n++;
                if (c != null) {
                    rep.append("     CODE ").append(from).append("  in ").append(fname(c)).append("\n");
                } else {
                    // data reference: probably a vtable slot -> report the slot index and neighbours
                    rep.append("     DATA ").append(from).append("  (vtable slot?)\n");
                    // walk backwards to the start of the pointer run
                    long start = from.getOffset();
                    while (true) {
                        long prev = start - 4;
                        long v;
                        try { v = mem.getInt(toAddr(prev)) & 0xFFFFFFFFL; } catch (Exception e) { break; }
                        if (!inText(v)) break;
                        start = prev;
                    }
                    long idx = (from.getOffset() - start) / 4;
                    rep.append(String.format("          run starts %x, slot index %d (byte off 0x%x)%n",
                            start, idx, idx * 4));
                    for (long off : new long[] { 0x104, 0x108, 0x10c, 0x110, 0x114, 0x118 }) {
                        long v;
                        try { v = mem.getInt(toAddr(start + off)) & 0xFFFFFFFFL; } catch (Exception e) { continue; }
                        Function sf = fm.getFunctionAt(toAddr(v));
                        rep.append(String.format("          +0x%x -> %s%n", off, fname(sf)));
                        if (sf != null && dumped.add(sf.getEntryPoint()))
                            bodies.append("\n// ===== vtable +0x").append(Long.toHexString(off))
                                  .append(" of run ").append(Long.toHexString(start)).append(" : ")
                                  .append(fname(sf)).append(" =====\n").append(decomp(sf));
                    }
                }
            }
            rep.append("     total refs: ").append(n).append("\n");
        }

        FileWriter w = new FileWriter(new File(OUT, "btctrl_report.txt")); w.write(rep.toString()); w.close();
        w = new FileWriter(new File(OUT, "btctrl_bodies.c")); w.write(bodies.toString()); w.close();
        println("CgBtCtrl done");
    }
}
