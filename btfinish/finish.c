
// ######## nodeVtbl0_init_103d8a40  (70 bytes) ########

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


// ######## nodeVtbl1_103d8b60  (13 bytes) ########

void __fastcall FUN_103d8b60(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x103d8b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    return;
  }
  return;
}


// ######## nodeVtbl2_103dca70  (13 bytes) ########

/* [RE-AUTO c0] */

void __fastcall FUN_103dca70(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  return;
}


// ######## nodeVtbl3_shared_103dc9e0  (83 bytes) ########

/* [RE-AUTO c0] */

void __thiscall FUN_103dc9e0(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (((iVar1 != 0) && (*(char *)(*DAT_116f75dc + 0x68) != '\0')) &&
     (*(char *)(iVar1 + 0xfc) != '\0')) {
    *(undefined1 *)(iVar1 + 0xfc) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0);
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (param_2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x103dca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 0x24))();
    return;
  }
  return;
}


// ######## rotToPos_registrar_105759b0  (370 bytes) ########

/* [RE-AUTO c0]
   strings:
     ""TargetPos""
     ""CEntityRotateToPos""
     ""RotateSpeed""
     ""RotateSpeedByAnim"" */

void FUN_105759b0(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("TargetPos","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CEntityRotateToPos","");
  FUN_103cf720(local_1c,local_34,0);
  FUN_103cf8f0();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("RotateSpeed","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityRotateToPos","");
  FUN_103cf720(local_34,local_1c,1);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("RotateSpeedByAnim","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CEntityRotateToPos","");
  FUN_103cf720(local_34,local_1c,2);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}


// ######## oriFromDirUp_10552f00  (1015 bytes) ########

/* [RE-AUTO c0] */

void FUN_10552f00(float *param_1,float *param_2,float *param_3,float param_4)

{
  float10 fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_88 [36];
  float local_64 [3];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [10];
  float local_c;
  float local_8;
  
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_c = *param_2;
  if (((DAT_113c1280 < (float)((uint)local_c & DAT_112fcb10)) ||
      (DAT_113c1280 < (float)((uint)param_2[1] & DAT_112fcb10))) ||
     (DAT_113c1280 < (float)((uint)param_2[2] & DAT_112fcb10))) {
    local_34[4] = param_2[1];
    local_34[7] = param_2[2];
    fVar5 = local_34[4] * local_34[4] + local_c * local_c + local_34[7] * local_34[7] + DAT_112fca5c
    ;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = (DAT_112fcaac - fVar6 * fVar5 * fVar6 * DAT_113c12b8) * fVar6;
    local_c = local_c * fVar6;
    local_34[4] = local_34[4] * fVar6;
    local_34[7] = local_34[7] * fVar6;
    fVar5 = local_38;
    fVar6 = local_40;
    fVar8 = local_3c;
    if (((local_c == DAT_113c1280) && (local_34[4] == DAT_113c1280)) &&
       (((float)((uint)*param_3 & DAT_112fcb10) <= DAT_113c12a0 &&
        (((float)((uint)param_3[1] & DAT_112fcb10) <= DAT_113c12a0 &&
         ((float)((uint)(param_3[2] - DAT_113c12c8) & DAT_112fcb10) <= DAT_113c12a0)))))) {
      fVar5 = DAT_113c1280;
      fVar6 = (float)((uint)local_34[7] ^ DAT_113c1410);
      fVar8 = DAT_113c1280;
    }
    local_34[0] = fVar8 * local_34[7] - fVar5 * local_34[4];
    local_8 = fVar5 * local_c - fVar6 * local_34[7];
    local_34[9] = fVar6 * local_34[4] - fVar8 * local_c;
    fVar5 = local_8 * local_8 + local_34[0] * local_34[0] + local_34[9] * local_34[9] + DAT_112fca5c
    ;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = (DAT_112fcaac - fVar6 * fVar5 * fVar6 * DAT_113c12b8) * fVar6;
    local_34[9] = local_34[9] * fVar6;
    local_8 = local_8 * fVar6;
    local_34[0] = local_34[0] * fVar6;
    fVar8 = local_8 * local_34[7] - local_34[9] * local_34[4];
    fVar9 = local_34[9] * local_c - local_34[0] * local_34[7];
    fVar10 = local_34[0] * local_34[4] - local_8 * local_c;
    fVar6 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10 + DAT_112fca5c;
    auVar7 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar5 = auVar7._0_4_;
    local_34[1] = local_c;
    local_34[3] = local_8;
    fVar5 = (DAT_112fcaac - fVar5 * fVar6 * fVar5 * DAT_113c12b8) * fVar5;
    local_34[2] = fVar8 * fVar5;
    local_34[5] = fVar9 * fVar5;
    local_34[6] = local_34[9];
    local_34[8] = fVar10 * fVar5;
    if (param_4 != DAT_113c1280) {
      fVar1 = (float10)fcos((float10)param_4);
      fVar4 = (float10)fsin((float10)param_4);
      local_64[0] = (float)fVar1;
      local_64[2] = (float)fVar4;
      local_4c = (uint)local_64[2] ^ DAT_113c1410;
      local_64[1] = 0.0;
      local_58 = 0;
      local_54 = 0x3f800000;
      local_50 = 0;
      local_48 = 0;
      local_44 = local_64[0];
      local_34[9] = local_64[0];
      local_c = local_64[2];
      pfVar2 = (float *)FUN_1052c1b0(local_88,local_34,local_64);
      local_34[0] = *pfVar2;
      local_34[1] = pfVar2[1];
      local_34[2] = pfVar2[2];
      local_34[3] = pfVar2[3];
      local_34[4] = pfVar2[4];
      local_34[5] = pfVar2[5];
      local_34[6] = pfVar2[6];
      local_34[7] = pfVar2[7];
      local_34[8] = pfVar2[8];
    }
  }
  else {
    local_34[0] = 1.0;
    local_34[1] = 0.0;
    local_34[2] = 0.0;
    local_34[3] = 0.0;
    local_34[4] = 1.0;
    local_34[5] = 0.0;
    local_34[6] = 0.0;
    local_34[7] = 0.0;
    local_34[8] = 1.0;
  }
  pfVar2 = local_34;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ######## anglesFromOri_10552be0  (189 bytes) ########

/* [RE-AUTO c0]
   calls: _CIasin */

float * __thiscall FUN_10552be0(float *param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)_CIasin();
  param_1[1] = (float)fVar1;
  if ((float10)DAT_112fca7c <= ABS(ABS(fVar1) - (float10)DAT_11301cf0)) {
    fVar1 = (float10)fpatan((float10)param_2[7],(float10)param_2[8]);
    *param_1 = (float)fVar1;
    fVar1 = (float10)fpatan((float10)param_2[3],(float10)*param_2);
    param_1[2] = (float)fVar1;
    return param_1;
  }
  *param_1 = 0.0;
  fVar1 = (float10)fpatan(-(float10)param_2[1],(float10)param_2[4]);
  param_1[2] = (float)fVar1;
  return param_1;
}


