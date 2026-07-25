
/* [RE-AUTO c0] */

void __thiscall FUN_11067e40(int param_1,float param_2,float param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_48 [8];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  float fStack_14;
  float local_10;
  float local_c;
  float local_8;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 0x24) + 0xc);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x78) != 0)) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x54);
    fVar7 = param_3 * DAT_11cbf074;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x5c);
    puVar3 = (undefined8 *)FUN_1106d120(local_48,fVar7 + param_2);
    fVar7 = DAT_11de9918;
    *(undefined8 *)(param_1 + 0x54) = *puVar3;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(puVar3 + 1);
    local_18 = (float)*(undefined8 *)(param_1 + 0x48);
    fStack_14 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    local_24._4_4_ = *(float *)(param_1 + 0x58) - fStack_14;
    local_1c = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x50);
    fStack_14 = 0.0;
    local_10 = 0.0;
    local_24._0_4_ = *(float *)(param_1 + 0x54) - local_18;
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (((*(byte *)(param_1 + 0x117) & 4) != 0 &&
          (piVar5 = *(int **)(*(int *)(param_1 + 0x10) + 0x24), piVar5 != (int *)0x0)))) &&
        (((**(code **)(*piVar5 + 0x3f0))(&local_30), fVar7 = DAT_11de9918, local_30 != DAT_11de9918
         || ((local_2c != DAT_11de9918 || (local_28 != DAT_11de9918)))))) &&
       ((local_30 != fStack_14 || ((local_2c != fStack_14 || (local_28 != fStack_14)))))) {
      pfVar4 = (float *)(**(code **)(*piVar5 + 0x3f0))(local_48);
      local_24._0_4_ = *pfVar4 * (float)local_24;
      local_24._4_4_ = pfVar4[1] * local_24._4_4_;
      local_1c = pfVar4[2] * local_1c;
      fVar7 = DAT_11de9918;
    }
    fVar8 = fStack_14;
    fVar11 = *(float *)(param_1 + 0x88) * local_24._4_4_ +
             (float)local_24 * *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x8c) * local_1c;
    fVar10 = *(float *)(param_1 + 0x94) * (float)local_24 +
             *(float *)(param_1 + 0x98) * local_24._4_4_ + *(float *)(param_1 + 0x9c) * local_1c;
    local_1c = *(float *)(param_1 + 0xa4) * (float)local_24 +
               *(float *)(param_1 + 0xa8) * local_24._4_4_ + *(float *)(param_1 + 0xac) * local_1c;
    local_24 = CONCAT44(fVar10,fVar11);
    fVar9 = *(float *)(param_1 + 0xc4);
    if ((fStack_14 < fVar9) && (*(float *)(param_1 + 0xc0) <= fVar9)) {
      local_c = *(float *)(param_1 + 0xc0) / fVar9;
      fVar9 = local_c * local_c;
      fVar7 = fVar9 * local_c;
      fVar9 = ((fVar7 * DAT_11de9990 - fVar9 * DAT_11cc1020) + DAT_11de9918) * fStack_14 +
              (fVar9 * DAT_11cc1020 - fVar7 * DAT_11de9990) +
              ((fVar7 - fVar9 * DAT_11de9990) + local_c) * fStack_14 + (fVar7 - fVar9) * fStack_14;
      fVar7 = DAT_11de9918 - fVar9;
      local_1c = *(float *)(param_1 + 0xbc) * fVar7 * param_3 + local_1c * fVar9;
      local_24 = CONCAT44(*(float *)(param_1 + 0xb8) * fVar7 * param_3 + fVar10 * fVar9,
                          *(float *)(param_1 + 0xb4) * fVar7 * param_3 + fVar11 * fVar9);
      fVar7 = DAT_11de9918;
    }
    local_8 = fStack_14;
    if (*(float *)(param_1 + 0xd4) <= fStack_14) {
      piVar5 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
      fVar9 = fStack_14;
      fVar10 = fStack_14;
      local_34 = local_1c;
      if (((piVar5 != (int *)0x0) &&
          (piVar5 = (int *)(**(code **)(*piVar5 + 0x198))(), fVar9 = local_8, fVar7 = DAT_11de9918,
          fVar10 = fStack_14, piVar5 != (int *)0x0)) &&
         (cVar2 = (**(code **)(*piVar5 + 0x34))(), fVar9 = local_8, fVar7 = DAT_11de9918,
         fVar10 = fStack_14, cVar2 != '\0')) {
        (**(code **)(*piVar5 + 0x38))(&local_30);
        (**(code **)(*piVar1 + 200))(&local_3c);
        local_40 = local_28 - local_34;
        local_18 = local_30 - local_3c;
        fStack_14 = local_2c - local_38;
        local_10 = local_40;
        (**(code **)(*piVar5 + 0x30))(0);
        fVar8 = local_10;
        fVar9 = fStack_14;
        fVar7 = DAT_11de9918;
        fVar10 = local_18;
      }
    }
    else {
      local_18 = *(float *)(param_1 + 200) * param_3;
      fVar9 = *(float *)(param_1 + 0xcc) * param_3;
      local_34 = *(float *)(param_1 + 0xd0) * param_3;
      fVar8 = local_34;
      fVar10 = local_18;
      fStack_14 = fVar9;
      local_10 = local_34;
    }
    fVar7 = fVar7 / param_3;
    fVar10 = fVar10 + (float)local_24;
    fVar9 = fVar9 + local_24._4_4_;
    local_1c = fVar8 + local_1c;
    local_24 = CONCAT44(fVar9,fVar10);
    local_40 = local_1c * fVar7;
    *(ulonglong *)(param_1 + 0xdc) = CONCAT44(fVar9 * fVar7,fVar10 * fVar7);
    *(float *)(param_1 + 0xe4) = local_40;
    iVar6 = (**(code **)(*piVar1 + 0x16c))();
    if (iVar6 != 0) {
      cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 0x10))(piVar1);
      if (cVar2 == '\0') {
        (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 8))
                  (piVar1,*(byte *)(param_1 + 0x116) >> 3 & 1);
      }
      (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 0x1c))(piVar1,&local_24,2);
    }
  }
  return;
}

