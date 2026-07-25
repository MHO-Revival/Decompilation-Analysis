// Recover MoveSplineScaleNeedNormalized by finding the SCALE GETTER behind vtable slot +0x3f0.
//
// WHY THIS SLOT. In FUN_11067e40 (per-tick root-motion transform) the spline scale is not read from a
// field — it comes through a virtual call, and only then is multiplied component-wise:
//     piVar5 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
//     (**(code **)(*piVar5 + 0x3f0))(&local_30);          // <-- fills a Vec3
//     ... if it is neither (1,1,1) nor (0,0,0) ...
//     pfVar4 = (float *)(**(code **)(*piVar5 + 0x3f0))(local_48);
//     dX *= pfVar4[0]; dY *= pfVar4[1]; dZ *= pfVar4[2];
// The multiply site has NO normalisation step. So if `MoveSplineScaleNeedNormalized` changes anything, it
// must do so INSIDE this getter. Recovering the getter therefore settles the flag.
//
// WHAT WE ALREADY KNOW FROM DATA (so the decompile can be judged, not just read):
//   * All 32 shipped uses are ="True" -> no discriminating variation; the flag is effectively constant.
//   * The scaled values are per-axis MULTIPLIERS near 1: vars declared (1,1,1) / (1.25,1.25,1) / (1.2,1,1),
//     setters using 0.25 / 0.33 / 0.5 / 1 / 1.6. So "normalize" canNOT mean "divide a distance by the
//     clip's reach" - they are already ratios.
//   * Remaining candidate meanings: unit-length normalise (would turn (1.25,1.25,1) into ~(0.64,0.64,0.51),
//     i.e. always shrink - implausible), or renormalise so total path LENGTH is preserved while the per-axis
//     shape changes, or divide by max component. A sqrt / rsqrt / division by a length inside the getter
//     distinguishes these; a plain field return means the flag is inert for us.
//
// STRATEGY: two passes.
//   1) Find every indirect CALL through displacement 0x3f0 (the call sites), to confirm the slot and give
//      the surrounding context.
//   2) Find vtable DATA: any pointer-array slot at byte offset 0x3f0 whose target is a small function, and
//      decompile those candidates. Flag ones containing sqrt/rsqrt/div so a normalising getter stands out.
//
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.scalar.Scalar;

public class CgSplineScaleGetter extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/splinescale";
    static final long SLOT = 0x3f0;
    static final long MAX_FN_BYTES = 0x600;     // a Vec3 getter is tiny
    static final int  MAX_DECOMP   = 40;

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing lst = currentProgram.getListing();
        StringBuilder sites = new StringBuilder();

        // ---- pass 1: indirect call sites through +0x3f0
        int nSites = 0;
        InstructionIterator it = lst.getInstructions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            if (!ins.getMnemonicString().toUpperCase().startsWith("CALL")) continue;
            boolean hit = false;
            for (int i = 0; i < ins.getNumOperands() && !hit; i++)
                for (Object o : ins.getOpObjects(i))
                    if (o instanceof Scalar && ((Scalar) o).getUnsignedValue() == SLOT) { hit = true; break; }
            if (!hit) continue;
            Function f = fm.getFunctionContaining(ins.getAddress());
            sites.append(ins.getAddress() + "  in " + (f == null ? "<none>" : f.getName() + " @ " + f.getEntryPoint())
                         + "   " + ins + "\n");
            nSites++;
        }
        println("indirect CALL sites through +0x3f0: " + nSites);

        // ---- pass 2: vtable slots at byte offset 0x3f0 -> candidate implementations
        // A vtable is a run of code pointers in a data block. For each aligned pointer-array start, the entry
        // at +0x3f0 is index 0x3f0/4 = 252. Rather than guess vtable starts, scan data words: if word[k] is a
        // function pointer AND word[k - 252] is also a function pointer, then word[k] is a plausible slot-0x3f0.
        Set<Function> cands = new LinkedHashSet<>();
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            if (!b.isInitialized() || b.isExecute()) continue;
            long start = b.getStart().getOffset(), end = b.getEnd().getOffset();
            for (long a = start + SLOT; a + 4 <= end && !monitor.isCancelled(); a += 4) {
                try {
                    Address slotAddr = toAddr(a), baseAddr = toAddr(a - SLOT);
                    long tgt  = getInt(slotAddr)  & 0xffffffffL;
                    long tgt0 = getInt(baseAddr)  & 0xffffffffL;
                    if (tgt == 0 || tgt0 == 0) continue;
                    Function f  = fm.getFunctionAt(toAddr(tgt));
                    Function f0 = fm.getFunctionAt(toAddr(tgt0));
                    if (f != null && f0 != null) cands.add(f);
                } catch (Exception ignore) { }
            }
        }
        println("candidate slot-0x3f0 implementations: " + cands.size());

        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        List<Function> list = new ArrayList<>(cands);
        list.sort(Comparator.comparingLong(f -> f.getBody().getNumAddresses()));
        int done = 0;
        try (PrintWriter idx = new PrintWriter(new FileWriter(OUT + "/_INDEX.txt"))) {
            idx.println("# MoveSplineScale getter hunt — vtable slot +0x3f0");
            idx.println("# NORMALISING getter => the flag has real per-tick meaning; plain field return => inert.");
            idx.println();
            idx.println("## indirect call sites through +0x3f0 (" + nSites + ")");
            idx.print(sites);
            idx.println();
            idx.println("## candidate implementations (" + cands.size() + ", smallest first)");
            for (Function f : list) {
                long size = f.getBody().getNumAddresses();
                if (size > MAX_FN_BYTES) continue;
                if (done >= MAX_DECOMP) { idx.println("   [decompile cap reached]"); break; }
                String c = "// <fail>\n";
                try {
                    DecompileResults r = dec.decompileFunction(f, 60, monitor);
                    if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC();
                } catch (Exception e) { c = "// <exception " + e + ">\n"; }
                String low = c.toLowerCase();
                boolean norm = low.contains("sqrt") || low.contains("rsqrt")
                            || low.contains("/ ") || low.contains("normalize");
                idx.println("== " + f.getEntryPoint() + "  " + f.getName() + "  (" + size + " bytes)"
                            + (norm ? "   <== has sqrt/div — POSSIBLE NORMALISER" : ""));
                String fname = "vfn_" + f.getEntryPoint() + ".c";
                try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/" + fname))) { pw.print(c); }
                idx.println("     -> " + fname);
                done++;
            }
        }
        dec.dispose();
        println("wrote " + OUT + "/_INDEX.txt  (decompiled " + done + ")");
    }
}
