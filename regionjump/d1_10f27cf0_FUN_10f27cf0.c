
/* [RE-AUTO c0] */

void __thiscall FUN_10f27cf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)CInfoRecord__GetModelString(param_2);
  piVar3 = (int *)(param_1 + 0x21c8);
  if (*piVar3 != *piVar1) {
    if (*(int *)(*piVar3 + -0xc) < 0) {
      if (*(int *)(*piVar1 + -0xc) < 0) goto LAB_10f27d48;
    }
    else {
      if (*(int *)(*piVar1 + -0xc) < 0) {
        FUN_1083ac70();
        *piVar3 = *piVar1;
        goto LAB_10f27d48;
      }
      FUN_1083ac70();
    }
    iVar2 = *piVar1;
    *piVar3 = iVar2;
    FUN_10c3dab0(iVar2 + -0xc);
  }
LAB_10f27d48:
  piVar1 = (int *)(param_2 + -0xc);
  if ((-1 < *piVar1) && (iVar2 = FUN_10c3dad0(piVar1), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
    FUN_10c3d900(piVar1);
  }
  return;
}

