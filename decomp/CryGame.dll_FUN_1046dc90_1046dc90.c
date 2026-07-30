
/* [RE-AUTO c0] */

undefined4 __thiscall FUN_1046dc90(int param_1,uint *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    iVar2 = **(int **)(param_1 + 0x1c);
    uVar1 = FUN_11316bf0(*(undefined4 *)(param_1 + 0x9c));
    iVar2 = (**(code **)(iVar2 + 0x18))(uVar1);
    if (iVar2 != -1) {
      *param_3 = iVar2 + 1000000;
      return 1;
    }
  }
  iVar2 = param_1 + 0x2c;
  *param_3 = -1;
  iVar5 = iVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    do {
      if (*(uint *)(iVar3 + 0x10) < *param_2) {
        iVar4 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar3 + 8);
        iVar5 = iVar3;
      }
      iVar3 = iVar4;
    } while (iVar4 != 0);
    if ((iVar5 != iVar2) && (*param_2 < *(uint *)(iVar5 + 0x10))) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 == iVar2) {
    return 0;
  }
  *param_3 = *(int *)(iVar5 + 0x14);
  return 1;
}

