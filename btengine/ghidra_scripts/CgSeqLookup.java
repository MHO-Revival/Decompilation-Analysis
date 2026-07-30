// Where do NAMED animation sequences live, and what happens when a name is not there?
//
// Two gaps left after recovering CAnimSequencePlay/SetInput (decompiled/animseqeval): both end on the SAME
// component call `(*(anim + 0x88))(name…)` and turn a ZERO return into Failure — that part is read off the
// control flow. What is NOT yet read:
//   (1) that +0x88 is a lookup-by-NAME whose zero return means "no such sequence" (its argument reaches it via
//       FUN_10423fd0 / FUN_10a5ec80, not straight from the fetched string, so the identification is unproven);
//   (2) that the vocabulary it consults is the same SequenceGroup/*skill.xml data our server parses — the
//       assumption our new "unknown clip ⇒ Failure" rule now rests on.
//
// The sequence table is in CryGame.dll, not CryAction: "SkillSequenceGroup", "CatchUpDist",
// "IsRepeatLastKey" and "EnableMoveSplineScale" appear ONLY in CryGame's string dump. CryGame also kept its
// function symbols (CLAUDE.md), so enumerate by symbol first and fall back to string anchors.
// Run against CryGame.dll.
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;

public class CgSeqLookup extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/seqlookup";

    // The XML attribute names are the parser's fingerprint; Name/TimeRange alone are far too common.
    static final String[] ANCHORS = {
        "SkillSequenceGroup", "CatchUpDist", "IsRepeatLastKey", "EnableMoveSplineScale", "NextSequences",
    };
    static final String SYMBOL_RE = "(?i).*(sequence|animseq|skillseq).*";
    static final int MAX_DECOMPILE = 10;

    Memory mem;
    StringBuilder rep = new StringBuilder();

    @Override public void run() throws Exception {
        mem = currentProgram.getMemory();
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);

        rep.append("=== symbols matching ").append(SYMBOL_RE).append(" ===\n");
        List<Function> bySymbol = new ArrayList<>();
        for (Function f : fm.getFunctions(true))
            if (f.getName().matches(SYMBOL_RE)) { bySymbol.add(f); rep.append(String.format("  %s  %s (%d bytes)%n",
                    f.getEntryPoint(), f.getName(), f.getBody().getNumAddresses())); }
        if (bySymbol.isEmpty()) rep.append("  (none — symbols stripped here after all)\n");

        // functions reaching each XML anchor, with the .rdata-slot second hop
        Map<Long, Set<String>> hits = new HashMap<>();
        for (String s : ANCHORS) {
            List<Long> sites = new ArrayList<>();
            for (long a : findExact(s)) {
                sites.addAll(scan(a, true));
                for (long slot : scan(a, false)) sites.addAll(scan(slot, true));
            }
            rep.append(String.format("%n=== \"%s\": %d code sites ===%n", s, sites.size()));
            for (long site : sites) {
                Function h = fm.getFunctionContaining(toAddr(site));
                if (h == null) continue;
                hits.computeIfAbsent(h.getEntryPoint().getOffset(), k -> new TreeSet<>()).add(s);
            }
        }

        List<Map.Entry<Long, Set<String>>> ranked = new ArrayList<>(hits.entrySet());
        ranked.sort((x, y) -> y.getValue().size() - x.getValue().size());
        rep.append("\n=== candidates, most anchors first ===\n");
        int wrote = 0;
        List<Function> toDump = new ArrayList<>(bySymbol.subList(0, Math.min(4, bySymbol.size())));
        for (var e : ranked) {
            Function f = fm.getFunctionAt(toAddr(e.getKey()));
            if (f == null) continue;
            rep.append(String.format("  %s  %-46s anchors=%s bytes=%d%n",
                    f.getEntryPoint(), f.getName(), e.getValue(), f.getBody().getNumAddresses()));
            if (e.getValue().size() >= 2 && f.getBody().getNumAddresses() < 0x3000) toDump.add(f);
        }

        for (Function f : toDump) {
            if (wrote++ >= MAX_DECOMPILE) break;
            DecompileResults r = dec.decompileFunction(f, 240, monitor);
            if (r == null || r.getDecompiledFunction() == null) continue;
            String p = OUT + "/" + f.getName().replaceAll("[^A-Za-z0-9_]", "_") + "_"
                     + Long.toHexString(f.getEntryPoint().getOffset()) + ".c";
            try (PrintWriter pw = new PrintWriter(new FileWriter(p))) { pw.print(r.getDecompiledFunction().getC()); }
            rep.append("  wrote ").append(p).append('\n');
        }
        dec.dispose();

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgSeqLookup -> " + OUT);
    }

    List<Long> findExact(String want) {
        List<Long> out = new ArrayList<>();
        byte[] pat = (want + "\0").getBytes();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                out.add(f.getOffset());
                a = f.add(1);
            }
        }
        return out;
    }

    List<Long> scan(long value, boolean code) {
        List<Long> hits = new ArrayList<>();
        byte[] needle = { (byte) value, (byte) (value >> 8), (byte) (value >> 16), (byte) (value >> 24) };
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || b.isExecute() != code) continue;
            Address at = b.getStart();
            while (at != null) {
                at = mem.findBytes(at, b.getEnd(), needle, null, true, monitor);
                if (at == null) break;
                hits.add(at.getOffset());
                try { at = at.add(1); } catch (Exception e) { break; }
                if (hits.size() > 96) return hits;
            }
        }
        return hits;
    }
}
