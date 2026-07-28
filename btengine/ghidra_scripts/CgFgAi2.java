// Second pass on the flowgraph<->AI protocol. CgFgAi found the ack matcher; this nails down the parts that
// pass needed but could not reach:
//
//   1. THE COMMAND ID PER NODE. All 17 ack handlers are the same compiled function bar the two ack strings
//      and ONE constant (FollowPath=1, GotoPos=2, Attack=7, TakeControl=0xc, LeaveControl=0xd). Those 5 match
//      the string table's order exactly, so the other 12 are probably just the index — but "probably" is not
//      recovered. Decompile all 17 and read each one's constant.
//
//   2. THE PORT LAYOUT. The handler reads input ports 0 and 3..9 with per-type accessors, so the ten input
//      ports are positional. Which name sits at which index decides how a shipped `Game:AIAttack` node's
//      authored inputs become a command, and it cannot be guessed from the graph XML (which stores port
//      names, not indices). GetConfiguration holds the answer; it is reached from ProcessEvent through the
//      shared vtable.
//
//   3. NODE CLASS -> HANDLER, from the registration rather than by inference. `Game:AIAttack` has no code
//      reference at all — CryEngine's REGISTER_FLOW_NODE leaves the name in a static CAutoRegFlowNodeBase in
//      .data, so the reference is a DATA one. Finding that object gives the factory vtable, whose Create()
//      names the node class. This is also the only route to `Game:RecevieBTEvent` / `Game:SendBTEvent`, whose
//      strings likewise have no code reference.
//
//   4. THE PORT ACCESSORS AND THE ACK QUEUE HELPERS, so the offsets above can be read with confidence
//      instead of assumed (SActivationInfo's pInputPorts offset is version-dependent, and whether the ack
//      queue is a list or a single slot changes whether two acks can be in flight).
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

