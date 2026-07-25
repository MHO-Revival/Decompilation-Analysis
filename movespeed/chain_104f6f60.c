// FUN_104f6f60 @ 104f6f60  depth 1  (49 bytes)


/* [RE-AUTO c0] */

void __fastcall FUN_104f6f60(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_1;
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

