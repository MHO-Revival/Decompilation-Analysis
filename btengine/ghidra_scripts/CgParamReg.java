// What default blackboard key does a BT op's parameter resolve to when a node authors no attribute?
//
// This is the shared blocker behind several ops: TeleportToTargetPos takes a rotation quat in param 2 that no
// shipped node authors, CheckInWater writes to param 0, CheckTerrainDis reads params 0/1/2. The registrar is
// FUN_103cf720(name, class, index, type, required), and a SHORT 3-arg form is known to declare a DEFAULT
// BLACKBOARD KEY rather than an authorable attribute — so the key is sitting in the call arguments.
//
// Ghidra has not disassembled most of .text (TenProtect), so this does not rely on the listing: it scans raw
// bytes for `E8 <rel32>` call sites targeting the registrar, then walks BACKWARDS over the preceding bytes
// collecting `68 <imm32>` / `6A <imm8>` pushes. x86 cdecl pushes arguments right-to-left, so the pushes
// immediately before a call are its arguments in reverse order.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgParamReg extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/terrainops";
    static final long REGISTRAR = 0x103cf720L;
    static final int LOOKBACK = 48;      // bytes before the call to scan for pushes

    Memory mem;

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        StringBuilder sb = new StringBuilder();

        List<Long> sites = callSites(REGISTRAR);
        sb.append(String.format("registrar 0x%08x — %d call sites%n%n", REGISTRAR, sites.size()));

        for (long site : sites) {
            List<String> args = pushesBefore(site);
            sb.append(String.format("call @0x%08x%n", site));
            for (String a : args) sb.append("    ").append(a).append('\n');
            sb.append('\n');
        }

        try (FileWriter w = new FileWriter(new File(OUT, "paramreg.txt"))) { w.write(sb.toString()); }
        println("CgParamReg: " + sites.size() + " sites -> " + OUT + "/paramreg.txt");
    }

    List<Long> callSites(long target) {
        List<Long> out = new ArrayList<>();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || !b.isExecute()) continue;
            long lo = b.getStart().getOffset(), hi = b.getEnd().getOffset();
            for (long p = lo; p + 5 <= hi; p++) {
                try {
                    if ((mem.getByte(toAddr(p)) & 0xFF) != 0xE8) continue;
                    int rel = mem.getInt(toAddr(p + 1));
                    if (p + 5 + rel == target) out.add(p);
                } catch (Exception ignored) { }
            }
        }
        return out;
    }

    /** Collect push instructions in the LOOKBACK bytes before a call, nearest-first (= last pushed = arg 0). */
    List<String> pushesBefore(long site) {
        List<String> out = new ArrayList<>();
        long p = site - LOOKBACK;
        List<String> seq = new ArrayList<>();
        while (p < site) {
            try {
                int op = mem.getByte(toAddr(p)) & 0xFF;
                if (op == 0x68 && p + 5 <= site) {                       // push imm32
                    long v = mem.getInt(toAddr(p + 1)) & 0xFFFFFFFFL;
                    String s = tryString(v);
                    seq.add(String.format("push 0x%08x%s", v, s == null ? "" : "  = \"" + s + "\""));
                    p += 5;
                    continue;
                }
                if (op == 0x6A && p + 2 <= site) {                       // push imm8
                    int v = mem.getByte(toAddr(p + 1));
                    seq.add(String.format("push %d", v));
                    p += 2;
                    continue;
                }
                // The registrar is fastcall/thiscall, so its first two arguments arrive in ECX/EDX and never
                // appear as pushes. That is where the parameter NAME and the default blackboard key live —
                // scanning pushes alone showed only an empty string and hid the very thing being looked for.
                if ((op == 0xB9 || op == 0xBA) && p + 5 <= site) {        // mov ecx/edx, imm32
                    long v = mem.getInt(toAddr(p + 1)) & 0xFFFFFFFFL;
                    String s = tryString(v);
                    seq.add(String.format("mov %s, 0x%08x%s", op == 0xB9 ? "ecx" : "edx", v,
                        s == null ? "" : "  = \"" + s + "\""));
                    p += 5;
                    continue;
                }
                if (op == 0x8D && p + 6 <= site) {                       // lea ecx/edx, [imm32]
                    int modrm = mem.getByte(toAddr(p + 1)) & 0xFF;
                    if (modrm == 0x0D || modrm == 0x15) {
                        long v = mem.getInt(toAddr(p + 2)) & 0xFFFFFFFFL;
                        String s = tryString(v);
                        seq.add(String.format("lea %s, 0x%08x%s", modrm == 0x0D ? "ecx" : "edx", v,
                            s == null ? "" : "  = \"" + s + "\""));
                        p += 6;
                        continue;
                    }
                }
                p++;
            } catch (Exception e) { p++; }
        }
        // pushes are right-to-left, so reverse to get argument order
        Collections.reverse(seq);
        for (int i = 0; i < seq.size(); i++) out.add("arg" + i + "?  " + seq.get(i));
        return out;
    }

    String tryString(long addr) {
        Address a;
        try { a = toAddr(addr); } catch (Exception e) { return null; }
        MemoryBlock b = mem.getBlock(a);
        if (b == null || !b.isInitialized() || b.isExecute()) return null;
        StringBuilder s = new StringBuilder();
        try {
            for (int i = 0; i < 64; i++) {
                int c = mem.getByte(toAddr(addr + i)) & 0xFF;
                if (c == 0) break;
                if (c < 0x20 || c > 0x7e) return null;
                s.append((char) c);
            }
        } catch (Exception e) { return null; }
        return s.length() >= 2 ? s.toString() : null;
    }
}
