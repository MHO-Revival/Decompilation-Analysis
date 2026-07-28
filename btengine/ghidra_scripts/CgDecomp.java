// Decompile the function(s) at the given hex addresses. The general-purpose companion to CgStrAt / CgF —
// no searching, no analysis, just "show me this function", for when an address is already known from a
// roadmap citation or an earlier script's output.
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;

public class CgDecomp extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/decomp";

    @Override
    public void run() throws Exception {
        var dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        for (String arg : getScriptArgs()) {
            long addr = Long.parseLong(arg.replace("0x", ""), 16);
            Function f = getFunctionContaining(toAddr(addr));
            if (f == null) {
                println(String.format("%08x: no function (not disassembled — not the same as absent)", addr));
                continue;
            }
            DecompileResults r = dec.decompileFunction(f, 300, monitor);
            String c = r != null && r.getDecompiledFunction() != null
                    ? r.getDecompiledFunction().getC() : "// decompilation produced nothing\n";
            String name = f.getName().replaceAll("[^A-Za-z0-9_]", "_");
            File out = new File(OUT, currentProgram.getName() + "_" + name + "_"
                    + Long.toHexString(f.getEntryPoint().getOffset()) + ".c");
            try (FileWriter w = new FileWriter(out)) { w.write(c); }
            println(String.format("%08x -> %s (%d bytes) -> %s",
                    addr, f.getName(), f.getBody().getNumAddresses(), out.getName()));
        }
    }
}
