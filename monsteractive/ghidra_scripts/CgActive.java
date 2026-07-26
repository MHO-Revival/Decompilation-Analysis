// Find the CryGame client-side path for CS_CMD_MONSTER_ACTIVE (528 / 0x210, CSMonsterActiveState).
//
// The notify router (NetMsgNotifyDispatch_grp0 @0x1065ede0) dispatches by cmd id to a per-cmd
// broadcast stub that walks a listener list and calls listener->vtbl[3](cmd, body). Each stub
// hardcodes its own cmd id as an immediate, so scanning for the scalar 0x210 finds:
//   - the broadcast stub (PUSH 0x210 then CALL [reg+0xc])
//   - any sender / comparison site
// Outputs: hits.tsv (every instruction referencing 0x210 with its function) + decompiled C for
// each distinct containing function.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;

public class CgActive extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/monsteractive";
    static final long TARGET = 0x210L;   // 528

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        StringBuilder tsv = new StringBuilder("#insnAddr\tfunc\tfuncName\tfuncSize\tmnemonic\ttext\n");
        LinkedHashMap<Function, List<String>> byFunc = new LinkedHashMap<>();

        Listing listing = currentProgram.getListing();
        InstructionIterator it = listing.getInstructions(true);
        int scanned = 0;
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            scanned++;
            boolean hit = false;
            for (int i = 0; i < ins.getNumOperands(); i++) {
                Object[] objs = ins.getOpObjects(i);
                for (Object o : objs) {
                    if (o instanceof Scalar && ((Scalar) o).getUnsignedValue() == TARGET) { hit = true; }
                }
            }
            if (!hit) continue;
            Function f = getFunctionContaining(ins.getAddress());
            String fn = f == null ? "-" : f.getName();
            String fa = f == null ? "-" : f.getEntryPoint().toString();
            long fs = f == null ? 0 : f.getBody().getNumAddresses();
            tsv.append(ins.getAddress()).append('\t').append(fa).append('\t').append(fn)
               .append('\t').append(fs).append('\t').append(ins.getMnemonicString())
               .append('\t').append(ins.toString()).append('\n');
            if (f != null) byFunc.computeIfAbsent(f, k -> new ArrayList<>()).add(ins.getAddress() + " " + ins);
        }
        println("scanned insns: " + scanned + "  hit funcs: " + byFunc.size());
        write("hits.tsv", tsv.toString());

        // Decompile every containing function (small ones first: the stubs)
        List<Function> fns = new ArrayList<>(byFunc.keySet());
        fns.sort(Comparator.comparingLong(f -> f.getBody().getNumAddresses()));
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        StringBuilder all = new StringBuilder();
        int n = 0;
        for (Function f : fns) {
            if (n++ > 120) break;
            all.append("\n\n// ===== ").append(f.getName()).append(" @ ").append(f.getEntryPoint())
               .append("  size=").append(f.getBody().getNumAddresses()).append(" =====\n");
            for (String s : byFunc.get(f)) all.append("//   hit: ").append(s).append('\n');
            DecompileResults r = di.decompileFunction(f, 90, monitor);
            if (r != null && r.getDecompiledFunction() != null) all.append(r.getDecompiledFunction().getC());
            else all.append("// DECOMPILE FAILED\n");
        }
        di.dispose();
        write("hits.c", all.toString());
        println("done");
    }

    void write(String name, String s) throws Exception {
        FileWriter w = new FileWriter(new File(OUT, name));
        w.write(s); w.close();
        println("wrote " + name + " (" + s.length() + " bytes)");
    }
}
