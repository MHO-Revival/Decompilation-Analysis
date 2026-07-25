// FUN_10ed21d0 @ 10ed21d0
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memset, floor, libm_sse2_sqrt_precise, _CIatan2
   strings:
     ""OnLadder""
     ""RayWorldIntersection(Game)""
     ""CLAMPING""
     ""Top Dist: %f - Bottom Dist: %f - Desired Vel: %f""
     ""Ladder Orientation (%f, %f, %f) - Ladder Up Direction (%f, %f, %f)""
     ""Move (%.2f, %.2f, %.2f)"" */

void __thiscall FUN_10ed21d0(float *param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint *puVar10;
  float unaff_ESI;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float *pfStack_1ac;
  undefined1 **ppuStack_1a8;
  float *pfStack_1a4;
  float fStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_170;
  float fStack_168;
  undefined1 *puStack_164;
  float fStack_160;
  double dStack_15c;
  float *pfStack_154;
  undefined8 uStack_150;
  float *pfStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float *pfStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float *local_114;
  float fStack_110;
  float fStack_10c;
  float *pfStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float *pfStack_e8;
  float fStack_e4;
  float fStack_e0;
  float *pfStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_c0;
  float *pfStack_bc;
  float *pfStack_b8;
  float *pfStack_b4;
  float *pfStack_b0;
  float fStack_ac;
  float *pfStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float *pfStack_98;
  float *pfStack_94;
  float *pfStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [88];
  
  local_114 = param_1;
  if (*(char *)((int)param_1[2] + 0x1de) != '\0') {
    if (*(char *)(DAT_1202e818 + 0x208) == '\0') {
      return;
    }
    pfStack_1a4 = (float *)0x10ed2215;
    piVar4 = (int *)(**(code **)(*(int *)param_1[0x89] + 0x20c))();
    if (piVar4 != (int *)0x0) {
      pfStack_1a4 = (float *)0x10ed2222;
      piVar4 = (int *)(**(code **)(*piVar4 + 0x6c))();
      if (piVar4 != (int *)0x0) {
        pfStack_1a4 = (float *)0x11ceb470;
        ppuStack_1a8 = (undefined1 **)0x10ed2237;
        pcVar5 = (char *)(**(code **)(*piVar4 + 0x98))();
        if ((pcVar5 != (char *)0x0) && (*pcVar5 == '1')) {
          return;
        }
      }
    }
    pfStack_1a4 = (float *)0x1;
    ppuStack_1a8 = (undefined1 **)0x10ed224e;
    FUN_10eca010();
    return;
  }
  pfStack_1a4 = &local_180;
  ppuStack_1a8 = (undefined1 **)0x10ed226b;
  puVar6 = (undefined8 *)(**(code **)(*(int *)param_2[3] + 200))();
  fVar22 = param_1[2];
  puStack_164 = (undefined1 *)*puVar6;
  fStack_160 = (float)((ulonglong)*puVar6 >> 0x20);
  dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(undefined4 *)(puVar6 + 1));
  pfStack_148 = (float *)(uint)(param_1[4] < 0.0);
  if (((0.0 < (float)(double)((ulonglong)(double)param_2[0x635] & DAT_11de9c70)) ||
      (0.0 < (float)(double)((ulonglong)(double)param_2[0x636] & DAT_11de9c70))) ||
     (0.0 < (float)(double)((ulonglong)(double)param_2[0x637] & DAT_11de9c70))) {
    ppuStack_1a8 = &puStack_164;
    pfStack_1ac = (float *)0x10ed2ecc;
    puVar6 = (undefined8 *)(**(code **)(*(int *)param_2[3] + 200))();
    pfStack_1ac = &fStack_88;
    local_180 = *(float *)(puVar6 + 1);
    fStack_188 = (float)*puVar6;
    fStack_184 = (float)((ulonglong)*puVar6 >> 0x20);
    uStack_150._4_4_ = *(float *)((int)param_1[2] + 0x208) - fStack_188;
    uStack_150._0_4_ = *(float *)((int)param_1[2] + 0x20c) - fStack_184;
    puVar10 = (uint *)(**(code **)(*(int *)param_2[3] + 0xd0))();
    fVar22 = (float)puVar10[3];
    pfStack_1a4 = (float *)(*puVar10 ^ DAT_11de9c90);
    fVar13 = (float)(puVar10[1] ^ DAT_11de9c90);
    fVar1 = param_1[2];
    fVar12 = (float)(puVar10[2] ^ DAT_11de9c90);
    fVar21 = *(float *)((int)fVar1 + 0x1fc);
    fVar16 = *(float *)((int)fVar1 + 0x200);
    fVar19 = *(float *)((int)fVar1 + 0x204);
    fVar1 = *(float *)((int)fVar1 + 0x1f8);
    fVar17 = (fVar21 * fVar12 - fVar16 * fVar13) + fVar19 * (float)pfStack_1a4 + fVar1 * fVar22;
    fVar18 = (fVar16 * (float)pfStack_1a4 - fVar1 * fVar12) + fVar19 * fVar13 + fVar21 * fVar22;
    fVar14 = (fVar1 * fVar13 - fVar21 * (float)pfStack_1a4) + fVar19 * fVar12 + fVar16 * fVar22;
    fVar22 = fVar19 * fVar22 - (fVar21 * fVar13 + fVar1 * (float)pfStack_1a4 + fVar16 * fVar12);
    fVar22 = fVar17 * fVar17 + fVar22 * fVar22 + fVar18 * fVar18 + fVar14 * fVar14;
    if (DAT_11de98a8 < fVar22) {
      rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
    }
    fVar22 = *param_1;
    fVar21 = (float)pfStack_154 * (float)pfStack_154 + (float)uStack_150 * (float)uStack_150 +
             unaff_ESI * unaff_ESI;
    fVar16 = SQRT(fVar21);
    if (fVar22 * DAT_11cc1020 <= fVar16) {
      fVar21 = fVar21 + DAT_11de98a0;
      auVar15 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
      fVar19 = auVar15._0_4_;
      fVar19 = (DAT_11de9938 - fVar19 * fVar21 * fVar19 * DAT_11de98e8) * fVar19;
      fStack_10c = DAT_11de9918;
      fStack_174 = fVar19 * (float)pfStack_154 * DAT_11cc1020 * fVar22;
      fVar21 = fVar19 * unaff_ESI * DAT_11cc1020 * fVar22;
      fStack_178 = fVar19 * (float)uStack_150 * DAT_11cc1020 * fVar22;
      if (fVar16 != DAT_11de9890) {
        fStack_10c = SQRT(fStack_174 * fStack_174 + fStack_178 * fStack_178 + fVar21 * fVar21) /
                     fVar16;
      }
      uStack_100 = 0;
      fStack_104 = 0.0;
      pfStack_108 = (float *)0x0;
      uStack_170._0_4_ = fVar21;
      puVar6 = (undefined8 *)(**(code **)(*(int *)param_2[3] + 200))();
      fStack_190 = (float)*puVar6;
      fStack_18c = (float)((ulonglong)*puVar6 >> 0x20);
      fStack_17c = fStack_190 + fStack_17c;
      fStack_178 = fStack_18c + fStack_178;
      fStack_174 = *(float *)(puVar6 + 1) + fStack_174;
      (**(code **)(*(int *)param_2[3] + 0x90))();
      fVar22 = param_1[2];
      fStack_13c = (float)_DAT_11cbf0e0;
      fStack_138 = (float)_UNK_11cbf0e4;
      fStack_134 = (float)_UNK_11cbf0e8;
      pfStack_130 = _UNK_11cbf0ec;
      pfVar20 = (float *)(**(code **)(*(int *)param_2[3] + 0xd0))();
      fVar21 = *(float *)((int)fVar22 + 0x1f8);
      fVar16 = *(float *)((int)fVar22 + 0x1fc);
      dStack_15c = *(double *)((int)fVar22 + 0x1f8);
      pfStack_154 = *(float **)((int)fVar22 + 0x200);
      uStack_150._0_4_ = *(float *)((int)fVar22 + 0x204);
      fStack_ac = *pfVar20;
      pfStack_bc = (float *)pfVar20[1];
      fStack_12c = pfVar20[2];
      fStack_17c = pfVar20[3];
      uStack_170 = CONCAT44(uStack_170._4_4_,fStack_17c);
      pfStack_1a4 = (float *)((float)pfStack_bc * fVar16 + fStack_ac * fVar21 +
                              fStack_12c * (float)pfStack_154 + fStack_17c * (float)uStack_150);
      fVar22 = fVar16;
      pfVar20 = pfStack_154;
      fVar19 = (float)uStack_150;
      if ((float)pfStack_1a4 < 0.0) {
        fVar21 = (float)((uint)fVar21 ^ DAT_11de9c90);
        pfStack_1a4 = (float *)((uint)pfStack_1a4 ^ DAT_11de9c90);
        fVar22 = (float)((uint)fVar16 ^ DAT_11de9c90);
        pfVar20 = (float *)((uint)pfStack_154 ^ DAT_11de9c90);
        fVar19 = (float)((uint)(float)uStack_150 ^ DAT_11de9c90);
      }
      fStack_178 = fStack_17c;
      fStack_174 = fStack_17c;
      fStack_120 = fStack_12c;
      pfStack_b8 = pfStack_bc;
      pfStack_b4 = pfStack_bc;
      pfStack_b0 = pfStack_bc;
      pfStack_a8 = pfStack_bc;
      fStack_a4 = fStack_12c;
      fStack_a0 = fStack_17c;
      if ((float)pfStack_1a4 <= DAT_11cc1664) {
        fVar19 = fVar19 - fStack_17c * (float)pfStack_1a4;
        pfStack_1ac = (float *)(fVar21 - fStack_ac * (float)pfStack_1a4);
        fStack_8c = fVar22 - (float)pfStack_bc * (float)pfStack_1a4;
        fStack_9c = (float)pfVar20 - fStack_12c * (float)pfStack_1a4;
        dVar23 = (double)(fStack_8c * fStack_8c + (float)pfStack_1ac * (float)pfStack_1ac +
                          fStack_9c * fStack_9c + fVar19 * fVar19);
        fStack_128 = fStack_12c;
        fStack_124 = fStack_12c;
        pfStack_98 = pfStack_154;
        pfStack_94 = pfStack_154;
        pfStack_90 = pfStack_154;
        fStack_88 = fVar16;
        fStack_84 = fVar16;
        fStack_80 = fVar16;
        libm_sse2_sqrt_precise();
        fVar21 = (float)dVar23;
        dStack_15c = (double)(float)pfStack_1a4;
        fVar11 = (float10)_CIatan2();
        dStack_15c = (double)fVar11;
        pfStack_1a4 = (float *)&stack0xfffffe50;
        puStack_164 = &stack0xfffffe60;
        fStack_160 = (float)fVar11 * fStack_11c;
        fVar11 = (float10)fcos((float10)fStack_160);
        fsin((float10)fStack_160);
        fVar22 = (float)fVar11;
        fStack_134 = (fVar17 * fVar19) / fVar21 + fVar22 * fStack_17c;
        fStack_140 = (fVar17 * (float)pfStack_1ac) / fVar21 + fVar22 * fStack_ac;
        fStack_13c = (fVar17 * fStack_8c) / fVar21 + fVar22 * (float)pfStack_bc;
        fVar22 = (fVar17 * fStack_9c) / fVar21 + fVar22 * fStack_12c;
        fVar21 = fStack_12c;
      }
      else {
        if ((float)pfStack_bc * fVar22 + fStack_ac * fVar21 + fStack_12c * (float)pfVar20 +
            fStack_17c * fVar19 < 0.0) {
          fVar21 = (float)((uint)fVar21 ^ DAT_11de9c90);
          fVar22 = (float)((uint)fVar22 ^ DAT_11de9c90);
          pfVar20 = (float *)((uint)pfVar20 ^ DAT_11de9c90);
          fVar19 = (float)((uint)fVar19 ^ DAT_11de9c90);
        }
        fVar21 = (fVar21 - fStack_ac) * fStack_11c + fStack_ac;
        fStack_128 = (fVar22 - (float)pfStack_bc) * fStack_11c + (float)pfStack_bc;
        fStack_124 = ((float)pfVar20 - fStack_12c) * fStack_11c + fStack_12c;
        fStack_134 = (fVar19 - fStack_17c) * fStack_11c + fStack_17c;
        fVar16 = fStack_134 * fStack_134 + fVar21 * fVar21 + fStack_128 * fStack_128 +
                 fStack_124 * fStack_124;
        auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar22 = auVar15._0_4_;
        fVar22 = (DAT_11de9938 - fVar22 * fVar16 * fVar22 * DAT_11de98e8) * fVar22;
        fStack_134 = fVar22 * fStack_134;
        fStack_140 = fVar22 * fVar21;
        fStack_13c = fVar22 * fStack_128;
        fVar22 = fVar22 * fStack_124;
      }
      fStack_12c = fVar21;
      fVar21 = fStack_140 * fStack_140 + fStack_134 * fStack_134 + fStack_13c * fStack_13c +
               fVar22 * fVar22;
      if (fVar21 <= DAT_11de98a8) {
        fStack_134 = 1.0;
        fStack_140 = 0.0;
        fStack_13c = 0.0;
        fStack_138 = 0.0;
      }
      else {
        auVar15 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
        fStack_138 = auVar15._0_4_;
        fStack_138 = (DAT_11de9938 - fStack_138 * fVar21 * fStack_138 * DAT_11de98e8) * fStack_138;
        fStack_134 = fStack_138 * fStack_134;
        fStack_140 = fStack_138 * fStack_140;
        fStack_13c = fStack_138 * fStack_13c;
        fStack_138 = fStack_138 * fVar22;
      }
      (**(code **)(*(int *)param_2[3] + 0xb0))();
      param_1 = pfStack_130;
    }
    else {
      (**(code **)(*(int *)param_2[3] + 0x90))();
      (**(code **)(*(int *)param_2[3] + 0xb0))();
      param_2[0x637] = 0.0;
      param_2[0x636] = 0.0;
      param_2[0x635] = 0.0;
    }
    param_1[0x10c] = 0.0;
    param_1[0x10d] = 0.0;
    param_1[0x10e] = 0.0;
    fVar22 = param_1[2];
    fStack_198 = (float)((ulonglong)*(undefined8 *)((int)fVar22 + 0x208) >> 0x20);
    fStack_198 = *(float *)((int)fVar22 + 0x1f0) - fStack_198;
    fVar21 = *(float *)((int)fVar22 + 0x1ec) - (float)*(undefined8 *)((int)fVar22 + 0x208);
    fVar22 = *(float *)((int)fVar22 + 500) - *(float *)((int)fVar22 + 0x210);
    fStack_160 = *(float *)(DAT_120286b8 + 0x6d4) +
                 SQRT(fStack_198 * fStack_198 + fVar21 * fVar21 + fVar22 * fVar22);
    dStack_15c = (double)fStack_160;
    dStack_15c = floor(dStack_15c);
    FUN_10eca390(2);
    return;
  }
  puStack_164 = (undefined1 *)*(undefined8 *)((int)fVar22 + 0x1ec);
  fStack_160 = (float)((ulonglong)*(undefined8 *)((int)fVar22 + 0x1ec) >> 0x20);
  uStack_194 = *(float *)((int)fVar22 + 0x1e0) - (float)puStack_164;
  fVar21 = *(float *)((int)fVar22 + 0x1e4) - fStack_160;
  dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(float *)((int)fVar22 + 500));
  fVar22 = *(float *)((int)fVar22 + 0x1e8) - *(float *)((int)fVar22 + 500);
  fVar22 = uStack_194 * uStack_194 + fVar21 * fVar21 + fVar22 * fVar22;
  if (fVar22 <= DAT_11cbf070) {
    uStack_170 = DAT_1201fd04;
    uVar2 = uStack_170;
    fStack_168 = (float)DAT_1201fd0c;
    uStack_170._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
    uStack_150._4_4_ = uStack_170._4_4_;
    uStack_170._0_4_ = (float)DAT_1201fd04;
    uStack_194 = (float)uStack_170;
    uStack_170 = uVar2;
  }
  else {
    auVar15 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
    uStack_150._4_4_ = auVar15._0_4_;
    uStack_150._4_4_ =
         (DAT_11de9938 - uStack_150._4_4_ * fVar22 * uStack_150._4_4_ * DAT_11de98e8) *
         uStack_150._4_4_;
    uStack_194 = uStack_150._4_4_ * uStack_194;
    uStack_150._4_4_ = uStack_150._4_4_ * fVar21;
  }
  ppuStack_1a8 = (undefined1 **)&fStack_184;
  pfStack_1ac = (float *)0x10ed2451;
  puVar6 = (undefined8 *)(**(code **)(*(int *)param_2[3] + 200))();
  fVar22 = param_1[2];
  pfStack_1ac = param_2;
  uStack_194 = (float)CONCAT13(1,(undefined3)uStack_194);
  fStack_160 = *(float *)(puVar6 + 1);
  fStack_168 = (float)*puVar6;
  puStack_164 = (undefined1 *)((ulonglong)*puVar6 >> 0x20);
  fVar16 = *(float *)((int)fVar22 + 0x1e4) - (float)puStack_164;
  fVar21 = *(float *)((int)fVar22 + 0x1e0) - fStack_168;
  fVar22 = *(float *)((int)fVar22 + 0x1e8) - fStack_160;
  pfStack_108 = (float *)SQRT(fVar16 * fVar16 + fVar21 * fVar21 + fVar22 * fVar22);
  fStack_104 = 0.0;
  uStack_100 = 0;
  uStack_fc = 0;
  FUN_10ed8400();
  cVar3 = (**(code **)((int)*param_2 + 0x1d0))();
  if ((cVar3 != '\0') && (param_1[4] <= DAT_11cbf0d0 && DAT_11cbf0d0 != param_1[4])) {
    (**(code **)(*(int *)param_2[3] + 200))();
    fStack_168 = fStack_168 + DAT_11cbf08c;
    fVar22 = param_1[2];
    fStack_134 = *(float *)((int)fVar22 + 0x220) * DAT_11ceb52c;
    pfStack_130 = (float *)(*(float *)((int)fVar22 + 0x224) * DAT_11ceb52c);
    fStack_12c = *(float *)((int)fVar22 + 0x228) * DAT_11ceb52c;
    fVar22 = (float)(**(code **)(*(int *)param_2[3] + 0x16c))();
    pfStack_1a4 = *(float **)(DAT_1202e818 + 0x40);
    if (fVar22 != 0.0) {
      uStack_150._0_4_ = fVar22;
    }
    ppuStack_1a8 = (undefined1 **)(uint)(fVar22 != 0.0);
    memset(&uStack_f8,0,0x48);
    fStack_e4 = fStack_168;
    fStack_d8 = fStack_12c;
    puStack_c8 = auStack_60;
    pfStack_b8 = (float *)&uStack_150;
    pfStack_bc = (float *)ppuStack_1a8;
    uStack_ec = (undefined4)uStack_170;
    pfStack_e8 = (float *)((ulonglong)uStack_170 >> 0x20);
    fStack_e0 = fStack_134;
    pfStack_dc = pfStack_130;
    fStack_d4 = 3.60134e-43;
    uStack_d0 = 0x40f;
    uStack_cc = 0;
    puStack_c4 = (undefined1 *)0x1;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_c0 = 0;
    iVar7 = (**(code **)((int)*pfStack_1a4 + 0x8c))();
    if (iVar7 != 0) goto LAB_10ed2662;
  }
  cVar3 = (**(code **)((int)*param_2 + 0x1d0))();
  if (cVar3 != '\0') {
    if ((DAT_11ceb51c <= fStack_10c) || (param_1[4] <= DAT_11de98bc)) {
      if ((DAT_11cbf084 <= fStack_190) || (DAT_11cbf0d0 <= param_1[4])) goto LAB_10ed29bc;
      if (param_1[4] <= DAT_11de98bc) {
LAB_10ed2662:
        FUN_10eca010();
        return;
      }
    }
    fStack_144 = param_2[0x63a];
    fStack_12c = param_2[0x62c] + param_2[0x639] * DAT_11df9608;
    pfStack_130 = (float *)(param_2[0x638] * DAT_11df9608 + param_2[0x62b]);
    uStack_150._4_4_ = (float)*(undefined8 *)(param_2 + 0x638);
    pfStack_148 = (float *)((ulonglong)*(undefined8 *)(param_2 + 0x638) >> 0x20);
    fStack_168 = param_2[0x62c] - (float)pfStack_148;
    fStack_128 = param_2[0x62d] + param_2[0x63a] * DAT_11df9608 + DAT_11cc9b60;
    puStack_164 = (undefined1 *)((param_2[0x62d] - fStack_144) + DAT_11cc9b60);
    uStack_170 = CONCAT44(param_2[0x62b] - uStack_150._4_4_,(float)uStack_170);
    fVar22 = param_2[0x62b] - uStack_150._4_4_;
    if (*(int *)(DAT_120286b8 + 0x6d0) != 0) {
      pfStack_1a4 = (float *)0xffffffff;
      piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x468))();
      (**(code **)(*piVar4 + 0x18))();
      fVar22 = uStack_170._4_4_;
    }
    pfVar20 = (float *)(fVar22 - (float)pfStack_130);
    fVar21 = fStack_168 - fStack_12c;
    fStack_184 = (float)puStack_164 - fStack_128;
    fVar22 = (float)(**(code **)(*(int *)param_2[3] + 0x16c))();
    piVar4 = *(int **)(DAT_1202e818 + 0x40);
    if (fVar22 != 0.0) {
      uStack_150._4_4_ = fVar22;
    }
    pfStack_1a4 = (float *)(uint)(fVar22 != 0.0);
    memset(&uStack_f4,0,0x48);
    fStack_e0 = fStack_128;
    fStack_d4 = fStack_184;
    puStack_c4 = auStack_5c;
    pfStack_b4 = (float *)((int)&uStack_150 + 4);
    pfStack_b8 = pfStack_1a4;
    pfStack_e8 = pfStack_130;
    fStack_e4 = fStack_12c;
    uStack_d0 = 0x107;
    uStack_cc = 0x40f;
    puStack_c8 = (undefined1 *)0x0;
    uStack_c0 = 1;
    uStack_f4 = 0;
    uStack_f0 = 0;
    pfStack_bc = (float *)0x0;
    pfStack_dc = pfVar20;
    fStack_d8 = fVar21;
    iVar7 = (**(code **)(*piVar4 + 0x8c))();
    if (iVar7 == 0) {
      FUN_10eca010();
      return;
    }
    param_1[4] = 0.0;
    if (*(int *)(DAT_120286b8 + 0x6d0) != 0) {
      fStack_11c = _DAT_11cca120;
      fStack_118 = _UNK_11cca124;
      local_114 = _UNK_11cca128;
      fStack_110 = _UNK_11cca12c;
      FUN_10b6ffa0(*(undefined4 *)(DAT_1202e818 + 0x10));
    }
  }
