
/* [RE-R1]
   strings:
     ""GetPlayerSpawnGroup"" */

int __thiscall CGameRules__GetPlayerSpawnGroup_RMI(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    local_8 = param_1;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x38))("GetPlayerSpawnGroup");
    if (iVar1 == 4) {
      local_8 = 0;
      (**(code **)(**(int **)(param_1 + 0x50) + 0x34))
                (*(undefined4 *)(param_1 + 0x5c),"GetPlayerSpawnGroup");
      FUN_10a69580((undefined4 *)(param_1 + 0x5c));
      piVar2 = (int *)(**(code **)(**(int **)(param_2 + 0xc) + 0x150))(2);
      if (piVar2 == (int *)0x0) {
        param_2 = 0;
      }
      else {
        param_2 = (**(code **)(*piVar2 + 0x38))();
      }
      FUN_10a69450(&param_2);
      FUN_10c0bfb0(&local_8);
      return local_8;
    }
  }
  return 0;
}

