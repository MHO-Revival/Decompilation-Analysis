// FUN_11068770 @ 11068770  (54 bytes)
// flag-byte accesses:
//   11068793  OR byte ptr [EDI + 0x116],0x2


/* [RE-AUTO c0] */

void __thiscall FUN_11068770(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_11316b10(param_2[7]);
  *(undefined4 *)(param_1 + 0xec) = param_2[1];
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x116) = *(byte *)(param_1 + 0x116) | 2;
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  return;
}

