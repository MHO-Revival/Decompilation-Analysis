
/* [RE-AUTO c0]
   strings:
     ""TargetID""
     ""CIsTargetInSameRegion"" */

void FUN_1059b890(void)

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
  FUN_1001ea30("CIsTargetInSameRegion","");
  FUN_103cf720(local_1c,local_34,0,4,0);
  FUN_103cf810();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  return;
}

