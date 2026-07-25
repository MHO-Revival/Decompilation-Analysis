// Full vtable dump (raw, ignore functionization stops) for BT base + composite classes,
// decompile the polymorphic slots (esp. slot 10 = offset 0x28 = Evaluate, and neighbors).
// Also ENUMERATE every BT node vtable by the shared-slot signature [_,103dc6c0,103dc930,103d8a10,_]
// so we can spot the random selector.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;

public class BtVtableFull extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out2";
    static final long BASE=0x10000000L;
    long TX_LO=0x10001000L, TX_HI=0x112faa56L, RD_LO=0x112fb000L, RD_HI=0x113cc000L;
    long S1=0x103dc6c0L, S2=0x103dc930L, S3=0x103d8a10L; // shared inherited slots 1..3

    // target vtables to fully dump+decompile
    Object[][] TARGETS={
        {"BASEnode",       0x113bf2e4L},
        {"CVotingSelector",0x1130d140L},
        {"CDecisionTreeSelector",0x113097a0L},
        {"CNodeRepeatExecuteCounter",0x113104d0L},
        {"CBTOperation",   0x1130e5ccL},
    };

    Memory mem; DecompInterface dec; ghidra.program.model.listing.FunctionManager fm;
    Set<Long> emitted=new HashSet<>();
    long ptrAt(Address a){ try{ return mem.getInt(a)&0xFFFFFFFFL; }catch(Exception e){ return 0; } }
    boolean isFn(long v){ return v>=TX_LO && v<TX_HI && fm.getFunctionAt(toAddr(v))!=null; }
    boolean inText(long v){ return v>=TX_LO && v<TX_HI; }

    String decomp(Function f){
        if(f==null) return "// <null>\n";
        try{ DecompileResults r=dec.decompileFunction(f,90,monitor);
            return (r!=null&&r.decompileCompleted())?r.getDecompiledFunction().getC():"// <decompile failed>\n";
        }catch(Exception e){ return "// <exc>\n"; }
    }
    String slotDump(long vt,int n){
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<n;i++){ long fp=ptrAt(toAddr(vt+i*4L));
            Function f=inText(fp)?fm.getFunctionContaining(toAddr(fp)):null;
            sb.append(String.format("    [%2d] off=0x%02x %08x %s\n",i,i*4,fp,f==null?(inText(fp)?"(text,not-fn-start)":"(non-text/end?)"):f.getName()));
        }
        return sb.toString();
    }

    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("cryaction")){ println("skip"); return; }
        mem=currentProgram.getMemory(); fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder rep=new StringBuilder();

        // 1) enumerate all BT node vtables by signature
        rep.append("==== ENUMERATION: vtables with slots[1..3]==(103dc6c0,103dc930,103d8a10) ====\n");
        int found=0;
        for(long a=RD_LO;a<RD_HI-16;a+=4){
            if(ptrAt(toAddr(a+4))==S1 && ptrAt(toAddr(a+8))==S2 && ptrAt(toAddr(a+12))==S3){
                long s0=ptrAt(toAddr(a));       // destructor
                long s10=ptrAt(toAddr(a+0x28)); // Evaluate
                Function d=inText(s0)?fm.getFunctionContaining(toAddr(s0)):null;
                Function ev=inText(s10)?fm.getFunctionContaining(toAddr(s10)):null;
                rep.append(String.format("  vtbl %08x : slot0(dtor)=%08x %s | slot10(eval@0x28)=%08x %s\n",
                    a,s0,d==null?"":d.getName(),s10,ev==null?"":ev.getName()));
                found++;
            }
        }
        rep.append("  total node vtables: "+found+"\n\n");

        // 2) full dump + decompile polymorphic slots for targets
        LinkedHashSet<Long> toDec=new LinkedHashSet<>();
        for(Object[] t: TARGETS){
            String nm=(String)t[0]; long vt=(Long)t[1];
            rep.append("\n==== "+nm+" vtable @ "+String.format("%08x",vt)+" (RVA "+String.format("%x",vt-BASE)+") ====\n");
            rep.append(slotDump(vt,26));
            // queue slots 0..20 for decomp (dedup), focus on evaluate(10) and control slots
            for(int i=0;i<21;i++){ long fp=ptrAt(toAddr(vt+i*4L)); if(isFn(fp)) toDec.add((((long)i)<<40)|fp); }
        }

        // decompile queued, grouped
        try(FileWriter w=new FileWriter(new File(OUT,"vtable_full_methods.c"))){
            for(long packed: toDec){
                int slot=(int)(packed>>40); long fp=packed & 0xFFFFFFFFFFL;
                if(!emitted.add((slot*0x100000000L)^fp)){}
                Function f=fm.getFunctionAt(toAddr(fp));
                if(f==null){ f=fm.getFunctionContaining(toAddr(fp)); }
                w.write("// ===== slot["+slot+"] (off 0x"+Integer.toHexString(slot*4)+") @ "+String.format("%08x",fp)+"  "+(f==null?"?":f.getName())+" =====\n");
                w.write(decomp(f)); w.write("\n");
            }
        }
        try(FileWriter w=new FileWriter(new File(OUT,"vtable_full_report.txt"))){ w.write(rep.toString()); }
        println(rep.toString());
        println("[BtVtableFull] done.");
    }
}
