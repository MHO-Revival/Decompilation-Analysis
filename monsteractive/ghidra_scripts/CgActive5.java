// Stage 5: byte-scan the image for pointers to the 0x210 notify stubs (vtable slots), and locate the
// facade Register-family so the subscriber can be found via its vtable slot index.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgActive5 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/monsteractive";
    static final long[] TARGETS = {
        0x1061fb40L,  // broadcast stub cmd 0x210
        0x1061fb10L,  // raw list insert +0x3f0
        0x106436e0L,  // facade register (mgr@+0x3c) for +0x3f0
        0x10620fd0L,  // broadcast stub cmd 0x280 (640) -- control
        0x10621040L,  // broadcast stub cmd 0x281 (641) -- control
    };
    StringBuilder out = new StringBuilder();

    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        // gather all initialized bytes per block once
        for (long t : TARGETS) {
            out.append("\n### pointer scan for 0x").append(Long.toHexString(t)).append('\n');
            byte[] pat = new byte[]{(byte) (t & 0xff), (byte) ((t >> 8) & 0xff), (byte) ((t >> 16) & 0xff), (byte) ((t >> 24) & 0xff)};
            for (MemoryBlock b : mem.getBlocks()) {
                if (!b.isInitialized()) continue;
                Address a = b.getStart();
                while (a != null && !monitor.isCancelled()) {
                    Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                    if (f == null) break;
                    out.append("  hit @").append(f).append("  block=").append(b.getName());
                    Function cf = getFunctionContaining(f);
                    if (cf != null) out.append("  (inside ").append(cf.getName()).append(")");
                    out.append('\n');
                    a = f.add(1);
                    if (a.compareTo(b.getEnd()) >= 0) break;
                }
            }
        }
        FileWriter w = new FileWriter(new File(OUT, "stage5.txt"));
        w.write(out.toString()); w.close();
        println("wrote stage5.txt (" + out.length() + ")");
    }
}
