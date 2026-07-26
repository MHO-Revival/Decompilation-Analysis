
/* [RE-R1]
   strings:
     ""OnSpawnGroupInvalid"" */

void __thiscall CGameRules__OnSpawnGroupInvalid(int *param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_2 != 0) {
    piVar5 = param_1 + 0x8d;
    piVar2 = (int *)param_1[0x8e];
    piVar8 = piVar5;
    if ((int *)param_1[0x8e] != (int *)0x0) {
      do {
        if ((uint)piVar2[4] < param_2) {
          piVar3 = (int *)piVar2[3];
        }
        else {
          piVar3 = (int *)piVar2[2];
          piVar8 = piVar2;
        }
        piVar2 = piVar3;
      } while (piVar3 != (int *)0x0);
      if (piVar8 == piVar5) goto LAB_10c05dba;
      if (param_2 < (uint)piVar8[4]) {
        piVar8 = piVar5;
      }
    }
    if ((piVar8 != piVar5) &&
       (iVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2), iVar4 != 0)) {
      iVar4 = (**(code **)(*param_1 + 0x208))(param_2);
      bVar1 = true;
      if (iVar4 != 0) goto LAB_10c05dbe;
    }
  }
LAB_10c05dba:
  bVar1 = false;
LAB_10c05dbe:
  local_8 = (undefined4 *)param_1[0x22];
  if (local_8 != (undefined4 *)param_1[0x23]) {
    do {
      uVar9 = *local_8;
      piVar5 = (int *)(**(code **)(*(int *)param_1[0xf] + 0x68))();
      iVar4 = (**(code **)(*piVar5 + 0x18))(uVar9);
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(iVar4 + 8);
        local_c = uVar9;
        uVar6 = (**(code **)(*param_1 + 0x2b0))(iVar4);
        if (uVar6 == param_2) {
          if (bVar1) {
            iVar4 = (**(code **)(*param_1 + 0x208))(uVar9);
            iVar7 = (**(code **)(*param_1 + 0x208))(param_2);
            uVar9 = local_c;
            if (iVar7 == iVar4) goto LAB_10c05e7f;
          }
          piVar5 = (int *)param_1[0x19];
          local_10 = param_2;
          local_c = uVar9;
          if ((piVar5 != (int *)0x0) &&
             (iVar4 = (**(code **)(*piVar5 + 0x38))("OnSpawnGroupInvalid"), iVar4 == 4)) {
            (**(code **)(*(int *)param_1[0x14] + 0x34))(piVar5,"OnSpawnGroupInvalid");
            FUN_10a69580(param_1 + 0x17);
            FUN_10a69520(&local_c);
            FUN_10a69520(&local_10);
            (**(code **)(*(int *)param_1[0x14] + 0x44))();
          }
        }
      }
LAB_10c05e7f:
      local_8 = local_8 + 1;
    } while (local_8 != (undefined4 *)param_1[0x23]);
  }
  return;
}

