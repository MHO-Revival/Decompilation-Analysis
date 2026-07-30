
/* [RE-AUTO c0] */

void __fastcall FUN_104c27a0(int param_1)

{
  int iVar1;
  
  *(int *)(*(int *)(param_1 + 0x20) + 0xc4) = param_1;
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
  if (iVar1 == 3) {
    FUN_104c2910();
    return;
  }
  if (iVar1 == 4) {
    FUN_104c29b0();
    return;
  }
  return;
}

