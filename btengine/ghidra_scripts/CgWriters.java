// Exhaustive check of the claim "nothing writes the blackboard var TargetOrientation during an em003
// charge". FUN_10551520(bbId, x, y, z) is the actual Vec3 blackboard SETTER (reached from
// FUN_10551270(paramIdx, vec) after it resolves the param's binding). So: find EVERY function that can
// reach FUN_10551520 / FUN_10551270, and report which of them are on the charge's tick path.
// Also verifies FUN_10552f00 / FUN_10552be0 (the rotate helper's only callees) are pure math.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;

public class CgWriters extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btrot2";

    // the Vec3 blackboard write chain
    static final long SETTER      = 0x10551520L;   // FUN_10551520(bbId, x, y, z)
    static final long PARAM_WRITE = 0x10551270L;   // FUN_10551270(paramIdx, &vec) -> SETTER

    // the rotate helper's callees, to confirm they are pure math
    static final long[] PURE_CHECK = { 0x10552f00L, 0x10552be0L };

    // the REAL CSetTargetIDOrientation (vtable 1130e6e0 slot 4) + its param registrar. The old notes
    // pointed at 105d3760, which this run proves is CSetTargetPosOrientation's Evaluate -- the two got
    // conflated because the recorded name-string address was off by one ("&gt;CSetTargetIDOrientation").
    static final long[] EXTRA = { 0x105d3220L, 0x105d3560L, 0x105d3760L };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;

    Set<Long> callersOf(long target){
        Set<Long> out = new LinkedHashSet<>();
        for (Reference r : getReferencesTo(toAddr(target))) {
            Function f = fm.getFunctionContaining(r.getFromAddress());
            if (f != null) out.add(f.getEntryPoint().getOffset());
        }
        return out;
    }

    String decomp(long a){
        Function f = fm.getFunctionAt(toAddr(a));
        if (f == null) return "// <no fn>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 200, monitor);
            if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC();
        } catch (Exception e) {}
        return "// <fail>\n";
    }

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) return;
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep = new StringBuilder();

        for (long t : new long[]{ SETTER, PARAM_WRITE }) {
            Function tf = fm.getFunctionAt(toAddr(t));
            rep.append(String.format("%n######## callers of %08x (%s) ########%n", t,
                tf == null ? "?" : tf.getName()));
            for (long c : callersOf(t)) {
                Function f = fm.getFunctionAt(toAddr(c));
                rep.append(String.format("  %08x  %s  (%d bytes)%n", c, f.getName(),
                    f.getBody().getNumAddresses()));
            }
        }

        // second level: who calls the callers of PARAM_WRITE (catches indirect writers)
        rep.append("\n\n######## 2nd level: callers-of-callers of the param writer ########\n");
        for (long c : callersOf(PARAM_WRITE)) {
            Function f = fm.getFunctionAt(toAddr(c));
            rep.append(String.format("%n  %08x %s <- ", c, f.getName()));
            int n = 0;
            for (long cc : callersOf(c)) {
                Function ff = fm.getFunctionAt(toAddr(cc));
                rep.append(String.format("%08x(%s) ", cc, ff == null ? "?" : ff.getName()));
                if (++n > 12) { rep.append("..."); break; }
            }
        }

        StringBuilder src = new StringBuilder();
        for (long p : PURE_CHECK) {
            Function f = fm.getFunctionAt(toAddr(p));
            rep.append(String.format("%n%n######## purity of %08x (%s, %d bytes) ########%n", p,
                f == null ? "?" : f.getName(), f == null ? 0 : f.getBody().getNumAddresses()));
            boolean reaches = false;
            if (f != null) {
                try { for (Function c : f.getCalledFunctions(monitor)) {
                    long e = c.getEntryPoint().getOffset();
                    rep.append("    calls ").append(c.getName()).append("\n");
                    if (e == SETTER || e == PARAM_WRITE) reaches = true;
                } } catch (Exception e) {}
            }
            rep.append("    -> reaches the blackboard setter: ").append(reaches).append("\n");
            src.append("\n// ######## ").append(String.format("%08x", p)).append(" ########\n").append(decomp(p));
        }

        for (long e : EXTRA) {
            Function f = fm.getFunctionAt(toAddr(e));
            src.append("\n// ######## ").append(String.format("%08x", e)).append("  ")
               .append(f == null ? "?" : f.getName() + " (" + f.getBody().getNumAddresses() + " bytes)")
               .append(" ########\n").append(decomp(e));
        }

        try (FileWriter w = new FileWriter(new File(OUT, "writers_report.txt"))) { w.write(rep.toString()); }
        try (FileWriter w = new FileWriter(new File(OUT, "purity.c"))) { w.write(src.toString()); }
        dec.dispose();
        println("[CgWriters] wrote " + OUT);
    }
}
