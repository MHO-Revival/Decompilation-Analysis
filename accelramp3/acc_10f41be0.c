// FUN_10f41be0 @ 10f41be0
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memset, floor, libm_sse2_sqrt_precise, _CIatan2
   strings:
     ""OnLadder""
     ""RayWorldIntersection(Game)""
     ""Top Dist: %f - Bottom Dist: %f - Desired Vel: %f""
     ""Ladder Orientation (%f, %f, %f) - Ladder Up Direction (%f, %f, %f)""
     ""Move (%.2f, %.2f, %.2f)"" */

void __thiscall FUN_10f41be0(float *param_1,int *param_2)

{
  undefined8 uVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float **ppfVar21;
  float *pfStack_1a8;
  float *pfStack_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  int *piStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float **ppfStack_178;
  float fStack_174;
  float local_170;
  undefined8 uStack_16c;
  undefined8 *puStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float *pfStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float *local_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_dc;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined8 *puStack_a8;
  undefined8 *puStack_a4;
  undefined8 *puStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [92];
  
  local_114 = param_1;
  if (*(char *)((int)param_1[2] + 0x1e6) == '\0') {
    pfStack_1a4 = &local_170;
    pfStack_1a8 = (float *)0x10f41c7b;
    puVar6 = (undefined8 *)(**(code **)(*(int *)param_2[3] + 200))();
    fVar19 = param_1[2];
    fStack_17c = *(float *)(puVar6 + 1);
    fStack_184 = (float)*puVar6;
    fStack_180 = (float)((ulonglong)*puVar6 >> 0x20);
    fVar18 = *(float *)((int)fVar19 + 500) - fStack_184;
    fVar13 = *(float *)((int)fVar19 + 0x1f8) - fStack_180;
    fVar15 = *(float *)((int)fVar19 + 0x1fc) - fStack_17c;
    piStack_188 = (int *)(*(float *)(DAT_120286b8 + 0x6d4) +
                         SQRT(fVar18 * fVar18 + fVar13 * fVar13 + fVar15 * fVar15));
    uStack_158 = CONCAT44(uStack_158._4_4_,(uint)(param_1[4] < 0.0));
    if (((0.0 < (float)(double)((ulonglong)(double)(float)param_2[0x663] & DAT_11de9c70)) ||
        (0.0 < (float)(double)((ulonglong)(double)(float)param_2[0x664] & DAT_11de9c70))) ||
       (0.0 < (float)(double)((ulonglong)(double)(float)param_2[0x665] & DAT_11de9c70))) {
      pfStack_1a8 = &fStack_144;
      puVar6 = (undefined8 *)(**(code **)(*(int *)param_2[3] + 200))();
      fVar19 = param_1[2];
      local_170 = *(float *)(puVar6 + 1);
      ppfStack_178 = (float **)*puVar6;
      fStack_174 = (float)((ulonglong)*puVar6 >> 0x20);
      puStack_164 = (undefined8 *)(*(float *)((int)fVar19 + 0x210) - (float)ppfStack_178);
      uStack_160._4_4_ = *(float *)((int)fVar19 + 0x214) - fStack_174;
      uStack_160._0_4_ = *(float *)((int)fVar19 + 0x218) - local_170;
      puVar9 = (uint *)(**(code **)(*(int *)param_2[3] + 0xd0))();
      fVar19 = (float)puVar9[3];
      fStack_180 = (float)(puVar9[1] ^ DAT_11de9c90);
      fStack_198 = (float)(puVar9[2] ^ DAT_11de9c90);
      fVar2 = param_1[2];
      fStack_194 = (float)(*puVar9 ^ DAT_11de9c90);
      fVar13 = *(float *)((int)fVar2 + 0x204);
      fVar15 = *(float *)((int)fVar2 + 0x208);
      fVar18 = *(float *)((int)fVar2 + 0x20c);
      fVar2 = *(float *)((int)fVar2 + 0x200);
      fStack_190 = (fStack_198 * fVar13 - fStack_180 * fVar15) + fStack_194 * fVar18 +
                   fVar2 * fVar19;
      fVar20 = (fStack_194 * fVar15 - fStack_198 * fVar2) + fStack_180 * fVar18 + fVar13 * fVar19;
      fVar16 = (fStack_180 * fVar2 - fStack_194 * fVar13) + fStack_198 * fVar18 + fVar15 * fVar19;
      fVar19 = fVar18 * fVar19 - (fStack_194 * fVar2 + fStack_180 * fVar13 + fStack_198 * fVar15);
      fVar19 = fStack_190 * fStack_190 + fVar19 * fVar19 + fVar20 * fVar20 + fVar16 * fVar16;
      if (DAT_11de98a8 < fVar19) {
        auVar17 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
        fStack_194 = auVar17._0_4_;
      }
      fVar19 = *param_1;
      fVar13 = (float)uStack_160 * (float)uStack_160 + uStack_16c._4_4_ * uStack_16c._4_4_ +
               (float)puStack_164 * (float)puStack_164;
      fVar15 = SQRT(fVar13);
      if (fVar19 * DAT_11cc1020 <= fVar15) {
        fVar13 = fVar13 + DAT_11de98a0;
        auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar18 = auVar17._0_4_;
        fVar18 = (DAT_11de9938 - fVar18 * fVar13 * fVar18 * DAT_11de98e8) * fVar18;
        fStack_18c = fVar19 * uStack_16c._4_4_ * fVar18 * DAT_11cc1020;
        fStack_184 = fVar19 * (float)puStack_164 * fVar18 * DAT_11cc1020;
        piStack_188 = (int *)(fVar19 * (float)uStack_160 * fVar18 * DAT_11cc1020);
        fStack_10c = DAT_11de9918;
        if (fVar15 != DAT_11de9890) {
          fStack_10c = SQRT((float)piStack_188 * (float)piStack_188 + fStack_18c * fStack_18c +
                            fStack_184 * fStack_184) / fVar15;
        }
        fStack_100 = 0.0;
        fStack_104 = 0.0;
        fStack_108 = 0.0;
        puVar6 = (undefined8 *)(**(code **)(*(int *)param_2[3] + 200))();
        ppfStack_178 = *(float ***)(puVar6 + 1);
        fStack_180 = (float)*puVar6;
        fStack_17c = (float)((ulonglong)*puVar6 >> 0x20);
        fStack_190 = fStack_180 + fStack_190;
        fStack_18c = fStack_17c + fStack_18c;
        piStack_188 = (int *)((float)ppfStack_178 + (float)piStack_188);
        (**(code **)(*(int *)param_2[3] + 0x90))();
        fVar19 = param_1[2];
        fStack_128 = (float)_DAT_11cbf0e0;
        fStack_124 = (float)_UNK_11cbf0e4;
        fStack_120 = (float)_UNK_11cbf0e8;
        fStack_11c = _UNK_11cbf0ec;
        pfVar10 = (float *)(**(code **)(*(int *)param_2[3] + 0xd0))(auStack_78);
        fVar13 = *(float *)((int)fVar19 + 0x200);
        fVar15 = *(float *)((int)fVar19 + 0x204);
        uStack_16c = *(double *)((int)fVar19 + 0x200);
        puStack_164 = *(undefined8 **)((int)fVar19 + 0x208);
        piStack_188 = *(int **)((int)fVar19 + 0x20c);
        fStack_9c = *pfVar10;
        fStack_14c = pfVar10[1];
        fStack_150 = pfVar10[2];
        fStack_10c = pfVar10[3];
        uStack_158 = CONCAT44(fStack_150,fStack_150);
        pfStack_1a4 = (float *)(fStack_14c * fVar15 + fStack_9c * fVar13 +
                                fStack_150 * (float)puStack_164 + fStack_10c * (float)piStack_188);
        puVar6 = puStack_164;
        piVar4 = (int *)fVar15;
        fStack_180 = (float)piStack_188;
        if ((float)pfStack_1a4 < 0.0) {
          fVar13 = (float)((uint)fVar13 ^ DAT_11de9c90);
          pfStack_1a4 = (float *)((uint)pfStack_1a4 ^ DAT_11de9c90);
          puVar6 = (undefined8 *)((uint)puStack_164 ^ DAT_11de9c90);
          piVar4 = (int *)((uint)fVar15 ^ DAT_11de9c90);
          fStack_180 = (float)((uint)piStack_188 ^ DAT_11de9c90);
        }
        fStack_140 = fStack_14c;
        fStack_108 = fStack_10c;
        fStack_104 = fStack_10c;
        fStack_100 = fStack_10c;
        fStack_98 = fStack_14c;
        fStack_94 = fStack_150;
        fStack_90 = fStack_10c;
        uStack_160._4_4_ = fStack_150;
        uStack_160._0_4_ = (float)piStack_188;
        if ((float)pfStack_1a4 <= DAT_11cc1664) {
          fStack_18c = fStack_180 - fStack_10c * (float)pfStack_1a4;
          fVar13 = fVar13 - fStack_9c * (float)pfStack_1a4;
          fStack_8c = (float)piVar4 - fStack_14c * (float)pfStack_1a4;
          fStack_ac = (float)puVar6 - fStack_150 * (float)pfStack_1a4;
          dVar14 = (double)(fStack_8c * fStack_8c + fVar13 * fVar13 + fStack_ac * fStack_ac +
                           fStack_18c * fStack_18c);
          fStack_184 = (float)piStack_188;
          fStack_180 = (float)piStack_188;
          fStack_148 = fStack_14c;
          fStack_144 = fStack_14c;
          puStack_a8 = puStack_164;
          puStack_a4 = puStack_164;
          puStack_a0 = puStack_164;
          fStack_88 = fVar15;
          fStack_84 = fVar15;
          fStack_80 = fVar15;
          libm_sse2_sqrt_precise();
          fStack_174 = (float)dVar14;
          uStack_16c = (double)(float)pfStack_1a4;
          fVar11 = (float10)_CIatan2();
          uStack_16c = (double)fVar11;
          ppfStack_178 = &pfStack_1a8;
          pfStack_1a4 = &fStack_190;
          local_170 = (float)fVar11 * fStack_11c;
          fVar11 = (float10)fcos((float10)local_170);
          fVar12 = (float10)fsin((float10)local_170);
          pfStack_1a8 = (float *)(float)fVar11;
          fStack_190 = (float)fVar12;
          fStack_120 = (fStack_190 * fStack_18c) / fStack_174 + (float)pfStack_1a8 * fStack_10c;
          fStack_12c = (fStack_190 * fVar13) / fStack_174 + (float)pfStack_1a8 * fStack_9c;
          fStack_128 = (fStack_190 * fStack_8c) / fStack_174 + (float)pfStack_1a8 * fStack_14c;
          fVar15 = (fStack_190 * fStack_ac) / fStack_174 + (float)pfStack_1a8 * uStack_160._4_4_;
          piVar4 = piStack_188;
          fVar19 = fStack_14c;
        }
        else {
          fVar15 = fStack_180;
          fVar19 = fVar13;
          fVar18 = (float)piVar4;
          if (fStack_14c * (float)piVar4 + fStack_9c * fVar13 + fStack_150 * (float)puVar6 +
              fStack_10c * fStack_180 < 0.0) {
            puVar6 = (undefined8 *)((uint)puVar6 ^ DAT_11de9c90);
            fVar15 = (float)((uint)fStack_180 ^ DAT_11de9c90);
            fVar19 = (float)((uint)fVar13 ^ DAT_11de9c90);
            fVar18 = (float)((uint)piVar4 ^ DAT_11de9c90);
          }
          fVar19 = fStack_9c + (fVar19 - fStack_9c) * fStack_11c;
          fStack_148 = fStack_14c + (fVar18 - fStack_14c) * fStack_11c;
          fStack_184 = fStack_150 + ((float)puVar6 - fStack_150) * fStack_11c;
          fStack_120 = (fVar15 - fStack_10c) * fStack_11c + fStack_10c;
          fVar18 = fStack_120 * fStack_120 + fVar19 * fVar19 + fStack_148 * fStack_148 +
                   fStack_184 * fStack_184;
          auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar15 = auVar17._0_4_;
          fVar15 = (DAT_11de9938 - fVar15 * fVar18 * fVar15 * DAT_11de98e8) * fVar15;
          fStack_120 = fVar15 * fStack_120;
          fStack_12c = fVar15 * fVar19;
          fStack_128 = fVar15 * fStack_148;
          fVar15 = fVar15 * fStack_184;
          fStack_18c = fVar13;
          fStack_144 = fStack_184;
        }
        fStack_14c = fVar19;
        piStack_188 = piVar4;
        fVar19 = fStack_12c * fStack_12c + fStack_120 * fStack_120 + fStack_128 * fStack_128 +
                 fVar15 * fVar15;
        if (fVar19 <= DAT_11de98a8) {
          fStack_120 = 1.0;
          fStack_12c = 0.0;
          fStack_128 = 0.0;
          fStack_124 = 0.0;
        }
        else {
          auVar17 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
          fStack_124 = auVar17._0_4_;
          fStack_124 = (DAT_11de9938 - fStack_124 * fVar19 * fStack_124 * DAT_11de98e8) * fStack_124
          ;
          fStack_120 = fStack_124 * fStack_120;
          fStack_12c = fStack_124 * fStack_12c;
          fStack_128 = fStack_124 * fStack_128;
          fStack_124 = fStack_124 * fVar15;
        }
        (**(code **)(*(int *)param_2[3] + 0xb0))(&fStack_12c,0);
        param_1 = pfStack_130;
      }
      else {
        (**(code **)(*(int *)param_2[3] + 0x90))();
        (**(code **)(*(int *)param_2[3] + 0xb0))((int)param_1[2] + 0x200);
        param_2[0x665] = 0;
        param_2[0x664] = 0;
        param_2[0x663] = 0;
      }
      param_1[0x10c] = 0.0;
      param_1[0x10d] = 0.0;
      param_1[0x10e] = 0.0;
      fVar19 = param_1[2];
      fStack_184 = *(float *)((int)fVar19 + 0x218);
      fStack_18c = (float)*(undefined8 *)((int)fVar19 + 0x210);
      piStack_188 = (int *)((ulonglong)*(undefined8 *)((int)fVar19 + 0x210) >> 0x20);
      fVar15 = *(float *)((int)fVar19 + 0x1f8) - (float)piStack_188;
      fVar13 = *(float *)((int)fVar19 + 500) - fStack_18c;
      fVar19 = *(float *)((int)fVar19 + 0x1fc) - fStack_184;
      local_170 = *(float *)(DAT_120286b8 + 0x6d4) +
                  SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar19 * fVar19);
      uStack_16c = (double)local_170;
      uStack_16c = floor(uStack_16c);
      FUN_10f11c10(2,2,local_170 - (float)uStack_16c);
      return;
    }
    fStack_17c = *(float *)((int)fVar19 + 0x1fc);
    fStack_184 = (float)*(undefined8 *)((int)fVar19 + 500);
    fStack_180 = (float)((ulonglong)*(undefined8 *)((int)fVar19 + 500) >> 0x20);
    fVar13 = *(float *)((int)fVar19 + 0x1e8) - fStack_184;
    fVar15 = *(float *)((int)fVar19 + 0x1ec) - fStack_180;
    fStack_18c = *(float *)((int)fVar19 + 0x1f0) - fStack_17c;
    fVar19 = fVar13 * fVar13 + fVar15 * fVar15 + fStack_18c * fStack_18c;
    if (fVar19 <= DAT_11cbf070) {
      fStack_184 = (float)DAT_1201fd04;
      fStack_180 = (float)((ulonglong)DAT_1201fd04 >> 0x20);
      fStack_17c = DAT_1201fd0c;
      fStack_18c = DAT_1201fd0c;
      ppfStack_178 = (float **)fStack_180;
      uStack_160._4_4_ = fStack_184;
    }
    else {
      auVar17 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar18 = auVar17._0_4_;
      fVar18 = (DAT_11de9938 - fVar18 * fVar19 * fVar18 * DAT_11de98e8) * fVar18;
      ppfStack_178 = (float **)(fVar18 * fVar15);
      fStack_18c = fVar18 * fStack_18c;
      uStack_160._4_4_ = fVar18 * fVar13;
    }
    pfStack_1a8 = &fStack_174;
    puVar6 = (undefined8 *)(**(code **)(*(int *)param_2[3] + 200))();
    fVar19 = param_1[2];
    uVar1 = *puVar6;
    fStack_150 = *(float *)(puVar6 + 1);
    uStack_158._4_4_ = (float *)((ulonglong)uVar1 >> 0x20);
    fVar13 = *(float *)((int)fVar19 + 0x1ec) - (float)uStack_158._4_4_;
    uStack_158._0_4_ = (float)uVar1;
    uStack_158._0_4_ = *(float *)((int)fVar19 + 0x1e8) - (float)uStack_158;
    fVar19 = *(float *)((int)fVar19 + 0x1f0) - fStack_150;
    fStack_108 = SQRT(fVar13 * fVar13 + (float)uStack_158 * (float)uStack_158 + fVar19 * fVar19);
    fStack_104 = 0.0;
    fStack_100 = 0.0;
    uStack_fc = 0;
    uStack_158 = uVar1;
    FUN_10f48430();
    cVar3 = (**(code **)(*param_2 + 0x1d0))();
    if ((cVar3 != '\0') && (param_1[4] <= DAT_11cbf0d0 && DAT_11cbf0d0 != param_1[4])) {
      (**(code **)(*(int *)param_2[3] + 200))();
      fStack_148 = fStack_148 + DAT_11cbf08c;
      fVar19 = param_1[2];
      fStack_180 = *(float *)((int)fVar19 + 0x228) * DAT_11ceb52c;
      fStack_17c = *(float *)((int)fVar19 + 0x22c) * DAT_11ceb52c;
      ppfStack_178 = (float **)(*(float *)((int)fVar19 + 0x230) * DAT_11ceb52c);
      iVar7 = (**(code **)(*(int *)param_2[3] + 0x16c))();
      uStack_16c = (double)CONCAT44(uStack_16c._4_4_,*(undefined4 *)(DAT_1202e818 + 0x40));
      if (iVar7 != 0) {
        uStack_160._0_4_ = (float)iVar7;
      }
      memset(&uStack_e8,0,0x48);
      uStack_dc = CONCAT44(fStack_14c,fStack_150);
      fStack_d4 = fStack_148;
      fStack_c8 = (float)ppfStack_178;
      puStack_b8 = auStack_60;
      puStack_a8 = &uStack_160;
      uStack_d0 = CONCAT44(fStack_17c,fStack_180);
      uStack_c4 = 0x101;
      uStack_c0 = 0x40f;
      uStack_bc = 0;
      uStack_b4 = 1;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_b0 = 0;
      fStack_ac = (float)(uint)(iVar7 != 0);
      iVar7 = (**(code **)(*(int *)uStack_16c + 0x8c))(&uStack_e8);
      if (iVar7 != 0) goto LAB_10f42061;
    }
    cVar3 = (**(code **)(*param_2 + 0x1d0))();
    if (cVar3 != '\0') {
      if ((fStack_10c < DAT_11ceb51c) && (0.0 <= param_1[4])) {
LAB_10f420d3:
        fStack_174 = (float)param_2[0x668];
        fStack_18c = (float)param_2[0x659] + (float)param_2[0x666] * DAT_11df986c;
        piStack_188 = (int *)((float)param_2[0x65a] + (float)param_2[0x667] * DAT_11df986c);
        fStack_17c = (float)*(undefined8 *)(param_2 + 0x666);
        ppfStack_178 = (float **)((ulonglong)*(undefined8 *)(param_2 + 0x666) >> 0x20);
        fStack_14c = (float)param_2[0x659] - fStack_17c;
        fStack_148 = (float)param_2[0x65a] - (float)ppfStack_178;
        fStack_184 = (float)param_2[0x65b] + (float)param_2[0x668] * DAT_11df986c + DAT_11cc9b60;
        fStack_144 = ((float)param_2[0x65b] - fStack_174) + DAT_11cc9b60;
        if (*(int *)(DAT_120286b8 + 0x6d0) != 0) {
          fStack_190 = -NAN;
          fStack_198 = -NAN;
          piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x468))();
          (**(code **)(*piVar4 + 0x18))(&fStack_18c,&fStack_198);
        }
        FUN_10f117f0();
        return;
      }
      if ((fStack_190 < DAT_11cbf084) && (param_1[4] < DAT_11cbf0d0)) {
        if (param_1[4] < 0.0) {
LAB_10f42061:
          FUN_10f117f0();
          return;
        }
        goto LAB_10f420d3;
      }
    }
    if ((*(int *)((int)param_1[2] + 0x234) == 5) || (*(int *)((int)param_1[2] + 0x234) == 4)) {
      FUN_10f117f0();
      return;
    }
    if (*(int *)(DAT_120286b8 + 0x6d0) != 0) {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x468))();
      fStack_198 = 9.518232e+21;
      (**(code **)(*piVar4 + 0x58))((int)param_1[2] + 500);
      piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x468))();
      pfStack_1a8 = (float *)0x6400ff00;
      ppfVar21 = &pfStack_1a8;
      (**(code **)(*piVar4 + 0x58))((int)param_1[2] + 0x1e8,0x3df5c28f,ppfVar21,1);
      piStack_188 = (int *)param_2[3];
      piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x468))();
      iVar7 = *piVar4;
      uVar8 = (**(code **)(*piStack_188 + 200))(&stack0xfffffe64,0x3df5c28f,&stack0xfffffe48,1);
      (**(code **)(iVar7 + 0x58))(uVar8);
      param_1 = uStack_158._4_4_;
      local_170 = _DAT_11cca120;
      uStack_16c = (double)CONCAT44(_UNK_11cca128,_UNK_11cca124);
      puStack_164 = (undefined8 *)_UNK_11cca12c;
      FUN_10b6ffa0(*(undefined4 *)(DAT_1202e818 + 0x10),0x42480000,0x42480000,0x40000000,&local_170,
                   0,"Top Dist: %f - Bottom Dist: %f - Desired Vel: %f",(double)fStack_140,
                   (double)(float)ppfVar21,(double)uStack_158._4_4_[4]);
      fVar19 = param_1[2];
      FUN_10b6ffa0(*(undefined4 *)(DAT_1202e818 + 0x10),0x42480000,0x42960000,0x40000000,&local_170,
                   0,"Ladder Orientation (%f, %f, %f) - Ladder Up Direction (%f, %f, %f)",
                   (double)*(float *)((int)fVar19 + 0x21c),(double)*(float *)((int)fVar19 + 0x220),
                   (double)*(float *)((int)fVar19 + 0x224),(double)*(float *)((int)fVar19 + 0x228),
                   (double)*(float *)((int)fVar19 + 0x22c),(double)*(float *)((int)fVar19 + 0x230));
    }
    fVar19 = param_1[4] * DAT_11de98e8;
    puStack_164 = (undefined8 *)(fVar19 * (float)puStack_164);
    fStack_180 = fVar19 * fStack_180;
    fStack_194 = fVar19 * fStack_194;
    fVar19 = SQRT((float)puStack_164 * (float)puStack_164 + fStack_180 * fStack_180 +
                  fStack_194 * fStack_194);
    if (DAT_11de9918 < fVar19) {
      fVar19 = DAT_11de9918 / fVar19;
      fStack_194 = fVar19 * fStack_194;
      puStack_164 = (undefined8 *)((float)puStack_164 * fVar19);
      fStack_180 = fStack_180 * fVar19;
    }
    fVar11 = (float10)(**(code **)(*(int *)param_1[0x89] + 0x79c))();
    fStack_18c = (float)(fVar11 * (float10)DAT_11de98e8);
    uStack_16c = (double)CONCAT44(uStack_16c._4_4_,fStack_18c);
    piStack_188 = (int *)(fStack_18c * fStack_198);
    fStack_190 = fStack_18c * uStack_16c._4_4_;
    fStack_18c = fStack_18c * fStack_184;
    if ((((uint)param_1[0x90] & 8) != 0) &&
       (DAT_11cbf084 <
        fStack_190 * fStack_190 + fStack_18c * fStack_18c + (float)piStack_188 * (float)piStack_188)
       ) {
      piStack_188 = (int *)((float)piStack_188 * DAT_11cc3e78);
      fStack_190 = fStack_190 * DAT_11cc3e78;
      fStack_18c = fStack_18c * DAT_11cc3e78;
    }
    piVar4 = piStack_188;
    if (*(int *)(DAT_120286b8 + 0x6d0) != 0) {
      fStack_110 = _DAT_11cca120;
      fStack_10c = _UNK_11cca124;
      fStack_108 = _UNK_11cca128;
      fStack_104 = _UNK_11cca12c;
      FUN_10b6ffa0();
    }
    *(ulonglong *)(param_1 + 0x92) = CONCAT44(fStack_18c,fStack_190);
    param_1[0x91] = 2.8026e-45;
    param_1[0x94] = (float)piStack_188;
    uStack_160 = (double)((float)piVar4 * *param_1 + fStack_194);
    uStack_160 = floor(uStack_160);
    cVar3 = FUN_10f11c10(2);
    if (cVar3 != '\0') {
      param_1[0x10c] = 0.0;
      param_1[0x10d] = 0.0;
      param_1[0x10e] = 0.0;
      return;
    }
  }
  else if (*(char *)(DAT_1202e818 + 0x208) != '\0') {
    pfStack_1a4 = (float *)0x10f41c25;
    piVar4 = (int *)(**(code **)(*(int *)param_1[0x89] + 0x20c))();
    if (piVar4 != (int *)0x0) {
      pfStack_1a4 = (float *)0x10f41c32;
      piVar4 = (int *)(**(code **)(*piVar4 + 0x6c))();
      if (piVar4 != (int *)0x0) {
        pfStack_1a4 = (float *)0x11ceb470;
        pfStack_1a8 = (float *)0x10f41c47;
        pcVar5 = (char *)(**(code **)(*piVar4 + 0x98))();
        if ((pcVar5 != (char *)0x0) && (*pcVar5 == '1')) {
          return;
        }
      }
    }
    pfStack_1a4 = (float *)0x1;
    pfStack_1a8 = (float *)0x10f41c5e;
    FUN_10f117f0();
    return;
  }
  return;
}

