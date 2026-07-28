// Does CBodyWidthToMeter read the entity's LOCAL bounds or its WORLD bounds? (task #120)
//
// This single fact decides the unit chain. Monster-BT-Op-Roadmap records the arithmetic already —
// StoreFloat = bboxDiagonal * BodyWidth, the half-diagonal doubled via DAT_112fcab0 = 2.0f — but not which
// bounds query feeds it. MonsterBehaviorTree.ModelToWorldScale states the rule read off the client's two move
// drives: a quantity gets the x3 entity scale iff the client pushes it through the entity world matrix. So:
//   world bounds  -> already scaled, no x3
//   local bounds  -> x3 needed
// IEntity's getters are adjacent vtable slots, so the slot number is the answer. Dump the Evaluate body plus
// every callee, and annotate the indirect calls with their offsets.
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;

public class CgBodyWidth extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/idleops";

    // CBodyWidthToMeter::Evaluate, per the roadmap's earlier recovery.
    static final long EVALUATE = 0x105592d0L;

    @Override
    public void run() throws Exception {
        var dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        var sb = new StringBuilder();

        Function f = getFunctionContaining(toAddr(EVALUATE));
        if (f == null) {
            println("no function at " + Long.toHexString(EVALUATE) + " — not disassembled");
            return;
        }
        sb.append("== ").append(f.getName()).append(" @")
          .append(Long.toHexString(f.getEntryPoint().getOffset())).append('\n');

        // Instruction listing: the vtable OFFSET on each indirect call is the thing being looked for, and the
        // decompiler's `(**(code **)(*p + 0x78))()` form is easier to miss than a raw `CALL dword ptr [EAX+0x78]`.
        Address a = f.getEntryPoint();
        while (a != null && f.getBody().contains(a)) {
            Instruction insn = getInstructionAt(a);
            if (insn == null) break;
            sb.append(String.format("  %08x  %s%n", a.getOffset(), insn.toString()));
            try { a = insn.getMaxAddress().add(1); } catch (Exception e) { break; }
        }

        sb.append("\n== decompiled ==\n");
        DecompileResults r = dec.decompileFunction(f, 180, monitor);
        sb.append(r != null && r.getDecompiledFunction() != null
                ? r.getDecompiledFunction().getC() : "// nothing\n");

        try (FileWriter w = new FileWriter(new File(OUT, "bodywidth_" + currentProgram.getName() + ".txt"))) {
            w.write(sb.toString());
        }
        println("CgBodyWidth -> " + OUT);
    }
}
