// FUN_11477310 @ 11477310
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

undefined4 FUN_11477310(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x2abc);
  iVar3 = (**(code **)(*piVar1 + 0x170))();
  FUN_11477210();
  cVar2 = (**(code **)(*piVar1 + 0x1d4))(param_2);
  if (cVar2 != '\0') {
    (**(code **)(*piVar1 + 0x1d8))(param_2);
    return 1;
  }
  if (*(int *)(iVar3 + 4) != 0) {
    (**(code **)(*piVar1 + 0x2d4))();
  }
  return 0;
}

