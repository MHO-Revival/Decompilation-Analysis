// Verify the constants + the TransitionTime mapping behind the recovered blend curve.
//  FUN_11067e40: h = t2*DAT_11cc1020 - t3*DAT_11de9990   (smoothstep iff 3.0 / 2.0)
//               identity compare vs DAT_11de9918         (expect 1.0)
//  FUN_11066f90: +0xc4 = param_6 * DAT_11de9a44          (window scale; expect 1.0)
// Also lists callers of FUN_11066f90 so `param_6` can be traced to real data.
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgConsts extends GhidraScript {
    static final long[] DATS = { 0x11cc1020L, 0x11de9990L, 0x11de9918L, 0x11de9a44L };
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/splinelunge";
    @Override public void run() throws Exception {
        for (long a : DATS) {
            Address ad = toAddr(a);
            try {
                int raw = currentProgram.getMemory().getInt(ad);
                println(String.format("DAT_%x : float=%s  (raw=0x%08x)", a, Float.intBitsToFloat(raw), raw));
            } catch (Exception e) { println(String.format("DAT_%x : <unreadable %s>", a, e)); }
        }
        // callers of the sequence-start fn
        FunctionManager fm = currentProgram.getFunctionManager();
        Address start = toAddr(0x11066f90L);
        println("\ncallers of FUN_11066f90:");
        List<Function> callers = new ArrayList<>();
        for (Reference r : getReferencesTo(start)) {
            Function c = fm.getFunctionContaining(r.getFromAddress());
            if (c != null && !callers.contains(c)) { callers.add(c);
                println("  " + c.getEntryPoint() + " " + c.getName() + " (" + c.getBody().getNumAddresses() + " bytes) from " + r.getFromAddress()); }
        }
        callers.sort(Comparator.comparingLong(f -> f.getBody().getNumAddresses()));
        DecompInterface dec = new DecompInterface(); dec.openProgram(currentProgram);
        int n = 0;
        for (Function c : callers) {
            if (n >= 3 || c.getBody().getNumAddresses() > 0x2000) continue;
            try { DecompileResults r = dec.decompileFunction(c, 120, monitor);
                if (r != null && r.decompileCompleted()) {
                    String p = OUT + "/caller_" + c.getEntryPoint() + ".c";
                    try (PrintWriter pw = new PrintWriter(new FileWriter(p))) { pw.print(r.getDecompiledFunction().getC()); }
                    println("  wrote " + p); n++;
                }
            } catch (Exception e) {}
        }
        dec.dispose();
    }
}
