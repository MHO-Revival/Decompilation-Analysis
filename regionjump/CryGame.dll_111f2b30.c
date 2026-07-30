
/* [RE-AUTO c0] */

void __thiscall FUN_111f2b30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  param_2 = *(undefined4 *)(param_2 + 4);
  iVar1 = GetClientMessageChannel();
  if (iVar1 != 0) {
    piVar2 = (int *)GetClientMessageChannel();
    (**(code **)(*piVar2 + 4))(0x2d9,&param_2);
  }
  return;
}

