// FUN_104a69a0 @ 104a69a0
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

undefined4 __thiscall FUN_104a69a0(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    iVar1 = *(int *)(param_1 + 0x1d8);
    iVar3 = param_1 + 0x1d4;
    do {
      if (*(uint *)(iVar1 + 0x10) < *param_2) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if ((iVar3 != param_1 + 0x1d4) && (*(uint *)(iVar3 + 0x10) <= *param_2)) {
      return *(undefined4 *)(iVar3 + 0x14);
    }
  }
  return 0;
}

