
/* [RE-R1]
   strings:
     ""RequestSpawnGroup"" */

void __thiscall CGameRules__RequestSpawnGroup_ClientRMI(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x38))("RequestSpawnGroup");
    if (iVar2 == 4) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x34))(piVar1,"RequestSpawnGroup");
      FUN_10a69580(param_1 + 0x5c);
      FUN_10a69520(&param_2);
      (**(code **)(**(int **)(param_1 + 0x50) + 0x44))();
    }
  }
  return;
}

