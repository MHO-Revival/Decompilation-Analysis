// FUN_11b63d10 @ 11b63d10
// ramp offsets referenced: [468, 472]


/* [RE-AUTO c0] */

int * __thiscall FUN_11b63d10(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((*param_2 != param_1[0x74]) || (param_2[2] != param_1[0x76])) ||
      (param_2[1] != param_1[0x75])) || (param_2[3] != param_1[0x77])) {
    iVar1 = param_2[3];
    iVar2 = param_2[2];
    iVar3 = param_2[1];
    param_1[0x74] = *param_2;
    param_1[0x75] = iVar3;
    param_1[0x76] = iVar2;
    param_1[0x77] = iVar1;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  (**(code **)(*param_1 + 0x24))();
  return param_1 + 0x80;
}

