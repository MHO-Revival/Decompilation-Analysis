// ===== class CHRLevelInfo  (5 recovered methods) =====

/* --- CHRLevelInfo::GetManagers @ 11393d80 --- */
// [RE-AUTO c3]
// id: CHRLevelInfo::GetManagers
// strings:
//   ""CHRLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CHRLevelInfo::GetManagers
   strings:
     ""CHRLevelInfo::GetManagers"" */

undefined * CHRLevelInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d237d4;
  if (param_3 == 0) {
    if ((DAT_120e8264 & 1) == 0) {
      DAT_120e8264 = DAT_120e8264 | 1;
      FUN_102500e0("CHRLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9b8a0);
    }
    if ((undefined *)*DAT_120e8248 != (undefined *)0x0) {
      return (undefined *)*DAT_120e8248;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_120e83fc & 1) == 0) {
      DAT_120e83fc = DAT_120e83fc | 1;
      FUN_11394330();
      FUN_11a8911f(&LAB_11c9b6c0);
    }
    puVar1 = &DAT_120e83c4;
  }
  return puVar1;
}



/* --- CHRLevelInfo::GetManagers_11399350 @ 11399350 --- */
// [RE-AUTO c3]
// id: CHRLevelInfo::GetManagers
// strings:
//   ""CHRLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CHRLevelInfo::GetManagers
   strings:
     ""CHRLevelInfo::GetManagers"" */

undefined4 CHRLevelInfo__GetManagers_11399350(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_120e8264 & 1) == 0) {
      DAT_120e8264 = DAT_120e8264 | 1;
      FUN_102500e0("CHRLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9b8a0);
    }
    return *DAT_120e8248;
  }
  return 0;
}



/* --- CHRLevelInfo::GetManagers_114e3fc0 @ 114e3fc0 --- */
// [RE-AUTO c3]
// id: CHRLevelInfo::GetManagers
// calls: CAttributeInfo::GetManagers
// strings:
//   ""CAttributeInfo""
//   ""CHRLevelInfo::GetManagers""
//   ""CHRLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHRLevelInfo::GetManagers
   calls: CAttributeInfo::GetManagers
   strings:
     ""CAttributeInfo""
     ""CHRLevelInfo::GetManagers""
     ""CHRLevelInfo"" */

void CHRLevelInfo__GetManagers_114e3fc0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  undefined **local_c [2];
  
  local_c[0] = &PTR_FUN_11dbac68;
  puVar2 = (undefined4 *)CAttributeInfo__GetManagers();
  puVar2 = (undefined4 *)*puVar2;
  if ((puVar2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_11679e10(local_c,"CAttributeInfo",0), puVar2 == (undefined4 *)0x0))
  {
    if ((DAT_123bdda4 & 1) == 0) {
      DAT_123bdda4 = DAT_123bdda4 | 1;
      FUN_10472c80();
      FUN_11a8911f(&LAB_11c9f9d0);
    }
    puVar2 = &DAT_123bdd64;
  }
  local_c[0] = &PTR_FUN_11da54a8;
  iVar7 = puVar2[10];
  if (((iVar7 != 0) && (iVar3 = 0x13d - puVar2[0xc], -1 < iVar3)) && (iVar3 < (int)puVar2[9])) {
    iVar5 = *(int *)(puVar2[8] + (iVar3 / iVar7) * 4);
    if (iVar5 != 0) {
      iVar7 = *(int *)(iVar5 + (iVar3 % iVar7) * 4);
      goto LAB_114e4055;
    }
  }
  iVar7 = 0;
LAB_114e4055:
  iVar7 = *(int *)(iVar7 + 0xd0);
  iVar3 = FUN_1025b060();
  if (iVar3 != iVar7) {
    iVar3 = FUN_1025b060();
    local_10 = FUN_1025b060();
    iVar7 = iVar3 + 1;
    if (-1 < iVar3 + 1) {
      while( true ) {
        iVar3 = iVar7;
        local_c[0] = &PTR_FUN_11d237d4;
        if ((DAT_120e8264 & 1) == 0) {
          DAT_120e8264 = DAT_120e8264 | 1;
          FUN_102500e0("CHRLevelInfo::GetManagers");
          FUN_11a8911f(&LAB_11c9b8a0);
        }
        puVar4 = (undefined *)*DAT_120e8248;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(local_c,"CHRLevelInfo",0), puVar4 == (undefined *)0x0
           )) {
          if ((DAT_120e83fc & 1) == 0) {
            DAT_120e83c8 = 0;
            DAT_120e83d8 = 0;
            DAT_120e83dc = 0;
            _DAT_120e83e0 = 0;
            DAT_120e83e4 = 0;
            DAT_120e83fc = DAT_120e83fc | 1;
            _DAT_120e83c4 = &PTR_FUN_11d23808;
            DAT_120e83e8 = _DAT_11de9ae0;
            DAT_120e83ec = _UNK_11de9ae4;
            uRam120e83f0 = _UNK_11de9ae8;
            DAT_120e83f4 = _UNK_11de9aec;
            DAT_120e83f8 = 1;
            DAT_120e83cc = puVar4;
            _DAT_120e83d0 = puVar4;
            _DAT_120e83d4 = puVar4;
            FUN_11a8911f(&LAB_11c9fa30);
          }
          puVar4 = &DAT_120e83c4;
        }
        local_c[0] = &PTR_FUN_11da54a8;
        if ((((iVar3 == -1) || ((iVar3 == 0 && (*(int *)(puVar4 + 0x30) != 0)))) ||
            (iVar7 = *(int *)(puVar4 + 0x28), iVar7 == 0)) ||
           ((iVar5 = iVar3 - *(int *)(puVar4 + 0x30), iVar5 < 0 ||
            (*(int *)(puVar4 + 0x24) <= iVar5)))) break;
        iVar6 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar7) * 4);
        if ((((iVar6 == 0) || (iVar7 = *(int *)(iVar6 + (iVar5 % iVar7) * 4), iVar7 == 0)) ||
            (((iVar5 = *(int *)(iVar7 + 0x14), 0 < iVar5 && (iVar6 = FUN_1025b060(), iVar6 < iVar5))
             || ((0 < *(int *)(iVar7 + 0x18) &&
                 (cVar1 = FUN_114cdd70(*(int *)(iVar7 + 0x18)), cVar1 == '\0')))))) ||
           (iVar7 = iVar3 + 1, local_10 = iVar3, iVar3 + 1 < 0)) break;
      }
    }
    iVar7 = FUN_1025b060();
    if (local_10 != iVar7) {
      FUN_113b4f80(&local_10,0,0);
      FUN_114e3f30();
      FUN_114e4240();
    }
  }
  return;
}



