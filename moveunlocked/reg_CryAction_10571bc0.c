
/* [RE-AUTO c0]
   strings:
     ""EnableSpeedScalar""
     ""CEntityMoveToTarget""
     ""DisablePhy""
     ""MoveSpeed""
     ""TargetID""
     ""TargetSrvID""
     ""MoveSpeedScalar""
     ""MoveSpeedByAnim""
     ""NeedMoveSpeedAcc""
     ""MoveSpeedAccelerate"" */

void FUN_10571bc0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("EnableSpeedScalar","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CEntityMoveToTarget","");
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
  FUN_1001ea30("DisablePhy","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,1,3,0);
  FUN_103cf810();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MoveSpeed","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
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
  FUN_1001ea30("TargetID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
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
  FUN_1001ea30("TargetSrvID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,4);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MoveSpeedScalar","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,5);
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
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,6);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("NeedMoveSpeedAcc","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,7);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MoveSpeedAccelerate","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,8);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MoveSpeedAccStart","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,9);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MoveSpeedAccEnd","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,10);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MoveSpeedAccDuringTime","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,0xb);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MoveSpeedAccDuringSpeed","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityMoveToTarget","");
  FUN_103cf720(local_34,local_1c,0xc);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}

