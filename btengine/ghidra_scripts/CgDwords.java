// Dump raw dwords from an address, resolving each to a function/symbol name when it points at one.
//
// For reading TABLES: vtables, the CS command dispatch map, string-pointer arrays. A decompile shows
// `*(code **)(base + i*8)` and says nothing about what is in the table; this says.
//
//   -postScript CgDwords.java 0x11223630 64          // 64 dwords from that address
// @category MHO
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Symbol;

public class CgDwords extends GhidraScript {
    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        String[] args = getScriptArgs();
        if (args.length == 0) { println("usage: CgDwords <addr> [count]"); return; }
        long base = Long.parseLong(args[0].replace("0x", ""), 16);
        int count = args.length > 1 ? Integer.parseInt(args[1]) : 32;

        for (int i = 0; i < count; i++) {
            long a = base + i * 4L;
            long v;
            try { v = mem.getInt(toAddr(a)) & 0xFFFFFFFFL; } catch (Exception e) { println("  <unreadable>"); break; }
            String what = "";
            if (v > 0x10000000L && v < 0x12000000L) {
                Function f = getFunctionAt(toAddr(v));
                if (f == null) f = getFunctionContaining(toAddr(v));
                if (f != null) what = f.getName() + (f.getEntryPoint().getOffset() == v ? "" : " (inside)");
                else {
                    Symbol s = getSymbolAt(toAddr(v));
                    if (s != null) what = s.getName();
                    else {
                        // Maybe a C string.
                        var sb = new StringBuilder();
                        for (int k = 0; k < 40; k++) {
                            int b;
                            try { b = mem.getByte(toAddr(v + k)) & 0xff; } catch (Exception e) { break; }
                            if (b == 0) break;
                            if (b < 32 || b > 126) { sb.setLength(0); break; }
                            sb.append((char) b);
                        }
                        if (sb.length() > 0) what = "\"" + sb + "\"";
                    }
                }
            }
            println(String.format("%08x  [%3d] %08x  %s", a, i, v, what));
        }
    }
}
