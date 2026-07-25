
// ===== [d0] FUN_1056c440 @1056c440  (351 bytes) =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1056c440(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_24 [12];
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_5;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd8) == '\0') {
    uVar3 = FUN_1056c5a0();
    return uVar3;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (((1 < (uint)(piVar1[1] - *piVar1 >> 2)) && (4 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar1[3] + 4))) {
    FUN_103d8940(*(int *)(piVar1[3] + 4),local_24);
    cVar2 = FUN_10552d10();
    if (((cVar2 != '\0') &&
        (piVar1 = *(int **)(param_1 + 0x2c), 2 < (uint)(piVar1[1] - *piVar1 >> 2))) &&
       ((8 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU) && (-1 < *(int *)(piVar1[3] + 8))))) {
      FUN_103d8940(*(int *)(piVar1[3] + 8),&local_18);
      cVar2 = FUN_10552d10();
      if (cVar2 != '\0') {
        iVar4 = **(int **)(DAT_113f3a18 + 0x50);
        uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
        iVar4 = (**(code **)(iVar4 + 0x2c))(uVar3);
        if (iVar4 != 0) {
          local_5 = 0;
          cVar2 = FUN_10569560(5,&local_5);
          if (cVar2 != '\0') {
            if (SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10) <
                (float)DAT_113076e8) {
              return 2;
            }
            return 3;
          }
        }
      }
    }
  }
  return 1;
}


// ===== [d1] FUN_1056c5a0 @1056c5a0  (1059 bytes) =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_1056c5a0(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
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
  int *local_1c;
  float local_18;
  float local_14;
  float local_10;
  int *local_c;
  undefined1 local_5;
  
  local_c = param_1;
  uVar3 = (**(code **)(*(int *)param_1[0x15] + 0xc))();
  FUN_103dd050(uVar3);
  piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x68))();
  iVar6 = *piVar4;
  uVar3 = (**(code **)(*(int *)local_c[0x15] + 0xc))();
  piVar5 = (int *)(**(code **)(iVar6 + 0xc))(uVar3);
  piVar1 = local_c;
  piVar4 = (int *)local_c[0xb];
  local_1c = piVar5;
  if (((1 < (uint)(piVar4[1] - *piVar4 >> 2)) && (4 < (int)(piVar4[4] - piVar4[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar4[3] + 4))) {
    FUN_103d8940(*(int *)(piVar4[3] + 4),&local_34);
    cVar2 = FUN_10552d10();
    if (((cVar2 != '\0') && (piVar4 = (int *)piVar1[0xb], 2 < (uint)(piVar4[1] - *piVar4 >> 2))) &&
       ((8 < (int)(piVar4[4] - piVar4[3] & 0xfffffffcU) && (-1 < *(int *)(piVar4[3] + 8))))) {
      FUN_103d8940(*(int *)(piVar4[3] + 8),&local_28);
      cVar2 = FUN_10552d10();
      if (cVar2 != '\0') {
        local_18 = SQRT(local_24 * local_24 + local_28 * local_28 + local_20 * local_20);
        if (local_18 < (float)DAT_113076e8) {
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x380))(&DAT_1139eb9e);
          }
          return 2;
        }
        iVar6 = **(int **)(DAT_113f3a18 + 0x50);
        uVar3 = (**(code **)(*(int *)piVar1[0x15] + 0xc))();
        piVar4 = (int *)(**(code **)(iVar6 + 0x2c))(uVar3);
        if (piVar4 == (int *)0x0) {
          (**(code **)(*local_c + 0x24))(1);
          return 1;
        }
        fVar7 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x20))();
        fVar8 = (float)(fVar7 * (float10)DAT_113c12f8) * DAT_112fe81c;
        local_40 = local_34;
        local_3c = local_30;
        local_38 = local_2c;
        local_10 = local_34 * fVar8;
        if ((float)((uint)local_28 & DAT_112fcb10) <= local_34 * fVar8) {
          local_10 = (float)((uint)local_28 & DAT_112fcb10);
        }
        local_14 = local_30 * fVar8;
        if ((float)((uint)local_24 & DAT_112fcb10) <= local_30 * fVar8) {
          local_14 = (float)((uint)local_24 & DAT_112fcb10);
        }
        local_18 = local_2c * fVar8;
        if ((float)((uint)local_20 & DAT_112fcb10) <= local_2c * fVar8) {
          local_18 = (float)((uint)local_20 & DAT_112fcb10);
        }
        if (local_28 <= DAT_113c1280) {
          iVar6 = -1;
        }
        else {
          iVar6 = 1;
        }
        local_10 = (float)iVar6 * local_10;
        if (local_24 <= DAT_113c1280) {
          iVar6 = -1;
        }
        else {
          iVar6 = 1;
        }
        local_14 = (float)iVar6 * local_14;
        if (local_20 <= DAT_113c1280) {
          iVar6 = -1;
        }
        else {
          iVar6 = 1;
        }
        piVar1 = (int *)local_c[0xb];
        local_18 = (float)iVar6 * local_18;
        if (((3 < (uint)(piVar1[1] - *piVar1 >> 2)) &&
            (0xc < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar1[3] + 0xc)))
        {
          FUN_103d8940(*(int *)(piVar1[3] + 0xc),&local_5);
          cVar2 = FUN_101c36a0();
          if (cVar2 != '\0') {
            (**(code **)(*piVar4 + 0x78))(&local_7c);
            local_4c = local_78 * local_14 + local_7c * local_10 + local_74 * local_18;
            local_48 = local_68 * local_14 + local_6c * local_10 + local_64 * local_18;
            local_44 = local_58 * local_14 + local_5c * local_10 + local_54 * local_18;
            cVar2 = FUN_103d9e70(0);
            if (cVar2 == '\0') {
              iVar6 = (**(code **)(*piVar4 + 0x16c))();
              if (iVar6 == 0) goto LAB_1056c955;
            }
            else {
              (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 8))(piVar4,2);
            }
            (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x1c))(piVar4,&local_4c,3);
