// FUN_10cdc020 @ 10cdc020
// ramp offsets referenced: [468, 472, 548, 552]


/* [RE-AUTO c0] */

int __thiscall
FUN_10cdc020(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            float param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  float10 fVar15;
  float fVar16;
  undefined4 local_194;
  int local_190;
  undefined1 *local_18c;
  undefined1 local_188 [268];
  undefined1 local_7c [12];
  undefined4 local_70 [3];
  undefined4 local_64;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  byte local_15;
  int *local_14;
  undefined4 *local_10;
  int *local_c;
  uint local_8;
  
  if (*(char *)((int)param_1 + 0x331) == '\0') {
    return -1;
  }
  iVar5 = param_1[6] + 0xc;
  iVar7 = *(int *)(param_1[6] + 0x10);
  iVar13 = iVar5;
  if (iVar7 != 0) {
    do {
      if (*(uint *)(iVar7 + 0x10) < *param_2) {
        iVar10 = *(int *)(iVar7 + 0xc);
      }
      else {
        iVar10 = *(int *)(iVar7 + 8);
        iVar13 = iVar7;
      }
      iVar7 = iVar10;
    } while (iVar10 != 0);
    if (iVar13 == iVar5) goto LAB_10cdc07c;
    if (*param_2 < *(uint *)(iVar13 + 0x10)) {
      iVar13 = iVar5;
    }
  }
  if (iVar13 == iVar5) {
LAB_10cdc07c:
    param_1[0x6f] = 0;
    param_1[0x83] = 0x3f800000;
    param_1[0x79] = 0;
    param_1[0x70] = 0;
    param_1[0x84] = 0x3f800000;
    param_1[0x7a] = 0;
    param_1[0x71] = 0;
    param_1[0x85] = 0x3f800000;
    param_1[0x7b] = 0;
    param_1[0x72] = 0;
    param_1[0x86] = 0x3f800000;
    param_1[0x7c] = 0;
    param_1[0x73] = 0;
    param_1[0x87] = 0x3f800000;
    param_1[0x7d] = 0;
    param_1[0x74] = 0;
    param_1[0x88] = 0x3f800000;
    param_1[0x7e] = 0;
    param_1[0x75] = 0;
    param_1[0x89] = 0x3f800000;
    param_1[0x7f] = 0;
    param_1[0x76] = 0;
    param_1[0x8a] = 0x3f800000;
    param_1[0x80] = 0;
    param_1[0x77] = 0;
    param_1[0x8b] = 0x3f800000;
    param_1[0x81] = 0;
    param_1[0x78] = 0;
    param_1[0x8c] = 0x3f800000;
    param_1[0x82] = 0;
    return 0;
  }
  local_15 = *(byte *)(param_1 + 0x1a) & 1;
  bVar3 = local_15;
  if ((param_1[0x61] != 0) &&
     (piVar6 = (int *)(**(code **)(*DAT_1202f458 + 0x54))(param_1[0x61]), bVar3 = local_15,
     piVar6 != (int *)0x0)) {
    iVar7 = (**(code **)(*piVar6 + 0x200))();
    bVar3 = *(byte *)(iVar7 + 0x20) & 1;
  }
  local_1c = (int *)(uint)bVar3;
  local_28 = 0;
  if ((param_5 & 0x8000) != 0) {
    local_1c = (int *)0x1;
  }
  if ((param_5 & 0x10000) != 0) {
    local_1c = (int *)0x0;
  }
  local_2c = (uint)((char)local_1c == '\0');
  if ((param_5 & 0x100000) == 0) goto LAB_10cdc6f1;
  local_8 = local_2c * 0x10;
  local_30 = (int *)(local_8 + 0x8c + iVar13);
  if ((((*local_30 == 0) || (*(int *)(*local_30 + -8) == 0)) ||
      (cVar4 = (**(code **)(*param_1 + 0x1d0))(), cVar4 == '\0')) ||
     (*(int *)(DAT_120286b8 + 0x3c4) == 0)) goto LAB_10cdc6f1;
  local_14 = (int *)((param_5 & 0x400000 | 0x110000) >> 2);
  local_c = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(3);
  if (local_c == (int *)0x0) {
    local_c = (int *)(**(code **)(*(int *)param_1[3] + 0x158))(3);
  }
  cVar4 = (**(code **)(*param_1 + 0x11c))();
  if (((cVar4 != '\0') && (iVar7 = (**(code **)(*param_1 + 0x104))(), iVar7 != 0)) &&
     (local_c = (int *)(**(code **)(**(int **)(iVar7 + 0xc) + 0x150))(3), local_c == (int *)0x0)) {
    local_c = (int *)(**(code **)(**(int **)(iVar7 + 0xc) + 0x158))(3);
  }
  local_48 = (**(code **)(*(int *)param_1[3] + 4))();
  local_10 = (undefined4 *)0x1;
  iVar7 = FUN_10cbb800();
  if (iVar7 != 0) {
    piVar6 = (int *)FUN_10cbb800();
    local_44 = (**(code **)(*piVar6 + 4))();
    local_10 = (undefined4 *)0x2;
  }
  piVar6 = local_c;
  if (local_c == (int *)0x0) goto LAB_10cdc6f1;
  local_18c = local_188;
  local_188[0] = 0;
  local_194 = 0;
  local_190 = 0xff;
  FUN_10cdbe40(local_30,&local_194,param_5,0,0,0,0,0);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if ((char)local_1c != '\0') {
    local_3c = 0x3e99999a;
  }
  if (*(int *)(DAT_120286b8 + 0x3c0) == 0) {
    local_24 = 0;
    local_20 = (int *)&DAT_3f800000;
    local_1c = (int *)0x0;
    local_28 = (**(code **)(*piVar6 + 0x50))
                         (local_18c,&local_3c,&local_24,local_14,0x3f800000,0,0,0x10000000,&local_48
                          ,local_10,0);
    piVar6 = (int *)(**(code **)(*piVar6 + 0x3c))(local_28);
    if ((piVar6 != (int *)0x0) &&
       (fVar16 = *(float *)((local_2c + 8) * 0x10 + 0x14 + iVar13), 0.0 < fVar16)) {
      (**(code **)(*piVar6 + 0xac))(fVar16);
    }
  }
  else {
    piVar6 = (int *)0x0;
    if (*(char *)(local_8 + 0x98 + iVar13) == '\0') {
LAB_10cdc510:
      local_24 = 0;
      local_20 = (int *)&DAT_3f800000;
      local_1c = (int *)0x0;
      local_28 = (**(code **)(*local_c + 0x50))
                           (local_18c,&local_3c,&local_24,local_14,0x3f800000,0,0,0x10000000,
                            &local_48,local_10,0);
      piVar11 = (int *)(**(code **)(*local_c + 0x3c))(local_28);
      if ((piVar11 != (int *)0x0) &&
         (fVar16 = *(float *)((local_2c + 8) * 0x10 + 0x14 + iVar13), 0.0 < fVar16)) {
        (**(code **)(*piVar11 + 0xac))(fVar16);
      }
    }
    else {
      FUN_10cdef90(&local_1c,param_2);
      piVar6 = local_1c;
      if (local_1c == param_1 + 0x3a) {
        uVar8 = FUN_10cdf340();
        uVar8 = FUN_10cdf1d0(param_2,uVar8);
        FUN_10ce0430(&local_20,uVar8);
        FUN_10cbe100();
        FUN_10ab53d0(local_64);
        FUN_10cbe100();
        piVar6 = local_20;
      }
      piVar6 = piVar6 + local_2c * 3 + 5;
      if ((piVar6 == (int *)0x0) || (piVar6[1] == 0)) goto LAB_10cdc510;
      puVar9 = &DAT_11d9d32b;
      if ((undefined1 *)*piVar6 != (undefined1 *)0x0) {
        puVar9 = (undefined1 *)*piVar6;
      }
      cVar4 = FUN_10cde850(&local_194,puVar9);
      if (cVar4 != '\0') {
        FUN_10cde560(piVar6);
      }
      if (piVar6[1] == 0) goto LAB_10cdc510;
    }
    piVar11 = local_c;
    if (*(char *)(local_8 + 0x98 + iVar13) != '\0') {
      if (piVar6[1] == 0) {
        cVar4 = (**(code **)(*local_c + 0x58))(local_28,1);
        if (cVar4 != '\0') {
          piVar6[1] = local_28;
          FUN_10ab4370(local_18c);
          *(undefined1 *)(piVar6 + 2) = *(undefined1 *)(local_8 + 0x99 + iVar13);
        }
      }
      else {
        piVar6 = (int *)(**(code **)(*local_c + 0x3c))(piVar6[1]);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x20))(0x3f800000,1,1,piVar11,0);
        }
      }
    }
  }
  if ((*(int *)(DAT_1202e818 + 0x4c) != 0) && (0.0 < *(float *)(local_8 + 0x90 + iVar13))) {
    iVar7 = FUN_10cbb800();
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      piVar6 = (int *)FUN_10cbb800();
      iVar7 = (**(code **)(*piVar6 + 4))();
    }
    piVar6 = (int *)FUN_10cbb820();
    if (((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 0x25c))(), iVar5 != 0)) &&
       (*(int *)(iVar5 + 8) != 0)) {
      iVar7 = *(int *)(iVar5 + 8);
    }
    local_24 = 0;
    local_20 = (int *)0x0;
    local_1c = (int *)0x0;
    if (iVar7 == 0) {
      iVar7 = param_1[2];
    }
    uVar8 = (**(code **)(*(int *)param_1[3] + 200))
                      (local_7c,&local_24,*(undefined4 *)(local_8 + 0x90 + iVar13),0);
    FUN_10a6f460(0,5,iVar7,0,uVar8);
    (**(code **)(**(int **)(DAT_1202e818 + 0x4c) + 0x1a4))(local_70);
  }
  FUN_10c14bd0();
