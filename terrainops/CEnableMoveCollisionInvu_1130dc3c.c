// CEnableMoveCollisionInvu  name-getter slot 0x1130dc3c
// -6  0x1130dc24 -> 0x103d8b60
// -5  0x1130dc28 -> 0x103dca70
// -4  0x1130dc2c -> 0x103dc9e0
// -3  0x1130dc30 -> 0x105b11c0   <== Evaluate
// -2  0x1130dc34 -> 0x103d7a00
// -1  0x1130dc38 -> 0x103d7a30
// +0  0x1130dc3c -> 0x10621870   <== name getter
// +1  0x1130dc40 -> 0x103dc6d0
// +2  0x1130dc44 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105b11c0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_c;
  uint local_8;
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  iVar1 = *piVar3;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar1 + 0xc))(uVar4);
  if (piVar3 != (int *)0x0) {
    local_8 = local_8 & 0xffffff00;
    cVar2 = FUN_103db9b0(1,&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 0x290))(local_8);
      return 2;
    }
    cVar2 = FUN_103db9b0(0,&local_c);
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 0x280))(local_c);
      return 2;
    }
  }
  return 1;
}

