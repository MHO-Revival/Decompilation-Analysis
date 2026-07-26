// Stage 7: decompile the functions that decide (a) what the notify hub's slot1/slot6 really do
// (send vs register vs UI-event), and (b) what the client's monster receive handlers apply.
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class CgActive7 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/monsteractive";
    static final Object[][] TARGETS = {
        {"hub_slot1_0x104d08e0",       0x104d08e0L},
        {"hub_slot6_0x104d0d70",       0x104d0d70L},
        {"hub_getter_0x10d17870",      0x10d17870L},
        {"recv640_handler_0x10924760", 0x10924760L},
        {"recv648_cb_0x109bab40",      0x109bab40L},
        {"recv645_cb_0x1084f360",      0x1084f360L},
        {"site641_a_0x112e3e70",       0x112e3e70L},
        {"site641_b_0x112e5150",       0x112e5150L},
        {"site648_0x10e4a7d3_owner",   0x10e4a7d3L},
        {"flashbridge528_0x10589e40",  0x10589e40L},
    };

    @Override
    public void run() throws Exception {
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        StringBuilder out = new StringBuilder();
        for (Object[] t : TARGETS) {
            long a = (Long) t[1];
            Address ad = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(a);
            Function f = getFunctionContaining(ad);
            out.append("\n\n// ================= ").append(t[0]).append("  (")
               .append(f == null ? "no function" : f.getName() + " @" + f.getEntryPoint()
                       + " size=" + f.getBody().getNumAddresses())
               .append(") =================\n");
            if (f == null) continue;
            DecompileResults r = di.decompileFunction(f, 120, monitor);
            out.append(r != null && r.getDecompiledFunction() != null
                    ? r.getDecompiledFunction().getC() : "// FAILED\n");
        }
        di.dispose();
        FileWriter w = new FileWriter(new File(OUT, "stage7.c"));
        w.write(out.toString()); w.close();
        println("wrote stage7.c (" + out.length() + ")");
    }
}
