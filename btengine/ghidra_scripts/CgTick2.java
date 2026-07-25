// Decompile the non-node driver caller (104b562f region) + start helper + context ctor vtable slot for update.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgTick2 extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out3";
    DecompInterface dec; FunctionManager fm;
    String decomp(long fp){ Function f=fm.getFunctionAt(toAddr(fp)); if(f==null)f=fm.getFunctionContaining(toAddr(fp));
        if(f==null){try{f=createFunction(toAddr(fp),null);}catch(Exception e){}}
        if(f==null) return "// <no fn @"+String.format("%08x",fp)+">\n";
        try{ DecompileResults r=dec.decompileFunction(f,160,monitor); if(r!=null&&r.decompileCompleted()) return r.getDecompiledFunction().getC(); }catch(Exception e){}
        return "// <fail>\n"; }
    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("crygame")){ println("skip"); return; }
        fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        StringBuilder sb=new StringBuilder();
        // function containing the non-node advance caller
        Function f=fm.getFunctionContaining(toAddr(0x104b562fL));
        sb.append("\n//#### driver-caller @104b562f -> fn "+(f==null?"?":f.getName()+"@"+f.getEntryPoint())+" ####\n");
        sb.append(decomp(0x104b562fL));
        long[] more={0x10494a60L /*start helper*/, 0x104a2050L /*ctx ctor*/};
        String[] nm={"start_helper_10494a60","ctx_ctor_104a2050"};
        for(int i=0;i<more.length;i++){ sb.append("\n//#### "+nm[i]+" ####\n"+decomp(more[i])); }
        // Also: who calls FUN_10494a60 (start helper)?  and who calls advance non-node
        sb.append("\n// callers of start_helper 10494a60:\n");
        for(Reference r: getReferencesTo(toAddr(0x10494a60L))){ Function g=fm.getFunctionContaining(r.getFromAddress());
            sb.append("//   @"+r.getFromAddress()+(g==null?"":" in "+g.getName()+"@"+g.getEntryPoint())+"\n"); }
        try(FileWriter w=new FileWriter(new File(OUT,"driver3.c"))){ w.write(sb.toString()); }
        println("[CgTick2] done");
    }
}
