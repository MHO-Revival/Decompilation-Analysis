// Constants used by the TargetOrientation computation (CSetTargetIDOrientation::Evaluate FUN_105d3220
// and the identical math inside FUN_10579750, used by CEntityRotateToTarget).
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.Memory;

public class CgConst3 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btrot2";

    static final Object[][] DATA = {
        {"rad2deg?      DAT_1130193c", 0x1130193cL},
        {"180?          DAT_11301d98", 0x11301d98L},
        {"360?          DAT_11301ccc", 0x11301cccL},
        {"xy scale      DAT_112fcb00", 0x112fcb00L},
        {"rsqrt guard   DAT_112fca5c", 0x112fca5cL},
        {"pos eps       DAT_112fca68", 0x112fca68L},
        {"spline K      DAT_112fca7c", 0x112fca7cL},
    };

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) return;
        Memory mem = currentProgram.getMemory();
        new File(OUT).mkdirs();
        StringBuilder d = new StringBuilder();
        for (Object[] row : DATA) {
            long a = (Long) row[1];
            int  i32 = mem.getInt(toAddr(a));
            long i64 = mem.getLong(toAddr(a));
            d.append(String.format("%-30s @%08x  f32=%-18s f64=%-22s u32=0x%08x%n",
                row[0], a, Float.intBitsToFloat(i32), Double.longBitsToDouble(i64), i32 & 0xFFFFFFFFL));
        }
        try (FileWriter w = new FileWriter(new File(OUT, "consts4.txt"))) { w.write(d.toString()); }
        println(d.toString());
    }
}
