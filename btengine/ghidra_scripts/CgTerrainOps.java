// Recover the physics/terrain BT ops now that the server HAS the geometry they need (terrain heightmap and
// collision meshes are both decoded and live). The geometry being available is not permission to guess what
// each op asks of it, so this pulls each op's Evaluate out of the client.
//
// Chain (the one that works on this binary, per CLAUDE.md): class-name string -> the 6-byte
// `mov eax,<nameStr>; ret` getter (B8 <abs32> C3) -> the .rdata vtable slot holding that getter -> walk back
// to the start of the contiguous run of .text pointers = vtable base -> slot 4 is Evaluate.
//
// TenProtect left most of .text undisassembled, so every target is force-created as a function before
// decompiling; "no fn at <addr>" means "not disassembled", not "no code".
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

public class CgTerrainOps extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/terrainops";

    // The physics/terrain ops. IsInTheAir is included as a CONTROL: its Evaluate is already recovered
    // (FUN_105f8bd0, vtable 11310250), so if this script disagrees with that, the script is wrong.
    static final String[] CLASSES = {
        "CIsInTheAir",              // control — known vtable 0x11310250
        "CCheckTerrainDis",
        "CCheckCollideWithWall",
        "CCheckGroundMaterial",
        "CCheckInWater",
        "CRaycast",
        "CRaycastPoint",
        "CIsOnVolume",
        "CIsOnSameVolume",
        "CJumpTo",
        "CTeleportToTargetPos",
        "CEnableMoveCollisionInvu",
        // Buff ops (#85) — live for em003, unlike the physics ops above.
        "CAddBuff",
        "CRemoveBuff",
        "CCheckBuff",
        "CRemoveAllDynamicEffects",
        // The only two ops em003test authors that are still unregistered. CopyTargetPropertyToBB is the one
        // that WRITES TargetPos, so TeleportToTargetPos cannot fire without it.
        "CCopyTargetPropertyToBB",
        "CHitFly",
    };

    // CheckTerrainDis compares against these two globals; naming them names its modes.
    static final long[] MODE_STRINGS = { 0x1130a4acL, 0x1130a4b0L };

    static final int EVALUATE_SLOT = 4;
    static final int MAX_SLOTS = 16;

    Memory mem;
    DecompInterface dec;
    StringBuilder rep = new StringBuilder();

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        rep.append("== CheckTerrainDis mode strings ==\n");
        for (long g : MODE_STRINGS) {
            rep.append(String.format("  DAT_%08x -> ", g));
            try {
                int p = mem.getInt(toAddr(g));
                rep.append(String.format("ptr 0x%08x = %s%n", p, readCStr(p)));
            } catch (Exception e) {
                rep.append("unreadable: ").append(e).append('\n');
            }
        }

        for (String cls : CLASSES) {
            rep.append("\n======== ").append(cls).append('\n');
            List<Long> strs = findStringAddrs(cls);
            if (strs.isEmpty()) { rep.append("  name string not found\n"); continue; }

            boolean done = false;
            for (long s : strs) {
                for (long getter : findGetters(s)) {
                    rep.append(String.format("  nameStr 0x%08x  getter 0x%08x%n", s, getter));
                    for (long slot : findRdataRefs(getter)) {
                        // Evaluate is 3 dwords BEFORE the slot holding the name getter. Established with
                        // CIsInTheAir as a control: its getter slot is 0x11310250 and its known Evaluate
                        // (0x105f8bd0) sits at 0x11310244. Walking back to a "table start" does NOT work —
                        // adjacent class vtables are contiguous runs of .text pointers, so the walk merges
                        // them and lands on a neighbour's Evaluate (that bug reported slot 370 and gave
                        // CCheckTerrainDis and CCheckGroundMaterial the same function).
                        rep.append(String.format("    getter slot 0x%08x -> Evaluate at 0x%08x%n",
                            slot, slot - 12));
                        dumpTable(cls, slot);
                        done = true;
                    }
                }
                if (done) break;
            }
            if (!done) rep.append("  no vtable found via the getter\n");
        }

        write("report.txt", rep.toString());
        println("CgTerrainOps -> " + OUT);
    }

    /** Every address in initialised memory holding the exact NUL-terminated string. */
    List<Long> findStringAddrs(String want) {
        List<Long> out = new ArrayList<>();
        byte[] pat = (want + "\0").getBytes();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                // NO prefix filter. Requiring the preceding byte to be NUL/padding silently lost
                // CCheckCollideWithWall, CIsOnVolume and CIsOnSameVolume, whose literals are packed directly
                // after a pointer (preceding byte 0x10). Each of these names occurs exactly once in .rdata,
                // so an exact NUL-terminated match is already unambiguous and the filter only cost coverage.
                out.add(f.getOffset());
                a = f.add(1);
            }
        }
        return out;
    }

    /** `mov eax, <strAddr>; ret` == B8 <abs32> C3, the 6-byte class-name getter. */
    List<Long> findGetters(long strAddr) {
        List<Long> out = new ArrayList<>();
        byte[] pat = new byte[] {
            (byte) 0xB8,
            (byte) (strAddr), (byte) (strAddr >> 8), (byte) (strAddr >> 16), (byte) (strAddr >> 24),
            (byte) 0xC3,
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

    /** Addresses in non-executable initialised memory whose dword == target. */
    List<Long> findRdataRefs(long target) {
        List<Long> out = new ArrayList<>();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || b.isExecute()) continue;
            long lo = b.getStart().getOffset(), hi = b.getEnd().getOffset();
            for (long p = lo; p + 4 <= hi; p += 4) {
                try { if ((mem.getInt(toAddr(p)) & 0xFFFFFFFFL) == target) out.add(p); }
                catch (Exception ignored) { }
            }
        }
        return out;
    }

    /** Walk back while the preceding dword still points into executable memory. */
    long vtableBase(long slot) {
        long p = slot;
        while (p - 4 >= 0) {
            try {
                long v = mem.getInt(toAddr(p - 4)) & 0xFFFFFFFFL;
                if (!isText(v)) break;
                p -= 4;
            } catch (Exception e) { break; }
        }
        return p;
    }

    boolean isText(long a) {
        if (a == 0) return false;
        Address ad;
        try { ad = toAddr(a); } catch (Exception e) { return false; }
        MemoryBlock b = mem.getBlock(ad);
        return b != null && b.isInitialized() && b.isExecute();
    }

    /** getterSlot is the .rdata address holding the class-name getter; Evaluate is 12 bytes before it. */
    void dumpTable(String cls, long getterSlot) {
        StringBuilder sb = new StringBuilder();
        sb.append("// ").append(cls).append(String.format("  name-getter slot 0x%08x%n", getterSlot));
        for (int k = -6; k <= 2; k++) {
            long p = getterSlot + k * 4L;
            long fn;
            try { fn = mem.getInt(toAddr(p)) & 0xFFFFFFFFL; } catch (Exception e) { continue; }
            sb.append(String.format("// %+2d  0x%08x -> 0x%08x%s%n", k, p, fn,
                k == -3 ? "   <== Evaluate" : k == 0 ? "   <== name getter" : ""));
        }
        long evalFn = 0;
        try { evalFn = mem.getInt(toAddr(getterSlot - 12)) & 0xFFFFFFFFL; } catch (Exception ignored) { }
        rep.append(String.format("      Evaluate = 0x%08x%s%n", evalFn, isText(evalFn) ? "" : "  (NOT CODE)"));
        if (isText(evalFn)) sb.append('\n').append(decompile(evalFn));
        else sb.append("\n// slot -3 does not point into .text — the -3 rule does not hold for this class\n");
        write(cls + "_" + Long.toHexString(getterSlot) + ".c", sb.toString());
    }

    String decompile(long addr) {
        Address a = toAddr(addr);
        Function f = getFunctionContaining(a);
        if (f == null) {
            try { f = createFunction(a, null); } catch (Exception ignored) { }
        }
        if (f == null) return String.format("// no function could be created at 0x%08x%n", addr);
        try {
            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            if (r != null && r.getDecompiledFunction() != null) return r.getDecompiledFunction().getC();
        } catch (Exception e) { return "// decompile failed: " + e + "\n"; }
        return "// decompilation produced nothing\n";
    }

    String readCStr(long addr) {
        StringBuilder sb = new StringBuilder();
        try {
            for (int i = 0; i < 200; i++) {
                byte c = mem.getByte(toAddr(addr + i));
                if (c == 0) break;
                sb.append((char) (c & 0xFF));
            }
        } catch (Exception e) { return "<unreadable>"; }
        return "\"" + sb + "\"";
    }

    void write(String name, String body) {
        try (FileWriter w = new FileWriter(new File(OUT, name))) { w.write(body); }
        catch (Exception e) { println("write failed " + name + ": " + e); }
    }
}
