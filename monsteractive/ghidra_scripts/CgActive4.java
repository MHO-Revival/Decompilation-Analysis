// Stage 4: does ANYTHING subscribe to the cmd-0x210 (528 MONSTER_ACTIVE) listener list?
//
// The notify manager keeps one intrusive doubly-linked list head per command at a fixed offset
// (0x210 -> mgr+0x3f0, seen in broadcast stub FUN_1061fb40). Registration is an inline insert that
// touches BOTH head (+off) and tail (+off+4). So: scan the WHOLE binary for functions referencing
// both immediates, for the 528 list AND for the known-live 640/641/648 lists as a control.
// Then report xrefs of every match, so we can tell "registered by someone" from "dead channel".
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

public class CgActive4 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/monsteractive";
    // listName, headOffset, cmd
    static final Object[][] LISTS = {
        {"cmd0x210_MONSTER_ACTIVE", 0x3f0L, 0x210L},
        {"cmd0x280_640",            0x568L, 0x280L},
        {"cmd0x281_641",            0x570L, 0x281L},
        {"cmd0x288_648",            0x5e0L, 0x288L},
    };
    DecompInterface di;
    StringBuilder out = new StringBuilder();

    @Override
    public void run() throws Exception {
        di = new DecompInterface();
        di.openProgram(currentProgram);

        // one pass over all instructions, bucketing per function which of our immediates appear
        Map<Function, Set<Long>> hits = new HashMap<>();
        Set<Long> wanted = new HashSet<>();
        for (Object[] L : LISTS) { wanted.add((Long) L[1]); wanted.add((Long) L[1] + 4); }
        InstructionIterator it = currentProgram.getListing().getInstructions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Instruction ins = it.next();
            for (int i = 0; i < ins.getNumOperands(); i++)
                for (Object o : ins.getOpObjects(i))
                    if (o instanceof Scalar) {
                        long v = ((Scalar) o).getUnsignedValue();
                        if (wanted.contains(v)) {
                            Function f = getFunctionContaining(ins.getAddress());
                            if (f != null) hits.computeIfAbsent(f, k -> new TreeSet<>()).add(v);
                        }
                    }
        }
        println("functions touching any wanted immediate: " + hits.size());

        for (Object[] L : LISTS) {
            String name = (String) L[0]; long off = (Long) L[1];
            out.append("\n\n=====================================================================\n");
            out.append("### ").append(name).append("  head=+0x").append(Long.toHexString(off))
               .append("  tail=+0x").append(Long.toHexString(off + 4)).append('\n');
            List<Function> matches = new ArrayList<>();
            for (Map.Entry<Function, Set<Long>> e : hits.entrySet())
                if (e.getValue().contains(off) && e.getValue().contains(off + 4)) matches.add(e.getKey());
            matches.sort(Comparator.comparingLong(f -> f.getEntryPoint().getOffset()));
            out.append("candidate registrars (touch head AND tail): ").append(matches.size()).append('\n');
            for (Function f : matches) {
                out.append("  - ").append(f.getName()).append(" @").append(f.getEntryPoint())
                   .append(" size=").append(f.getBody().getNumAddresses()).append('\n');
                int nref = 0;
                for (Reference r : currentProgram.getReferenceManager().getReferencesTo(f.getEntryPoint())) {
                    Function cf = getFunctionContaining(r.getFromAddress());
                    out.append("      ref from ").append(r.getFromAddress()).append(' ')
                       .append(r.getReferenceType()).append(" in ")
                       .append(cf == null ? "-" : cf.getName() + "@" + cf.getEntryPoint()).append('\n');
                    nref++;
                }
                out.append("      total refs: ").append(nref).append('\n');
            }
            for (Function f : matches) if (f.getBody().getNumAddresses() < 3000) dump(f);
        }

        di.dispose();
        FileWriter w = new FileWriter(new File(OUT, "stage4.txt"));
        w.write(out.toString()); w.close();
        println("wrote stage4.txt (" + out.length() + ")");
    }

    void dump(Function f) throws Exception {
        out.append("\n// ===== ").append(f.getName()).append(" @ ").append(f.getEntryPoint())
           .append(" size=").append(f.getBody().getNumAddresses()).append(" =====\n");
        DecompileResults r = di.decompileFunction(f, 120, monitor);
        out.append(r != null && r.getDecompiledFunction() != null ? r.getDecompiledFunction().getC() : "// FAILED\n");
    }
}
