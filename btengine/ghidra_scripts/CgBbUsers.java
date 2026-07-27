// Follow-up to CgBbSync. The client's blackboard write API is reached as:
//    entity -> GetExtension("BehaviorTreeBase") -> ext->vtbl[slot](name, value)
// (proved in ScriptBind_BT::SetBlackboardFloat @11036870, slot 0x74 = SetFloat).
//
// So the complete set of code that can write the client blackboard is bounded by the xrefs to the
// "BehaviorTreeBase" string. Dump them all, with the vtable slots each one calls, and decompile them,
// so we can classify: Lua bind / XML load / BT op / NETWORK receive.
//
// Also dumps xrefs for a few related literals so we can see whether the appear path ever builds the
// extension for a server-driven monster.
//
// Output: /home/fallen/Projets/MHO/decompiled/bbsync/users_*.{txt,c}
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.data.StringDataInstance;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class CgBbUsers extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/bbsync";

    static final String[] LITERALS = {
        "BehaviorTreeBase",
        "BehaviorTree",
        "CBTActor",
        "BTBlackBoard",
    };

    DecompInterface dec;
    FunctionManager fm;

    String decomp(Function f) {
        if (f == null) return "// <no function>\n";
        try {
            DecompileResults r = dec.decompileFunction(f, 90, monitor);
            if (r != null && r.getDecompiledFunction() != null) return r.getDecompiledFunction().getC();
        } catch (Exception e) { }
        return "// <decompile failed>\n";
    }

    String fname(Function f) { return f == null ? "?" : f.getName() + "@" + f.getEntryPoint(); }

    /** vtable-slot displacements used by indirect CALLs inside f (CALL dword ptr [reg + disp]) */
    List<String> slots(Function f) {
        List<String> out = new ArrayList<>();
        if (f == null) return out;
        for (Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true)) {
            if (!ins.getMnemonicString().startsWith("CALL")) continue;
            String s = ins.toString();
            if (s.contains("[") && s.contains("+")) out.add(s);
        }
        return out;
    }

    @Override
    public void run() throws Exception {
        new File(OUT).mkdirs();
        fm = currentProgram.getFunctionManager();
        dec = new DecompInterface();
        dec.openProgram(currentProgram);

        // Find the literals in defined data.
        Map<String, List<Address>> found = new LinkedHashMap<>();
        for (String s : LITERALS) found.put(s, new ArrayList<>());

        DataIterator di = currentProgram.getListing().getDefinedData(true);
        while (di.hasNext()) {
            Data d = di.next();
            String tn = d.getDataType().getName().toLowerCase();
            if (!tn.contains("string")) continue;
            Object v = d.getValue();
            if (v == null) continue;
            String sv = v.toString();
            for (String s : LITERALS) {
                if (sv.equals(s)) found.get(s).add(d.getAddress());
            }
        }

        StringBuilder rep = new StringBuilder();
        StringBuilder bodies = new StringBuilder();
        Set<Address> dumped = new HashSet<>();

        for (String s : LITERALS) {
            rep.append("\n===================== \"").append(s).append("\" =====================\n");
            List<Address> addrs = found.get(s);
            if (addrs.isEmpty()) { rep.append("  <literal not found as defined string data>\n"); continue; }
            for (Address a : addrs) {
                rep.append("  @ ").append(a).append("\n");
                Set<Address> seen = new HashSet<>();
                ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(a);
                int n = 0;
                while (it.hasNext()) {
                    Reference r = it.next();
                    Function c = fm.getFunctionContaining(r.getFromAddress());
                    if (c == null) { rep.append("      (data ref from ").append(r.getFromAddress()).append(")\n"); continue; }
                    if (!seen.add(c.getEntryPoint())) continue;
                    rep.append("      ").append(fname(c)).append("\n");
                    n++;
                    if (s.equals("BehaviorTreeBase") && dumped.add(c.getEntryPoint())) {
                        bodies.append("\n// ===== \"").append(s).append("\" user: ").append(fname(c)).append(" =====\n");
                        for (String sl : slots(c)) bodies.append("//   indirect: ").append(sl).append("\n");
                        bodies.append(decomp(c));
                    }
                }
                rep.append("      total referencing functions: ").append(n).append("\n");
            }
        }

        FileWriter w = new FileWriter(new File(OUT, "users_report.txt")); w.write(rep.toString()); w.close();
        w = new FileWriter(new File(OUT, "users_bodies.c")); w.write(bodies.toString()); w.close();
        println("CgBbUsers done");
    }
}
