// ===== class CPlayerLevelUpInfo  (4 recovered methods) =====

/* --- CPlayerLevelUpInfo::GetManagers @ 10b62080 --- */
// [RE-AUTO c3]
// id: CPlayerLevelUpInfo::GetManagers
// strings:
//   ""CPlayerLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo::GetManagers"" */

undefined * CPlayerLevelUpInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc7d58;
  if (param_3 == 0) {
    if ((DAT_12025100 & 1) == 0) {
      DAT_12025100 = DAT_12025100 | 1;
      FUN_102500e0("CPlayerLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11c83420);
    }
    if ((undefined *)*DAT_120250e4 != (undefined *)0x0) {
      return (undefined *)*DAT_120250e4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12025144 & 1) == 0) {
      DAT_12025144 = DAT_12025144 | 1;
      FUN_10b62330();
      FUN_11a8911f(&LAB_11c833c0);
    }
    puVar1 = &DAT_1202510c;
  }
  return puVar1;
}



/* --- CPlayerLevelUpInfo::GetManagers_10b62910 @ 10b62910 --- */
// [RE-AUTO c3]
// id: CPlayerLevelUpInfo::GetManagers
// strings:
//   ""CPlayerLevelUpInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo::GetManagers"" */

undefined4 CPlayerLevelUpInfo__GetManagers_10b62910(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12025100 & 1) == 0) {
      DAT_12025100 = DAT_12025100 | 1;
      FUN_102500e0("CPlayerLevelUpInfo::GetManagers");
      FUN_11a8911f(&LAB_11c83420);
    }
    return *DAT_120250e4;
  }
  return 0;
}



/* --- CPlayerLevelUpInfo::GetManagers_117b1e10 @ 117b1e10 --- */
// [RE-AUTO c3]
// id: CPlayerLevelUpInfo::GetManagers
// calls: CPlayerLevelUpInfo::GetManagers
// strings:
//   ""CPlayerLevelUpInfo""
//   ""CPlayerLevelUpInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPlayerLevelUpInfo::GetManagers
   calls: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo""
     ""CPlayerLevelUpInfo::GetManagers"" */

int CPlayerLevelUpInfo__GetManagers_117b1e10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar6 = 0;
  piVar2 = (int *)CPlayerLevelUpInfo__GetManagers(0,"CPlayerLevelUpInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11cc7d58;
      if ((DAT_12025100 & 1) == 0) {
        DAT_12025100 = DAT_12025100 | 1;
        FUN_102500e0("CPlayerLevelUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11c83420);
      }
      puVar4 = (undefined *)*DAT_120250e4;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CPlayerLevelUpInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12025144 & 1) == 0) {
          DAT_12025110 = 0;
          DAT_12025120 = 0;
          DAT_12025124 = 0;
          _DAT_12025128 = 0;
          DAT_1202512c = 0;
          DAT_12025144 = DAT_12025144 | 1;
          _DAT_1202510c = &PTR_FUN_11cc7d94;
          DAT_12025130 = _DAT_11de9ae0;
          DAT_12025134 = _UNK_11de9ae4;
          uRam12025138 = _UNK_11de9ae8;
          DAT_1202513c = _UNK_11de9aec;
          DAT_12025140 = 1;
          DAT_12025114 = puVar4;
          _DAT_12025118 = puVar4;
          _DAT_1202511c = puVar4;
          FUN_11a8911f(&LAB_11caa1d0);
        }
        puVar4 = &DAT_1202510c;
      }
      if (((iVar5 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar5)) ||
         (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 == 0)) {
        return 0;
      }
      if (param_1 <= *(int *)(iVar1 + 0x10)) {
        return iVar6;
      }
      iVar6 = iVar6 + *(int *)(iVar1 + 0x14);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return iVar6;
}



/* --- CPlayerLevelUpInfo::GetManagers_117b2600 @ 117b2600 --- */
// [RE-AUTO c3]
// id: CPlayerLevelUpInfo::GetManagers
// strings:
//   ""CPlayerLevelUpInfo::GetManagers""
//   ""CPlayerLevelUpInfo""
//   ""CExplimitInfo::GetManagers""
//   ""CExplimitInfo""

