// CPlayerWeaponFSM::TryRequestStateChange @ 10fd05f0  (4671 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 7, 12, 16, 19, 20, 24, 27, 28]


/* [RE-R1]
   calls: libm_sse2_sqrt_precise, memmove
   strings:
     ""sm_ignoreSkill""
     ""COMBAT_PL05_AIM""
     ""COMBAT_PL05_COMMONSHOOT""
     ""COMBAT_PL05_CHARGE""
     ""COMBAT_PL05_HEAVYSHOOT""
     ""COMBAT_PL05_HEAVYSHOOTS""
     ""INTERACT_LOOP_DANCE""
     ""DODGE_FRONT"" */

undefined1 __thiscall
CPlayerWeaponFSM__TryRequestStateChange
          (int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
          undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  int *_Src;
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  int **ppiVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int *unaff_ESI;
  int **ppiVar18;
  int *unaff_EDI;
  byte *pbVar19;
  int *piVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  int *piStack_13c;
  undefined4 uStack_138;
  int *piStack_134;
  undefined1 auStack_130 [4];
  int *piStack_12c;
  int *piVar26;
  int **ppiStack_10c;
  int *piStack_100;
  int *piStack_fc;
  undefined4 local_f8;
  int *piStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  int *piStack_dc;
  undefined8 uStack_d8;
  int *piStack_d0;
  int *piStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int *piStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int aiStack_80 [2];
  undefined1 auStack_78 [16];
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  
  local_f8 = param_1;
  FUN_116db560();
  uStack_84 = FUN_116db500();
  if ((char)param_1[0x42] != '\0') {
    return 0;
  }
  ppiStack_10c = &piStack_a8;
  ppiVar18 = (int **)(param_1 + 0x34);
  piStack_a8 = param_2;
  piStack_a4 = param_3;
  piStack_a0 = param_4;
  piStack_9c = param_5;
  ppiVar5 = (int **)FUN_10fde0a0();
  if ((ppiVar5 == ppiVar18) || (local_f8 = ppiVar5[8], local_f8 == (int *)0x0)) {
    FUN_10f19240();
    return 0;
  }
  aiStack_80[0] = local_f8[0x14];
  puVar6 = (undefined4 *)FUN_10f57110();
  iStack_88 = FUN_10f59500();
  puStack_68 = auStack_78;
  puStack_50 = auStack_60;
  auStack_78[0] = 0;
  auStack_60[0] = 0;
  uStack_48 = 0;
  aiStack_80[0] = -1;
  aiStack_80[1] = 0xffffffff;
  puStack_64 = puStack_68;
  puStack_4c = puStack_50;
  if (param_6 == (int *)0x0) {
    if ((DAT_1203d0e4 & 1) == 0) {
      DAT_1203d0e4 = DAT_1203d0e4 | 1;
      DAT_1203d0e0 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    }
    pbVar19 = &DAT_11d9e064;
    pbVar7 = (byte *)(**(code **)(*DAT_1203d0e0 + 0x10))();
    do {
      bVar1 = *pbVar7;
      bVar21 = bVar1 < *pbVar19;
      if (bVar1 != *pbVar19) {
LAB_10fd0750:
        uVar8 = -(uint)bVar21 | 1;
        goto LAB_10fd0755;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar21 = bVar1 < pbVar19[1];
      if (bVar1 != pbVar19[1]) goto LAB_10fd0750;
      pbVar7 = pbVar7 + 2;
      pbVar19 = pbVar19 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_10fd0755:
    if (uVar8 == 0) goto LAB_10fd08b4;
    if ((iStack_88 == 0) ||
       (piStack_f0 = *(int **)(iStack_88 + 0x14), (int *)0x7fffffff < piStack_f0)) {
      piStack_f0 = (int *)piStack_fc[0x71];
    }
    if (((int)piStack_f0 < 1) ||
       (iVar9 = (**(code **)(*(int *)piStack_100[0x40] + 800))(), iVar9 == 0)) goto LAB_10fd08b4;
    piStack_f4 = *(int **)(iVar9 + 0x14);
    uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffff00000000);
    ppiStack_10c = (int **)(**(code **)(*piStack_f4 + 0x24))();
    cVar3 = (**(code **)(*(int *)piStack_100[0x40] + 0x1cc))();
    if (cVar3 != '\x01') {
LAB_10fd0808:
      if ((unaff_ESI != (int *)0x0) &&
         (((cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))(), cVar3 != '\0' &&
           ((char)unaff_ESI[0xb] != '\0')) ||
          ((cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))(), cVar3 == '\0' &&
           ((char)unaff_ESI[0xb] == '\0')))))) {
        (**(code **)(*piStack_f4 + 0x50))();
        param_6 = aiStack_80;
      }
      goto LAB_10fd08b4;
    }
    if (unaff_ESI == (int *)0x0) {
      FUN_116cd730();
      iVar9 = CSkillInfo__FindBySkillId();
      if (((iVar9 != 0) && (0 < iStack_8c)) && (cVar3 = FUN_116cdb40(), cVar3 != '\0')) {
        uVar4 = 0;
        goto LAB_10fd17d0;
      }
      goto LAB_10fd08b4;
    }
    if ((iStack_8c < 1) || (cVar3 = FUN_116cdb40(), cVar3 == '\0')) goto LAB_10fd0808;
