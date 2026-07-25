// For every move/rotate/orientation op (both branches of each), list exactly which PARAM INDEX it
// writes. The blackboard write helpers take the param index as an immediate, so `PUSH imm; CALL <writer>`
// gives it directly -- no decompiler inference needed. This settles which ops PUBLISH TargetOrientation
// rather than only consuming it.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;

public class CgParamWrites extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/btrot2";

    // param write helpers: index -> blackboard var bound to that param
    static final Map<Long, String> WRITERS = new LinkedHashMap<>();
    static {
        WRITERS.put(0x10551270L, "writeVec3");
        WRITERS.put(0x105595d0L, "writeFloat?");
        WRITERS.put(0x10551520L, "bbSetVec3(raw)");
        WRITERS.put(0x10551360L, "bbSet?(raw)");
    }
    // and the readers, for contrast
    static final Map<Long, String> READERS = new LinkedHashMap<>();
    static {
        READERS.put(0x10552e20L, "readVec3");
        READERS.put(0x10552dd0L, "readFloat");
        READERS.put(0x103d9e70L, "readBool");
        READERS.put(0x10569560L, "readBool2");
        READERS.put(0x103db9b0L, "readBool3");
        READERS.put(0x103dbab0L, "readInt");
        READERS.put(0x103dbbb0L, "readStr");
        READERS.put(0x103d8610L, "hasParam");
    }

    static final Object[][] FNS = {
        {"CEntityMove::Evaluate",               0x1056c440L},
        {"CEntityMove::drive",                  0x1056c5a0L},
        {"CEntityMoveToTarget::Evaluate",       0x10570c80L},
        {"CEntityMoveToTarget::drive",          0x10571000L},
        {"CEntityMoveToPos::Evaluate",          0x1056e300L},
        {"CEntityMoveToPos::alt",               0x1056e6d0L},
        {"CEntityRotateOrientation::Evaluate",  0x10573430L},
        {"CEntityRotateOrientation::drive",     0x105736a0L},
        {"CEntityRotateToTarget::Evaluate",     0x10578a00L},
        {"CEntityRotateToTarget::drive",        0x10578bd0L},
        {"CEntityRotateToPos::Evaluate",        0x10574410L},
        {"CSetTargetIDOrientation::Evaluate",   0x105d3220L},
        {"CSetTargetPosOrientation::Evaluate",  0x105d3760L},
        {"CAnimSequencePlay::Evaluate",         0x10554370L},
        {"CBlackBoardCheck::Evaluate",          0x105f4960L},
    };

    @Override public void run() throws Exception {
        if (!currentProgram.getName().toLowerCase().contains("cryaction")) return;
        new File(OUT).mkdirs();
        StringBuilder rep = new StringBuilder();

        for (Object[] row : FNS) {
            String nm = (String) row[0]; long fa = (Long) row[1];
            Function f = currentProgram.getFunctionManager().getFunctionAt(toAddr(fa));
            rep.append(String.format("%n================ %s  @%08x ================%n", nm, fa));
            if (f == null) { rep.append("  <no function>\n"); continue; }

            // sliding window of the last few PUSH immediates
            LinkedList<String> recent = new LinkedList<>();
            Instruction ins = getInstructionAt(f.getEntryPoint());
            while (ins != null && f.getBody().contains(ins.getAddress())) {
                String s = ins.toString();
                if (s.startsWith("PUSH 0x")) {
                    recent.addFirst(s.substring(7));
                    if (recent.size() > 4) recent.removeLast();
                }
                if (ins.getMnemonicString().startsWith("CALL")) {
                    try {
                        for (Address t : ins.getFlows()) {
                            long tv = t.getOffset();
                            String kind = WRITERS.get(tv);
                            boolean isWrite = kind != null;
                            if (kind == null) kind = READERS.get(tv);
                            if (kind == null) { continue; }
                            String idx = recent.isEmpty() ? "?" : recent.getFirst();
                            rep.append(String.format("  %s  %-14s param[%s]   @%s%n",
                                isWrite ? "WRITE" : "read ", kind, idx, ins.getAddress()));
                        }
                    } catch (Exception e) {}
                    recent.clear();      // a call consumes its args
                }
                ins = ins.getNext();
            }
        }
        try (FileWriter w = new FileWriter(new File(OUT, "param_writes.txt"))) { w.write(rep.toString()); }
        println("[CgParamWrites] wrote " + OUT + "/param_writes.txt");
    }
}
