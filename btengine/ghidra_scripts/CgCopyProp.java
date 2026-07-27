// CCopyTargetPropertyToBB: which blackboard key feeds its slot-3 entity input? (tasks #86 / em003 teleport)
//
// The class registers four parameters. 0 and 1 are authorable strings (PropertyName, TargetName), 2 is an
// authorable bool (Properties vs PropertiesInstance). 3 is registered through the registrar's SHORT form,
// which for CCombatNpcMoveToTarget carries the default blackboard key as a fourth argument ("TargetID").
// CgParamReg's dump shows only three arguments for this class's slot 3, which is either a real difference or
// the dumper losing a push. Settle it by dumping the actual instructions of the registration block, with every
// call target resolved and every immediate that points at a string printed as that string.
//
// Also resolves the six type-name globals the Evaluate switches on (DAT_113bee70, "String", "Float",
// DAT_113bedfc, DAT_113bee80, DAT_113bee84), since the op coerces the entity property to the blackboard
// variable's declared type and those names ARE the type vocabulary.
// @category MHO
import java.io.File;
import java.io.FileWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.scalar.Scalar;

public class CgCopyProp extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/copyprop";

    // Registration blocks to dump, by the call sites CgParamReg reported for each class.
    //   CCopyTargetPropertyToBB  0x10565aa8 .. 0x10565c18
    //   CTeleportToTargetPos     0x105ec694 .. 0x105ec784+   (its Evaluate reads slots 0,1,2,3,4, so the
    //                            block runs past the last call site CgParamReg happened to print)
    static final long[][] BLOCKS = {
        { 0x10565a40L, 0x10565c60L },
        { 0x105ec600L, 0x105ec900L },
    };

    // Type-name globals referenced by CCopyTargetPropertyToBB::Evaluate (FUN_105656e0).
    static final long[] TYPE_GLOBALS = {
        0x113bee70L, 0x113bedfcL, 0x113bee80L, 0x113bee84L, 0x113bef4cL,
    };

    Memory mem;
    StringBuilder sb = new StringBuilder();

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        new File(OUT).mkdirs();

        sb.append("=== type-name globals the Evaluate compares against ===\n");
        for (long g : TYPE_GLOBALS) {
            sb.append(String.format("  %08x -> %s%n", g, readStringAt(g)));
            // These are often pointers to the string rather than the string itself.
            long p = readU32(g);
            if (p > 0x10000000L && p < 0x13000000L)
                sb.append(String.format("           (deref %08x) -> %s%n", p, readStringAt(p)));
        }

        for (long[] block : BLOCKS) {
            sb.append("\n=== registration block ")
              .append(String.format("%08x..%08x", block[0], block[1])).append(" ===\n");
            Address a = toAddr(block[0]);
            while (a != null && a.getOffset() < block[1]) {
                Instruction insn = getInstructionAt(a);
                if (insn == null) {
                    a = a.add(1);
                    continue;
                }
                sb.append(String.format("%08x  %-34s", a.getOffset(), insn.toString()));
                annotate(insn);
                sb.append('\n');
                a = insn.getMaxAddress().add(1);
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report.txt"))) { w.write(sb.toString()); }
        println("CgCopyProp -> " + OUT);
    }

    /** Print any immediate that resolves to a string, and the symbol behind any call target. */
    void annotate(Instruction insn) {
        for (int i = 0; i < insn.getNumOperands(); i++) {
            for (Object o : insn.getOpObjects(i)) {
                if (o instanceof Scalar s) {
                    long v = s.getUnsignedValue();
                    if (v > 0x10000000L && v < 0x13000000L) {
                        String str = readStringAt(v);
                        if (str != null) sb.append("  ; \"").append(str).append('"');
                    }
                } else if (o instanceof Address ad) {
                    Function f = getFunctionAt(ad);
                    if (f != null) sb.append("  ; -> ").append(f.getName());
                    String str = readStringAt(ad.getOffset());
                    if (str != null) sb.append("  ; \"").append(str).append('"');
                }
            }
        }
    }

    long readU32(long addr) {
        try { return Integer.toUnsignedLong(mem.getInt(toAddr(addr))); }
        catch (Exception e) { return 0; }
    }

    /** A printable ASCII, NUL-terminated string at addr, or null. */
    String readStringAt(long addr) {
        StringBuilder s = new StringBuilder();
        try {
            for (int i = 0; i < 96; i++) {
                int c = mem.getByte(toAddr(addr + i)) & 0xff;
                if (c == 0) break;
                if (c < 0x20 || c > 0x7e) return null;
                s.append((char) c);
            }
        } catch (Exception e) { return null; }
        return s.length() == 0 ? null : s.toString();
    }
}
