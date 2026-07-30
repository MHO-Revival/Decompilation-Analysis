
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c0]
   calls: __alloca_probe, memset */

void __thiscall FUN_11197360(int *param_1,undefined4 *param_2)

{
  undefined2 uStack_a6da8;
  undefined1 auStack_a6da6 [14];
  undefined4 uStack_a6d98;
  
  memset(auStack_a6da6,0,0xa6d9c);
  uStack_a6da8 = 0x2d9;
  uStack_a6d98 = *param_2;
  (**(code **)(*param_1 + 0x14))(&uStack_a6da8);
  FUN_11a89daa();
  return;
}

