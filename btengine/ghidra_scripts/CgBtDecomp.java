// Decompile CryGame monster-BT loader chain + list CALL targets per function.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class CgBtDecomp extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out3";
    DecompInterface dec; FunctionManager fm;

    String decomp(long fp){
        Function f=fm.getFunctionAt(toAddr(fp)); if(f==null) f=fm.getFunctionContaining(toAddr(fp));
        if(f==null){ try{ f=createFunction(toAddr(fp),null);}catch(Exception e){} }
        if(f==null) return "// <no fn @"+String.format("%08x",fp)+">\n";
        try{ DecompileResults r=dec.decompileFunction(f,180,monitor);
            if(r!=null&&r.decompileCompleted()) return r.getDecompiledFunction().getC();
        }catch(Exception e){ return "// <exc "+e+">\n"; }
        return "// <decompile failed>\n";
    }
    // list direct CALL targets (with names) within a function
    String calls(long fp){
        Function f=fm.getFunctionContaining(toAddr(fp));
        if(f==null) return "";
        StringBuilder sb=new StringBuilder();
        AddressSetView body=f.getBody();
        InstructionIterator it=currentProgram.getListing().getInstructions(body,true);
        while(it.hasNext()){
            Instruction in=it.next();
            if(in.getFlowType().isCall()){
                Reference[] rs=in.getReferencesFrom();
                for(Reference r: rs){
                    if(r.getReferenceType().isCall()||r.getReferenceType().isIndirect()){
                        Address t=r.getToAddress();
                        Function tf=fm.getFunctionAt(t);
                        Symbol s=getSymbolAt(t);
                        sb.append(String.format("    %s -> %s %s\n", in.getAddress(), t, (tf!=null?tf.getName():(s!=null?s.getName():""))));
                    }
                }
            }
        }
        return sb.toString();
    }

    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("crygame")){ println("skip"); return; }
        fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();

        long[] fns={
            0x10499f10L, // LoadBehaviorTree::ParseNode  (THE type->class mapper)
            0x104934f0L, // sibling attr reader/variant
            0x104a69f0L, // CBehaviorTreeContext::BuildRuntimeNodeMaps
            0x10262030L, // CBTActor::LoadClientBehaviorTree
            0x1049ae30L, // ParseNodeCustomAttrs
            0x1049b020L, // ExpandReferencesAndApplyOverrides
            0x104c2cb0L  // CLoopFilter ref site
        };
        String[] nms={"ParseNode","FUN_104934f0","BuildRuntimeNodeMaps","LoadClientBehaviorTree",
                      "ParseNodeCustomAttrs","ExpandRefs","LoopFilterSite"};
        StringBuilder all=new StringBuilder();
        for(int i=0;i<fns.length;i++){
            all.append("\n\n//========================================================\n");
            all.append("// "+nms[i]+" @ "+String.format("%08x",fns[i])+"\n");
            all.append("// CALL TARGETS:\n"+calls(fns[i]));
            all.append("//========================================================\n");
            all.append(decomp(fns[i]));
        }
        try(FileWriter w=new FileWriter(new File(OUT,"loader_chain.c"))){ w.write(all.toString()); }
        println("[CgBtDecomp] done -> "+OUT+"/loader_chain.c");
    }
}
