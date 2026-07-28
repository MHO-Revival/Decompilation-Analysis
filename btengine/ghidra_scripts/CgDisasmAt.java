// Force-disassemble an address the auto-analysis skipped, then decompile it.
//
// CIsLastEdgeInPath::Evaluate sits at 105aefc0 — located via the getter/vtable chain, but Ghidra never decoded
// that address, and per CLAUDE.md "no fn at <addr>" means "not disassembled", not "no code". The op is shipped
// server-side on an unverified guess (single-edge path ⇒ always the last edge), so decode it and read it.
//
// Takes addresses as script args; creates a function at each if one does not exist already.
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;

public class CgDisasmAt extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/evalof";

    @Override
    public void run() throws Exception {
        var dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        var sb = new StringBuilder();

        for (String arg : getScriptArgs()) {
            long addr = Long.parseLong(arg.replace("0x", ""), 16);
            Address a = toAddr(addr);
            sb.append(String.format("================ %08x%n", addr));

            Function f = getFunctionContaining(a);
            if (f == null) {
                // Decode first, then declare a function at the entry. Both can fail independently, so report which.
                boolean ok = disassemble(a);
                sb.append("  disassemble(): ").append(ok).append('\n');
                f = getFunctionAt(a);
                if (f == null) {
                    try {
                        f = createFunction(a, null);
                        sb.append("  createFunction(): ").append(f != null).append('\n');
                    } catch (Exception e) {
                        sb.append("  createFunction() threw: ").append(e).append('\n');
                    }
                }
            } else {
                sb.append("  already a function: ").append(f.getName()).append('\n');
            }

            if (f == null) { sb.append("  STILL no function — cannot decompile\n\n"); continue; }

            sb.append(String.format("  %s @%08x (%d bytes)%n",
                    f.getName(), f.getEntryPoint().getOffset(), f.getBody().getNumAddresses()));

            Address p = f.getEntryPoint();
            while (p != null && f.getBody().contains(p)) {
                Instruction insn = getInstructionAt(p);
                if (insn == null) break;
                sb.append(String.format("    %08x  %s%n", p.getOffset(), insn.toString()));
                try { p = insn.getMaxAddress().add(1); } catch (Exception e) { break; }
            }

            sb.append("  ---- decompiled ----\n");
            DecompileResults r = dec.decompileFunction(f, 200, monitor);
            sb.append(r != null && r.getDecompiledFunction() != null
                    ? r.getDecompiledFunction().getC() : "// nothing\n");
            sb.append('\n');
        }

        try (FileWriter w = new FileWriter(new File(OUT, "disasm_" + currentProgram.getName() + ".txt"))) {
            w.write(sb.toString());
        }
        println("CgDisasmAt -> " + OUT);
    }
}
