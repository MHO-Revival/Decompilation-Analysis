// CIsOnSameVolume  name-getter slot 0x1130a218
// -6  0x1130a200 -> 0x103d8b60
// -5  0x1130a204 -> 0x103dca70
// -4  0x1130a208 -> 0x103dc9e0
// -3  0x1130a20c -> 0x105af120   <== Evaluate
// -2  0x1130a210 -> 0x103d7a00
// -1  0x1130a214 -> 0x103d7a30
// +0  0x1130a218 -> 0x105af2a0   <== name getter
// +1  0x1130a21c -> 0x103dc6d0
// +2  0x1130a220 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105af120(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x4c) + 0x108))();
  if (piVar2 != (int *)0x0) {
    iVar5 = **(int **)(DAT_113f3a18 + 0x50);
    uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar4 = (int *)(**(code **)(iVar5 + 0x2c))(uVar3);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 200))(local_10);
      iVar5 = (**(code **)(*piVar2 + 0x20))(local_10);
      cVar1 = FUN_10552e70(0,local_1c);
      if (((cVar1 != '\0') && (iVar5 != -1)) &&
         (iVar6 = (**(code **)(*piVar2 + 0x20))(local_1c), iVar5 == iVar6)) {
        return 2;
      }
    }
  }
  return 1;
}

