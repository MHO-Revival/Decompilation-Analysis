// The <RegionsInfo> block of mission_mission0.xml — the real region definition (task #116).
//
// Every one of the 46 mission XMLs carries, as a sibling of <Objects>:
//   <RegionsInfo>
//     <Regions><Region ID="6" Type="1" Height="30"><Points><Point pos="x,y,z"/>...
//     <ClimateSetting><Climate Name ID><LevelTime Name ID><RegionWeather RegionID Weather SoundEventValue/>
// We had been approximating regions from AudioShape_Region_N entities (19 of 46 scenes). This is the
// authored source, 46/46. What the decompile has to settle, because the data alone cannot:
//   1. Is the polygon a 2D footprint tested in XY, with Height an extrusion — and from which base Z?
//   2. What does Type mean (every Region in level_002 is Type=1)?
//   3. Winding / containment algorithm, and what happens for a position in NO region.
//
// Anchors: "ClimateSetting" and "RegionsInfo" are unique to this parser; "Height" and "Points" are not,
// so they are only used to confirm the parser once found. Then walk one level up to the consumer.
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

public class CgRegionsInfo extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/regionsinfo";

    // Literals whose referencing functions we decompile, in priority order.
    static final String[] LITERALS = {
        "ClimateSetting",   // unique: the parser
        "RegionsInfo",      // the parser's entry, and whoever asks for the block
        "RegionWeather",
        "SoundEventValue",
        // The runtime side: region membership and the region graph.
        "CIsNearSwitchRegionPoint",
        "CGetRandomPosInCurrentRegion",
        "CIsTargetInSameRegion",
        "CGetNextRegionChangePoint",
        "CSelectChangeAreaPointToCertainRegion",
        "CGetRegionWeather",
        "Game:AISwitchRegion",
        "cl_EnableRegionWeather",
    };
    static final int MAX_PER_LITERAL = 4;

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
                        // One level up: the caller usually owns the container the parser fills.
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
        println("CgRegionsInfo -> " + OUT);
    }

    List<Function> callersOf(Function f) {
        List<Function> out = new ArrayList<>();
        Set<Long> seen = new HashSet<>();
        for (Reference r : getReferencesTo(f.getEntryPoint())) {
            Function c = getFunctionContaining(r.getFromAddress());
            if (c != null && seen.add(c.getEntryPoint().getOffset())) out.add(c);
            if (out.size() >= 3) break;
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
