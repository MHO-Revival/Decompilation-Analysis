// Decompile curated CryGame BT node methods to find Evaluate + traversal/status semantics.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;

public class CgMethods extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out3";
    DecompInterface dec; FunctionManager fm;
    String decomp(long fp){ Function f=fm.getFunctionAt(toAddr(fp)); if(f==null)f=fm.getFunctionContaining(toAddr(fp));
        if(f==null){try{f=createFunction(toAddr(fp),null);}catch(Exception e){}}
        if(f==null) return "// <no fn @"+String.format("%08x",fp)+">\n";
        try{ DecompileResults r=dec.decompileFunction(f,150,monitor); if(r!=null&&r.decompileCompleted()) return r.getDecompiledFunction().getC(); }catch(Exception e){}
        return "// <fail>\n"; }
    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("crygame")){ println("skip"); return; }
        fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        Object[][] L={
            {"BASE_s15_stub",0x1047b520L},{"BASE_s16",0x10494750L},{"BASE_s2_stub",0x1047b460L},
            {"BASE_s11",0x10264a40L},{"BASE_s20",0x1047d690L},{"BASE_s21",0x1047d9f0L},
            {"Gen_s2",0x104c3330L},{"Gen_s4",0x104c3240L},{"Gen_s8",0x104c3250L},
            {"Gen_s11",0x104c3280L},{"Gen_s15",0x104c31e0L},{"Gen_s16",0x104981b0L},{"Gen_s20",0x10497d40L},
            {"Seq_s2",0x104c2f90L},{"Seq_s4",0x104c2eb0L},{"Seq_s8",0x104c2ec0L},
            {"Seq_s11",0x104c2ef0L},{"Seq_s15",0x104c2e50L},{"Seq_s16",0x10498150L},
            {"Rnd_s2",0x104c0d10L},{"Rnd_s15",0x104c0230L},{"Rnd_s16",0x10498230L},
            {"Rnd_s20",0x1049ad90L},{"Rnd_s21",0x104bf910L},
            {"Until_s15",0x104c30e0L},{"Until_s16",0x10498470L},{"Until_s21",0x10498010L},
            {"Non_s15",0x104c2fb0L},{"Non_s16",0x10498750L},{"Non_s21",0x10497aa0L},
            {"Loop_s15",0x104c2c30L},{"Loop_s16",0x104986d0L}
        };
        StringBuilder sb=new StringBuilder();
        for(Object[] e: L){
            sb.append("\n//######## "+e[0]+" @ "+String.format("%08x",(Long)e[1])+" ########\n");
            sb.append(decomp((Long)e[1]));
        }
        try(FileWriter w=new FileWriter(new File(OUT,"node_methods.c"))){ w.write(sb.toString()); }
        println("[CgMethods] done -> node_methods.c ("+sb.length()+" bytes)");
    }
}
