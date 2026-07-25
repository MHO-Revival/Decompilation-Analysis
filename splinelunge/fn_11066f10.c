// FUN_11066f10 @ 11066f10  (120 bytes)
// flag-byte accesses:
//   11066f69  OR byte ptr [EDI + 0x117],0x1


/* [RE-AUTO c0] */

void __thiscall FUN_11066f10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0x18);
  piVar1 = (int *)(*(int **)(param_1 + 0x18))[1];
  if (piVar3 != piVar1) {
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar1) {
        return;
      }
    }
    if ((piVar3 + 1 != piVar1) &&
       (iVar2 = FUN_10ab70e0(*(undefined4 *)(param_1 + 0xf8),*(undefined1 *)(param_1 + 0x115),0),
       iVar2 != 0)) {
      iVar2 = piVar3[1];
      *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) | 1;
      *(int *)(param_1 + 4) = iVar2;
      return;
    }
    FUN_110673a0(0);
  }
  return;
}

