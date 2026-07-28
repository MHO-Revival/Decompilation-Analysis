// Recover the flowgraph<->AI command protocol: the `Game:AI*` flow nodes and the `FGAI_*` acknowledgements.
//
// WHY. The BT op SendEventToFG posts a named event to the flowgraph, and all 16 names em003 can reach are
// `FGAI_*`. But NONE of the 96 `Game:RecevieBTEvent` EventNames in the shipped graphs is an `FGAI_*` — so the
// acks are consumed somewhere else. The strings dump shows 51 = 17 commands x 3 phases
// (_Accepted / _Success / _Failure), so the protocol has a phase I had not accounted for. Whoever COMPARES
// against these strings is the ack handler; that is what this finds.
//
// Both halves live in CryAction.dll (there is no `Game:AI` string in CryGame.dll at all).
//
// Strategy per string: locate it, then find every reference — Ghidra's own reference table AND a raw scan of
// the executable blocks for the literal 4-byte address, because a `-noanalysis` program may have no
// references recorded at all. Decompile each distinct containing function once.
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
import ghidra.program.model.symbol.Reference;

public class CgFgAi extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/fgai";

    /** The ack names, the two BT-event nodes, and a representative spread of the command nodes. */
    static final String[] WANT = {
        // acks — the direct route to the consumer
        "FGAI_Attack_Accepted", "FGAI_Attack_Success", "FGAI_Attack_Failure",
        "FGAI_GotoPos_Success", "FGAI_FollowPath_Success", "FGAI_TakeControl_Success",
        "FGAI_LeaveControl_Accepted", "FGAI_LeaveRegion_Success",
        // the BT<->FG bridge nodes
        "Game:RecevieBTEvent", "Game:SendBTEvent",
        // command nodes
        "Game:AIAttack", "Game:AIGoto", "Game:AIFGTakeControl", "Game:AIFGLeaveControl",
        "Game:AISwitchRegion", "Game:AIPlayAnimation",
        // the completion ports every command node publishes
        "EOP_Succeeded", "EOP_Failed",
    };

    Memory mem;
    DecompInterface dec;
    StringBuilder rep = new StringBuilder();
    /** Functions already emitted, so a string shared by 17 nodes does not print its handler 17 times. */
    Set<Long> done = new HashSet<>();

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        for (String want : WANT) {
            rep.append("\n================================================== \"").append(want).append("\"\n");
            List<Long> addrs = findExact(want);
            if (addrs.isEmpty()) { rep.append("  string NOT FOUND\n"); continue; }

            for (long sa : addrs) {
                rep.append(String.format("  string @ %08x%n", sa));

                Set<Long> sites = new TreeSet<>();
                for (Reference r : getReferencesTo(toAddr(sa))) sites.add(r.getFromAddress().getOffset());
                sites.addAll(scanCodeFor(sa));

                if (sites.isEmpty()) { rep.append("    no reference sites\n"); continue; }
                for (long site : sites) {
                    Function f = getFunctionContaining(toAddr(site));
                    if (f == null) {
                        rep.append(String.format("    site %08x — no function (not disassembled)%n", site));
                        continue;
                    }
                    long ep = f.getEntryPoint().getOffset();
                    rep.append(String.format("    site %08x in %s @ %08x (%d bytes)%s%n",
                            site, f.getName(), ep, f.getBody().getNumAddresses(),
                            done.contains(ep) ? "  [already dumped]" : ""));
                    if (!done.add(ep)) continue;
                    rep.append("      ---- decompiled ----\n");
                    DecompileResults r = dec.decompileFunction(f, 220, monitor);
                    rep.append(r != null && r.getDecompiledFunction() != null
                            ? r.getDecompiledFunction().getC() : "// decompile failed\n");
                }
            }
        }

        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(rep.toString());
        }
        println("CgFgAi -> " + OUT + " (" + done.size() + " functions)");
    }

    /** Every offset in an EXECUTABLE block holding the literal little-endian address — catches push/mov/etc. */
    List<Long> scanCodeFor(long target) {
        byte[] pat = {
            (byte) target, (byte) (target >> 8), (byte) (target >> 16), (byte) (target >> 24),
        };
        List<Long> out = new ArrayList<>();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || !b.isExecute()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                out.add(f.getOffset());
                if (out.size() > 40) return out;
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
}
