// Local or world bounds at +0x7c? Narrowed by INTERFACE, not by slot number.
//
// The previous attempt scanned every `call [reg+0x7c]` and drowned (358 hits) because a vtable displacement is
// not interface-unique. But two ops decompiled today resolve their object the SAME way and then use two
// different slots on it:
//
//   CBodyWidthToMeter      obj = service[0x50]->vtbl[0x2c](entityId);  obj->vtbl[0x7c](&aabb, 1)
//   CRegionPathFindRequest obj = service[0x50]->vtbl[0x2c](entityId);  obj->vtbl[0x94]()  -> the path FROM position
//
// Same interface. The +0x94 position is fed straight into a pathfinder as a world coordinate, so this interface
// deals in world space — which already argues the +0x7c bounds are world. To settle it, find the functions that
// use BOTH slots on one object: a caller that ADDS the position to the bounds is reading LOCAL bounds; one that
// uses them independently, or compares bounds against world coordinates, is reading WORLD bounds.
//
// Restricted to the BT-op address range so the hits are functions whose purpose is legible, rather than the
// container and serialisation code the unrestricted scan returned.
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
import ghidra.program.model.mem.MemoryBlock;

public class CgBoundsUsers extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/boundsslot";

    // The BT ops and their neighbours live here; the noise from the first attempt was all below 0x10200000.
    static final long LO = 0x10300000L, HI = 0x10700000L;

    @Override
    public void run() throws Exception {
        var dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        var sb = new StringBuilder();
        var seen = new LinkedHashMap<Long, Function>();

        byte[][] pats = {
            { (byte) 0xFF, (byte) 0x50, (byte) 0x7C }, { (byte) 0xFF, (byte) 0x51, (byte) 0x7C },
            { (byte) 0xFF, (byte) 0x52, (byte) 0x7C }, { (byte) 0xFF, (byte) 0x53, (byte) 0x7C },
            { (byte) 0xFF, (byte) 0x56, (byte) 0x7C }, { (byte) 0xFF, (byte) 0x57, (byte) 0x7C },
        };

        for (byte[] pat : pats) {
            for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
                if (!b.isInitialized() || !b.isExecute()) continue;
                Address a = b.getStart();
                while (a != null && a.compareTo(b.getEnd()) < 0) {
                    Address hit = currentProgram.getMemory().findBytes(a, b.getEnd(), pat, null, true, monitor);
                    if (hit == null) break;
                    a = hit.add(1);
                    long off = hit.getOffset();
                    if (off < LO || off >= HI) continue;
                    Instruction insn = getInstructionAt(hit);
                    if (insn == null || !insn.getMnemonicString().startsWith("CALL")) continue;
                    Function f = getFunctionContaining(hit);
                    if (f != null) seen.putIfAbsent(f.getEntryPoint().getOffset(), f);
                }
            }
        }

        sb.append("functions in [").append(Long.toHexString(LO)).append(',').append(Long.toHexString(HI))
          .append(") calling +0x7c: ").append(seen.size()).append("\n\n");

        for (Function f : seen.values()) {
            DecompileResults r = dec.decompileFunction(f, 150, monitor);
            String c = r != null && r.getDecompiledFunction() != null ? r.getDecompiledFunction().getC() : "";
            boolean pos = c.contains("0x94");
            boolean tm = c.contains("0x78");
            sb.append(String.format("======== %s @%08x (%d bytes)  usesPos(+0x94)=%s usesWorldTM(+0x78)=%s%n",
                    f.getName(), f.getEntryPoint().getOffset(), f.getBody().getNumAddresses(), pos, tm));
            // Only print the body when it uses a second slot too — those are the ones that can discriminate.
            if (pos || tm) sb.append(c).append('\n');
        }

        try (FileWriter w = new FileWriter(new File(OUT, "users_" + currentProgram.getName() + ".txt"))) {
            w.write(sb.toString());
        }
        println("CgBoundsUsers -> " + OUT + " (" + seen.size() + " functions)");
    }
}
