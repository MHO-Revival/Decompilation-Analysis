// Settle the two port-table questions the decompile left ambiguous.
//
// GetConfiguration builds its SInputPortConfig / SOutputPortConfig arrays into GLOBALS at runtime, so the
// arrays are empty in the file at rest and only the code says how many entries there are. The decompiler
// rendered some entries as globals and some as stack locals in the same function, which is why counting
// literals gave inconsistent answers. The instruction stream does not have that ambiguity.
//
// What turns on it:
//   * IS THERE A THIRD OUTPUT PORT? ProcessEvent fires output port 2 the moment a command is accepted
//     (ActivatePort with SFlowAddress{port=2,isOutput=1}), but the config appears to declare only
//     EOP_Succeeded (0) and EOP_Failed (1). Meanwhile the shipped graphs wire a `Done` port on 11
//     `Game:AIGoto` nodes and 1 `Game:AIFlee`. Either `Done` is that third port and 12 authored edges must
//     fire on accept, or it is a stale name from an older editor and those edges are dead.
//   * IS `Path` A REAL PORT? All 79 shipped `Game:AIFlowPath` nodes author a `Path` input naming a level path
//     entity ("AIPath16", "NPCPath_Island04_1"), yet FollowPath's config seems to declare only
//     Start/AINetId/no_use. If it is not declared, the command carries no path and the AI chooses its own.
//
// Dumps the full instruction stream of three configs — FollowPath (the simplest), Goto and Flee (the two
// classes with `Done` edges) — resolving every immediate that points at a string.
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;

public class CgFgAi3 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/fgai";

    static final long[] CONFIGS = { 0x10786d70L, 0x107874b0L, 0x1078c260L };
    static final String[] NAMES = { "FollowPath_cfg", "Goto_cfg", "Flee_cfg" };

    Memory mem;

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        new File(OUT).mkdirs();
        var sb = new StringBuilder();

        for (int i = 0; i < CONFIGS.length; i++) {
            Function f = getFunctionContaining(toAddr(CONFIGS[i]));
            sb.append(String.format("%n################ %s @ %08x%n", NAMES[i], CONFIGS[i]));
            if (f == null) { sb.append("  not disassembled\n"); continue; }

            Address a = f.getEntryPoint();
            while (a != null && f.getBody().contains(a)) {
                Instruction insn = getInstructionAt(a);
                if (insn == null) break;
                String text = insn.toString();
                // Annotate any operand that resolves to a readable string — port names and help text.
                StringBuilder note = new StringBuilder();
                for (int op = 0; op < insn.getNumOperands(); op++) {
                    Object[] objs = insn.getOpObjects(op);
                    for (Object o : objs) {
                        long v;
                        if (o instanceof ghidra.program.model.scalar.Scalar s) v = s.getUnsignedValue();
                        else if (o instanceof Address ad) v = ad.getOffset();
                        else continue;
                        String str = readStringAt(v);
                        if (str != null && str.length() > 1) note.append("  ; \"").append(str).append('"');
                    }
                }
                sb.append(String.format("  %08x  %-46s%s%n", a.getOffset(), text, note));
                try { a = insn.getMaxAddress().add(1); } catch (Exception e) { break; }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "cfgdisasm_" + currentProgram.getName() + ".txt"))) {
            w.write(sb.toString());
        }
        println("CgFgAi3 -> " + OUT);
    }

    String readStringAt(long addr) {
        if (addr < 0x10001000L || addr > 0x11400000L) return null;
        var s = new StringBuilder();
        try {
            for (int i = 0; i < 64; i++) {
                int c = mem.getByte(toAddr(addr + i)) & 0xff;
                if (c == 0) break;
                if (c < 0x20 || c > 0x7e) return null;
                s.append((char) c);
            }
        } catch (Exception e) { return null; }
        return s.length() == 0 ? null : s.toString();
    }
}
