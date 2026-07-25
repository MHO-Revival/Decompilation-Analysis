// Raw disassembly for functions whose decompilation lost its call arguments (CAnimSequencePlay::
// Evaluate is 3135 bytes and Ghidra mis-infers the convention, hiding which param index each
// accessor reads -- which is exactly what MoveSplineScale / MoveSplineScaleNeedNormalized need).
// Also dumps the remaining float constants.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;

public class CgAsm extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btdeep2";

    static final Object[][] FNS = {
        {"asm_CAnimSequencePlay_Evaluate", 0x10554370L},
        {"asm_CDistanceCheck_Evaluate",    0x105f6ba0L},
        {"asm_CEntityMoveToTarget_drive",  0x10571000L},
    };

    static final long[] DATA = {
        0x112fcab0L, 0x112fcaacL, 0x112fce4cL, 0x113cc5e8L, 0x113cc5ecL, 0x113cc5f0L,
        0x113c12b8L, 0x1139eb9eL,
    };

    Memory mem;
    int byteAt(long a){ try { return mem.getByte(toAddr(a)) & 0xFF; } catch (Exception e){ return -1; } }
    long dwAt(long a){ try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e){ return -1; } }

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) return;
        mem = currentProgram.getMemory();
        new File(OUT).mkdirs();

        for (Object[] row : FNS) {
            long fa = (Long) row[1];
            Function f = currentProgram.getFunctionManager().getFunctionAt(toAddr(fa));
            if (f == null) { println("no fn @" + Long.toHexString(fa)); continue; }
            StringBuilder sb = new StringBuilder();
            sb.append("// ").append(f.getName()).append(" @").append(f.getEntryPoint())
              .append("  ").append(f.getBody().getNumAddresses()).append(" bytes\n");
            Instruction ins = getInstructionAt(f.getEntryPoint());
            while (ins != null && f.getBody().contains(ins.getAddress())) {
                sb.append(ins.getAddress()).append("  ").append(ins);
                // annotate call targets
                if (ins.getMnemonicString().startsWith("CALL")) {
                    try {
                        for (ghidra.program.model.address.Address t : ins.getFlows()) {
                            Function cf = currentProgram.getFunctionManager().getFunctionAt(t);
                            if (cf != null) sb.append("      ; -> ").append(cf.getName());
                        }
                    } catch (Exception e) {}
                }
                sb.append("\n");
                ins = ins.getNext();
            }
            try (FileWriter w = new FileWriter(new File(OUT, row[0] + ".asm"))) { w.write(sb.toString()); }
        }

        StringBuilder d = new StringBuilder();
        for (long a : DATA) {
            d.append(String.format("%08x  f32=%-16s u32=0x%08x  bytes=", a,
                     Float.intBitsToFloat((int) dwAt(a)), dwAt(a)));
            for (int i = 0; i < 8; i++) d.append(String.format("%02x ", byteAt(a + i)));
            StringBuilder s = new StringBuilder();
            for (int i = 0; i < 24; i++) { int b = byteAt(a + i); if (b <= 0) break;
                s.append(b >= 32 && b < 127 ? (char) b : '.'); }
            d.append("  str=\"").append(s).append("\"\n");
        }
        try (FileWriter w = new FileWriter(new File(OUT, "consts3.txt"))) { w.write(d.toString()); }
        println("[CgAsm] wrote " + OUT);
    }
}
