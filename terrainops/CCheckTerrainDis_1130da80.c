// CCheckTerrainDis  name-getter slot 0x1130da80
// -6  0x1130da68 -> 0x103d8b60
// -5  0x1130da6c -> 0x103dca70
// -4  0x1130da70 -> 0x103dc9e0
// -3  0x1130da74 -> 0x105b0d50   <== Evaluate
// -2  0x1130da78 -> 0x103d7a00
// -1  0x1130da7c -> 0x103d7a30
// +0  0x1130da80 -> 0x10621670   <== name getter
// +1  0x1130da84 -> 0x103dc6d0
// +2  0x1130da88 -> 0x103dc830


/* [RE-AUTO c0] */

undefined4 __fastcall FUN_105b0d50(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_74 [12];
  float local_68;
  float local_64;
  undefined1 local_28 [16];
  float local_18;
  undefined1 local_14 [4];
  float local_10;
  float local_c;
  undefined1 local_8 [4];
  
  FUN_10a5d660();
  FUN_10a5d660();
  FUN_10a5d660();
  cVar1 = FUN_103dbbb0(0,local_14);
  if (cVar1 == '\0') {
    return 1;
  }
  cVar1 = FUN_103dbbb0(1,local_8);
  if (cVar1 == '\0') {
    return 1;
  }
  cVar1 = FUN_103f8050(2,&local_c);
  if (cVar1 == '\0') {
    return 1;
  }
  iVar4 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar4 + 0x2c))(uVar2);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  cVar1 = FUN_10a5d8d0(&DAT_1130a4ac);
  if (cVar1 == '\0') {
    cVar1 = FUN_10a5d8d0(&DAT_1130a4b0);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar4 = (**(code **)(*piVar3 + 0x16c))();
    if (iVar4 == 0) {
      return 1;
    }
    FUN_104b42d0();
    (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x30))(piVar3,local_74);
    local_18 = local_64;
    local_10 = local_64;
    if (((uint)local_64 & 0xffa00000) == 0xffa00000) {
      return 1;
    }
    iVar4 = (**(code **)(*piVar3 + 200))(local_28);
    local_10 = *(float *)(iVar4 + 8) - local_10;
    cVar1 = FUN_10a5d8d0(&DAT_1130a4d0);
    if (cVar1 != '\0') goto LAB_105b0f73;
    cVar1 = FUN_10a5d8d0(&DAT_113a3314);
    if (cVar1 != '\0') goto LAB_105b0f9a;
    cVar1 = FUN_10a5d8d0(&DAT_1130a4d4);
    if (cVar1 == '\0') {
      cVar1 = FUN_10a5d8d0(&DAT_113a33e4);
      if (cVar1 == '\0') {
        return 1;
      }
      if (local_c <= local_10) {
        return 1;
      }
      return 2;
    }
  }
  else {
    iVar4 = (**(code **)(*piVar3 + 0x16c))();
    if (iVar4 == 0) {
      return 1;
    }
    FUN_104b42d0();
    (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x30))(piVar3,local_74);
    local_18 = local_68;
    local_10 = local_68;
    if (((uint)local_68 & 0xffa00000) == 0xffa00000) {
      return 1;
    }
    iVar4 = (**(code **)(*piVar3 + 200))(local_28);
    local_10 = local_10 - *(float *)(iVar4 + 8);
    cVar1 = FUN_10a5d8d0(&DAT_1130a4d0);
    if (cVar1 != '\0') {
LAB_105b0f73:
      if (local_c < local_10) {
        return 1;
      }
      return 2;
    }
    cVar1 = FUN_10a5d8d0(&DAT_113a3314);
    if (cVar1 != '\0') {
LAB_105b0f9a:
      if (local_10 <= local_c) {
        return 1;
      }
      return 2;
    }
    cVar1 = FUN_10a5d8d0(&DAT_113a33e4);
    if (cVar1 != '\0') {
      if (local_c <= local_10) {
        return 1;
      }
      return 2;
    }
    cVar1 = FUN_10a5d8d0(&DAT_1130a4d4);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  if (local_10 < local_c) {
    return 1;
  }
  return 2;
}

