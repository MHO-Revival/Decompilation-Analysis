// Task #98: what does spawnmonstergroupinfo.dat's LevelMin/LevelMax band compare against?
//
// Known: CSpawnMonsterGroupInfo::RollSpawnForLevel 0x116fd440 does the weighted pick but contains NO visible
// band comparison; its candidates are bucketed in a two-level std::map. Its only caller is FUN_116fc4b0, which
// invokes it twice (tier 0 then tier 1) — a strict-then-relaxed pair.
//
// So the question becomes: what does FUN_116fc4b0's caller pass in? Whatever supplies the "level" IS the
// quantity the band is measured against. Walk up the call chain and decompile each step.
//
// Callers are found two ways because TenProtect left most of .text undisassembled: recorded references, and a
// raw scan for a relative CALL (E8 rel32) whose target is the function.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;

public class CgSpawnBand extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/spawnband";

    // Walk up from the roll. Each round's callers become the next round's targets.
    static final long[] SEEDS = {
        0x116fc4b0L,   // the roll's only caller — attempts tier 0 then tier 1
        0x116fd440L,   // CSpawnMonsterGroupInfo::RollSpawnForLevel itself
    };
    static final int ROUNDS = 3;

    Memory mem;
    DecompInterface dec;
    StringBuilder rep = new StringBuilder();
    Set<Long> dumped = new HashSet<>();

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        Set<Long> frontier = new LinkedHashSet<>();
        for (long s : SEEDS) frontier.add(s);

        for (int round = 0; round < ROUNDS && !frontier.isEmpty(); round++) {
            rep.append("=========== round ").append(round).append('\n');
            Set<Long> next = new LinkedHashSet<>();
            for (long target : frontier) {
                rep.append(String.format("--- callers of 0x%08x%n", target));
                for (long caller : callersOf(target)) {
                    Function f = getFunctionContaining(toAddr(caller));
                    if (f == null) {
                        rep.append(String.format("    site 0x%08x  (outside any function)%n", caller));
                        continue;
                    }
                    rep.append(String.format("    site 0x%08x  in %s @ %s%n",
                        caller, f.getName(), f.getEntryPoint()));
                    dump(f);
                    next.add(f.getEntryPoint().getOffset());
                }
            }
            frontier = next;
        }

        write("report.txt", rep.toString());
        println("CgSpawnBand: " + dumped.size() + " functions -> " + OUT);
    }

    List<Long> callersOf(long target) {
        LinkedHashSet<Long> out = new LinkedHashSet<>();
        for (Reference r : currentProgram.getReferenceManager().getReferencesTo(toAddr(target)))
            out.add(r.getFromAddress().getOffset());

        // E8 <rel32> where site + 5 + rel32 == target. Recovers call sites in code Ghidra never disassembled,
        // which is most of this binary.
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || !b.isExecute()) continue;
            long lo = b.getStart().getOffset(), hi = b.getEnd().getOffset();
            for (long site = lo; site + 5 <= hi; site++) {
                try {
                    if ((mem.getByte(toAddr(site)) & 0xFF) != 0xE8) continue;
                    int rel = mem.getInt(toAddr(site + 1));
                    if (site + 5 + rel == target) out.add(site);
                } catch (Exception ignored) { }
            }
        }
        return new ArrayList<>(out);
    }

    void dump(Function f) {
        long ep = f.getEntryPoint().getOffset();
        if (!dumped.add(ep)) return;
        String c;
        try {
            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            c = (r != null && r.getDecompiledFunction() != null)
                ? r.getDecompiledFunction().getC() : "// decompilation produced nothing\n";
        } catch (Exception e) {
            c = "// decompile failed: " + e + "\n";
        }
        write(String.format("%s_%08x.c", f.getName().replaceAll("[^A-Za-z0-9_]", "_"), ep), c);
    }

    void write(String name, String body) {
        try (FileWriter w = new FileWriter(new File(OUT, name))) { w.write(body); }
        catch (Exception e) { println("write failed " + name + ": " + e); }
    }
}
