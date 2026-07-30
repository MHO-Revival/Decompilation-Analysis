// Print the C string at each address given as an argument. The plain "dump every string" file loses the
// addresses, so a decompile that shows `DAT_1130acf0` cannot be read back into text without this.
//
//   -postScript CgStrAtAddr.java 0x1130acf0 0x11309e90
// @category MHO
import ghidra.app.script.GhidraScript;
import ghidra.program.model.mem.Memory;

public class CgStrAtAddr extends GhidraScript {
    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        for (String arg : getScriptArgs()) {
            long a = Long.parseLong(arg.replace("0x", ""), 16);
            var sb = new StringBuilder();
            for (int i = 0; i < 200; i++) {
                int b;
                try { b = mem.getByte(toAddr(a + i)) & 0xff; } catch (Exception e) { break; }
                if (b == 0) break;
                sb.append(b >= 32 && b < 127 ? (char) b : '.');
            }
            println(String.format("%08x = \"%s\"", a, sb));
        }
    }
}
