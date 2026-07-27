// Identify the object behind DAT_1202e818 — the last unknown in #98.
//
// The spawn roll compares its level band against [DAT_1202e818+0xd0]+0xbc, and the same object's vtbl[0x6c]
// supplies the index for CLevelSpawnBatchInfo::GetRecordByIndex. Naming the class names the quantity.
//
// CryGame.dll KEPT ITS FUNCTION SYMBOLS (unlike CryAction), so the functions that touch this global should
// carry real Class::Method names — which is the cheapest possible identification. Scans raw bytes for the
// 32-bit absolute address appearing as an instruction operand, then reports the containing function for each
// hit, because Ghidra has not disassembled much of .text.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgGlobalXref extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/spawnband";

    // The globals to chase. DAT_1202e818 is the one that matters; the others are its neighbours in the same
    // functions, kept so their owners can be compared.
    static final long[] TARGETS = { 0x1202e818L, 0x113f3a18L };

    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        StringBuilder sb = new StringBuilder();

        for (long target : TARGETS) {
            sb.append(String.format("======== references to 0x%08x%n", target));
            byte[] pat = {
                (byte) target, (byte) (target >> 8), (byte) (target >> 16), (byte) (target >> 24),
            };
            Map<String, Integer> byFunction = new TreeMap<>();
            int hits = 0, orphan = 0;

            for (MemoryBlock b : mem.getBlocks()) {
                if (!b.isInitialized() || !b.isExecute()) continue;
                var a = b.getStart();
                while (a != null && a.compareTo(b.getEnd()) < 0) {
                    var f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                    if (f == null) break;
                    hits++;
                    Function fn = getFunctionContaining(f);
                    if (fn == null) orphan++;
                    else byFunction.merge(fn.getName(), 1, Integer::sum);
                    a = f.add(1);
                }
            }

            sb.append(String.format("  %d hits, %d inside named functions, %d outside any function%n",
                hits, hits - orphan, orphan));
            sb.append("  containing functions (name x count):\n");
            // Named functions first — those are the identification.
            List<Map.Entry<String, Integer>> named = new ArrayList<>();
            List<Map.Entry<String, Integer>> unnamed = new ArrayList<>();
            for (var e : byFunction.entrySet())
                (e.getKey().startsWith("FUN_") ? unnamed : named).add(e);
            for (var e : named) sb.append(String.format("    *** %-60s x%d%n", e.getKey(), e.getValue()));
            for (var e : unnamed) sb.append(String.format("        %-60s x%d%n", e.getKey(), e.getValue()));
            sb.append('\n');
        }

        try (FileWriter w = new FileWriter(new File(OUT, "globalxref.txt"))) { w.write(sb.toString()); }
        println(sb.toString());
    }
}
