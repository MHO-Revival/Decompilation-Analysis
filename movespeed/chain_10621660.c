// FUN_10621660 @ 10621660  depth 0  (59 bytes)


/* [RE-AUTO c0] */

void __thiscall FUN_10621660(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x5e0); puVar1 != (undefined4 *)(param_1 + 0x5e0);
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[3])(0x288,param_2);
  }
  return;
}

