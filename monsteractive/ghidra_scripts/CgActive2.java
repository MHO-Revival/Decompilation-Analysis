// Stage 2 for CS_CMD_MONSTER_ACTIVE (528/0x210):
//   A) who references the broadcast stub FUN_1061fb40 (router jump-table / callers)
//   B) the listener-list registrar for list offset +0x3f0 (small funcs touching 0x3f0 in the
//      notify-manager region), plus its callers = the SUBSCRIBERS (real handlers)
//   C) callers of the client-side send helper FUN_105e9bf0 (so we know when the client emits 528)
//   D) decompile of the singleton getters used by the send helper
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;

public class CgActive2 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/monsteractive";
    DecompInterface di;
    StringBuilder out = new StringBuilder();

    @Override
    public void run() throws Exception {
        di = new DecompInterface();
        di.openProgram(currentProgram);

        // ---------- A: xrefs to the 0x210 broadcast stub ----------
        sec("A. references to broadcast stub FUN_1061fb40 (@0x1061fb40)");
        xrefReport(0x1061fb40L);

        // ---------- B: registrar for listener list at +0x3f0 ----------
        sec("B. small functions touching offset 0x3f0 in the notify-manager code region");
        List<Function> cands = scanScalar(0x3f0L, 0x10600000L, 0x10680000L, 200);
        for (Function f : cands) dump(f, "  cand");

        // ---------- C: callers of the client send helper ----------
        sec("C. references to send helper FUN_105e9bf0 (@0x105e9bf0)");
        xrefReport(0x105e9bf0L);
        sec("C2. references to thin send wrapper FUN_10603050 (@0x10603050)");
        xrefReport(0x10603050L);

        // ---------- D: singleton getters ----------
        sec("D. singleton getters used by the send helper");
        dump(getFunctionAt(addr(0x10d17440L)), "");
        dump(getFunctionAt(addr(0x10d17870L)), "");

        di.dispose();
        FileWriter w = new FileWriter(new File(OUT, "stage2.txt"));
        w.write(out.toString()); w.close();
        println("wrote stage2.txt (" + out.length() + ")");
    }

    Address addr(long a) { return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(a); }

    void sec(String s) { out.append("\n\n########## ").append(s).append(" ##########\n"); }

    void xrefReport(long target) throws Exception {
        Address a = addr(target);
        ReferenceManager rm = currentProgram.getReferenceManager();
        Set<Function> callers = new LinkedHashSet<>();
        for (Reference r : rm.getReferencesTo(a)) {
            Function f = getFunctionContaining(r.getFromAddress());
            out.append("  from ").append(r.getFromAddress()).append("  ").append(r.getReferenceType())
               .append("  in ").append(f == null ? "-" : f.getName() + "@" + f.getEntryPoint()).append('\n');
            if (f != null) callers.add(f);
        }
        out.append("  (").append(callers.size()).append(" distinct containing funcs)\n");
        for (Function f : callers) if (f.getBody().getNumAddresses() < 4000) dump(f, "  caller");
    }

    List<Function> scanScalar(long val, long lo, long hi, int maxSize) {
        List<Function> res = new ArrayList<>();
        Set<Function> seen = new HashSet<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(addr(lo), true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            if (ins.getAddress().getOffset() > hi) break;
            boolean hit = false;
            for (int i = 0; i < ins.getNumOperands(); i++)
                for (Object o : ins.getOpObjects(i))
                    if (o instanceof Scalar && ((Scalar) o).getUnsignedValue() == val) hit = true;
            if (!hit) continue;
            Function f = getFunctionContaining(ins.getAddress());
            if (f == null || f.getBody().getNumAddresses() > maxSize) continue;
            if (seen.add(f)) res.add(f);
        }
        return res;
    }

    void dump(Function f, String tag) throws Exception {
        if (f == null) { out.append(tag).append(" <null func>\n"); return; }
        out.append("\n// ").append(tag).append(" ===== ").append(f.getName()).append(" @ ")
           .append(f.getEntryPoint()).append(" size=").append(f.getBody().getNumAddresses()).append(" =====\n");
        DecompileResults r = di.decompileFunction(f, 90, monitor);
        if (r != null && r.getDecompiledFunction() != null) out.append(r.getDecompiledFunction().getC());
        else out.append("// DECOMPILE FAILED\n");
    }
}
