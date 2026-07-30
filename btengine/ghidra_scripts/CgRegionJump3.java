// Find who sends CSPlayerRegionJumpEnd (729) and what it puts in RegionId.
// Leads from CgRegionJump2:
//   CPlayer::ReqRegionJump sends the req via vtbl+0x350 and logs "[TPREGION] InstID[%d] LevelID[%d] TP Begin"
//   -> there should be a matching "TP End"/"TP Finish" site, and two scheduled callbacks:
//      FUN_10efb370 (post-fade, from RegionJumpTriggerHandle) and FUN_10efb4f0 (60s req timeout)
// Strings are reached through .rdata pointer slots, so scan for the string address AND for slots holding it.
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;

public class CgRegionJump3 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/regionjump";
    static final long[] EXTRA = { 0x10efb370L, 0x10efb4f0L };

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();

        // every defined string containing TPREGION, and the functions that reach it
        println("=== TPREGION strings and their code sites ===");
        Set<Long> targets = new LinkedHashSet<>();
        DataIterator di = currentProgram.getListing().getDefinedData(true);
        while (di.hasNext() && !monitor.isCancelled()) {
            Data d = di.next();
            Object v = d.getValue();
            if (!(v instanceof String)) continue;
            String s = (String) v;
            if (!s.contains("TPREGION")) continue;
            println("  " + d.getAddress() + "  \"" + s + "\"");
            for (long site : codeSites(d.getAddress().getOffset())) {
                Function h = fm.getFunctionContaining(toAddr(site));
                println("      site " + Long.toHexString(site) +
                        (h == null ? "  <no fn>" : "  in " + h.getName() + " @" + h.getEntryPoint()));
                if (h != null) targets.add(h.getEntryPoint().getOffset());
            }
        }
        for (long e : EXTRA) targets.add(e);

        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        for (long a : targets) {
            Function f = fm.getFunctionAt(toAddr(a));
            if (f == null) { println("no fn at " + Long.toHexString(a)); continue; }
            if (f.getBody().getNumAddresses() > 0x3000) { println("skip (huge) " + f.getName()); continue; }
            try {
                DecompileResults r = dec.decompileFunction(f, 180, monitor);
                if (r != null && r.decompileCompleted()) {
                    String p = OUT + "/tp_" + f.getEntryPoint() + "_" +
                               f.getName().replaceAll("[^A-Za-z0-9_]", "_") + ".c";
                    try (PrintWriter pw = new PrintWriter(new FileWriter(p))) {
                        pw.print(r.getDecompiledFunction().getC());
                    }
                    println("wrote " + p + "  (" + f.getBody().getNumAddresses() + " bytes)");
                }
            } catch (Exception e) { println("fail " + f.getName()); }
        }
        dec.dispose();
    }

    /** Code sites reaching an address directly, or through an .rdata pointer slot holding it. */
    private List<Long> codeSites(long strAddr) {
        List<Long> out = new ArrayList<>();
        out.addAll(scan(strAddr, true));
        for (long slot : scan(strAddr, false)) out.addAll(scan(slot, true));
        return out;
    }

    /** Addresses whose 4-byte little-endian content equals `value`, in executable blocks (code) or not. */
    private List<Long> scan(long value, boolean code) {
        List<Long> hits = new ArrayList<>();
        Memory mem = currentProgram.getMemory();
        byte[] needle = new byte[] {
            (byte) (value), (byte) (value >> 8), (byte) (value >> 16), (byte) (value >> 24)
        };
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || b.isExecute() != code) continue;
            Address at = b.getStart();
            while (at != null && !monitor.isCancelled()) {
                at = mem.findBytes(at, b.getEnd(), needle, null, true, monitor);
                if (at == null) break;
                hits.add(at.getOffset());
                try { at = at.add(1); } catch (Exception e) { break; }
                if (hits.size() > 64) return hits;
            }
        }
        return hits;
    }
}