/* [RE-AUTO c3]
   id: CPlayerLevelUpInfo::GetManagers
   strings:
     ""CPlayerLevelUpInfo::GetManagers""
     ""CPlayerLevelUpInfo""
     ""CExplimitInfo::GetManagers""
     ""CExplimitInfo"" */

int CPlayerLevelUpInfo__GetManagers_117b2600(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  undefined **local_10;
  undefined **local_c;
  int local_8;
  
  iVar6 = DAT_12392268;
  if (DAT_12392268 == 0) {
    iVar5 = 0;
    local_14 = 1;
    local_8 = 0;
    iVar6 = 1;
    while( true ) {
      local_c = &PTR_FUN_11cc7d58;
      if ((DAT_12025100 & 1) == 0) {
        DAT_12025100 = DAT_12025100 | 1;
        FUN_102500e0("CPlayerLevelUpInfo::GetManagers");
        FUN_11a8911f(&LAB_11c83420);
      }
      puVar3 = (undefined *)*DAT_120250e4;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CPlayerLevelUpInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_12025144 & 1) == 0) {
            DAT_12025144 = DAT_12025144 | 1;
            FUN_10b62330();
            FUN_11a8911f(&LAB_11caa290);
          }
          puVar3 = &DAT_1202510c;
        }
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar6 == -1) ||
         ((((iVar6 == 0 && (*(int *)(puVar3 + 0x30) != 0)) ||
           (iVar1 = *(int *)(puVar3 + 0x28), iVar1 == 0)) ||
          ((iVar4 = iVar6 - *(int *)(puVar3 + 0x30), iVar4 < 0 || (*(int *)(puVar3 + 0x24) <= iVar4)
           ))))) break;
      iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar1) * 4);
      if ((iVar2 == 0) || (iVar1 = *(int *)(iVar2 + (iVar4 % iVar1) * 4), iVar1 == 0)) break;
      local_8 = local_8 + *(int *)(iVar1 + 0x14);
      local_10 = &PTR_FUN_11dd6710;
      if ((DAT_123c7cd4 & 1) == 0) {
        DAT_123c7cd4 = DAT_123c7cd4 | 1;
        FUN_102500e0("CExplimitInfo::GetManagers");
        FUN_11a8911f(&LAB_11c75be0);
      }
      puVar3 = (undefined *)*DAT_123c7cd8;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_10,"CExplimitInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123c7d90 & 1) == 0) {
            DAT_123c7d90 = DAT_123c7d90 | 1;
            FUN_108df7e0();
            FUN_11a8911f(&LAB_11caa230);
          }
          puVar3 = &DAT_123c7d94;
        }
      }
      local_10 = &PTR_FUN_11da54a8;
      if (((iVar6 == 0) && (*(int *)(puVar3 + 0x30) != 0)) ||
         ((*(int *)(puVar3 + 0x28) == 0 ||
          ((iVar4 = iVar6 - *(int *)(puVar3 + 0x30), iVar4 < 0 || (*(int *)(puVar3 + 0x24) <= iVar4)
           ))))) break;
      iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / *(int *)(puVar3 + 0x28)) * 4);
      if ((iVar2 == 0) ||
         (iVar4 = *(int *)(iVar2 + (iVar4 % *(int *)(puVar3 + 0x28)) * 4), iVar4 == 0)) break;
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar4 + 0x14);
      }
      if (iVar5 < local_8) {
        (&DAT_12392218)[local_14] = *(int *)(local_14 * 4 + 0x12392214) + iVar5;
        local_14 = local_14 + 1;
        local_8 = *(int *)(iVar1 + 0x14);
        iVar5 = 0;
      }
      iVar6 = iVar6 + 1;
      if (0x28 < iVar6) {
        DAT_12392268 = local_14 + -1;
        return local_14 + -1;
      }
    }
    iVar6 = 0;
  }
  return iVar6;
}



