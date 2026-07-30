
/* [RE-AUTO c0] */

void __fastcall FUN_10efb370(int param_1)

{
  *(undefined4 *)(param_1 + 0x21bc) = 0xffffffff;
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    FUN_10de9aa0(param_1,1);
    FUN_10dea0e0(param_1);
    CPlayer__ReqRegionJump(*(undefined4 *)(param_1 + 0x21c8));
    (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 0xdc))(0,0);
    (**(code **)(**(int **)(DAT_1202e818 + 0x14) + 0xe4))(0,0);
  }
  else {
    FUN_10efb5b0(*(undefined4 *)(param_1 + 0x21c8));
  }
  if (*(int *)(param_1 + 0x1e60) != 0) {
    FUN_10fd4a50();
  }
  return;
}

