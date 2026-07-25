
// [d0] FUN_1056c5a0 @1056c5a0  (emitted in an earlier root)

// [d1] FUN_103d9e70 @103d9e70  (emitted in an earlier root)

// [d1] FUN_103d8940 @103d8940  (emitted in an earlier root)

// [d1] FUN_103dd050 @103dd050  (emitted in an earlier root)

// [d1] FUN_10552d10 @10552d10  (emitted in an earlier root)

// [d1] FUN_10551270 @10551270  (emitted in an earlier root)

// [d1] FUN_101c36a0 @101c36a0  (emitted in an earlier root)

// ===== [d2] FUN_103db9b0 @103db9b0  (120 bytes) =====

/* [RE-AUTO c0] */

bool __thiscall FUN_103db9b0(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
      iVar4 = *(int *)(*piVar1 + param_2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      cVar3 = FUN_101c4350(param_3);
      return cVar3 != '\0';
    }
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      if (-1 < *(int *)(piVar1[3] + param_2 * 4)) {
        uVar2 = FUN_101c36a0();
        return (bool)uVar2;
      }
    }
  }
  return false;
}


// ===== [d2] FUN_103de9f0 @103de9f0  (67 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103de9f0(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    do {
      if (*(uint *)(iVar1 + 0x10) < *param_3) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar3 != param_1) {
      if (*param_3 < *(uint *)(iVar3 + 0x10)) {
        iVar3 = param_1;
      }
      *param_2 = iVar3;
      return;
    }
  }
  *param_2 = iVar3;
  return;
}


// ===== [d2] FUN_103de960 @103de960  (133 bytes) =====

/* [RE-AUTO c0] */

uint * __thiscall FUN_103de960(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_c;
  
  local_c = 0;
  puVar1 = param_1;
  if ((uint *)param_1[1] != (uint *)0x0) {
    puVar2 = (uint *)param_1[1];
    do {
      if (puVar2[4] < *param_2) {
        puVar3 = (uint *)puVar2[3];
      }
      else {
        puVar3 = (uint *)puVar2[2];
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar3 != (uint *)0x0);
  }
  if ((puVar1 == param_1) || (*param_2 < puVar1[4])) {
    local_28 = *param_2;
    local_18 = 0;
    uStack_14 = 0;
    local_24 = 0;
    local_1c = 0;
    FUN_103df460(&param_2,puVar1,&local_28);
    puVar1 = param_2;
  }
  return puVar1 + 5;
}


// ===== [d2] FUN_103de910 @103de910  (67 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103de910(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    do {
      if (*(uint *)(iVar1 + 0x10) < *param_3) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar3 != param_1) {
      if (*param_3 < *(uint *)(iVar3 + 0x10)) {
        iVar3 = param_1;
      }
      *param_2 = iVar3;
      return;
    }
  }
  *param_2 = iVar3;
  return;
}


// [d2] FUN_10551180 @10551180  (emitted in an earlier root)

// [d2] FUN_103c5000 @103c5000  (emitted in an earlier root)

// ===== [d2] FUN_103c9820 @103c9820  (3 bytes) =====

/* [RE-AUTO c0] */

void FUN_103c9820(void)

{
  return;
}


// ===== [d2] FUN_10551520 @10551520  (96 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall
FUN_10551520(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
    local_10 = param_3;
    local_c = param_4;
    local_8 = param_5;
    cVar1 = FUN_105513b0(&local_10);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_103c5000(1,param_2,*(undefined4 *)(param_1 + 0x14));
  return 0;
}


// ===== [d2] FUN_101c3380 @101c3380  (295 bytes) =====

/* [RE-AUTO c0]
   src: BTAttributeInfoType.h
   calls: _wassert
   strings:
     
   "u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h""
     "u"E_Type_Bool == m_eValueType"" */

void __thiscall FUN_101c3380(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)&uStack_50;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x5c));
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 4))();
      if (piVar2 != (int *)0x0) {
        puStack_38 = auStack_48;
        auStack_48[0] = 0;
        uStack_30 = 0;
        uStack_4c = 0;
        puStack_34 = puStack_38;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(auStack_2c,param_2);
        uVar1 = *puVar3;
        if (puVar3 + 1 != &uStack_50) {
          FUN_100282d0(puVar3[6],puVar3[5]);
        }
        puStack_38 = (undefined1 *)puVar3[7];
        if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
          FUN_10653dc0(puStack_1c);
        }
        if (puStack_38 != (undefined1 *)0x3) {
          _wassert(L"E_Type_Bool == m_eValueType",
                   L"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
                   ,0x75);
        }
        *param_3 = (char)uVar1;
        if ((puStack_3c != &uStack_50) && (puStack_3c != (undefined4 *)0x0)) {
          FUN_10653dc0(puStack_3c);
        }
        FUN_112bed8e();
        return;
      }
    }
  }
  FUN_112bed8e();
  return;
}


// ===== [d2] FUN_101c4350 @101c4350  (29 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_101c4350(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    uVar1 = FUN_101c4940(param_1 + 0x1c,param_2);
    return uVar1;
  case 1:
    uVar1 = FUN_101c3ca0(param_1 + 0x1c,param_2);
    return uVar1;
  case 2:
    *param_2 = DAT_113c1280 < *(float *)(param_1 + 0x1c);
    return 1;
  case 3:
    *param_2 = *(undefined1 *)(param_1 + 0x1c);
    return 1;
  case 5:
    *param_2 = 0 < *(int *)(param_1 + 0x1c);
    return 1;
  case 7:
    uVar1 = FUN_101c4970(param_1 + 0x1c,param_2);
    return uVar1;
  case 8:
    uVar1 = FUN_101c49a0(param_1 + 0x1c,param_2);
    return uVar1;
  case 0xffffffff:
  case 4:
  case 6:
    *param_2 = *(int *)(param_1 + 0x1c) != 0;
    return 1;
  default:
    return 0;
  }
}

