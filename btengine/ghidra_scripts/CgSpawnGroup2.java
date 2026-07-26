// Second pass on the spawner logic. CryGame.dll kept its function symbols (CMonsterSpawnGroupEntry::ParseXml,
// MHMonsterSpawnPoint::ParseEntity, SpawnMonsterGroupInfo::GetTypeDescriptor all came back named), so
// enumerating symbols by name is far cheaper than walking string references — and it reaches the functions
// whose string references were never disassembled.
//
// The open question this is for: spawnmonstergroupinfo.dat has LevelMin/LevelMax bands and SpawnWeight
// weights that demonstrably vary, but the table alone does not say what the band is compared against. The
// selection function is what settles it.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;
import java.util.regex.Pattern;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class CgSpawnGroup2 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/spawngroup2";

    // Listed (name only) — wide, to see what the binary actually calls things.
    static final Pattern LIST = Pattern.compile(
        "spawn|monstergroup|grouppool|randommonster", Pattern.CASE_INSENSITIVE);

    // Decompiled in full — the ones that plausibly SELECT a monster or read the group table.
    static final Pattern DEEP = Pattern.compile(
        "SpawnMonsterGroupInfo|MonsterSpawnGroup|SpawnGroup|GetRandomMonster|RandomMonster"
      + "|DoSpawn|Spawner_|SelectMonster|PickMonster|SpawnMonster",
        Pattern.CASE_INSENSITIVE);

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);

        StringBuilder names = new StringBuilder();
        List<Function> deep = new ArrayList<>();
        int total = 0, listed = 0;

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            total++;
            String n = f.getName();
            if (!LIST.matcher(n).find()) continue;
            listed++;
            names.append(f.getEntryPoint()).append('\t').append(n).append('\n');
            if (DEEP.matcher(n).find()) deep.add(f);
        }

        write("functions.tsv", names.toString());
        println("CgSpawnGroup2: " + listed + " spawn-related of " + total + " functions; decompiling " + deep.size());

        for (Function f : deep) {
            String c;
            try {
                DecompileResults r = dec.decompileFunction(f, 180, monitor);
                c = (r != null && r.getDecompiledFunction() != null)
                    ? r.getDecompiledFunction().getC() : "// decompilation produced nothing\n";
            } catch (Exception e) {
                c = "// decompile failed: " + e + "\n";
            }
            String safe = f.getName().replaceAll("[^A-Za-z0-9_]", "_");
            write(String.format("%s_%08x.c", safe, f.getEntryPoint().getOffset()), c);
        }
        println("done -> " + OUT);
    }

    void write(String name, String body) {
        try (FileWriter w = new FileWriter(new File(OUT, name))) { w.write(body); }
        catch (Exception e) { println("write failed " + name + ": " + e); }
    }
}
