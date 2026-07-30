// Does `AnimSequence="BB.<key>"` resolve through the blackboard, and what happens when the resolved clip
// does not exist?
//
// WHY IT MATTERS. common/animator/animstates/animstate_locomotion.xml — a SHARED template every monster
// uses — authors its transition clips indirectly:
//     <Node Name="StandingIdleToWalk" Operation="AnimSequencePlay" AnimSequence="BB.AnimName_Relaxed_IdleToWalk" .../>
// and common/blackboard/monsterblackboard.xml declares AnimName_Relaxed_IdleToWalk = "IdleToWalk", which
// em003new's bb_knowledge.xml overrides for the walk loop (AnimName_Relaxed_WalkLoop = "Relaxed_Walk_Loop",
// a clip that really is in SequenceGroup/em003skill.xml). 136 nodes client-wide use the BB. form against
// 25 813 literal ones. Our engine passed the reference text through as the clip name.
//
// The BB. prefix is NOT a blanket string-parameter feature — CryAction carries these three diagnostics:
//     "CBBValueCopy, When not set SrcEntityBBName, SRCName can't be \"BB.\", SetBlackBoard support this"
//     "CBBValueCopy, When not set DstEntityBBName, DSTName can't be \"BB.\", SetBlackBoard support this"
//     "SetBlackBoard, When KeyName is a \"BB.\", LoadKeyNameRunTime should set to True"
// i.e. it is supported per-op (SetBlackBoard yes, CBBValueCopy no). So AnimSequence needs its OWN evidence.
// There is no standalone "BB." string constant to xref: the test is an inlined byte/word compare.
//
// TWO TARGETS.
//   (a) CAnimSequencePlay / CAnimSequenceSetInput Evaluate, via the documented name -> `mov eax,<nameStr>; ret`
//       getter -> .rdata vtable slot -> Evaluate 3 dwords earlier (same chain as CgEvalOf).
//   (b) FUN_103dbbb0 — the string-parameter getter. CSetGeneralState's Evaluate (recovered in
//       decompiled/evalof) calls it as `PUSH &out; PUSH <index>; CALL 103dbbb0; TEST AL,AL`, so it is the
//       shared "fetch string param N" accessor. If the BB. resolution lives THERE it is uniform across ops
//       and (a) does not even need to show it; if it does not, (a) must show a per-op branch.
// Both are dumped so whichever answers first is visible.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgAnimSeqEval extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/animseqeval";

    static final String[] CLASSES = { "CAnimSequencePlay", "CAnimSequenceSetInput" };

    /** Shared accessors worth reading whatever the chain finds. */
    static final long[] EXTRA = { 0x103dbbb0L };

    Memory mem;
    DecompInterface dec;
    StringBuilder rep = new StringBuilder();

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        for (long a : EXTRA) {
            rep.append("================================ shared accessor ")
               .append(Long.toHexString(a)).append('\n');
            emit(getFunctionContaining(toAddr(a)));
        }

        for (String cls : CLASSES) {
            rep.append("================================ ").append(cls).append('\n');

            List<Long> names = findExact(cls);
            if (names.isEmpty()) { rep.append("  step 1 FAILED: class-name string not found\n"); continue; }

            for (long nameAddr : names) {
                rep.append(String.format("  step 1: name string at %08x%n", nameAddr));

                List<Long> getters = findGetter(nameAddr);
                if (getters.isEmpty()) { rep.append("  step 2 FAILED: no `mov eax,<name>; ret` getter\n"); continue; }

                for (long getter : getters) {
                    rep.append(String.format("  step 2: getter at %08x%n", getter));

                    List<Long> slots = findDataRefs(getter);
                    if (slots.isEmpty()) { rep.append("  step 3 FAILED: getter not in any table\n"); continue; }

                    for (long slot : slots) {
                        rep.append(String.format("  step 3: vtable slot at %08x%n", slot));
                        long evalSlot = slot - 12;
                        long evalAddr = readU32(evalSlot);
                        rep.append(String.format("  step 4: [%08x] -> Evaluate %08x%n", evalSlot, evalAddr));
                        emit(getFunctionContaining(toAddr(evalAddr)));
                    }
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgAnimSeqEval -> " + OUT);
    }

    void emit(Function f) throws Exception {
        if (f == null) {
            rep.append("          (not disassembled — `no fn` means not decoded, not absent)\n");
            return;
        }
        rep.append(String.format("          %s @ %s (%d bytes)%n",
                f.getName(), f.getEntryPoint(), f.getBody().getNumAddresses()));
        dumpInstructions(f);
        rep.append("          ---- decompiled ----\n");
        DecompileResults r = dec.decompileFunction(f, 220, monitor);
        rep.append(r != null && r.getDecompiledFunction() != null
                ? r.getDecompiledFunction().getC() : "// nothing\n");
        rep.append('\n');
    }

    void dumpInstructions(Function f) {
        Address a = f.getEntryPoint();
        int n = 0;
        while (a != null && f.getBody().contains(a) && n++ < 400) {
            Instruction insn = getInstructionAt(a);
            if (insn == null) break;
            rep.append(String.format("            %08x  %s%n", a.getOffset(), insn.toString()));
            try { a = insn.getMaxAddress().add(1); } catch (Exception e) { break; }
        }
    }

    /** `mov eax, imm32; ret` = B8 <imm32> C3, where imm32 is the name address. */
    List<Long> findGetter(long nameAddr) {
        byte[] pat = {
            (byte) 0xB8,
            (byte) nameAddr, (byte) (nameAddr >> 8), (byte) (nameAddr >> 16), (byte) (nameAddr >> 24),
            (byte) 0xC3,
        };
        return scan(pat, true);
    }

    List<Long> findDataRefs(long target) {
        byte[] pat = { (byte) target, (byte) (target >> 8), (byte) (target >> 16), (byte) (target >> 24) };
        return scan(pat, false);
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
        try { return Integer.toUnsignedLong(mem.getInt(toAddr(addr))); }
        catch (Exception e) { return 0; }
    }
}
