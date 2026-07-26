// Recovers the implementation of BT *Operation* handlers by name.
//
// A leaf node in the shipped XML carries Operation="AIBehaviorStart" etc. The client turns that string into a
// handler object, so the name literal lives in .rdata and is referenced by whatever registers/creates it. This
// script, for each requested name:
//   1. finds the exact string literal,
//   2. lists every reference to it (the registration/factory site),
//   3. for each referencing function, decompiles it,
//   4. and additionally treats the name as a class-name-getter target: if a 6-byte
//      `mov eax,<nameStr>; ret` thunk points at it, finds the .rdata vtable holding that thunk and decompiles
//      slot 4 (Evaluate) — the same chain CgVtbl2/CgDeep established for node classes.
//
// Usage: -postScript CgOpRecover.java Name1 Name2 ...
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import java.util.*;

public class CgOpRecover extends GhidraScript {

    private DecompInterface dec;

    @Override
    public void run() throws Exception {
        String[] names = getScriptArgs();
        if (names == null || names.length == 0) {
            println("CgOpRecover: pass one or more Operation names as script args");
            return;
        }
        dec = new DecompInterface();
        dec.openProgram(currentProgram);

        for (String name : names) {
            // An 0x-prefixed arg is a DATA address to dump as a float/int constant, not a class name. Needed
            // because the evaluators express min/max/abs through unnamed .rdata constants (DAT_113c12b8 etc.),
            // and reading them beats inferring them from the surrounding idiom.
            if (name.startsWith("0x") || name.startsWith("0X")) {
                dumpConst(name.substring(2));
                continue;
            }
            println("");
            println("################################################################");
            println("## OPERATION: " + name);
            println("################################################################");
            List<Address> hits = findStrings(name);
            if (hits.isEmpty()) { println("  (no exact string literal found)"); continue; }

            // PRIMARY CHAIN: the 6-byte `mov eax,<nameStr>; ret` class-name getter. TenProtect stripped the RTTI
            // COLs but not these, so this is the only reliable route from a class name to its vtable. Searched by
            // byte pattern because the referencing code is often not disassembled, which leaves no xref at all.
            for (Address sa : hits) {
                for (Address g : findGetters(sa)) {
                    println("  name-getter @ " + g + " (for string " + sa + ")");
                    findVtableContaining(g);
                }
            }
            for (Address sa : hits) {
                println("  string @ " + sa);
                Set<Address> funcs = new LinkedHashSet<>();
                for (Reference r : refsTo(sa)) {
                    println("    xref from " + r.getFromAddress() + " (" + r.getReferenceType() + ")");
                    Function f = getFunctionContaining(r.getFromAddress());
                    if (f != null) funcs.add(f.getEntryPoint());
                    else {
                        // No function: could be a 6-byte name-getter thunk, or a .rdata table slot.
                        probeThunkOrTable(r.getFromAddress(), sa);
                    }
                }
                for (Address fa : funcs) decompile(getFunctionAt(fa), "referencing function");
            }
        }
        dec.dispose();
    }

    private List<Reference> refsTo(Address a) {
        List<Reference> out = new ArrayList<>();
        for (Reference r : getReferencesTo(a)) out.add(r);
        return out;
    }

    /** Prints a data address interpreted as float / int / raw bytes, so constants can be READ not guessed. */
    private void dumpConst(String hex) {
        try {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace()
                    .getAddress(Long.parseLong(hex, 16));
            Memory mem = currentProgram.getMemory();
            int raw = mem.getInt(a);
            byte[] b = new byte[4];
            mem.getBytes(a, b);
            StringBuilder sb = new StringBuilder();
            for (byte x : b) sb.append(String.format("%02x ", x));
            println(String.format("CONST %s : float=%s  int=%d  hex=0x%08x  bytes=%s",
                    a, Float.intBitsToFloat(raw), raw, raw, sb.toString().trim()));
        } catch (Exception e) {
            println("CONST " + hex + " : unreadable (" + e.getMessage() + ")");
        }
    }

