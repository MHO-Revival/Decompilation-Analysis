// Find CAnimSequencePlay's EXECUTE, to settle MoveSplineScaleNeedNormalized (param 28).
//
// WHY BY INDEX. The param registrar FUN_10554fe0 only builds a schema table:
//     FUN_103cf720(<nodeTypeName>, <paramName>, <index>, <type>, 0)
// so the node's Execute reads its params BY INDEX, not by name. There is no "MoveSplineScale" string in the
// consumer to grep for (the string is not even in the DLL's ascii dump). Hence: score every function by how
// many DISTINCT CAnimSequencePlay param indices it references as immediates. The executor should reference a
// large, characteristic subset; unrelated functions will hit only a couple by chance.
//
// The recovered schema (from decompiled/btruntime/rt_CAnimSequencePlay.c):
//   0 TickNumMax, 1 AnimSequence, 2 SkillID, 3 Restart, 4 SkillSpeed, 5 CancelLCM, 7 CanBePlayedTwice,
//   12 NeedTargetAttackPos, 13 UseTargetPos, 15 TargetAttackNum, 16 UsePMSkillID, 17 SetPos, 18 SetRotate,
//   19 NeedTargetAttackPosOffset, 20 AttackPosOffsetNum, 22..26 AttackPosOffset0-4,
//   27 MoveSplineScale, 28 MoveSplineScaleNeedNormalized
//
// The discriminator we actually want is the PAIR 27+28 (0x1b/0x1c) — adjacent, and 28 is only meaningful
// alongside 27. Functions containing both are reported first and flagged.
//
// PRIOR FAILED APPROACH (do not repeat): hunting the scale GETTER via vtable slot +0x3f0 by scanning data
// blocks for pointer-array shapes gave 12 202 candidates — hopelessly loose. See CgSplineScaleGetter.java.
//
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;

public class CgAnimSeqExecute extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/splinescale";
    // All CAnimSequencePlay param indices.
    static final long[] IDX = { 0,1,2,3,4,5,7,12,13,15,16,17,18,19,20,22,23,24,25,26,27,28 };
    // The two that matter; a hit on BOTH is the strong signal.
    static final long KEY_A = 27, KEY_B = 28;
    static final long MAX_FN_BYTES = 0x2000;
    static final int  MAX_DECOMP   = 25;

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Set<Long> want = new HashSet<>();
        for (long i : IDX) want.add(i);

        // Per function: which param indices appear as immediates.
        Map<Function, Set<Long>> seen = new HashMap<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        long scanned = 0;
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            if (++scanned % 2000000 == 0) println("  scanned " + scanned + " instructions...");
            Function f = null;
            for (int i = 0; i < ins.getNumOperands(); i++) {
                for (Object o : ins.getOpObjects(i)) {
                    if (!(o instanceof Scalar)) continue;
                    long v = ((Scalar) o).getUnsignedValue();
                    if (!want.contains(v)) continue;
                    if (f == null) f = fm.getFunctionContaining(ins.getAddress());
                    if (f == null) continue;
                    seen.computeIfAbsent(f, k -> new TreeSet<>()).add(v);
                }
            }
        }
        println("instructions scanned: " + scanned);

        // Rank: functions containing BOTH 27 and 28 first, then by how many distinct indices they touch.
        List<Function> cands = new ArrayList<>(seen.keySet());
        cands.removeIf(f -> {
            var s = seen.get(f);
            // Require the discriminating pair OR a broad subset — otherwise it is chance.
            return !(s.contains(KEY_A) && s.contains(KEY_B)) && s.size() < 10;
        });
        cands.sort(Comparator
            .<Function, Boolean>comparing(f -> !(seen.get(f).contains(KEY_A) && seen.get(f).contains(KEY_B)))
            .thenComparing(f -> -seen.get(f).size())
            .thenComparingLong(f -> f.getBody().getNumAddresses()));
        println("candidates after filtering: " + cands.size());

        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        int done = 0;
        try (PrintWriter idx = new PrintWriter(new FileWriter(OUT + "/_EXECUTE.txt"))) {
            idx.println("# CAnimSequencePlay Execute hunt — ranked by referenced param indices");
            idx.println("# '27+28' = contains the MoveSplineScale / NeedNormalized pair (the strong signal)");
            for (Function f : cands) {
                var s = seen.get(f);
                boolean pair = s.contains(KEY_A) && s.contains(KEY_B);
                long size = f.getBody().getNumAddresses();
                idx.println();
                idx.println("== " + f.getEntryPoint() + "  " + f.getName() + "  (" + size + " bytes)  "
                            + (pair ? "27+28  " : "") + "indices=" + s);
                if (size > MAX_FN_BYTES) { idx.println("   [skipped decompile: too large]"); continue; }
                if (done >= MAX_DECOMP) { idx.println("   [decompile cap reached]"); continue; }
                String c = "// <fail>\n";
                try {
                    DecompileResults r = dec.decompileFunction(f, 120, monitor);
                    if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC();
                } catch (Exception e) { c = "// <exception " + e + ">\n"; }
                String fname = "exec_" + f.getEntryPoint() + ".c";
                try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/" + fname))) {
                    pw.println("// " + f.getName() + " @ " + f.getEntryPoint() + "  (" + size + " bytes)");
                    pw.println("// CAnimSequencePlay param indices referenced: " + s);
                    pw.println();
                    pw.print(c);
                }
                idx.println("   -> " + fname);
                done++;
            }
        }
        dec.dispose();
        println("wrote " + OUT + "/_EXECUTE.txt  (decompiled " + done + ")");
    }
}
