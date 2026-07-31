// Find every function containing a given IMMEDIATE, and decompile them.
//
// The generic form of CgBtEvt's hardcoded 0x4ffff sweep, and the companion to CgStrUsers: a string sweep
// finds who NAMES a thing, an immediate sweep finds who USES its id. Needed whenever the client refers to
// something by a numeric id that a registry maps to a name — BT event types, entity events, attribute ids —
// because the registry only proves the id exists, never who raises it.
//
//   -postScript CgImm.java 0x8af 0x8ae 0x89e
//
// Prints, per immediate: instructions scanned, every containing function with its hit count, and writes the
// decompilation of each. A function that only REGISTERS the id (a big name table) shows up alongside real
// users, so read the bodies rather than the count — the registry is usually the one with hits for the whole
// contiguous id range.
//
// Output: <OUT>/imm_<value>_report.txt and imm_<value>_bodies.c
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.scalar.Scalar;

public class CgImm extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/imm";

    DecompInterface dec;
    FunctionManager fm;

    String fname(Function f) { return f == null ? "?" : f.getName() + "@" + f.getEntryPoint(); }

    String decomp(Function f) {
        if (f == null) return "// <no function>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 120, monitor);
            if (r != null && r.getDecompiledFunction() != null) return r.getDecompiledFunction().getC();
        } catch (Exception e) { }
        return "// <decompile failed>\n";
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("CgImm: give one or more immediates, e.g. -postScript CgImm.java 0x8af 0x8ae");
            return;
        }
        new File(OUT).mkdirs();
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);

        // Parse first, so a typo fails before a multi-minute sweep rather than after it.
        LinkedHashMap<Long, String> wanted = new LinkedHashMap<>();
        for (String a : args) {
            String s = a.trim();
            long v = s.toLowerCase().startsWith("0x")
                    ? Long.parseLong(s.substring(2), 16)
                    : Long.parseLong(s);
            wanted.put(v, s);
        }

        // ONE pass over the listing for all the immediates at once. The listing is ~8.4M instructions in
        // CryGame, so a pass per value would turn a minute into ten for no reason.
        Map<Long, Map<Address, Integer>> hits = new LinkedHashMap<>();
        for (Long v : wanted.keySet()) hits.put(v, new LinkedHashMap<>());

        long scanned = 0;
        InstructionIterator ii = currentProgram.getListing().getInstructions(true);
        while (ii.hasNext()) {
            Instruction ins = ii.next();
            scanned++;
            int nops = ins.getNumOperands();
            for (int i = 0; i < nops; i++) {
                if ((ins.getOperandType(i) & OperandType.SCALAR) == 0) continue;
                Scalar sc = ins.getScalar(i);
                if (sc == null) continue;
                long val = sc.getUnsignedValue();
                Map<Address, Integer> bucket = hits.get(val);
                if (bucket == null) continue;
                Function f = fm.getFunctionContaining(ins.getAddress());
                Address key = f == null ? ins.getAddress() : f.getEntryPoint();
                bucket.merge(key, 1, Integer::sum);
            }
        }

        String prog = currentProgram.getName();
        for (Map.Entry<Long, Map<Address, Integer>> e : hits.entrySet()) {
            long v = e.getKey();
            Map<Address, Integer> bucket = e.getValue();
            StringBuilder rep = new StringBuilder();
            StringBuilder bodies = new StringBuilder();

            rep.append("=== ").append(prog).append(": FUNCTIONS CONTAINING IMMEDIATE 0x")
               .append(Long.toHexString(v)).append(" (").append(v).append(") ===\n");
            rep.append("instructions scanned: ").append(scanned).append("\n");
            rep.append("distinct functions: ").append(bucket.size()).append("\n\n");

            if (bucket.isEmpty())
                rep.append("  NO OCCURRENCES — the value appears in no disassembled instruction operand.\n"
                         + "  That is NOT proof of absence: it may be built at runtime, loaded from data, or\n"
                         + "  sit in code Ghidra has not disassembled. Check the string/registry route too.\n");

            for (Map.Entry<Address, Integer> h : bucket.entrySet()) {
                Function f = fm.getFunctionAt(h.getKey());
                rep.append(String.format("  %-52s  hits=%d%n",
                        f == null ? ("<no fn> " + h.getKey()) : fname(f), h.getValue()));
                if (f != null) {
                    bodies.append("\n// ===== 0x").append(Long.toHexString(v)).append(" in ")
                          .append(fname(f)).append(" =====\n").append(decomp(f));
                }
            }

            String stem = "imm_" + prog + "_0x" + Long.toHexString(v);
            FileWriter w = new FileWriter(new File(OUT, stem + "_report.txt"));
            w.write(rep.toString()); w.close();
            w = new FileWriter(new File(OUT, stem + "_bodies.c"));
            w.write(bodies.toString()); w.close();
            println("0x" + Long.toHexString(v) + ": " + bucket.size() + " functions -> " + stem + "_report.txt");
        }
        println("CgImm done (" + scanned + " instructions scanned)");
    }
}
