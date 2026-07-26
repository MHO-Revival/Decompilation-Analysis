// CIsInTheAir  name-getter slot 0x11310250
// -6  0x11310238 -> 0x103d8b60
// -5  0x1131023c -> 0x103dca70
// -4  0x11310240 -> 0x103dc9e0
// -3  0x11310244 -> 0x105f8bd0   <== Evaluate
// -2  0x11310248 -> 0x103d7a00
// -1  0x1131024c -> 0x103d7a30
// +0  0x11310250 -> 0x10621db0   <== name getter
// +1  0x11310254 -> 0x103dc6d0
// +2  0x11310258 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105f8bd0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  int local_68 [4];
  float local_58;
  undefined1 local_1c [12];
  float local_10;
  float local_c;
  float local_8;
  
  iVar4 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar4 + 0x2c))(uVar2);
  if ((piVar3 != (int *)0x0) && (cVar1 = FUN_103f8050(0,&local_10), cVar1 != '\0')) {
    local_8 = DAT_113c1280;
    iVar4 = (**(code **)(*piVar3 + 0x16c))();
    if (iVar4 != 0) {
      FUN_104b42d0();
      (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x30))(piVar3,local_68);
      local_8 = local_58;
      fVar5 = (float10)(**(code **)(**(int **)(DAT_113f3a18 + 0x34) + 200))();
      local_c = (float)fVar5;
      if (local_8 < local_c) {
        local_8 = local_c;
      }
      if (local_68[0] == 2) {
        return 1;
      }
      iVar4 = (**(code **)(*piVar3 + 200))(local_1c);
      local_8 = *(float *)(iVar4 + 8) - local_8;
    }
    if (local_10 <= local_8) {
      return 2;
    }
  }
  return 1;
}