LAB_10fd1423:
    uVar4 = 0;
    goto LAB_10fd17d0;
  }
LAB_10fd08b4:
  if ((((uint)param_2 & (uint)param_3) != 0xffffffff) ||
     (((uint)param_4 & (uint)param_5) != 0xffffffff)) {
    if (piStack_100[0x30] != 0) {
      uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,piStack_fc[0x14]);
      FUN_10f57110();
      CInfoRecord__GetModelString();
      FUN_10f58fc0();
      if (((*(char *)(piStack_100[0x30] + 0x1af) != '\0') &&
          (iVar9 = (**(code **)(*(int *)piStack_100[0x40] + 800))(), iVar9 != 0)) &&
         (cVar3 = FUN_10f5ca30(), cVar3 == '\0')) {
        FUN_10fdb7c0();
      }
    }
    cVar3 = FUN_10f5b980();
    if ((cVar3 != '\0') && (*(int *)(DAT_120286b8 + 0x538) != 0)) {
      iVar9 = (**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x138))();
      piStack_b0 = *(int **)(iVar9 + 0x24);
      piStack_d0 = *(int **)(iVar9 + 4);
      piStack_b8 = *(int **)(iVar9 + 0x14);
      fStack_90 = 0.70710677;
      fStack_98 = 0.0;
      fStack_94 = 0.0;
      uStack_c0 = (double)CONCAT44(piStack_b8,piStack_b8);
      uStack_d8 = (double)CONCAT44(piStack_d0,piStack_d0);
      piStack_9c = (int *)(float)((double)((float)piStack_b0 + (float)piStack_b0) * DAT_11de9950);
      dVar22 = (double)((float)piStack_b8 * (float)piStack_b8 +
                       (float)piStack_d0 * (float)piStack_d0);
      piStack_cc = piStack_d0;
      piStack_b4 = piStack_b8;
      piStack_ac = piStack_b0;
      piStack_a8 = piStack_b0;
      piStack_a4 = piStack_b0;
      libm_sse2_sqrt_precise();
      dVar22 = (double)(float)dVar22;
      if (DAT_11de98e0 < dVar22) {
        uStack_c8 = (double)(float)(int *)uStack_d8 / dVar22;
        uStack_d8 = dVar22 + DAT_11de9978;
        uStack_e8 = (double)(float)uStack_c0 / dVar22 + DAT_11de9978;
        dVar22 = uStack_e8 * uStack_e8 + uStack_c8 * uStack_c8;
        libm_sse2_sqrt_precise();
        dVar23 = (double)((float)piStack_b0 * (float)piStack_b0) + uStack_d8 * uStack_d8;
        uStack_c0 = dVar22;
        libm_sse2_sqrt_precise();
        dVar24 = 0.0;
        dVar22 = DAT_11cc06d8;
        if (DAT_11de98e0 < uStack_c0) {
          dVar22 = (double)((ulonglong)(uStack_c8 / uStack_c0) ^ DAT_11de9c80);
          dVar24 = uStack_e8 / uStack_c0;
        }
        fStack_90 = (float)((uStack_d8 / dVar23) * dVar24);
        piStack_9c = (int *)(float)(((double)(float)piStack_b0 / dVar23) * dVar24);
        fStack_98 = (float)(((double)(float)piStack_b0 / dVar23) * dVar22);
        fStack_94 = (float)((uStack_d8 / dVar23) * dVar22);
      }
      (**(code **)(**(int **)(piStack_100[0x40] + 0xc) + 0xb0))();
    }
    FUN_10fd9190();
    cVar3 = (**(code **)(*(int *)piStack_100[0x40] + 0x228))();
    piVar13 = piStack_100;
    if (cVar3 != '\0') {
      piVar20 = (int *)piStack_100[0x89];
      local_f8 = piStack_100 + 0x89;
      if ((piVar20 != (int *)piStack_100[0x8a]) &&
         (unaff_EDI = piVar20, piVar20 != (int *)piStack_100[0x8a])) {
        do {
          piStack_b4 = param_2;
          piStack_b0 = param_3;
          piStack_ac = param_4;
          piStack_a8 = param_5;
          ppiVar5 = (int **)FUN_10fde0a0();
          if (ppiVar5 == ppiVar18) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = ppiVar5[8];
          }
          piStack_d0 = (int *)piVar13[0x14];
          iVar9 = FUN_10f57110();
          iVar10 = FUN_10f57110();
          piVar13 = unaff_ESI;
          unaff_EDI = piVar20;
          if (iVar9 == iVar10) break;
          if (piVar20[1] != 0) {
            FUN_10f57110();
            cVar3 = (*(code *)piVar20[1])();
            if (cVar3 != '\0') {
              piStack_12c = (int *)FUN_10f57110();
              auStack_130 = (undefined1  [4])0x10fd0c12;
              CInfoRecord__GetModelString();
              auStack_130 = (undefined1  [4])0x10fd0c1d;
              cVar3 = FUN_10fd7800();
              piVar13 = piVar20;
              if (cVar3 != '\0') {
                if (piVar20[2] != 0) {
                  FUN_10c3d5d0();
                }
                FUN_10febb90();
                uVar4 = 0;
                goto LAB_10fd17d0;
              }
            }
          }
          piVar20 = piVar20 + 3;
          unaff_EDI = piVar20;
        } while (piVar20 != (int *)piVar13[0x8a]);
      }
    }
    cVar3 = (**(code **)(*(int *)piVar13[0x40] + 0x228))();
    if ((cVar3 != '\0') &&
       (piStack_f4 = (int *)FUN_10f19250(), piVar15 = param_5, piVar20 = param_4,
       piStack_f4 != (int *)0x0)) {
      piVar26 = param_2;
      piVar16 = param_3;
      cVar3 = FUN_10fd79f0();
      if (cVar3 == '\0') {
        unaff_EDI = (int *)piVar13[0x30];
        piStack_134 = param_2;
        auStack_130 = (undefined1  [4])param_3;
        piStack_12c = param_4;
        uStack_138 = (char *)0x10fd0e2f;
        iVar9 = FUN_10fb8160();
        if ((piVar15 != (int *)0x0) && (iVar9 != 0)) {
          uStack_138 = "COMBAT_PL05_AIM";
          piStack_13c = (int *)0x10fd0e54;
          FUN_10f56fa0();
          uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piVar20[0x14]);
          piStack_13c = (int *)0x10fd0e68;
          iVar9 = FUN_10f57110();
          piStack_13c = (int *)0x10fd0e73;
          piVar13 = piVar26;
          iVar10 = FUN_10f57110();
          piVar26 = piVar13;
          if (iVar9 == iVar10) {
            uStack_138 = "COMBAT_PL05_COMMONSHOOT";
            piStack_13c = (int *)0x10fd0e89;
            FUN_10f56fa0();
            uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piStack_12c[0x14]);
            piStack_13c = (int *)0x10fd0e9d;
            iVar9 = FUN_10f57110();
            piStack_13c = (int *)0x10fd0ea8;
            iVar10 = FUN_10f57110();
            if (iVar9 != iVar10) {
              uStack_138 = "COMBAT_PL05_CHARGE";
              piStack_13c = (int *)0x10fd0ebe;
              FUN_10f56fa0();
              uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piStack_12c[0x14]);
              piStack_13c = (int *)0x10fd0ed2;
              iVar9 = FUN_10f57110();
              piStack_13c = (int *)0x10fd0edd;
              iVar10 = FUN_10f57110();
              if (iVar9 != iVar10) {
                uStack_138 = "COMBAT_PL05_HEAVYSHOOT";
                piStack_13c = (int *)0x10fd0eef;
                FUN_10f56fa0();
                uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piStack_12c[0x14]);
                piStack_13c = (int *)0x10fd0f03;
                iVar9 = FUN_10f57110();
                piStack_13c = (int *)0x10fd0f0e;
                iVar10 = FUN_10f57110();
                if (iVar9 != iVar10) {
                  uStack_138 = "COMBAT_PL05_HEAVYSHOOTS";
                  piStack_13c = (int *)0x10fd0f20;
                  FUN_10f56fa0();
                  uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,piStack_12c[0x14]);
                  piStack_13c = (int *)0x10fd0f34;
                  iVar9 = FUN_10f57110();
                  piStack_13c = (int *)0x10fd0f3f;
                  iVar10 = FUN_10f57110();
                  piVar26 = piVar13;
                  if (iVar9 != iVar10) goto LAB_10fd0f4f;
                }
              }
            }
            param_7 = CONCAT31(param_7._1_3_,1);
            piVar26 = piVar13;
          }
        }
