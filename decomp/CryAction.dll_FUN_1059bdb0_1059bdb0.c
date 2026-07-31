
/* [RE-AUTO c0]
   strings:
     ""HSpeed""
     ""CJumpTo""
     ""Gravity""
     ""IsJumpOff""
     ""JumpOffset""
     ""RegionConnectTowardsPos""
     ""TargetPos"" */

void FUN_1059bdb0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("HSpeed","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CJumpTo","");
  FUN_103cf720(local_1c,local_34,0,2,0);
  FUN_103cf810();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("Gravity","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CJumpTo","");
  FUN_103cf720(local_34,local_1c,1,2,0);
  FUN_103cf810();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("IsJumpOff","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CJumpTo","");
  FUN_103cf720(local_34,local_1c,2,3,0);
  FUN_103cf810();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("JumpOffset","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CJumpTo","");
  FUN_103cf720(local_34,local_1c,3,2,0);
  FUN_103cf810();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("RegionConnectTowardsPos","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CJumpTo","");
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
  FUN_1001ea30("TargetPos","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CJumpTo","");
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

