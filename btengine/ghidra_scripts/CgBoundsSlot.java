// Is entity vtable +0x7c LOCAL bounds or WORLD bounds? (BodyWidthToMeter's unit chain)
//
// CBodyWidthToMeter::Evaluate calls entity->vtbl[0x7c](&aabb, 1) and takes the diagonal of max-min. Our body
// extents come from the art pipeline's <model>_size.txt in model-space centimetres, so the conversion needs
// cm->m for certain and the entity's model->world scale (3) ONLY IF that query already returns world bounds.
// Applying the factor when it should not be applied — or omitting it when it should — is a 3x error in every
// body-width distance, so it is worth settling rather than caveating forever.
//
// Neighbours already known on this vtable, from ops decompiled today:
//   +0x88  get current region id   (CSetCurrentRegionID::Evaluate)
//   +0x94  get current position    (CRegionPathFindRequest::Evaluate)
//   +0x78  GetWorldTM              (Monster-Movement-RE, from the two move drives)
//
// The discriminator: find other callers of +0x7c and see what they do with the result. A caller that ADDS the
// entity position to it is reading LOCAL bounds; one that compares it directly against world coordinates, or
// that also fetches +0x94 and does NOT add, is reading WORLD bounds.
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

public class CgBoundsSlot extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/boundsslot";
    static final int MAX_FUNCS = 14;

    @Override
    public void run() throws Exception {
        var dec = new DecompInterface();
        dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        var sb = new StringBuilder();
        var seen = new HashSet<Long>();
        int dumped = 0;

        // `CALL dword ptr [reg + 0x7c]` — the ModRM/displacement forms Ghidra decodes for an indirect call
        // through a vtable at displacement 0x7c. FF /2 with disp8 = FF 5x 7c.
        byte[][] pats = {
            { (byte) 0xFF, (byte) 0x50, (byte) 0x7C },   // call [eax+0x7c]
            { (byte) 0xFF, (byte) 0x51, (byte) 0x7C },   // call [ecx+0x7c]
            { (byte) 0xFF, (byte) 0x52, (byte) 0x7C },   // call [edx+0x7c]
            { (byte) 0xFF, (byte) 0x53, (byte) 0x7C },   // call [ebx+0x7c]
            { (byte) 0xFF, (byte) 0x56, (byte) 0x7C },   // call [esi+0x7c]
            { (byte) 0xFF, (byte) 0x57, (byte) 0x7C },   // call [edi+0x7c]
        };

        for (byte[] pat : pats) {
            for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
                if (!b.isInitialized() || !b.isExecute()) continue;
                Address a = b.getStart();
                while (a != null && a.compareTo(b.getEnd()) < 0) {
                    Address hit = currentProgram.getMemory()
                            .findBytes(a, b.getEnd(), pat, null, true, monitor);
                    if (hit == null) break;
                    a = hit.add(1);

                    Instruction insn = getInstructionAt(hit);
                    if (insn == null || !insn.getMnemonicString().startsWith("CALL")) continue;
                    Function f = getFunctionContaining(hit);
                    if (f == null || !seen.add(f.getEntryPoint().getOffset())) continue;
                    if (dumped >= MAX_FUNCS) continue;

                    sb.append(String.format("======== %s @%08x — call at %08x (%d bytes)%n",
                            f.getName(), f.getEntryPoint().getOffset(), hit.getOffset(),
                            f.getBody().getNumAddresses()));
                    DecompileResults r = dec.decompileFunction(f, 150, monitor);
                    String c = r != null && r.getDecompiledFunction() != null
                            ? r.getDecompiledFunction().getC() : "// nothing\n";
                    // Flag the tells rather than making a human read every body.
                    sb.append("  mentions +0x94 (position): ").append(c.contains("0x94")).append('\n');
                    sb.append("  mentions +0x78 (worldTM) : ").append(c.contains("0x78")).append('\n');
                    sb.append(c).append('\n');
                    dumped++;
                }
            }
        }

        sb.append(String.format("%nfunctions calling +0x7c: %d (dumped %d)%n", seen.size(), dumped));
        try (FileWriter w = new FileWriter(new File(OUT, "report_" + currentProgram.getName() + ".txt"))) {
            w.write(sb.toString());
        }
        println("CgBoundsSlot -> " + OUT + "  (" + seen.size() + " callers)");
    }
}
