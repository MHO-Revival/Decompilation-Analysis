
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1055f3e0(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  undefined1 local_c [7];
  byte local_5;
  
  cVar2 = FUN_103d8610(0);
  if (cVar2 == '\0') {
    piVar3 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x68))();
    iVar6 = *piVar3;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar5 = (int *)(**(code **)(iVar6 + 0xc))(uVar4);
  }
  else {
    piVar3 = *(int **)(param_1 + 0x2c);
    piVar5 = local_14;
    if (((piVar3[1] - *piVar3 >> 2 != 0) && (0 < (int)(piVar3[4] - piVar3[3] & 0xfffffffcU))) &&
       (-1 < *(int *)piVar3[3])) {
      FUN_103d8940(*(int *)piVar3[3],&local_10);
      cVar2 = FUN_101c3720();
      piVar5 = local_14;
      if (cVar2 != '\0') {
        piVar3 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x68))();
        piVar5 = (int *)(**(code **)(*piVar3 + 0xc))(local_10);
      }
    }
  }
  if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 800))(), iVar6 != 0)) {
    FUN_10a5d660();
    local_5 = 0;
    cVar2 = FUN_103dbbb0(2,local_c);
    local_14 = (int *)(uint)local_5;
    if (cVar2 != '\0') {
      local_14 = (int *)0x1;
    }
    iVar6 = (**(code **)(*piVar5 + 800))();
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    (**(code **)(**(int **)(iVar6 + 0x10) + 0x18))(*(undefined4 *)(param_1 + 0x60),&local_20);
    iVar7 = local_1c - local_20 >> 2;
    iVar6 = local_20;
    if (iVar7 != 0) {
      if ((char)local_14 == '\0') {
LAB_1055f5ae:
        if (local_20 != 0) {
          FUN_10653dc0(local_20);
        }
        uVar4 = 2;
        goto LAB_1055f56d;
      }
      uVar12 = 0;
      iVar10 = local_1c;
      if (iVar7 != 0) {
        do {
          iVar7 = *(int *)(*(int *)(iVar6 + uVar12 * 4) + 0x50);
          if ((iVar7 != 0) && (*(int *)(iVar7 + 4) == 1)) {
            pbVar11 = *(byte **)(iVar7 + 0x1c);
            pbVar8 = (byte *)FUN_10a5ec80();
            do {
              bVar1 = *pbVar11;
              bVar13 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_1055f540:
                uVar9 = -(uint)bVar13 | 1;
                goto LAB_1055f545;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar11[1];
              bVar13 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_1055f540;
              pbVar11 = pbVar11 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_1055f545:
            iVar6 = local_20;
            iVar10 = local_1c;
            if (uVar9 == 0) goto LAB_1055f5ae;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(iVar10 - iVar6 >> 2));
      }
    }
    if (iVar6 != 0) {
      FUN_10653dc0(iVar6);
    }
  }
  uVar4 = 1;
LAB_1055f56d:
  if ((-1 < DAT_113cc000) && (iVar6 = FUN_106542c0(&DAT_113cc000), iVar6 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 + (-0xd - DAT_113cc008);
    FUN_106540f0(&DAT_113cc000);
  }
  return uVar4;
}

