
// ===== [d0] FUN_105f4e50 @105f4e50  (44 bytes) =====

void FUN_105f4e50(void)

{
  int iVar1;
  
  iVar1 = FUN_103d8550(3);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_103d8720(0,*(int *)(iVar1 + 0xc));
      return;
    }
    FUN_103d8720(0,2);
  }
  return;
}


// ===== [d1] FUN_103d8720 @103d8720  (185 bytes) =====

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_103d8720(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  uVar2 = param_2;
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 < (uint)(piVar1[1] - *piVar1 >> 2)) {
    if ((int)param_2 < piVar1[4] - piVar1[3] >> 2) {
      iVar4 = *(int *)(piVar1[3] + param_2 * 4);
    }
    else {
      iVar4 = -1;
    }
    if (iVar4 != -1) {
      return 1;
    }
  }
  if ((int)param_2 < piVar1[1] - *piVar1 >> 2) {
    iVar4 = *(int *)(*piVar1 + param_2 * 4);
  }
  else {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0xc) == param_3) {
      return 1;
    }
    if (*(int *)(iVar4 + 0xc) == 1) {
      FUN_10a5d660();
      cVar3 = FUN_101cec60(&param_2);
      if ((cVar3 != '\0') && (iVar4 = FUN_103cfc60(param_3,&param_2), iVar4 != 0)) {
        FUN_103fc830(uVar2,iVar4);
        return 1;
      }
    }
  }
  return 0;
}


// [d1] FUN_103d8550 @103d8550  (emitted in an earlier root)

// ===== [d2] FUN_103cfc60 @103cfc60  (37 bytes) =====

/* [RE-AUTO c0] */

undefined4 FUN_103cfc60(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *_Str2;
  
  switch(param_1) {
  case 0:
    cVar1 = FUN_10a5f130();
    if (cVar1 == '\0') {
      FUN_10a5ec80();
      FUN_103c90e0();
    }
    uVar3 = FUN_103ce060();
    return uVar3;
  case 1:
    cVar1 = FUN_10a5f130();
    if (cVar1 != '\0') {
      FUN_10a5d620(&DAT_113bef10);
      uVar3 = FUN_103ce0b0();
      return uVar3;
    }
    uVar3 = FUN_103ce0b0();
    return uVar3;
  case 2:
    cVar1 = FUN_10a5f130();
    if (cVar1 != '\0') {
      uVar3 = FUN_103ce0f0();
      return uVar3;
    }
    pcVar2 = (char *)FUN_10a5ec80();
    atof(pcVar2);
    uVar3 = FUN_103ce0f0();
    return uVar3;
  case 3:
    cVar1 = FUN_10a5f130();
    if (cVar1 == '\0') {
      _Str2 = "True";
      pcVar2 = (char *)FUN_10a5ec80();
      _stricmp(pcVar2,_Str2);
    }
    uVar3 = FUN_103ce120();
    return uVar3;
  case 5:
    cVar1 = FUN_10a5f130();
    if (cVar1 != '\0') {
      uVar3 = FUN_103ce180();
      return uVar3;
    }
    pcVar2 = (char *)FUN_10a5ec80();
    atoi(pcVar2);
    uVar3 = FUN_103ce180();
    return uVar3;
  case 7:
    libm_sse2_sin_precise();
    libm_sse2_cos_precise();
    cVar1 = FUN_10a5f130();
    if (cVar1 == '\0') {
      FUN_10a5ec80();
      FUN_103c9160();
    }
    uVar3 = FUN_103ce1b0();
    return uVar3;
  case 0xffffffff:
  case 4:
  case 6:
    break;
  default:
    return 0;
  }
  cVar1 = FUN_10a5f130();
  if (cVar1 != '\0') {
    uVar3 = FUN_103ce150();
    return uVar3;
  }
  pcVar2 = (char *)FUN_10a5ec80();
  atoi(pcVar2);
  uVar3 = FUN_103ce150();
  return uVar3;
}


// [d2] FUN_10a5d660 @10a5d660  (emitted in an earlier root)

// [d2] FUN_101cec60 @101cec60  (emitted in an earlier root)

// ===== [d2] FUN_103fc830 @103fc830  (73 bytes) =====

/* [RE-AUTO c0] */

void __thiscall FUN_103fc830(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_1;
  if (param_2 < param_1[1] - iVar2 >> 2) {
    if ((param_3 != 0) && (*(char *)(param_3 + 8) != '\0')) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    puVar3 = *(undefined4 **)(iVar2 + param_2 * 4);
    if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 2) != '\0')) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *(int *)(iVar2 + param_2 * 4) = param_3;
  }
  return;
}


// [d2] FUN_103c92b0 @103c92b0  (emitted in an earlier root)
