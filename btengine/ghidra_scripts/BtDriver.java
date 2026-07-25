// Confirm the tree-tick driver + execute path + status enum, and characterize the 103ecxxx region.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;

public class BtDriver extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out2";
    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    long ptrAt(Address a){ try{ return mem.getInt(a)&0xFFFFFFFFL; }catch(Exception e){ return 0; } }
    String decomp(long fp){
        Function f=fm.getFunctionAt(toAddr(fp)); if(f==null) f=fm.getFunctionContaining(toAddr(fp));
        if(f==null){ // try to create at fp
            try{ f=createFunction(toAddr(fp),null); }catch(Exception e){}
        }
        if(f==null) return "// <no fn @"+String.format("%08x",fp)+">\n";
        try{ DecompileResults r=dec.decompileFunction(f,120,monitor);
            return (r!=null&&r.decompileCompleted())?r.getDecompiledFunction().getC():"// <decompile failed>\n";
        }catch(Exception e){ return "// <exc>\n"; }
    }
    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("cryaction")){ println("skip"); return; }
        mem=currentProgram.getMemory(); fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep=new StringBuilder(); StringBuilder out=new StringBuilder();

        // execute-cached-child helpers + resolve + status consumers
        long[] fns={0x103f8050L,0x105ede40L,0x103e6980L,0x103d9340L,0x105f1e40L,
                    0x10a5d8a0L /* setChosen */,0x101cbef0L};
        for(long h: fns){ out.append("\n// ===== "+String.format("%08x",h)+" =====\n"+decomp(h)+"\n"); }

        // driver: who calls slot2 FUN_103dc930 and the behavior 'tick' at +0x08? find refs to 103dc930
        rep.append("== refs to slot2 FUN_103dc930 ==\n");
        for(Reference r: getReferencesTo(toAddr(0x103dc930L))){
            Function f=getFunctionContaining(r.getFromAddress());
            rep.append("  "+r.getReferenceType()+" @"+r.getFromAddress()+(f==null?"":(" in "+f.getName()))+"\n");
        }
        // The per-node 'RunNode' likely = FUN_103dca70/slot8 caller. Find a recursive walker:
        // search .text for the byte pattern 'call dword [reg+0x08]' is hard; instead list callers of
        // FUN_103d8a40 (slot6 init) and FUN_103dc9e0 (slot9) to locate the tree update entry.
        for(long probe: new long[]{0x103d8a40L,0x103dca70L,0x103dc9e0L,0x103dd050L}){
            rep.append("\n== refs to "+String.format("%08x",probe)+" ==\n");
            int n=0;
            for(Reference r: getReferencesTo(toAddr(probe))){
                Function f=getFunctionContaining(r.getFromAddress());
                rep.append("  @"+r.getFromAddress()+(f==null?"":(" in "+f.getName()))+"\n");
                if(++n>15){ rep.append("  ...\n"); break; }
            }
        }
        // characterize 103ecxxx region: decompile function containing 103ec900 (force-create at a prologue)
        // scan back from 103ecb91 for a typical prologue (55 8b ec  or  push regs) to find start
        long start=0;
        for(long a=0x103ecb91L;a>0x103eb000L;a--){
            int b0,b1,b2; try{ b0=mem.getByte(toAddr(a))&0xff; b1=mem.getByte(toAddr(a+1))&0xff; b2=mem.getByte(toAddr(a+2))&0xff;}catch(Exception e){continue;}
            if(b0==0x55 && b1==0x8b && b2==0xec){ start=a; break; }   // push ebp; mov ebp,esp
        }
        rep.append("\n103ec region prologue candidate: "+String.format("%08x",start)+"\n");
        if(start!=0){ out.append("\n// ===== 103ec-region fn @ "+String.format("%08x",start)+" =====\n"+decomp(start)+"\n"); }

        try(FileWriter w=new FileWriter(new File(OUT,"driver_report.txt"))){ w.write(rep.toString()); }
        try(FileWriter w=new FileWriter(new File(OUT,"driver_methods.c"))){ w.write(out.toString()); }
        println(rep.toString());
        println("[BtDriver] done.");
    }
}