/* --- CHRLevelInfo::GetManagers_11914c60 @ 11914c60 --- */
// [RE-AUTO c3]
// id: CHRLevelInfo::GetManagers
// calls: CHRLevelInfo::GetManagers
// strings:
//   ""CHRLevelInfo""
//   ""CHRLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHRLevelInfo::GetManagers
   calls: CHRLevelInfo::GetManagers
   strings:
     ""CHRLevelInfo""
     ""CHRLevelInfo::GetManagers"" */

void CHRLevelInfo__GetManagers_11914c60(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CHRLevelInfo__GetManagers(0,"CHRLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d237d4;
      if ((DAT_120e8264 & 1) == 0) {
        DAT_120e8264 = DAT_120e8264 | 1;
        FUN_102500e0("CHRLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9b8a0);
      }
      if (((*DAT_120e8248 == 0) && (iVar3 = FUN_11679e10(&local_8,"CHRLevelInfo",0), iVar3 == 0)) &&
         ((DAT_120e83fc & 1) == 0)) {
        DAT_120e83c8 = 0;
        DAT_120e83d8 = 0;
        DAT_120e83dc = 0;
        _DAT_120e83e0 = 0;
        DAT_120e83e4 = 0;
        DAT_120e83fc = DAT_120e83fc | 1;
        _DAT_120e83c4 = &PTR_FUN_11d23808;
        DAT_120e83e8 = _DAT_11de9ae0;
        DAT_120e83ec = _UNK_11de9ae4;
        uRam120e83f0 = _UNK_11de9ae8;
        DAT_120e83f4 = _UNK_11de9aec;
        DAT_120e83f8 = 1;
        DAT_120e83cc = iVar3;
        _DAT_120e83d0 = iVar3;
        _DAT_120e83d4 = iVar3;
        FUN_11a8911f(&LAB_11cb1800);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a08460();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CHRLevelInfo::GetManagers_11914db0 @ 11914db0 --- */
// [RE-AUTO c3]
// id: CHRLevelInfo::GetManagers
// calls: CHRLevelInfo::GetManagers
// strings:
//   ""CHRLevelInfo""
//   ""CHRLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHRLevelInfo::GetManagers
   calls: CHRLevelInfo::GetManagers
   strings:
     ""CHRLevelInfo""
     ""CHRLevelInfo::GetManagers"" */

void CHRLevelInfo__GetManagers_11914db0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CHRLevelInfo__GetManagers(0,"CHRLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d237d4;
      if ((DAT_120e8264 & 1) == 0) {
        DAT_120e8264 = DAT_120e8264 | 1;
        FUN_102500e0("CHRLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9b8a0);
      }
      if (((*DAT_120e8248 == 0) && (iVar3 = FUN_11679e10(&local_8,"CHRLevelInfo",0), iVar3 == 0)) &&
         ((DAT_120e83fc & 1) == 0)) {
        DAT_120e83c8 = 0;
        DAT_120e83d8 = 0;
        DAT_120e83dc = 0;
        _DAT_120e83e0 = 0;
        DAT_120e83e4 = 0;
        DAT_120e83fc = DAT_120e83fc | 1;
        _DAT_120e83c4 = &PTR_FUN_11d23808;
        DAT_120e83e8 = _DAT_11de9ae0;
        DAT_120e83ec = _UNK_11de9ae4;
        uRam120e83f0 = _UNK_11de9ae8;
        DAT_120e83f4 = _UNK_11de9aec;
        DAT_120e83f8 = 1;
        DAT_120e83cc = iVar3;
        _DAT_120e83d0 = iVar3;
        _DAT_120e83d4 = iVar3;
        FUN_11a8911f(&LAB_11cb1800);
      }
      local_8 = &PTR_FUN_11da54a8;
      CMHLevelInfo__GetManagers_11a08370();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



