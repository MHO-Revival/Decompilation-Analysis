// Stage 3: the SUBSCRIBERS of cmd 0x210 (CS_CMD_MONSTER_ACTIVE).
//  A) xrefs to FUN_106436e0 (facade Register-listener-for-0x210) and FUN_1061fb10 (raw insert)
//  B) the send-helper family (0x105e9bf0 vs known Send640/641/648) for shape comparison
//  C) the call site 0x105c5c71 context (function containing it)
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;

public class CgActive3 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/monsteractive";
    DecompInterface di;
    StringBuilder out = new StringBuilder();

    @Override
    public void run() throws Exception {
        di = new DecompInterface();
        di.openProgram(currentProgram);

        sec("A1. xrefs to FUN_106436e0 (facade register-0x210-listener)");
        xrefReport(0x106436e0L, true);
        sec("A2. xrefs to FUN_1061fb10 (raw +0x3f0 list insert)");
        xrefReport(0x1061fb10L, true);

        sec("B. send-helper family shape comparison");
        for (long a : new long[]{0x105e9bf0L, 0x105eb7c0L, 0x105eb800L, 0x105eb9c0L}) dump(getFunctionAt(addr(a)), "send");

        sec("C. context of call site 0x105c5c71");
        Function f = getFunctionContaining(addr(0x105c5c71L));
        out.append("containing func: ").append(f == null ? "-" : f.getName() + "@" + f.getEntryPoint()
                + " size=" + f.getBody().getNumAddresses()).append('\n');
        // raw disassembly window around the call site
        Listing l = currentProgram.getListing();
        Address a = addr(0x105c5be0L);
        for (int i = 0; i < 90; i++) {
            Instruction ins = l.getInstructionAt(a);
            if (ins == null) break;
            out.append(String.format("  %s  %s%n", ins.getAddress(), ins));
            a = ins.getAddress().add(ins.getLength());
        }
        if (f != null) dump(f, "site");

        di.dispose();
        FileWriter w = new FileWriter(new File(OUT, "stage3.txt"));
        w.write(out.toString()); w.close();
        println("wrote stage3.txt (" + out.length() + ")");
    }

    Address addr(long a) { return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(a); }
    void sec(String s) { out.append("\n\n########## ").append(s).append(" ##########\n"); }

    void xrefReport(long target, boolean decompCallers) throws Exception {
        ReferenceManager rm = currentProgram.getReferenceManager();
        Set<Function> callers = new LinkedHashSet<>();
        for (Reference r : rm.getReferencesTo(addr(target))) {
            Function f = getFunctionContaining(r.getFromAddress());
            out.append("  from ").append(r.getFromAddress()).append("  ").append(r.getReferenceType())
               .append("  in ").append(f == null ? "-" : f.getName() + "@" + f.getEntryPoint()
                       + " size=" + f.getBody().getNumAddresses()).append('\n');
            if (f != null) callers.add(f);
        }
        out.append("  (").append(callers.size()).append(" distinct funcs)\n");
        if (decompCallers) for (Function f : callers) if (f.getBody().getNumAddresses() < 6000) dump(f, "caller");
    }

    void dump(Function f, String tag) throws Exception {
        if (f == null) { out.append(tag).append(" <null>\n"); return; }
        out.append("\n// ").append(tag).append(" ===== ").append(f.getName()).append(" @ ")
           .append(f.getEntryPoint()).append(" size=").append(f.getBody().getNumAddresses()).append(" =====\n");
        DecompileResults r = di.decompileFunction(f, 120, monitor);
        out.append(r != null && r.getDecompiledFunction() != null ? r.getDecompiledFunction().getC() : "// FAILED\n");
    }
}
