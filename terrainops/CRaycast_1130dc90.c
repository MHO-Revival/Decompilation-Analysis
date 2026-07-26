// CRaycast  name-getter slot 0x1130dc90
// -6  0x1130dc78 -> 0x103d8b60
// -5  0x1130dc7c -> 0x103dca70
// -4  0x1130dc80 -> 0x103dc9e0
// -3  0x1130dc84 -> 0x105b3260   <== Evaluate
// -2  0x1130dc88 -> 0x103d7a00
// -1  0x1130dc8c -> 0x103d7a30
// +0  0x1130dc90 -> 0x10622010   <== name getter
// +1  0x1130dc94 -> 0x103dc6d0
// +2  0x1130dc98 -> 0x103dc830


/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""flankwall""
     ""topterrain""
     ""terrain"" */

undefined4 __fastcall FUN_105b3260(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  float *pfVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  char *pcVar18;
  float local_2a8 [7];
  undefined1 local_28c [488];
  float local_a4;
  float local_98;
  float *local_8c;
  float local_84 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  int *local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int *local_28;
  int local_24;
  undefined1 local_20 [4];
  float local_1c;
  float *local_18;
  float local_14;
  float local_10;
  float *local_c;
  float local_8;
  
  iVar10 = **(int **)(DAT_113f3a18 + 0x50);
  local_24 = param_1;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar4 = (int *)(**(code **)(iVar10 + 0x2c))(uVar3);
  if ((piVar4 != (int *)0x0) &&
     (local_48 = piVar4, cVar2 = FUN_103dbb30(4,&local_14), cVar2 != '\0')) {
    local_34 = local_14 * DAT_113c129c;
    local_30 = local_10 * DAT_113c129c;
    local_2c = (float)local_c * DAT_113c129c;
    FUN_10493070(&local_34);
    pfVar5 = (float *)(**(code **)(*piVar4 + 0x74))();
    local_14 = local_a4;
    local_10 = local_98;
    local_c = local_8c;
    pfVar12 = local_84;
    for (iVar10 = 0xc; iVar11 = local_24, iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar12 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar12 = pfVar12 + 1;
    }
    if (((((uint)local_a4 & 0x7f800000) != 0x7f800000) &&
        (((uint)local_10 & 0x7f800000) != 0x7f800000)) &&
       (((uint)local_c & 0x7f800000) != 0x7f800000)) {
      local_8 = local_84[1] * local_98 + local_84[0] * local_a4 + local_84[2] * (float)local_8c;
      local_1c = local_70 * local_98 + local_74 * local_a4 + local_6c * (float)local_8c;
      fVar17 = local_60 * local_98 + local_64 * local_a4 + local_5c * (float)local_8c;
      fVar14 = local_1c * local_1c + local_8 * local_8 + fVar17 * fVar17;
      if (fVar14 <= DAT_112fce4c) {
        local_14 = DAT_113cc048;
        local_10 = DAT_113cc04c;
        local_c = DAT_113cc050;
        local_18 = DAT_113cc050;
        local_1c = DAT_113cc04c;
        local_8 = DAT_113cc048;
      }
      else {
        auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar16._0_4_;
        fVar15 = (DAT_112fcaac - fVar15 * fVar14 * fVar15 * DAT_113c12b8) * fVar15;
        local_8 = local_8 * fVar15;
        local_1c = local_1c * fVar15;
        local_18 = (float *)(fVar17 * fVar15);
      }
      FUN_103f8050(2,&local_3c);
      FUN_103f8050(3,&local_44);
      local_40 = local_8 * local_3c;
      local_38 = local_1c * local_3c;
      local_28 = (int *)((float)local_18 * local_3c);
      pfVar5 = (float *)(**(code **)(*local_48 + 0x94))();
      local_34 = local_40 + *pfVar5;
      local_30 = pfVar5[1] + local_38;
      local_2c = pfVar5[2] + (float)local_28;
      cVar2 = FUN_10552e20(1,&local_54);
      if (cVar2 != '\0') {
        local_34 = local_54 + local_8 * local_3c;
        local_30 = local_50 + local_1c * local_3c;
        local_2c = local_4c + (float)local_18 * local_3c;
      }
      local_44 = local_44 - local_3c;
      fVar14 = -NAN;
      local_14 = local_8 * local_44;
      local_10 = local_1c * local_44;
      local_c = (float *)((float)local_18 * local_44);
      local_8 = DAT_113c12f4;
      FUN_10a5d660();
      FUN_103dbbb0(0,local_20);
      cVar2 = FUN_10a5d8d0(&DAT_1130a5e4);
      if (cVar2 == '\0') {
        pcVar18 = "flankwall";
        pcVar6 = (char *)FUN_10a5ec80();
        iVar10 = _stricmp(pcVar6,pcVar18);
        if (iVar10 == 0) {
          iVar10 = FUN_1052a700(&local_34,&local_14,1,0x40a,0x20000000,local_2a8,8,0,0,0,0,
                                "RayWorldIntersection(Action)",0,4);
          if (iVar10 == 0) {
            return 1;
          }
          fVar17 = 0.0;
          if (iVar10 < 1) {
            return 1;
          }
          pfVar5 = local_2a8;
          do {
            fVar15 = *pfVar5;
            if ((DAT_113c1280 < fVar15) && (fVar15 < local_8)) {
              local_8 = fVar15;
              fVar14 = fVar17;
            }
            fVar17 = (float)((int)fVar17 + 1);
            pfVar5 = pfVar5 + 0x10;
            iVar11 = local_24;
          } while ((int)fVar17 < iVar10);
        }
        else {
          pcVar18 = "topterrain";
          pcVar6 = (char *)FUN_10a5ec80();
          iVar10 = _stricmp(pcVar6,pcVar18);
          if (iVar10 == 0) {
            iVar10 = FUN_1052a700(&local_34,&local_14,1,0x40a,0x10000000,local_2a8,8,0,0,0,0,
                                  "RayWorldIntersection(Action)",0,4);
            if (iVar10 == 0) {
              return 1;
            }
            fVar17 = 0.0;
            if (iVar10 < 1) {
              return 1;
            }
            pfVar5 = local_2a8;
            do {
              fVar15 = *pfVar5;
              if ((DAT_113c1280 < fVar15) && (fVar15 < local_8)) {
                local_8 = fVar15;
                fVar14 = fVar17;
              }
              fVar17 = (float)((int)fVar17 + 1);
              pfVar5 = pfVar5 + 0x10;
              iVar11 = local_24;
            } while ((int)fVar17 < iVar10);
          }
          else {
            pcVar18 = "terrain";
            pcVar6 = (char *)FUN_10a5ec80();
            iVar10 = _stricmp(pcVar6,pcVar18);
            if (iVar10 == 0) {
              iVar10 = FUN_1052a700(&local_34,&local_14,0x101,0x40a,0x100000,local_2a8,8,0,0,0,0,
                                    "RayWorldIntersection(Action)",0,4);
              if (iVar10 == 0) {
                return 1;
              }
              if (iVar10 < 1) {
                return 1;
              }
              pfVar5 = local_2a8;
              fVar17 = 0.0;
              do {
                fVar15 = *pfVar5;
                if ((DAT_113c1280 < fVar15) && (fVar15 < local_8)) {
                  local_8 = fVar15;
                  fVar14 = fVar17;
                }
                fVar17 = (float)((int)fVar17 + 1);
                pfVar5 = pfVar5 + 0x10;
                iVar11 = local_24;
              } while ((int)fVar17 < iVar10);
            }
            else {
              local_38 = (float)FUN_1052a700(&local_34,&local_14,1,0x40a,0,local_2a8,8,0,0,0,0,
                                             "RayWorldIntersection(Action)",0,4);
              if (local_38 == 0.0) {
                return 1;
              }
              local_1c = 0.0;
              if ((int)local_38 < 1) {
                return 1;
              }
              local_18 = local_2a8;
              do {
                piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x34) + 0x298))();
                local_28 = (int *)(**(code **)(*piVar4 + 0x4c))((int)*(short *)(local_18 + 4),0);
                if (local_28 != (int *)0x0) {
                  pbVar7 = (byte *)FUN_10a5ec80();
                  pbVar8 = (byte *)(**(code **)(*local_28 + 0x10))();
                  do {
                    bVar1 = *pbVar8;
                    bVar13 = bVar1 < *pbVar7;
                    if (bVar1 != *pbVar7) {
LAB_105b38d0:
                      uVar9 = -(uint)bVar13 | 1;
                      goto LAB_105b38d5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar8[1];
                    bVar13 = bVar1 < pbVar7[1];
                    if (bVar1 != pbVar7[1]) goto LAB_105b38d0;
                    pbVar8 = pbVar8 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar1 != 0);
                  uVar9 = 0;
LAB_105b38d5:
                  if (((uVar9 == 0) && (fVar17 = *local_18, DAT_113c1280 < fVar17)) &&
                     (fVar17 < local_8)) {
                    fVar14 = local_1c;
                    local_8 = fVar17;
                  }
                }
                local_18 = local_18 + 0x10;
                local_1c = (float)((int)local_1c + 1);
                iVar11 = local_24;
              } while ((int)local_1c < (int)local_38);
            }
          }
        }
      }
      else {
        iVar10 = FUN_1052a700(&local_34,&local_14,1,0x40a,0x400000,local_2a8,8,0,0,0,0,
                              "RayWorldIntersection(Action)",0,4);
        if (iVar10 == 0) {
          return 1;
        }
        fVar17 = 0.0;
        if (iVar10 < 1) {
          return 1;
        }
        pfVar5 = local_2a8;
        do {
          fVar15 = *pfVar5;
          if ((DAT_113c1280 < fVar15) && (fVar15 < local_8)) {
            local_8 = fVar15;
            fVar14 = fVar17;
          }
          fVar17 = (float)((int)fVar17 + 1);
          pfVar5 = pfVar5 + 0x10;
        } while ((int)fVar17 < iVar10);
      }
      if (fVar14 != -NAN) {
        FUN_10551270(5,local_28c + (int)fVar14 * 0x40);
        piVar4 = *(int **)(iVar11 + 0x2c);
        local_28 = (int *)(local_2a8[(int)fVar14 * 0x10] - local_3c);
        if (((6 < (uint)(piVar4[1] - *piVar4 >> 2)) &&
            (0x18 < (int)(piVar4[4] - piVar4[3] & 0xfffffffcU))) &&
           (-1 < *(int *)(piVar4[3] + 0x18))) {
          FUN_103d8940(*(int *)(piVar4[3] + 0x18),&local_28);
          FUN_101c3510();
        }
        return 2;
      }
    }
  }
  return 1;
}

