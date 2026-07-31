
/* [RE-AUTO c0] */

void __thiscall FUN_10620fd0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x568); puVar1 != (undefined4 *)(param_1 + 0x568);
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[3])(0x280,param_2);
  }
  return;
}

