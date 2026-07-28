// Recover a BT op class's Evaluate from its class name, via the documented chain.
//
// Needed because the ops I shipped today were derived from their REGISTRATION blocks (parameter names) plus how
// the trees consume them — not from the code. Two ops recovered that way this session turned out to have the
// wrong semantics (ForbiddenArea invented outright, SetCurrentRegionID backwards), so the remaining three want
// checking against the Evaluate before they are trusted.
//
// THE CHAIN, per CLAUDE.md and Monster-BT-Engine-RE: TenProtect stripped the RTTI, so a class is reached through
// its NAME:
//   1. find the class-name string;
//   2. find the 6-byte getter that returns it — `mov eax, <nameStr>; ret` (B8 xx xx xx xx C3);
//   3. find the .rdata slot holding a pointer to that getter — that slot is inside the node vtable;
//   4. Evaluate sits 3 dwords BEFORE that slot.
// Each step is printed so a failure is visible as the step that failed rather than as an empty result.
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

public class CgEvalOf extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/evalof";

    // Edit this list per run; the chain is generic. Kept as a record of what has been through it.
    //   round 1: CRegionPathFindRequest, CGetNextTraversePath (op name GetPathNextPos), CIsLastEdgeInPath
    static final String[] CLASSES = {
        "CSendEventToFG",
        "CSetGeneralState",
        "CSeekToPosition",
    };

    Memory mem;
    DecompInterface dec;
    StringBuilder rep = new StringBuilder();

    @Override
    public void run() throws Exception {
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

                // step 2: the 6-byte getter `mov eax, imm32; ret`
                List<Long> getters = findGetter(nameAddr);
                if (getters.isEmpty()) { rep.append("  step 2 FAILED: no `mov eax,<name>; ret` getter\n"); continue; }

                for (long getter : getters) {
                    rep.append(String.format("  step 2: getter at %08x%n", getter));

                    // step 3: an .rdata dword holding the getter's address
                    List<Long> slots = findDataRefs(getter);
                    if (slots.isEmpty()) { rep.append("  step 3 FAILED: getter not in any table\n"); continue; }

                    for (long slot : slots) {
                        rep.append(String.format("  step 3: vtable slot at %08x%n", slot));

                        // step 4: Evaluate = 3 dwords before that slot
                        long evalSlot = slot - 12;
                        long evalAddr = readU32(evalSlot);
                        rep.append(String.format("  step 4: [%08x] -> Evaluate %08x%n", evalSlot, evalAddr));

                        Function f = getFunctionContaining(toAddr(evalAddr));
                        if (f == null) {
                            rep.append("          (not disassembled — `no fn` means not decoded, not absent)\n");
                            continue;
                        }
                        rep.append(String.format("          %s (%d bytes)%n",
                                f.getName(), f.getBody().getNumAddresses()));
                        dumpInstructions(f);
                        rep.append("          ---- decompiled ----\n");
                        DecompileResults r = dec.decompileFunction(f, 200, monitor);
                        rep.append(r != null && r.getDecompiledFunction() != null
                                ? r.getDecompiledFunction().getC() : "// nothing\n");
                        rep.append('\n');
                    }
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgEvalOf -> " + OUT);
    }

    void dumpInstructions(Function f) {
        Address a = f.getEntryPoint();
        while (a != null && f.getBody().contains(a)) {
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

    /** A dword equal to `target`, in a NON-executable initialised block (i.e. a table, not code). */
    List<Long> findDataRefs(long target) {
        byte[] pat = {
            (byte) target, (byte) (target >> 8), (byte) (target >> 16), (byte) (target >> 24),
        };
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
