// Deep pass: decompile the callee closure under each BT movement/check Evaluate, and dump the data
// constants they compare against (operator strings, float thresholds). Creates functions for any
// callee Ghidra never disassembled (the same gap that hid FUN_105f4960).
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;

public class CgDeep extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btdeep";
    static final int DEPTH = 2;
    static final int MAX_BYTES = 9000;      // skip giant shared/library functions
    static final int MAX_FNS = 400;

    static final Object[][] ROOTS = {
        {"CEntityMove_Evaluate",              0x1056c440L},
        {"CEntityMove_notEnabled",            0x1056c5a0L},
        {"CEntityMoveToTarget_Evaluate",      0x10570c80L},
        {"CEntityMoveToPos_Evaluate",         0x1056e300L},
        {"CEntityRotateOrientation_Evaluate", 0x10573430L},
        {"CEntityRotateToTarget_Evaluate",    0x10578a00L},
        {"CEntityRotateToPos_Evaluate",       0x10574410L},
        {"CAnimSequencePlay_Evaluate",        0x10554370L},
        {"CBlackBoardCheck_Evaluate",         0x105f4960L},
        {"CDistanceCheck_Evaluate",           0x105f6ba0L},
        {"CBlackBoardCheck_slot13",           0x105f4e50L},
        {"CBlackBoardCheck_slot10",           0x10623030L},
        // param plumbing shared by every node
        {"getParamObj_103d8550",              0x103d8550L},
        {"getParamVal_103d8940",              0x103d8940L},
        {"readFloat_103f8050",                0x103f8050L},
        {"readInt_103dbab0",                  0x103dbab0L},
        {"readStr_103dbbb0",                  0x103dbbb0L},
        {"bbReadVec3_10551180",               0x10551180L},
        {"ok_10552d10",                       0x10552d10L},
        {"readBool_10569560",                 0x10569560L},
        {"strCmpish_103c3080",                0x103c3080L},
        {"opCharGet_10a5ec80",                0x10a5ec80L},
        {"vtbl3_shared_103dc9e0",             0x103dc9e0L},
        {"vtbl11_shared_103d9af0",            0x103d9af0L},
        {"vtbl12_shared_103d9b80",            0x103d9b80L},
    };

    static final long[] DATA = {
        0x113a33e4L, 0x113bed9cL, 0x113a3314L,          // CBlackBoardCheck operator strings
        0x113c1280L,                                    // its float threshold (expected 0.0)
        0x113f38f8L, 0x113f3900L, 0x113f3904L,          // its cached param statics
        0x113076e8L,                                    // CEntityMove arrival epsilon
    };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    long TX_LO = 0x10001000L, TX_HI = 0x112fac00L;

    int byteAt(long a){ try { return mem.getByte(toAddr(a)) & 0xFF; } catch (Exception e){ return -1; } }
    long ptrAt(long a){ try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e){ return -1; } }

    boolean prologue(long v){
        int b = byteAt(v);
        return b == 0x55 || b == 0x53 || b == 0x56 || b == 0x57 || b == 0x8B || b == 0x83
            || b == 0x81 || b == 0xB8 || b == 0xA1 || b == 0x33 || b == 0xE9 || b == 0x6A
            || b == 0x51 || b == 0x8D || b == 0xC2 || b == 0xC3 || b == 0xFF || b == 0x68 || b == 0x50;
    }

    Function ensure(long v){
        if (v < TX_LO || v >= TX_HI) return null;
        Function f = fm.getFunctionAt(toAddr(v));
        if (f != null) return f;
        if (!prologue(v)) return null;
        try { disassemble(toAddr(v)); } catch (Exception e) {}
        try { f = createFunction(toAddr(v), null); } catch (Exception e) {}
        return f != null ? f : fm.getFunctionContaining(toAddr(v));
    }

    String decomp(Function f){
        try {
            DecompileResults r = dec.decompileFunction(f, 200, monitor);
            if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC();
        } catch (Exception e) { return "// <exc " + e + ">\n"; }
        return "// <decompile failed>\n";
    }

    String cstr(long a, int max){
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < max; i++) {
            int b = byteAt(a + i);
            if (b <= 0) break;
            sb.append(b >= 32 && b < 127 ? (char) b : '.');
        }
        return sb.toString();
    }

    @Override public void run() throws Exception {
        String pn = currentProgram.getName();
        if (!pn.toLowerCase().contains("cryaction")) { println("[CgDeep] skip " + pn); return; }
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        // ---- data constants ----
        StringBuilder d = new StringBuilder();
        for (long a : DATA) {
            d.append(String.format("\n==== %08x ====\n", a));
            StringBuilder hx = new StringBuilder();
            for (int i = 0; i < 32; i++) hx.append(String.format("%02x ", byteAt(a + i)));
            d.append("  hex : ").append(hx).append("\n");
            d.append("  f32 : ").append(Float.intBitsToFloat((int) ptrAt(a))).append("\n");
            d.append("  i32 : ").append(ptrAt(a)).append("\n");
            d.append("  str@: \"").append(cstr(a, 31)).append("\"\n");
            long p = ptrAt(a);
            if (p >= 0x10000000L && p < 0x11800000L)
                d.append("  deref \"").append(cstr(p, 63)).append("\"\n");
            // MSVC std::string: [0..15]=SSO buf or ptr, [16]=size, [20]=capacity
            long size = ptrAt(a + 16), cap = ptrAt(a + 20);
            if (cap > 0 && cap < 0x1000 && size <= cap)
                d.append(String.format("  as std::string: size=%d cap=%d -> \"%s\"%n", size, cap,
                    cap <= 15 ? cstr(a, 16) : cstr(ptrAt(a), 63)));
        }
        try (FileWriter w = new FileWriter(new File(OUT, "consts.txt"))) { w.write(d.toString()); }

        // ---- callee closure ----
        StringBuilder rep = new StringBuilder();
        Set<Long> done = new LinkedHashSet<>();
        for (Object[] row : ROOTS) {
            String nm = (String) row[0]; long fa = (Long) row[1];
            Function root = ensure(fa);
            if (root == null) { rep.append("MISSING root " + nm + " @" + String.format("%08x", fa) + "\n"); continue; }

            StringBuilder src = new StringBuilder();
            List<Function> level = new ArrayList<>(); level.add(root);
            Set<Long> localSeen = new LinkedHashSet<>();
            for (int depth = 0; depth <= DEPTH && !level.isEmpty(); depth++) {
                List<Function> next = new ArrayList<>();
                for (Function f : level) {
                    long e = f.getEntryPoint().getOffset();
                    if (!localSeen.add(e)) continue;
                    if (f.getBody().getNumAddresses() > MAX_BYTES) {
                        src.append("\n// [d" + depth + "] " + f.getName() + " @" + f.getEntryPoint()
                                 + "  SKIPPED (" + f.getBody().getNumAddresses() + " bytes)\n");
                        continue;
                    }
                    if (done.add(e)) {
                        src.append("\n// ===== [d").append(depth).append("] ").append(f.getName())
                           .append(" @").append(f.getEntryPoint()).append("  (")
                           .append(f.getBody().getNumAddresses()).append(" bytes) =====\n")
                           .append(decomp(f));
                    } else {
                        src.append("\n// [d").append(depth).append("] ").append(f.getName())
                           .append(" @").append(f.getEntryPoint()).append("  (emitted in an earlier root)\n");
                    }
                    if (depth < DEPTH && done.size() < MAX_FNS) {
                        try { for (Function c : f.getCalledFunctions(monitor)) next.add(c); } catch (Exception ex) {}
                        // also pick up call targets Ghidra has not turned into functions yet
                        Address maxA = f.getBody().getMaxAddress();
                        if (maxA == null) continue;                     // thunk / empty body
                        long lo = f.getEntryPoint().getOffset(), hi = maxA.getOffset();
                        for (long a = lo; a < hi; a++) {
                            if (byteAt(a) != 0xE8) continue;             // call rel32
                            long tgt = (a + 5 + (int) ptrAt(a + 1)) & 0xFFFFFFFFL;
                            Function cf = ensure(tgt);
                            if (cf != null) next.add(cf);
                        }
                    }
                }
                level = next;
            }
            rep.append(String.format("%-36s @%08x  -> %d fns\n", nm, fa, localSeen.size()));
            try (FileWriter w = new FileWriter(new File(OUT, nm + ".c"))) { w.write(src.toString()); }
        }
        try (FileWriter w = new FileWriter(new File(OUT, "deep_report.txt"))) { w.write(rep.toString()); }
        dec.dispose();
        println("[CgDeep] wrote " + OUT + " (" + done.size() + " functions)");
    }
}
