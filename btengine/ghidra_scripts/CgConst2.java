// Dump the scale/threshold constants used by the BT movement evaluators, and locate the locomotion
// component class (the object the move/rotate ops drive through vtable slots 0x380..0x404).
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgConst2 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btdeep";

    static final Object[][] DATA = {
        {"CEntityMove dt-scale A  DAT_113c12f8", 0x113c12f8L},
        {"CEntityMove dt-scale B  DAT_112fe81c", 0x112fe81cL},
        {"CEntityMove arrive eps  DAT_113076e8", 0x113076e8L},
        {"MoveToPos duration K   _DAT_11307984", 0x11307984L},
        {"MoveTo* arrive eps      DAT_113c12b8", 0x113c12b8L},
        {"rotate/move stop eps    DAT_112fca80", 0x112fca80L},
        {"RotateByAnim K          DAT_113c12c8", 0x113c12c8L},
        {"fabs mask               DAT_112fcb10", 0x112fcb10L},
        {"zero                    DAT_113c1280", 0x113c1280L},
        {"locomotion state str    DAT_1139eb9e", 0x1139eb9eL},
        {"gEnv-ish                DAT_113f3a18", 0x113f3a18L},
    };

    Memory mem; ghidra.program.model.listing.FunctionManager fm;
    long TX_LO = 0x10001000L, TX_HI = 0x112fac00L;
    long RD_LO = 0x112fb000L, RD_HI = 0x116fae87L;

    int byteAt(long a){ try { return mem.getByte(toAddr(a)) & 0xFF; } catch (Exception e){ return -1; } }
    long dwAt(long a){ try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e){ return -1; } }
    long qwAt(long a){ try { return mem.getLong(toAddr(a)); } catch (Exception e){ return 0; } }
    boolean isFn(long v){ return v >= TX_LO && v < TX_HI && fm.getFunctionAt(toAddr(v)) != null; }

    String cstr(long a, int max){
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < max; i++) { int b = byteAt(a + i); if (b <= 0) break;
            sb.append(b >= 32 && b < 127 ? (char) b : '.'); }
        return sb.toString();
    }

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) return;
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        new File(OUT).mkdirs();
        StringBuilder d = new StringBuilder();

        for (Object[] row : DATA) {
            long a = (Long) row[1];
            d.append("\n==== ").append(row[0]).append(String.format("  @%08x ====%n", a));
            StringBuilder hx = new StringBuilder();
            for (int i = 0; i < 16; i++) hx.append(String.format("%02x ", byteAt(a + i)));
            d.append("  hex   : ").append(hx).append("\n");
            d.append("  f32   : ").append(Float.intBitsToFloat((int) dwAt(a))).append("\n");
            d.append("  f64   : ").append(Double.longBitsToDouble(qwAt(a))).append("\n");
            d.append(String.format("  u32   : %d (0x%08x)%n", dwAt(a), dwAt(a)));
            d.append("  cstr  : \"").append(cstr(a, 40)).append("\"\n");
        }

        // --- locate large vtables (the locomotion component needs >= 0x404/4 + 1 = 258 slots) ---
        d.append("\n\n######## vtables with >= 200 consecutive function pointers ########\n");
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            long lo = b.getStart().getOffset(), hi = b.getEnd().getOffset();
            if (hi < RD_LO || lo >= RD_HI) continue;
            long a = Math.max(lo, RD_LO);
            while (a + 4 <= Math.min(hi, RD_HI)) {
                if (!isFn(dwAt(a))) { a += 4; continue; }
                long start = a; int n = 0;
                while (a + 4 <= hi && isFn(dwAt(a))) { a += 4; n++; }
                if (n >= 200) {
                    d.append(String.format("%n  VTABLE %08x  %d slots%n", start, n));
                    long[] probes = { 0xac, 0xb4, 0x274, 0x380, 0x3a4, 0x3ac, 0x3b4, 0x3ec, 0x3f4, 0x404 };
                    for (long p : probes) {
                        if (p / 4 >= n) { d.append(String.format("    +0x%03x : <beyond table>%n", p)); continue; }
                        long fp = dwAt(start + p);
                        Function f = fm.getFunctionAt(toAddr(fp));
                        d.append(String.format("    +0x%03x : %08x  %-16s %d bytes%n", p, fp,
                            f == null ? "?" : f.getName(), f == null ? 0 : f.getBody().getNumAddresses()));
                    }
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "consts2.txt"))) { w.write(d.toString()); }
        println("[CgConst2] wrote " + OUT + "/consts2.txt");
    }
}
