// Decompile the FILTER node OnChildComplete/OnStart bodies (CryGame classic BT engine).
// The traversal audit found Enter_Exit/Loop/Counter/Timer/Logger are unmodelled in the server (passthrough).
// Vtables (from vtbl_slots.txt): Filter_Non 11dbc10c, Filter_Logger 11dbc210, Filter_Loop 11dbc264,
// Filter_base 11dbc35c, Filter_EnterExit 11dbc3b0. Decompile every code slot of each.
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;

public class CgFilters extends GhidraScript {
    static final String OUT = "/home/fallen/.claude/jobs/58b1921c/tmp/filters";
    DecompInterface dec; FunctionManager fm;
    final Set<Long> done = new HashSet<>();
    long[] VT = {0x11dbc10cL, 0x11dbc210L, 0x11dbc264L, 0x11dbc35cL, 0x11dbc3b0L};
    String[] NM = {"Filter_Non", "Filter_Logger", "Filter_Loop", "Filter_base", "Filter_EnterExit"};

    String decomp(Function f) { if (f == null) return "// <no fn>\n";
        try { DecompileResults r = dec.decompileFunction(f, 90, monitor);
              if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC(); } catch (Exception e) {}
        return "// <fail " + f.getEntryPoint() + ">\n"; }
    Function fn(long a) { Address ad = toAddr(a); Function f = fm.getFunctionAt(ad);
        if (f == null) f = fm.getFunctionContaining(ad);
        if (f == null) { try { f = createFunction(ad, null); } catch (Exception e) {} } return f; }
    boolean isCode(long p) { try { Address a = toAddr(p);
        return fm.getFunctionContaining(a) != null || getInstructionAt(a) != null; } catch (Exception e) { return false; } }

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("crygame")) { println("skip " + currentProgram.getName()); return; }
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        for (int k = 0; k < VT.length; k++) {
            StringBuilder sb = new StringBuilder("// ===== " + NM[k] + " vtbl=" + Long.toHexString(VT[k]) + " =====\n");
            for (int i = 0; i < 20; i++) {
                long p;
                try { p = getInt(toAddr(VT[k] + i * 4)) & 0xffffffffL; } catch (Exception e) { break; }
                if (!isCode(p)) break;
                sb.append("//   [" + i + "] " + String.format("%08x", p) + "\n");
                if (done.add(p)) sb.append("\n// --- slot[" + i + "] fn " + String.format("%08x", p) + " ---\n" + decomp(fn(p)));
            }
            try (FileWriter w = new FileWriter(OUT + "/" + NM[k] + ".c")) { w.write(sb.toString()); }
            println("  " + NM[k] + " done");
        }
        println("CgFilters done");
    }
}
