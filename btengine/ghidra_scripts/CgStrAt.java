// Print the NUL-terminated ASCII string at each given address, and the string one dereference away.
// Used to name the DAT_ globals a decompile leaves anonymous — an attribute name read through a global
// is exactly as load-bearing as one written inline, and guessing it from context is how a parser gets
// documented wrong.
// @category MHO
import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.Memory;

public class CgStrAt extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Memory mem = currentProgram.getMemory();
        for (String a : args) {
            long addr = Long.parseLong(a.replace("0x", ""), 16);
            String s = readStringAt(mem, addr);
            println(String.format("%08x -> %s", addr, s == null ? "(not ascii)" : "\"" + s + "\""));
            try {
                long p = Integer.toUnsignedLong(mem.getInt(toAddr(addr)));
                String d = readStringAt(mem, p);
                if (d != null) println(String.format("     deref %08x -> \"%s\"", p, d));
            } catch (Exception ignored) { }
        }
    }

    String readStringAt(Memory mem, long addr) {
        var s = new StringBuilder();
        try {
            for (int i = 0; i < 96; i++) {
                int c = mem.getByte(toAddr(addr + i)) & 0xff;
                if (c == 0) break;
                if (c < 0x20 || c > 0x7e) return null;
                s.append((char) c);
            }
        } catch (Exception e) { return null; }
        return s.length() == 0 ? null : s.toString();
    }
}
