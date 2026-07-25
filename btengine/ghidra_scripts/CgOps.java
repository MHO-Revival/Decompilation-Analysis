// Locate BT leaf-op literals + registrars, BT tick/update symbols, decompile actor instantiate.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgOps extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out3";
    DecompInterface dec; FunctionManager fm;
    String decomp(long fp){ Function f=fm.getFunctionAt(toAddr(fp)); if(f==null)f=fm.getFunctionContaining(toAddr(fp));
        if(f==null){try{f=createFunction(toAddr(fp),null);}catch(Exception e){}}
        if(f==null) return "// <no fn>\n";
        try{ DecompileResults r=dec.decompileFunction(f,150,monitor); if(r!=null&&r.decompileCompleted()) return r.getDecompiledFunction().getC(); }catch(Exception e){}
        return "// <fail>\n"; }

    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("crygame")){ println("skip"); return; }
        fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep=new StringBuilder();

        // 1) op literals -> xref fns
        String[] ops={"BlackBoardCheck","AnimSequencePlay","AnimSequenceSetInput","EntityRotate",
            "EntityMove","SetBlackBoard","DistanceCheck","TimeCheck","SetTime","BTOperation",
            "SetTargetIDOrientation","EntityRotateTo","EntityMoveTo"};
        rep.append("== OP LITERAL XREFS ==\n");
        Address base=currentProgram.getMinAddress();
        for(String op: ops){
            byte[] pat=(op+"\0").getBytes();
            Address a=currentProgram.getMemory().findBytes(base, pat, null, true, monitor);
            if(a==null){ rep.append("  "+op+": <not found>\n"); continue; }
            StringBuilder xr=new StringBuilder(); int n=0;
            for(Reference r: getReferencesTo(a)){ Function f=fm.getFunctionContaining(r.getFromAddress());
                xr.append((f!=null?f.getName()+"@"+f.getEntryPoint():r.getFromAddress().toString())+"; ");
                if(++n>=8){xr.append("...");break;} }
            rep.append(String.format("  %-24s @%s  [%s]\n", op, a, xr.toString()));
        }

        // 2) BT symbols with tick/update/run/eval/step
        rep.append("\n== BT UPDATE/TICK SYMBOLS ==\n");
        SymbolIterator si=currentProgram.getSymbolTable().getAllSymbols(true);
        while(si.hasNext()){
            Symbol s=si.next(); String nm=s.getName();
            String low=nm.toLowerCase();
            if((low.contains("bt")||low.contains("behaviortree")||nm.contains("CBTActor")||low.contains("behavior"))
               && (low.contains("update")||low.contains("tick")||low.contains("evaluate")||low.contains("step")||low.contains("run")||low.contains("execute"))){
                rep.append("  "+nm+" @"+s.getAddress()+"\n");
            }
        }
        try(FileWriter w=new FileWriter(new File(OUT,"ops_report.txt"))){ w.write(rep.toString()); }

        // 3) decompile actor instantiate + load-client + a leaf ctor path if found
        StringBuilder c=new StringBuilder();
        c.append("\n//#### InstantiateBehaviorTreeForEntity 10aa66e0 ####\n"+decomp(0x10aa66e0L));
        try(FileWriter w=new FileWriter(new File(OUT,"actor.c"))){ w.write(c.toString()); }
        println(rep.toString());
        println("[CgOps] done");
    }
}
