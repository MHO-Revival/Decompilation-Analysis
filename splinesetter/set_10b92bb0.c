
/* WARNING: Removing unreachable block (ram,0x10b92e29) */
/* [RE-AUTO c0]
   strings:
     ""mh_sharemem_addrinfo""
     ""Die_InTrap"" */

void __fastcall FUN_10b92bb0(int param_1)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  bool bVar15;
  
  iVar8 = *(int *)(param_1 + 400);
  piVar2 = *(int **)(*(int *)(param_1 + 0x60) + 0x30);
  iVar4 = (**(code **)(**(int **)m_pThis_exref + 0x2ac))();
  if (iVar8 == iVar4) {
    (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
  }
  else {
    (**(code **)(**(int **)m_pThis_exref + 0x2b8))();
  }
  (**(code **)(*piVar2 + 0x534))();
  (**(code **)(*(int *)piVar2[3] + 0x94))();
  piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  (**(code **)(*piVar5 + 0x228))();
  FUN_10de9e40();
  pbVar6 = *(byte **)(param_1 + 0x270);
  pbVar9 = &DAT_11d9d32b;
  do {
    bVar1 = *pbVar6;
    bVar15 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_10b92ca7:
      uVar7 = -(uint)bVar15 | 1;
      goto LAB_10b92cac;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar15 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_10b92ca7;
    pbVar6 = pbVar6 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  uVar7 = 0;
LAB_10b92cac:
  if (uVar7 != 0) {
    iVar8 = (**(code **)(*(int *)piVar2[3] + 0x288))();
    if (*(int *)(iVar8 + 0x18) != 0) {
      iVar8 = (**(code **)(*(int *)piVar2[3] + 0x288))();
      (**(code **)(**(int **)(iVar8 + 0x18) + 0x5c))();
    }
    iVar8 = (**(code **)(*(int *)piVar2[3] + 0x288))();
    (**(code **)(**(int **)(iVar8 + 0x14) + 0x10))();
    iVar8 = (**(code **)(*(int *)piVar2[3] + 0x288))();
    (**(code **)(**(int **)(iVar8 + 0x14) + 0x80))();
    FUN_10a5b230();
    if ((*(char *)(param_1 + 0x1d4) == '\x01') ||
       ((*(char *)(param_1 + 0x1d4) == '\0' &&
        (cVar3 = (**(code **)(*piVar2 + 0xb8))(), cVar3 == '\0')))) {
      (**(code **)(*piVar2 + 1000))();
      puVar10 = (undefined8 *)0x0;
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x1d8)) {
        puVar14 = (undefined8 *)(param_1 + 0x1dc);
        do {
          if (puVar10 == (undefined8 *)0x0) {
            FUN_10b955c0();
          }
          else {
            puVar11 = (undefined8 *)0x0;
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = *puVar14;
              *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
              puVar11 = puVar10;
            }
            puVar10 = (undefined8 *)((int)puVar11 + 0xc);
          }
          iVar8 = iVar8 + 1;
          puVar14 = (undefined8 *)((int)puVar14 + 0xc);
        } while (iVar8 < *(int *)(param_1 + 0x1d8));
      }
      (**(code **)(*piVar2 + 0x400))();
      (**(code **)(*piVar2 + 0x3ec))();
      (**(code **)(*piVar2 + 0x88))
                (*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x1d0));
    }
    if (-1 < *(int *)(*(int *)(param_1 + 0x270) + -0xc)) {
      FUN_10c3dab0();
    }
    (**(code **)(*piVar2 + 0xd8))();
    pbVar13 = &DAT_11ccb154;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x6c);
    pbVar6 = *(byte **)(param_1 + 0x270);
    pbVar9 = pbVar6;
    do {
      bVar1 = *pbVar9;
      bVar15 = bVar1 < *pbVar13;
      if (bVar1 != *pbVar13) {
LAB_10b92ea0:
        uVar7 = -(uint)bVar15 | 1;
        goto LAB_10b92ea5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar15 = bVar1 < pbVar13[1];
      if (bVar1 != pbVar13[1]) goto LAB_10b92ea0;
      pbVar9 = pbVar9 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_10b92ea5:
    if (uVar7 != 0) {
      pcVar12 = "Die_InTrap";
      do {
        bVar1 = *pbVar6;
        bVar15 = bVar1 < (byte)*pcVar12;
        if (bVar1 != *pcVar12) {
LAB_10b92ed0:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_10b92ed5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar15 = bVar1 < (byte)pcVar12[1];
        if (bVar1 != pcVar12[1]) goto LAB_10b92ed0;
        pbVar6 = pbVar6 + 2;
        pcVar12 = pcVar12 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_10b92ed5:
      if (uVar7 != 0) {
        return;
      }
    }
    (**(code **)(*piVar2 + 0x334))();
  }
  return;
}

