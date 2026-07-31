// Find every place a 4-byte value appears in memory, and if it looks like a vtable slot, report the
// table base and the slot index.
//
// The fallback for when CgSlotOf says "no data references": Ghidra only reports a reference if it TYPED
// the dword as a pointer, and in this binary most vtables are undisassembled bytes. A raw byte scan finds
// them anyway. "No data references" therefore means "not typed", never "not virtual" — the same class of
// mistake as reading `no fn at <addr>` as "no code".
//
//   -postScript CgFindPtr.java 101d91c0 1026a780
//
// For each hit inside an initialised block, walks BACKWARD while the preceding dword also points into an
// executable block, and forward the same way, so the run is the candidate vtable. With no RTTI to terminate
// it two adjacent tables can merge, so the run length is printed: treat anything past ~0x200 slots as merged
// rather than as one class. Resolves each slot to a function name where one exists.
//
// Output: <OUT>/findptr_<program>.txt
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgFindPtr extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/findptr";
    static final int MAX_RUN = 512;          // slots; beyond this the run is certainly merged tables

    Memory mem;

    boolean pointsIntoExec(long v) {
        if (v == 0) return false;
        try {
            Address a = toAddr(v);
            MemoryBlock b = mem.getBlock(a);
            return b != null && b.isExecute();
        } catch (Exception e) { return false; }
    }

    String nameAt(long v) {
        try {
            Function f = currentProgram.getFunctionManager().getFunctionAt(toAddr(v));
            if (f != null) return f.getName();
            f = currentProgram.getFunctionManager().getFunctionContaining(toAddr(v));
            if (f != null) return f.getName() + "+" + (v - f.getEntryPoint().getOffset());
        } catch (Exception e) { }
        return pointsIntoExec(v) ? "<undisassembled code>" : "<not code>";
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) { println("usage: CgFindPtr <addr> [addr...]"); return; }
        new File(OUT).mkdirs();
        mem = currentProgram.getMemory();

        StringBuilder rep = new StringBuilder();
        rep.append("=== ").append(currentProgram.getName()).append(" ===\n");

        for (String raw : args) {
            long want = Long.parseLong(raw.trim().replaceFirst("(?i)^0x", ""), 16);
            rep.append("\n#### occurrences of the dword 0x").append(Long.toHexString(want))
               .append(" (").append(nameAt(want)).append(")\n");

            List<Address> hits = new ArrayList<>();
            for (MemoryBlock b : mem.getBlocks()) {
                if (!b.isInitialized()) continue;
                long start = b.getStart().getOffset(), end = b.getEnd().getOffset();
                for (long a = start; a + 3 <= end; a += 4) {
                    long v;
                    try { v = mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e) { continue; }
                    if (v == want) hits.add(toAddr(a));
                }
            }
            if (hits.isEmpty()) {
                rep.append("  NONE. The value is in no initialised 4-byte-aligned slot. It may be built at\n")
                   .append("  runtime, stored unaligned, or live in a block Ghidra did not load.\n");
                continue;
            }

            for (Address h : hits) {
                MemoryBlock blk = mem.getBlock(h);
                rep.append("  at ").append(h).append("  block=").append(blk == null ? "?" : blk.getName())
                   .append(blk != null && blk.isExecute() ? " (EXECUTABLE — an immediate, not a table)" : "")
                   .append("\n");
                if (blk == null || blk.isExecute()) continue;

                // Walk back to the table start: the run of consecutive dwords that all point into code.
                long base = h.getOffset();
                int back = 0;
                while (back < MAX_RUN) {
                    long prev = base - 4;
                    if (prev < blk.getStart().getOffset()) break;
                    long v;
                    try { v = mem.getInt(toAddr(prev)) & 0xFFFFFFFFL; } catch (Exception e) { break; }
                    if (!pointsIntoExec(v)) break;
                    base = prev; back++;
                }
                int slot = (int) ((h.getOffset() - base) / 4);

                int len = 0;
                while (len < MAX_RUN) {
                    long v;
                    try { v = mem.getInt(toAddr(base + len * 4L)) & 0xFFFFFFFFL; } catch (Exception e) { break; }
                    if (!pointsIntoExec(v)) break;
                    len++;
                }

                rep.append(String.format("    -> vtable base 0x%x, slot %d (byte +0x%x), run length %d%s%n",
                        base, slot, slot * 4, len,
                        len >= MAX_RUN ? "  [HIT THE CAP — certainly merged tables]" : ""));
                for (int i = 0; i < len; i++) {
                    long v;
                    try { v = mem.getInt(toAddr(base + i * 4L)) & 0xFFFFFFFFL; } catch (Exception e) { break; }
                    rep.append(String.format("       [%2d] +0x%02x  %08x  %s%s%n",
                            i, i * 4, v, nameAt(v), v == want ? "   <== ANCHOR" : ""));
                }
            }
        }

        FileWriter w = new FileWriter(new File(OUT, "findptr_" + currentProgram.getName() + ".txt"));
        w.write(rep.toString()); w.close();
        println(rep.toString());
        println("CgFindPtr done");
    }
}
