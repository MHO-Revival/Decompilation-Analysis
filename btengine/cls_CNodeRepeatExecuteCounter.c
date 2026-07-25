// ===== creator FUN_1060ad90 @ 1060ad90 =====

/* [RE-AUTO c0] */

int * FUN_1060ad90(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10653d70(100);
  if (param_3 != 0) {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_103f4300(param_3);
      *piVar1 = (int)&PTR_FUN_113bf2e4;
      piVar1[0x15] = *(int *)(param_3 + 0x54);
      piVar1[0x16] = *(int *)(param_3 + 0x58);
      piVar1[0x17] = *(int *)(param_3 + 0x5c);
      *piVar1 = (int)&PTR_FUN_113104d0;
      piVar1[0x18] = *(int *)(param_3 + 0x60);
    }
    piVar1[2] = param_1;
    (**(code **)(*piVar1 + 4))(param_2);
    (**(code **)(*piVar1 + 0x18))();
    return piVar1;
  }
  if (piVar1 != (int *)0x0) {
    FUN_103dc8f0(param_1,param_2);
    *piVar1 = (int)&PTR_FUN_113104d0;
    piVar1[0xf] = 0x10;
    return piVar1;
  }
  uRam0000003c = 0x10;
  return (int *)0x0;
}


// ===== CTOR (writes vtbl 113bf2e4) FUN_1060ad90 @ 1060ad90 =====

/* [RE-AUTO c0] */

int * FUN_1060ad90(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10653d70(100);
  if (param_3 != 0) {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_103f4300(param_3);
      *piVar1 = (int)&PTR_FUN_113bf2e4;
      piVar1[0x15] = *(int *)(param_3 + 0x54);
      piVar1[0x16] = *(int *)(param_3 + 0x58);
      piVar1[0x17] = *(int *)(param_3 + 0x5c);
      *piVar1 = (int)&PTR_FUN_113104d0;
      piVar1[0x18] = *(int *)(param_3 + 0x60);
    }
    piVar1[2] = param_1;
    (**(code **)(*piVar1 + 4))(param_2);
    (**(code **)(*piVar1 + 0x18))();
    return piVar1;
  }
  if (piVar1 != (int *)0x0) {
    FUN_103dc8f0(param_1,param_2);
    *piVar1 = (int)&PTR_FUN_113104d0;
    piVar1[0xf] = 0x10;
    return piVar1;
  }
  uRam0000003c = 0x10;
  return (int *)0x0;
}


// CNodeRepeatExecuteCounter vtbl[0] @ 103dc890 (already emitted)

// CNodeRepeatExecuteCounter vtbl[1] @ 103dc6c0 (already emitted)

// CNodeRepeatExecuteCounter vtbl[2] @ 103dc930 (already emitted)

// CNodeRepeatExecuteCounter vtbl[3] @ 103d8a10 (already emitted)

// CNodeRepeatExecuteCounter vtbl[4] @ 103dc9d0 (already emitted)

// ===== CTOR (writes vtbl 113104d0) FUN_1060ad90 @ 1060ad90 =====

/* [RE-AUTO c0] */

int * FUN_1060ad90(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10653d70(100);
  if (param_3 != 0) {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_103f4300(param_3);
      *piVar1 = (int)&PTR_FUN_113bf2e4;
      piVar1[0x15] = *(int *)(param_3 + 0x54);
      piVar1[0x16] = *(int *)(param_3 + 0x58);
      piVar1[0x17] = *(int *)(param_3 + 0x5c);
      *piVar1 = (int)&PTR_FUN_113104d0;
      piVar1[0x18] = *(int *)(param_3 + 0x60);
    }
    piVar1[2] = param_1;
    (**(code **)(*piVar1 + 4))(param_2);
    (**(code **)(*piVar1 + 0x18))();
    return piVar1;
  }
  if (piVar1 != (int *)0x0) {
    FUN_103dc8f0(param_1,param_2);
    *piVar1 = (int)&PTR_FUN_113104d0;
    piVar1[0xf] = 0x10;
    return piVar1;
  }
  uRam0000003c = 0x10;
  return (int *)0x0;
}


// ===== CNodeRepeatExecuteCounter vtbl[0] @ 1061f9c0  FUN_1061f9c0 =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1061f9c0(undefined4 param_1,byte param_2)

{
  FUN_103dc920();
  if ((param_2 & 1) != 0) {
    FUN_10653dc0(param_1);
  }
  return param_1;
}


// CNodeRepeatExecuteCounter vtbl[1] @ 103dc6c0 (already emitted)

// CNodeRepeatExecuteCounter vtbl[2] @ 103dc930 (already emitted)

// CNodeRepeatExecuteCounter vtbl[3] @ 103d8a10 (already emitted)

