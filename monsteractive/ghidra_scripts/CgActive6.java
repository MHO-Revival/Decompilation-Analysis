// Stage 6: brute-force rel32 CALL/JMP scan (works even where Ghidra never disassembled) for the
// cmd-0x210 notify stubs, so we can tell whether the register-side stub is reachable at all.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgActive6 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/monsteractive";
    static final long[] TARGETS = {
        0x1061fb40L,  // broadcast cmd 0x210  (expect: 1 call, from the router)
        0x1061fb10L,  // raw register +0x3f0
        0x106436e0L,  // facade register (+0x3c -> mgr) +0x3f0
        0x1061e0d0L,  // raw register +0x210 (cmd 0x27) - control
        0x10620fd0L,  // broadcast cmd 0x280 (640)      - control
        0x1071d440L,  // listener-node allocator used by the 0x3f0 registrars
    };

    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        Map<Long, List<String>> res = new LinkedHashMap<>();
        for (long t : TARGETS) res.put(t, new ArrayList<>());

        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || !b.isExecute()) continue;
            long start = b.getStart().getOffset(), end = b.getEnd().getOffset();
            int len = (int) (end - start + 1);
            byte[] buf = new byte[len];
            mem.getBytes(b.getStart(), buf);
            println("scanning block " + b.getName() + " " + b.getStart() + " len=" + len);
            for (int i = 0; i + 5 <= len; i++) {
                int op = buf[i] & 0xff;
                if (op != 0xE8 && op != 0xE9) continue;
                long rel = (buf[i + 1] & 0xffL) | ((buf[i + 2] & 0xffL) << 8) | ((buf[i + 3] & 0xffL) << 16)
                         | ((long) (buf[i + 4] & 0xff) << 24);
                if ((rel & 0x80000000L) != 0) rel -= 0x100000000L;
                long site = start + i;
                long tgt = site + 5 + rel;
                List<String> l = res.get(tgt);
                if (l != null) {
                    Address sa = b.getStart().add(i);
                    Function f = getFunctionContaining(sa);
                    l.add(String.format("%s %s target=0x%x in %s", sa, op == 0xE8 ? "CALL" : "JMP", tgt,
                            f == null ? "-" : f.getName() + "@" + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses()));
                }
            }
        }
        StringBuilder out = new StringBuilder();
        for (Map.Entry<Long, List<String>> e : res.entrySet()) {
            out.append("\n### target 0x").append(Long.toHexString(e.getKey())).append("  sites=")
               .append(e.getValue().size()).append('\n');
            for (String s : e.getValue()) out.append("   ").append(s).append('\n');
        }
        FileWriter w = new FileWriter(new File(OUT, "stage6.txt"));
        w.write(out.toString()); w.close();
        println("wrote stage6.txt (" + out.length() + ")");
    }
}
