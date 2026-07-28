// Print the 4-byte float at each given hex address. Companion to CgStrAt for the numeric constants a
// decompile leaves as DAT_ globals — an arithmetic factor read off the wrong address is silently plausible,
// which is exactly the kind of mistake that is hard to find later.
// @category MHO
import ghidra.app.script.GhidraScript;

public class CgF extends GhidraScript {
    @Override
    public void run() throws Exception {
        for (String s : getScriptArgs()) {
            long a = Long.parseLong(s.replace("0x", ""), 16);
            try {
                byte[] b = new byte[4];
                currentProgram.getMemory().getBytes(toAddr(a), b);
                int bits = (b[0] & 0xff) | ((b[1] & 0xff) << 8) | ((b[2] & 0xff) << 16) | ((b[3] & 0xff) << 24);
                println(String.format("%08x = %s  (0x%08x)", a, Float.intBitsToFloat(bits), bits));
            } catch (Exception e) {
                println(String.format("%08x = unreadable", a));
            }
        }
    }
}
