
/* [RE-AUTO c0] */

void __thiscall FUN_104e5e00(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*param_2 == 0) && (*(char *)(DAT_1202e818 + 0x209) == '\0')) {
    if (param_2[1] == 1) {
      *(int *)(param_1 + 0x28) = param_2[2];
      FUN_104e60d0(param_2[2]);
    }
    else if (param_2[1] == 0xc) {
      *(int *)(param_1 + 0x28) = param_2[2];
      FUN_104e6ba0(param_2[2]);
    }
    if (((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0x34) != (int *)0x0)) &&
       (piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3fc))(),
       piVar1 != (int *)0x0)) {
      FUN_113f3640();
      iVar2 = FUN_1115abd0();
      if ((iVar2 != 0) && (iVar2 = thunk_FUN_1143c770(), iVar2 != 0)) {
        if (((undefined4 **)DAT_123bcaf8 == &DAT_123bcaf8) || (*(int *)(iVar2 + 0x20) != 0)) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        (**(code **)(*piVar1 + 4))(cVar3);
        if (cVar3 == '\0') {
          FUN_104d98e0(0);
        }
      }
    }
    if ((DAT_120212a0 != 0) && (*(int *)(DAT_120212a0 + 4) != 0)) {
      FUN_10acfb10(0,0);
      FUN_10acfb10(3,0);
    }
  }
  return;
}

