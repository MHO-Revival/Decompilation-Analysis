// Parameters of the three ops that make the shared idle tree inert (task #120).
//
// _shared/idle/decider_idle.xml's RandomIdle has two children and every actionable leaf under them is
// unimplemented, so both branches fail instantly and the selector re-rolls forever:
//   Pre-Combat  -> Wander.xml         : BodyWidthToMeter, GetRandomPosInCurrentRegion
//   Relaxed...  -> RandomIdleAnims.xml: RandomAnimsPlayByNum
//
// What the XML gives is only the AUTHORED attributes (Distance="40.0", AnimNum="BB.NumsOfIdleAnims",
// AnimPrefix="Idle", CanBePlayedTwice="True"). What it cannot give is where an op WRITES its result: the
// registrar's short form carries a default blackboard key as a fourth argument, and that key never appears in
// the tree. Dump the whole registration function per class, with every immediate that resolves to a string
// printed as that string, which is what recovered the #86 region ops' parameter names.
//
// Registration functions are found by xref from the class-name literal rather than hardcoded, because these
// three were never located before.
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

public class CgIdleOps extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/idleops";

    static final String[] CLASSES = {
        "CGetRandomPosInCurrentRegion",
        "CRandomAnimsPlayByNum",
        "CBodyWidthToMeter",
        // The BTCall the wander branch ends in — if its own inputs are keys rather than authored attributes,
        // GetRandomPosInCurrentRegion's output key is whatever this reads.
        "CMoveToPosition",
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

                    // Registration functions are short and full of string pushes; Evaluate bodies are long.
                    // Both are useful, so dump instructions for the short ones and C for everything.
                    long size = f.getBody().getNumAddresses();
                    rep.append(String.format("      -> %s @%08x (%d bytes)%n",
                            f.getName(), f.getEntryPoint().getOffset(), size));
                    if (size <= 4096) dumpInstructions(f);
                    dumpC(prog, f);
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + prog + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgIdleOps -> " + OUT);
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

    /** Print any immediate that resolves to a string, and the symbol behind any call target. */
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
