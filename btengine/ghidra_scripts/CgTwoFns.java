// Decompile the two confirmed consumers of the CSkillSequence flag bits:
//   FUN_11066f90 tests +0x116 & 0x20 = CatchUpDist
//   FUN_11067e40 tests +0x117 & 0x04 = EnableMoveSplineScale
// (CgFieldBits found them by instruction sweep but hit its decompile cap.)
// @category MHO
import java.io.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;

public class CgTwoFns extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/splinelunge";
    static final long[] ADDRS = { 0x11066f90L, 0x11067e40L, 0x11065d70L };
    @Override public void run() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface dec = new DecompInterface(); dec.openProgram(currentProgram);
        for (long a : ADDRS) {
            Address ad = toAddr(a);
            Function f = fm.getFunctionAt(ad);
            if (f == null) f = fm.getFunctionContaining(ad);
            if (f == null) { println("no fn at " + ad); continue; }
            String c = "// <fail>\n";
            try { DecompileResults r = dec.decompileFunction(f, 180, monitor);
                  if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC(); }
            catch (Exception e) { c = "// <exception " + e + ">\n"; }
            String p = OUT + "/fn_" + f.getEntryPoint() + ".c";
            try (PrintWriter pw = new PrintWriter(new FileWriter(p))) { pw.print(c); }
            println("wrote " + p + " (" + c.length() + " chars)");
        }
        dec.dispose();
    }
}
