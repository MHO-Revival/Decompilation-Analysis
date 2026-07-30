
/* [RE-AUTO c0] */

int __thiscall FUN_11079390(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = param_1;
  if (iVar2 != 0) {
    do {
      FUN_113168d0(param_2);
      if (*(uint *)(iVar2 + 0x10) < param_2) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar1 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    if ((iVar1 != param_1) && (FUN_113168d0(param_2), param_2 < *(uint *)(iVar1 + 0x10))) {
      iVar1 = param_1;
    }
  }
  return iVar1;
}

