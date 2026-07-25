// Verify the TargetOrientation WRITE story properly.
//
// Open question this answers: during an em003 charge, does anything write the blackboard var
// TargetOrientation? The XML says no (the only writer, SetTargetIDOrientation, sits behind a
// NeedRotateAnim==True gate the rush clears). But that argument needs two code facts I had NOT checked:
//   1. what CSetTargetIDOrientation::Evaluate actually writes  -- never decompiled, only assumed;
//   2. whether CEntityRotateToTarget's CALLEES write param 4 as a side effect. Its own body only writes
//      param 5 (RotateSpeed), but FUN_10579750 / FUN_1057a1f0 were never opened.
// Also pins down FUN_10551270 (assumed to be "write Vec3 param") from its body rather than usage.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgRot extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btrot";

    // classes whose vtable we still need (CSetTargetIDOrientation was skipped by CgVtbl2)
    static final Object[][] CLASSES = {
        {"CSetTargetIDOrientation",  0x1130bde7L},
        {"CSetTargetPosOrientation", 0x1130be00L},
        {"CEntityRotateToTarget",    0x11307f0cL},
    };

    // explicit functions to read: the rotate helpers + the param accessors
    static final Object[][] FNS = {
        {"rotToTarget_Evaluate_10578a00",  0x10578a00L},
        {"rotToTarget_notEnabled_10578bd0",0x10578bd0L},
        {"rotHelper_10579750",             0x10579750L},
        {"rotHelper_1057a1f0",             0x1057a1f0L},
        {"writeVec3_10551270",             0x10551270L},
        {"setTargetPosOri_105d3760",       0x105d3760L},
    };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    long TX_LO = 0x10001000L, TX_HI = 0x112fac00L;
    long RD_LO = 0x112fb000L, RD_HI = 0x116fae87L;

    long dwAt(long a){ try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e){ return -1; } }
    int  byteAt(long a){ try { return mem.getByte(toAddr(a)) & 0xFF; } catch (Exception e){ return -1; } }
    boolean inText(long v){ return v >= TX_LO && v < TX_HI; }
    boolean hasRefs(long a){ return getReferencesTo(toAddr(a)).length > 0; }
    boolean prologue(long v){
        int b = byteAt(v);
        return b==0x55||b==0x53||b==0x56||b==0x57||b==0x8B||b==0x83||b==0x81||b==0xB8||b==0xA1
            ||b==0x33||b==0xE9||b==0x6A||b==0x51||b==0x8D||b==0xC2||b==0xC3||b==0xFF||b==0x68||b==0x50;
    }
    boolean slotPtr(long v){
        if (!inText(v)) return false;
        return fm.getFunctionAt(toAddr(v)) != null || prologue(v);
    }
    Function ensure(long v){
        if (!inText(v)) return null;
        Function f = fm.getFunctionAt(toAddr(v));
        if (f != null) return f;
        try { disassemble(toAddr(v)); } catch (Exception e) {}
        try { f = createFunction(toAddr(v), null); } catch (Exception e) {}
        return f != null ? f : fm.getFunctionContaining(toAddr(v));
    }
    long findStart(long a){
        for (long p = a; p > a - 0x800; p--) {
            int prev = byteAt(p - 1), cur = byteAt(p);
            if (prev < 0 || cur < 0) break;
            if ((prev == 0xCC || prev == 0x90) && prologue(p)) return p;
        }
        return -1;
    }
    String decomp(Function f){
        if (f == null) return "// <null>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 200, monitor);
            if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC();
        } catch (Exception e) { return "// <exc " + e + ">\n"; }
        return "// <decompile failed>\n";
    }
    String asm(Function f){
        StringBuilder sb = new StringBuilder();
        Instruction ins = getInstructionAt(f.getEntryPoint());
        while (ins != null && f.getBody().contains(ins.getAddress())) {
            sb.append(ins.getAddress()).append("  ").append(ins);
            if (ins.getMnemonicString().startsWith("CALL")) {
                try { for (Address t : ins.getFlows()) {
                    Function cf = fm.getFunctionAt(t);
                    if (cf != null) sb.append("   ; -> ").append(cf.getName());
                } } catch (Exception e) {}
            }
            sb.append("\n");
            ins = ins.getNext();
        }
        return sb.toString();
    }
    Map<Long, List<Long>> scanFor(Set<Long> wanted) {
        Map<Long, List<Long>> hits = new HashMap<>();
        for (Long w : wanted) hits.put(w, new ArrayList<Long>());
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            long lo = b.getStart().getOffset(), hi = b.getEnd().getOffset();
            byte[] buf = new byte[0x10000];
            for (long a = lo; a <= hi; a += buf.length - 4) {
                int n = (int) Math.min(buf.length, hi - a + 1);
                if (n < 4) break;
                try { mem.getBytes(toAddr(a), buf, 0, n); } catch (Exception e) { continue; }
                for (int i = 0; i + 4 <= n; i++) {
                    long v = (buf[i]&0xFFL) | ((buf[i+1]&0xFFL)<<8) | ((buf[i+2]&0xFFL)<<16) | ((buf[i+3]&0xFFL)<<24);
                    List<Long> l = hits.get(v);
                    if (l != null && l.size() < 300) l.add(a + i);
                }
            }
        }
        return hits;
    }

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) return;
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep = new StringBuilder();
        StringBuilder src = new StringBuilder();

        // --- 1. name string sanity + vtable per class ---
        Set<Long> names = new LinkedHashSet<>();
        for (Object[] r : CLASSES) names.add((Long) r[1]);
        Map<Long, List<Long>> nameHits = scanFor(names);

        Set<Long> getters = new LinkedHashSet<>();
        for (Object[] row : CLASSES) {
            String cn = (String) row[0]; long sa = (Long) row[1];
            StringBuilder s = new StringBuilder();
            for (int i = 0; i < 40; i++) { int b = byteAt(sa + i); if (b <= 0) break;
                s.append(b >= 32 && b < 127 ? (char) b : '.'); }
            rep.append(String.format("%n== %s  nameStr=%08x actual=\"%s\"  hits=%d%n",
                cn, sa, s, nameHits.get(sa).size()));
            for (long h : nameHits.get(sa)) {
                if (!inText(h)) continue;
                Function f = fm.getFunctionContaining(toAddr(h));
                if (f == null) {
                    long st = findStart(h);
                    if (st > 0) { try { disassemble(toAddr(st)); createFunction(toAddr(st), null); } catch (Exception e) {} }
                    f = fm.getFunctionContaining(toAddr(h));
                }
                if (f == null) { rep.append(String.format("   hit %08x -> could not make a function%n", h)); continue; }
                long sz = f.getBody().getNumAddresses();
                rep.append(String.format("   hit %08x in %s (%d bytes)%s%n", h, f.getName(), sz,
                    sz <= 16 ? "   <-- name getter" : ""));
                if (sz <= 16) getters.add(f.getEntryPoint().getOffset());
            }
        }
        Map<Long, List<Long>> gHits = scanFor(getters);
        for (long g : getters) {
            for (long slot : gHits.get(g)) {
                if (slot < RD_LO || slot >= RD_HI) continue;
                long base = slot;
                while (base - 4 >= RD_LO && !hasRefs(base) && slotPtr(dwAt(base - 4))) base -= 4;
                rep.append(String.format("%n   VTABLE %08x (getter %08x at slot %d)%n", base, g, (slot - base) / 4));
                for (int i = 0; i < 20; i++) {
                    long fp = dwAt(base + i * 4L);
                    if (!slotPtr(fp)) break;
                    if (i > 0 && hasRefs(base + i * 4L)) break;
                    Function sf = ensure(fp);
                    rep.append(String.format("     [%2d] %08x %s%n", i, fp,
                        sf == null ? "?" : sf.getName() + " (" + sf.getBody().getNumAddresses() + "b)"));
                    if (i == 4 && sf != null) {          // slot 4 = Evaluate
                        src.append("\n// ===== Evaluate (slot 4) of vtable ").append(String.format("%08x", base))
                           .append(" -> ").append(sf.getName()).append(" =====\n").append(decomp(sf));
                        try (FileWriter w = new FileWriter(new File(OUT, "eval_" + sf.getName() + ".asm"))) {
                            w.write(asm(sf));
                        }
                    }
                }
            }
        }

        // --- 2. the explicit function list ---
        for (Object[] row : FNS) {
            long fa = (Long) row[1];
            Function f = ensure(fa);
            if (f == null) { src.append("\n// MISSING " + row[0] + "\n"); continue; }
            src.append("\n// ######## ").append(row[0]).append(" @").append(f.getEntryPoint())
               .append("  (").append(f.getBody().getNumAddresses()).append(" bytes) ########\n")
               .append(decomp(f));
            try (FileWriter w = new FileWriter(new File(OUT, row[0] + ".asm"))) { w.write(asm(f)); }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "rot_report.txt"))) { w.write(rep.toString()); }
        try (FileWriter w = new FileWriter(new File(OUT, "rot.c"))) { w.write(src.toString()); }
        dec.dispose();
        println("[CgRot] wrote " + OUT);
    }
}
