// Recover the ARGUMENTS passed to FUN_11066f90 (CSkillSequence start) at each call site.
//
// Ghidra's own signature is:
//   int __thiscall FUN_11066f90(int this, int *p2, undefined8 p3, undefined4 p4,
//                              uint p5, float p6, undefined8 p7, undefined4 p8)
// __thiscall ⇒ `this` in ECX, p2..p8 pushed RIGHT-TO-LEFT. Counting dword pushes BACKWARD from the
// CALL: 1=p2, 2..3=p3, 4=p4, 5=p5, 6=p6, 7..8=p7, 9=p8.  ⇒ p6 is the 6th backward push.
// p6 is the blend window (stored to +0xc4 as p6*1000.0 ⇒ seconds), which is what we need to identify.
//
// Dumps raw disassembly before each call so the push chain (and any field loads feeding it) is visible,
// and decompiles each caller with the signature applied so the args appear symbolically.
// @category MHO
import java.io.*;
import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgCallArgs extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/splinelunge";
    static final long TARGET = 0x11066f90L;
    static final int LOOKBACK = 60;   // instructions of context before each call

    @Override public void run() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing lst = currentProgram.getListing();
        StringBuilder sb = new StringBuilder();
        sb.append("# Call sites of FUN_11066f90 with argument setup\n");
        sb.append("# p6 = 6th dword PUSH counting backward from the CALL (see script header)\n\n");

        List<Address> sites = new ArrayList<>();
        for (Reference r : getReferencesTo(toAddr(TARGET)))
            if (r.getReferenceType().isCall()) sites.add(r.getFromAddress());
        sb.append("call sites: " + sites.size() + "\n");

        for (Address call : sites) {
            Function caller = fm.getFunctionContaining(call);
            sb.append("\n================ CALL at " + call + "  in " +
                      (caller == null ? "<none>" : caller.getName() + " @ " + caller.getEntryPoint()) + "\n");

            // walk backwards collecting instructions
            LinkedList<Instruction> back = new LinkedList<>();
            Instruction ins = lst.getInstructionAt(call);
            for (int i = 0; i < LOOKBACK && ins != null; i++) {
                ins = lst.getInstructionBefore(ins.getAddress());
                if (ins == null) break;
                if (caller != null && !caller.getBody().contains(ins.getAddress())) break;
                back.addFirst(ins);
            }
            int pushIdx = 0;
            // number the pushes backward so p6 can be identified
            Map<Address,Integer> pushNo = new HashMap<>();
            for (int i = back.size() - 1; i >= 0; i--) {
                Instruction x = back.get(i);
                if (x.getMnemonicString().toUpperCase().startsWith("PUSH")) pushNo.put(x.getAddress(), ++pushIdx);
            }
            for (Instruction x : back) {
                Integer n = pushNo.get(x.getAddress());
                String tag = n == null ? "      " : String.format(" [p#%-2d]", n);
                String note = (n != null && n == 6) ? "   <<<<<< param_6 (blend window, seconds)" : "";
                sb.append(String.format("  %s%s  %-42s%s\n", x.getAddress(), tag, x.toString(), note));
            }
            sb.append("  " + call + "        " + lst.getInstructionAt(call) + "   <-- CALL\n");
        }

        // decompile every caller too (signature is known, so args should render)
        DecompInterface dec = new DecompInterface(); dec.openProgram(currentProgram);
        Set<Long> done = new HashSet<>();
        for (Address call : sites) {
            Function caller = fm.getFunctionContaining(call);
            if (caller == null || !done.add(caller.getEntryPoint().getOffset())) continue;
            try {
                DecompileResults r = dec.decompileFunction(caller, 180, monitor);
                if (r != null && r.decompileCompleted()) {
                    String p = OUT + "/argcaller_" + caller.getEntryPoint() + ".c";
                    try (PrintWriter pw = new PrintWriter(new FileWriter(p))) { pw.print(r.getDecompiledFunction().getC()); }
                    println("wrote " + p);
                }
            } catch (Exception e) { println("decomp fail " + caller.getEntryPoint() + ": " + e); }
        }
        dec.dispose();

        try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/_CALLARGS.txt"))) { pw.print(sb); }
        println("wrote " + OUT + "/_CALLARGS.txt");
    }
}
