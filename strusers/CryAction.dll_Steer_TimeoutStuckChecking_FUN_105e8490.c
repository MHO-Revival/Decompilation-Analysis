
/* [RE-AUTO c0]
   strings:
     ""Steer_Enabled""
     ""CSeekToPosition""
     ""Steer_SeekOn""
     ""Steer_TimeoutStuckChecking""
     ""TargetType"" */

void FUN_105e8490(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("Steer_Enabled","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CSeekToPosition","");
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
  FUN_1001ea30("Steer_SeekOn","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSeekToPosition","");
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
  FUN_1001ea30("Steer_TimeoutStuckChecking","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSeekToPosition","");
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
  FUN_1001ea30("TargetType","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSeekToPosition","");
  FUN_103cf720(local_34,local_1c,3);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}