    /** Finds every `B8 <strAddr> C3` thunk — the class-name getter shape (vtable slot 7 on node classes). */
    private List<Address> findGetters(Address strAddr) {
        List<Address> out = new ArrayList<>();
        long v = strAddr.getOffset();
        byte[] pat = new byte[] {
            (byte) 0xB8,
            (byte) (v & 0xff), (byte) ((v >> 8) & 0xff), (byte) ((v >> 16) & 0xff), (byte) ((v >> 24) & 0xff),
            (byte) 0xC3
        };
        Memory mem = currentProgram.getMemory();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address f = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (f == null) break;
                out.add(f);
                a = f.add(1);
            }
        }
        return out;
    }

    /** Exact-match string search across initialised memory. */
    private List<Address> findStrings(String s) {
        List<Address> out = new ArrayList<>();
        byte[] pat = s.getBytes();
        Memory mem = currentProgram.getMemory();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address found = mem.findBytes(a, b.getEnd(), pat, null, true, monitor);
                if (found == null) break;
                // require NUL termination so "AIBehaviorStart" doesn't match "AIBehaviorStartFoo"
                try {
                    if (mem.getByte(found.add(pat.length)) == 0) out.add(found);
                } catch (Exception ignored) {}
                a = found.add(1);
            }
        }
        return out;
    }

    /** A reference from outside any function: either a `mov eax,imm32; ret` getter, or a vtable slot. */
    private void probeThunkOrTable(Address from, Address strAddr) throws Exception {
        Memory mem = currentProgram.getMemory();
        // getter shape: B8 <imm32> C3  -> the reference is at from, so the opcode starts at from-1
        try {
            Address op = from.subtract(1);
            if ((mem.getByte(op) & 0xff) == 0xB8 && (mem.getByte(op.add(5)) & 0xff) == 0xC3) {
                println("      -> name-getter thunk at " + op);
                findVtableContaining(op);
                return;
            }
        } catch (Exception ignored) {}
        println("      -> raw data reference (no function, not a getter shape)");
    }

    /** Finds .rdata pointers to `thunk` (i.e. vtable slots) and decompiles slot 4 of each table. */
    private void findVtableContaining(Address thunk) throws Exception {
        Memory mem = currentProgram.getMemory();
        byte[] le = new byte[4];
        long v = thunk.getOffset();
        for (int i = 0; i < 4; i++) le[i] = (byte) ((v >> (8 * i)) & 0xff);
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized() || !b.getName().toLowerCase().contains("rdata")) continue;
            Address a = b.getStart();
            while (a != null && a.compareTo(b.getEnd()) < 0) {
                Address slot = mem.findBytes(a, b.getEnd(), le, null, true, monitor);
                if (slot == null) break;
                println("        vtable slot holding getter @ " + slot);
                // GetClassName is slot 7 in the 15-slot node vtables; Evaluate is slot 4.
                for (int guess : new int[] { 7, 6 }) {
                    Address base = slot.subtract(4L * guess);
                    Address ev = readPtr(base.add(4L * 4));
                    if (ev == null) continue;
                    Function f = getFunctionAt(ev);
                    if (f == null) {
                        println("          assuming table base " + base + " -> slot4 " + ev + " (no function defined)");
                        disassemble(ev);
                        f = getFunctionAt(ev);
                        if (f == null) { createFunction(ev, null); f = getFunctionAt(ev); }
                    }
                    if (f != null) { decompile(f, "slot 4 (Evaluate) via getter slot " + guess); return; }
                }
                a = slot.add(1);
            }
        }
    }

    private Address readPtr(Address a) {
        try {
            long p = currentProgram.getMemory().getInt(a) & 0xffffffffL;
            if (p == 0) return null;
            return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(p);
        } catch (Exception e) { return null; }
    }

    private void decompile(Function f, String what) {
        if (f == null) return;
        println("      --- " + what + ": " + f.getName() + " @ " + f.getEntryPoint()
                + " (" + f.getBody().getNumAddresses() + " bytes) ---");
        DecompileResults res = dec.decompileFunction(f, 90, monitor);
        if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null)
            println(res.getDecompiledFunction().getC());
        else
            println("      (decompilation failed: " + (res == null ? "null" : res.getErrorMessage()) + ")");
    }
}
