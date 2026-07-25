// Dump raw instructions for ranges + creator fns; flag vtable-pointer stores & call targets.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.*;

public class CgInsnDump extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out3";
    Memory mem; FunctionManager fm;
    // CryGame rdata/vtable region guess (refine): between end of .text and .data
    boolean looksVtbl(long v){ return v>=0x11600000L && v<0x12400000L; }
    String sym(long a){ Symbol s=getSymbolAt(toAddr(a)); Function f=fm.getFunctionAt(toAddr(a));
        return f!=null?f.getName():(s!=null?s.getName():""); }

    void dumpRange(StringBuilder sb, long lo, long hi){
        sb.append(String.format("\n--- range %08x..%08x ---\n", lo, hi));
        Listing lst=currentProgram.getListing();
        Instruction in=lst.getInstructionAt(toAddr(lo));
        if(in==null) in=lst.getInstructionContaining(toAddr(lo));
        while(in!=null && in.getAddress().getOffset()<hi){
            long a=in.getAddress().getOffset();
            StringBuilder note=new StringBuilder();
            // scalar operands that look like vtables
            for(int oi=0;oi<in.getNumOperands();oi++){
                for(Object o: in.getOpObjects(oi)){
                    if(o instanceof Scalar){ long v=((Scalar)o).getUnsignedValue(); if(looksVtbl(v)) note.append(" VTBL?="+String.format("%08x",v)); }
                    if(o instanceof Address){ long v=((Address)o).getOffset(); if(looksVtbl(v)) note.append(" ADDR="+String.format("%08x",v)); }
                }
            }
            if(in.getFlowType().isCall()){
                for(Reference r: in.getReferencesFrom()) if(r.getReferenceType().isCall()){
                    long t=r.getToAddress().getOffset(); note.append(" CALL->"+String.format("%08x",t)+" "+sym(t)); }
            }
            sb.append(String.format("  %08x  %-32s%s\n", a, in.toString(), note.toString()));
            in=in.getNext();
        }
    }
    // read first N instrs of a ctor to find "mov [reg], vtbl"
    String ctorVtbl(long fp){
        Listing lst=currentProgram.getListing();
        Instruction in=lst.getInstructionAt(toAddr(fp));
        int n=0; StringBuilder r=new StringBuilder();
        while(in!=null && n<40){
            String m=in.toString();
            for(int oi=0;oi<in.getNumOperands();oi++) for(Object o: in.getOpObjects(oi)){
                long v=-1; if(o instanceof Scalar) v=((Scalar)o).getUnsignedValue(); else if(o instanceof Address) v=((Address)o).getOffset();
                if(v!=-1 && looksVtbl(v) && m.toUpperCase().startsWith("MOV")) r.append(" store="+String.format("%08x",v)+" ("+m+")");
            }
            if(in.getFlowType().isCall()) for(Reference rr: in.getReferencesFrom()) if(rr.getReferenceType().isCall()) r.append(" +ctorcall->"+String.format("%08x",rr.getToAddress().getOffset())+" "+sym(rr.getToAddress().getOffset()));
            in=in.getNext(); n++;
            if(in!=null && in.getFlowType().isTerminal()) break;
        }
        return r.toString();
    }

    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("crygame")){ println("skip"); return; }
        mem=currentProgram.getMemory(); fm=currentProgram.getFunctionManager();
        new File(OUT).mkdirs();
        StringBuilder sb=new StringBuilder();

        // new+ctor inline sites in ParseNode
        dumpRange(sb, 0x1049a270L, 0x1049a3a0L);  // General(0x54)+Random(0x70)+Sequence(0x54)
        dumpRange(sb, 0x1049a6b8L, 0x1049a760L);  // Enter_Exit(0x5c) + Non

        // filter creators + their ctor vtable
        long[] creators={0x1049e300L,0x1049e390L,0x1049e440L,0x1049e4f0L,0x1049e5a0L,0x1049e650L,0x1049e6e0L,0x1049e800L};
        String[] cn={"Logger","Timer","Counter","Loop","Until_Fails_Limited","Until_Fails","Until_Success","Non"};
        sb.append("\n=== FILTER CREATORS (vtbl in ctor) ===\n");
        for(int i=0;i<creators.length;i++){
            sb.append(String.format("  %-20s creator@%08x :%s\n", cn[i], creators[i], ctorVtbl(creators[i])));
        }
        try(FileWriter w=new FileWriter(new File(OUT,"vtbl_dump.txt"))){ w.write(sb.toString()); }
        println(sb.toString());
        println("[CgInsnDump] done");
    }
}
