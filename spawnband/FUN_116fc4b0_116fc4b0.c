
/* [RE-AUTO c0] */

undefined1 FUN_116fc4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  int local_c;
  undefined1 local_8;
  
  puStack_14 = &local_1c;
  local_c = 0;
  local_8 = param_3._3_1_;
  local_1c = 0;
  uStack_18 = 0;
  puStack_10 = puStack_14;
  cVar1 = CSpawnMonsterGroupInfo__RollSpawnForLevel(&local_1c,0,param_2,param_3);
  if (cVar1 == '\0') {
    if (local_c != 0) {
      FUN_10e9d570(uStack_18);
      puStack_14 = &local_1c;
      uStack_18 = 0;
      local_c = 0;
      puStack_10 = puStack_14;
    }
    cVar1 = CSpawnMonsterGroupInfo__RollSpawnForLevel(&local_1c,1,param_2,param_3);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_116fc548;
    }
  }
  FUN_116fba20(&local_1c);
  uVar2 = 1;
LAB_116fc548:
  if (local_c != 0) {
    FUN_10e9d570(uStack_18);
  }
  return uVar2;
}