LAB_10fd0f4f:
        uStack_138 = (char *)0x10fd0f56;
        cVar3 = FUN_10f5b980();
        if (cVar3 != '\0') {
          uVar4 = (undefined1)param_7;
          if (*(int *)(DAT_120286b8 + 0x538) != 0) {
            uVar4 = 1;
          }
          param_7 = CONCAT31(param_7._1_3_,uVar4);
        }
        if (*(int *)(DAT_120286b8 + 0x54c) == 1) {
          piStack_13c = param_4;
          uStack_138 = (char *)param_5;
          cVar3 = FUN_10fd7bc0(param_2,param_3);
          if (cVar3 == '\0') {
            piStack_13c = param_4;
            uStack_138 = (char *)param_5;
            cVar3 = FUN_10fd80f0(param_2,param_3);
            if (cVar3 == '\0') {
              piStack_13c = param_4;
              uStack_138 = (char *)param_5;
              cVar3 = FUN_10fd81a0(param_2,param_3);
              if (cVar3 == '\0') goto LAB_10fd0fd8;
            }
          }
        }
        else {
LAB_10fd0fd8:
          uStack_138 = (char *)&param_10;
          piStack_13c = (int *)0x10fd1009;
          FUN_10f5bed0();
          piStack_13c = (int *)(auStack_130 + 3);
          auStack_130 = (undefined1  [4])((uint)auStack_130 & 0xffffff);
          FUN_10dea810(piVar13[0x40]);
          piStack_f0 = (int *)(uint)((char)param_7 != '\0');
          if (uStack_138._3_1_ != '\0') {
            piStack_f0 = (int *)0x2;
          }
          uVar11 = (**(code **)(*piStack_12c + 100))();
          puVar12 = (undefined4 *)(**(code **)(**(int **)(piVar13[0x40] + 0xc) + 0xb4))();
          uStack_e0 = *puVar12;
          piStack_dc = (int *)puVar12[1];
          uStack_d8 = *(double *)(puVar12 + 2);
          puVar14 = (uint *)(**(code **)(**(int **)(piVar13[0x40] + 0xc) + 0x94))();
          piStack_cc = (int *)*puVar14;
          uStack_c8 = *(double *)(puVar14 + 1);
          piVar13 = (int *)(**(code **)(*(int *)piVar13[0x40] + 0x10c))();
          local_f8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
          unaff_EDI = (int *)(*piVar16 + 0x524);
          uVar11 = (**(code **)(*piVar13 + 0xf8))(0,piStack_134,piVar26,uVar11,piStack_f0,param_10);
          uVar11 = FUN_10bf81b0(&param_2,uVar11);
          uVar25 = (**(code **)(*piStack_100 + 0x228))((int)&uStack_d8 + 4,&uStack_e8,uVar11);
          (*(code *)*puVar6)(uVar25);
          piStack_13c = (int *)0x27;
          cVar3 = FUN_10f5c510(&piStack_13c,0);
          if (cVar3 == '\x01') {
            piStack_13c = (int *)0x11d05860;
            CInfoRecord__GetModelString();
            piVar13 = (int *)FUN_10fb8080();
            if (piVar13 == piVar16) {
              uStack_138 = (char *)0x0;
              piStack_13c = (int *)0x10fd119e;
              (**(code **)(iRam00000064 + 0x528))();
            }
          }
        }
        uStack_138 = (char *)0x10fd11af;
        FUN_10f1a830();
      }
      else {
        unaff_EDI = (int *)0xffffffff;
        if (param_6 != (int *)0x0) {
          unaff_EDI = (int *)*param_6;
        }
        piStack_12c = (int *)piVar13[0x40];
        auStack_130 = (undefined1  [4])0x10fd0d00;
        FUN_10dea810();
        uVar11 = 0;
        if ((char)((uint)piVar26 >> 0x18) != '\0') {
          uVar11 = 2;
        }
        uStack_e8 = (double)CONCAT44(uVar11,(int)uStack_e8);
        auStack_130 = (undefined1  [4])0x10fd0d25;
        puVar12 = (undefined4 *)(**(code **)(**(int **)(piVar13[0x40] + 0xc) + 0xb4))();
        piStack_b8 = (int *)*puVar12;
        piStack_b4 = (int *)puVar12[1];
        piStack_b0 = (int *)puVar12[2];
        piStack_ac = (int *)puVar12[3];
        auStack_130 = (undefined1  [4])0x10fd0d66;
        puVar12 = (undefined4 *)(**(code **)(**(int **)(piVar13[0x40] + 0xc) + 0x94))();
        piStack_f4 = (int *)*puVar12;
        piStack_f0 = (int *)puVar12[1];
        uStack_ec = puVar12[2];
        auStack_130 = (undefined1  [4])0x10fd0d96;
        piVar13 = (int *)(**(code **)(*(int *)piVar13[0x40] + 0x10c))();
        auStack_130 = (undefined1  [4])0x10fd0da8;
        piStack_134 = piVar16;
        (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        auStack_130 = (undefined1  [4])uStack_e8._4_4_;
        piStack_dc = *ppiStack_10c + 0x14b;
        piStack_13c = (int *)0x0;
        uStack_138 = (char *)puVar6;
        uVar11 = (**(code **)(*piVar13 + 0xf8))();
        uVar11 = FUN_10bf81b0(&param_2,uVar11);
        uVar25 = (*(code *)(*ppiStack_10c)[0x8a])(&piStack_fc,&uStack_c0,uVar11);
        (*(code *)*uStack_e8._4_4_)(uVar25);
      }
    }
    FUN_10fd9940();
    (**(code **)(*(int *)unaff_EDI[0x40] + 0x63c))();
    piStack_f4 = (int *)0x0;
    piStack_f0 = (int *)0x0;
    uStack_ec = 0;
    if (ppiStack_10c[0x30] == (int *)0x0) {
      uStack_d8 = (double)CONCAT44(unaff_EDI + 0x52,(int *)uStack_d8);
    }
    else {
      FUN_10ab78b0();
      piVar26 = piStack_f0;
      uStack_d8 = (double)CONCAT44(&piStack_f4,(int *)uStack_d8);
      uStack_e8 = (double)CONCAT44(piStack_f0,(int)uStack_e8);
      uVar4 = *(undefined1 *)((int)ppiStack_10c + 0x15);
      piVar13 = (int *)ppiStack_10c[0x30][0x53];
      *(undefined1 *)((int)ppiStack_10c + 0x15) = 1;
      piVar20 = (int *)ppiStack_10c[0x30][0x52];
      piVar15 = (int *)((uint)((int)piVar13 + (3 - (int)piVar20)) >> 2);
      if (piVar13 < piVar20) {
        piVar15 = (int *)0x0;
      }
      piStack_100 = (int *)0x0;
      piVar13 = piStack_f0;
      piStack_cc = piVar20;
      if (piVar15 != (int *)0x0) {
        do {
          if (piStack_f4 != piVar26) {
            piVar16 = piStack_f4;
            do {
              if (*piVar16 == *piVar20) {
                _Src = piVar16 + 1;
                if ((_Src != piVar13) &&
                   (piStack_fc = (int *)((int)piVar13 - (int)_Src), piStack_fc != (int *)0x0)) {
                  piStack_12c = (int *)0x10fd12ee;
                  memmove(piVar16,_Src,(size_t)piStack_fc);
                  piVar13 = piStack_f0;
                }
                piVar13 = piVar13 + -1;
                piStack_f0 = piVar13;
                goto LAB_10fd12ac;
              }
              piVar16 = piVar16 + 1;
            } while (piVar16 != piVar26);
          }
          if ((char)((int *)*piVar20)[7] != '\0') {
            (**(code **)(*(int *)*piVar20 + 0x20))();
            piVar13 = piStack_f0;
          }
LAB_10fd12ac:
          piVar20 = piVar20 + 1;
          piStack_100 = (int *)((int)piStack_100 + 1);
        } while (piStack_100 != piVar15);
        ppiVar18 = ppiStack_10c + 0x34;
      }
      *(undefined1 *)((int)ppiStack_10c + 0x15) = uVar4;
    }
    iVar9 = (**(code **)(*ppiStack_10c[0x40] + 0x20c))();
    uStack_e8 = (double)CONCAT44(iVar9,(int)uStack_e8);
    if (iVar9 != 0) {
      cVar3 = FUN_10f5b910();
      if (cVar3 != '\0') {
        FUN_10f5b960();
      }
      (**(code **)(*uStack_e8._4_4_ + 0xbc))();
    }
    cVar3 = FUN_10f5b910();
    if ((cVar3 == '\0') || (cVar3 = FUN_10f5b910(), cVar3 == '\0')) {
      FUN_10f3a220();
    }
    FUN_10f39d70();
    ppiStack_10c[0x31] = ppiStack_10c[0x30];
    ppiStack_10c[0x30] = (int *)ppiStack_10c;
    cVar3 = (**(code **)(*ppiStack_10c[0x40] + 0x1cc))();
    piVar13 = param_6;
    if (((cVar3 != '\0') &&
        (iVar9 = (**(code **)(*ppiStack_10c[0x40] + 800))(), piVar13 = param_6, iVar9 != 0)) &&
       (piStack_f4 = *(int **)(iVar9 + 0x14), iStack_88 != 0)) {
      uStack_d8 = (double)CONCAT44(uStack_d8._4_4_,*(int *)(iStack_88 + 0x14));
      if (0 < *(int *)(iStack_88 + 0x14)) {
        FUN_116cd730();
        iVar9 = CSkillInfo__FindBySkillId();
        piVar13 = param_6;
        if (iVar9 != 0) {
          if ((0 < iStack_8c) && (cVar3 = FUN_116cdb40(), cVar3 == '\x01')) {
            if ((int)uStack_e8 != 0) {
              FUN_10c3d5d0();
            }
            goto LAB_10fd1423;
          }
          iVar9 = (**(code **)(*piStack_f4 + 0x2c))();
          piVar13 = param_6;
          if (iVar9 == 0) {
            iVar9 = (**(code **)(*piStack_f4 + 0x54))();
            piVar13 = aiStack_80;
            if (iVar9 != 0) {
              piVar13 = param_6;
            }
          }
        }
      }
    }
    param_6 = piVar13;
    local_f8 = (int *)((uint)local_f8 & 0xffffff);
    if (param_6 != (int *)0x0) {
      iVar9 = (**(code **)(*ppiStack_10c[0x40] + 800))();
      uStack_d8 = (double)CONCAT44(uStack_d8._4_4_,iVar9);
      if ((iVar9 != 0) && (cVar3 = FUN_10f5ca30(), cVar3 == '\0')) {
        iVar9 = (**(code **)(**(int **)((int)(int *)uStack_d8 + 0x14) + 0x2c))();
        local_f8 = (int *)CONCAT13(iVar9 == 0,(undefined3)local_f8);
      }
      (**(code **)(*piStack_fc + 0x24))();
    }
    cVar3 = (**(code **)(*ppiStack_10c[0x40] + 0x228))();
    if (cVar3 == '\0') {
      (**(code **)(*piStack_fc + 0x6c))();
      FUN_10f5bed0();
    }
    FUN_10f58d40();
    if ((uint *)uStack_c8 != (uint *)0x0) {
      piVar13 = (int *)*(uint *)uStack_c8;
      uVar2 = (ulonglong)uStack_d8 >> 0x20;
      uStack_c0 = (double)CONCAT44(uStack_c0._4_4_,piVar13);
      uStack_d8._0_4_ = (int *)0x0;
      uVar8 = (uint)((int)((uint *)uStack_c8)[1] + (3 - (int)piVar13)) >> 2;
      if ((int *)((uint *)uStack_c8)[1] < piVar13) {
        uVar8 = (uint)(int *)uStack_d8;
      }
      uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffff00000000);
      uStack_d8 = (double)CONCAT44((int)uVar2,uVar8);
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          if ((char)((int *)*piVar13)[7] != '\0') {
            (**(code **)(*(int *)*piVar13 + 0x1c))();
            uVar17 = (uint)(uint *)uStack_c8;
            uVar8 = (uint)(int *)uStack_d8;
          }
          uVar17 = uVar17 + 1;
          piVar13 = piVar13 + 1;
          uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,uVar17);
        } while (uVar17 != uVar8);
        ppiVar18 = ppiStack_10c + 0x34;
      }
    }
    if ((ppiStack_10c[0x30] != (int *)0x0) && (ppiStack_10c[0x31] != (int *)0x0)) {
      bVar21 = false;
      iVar9 = FUN_10f19240();
      if (iVar9 != 0) {
        iVar9 = FUN_10f19240();
        uStack_d8 = 0.0;
        piStack_d0 = (int *)0x0;
        (**(code **)(**(int **)(iVar9 + 0x10) + 0x14))();
        for (piVar13 = (int *)uStack_d8; bVar21 = false, piVar13 != uStack_d8._4_4_;
            piVar13 = piVar13 + 1) {
          if ((*piVar13 != 0) && (*(int *)(*(int *)(*piVar13 + 0x40) + 0x420) == 7)) {
            bVar21 = true;
            break;
          }
        }
        if ((int *)uStack_d8 != (int *)0x0) {
          FUN_10c3d5d0();
        }
      }
      piVar13 = ppiStack_10c[0x31];
      piStack_b0 = (int *)piVar13[8];
      piStack_ac = (int *)piVar13[9];
      piStack_a8 = (int *)piVar13[10];
      piStack_a4 = (int *)piVar13[0xb];
      ppiVar5 = (int **)FUN_10fde0a0();
      if (((ppiVar5 == ppiVar18) || (ppiVar5[8] == (int *)0x0)) ||
         (cVar3 = FUN_10f5b920(), cVar3 == '\0')) {
        piVar13 = ppiStack_10c[0x31];
        piStack_b0 = (int *)piVar13[8];
        piStack_ac = (int *)piVar13[9];
        piStack_a8 = (int *)piVar13[10];
        piStack_a4 = (int *)piVar13[0xb];
        ppiVar5 = (int **)FUN_10fde0a0();
        if ((((ppiVar5 == ppiVar18) || (ppiVar5[8] == (int *)0x0)) ||
            (cVar3 = FUN_10f5b8d0(), cVar3 == '\0')) && (!bVar21)) goto LAB_10fd178f;
      }
      piVar13 = ppiStack_10c[0x30];
      piStack_b0 = (int *)piVar13[8];
      piStack_ac = (int *)piVar13[9];
      piStack_a8 = (int *)piVar13[10];
      piStack_a4 = (int *)piVar13[0xb];
      ppiVar5 = (int **)FUN_10fde0a0();
      if ((ppiVar5 == ppiVar18) || (ppiVar5[8] == (int *)0x0)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = FUN_10f5b920();
      }
      uStack_ec = CONCAT13(cVar3 == '\0',(undefined3)uStack_ec);
      if (bVar21) {
        FUN_10f56fa0();
        piStack_dc = (int *)ppiStack_10c[0x30][0x14];
        iVar9 = FUN_10f57110();
        iVar10 = FUN_10f57110();
        if (iVar9 != iVar10) goto LAB_10fd16e7;
        bVar21 = true;
      }
      else {
LAB_10fd16e7:
        bVar21 = false;
      }
      if ((uStack_ec._3_1_ != '\0') && (!bVar21)) {
        iVar9 = piStack_100[0x30];
        piStack_b0 = *(int **)(iVar9 + 0x20);
        piStack_ac = *(int **)(iVar9 + 0x24);
        piStack_a8 = *(int **)(iVar9 + 0x28);
        piStack_a4 = *(int **)(iVar9 + 0x2c);
        ppiVar5 = (int **)FUN_10fde0a0();
        if ((ppiVar5 == ppiVar18) ||
           ((ppiVar5[8] == (int *)0x0 || (cVar3 = FUN_10f5b8d0(), cVar3 == '\0')))) {
          piStack_dc = *(int **)(piStack_100[0x30] + 0x50);
          FUN_10f57110();
          CInfoRecord__GetModelString();
          cVar3 = FUN_10fd7600();
          if (cVar3 == '\0') {
            uStack_c8 = (double)CONCAT44(*(undefined4 *)(piStack_100[0x30] + 0x50),(uint *)uStack_c8
                                        );
            FUN_10f57110();
            CInfoRecord__GetModelString();
            FUN_10fd7790();
          }
        }
        FUN_10fd5b50();
      }
    }
LAB_10fd178f:
    FUN_10fdbe60();
    if (local_f8._3_1_ != '\0') {
      FUN_11055d20();
    }
    if ((int)uStack_e8 != 0) {
      FUN_10c3d5d0();
    }
  }
  uVar4 = 1;
LAB_10fd17d0:
  if ((puStack_4c != auStack_60) && (puStack_4c != (undefined1 *)0x0)) {
    FUN_10c3d5d0();
  }
  if ((puStack_64 != auStack_78) && (puStack_64 != (undefined1 *)0x0)) {
    FUN_10c3d5d0();
  }
  return uVar4;
}

