// FUN_10fd61b0 @ 10fd61b0
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* WARNING: Type propagation algorithm not settling */
/* [RE-AUTO c0]
   calls: strchr, memmove, strncmp, atoi, sprintf, strncpy_s
   strings:
     ""ClimbLadder""
     ""OnEnter""
     ""OnLeave""
     ""CatchFish""
     ""NORMAL_IDLE""
     ""NORMAL_FISHING""
     ""Fishing""
     ""INVALID_STATE""
     ""OnDestroy""
     ""CrouchX"" */

void __thiscall FUN_10fd61b0(int param_1,int param_2)

{
  int *_Src;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float10 fVar8;
  byte *pbVar9;
  int iVar10;
  char cVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined4 *puVar17;
  int iVar18;
  size_t _Size;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar19;
  undefined4 extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int *piVar20;
  bool bVar21;
  float10 fVar22;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [12];
  undefined1 local_11c [12];
  char local_110 [32];
  char local_f0 [32];
  float local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [12];
  char local_94 [20];
  undefined1 local_80 [4];
  undefined1 local_7c [12];
  int *local_70;
  undefined1 local_61;
  undefined8 local_60;
  byte *local_58;
  float *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  code *local_48;
  undefined4 *local_44;
  undefined1 *local_40;
  float local_3c [2];
  undefined4 **local_34;
  byte *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  byte *local_18;
  char *local_14;
  
  piVar20 = (int *)(param_2 + 8);
  local_70 = piVar20;
  local_1c = param_1;
  if (((char *)*piVar20 == (char *)0x0) ||
     (pcVar12 = strchr((char *)*piVar20,0x40), pcVar12 == (char *)0x0)) {
    local_48 = (code *)0xffffffff;
  }
  else {
    local_48 = (code *)(pcVar12 + -*piVar20);
  }
  FUN_10a821e0(&local_30,0,local_48);
  pbVar9 = local_30;
  pcVar12 = "ClimbLadder";
  pbVar13 = local_30;
  do {
    bVar7 = *pbVar13;
    bVar21 = bVar7 < (byte)*pcVar12;
    if (bVar7 != *pcVar12) {
LAB_10fd6234:
      uVar14 = -(uint)bVar21 | 1;
      goto LAB_10fd6239;
    }
    if (bVar7 == 0) break;
    bVar7 = pbVar13[1];
    bVar21 = bVar7 < (byte)pcVar12[1];
    if (bVar7 != pcVar12[1]) goto LAB_10fd6234;
    pbVar13 = pbVar13 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar7 != 0);
  uVar14 = 0;
LAB_10fd6239:
  if (uVar14 == 0) {
    pcVar12 = "OnEnter";
    pbVar13 = *(byte **)(param_2 + 0x10);
    do {
      bVar7 = *pbVar13;
      bVar21 = bVar7 < (byte)*pcVar12;
      if (bVar7 != *pcVar12) {
LAB_10fd6270:
        uVar14 = -(uint)bVar21 | 1;
        goto LAB_10fd6275;
      }
      if (bVar7 == 0) break;
      bVar7 = pbVar13[1];
      bVar21 = bVar7 < (byte)pcVar12[1];
      if (bVar7 != pcVar12[1]) goto LAB_10fd6270;
      pbVar13 = pbVar13 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar7 != 0);
    uVar14 = 0;
LAB_10fd6275:
    if (uVar14 == 0) {
      puVar17 = *(undefined4 **)(param_1 + 0x110);
      local_48 = CPlayerAnim__TriggerQuestSignal;
      if (puVar17 == *(undefined4 **)(param_1 + 0x114)) {
        FUN_108716d0(puVar17,&local_48,&local_61,1,1);
      }
      else {
        *puVar17 = CPlayerAnim__TriggerQuestSignal;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
      }
    }
    pcVar12 = "OnLeave";
    pbVar13 = *(byte **)(param_2 + 0x10);
    do {
      bVar7 = *pbVar13;
      bVar21 = bVar7 < (byte)*pcVar12;
      if (bVar7 != *pcVar12) {
LAB_10fd62e0:
        uVar14 = -(uint)bVar21 | 1;
        goto LAB_10fd62e5;
      }
      if (bVar7 == 0) break;
      bVar7 = pbVar13[1];
      bVar21 = bVar7 < (byte)pcVar12[1];
      if (bVar7 != pcVar12[1]) goto LAB_10fd62e0;
      pbVar13 = pbVar13 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar7 != 0);
    uVar14 = 0;
LAB_10fd62e5:
    if (uVar14 == 0) {
      for (piVar20 = *(int **)(param_1 + 0x10c); piVar20 != *(int **)(param_1 + 0x110);
          piVar20 = piVar20 + 1) {
        if ((code *)*piVar20 == CPlayerAnim__TriggerQuestSignal) {
          _Src = piVar20 + 1;
          if ((_Src != *(int **)(param_1 + 0x110)) &&
             (_Size = (int)*(int **)(param_1 + 0x110) - (int)_Src, _Size != 0)) {
            memmove(piVar20,_Src,_Size);
          }
          *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + -4;
          (**(code **)(**(int **)(param_1 + 0x100) + 0x228))();
          break;
        }
      }
    }
  }
  else {
    pcVar12 = "CatchFish";
    pbVar13 = local_30;
    do {
      bVar7 = *pbVar13;
      bVar21 = bVar7 < (byte)*pcVar12;
      if (bVar7 != *pcVar12) {
LAB_10fd6373:
        uVar14 = -(uint)bVar21 | 1;
        goto LAB_10fd6378;
      }
      if (bVar7 == 0) break;
      bVar7 = pbVar13[1];
      bVar21 = bVar7 < (byte)pcVar12[1];
      if (bVar7 != pcVar12[1]) goto LAB_10fd6373;
      pbVar13 = pbVar13 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar7 != 0);
    uVar14 = 0;
LAB_10fd6378:
    if (uVar14 == 0) {
      CInfoRecord__GetModelString("NORMAL_IDLE",pcVar12);
      local_18 = (byte *)FUN_10fb8080();
      if (local_18 != (byte *)0x0) {
        local_1c = 0x18;
        cVar11 = FUN_10f5c510(&local_1c,1);
        if (cVar11 == '\x01') {
          local_14 = (char *)(param_2 + 0x10);
          cVar11 = FUN_10a675d0(local_14,"OnEnter");
          if (cVar11 == '\0') {
            cVar11 = FUN_10a675d0(local_14,"OnLeave");
            if (cVar11 != '\0') {
              FUN_1083ac30("INVALID_STATE");
              FUN_1083ac30(&DAT_11d9d32b);
              FUN_1083ac30(&DAT_11d9d32b);
              *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x15bc) = 0;
              *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x15c4) = 0;
            }
          }
          else {
            FUN_1083ac30("NORMAL_FISHING");
            FUN_10a72410(&local_30);
            FUN_1083ac30("Fishing");
            *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x15bc) = *(undefined4 *)(param_2 + 0x20);
            *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x15c4) = *(undefined4 *)(param_2 + 4);
            *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x15c0) = *(undefined4 *)(param_2 + 0x24);
          }
          cVar11 = FUN_10a675d0(local_14,"OnDestroy");
          if (cVar11 != '\0') {
            FUN_1083ac30("INVALID_STATE");
            FUN_1083ac30(&DAT_11d9d32b);
            FUN_1083ac30(&DAT_11d9d32b);
            *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x15bc) = 0;
            *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x15c4) = 0;
          }
        }
      }
    }
    else {
      pcVar12 = "@@Crouch";
      pbVar13 = local_30;
      do {
        pcVar12 = pcVar12 + 2;
        bVar7 = *pbVar13;
        bVar21 = bVar7 < (byte)*pcVar12;
        if (bVar7 != *pcVar12) {
LAB_10fd6550:
          uVar14 = -(uint)bVar21 | 1;
          goto LAB_10fd6555;
        }
        if (bVar7 == 0) break;
        bVar7 = pbVar13[1];
        bVar21 = bVar7 < (byte)pcVar12[1];
        if (bVar7 != pcVar12[1]) goto LAB_10fd6550;
        pbVar13 = pbVar13 + 2;
      } while (bVar7 != 0);
      uVar14 = 0;
LAB_10fd6555:
      if (uVar14 == 0) {
        local_14 = (char *)(param_2 + 0x10);
        cVar11 = FUN_10a675d0(local_14,"OnEnter");
        if (cVar11 == '\0') {
          cVar11 = FUN_10a675d0(local_14,"OnLeave");
          if ((cVar11 != '\0') &&
             (cVar11 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))(), cVar11 != '\0')) {
            FUN_10ef9ba0(1);
            FUN_10ef9bc0(0);
          }
        }
        else {
          cVar11 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))();
          if (cVar11 != '\0') {
            FUN_10ef9ba0(0);
            FUN_10ef9bc0(1);
          }
        }
      }
      else {
        iVar18 = strncmp("CrouchX",(char *)local_30,7);
        if (iVar18 == 0) {
          local_14 = (char *)atoi((char *)(pbVar9 + 7));
          local_20 = param_2 + 0x10;
          cVar11 = FUN_10a675d0(local_20,"OnEnter");
          if (cVar11 == '\0') {
            cVar11 = FUN_10a675d0(local_20,"OnLeave");
            if ((cVar11 != '\0') &&
               (cVar11 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))(), cVar11 != '\0')) {
              FUN_10ef9ba0(1);
              FUN_10ef9bc0(0);
              CInfoRecord__GetModelString("CROUCH_RUN",extraout_ECX_03);
              local_20 = FUN_10fb8080();
              iVar18 = extraout_ECX_04;
              if (local_20 != 0) {
                local_18 = (byte *)0x1e;
                cVar11 = FUN_10f5c510(&local_18,1);
                iVar10 = local_20;
                iVar18 = extraout_ECX_05;
                if (cVar11 == '\x01') {
                  *(undefined1 *)(local_20 + 0x204) = 0;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar1 = (float)fVar8;
                  fVar2 = (float)fVar22;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar3 = (float)fVar8;
                  fVar4 = (float)fVar22;
                  local_44 = &local_2c;
                  local_20 = 0;
                  local_14 = local_94;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar5 = (float)fVar8;
                  fVar6 = (float)fVar22;
                  *(float *)(iVar10 + 0x208) = fVar5 * fVar3 * fVar2 - fVar6 * fVar4 * fVar1;
                  *(float *)(iVar10 + 0x214) = fVar4 * fVar2 * fVar6 + fVar3 * fVar1 * fVar5;
                  *(float *)(iVar10 + 0x20c) = fVar5 * fVar4 * fVar1 + fVar6 * fVar3 * fVar2;
                  *(float *)(iVar10 + 0x210) = fVar6 * fVar3 * fVar1 - fVar5 * fVar4 * fVar2;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  local_50 = (undefined1 *)(float)fVar8;
                  fVar1 = (float)fVar22;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar2 = (float)fVar8;
                  fVar3 = (float)fVar22;
                  local_34 = &local_24;
                  local_2c = 0;
                  local_40 = local_a0;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar4 = (float)fVar8;
                  fVar5 = (float)fVar22;
                  local_24 = (undefined4 *)(fVar3 * fVar1 * fVar5 + fVar2 * (float)local_50 * fVar4)
                  ;
                  *(float *)(iVar10 + 0x218) =
                       fVar4 * fVar2 * fVar1 - fVar5 * fVar3 * (float)local_50;
                  *(undefined4 **)(iVar10 + 0x224) = local_24;
                  *(float *)(iVar10 + 0x21c) =
                       fVar4 * fVar3 * (float)local_50 + fVar5 * fVar2 * fVar1;
                  *(float *)(iVar10 + 0x220) =
                       fVar5 * fVar2 * (float)local_50 - fVar4 * fVar3 * fVar1;
                  iVar18 = iVar10;
                }
              }
              CInfoRecord__GetModelString("CROUCH_IDLE",iVar18);
              local_24 = (undefined4 *)FUN_10fb8080();
              if (local_24 != (undefined4 *)0x0) {
                local_3c[1] = 3.50325e-44;
                cVar11 = FUN_10f5c510(local_3c + 1,1);
                if (cVar11 == '\x01') {
                  *(undefined1 *)(local_24 + 0x81) = 0;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar1 = (float)fVar8;
                  fVar2 = (float)fVar22;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar3 = (float)fVar8;
                  fVar4 = (float)fVar22;
                  local_3c[1] = 0.0;
                  local_50 = local_7c;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar5 = (float)fVar8;
                  fVar6 = (float)fVar22;
                  local_24[0x82] = fVar5 * fVar3 * fVar2 - fVar6 * fVar4 * fVar1;
                  local_24[0x85] = fVar4 * fVar2 * fVar6 + fVar3 * fVar1 * fVar5;
                  local_24[0x83] = fVar1 * fVar5 * fVar4 + fVar2 * fVar6 * fVar3;
                  local_24[0x84] = fVar1 * fVar6 * fVar3 - fVar2 * fVar5 * fVar4;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar1 = (float)fVar8;
                  fVar2 = (float)fVar22;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar3 = (float)fVar8;
                  fVar4 = (float)fVar22;
                  local_54 = local_3c;
                  local_28 = 0;
                  local_4c = local_80;
                  fVar8 = (float10)fcos((float10)0.0);
                  fVar22 = (float10)fsin((float10)0.0);
                  fVar5 = (float)fVar8;
                  fVar6 = (float)fVar22;
                  local_3c[0] = fVar4 * fVar2 * fVar6 + fVar3 * fVar1 * fVar5;
                  local_24[0x86] = fVar5 * fVar3 * fVar2 - fVar6 * fVar4 * fVar1;
                  local_24[0x89] = local_3c[0];
                  local_24[0x87] = fVar1 * fVar5 * fVar4 + fVar2 * fVar6 * fVar3;
                  local_24[0x88] = fVar1 * fVar6 * fVar3 - fVar2 * fVar5 * fVar4;
                  local_24 = &local_28;
                }
              }
              local_ac = 0;
              local_a8 = 0;
              local_b0 = 2;
              if (*(int *)(param_1 + 0xc0) != 0) {
                FUN_10f59370(&local_b0);
              }
            }
          }
          else {
            cVar11 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))();
            if (cVar11 != '\0') {
              FUN_10ef9ba0(0);
              FUN_10ef9bc0(1);
              sprintf(local_110,"CrouchTag%d-1",local_14);
              local_18 = (byte *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x38))(local_110);
              local_d0 = 0.0;
              uStack_cc = 0;
              uStack_c8 = 0;
              uStack_c4 = 0;
              local_c0 = 0.0;
              if (local_18 != (byte *)0x0) {
                piVar20 = *(int **)(*(int *)(param_1 + 0x100) + 0xc);
                puVar15 = (undefined8 *)(**(code **)(*(int *)local_18 + 200))(local_128);
                local_60 = *puVar15;
                local_58 = *(byte **)(puVar15 + 1);
                pfVar16 = (float *)(**(code **)(*piVar20 + 200))(&uStack_bc);
                local_c0 = SQRT((*pfVar16 - (float)local_60) * (*pfVar16 - (float)local_60) +
                                (pfVar16[1] - local_60._4_4_) * (pfVar16[1] - local_60._4_4_) +
                                (pfVar16[2] - (float)local_58) * (pfVar16[2] - (float)local_58));
                uStack_bc = 0;
                uStack_b8 = 0;
                uStack_b4 = 0;
                param_1 = local_1c;
              }
              sprintf(local_110,"CrouchTag%d-2",local_14);
              local_30 = (byte *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x38))(local_110);
              uVar19 = extraout_ECX;
              if (local_30 != (byte *)0x0) {
                piVar20 = *(int **)(*(int *)(param_1 + 0x100) + 0xc);
                puVar15 = (undefined8 *)(**(code **)(*(int *)local_30 + 200))(local_11c);
                local_60 = *puVar15;
                local_58 = *(byte **)(puVar15 + 1);
                pfVar16 = (float *)(**(code **)(*piVar20 + 200))(&uStack_cc);
                local_d0 = SQRT((*pfVar16 - (float)local_60) * (*pfVar16 - (float)local_60) +
                                (pfVar16[1] - local_60._4_4_) * (pfVar16[1] - local_60._4_4_) +
                                (pfVar16[2] - (float)local_58) * (pfVar16[2] - (float)local_58));
                uStack_cc = 0;
                uStack_c8 = 0;
                uStack_c4 = 0;
                uVar19 = extraout_ECX_00;
              }
              param_1 = local_1c;
              if ((local_18 != (byte *)0x0) && (local_30 != (byte *)0x0)) {
                CInfoRecord__GetModelString("CROUCH_RUN",uVar19);
                param_1 = local_1c;
                local_1c = FUN_10fb8080();
                uVar19 = extraout_ECX_01;
                if (local_1c != 0) {
                  local_44 = (undefined4 *)0x1e;
                  cVar11 = FUN_10f5c510(&local_44,1);
                  uVar19 = extraout_ECX_02;
                  if (cVar11 == '\x01') {
                    *(undefined1 *)(local_1c + 0x204) = 1;
                    puVar17 = (undefined4 *)(**(code **)(*(int *)local_18 + 0xd0))(local_138);
                    *(undefined4 *)(local_1c + 0x208) = *puVar17;
                    *(undefined4 *)(local_1c + 0x20c) = puVar17[1];
                    *(undefined4 *)(local_1c + 0x210) = puVar17[2];
                    *(undefined4 *)(local_1c + 0x214) = puVar17[3];
                    puVar17 = (undefined4 *)(**(code **)(*(int *)local_30 + 0xd0))(local_148);
                    *(undefined4 *)(local_1c + 0x218) = *puVar17;
                    *(undefined4 *)(local_1c + 0x21c) = puVar17[1];
                    uVar19 = puVar17[2];
                    *(undefined4 *)(local_1c + 0x220) = uVar19;
                    *(undefined4 *)(local_1c + 0x224) = puVar17[3];
                  }
                }
                CInfoRecord__GetModelString("CROUCH_IDLE",uVar19);
                local_1c = FUN_10fb8080();
                if (local_1c != 0) {
                  local_20 = 0x19;
                  cVar11 = FUN_10f5c510(&local_20,1);
                  if (cVar11 == '\x01') {
                    *(undefined1 *)(local_1c + 0x204) = 1;
                    puVar17 = (undefined4 *)(**(code **)(*(int *)local_18 + 0xd0))(local_168);
                    *(undefined4 *)(local_1c + 0x208) = *puVar17;
                    *(undefined4 *)(local_1c + 0x20c) = puVar17[1];
                    *(undefined4 *)(local_1c + 0x210) = puVar17[2];
                    *(undefined4 *)(local_1c + 0x214) = puVar17[3];
                    puVar17 = (undefined4 *)(**(code **)(*(int *)local_30 + 0xd0))(local_158);
                    *(undefined4 *)(local_1c + 0x218) = *puVar17;
                    *(undefined4 *)(local_1c + 0x21c) = puVar17[1];
                    *(undefined4 *)(local_1c + 0x220) = puVar17[2];
                    *(undefined4 *)(local_1c + 0x224) = puVar17[3];
                  }
                }
                local_60 = CONCAT44(local_14,1);
                local_58 = local_18;
                if (local_d0 < local_c0) {
                  local_58 = local_30;
                }
                if (*(int *)(param_1 + 0xc0) != 0) {
                  FUN_10f59370(&local_60);
                }
              }
            }
          }
        }
        else {
          cVar11 = FUN_10a675d0(&local_30,"CrouchUnholstered");
          if (cVar11 == '\0') {
            cVar11 = FUN_10a675d0(&local_30,"LevelTeleport");
            if ((cVar11 != '\0') &&
               (cVar11 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))(), cVar11 != '\0')) {
              local_3c[0] = (float)(param_2 + 0x10);
              cVar11 = FUN_10a675d0(local_3c[0],"OnEnter");
              if (cVar11 == '\0') {
                cVar11 = FUN_10a675d0(local_3c[0],"OnLeave");
                if (cVar11 != '\0') {
                  FUN_10efa240(1);
                  FUN_10efa260(1);
                }
              }
              else {
                FUN_10efa240(0);
                FUN_10efa260(0);
              }
            }
          }
          else {
            local_3c[0] = (float)(param_2 + 0x10);
            cVar11 = FUN_10a675d0(local_3c[0],"OnEnter");
            if (cVar11 == '\0') {
              cVar11 = FUN_10a675d0(local_3c[0],"OnLeave");
              if ((cVar11 != '\0') &&
                 (cVar11 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))(), cVar11 != '\0')) {
                FUN_10ef9bc0(0);
              }
            }
            else {
              cVar11 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))();
              if (cVar11 != '\0') {
                FUN_10ef9bc0(1);
              }
            }
          }
        }
      }
    }
    if ((local_48 != (code *)0xffffffff) && (local_48 + 1 < *(code **)(*local_70 + -8))) {
      local_f0[0] = '\0';
      local_f0[0x11] = '\0';
      local_f0[0x12] = '\0';
      local_f0[0x13] = '\0';
      local_f0[0x14] = '\0';
      local_f0[0x15] = '\0';
      local_f0[0x16] = '\0';
      local_f0[0x17] = '\0';
      local_f0[0x18] = '\0';
      local_f0[1] = '\0';
      local_f0[2] = '\0';
      local_f0[3] = '\0';
      local_f0[4] = '\0';
      local_f0[5] = '\0';
      local_f0[6] = '\0';
      local_f0[7] = '\0';
      local_f0[8] = '\0';
      local_f0[9] = '\0';
      local_f0[10] = '\0';
      local_f0[0xb] = '\0';
      local_f0[0xc] = '\0';
      local_f0[0xd] = '\0';
      local_f0[0xe] = '\0';
      local_f0[0xf] = '\0';
      local_f0[0x10] = '\0';
      local_f0[0x19] = '\0';
      local_f0[0x1a] = '\0';
      local_f0[0x1b] = '\0';
      local_f0[0x1c] = '\0';
      local_f0[0x1d] = '\0';
      local_f0[0x1e] = '\0';
      local_f0[0x1f] = 0;
      FUN_10a821e0(&local_14,local_48 + 1,0xffffffff);
      strncpy_s(local_f0,0x20,local_14,*(rsize_t *)(local_14 + -8));
      local_48 = (code *)(param_2 + 0x10);
      cVar11 = FUN_10a675d0(local_48,"OnEnter");
      if (((cVar11 != '\0') ||
          ((cVar11 = FUN_10a675d0(local_48,"OnLeave"), cVar11 != '\0' ||
           (cVar11 = FUN_10a675d0(local_48,"OnDestroy"), cVar11 != '\0')))) &&
         (cVar11 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))(), cVar11 != '\0')) {
        piVar20 = (int *)FUN_10ba9b00();
        (**(code **)(*piVar20 + 0x318))();
      }
      FUN_104f6f60();
    }
  }
  pbVar13 = pbVar9 + -0xc;
  if ((-1 < *(int *)pbVar13) && (iVar18 = FUN_10c3dad0(pbVar13), iVar18 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar9 + -4));
    FUN_10c3d900(pbVar13);
  }
  return;
}

