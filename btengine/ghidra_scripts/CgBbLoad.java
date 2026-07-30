// How does the CLIENT load a blackboard's <Parent> chain and duplicate <Var Name>?
//
// Two questions our server has to match exactly:
//   1. <Parent FileName="…"> — does it load the parent FIRST and let the child overwrite, or load the child
//      and only fill gaps from the parent? (Both give the same answer for a clash, but they differ for
//      ordering/type conflicts, and only one is what the client does.)
//   2. Duplicate <Var Name> inside ONE <Vars> list — first-wins or last-wins? monsterblackboard.xml declares
//      MaxWalkSpeed three times (3.8, 3.8, 3), so em003new's walk speed depends on this.
//
// Anchor on the blackboard XML tag strings. They are reached through .rdata pointer slots, so scan for the
// string address inlined in code AND for slots holding it (the CgFgAi lesson).
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;

public class CgBbLoad extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbload";
    // "content" is the giveaway: lowercase, and only the blackboard <Types><Type><content> block uses it.
    static final String[] ANCHORS = { "BlackBoard", "Vars", "Parent", "FileName", "content", "BBVarType" };

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();

        // symbols first — CryGame kept them
        println("=== symbols matching blackboard/bbvar ===");
        for (Function f : fm.getFunctions(true))
            if (f.getName().matches("(?i).*(blackboard|bbvar|bb_var|loadbb).*"))
                println("  " + f.getEntryPoint() + "  " + f.getName());

        // functions that reach each anchor string
        Map<Long, Set<String>> hits = new HashMap<>();
        for (String s : ANCHORS) {
            List<Long> sites = new ArrayList<>();
            for (long a : findExact(s)) {
                sites.addAll(scan(a, true));
                for (long slot : scan(a, false)) sites.addAll(scan(slot, true));
            }
            println("\n=== \"" + s + "\" : " + sites.size() + " code sites ===");
            for (long site : sites) {
                Function h = fm.getFunctionContaining(toAddr(site));
                if (h == null) continue;
                long ep = h.getEntryPoint().getOffset();
                hits.computeIfAbsent(ep, k -> new TreeSet<>()).add(s);
            }
        }

        // rank by how many distinct blackboard tags a function touches — the loader should touch several
        List<Map.Entry<Long, Set<String>>> ranked = new ArrayList<>(hits.entrySet());
        ranked.sort((x, y) -> y.getValue().size() - x.getValue().size());
        println("\n=== candidates, most blackboard tags first ===");
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        int wrote = 0;
        for (var e : ranked) {
            Function f = fm.getFunctionAt(toAddr(e.getKey()));
            if (f == null) continue;
            println(String.format("  %s  %-44s tags=%s  bytes=%d",
                    f.getEntryPoint(), f.getName(), e.getValue(), f.getBody().getNumAddresses()));
            if (e.getValue().size() < 2 || wrote >= 8 || f.getBody().getNumAddresses() > 0x2800) continue;
            try {
                DecompileResults r = dec.decompileFunction(f, 180, monitor);
                if (r != null && r.decompileCompleted()) {
                    String p = OUT + "/" + currentProgram.getName() + "_" + f.getEntryPoint() + ".c";
                    try (PrintWriter pw = new PrintWriter(new FileWriter(p))) {
                        pw.print(r.getDecompiledFunction().getC());
                    }
                    println("      wrote " + p);
                    wrote++;
                }
            } catch (Exception ex) { }
        }
        dec.dispose();
    }

    private List<Long> findExact(String s) {
        List<Long> out = new ArrayList<>();
        DataIterator di = currentProgram.getListing().getDefinedData(true);
        while (di.hasNext() && !monitor.isCancelled()) {
            Data d = di.next();
            Object v = d.getValue();
            if (v instanceof String && v.equals(s)) out.add(d.getAddress().getOffset());
        }
        return out;
    }

    private List<Long> scan(long value, boolean code) {
        List<Long> hits = new ArrayList<>();
        Memory mem = currentProgram.getMemory();
        byte[] needle = { (byte) value, (byte) (value >> 8), (byte) (value >> 16), (byte) (value >> 24) };
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || b.isExecute() != code) continue;
            Address at = b.getStart();
            while (at != null && !monitor.isCancelled()) {
                at = mem.findBytes(at, b.getEnd(), needle, null, true, monitor);
                if (at == null) break;
                hits.add(at.getOffset());
                try { at = at.add(1); } catch (Exception e) { break; }
                if (hits.size() > 96) return hits;
            }
        }
        return hits;
    }
}
