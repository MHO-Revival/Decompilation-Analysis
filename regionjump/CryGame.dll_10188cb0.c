
/* [RE-AUTO c0]
   calls: memset */

undefined4 __fastcall FUN_10188cb0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  memset((void *)((int)param_1 + 9),0,0x2d0);
  memset((void *)((int)param_1 + 0x2d9),0,0xb4);
  *(undefined4 *)((int)param_1 + 0x38d) = 0;
  return 0;
}

