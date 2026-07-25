
// ===== helper 103dc930 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103dc930(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = param_1[8];
  if (((iVar3 != 0) && (*(char *)(*DAT_116f75dc + 0x68) != '\0')) &&
     (*(char *)(iVar3 + 0xfc) != '\0')) {
    *(undefined1 *)(iVar3 + 0xfc) = 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x28))();
  param_1[0xd] = iVar3;
  (**(code **)(*(int *)param_1[8] + 0x14))(iVar3);
  (**(code **)(*(int *)param_1[8] + 0x18))(0);
  if ((iVar3 == 2) || (iVar3 == 1)) {
    (**(code **)(*(int *)param_1[8] + 0x18))(1);
    iVar1 = *(int *)(param_1[8] + 0xc0);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        bVar4 = param_1[0x17] == 1;
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        bVar4 = param_1[0x17] == 2;
      }
      if (!bVar4) {
        return;
      }
    }
    iVar1 = param_1[2];
    iVar2 = *(int *)(iVar1 + 0x20);
    *(int *)(iVar2 + 0xd0) = iVar3;
    *(int *)(iVar2 + 200) = iVar1;
  }
  return;
}



// ===== helper 103d8a40 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103d8a40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = FUN_10653d70(0x24);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_103d8a90(*(undefined4 *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x30))();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ===== helper 103dca70 =====

/* [RE-AUTO c0] */

void __fastcall FUN_103dca70(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  return;
}



// ===== helper 103d8660 =====

/* [RE-AUTO c0] */

uint __thiscall FUN_103d8660(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if ((uint)(piVar1[1] - *piVar1 >> 2) <= param_2) {
    return (uint)(uint3)(piVar1[1] - *piVar1 >> 10) << 8;
  }
  if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
    return (uint)(*(int *)(piVar1[3] + param_2 * 4) != -1);
  }
  return 0;
}



// ===== helper 103db9b0 =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103db9b0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
      iVar4 = *(int *)(*piVar1 + param_2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar3 = FUN_101c4350(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c36a0();
        return (bool)uVar2;
      }
    }
  }
  return false;
}



// ===== helper 103dba30 =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103dba30(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
      iVar4 = *(int *)(*piVar1 + param_2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar3 = FUN_101c4280(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c3620();
        return (bool)uVar2;
      }
    }
  }
  return false;
}



// ===== helper 103d8940 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_103d8940(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb4);
}



