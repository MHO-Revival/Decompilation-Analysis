// Discover CryGame monster-BT loader: image base, anchor fns, key strings + their xref functions.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.StringDataInstance;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;

public class CgBtDiscover extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out3";
    Memory mem; ghidra.program.model.listing.FunctionManager fm;

    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("crygame")){ println("skip "+currentProgram.getName()); return; }
        mem=currentProgram.getMemory(); fm=currentProgram.getFunctionManager();
        new File(OUT).mkdirs();
        StringBuilder rep=new StringBuilder();
        long base=currentProgram.getImageBase().getOffset();
        rep.append("PROGRAM="+currentProgram.getName()+"\n");
        rep.append(String.format("IMAGE_BASE=%08x\n", base));
        rep.append("MIN="+currentProgram.getMinAddress()+" MAX="+currentProgram.getMaxAddress()+"\n");

        // Anchor functions from recon (interpret both as VA and base+RVA)
        long[] anchors={0x262030L,0x4a69f0L,0xaa66e0L};
        String[] anames={"LoadClientBehaviorTree","BuildRuntimeNodeMaps","InstantiateBehaviorTreeForEntity"};
        rep.append("\n== ANCHORS ==\n");
        for(int i=0;i<anchors.length;i++){
            for(long cand: new long[]{anchors[i], base+anchors[i]}){
                Address a=toAddr(cand);
                Function f=fm.getFunctionContaining(a);
                boolean hasInstr=false; try{ hasInstr=getInstructionAt(a)!=null||getInstructionContaining(a)!=null; }catch(Exception e){}
                rep.append(String.format("  %-34s cand=%08x fn=%s instr=%b\n", anames[i], cand, (f==null?"<none>":(f.getName()+"@"+f.getEntryPoint())), hasInstr));
            }
        }

        // Key strings to locate
        String[] needles={
            "Unsupported 'SelectorType'","Scripts/AI/BehaviorTree","BehaviorTree",
            "SelectorType","Filter_Type","Operation","Sequence","Selector","Filter",
            "Until_Fails","Condition","Action","BlackBoardCheck","AnimSequencePlay",
            "AnimSequenceSetInput","EntityRotate","EntityMove","SetBlackBoard","DistanceCheck",
            "TimeCheck","SetTime","BTOperation","SetTargetIDOrientation","General","Random",
            "SelectorType': '%s","Value0","Weight"
        };
        // collect defined strings
        rep.append("\n== STRING MATCHES (addr | xref-fn | text) ==\n");
        DataIterator di=currentProgram.getListing().getDefinedData(true);
        int shown=0;
        while(di.hasNext()){
            Data d=di.next();
            String v=null;
            try{ if(d.getValue() instanceof String) v=(String)d.getValue(); }catch(Exception e){}
            if(v==null){ Object o=d.getValue(); if(o!=null) v=o.toString(); }
            if(v==null) continue;
            String vt=v.trim();
            for(String n: needles){
                if(vt.equals(n)||vt.contains(n)){
                    // xrefs
                    StringBuilder xr=new StringBuilder();
                    int cnt=0;
                    for(Reference r: getReferencesTo(d.getAddress())){
                        Function f=fm.getFunctionContaining(r.getFromAddress());
                        xr.append((f==null?r.getFromAddress().toString():(f.getName()+"@"+f.getEntryPoint()))+"; ");
                        if(++cnt>=6){ xr.append("..."); break; }
                    }
                    String show=vt.length()>40?vt.substring(0,40):vt;
                    rep.append(String.format("  %s | [%s] | \"%s\"\n", d.getAddress(), xr.toString(), show.replace("\n","\\n")));
                    shown++;
                    break;
                }
            }
        }
        rep.append("\n(total string rows: "+shown+")\n");
        try(FileWriter w=new FileWriter(new File(OUT,"discover_report.txt"))){ w.write(rep.toString()); }
        println(rep.toString());
        println("[CgBtDiscover] done -> "+OUT+"/discover_report.txt");
    }
}
