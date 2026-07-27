// Decompile a single function by address (task #89: FUN_105c4b40, FindLogicPoint's point-selection
// discriminator — the one op in that family em003 actually uses).
// @category MHO
import java.io.File;
import java.io.FileWriter;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class CgOne extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/terrainops";
    static final long[] TARGETS = { 0x105c4b40L };

    @Override
    public void run() throws Exception {
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        for (long a : TARGETS) {
            Address ad = toAddr(a);
            Function f = getFunctionContaining(ad);
            if (f == null) { try { f = createFunction(ad, null); } catch (Exception ignored) { } }
            String c = "// no function at " + Long.toHexString(a) + "\n";
            if (f != null) {
                DecompileResults r = dec.decompileFunction(f, 240, monitor);
                if (r != null && r.getDecompiledFunction() != null) c = r.getDecompiledFunction().getC();
            }
            try (FileWriter w = new FileWriter(new File(OUT, "FUN_" + Long.toHexString(a) + ".c"))) { w.write(c); }
            println("wrote FUN_" + Long.toHexString(a));
        }
    }
}
