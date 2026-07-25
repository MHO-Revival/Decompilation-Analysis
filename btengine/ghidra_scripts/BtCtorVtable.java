// Creator -> constructor -> vtable -> virtual methods, without RTTI.
// For each known creator addr: decompile it + all functions it calls (ctor lives among them);
// auto-detect the vtable = a .rdata address written as an immediate whose target is a run of
// >=4 consecutive .text function pointers. Then dump every vtable slot and decompile it.
// @category MHO
import java.io.File;
import java.io.FileWriter;
import java.util.*;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;

public class BtCtorVtable extends GhidraScript {
    static final String OUT = "/home/fallen/.claude/jobs/58b1921c/tmp/re_out2";
    static final long BASE = 0x10000000L;
    long TX_LO = 0x10001000L, TX_HI = 0x112faa56L;
    long RD_LO = 0x112fb000L, RD_HI = 0x113cc000L;

    static final Object[][] CREATORS = {
        {"CVotingSelector",            0x10611660L},
        {"CDecisionTreeSelector",      0x10604500L},
        {"CNodeRepeatExecuteCounter",  0x1060ad90L},
        {"CBehaviorRepeatExecuteCounter",0x10601f90L},
        {"CBTOperation",               0x10601ef0L},
        {"CConditionSuccessful",       0x10603d60L},
        {"CAlwaysTrue",                0x106014e0L},
        {"CScriptAction",              0x1060c830L},
    };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    Set<Long> emitted = new HashSet<>();

    long ptrAt(Address a) throws MemoryAccessException { return mem.getInt(a) & 0xFFFFFFFFL; }
    boolean isFn(long v){ return v>=TX_LO && v<TX_HI && fm.getFunctionAt(toAddr(v))!=null; }

    // is V the base of a vtable? (>=4 consecutive fn ptrs)
    boolean looksVtable(long v){
        if (v<RD_LO || v>=RD_HI) return false;
        try { for(int i=0;i<4;i++){ if(!isFn(ptrAt(toAddr(v+i*4L)))) return false; } }
        catch(Exception e){ return false; }
        return true;
    }

    String decomp(Function f){
        if(f==null) return "// <null>\n";
        try{ DecompileResults r=dec.decompileFunction(f,90,monitor);
            return (r!=null&&r.decompileCompleted())?r.getDecompiledFunction().getC():"// <decompile failed>\n";
        }catch(Exception e){ return "// <exc "+e.getMessage()+">\n"; }
    }

    // scan a function's body bytes for candidate vtable immediates
    Set<Long> vtablesIn(Function f){
        Set<Long> out=new LinkedHashSet<>();
        if(f==null) return out;
        long lo=f.getEntryPoint().getOffset();
        long hi=f.getBody().getMaxAddress().getOffset();
        for(long a=lo;a+4<=hi+1;a++){
            long v; try{ v=ptrAt(toAddr(a)); }catch(Exception e){ continue; }
            if(looksVtable(v)) out.add(v);
        }
        return out;
    }

    @Override public void run() throws Exception {
        String pn=currentProgram.getName();
        if(!pn.toLowerCase().contains("cryaction")){ println("skip "+pn); return; }
        mem=currentProgram.getMemory(); fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep=new StringBuilder();

        for(Object[] row: CREATORS){
            String cn=(String)row[0]; long cr=(Long)row[1];
            rep.append("\n================ ").append(cn).append(String.format(" creator @ %08x ================\n", cr));
            Function crf=fm.getFunctionAt(toAddr(cr));
            if(crf==null){ rep.append("  <no function at creator>\n"); continue; }

            // gather creator + called functions
            Set<Function> pool=new LinkedHashSet<>();
            pool.add(crf);
            try{ pool.addAll(crf.getCalledFunctions(monitor)); }catch(Exception e){}

            // find vtables among pool
            LinkedHashMap<Long,Function> vtblOwner=new LinkedHashMap<>();
            for(Function f: pool){
                for(long v: vtablesIn(f)){
                    if(!vtblOwner.containsKey(v)) vtblOwner.put(v,f);
                }
            }
            rep.append("  scanned ").append(pool.size()).append(" fns (creator+callees); vtables found: ").append(vtblOwner.size()).append("\n");

            List<String> dumps=new ArrayList<>();
            dumps.add("// ===== creator "+crf.getName()+" @ "+crf.getEntryPoint()+" =====\n"+decomp(crf));

            for(Map.Entry<Long,Function> e: vtblOwner.entrySet()){
                long vt=e.getKey();
                rep.append(String.format("  --- VTABLE @ %08x (RVA %x) written in %s @ %08x ---\n",
                    vt, vt-BASE, e.getValue().getName(), e.getValue().getEntryPoint().getOffset()));
                // ctor = the function that writes the vtable (owner)
                Function ctor=e.getValue();
                dumps.add("// ===== CTOR (writes vtbl "+String.format("%08x",vt)+") "+ctor.getName()+" @ "+ctor.getEntryPoint()+" =====\n"+decomp(ctor));
                // dump slots
                List<Long> slots=new ArrayList<>();
                for(int i=0;i<64;i++){
                    long fp; try{ fp=ptrAt(toAddr(vt+i*4L)); }catch(Exception ex){ break; }
                    if(!isFn(fp)){ rep.append(String.format("    [%2d] %08x <stop>\n",i,fp)); break; }
                    slots.add(fp);
                    Function sf=fm.getFunctionAt(toAddr(fp));
                    rep.append(String.format("    [%2d] %08x  %s\n", i, fp, sf.getName()));
                }
                // decompile each slot
                for(int i=0;i<slots.size();i++){
                    long fp=slots.get(i);
                    if(!emitted.add(fp)){ dumps.add("// "+cn+" vtbl["+i+"] @ "+String.format("%08x",fp)+" (already emitted)\n"); continue; }
                    Function sf=fm.getFunctionAt(toAddr(fp));
                    dumps.add("// ===== "+cn+" vtbl["+i+"] @ "+String.format("%08x",fp)+"  "+sf.getName()+" =====\n"+decomp(sf));
                }
            }
            try(FileWriter w=new FileWriter(new File(OUT,"cls_"+cn+".c"))){
                for(String s: dumps){ w.write(s); w.write("\n"); }
            }
        }
        try(FileWriter w=new FileWriter(new File(OUT,"ctor_vtable_report.txt"))){ w.write(rep.toString()); }
        println(rep.toString());
        println("[BtCtorVtable] done.");
    }
}
