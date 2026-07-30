// Who calls the function(s) at the given hex addresses? Argument-driven companion to CgCallersOf (whose target
// list is hardcoded per investigation).
//
// Finds DIRECT callers by scanning for `CALL rel32` whose target is the function — this catches static calls a
// vtable scan cannot — then decompiles each caller. Also reports .rdata slots holding the address, since a
// function reached only through a vtable has no CALL rel32 anywhere.
//
//   -postScript CgCallers.java 10a672e0
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;

public class CgCallers extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/callers";
    static final int MAX_DECOMPILE = 8;

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        StringBuilder rep = new StringBuilder();

        for (String arg : getScriptArgs()) {
            long target = Long.parseLong(arg.replace("0x", ""), 16);
            rep.append("================ callers of ").append(Long.toHexString(target)).append('\n');

            Set<Long> callers = new LinkedHashSet<>();
            // CALL rel32 = E8 <disp>, where disp = target - (siteAddr + 5)
            for (MemoryBlock b : mem.getBlocks()) {
                if (!b.isInitialized() || !b.isExecute()) continue;
                Address at = b.getStart();
                while (at != null) {
                    at = mem.findBytes(at, b.getEnd(), new byte[] { (byte) 0xE8 }, null, true, monitor);
                    if (at == null) break;
                    try {
                        int disp = mem.getInt(at.add(1));
                        if (at.getOffset() + 5 + disp == target) {
                            Function h = fm.getFunctionContaining(at);
                            rep.append(String.format("  call at %08x  in %s%n", at.getOffset(),
                                    h == null ? "(no function)" : h.getName() + " @" + h.getEntryPoint()));
                            if (h != null) callers.add(h.getEntryPoint().getOffset());
                        }
                    } catch (Exception ignored) { }
                    try { at = at.add(1); } catch (Exception e) { break; }
                }
            }

            // vtable slots holding it
            byte[] ptr = { (byte) target, (byte) (target >> 8), (byte) (target >> 16), (byte) (target >> 24) };
            for (MemoryBlock b : mem.getBlocks()) {
                if (!b.isInitialized() || b.isExecute()) continue;
                Address at = b.getStart();
                while (at != null) {
                    at = mem.findBytes(at, b.getEnd(), ptr, null, true, monitor);
                    if (at == null) break;
                    rep.append(String.format("  table slot at %08x (%s)%n", at.getOffset(), b.getName()));
                    try { at = at.add(1); } catch (Exception e) { break; }
                }
            }

            int wrote = 0;
            for (long c : callers) {
                if (wrote++ >= MAX_DECOMPILE) break;
                Function f = fm.getFunctionAt(toAddr(c));
                if (f == null) continue;
                DecompileResults r = dec.decompileFunction(f, 240, monitor);
                if (r == null || r.getDecompiledFunction() == null) continue;
                String p = OUT + "/" + f.getName().replaceAll("[^A-Za-z0-9_]", "_") + "_"
                         + Long.toHexString(c) + ".c";
                try (PrintWriter pw = new PrintWriter(new FileWriter(p))) { pw.print(r.getDecompiledFunction().getC()); }
                rep.append("  wrote ").append(p).append('\n');
            }
        }
        dec.dispose();
        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(rep.toString());
        }
        println(rep.toString());
    }
}
