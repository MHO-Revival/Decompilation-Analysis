// Recover the STRUCTURE-node hierarchy (CSelector/CBTRandomSelecNode/CBTRandomSelectAction/
// CLoopFilter): find the fn that references each name-string, decompile it and its callees,
// auto-detect the structure-node vtable (a .rdata run of >=4 .text ptrs written as immediate),
// dump+decompile its methods.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;

public class BtStructNodes extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out2";
    long TX_LO=0x10001000L, TX_HI=0x112faa56L, RD_LO=0x112fb000L, RD_HI=0x113cc000L;
    // shared leaf-hierarchy slots to EXCLUDE (we already have that hierarchy)
    long L1=0x103dc6c0L,L2=0x103dc930L,L3=0x103d8a10L;
    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    Set<Long> done=new HashSet<>();
    long ptrAt(Address a){ try{ return mem.getInt(a)&0xFFFFFFFFL; }catch(Exception e){ return 0; } }
    boolean isFn(long v){ return v>=TX_LO && v<TX_HI && fm.getFunctionAt(toAddr(v))!=null; }
    boolean inText(long v){ return v>=TX_LO && v<TX_HI; }
    boolean looksVtable(long v){
        if(v<RD_LO||v>=RD_HI) return false;
        for(int i=0;i<4;i++){ if(!isFn(ptrAt(toAddr(v+i*4L)))) return false; }
        return true;
    }
    String decomp(long fp){
        Function f=fm.getFunctionAt(toAddr(fp)); if(f==null) f=fm.getFunctionContaining(toAddr(fp));
        if(f==null) return "// <no fn @"+String.format("%08x",fp)+">\n";
        try{ DecompileResults r=dec.decompileFunction(f,120,monitor);
            return (r!=null&&r.decompileCompleted())?r.getDecompiledFunction().getC():"// <decompile failed>\n";
        }catch(Exception e){ return "// <exc>\n"; }
    }
    Set<Long> vtablesIn(Function f){
        Set<Long> out=new LinkedHashSet<>(); if(f==null) return out;
        long lo=f.getEntryPoint().getOffset(), hi=f.getBody().getMaxAddress().getOffset();
        for(long a=lo;a+4<=hi+1;a++){ long v=ptrAt(toAddr(a)); if(looksVtable(v)) out.add(v); }
        return out;
    }
    String nameAt(long va){ StringBuilder sb=new StringBuilder();
        for(int i=0;i<48;i++){ int b; try{ b=mem.getByte(toAddr(va+i))&0xff; }catch(Exception e){break;}
            if(b==0)break; if(b<32||b>126){return sb.length()>2?sb.toString():"";} sb.append((char)b);} return sb.toString(); }

    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("cryaction")){ println("skip"); return; }
        mem=currentProgram.getMemory(); fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep=new StringBuilder(); StringBuilder methods=new StringBuilder();

        Object[][] targets={
            {"CSelector",0x1130d0f0L /*plain 'CSelector' embedded? unknown; also try string search*/},
        };
        // We instead locate name strings by content in .rdata for these tokens:
        String[] toks={"CBTRandomSelecNode","CBTRandomSelectAction","CLoopFilter","CSelector"};
        long[] strVA={0x113bf5acL,0x113bf5c0L,0x113bf5d8L,0};
        // find CSelector plain string
        // (search .rdata bytes)
        // reuse known ones; CSelector unknown -> scan
        for(long a=RD_LO;a<RD_HI-10;a++){
            boolean m=true; String s="CSelector";
            for(int i=0;i<s.length();i++){ try{ if((mem.getByte(toAddr(a+i))&0xff)!=s.charAt(i)){m=false;break;} }catch(Exception e){m=false;break;} }
            if(m){ int nb; try{ nb=mem.getByte(toAddr(a+s.length()))&0xff; }catch(Exception e){ nb=1; }
                if(nb==0){ strVA[3]=a; break; } }
        }
        rep.append("CSelector string VA = "+String.format("%08x",strVA[3])+"\n");

        for(int t=0;t<toks.length;t++){
            long sva=strVA[t]; if(sva==0){ rep.append("\n#### "+toks[t]+": string not found\n"); continue; }
            rep.append("\n#################### "+toks[t]+" (str @ "+String.format("%08x",sva)+") ####################\n");
            // find code refs (imm==sva)
            Set<Long> refFns=new LinkedHashSet<>();
            for(long a=TX_LO;a<TX_HI-4;a++){ if(ptrAt(toAddr(a))==sva){ Function f=getFunctionContaining(toAddr(a));
                rep.append("  ref@"+String.format("%08x",a)+(f==null?" <none>":(" in "+f.getName()+"@"+f.getEntryPoint()))+"\n");
                if(f!=null) refFns.add(f.getEntryPoint().getOffset()); } }
            // for each referencing fn, gather vtables from it + callees
            LinkedHashSet<Long> vts=new LinkedHashSet<>();
            for(long rf: refFns){ Function f=fm.getFunctionAt(toAddr(rf)); if(f==null) continue;
                Set<Function> pool=new LinkedHashSet<>(); pool.add(f);
                try{ pool.addAll(f.getCalledFunctions(monitor)); }catch(Exception e){}
                for(Function pf: pool){ for(long v: vtablesIn(pf)){
                    // skip leaf-hierarchy vtables
                    if(ptrAt(toAddr(v+4))==L1 && ptrAt(toAddr(v+8))==L2 && ptrAt(toAddr(v+12))==L3) continue;
                    vts.add(v);
                } }
            }
            rep.append("  candidate NON-leaf vtables: ");
            for(long v: vts) rep.append(String.format("%08x(name@+0x54:%s) ", v, nameAt(v+0x54)));
            rep.append("\n");
            // dump+decompile methods of each candidate vtable (first 16 slots)
            for(long v: vts){
                rep.append("  --- vtable "+String.format("%08x",v)+" ---\n");
                methods.append("\n//########### "+toks[t]+" candidate vtable "+String.format("%08x",v)+" (name@+54: "+nameAt(v+0x54)+") ###########\n");
                for(int i=0;i<16;i++){ long fp=ptrAt(toAddr(v+i*4L));
                    Function sf=inText(fp)?fm.getFunctionContaining(toAddr(fp)):null;
                    rep.append(String.format("    [%2d] off0x%02x %08x %s\n",i,i*4,fp,sf==null?"":sf.getName()));
                    if(isFn(fp) && done.add(fp)){
                        methods.append("// -- slot["+i+"] off0x"+Integer.toHexString(i*4)+" @ "+String.format("%08x",fp)+"\n"+decomp(fp)+"\n");
                    }
                }
            }
        }
        try(FileWriter w=new FileWriter(new File(OUT,"struct_nodes_report.txt"))){ w.write(rep.toString()); }
        try(FileWriter w=new FileWriter(new File(OUT,"struct_nodes_methods.c"))){ w.write(methods.toString()); }
        println(rep.toString());
        println("[BtStructNodes] done.");
    }
}
