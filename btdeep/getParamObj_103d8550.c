
// [d0] FUN_103d8550 @103d8550  (emitted in an earlier root)

// [d1] FUN_103c92b0 @103c92b0  (emitted in an earlier root)

// ===== [d2] FUN_100282d0 @100282d0  (9 bytes) =====

/* [RE-AUTO c0] */

int __thiscall FUN_100282d0(int param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint _Size;
  uint _Size_00;
  void *_Dst;
  
  _Size = param_3 - (int)param_2;
  pvVar1 = *(void **)(param_1 + 0x14);
  _Size_00 = *(int *)(param_1 + 0x10) - (int)pvVar1;
  if (_Size_00 < _Size) {
    if (_Size_00 != 0) {
      memcpy(pvVar1,param_2,_Size_00);
    }
    FUN_10028a60((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14)) + (int)param_2,param_3);
  }
  else {
    if (_Size != 0) {
      memcpy(pvVar1,param_2,_Size);
    }
    pvVar1 = *(void **)(param_1 + 0x10);
    _Dst = (void *)(*(int *)(param_1 + 0x14) + _Size);
    if (_Dst != pvVar1) {
      memmove(_Dst,pvVar1,1);
      *(int *)(param_1 + 0x10) = (int)_Dst + (*(int *)(param_1 + 0x10) - (int)pvVar1);
      return param_1;
    }
  }
  return param_1;
}


// ===== [d2] FUN_103c59e0 @103c59e0  (129 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103c59e0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  iVar3 = *param_1;
  uVar2 = iVar1 - iVar3 >> 2;
  if (param_2 < uVar2) {
    iVar3 = iVar3 + param_2 * 4;
    if (iVar3 != iVar1) {
      iVar3 = FUN_103c6360(iVar3);
      FUN_103c63c0();
      param_1[1] = iVar3;
      return;
    }
  }
  else {
    param_2 = param_2 - uVar2;
    if (param_2 != 0) {
      if (param_2 <= (uint)(param_1[2] - iVar1 >> 2)) {
        FUN_103c61b0(iVar1,param_2,param_3,iVar3);
        return;
      }
      FUN_103c5ca0(iVar1,param_3,iVar3,param_2,0);
    }
  }
  return;
}


// [d2] FUN_112bed8e @112bed8e  (emitted in an earlier root)

// [d2] FUN_10653dc0 @10653dc0  (emitted in an earlier root)

// ===== [d2] FUN_10653d70 @10653d70  (80 bytes) =====

/* [RE-AUTO c0] */

undefined4 FUN_10653d70(int param_1)

{
  undefined4 uVar1;
  int local_8;
  
  if (DAT_113f3a64 == 0) {
    FUN_106889b0();
  }
  uVar1 = (*DAT_113f3a34)(param_1,&local_8);
  LOCK();
  DAT_113f3a24 = DAT_113f3a24 + local_8;
  UNLOCK();
  LOCK();
  DAT_113f3a2c = DAT_113f3a2c + param_1;
  UNLOCK();
  LOCK();
  DAT_113f3a30 = DAT_113f3a30 + 1;
  UNLOCK();
  return uVar1;
}


// ===== [d2] FUN_103cacf0 @103cacf0  (62 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103cacf0(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 5;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_113bedec;
  param_1[7] = *param_2;
  return param_1;
}


// ===== [d2] FUN_103c5b00 @103c5b00  (56 bytes) =====

/* [RE-AUTO c0] */

int * __thiscall FUN_103c5b00(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 8) != '\0')) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 2) != '\0')) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = param_2;
  return param_1;
}


// ===== [d2] FUN_103cac30 @103cac30  (62 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103cac30(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_113bedd0;
  param_1[7] = *param_2;
  return param_1;
}


// ===== [d2] FUN_103cac70 @103cac70  (62 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103cac70(undefined4 *param_1,undefined1 *param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_113bedb8;
  *(undefined1 *)(param_1 + 7) = *param_2;
  return param_1;
}


// ===== [d2] FUN_10a5d560 @10a5d560  (69 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_10a5d560(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if (*(int *)(param_2 + 0x14) != *(int *)(param_2 + 0x10)) {
    uVar1 = FUN_10a5dda0(*(int *)(param_2 + 0x14));
    *param_1 = uVar1;
    return param_1;
  }
  uVar1 = FUN_10a5dda0(&DAT_1139eb9e);
  *param_1 = uVar1;
  return param_1;
}


// ===== [d2] FUN_103ca360 @103ca360  (62 bytes) =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_103ca360(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_113beddc;
  param_1[7] = *param_2;
  return param_1;
}


// [d2] FUN_10a5d8a0 @10a5d8a0  (emitted in an earlier root)
