
/* [RE-AUTO c0] */

void __thiscall FUN_116f9310(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_5;
  
  iVar3 = param_2;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != *(int *)(param_1 + 8)) {
    if (iVar2 != 0) {
      FUN_117b9240(param_2);
      iVar1 = iVar2 + 8;
      *(int *)iVar1 = iVar1;
      *(int *)(iVar2 + 0xc) = iVar1;
      FUN_116f7c20(iVar1,*(undefined4 *)(iVar3 + 8),(undefined4 *)(iVar3 + 8),(int)&param_2 + 3);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_116f8fc0(iVar2,param_2,&local_5,1,1);
  return;
}

