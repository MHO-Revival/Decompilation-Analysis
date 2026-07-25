// FUN_10f82500 @ 10f82500
// ramp offsets referenced: [536, 540, 544, 548, 552]


/* [RE-AUTO c0]
   calls: LAB_12402b6b+1 */

void FUN_10f82500(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined1 *local_248;
  undefined1 *local_22c;
  undefined4 local_54;
  undefined4 local_24;
  undefined8 local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_8 = 5.60519e-45;
  cVar2 = FUN_10f5c510(&local_8,1);
  if ((cVar2 != '\0') && ((short)param_1[0x6b] == 1)) {
    fVar6 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x1c))(0);
    local_8 = (float)fVar6;
    local_c = (float)param_1[0x82] + local_8;
    param_1[0x82] = (int)local_c;
    iVar3 = (**(code **)(**(int **)(param_1[6] + 0x100) + 0x4d8))();
    if (((0.0 < *(float *)(iVar3 + 4)) || (*(char *)(iVar3 + 8) != '\0')) &&
       (DAT_11de98e8 < local_c)) {
      local_18 = 0.0;
      local_24 = 0;
      (**(code **)(*param_1 + 0x2c))(0,0,0,0,0,0,0);
      func_0x12402b6c(2,1,1);
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x83);
    local_18 = (float)param_1[0x85];
    local_20._0_4_ = (float)uVar1;
    fVar7 = (float)param_1[0x87] * local_c;
    local_248 = &DAT_1201fc98;
    fVar8 = (float)param_1[0x88] * local_c;
    local_22c = &DAT_1201fc98;
    local_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_54 = 0;
    local_2fc = 0x400000;
    local_2f8 = 0;
    local_14 = (float)param_1[0x8a] * local_c;
    local_8 = (float)param_1[0x8b] * local_c;
    local_c = (float)param_1[0x89] * local_c + (float)local_20 + (float)param_1[0x86] * local_c;
    local_14 = local_14 + local_20._4_4_ + fVar7;
    local_8 = local_8 + local_18 + fVar8;
    local_20 = uVar1;
    pfVar4 = (float *)(**(code **)(**(int **)(*(int *)(param_1[6] + 0x100) + 0xc) + 0x74))();
    local_10 = pfVar4[1] * local_14 + *pfVar4 * local_c + pfVar4[2] * local_8;
    fVar11 = pfVar4[5] * local_14 + pfVar4[4] * local_c + pfVar4[6] * local_8;
    fVar10 = pfVar4[9] * local_14 + pfVar4[8] * local_c + pfVar4[10] * local_8;
    fVar7 = fVar11 * fVar11 + local_10 * local_10 + fVar10 * fVar10 + DAT_11de98a0;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar8 = (DAT_11de9938 - fVar8 * fVar7 * fVar8 * DAT_11de98e8) * fVar8;
    fVar7 = SQRT(local_14 * local_14 + local_c * local_c + local_8 * local_8);
    local_18 = fVar10 * fVar8 * fVar7;
    local_20 = CONCAT44(fVar11 * fVar8 * fVar7,local_10 * fVar8 * fVar7);
    FUN_10ddd690(&local_20);
    piVar5 = (int *)(**(code **)(**(int **)(param_1[6] + 0x100) + 0x198))();
    (**(code **)(*piVar5 + 4))(&local_2fc);
    FUN_10ba1fc0();
  }
  return;
}

