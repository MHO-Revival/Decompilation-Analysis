// FUN_1025d4f0 @ 1025d4f0  depth 2  (89 bytes)


/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1025d4f0(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_c [2];
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
    local_c[0] = param_3;
    cVar1 = FUN_1025cb50(local_c);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_1046a6d0(1,param_2,*(undefined4 *)(param_1 + 0x14));
  return 0;
}