LAB_10cdc6f1:
  if ((param_5 & 0x80000) != 0) {
    local_18c = local_188;
    local_188[0] = 0;
    local_194 = 0;
    local_190 = 0xff;
    fVar15 = (float10)FUN_10c3f290();
    local_c = (int *)0x0;
    local_1c = (int *)(float)fVar15;
    local_8 = 1;
    do {
      piVar6 = local_c;
      if ((param_5 & local_8) != 0) {
        local_14 = (int *)((int)local_c * 3);
        iVar7 = (*(int *)(iVar13 + 0x18 + (int)local_c * 0xc) -
                *(int *)(iVar13 + 0x14 + (int)local_c * 0xc)) / 0x18;
        if (0 < iVar7) {
          local_10 = (undefined4 *)((int)((float)(iVar7 + -1) * (float)local_1c) * 0x18);
          piVar11 = (int *)((int)local_10 + *(int *)(iVar13 + 0x14 + (int)local_c * 0xc));
          iVar7 = *piVar11;
          if ((iVar7 != 0) && (*(int *)(iVar7 + -8) != 0)) {
            FUN_10cdbe40(piVar11,&local_194,param_5,0,0,0,0,0);
            puVar2 = local_10;
            if ((piVar6 == (int *)&DAT_00000004) || (piVar6 == (int *)&DAT_00000005)) {
              iVar7 = *(int *)(*(int *)(iVar13 + 0x14 + (int)piVar6 * 0xc) + (int)local_10);
              if ((iVar7 != 0) && (*(int *)(iVar7 + -8) != 0)) {
                local_30 = (int *)CONCAT31(local_30._1_3_,piVar6 == (int *)&DAT_00000005);
                local_14 = (int *)FUN_10cbb820();
                if (local_14 != (int *)0x0) {
                  cVar4 = (**(code **)(*param_1 + 0x114))();
                  if (cVar4 == '\0') {
LAB_10cdcafc:
                    puVar9 = *(undefined1 **)(param_1[6] + 0xc0);
                  }
                  else {
                    local_10 = (undefined4 *)(param_1[6] + 0x13c);
                    cVar4 = FUN_10ab5740();
                    if (cVar4 != '\0') goto LAB_10cdcafc;
                    puVar9 = (undefined1 *)*local_10;
                  }
                  puVar12 = &DAT_11d9d32b;
                  if (puVar9 != (undefined1 *)0x0) {
                    puVar12 = puVar9;
                  }
                  (**(code **)(*local_14 + 0x108))(local_18c,puVar12,local_30);
                }
              }
            }
            else if (piVar6 == (int *)&DAT_00000006) {
              cVar4 = FUN_10ab5740();
              if ((((cVar4 == '\0') && (iVar7 = FUN_10cbb820(), iVar7 != 0)) &&
                  (piVar11 = (int *)FUN_10a4e380(DAT_1202f3f0), piVar11 != (int *)0x0)) &&
                 (piVar11 != param_1)) {
                iVar7 = *(int *)(iVar13 + 0x5c) + (int)local_10;
                uVar8 = 0x21a0033;
                if (*(float *)(iVar7 + 0x10) != 0.0) {
                  uVar8 = 0x2180033;
                }
                FUN_10cdc020(iVar7,0,0,uVar8,0xbf800000);
              }
            }
            else {
              iVar7 = *(int *)(iVar13 + 0x14 + (int)local_14 * 4);
              cVar4 = FUN_10ab5740();
              if (cVar4 == '\0') {
                uVar8 = *(undefined4 *)((int)puVar2 + iVar7 + 0x10);
                if ((param_5 & 0x20000) != 0) {
                  uVar8 = 0;
                }
                fVar16 = param_6;
                if (param_6 <= 0.0) {
                  fVar16 = *(float *)((int)puVar2 + iVar7 + 0xc);
                }
                FUN_10cdcda0(local_18c,local_c,param_3,param_4,uVar8,fVar16,param_5,
                             *(undefined4 *)((int)puVar2 + iVar7 + 8));
              }
              if ((((*(byte *)(param_1 + 0x1a) & 1) == 0) && ((*(byte *)(param_1 + 0x18) & 8) == 0))
                 || ((local_c != (int *)0x0 || (cVar4 = FUN_10ab5740(), cVar4 != '\0')))) {
                piVar6 = local_c;
                if ((char)param_1[0x26] != '\0') {
                  uVar8 = FUN_10cbd730();
                  FUN_10cdf420(uVar8);
                  FUN_10ab53d0(local_70[0]);
                  piVar6 = local_c;
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x26) = 1;
                FUN_10cb2170((int)puVar2 + iVar7 + 4);
                *(undefined1 *)((int)param_1 + 0x99) = *(undefined1 *)((int)puVar2 + iVar7 + 0x14);
                *(undefined1 *)((int)param_1 + 0x9a) = *(undefined1 *)((int)puVar2 + iVar7 + 0x15);
                *(undefined1 *)((int)param_1 + 0x9b) = *(undefined1 *)((int)puVar2 + iVar7 + 0x16);
                *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)((int)puVar2 + iVar7 + 0x17);
                piVar6 = local_c;
              }
            }
          }
        }
      }
      local_c = (int *)((int)piVar6 + 1);
      local_8 = local_8 << 1 | (uint)((int)local_8 < 0);
    } while ((int)local_c < 10);
    if (local_18c != local_188) {
      DAT_12028730 = DAT_12028730 + (-1 - local_190);
      FUN_10c3d900(local_18c);
    }
  }
  if ((((param_5 & 0x2000000) != 0) && (iVar7 = *(int *)(iVar13 + 0xac + local_2c * 8), iVar7 != 0))
     && (*(int *)(iVar7 + -8) != 0)) {
    puVar9 = *(undefined1 **)(iVar13 + 0xb0 + local_2c * 8);
    puVar12 = &DAT_11d9d32b;
    if (puVar9 != (undefined1 *)0x0) {
      puVar12 = puVar9;
    }
    puVar9 = *(undefined1 **)(iVar13 + 0xac + local_2c * 8);
    puVar14 = &DAT_11d9d32b;
    if (puVar9 != (undefined1 *)0x0) {
      puVar14 = puVar9;
    }
    FUN_10cc7af0(local_2c,puVar14,puVar12,&DAT_1201fd04,&DAT_1201fd10,0x3f800000);
  }
  if (*(char *)(iVar13 + 0xbc) != '\0') {
    piVar6 = (int *)param_1[0x36];
    while (piVar6 != param_1 + 0x34) {
      iVar7 = (**(code **)(*DAT_1202f458 + 0x54))(piVar6[5]);
      if (iVar7 != 0) {
        FUN_10cdc020(param_2,param_3,param_4,param_5,param_6);
      }
      piVar11 = (int *)piVar6[3];
      if (piVar11 == (int *)0x0) {
        piVar11 = (int *)piVar6[1];
        if (piVar6 == (int *)piVar11[3]) {
          do {
            piVar6 = piVar11;
            piVar11 = (int *)piVar6[1];
          } while (piVar6 == (int *)piVar11[3]);
        }
        if ((int *)piVar6[3] != piVar11) {
          piVar6 = piVar11;
        }
      }
      else {
        for (piVar1 = (int *)piVar11[2]; piVar6 = piVar11, piVar1 != (int *)0x0;
            piVar1 = (int *)piVar1[2]) {
          piVar11 = piVar1;
        }
      }
    }
  }
  return local_28;
}

