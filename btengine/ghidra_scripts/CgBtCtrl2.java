// Closing pass. FUN_10be8430 (SetBBVars, size-gated on 0xa22) and FUN_10be8380 (GetBBVars) live in the
// vtable run at 11ccfc4c; the run-start walk over-reached by 2 slots, so the real vtable begins at
// 11ccfc54 and the appear handler's vtbl[0x10c]/vtbl[0x114] are FUN_10be8430 / FUN_10be8640.
//
// Remaining question: is SetBBVars reachable from anything other than the two monster-appear handlers?
// The component is fetched by the thunk FUN_11442f40 (entity->vtbl[0xD8]). So enumerate:
//   (a) every caller of FUN_11442f40, with the vtable byte-offsets it then calls -> the complete set of
//       operations any code performs on this component;
//   (b) the full vtable at 11ccfc54 around the state slots, so we can see the whole state interface;
//   (c) the bodies of FUN_10be8640 (LcmState apply) and FUN_11038a20 ("BTObj" user).
//
// Output: /home/fallen/Projets/MHO/decompiled/bbsync/btctrl2_*.{txt,c}
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
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class CgBtCtrl2 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbsync";
    static final long THUNK = 0x11442f40L;      // entity->vtbl[0xD8] -> monster control component
    static final long VTABLE = 0x11ccfc54L;     // corrected start
    static final long[] EXTRA = { 0x10be8640L, 0x11038a20L, 0x10bd1110L, 0x10bd10d0L, 0x10be8b60L };

    DecompInterface dec;
    FunctionManager fm;
    Memory mem;

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

        StringBuilder rep = new StringBuilder();
        StringBuilder bodies = new StringBuilder();
        Set<Address> dumped = new HashSet<>();

        // (a) callers of the component accessor, with the slots they then invoke
        rep.append("=== (a) CALLERS OF FUN_11442f40 (component accessor) ===\n");
        Set<Address> callers = new LinkedHashSet<>();
        ReferenceIterator ri = currentProgram.getReferenceManager().getReferencesTo(toAddr(THUNK));
        while (ri.hasNext()) {
            Function c = fm.getFunctionContaining(ri.next().getFromAddress());
            if (c != null) callers.add(c.getEntryPoint());
        }
        rep.append("total callers: ").append(callers.size()).append("\n\n");
        for (Address a : callers) {
            Function c = fm.getFunctionAt(a);
            Set<String> slots = new TreeSet<>();
            for (Instruction ins : currentProgram.getListing().getInstructions(c.getBody(), true)) {
                if (!ins.getMnemonicString().startsWith("CALL")) continue;
                String s = ins.toString();
                int i = s.indexOf("0x");
                if (s.contains("[") && s.contains("+ 0x")) slots.add(s.substring(s.indexOf("+ 0x") + 2, s.indexOf("]")));
            }
            rep.append(String.format("  %-46s slots: %s%n", fname(c), slots));
            if (dumped.add(a)) bodies.append("\n// ===== caller of component accessor: ")
                                     .append(fname(c)).append(" =====\n").append(decomp(c));
        }

        // (b) the vtable
        rep.append("\n=== (b) VTABLE @ ").append(Long.toHexString(VTABLE)).append(" slots 0x0f8..0x130 ===\n");
        for (long off = 0xf8; off <= 0x130; off += 4) {
            long v;
            try { v = mem.getInt(toAddr(VTABLE + off)) & 0xFFFFFFFFL; } catch (Exception e) { continue; }
            Function f = fm.getFunctionAt(toAddr(v));
            rep.append(String.format("   +0x%03x (slot %3d) -> %s%n", off, off / 4, fname(f)));
        }

        // (c) extra bodies
        for (long a : EXTRA) {
            Function f = fm.getFunctionAt(toAddr(a));
            if (f != null && dumped.add(f.getEntryPoint()))
                bodies.append("\n// ===== ").append(fname(f)).append(" =====\n").append(decomp(f));
        }

        FileWriter w = new FileWriter(new File(OUT, "btctrl2_report.txt")); w.write(rep.toString()); w.close();
        w = new FileWriter(new File(OUT, "btctrl2_bodies.c")); w.write(bodies.toString()); w.close();
        println("CgBtCtrl2 done");
    }
}
