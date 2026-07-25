// Dump CryGame BT vtables: 28 slots each (resolved), + MSVC RTTI class name.
// @category MHO
import java.io.File; import java.io.FileWriter; import java.util.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.*;

public class CgVtblDump extends GhidraScript {
    static final String OUT="/home/fallen/.claude/jobs/58b1921c/tmp/re_out3";
    Memory mem; FunctionManager fm; DecompInterface dec;
    long dw(long a){ try{ return mem.getInt(toAddr(a))&0xFFFFFFFFL; }catch(Exception e){ return 0; } }
    String sym(long a){ if(a==0) return ""; Function f=fm.getFunctionAt(toAddr(a));
        if(f!=null) return f.getName(); Symbol s=getSymbolAt(toAddr(a)); return s!=null?s.getName():""; }
    String cstr(long a){ StringBuilder sb=new StringBuilder(); for(int i=0;i<80;i++){ int b; try{b=mem.getByte(toAddr(a+i))&0xff;}catch(Exception e){break;} if(b==0)break; if(b<32||b>126)break; sb.append((char)b);} return sb.toString(); }
    String rtti(long vtbl){
        long col=dw(vtbl-4); if(col==0) return "";
        long td=dw(col+0x0c); if(td==0) return "";
        String nm=cstr(td+0x08);
        return nm;
    }
    String decomp(long fp){ Function f=fm.getFunctionAt(toAddr(fp)); if(f==null)f=fm.getFunctionContaining(toAddr(fp));
        if(f==null){try{f=createFunction(toAddr(fp),null);}catch(Exception e){}}
        if(f==null) return "// <no fn>\n";
        try{ DecompileResults r=dec.decompileFunction(f,150,monitor); if(r!=null&&r.decompileCompleted()) return r.getDecompiledFunction().getC(); }catch(Exception e){}
        return "// <fail>\n"; }

    @Override public void run() throws Exception {
        if(!currentProgram.getName().toLowerCase().contains("crygame")){ println("skip"); return; }
        mem=currentProgram.getMemory(); fm=currentProgram.getFunctionManager();
        dec=new DecompInterface(); dec.openProgram(currentProgram);
        new File(OUT).mkdirs();
        StringBuilder sb=new StringBuilder();

        LinkedHashMap<String,Long> vt=new LinkedHashMap<>();
        vt.put("BASE_node",0x11dbae74L);
        vt.put("Selector_General",0x11dbc308L);
        vt.put("Selector_Random",0x11dbc1b8L);
        vt.put("Sequence",0x11dbc168L);
        vt.put("Filter_base",0x11dbc35cL);
        vt.put("Filter_Logger",0x11dbc210L);
        vt.put("Filter_Loop",0x11dbc264L);
        vt.put("Filter_UntilFails",0x11dbbfb8L);
        vt.put("Filter_Non",0x11dbc10cL);
        vt.put("Filter_EnterExit",0x11dbc3b0L);

        for(Map.Entry<String,Long> e: vt.entrySet()){
            long v=e.getValue();
            sb.append(String.format("\n==== %s vtbl=%08x  RTTI=\"%s\" ====\n", e.getKey(), v, rtti(v)));
            for(int i=0;i<28;i++){ long s=dw(v+i*4); if(s<0x10000000L||s>0x11600000L) { if(s==0) {sb.append(String.format("  [%2d] +%02x %08x <end?>\n",i,i*4,s)); break;} }
                sb.append(String.format("  [%2d] +%02x %08x %s\n", i, i*4, s, sym(s))); }
        }
        try(FileWriter w=new FileWriter(new File(OUT,"vtbl_slots.txt"))){ w.write(sb.toString()); }
        println(sb.toString());
        println("[CgVtblDump] done");
    }
}
