// Given a known VIRTUAL member function, find the vtable(s) it sits in and print requested slots.
//
// Why this exists: TenProtect stripped the RTTI, so a class cannot be found from a name string. What is left is
// the class's OWN symboled methods (CryGame kept many) — any one of them that is virtual appears as a pointer in
// its class vtable, so a data reference to it IS a vtable slot. Walking back to the table start then gives every
// other slot, which is how "who implements slot 0x88?" gets answered without RTTI.
//
//   -postScript CgSlotOf.java 0x10fd48b0 0x88 0xb8        // slots to print, byte offsets
//
// Table start is found by walking back while the preceding dword still points into .text. With no RTTI to
// terminate the run, two adjacent tables CAN merge — so the reported base is printed along with the run length,
// and a run longer than ~0x800 bytes should be treated as merged rather than as one class.
// @category MHO
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;

public class CgSlotOf extends GhidraScript {
    Memory mem;

    long dw(long a) { try { return mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e) { return -1; } }

    boolean inText(long a) {
        if (a == 0 || a == -1) return false;
        MemoryBlock b = mem.getBlock(toAddr(a));
        return b != null && b.isExecute();
    }

    String name(long a) {
        if (a == 0) return "<null>";
        Function f = getFunctionAt(toAddr(a));
        if (f != null) return f.getName();
        Symbol s = getSymbolAt(toAddr(a));
        return s != null ? s.getName() : String.format("FUN_%08x?", a);
    }

    @Override
    public void run() throws Exception {
        mem = currentProgram.getMemory();
        String[] args = getScriptArgs();
        if (args.length == 0) { println("usage: CgSlotOf <funcAddr> [slotOffset ...]"); return; }

        long target = Long.parseLong(args[0].replace("0x", ""), 16);
        Function f = getFunctionContaining(toAddr(target));
        println(String.format("anchor %08x = %s", target, f == null ? "<no fn>" : f.getName()));

        int found = 0;
        for (Reference r : getReferencesTo(toAddr(target))) {
            Address from = r.getFromAddress();
            MemoryBlock blk = mem.getBlock(from);
            if (blk == null || blk.isExecute()) continue;          // want DATA references only
            long slotAddr = from.getOffset();
            if (dw(slotAddr) != target) continue;                   // a real pointer-sized slot

            long base = slotAddr;
            while (inText(dw(base - 4)) && base - slotAddr > -0x1000) base -= 4;
            long end = slotAddr;
            while (inText(dw(end + 4))) end += 4;

            found++;
            println(String.format("  table %08x .. %08x (%d slots)  anchor at slot %d (+0x%x)",
                    base, end, (end - base) / 4 + 1, (slotAddr - base) / 4, slotAddr - base));
            for (int i = 1; i < args.length; i++) {
                long off = Long.parseLong(args[i].replace("0x", ""), 16);
                long fp = dw(base + off);
                println(String.format("      +0x%-4x = %08x  %s", off, fp, name(fp)));
            }
        }
        if (found == 0) println("  no data references — this method is not virtual, or its table was not disassembled");
    }
}
