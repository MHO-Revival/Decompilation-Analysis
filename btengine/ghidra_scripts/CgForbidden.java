// What does the client actually DO with a "ForbiddenArea"? (task #117 challenge)
//
// AreaService now refuses monster steps into ForbiddenArea* polygons on the strength of the NAME plus the fact
// that the literal "ForbiddenArea" appears in CryGame.dll. That is weak: the name could equally belong to a
// camera exclusion, a player boundary, a placement rule for gatherables, or an editor-only annotation. Before
// leaving a movement guard resting on it, read every reference and see what the surrounding code touches.
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

public class CgForbidden extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/forbidden";

    static final String[] LITERALS = {
        "ForbiddenArea", "Forbidden", "AIShape", "NavmeshShape", "areasmission", ".bai",
    };

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
            if (hits.isEmpty()) rep.append("  (no NUL-terminated hit)\n");
            for (long addr : hits) {
                rep.append(String.format("  at 0x%08x  -> \"%s\"%n", addr, readStringAt(addr)));
                List<Long> refs = refsTo(addr);
                if (refs.isEmpty()) rep.append("     (no code reference — data/annotation only)\n");
                for (long site : refs) {
                    Function f = getFunctionContaining(toAddr(site));
                    rep.append(String.format("     ref 0x%08x  %s%n", site,
                            f == null ? "(outside any function)" : f.getName()));
                    if (f != null && dumped.add(f.getEntryPoint().getOffset())) {
                        dump(prog, f);
                        for (Function c : callersOf(f)) {
                            rep.append(String.format("        caller %s @%08x%n",
                                    c.getName(), c.getEntryPoint().getOffset()));
                            if (dumped.add(c.getEntryPoint().getOffset())) dump(prog, c);
                        }
                    }
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + prog + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgForbidden -> " + OUT);
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

    String readStringAt(long addr) {
        StringBuilder s = new StringBuilder();
        try {
            for (int i = 0; i < 96; i++) {
                int c = mem.getByte(toAddr(addr + i)) & 0xff;
                if (c == 0) break;
                if (c < 0x20 || c > 0x7e) return null;
                s.append((char) c);
            }
        } catch (Exception e) { return null; }
        return s.length() == 0 ? null : s.toString();
    }
}
