// Find the CONSUMERS of the CSkillSequence flag bits and the lunge/spline fields.
//
// CSkillSequence::LoadFromXmlNode (@0x11065dba region) writes:
//    DisablePhy          -> +0x116 bit 0x08
//    DisableColWithWall  -> +0x116 bit 0x10
//    CatchUpDist         -> +0x116 bit 0x20
//    IsLoop              -> +0x116 bit 0x40
//    EnableMoveSplineScale -> +0x117 bit 0x04
// Those are struct-field reads, so they have no xrefs. This scans EVERY instruction for a memory
// operand whose displacement is one of the target offsets, groups the hits by containing function,
// then decompiles the candidates — which is where the per-tick lunge / spline-scale math lives.
//
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;

public class CgFieldBits extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/splinelunge";
    // Field displacements of interest (CSkillSequence flag bytes).
    static final long[] OFFS = { 0x116, 0x117 };
    // Skip absurdly large functions: decompiling those is what caused a multi-hour stall before.
    static final long MAX_FN_BYTES = 0x3000;
    static final int MAX_DECOMP = 60;

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Set<Long> want = new HashSet<>();
        for (long o : OFFS) want.add(o);

        // Pass 1: instruction sweep. Record functions touching the target displacements, plus the
        // immediate masks seen in the same instruction (which identifies WHICH flag is being tested).
        Map<Function, List<String>> hits = new LinkedHashMap<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        long scanned = 0;
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            if (++scanned % 2000000 == 0) println("  scanned " + scanned + " instructions...");
            boolean match = false;
            for (int i = 0; i < ins.getNumOperands() && !match; i++) {
                for (Object o : ins.getOpObjects(i)) {
                    if (o instanceof Scalar && want.contains(((Scalar) o).getUnsignedValue())) { match = true; break; }
                }
            }
            if (!match) continue;
            Function f = fm.getFunctionContaining(ins.getAddress());
            if (f == null) continue;
            hits.computeIfAbsent(f, k -> new ArrayList<>())
                .add(ins.getAddress() + "  " + ins.toString());
        }
        println("instructions scanned: " + scanned);
        println("candidate functions: " + hits.size());

        // Pass 2: decompile the candidates (smallest first — the flag readers are accessors/tick fns,
        // not the giant dispatchers, and this keeps the run bounded).
        List<Function> cands = new ArrayList<>(hits.keySet());
        cands.sort(Comparator.comparingLong(f -> f.getBody().getNumAddresses()));

        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        try (PrintWriter idx = new PrintWriter(new FileWriter(OUT + "/_INDEX.txt"))) {
            idx.println("# consumers of CSkillSequence +0x116 / +0x117 (CatchUpDist, EnableMoveSplineScale, ...)");
            idx.println("# program: " + currentProgram.getName());
            int done = 0;
            for (Function f : cands) {
                long size = f.getBody().getNumAddresses();
                idx.println();
                idx.println("== " + f.getEntryPoint() + "  " + f.getName() + "  (" + size + " bytes)");
                for (String h : hits.get(f)) idx.println("     " + h);
                if (size > MAX_FN_BYTES) { idx.println("     [skipped decompile: too large]"); continue; }
                if (done >= MAX_DECOMP) { idx.println("     [skipped decompile: cap reached]"); continue; }
                String c = "// <fail>\n";
                try {
                    DecompileResults r = dec.decompileFunction(f, 90, monitor);
                    if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC();
                } catch (Exception e) { c = "// <exception " + e + ">\n"; }
                String fname = "fn_" + f.getEntryPoint() + ".c";
                try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/" + fname))) {
                    pw.println("// " + f.getName() + " @ " + f.getEntryPoint() + "  (" + size + " bytes)");
                    pw.println("// flag-byte accesses:");
                    for (String h : hits.get(f)) pw.println("//   " + h);
                    pw.println();
                    pw.print(c);
                }
                idx.println("     -> " + fname);
                done++;
            }
            println("decompiled: " + done + " functions into " + OUT);
        }
        dec.dispose();
    }
}
