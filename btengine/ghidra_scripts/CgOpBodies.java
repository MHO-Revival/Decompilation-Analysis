// Decompile the BT leaf-op EXECUTE bodies: factory FUN_105fc120 -> creators -> vtables -> op methods.
// The rt_*.c pass got op SCHEMAS only (vm=0). This resolves each op's vtable via its creator/ctor and
// decompiles the vtable slots (the Evaluate/OnUpdate execute logic we've been inferring).
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.*;
import ghidra.program.model.symbol.*;

public class CgOpBodies extends GhidraScript {
    static final String OUT = "/home/fallen/.claude/jobs/58b1921c/tmp/opbodies";
    DecompInterface dec; FunctionManager fm;
    final Set<Long> decompiled = new HashSet<>();

    String decomp(Function f) {
        if (f == null) return "// <no fn>\n";
        try { DecompileResults r = dec.decompileFunction(f, 120, monitor);
              if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC(); } catch (Exception e) {}
        return "// <fail " + f.getEntryPoint() + ">\n";
    }
    Function fn(long a) { Address ad = toAddr(a); Function f = fm.getFunctionAt(ad);
        if (f == null) f = fm.getFunctionContaining(ad);
        if (f == null) { try { f = createFunction(ad, null); } catch (Exception e) {} } return f; }

    boolean isCode(long p) { try { Address a = toAddr(p);
        return fm.getFunctionContaining(a) != null || getInstructionAt(a) != null; } catch (Exception e) { return false; } }

    // Read consecutive 4-byte pointers that look like a vtable (ptrs into .text).
    List<Long> vtable(long va) {
        List<Long> s = new ArrayList<>();
        try { for (int i = 0; i < 48; i++) {
            long p = getInt(toAddr(va + i * 4)) & 0xffffffffL;
            if (!isCode(p)) break; s.add(p);
        } } catch (Exception e) {}
        return s;
    }
    // addresses (Scalar OR Address operands, plus resolved references) in a function within a range
    Set<Long> scalarsInRange(Function f, long lo, long hi) {
        Set<Long> out = new TreeSet<>();
        if (f == null) return out;
        for (Instruction in = getInstructionAt(f.getEntryPoint());
             in != null && f.getBody().contains(in.getAddress()); in = in.getNext()) {
            for (Reference r : in.getReferencesFrom()) { long v = r.getToAddress().getOffset();
                if (v >= lo && v < hi) out.add(v); }
            for (int op = 0; op < in.getNumOperands(); op++)
                for (Object o : in.getOpObjects(op)) {
                    long v = -1;
                    if (o instanceof Scalar) v = ((Scalar) o).getUnsignedValue();
                    else if (o instanceof Address) v = ((Address) o).getOffset();
                    if (v >= lo && v < hi) out.add(v);
                }
        }
        return out;
    }
    void write(String n, String s) throws IOException { try (FileWriter w = new FileWriter(OUT + "/" + n)) { w.write(s); } }

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) { println("skip " + currentProgram.getName()); return; }
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        Function fac = fn(0x105fc120L);
        write("factory.c", decomp(fac));

        // creators = functions referenced (as scalars) by the factory, in the CryGame .text range
        Set<Long> creators = new TreeSet<>();
        for (long v : scalarsInRange(fac, 0x10000000L, 0x10a00000L))
            if (fm.getFunctionContaining(toAddr(v)) != null)
                creators.add(fm.getFunctionContaining(toAddr(v)).getEntryPoint().getOffset());

        StringBuilder idx = new StringBuilder("== creators referenced by factory FUN_105fc120 ==\n");
        for (long c : creators) idx.append(String.format("  %08x%n", c));
        idx.append("\n== per-creator vtables + Evaluate candidates ==\n");

        for (long c : creators) {
            Function cf = fn(c); if (cf == null) continue;
            StringBuilder sb = new StringBuilder("// ===== creator " + String.format("%08x", c) + " =====\n" + decomp(cf) + "\n");
            // vtable candidates: .rdata addresses (0x113xxxxx..0x11e00000) referenced by the creator OR its direct callees
            Set<Long> scan = new TreeSet<>(); scan.add(c);
            for (Function cal : cf.getCalledFunctions(monitor)) scan.add(cal.getEntryPoint().getOffset());
            Set<Long> vts = new TreeSet<>();
            for (long s : scan)
                for (long v : scalarsInRange(fn(s), 0x10000000L, 0x12000000L))
                    if (vtable(v).size() >= 4) vts.add(v);
            for (long vt : vts) {
                List<Long> slots = vtable(vt);
                sb.append("// vtable @" + String.format("%08x", vt) + " (" + slots.size() + " slots)\n");
                for (int i = 0; i < slots.size(); i++) sb.append(String.format("//   [%2d] %08x%n", i, slots.get(i)));
                idx.append(String.format("  creator %08x -> vtable %08x (%d slots)%n", c, vt, slots.size()));
                for (long s : new TreeSet<>(slots))
                    if (decompiled.add(s)) sb.append("\n// --- vtbl fn " + String.format("%08x", s) + " ---\n" + decomp(fn(s)));
            }
            write("creator_" + String.format("%08x", c) + ".c", sb.toString());
        }
        write("_index.txt", idx.toString());
        println("CgOpBodies done: " + creators.size() + " creators");
    }
}
