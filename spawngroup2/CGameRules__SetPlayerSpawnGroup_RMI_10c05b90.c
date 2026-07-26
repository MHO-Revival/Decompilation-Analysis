
/* [RE-R1]
   strings:
     ""SetPlayerSpawnGroup"" */

void __thiscall
CGameRules__SetPlayerSpawnGroup_RMI(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = param_3;
  piVar1 = *(int **)(param_1 + 0x5c);
  param_3 = param_2;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x38))("SetPlayerSpawnGroup");
    if (iVar2 == 4) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x34))(piVar1,"SetPlayerSpawnGroup");
      FUN_10a69580(param_1 + 0x5c);
      FUN_10a69520(&param_3);
      FUN_10a69520(&local_8);
      (**(code **)(**(int **)(param_1 + 0x50) + 0x44))();
    }
  }
  return;
}

