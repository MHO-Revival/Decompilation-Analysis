// Name-driven: find specific BT ops by their RTTI class-name, resolve ctor -> vtable, decompile the vtable
// methods (the Evaluate/OnUpdate execute bodies). CryAction only (real bodies live here, not CryGame).
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.scalar.*;
import ghidra.program.model.mem.*;

public class CgOpEval extends GhidraScript {
    static final String OUT = "/home/fallen/.claude/jobs/58b1921c/tmp/opeval";
    DecompInterface dec; FunctionManager fm; Memory mem;
    final Set<Long> done = new HashSet<>();
    // the ops that actually shape em003 (movement/rotation/distance/bearing/target/time/anim/damage)
    String[] OPS = {"CCheckHealth","CCheckBuff","CPercentageRandomCheck","CIsInAbsRange","CIsInTheAir",
        "CSenseEnemyDistance","CCheckTerrainDis","CBlackBoardCheckBBOPBB","CRandomNum","CRandomFloatNum",
        "CSetBlackBoardBBOPC","CSetBlackBoardBBOPBB","CBBValueCopy","CGetPartBroken","CGetDistanceToTarget"};

    String decomp(Function f) { if (f == null) return "// <no fn>\n";
        try { DecompileResults r = dec.decompileFunction(f, 120, monitor);
              if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC(); } catch (Exception e) {}
        return "// <fail " + f.getEntryPoint() + ">\n"; }
    Function fn(long a) { Address ad = toAddr(a); Function f = fm.getFunctionAt(ad);
        if (f == null) f = fm.getFunctionContaining(ad);
        if (f == null) { try { f = createFunction(ad, null); } catch (Exception e) {} } return f; }
    boolean isCode(long p) { try { Address a = toAddr(p);
        return fm.getFunctionContaining(a) != null || getInstructionAt(a) != null; } catch (Exception e) { return false; } }
    List<Long> vtable(long va) { List<Long> s = new ArrayList<>();
        try { for (int i = 0; i < 48; i++) { long p = getInt(toAddr(va + i * 4)) & 0xffffffffL;
            if (!isCode(p)) break; s.add(p); } } catch (Exception e) {} return s; }
    Set<Long> dataAddrs(Function f, long lo, long hi) { Set<Long> out = new TreeSet<>();
        if (f == null) return out;
        for (Instruction in = getInstructionAt(f.getEntryPoint());
             in != null && f.getBody().contains(in.getAddress()); in = in.getNext()) {
            for (Reference r : in.getReferencesFrom()) { long v = r.getToAddress().getOffset(); if (v >= lo && v < hi) out.add(v); }
            for (int op = 0; op < in.getNumOperands(); op++) for (Object o : in.getOpObjects(op)) {
                long v = -1; if (o instanceof Scalar) v = ((Scalar) o).getUnsignedValue();
                else if (o instanceof Address) v = ((Address) o).getOffset();
                if (v >= lo && v < hi) out.add(v);
            }
        } return out; }
    void write(String n, String s) throws IOException { try (FileWriter w = new FileWriter(OUT + "/" + n + ".c")) { w.write(s); } }

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) { println("skip " + currentProgram.getName()); return; }
        fm = currentProgram.getFunctionManager(); mem = currentProgram.getMemory();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        Address base = currentProgram.getMinAddress();

        for (String op : OPS) {
            StringBuilder sb = new StringBuilder("// ================= " + op + " =================\n");
            // RTTI type-descriptor mangled name; fallback to the bare class name
            Address td = mem.findBytes(base, (".?AV" + op + "@@").getBytes(), null, true, monitor);
            if (td == null) td = mem.findBytes(base, (op + "\0").getBytes(), null, true, monitor);
            if (td == null) { sb.append("// class-name string NOT FOUND\n"); write(op, sb.toString()); continue; }
            sb.append("// name string @" + td + "\n");
            // ctor/registrar functions reference the type-descriptor struct (name is at struct+8/0xC) or the name
            Set<Function> refs = new LinkedHashSet<>();
            for (long off : new long[]{0, -8, -0xC, -0x10})
                try { for (Reference r : getReferencesTo(td.add(off))) {
                    Function f = fm.getFunctionContaining(r.getFromAddress()); if (f != null) refs.add(f); } } catch (Exception e) {}
            sb.append("// " + refs.size() + " referencing functions (ctor/registrar candidates)\n");
            done.clear();
            for (Function f : refs) {
                // Skip the huge op factory (FUN_105fc120) — it references every op name and times out the
                // decompiler (~120s each), the cause of the earlier multi-hour stall. We want the REGISTRAR only.
                if (f.getEntryPoint().getOffset() == 0x105fc120L) { sb.append("\n// --- ref fn 105fc120 (factory, skipped) ---\n"); continue; }
                sb.append("\n// --- ref fn " + f.getEntryPoint() + " (" + f.getName() + ") ---\n" + decomp(f));
                // vtables the ctor sets (data addr whose contents are code ptrs)
                for (long v : dataAddrs(f, 0x10000000L, 0x12000000L)) {
                    List<Long> slots = vtable(v);
                    if (slots.size() < 4) continue;
                    sb.append("// vtable @" + String.format("%08x", v) + " (" + slots.size() + " slots)\n");
                    for (long s : slots) if (done.add(s))
                        sb.append("\n//   >> vtbl fn " + String.format("%08x", s) + "\n" + decomp(fn(s)));
                }
            }
            write(op, sb.toString());
            println("  " + op + ": " + refs.size() + " refs");
        }
        println("CgOpEval done");
    }
}
