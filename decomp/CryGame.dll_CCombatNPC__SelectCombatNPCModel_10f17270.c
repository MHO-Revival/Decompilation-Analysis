
/* [RE-R1]
   strings:
     ""SelectCombatNPCModel"" */

void __fastcall CCombatNPC__SelectCombatNPCModel(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *local_8;
  
  local_8 = param_1;
  piVar1 = (int *)(**(code **)(*param_1 + 800))();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xa8))();
    if (iVar2 == 0xb) {
      iVar2 = CCombatNPCInfo__GetRecordForThisNpc();
      *(undefined2 *)(param_1 + 0x2d) = *(undefined2 *)(iVar2 + 200);
      piVar1 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 0x38))();
        if (iVar3 != 0) {
          local_8 = *(int **)(iVar2 + 100);
          FUN_10d62f90(iVar3,"SelectCombatNPCModel",&local_8);
        }
      }
    }
  }
  return;
}

