// The region PATHFINDING ops (task #86 core, and what now blocks idle wander).
//
// With BodyWidthToMeter and GetRandomPosInCurrentRegion in, Wander gets as far as a chosen goal and stops at
// MoveToPosAdvance's Doing branch: ParallelPathSearcher = RegionPathFindRequest + FollowPathFindingPath.
//
// What has to come out of the binary, because the trees author almost none of it:
//   - RegionPathFindRequest's parameters, and whether it is a fire-and-forget REQUEST (the name and the
//     "ParallelPathSearcher" wrapper both suggest an async search whose result arrives later) or a synchronous
//     solve. That decides the whole shape of the implementation.
//   - Where the resulting path LIVES: the follower ops (GetPathNextPos, IsLastEdgeInPath, SetPathPointByIndex,
//     SetPathLength) must read it from somewhere, and it is not a blackboard Vec3.
//   - RegionPathFollowResult — the status the follower reports back.
//   - CurrentRegionPathFindRequest and GetNextRegionChangePoint, the same family.
//
// Dump each class's registration block with string immediates resolved (that is what recovered the parameter
// names for the idle ops) AND its Evaluate body.
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
import ghidra.program.model.scalar.Scalar;

public class CgPathOps extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/pathops";

    static final String[] CLASSES = {
        "CRegionPathFindRequest",
        "CCurrentRegionPathFindRequest",
        "CGetPathNextPos",
        "CIsLastEdgeInPath",
        "CSetPathPointByIndex",
        "CSetPathLength",
        "CGetNextRegionChangePoint",
        // Not a node class but a blackboard key the follower reports through — its xrefs name the consumer.
        "RegionPathFollowResult",
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

        for (String cls : CLASSES) {
            rep.append("================ ").append(cls).append('\n');
            List<Long> hits = findExact(cls);
            if (hits.isEmpty()) { rep.append("  (literal absent)\n"); continue; }

            for (long addr : hits) {
                rep.append(String.format("  literal at 0x%08x%n", addr));
                for (long site : refsTo(addr)) {
                    Function f = getFunctionContaining(toAddr(site));
                    rep.append(String.format("    ref 0x%08x  %s%n", site,
                            f == null ? "(outside any function)" : f.getName()));
                    if (f == null || !dumped.add(f.getEntryPoint().getOffset())) continue;

                    long size = f.getBody().getNumAddresses();
                    rep.append(String.format("      -> %s @%08x (%d bytes)%n",
                            f.getName(), f.getEntryPoint().getOffset(), size));
                    if (size <= 3072) dumpInstructions(f);
                    dumpC(prog, f);
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + prog + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgPathOps -> " + OUT);
    }

    void dumpInstructions(Function f) {
        rep.append("      ---- instructions ----\n");
        Address a = f.getEntryPoint();
        while (a != null && f.getBody().contains(a)) {
            Instruction insn = getInstructionAt(a);
            if (insn == null) break;
            rep.append(String.format("      %08x  %-36s", a.getOffset(), insn.toString()));
            annotate(insn);
            rep.append('\n');
            try { a = insn.getMaxAddress().add(1); } catch (Exception e) { break; }
        }
    }

    void annotate(Instruction insn) {
        for (int i = 0; i < insn.getNumOperands(); i++) {
            for (Object o : insn.getOpObjects(i)) {
                if (o instanceof Scalar s) {
                    long v = s.getUnsignedValue();
                    if (v > 0x10000000L && v < 0x13000000L) {
                        String str = readStringAt(v);
                        if (str != null) rep.append("  ; \"").append(str).append('"');
                    }
                } else if (o instanceof Address ad) {
                    Function t = getFunctionAt(ad);
                    if (t != null) rep.append("  ; -> ").append(t.getName());
                    String str = readStringAt(ad.getOffset());
                    if (str != null) rep.append("  ; \"").append(str).append('"');
                }
            }
        }
    }

    void dumpC(String prog, Function f) {
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
