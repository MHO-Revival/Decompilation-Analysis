
/* [RE-AUTO c0] */

void __fastcall FUN_110781d0(int param_1)

{
  if ((*(char *)(DAT_1202e818 + 0x209) != '\0') && (*(char *)(param_1 + 0x31) != '\0')) {
    FUN_11066f90(0x3f800000);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  (**(code **)(**(int **)(param_1 + 0x24) + 0xe0))();
  FUN_10dea1f0();
  return;
}

