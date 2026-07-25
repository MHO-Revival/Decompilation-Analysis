// Decompile CBlackBoardCheck::Evaluate to VERIFY how CheckID indexes a Vec3 blackboard var.
// Our engine assumes 0-based (0=X,1=Y,2=Z) with "no CheckID => magnitude", citing CryAction FUN_105f4960.
// That citation is unverified in this session, and the whole em003 rush StopCheck (|TargetOrientation.Z|>100)
// depends on CheckID="2" meaning Z rather than Y. Also dumps the neighbours in case the address drifted.
// @category MHO
import java.io.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;

public class CgBbCheck extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbcheck";
    static final long[] ADDRS = { 0x105f4960L, 0x105f4c40L };   // claimed Evaluate + the registrar
    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface dec = new DecompInterface(); dec.openProgram(currentProgram);
        try (PrintWriter idx = new PrintWriter(new FileWriter(OUT + "/_INDEX.txt"))) {
            for (long a : ADDRS) {
                Address ad = toAddr(a);
                Function f = fm.getFunctionAt(ad);
                if (f == null) f = fm.getFunctionContaining(ad);
                if (f == null) { idx.println("no fn at " + ad); continue; }
                idx.println("== " + f.getEntryPoint() + " " + f.getName()
                            + " (" + f.getBody().getNumAddresses() + " bytes)");
                String c = "// <fail>\n";
                try {
                    DecompileResults r = dec.decompileFunction(f, 180, monitor);
                    if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC();
                } catch (Exception e) { c = "// <exception " + e + ">\n"; }
                try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/fn_" + f.getEntryPoint() + ".c"))) {
                    pw.print(c);
                }
                idx.println("   -> fn_" + f.getEntryPoint() + ".c");
            }
        }
        dec.dispose();
        println("wrote " + OUT);
    }
}
