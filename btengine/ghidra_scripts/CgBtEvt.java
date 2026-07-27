// Two closing questions for "can the server push BT state / blackboard vars to the client?":
//
// (A) The client fires a BT event as: ext=GetExtension("BehaviorTreeBase"); ext->vtbl[0x70](varName, val);
//     entity->vtbl[0x24](&SEntityEvent{ event=0x124, 0x4ffff, &ctx, "<EventName>", 0, 2 }).
//     0x4ffff is a distinctive marker. Sweep EVERY instruction in CryGame for the immediate 0x4ffff to get
//     the exhaustive list of BT-event senders (this catches senders that cached the extension pointer and
//     therefore never reference the "BehaviorTreeBase" string).
//
// (B) Does the 663 CS_CMD_MONSTER_APPEAR_NTF_LIST handler (FUN_112a2e10) read the appear struct's
//     BBVars field? In the client's C layout CSMonsterAppearNtf::BBVars sits at +146 (0x92) and BTState at
//     +114 (0x72) (from the compiled csproto metalib). Decompile the handler chain and report which of the
//     two offsets appear.
//
// Output: /home/fallen/Projets/MHO/decompiled/bbsync/btevt_*.{txt,c}
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;

public class CgBtEvt extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbsync";
    static final long MARKER = 0x4ffffL;

    // 663 appear-list handler and the 714 handler, for the offset check.
    static final long[] HANDLERS = { 0x112a2e10L, 0x1129f8b0L, 0x113a3720L };

    DecompInterface dec;
    FunctionManager fm;

    String decomp(Function f) {
        if (f == null) return "// <no function>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 120, monitor);
            if (r != null && r.getDecompiledFunction() != null) return r.getDecompiledFunction().getC();
        } catch (Exception e) { }
        return "// <decompile failed>\n";
    }

    String fname(Function f) { return f == null ? "?" : f.getName() + "@" + f.getEntryPoint(); }

    List<Function> callees(Function f) {
        List<Function> out = new ArrayList<>();
        if (f == null) return out;
        Set<Address> seen = new HashSet<>();
        for (Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true)) {
            if (!ins.getMnemonicString().startsWith("CALL")) continue;
            for (Reference r : ins.getReferencesFrom()) {
                Function t = fm.getFunctionAt(r.getToAddress());
                if (t != null && seen.add(t.getEntryPoint())) out.add(t);
            }
        }
        return out;
    }

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);

        StringBuilder rep = new StringBuilder();

        // ---- (A) exhaustive sweep for the BT-event marker immediate ----
        rep.append("=== (A) FUNCTIONS CONTAINING IMMEDIATE 0x4FFFF (BT entity-event senders) ===\n");
        Map<Address, Integer> hits = new LinkedHashMap<>();
        long scanned = 0;
        InstructionIterator ii = currentProgram.getListing().getInstructions(true);
        while (ii.hasNext()) {
            Instruction ins = ii.next();
            scanned++;
            int nops = ins.getNumOperands();
            for (int i = 0; i < nops; i++) {
                if ((ins.getOperandType(i) & OperandType.SCALAR) == 0) continue;
                Scalar sc = ins.getScalar(i);
                if (sc == null || sc.getUnsignedValue() != MARKER) continue;
                Function f = fm.getFunctionContaining(ins.getAddress());
                Address key = f == null ? ins.getAddress() : f.getEntryPoint();
                hits.merge(key, 1, Integer::sum);
            }
        }
        rep.append("instructions scanned: ").append(scanned).append("\n");
        rep.append("distinct functions: ").append(hits.size()).append("\n\n");
        StringBuilder evtC = new StringBuilder();
        for (Map.Entry<Address, Integer> e : hits.entrySet()) {
            Function f = fm.getFunctionAt(e.getKey());
            rep.append(String.format("  %-52s  hits=%d%n",
                    f == null ? ("<no fn> " + e.getKey()) : fname(f), e.getValue()));
            if (f != null) {
                evtC.append("\n// ===== BT-event sender: ").append(fname(f)).append(" =====\n");
                evtC.append(decomp(f));
            }
        }

        // ---- (B) does the appear-list handler chain touch BBVars(+0x92) / BTState(+0x72)? ----
        rep.append("\n=== (B) APPEAR HANDLERS: BTState(+0x72) vs BBVars(+0x92) ===\n");
        StringBuilder handC = new StringBuilder();
        Set<Address> done = new HashSet<>();
        for (long h : HANDLERS) {
            Function f = fm.getFunctionAt(toAddr(h));
            if (f == null) { rep.append("  no function @ ").append(Long.toHexString(h)).append("\n"); continue; }
            List<Function> chain = new ArrayList<>();
            chain.add(f);
            chain.addAll(callees(f));
            rep.append("\n-- ").append(fname(f)).append("  (self + ").append(chain.size() - 1).append(" callees)\n");
            for (Function c : chain) {
                String src = decomp(c);
                boolean bt = src.contains("0x72") || src.contains("+ 0x72");
                boolean bb = src.contains("0x92");
                if (bt || bb) {
                    rep.append(String.format("     %-46s  BTState(0x72)=%s  BBVars(0x92)=%s%n",
                            fname(c), bt ? "YES" : "-", bb ? "YES" : "-"));
                }
                if (done.add(c.getEntryPoint())) {
                    handC.append("\n// ===== ").append(fname(c)).append(" =====\n").append(src);
                }
            }
        }

        FileWriter w = new FileWriter(new File(OUT, "btevt_report.txt")); w.write(rep.toString()); w.close();
        w = new FileWriter(new File(OUT, "btevt_senders.c")); w.write(evtC.toString()); w.close();
        w = new FileWriter(new File(OUT, "btevt_handlers.c")); w.write(handC.toString()); w.close();
        println("CgBtEvt done");
    }
}
