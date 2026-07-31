// Decompile an arbitrary list of addresses, and read data at others. The plumbing every follow-up needs
// after a sweep has named its suspects, without hardcoding them into yet another one-shot script (CgTwoFns,
// CgStrAtAddr, CgSlotOf … all exist because this one did not).
//
//   -postScript CgFns.java 101d9520 101d9b40 d:113c12a4 c:101d91c0
//
// A bare address is a FUNCTION to decompile; `d:` prefixes a DATA address, printed as float / int32 / hex so
// a threshold can be read without guessing its type; `a:` dumps the RAW DISASSEMBLY of the containing
// function, for when the decompiler drops a thiscall's ECX and "which `this` was this sub-init called with"
// is exactly the question; `c:` lists (and decompiles) the CALLERS of a function,
// which is how you get from a leaf you found by sweeping to the class that owns it. Functions Ghidra never
// disassembled are CREATED first — "no fn at <addr>" means not disassembled, not absent, and that distinction
// has cost this project a day before (FUN_105f4960 was called fabricated because of it).
//
// Output: <OUT>/fns_<program>_report.txt (data values) and fns_<program>_bodies.c
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.SourceType;

public class CgFns extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/fns";

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("CgFns: give function addresses, and data addresses as d:<addr>");
            return;
        }
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Memory mem = currentProgram.getMemory();
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);

        StringBuilder rep = new StringBuilder();
        StringBuilder bodies = new StringBuilder();
        rep.append("=== ").append(currentProgram.getName()).append(" ===\n");

        Set<Address> emitted = new HashSet<>();
        for (String raw : args) {
            String a = raw.trim();
            boolean data = a.toLowerCase().startsWith("d:");
            boolean callers = a.toLowerCase().startsWith("c:");
            boolean asm = a.toLowerCase().startsWith("a:");
            if (data || callers || asm) a = a.substring(2);
            if (a.toLowerCase().startsWith("0x")) a = a.substring(2);
            Address addr = toAddr(Long.parseLong(a, 16));

            if (asm) {
                Function f = fm.getFunctionContaining(addr);
                if (f == null) { disassemble(addr); f = createFunction(addr, null); }
                if (f == null) { rep.append("ASM ").append(addr).append(": no function\n"); continue; }
                bodies.append("\n// ===== ASM ").append(f.getName()).append("@")
                      .append(f.getEntryPoint()).append(" =====\n");
                for (ghidra.program.model.listing.Instruction ins :
                        currentProgram.getListing().getInstructions(f.getBody(), true))
                    bodies.append(String.format("// %s  %-42s %s%n",
                            ins.getAddress(), ins.toString(), ins.getMnemonicString()));
                rep.append("ASM ").append(f.getName()).append(" dumped\n");
                continue;
            }

            if (callers) {
                Function target = fm.getFunctionAt(addr);
                rep.append("CALLERS of ").append(addr).append(" (")
                   .append(target == null ? "<no fn>" : target.getName()).append("):\n");
                Set<Address> seen = new TreeSet<>();
                for (ghidra.program.model.symbol.Reference r :
                        currentProgram.getReferenceManager().getReferencesTo(addr)) {
                    Function c = fm.getFunctionContaining(r.getFromAddress());
                    if (c == null) { rep.append("    <no fn> ").append(r.getFromAddress()).append("\n"); continue; }
                    if (!seen.add(c.getEntryPoint())) continue;
                    rep.append("    ").append(c.getName()).append("@").append(c.getEntryPoint())
                       .append("  (").append(c.getBody().getNumAddresses()).append(" bytes)\n");
                    if (!emitted.add(c.getEntryPoint())) continue;
                    bodies.append("\n// ===== caller of ").append(addr).append(": ")
                          .append(c.getName()).append("@").append(c.getEntryPoint()).append(" =====\n");
                    try {
                        DecompileResults cr = dec.decompileFunction(c, 180, monitor);
                        bodies.append(cr != null && cr.getDecompiledFunction() != null
                                ? cr.getDecompiledFunction().getC() : "// <decompile failed>\n");
                    } catch (Exception e) {
                        bodies.append("// <decompile threw: ").append(e.getMessage()).append(">\n");
                    }
                }
                if (seen.isEmpty()) rep.append("    NONE — no disassembled code calls it.\n");
                continue;
            }

            if (data) {
                try {
                    int i = mem.getInt(addr);
                    float f = Float.intBitsToFloat(i);
                    rep.append(String.format("DATA %s: float=%s  int32=%d  hex=0x%08x%n",
                            addr, Float.toString(f), i, i));
                } catch (Exception e) {
                    rep.append("DATA ").append(addr).append(": unreadable (")
                       .append(e.getMessage()).append(")\n");
                }
                continue;
            }

            Function f = fm.getFunctionAt(addr);
            if (f == null) {
                // NOT DISASSEMBLED is not NOT PRESENT. Force it.
                disassemble(addr);
                f = createFunction(addr, null);
                if (f == null) f = fm.getFunctionContaining(addr);
            }
            if (f == null) {
                rep.append("FN ").append(addr).append(": could not disassemble or create a function\n");
                continue;
            }
            rep.append(String.format("FN %s: %s  (%d bytes)%n",
                    addr, f.getName(), f.getBody().getNumAddresses()));
            bodies.append("\n// ===== ").append(f.getName()).append("@").append(f.getEntryPoint())
                  .append(" =====\n");
            try {
                DecompileResults r = dec.decompileFunction(f, 180, monitor);
                bodies.append(r != null && r.getDecompiledFunction() != null
                        ? r.getDecompiledFunction().getC() : "// <decompile failed>\n");
            } catch (Exception e) {
                bodies.append("// <decompile threw: ").append(e.getMessage()).append(">\n");
            }
        }

        String stem = "fns_" + currentProgram.getName();
        FileWriter w = new FileWriter(new File(OUT, stem + "_report.txt")); w.write(rep.toString()); w.close();
        w = new FileWriter(new File(OUT, stem + "_bodies.c")); w.write(bodies.toString()); w.close();
        println(rep.toString());
        println("CgFns done -> " + stem + "_bodies.c");
    }
}
