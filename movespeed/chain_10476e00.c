// FUN_10476e00 @ 10476e00  depth 2  (67 bytes)


/* [RE-AUTO c0] */

void __thiscall FUN_10476e00(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    do {
      if (*(uint *)(iVar1 + 0x10) < *param_3) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
    if (iVar3 != param_1) {
      if (*param_3 < *(uint *)(iVar3 + 0x10)) {
        iVar3 = param_1;
      }
      *param_2 = iVar3;
      return;
    }
  }
  *param_2 = iVar3;
  return;
}

