// Name the constants the terrain ops branch on.
//  - DAT_113c1280 : the value CIsInTheAir leaves in its accumulator when the entity's physics check fails,
//                   i.e. the answer it gives when it never queries the ground at all.
//  - the four globals CCheckTerrainDis compares its param-1 against: its comparison operators.
//  - DAT_1130a4ac / DAT_1130a4b0 : already known to be "Up" / "Down", re-dumped as a control.
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.Memory;

public class CgTerrainConsts extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/terrainops";

    static final long[] AS_FLOAT = { 0x113c1280L };
    static final long[] AS_STRING = {
        0x1130a4acL, 0x1130a4b0L,                                   // control: "Up" / "Down"
        0x1130a4d0L, 0x113a3314L, 0x1130a4d4L, 0x113a33e4L,         // CheckTerrainDis comparison operators
    };

    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        StringBuilder sb = new StringBuilder();

        sb.append("== floats ==\n");
        for (long g : AS_FLOAT) {
            try {
                int raw = mem.getInt(toAddr(g));
                sb.append(String.format("  DAT_%08x = 0x%08x = %g%n", g, raw, Float.intBitsToFloat(raw)));
            } catch (Exception e) { sb.append(String.format("  DAT_%08x unreadable%n", g)); }
        }

        sb.append("\n== inline strings ==\n");
        for (long g : AS_STRING) {
            StringBuilder s = new StringBuilder();
            try {
                for (int i = 0; i < 32; i++) {
                    byte c = mem.getByte(toAddr(g + i));
                    if (c == 0) break;
                    s.append((char) (c & 0xFF));
                }
                sb.append(String.format("  DAT_%08x = \"%s\"%n", g, s));
            } catch (Exception e) { sb.append(String.format("  DAT_%08x unreadable%n", g)); }
        }

        // The three still-missing classes: locate their name literals however they are stored.
        sb.append("\n== hunting the missing class-name literals ==\n");
        for (String cls : new String[] { "CCheckCollideWithWall", "CIsOnVolume", "CIsOnSameVolume" }) {
            byte[] pat = (cls + "\0").getBytes();
            boolean any = false;
            for (var b : mem.getBlocks()) {
                if (!b.isInitialized()) continue;
                var a = b.getStart();
                while (a != null && a.compareTo(b.getEnd()) < 0) {
                    var f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                    if (f == null) break;
                    any = true;
                    int prev = -1;
                    try { prev = mem.getByte(f.subtract(1)) & 0xFF; } catch (Exception ignored) { }
                    sb.append(String.format("  %-22s at 0x%s in %s, preceding byte 0x%02x%n",
                        cls, f, b.getName(), prev));
                    a = f.add(1);
                }
            }
            if (!any) sb.append(String.format("  %-22s NOT PRESENT in initialised memory%n", cls));
        }

        try (FileWriter w = new FileWriter(new File(OUT, "consts.txt"))) { w.write(sb.toString()); }
        println(sb.toString());
    }
}
