// Third pass: settle what spawnmonstergroupinfo.dat's LevelMin/LevelMax band is compared AGAINST.
//
// Recovered so far: CSpawnMonsterGroupInfo::ReadConfig reads {MonsterID, SpawnWeight, LevelMin, LevelMax}
// and hands the tuple to FUN_11645210; CSpawnMonsterGroupInfo::RollSpawnForLevel does the weighted pick
// (r = rand/RAND_MAX * totalWeight, walk subtracting weights). Neither shows the band comparison, so it is
// either in the list-insert (bands bucketed at load) or in a filter the roll calls first.
//
// So: decompile that neighbourhood, and list every CALLER of the roll — the caller is what supplies the
// "Level" the roll is for, which is the actual question.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

public class CgSpawnGroup3 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/spawngroup3";

    // The roll, and the helpers it and ReadConfig call around the band fields.
    static final long ROLL = 0x116fd440L;
    static final long[] TARGETS = {
        0x116fd440L,   // CSpawnMonsterGroupInfo::RollSpawnForLevel
        0x11645210L,   // ReadConfig's list insert, given {monsterId, weight, levelMin, levelMax}
        0x116f9600L,   // called in the roll immediately before the weighted walk
        0x116f9500L,   // ditto
        0x116f86a0L,   // called by both the roll and DoSpawnBatch before spawning
        0x116f9310L,   // ReadConfig, around the band read
        0x116fd090L,   // CMHLevelInfo::ValidateSpawnMonsterGroups
        0x116ae000L,   // CMonsterSpawnGroup::DoSpawnBatch
        0x116448e0L,   // CMonsterSpawnGroup::_CheckRespawn
        0x116440b0L,   // EnableSpawner's timer callback
        0x1184a310L, 0x1184a540L, 0x1184a650L,   // the spawn-request builder trio
    };

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        StringBuilder rep = new StringBuilder();

        // Callers of the roll: both recorded references and, since much of the text is not disassembled,
        // a raw scan for a relative CALL to it.
        rep.append("=== callers of RollSpawnForLevel (0x").append(Long.toHexString(ROLL)).append(")\n");
        Address rollAddr = toAddr(ROLL);
        int found = 0;
        for (Reference r : currentProgram.getReferenceManager().getReferencesTo(rollAddr)) {
            Function f = getFunctionContaining(r.getFromAddress());
            rep.append("  ref from ").append(r.getFromAddress())
               .append(f == null ? "  (not in a function)" : "  in " + f.getName() + " @ " + f.getEntryPoint())
               .append('\n');
            found++;
            if (f != null) dump(dec, f, rep);
        }
        if (found == 0) rep.append("  none recorded (text largely undisassembled)\n");
        rep.append('\n');

        for (long t : TARGETS) {
            Function f = getFunctionAt(toAddr(t));
            if (f == null) {
                rep.append(String.format("0x%08x  no function (not disassembled)%n", t));
                continue;
            }
            rep.append(String.format("0x%08x  %s%n", t, f.getName()));
            dump(dec, f, rep);
        }

        write("report.txt", rep.toString());
        println("CgSpawnGroup3 done -> " + OUT);
    }

    Set<Long> done = new HashSet<>();

    void dump(DecompInterface dec, Function f, StringBuilder rep) {
        long ep = f.getEntryPoint().getOffset();
        if (!done.add(ep)) return;
        String c;
        try {
            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            c = (r != null && r.getDecompiledFunction() != null)
                ? r.getDecompiledFunction().getC() : "// decompilation produced nothing\n";
        } catch (Exception e) {
            c = "// decompile failed: " + e + "\n";
        }
        String safe = f.getName().replaceAll("[^A-Za-z0-9_]", "_");
        write(String.format("%s_%08x.c", safe, ep), c);
    }

    void write(String name, String body) {
        try (FileWriter w = new FileWriter(new File(OUT, name))) { w.write(body); }
        catch (Exception e) { println("write failed " + name + ": " + e); }
    }
}
