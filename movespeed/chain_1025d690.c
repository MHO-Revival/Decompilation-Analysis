// FUN_1025d690 @ 1025d690  depth 2  (89 bytes)


/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1025d690(int param_1,uint param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 local_9 [5];
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
    local_9[0] = param_3;
    cVar1 = FUN_1025f6f0(local_9);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  FUN_1046a6d0(1,param_2,*(undefined4 *)(param_1 + 0x14));
  return 0;
}

