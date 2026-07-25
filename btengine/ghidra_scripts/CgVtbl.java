// Recover each BT node class's vtable via its name-getter, then decompile every slot.
//
// CgFactory disassembled the previously-undefined 6-byte `mov eax,<classNameStr>; ret` functions --
// two per class, i.e. virtual name getters. A vtable that contains one of those pointers belongs to
// that class. So: scan .rdata for pointers to each getter, walk back to the vtable base, dump slots,
// decompile. This is the chain the RTTI-based passes could not follow (TenProtect stripped the COLs).
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

public class CgVtbl extends GhidraScript {
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
        {"CBTRandomSelecNode",         0x113bf5acL},
        {"CBTRandomSelectAction",      0x113bf5c0L},
        {"CLoopFilter",                0x113bf5d8L},
        {"CNodeRepeatExecuteCounter",  0x1130d778L},
        {"CConditionSuccessful",       0x1131449cL},
        {"CConditionFailure",          0x11314434L},
        {"CBTOperation",               0x11306a50L},
    };

    // classes whose slots we fully decompile on this pass (CheckID + the whole movement pipeline)
    static final Set<String> DEEP = new HashSet<>(Arrays.asList(
        "CBlackBoardCheck", "CEntityMove", "CEntityMoveToTarget", "CEntityMoveToPos",
        "CEntityRotateOrientation", "CEntityRotateToTarget", "CEntityRotateToPos",
        "CDistanceCheck", "CTimeCheck", "CSetBlackBoard", "CBTOperation", "CAnimSequencePlay"));

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    long TX_LO = 0x10001000L, TX_HI = 0x112fac00L;
    long RD_LO = 0x112fb000L, RD_HI = 0x116fae87L;   // .rdata + .data (vtables can live in either)

    long ptrAt(long a){ try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e){ return -1; } }
    boolean isFn(long v){ return v >= TX_LO && v < TX_HI && fm.getFunctionAt(toAddr(v)) != null; }
    boolean hasRefs(long a){ return getReferencesTo(toAddr(a)).length > 0; }

    long vtBase(long slotAddr){
        long a = slotAddr;
        while (a - 4 >= RD_LO) {
            if (hasRefs(a)) return a;                 // ctor stores the base -> it is referenced
            if (!isFn(ptrAt(a - 4))) return a;        // previous dword is not a fn ptr -> base
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
        if (!pn.toLowerCase().contains("cryaction")) { println("[CgVtbl] skip " + pn); return; }
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep = new StringBuilder();

        // --- 1. name string -> tiny getter functions ---
        Set<Long> nameAddrs = new LinkedHashSet<>();
        for (Object[] r : CLASSES) nameAddrs.add((Long) r[1]);
        Map<Long, List<Long>> nameHits = scanFor(nameAddrs);

        LinkedHashMap<String, Set<Long>> getters = new LinkedHashMap<>();
        Set<Long> allGetters = new LinkedHashSet<>();
        for (Object[] row : CLASSES) {
            String cn = (String) row[0]; long sa = (Long) row[1];
            Set<Long> g = new LinkedHashSet<>();
            for (long h : nameHits.get(sa)) {
                if (h < TX_LO || h >= TX_HI) continue;
                Function f = fm.getFunctionContaining(toAddr(h));
                if (f == null) continue;
                if (f.getBody().getNumAddresses() > 16) continue;   // only the tiny name getters
                g.add(f.getEntryPoint().getOffset());
            }
            getters.put(cn, g);
            allGetters.addAll(g);
            rep.append(String.format("%-28s getters: %s\n", cn, hex(g)));
        }

        // --- 2. .rdata/.data pointers to those getters -> vtable slots ---
        Map<Long, List<Long>> gHits = scanFor(allGetters);

        StringBuilder src = new StringBuilder();
        Set<Long> emitted = new HashSet<>();
        for (Object[] row : CLASSES) {
            String cn = (String) row[0];
            rep.append("\n================ ").append(cn).append(" ================\n");
            LinkedHashMap<Long, Integer> vtabs = new LinkedHashMap<>();   // base -> slot index of the getter
            for (long g : getters.get(cn)) {
                for (long slot : gHits.get(g)) {
                    if (slot < RD_LO || slot >= RD_HI) continue;
                    long base = vtBase(slot);
                    vtabs.putIfAbsent(base, (int)((slot - base) / 4));
                }
            }
            if (vtabs.isEmpty()) { rep.append("  <no vtable found>\n"); continue; }

            StringBuilder cls = new StringBuilder();
            for (Map.Entry<Long, Integer> e : vtabs.entrySet()) {
                long vt = e.getKey();
                rep.append(String.format("  --- VTABLE %08x  (name getter at slot %d) ---\n", vt, e.getValue()));
                List<Long> slots = new ArrayList<>();
                for (int i = 0; i < 64; i++) {
                    long fp = ptrAt(vt + i * 4L);
                    if (!isFn(fp)) { rep.append(String.format("    [%2d] %08x <stop>\n", i, fp)); break; }
                    if (i > 0 && hasRefs(vt + i * 4L)) {    // next vtable begins here
                        rep.append(String.format("    [%2d] %08x <next vtable>\n", i, fp)); break;
                    }
                    Function sf = fm.getFunctionAt(toAddr(fp));
                    rep.append(String.format("    [%2d] %08x  %-16s %d bytes\n",
                        i, fp, sf.getName(), sf.getBody().getNumAddresses()));
                    slots.add(fp);
                }
                if (!DEEP.contains(cn)) continue;
                for (int i = 0; i < slots.size(); i++) {
                    long fp = slots.get(i);
                    if (!emitted.add(fp)) {
                        cls.append("// vtbl[").append(i).append("] @")
                           .append(String.format("%08x", fp)).append("  (emitted elsewhere)\n");
                        continue;
                    }
                    cls.append("\n// ===== ").append(cn).append(" vtbl[").append(i).append("] @")
                       .append(String.format("%08x", fp)).append(" =====\n")
                       .append(decomp(fm.getFunctionAt(toAddr(fp))));
                }
            }
            if (cls.length() > 0)
                try (FileWriter w = new FileWriter(new File(OUT, "vt_" + cn + ".c"))) { w.write(cls.toString()); }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "vtbl_report.txt"))) { w.write(rep.toString()); }
        dec.dispose();
        println("[CgVtbl] wrote " + OUT);
    }

    String hex(Collection<Long> c){
        StringBuilder sb = new StringBuilder("[");
        for (long v : c) { if (sb.length() > 1) sb.append(","); sb.append(String.format("%08x", v)); }
        return sb.append("]").toString();
    }
}
