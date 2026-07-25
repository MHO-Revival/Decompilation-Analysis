
/* [RE-AUTO c0] */

void __fastcall FUN_104d97c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_c;
  int local_8;
  
  if (((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0x34) != (int *)0x0)) &&
     (piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3fc))(), piVar3 != (int *)0x0
     )) {
    puVar9 = (undefined4 *)(param_1 + 0x10);
    uVar4 = 0;
    for (puVar10 = *(undefined4 **)(param_1 + 0x10); puVar10 != puVar9;
        puVar10 = (undefined4 *)*puVar10) {
      uVar4 = uVar4 + 1;
    }
    iVar5 = FUN_10c3da60(-(uint)((int)((ulonglong)uVar4 * 0xc >> 0x20) != 0) |
                         (uint)((ulonglong)uVar4 * 0xc));
    puVar10 = (undefined4 *)*puVar9;
    iVar8 = 0;
    local_8 = 0;
    if (puVar10 != puVar9) {
      local_c = (undefined4 *)(iVar5 + 8);
      do {
        piVar1 = (int *)puVar10[2];
        if (((piVar1 != (int *)0x0) &&
            (iVar6 = (**(code **)(*piVar1 + 0x30))(), iVar8 = local_8, iVar6 != 0)) &&
           (iVar6 = (**(code **)(*piVar1 + 0x18))(), iVar6 != -1)) {
          uVar7 = (**(code **)(*piVar1 + 0x18))();
          uVar2 = DAT_11d26624;
          local_c[-2] = uVar7;
          local_c[-1] = uVar2;
          iVar8 = (**(code **)(*piVar1 + 0x30))();
          local_8 = local_8 + 1;
          *local_c = *(undefined4 *)(iVar8 + 4);
          local_c = local_c + 3;
          iVar8 = local_8;
        }
        puVar10 = (undefined4 *)*puVar10;
      } while (puVar10 != puVar9);
      if (iVar8 != 0) {
        (**(code **)(*piVar3 + 8))(iVar5,iVar8);
      }
    }
    FUN_10c3da30(iVar5);
    FUN_104d9740(piVar3);
  }
  return;
}

