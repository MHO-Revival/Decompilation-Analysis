// Last pass on the FG<->AI protocol. Three things still unread:
//
//   1. THE ACK CALLBACK, FUN_10794a10. The command node subscribes to event 0x192 with entity filter -1 (any),
//      so every awaiting node is handed EVERY behaviour tree's events. On Update it pops one name and matches
//      only its own two. Whether the callback filters by the commanded entity decides if two nodes running the
//      SAME command on different actors cross-talk — i.e. whether correlation is (actor, name) or name alone.
//
//   2. `Game:SendBTEvent`'s ProcessEvent. The data shows it exposes all ten input ports under their true
//      generic names (Enable, TargetNetId, Param1..4, ParamF, ParamPos, ParamString, ParamPos2) where the 17
//      `Game:AI*` nodes rename the unused ones "no_use" — so it is the same node with no fixed command id.
//      It is the FG->BT direction and 243 nodes ship, 94 of them wiring `Done`.
//
//   3. `Game:RecevieBTEvent`'s ProcessEvent, to confirm it matches by name with no enable gate (which is what
//      FlowGraphRunner.OnBtEvent already assumes) and to see whether it republishes the event's parameters.
//
// Route: the node vtables are a repeating 7-slot block with GetConfiguration exactly 3 dwords BEFORE
// ProcessEvent (measured on the Attack node: config 107893c0 at -3, ProcessEvent 10790d90 at +0). So a config
// found from a port-name string yields its ProcessEvent. The class-name strings cannot be used — they have no
// code reference at all, the registrar walks a table — so port names are the way in.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class CgFgAi4 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/fgai";

    /** Port names unique enough to land on the two bridge nodes' GetConfiguration. */
    static final String[] PORTS = { "ParamPos2", "ParamString", "TargetNetId", "Activated" };

    Memory mem;
    DecompInterface dec;
    StringBuilder rep = new StringBuilder();
    Set<Long> dumped = new HashSet<>();

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        rep.append("############### 1. the ack callback the command nodes subscribe with\n");
        for (long a : new long[] { 0x10794a10L, 0x10796bf0L }) {
            Function f = getFunctionContaining(toAddr(a));
            if (f == null) { rep.append(String.format("  %08x not disassembled%n", a)); continue; }
            emit(f);
        }

        rep.append("\n\n############### 2. bridge-node configs found from their port names -> ProcessEvent\n");
        for (String port : PORTS) {
            rep.append("\n======== port name \"").append(port).append("\"\n");
            for (long site : codeSitesForString(port)) {
                Function cfg = getFunctionContaining(toAddr(site));
                if (cfg == null) continue;
                long ep = cfg.getEntryPoint().getOffset();
                long size = cfg.getBody().getNumAddresses();
                // GetConfiguration bodies are large; skip the ProcessEvent hits on the same string.
                if (size < 300) continue;
                rep.append(String.format("   candidate config %s @ %08x (%dB)%n", cfg.getName(), ep, size));
                for (long slot : scanBlocks(ep, false)) {
                    long pe = readU32(slot + 12);            // ProcessEvent = config slot + 3 dwords
                    Function g = looksLikeCode(pe) ? getFunctionContaining(toAddr(pe)) : null;
                    if (g == null) continue;
                    rep.append(String.format("     slot %08x -> ProcessEvent %s @ %08x (%dB)%n",
                            slot, g.getName(), g.getEntryPoint().getOffset(), g.getBody().getNumAddresses()));
                    emit(g);
                    emit(cfg);
                }
            }
        }

        rep.append("\n\n############### 3. the registration table around the class-name pointers\n");
        for (String cls : new String[] { "Game:RecevieBTEvent", "Game:SendBTEvent", "Game:AIAttack" }) {
            rep.append("\n======== ").append(cls).append('\n');
            for (long s : findExact(cls)) {
                for (long slot : scanBlocks(s, false)) {
                    rep.append(String.format("   name pointer slot %08x — neighbourhood:%n", slot));
                    for (int d = -4; d <= 4; d++) {
                        long v = readU32(slot + 4L * d);
                        String what = "";
                        if (looksLikeCode(v)) {
                            Function g = getFunctionContaining(toAddr(v));
                            if (g != null) what = "code " + g.getName() + " (" + g.getBody().getNumAddresses() + "B)";
                        } else {
                            String str = readStringAt(v);
                            if (str != null) what = "str \"" + str + "\"";
                        }
                        rep.append(String.format("     %+2d [%08x] = %08x  %s%n", d, slot + 4L * d, v, what));
                    }
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report4_" + currentProgram.getName() + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgFgAi4 -> " + OUT);
    }

    void emit(Function f) {
        long ep = f.getEntryPoint().getOffset();
        if (!dumped.add(ep)) { rep.append(String.format("       (%s already dumped)%n", f.getName())); return; }
        rep.append("       ---- ").append(f.getName()).append(String.format(" @ %08x ----%n", ep));
        DecompileResults r = dec.decompileFunction(f, 220, monitor);
        rep.append(r != null && r.getDecompiledFunction() != null
                ? r.getDecompiledFunction().getC() : "// decompile failed\n");
    }

    /** Code sites reaching a string, directly or through an .rdata pointer slot. */
    List<Long> codeSitesForString(String s) {
        List<Long> out = new ArrayList<>();
        for (long a : findExact(s)) {
            out.addAll(scanBlocks(a, true));
            for (long slot : scanBlocks(a, false)) out.addAll(scanBlocks(slot, true));
        }
        return out;
    }

    List<Long> scanBlocks(long target, boolean executable) {
        byte[] pat = {
            (byte) target, (byte) (target >> 8), (byte) (target >> 16), (byte) (target >> 24),
        };
        List<Long> out = new ArrayList<>();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || b.isExecute() != executable) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                out.add(f.getOffset());
                if (out.size() > 24) return out;
                try { a = f.add(1); } catch (Exception e) { break; }
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
                try { a = f.add(1); } catch (Exception e) { break; }
            }
        }
        return out;
    }

    boolean looksLikeCode(long a) { return a >= 0x10001000L && a < 0x11300000L; }

    String readStringAt(long addr) {
        if (addr < 0x10001000L || addr > 0x11400000L) return null;
        var s = new StringBuilder();
        try {
            for (int i = 0; i < 64; i++) {
                int c = mem.getByte(toAddr(addr + i)) & 0xff;
                if (c == 0) break;
                if (c < 0x20 || c > 0x7e) return null;
                s.append((char) c);
            }
        } catch (Exception e) { return null; }
        return s.length() == 0 ? null : s.toString();
    }

    long readU32(long addr) {
        try { return Integer.toUnsignedLong(mem.getInt(toAddr(addr))); }
        catch (Exception e) { return 0; }
    }
}
