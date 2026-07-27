// CgBbApply's vtable scan mis-aligned (a vtable that starts mid-run gets the wrong slot). Attack the
// same question by BEHAVIOUR instead of by vtable position.
//
// A CSBBVarList walker must step the element stride 162 = 0xa2 ((0xa22 - 2) / 16). Sweep every
// instruction in CryGame.dll for the immediate 0xa2 (and 0xa22), group by containing function, and keep
// the ones that also look like a bounded loop (an immediate 0x10 = the 16-element cap, or a switch).
// Decompile the survivors.
//
// Output: /home/fallen/Projets/MHO/decompiled/bbsync/apply2_*.{txt,c}
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.scalar.Scalar;

public class CgBbApply2 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbsync";

    DecompInterface dec;
    FunctionManager fm;

    String decomp(Function f) {
        if (f == null) return "// <no function>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 120, monitor);
            if (r != null && r.getDecompiledFunction() != null) return r.getDecompiledFunction().getC();
        } catch (Exception e) { }
        return "// <decompile failed>\n";
    }

    String fname(Function f) { return f == null ? "?" : f.getName() + "@" + f.getEntryPoint(); }

    static class Info {
        int strideHits, sizeHits, capHits, insns;
        List<String> strideInsns = new ArrayList<>();
    }

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);

        Map<Address, Info> map = new LinkedHashMap<>();
        InstructionIterator ii = currentProgram.getListing().getInstructions(true);
        while (ii.hasNext()) {
            Instruction ins = ii.next();
            Function f = fm.getFunctionContaining(ins.getAddress());
            if (f == null) continue;
            for (int i = 0; i < ins.getNumOperands(); i++) {
                if ((ins.getOperandType(i) & OperandType.SCALAR) == 0) continue;
                Scalar sc = ins.getScalar(i);
                if (sc == null) continue;
                long v = sc.getUnsignedValue();
                if (v != 0xa2 && v != 0xa22 && v != 0x10) continue;
                Info in = map.computeIfAbsent(f.getEntryPoint(), k -> new Info());
                if (v == 0xa2) {
                    String m = ins.getMnemonicString();
                    // only count stride-shaped uses: pointer arithmetic, not a random compare
                    if (m.equals("ADD") || m.equals("LEA") || m.equals("IMUL") || m.equals("SUB")) {
                        in.strideHits++;
                        in.strideInsns.add(ins.getAddress() + "  " + ins.toString());
                    }
                } else if (v == 0xa22) in.sizeHits++;
                else in.capHits++;
            }
        }

        StringBuilder rep = new StringBuilder();
        rep.append("functions touching 0xa2/0xa22/0x10: ").append(map.size()).append("\n\n");
        rep.append("=== functions with a 0xa2 POINTER-STRIDE use ===\n");
        List<Function> cands = new ArrayList<>();
        for (Map.Entry<Address, Info> e : map.entrySet()) {
            Info in = e.getValue();
            if (in.strideHits == 0 && in.sizeHits == 0) continue;
            Function f = fm.getFunctionAt(e.getKey());
            rep.append(String.format("  %-46s stride=%d size0xa22=%d cap16=%d%n",
                    fname(f), in.strideHits, in.sizeHits, in.capHits));
            for (String s : in.strideInsns) rep.append("        ").append(s).append("\n");
            if (f != null) cands.add(f);
        }

        StringBuilder c = new StringBuilder();
        for (Function f : cands) {
            c.append("\n// ===== ").append(fname(f)).append(" =====\n").append(decomp(f));
        }

        FileWriter w = new FileWriter(new File(OUT, "apply2_report.txt")); w.write(rep.toString()); w.close();
        w = new FileWriter(new File(OUT, "apply2_bodies.c")); w.write(c.toString()); w.close();
        println("CgBbApply2 done: " + cands.size() + " candidates");
    }
}
