// Recovers the semantics of common/staticdata/spawnmonstergroupinfo.dat's columns.
//
// The decoded sheet is SpawnMonsterGroupInfo{ID, Name, LevelMode, Difficulty, MonsterID, SpawnWeight,
// LevelMin, LevelMax}. SpawnWeight has 12 distinct values and LevelMin 21, so both are live selection
// inputs — but "Level" is ambiguous from the data alone (player level? hunter rank? a level id?), and
// guessing it would put an invented rule in the spawner. The column-name literals survive in CryGame.dll,
// so the loader that binds them, and the comparison that consumes them, are recoverable.
//
// Strategy: locate each column-name literal, walk references to it, and decompile every referencing
// function. The binder tells us the struct layout; whatever compares the LevelMin field tells us what it
// is compared AGAINST, which is the actual question.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;

public class CgSpawnGroup extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/spawngroup";

    // Searched as NUL-terminated ASCII. Ordered most- to least-specific: the sheet name should land on the
    // loader directly, the column names on the field binder and its consumers.
    static final String[] NEEDLES = {
        "SpawnMonsterGroupInfo",
        "spawnmonstergroupinfo",
        "LevelMin", "LevelMax", "SpawnWeight", "LevelMode", "Difficulty",
        "MonsterGroupID", "FixedMonsterID",
        "SpawnAmountMin", "SpawnAmountMax",
    };

    Memory mem;
    DecompInterface dec;
    StringBuilder rep = new StringBuilder();
    Set<Long> decompiled = new HashSet<>();

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        rep.append("program: ").append(currentProgram.getName()).append('\n');
        rep.append("base:    ").append(currentProgram.getImageBase()).append("\n\n");

        for (String needle : NEEDLES) {
            List<Address> hits = findAscii(needle);
            rep.append("=== \"").append(needle).append("\"  ").append(hits.size()).append(" occurrence(s)\n");
            for (Address at : hits) {
                rep.append("  @ ").append(at).append('\n');
                // Direct references first; these are the ones an analysed binary records.
                ReferenceManager rm = currentProgram.getReferenceManager();
                int refs = 0;
                for (Reference r : rm.getReferencesTo(at)) {
                    Address from = r.getFromAddress();
                    Function f = getFunctionContaining(from);
                    rep.append("     ref from ").append(from)
                       .append(f == null ? "   (no function — not disassembled)" : "   in " + f.getName() + " @ " + f.getEntryPoint())
                       .append('\n');
                    refs++;
                    if (f != null) queue(f);
                }
                // TenProtect leaves much of the text section undisassembled, so a zero-reference string is
                // normally "nothing was analysed here", not "nothing uses it". Scan the raw text for the
                // literal's address as an immediate to recover those sites.
                if (refs == 0) {
                    rep.append("     no recorded references; scanning text for the immediate\n");
                    for (Address site : scanForImmediate(at.getOffset())) {
                        Function f = getFunctionContaining(site);
                        rep.append("     immediate at ").append(site)
                           .append(f == null ? "   (outside any function)" : "   in " + f.getName() + " @ " + f.getEntryPoint())
                           .append('\n');
                        if (f != null) queue(f);
                    }
                }
            }
            rep.append('\n');
        }

        write("report.txt", rep.toString());
        println("CgSpawnGroup: " + decompiled.size() + " functions decompiled -> " + OUT);
    }

    void queue(Function f) {
        long ep = f.getEntryPoint().getOffset();
        if (!decompiled.add(ep)) return;
        try {
            DecompileResults r = dec.decompileFunction(f, 120, monitor);
            String c = (r != null && r.getDecompiledFunction() != null)
                ? r.getDecompiledFunction().getC() : "// decompilation produced nothing\n";
            write(String.format("fn_%08x.c", ep), c);
        } catch (Exception e) {
            write(String.format("fn_%08x.c", ep), "// decompile failed: " + e + "\n");
        }
    }

    List<Address> findAscii(String s) {
        List<Address> out = new ArrayList<>();
        byte[] pat = new byte[s.length() + 1];
        for (int i = 0; i < s.length(); i++) pat[i] = (byte) s.charAt(i);
        pat[s.length()] = 0;
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address found = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (found == null) break;
                out.add(found);
                a = found.add(1);
            }
        }
        return out;
    }

    // Little-endian 4-byte immediate equal to `value`, anywhere in an executable block.
    List<Address> scanForImmediate(long value) {
        List<Address> out = new ArrayList<>();
        byte[] pat = {
            (byte) (value & 0xFF), (byte) ((value >> 8) & 0xFF),
            (byte) ((value >> 16) & 0xFF), (byte) ((value >> 24) & 0xFF),
        };
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || !b.isExecute()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address found = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (found == null) break;
                out.add(found);
                if (out.size() > 40) return out;   // a hot literal; the first 40 sites are plenty
                a = found.add(1);
            }
        }
        return out;
    }

    void write(String name, String body) {
        try (FileWriter w = new FileWriter(new File(OUT, name))) { w.write(body); }
        catch (Exception e) { println("write failed " + name + ": " + e); }
    }
}
