// ===== registrar FUN_105ed310 @ 105ed310 =====

/* [RE-AUTO c0]
   strings:
     ""BehaviorAttribute""
     ""CSelectorVoter""
     ""VoteWeight""
     ""SelectorName"" */

void FUN_105ed310(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("BehaviorAttribute","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CSelectorVoter","");
  FUN_103cf720(local_1c,local_34,0,1,0);
  FUN_103cf810();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("VoteWeight","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSelectorVoter","");
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
  FUN_1001ea30("SelectorName","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSelectorVoter","");
  FUN_103cf720(local_34,local_1c,2,1,0);
  FUN_103cf810();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}