LAB_1056c955:
            local_28 = local_28 - local_10;
            local_24 = local_24 - local_14;
            local_20 = local_20 - local_18;
            FUN_10551270(2,&local_28);
            return 3;
          }
        }
        if (local_1c == (int *)0x0) {
          return 1;
        }
        iVar6 = *local_1c;
        goto LAB_1056c9ad;
      }
    }
  }
  if (piVar5 == (int *)0x0) {
    return 1;
  }
  iVar6 = *piVar5;
LAB_1056c9ad:
  (**(code **)(iVar6 + 0x380))(&DAT_1139eb9e);
  return 1;
}


// ===== [d1] FUN_103d8940 @103d8940  (10 bytes) =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_103d8940(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb4);
}


// ===== [d1] FUN_10569560 @10569560  (73 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10569560(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar2 = piVar1[1] - *piVar1 >> 2;
  if (((param_2 < uVar2) && (uVar2 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar2)) &&
     (uVar2 = *(uint *)(piVar1[3] + param_2 * 4), -1 < (int)uVar2)) {
    FUN_103d8940(uVar2,param_3);
    uVar2 = FUN_101c36a0();
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}


// ===== [d1] FUN_10552d10 @10552d10  (83 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10552d10(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((param_2 != 0xffffffff) && (param_2 < 1000000)) {
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      cVar1 = FUN_10551180(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}


// ===== [d2] FUN_103d9e70 @103d9e70  (44 bytes) =====

/* [RE-AUTO c0] */

undefined1 FUN_103d9e70(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_5;
  
  uVar2 = DAT_116f8908;
  cVar1 = FUN_103db9b0(param_1,&local_5);
  if (cVar1 != '\0') {
    uVar2 = local_5;
  }
  return uVar2;
}


