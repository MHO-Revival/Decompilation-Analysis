// FUN_104a6940 @ 104a6940
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

void __thiscall FUN_104a6940(int param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    iVar1 = *(int *)(param_1 + 0x1d8);
    iVar4 = param_1 + 0x1d4;
    do {
      if (*(uint *)(iVar1 + 0x10) < *param_2) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar4 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (((iVar4 != param_1 + 0x1d4) && (*(uint *)(iVar4 + 0x10) <= *param_2)) &&
       (*(int *)(iVar4 + 0x14) != 0)) {
      return;
    }
  }
  puVar3 = (undefined4 *)FUN_104a8590(param_2);
  *puVar3 = param_3;
  return;
}

