
/* [RE-AUTO c0] */

void __thiscall FUN_104d9740(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  
  if (param_2 == (int *)0x0) {
    if (DAT_1202e818 == 0) {
      return;
    }
    if (*(int **)(DAT_1202e818 + 0x34) == (int *)0x0) {
      return;
    }
    param_2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3fc))();
    if (param_2 == (int *)0x0) {
      return;
    }
  }
  FUN_113f3640();
  iVar1 = FUN_1115abd0();
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_1143c770(), iVar1 != 0)) {
    if ((*(int **)(param_1 + 0x10) == (int *)(param_1 + 0x10)) || (*(int *)(iVar1 + 0x20) != 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    (**(code **)(*param_2 + 4))(cVar2);
    if (cVar2 == '\0') {
      FUN_104d98e0(0);
    }
  }
  return;
}

