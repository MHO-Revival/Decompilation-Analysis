// Who WRITES a named blackboard key? (task #111: HitDirSim's frame convention)
//
// HitFly reads a direction from the blackboard key named by DirBBName — "HitDirSim" for em003 — and nothing
// on our side writes it. The convention is the blocker: CHitFly's default key is "HitDirSim_Back" and the
// animations are Hit_KnockedAway_Front_/Back_/Left_/Right_, which hints the value may encode the struck SIDE
// in the monster's local frame rather than a world direction. Guessing the frame would knock monsters the
// wrong way, so recover the writer instead.
//
// Finds the literal, then every function that references its address, and decompiles them. CryGame.dll KEPT
// its function symbols, so the callers should carry real Class::Method names.
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

public class CgStrWriter extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/hitdir";
    static final String[] LITERALS = { "HitDirSim", "HitDirSim_Back", "HitPos" };
    static final int MAX_DECOMPILE = 6;   // per literal, to keep the run bounded

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

        for (String lit : LITERALS) {
            rep.append("======== literal \"").append(lit).append("\"\n");
            for (long addr : findExact(lit)) {
                rep.append(String.format("  at 0x%08x%n", addr));
                int n = 0;
                for (long site : refsTo(addr)) {
                    Function f = getFunctionContaining(toAddr(site));
                    String name = f == null ? "(outside any function)" : f.getName();
                    rep.append(String.format("     ref 0x%08x  %s%n", site, name));
                    if (f != null && n < MAX_DECOMPILE && dumped.add(f.getEntryPoint().getOffset())) {
                        dump(f);
                        n++;
                    }
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report.txt"))) { w.write(rep.toString()); }
        println("CgStrWriter -> " + OUT);
    }

    /** Addresses of the exact NUL-terminated literal, requiring a plausible string start. */
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

    /** Any 32-bit operand equal to the address, anywhere in executable memory. */
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

    void dump(Function f) {
        String c;
        try {
            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            c = (r != null && r.getDecompiledFunction() != null)
                ? r.getDecompiledFunction().getC() : "// decompilation produced nothing\n";
        } catch (Exception e) { c = "// decompile failed: " + e + "\n"; }
        String safe = f.getName().replaceAll("[^A-Za-z0-9_]", "_");
        try (FileWriter w = new FileWriter(new File(OUT,
                safe + "_" + Long.toHexString(f.getEntryPoint().getOffset()) + ".c"))) {
            w.write(c);
        } catch (Exception e) { println("write failed: " + e); }
    }
}
