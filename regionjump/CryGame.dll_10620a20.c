
/* [RE-AUTO c0] */

void __thiscall FUN_10620a20(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x500); puVar1 != (undefined4 *)(param_1 + 0x500);
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[3])(0x2d9,param_2);
  }
  return;
}

