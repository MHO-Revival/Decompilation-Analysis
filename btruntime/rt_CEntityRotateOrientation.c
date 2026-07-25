// === RTTI-resolved: CEntityRotateOrientation ===
// nameStr@11307cec td@11307ce4 vftables=[]

// ---- VIRTUAL METHODS (per-tick logic) ----

// ---- CREATE / FACTORY SITES ----
// creator FUN_105fc120 @ 105fc120
// (already emitted FUN_105fc120)

// creator FUN_10573f80 @ 10573f80

/* [RE-AUTO c0]
   strings:
     ""TargetID""
     ""CEntityRotateOrientation""
     ""TargetSrvID""
     ""TargetOrientation""
     ""RotateSpeed""
     ""RotateSpeedByAnim"" */

void FUN_10573f80(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("TargetID","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CEntityRotateOrientation","");
  FUN_103cf720(local_1c,local_34,0);
  FUN_103cf8f0();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("TargetSrvID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityRotateOrientation","");
  FUN_103cf720(local_34,local_1c,1);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("TargetOrientation","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityRotateOrientation","");
  FUN_103cf720(local_34,local_1c,2);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("RotateSpeed","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityRotateOrientation","");
  FUN_103cf720(local_34,local_1c,3);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("RotateSpeedByAnim","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityRotateOrientation","");
  FUN_103cf720(local_34,local_1c,4);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}


