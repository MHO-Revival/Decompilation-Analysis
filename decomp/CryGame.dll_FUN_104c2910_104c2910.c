
/* [RE-AUTO c0] */

void __thiscall FUN_104c2910(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 3) {
    piVar1 = *(int **)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 == *piVar1) {
      if (param_2 == 2) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
        *(undefined4 *)(param_1 + 0x54) = **(undefined4 **)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0x34) = 2;
        FUN_10494ab0();
        return;
      }
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
    else {
      if (iVar2 != piVar1[1]) {
        if (iVar2 != piVar1[2]) {
          return;
        }
        if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0x34) = 1;
        }
        *(int **)(param_1 + 0x1c) = piVar1;
        *(int *)(param_1 + 0x54) = *piVar1;
        if (*(char *)(param_1 + 0x58) != '\0') {
          return;
        }
        uVar3 = *(undefined4 *)(param_1 + 0x34);
        iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x20);
        *(int *)(iVar2 + 200) = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar2 + 0xd0) = uVar3;
        return;
      }
      *(int *)(param_1 + 0x34) = param_2;
    }
    *(int **)(param_1 + 0x1c) = piVar1 + 2;
    iVar2 = piVar1[2];
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 != 0) {
      FUN_10494ab0();
      return;
    }
  }
  return;
}

