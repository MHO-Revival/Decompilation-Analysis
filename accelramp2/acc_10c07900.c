// FUN_10c07900 @ 10c07900
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

void __thiscall FUN_10c07900(int param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x1d8);
  iVar1 = param_1 + 0x1d4;
  iVar4 = iVar1;
  if (iVar2 != 0) {
    do {
      if (*(uint *)(iVar2 + 0x10) < param_2) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar4 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    if (iVar4 == iVar1) goto LAB_10c07966;
    if (param_2 < *(uint *)(iVar4 + 0x10)) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 != iVar1) {
    iVar1 = FUN_10a7eff0(iVar4,param_1 + 0x1d8,param_1 + 0x1dc,param_1 + 0x1e0);
    if (iVar1 != 0) {
      FUN_10c3d5d0(iVar1);
    }
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + -1;
  }
LAB_10c07966:
  if (param_3 != '\0') {
    iVar2 = *(int *)(param_1 + 0x1c0);
    iVar1 = param_1 + 0x1bc;
    iVar4 = iVar1;
    if (iVar2 != 0) {
      do {
        if (*(uint *)(iVar2 + 0x10) < param_2) {
          iVar3 = *(int *)(iVar2 + 0xc);
        }
        else {
          iVar3 = *(int *)(iVar2 + 8);
          iVar4 = iVar2;
        }
        iVar2 = iVar3;
      } while (iVar3 != 0);
      if (iVar4 == iVar1) {
        return;
      }
      if (param_2 < *(uint *)(iVar4 + 0x10)) {
        iVar4 = iVar1;
      }
    }
    if (iVar4 != iVar1) {
      iVar1 = FUN_10a7eff0(iVar4,param_1 + 0x1c0,param_1 + 0x1c4,param_1 + 0x1c8);
      if (*(int **)(iVar1 + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x14) + 0xc))();
      }
      if (iVar1 != 0) {
        FUN_10c3d5d0(iVar1);
      }
      *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + -1;
    }
  }
  return;
}

