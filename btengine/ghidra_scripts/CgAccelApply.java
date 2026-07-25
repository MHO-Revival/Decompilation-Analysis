// Find where the CLIENT APPLIES the move-speed acceleration ramp, so the server can reproduce it instead of
// inferring it.
//
// WHY THIS CAN WORK WHERE THE EARLIER ATTEMPTS FAILED. The BT node's Execute is unreachable (every move class
// decompiles with vftables=[] / empty virtual sections), and ranking by param INDEX was useless because small
// integers 0-28 appear everywhere. But the ramp also travels ON THE WIRE, and the parsed 641 message has a
// known layout (TlvMonsterSkillSyncV2::PrintText @0x102ed140, documented in schema/docs/skills.md):
//     bNeedMoveSpeedAcc      @0x219
//     stMoveSpeedAccelerate  @0x21a  (vec3: 0x21a / 0x21e / 0x222)
//     fMoveSpeedAccStart     @0x226
//     fMoveSpeedAccEnd       @0x22a
//     stMoveSplineScale      @0x22e
// Whoever consumes the ramp must READ those offsets, and 0x226/0x22a are large, unusual displacements — good
// discriminators, unlike an index of 7 or 8. Same instruction-sweep technique that found the CatchUpDist /
// EnableMoveSplineScale consumers from +0x116/+0x117 (exactly two functions).
//
// READ THE OUTPUT FOR: a function that reads 0x226 and 0x22a and combines them with 0x21a-0x222 and a time
// delta. Its arithmetic IS the ramp:
//   * `v += accel * dt` while a clock is between start and end  -> the window reading (what the server assumed)
//   * `lerp(start, end, t)` over the vector                     -> start/end are SPEEDS, not times
//   * anything dividing by (end - start)                        -> normalised progress, a third shape
//
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;

public class CgAccelApply extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/accelramp";
    static final long ACC_START = 0x226, ACC_END = 0x22a;
    static final long[] OFFS = { 0x219, 0x21a, 0x21e, 0x222, 0x226, 0x22a };
    static final long MAX_FN_BYTES = 0x3000;
    static final int  MAX_DECOMP   = 30;

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Set<Long> want = new HashSet<>();
        for (long o : OFFS) want.add(o);

        Map<Function, TreeSet<Long>> seen = new HashMap<>();
        Map<Function, List<String>> where = new HashMap<>();
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
                    where.computeIfAbsent(f, k -> new ArrayList<>())
                         .add(ins.getAddress() + "  " + ins);
                }
            }
        }
        println("instructions scanned: " + scanned + "   candidate functions: " + seen.size());

        // Rank: functions touching BOTH ramp floats first, then by how many ramp offsets they touch.
        List<Function> cands = new ArrayList<>(seen.keySet());
        cands.sort(Comparator
            .<Function, Boolean>comparing(f -> !(seen.get(f).contains(ACC_START) && seen.get(f).contains(ACC_END)))
            .thenComparing(f -> -seen.get(f).size())
            .thenComparingLong(f -> f.getBody().getNumAddresses()));

        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        int done = 0;
        try (PrintWriter idx = new PrintWriter(new FileWriter(OUT + "/_INDEX.txt"))) {
            idx.println("# readers of the 641 acceleration-ramp fields on the parsed message");
            idx.println("# 0x219 NeedAcc | 0x21a/0x21e/0x222 Accelerate | 0x226 AccStart | 0x22a AccEnd");
            idx.println("# '**' = touches BOTH 0x226 and 0x22a -> the ramp math should be in there");
            for (Function f : cands) {
                var s = seen.get(f);
                boolean both = s.contains(ACC_START) && s.contains(ACC_END);
                long size = f.getBody().getNumAddresses();
                idx.println();
                idx.println((both ? "** " : "   ") + f.getEntryPoint() + "  " + f.getName()
                            + "  (" + size + " bytes)  offsets=" +
                            s.stream().map(x -> "0x" + Long.toHexString(x)).reduce((a,b)->a+","+b).orElse(""));
                for (String w : where.get(f)) idx.println("       " + w);
                if (size > MAX_FN_BYTES) { idx.println("       [skipped: too large]"); continue; }
                if (done >= MAX_DECOMP) { idx.println("       [decompile cap reached]"); continue; }
                String c = "// <fail>\n";
                try {
                    DecompileResults r = dec.decompileFunction(f, 120, monitor);
                    if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC();
                } catch (Exception e) { c = "// <exception " + e + ">\n"; }
                String fname = "acc_" + f.getEntryPoint() + ".c";
                try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/" + fname))) {
                    pw.println("// " + f.getName() + " @ " + f.getEntryPoint());
                    pw.println("// ramp offsets referenced: " + s);
                    pw.println();
                    pw.print(c);
                }
                idx.println("       -> " + fname);
                done++;
            }
        }
        dec.dispose();
        println("wrote " + OUT + "/_INDEX.txt (decompiled " + done + ")");
    }
}
