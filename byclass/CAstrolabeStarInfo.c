// ===== class CAstrolabeStarInfo  (5 recovered methods) =====

/* --- CAstrolabeStarInfo::GetManagers @ 119b1650 --- */
// [RE-AUTO c3]
// id: CAstrolabeStarInfo::GetManagers
// strings:
//   ""CAstrolabeStarInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAstrolabeStarInfo::GetManagers
   strings:
     ""CAstrolabeStarInfo::GetManagers"" */

undefined * CAstrolabeStarInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d67b40;
  if (param_3 == 0) {
    if ((DAT_123a290c & 1) == 0) {
      DAT_123a290c = DAT_123a290c | 1;
      FUN_102500e0("CAstrolabeStarInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4290);
    }
    if ((undefined *)*DAT_123a28f0 != (undefined *)0x0) {
      return (undefined *)*DAT_123a28f0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a297c & 1) == 0) {
      DAT_123a297c = DAT_123a297c | 1;
      FUN_119b1960();
      FUN_11a8911f(&LAB_11cb4230);
    }
    puVar1 = &DAT_123a2944;
  }
  return puVar1;
}



/* --- CAstrolabeStarInfo::GetManagers_119b22f0 @ 119b22f0 --- */
// [RE-AUTO c3]
// id: CAstrolabeStarInfo::GetManagers
// strings:
//   ""CAstrolabeStarInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAstrolabeStarInfo::GetManagers
   strings:
     ""CAstrolabeStarInfo::GetManagers"" */

undefined4 CAstrolabeStarInfo__GetManagers_119b22f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a290c & 1) == 0) {
      DAT_123a290c = DAT_123a290c | 1;
      FUN_102500e0("CAstrolabeStarInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb4290);
    }
    return *DAT_123a28f0;
  }
  return 0;
}



/* --- CAstrolabeStarInfo::GetManagers_119b24c0 @ 119b24c0 --- */
// [RE-AUTO c3]
// id: CAstrolabeStarInfo::GetManagers
// calls: CAstrolabeStarInfo::GetManagers
// strings:
//   ""CAstrolabeStarInfo""
//   ""CAstrolabeStarInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeStarInfo::GetManagers
   calls: CAstrolabeStarInfo::GetManagers
   strings:
     ""CAstrolabeStarInfo""
     ""CAstrolabeStarInfo::GetManagers"" */

