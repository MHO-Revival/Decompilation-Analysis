// Find a LITERAL STRING by content, then decompile every function that references it.
//
// The general-purpose companion to CgBbUsers (which hardcodes its literals) and the inverse of CgStrAt
// (address -> string). Needed whenever the client names a thing and the name is the only handle: a
// parameter key, a cvar, a serialised field. Recovering the VALUE then means reading the code that
// touches the name, and guessing instead is how an invented constant gets shipped as if it were RE.
//
//   -postScript CgStrUsers.java stuckTimeout StuckTimer wasStuck
//   -postScript CgStrUsers.java w:BehaviorTreeEventSystem.cpp      // `w:` = UTF-16LE (assert paths are wide)
//
// Prints, per literal: the address(es) it was found at, every reference to it with the containing
// function, and writes that function's decompilation out. Absent references are reported as such — a
// string can exist as data with no code touching it, which is itself a finding.
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

public class CgStrUsers extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/strusers";

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) { println("usage: CgStrUsers <literal> [literal...]"); return; }
        new File(OUT).mkdirs();

        var dec = new DecompInterface();
        dec.openProgram(currentProgram);
        Memory mem = currentProgram.getMemory();
        String prog = currentProgram.getName();

        for (String arg : args) {
            // `w:` searches UTF-16LE instead of ASCII. MSVC's _wassert takes L"..." for both the message and the
            // SOURCE FILE PATH, so every assert's file name is wide — and an ASCII-only sweep reports
            // "NOT PRESENT" for strings that are plainly in the binary. That false negative cost a search for
            // BehaviorTreeEventSystem.cpp.
            boolean wide = arg.length() > 2 && arg.regionMatches(true, 0, "w:", 0, 2);
            String needle = wide ? arg.substring(2) : arg;
            println("=== '" + needle + "' (" + (wide ? "UTF-16LE" : "ASCII") + ") ===");
            List<Address> hits = findAll(mem, needle, wide);
            if (hits.isEmpty()) {
                println("  NOT PRESENT as a " + (wide ? "wide" : "narrow") + " literal in " + prog
                        + (wide ? "" : " — if it is an assert/_wassert argument try w: for UTF-16"));
                continue;
            }

            var decompiled = new HashSet<String>();
            for (Address at : hits) {
                println(String.format("  found @%s", at));
                int refs = 0;
                for (Reference r : getReferencesTo(at)) {
                    refs++;
                    Function f = getFunctionContaining(r.getFromAddress());
                    String where = f == null ? "(no function)" : f.getName() + " @" + f.getEntryPoint();
                    println(String.format("    ref from %s  in %s", r.getFromAddress(), where));
                    if (f == null || !decompiled.add(f.getName())) continue;

                    DecompileResults dr = dec.decompileFunction(f, 300, monitor);
                    String c = dr != null && dr.getDecompiledFunction() != null
                             ? dr.getDecompiledFunction().getC() : null;
                    if (c == null) { println("      (decompile failed)"); continue; }
                    String file = String.format("%s_%s_%s.c", prog, sanitize(needle), f.getName());
                    try (var w = new FileWriter(new File(OUT, file))) { w.write(c); }
                    println("      -> " + file + " (" + c.length() + " bytes)");
                }
                if (refs == 0)
                    println("    NO REFERENCES — present as data, touched by no disassembled code.");
            }
        }
    }

    /** Every occurrence of the literal in initialised, loaded memory, narrow or UTF-16LE. */
    private List<Address> findAll(Memory mem, String needle, boolean wide) {
        var out = new ArrayList<Address>();
        byte[] pat = wide
                ? needle.getBytes(java.nio.charset.StandardCharsets.UTF_16LE)
                : needle.getBytes();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address at = b.getStart();
            while (at != null && at.compareTo(b.getEnd()) < 0) {
                at = mem.findBytes(at, b.getEnd(), pat, null, true, monitor);
                if (at == null) break;
                out.add(at);
                try { at = at.add(1); } catch (Exception e) { break; }
            }
        }
        return out;
    }

    private static String sanitize(String s) { return s.replaceAll("[^A-Za-z0-9_]", "_"); }
}
