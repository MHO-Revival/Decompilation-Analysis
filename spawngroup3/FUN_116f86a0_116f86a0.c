
/* [RE-AUTO c0] */

int __thiscall FUN_116f86a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = FUN_117b9260(param_2,param_3);
  iVar4 = FUN_116f7870(uVar2,uVar1,uVar3);
  FUN_117b9290();
  if (iVar4 == *(int *)(param_1 + 0x30)) {
    return 0;
  }
  return iVar4 + 8;
}

