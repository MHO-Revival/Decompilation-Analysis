
/* [RE-AUTO c0] */

undefined4 __fastcall FUN_111e7050(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0xaec];
  uVar3 = FUN_11182f70(param_1);
  *(undefined4 *)(iVar1 + 8) = uVar3;
  if (*(int **)(param_1[0xaec] + 8) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1[0xaec] + 8) + 8))();
    if (cVar2 == '\0') goto LAB_111e70d2;
  }
  iVar1 = param_1[0xaec];
  uVar3 = FUN_11225910(param_1);
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  if (*(int **)(param_1[0xaec] + 0xc) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1[0xaec] + 0xc) + 8))();
    if (cVar2 == '\0') goto LAB_111e70d2;
  }
  iVar1 = param_1[0xaec];
  uVar3 = FUN_114c59c0(param_1);
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  if (*(int **)(param_1[0xaec] + 0x10) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1[0xaec] + 0x10) + 8))();
    if (cVar2 == '\0') {
LAB_111e70d2:
      (**(code **)(*param_1 + 0x400))();
      return 0;
    }
  }
  return 1;
}

