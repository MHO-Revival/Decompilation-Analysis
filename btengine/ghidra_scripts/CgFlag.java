// Every BT op's Evaluate begins with `if (*(char*)(*(int*)(this+0x20) + 0xd8) == 0) return <otherFn>();`
// so that one flag on the shared tree context selects between two whole implementations. It decides
// whether TargetOrientation is rewritten every tick (FUN_10578bd0, which does PUSH 4 -> param write) or
// only RotateSpeed is (FUN_10578a00). Find who WRITES ctx+0xd8 so the flag can be named.
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
import ghidra.program.model.mem.Memory;

public class CgFlag extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btrot2";

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) return;
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep = new StringBuilder();

        // Walk every instruction in .text looking for a BYTE store to [reg + 0xd8].
        // Reads are everywhere (every op tests it); only stores identify the owner.
        LinkedHashMap<String, List<String>> stores = new LinkedHashMap<>();
        int scanned = 0;
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isExecute()) continue;
            Instruction ins = getInstructionAt(b.getStart());
            while (ins != null && ins.getAddress().compareTo(b.getEnd()) <= 0) {
                scanned++;
                String s = ins.toString();
                if (s.startsWith("MOV byte ptr [") && s.contains("0xd8]")) {
                    Function f = fm.getFunctionContaining(ins.getAddress());
                    String key = f == null ? "(no fn)" : f.getName() + "@" + f.getEntryPoint();
                    stores.computeIfAbsent(key, k -> new ArrayList<String>())
                          .add(ins.getAddress() + "  " + s);
                }
                ins = ins.getNext();
            }
        }
        rep.append("scanned ").append(scanned).append(" instructions\n");
        rep.append("BYTE stores to [reg+0xd8]: ").append(stores.size()).append(" distinct functions\n");
        for (Map.Entry<String, List<String>> e : stores.entrySet()) {
            rep.append("\n== ").append(e.getKey()).append("\n");
            for (String s : e.getValue()) rep.append("    ").append(s).append("\n");
        }

        // decompile the small ones so the flag's meaning is readable
        StringBuilder src = new StringBuilder();
        int emitted = 0;
        for (String key : stores.keySet()) {
            if (key.startsWith("(no fn)")) continue;
            long a = Long.parseLong(key.substring(key.indexOf('@') + 1), 16);
            Function f = fm.getFunctionAt(toAddr(a));
            if (f == null || f.getBody().getNumAddresses() > 1200) continue;
            if (++emitted > 12) break;
            src.append("\n// ######## ").append(key).append(" (")
               .append(f.getBody().getNumAddresses()).append(" bytes) ########\n");
            try {
                DecompileResults r = dec.decompileFunction(f, 150, monitor);
                src.append(r != null && r.decompileCompleted() ? r.getDecompiledFunction().getC() : "// <fail>\n");
            } catch (Exception ex) { src.append("// <exc>\n"); }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "flag_report.txt"))) { w.write(rep.toString()); }
        try (FileWriter w = new FileWriter(new File(OUT, "flag.c"))) { w.write(src.toString()); }
        dec.dispose();
        println("[CgFlag] " + stores.size() + " writer functions -> " + OUT);
    }
}
