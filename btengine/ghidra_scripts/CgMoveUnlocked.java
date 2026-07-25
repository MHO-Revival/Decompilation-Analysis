// Recover CEntityMoveToUnlocked's param schema from CryAction.dll (the node lives there, NOT CryGame —
// which is why decompiled/btruntime has no rt_ file for it and the whole op is unregistered server-side).
//
// WHY THE SCHEMA SETTLES A REAL AMBIGUITY. The name `MoveSpeedScalar` appears in shipped data in two places
// that cannot mean the same thing:
//   * as a NODE attribute on EntityMoveToUnlocked (40 uses): values "1" (38) and "2.0" (2)  -> reads as a MULTIPLIER
//   * as a BLACKBOARD var set by SetBlackBoard (39 uses): values 15 / 30 / 40 / BB.MoveSpeed_Fly / _Glide / _Float
//     -> reads as a SPEED
// The deciding question is whether CEntityMoveToUnlocked declares a `MoveSpeed` param at all:
//   * if it does  -> the node's MoveSpeedScalar multiplies that vector's speed (multiplier reading)
//   * if it does NOT -> MoveSpeedScalar is the node's ONLY speed input, i.e. the speed itself
// The per-tick Execute is unrecoverable (all three CryGame move nodes decompile with vftables=[] and empty
// virtual-method sections), so the declared schema is the best available evidence and guessing is not on.
//
// Also dumps CEntityMove / CEntityMoveToPos / CEntityMoveToTarget if they exist here, so the four move nodes'
// schemas can be compared side by side (the CryGame copies gave names but the 3-arg registrar form hides types).
//
// Method: find the "CEntityMoveToUnlocked" string, walk its references, and for each referencing function dump
// every string literal it pushes — the registrar calls FUN_1001ea30(<paramName>,"") once per param, so the
// literals in call order ARE the schema.
//
// @category MHO
import java.io.*; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.StringDataInstance;

public class CgMoveUnlocked extends GhidraScript {
    static final String OUT = "/home/fallen/Projets/MHO/decompiled/moveunlocked";
    static final String[] WANT = {
        "CEntityMoveToUnlocked", "CEntityMove", "CEntityMoveToPos", "CEntityMoveToTarget"
    };

    @Override public void run() throws Exception {
        new File(OUT).mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();

        // Index defined strings by value. (DefinedDataIterator.definedStrings does not exist in this Ghidra
        // build — walk the listing's defined data and keep the entries whose value is a string instead.)
        Map<String, List<Address>> strAddr = new HashMap<>();
        DataIterator di = currentProgram.getListing().getDefinedData(true);
        while (di.hasNext() && !monitor.isCancelled()) {
            Data d = di.next();
            if (!d.getDataType().getName().toLowerCase().contains("string")) continue;
            Object v = d.getValue();
            if (v == null) continue;
            strAddr.computeIfAbsent(v.toString(), k -> new ArrayList<>()).add(d.getAddress());
        }
        println("defined strings indexed: " + strAddr.size());

        try (PrintWriter out = new PrintWriter(new FileWriter(OUT + "/_SCHEMA_" + currentProgram.getName() + ".txt"))) {
            out.println("# move-node param schemas recovered from " + currentProgram.getName());
            out.println("# a registrar pushes one string literal per param, in index order");
            for (String cls : WANT) {
                out.println();
                out.println("######## " + cls);
                List<Address> addrs = strAddr.get(cls);
                if (addrs == null) { out.println("  <string not present in this binary>"); continue; }
                Set<Function> refs = new LinkedHashSet<>();
                for (Address a : addrs)
                    for (Reference r : getReferencesTo(a)) {
                        Function f = fm.getFunctionContaining(r.getFromAddress());
                        if (f != null) refs.add(f);
                    }
                out.println("  string at " + addrs + "   referencing functions: " + refs.size());
                DecompInterface dec = new DecompInterface();
                dec.openProgram(currentProgram);
                for (Function f : refs) {
                    out.println("  -- " + f.getEntryPoint() + " " + f.getName()
                                + " (" + f.getBody().getNumAddresses() + " bytes)");
                    if (f.getBody().getNumAddresses() > 0x4000) { out.println("     [too large, skipped]"); continue; }
                    String c;
                    try {
                        DecompileResults r = dec.decompileFunction(f, 120, monitor);
                        c = (r != null && r.decompileCompleted()) ? r.getDecompiledFunction().getC() : null;
                    } catch (Exception e) { c = null; }
                    if (c == null) { out.println("     [decompile failed]"); continue; }
                    // Pull the string literals in source order — that is the param list.
                    List<String> lits = new ArrayList<>();
                    java.util.regex.Matcher m =
                        java.util.regex.Pattern.compile("\"([A-Za-z_][A-Za-z_0-9]{2,40})\"").matcher(c);
                    while (m.find()) lits.add(m.group(1));
                    int idx = 0;
                    for (String s : lits) {
                        if (s.equals(cls)) continue;          // the node-type name repeats per param
                        out.println(String.format("     [%2d] %s", idx++, s));
                    }
                    // Keep the body too, so the arg forms (3-arg vs 5-arg with a default) can be read.
                    String fname = "reg_" + currentProgram.getName().replace(".dll","") + "_" + f.getEntryPoint() + ".c";
                    try (PrintWriter pw = new PrintWriter(new FileWriter(OUT + "/" + fname))) { pw.print(c); }
                    out.println("     -> " + fname);
                }
                dec.dispose();
            }
        }
        println("wrote " + OUT + "/_SCHEMA_" + currentProgram.getName() + ".txt");
    }
}
