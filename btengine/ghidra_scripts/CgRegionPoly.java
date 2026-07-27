// Round 2 on <RegionsInfo>: the per-<Region> parser and the region-manager API around it (task #116).
//
// Round 1 (CgRegionsInfo) found the reader: CryAction!FUN_108aa350, called by the level loader FUN_108a4430
// immediately after it handles <Objects>. It walks <Regions>, and for each child calls
//     mgr->vtbl[4]()            // make a region slot
//     FUN_108aa230(&node)       // <-- parse THIS <Region> element
// then walks <ClimateSetting>, matching <Climate ID> against game+0x80 and <LevelTime ID> against game+0x84,
// and applies Weather/SoundEventValue per RegionID through mgr->vtbl[2](id).
//
// What is still open, and only the parser answers:
//   - which attributes a <Region> actually consumes (ID/Type/Height are authored; are all three read?)
//   - whether <Point pos> is stored as-is (absolute world) — the data says yes, the code should confirm
//   - whether Height becomes a Z extent anywhere, given 180 of 215 shipped regions declare Height="0"
//
// So: dump the parser, everything it calls, and everything that calls it — the containment test lives on the
// same object as the storage.
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
import ghidra.program.model.symbol.Reference;

public class CgRegionPoly extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/regionsinfo";

    // FUN_108aa230 is the <Region> parser; FUN_108aa350 its caller, re-dumped so the pair reads together.
    static final long[] SEEDS = { 0x108aa230L, 0x108aa350L };

    DecompInterface dec;
    StringBuilder rep = new StringBuilder();
    Set<Long> dumped = new HashSet<>();

    @Override
    public void run() throws Exception {
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        String prog = currentProgram.getName();

        for (long seed : SEEDS) {
            Function f = getFunctionContaining(toAddr(seed));
            if (f == null) { rep.append(String.format("no fn at %08x%n", seed)); continue; }
            rep.append(String.format("==== seed %08x -> %s%n", seed, f.getName()));
            dump(prog, f);

            rep.append("  -- callees --\n");
            for (Function c : calleesOf(f)) {
                rep.append(String.format("     %s @%08x%n", c.getName(), c.getEntryPoint().getOffset()));
                dump(prog, c);
            }
            rep.append("  -- callers --\n");
            for (Reference r : getReferencesTo(f.getEntryPoint())) {
                Function c = getFunctionContaining(r.getFromAddress());
                if (c == null) continue;
                rep.append(String.format("     %s @%08x%n", c.getName(), c.getEntryPoint().getOffset()));
                dump(prog, c);
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_poly_" + prog + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgRegionPoly -> " + OUT);
    }

    /** Direct call targets, deduplicated, in address order. Skips the giant CRT helpers by name. */
    List<Function> calleesOf(Function f) {
        var out = new ArrayList<Function>();
        var seen = new HashSet<Long>();
        for (Instruction insn = getInstructionAt(f.getEntryPoint());
             insn != null && f.getBody().contains(insn.getAddress());
             insn = insn.getNext()) {
            if (!insn.getMnemonicString().startsWith("CALL")) continue;
            for (Address a : insn.getFlows()) {
                Function c = getFunctionAt(a);
                if (c == null || c.isThunk()) continue;
                if (!seen.add(c.getEntryPoint().getOffset())) continue;
                out.add(c);
            }
        }
        return out;
    }

    void dump(String prog, Function f) {
        if (!dumped.add(f.getEntryPoint().getOffset())) return;
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
