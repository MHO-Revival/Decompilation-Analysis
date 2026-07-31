
// ===== 0x113ad3c0 in FUN_101d8fe0@101d8fe0 =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_101d8fe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_113ad3c0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[2] = 2;
  return param_1;
}


// ===== 0x113ad3c0 in FUN_101d9040@101d9040 =====

/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_101d9040(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_113ad3c0;
  param_1[4] = 0;
  if (param_1[9] != 0) {
    FUN_10653dc0(param_1[9]);
  }
  if (param_1[6] != 0) {
    FUN_10653dc0(param_1[6]);
  }
  *param_1 = &PTR_FUN_113ad3e8;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    FUN_10653dc0(param_1);
  }
  return param_1;
}


// ===== 0x113ad3c0 in FUN_101d90a0@101d90a0 =====

/* [RE-AUTO c0] */

void __fastcall FUN_101d90a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_113ad3c0;
  param_1[4] = 0;
  if (param_1[9] != 0) {
    FUN_10653dc0(param_1[9]);
  }
  if (param_1[6] != 0) {
    FUN_10653dc0(param_1[6]);
  }
  param_1[1] = 0;
  *param_1 = &PTR_FUN_113ad3e8;
  return;
}

