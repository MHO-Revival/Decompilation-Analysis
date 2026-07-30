// Decompile the two named region-jump functions found by CgRegionJump, plus whatever they call.
//   CPlayer::RegionJumpTriggerHandle  10efb250
//   CPlayer::ReqRegionJump            10efb400
// Goal: does the client populate CSPlayerRegionJumpEnd.RegionId, or send it unset?
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgRegionJump2 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/regionjump";
    static final long[] SEEDS = { 0x10efb250L, 0x10efb400L };

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);

        Set<Long> done = new HashSet<>();
        Deque<Long> work = new ArrayDeque<>();
        for (long s : SEEDS) work.add(s);

        // seeds, then their direct callees (the packet build/send helpers)
        int depth = 0;
        while (!work.isEmpty() && depth < 2) {
            int n = work.size();
            for (int i = 0; i < n; i++) {
                long a = work.poll();
                if (!done.add(a)) continue;
                Function f = fm.getFunctionAt(toAddr(a));
                if (f == null) { println("no fn at " + Long.toHexString(a)); continue; }
                if (f.getBody().getNumAddresses() > 0x3000) { println("skip (huge) " + f.getName()); continue; }
                try {
                    DecompileResults r = dec.decompileFunction(f, 180, monitor);
                    if (r != null && r.decompileCompleted()) {
                        String p = OUT + "/d" + depth + "_" + f.getEntryPoint() + "_" +
                                   f.getName().replaceAll("[^A-Za-z0-9_]", "_") + ".c";
                        try (PrintWriter pw = new PrintWriter(new FileWriter(p))) {
                            pw.print(r.getDecompiledFunction().getC());
                        }
                        println("wrote " + p + "  (" + f.getBody().getNumAddresses() + " bytes)");
                    }
                } catch (Exception e) { println("fail " + f.getName() + " " + e); }
                if (depth == 0)
                    for (Function c : f.getCalledFunctions(monitor))
                        work.add(c.getEntryPoint().getOffset());
            }
            depth++;
        }
        dec.dispose();
    }
}