void CAstrolabeStarInfo__GetManagers_119b24c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CAstrolabeStarInfo__GetManagers(0,"CAstrolabeStarInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d67b40;
      if ((DAT_123a290c & 1) == 0) {
        DAT_123a290c = DAT_123a290c | 1;
        FUN_102500e0("CAstrolabeStarInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb4290);
      }
      if (((*DAT_123a28f0 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CAstrolabeStarInfo",0), iVar3 == 0)) &&
         ((DAT_123a297c & 1) == 0)) {
        DAT_123a2948 = 0;
        DAT_123a2958 = 0;
        DAT_123a295c = 0;
        _DAT_123a2960 = 0;
        uRam123a2964 = 0;
        DAT_123a297c = DAT_123a297c | 1;
        _DAT_123a2944 = &PTR_FUN_11d67b7c;
        _DAT_123a2968 = _DAT_11de9ae0;
        uRam123a296c = _UNK_11de9ae4;
        uRam123a2970 = _UNK_11de9ae8;
        uRam123a2974 = _UNK_11de9aec;
        DAT_123a2978 = 1;
        DAT_123a294c = iVar3;
        _DAT_123a2950 = iVar3;
        _DAT_123a2954 = iVar3;
        FUN_11a8911f(&LAB_11cb4230);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a76c20();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAstrolabeStarInfo::GetManagers_119b2640 @ 119b2640 --- */
// [RE-AUTO c3]
// id: CAstrolabeStarInfo::GetManagers
// calls: CAstrolabeStarInfo::GetManagers
// strings:
//   ""CAstrolabeStarInfo""
//   ""CAstrolabeStarInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeStarInfo::GetManagers
   calls: CAstrolabeStarInfo::GetManagers
   strings:
     ""CAstrolabeStarInfo""
     ""CAstrolabeStarInfo::GetManagers"" */

void CAstrolabeStarInfo__GetManagers_119b2640(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CAstrolabeStarInfo__GetManagers(0,"CAstrolabeStarInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d67b40;
      if ((DAT_123a290c & 1) == 0) {
        DAT_123a290c = DAT_123a290c | 1;
        FUN_102500e0("CAstrolabeStarInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb4290);
      }
      if (((*DAT_123a28f0 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CAstrolabeStarInfo",0), iVar3 == 0)) &&
         ((DAT_123a297c & 1) == 0)) {
        DAT_123a2948 = 0;
        DAT_123a2958 = 0;
        DAT_123a295c = 0;
        _DAT_123a2960 = 0;
        uRam123a2964 = 0;
        DAT_123a297c = DAT_123a297c | 1;
        _DAT_123a2944 = &PTR_FUN_11d67b7c;
        _DAT_123a2968 = _DAT_11de9ae0;
        uRam123a296c = _UNK_11de9ae4;
        uRam123a2970 = _UNK_11de9ae8;
        uRam123a2974 = _UNK_11de9aec;
        DAT_123a2978 = 1;
        DAT_123a294c = iVar3;
        _DAT_123a2950 = iVar3;
        _DAT_123a2954 = iVar3;
        FUN_11a8911f(&LAB_11cb4230);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a76c10();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  CAstrolabeStarInfo__GetManagers_11a76dc0();
  return;
}



/* --- CAstrolabeStarInfo::GetManagers_11a76dc0 @ 11a76dc0 --- */
// [RE-AUTO c3]
// id: CAstrolabeStarInfo::GetManagers
// calls: CAstrolabeStarInfo::GetManagers
// strings:
//   ""CAstrolabeStarInfo""
//   ""CAstrolabeStarInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAstrolabeStarInfo::GetManagers
   calls: CAstrolabeStarInfo::GetManagers
   strings:
     ""CAstrolabeStarInfo""
     ""CAstrolabeStarInfo::GetManagers"" */

void CAstrolabeStarInfo__GetManagers_11a76dc0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)CAstrolabeStarInfo__GetManagers(0,"CAstrolabeStarInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d67b40;
      if ((DAT_123a290c & 1) == 0) {
        DAT_123a290c = DAT_123a290c | 1;
        FUN_102500e0("CAstrolabeStarInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb4290);
      }
      puVar3 = (undefined *)*DAT_123a28f0;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CAstrolabeStarInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123a297c & 1) == 0) {
          DAT_123a2948 = 0;
          DAT_123a2958 = 0;
          DAT_123a295c = 0;
          _DAT_123a2960 = 0;
          uRam123a2964 = 0;
          DAT_123a297c = DAT_123a297c | 1;
          _DAT_123a2944 = &PTR_FUN_11d67b7c;
          _DAT_123a2968 = _DAT_11de9ae0;
          uRam123a296c = _UNK_11de9ae4;
          uRam123a2970 = _UNK_11de9ae8;
          uRam123a2974 = _UNK_11de9aec;
          DAT_123a2978 = 1;
          DAT_123a294c = puVar3;
          _DAT_123a2950 = puVar3;
          _DAT_123a2954 = puVar3;
          FUN_11a8911f(&LAB_11cb7890);
        }
        puVar3 = &DAT_123a2944;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = *(int **)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      local_10 = (**(code **)(*piVar1 + 0x18))();
      if (DAT_123ad234 == DAT_123ad238) {
        FUN_10463c40(DAT_123ad234,&local_10,&local_5,1,1);
      }
      else {
        *DAT_123ad234 = local_10;
        DAT_123ad234 = DAT_123ad234 + 1;
      }
      local_10 = piVar1[5];
      if (DAT_123ad240 == DAT_123ad244) {
        FUN_10463c40(DAT_123ad240,&local_10,&local_5,1,1);
      }
      else {
        *DAT_123ad240 = local_10;
        DAT_123ad240 = DAT_123ad240 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



