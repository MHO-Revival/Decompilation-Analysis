// Find the functions that touch a set of STRUCT FIELD offsets, ranked by how many of them they touch.
//
// Why: a class whose RTTI was stripped can still be tracked through its fields. RegisterBlackboardKeys caches
// each blackboard key's HANDLE in a fixed field (HitPart -> +0x228, HitDirSim -> +0x244, ...), so the code that
// WRITES those keys must read those fields — and a function reading several of them at once is the hit publisher.
// String xrefs cannot find it, because after registration the engine addresses keys by handle, not by name.
//
//   -postScript CgFieldUsers.java 0x244 0x240 0x228 0x230
//
// Prints every function referencing >= 2 of the given displacements (and always those referencing the FIRST one),
// with the count, so the ranking is visible rather than implied.
// @category MHO
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.scalar.Scalar;

public class CgFieldUsers extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) { println("usage: CgFieldUsers <hexOffset> [more...]"); return; }

        var wanted = new LinkedHashSet<Long>();
        for (String a : args) wanted.add(Long.parseLong(a.replace("0x", ""), 16));
        long primary = wanted.iterator().next();

        var hits = new HashMap<Function, Set<Long>>();
        var it = currentProgram.getListing().getInstructions(true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            for (int op = 0; op < ins.getNumOperands(); op++) {
                Object[] objs = ins.getOpObjects(op);
                // A FIELD access is `[REG + disp]` — register AND scalar in the same operand. Requiring both is
                // what separates a struct field from an unrelated immediate like `PUSH 0x244`, which is why an
                // earlier version of this returned every function in the binary.
                boolean hasReg = false;
                Long disp = null;
                for (Object o : objs) {
                    if (o instanceof ghidra.program.model.lang.Register) hasReg = true;
                    else if (o instanceof Scalar s && wanted.contains(s.getUnsignedValue())) disp = s.getUnsignedValue();
                }
                if (!hasReg || disp == null) continue;
                Function f = getFunctionContaining(ins.getAddress());
                if (f == null) continue;
                hits.computeIfAbsent(f, k -> new TreeSet<>()).add(disp);
            }
        }

        var ranked = new ArrayList<>(hits.entrySet());
        ranked.sort((a, b) -> b.getValue().size() - a.getValue().size());
        int shown = 0;
        for (var e : ranked) {
            boolean interesting = e.getValue().size() >= 2 || e.getValue().contains(primary);
            if (!interesting) continue;
            var offs = new StringBuilder();
            for (long v : e.getValue()) offs.append(String.format("0x%x ", v));
            println(String.format("%s  %s (%d bytes)  [%d: %s]",
                    e.getKey().getEntryPoint(), e.getKey().getName(),
                    e.getKey().getBody().getNumAddresses(), e.getValue().size(), offs.toString().trim()));
            if (++shown >= 60) { println("… truncated at 60"); break; }
        }
        if (shown == 0) println("no function references those offsets (or the code was never disassembled)");
    }
}
