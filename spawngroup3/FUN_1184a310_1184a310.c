
/* [RE-AUTO c0] */

undefined4 * __thiscall FUN_1184a310(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = param_2;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  param_1[3] = 0;
  return param_1;
}

