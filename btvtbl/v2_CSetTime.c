// vtbl[0] @103d8a40  (emitted elsewhere)
// vtbl[1] @103d8b60  (emitted elsewhere)
// vtbl[2] @103dca70  (emitted elsewhere)
// vtbl[3] @103dc9e0  (emitted elsewhere)

// ===== CSetTime vtbl[4] @105d42b0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105d42b0(float param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  float local_8;
  
  local_8 = param_1;
  plVar3 = (longlong *)(**(code **)(**(int **)(DAT_113f3a18 + 0x28) + 0x10))(0);
  local_8 = (float)*plVar3 * DAT_112fca64;
  cVar2 = FUN_103d8660(0);
  piVar1 = *(int **)((int)param_1 + 0x2c);
  if (cVar2 == '\0') {
    if ((uint)(piVar1[1] - *piVar1 >> 2) < 2) {
      return 2;
    }
    if ((int)(piVar1[4] - piVar1[3] & 0xfffffffcU) < 5) {
      return 2;
    }
    iVar4 = *(int *)(piVar1[3] + 4);
  }
  else {
    if (piVar1[1] - *piVar1 >> 2 == 0) {
      return 2;
    }
    if ((int)(piVar1[4] - piVar1[3] & 0xfffffffcU) < 1) {
      return 2;
    }
    iVar4 = *(int *)piVar1[3];
  }
  if (-1 < iVar4) {
    FUN_103d8940(iVar4,&local_8);
    FUN_101c3510();
  }
  return 2;
}

// vtbl[5] @103d7a00  (emitted elsewhere)
// vtbl[6] @103d7a30  (emitted elsewhere)

// ===== CSetTime vtbl[7] @10622520 =====

char * FUN_10622520(void)

{
  return "CSetTime";
}

// vtbl[8] @103dc6d0  (emitted elsewhere)
// vtbl[9] @103dc830  (emitted elsewhere)

// ===== CSetTime vtbl[10] @10628490 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10628490(undefined4 param_1,int *param_2)

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

// ===== CSetTime vtbl[13] @105d4440 =====

void FUN_105d4440(void)

{
  return;
}

// vtbl[14] @103dc6f0  (emitted elsewhere)
