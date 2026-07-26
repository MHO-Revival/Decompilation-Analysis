// Where is Evaluate, relative to the .rdata slot that holds the class-name getter?
// CIsInTheAir is the control: getter 0x105f8d50 sits at 0x11310250, and its Evaluate is known to be
// 0x105f8bd0. Find which offset from that slot holds 0x105f8bd0 and the question is answered for every
// node class at once. Also dumps the CheckTerrainDis mode globals as raw CHARS — 0x6e776f44 is "Down",
// so they are inline string data, not pointers.
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.Memory;

public class CgSlotProbe extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/terrainops";
    static final long CONTROL_SLOT = 0x11310250L;   // .rdata address holding CIsInTheAir's name getter
    static final long CONTROL_EVAL = 0x105f8bd0L;   // its known Evaluate
    static final long[] MODES = { 0x1130a4acL, 0x1130a4b0L };

    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        StringBuilder sb = new StringBuilder();

        sb.append("== dwords around the control getter slot ==\n");
        int found = Integer.MIN_VALUE;
        for (int k = -20; k <= 20; k++) {
            long p = CONTROL_SLOT + k * 4L;
            try {
                long v = mem.getInt(toAddr(p)) & 0xFFFFFFFFL;
                boolean isEval = v == CONTROL_EVAL;
                if (isEval) found = k;
                sb.append(String.format("  %+3d  0x%08x -> 0x%08x%s%n", k, p, v, isEval ? "   <== Evaluate" : ""));
            } catch (Exception e) {
                sb.append(String.format("  %+3d  0x%08x  unreadable%n", k, p));
            }
        }
        sb.append(found == Integer.MIN_VALUE
            ? "\nRESULT: Evaluate NOT found within +-20 dwords of the getter slot.\n"
            : String.format("%nRESULT: Evaluate is at getterSlot %+d dwords (offset %+d bytes).%n", found, found * 4));

        sb.append("\n== CheckTerrainDis mode globals, read as inline chars ==\n");
        for (long g : MODES) {
            StringBuilder s = new StringBuilder();
            try {
                for (int i = 0; i < 16; i++) {
                    byte c = mem.getByte(toAddr(g + i));
                    if (c == 0) break;
                    s.append((char) (c & 0xFF));
                }
                sb.append(String.format("  DAT_%08x = \"%s\"%n", g, s));
            } catch (Exception e) {
                sb.append(String.format("  DAT_%08x unreadable%n", g));
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "slotprobe.txt"))) { w.write(sb.toString()); }
        println(sb.toString());
    }
}
