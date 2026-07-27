// What does MHMonsterSpawnPoint's SpawnerEnable=0 actually do? (task #97, and the "too many Bulldromes" report)
//
// 3,861 of the 7,009 spawners in the shipped scenes carry SpawnerEnable=0 and 3,148 carry 1. The server
// currently ignores the flag and spawns all of them, which in Bulldrome hunt 100292 puts six 60030 boars
// (Guide_YanYuan_SP_1..6, all SpawnerEnable=0) and one 60032 boar king (Guide_SP, also 0) into the level at
// once, when only the four bee swarms are authored enabled.
//
// Before gating on it, settle what the client does with it: is it "do not spawn at level load, wait to be
// enabled", or something weaker (spawn but stay dormant)? Guessing either way changes what a hunt contains.
// "SpawnerEnable" appears once in each binary, so the xref set is small enough to read in full.
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

public class CgSpawnerEnable extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/spawnerenable";

    static final String[] LITERALS = {
        "SpawnerEnable",
        // The neighbouring spawner fields, to place SpawnerEnable within the same parser and find the runtime
        // that reads whatever it is stored into.
        "FixedMonsterID", "MonsterGroupID", "SpawnAmountMin", "MHMonsterSpawnPoint",
        // Flowgraph ports that would turn a spawner on later, if that is the mechanism.
        "Spawner_DoSpawn", "EnableSpawner", "SpawnerEnabled",
    };
    static final int MAX_PER_LITERAL = 3;

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
        String prog = currentProgram.getName();

        for (String lit : LITERALS) {
            rep.append("======== ").append(prog).append("  \"").append(lit).append("\"\n");
            List<Long> hits = findExact(lit);
            if (hits.isEmpty()) rep.append("  (literal absent)\n");
            for (long addr : hits) {
                rep.append(String.format("  at 0x%08x%n", addr));
                int n = 0;
                for (long site : refsTo(addr)) {
                    Function f = getFunctionContaining(toAddr(site));
                    rep.append(String.format("     ref 0x%08x  %s%n", site,
                            f == null ? "(outside any function)" : f.getName()));
                    if (f != null && n < MAX_PER_LITERAL && dumped.add(f.getEntryPoint().getOffset())) {
                        dump(prog, f);
                        for (Function c : callersOf(f)) {
                            rep.append(String.format("        caller %s @%08x%n",
                                    c.getName(), c.getEntryPoint().getOffset()));
                            if (dumped.add(c.getEntryPoint().getOffset())) dump(prog, c);
                        }
                        n++;
                    }
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + prog + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgSpawnerEnable -> " + OUT);
    }

    List<Function> callersOf(Function f) {
        List<Function> out = new ArrayList<>();
        Set<Long> seen = new HashSet<>();
        for (Reference r : getReferencesTo(f.getEntryPoint())) {
            Function c = getFunctionContaining(r.getFromAddress());
            if (c != null && seen.add(c.getEntryPoint().getOffset())) out.add(c);
            if (out.size() >= 2) break;
        }
        return out;
    }

    List<Long> findExact(String want) {
        List<Long> out = new ArrayList<>();
        byte[] pat = (want + "\0").getBytes();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                out.add(f.getOffset());
                a = f.add(1);
            }
        }
        return out;
    }

    List<Long> refsTo(long target) {
        List<Long> out = new ArrayList<>();
        byte[] pat = {
            (byte) target, (byte) (target >> 8), (byte) (target >> 16), (byte) (target >> 24),
        };
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || !b.isExecute()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                out.add(f.getOffset());
                a = f.add(1);
            }
        }
        return out;
    }

    void dump(String prog, Function f) {
        String c;
        try {
            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            c = (r != null && r.getDecompiledFunction() != null)
                ? r.getDecompiledFunction().getC() : "// decompilation produced nothing\n";
        } catch (Exception e) { c = "// decompile failed: " + e + "\n"; }
        String safe = f.getName().replaceAll("[^A-Za-z0-9_]", "_");
        try (FileWriter w = new FileWriter(new File(OUT,
                prog + "_" + safe + "_" + Long.toHexString(f.getEntryPoint().getOffset()) + ".c"))) {
            w.write(c);
        } catch (Exception e) { println("write failed: " + e); }
    }
}
