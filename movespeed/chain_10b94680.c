// FUN_10b94680 @ 10b94680  depth 2  (153 bytes)


/* [RE-AUTO c0] */

void __fastcall FUN_10b94680(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x4a8);
  piVar3 = (int *)(iVar1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x4a4);
  piVar3 = (int *)(iVar1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x4a0);
  piVar3 = (int *)(iVar1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  return;
}

