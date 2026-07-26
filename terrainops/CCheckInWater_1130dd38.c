// CCheckInWater  name-getter slot 0x1130dd38
// -6  0x1130dd20 -> 0x103d8b60
// -5  0x1130dd24 -> 0x103dca70
// -4  0x1130dd28 -> 0x103dc9e0
// -3  0x1130dd2c -> 0x105b0be0   <== Evaluate
// -2  0x1130dd30 -> 0x103d7a00
// -1  0x1130dd34 -> 0x103d7a30
// +0  0x1130dd38 -> 0x10621630   <== name getter
// +1  0x1130dd3c -> 0x103dc6d0
// +2  0x1130dd40 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105b0be0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_54 [19];
  undefined1 local_5;
  
  iVar3 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  iVar3 = (**(code **)(iVar3 + 0x2c))(uVar2);
  if (iVar3 != 0) {
    FUN_104b42d0();
    (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x30))(iVar3,local_54);
    local_5 = local_54[0] == 2;
    piVar1 = *(int **)(param_1 + 0x2c);
    if (((piVar1[1] - *piVar1 >> 2 != 0) && (0 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) &&
       (-1 < *(int *)piVar1[3])) {
      FUN_103d8940(*(int *)piVar1[3],&local_5);
      FUN_101c3550();
    }
    return 2;
  }
  return 1;
}