// ===== helper 103dd050 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103dd050(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined1 local_c [8];
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = param_1 + 8;
  iVar5 = iVar4;
  if (iVar1 != 0) {
    do {
      if (*(uint *)(iVar1 + 0x10) < param_2) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar5 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar5 == iVar4) goto LAB_103dd0c4;
    if (param_2 < *(uint *)(iVar5 + 0x10)) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 != iVar4) {
    if ((*(char *)(param_1 + 0x50) != '\0') &&
       (piVar3 = (int *)FUN_103de9f0(local_c,&param_2), *piVar3 != param_1 + 0x38)) {
      return 0;
    }
    iVar4 = FUN_103de960(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
LAB_103dd0c4:
  if ((*(char *)(param_1 + 0x50) != '\0') &&
     (FUN_103de910(local_c,&param_2), unaff_ESI != param_1 + 0x20)) {
    iVar4 = FUN_103de960(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
  return 0;
}



// ===== helper 105ed990 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_105ed990(int param_1,undefined4 param_2)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  float fVar18;
  uint local_44 [3];
  undefined4 local_38;
  uint local_34 [2];
  float local_2c;
  int local_28;
  uint local_24;
  int local_20;
  float local_1c;
  int local_18;
  float local_14;
  int local_10;
  uint local_c;
  char local_6 [2];
  
  local_c = 0;
  local_10 = param_1;
  FUN_10a5d660();
  puVar16 = *(uint **)(param_1 + 0x60);
  puVar1 = *(uint **)(param_1 + 100);
  if (puVar16 != puVar1) {
    do {
      uVar15 = *puVar16;
      uVar17 = param_1 + 0x6cU;
      uVar14 = *(uint *)(param_1 + 0x70);
      while (uVar14 != 0) {
        if (*(uint *)(uVar14 + 0x10) < uVar15) {
          uVar14 = *(uint *)(uVar14 + 0xc);
        }
        else {
          uVar17 = uVar14;
          uVar14 = *(uint *)(uVar14 + 8);
        }
      }
      if ((uVar17 == param_1 + 0x6cU) || (local_c = local_c | 1, uVar15 < *(uint *)(uVar17 + 0x10)))
      {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((local_c & 1) != 0) {
        local_c = local_c & 0xfffffffe;
      }
      if (bVar2) {
        local_34[1] = 0;
        local_34[0] = uVar15;
        FUN_105f1e40(&local_24,uVar17,local_34);
        uVar17 = local_24;
      }
      puVar16 = puVar16 + 1;
      *(undefined4 *)(uVar17 + 0x14) = 0;
    } while (puVar16 != puVar1);
  }
  local_24 = 0;
  iVar8 = *(int *)(local_10 + 0xd0) - *(int *)(local_10 + 0xcc);
  iVar7 = iVar8 >> 0x1f;
  if (iVar8 / 0x18 + iVar7 != iVar7) {
    local_18 = 0;
    do {
      iVar8 = local_18;
      iVar7 = *(int *)(local_10 + 0xcc);
      local_20 = iVar7;
      FUN_103d8940();
      uVar4 = FUN_10a5ec80();
      uVar4 = FUN_10a5d620(uVar4);
      uVar4 = FUN_103c8620(uVar4);
      iVar5 = FUN_103c92b0(uVar4);
      if (*(int *)(iVar5 + 0xc) == 3) {
        FUN_101c4350(local_6);
      }
      local_6[1] = 0;
      FUN_101c40a0(local_6 + 1);
      uVar15 = local_c;
      if (local_6[0] != '\0') {
        iVar7 = iVar7 + iVar8;
        local_14 = DAT_113c12c8;
        cVar3 = FUN_10a5f130();
        uVar14 = local_c;
        if (cVar3 == '\0') {
          iVar5 = local_10 + 0x9c;
          iVar8 = iVar5;
          if (*(int *)(local_10 + 0xa0) != 0) {
            iVar9 = *(int *)(local_10 + 0xa0);
            do {
              if (*(uint *)(iVar9 + 0x10) < *(uint *)(iVar7 + 0x14)) {
                iVar10 = *(int *)(iVar9 + 0xc);
              }
              else {
                iVar10 = *(int *)(iVar9 + 8);
                iVar8 = iVar9;
              }
              iVar9 = iVar10;
            } while (iVar10 != 0);
          }
          if ((iVar8 == iVar5) ||
             (local_c = local_c | 2, *(uint *)(iVar7 + 0x14) < *(uint *)(iVar8 + 0x10))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((local_c & 2) != 0) {
            local_c = local_c & 0xfffffffd;
          }
          uVar14 = local_c;
          if (bVar2) {
            local_44[2] = *(undefined4 *)(iVar7 + 0x14);
            local_38 = 0;
            FUN_105f1e40(&local_28,iVar8,local_44 + 2);
            iVar8 = local_28;
          }
          local_14 = *(float *)(iVar8 + 0x14);
          iVar8 = local_18;
        }
        uVar17 = 0;
        uVar15 = local_c;
        if (*(int *)(local_20 + 8 + iVar8) - *(int *)(local_20 + 4 + iVar8) >> 3 != 0) {
          local_1c = (float)(local_10 + 0x6c);
          fVar6 = local_1c;
          fVar18 = local_14;
          do {
            iVar7 = *(int *)(local_20 + 4 + iVar8);
            fVar13 = fVar6;
            if (*(float *)((int)fVar6 + 4) != 0.0) {
              fVar11 = *(float *)((int)fVar6 + 4);
              do {
                if (*(uint *)((int)fVar11 + 0x10) < *(uint *)(iVar7 + uVar17 * 8)) {
                  fVar12 = *(float *)((int)fVar11 + 0xc);
                }
                else {
                  fVar12 = *(float *)((int)fVar11 + 8);
                  fVar6 = fVar11;
                }
                fVar11 = fVar12;
                fVar13 = local_1c;
              } while (fVar12 != 0.0);
            }
            if ((fVar6 == fVar13) ||
               (uVar14 = uVar14 | 4, *(uint *)(iVar7 + uVar17 * 8) < *(uint *)((int)fVar6 + 0x10)))
            {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((uVar14 & 4) != 0) {
              uVar14 = uVar14 & 0xfffffffb;
            }
            if (bVar2) {
              local_44[0] = *(uint *)(iVar7 + uVar17 * 8);
              local_44[1] = 0;
              FUN_105f1e40(&local_2c,fVar6,local_44);
              fVar6 = local_2c;
              fVar13 = local_1c;
              fVar18 = local_14;
            }
            iVar8 = uVar17 * 8;
            uVar17 = uVar17 + 1;
            *(float *)((int)fVar6 + 0x14) =
                 *(float *)(iVar7 + 4 + iVar8) * fVar18 + *(float *)((int)fVar6 + 0x14);
            fVar6 = fVar13;
            iVar8 = local_18;
            uVar15 = uVar14;
          } while (uVar17 < (uint)(*(int *)(local_20 + 8 + local_18) -
                                   *(int *)(local_20 + 4 + local_18) >> 3));
        }
      }
      local_c = uVar15;
      local_18 = iVar8 + 0x18;
      local_24 = local_24 + 1;
    } while (local_24 < (uint)((*(int *)(local_10 + 0xd0) - *(int *)(local_10 + 0xcc)) / 0x18));
  }
  local_24 = 0;
  local_1c = DAT_112fcb00;
  iVar7 = *(int *)(local_10 + 0xbc);
  if (iVar7 == local_10 + 0xb4) {
    return param_2;
  }
  do {
    local_20 = *(undefined4 *)(iVar7 + 0x10);
    local_14 = DAT_113c1280;
    uVar15 = local_c;
    if (*(int *)(iVar7 + 0x28) - *(int *)(iVar7 + 0x24) >> 2 != 0) {
      local_18 = local_10 + 0x6c;
      uVar14 = 0;
      do {
        local_2c = *(float *)(*(int *)(iVar7 + 0x24) + uVar14 * 4);
        uVar17 = *(uint *)(*(int *)(local_10 + 0x60) + uVar14 * 4);
        iVar5 = *(int *)(local_18 + 4);
        iVar8 = local_18;
        while (iVar9 = iVar5, iVar9 != 0) {
          if (*(uint *)(iVar9 + 0x10) < uVar17) {
            iVar5 = *(int *)(iVar9 + 0xc);
          }
          else {
            iVar5 = *(int *)(iVar9 + 8);
            iVar8 = iVar9;
          }
        }
        if ((iVar8 == local_18) || (uVar15 = uVar15 | 8, uVar17 < *(uint *)(iVar8 + 0x10))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((uVar15 & 8) != 0) {
          uVar15 = uVar15 & 0xfffffff7;
        }
        if (bVar2) {
          local_44[1] = 0;
          local_44[0] = uVar17;
          FUN_105f1e40(&local_28,iVar8,local_44);
          iVar8 = local_28;
        }
        uVar14 = uVar14 + 1;
        local_14 = *(float *)(iVar8 + 0x14) * local_2c + local_14;
      } while (uVar14 < (uint)(*(int *)(iVar7 + 0x28) - *(int *)(iVar7 + 0x24) >> 2));
    }
    local_c = uVar15;
    iVar8 = local_20;
    uVar15 = local_24;
    local_2c = *(float *)(iVar7 + 0x1c) * local_14;
    if (local_24 == 0) {
      local_1c = local_2c;
      FUN_10a5d8a0(local_20);
    }
    if (local_1c < local_2c) {
      local_1c = local_2c;
      FUN_10a5d8a0(iVar8);
    }
    iVar8 = *(int *)(iVar7 + 0xc);
    local_24 = uVar15 + 1;
    if (iVar8 == 0) {
      iVar8 = *(int *)(iVar7 + 4);
      if (iVar7 == *(int *)(iVar8 + 0xc)) {
        do {
          iVar7 = iVar8;
          iVar8 = *(int *)(iVar7 + 4);
        } while (iVar7 == *(int *)(iVar8 + 0xc));
      }
      if (*(int *)(iVar7 + 0xc) != iVar8) {
        iVar7 = iVar8;
      }
    }
    else {
      for (iVar5 = *(int *)(iVar8 + 8); iVar7 = iVar8, iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
        iVar8 = iVar5;
      }
    }
  } while (iVar7 != local_10 + 0xb4);
  return param_2;
}



// ===== helper 105a2840 =====

/* [RE-AUTO c0] */

void __fastcall FUN_105a2840(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  cVar3 = FUN_103d8660(1);
  if ((((cVar3 != '\0') &&
       (piVar1 = *(int **)(param_1 + 0x2c), 1 < (uint)(piVar1[1] - *piVar1 >> 2))) &&
      (4 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar1[3] + 4))) {
    FUN_103d8940(*(int *)(piVar1[3] + 4),&local_c);
    FUN_101c35a0();
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_105a2960(&local_18);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  FUN_105a3580(&local_18);
  local_28 = 4;
  local_24 = local_c;
  FUN_105a01c0(&local_28);
  FUN_105a2270(&local_44);
  FUN_105a0130();
  iVar2 = local_18;
  FUN_1059ee40(local_14,local_18,0,&local_5);
  if (iVar2 != 0) {
    FUN_10653dc0(iVar2);
  }
  return;
}



// ===== helper 105a2b90 =====

/* [RE-AUTO c0]
   calls: _time64, _localtime64_s
   strings:
     ""%d_%d_%d_%d_%d""
     ""MonsterDecisionStats"" */

void __fastcall FUN_105a2b90(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char local_e0 [128];
  tm local_60;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  __time64_t local_24;
  char local_1c [16];
  char *local_c;
  char *local_8;
  
  FUN_1059d820(param_1 + 0x60);
  local_24 = _time64((__time64_t *)0x0);
  _localtime64_s(&local_60,&local_24);
  FUN_10567690(local_e0,"%d_%d_%d_%d_%d",local_60.tm_year + 0x76c,local_60.tm_mon + 1,
               local_60.tm_mday,local_60.tm_hour,local_60.tm_min);
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("MonsterDecisionStats","");
  FUN_10028a60(&DAT_11306588,&DAT_11306589);
  pcVar1 = local_e0;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_10028a60(local_e0,pcVar2);
  local_2c = local_3c;
  pcVar1 = local_8;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  local_28 = local_2c;
  FUN_1001ea30(local_8,pcVar2);
  FUN_1059dc00(param_1 + 0x60,local_3c);
  if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_28);
  }
  if ((local_8 != local_1c) && (local_8 != (char *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}



// ===== helper 103d8a90 =====

/* [RE-AUTO c0]
   calls: memcpy */

int __thiscall FUN_103d8a90(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  
  iVar1 = param_2;
  FUN_103da1f0(param_2);
  FUN_103da870(*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2,(int)&param_2 + 3);
  pvVar3 = *(void **)(iVar1 + 0xc);
  pvVar2 = *(void **)(param_1 + 0xc);
  if (*(void **)(iVar1 + 0x10) != pvVar3) {
    sVar4 = (int)*(void **)(iVar1 + 0x10) - (int)pvVar3;
    pvVar2 = memcpy(pvVar2,pvVar3,sVar4);
    pvVar2 = (void *)(sVar4 + (int)pvVar2);
  }
  *(void **)(param_1 + 0x10) = pvVar2;
  FUN_103da7d0(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2,(int)&param_2 + 3);
  pvVar2 = *(void **)(iVar1 + 0x18);
  pvVar3 = *(void **)(param_1 + 0x18);
  if (*(void **)(iVar1 + 0x1c) != pvVar2) {
    sVar4 = (int)*(void **)(iVar1 + 0x1c) - (int)pvVar2;
    pvVar3 = memcpy(pvVar3,pvVar2,sVar4);
    pvVar3 = (void *)((int)pvVar3 + sVar4);
  }
  *(void **)(param_1 + 0x1c) = pvVar3;
  return param_1;
}



// ===== helper 103dbbb0 =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103dbbb0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
      iVar4 = *(int *)(*piVar1 + param_2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar3 = FUN_101cec60(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_103dc170();
        return (bool)uVar2;
      }
    }
  }
  return false;
}