// ===== [d2] FUN_103dd050 @103dd050  (179 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103dd050(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined1 local_c [8];
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = param_1 + 8;
  iVar5 = iVar4;
  if (iVar1 != 0) {
    do {
      if (*(uint *)(iVar1 + 0x10) < param_2) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar5 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar5 == iVar4) goto LAB_103dd0c4;
    if (param_2 < *(uint *)(iVar5 + 0x10)) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 != iVar4) {
    if ((*(char *)(param_1 + 0x50) != '\0') &&
       (piVar3 = (int *)FUN_103de9f0(local_c,&param_2), *piVar3 != param_1 + 0x38)) {
      return 0;
    }
    iVar4 = FUN_103de960(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
LAB_103dd0c4:
  if ((*(char *)(param_1 + 0x50) != '\0') &&
     (FUN_103de910(local_c,&param_2), unaff_ESI != param_1 + 0x20)) {
    iVar4 = FUN_103de960(&param_2);
    return *(undefined4 *)(iVar4 + 8);
  }
  return 0;
}


// ===== [d2] FUN_10551270 @10551270  (120 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10551270(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  uVar3 = piVar1[1] - *piVar1 >> 2;
  if ((param_2 < uVar3) && (uVar3 = piVar1[4] - piVar1[3] >> 2, (int)param_2 < (int)uVar3)) {
    uVar3 = piVar1[3];
    uVar2 = *(uint *)(uVar3 + param_2 * 4);
    if (-1 < (int)uVar2) {
      uVar3 = FUN_103d8940();
      if (uVar2 != 0xffffffff) {
        uVar3 = FUN_103c9820(uVar2);
        if (uVar2 < 1000000) {
          uVar3 = FUN_10551520(uVar2,*param_3,param_3[1],param_3[2]);
          return uVar3;
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}


// ===== [d2] FUN_101c36a0 @101c36a0  (113 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c36a0(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 != 0xffffffff) {
    if (999999 < param_2) {
      uVar2 = FUN_101c3380(param_2 - 1000000,param_3);
      return uVar2;
    }
    if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
      cVar1 = FUN_101c4350(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    FUN_103c5000(0,param_2,*(undefined4 *)(param_1 + 0x14));
  }
  return 0;
}


// ===== [d2] FUN_10551180 @10551180  (29 bytes) =====

/* [RE-AUTO c0] */

uint __thiscall FUN_10551180(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xc) + 1;
  switch(uVar1) {
  case 0:
  case 7:
    uVar1 = FUN_10550ea0(param_1 + 0x1c,param_2);
    return uVar1;
  case 1:
    uVar1 = FUN_105fc040(param_1 + 0x1c,param_2);
    return uVar1;
  case 2:
    uVar1 = FUN_10551110(param_1 + 0x1c,param_2);
    return uVar1;
  case 3:
    uVar1 = FUN_10550f00(param_1 + 0x1c,param_2);
    return uVar1;
  case 4:
    uVar1 = FUN_10551140(param_1 + 0x1c,param_2);
    return uVar1;
  case 5:
    uVar1 = FUN_10550ed0(param_1 + 0x1c,param_2);
    return uVar1;
  case 6:
    uVar1 = FUN_10550e70(param_1 + 0x1c,param_2);
    return uVar1;
  case 8:
    uVar1 = FUN_10550f60(param_1 + 0x1c,param_2);
    return uVar1;
  case 9:
    uVar1 = FUN_10550f30(param_1 + 0x1c,param_2);
    return uVar1;
  default:
    return uVar1 & 0xffffff00;
  }
}


// ===== [d2] FUN_103c5000 @103c5000  (386 bytes) =====

/* [RE-AUTO c0]
   calls: _snprintf_s
   strings:
     ""SetFact Fail: invalid index ""
     ""GetFact Fail: invalid index ""
     ""bb %s, ""
     ""entity %s, ""
     ""bt %s, "" */

void FUN_103c5000(char param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 **ppuVar3;
  char *pcVar4;
  char *pcStack_138;
  char *pcStack_134;
  undefined1 local_128 [4];
  char **ppcStack_124;
  char acStack_120 [8];
  undefined1 *local_118;
  undefined1 *local_114;
  undefined1 local_110;
  uint local_c;
  
  local_118 = local_128;
  local_114 = local_128;
  local_c = DAT_113dd8c0 ^ (uint)local_128;
  local_128[0] = 0;
  local_110 = 0;
  if (param_1 == '\0') {
    pcStack_134 = "GetFact Fail: invalid index ";
    pcStack_138 = "GetFact Fail: invalid index ";
  }
  else {
    pcStack_134 = "SetFact Fail: invalid index ";
    pcStack_138 = "SetFact Fail: invalid index ";
  }
  pcStack_134 = pcStack_134 + 0x1c;
  FUN_100282d0();
  _snprintf_s((char *)&local_118,0xff,0xffffffff,"%d, ");
  ppuVar3 = &local_118;
  do {
    cVar1 = *(char *)ppuVar3;
    ppuVar3 = (undefined1 **)((int)ppuVar3 + 1);
  } while (cVar1 != '\0');
  FUN_10028a60();
  if (param_3 != 0) {
    _snprintf_s(acStack_120,0xff,0xffffffff,"bb %s, ");
    pcVar4 = acStack_120;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_10028a60();
    iVar2 = *(int *)(param_3 + 0x94);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x16c) != *(int *)(iVar2 + 0x168)) {
        _snprintf_s(acStack_120,0xff,0xffffffff,"entity %s, ");
        FUN_1002bca0();
      }
      if (*(int *)(iVar2 + 0x124) != 0) {
        _snprintf_s(acStack_120,0xff,0xffffffff,"bt %s, ");
        FUN_1002bca0();
      }
    }
  }
  if ((ppcStack_124 != &pcStack_138) && (ppcStack_124 != (char **)0x0)) {
    FUN_10653dc0();
  }
  FUN_112bed8e();
  return;
}