LAB_10ed29bc:
  if ((*(int *)((int)param_1[2] + 0x22c) != 5) && (*(int *)((int)param_1[2] + 0x22c) != 4)) {
    if (*(int *)(DAT_120286b8 + 0x6d0) != 0) {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x468))();
      pfStack_1a4 = (float *)0x6400ff00;
      (**(code **)(*piVar4 + 0x58))();
      piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x468))();
      (**(code **)(*piVar4 + 0x58))((int)param_1[2] + 0x1e0,0x3df5c28f);
      piVar4 = (int *)param_2[3];
      piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x468))();
      fVar22 = 9.44502e+21;
      iVar7 = *piVar8;
      uVar9 = (**(code **)(*piVar4 + 200))(&pfStack_1ac,0x3df5c28f,&stack0xfffffe3c,1);
      (**(code **)(iVar7 + 0x58))(uVar9);
      param_1 = pfStack_154;
      uStack_150._0_4_ = _DAT_11cca120;
      uStack_150._4_4_ = _UNK_11cca124;
      pfStack_148 = _UNK_11cca128;
      fStack_144 = _UNK_11cca12c;
      FUN_10b6ffa0(*(undefined4 *)(DAT_1202e818 + 0x10),0x42480000,0x42480000,0x40000000,&uStack_150
                   ,0,"Top Dist: %f - Bottom Dist: %f - Desired Vel: %f",(double)fStack_140,
                   (double)fVar22,(double)pfStack_154[4]);
      fVar22 = param_1[2];
      FUN_10b6ffa0(*(undefined4 *)(DAT_1202e818 + 0x10),0x42480000,0x42960000,0x40000000,&uStack_150
                   ,0,"Ladder Orientation (%f, %f, %f) - Ladder Up Direction (%f, %f, %f)",
                   (double)*(float *)((int)fVar22 + 0x214),(double)*(float *)((int)fVar22 + 0x218),
                   (double)*(float *)((int)fVar22 + 0x21c),(double)*(float *)((int)fVar22 + 0x220),
                   (double)*(float *)((int)fVar22 + 0x224),(double)*(float *)((int)fVar22 + 0x228));
    }
    fVar21 = param_1[4] * DAT_11de98e8;
    fVar16 = fVar21 * unaff_ESI;
    pfStack_1a4 = (float *)(fVar21 * (float)pfStack_154);
    fVar21 = fVar21 * uStack_194;
    fVar22 = SQRT(fVar16 * fVar16 + (float)pfStack_1a4 * (float)pfStack_1a4 + fVar21 * fVar21);
    if (DAT_11de9918 < fVar22) {
      fVar22 = DAT_11de9918 / fVar22;
      fVar16 = fVar16 * fVar22;
      pfStack_1a4 = (float *)((float)pfStack_1a4 * fVar22);
      fVar21 = fVar21 * fVar22;
    }
    cVar3 = (char)((uint)fVar21 >> 0x18);
    fVar11 = (float10)(**(code **)(*(int *)param_1[0x89] + 0x758))();
    fStack_124 = (float)(fVar11 * (float10)DAT_11de98e8);
    fStack_17c = (float)pfStack_1a4 * fStack_124;
    fStack_178 = (float)ppuStack_1a8 * fStack_124;
    fStack_174 = fVar16 * fStack_124;
    if ((((uint)param_1[0x90] & 8) != 0) &&
       (DAT_11cbf084 < fStack_17c * fStack_17c + fStack_178 * fStack_178 + fStack_174 * fStack_174))
    {
      fStack_17c = fStack_17c * DAT_11cc3e78;
      fStack_178 = fStack_178 * DAT_11cc3e78;
      fStack_174 = fStack_174 * DAT_11cc3e78;
    }
    fVar22 = fStack_174;
    ppuStack_1a8 = (undefined1 **)fStack_178;
    pfStack_1a4 = (float *)fStack_17c;
    if (((uint)param_1[0x90] & 1) != 0) {
      FUN_10eca010();
      fStack_17c = (float)pfStack_1a4 + 0.0;
      fStack_174 = fVar22 + DAT_11cc1020;
      fStack_178 = (float)ppuStack_1a8 + 0.0;
      cVar3 = '\0';
    }
    fVar22 = fStack_174;
    if (*(int *)(DAT_120286b8 + 0x6d0) != 0) {
      fStack_110 = _DAT_11cca120;
      fStack_10c = _UNK_11cca124;
      pfStack_108 = _UNK_11cca128;
      fStack_104 = _UNK_11cca12c;
      FUN_10b6ffa0();
    }
    *(ulonglong *)(param_1 + 0x92) = CONCAT44(fStack_178,fStack_17c);
    param_1[0x91] = 2.8026e-45;
    param_1[0x94] = fStack_174;
    if (cVar3 != '\0') {
      uStack_150 = (double)(fVar22 * *param_1 + uStack_194);
      dVar23 = floor(uStack_150);
      uStack_150._0_4_ = SUB84(dVar23,0);
      uStack_150._4_4_ = (float)((ulonglong)dVar23 >> 0x20);
      cVar3 = FUN_10eca390();
      if (cVar3 == '\0') {
        return;
      }
    }
    param_1[0x10c] = 0.0;
    param_1[0x10d] = 0.0;
    param_1[0x10e] = 0.0;
    return;
  }
  FUN_10eca010();
  return;
}

