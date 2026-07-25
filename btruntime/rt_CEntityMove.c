// === RTTI-resolved: CEntityMove ===
// nameStr@11307688 td@11307680 vftables=[]

// ---- VIRTUAL METHODS (per-tick logic) ----

// ---- CREATE / FACTORY SITES ----
// creator FUN_105fc120 @ 105fc120
// (already emitted FUN_105fc120)

// creator FUN_1056c9d0 @ 1056c9d0

/* [RE-AUTO c0]
   strings:
     ""DisablePhy""
     ""CEntityMove""
     ""MoveSpeed""
     ""TargetDistance""
     ""AlwaysStartDirInMove""
     ""MoveSpeedByAnim"" */

void FUN_1056c9d0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("DisablePhy","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CEntityMove","");
  FUN_103cf720(local_1c,local_34,0,3,0);
  FUN_103cf810();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MoveSpeed","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMove","");
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
  FUN_1001ea30("TargetDistance","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMove","");
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
  FUN_1001ea30("AlwaysStartDirInMove","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMove","");
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
  FUN_1001ea30("MoveSpeedByAnim","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMove","");
  FUN_103cf720(local_34,local_1c,5);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}


