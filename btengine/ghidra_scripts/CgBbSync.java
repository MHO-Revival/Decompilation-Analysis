// Question: after a monster is spawned (CSMonsterAppearNtf / CSCtrledMonsterAppearNtf), is there ANY
// path that writes the client-side BT blackboard or BT state from the network?
//
// Method:
//  (1) Decompile the known ScriptBind_BT::SetBlackboard* / CBTActor::GetBlackboard* wrappers and record
//      every function they call -> the real CBTBlackboard accessors.
//  (2) For each such accessor, enumerate ALL callers in CryGame.dll (getReferencesTo on the entry point).
//  (3) Decompile a bounded set of those callers so we can classify them (script bind / XML load / BT op /
//      NETWORK).
//  (4) Separately: dump xrefs to the [stBBVars] / [szBTState] / BlackBoardName strings.
//
// Output: /home/fallen/Projets/MHO/decompiled/bbsync/
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class CgBbSync extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbsync";

    // Named wrappers recovered earlier (clientbt_syms.txt).
    static final Object[][] SEEDS = {
        {"ScriptBind_BT::SetBlackboardEntityID", 0x110367e0L},
        {"ScriptBind_BT::SetBlackboardFloat",    0x11036870L},
        {"ScriptBind_BT::SetBlackboardVec3",     0x11036900L},
        {"ScriptBind_BT::SetBlackboardBool",     0x110369a0L},
        {"ScriptBind_BT::SetBlackboardString",   0x11036a30L},
        {"ScriptBind_BT::SetBlackboardUint",     0x11036ad0L},
        {"ScriptBind_BT::SetBlackboardStringString", 0x11036b30L},
        {"ScriptBind_BT::GetBlackboardFloat",    0x11036e50L},
        {"ScriptBind_BT::LoadBlackboard",        0x11037510L},
        {"CBTActor::GetBlackboardInt",           0x1025b730L},
        {"CBTActor::GetBlackboardBool",          0x1025b860L},
        {"CMonsterEntity::LoadAISettingsFromBlackboard", 0x104a2af0L},
        {"BehaviorTree::RegisterBlackboardKeys", 0x10258da0L},
    };

    // Strings whose xrefs we want (TDR field labels + blackboard names).
    static final Object[][] STRINGS = {
        {"[szBTState]",   0x11dabfecL},
        {"[stBBVars]",    0x11dac018L},
        {"[stMonsterAiStateInfo]", 0x11db432cL},
        {"BlackBoardName", 0x11d492a0L},
        {"BlackBoardFile", 0x11dbc53cL},
        {"BlackBoard",     0x11dbc970L},
    };

    DecompInterface dec;
    FunctionManager fm;
    StringBuilder rep = new StringBuilder();

    String decomp(Function f) {
        if (f == null) return "// <no function>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 90, monitor);
            if (r != null && r.getDecompiledFunction() != null) return r.getDecompiledFunction().getC();
        } catch (Exception e) { /* fall through */ }
        return "// <decompile failed>\n";
    }

    String fname(Function f) {
        if (f == null) return "?";
        return f.getName() + "@" + f.getEntryPoint();
    }

    /** every direct CALL target inside f */
    List<Function> callees(Function f) {
        List<Function> out = new ArrayList<>();
        if (f == null) return out;
        Set<Address> seen = new HashSet<>();
        for (Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true)) {
            String m = ins.getMnemonicString();
            if (!m.startsWith("CALL")) continue;
            for (Reference r : ins.getReferencesFrom()) {
                Function t = fm.getFunctionAt(r.getToAddress());
                if (t != null && seen.add(t.getEntryPoint())) out.add(t);
            }
        }
        return out;
    }

    List<Function> callers(Address a) {
        List<Function> out = new ArrayList<>();
        Set<Address> seen = new HashSet<>();
        ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(a);
        while (it.hasNext()) {
            Reference r = it.next();
            Function c = fm.getFunctionContaining(r.getFromAddress());
            if (c != null && seen.add(c.getEntryPoint())) out.add(c);
        }
        return out;
    }

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);

        StringBuilder seedC = new StringBuilder();
        // callee address -> how many seeds call it
        Map<Long, Integer> hits = new HashMap<>();
        Map<Long, Function> byAddr = new HashMap<>();

        rep.append("=== SEED WRAPPERS AND THEIR CALLEES ===\n");
        for (Object[] s : SEEDS) {
            String nm = (String) s[0];
            long a = (Long) s[1];
            Function f = fm.getFunctionAt(toAddr(a));
            rep.append("\n-- ").append(nm).append(" @ ").append(Long.toHexString(a));
            if (f == null) { rep.append("   <NO FUNCTION>\n"); continue; }
            rep.append("\n");
            for (Function c : callees(f)) {
                long ca = c.getEntryPoint().getOffset();
                rep.append("     -> ").append(fname(c)).append("\n");
                hits.merge(ca, 1, Integer::sum);
                byAddr.put(ca, c);
            }
            seedC.append("\n// ===== ").append(nm).append(" @ ").append(Long.toHexString(a)).append(" =====\n");
            seedC.append(decomp(f));
        }

        rep.append("\n=== SHARED CALLEES (called by >1 seed = candidate real accessor) ===\n");
        List<Map.Entry<Long, Integer>> shared = new ArrayList<>(hits.entrySet());
        shared.sort((x, y) -> y.getValue() - x.getValue());
        for (Map.Entry<Long, Integer> e : shared) {
            if (e.getValue() < 2) continue;
            rep.append(String.format("  %2d x  %s%n", e.getValue(), fname(byAddr.get(e.getKey()))));
        }

        rep.append("\n=== CALLERS OF EACH CANDIDATE ACCESSOR ===\n");
        StringBuilder callerC = new StringBuilder();
        for (Map.Entry<Long, Integer> e : shared) {
            if (e.getValue() < 2) continue;
            Function acc = byAddr.get(e.getKey());
            List<Function> cs = callers(acc.getEntryPoint());
            rep.append("\n-- ").append(fname(acc)).append("  callers=").append(cs.size()).append("\n");
            int n = 0;
            for (Function c : cs) {
                rep.append("     ").append(fname(c)).append("\n");
                if (n++ < 12) {
                    callerC.append("\n// ===== caller of ").append(fname(acc)).append(" : ")
                           .append(fname(c)).append(" =====\n").append(decomp(c));
                }
            }
        }

        rep.append("\n=== STRING XREFS ===\n");
        for (Object[] s : STRINGS) {
            String nm = (String) s[0];
            long a = (Long) s[1];
            rep.append("\n-- \"").append(nm).append("\" @ ").append(Long.toHexString(a)).append("\n");
            List<Function> cs = callers(toAddr(a));
            if (cs.isEmpty()) rep.append("     <no referencing function>\n");
            for (Function c : cs) rep.append("     ").append(fname(c)).append("\n");
        }

        write("report.txt", rep.toString());
        write("seeds.c", seedC.toString());
        write("callers.c", callerC.toString());
        println("CgBbSync done -> " + OUT);
    }

    void write(String name, String body) throws Exception {
        FileWriter w = new FileWriter(new File(OUT, name));
        w.write(body);
        w.close();
    }
}