// ######## oriFromFwd_104878c0  (192 bytes) ########

/* [RE-AUTO c0] */

void __thiscall FUN_104878c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_1 = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = (float)((uint)param_2[2] ^ DAT_113c1410);
  param_1[6] = 0.0;
  param_1[7] = param_2[2];
  param_1[8] = 0.0;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if ((float)DAT_112fe838 < fVar3) {
    fVar2 = -fVar2 * (1.0 / fVar3);
    fVar1 = fVar1 * (1.0 / fVar3);
    *param_1 = fVar1;
    param_1[1] = *param_2;
    param_1[2] = param_2[2] * fVar2;
    param_1[3] = fVar2;
    param_1[4] = param_2[1];
    fVar2 = param_2[2];
    param_1[6] = 0.0;
    param_1[5] = -fVar2 * fVar1;
    param_1[7] = param_2[2];
    param_1[8] = fVar3;
    return;
  }
  return;
}


// ######## ctxFlagSetter_103e0540  (16 bytes) ########

/* [RE-AUTO c0] */

void __thiscall FUN_103e0540(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd8) = param_2;
  return;
}


// ######## ctxFlagSet1_103e0ef0  (106 bytes) ########

/* [RE-AUTO c0] */

void __fastcall FUN_103e0ef0(int *param_1)

{
  if (param_1[0x3b] != 0) {
    (**(code **)(*param_1 + 0x14))(0);
    *(undefined1 *)(param_1 + 0x36) = 1;
    if (*(char *)(param_1[0x3b] + 0x28) == '\0') {
      if ((int *)param_1[0x31] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x31] + 0x24))(1);
      }
      param_1[0x31] = param_1[0x29];
      param_1[0x2e] = 0;
    }
    else if (param_1[0x21] != 0) {
      FUN_10408410();
      param_1[0x2e] = 0;
      return;
    }
  }
  return;
}

