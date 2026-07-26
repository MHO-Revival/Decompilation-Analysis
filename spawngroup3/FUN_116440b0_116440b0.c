
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __thiscall FUN_116440b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == param_1[0x31]) {
    param_1[0x31] = -1;
  }
  iVar1 = param_1[0x26];
  iVar2 = param_1[0x25];
  FUN_100ee470();
  iVar3 = FUN_100ee450();
  (**(code **)(*param_1 + 0xb4))
            ((int)((double)iVar3 * _DAT_11de98f0 * (double)((iVar1 - iVar2) + 1)) + iVar2);
  return;
}

