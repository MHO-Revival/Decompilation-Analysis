// List (and optionally decompile) functions whose SYMBOL matches a regex given as a script argument.
// CryGame.dll kept its symbols where CryAction did not, so enumeration beats string-hunting there.
//
//   -postScript CgSyms.java '(?i).*skillsequence.*'            list only
//   -postScript CgSyms.java '(?i).*playsequence.*' dump        list + decompile each match
// @category MHO
import java.io.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;

public class CgSyms extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/syms";

    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) { println("usage: CgSyms <regex> [dump]"); return; }
        String re = args[0];
        boolean dump = args.length > 1 && args[1].equalsIgnoreCase("dump");
        new File(OUT).mkdirs();

        DecompInterface dec = new DecompInterface();
        if (dump) dec.openProgram(currentProgram);
        int n = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (!f.getName().matches(re)) continue;
            n++;
            println(String.format("%s  %s (%d bytes)", f.getEntryPoint(), f.getName(),
                    f.getBody().getNumAddresses()));
            if (!dump) continue;
            DecompileResults r = dec.decompileFunction(f, 240, monitor);
            if (r == null || r.getDecompiledFunction() == null) continue;
            String p = OUT + "/" + f.getName().replaceAll("[^A-Za-z0-9_]", "_") + "_"
                     + Long.toHexString(f.getEntryPoint().getOffset()) + ".c";
            try (PrintWriter pw = new PrintWriter(new FileWriter(p))) { pw.print(r.getDecompiledFunction().getC()); }
            println("    -> " + p);
        }
        println("matches: " + n);
        if (dump) dec.dispose();
    }
}
