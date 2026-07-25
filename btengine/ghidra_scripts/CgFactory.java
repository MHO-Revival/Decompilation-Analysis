// Recover the BT node FACTORY + per-class ctors that Ghidra never disassembled.
//
// CgXref showed that every BT class name string is referenced from code regions with NO defined
// function -- notably a cluster around 0x10621400..0x10622800 that touches nearly every class name
// (a name->creator dispatch), plus one or two sites immediately after each class's param registrar.
// Ghidra's auto-analysis never reached those bytes, so every earlier pass concluded "eval is
// unrecoverable / vftables=[]". It is not stripped -- it is just undisassembled.
//
// This script: for every class-name reference that lands outside a defined function, walk back to the
// nearest prologue, disassemble, create the function, decompile it, and scan it for vtable writes.
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

public class CgFactory extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btfactory";

    static final Object[][] CLASSES = {
        {"CAnimSequencePlay",          0x11306220L},
        {"CAnimSequenceSetInput",      0x1130643cL},
        {"CAnimSequenceIsPlaying",     0x113061a4L},
        {"CEntityMove",                0x11307688L},
        {"CEntityMoveToTarget",        0x11307aacL},
        {"CEntityMoveToPos",           0x113078e0L},
        {"CEntityRotateToTarget",      0x11307f0cL},
        {"CEntityRotateToPos",         0x11307d84L},
        {"CEntityRotateOrientation",   0x11307cecL},
        {"CSetTargetIDOrientation",    0x1130bde7L},
        {"CSetTargetPosOrientation",   0x1130be00L},
        {"CSetTarget",                 0x1130af5cL},
        {"CDistanceCheck",             0x1130d5c0L},
        {"CBlackBoardCheck",           0x1130d4d0L},
        {"CSetBlackBoard",             0x1130b838L},
        {"CSetBlackBoardEqualString",  0x1130e508L},
        {"CSetBlackBoardEqualFloat",   0x1130e354L},
        {"CTimeCheck",                 0x1130d890L},
        {"CSetTime",                   0x1130be44L},
        {"CSetArea",                   0x1130b814L},
        {"CHandleDeath",               0x11309128L},
        {"CCaculateDamagedValue",      0x11306ca0L},
        {"CCaculateDamagedState",      0x11306c08L},
        {"CSelector",                  0x1130d0fcL},
        {"CBTRandomSelecNode",         0x113bf5acL},
        {"CBTRandomSelectAction",      0x113bf5c0L},
        {"CLoopFilter",                0x113bf5d8L},
        {"CNodeRepeatExecuteCounter",  0x1130d778L},
        {"CConditionSuccessful",       0x1131449cL},
        {"CConditionFailure",          0x11314434L},
        {"CBTOperation",               0x11306a50L},
    };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    long TX_LO = 0x10001000L, TX_HI = 0x112fac00L;
    long RD_LO = 0x112fb000L, RD_HI = 0x113cc000L;

    long ptrAt(long a){ try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e){ return -1; } }
    int  byteAt(long a){ try { return mem.getByte(toAddr(a)) & 0xFF; } catch (Exception e){ return -1; } }
    boolean isFn(long v){ return v >= TX_LO && v < TX_HI && fm.getFunctionAt(toAddr(v)) != null; }

    /** >=4 consecutive function pointers in .rdata => vtable base */
    boolean looksVtable(long v){
        if (v < RD_LO || v >= RD_HI) return false;
        for (int i = 0; i < 4; i++) if (!isFn(ptrAt(v + i * 4L))) return false;
        return true;
    }

    /** typical MSVC x86 prologue opcodes that can legitimately start a function */
    boolean prologueByte(int b){
        return b == 0x55 || b == 0x53 || b == 0x56 || b == 0x57 || b == 0x8B || b == 0x83
            || b == 0x81 || b == 0xA1 || b == 0x51 || b == 0x6A || b == 0xB8 || b == 0xE9
            || b == 0xC7 || b == 0x8D || b == 0x33 || b == 0x50 || b == 0x68 || b == 0xFF;
    }

    /** walk back from `a` to the nearest padding-delimited function start */
    long findStart(long a){
        for (long p = a; p > a - 0x800; p--) {
            int prev = byteAt(p - 1), cur = byteAt(p);
            if (prev < 0 || cur < 0) break;
            if ((prev == 0xCC || prev == 0x90) && prologueByte(cur)) return p;
        }
        return -1;
    }

    Function ensureFn(long a, StringBuilder rep){
        Function f = fm.getFunctionContaining(toAddr(a));
        if (f != null) return f;
        long s = findStart(a);
        if (s < 0) { rep.append(String.format("      ! no prologue found before %08x\n", a)); return null; }
        try { disassemble(toAddr(s)); } catch (Exception e) {}
        try { f = createFunction(toAddr(s), null); } catch (Exception e) {}
        if (f == null) f = fm.getFunctionContaining(toAddr(a));
        if (f == null) { rep.append(String.format("      ! createFunction failed at %08x (for hit %08x)\n", s, a)); return null; }
        rep.append(String.format("      + CREATED %s @ %08x  (%d bytes) covering hit %08x\n",
                    f.getName(), f.getEntryPoint().getOffset(), f.getBody().getNumAddresses(), a));
        return f;
    }

    String decomp(Function f){
        if (f == null) return "// <null>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC();
        } catch (Exception e) { return "// <exc " + e + ">\n"; }
        return "// <decompile failed>\n";
    }

    String disasm(Function f, int maxIns){
        StringBuilder sb = new StringBuilder();
        Instruction ins = getInstructionAt(f.getEntryPoint());
        int n = 0;
        while (ins != null && n++ < maxIns && f.getBody().contains(ins.getAddress())) {
            sb.append("  ").append(ins.getAddress()).append("  ").append(ins).append("\n");
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
                    long v = (buf[i] & 0xFFL) | ((buf[i+1] & 0xFFL) << 8)
                           | ((buf[i+2] & 0xFFL) << 16) | ((buf[i+3] & 0xFFL) << 24);
                    List<Long> l = hits.get(v);
                    if (l != null && l.size() < 300) l.add(a + i);
                }
            }
        }
        return hits;
    }

    @Override public void run() throws Exception {
        String pn = currentProgram.getName();
        if (!pn.toLowerCase().contains("cryaction")) { println("[CgFactory] skip " + pn); return; }
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        StringBuilder rep = new StringBuilder();
        Set<Long> wanted = new LinkedHashSet<>();
        for (Object[] r : CLASSES) wanted.add((Long) r[1]);
        Map<Long, List<Long>> hits = scanFor(wanted);

        // --- 1. create functions for every undisassembled class-name reference ---
        LinkedHashMap<Long, Set<String>> newFns = new LinkedHashMap<>();   // fn entry -> classes it names
        for (Object[] row : CLASSES) {
            String cn = (String) row[0]; long sa = (Long) row[1];
            rep.append(String.format("\n== %s  nameStr=%08x ==\n", cn, sa));
            for (long h : hits.get(sa)) {
                if (h < TX_LO || h >= TX_HI) continue;            // code refs only
                if (fm.getFunctionContaining(toAddr(h)) != null) continue;   // already known
                rep.append(String.format("    undisassembled hit @%08x\n", h));
                Function f = ensureFn(h, rep);
                if (f != null) {
                    long e = f.getEntryPoint().getOffset();
                    newFns.computeIfAbsent(e, k -> new LinkedHashSet<String>()).add(cn);
                }
            }
        }

        // --- 2. report + decompile every newly created function ---
        rep.append("\n\n################ NEW FUNCTIONS ################\n");
        StringBuilder src = new StringBuilder();
        StringBuilder dis = new StringBuilder();
        for (Map.Entry<Long, Set<String>> e : newFns.entrySet()) {
            long fe = e.getKey();
            Function f = fm.getFunctionAt(toAddr(fe));
            if (f == null) continue;
            rep.append(String.format("\n--- %08x %s  (%d bytes)  names: %s\n",
                fe, f.getName(), f.getBody().getNumAddresses(), e.getValue()));

            // vtable writes inside it
            long lo = f.getEntryPoint().getOffset(), hi = f.getBody().getMaxAddress().getOffset();
            LinkedHashSet<Long> vts = new LinkedHashSet<>();
            for (long a = lo; a + 4 <= hi + 1; a++) { long v = ptrAt(a); if (looksVtable(v)) vts.add(v); }
            for (long vt : vts) {
                rep.append(String.format("    VTABLE %08x :", vt));
                for (int i = 0; i < 40; i++) {
                    long fp = ptrAt(vt + i * 4L);
                    if (!isFn(fp)) { rep.append(String.format("\n      [%2d] %08x <stop>", i, fp)); break; }
                    rep.append(String.format("\n      [%2d] %08x  %s", i, fp, fm.getFunctionAt(toAddr(fp)).getName()));
                }
                rep.append("\n");
            }

            src.append("\n// ######## ").append(String.format("%08x", fe)).append("  names=").append(e.getValue())
               .append(" ########\n").append(decomp(f));
            dis.append("\n// ######## ").append(String.format("%08x", fe)).append("  names=").append(e.getValue())
               .append(" ########\n").append(disasm(f, 400));
        }

        try (FileWriter w = new FileWriter(new File(OUT, "factory_report.txt"))) { w.write(rep.toString()); }
        try (FileWriter w = new FileWriter(new File(OUT, "factory.c"))) { w.write(src.toString()); }
        try (FileWriter w = new FileWriter(new File(OUT, "factory.asm"))) { w.write(dis.toString()); }
        dec.dispose();
        println("[CgFactory] created " + newFns.size() + " functions -> " + OUT);
    }
}
