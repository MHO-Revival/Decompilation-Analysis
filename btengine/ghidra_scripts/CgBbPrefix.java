// What does monsterdata's "BB:" column prefix map to? (task #112)
//
// monsterdata.tsv's Monsters sheet has two columns named "BB:InitState" and "BB:MaxHealth". "BB:MaxHealth"
// clearly seeds the blackboard key MaxHealth, which exists. "BB:InitState" is the problem: NO blackboard
// variable named InitState exists in any shipped tree, while a variable named State does (Type="String"
// Value="None"), and the conventionally-named node "SetInitState" writes KeyName="State". So the column
// probably seeds State, not InitState — but "probably" is not good enough to bake into the seeder.
//
// Both CryGame.dll and CryAction.dll contain the literal "BB:". Decompile whatever references it: that code
// is the client's own column-name -> blackboard-key mapping, and it settles whether the prefix is simply
// stripped (giving key "InitState") or the name is translated.
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

public class CgBbPrefix extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbprefix";
    static final String[] LITERALS = { "BB:", "InitState" };
    static final int MAX_DECOMPILE = 8;

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
            rep.append("======== ").append(prog).append("  literal \"").append(lit).append("\"\n");
            for (long addr : findExact(lit)) {
                rep.append(String.format("  at 0x%08x%n", addr));
                int n = 0;
                for (long site : refsTo(addr)) {
                    Function f = getFunctionContaining(toAddr(site));
                    rep.append(String.format("     ref 0x%08x  %s%n", site,
                            f == null ? "(outside any function)" : f.getName()));
                    if (f != null && n < MAX_DECOMPILE && dumped.add(f.getEntryPoint().getOffset())) {
                        dump(prog, f);
                        n++;
                    }
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + prog + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgBbPrefix -> " + OUT);
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
