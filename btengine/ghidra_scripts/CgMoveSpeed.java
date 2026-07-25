// Find WHO CONSUMES the 641 monster-locomotion MoveSpeed field — i.e. what the client actually does
// with the number our server sends, so the model-vs-world units question is settled by measurement
// rather than by inference.
//
// WHERE THE OFFSETS COME FROM (live client log, not a guess). The MsgDump hook on the 641 fan-out
// (sub_10621040) printed a float window over the parsed message; on a DragonDashLoop packet:
//     +0x13F:  0.0  19.7  32.0  0.2  0.0  8.0  0.0  327.2
//     +0x15F:  304.9  358.0 ...
// The server sends MoveSpeed=(0,8,0), and the only (0,8,0) triple in the window sits at
// +0x14F/+0x153/+0x157  =>  MoveSpeed.X/Y/Z. (The 327.2/304.9/358.0 that follows is the monster
// position, confirmed against the server log; 19.7/32.0 is the offset to the charge destination.)
//
// Struct-field reads have NO xrefs, so the only way to find the readers is an instruction sweep for
// memory operands with those displacements — the same technique that found the CatchUpDist /
// EnableMoveSplineScale consumers (exactly 2 functions for +0x116/+0x117).
//
// WHAT TO LOOK FOR in the output:
//   * a read of +0x153 followed by a multiply against an entity matrix / scale  => MoveSpeed is
//     MODEL units and the server must send/integrate 8*3 = 24.
//   * a read of +0x153 fed straight into a velocity/position integrate with no scale  => it is
//     already WORLD units and 8 is correct as-is.
// 0x153 is the discriminating one (the forward component, the only non-zero one we send), so it is
// listed first and hits on it are flagged.
//
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;

public class CgMoveSpeed extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/movespeed";
    // MoveSpeed.X / .Y / .Z on the parsed 641 message. 0x153 (forward) is the discriminator.
    static final long[] OFFS = { 0x153, 0x14f, 0x157 };
    static final long MAX_FN_BYTES = 0x3000;
    static final int  MAX_DECOMP   = 40;

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Set<Long> want = new HashSet<>();
        for (long o : OFFS) want.add(o);

        // Pass 1: sweep every instruction for a memory operand with one of the target displacements.
        Map<Function, List<String>> hits = new LinkedHashMap<>();
        Set<Function> hasKey = new HashSet<>();              // touched 0x153 specifically
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        long scanned = 0;
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            if (++scanned % 2000000 == 0) println("  scanned " + scanned + " instructions...");
            boolean match = false, key = false;
            for (int i = 0; i < ins.getNumOperands(); i++) {
                for (Object o : ins.getOpObjects(i)) {
                    if (!(o instanceof Scalar)) continue;
                    long v = ((Scalar) o).getUnsignedValue();
                    if (want.contains(v)) { match = true; if (v == 0x153) key = true; }
                }
            }
            if (!match) continue;
            Function f = fm.getFunctionContaining(ins.getAddress());
            if (f == null) continue;
            hits.computeIfAbsent(f, k -> new ArrayList<>()).add(ins.getAddress() + "  " + ins.toString());
            if (key) hasKey.add(f);
        }
        println("instructions scanned: " + scanned);
        println("candidate functions: " + hits.size() + "  (touching 0x153: " + hasKey.size() + ")");

        // Pass 2: decompile. Functions that touch 0x153 (MoveSpeed.Y, the forward component) first,
        // then by size — the readers are small apply/tick fns, not the giant dispatchers.
        List<Function> cands = new ArrayList<>(hits.keySet());
        cands.sort(Comparator.<Function, Boolean>comparing(f -> !hasKey.contains(f))
                             .thenComparingLong(f -> f.getBody().getNumAddresses()));

        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        try (PrintWriter idx = new PrintWriter(new FileWriter(OUT + "/_INDEX.txt"))) {
            idx.println("# consumers of the 641 MoveSpeed field (+0x14f/+0x153/+0x157 on the parsed msg)");
            idx.println("# 0x153 = MoveSpeed.Y = the forward component the server sets to 8");
            idx.println("# program: " + currentProgram.getName());
            int done = 0;
            for (Function f : cands) {
                long size = f.getBody().getNumAddresses();
                idx.println();
                idx.println("== " + f.getEntryPoint() + "  " + f.getName() + "  (" + size + " bytes)"
                            + (hasKey.contains(f) ? "   <== reads 0x153 (forward)" : ""));
                for (String h : hits.get(f)) idx.println("     " + h);
                if (size > MAX_FN_BYTES) { idx.println("     [skipped decompile: too large]"); continue; }
                if (done >= MAX_DECOMP)  { idx.println("     [skipped decompile: cap reached]"); continue; }
                String c = "// <fail>\n";
                try {
                    DecompileResults r = dec.decompileFunction(f, 90, monitor);
                    if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC();
                } catch (Exception e) { c = "// <exception " + e + ">\n"; }
                String fname = "fn_" + f.getEntryPoint() + ".c";
                try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/" + fname))) {
                    pw.println("// " + f.getName() + " @ " + f.getEntryPoint() + "  (" + size + " bytes)");
                    pw.println("// reads 0x153 (MoveSpeed forward): " + hasKey.contains(f));
                    pw.println("// field accesses:");
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
