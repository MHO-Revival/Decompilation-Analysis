// Trace the blend-window argument ONE HOP UP.
//
// Established by manual stack decode (Ghidra's signatures on this chain are wrong, so the decompiler's
// rendered args cannot be trusted):
//   FUN_11066f90(this, p2, p3:8, p4, p5, p6:float, p7:8, p8)   -- 36 bytes of stack args
//   * call 10b32f6c : p6 = literal 0.0
//   * call 11077f14 : p6 = [EBP+0x1c] = FUN_11077e10's own 6th stack arg  <-- forwarded, trace it
//
// So dump the arg setup at every call to FUN_11077e10 to see what its 6th stack dword is.
// Raw disassembly only (no push numbering — struct args are passed via SUB ESP + MOV, not PUSH).
// @category MHO
import java.io.*;
import java.util.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgUpHop extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/splinelunge";
    static final long[] TARGETS = { 0x11077e10L };
    static final int LOOKBACK = 90;

    @Override public void run() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing lst = currentProgram.getListing();
        StringBuilder sb = new StringBuilder();

        for (long t : TARGETS) {
            Address tgt = toAddr(t);
            Function tf = fm.getFunctionAt(tgt);
            sb.append("############ callers of " + tgt + " (" + (tf == null ? "?" : tf.getName()) + ")\n");
            List<Address> sites = new ArrayList<>();
            for (Reference r : getReferencesTo(tgt))
                if (r.getReferenceType().isCall()) sites.add(r.getFromAddress());
            sb.append("call sites: " + sites.size() + "\n");

            for (Address call : sites) {
                Function caller = fm.getFunctionContaining(call);
                sb.append("\n==== CALL at " + call + " in " +
                          (caller == null ? "<none>" : caller.getName() + " @ " + caller.getEntryPoint()) + "\n");
                LinkedList<Instruction> back = new LinkedList<>();
                Instruction ins = lst.getInstructionAt(call);
                for (int i = 0; i < LOOKBACK && ins != null; i++) {
                    ins = lst.getInstructionBefore(ins.getAddress());
                    if (ins == null) break;
                    if (caller != null && !caller.getBody().contains(ins.getAddress())) break;
                    back.addFirst(ins);
                }
                for (Instruction x : back) sb.append("   " + x.getAddress() + "   " + x + "\n");
                sb.append("   " + call + "   " + lst.getInstructionAt(call) + "   <-- CALL\n");
            }
        }
        try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/_UPHOP.txt"))) { pw.print(sb); }
        println("wrote " + OUT + "/_UPHOP.txt");
    }
}
