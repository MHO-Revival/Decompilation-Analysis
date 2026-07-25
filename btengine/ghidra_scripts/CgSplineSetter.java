// Find the SETTER for the move-spline scale, i.e. who WRITES the Vec3 that FUN_11067e40 later reads through
// vtable slot +0x3f0 — because that write is the only place `MoveSplineScaleNeedNormalized` could act.
//
// WHY THE SETTER AND NOT THE GETTER. The flag is NOT on the wire: TlvMonsterSkillSyncV2 ends at
// stMoveSplineScale @0x22e and neither CSMonsterLocomotion nor CSAIAnimSequence carries a "Normalized" field.
// So it is a client-LOCAL BT node param (CAnimSequencePlay 27/28). For a server-driven monster our server runs
// the tree, so the client can never apply the flag on our behalf — meaning if normalisation is real we must do
// it before sending the Vec3. Whatever normalisation exists therefore happens where the scale is STORED, not
// where it is consumed (the consumer, FUN_11067e40, is a plain component-wise multiply with no arithmetic).
//
// METHOD: the getter is an indirect call through +0x3f0 with exactly 2 call sites game-wide. A paired setter is
// almost always an adjacent vtable slot. Sweep indirect CALLs through the slots around it and report how many
// sites each has; the setter should be similarly rare. Then decompile the rare ones and look for a sqrt / a
// divide by a length / a max-component divide before the store.
//
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;

public class CgSplineSetter extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/splinesetter";
    // vtable slots around the known getter (+0x3f0), plus the component offsets the 641 marshalling writes
    // the scale into (FUN_10a672e0: dwords 0x8b/0x8c/0x8d = bytes 0x22c/0x230/0x234).
    static final long[] SLOTS = { 0x3e0, 0x3e4, 0x3e8, 0x3ec, 0x3f0, 0x3f4, 0x3f8, 0x3fc, 0x400 };
    static final long MAX_FN_BYTES = 0x2000;

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Set<Long> want = new HashSet<>();
        for (long s : SLOTS) want.add(s);

        Map<Long, List<String>> sites = new TreeMap<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        long scanned = 0;
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            if (++scanned % 2000000 == 0) println("  scanned " + scanned + "...");
            if (!ins.getMnemonicString().toUpperCase().startsWith("CALL")) continue;
            for (int i = 0; i < ins.getNumOperands(); i++)
                for (Object o : ins.getOpObjects(i)) {
                    if (!(o instanceof Scalar)) continue;
                    long v = ((Scalar) o).getUnsignedValue();
                    if (!want.contains(v)) continue;
                    Function f = fm.getFunctionContaining(ins.getAddress());
                    sites.computeIfAbsent(v, k -> new ArrayList<>())
                         .add(ins.getAddress() + "  in " + (f == null ? "?" : f.getName() + " @ " + f.getEntryPoint())
                              + "   " + ins);
                }
        }
        println("scanned " + scanned);

        DecompInterface dec = new DecompInterface(); dec.openProgram(currentProgram);
        try (PrintWriter idx = new PrintWriter(new FileWriter(OUT + "/_INDEX.txt"))) {
            idx.println("# indirect CALL sites through vtable slots around the spline-scale getter (+0x3f0)");
            idx.println("# the getter has 2 sites, both in FUN_11067e40; a rare neighbour is the likely setter");
            Set<Function> toDump = new LinkedHashSet<>();
            for (var e : sites.entrySet()) {
                idx.println();
                idx.println("== slot +0x" + Long.toHexString(e.getKey()) + "   sites: " + e.getValue().size());
                for (String s : e.getValue()) idx.println("     " + s);
                if (e.getValue().size() <= 8)          // rare slot -> worth reading
                    for (String s : e.getValue()) {
                        try {
                            var addr = toAddr(s.trim().split("\\s+")[0]);
                            Function f = fm.getFunctionContaining(addr);
                            if (f != null && f.getBody().getNumAddresses() <= MAX_FN_BYTES) toDump.add(f);
                        } catch (Exception ignore) { }
                    }
            }
            idx.println();
            idx.println("## decompiled callers of the rare slots");
            for (Function f : toDump) {
                String c = "// <fail>\n";
                try {
                    DecompileResults r = dec.decompileFunction(f, 120, monitor);
                    if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC();
                } catch (Exception ex) { c = "// <exception " + ex + ">\n"; }
                String low = c.toLowerCase();
                boolean norm = low.contains("sqrt") || low.contains("normalize");
                idx.println("  " + f.getEntryPoint() + " " + f.getName()
                            + (norm ? "   <== contains sqrt/normalize" : ""));
                try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/set_" + f.getEntryPoint() + ".c"))) {
                    pw.print(c);
                }
            }
        }
        dec.dispose();
        println("wrote " + OUT + "/_INDEX.txt");
    }
}
