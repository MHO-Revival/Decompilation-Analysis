// Which DIRECTION does CSetCurrentRegionID go? (correcting my own implementation)
//
// I implemented it as "read CurrentRegionID from the blackboard, move the monster to that region". The op
// roadmap, from an earlier session and citing FUN_105cf050 (193 bytes), says the opposite: param 1
// TargetBBName is "the region id DESTINATION", i.e. it READS the entity's region and WRITES it to a
// blackboard var — a getter with a misleading name ("Set <the blackboard> to CurrentRegionID").
//
// One of those is wrong and the difference is not cosmetic: my version MUTATES an entity's region every time
// the op runs. Read the Evaluate and settle it. Also wanted: whether an authored-but-unresolvable
// TargetLogicEntityID really fails (the roadmap says yes), and how the third param is used as the destination
// when TargetBBName is absent — 20 of the 53 shipped nodes depend on that fallback.
//
// The registrar (FUN_105cf120, already dumped) gives the three names in order: TargetLogicEntityID(0),
// TargetBBName(1), CurrentRegionID(2) — which closes the gap the roadmap flagged as "not yet recovered".
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;

public class CgSetRegionId extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/setregionid";

    static final long[] TARGETS = {
        0x105cf050L,   // CSetCurrentRegionID::Evaluate, per the roadmap
        0x105cf120L,   // its parameter registration, for the index->name order
    };

    @Override
    public void run() throws Exception {
        var dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        var sb = new StringBuilder();

        for (long addr : TARGETS) {
            Function f = getFunctionContaining(toAddr(addr));
            if (f == null) {
                sb.append(String.format("no function at %08x — not disassembled%n", addr));
                continue;
            }
            sb.append(String.format("======== %s @%08x (%d bytes)%n",
                    f.getName(), f.getEntryPoint().getOffset(), f.getBody().getNumAddresses()));

            Address a = f.getEntryPoint();
            while (a != null && f.getBody().contains(a)) {
                Instruction insn = getInstructionAt(a);
                if (insn == null) break;
                sb.append(String.format("  %08x  %s%n", a.getOffset(), insn.toString()));
                try { a = insn.getMaxAddress().add(1); } catch (Exception e) { break; }
            }

            sb.append("---- decompiled ----\n");
            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            sb.append(r != null && r.getDecompiledFunction() != null
                    ? r.getDecompiledFunction().getC() : "// nothing\n");
            sb.append('\n');
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(sb.toString());
        }
        println("CgSetRegionId -> " + OUT);
    }
}
