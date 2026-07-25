// Close the remaining open questions from the movement/orientation RE:
//   1. ctx+0xd8 -- the flag that selects between each op's two implementations. Decides whether the
//      TargetOrientation-publishing branch is the live one. Find the object it lives on by decompiling the
//      shared node vtable slots (which set node+0x20 / node+0x2c) and counting who tests it.
//   2. CEntityRotateToPos param names (registrar FUN_105759b0) -- needed to know whether its param 1 write
//      is TargetOrientation, i.e. whether our Pos branch should publish too.
//   3. The -1.0 XY factor: read the orientation helpers FUN_10552f00 / FUN_10552be0 / FUN_104878c0 to fix
//      the yaw convention and see whether the negation cancels.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.MemoryBlock;

public class CgFinish extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btfinish";

    static final Object[][] FNS = {
        {"nodeVtbl0_init_103d8a40",      0x103d8a40L},
        {"nodeVtbl1_103d8b60",           0x103d8b60L},
        {"nodeVtbl2_103dca70",           0x103dca70L},
        {"nodeVtbl3_shared_103dc9e0",    0x103dc9e0L},
        {"rotToPos_registrar_105759b0",  0x105759b0L},
        {"oriFromDirUp_10552f00",        0x10552f00L},
        {"anglesFromOri_10552be0",       0x10552be0L},
        {"oriFromFwd_104878c0",          0x104878c0L},
        {"ctxFlagSetter_103e0540",       0x103e0540L},
        {"ctxFlagSet1_103e0ef0",         0x103e0ef0L},
    };

    DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;

    String decomp(long a){
        Function f = fm.getFunctionAt(toAddr(a));
        if (f == null) f = fm.getFunctionContaining(toAddr(a));
        if (f == null) return "// <no fn @" + Long.toHexString(a) + ">\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 200, monitor);
            if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC();
        } catch (Exception e) { return "// <exc>\n"; }
        return "// <fail>\n";
    }

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) return;
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        StringBuilder src = new StringBuilder();
        for (Object[] row : FNS) {
            Function f = fm.getFunctionAt(toAddr((Long) row[1]));
            src.append("\n// ######## ").append(row[0])
               .append(f == null ? "" : "  (" + f.getBody().getNumAddresses() + " bytes)")
               .append(" ########\n").append(decomp((Long) row[1]));
        }

        // --- who TESTS [reg+0xd8] as a byte? If it is a BT-wide mode switch, the readers should be
        //     overwhelmingly the op Evaluates, all in the 1055xxxx-105fxxxx band.
        StringBuilder rep = new StringBuilder();
        LinkedHashMap<String, Integer> readers = new LinkedHashMap<>();
        int hits = 0;
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            if (!b.isExecute()) continue;
            Instruction ins = getInstructionAt(b.getStart());
            while (ins != null && ins.getAddress().compareTo(b.getEnd()) <= 0) {
                String s = ins.toString();
                if ((s.startsWith("CMP byte ptr [") || s.startsWith("MOVZX") || s.startsWith("TEST byte ptr ["))
                        && s.contains("0xd8]")) {
                    Function f = fm.getFunctionContaining(ins.getAddress());
                    String k = f == null ? "(no fn)" : f.getName();
                    readers.merge(k, 1, Integer::sum);
                    hits++;
                }
                ins = ins.getNext();
            }
        }
        rep.append("BYTE reads of [reg+0xd8]: ").append(hits).append(" sites in ")
           .append(readers.size()).append(" functions\n");
        int shown = 0;
        for (Map.Entry<String, Integer> e : readers.entrySet()) {
            rep.append(String.format("  %-24s x%d%n", e.getKey(), e.getValue()));
            if (++shown > 60) { rep.append("  ...\n"); break; }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "finish.c"))) { w.write(src.toString()); }
        try (FileWriter w = new FileWriter(new File(OUT, "flag_readers.txt"))) { w.write(rep.toString()); }
        dec.dispose();
        println("[CgFinish] wrote " + OUT);
    }
}
