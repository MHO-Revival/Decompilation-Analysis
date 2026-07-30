// The <Vars> loop of the client's blackboard loader: does a duplicate <Var Name> overwrite or get skipped?
// FUN_103fd960 is called with the <Vars> element by FUN_103fd600. FUN_103fdca0 is the <KeyVars> counterpart.
// Also resolve DAT_113bef3c, the element name FUN_103fd600 looks up right before calling FUN_103fd960.
// @category MHO
import java.io.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;

public class CgBbVars extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbload";
    static final long[] FNS = { 0x103fd960L, 0x103fdca0L };

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();

        // what is DAT_113bef3c? the loader passes it to getChild() just before the Vars loop
        for (long d : new long[] { 0x113bef3cL }) {
            Address ad = toAddr(d);
            StringBuilder sb = new StringBuilder();
            try {
                for (int i = 0; i < 32; i++) {
                    byte b = currentProgram.getMemory().getByte(ad.add(i));
                    if (b == 0) break;
                    sb.append((char) b);
                }
                println(String.format("DAT_%x = \"%s\"", d, sb));
            } catch (Exception e) { println(String.format("DAT_%x unreadable: %s", d, e)); }
        }

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        for (long a : FNS) {
            Function f = fm.getFunctionAt(toAddr(a));
            if (f == null) { println("no fn at " + Long.toHexString(a)); continue; }
            DecompileResults r = dec.decompileFunction(f, 240, monitor);
            if (r != null && r.decompileCompleted()) {
                String p = OUT + "/vars_" + f.getEntryPoint() + ".c";
                try (PrintWriter pw = new PrintWriter(new FileWriter(p))) {
                    pw.print(r.getDecompiledFunction().getC());
                }
                println("wrote " + p + " (" + f.getBody().getNumAddresses() + " bytes)");
            }
        }
        dec.dispose();
    }
}
