// Discovery pass for the BT-node runtime logic (CheckID semantics + the full movement math).
//
// The earlier passes concluded "vftables=[] => eval unrecoverable". That conclusion rested on RTTI
// COLs, which TenProtect stripped (only 7 `.?AV` names survive in CryAction). But the plain class-name
// strings DO survive, and every node class has a param-registrar that references its own name literal.
// So: walk the references to the name string, and to the generic registrar FUN_103cf720, to find
//   (a) the FACTORY entry that maps "CBlackBoardCheck" -> a creator fn (ctor -> vtable), and
//   (b) the generic param-descriptor consumer (the XML parse loop) which dispatches by param INDEX.
// Either one lands us on the per-node evaluator, which is what we actually need.
//
// Outputs a report + decompiled C for the shared infrastructure functions.
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
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;

public class CgXref extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btxref";

    // class name -> address of the plain ASCII name string (from btruntime/manifest.tsv)
    static final Object[][] CLASSES = {
        {"CBlackBoardCheck",         0x1130d4d0L},
        {"CEntityMove",              0x11307688L},
        {"CEntityMoveToTarget",      0x11307aacL},
        {"CEntityMoveToPos",         0x113078e0L},
        {"CEntityRotateOrientation", 0x11307cecL},
        {"CEntityRotateToTarget",    0x11307f0cL},
        {"CEntityRotateToPos",       0x11307d84L},
        {"CAnimSequencePlay",        0x11306220L},
        {"CDistanceCheck",           0x1130d5c0L},
        {"CTimeCheck",               0x1130d890L},
        {"CSetBlackBoard",           0x1130b838L},
        {"CBTOperation",             0x11306a50L},
    };

    // shared infrastructure worth reading in full
    static final long[] INFRA = {
        0x105fc120L,   // common "creator" seen on every class -> probably RegisterAll
        0x103cf720L,   // param descriptor register(nameA, nameB, index, type, required)
        0x103cf810L,   // called right after every register
        0x1001ea30L,   // std::string ctor from literal
    };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    long TX_LO = 0x10001000L, TX_HI = 0x112faa56L;

    long ptrAt(long a){ try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e){ return -1; } }
    boolean inText(long v){ return v >= TX_LO && v < TX_HI; }

    String decomp(long fp){
        Function f = fm.getFunctionAt(toAddr(fp));
        if (f == null) f = fm.getFunctionContaining(toAddr(fp));
        if (f == null) { try { f = createFunction(toAddr(fp), null); } catch (Exception e) {} }
        if (f == null) return "// <no fn @" + String.format("%08x", fp) + ">\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 150, monitor);
            if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC();
        } catch (Exception e) {}
        return "// <decompile failed>\n";
    }

    String fnLabel(long a){
        Function f = fm.getFunctionContaining(toAddr(a));
        return f == null ? "(no fn)" : f.getName() + "@" + f.getEntryPoint()
               + " size=" + f.getBody().getNumAddresses();
    }

    /** Brute-force scan every initialized block for 4-byte LE values in `wanted`. */
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
                    if (l != null && l.size() < 200) l.add(a + i);
                }
            }
        }
        return hits;
    }

    @Override public void run() throws Exception {
        String pn = currentProgram.getName();
        println("[CgXref] program = " + pn);
        if (!pn.toLowerCase().contains("cryaction")) { println("[CgXref] skip " + pn); return; }
        mem = currentProgram.getMemory();
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        StringBuilder rep = new StringBuilder();
        rep.append("program: ").append(pn).append("\n");
        rep.append("blocks:\n");
        for (MemoryBlock b : mem.getBlocks())
            rep.append(String.format("  %-10s %s..%s init=%b exec=%b\n", b.getName(),
                b.getStart(), b.getEnd(), b.isInitialized(), b.isExecute()));

        // ---- pass 1: who points at each class-name string? ----
        Set<Long> wanted = new LinkedHashSet<>();
        for (Object[] r : CLASSES) wanted.add((Long) r[1]);
        for (long i : INFRA) wanted.add(i);
        Map<Long, List<Long>> hits = scanFor(wanted);

        for (Object[] row : CLASSES) {
            String cn = (String) row[0]; long sa = (Long) row[1];
            rep.append("\n================ ").append(cn)
               .append(String.format("  nameStr=%08x ================\n", sa));
            List<Long> hs = hits.get(sa);
            rep.append("  raw dword hits: ").append(hs.size()).append("\n");
            for (long h : hs) {
                rep.append(String.format("    @%08x  in %s\n", h, fnLabel(h)));
                // if this is a data table entry, show the neighbours (name,fn) pairs
                if (!inText(h)) {
                    StringBuilder nb = new StringBuilder();
                    for (int k = -2; k <= 3; k++) {
                        long v = ptrAt(h + k * 4L);
                        nb.append(String.format(" [%+d]=%08x%s", k, v,
                            (inText(v) && fm.getFunctionAt(toAddr(v)) != null) ? "*FN" : ""));
                    }
                    rep.append("        neighbours:").append(nb).append("\n");
                }
            }
            rep.append("  ghidra refs:\n");
            int n = 0;
            for (Reference r : getReferencesTo(toAddr(sa))) {
                rep.append("    ").append(r.getReferenceType()).append(" @").append(r.getFromAddress())
                   .append(" in ").append(fnLabel(r.getFromAddress().getOffset())).append("\n");
                if (++n > 40) { rep.append("    ...\n"); break; }
            }
        }

        // ---- pass 2: callers of the shared infrastructure ----
        for (long inf : INFRA) {
            rep.append(String.format("\n======== INFRA %08x  %s ========\n", inf, fnLabel(inf)));
            List<Long> hs = hits.get(inf);
            rep.append("  raw dword hits (incl. call targets in data tables): ").append(hs.size()).append("\n");
            int shown = 0;
            for (long h : hs) {
                if (inText(h)) continue;   // data references only; calls are relative and won't appear
                rep.append(String.format("    DATA @%08x  in %s\n", h, fnLabel(h)));
                if (++shown > 30) { rep.append("    ...\n"); break; }
            }
            int n = 0;
            for (Reference r : getReferencesTo(toAddr(inf))) {
                rep.append("    ").append(r.getReferenceType()).append(" @").append(r.getFromAddress())
                   .append(" in ").append(fnLabel(r.getFromAddress().getOffset())).append("\n");
                if (++n > 60) { rep.append("    ...(more)\n"); break; }
            }
        }

        // ---- decompile the infrastructure ----
        StringBuilder src = new StringBuilder();
        for (long inf : INFRA)
            src.append("\n// ######## ").append(String.format("%08x", inf)).append(" ").append(fnLabel(inf))
               .append(" ########\n").append(decomp(inf));

        try (FileWriter w = new FileWriter(new File(OUT, "xref_report.txt"))) { w.write(rep.toString()); }
        try (FileWriter w = new FileWriter(new File(OUT, "infra.c"))) { w.write(src.toString()); }
        dec.dispose();
        println("[CgXref] wrote " + OUT);
    }
}
