// Who performs a region switch? (task #116)
//
// Established already: SwitchRegionTrigger entities are box volumes whose own RegionId is the SOURCE region
// (232/232 of the named ones), their Lua is a generic enter/leave trigger with no destination logic, and the
// destination is in NONE of the data — not the entity properties, not ProximityTrigger's empty
// SwitchRegionDestination, not level_config_tokens, not the flowgraph (105 trigger nodes, only 16 with any
// outgoing edge and those go to MHDelay/Logic:Any drama). So the rule is native code.
//
// Find it: xref the literals and decompile every function that touches them.
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

public class CgRegionSwitch extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/regionswitch";
    static final String[] LITERALS = {
        "SwitchRegionTrigger", "CurrentRegionID", "currentRegionID", "SwitchRegionDestination",
    };
    static final int MAX_DECOMPILE = 8;   // per literal

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

        // CMHLevel::ParseLevelEntities dispatches by EntityClass; these are the per-class definition parsers
        // it calls. FUN_118a3270 is the SwitchRegionTrigger one — the analogue of FUN_118a2e90, which turned
        // out to parse the PLAYER level-transition record (SwitchRegionDestination sits there beside
        // levelinfoDestinationLevel and RequiredPlayerLevel), not the monster region switch.
        for (long addr : new long[] { 0x118a3270L, 0x118a3b90L, 0x118a3820L }) {
            Function f = getFunctionContaining(toAddr(addr));
            if (f == null) { rep.append(String.format("no fn at %08x%n", addr)); continue; }
            rep.append(String.format("==== explicit %08x -> %s%n", addr, f.getName()));
            if (dumped.add(f.getEntryPoint().getOffset())) dump(prog, f);
        }

        for (String lit : LITERALS) {
            rep.append("======== ").append(prog).append("  \"").append(lit).append("\"\n");
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
        println("CgRegionSwitch -> " + OUT);
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
