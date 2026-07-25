// FUN_10b931b0 @ 10b931b0
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* WARNING: Removing unreachable block (ram,0x10b93422) */
/* [RE-AUTO c0]
   strings:
     ""mh_sharemem_addrinfo"" */

void __thiscall FUN_10b931b0(int param_1,float param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  int local_c;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x60) + 0x30);
  if (piVar2 != (int *)0x0) {
    iVar6 = *(int *)(param_1 + 0x1b4);
    iVar4 = (**(code **)(**(int **)m_pThis_exref + 0x2ac))();
    if (iVar6 == iVar4) {
      uVar5 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
    }
    else {
      uVar5 = (**(code **)(**(int **)m_pThis_exref + 0x2b0))();
    }
    *(undefined4 *)(param_1 + 0x1b0) = uVar5;
    iVar6 = (**(code **)(*(int *)piVar2[3] + 0x94))();
    auVar15 = ZEXT416((uint)(*(float *)(param_1 + 0x1f8) - *(float *)(iVar6 + 8)));
    piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    (**(code **)(*piVar7 + 0x228))();
    pbVar8 = *(byte **)(param_1 + 0x2c0);
    pbVar10 = &DAT_11d9d32b;
    do {
      bVar1 = *pbVar8;
      bVar14 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_10b93292:
        uVar9 = -(uint)bVar14 | 1;
        goto LAB_10b93297;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar14 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_10b93292;
      pbVar8 = pbVar8 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_10b93297:
    if (uVar9 != 0) {
      iVar6 = (**(code **)(*(int *)piVar2[3] + 0x288))();
      if (*(int *)(iVar6 + 0x18) != 0) {
        iVar6 = (**(code **)(*(int *)piVar2[3] + 0x288))();
        (**(code **)(**(int **)(iVar6 + 0x18) + 0x5c))();
      }
      iVar6 = (**(code **)(*(int *)piVar2[3] + 0x288))();
      (**(code **)(**(int **)(iVar6 + 0x14) + 0x10))();
      iVar6 = (**(code **)(*(int *)piVar2[3] + 0x288))();
      (**(code **)(**(int **)(iVar6 + 0x14) + 0x80))();
      FUN_10a5b230();
      if ((*(char *)(param_1 + 0x210) == '\x01') ||
         ((*(char *)(param_1 + 0x210) == '\0' &&
          (cVar3 = (**(code **)(*piVar2 + 0xb8))(), cVar3 == '\0')))) {
        (**(code **)(*piVar2 + 1000))();
        puVar11 = (undefined8 *)0x0;
        local_c = 0;
        if (0 < *(int *)(param_1 + 0x220)) {
          puVar13 = (undefined8 *)(param_1 + 0x224);
          do {
            if (puVar11 == (undefined8 *)0x0) {
              FUN_10b955c0();
            }
            else {
              puVar12 = (undefined8 *)0x0;
              if (puVar11 != (undefined8 *)0x0) {
                *puVar11 = *puVar13;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar13 + 1);
                puVar12 = puVar11;
              }
              puVar11 = (undefined8 *)((int)puVar12 + 0xc);
            }
            local_c = local_c + 1;
            puVar13 = (undefined8 *)((int)puVar13 + 0xc);
          } while (local_c < *(int *)(param_1 + 0x220));
        }
        (**(code **)(*piVar2 + 0x400))();
        (**(code **)(*piVar2 + 0x3ec))();
        param_2 = *(float *)(param_1 + 0x20c) * param_2;
        auVar15 = ZEXT416((uint)param_2);
        (**(code **)(*piVar2 + 0x88))(*(undefined4 *)(param_1 + 0x2c0),param_2);
      }
      if (-1 < *(int *)(*(int *)(param_1 + 0x2c0) + -0xc)) {
        FUN_10c3dab0();
      }
      (**(code **)(*piVar2 + 0xd8))();
      pbVar8 = *(byte **)(param_1 + 0x2c0);
      pbVar10 = &DAT_11ccb154;
      do {
        bVar1 = *pbVar8;
        bVar14 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_10b93490:
          uVar9 = -(uint)bVar14 | 1;
          goto LAB_10b93495;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar14 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_10b93490;
        pbVar8 = pbVar8 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_10b93495:
      if (uVar9 == 0) {
        (**(code **)(*piVar2 + 0x334))();
      }
    }
    FUN_10de9de0();
    (**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x10))();
    FUN_11a894ef();
    *(float *)(param_1 + 0x2c4) = (float)auVar15._0_8_ * DAT_11de98bc;
  }
  return;
}

