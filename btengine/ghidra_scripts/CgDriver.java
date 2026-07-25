// Decompile common BT slots (find per-tick Update/driver), advance helper, random pick, + callers.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgDriver extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out3";
    DecompInterface dec; FunctionManager fm;
    String decomp(long fp){ Function f=fm.getFunctionAt(toAddr(fp)); if(f==null)f=fm.getFunctionContaining(toAddr(fp));
        if(f==null){try{f=createFunction(toAddr(fp),null);}catch(Exception e){}}
        if(f==null) return "// <no fn @"+String.format("%08x",fp)+">\n";
        try{ DecompileResults r=dec.decompileFunction(f,150,monitor); if(r!=null&&r.decompileCompleted()) return r.getDecompiledFunction().getC(); }catch(Exception e){}
        return "// <fail>\n"; }
    void callers(StringBuilder sb,long fp){
        sb.append("  callers of "+String.format("%08x",fp)+":\n");
        int n=0; for(Reference r: getReferencesTo(toAddr(fp))){ Function f=fm.getFunctionContaining(r.getFromAddress());
            sb.append("    "+r.getReferenceType()+" @"+r.getFromAddress()+(f==null?"":" in "+f.getName()+"@"+f.getEntryPoint())+"\n");
            if(++n>18){sb.append("    ...\n");break;} }
    }
    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("crygame")){ println("skip"); return; }
        fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        long[] fns={0x10494cf0L /*s9 common*/,0x10493e20L/*s3*/,0x10493e50L/*s6*/,0x10494f00L/*s17*/,
                    0x10494f90L/*s18*/,0x10494ab0L/*advance*/,0x104c0e60L/*rnd pick*/,
                    0x1047b490L/*base s10*/,0x10264a30L/*s5 common*/,0x104c02a0L/*rnd ctor*/,
                    0x104930e0L/*base ctor*/};
        String[] nm={"s9_common_10494cf0","s3_10493e20","s6_10493e50","s17_10494f00","s18_10494f90",
                     "advance_10494ab0","rnd_pick_104c0e60","base_s10_1047b490","s5_10264a30",
                     "rnd_ctor_104c02a0","base_ctor_104930e0"};
        StringBuilder sb=new StringBuilder(); StringBuilder cr=new StringBuilder();
        for(int i=0;i<fns.length;i++){ sb.append("\n//######## "+nm[i]+" ########\n"+decomp(fns[i])); }
        // find the tick driver: callers of OnStart-root & of s9 & of advance
        cr.append("== CALLERS ==\n");
        for(long f: new long[]{0x10494cf0L,0x10494ab0L,0x104c3330L,0x104c2f90L}) callers(cr,f);
        try(FileWriter w=new FileWriter(new File(OUT,"driver2.c"))){ w.write(sb.toString()); }
        try(FileWriter w=new FileWriter(new File(OUT,"driver2_callers.txt"))){ w.write(cr.toString()); }
        println("[CgDriver] done");
    }
}
