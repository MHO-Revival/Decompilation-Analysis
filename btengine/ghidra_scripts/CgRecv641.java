// Decompile the 641 monster-locomotion RECEIVE CHAIN, breadth-first from the fan-out.
//
// Purpose: find where the client turns our sent MoveSpeed into actual motion, to settle whether that
// number is MODEL units (needs x3, like root motion) or already WORLD units.
//
// Chain roots (all confirmed firing in a live hunt by the launcher hooks):
//   0x1065ede0  NetMsgNotifyDispatch_grp0   battle-notify router (458 fires)
//   0x10621040  Recv641 locomotion fan-out  (893 fires)  <-- the one that matters
//   0x10620fd0  Recv640 anim-sequence fan-out (17 fires)
//   0x10621660  Recv648 movestate fan-out   (1 fire)
//   0x10be86b0  MovementController::ApplyMoveRequest — hooked and RULED OUT for the monster
//               (only 11-12 fires, all pre-hunt, all args pointers), included here so the
//               decompile can show WHY it is not on the monster path.
//
// Follows calls DEPTH levels down from each root so the listener that applies the message is
// included even though the fan-out itself only iterates a listener list. Skips huge functions
// (decompiling those stalled an earlier run for hours).
//
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;

public class CgRecv641 extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/movespeed";
    static final long[] ROOTS = { 0x10621040L, 0x1065ede0L, 0x10620fd0L, 0x10621660L, 0x10be86b0L };
    static final int  DEPTH = 2;
    static final long MAX_FN_BYTES = 0x2800;
    static final int  MAX_TOTAL = 60;

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing lst = currentProgram.getListing();
        DecompInterface dec = new DecompInterface(); dec.openProgram(currentProgram);

        // Breadth-first over the call graph from each root.
        LinkedHashMap<Function, Integer> order = new LinkedHashMap<>();
        Deque<Object[]> q = new ArrayDeque<>();
        for (long a : ROOTS) {
            Function f = fm.getFunctionAt(toAddr(a));
            if (f == null) f = fm.getFunctionContaining(toAddr(a));
            if (f == null) { println("no fn at " + toAddr(a)); continue; }
            q.add(new Object[]{ f, 0 });
        }
        while (!q.isEmpty() && order.size() < MAX_TOTAL) {
            Object[] cur = q.poll();
            Function f = (Function) cur[0]; int d = (Integer) cur[1];
            if (order.containsKey(f)) continue;
            order.put(f, d);
            if (d >= DEPTH) continue;
            // enumerate direct callees by walking the body's call references
            for (Instruction ins = lst.getInstructionAt(f.getEntryPoint());
                 ins != null && f.getBody().contains(ins.getAddress());
                 ins = lst.getInstructionAfter(ins.getAddress())) {
                for (Reference r : ins.getReferencesFrom()) {
                    if (!r.getReferenceType().isCall()) continue;
                    Function c = fm.getFunctionAt(r.getToAddress());
                    if (c != null && !order.containsKey(c)) q.add(new Object[]{ c, d + 1 });
                }
            }
        }
        println("functions in chain: " + order.size());

        try (PrintWriter idx = new PrintWriter(new FileWriter(OUT + "/_CHAIN.txt"))) {
            idx.println("# 641/640/648 receive chain, breadth-first (depth<=" + DEPTH + ")");
            idx.println("# looking for: a read of the parsed msg at +0x153 (MoveSpeed forward = 8)");
            idx.println("# and whether it is multiplied by an entity scale/matrix before integrating.");
            for (Map.Entry<Function, Integer> e : order.entrySet()) {
                Function f = e.getKey();
                long size = f.getBody().getNumAddresses();
                idx.println();
                idx.println("== d" + e.getValue() + "  " + f.getEntryPoint() + "  " + f.getName()
                            + "  (" + size + " bytes)");
                if (size > MAX_FN_BYTES) { idx.println("     [skipped: too large]"); continue; }
                String c = "// <fail>\n";
                try {
                    DecompileResults r = dec.decompileFunction(f, 120, monitor);
                    if (r != null && r.decompileCompleted()) c = r.getDecompiledFunction().getC();
                } catch (Exception ex) { c = "// <exception " + ex + ">\n"; }
                String fname = "chain_" + f.getEntryPoint() + ".c";
                try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/" + fname))) {
                    pw.println("// " + f.getName() + " @ " + f.getEntryPoint()
                               + "  depth " + e.getValue() + "  (" + size + " bytes)");
                    pw.println();
                    pw.print(c);
                }
                idx.println("     -> " + fname);
            }
        }
        dec.dispose();
        println("wrote " + OUT + "/_CHAIN.txt");
    }
}
