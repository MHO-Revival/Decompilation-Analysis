// (1) Name every BT node vtable via the class-name string embedded at vtbl+0x54.
// (2) Decompile Evaluate(slot10)/slot4/slot13 for control-flow node classes (Selec/Random/Loop/
//     Vote/Decision/Parallel/Repeat/Sequence/Behavior/Nop/Condition).
// (3) Decompile core shared helpers + find the tree-tick driver (callers of slot2 FUN_103dc930).
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;

public class BtNameAndCore extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out2";
    long TX_LO=0x10001000L, TX_HI=0x112faa56L, RD_LO=0x112fb000L, RD_HI=0x113cc000L;
    long S1=0x103dc6c0L, S2=0x103dc930L, S3=0x103d8a10L;
    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    Set<Long> done=new HashSet<>();

    long ptrAt(Address a){ try{ return mem.getInt(a)&0xFFFFFFFFL; }catch(Exception e){ return 0; } }
    boolean inText(long v){ return v>=TX_LO && v<TX_HI; }
    String nameAt(long va){
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<48;i++){ int b; try{ b=mem.getByte(toAddr(va+i))&0xff; }catch(Exception e){ break; }
            if(b==0) break; if(b<32||b>126){ return sb.length()>2?sb.toString():""; } sb.append((char)b); }
        return sb.toString();
    }
    String decomp(long fp){
        Function f=fm.getFunctionAt(toAddr(fp)); if(f==null) f=fm.getFunctionContaining(toAddr(fp));
        if(f==null) return "// <no fn @"+String.format("%08x",fp)+">\n";
        try{ DecompileResults r=dec.decompileFunction(f,90,monitor);
            return (r!=null&&r.decompileCompleted())?r.getDecompiledFunction().getC():"// <decompile failed>\n";
        }catch(Exception e){ return "// <exc>\n"; }
    }

    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("cryaction")){ println("skip"); return; }
        mem=currentProgram.getMemory(); fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep=new StringBuilder();

        String[] CTRL={"Selec","Random","Loop","Vote","Decision","Parallel","Repeat","Sequence","Behavior","Nop","Condition","Filter","Until"};
        LinkedHashMap<String,long[]> ctrlSlots=new LinkedHashMap<>(); // name -> {vtbl, slot10, slot4, slot13, slot19}

        rep.append("==== NAMED NODE VTABLES (name @ vtbl+0x54) ====\n");
        for(long a=RD_LO;a<RD_HI-16;a+=4){
            if(ptrAt(toAddr(a+4))==S1 && ptrAt(toAddr(a+8))==S2 && ptrAt(toAddr(a+12))==S3){
                String nm=nameAt(a+0x54);
                long s10=ptrAt(toAddr(a+0x28)), s4=ptrAt(toAddr(a+0x10)), s13=ptrAt(toAddr(a+0x34)), s19=ptrAt(toAddr(a+0x4c));
                rep.append(String.format("  %-30s vtbl=%08x eval10=%08x s4=%08x s13=%08x s19=%08x\n", nm, a, s10, s4, s13, s19));
                for(String k: CTRL){ if(nm.contains(k)){ ctrlSlots.put(nm, new long[]{a,s10,s4,s13,s19}); break; } }
            }
        }

        // decompile control node evaluates
        StringBuilder methods=new StringBuilder();
        for(Map.Entry<String,long[]> e: ctrlSlots.entrySet()){
            long[] s=e.getValue();
            methods.append("\n//######## "+e.getKey()+"  vtbl="+String.format("%08x",s[0])+" ########\n");
            methods.append("// -- Evaluate slot10@0x28 = "+String.format("%08x",s[1])+"\n"+decomp(s[1])+"\n");
            methods.append("// -- slot4@0x10 = "+String.format("%08x",s[2])+"\n"+decomp(s[2])+"\n");
            if(inText(s[3])){ methods.append("// -- slot13@0x34 = "+String.format("%08x",s[3])+"\n"+decomp(s[3])+"\n"); }
        }
        try(FileWriter w=new FileWriter(new File(OUT,"ctrl_evaluates.c"))){ w.write(methods.toString()); }

        // core shared helpers
        long[] HELP={0x103dc930L,0x103d8a40L,0x103dca70L,0x103d8660L,0x103db9b0L,0x103dba30L,
                     0x103d8940L,0x103dd050L,0x105ed990L,0x105a2840L,0x105a2b90L,0x103d8a90L,0x103dbbb0L};
        StringBuilder helpers=new StringBuilder();
        for(long h: HELP){ helpers.append("\n// ===== helper "+String.format("%08x",h)+" =====\n"+decomp(h)+"\n"); }
        try(FileWriter w=new FileWriter(new File(OUT,"core_helpers.c"))){ w.write(helpers.toString()); }

        // find the tree-tick driver: functions that CALL slot2 (FUN_103dc930) directly, and callers of FUN_103dd050
        rep.append("\n==== callers of slot2 FUN_103dc930 ====\n");
        for(Reference r: getReferencesTo(toAddr(0x103dc930L))){
            Function f=getFunctionContaining(r.getFromAddress());
            rep.append("  "+r.getReferenceType()+" from "+r.getFromAddress()+(f==null?"":(" in "+f.getName())) +"\n");
        }
        rep.append("\n==== callers of FUN_103dd050 (resolve tree exec-record) ====\n");
        Set<Long> drv=new LinkedHashSet<>();
        for(Reference r: getReferencesTo(toAddr(0x103dd050L))){
            Function f=getFunctionContaining(r.getFromAddress());
            rep.append("  from "+r.getFromAddress()+(f==null?"":(" in "+f.getName()))+"\n");
            if(f!=null) drv.add(f.getEntryPoint().getOffset());
        }

        try(FileWriter w=new FileWriter(new File(OUT,"name_core_report.txt"))){ w.write(rep.toString()); }
        println("[BtNameAndCore] done. named vtables + ctrl_evaluates.c + core_helpers.c");
    }
}
