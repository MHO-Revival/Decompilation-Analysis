// CCheckGroundMaterial  name-getter slot 0x1130dad4
// -6  0x1130dabc -> 0x103d8b60
// -5  0x1130dac0 -> 0x103dca70
// -4  0x1130dac4 -> 0x103dc9e0
// -3  0x1130dac8 -> 0x105b0930   <== Evaluate
// -2  0x1130dacc -> 0x103d7a00
// -1  0x1130dad0 -> 0x103d7a30
// +0  0x1130dad4 -> 0x10621600   <== name getter
// +1  0x1130dad8 -> 0x103dc6d0
// +2  0x1130dadc -> 0x103dc830


/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""mat_water"" */

undefined4 __fastcall FUN_105b0930(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  char *_Str1;
  char *_Str2;
  undefined1 local_ac [16];
  short local_9c;
  float local_88;
  undefined1 local_6c [8];
  float local_64;
  undefined4 local_58;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  cVar1 = FUN_103d8610(0);
  if (cVar1 == '\0') {
    return 1;
  }
  iVar5 = **(int **)(DAT_113f3a18 + 0x50);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar3 = (int *)(**(code **)(iVar5 + 0x2c))(uVar2);
  if (piVar3 != (int *)0x0) {
    FUN_104b42d0();
    (**(code **)(**(int **)(DAT_113f3a18 + 0x80) + 0x30))(piVar3,local_6c);
    local_8 = local_58;
    piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x34) + 0x298))();
    iVar5 = (**(code **)(*piVar4 + 0x50))();
    if (iVar5 == 0) {
      return 1;
    }
    pfVar6 = (float *)(**(code **)(*piVar3 + 0x94))();
    local_14 = *pfVar6 + DAT_112fcab0;
    local_20 = 0;
    local_10 = pfVar6[1] + DAT_112fcab0;
    local_1c = 0;
    local_18 = 0xc1200000;
    local_c = pfVar6[2] + DAT_112fcab0;
    iVar5 = FUN_1052a700(&local_14,&local_20,0x200,0x40f,0,local_ac,1,0,0,0,0,
                         "RayWorldIntersection(Action)",0,4);
    if (iVar5 != 0) {
      piVar3 = (int *)(**(code **)(*piVar4 + 0x50))();
      piVar3 = (int *)(**(code **)(*piVar3 + 8))((int)local_9c,0);
      if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 0xc))(), iVar5 != 0)) {
        _Str2 = "mat_water";
        _Str1 = (char *)(**(code **)(*piVar3 + 0xc))();
        iVar5 = _stricmp(_Str1,_Str2);
        if ((iVar5 == 0) &&
           ((local_64 <= local_88 && (iVar5 = (**(code **)(*piVar3 + 0xc))(), iVar5 != 0))))
        goto LAB_105b0acf;
      }
    }
    piVar3 = (int *)(**(code **)(*piVar4 + 0x50))();
    piVar3 = (int *)(**(code **)(*piVar3 + 8))(local_8,0);
    if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 0xc))(), iVar5 != 0)) {
LAB_105b0acf:
      uVar2 = FUN_10a5d620(iVar5);
      FUN_1055ace0(0,uVar2);
      return 2;
    }
  }
  return 1;
}

