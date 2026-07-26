// How does the client decide WHICH xml is a monster's AI entry point?
// Leads from the string dumps: ".AISetting.BehaviorTree" / ".AISetting.ClientBehaviorTree" (entity-property
// style paths, and note the server/client SPLIT), "Scripts/AI/BehaviorTree/", "%s/%s.xml",
// "SkillBehaviorTree", "DefaultBehaviorTree", "bHaveBehaviorTree", "LoadBehaviorTree".
// Find each string by content, dump every reference, and decompile the referencing functions.
// Works on whichever program is open; writes <program>_aientry.{txt,c}.
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

public class CgAiEntry extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/aientry";

    static final String[] NEEDLES = {
        ".AISetting.ClientBehaviorTree",
        ".AISetting.BehaviorTree",
        "ClientBehaviorTree",
        "DefaultBehaviorTree",
        "SkillBehaviorTree",
        "bHaveBehaviorTree",
        "Scripts/AI/BehaviorTree/",
        "%s/%s.xml",
        "LoadBehaviorTree",
        "InitBehaviorTrees",
        "LoadEventBehaviorTree",
    };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;

    /** every address whose bytes start the given ASCII string (NUL-terminated) */
    List<Long> findString(String s) {
        List<Long> out = new ArrayList<>();
        byte[] pat = s.getBytes();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            long lo = b.getStart().getOffset(), hi = b.getEnd().getOffset();
            int chunk = 0x100000;
            byte[] buf = new byte[chunk];
            for (long a = lo; a <= hi; a += chunk - pat.length - 1) {
                int n = (int) Math.min(chunk, hi - a + 1);
                if (n < pat.length + 1) break;
                try { mem.getBytes(toAddr(a), buf, 0, n); } catch (Exception e) { continue; }
                outer:
                for (int i = 0; i + pat.length < n; i++) {
                    for (int k = 0; k < pat.length; k++) if (buf[i + k] != pat[k]) continue outer;
                    if (buf[i + pat.length] != 0) continue;                 // must be NUL-terminated
                    if (i > 0 && buf[i - 1] != 0 && buf[i - 1] > 0x20) continue;  // and start a string
                    out.add(a + i);
                }
            }
        }
        return out;
    }

    /** brute scan for 4-byte pointers to `target` (catches data tables the analyser missed) */
    List<Long> pointersTo(long target) {
        List<Long> hits = new ArrayList<>();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            long lo = b.getStart().getOffset(), hi = b.getEnd().getOffset();
            byte[] buf = new byte[0x100000];
            for (long a = lo; a <= hi; a += buf.length - 4) {
                int n = (int) Math.min(buf.length, hi - a + 1);
                if (n < 4) break;
                try { mem.getBytes(toAddr(a), buf, 0, n); } catch (Exception e) { continue; }
                for (int i = 0; i + 4 <= n; i++) {
                    long v = (buf[i]&0xFFL)|((buf[i+1]&0xFFL)<<8)|((buf[i+2]&0xFFL)<<16)|((buf[i+3]&0xFFL)<<24);
                    if (v == target) { hits.add(a + i); if (hits.size() > 40) return hits; }
                }
            }
        }
        return hits;
    }

    String decomp(Function f){
        try {
            DecompileResults r = dec.decompileFunction(f, 200, monitor);
            if (r != null && r.decompileCompleted()) return r.getDecompiledFunction().getC();
        } catch (Exception e) { return "// <exc>\n"; }
        return "// <fail>\n";
    }

    @Override public void run() throws Exception {
        String pn = currentProgram.getName().replaceAll("[^A-Za-z0-9.]", "_");
        mem = currentProgram.getMemory(); fm = currentProgram.getFunctionManager();
        dec = new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        StringBuilder rep = new StringBuilder("program: " + pn + "\n");
        StringBuilder src = new StringBuilder();
        Set<Long> emitted = new HashSet<>();

        for (String needle : NEEDLES) {
            rep.append("\n================ \"").append(needle).append("\" ================\n");
            List<Long> addrs = findString(needle);
            if (addrs.isEmpty()) { rep.append("  <not present>\n"); continue; }
            for (long sa : addrs) {
                rep.append(String.format("  @%08x%n", sa));
                LinkedHashSet<Long> refFns = new LinkedHashSet<>();
                for (Reference r : getReferencesTo(toAddr(sa))) {
                    Function f = fm.getFunctionContaining(r.getFromAddress());
                    rep.append("    ").append(r.getReferenceType()).append(" @").append(r.getFromAddress())
                       .append(f == null ? "  (no fn)" : "  in " + f.getName() + " (" + f.getBody().getNumAddresses() + "b)")
                       .append("\n");
                    if (f != null) refFns.add(f.getEntryPoint().getOffset());
                }
                for (long p : pointersTo(sa)) {
                    Function f = fm.getFunctionContaining(toAddr(p));
                    if (f == null) { rep.append(String.format("    ptr @%08x  (data)%n", p)); continue; }
                    if (refFns.add(f.getEntryPoint().getOffset()))
                        rep.append(String.format("    ptr @%08x  in %s (%db)%n", p, f.getName(),
                                    f.getBody().getNumAddresses()));
                }
                for (long fe : refFns) {
                    if (!emitted.add(fe)) continue;
                    Function f = fm.getFunctionAt(toAddr(fe));
                    if (f == null || f.getBody().getNumAddresses() > 12000) continue;
                    src.append("\n// ######## ").append(f.getName()).append(" @").append(f.getEntryPoint())
                       .append("  (").append(f.getBody().getNumAddresses()).append(" bytes)  [via \"")
                       .append(needle).append("\"] ########\n").append(decomp(f));
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, pn + "_aientry.txt"))) { w.write(rep.toString()); }
        try (FileWriter w = new FileWriter(new File(OUT, pn + "_aientry.c"))) { w.write(src.toString()); }
        dec.dispose();
        println("[CgAiEntry] " + pn + " -> " + OUT);
    }
}
