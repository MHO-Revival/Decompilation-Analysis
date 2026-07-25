// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CTimeCheck vtbl[4] @105fb5f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105fb5f0(int param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  float local_c;
  float local_8;
  
  if ((DAT_113f3968 & 1) == 0) {
    DAT_113f3968 = DAT_113f3968 | 1;
    FUN_10a5d660();
  }
  if ((DAT_113f3968 & 2) == 0) {
    DAT_113f3968 = DAT_113f3968 | 2;
    _DAT_113f397c = &DAT_113f396c;
    DAT_113f3980 = &DAT_113f396c;
    DAT_113f396c = 0;
    FUN_112be5f1(&LAB_112cc0b0);
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  local_8 = 0.0;
  local_c = 0.0;
  if (((2 < (uint)(piVar1[1] - *piVar1 >> 2)) && (8 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar1[3] + 8))) {
    FUN_103d8940(*(int *)(piVar1[3] + 8),&local_8);
    cVar2 = FUN_101c35a0();
    if (cVar2 != '\0') goto LAB_105fb6d5;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (((3 < (uint)(piVar1[1] - *piVar1 >> 2)) && (0xc < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar1[3] + 0xc))) {
    FUN_103d8940(*(int *)(piVar1[3] + 0xc),&local_8);
    FUN_101c35a0();
  }
LAB_105fb6d5:
  cVar2 = FUN_103f8050(0,&local_c);
  if (cVar2 == '\0') {
    cVar2 = FUN_103d8660(1);
    if (cVar2 == '\0') {
      return 1;
    }
    piVar1 = *(int **)(param_1 + 0x2c);
    if (((1 < (uint)(piVar1[1] - *piVar1 >> 2)) && (4 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
       && (-1 < *(int *)(piVar1[3] + 4))) {
      FUN_103d8940(*(int *)(piVar1[3] + 4),&local_c);
      FUN_101c35a0();
    }
  }
  plVar3 = (longlong *)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x10))(0);
  if ((float)*plVar3 * DAT_112fca64 - local_8 <= local_c) {
    return 1;
  }
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CTimeCheck vtbl[7] @106226f0 =====

char * FUN_106226f0(void)

{
  return "CTimeCheck";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CTimeCheck vtbl[10] @10628de0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10628de0(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c))(param_1,1);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x4c))(param_1,0x60,1);
    FUN_103dc700(param_2);
    (**(code **)(*param_2 + 0x20))(param_1);
    return;
  }
  FUN_103dc700(param_2);
  return;
}

// vtbl[11] @103d9af0  (emitted elsewhere)
// vtbl[12] @103d9b80  (emitted elsewhere)

// ===== CTimeCheck vtbl[13] @105fb970 =====

void FUN_105fb970(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
