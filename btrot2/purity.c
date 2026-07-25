
// ######## 10552f00 ########

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


// ######## 10552be0 ########

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


// ######## 105d3220  FUN_105d3220 (827 bytes) ########

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105d3220(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 local_7c [36];
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = FUN_103d8610(0);
  piVar3 = *(int **)(param_1 + 0x2c);
  if (cVar1 == '\0') {
    if ((uint)(piVar3[1] - *piVar3 >> 2) < 3) {
      return 1;
    }
    if ((int)(piVar3[4] - piVar3[3] & 0xfffffffcU) < 9) {
      return 1;
    }
    if (*(int *)(piVar3[3] + 8) < 0) {
      return 1;
    }
    FUN_103d8940(*(int *)(piVar3[3] + 8),&local_8);
    cVar1 = FUN_101c3720();
  }
  else {
    if (piVar3[1] - *piVar3 >> 2 == 0) {
      return 1;
    }
    if ((int)(piVar3[4] - piVar3[3] & 0xfffffffcU) < 1) {
      return 1;
    }
    if (*(int *)piVar3[3] < 0) {
      return 1;
    }
    FUN_103d8940(*(int *)piVar3[3],&local_8);
    cVar1 = FUN_101c3720();
  }
  if ((cVar1 != '\0') &&
     (local_c = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_8),
     local_c != (int *)0x0)) {
    iVar5 = **(int **)(DAT_113f3a18 + 0x50);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar3 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    (**(code **)(*local_c + 200))(&local_40);
    FUN_10551270(1,&local_40);
    pfVar4 = (float *)(**(code **)(*piVar3 + 0xd8))();
    local_34 = *pfVar4;
    local_30 = pfVar4[1];
    local_2c = pfVar4[2];
    local_28 = local_40;
    local_24 = local_3c;
    local_20 = local_38;
    pfVar4 = (float *)(**(code **)(*piVar3 + 200))(local_58);
    local_1c = *pfVar4;
    local_18 = pfVar4[1];
    local_14 = pfVar4[2];
    local_4c = 0;
    local_48 = 0;
    local_44 = 0.0;
    if (((DAT_112fca68 < (float)((uint)(local_1c - local_28) & DAT_112fcb10)) ||
        (DAT_112fca68 < (float)((uint)(local_18 - local_24) & DAT_112fcb10))) ||
       (DAT_112fca68 < (float)((uint)(local_14 - local_20) & DAT_112fcb10))) {
      fVar8 = local_28 - *pfVar4;
      fVar7 = local_24 - pfVar4[1];
      local_1c = fVar8 * DAT_112fcb00;
      local_28 = 0.0;
      local_24 = 0.0;
      local_18 = fVar7 * DAT_112fcb00;
      local_20 = 1.0;
      local_10 = local_30 * fVar8 - local_34 * fVar7;
      fVar7 = local_18 * local_18 + local_1c * local_1c + DAT_112fca5c;
      auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      local_14 = auVar6._0_4_;
      local_14 = (DAT_112fcaac - local_14 * fVar7 * local_14 * DAT_113c12b8) * local_14;
      local_1c = local_1c * local_14;
      local_18 = local_18 * local_14;
      local_14 = local_14 * DAT_113c1280;
      uVar2 = FUN_10552f00(local_7c,&local_1c,&local_28,0);
      FUN_10552be0(uVar2);
      local_c = (int *)(local_20 * DAT_1130193c);
      FUN_104878c0(&local_34);
      FUN_10552be0(local_7c);
      local_44 = (float)((uint)(local_2c * DAT_1130193c - (float)local_c) & DAT_112fcb10);
      if (DAT_11301d98 < local_44) {
        local_44 = DAT_11301ccc - local_44;
      }
      if (local_10 <= DAT_113c1280) {
        iVar5 = -1;
      }
      else {
        iVar5 = 1;
      }
      local_44 = (float)iVar5 * local_44;
    }
    FUN_10551270(3,&local_4c);
    return 2;
  }
  return 1;
}


// ######## 105d3560  FUN_105d3560 (494 bytes) ########

/* [RE-AUTO c0]
   strings:
     ""InputBBName""
     ""TargetPos""
     ""TargetID""
     ""TargetOrientation"" */

void FUN_105d3560(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("InputBBName","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("CSetTargetIDOrientation","");
  FUN_103cf720(local_1c,local_34,0,1,1);
  FUN_103cf810();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("TargetPos","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSetTargetIDOrientation","");
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
  FUN_1001ea30("TargetID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSetTargetIDOrientation","");
  FUN_103cf720(local_34,local_1c,2);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_1001ea30("TargetOrientation","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_1001ea30("CSetTargetIDOrientation","");
  FUN_103cf720(local_34,local_1c,3);
  FUN_103cf8f0();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10653dc0(local_8);
  }
  return;
}


// ######## 105d3760  FUN_105d3760 (654 bytes) ########

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105d3760(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 local_78 [36];
  undefined1 local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  cVar1 = FUN_10552e70(0,&local_48);
  if (cVar1 == '\0') {
    return 1;
  }
  iVar5 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  pfVar4 = (float *)(**(code **)(*piVar3 + 0xd8))();
  local_30 = *pfVar4;
  local_2c = pfVar4[1];
  local_28 = pfVar4[2];
  local_24 = local_48;
  local_20 = local_44;
  local_1c = local_40;
  pfVar4 = (float *)(**(code **)(*piVar3 + 200))(local_54);
  local_18 = *pfVar4;
  local_14 = pfVar4[1];
  local_10 = pfVar4[2];
  local_3c = 0;
  local_38 = 0;
  local_34 = 0.0;
  if (((DAT_112fca68 < (float)((uint)(local_18 - local_24) & DAT_112fcb10)) ||
      (DAT_112fca68 < (float)((uint)(local_14 - local_20) & DAT_112fcb10))) ||
     (DAT_112fca68 < (float)((uint)(local_10 - local_1c) & DAT_112fcb10))) {
    fVar8 = local_24 - *pfVar4;
    fVar7 = local_20 - pfVar4[1];
    local_18 = fVar8 * DAT_112fcb00;
    local_24 = 0.0;
    local_20 = 0.0;
    local_14 = fVar7 * DAT_112fcb00;
    local_1c = 1.0;
    local_c = local_2c * fVar8 - local_30 * fVar7;
    fVar7 = local_14 * local_14 + local_18 * local_18 + DAT_112fca5c;
    auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    local_10 = auVar6._0_4_;
    local_10 = (DAT_112fcaac - local_10 * fVar7 * local_10 * DAT_113c12b8) * local_10;
    local_18 = local_18 * local_10;
    local_14 = local_14 * local_10;
    local_10 = local_10 * DAT_113c1280;
    uVar2 = FUN_10552f00(local_78,&local_18,&local_24,0);
    FUN_10552be0(uVar2);
    local_8 = local_1c * DAT_1130193c;
    FUN_104878c0(&local_30);
    FUN_10552be0(local_78);
    local_34 = (float)((uint)(local_28 * DAT_1130193c - local_8) & DAT_112fcb10);
    if (DAT_11301d98 < local_34) {
      local_34 = DAT_11301ccc - local_34;
    }
    if (local_c <= DAT_113c1280) {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
    local_34 = (float)iVar5 * local_34;
  }
  FUN_10551270(1,&local_3c);
  return 2;
}

