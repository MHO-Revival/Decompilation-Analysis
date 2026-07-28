// Given an Evaluate address, recover the OP CLASS NAME — the inverse of CgEvalOf.
//
// CgEvalOf goes name -> getter -> vtable slot -> Evaluate (3 dwords before the slot). Running it backwards names
// a function found some other way: several attribute-reading Evaluates turned up as callers of the attribute
// resolver, and an unnamed FUN_ address cannot be matched against the roadmap's op list or the trees.
//
//   1. find the .rdata dword equal to the Evaluate address        (its vtable slot)
//   2. the class-name getter is 3 dwords AFTER it
//   3. the getter is `mov eax, <nameStr>; ret` — read the imm32 and the string there
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgNameOf extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/attrchain";

    Memory mem;

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        new File(OUT).mkdirs();
        var sb = new StringBuilder();

        for (String arg : getScriptArgs()) {
            long eval = Long.parseLong(arg.replace("0x", ""), 16);
            sb.append(String.format("==== Evaluate %08x%n", eval));

            List<Long> slots = findDataRefs(eval);
            if (slots.isEmpty()) { sb.append("   no vtable slot holds this address\n"); continue; }

            for (long slot : slots) {
                long getterSlot = slot + 12;
                long getter = readU32(getterSlot);
                sb.append(String.format("   slot %08x -> name getter slot %08x -> %08x%n",
                        slot, getterSlot, getter));
                if (getter < 0x10000000L || getter > 0x13000000L) { sb.append("      not a code address\n"); continue; }
                // `mov eax, imm32; ret` = B8 <imm32> C3
                try {
                    if ((mem.getByte(toAddr(getter)) & 0xff) != 0xB8) {
                        sb.append("      not a `mov eax,imm32` getter\n");
                        continue;
                    }
                    long strAddr = Integer.toUnsignedLong(mem.getInt(toAddr(getter + 1)));
                    String name = readStringAt(strAddr);
                    sb.append(String.format("      *** %s   (string at %08x)%n",
                            name == null ? "(not ascii)" : name, strAddr));
                } catch (Exception e) {
                    sb.append("      unreadable: ").append(e).append('\n');
                }
            }
            sb.append('\n');
        }

        try (FileWriter w = new FileWriter(new File(OUT, "names_" + currentProgram.getName() + ".txt"))) {
            w.write(sb.toString());
        }
        print(sb.toString());
        println("CgNameOf -> " + OUT);
    }

    List<Long> findDataRefs(long target) {
        List<Long> out = new ArrayList<>();
        byte[] pat = {
            (byte) target, (byte) (target >> 8), (byte) (target >> 16), (byte) (target >> 24),
        };
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || b.isExecute()) continue;   // tables live in data, not code
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                out.add(f.getOffset());
                if (out.size() > 6) return out;
                a = f.add(1);
            }
        }
        return out;
    }

    long readU32(long addr) {
        try { return Integer.toUnsignedLong(mem.getInt(toAddr(addr))); }
        catch (Exception e) { return 0; }
    }

    String readStringAt(long addr) {
        var s = new StringBuilder();
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
