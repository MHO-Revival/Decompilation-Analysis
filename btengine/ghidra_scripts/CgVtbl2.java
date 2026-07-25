// CgVtbl found the vtables but stopped at slot 1, because the OTHER slots also point at code Ghidra
// never disassembled. This pass treats any pointer into .text as a slot, creates the function there,
// then decompiles the whole table. Also dumps the raw dwords around each table so the extent (and the
// adjacent TypeDescriptor) is visible rather than guessed.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgVtbl2 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btvtbl";

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
        {"CNodeRepeatExecuteCounter",  0x1130d778L},
        {"CConditionSuccessful",       0x1131449cL},
        {"CConditionFailure",          0x11314434L},
        {"CBTOperation",               0x11306a50L},
    };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    long TX_LO = 0x10001000L, TX_HI = 0x112fac00L;
    long RD_LO = 0x112fb000L, RD_HI = 0x116fae87L;

    long ptrAt(long a){ try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e){ return -1; } }
    int  byteAt(long a){ try { return mem.getByte(toAddr(a)) & 0xFF; } catch (Exception e){ return -1; } }
    boolean inText(long v){ return v >= TX_LO && v < TX_HI; }
    boolean hasRefs(long a){ return getReferencesTo(toAddr(a)).length > 0; }

    boolean prologue(long v){
        int b = byteAt(v);
        // MSVC x86: push ebp / push reg / sub esp / mov / xor / jmp / mov eax,imm ...
        return b == 0x55 || b == 0x53 || b == 0x56 || b == 0x57 || b == 0x8B || b == 0x83
            || b == 0x81 || b == 0xB8 || b == 0xA1 || b == 0x33 || b == 0xE9 || b == 0x6A
            || b == 0x51 || b == 0x8D || b == 0xC2 || b == 0xC3 || b == 0xFF || b == 0x68 || b == 0x50;
    }
    /** slot-worthy: points into .text and either is a known fn or starts with a plausible prologue */
    boolean slotPtr(long v){
        if (!inText(v)) return false;
        if (fm.getFunctionAt(toAddr(v)) != null) return true;
        return prologue(v);
    }

    Function ensure(long v){
        Function f = fm.getFunctionAt(toAddr(v));
        if (f != null) return f;
        try { disassemble(toAddr(v)); } catch (Exception e) {}
        try { f = createFunction(toAddr(v), null); } catch (Exception e) {}
        if (f == null) f = fm.getFunctionContaining(toAddr(v));
        return f;
    }

    long vtBase(long slotAddr){
        long a = slotAddr;
        while (a - 4 >= RD_LO) {
            if (hasRefs(a)) return a;
            if (!slotPtr(ptrAt(a - 4))) return a;
            a -= 4;
        }
        return a;
    }

    String decomp(Function f){
        if (f == null) return "// <null>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC();
        } catch (Exception e) { return "// <exc " + e + ">\n"; }
        return "// <decompile failed>\n";
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
        if (!pn.toLowerCase().contains("cryaction")) { println("[CgVtbl2] skip " + pn); return; }
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep = new StringBuilder();

        Set<Long> nameAddrs = new LinkedHashSet<>();
        for (Object[] r : CLASSES) nameAddrs.add((Long) r[1]);
        Map<Long, List<Long>> nameHits = scanFor(nameAddrs);

        LinkedHashMap<String, Set<Long>> getters = new LinkedHashMap<>();
        Set<Long> allGetters = new LinkedHashSet<>();
        for (Object[] row : CLASSES) {
            String cn = (String) row[0];
            Set<Long> g = new LinkedHashSet<>();
            for (long h : nameHits.get((Long) row[1])) {
                if (!inText(h)) continue;
                Function f = fm.getFunctionContaining(toAddr(h));
                if (f == null || f.getBody().getNumAddresses() > 16) continue;
                g.add(f.getEntryPoint().getOffset());
            }
            getters.put(cn, g); allGetters.addAll(g);
        }
        Map<Long, List<Long>> gHits = scanFor(allGetters);

        // pass A: discover every table + create functions for all its slots
        LinkedHashMap<String, LinkedHashMap<Long, List<Long>>> tables = new LinkedHashMap<>();
        for (Object[] row : CLASSES) {
            String cn = (String) row[0];
            LinkedHashMap<Long, List<Long>> tabs = new LinkedHashMap<>();
            for (long g : getters.get(cn)) for (long slot : gHits.get(g)) {
                if (slot < RD_LO || slot >= RD_HI) continue;
                long base = vtBase(slot);
                if (tabs.containsKey(base)) continue;
                List<Long> slots = new ArrayList<>();
                for (int i = 0; i < 64; i++) {
                    long fp = ptrAt(base + i * 4L);
                    if (!slotPtr(fp)) break;
                    if (i > 0 && hasRefs(base + i * 4L)) break;
                    ensure(fp);
                    slots.add(fp);
                }
                tabs.put(base, slots);
            }
            tables.put(cn, tabs);
        }

        // pass B: report + decompile
        Set<Long> emitted = new HashSet<>();
        for (Object[] row : CLASSES) {
            String cn = (String) row[0];
            rep.append("\n================ ").append(cn).append(" ================\n");
            LinkedHashMap<Long, List<Long>> tabs = tables.get(cn);
            if (tabs.isEmpty()) { rep.append("  <none>\n"); continue; }
            StringBuilder cls = new StringBuilder();
            for (Map.Entry<Long, List<Long>> e : tabs.entrySet()) {
                long vt = e.getKey(); List<Long> slots = e.getValue();
                rep.append(String.format("  --- VTABLE %08x  (%d slots) ---\n", vt, slots.size()));
                for (int i = 0; i < slots.size(); i++) {
                    long fp = slots.get(i);
                    Function sf = fm.getFunctionAt(toAddr(fp));
                    rep.append(String.format("    [%2d] %08x  %-18s %s bytes%s\n", i, fp,
                        sf == null ? "?" : sf.getName(),
                        sf == null ? "?" : String.valueOf(sf.getBody().getNumAddresses()),
                        getters.get(cn).contains(fp) ? "   <-- name getter" : ""));
                }
                rep.append(String.format("    raw after table: "));
                for (int k = slots.size(); k < slots.size() + 4; k++)
                    rep.append(String.format("[%d]=%08x ", k, ptrAt(vt + k * 4L)));
                rep.append("\n");

                for (int i = 0; i < slots.size(); i++) {
                    long fp = slots.get(i);
                    if (!emitted.add(fp)) {
                        cls.append("// vtbl[").append(i).append("] @").append(String.format("%08x", fp))
                           .append("  (emitted elsewhere)\n");
                        continue;
                    }
                    cls.append("\n// ===== ").append(cn).append(" vtbl[").append(i).append("] @")
                       .append(String.format("%08x", fp)).append(" =====\n")
                       .append(decomp(fm.getFunctionAt(toAddr(fp))));
                }
            }
            try (FileWriter w = new FileWriter(new File(OUT, "v2_" + cn + ".c"))) { w.write(cls.toString()); }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "vtbl2_report.txt"))) { w.write(rep.toString()); }
        dec.dispose();
        println("[CgVtbl2] wrote " + OUT);
    }
}
