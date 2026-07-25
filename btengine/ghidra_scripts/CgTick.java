// Find the per-tick BT driver: CBTActor/context symbols + decompile update candidates;
// find code that reads context+0xc4 (current node) / calls root start.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgTick extends GhidraScript {
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
        new File(OUT).mkdirs();
        StringBuilder rep=new StringBuilder();
        // 1) enumerate CBTActor / CBehaviorTreeContext / CBTBlackboard methods
        rep.append("== CBTActor / Context / Blackboard SYMBOLS ==\n");
        SymbolIterator si=currentProgram.getSymbolTable().getAllSymbols(true);
        List<Long> cand=new ArrayList<>();
        while(si.hasNext()){ Symbol s=si.next(); String nm=s.getName();
            if(nm.startsWith("CBTActor::")||nm.startsWith("CBehaviorTreeContext::")||nm.startsWith("CBTBlackboard")
               ||nm.contains("CBTActor")||nm.startsWith("CBehaviorTree::")){
                rep.append("  "+nm+" @"+s.getAddress()+"\n");
                String low=nm.toLowerCase();
                if(low.contains("update")||low.contains("tick")||low.contains("run")||low.contains("step")||low.contains("evaluate")||low.contains("start")||low.contains("execute"))
                    cand.add(s.getAddress().getOffset());
            }
        }
        try(FileWriter w=new FileWriter(new File(OUT,"tick_symbols.txt"))){ w.write(rep.toString()); }
        // 2) decompile candidates
        StringBuilder c=new StringBuilder();
        for(long a: cand){ c.append("\n//#### "+String.format("%08x",a)+" ####\n"+decomp(a)); }
        try(FileWriter w=new FileWriter(new File(OUT,"tick_candidates.c"))){ w.write(c.toString()); }
        println(rep.toString());
        println("[CgTick] cand="+cand.size());
    }
}
