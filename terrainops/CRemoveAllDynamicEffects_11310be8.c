// CRemoveAllDynamicEffects  name-getter slot 0x11310be8
// -6  0x11310bd0 -> 0x103d8b60
// -5  0x11310bd4 -> 0x103dca70
// -4  0x11310bd8 -> 0x103dc9e0
// -3  0x11310bdc -> 0x105b85d0   <== Evaluate
// -2  0x11310be0 -> 0x103d7a00
// -1  0x11310be4 -> 0x103d7a30
// +0  0x11310be8 -> 0x10622060   <== name getter
// +1  0x11310bec -> 0x103dc6d0
// +2  0x11310bf0 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105b85d0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_3c [32];
  int *local_1c;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(uVar1);
  if (piVar2 != (int *)0x0) {
    iVar4 = 0;
    iVar3 = (**(code **)(*piVar2 + 400))();
    if (0 < iVar3) {
      do {
        (**(code **)(*piVar2 + 0x194))(iVar4,local_3c);
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 0x150))();
        }
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*piVar2 + 400))();
      } while (iVar4 < iVar3);
    }
    return 2;
  }
  return 2;
}

