// Who fills CSPlayerRegionJumpEnd.RegionId (opcode 729)?
//
// Our server sends CSPlayerRegionJumpRsp{RegionId=1} then {RegionId=2}, and the client answers 729 with
// RegionId=0 BOTH times. Either the client does not populate the field, or we have the wrong field. This
// decides it from the binary rather than from two observations.
//
// CryGame.dll kept its function symbols, so enumerate by symbol regex first (CLAUDE.md), then fall back to
// the opcode constant 729 = 0x2D9 appearing in code.
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.*;

public class CgRegionJump extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/regionjump";
    static final int OPCODE = 729;

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();

        // 1) symbols naming the exchange
        println("=== symbols matching RegionJump / JumpEnd / SwitchRegion ===");
        List<Function> named = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) {
            String n = f.getName();
            if (n.matches("(?i).*(regionjump|jumpend|switchregion|region_jump).*")) {
                println("  " + f.getEntryPoint() + "  " + n);
                named.add(f);
            }
        }
        if (named.isEmpty()) println("  (none — expected in CryAction, which is stripped)");

        // 2) every code site with the literal 729, and the function holding it
        println("\n=== code sites with the literal " + OPCODE + " (0x" + Integer.toHexString(OPCODE) + ") ===");
        List<Function> holders = new ArrayList<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            for (int i = 0; i < ins.getNumOperands(); i++) {
                Object[] ops = ins.getOpObjects(i);
                for (Object o : ops) {
                    if (o instanceof Scalar && ((Scalar) o).getUnsignedValue() == OPCODE) {
                        Function h = fm.getFunctionContaining(ins.getAddress());
                        String hn = h == null ? "<no fn>" : h.getName() + " @" + h.getEntryPoint();
                        println("  " + ins.getAddress() + "  " + ins + "   in " + hn);
                        if (h != null && !holders.contains(h)) holders.add(h);
                    }
                }
            }
        }

        // 3) decompile the small holders — the sender is a short "build packet, send" body
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        List<Function> all = new ArrayList<>(named);
        for (Function f : holders) if (!all.contains(f)) all.add(f);
        all.sort(Comparator.comparingLong(f -> f.getBody().getNumAddresses()));
        int n = 0;
        for (Function f : all) {
            if (n >= 12) break;
            if (f.getBody().getNumAddresses() > 0x1200) continue;
            try {
                DecompileResults r = dec.decompileFunction(f, 120, monitor);
                if (r != null && r.decompileCompleted()) {
                    String p = OUT + "/" + currentProgram.getName() + "_" + f.getEntryPoint() + ".c";
                    try (PrintWriter pw = new PrintWriter(new FileWriter(p))) {
                        pw.print(r.getDecompiledFunction().getC());
                    }
                    println("wrote " + p + "  (" + f.getName() + ", " + f.getBody().getNumAddresses() + " bytes)");
                    n++;
                }
            } catch (Exception e) { }
        }
        dec.dispose();
    }
}
