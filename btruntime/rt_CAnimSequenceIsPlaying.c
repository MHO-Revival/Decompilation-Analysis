// === RTTI-resolved: CAnimSequenceIsPlaying ===
// nameStr@113061a4 td@1130619c vftables=[]

// ---- VIRTUAL METHODS (per-tick logic) ----

// ---- CREATE / FACTORY SITES ----
// creator FUN_105fc120 @ 105fc120
// (already emitted FUN_105fc120)

// creator FUN_10554200 @ 10554200

/* [RE-AUTO c0]
   strings:
     ""AnimSequence""
     ""CAnimSequenceIsPlaying"" */

void FUN_10554200(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("AnimSequence","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CAnimSequenceIsPlaying","");
  FUN_103cf720(local_1c,local_34,0,1,0);
  FUN_103cf810();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  return;
}