public class CgFgAi2 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/fgai";

    /** All 17 commands, in the order the string table lists them — the order under test as the command id. */
    static final String[] ACKS = {
        "FGAI_FollowPath_Success", "FGAI_GotoPos_Success", "FGAI_Teleport_Success", "FGAI_Abandon_Success",
        "FGAI_TurnToTarget_Success", "FGAI_Wait_Success", "FGAI_Attack_Success", "FGAI_UseItem_Success",
        "FGAI_PlaySequence_Success", "FGAI_Follow_Success", "FGAI_SwitchRegion_Success",
        "FGAI_TakeControl_Success", "FGAI_LeaveRegion_Success", "FGAI_Flee_Success",
        "FGAI_PlayAnimation_Success", "FGAI_RotateWithAnimation_Success", "FGAI_Ougi_Success",
    };

    /** The flow-node class names, reached through their .data registration objects. */
    static final String[] CLASSES = {
        "Game:AIFlowPath", "Game:AIGoto", "Game:AITeleport", "Game:AIAbandon", "Game:AITurnTo",
        "Game:AIWait", "Game:AIAttack", "Game:AIUseItem", "Game:AIPose", "Game:AIFollow",
        "Game:AISwitchRegion", "Game:AIFGTakeControl", "Game:AIFGLeaveControl", "Game:AIFlee",
        "Game:AIPlayAnimation", "Game:AIRotateWithAnimation", "Game:AIOugiAttack",
        "Game:RecevieBTEvent", "Game:SendBTEvent",
    };

    /** Port accessors and ack-queue helpers seen in the handler. */
    static final long[] HELPERS = {
        0x106ab330L, 0x106ab2f0L, 0x106ab360L, 0x106fcea0L,   // GetPortInt / Float / ptr / string
        0x10795990L, 0x10437240L, 0x10796980L, 0x10796bf0L,   // listener register, queue front, pop, pop-unknown
        0x106a9820L,                                          // ActivateOutput(pActInfo, port, value)
    };

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

        rep.append("############################## 1. ACK HANDLER PER COMMAND (read each one's constant)\n");
        for (String ack : ACKS) {
            rep.append("\n==== ").append(ack).append('\n');
            Long h = soleCodeRef(ack);
            if (h == null) continue;
            Function f = getFunctionContaining(toAddr(h));
            if (f == null) { rep.append("   no function at site\n"); continue; }
            rep.append(String.format("   ProcessEvent = %s @ %08x%n", f.getName(), f.getEntryPoint().getOffset()));
            emit(f);
            vtableAndConfig(f.getEntryPoint().getOffset());
        }

        rep.append("\n\n############################## 2. REGISTRATION OBJECTS (class name -> factory)\n");
        for (String cls : CLASSES) {
            rep.append("\n==== ").append(cls).append('\n');
            List<Long> sa = findExact(cls);
            if (sa.isEmpty()) { rep.append("   string not found\n"); continue; }
            for (long s : sa) rep.append(String.format("   string @ %08x%n", s));
            // The registrar is whatever code reaches the class name — REGISTER_FLOW_NODE's static factory
            // object, or a central register-all function. Either way its body names the node class.
            for (long site : codeSitesForString(cls)) {
                Function f = getFunctionContaining(toAddr(site));
                if (f == null) {
                    rep.append(String.format("     site %08x — no function%n", site));
                    continue;
                }
                rep.append(String.format("     site %08x in %s @ %08x (%dB)%n", site, f.getName(),
                        f.getEntryPoint().getOffset(), f.getBody().getNumAddresses()));
                if (f.getBody().getNumAddresses() <= 400) emit(f);
            }
        }

        rep.append("\n\n############################## 3. HELPERS\n");
        for (long h : HELPERS) {
            Function f = getFunctionContaining(toAddr(h));
            if (f == null) { rep.append(String.format("\n==== %08x — not disassembled%n", h)); continue; }
            rep.append(String.format("\n==== %08x = %s (%d bytes)%n", h, f.getName(), f.getBody().getNumAddresses()));
            dumped.remove(f.getEntryPoint().getOffset());
            emit(f);
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report2_" + currentProgram.getName() + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgFgAi2 -> " + OUT);
    }

    /** Locate the vtable holding ProcessEvent, dump it, and decompile the GetConfiguration slot. */
    void vtableAndConfig(long processEvent) {
        List<Long> slots = scanBlocks(processEvent, false);
        for (long slot : slots) {
            rep.append(String.format("   vtable slot @ %08x — surrounding slots:%n", slot));
            for (int d = -10; d <= 4; d++) {
                long fn = readU32(slot + 4L * d);
                if (!looksLikeCode(fn)) continue;
                Function g = getFunctionContaining(toAddr(fn));
                if (g == null) continue;
                rep.append(String.format("     %+3d  %08x  %s (%dB)%n", d, fn, g.getName(),
                        g.getBody().getNumAddresses()));
            }
            // GetConfiguration is the one that mentions the completion ports.
            for (int d = -10; d <= 4; d++) {
                long fn = readU32(slot + 4L * d);
                if (!looksLikeCode(fn)) continue;
                Function g = getFunctionContaining(toAddr(fn));
                if (g == null || g.getBody().getNumAddresses() < 400) continue;
                if (!mentions(g, "EOP_Succeeded")) continue;
                rep.append(String.format("     >>> GetConfiguration = %s @ %08x%n",
                        g.getName(), g.getEntryPoint().getOffset()));
                emit(g);
            }
        }
    }

    /** Whether a function body references the given string literal — how GetConfiguration is identified. */
    boolean mentions(Function f, String s) {
        long lo = f.getEntryPoint().getOffset(), hi = lo + f.getBody().getNumAddresses();
        for (long site : codeSitesForString(s))
            if (site >= lo && site < hi) return true;
        return false;
    }

    void emit(Function f) {
        long ep = f.getEntryPoint().getOffset();
        if (!dumped.add(ep)) { rep.append(String.format("       (%s already dumped)%n", f.getName())); return; }
        rep.append("       ---- ").append(f.getName()).append(" ----\n");
        DecompileResults r = dec.decompileFunction(f, 220, monitor);
        rep.append(r != null && r.getDecompiledFunction() != null
                ? r.getDecompiledFunction().getC() : "// decompile failed\n");
    }

    /** The single code reference to a string, or null (with the reason recorded). */
    Long soleCodeRef(String s) {
        List<Long> sites = codeSitesForString(s);
        if (sites.isEmpty()) { rep.append("   no code reference\n"); return null; }
        return sites.get(0);
    }

    /**
     * Every code site that reaches a string literal.
     *
     * <p>The direct scan alone is not enough and that is what made pass 1 report `Game:AIAttack` as having no
     * reference at all: these literals are reached through a POINTER TABLE in .rdata (the decompile shows
     * <c>PTR_s_FGAI_Attack_Success_113cd64c</c>), so the code holds the slot's address, never the string's.
     * Follow both hops.</p>
     */
    List<Long> codeSitesForString(String s) {
        List<Long> out = new ArrayList<>();
        for (long a : findExact(s)) {
            out.addAll(scanBlocks(a, true));                 // literal address inlined in code
            for (long slot : scanBlocks(a, false))           // ...or held in an .rdata pointer slot
                out.addAll(scanBlocks(slot, true));
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
    boolean looksLikeData(long a) { return a >= 0x11300000L && a < 0x11500000L; }

    long readU32(long addr) {
        try { return Integer.toUnsignedLong(mem.getInt(toAddr(addr))); }
        catch (Exception e) { return 0; }
    }
}
