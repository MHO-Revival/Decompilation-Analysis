// Who calls the attribute machinery? (following FUN_101d15e0 / FUN_105f73f0)
//
// FUN_105f73f0 resolves an attribute from seven obfuscated slots; FUN_101d15e0 un-obfuscates one slot. Both were
// reached from CDistanceCheck's UseBodySie division. The useful question now is which OTHER code reads attributes
// this way — because each call site names the object it resolves on, and the roadmap lists several ops blocked on
// exactly "per-monster body-scale data": GetPhysicalRadius, BodyWidthToMeter, DistanceCheck/UseBodySie, SenseHealth.
// If they share this resolver, one recovered source unblocks the family.
//
// Finds DIRECT callers by scanning for `CALL rel32` whose target is the function, which catches the static calls a
// vtable scan cannot, then decompiles each caller.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.MemoryBlock;

public class CgCallersOf extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/attrchain";

    static final long[] TARGETS = { 0x105f73f0L, 0x101d15e0L };
    static final int MAX_DUMP = 18;

    @Override
    public void run() throws Exception {
        var dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        var sb = new StringBuilder();
        var dumped = new HashSet<Long>();

        for (long target : TARGETS) {
            sb.append("================================ callers of ")
              .append(String.format("%08x", target)).append('\n');

            var callers = new LinkedHashMap<Long, Function>();
            for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
                if (!b.isInitialized() || !b.isExecute()) continue;
                Address a = b.getStart();
                while (a != null && a.compareTo(b.getEnd()) < 0) {
                    // E8 rel32 — the displacement is relative to the END of the instruction.
                    Address hit = currentProgram.getMemory()
                            .findBytes(a, b.getEnd(), new byte[] { (byte) 0xE8 }, null, true, monitor);
                    if (hit == null) break;
                    a = hit.add(1);
                    try {
                        int rel = currentProgram.getMemory().getInt(hit.add(1));
                        long dest = hit.getOffset() + 5 + rel;
                        if (dest != target) continue;
                    } catch (Exception e) { continue; }

                    Instruction insn = getInstructionAt(hit);
                    if (insn == null || !insn.getMnemonicString().startsWith("CALL")) continue;
                    Function f = getFunctionContaining(hit);
                    sb.append(String.format("  call at %08x  in %s%n", hit.getOffset(),
                            f == null ? "(outside any function)" : f.getName()));
                    if (f != null) callers.putIfAbsent(f.getEntryPoint().getOffset(), f);
                }
            }

            sb.append(String.format("  -> %d distinct calling functions%n%n", callers.size()));

            int n = 0;
            for (Function f : callers.values()) {
                if (n++ >= MAX_DUMP) { sb.append("  (more callers not dumped)\n"); break; }
                if (!dumped.add(f.getEntryPoint().getOffset())) continue;
                sb.append(String.format("-------- %s @%08x (%d bytes)%n",
                        f.getName(), f.getEntryPoint().getOffset(), f.getBody().getNumAddresses()));
                DecompileResults r = dec.decompileFunction(f, 150, monitor);
                sb.append(r != null && r.getDecompiledFunction() != null
                        ? r.getDecompiledFunction().getC() : "// nothing\n").append('\n');
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(sb.toString());
        }
        println("CgCallersOf -> " + OUT);
    }
}
