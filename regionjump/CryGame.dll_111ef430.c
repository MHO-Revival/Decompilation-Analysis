
/* [RE-AUTO c0] */

undefined4 FUN_111ef430(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetClientMessageChannel();
  if (iVar1 != 0) {
    piVar2 = (int *)GetClientMessageChannel();
    (**(code **)(*piVar2 + 4))(0x2d9,param_1);
    return 1;
  }
  return 0;
}

