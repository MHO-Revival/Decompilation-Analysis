// The monster-appear handlers do:
//     comp = FUN_11442f40();                       // entity->vtbl[0xD8] -> monster control component
//     comp->vtbl[0x10c](&msg->BBVars, 0xa22);      // 0x92 = CSMonsterAppearNtf::BBVars, 0xa22 = its size
//     comp->vtbl[0x114](&msg->LcmState);           // 0xab5 = CSMonsterAppearNtf::LcmState
// so BBVars IS consumed at spawn. Find the implementation of slot 0x10c and every other caller of it,
// which answers "can the server push blackboard vars AFTER the spawn?".
//
// Strategy (RTTI is stripped, so no name->vtable):
//  1. Sweep .rdata for vtable-shaped pointer runs (>= 72 consecutive dwords into .text).
//  2. For each, take slot at byte offset 0x10c (index 67) and 0x114 (index 69).
//  3. Keep the ones whose slot-0x10c function looks like a CSBBVarList walker: contains the element
//     stride 0xa2 ((0xa22-2)/16 = 162) or the cap 16, and is small.
//  4. Decompile the survivors + all call sites of `CALL dword ptr [reg + 0x10c]` so we can see who else
//     invokes it.
//
// Output: /home/fallen/Projets/MHO/decompiled/bbsync/apply_*.{txt,c}
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
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.scalar.Scalar;

public class CgBbApply extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbsync";
    static final int SLOT_BB = 0x10c;      // byte offset
    static final int SLOT_LCM = 0x114;
    static final int MIN_SLOTS = 72;       // vtable must be at least this long to have slot 0x114

    DecompInterface dec;
    FunctionManager fm;
    Memory mem;
    long TX_LO, TX_HI;

    boolean inText(long v) { return v >= TX_LO && v < TX_HI; }

    String decomp(Function f) {
        if (f == null) return "// <no function>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 120, monitor);
            if (r != null && r.getDecompiledFunction() != null) return r.getDecompiledFunction().getC();
        } catch (Exception e) { }
        return "// <decompile failed>\n";
    }

    String fname(Function f) { return f == null ? "?" : f.getName() + "@" + f.getEntryPoint(); }

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        fm = currentProgram.getFunctionManager();
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);

        for (MemoryBlock b : mem.getBlocks()) {
            if (b.getName().equals(".text")) { TX_LO = b.getStart().getOffset(); TX_HI = b.getEnd().getOffset(); }
        }

        StringBuilder rep = new StringBuilder();
        rep.append(String.format(".text = %x .. %x%n", TX_LO, TX_HI));

        // ---- 1/2: find vtables and their slot 0x10c / 0x114 ----
        Map<Long, List<Long>> bbFnToVtables = new HashMap<>();   // slot-0x10c fn -> vtable addrs
        Map<Long, Long> vtToLcm = new HashMap<>();
        int vtCount = 0;

        for (MemoryBlock b : mem.getBlocks()) {
            String n = b.getName();
            if (!(n.equals(".rdata") || n.equals(".data"))) continue;
            long lo = b.getStart().getOffset(), hi = b.getEnd().getOffset() - 4;
            long a = lo;
            while (a <= hi) {
                // measure a run of text pointers starting at a
                long p = a; int len = 0;
                while (p <= hi) {
                    long v;
                    try { v = mem.getInt(toAddr(p)) & 0xFFFFFFFFL; } catch (Exception e) { break; }
                    if (!inText(v)) break;
                    len++; p += 4;
                }
                if (len >= MIN_SLOTS) {
                    vtCount++;
                    long bbFn = mem.getInt(toAddr(a + SLOT_BB)) & 0xFFFFFFFFL;
                    long lcmFn = mem.getInt(toAddr(a + SLOT_LCM)) & 0xFFFFFFFFL;
                    bbFnToVtables.computeIfAbsent(bbFn, k -> new ArrayList<>()).add(a);
                    vtToLcm.put(a, lcmFn);
                }
                a = (len > 0) ? p + 4 : a + 4;
            }
        }
        rep.append("vtable-shaped runs (>=" + MIN_SLOTS + " slots): ").append(vtCount).append("\n");
        rep.append("distinct slot-0x10c targets: ").append(bbFnToVtables.size()).append("\n\n");

        // ---- 3: which of those functions look like a CSBBVarList walker? ----
        rep.append("=== slot-0x10c candidates containing the BBVar element stride 0xa2 or size 0xa22 ===\n");
        List<Function> cands = new ArrayList<>();
        for (Long fnAddr : bbFnToVtables.keySet()) {
            Function f = fm.getFunctionAt(toAddr(fnAddr));
            if (f == null) continue;
            boolean stride = false, size = false, cap = false;
            for (Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true)) {
                for (int i = 0; i < ins.getNumOperands(); i++) {
                    if ((ins.getOperandType(i) & OperandType.SCALAR) == 0) continue;
                    Scalar sc = ins.getScalar(i);
                    if (sc == null) continue;
                    long v = sc.getUnsignedValue();
                    if (v == 0xa2) stride = true;
                    if (v == 0xa22) size = true;
                    if (v == 0x10) cap = true;
                }
            }
            if (stride || size) {
                cands.add(f);
                rep.append(String.format("  %-46s vtables=%d stride0xa2=%s size0xa22=%s cap16=%s%n",
                        fname(f), bbFnToVtables.get(fnAddr).size(), stride, size, cap));
                for (Long vt : bbFnToVtables.get(fnAddr)) {
                    Function lf = fm.getFunctionAt(toAddr(vtToLcm.get(vt)));
                    rep.append(String.format("        vtable %x   slot0x114 -> %s%n", vt, fname(lf)));
                }
            }
        }
        if (cands.isEmpty()) rep.append("  <none> -- widening: listing every distinct slot-0x10c target\n");

        // ---- 4: every call site of CALL [reg + 0x10c] ----
        rep.append("\n=== CALL dword ptr [reg + 0x10c] SITES ===\n");
        Map<Address, Integer> sites = new LinkedHashMap<>();
        InstructionIterator ii = currentProgram.getListing().getInstructions(true);
        while (ii.hasNext()) {
            Instruction ins = ii.next();
            if (!ins.getMnemonicString().startsWith("CALL")) continue;
            String s = ins.toString();
            if (!s.contains("0x10c")) continue;
            Function f = fm.getFunctionContaining(ins.getAddress());
            sites.merge(f == null ? ins.getAddress() : f.getEntryPoint(), 1, Integer::sum);
        }
        for (Map.Entry<Address, Integer> e : sites.entrySet()) {
            Function f = fm.getFunctionAt(e.getKey());
            rep.append(String.format("  %-52s x%d%n", f == null ? e.getKey().toString() : fname(f), e.getValue()));
        }

        StringBuilder c = new StringBuilder();
        for (Function f : cands) {
            c.append("\n// ===== slot-0x10c candidate ").append(fname(f)).append(" =====\n").append(decomp(f));
        }
        // also emit the two known appear-side helpers for reference
        for (long a : new long[] { 0x11442f40L }) {
            Function f = fm.getFunctionAt(toAddr(a));
            c.append("\n// ===== ").append(fname(f)).append(" =====\n").append(decomp(f));
        }

        FileWriter w = new FileWriter(new File(OUT, "apply_report.txt")); w.write(rep.toString()); w.close();
        w = new FileWriter(new File(OUT, "apply_bodies.c")); w.write(c.toString()); w.close();
        println("CgBbApply done");
    }
}
