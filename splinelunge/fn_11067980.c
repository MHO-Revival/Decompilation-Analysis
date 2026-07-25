// FUN_11067980 @ 11067980  (56 bytes)
// flag-byte accesses:
//   11067987  AND byte ptr [EDI + 0x117],0xfd
//   1106798e  AND byte ptr [EDI + 0x116],0x7f


/* [RE-AUTO c0] */

void __fastcall FUN_11067980(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) & 0xfd;
  *(byte *)(param_1 + 0x116) = *(byte *)(param_1 + 0x116) & 0x7f;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = **(int **)(param_1 + 0x18);
  if (iVar1 != (*(int **)(param_1 + 0x18))[1]) {
    do {
      FUN_10ab7310();
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(*(int *)(param_1 + 0x18) + 4));
  }
  return;
}

