// CRaycastPoint  name-getter slot 0x1130dce4
// -6  0x1130dccc -> 0x103d8b60
// -5  0x1130dcd0 -> 0x103dca70
// -4  0x1130dcd4 -> 0x103dc9e0
// -3  0x1130dcd8 -> 0x105b3fd0   <== Evaluate
// -2  0x1130dcdc -> 0x103d7a00
// -1  0x1130dce0 -> 0x103d7a30
// +0  0x1130dce4 -> 0x10622020   <== name getter
// +1  0x1130dce8 -> 0x103dc6d0
// +2  0x1130dcec -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105b3fd0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined1 local_228 [512];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((DAT_113f3a18 != 0) && (*(int *)(DAT_113f3a18 + 0x50) != 0)) &&
     (*(int **)(param_1 + 0x54) != (int *)0x0)) {
    iVar4 = **(int **)(DAT_113f3a18 + 0x50);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
    piVar3 = (int *)(**(code **)(iVar4 + 0x2c))(uVar2);
    if (piVar3 != (int *)0x0) {
      local_1c = 0.0;
      local_18 = 0.0;
      local_14 = 0.0;
      cVar1 = FUN_10552e70(0,&local_1c);
      if ((cVar1 != '\0') && (iVar4 = (**(code **)(*piVar3 + 0x288))(), iVar4 != 0)) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x288))();
        pfVar5 = (float *)(**(code **)(*piVar3 + 0x30))(&local_28);
        local_28 = *pfVar5;
        local_24 = pfVar5[1];
        local_10 = local_1c - local_28;
        local_20 = pfVar5[2];
        local_c = local_18 - local_24;
        local_8 = local_14 - local_20;
        if ((DAT_113f3a18 != 0) &&
           ((*(int *)(DAT_113f3a18 + 0x40) != 0 &&
            (iVar4 = FUN_1052a700(&local_28,&local_10,1,0x40a,0x400000,local_228,8,0,0,0,0,
                                  "RayWorldIntersection(Action)",0,4), iVar4 != 0)))) {
          return 2;
        }
      }
    }
  }
  return 1;
}

