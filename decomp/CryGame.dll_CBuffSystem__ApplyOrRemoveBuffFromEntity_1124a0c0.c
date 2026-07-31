
/* [RE-R1]
   strings:
     ""CBuffInfo"" */

void CBuffSystem__ApplyOrRemoveBuffFromEntity(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *param_1;
  piVar3 = (int *)FUN_111e09f0();
  if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x14))(uVar1), iVar4 != 0)) {
    iVar6 = param_1[1];
    iVar5 = FUN_10500130(0,"CBuffInfo",0);
    if ((iVar6 != -1) &&
       ((((iVar6 != 0 || (*(int *)(iVar5 + 0x30) == 0)) && (*(int *)(iVar5 + 0x28) != 0)) &&
        ((iVar6 = iVar6 - *(int *)(iVar5 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar5 + 0x24))))))
       ) {
      iVar2 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar6 / *(int *)(iVar5 + 0x28)) * 4);
      if ((iVar2 != 0) &&
         (iVar6 = *(int *)(iVar2 + (iVar6 % *(int *)(iVar5 + 0x28)) * 4), iVar6 != 0)) {
        iVar5 = (**(code **)(**(int **)(iVar4 + 0x10) + 100))();
        if ((iVar5 != 0) && (*(int *)(iVar6 + 0x420) != 0)) {
          (**(code **)(**(int **)(iVar4 + 0x10) + 100))();
          CBuffSystem__OnServerBuffRemoved(param_1[1]);
        }
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x54))(param_1[2],*(char *)(param_1 + 3) != '\0');
      }
    }
  }
  return;
}

