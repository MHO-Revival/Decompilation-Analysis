// When does the idle-path wander FAIL, so the client falls through to Wander.xml?
//
// common_deciders/idle/Decider_WanderInZone.xml is a fallback Selector:
//     Selector[ RandomChooseIdlePath -> common/idle/randomchooseidlepath.xml
//             , WanderInZone         -> common/movement/Wander.xml ]
// Our RandomSelectLevelTarget always Succeeds — even when the monster already stands on the single Type=Idle
// LogicPoint and moves nowhere — so Wander.xml (GetRandomPosInCurrentRegion(Distance=40) + MoveToPosition, on a
// 10-20 s IdleWanderWalkMin/MaxTime cadence) is never reached and the monster looks frozen next to real gameplay.
//
// Three questions, to be answered from the Evaluates rather than guessed:
//   1. What does TargetType="IdlePath" resolve to — a Type=Idle LogicPoint (our assumption) or a path entity?
//   2. When does CRandomSelectLevelTarget report Failure? That is the condition that hands over to Wander.
//   3. Does CGetRandomPosInCurrentRegion agree with our region-polygon + Distance-clamp implementation?
//
// Same chain as CgEvalOf (name string -> 6-byte `mov eax,<nameStr>; ret` getter -> .rdata vtable slot ->
// Evaluate 3 dwords earlier); separate OUT dir so CgEvalOf's own report is not clobbered.
// Both class-name strings are in CryAction only (CryGame has neither) — run against CryAction.dll.
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;

public class CgIdleWander extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/idlewander";

    // Round 2: does RandomAnimsPlayByNum roll blindly over <prefix>1..N (failing on clips the monster lacks), or
    // does it filter to existing sequences? And is the index range 1..N or 0..N-1? em003skill.xml ships Idle,
    // Idle0 and Idle1 only, while NumsOfIdleAnims is 5, so the answer decides whether the Bulldrome idles almost
    // always or only ~20% of the time.
    static final String[] CLASSES = {
        "CRandomAnimsPlayByNum",
    };

    Memory mem;
    DecompInterface dec;
    StringBuilder rep = new StringBuilder();

    @Override public void run() throws Exception {
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        for (String cls : CLASSES) {
            rep.append("================================ ").append(cls).append('\n');
            List<Long> names = findExact(cls);
            if (names.isEmpty()) { rep.append("  step 1 FAILED: class-name string not found\n"); continue; }
            for (long nameAddr : names) {
                rep.append(String.format("  step 1: name string at %08x%n", nameAddr));
                List<Long> getters = findGetter(nameAddr);
                if (getters.isEmpty()) { rep.append("  step 2 FAILED: no getter\n"); continue; }
                for (long getter : getters) {
                    rep.append(String.format("  step 2: getter at %08x%n", getter));
                    List<Long> slots = findDataRefs(getter);
                    if (slots.isEmpty()) { rep.append("  step 3 FAILED: getter not in any table\n"); continue; }
                    for (long slot : slots) {
                        rep.append(String.format("  step 3: vtable slot at %08x%n", slot));
                        long evalSlot = slot - 12;
                        long evalAddr = readU32(evalSlot);
                        rep.append(String.format("  step 4: [%08x] -> Evaluate %08x%n", evalSlot, evalAddr));
                        Function f = getFunctionContaining(toAddr(evalAddr));
                        if (f == null) { rep.append("          (not disassembled)\n"); continue; }
                        rep.append(String.format("          %s @ %s (%d bytes)%n",
                                f.getName(), f.getEntryPoint(), f.getBody().getNumAddresses()));
                        DecompileResults r = dec.decompileFunction(f, 240, monitor);
                        rep.append("          ---- decompiled ----\n");
                        rep.append(r != null && r.getDecompiledFunction() != null
                                ? r.getDecompiledFunction().getC() : "// nothing\n").append('\n');
                    }
                }
            }
        }
        dec.dispose();
        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgIdleWander -> " + OUT);
    }

    List<Long> findGetter(long nameAddr) {
        return scan(new byte[] { (byte) 0xB8, (byte) nameAddr, (byte) (nameAddr >> 8),
                (byte) (nameAddr >> 16), (byte) (nameAddr >> 24), (byte) 0xC3 }, true);
    }

    List<Long> findDataRefs(long t) {
        return scan(new byte[] { (byte) t, (byte) (t >> 8), (byte) (t >> 16), (byte) (t >> 24) }, false);
    }

    List<Long> scan(byte[] pat, boolean executable) {
        List<Long> out = new ArrayList<>();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || b.isExecute() != executable) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                out.add(f.getOffset());
                if (out.size() > 8) return out;
                a = f.add(1);
            }
        }
        return out;
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

    long readU32(long addr) {
        try { return Integer.toUnsignedLong(mem.getInt(toAddr(addr))); } catch (Exception e) { return 0; }
    }
}
