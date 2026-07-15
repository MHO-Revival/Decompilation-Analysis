// ===== class CMonsterPartGroupInfo  (3 recovered methods) =====

/* --- CMonsterPartGroupInfo::GetManagers @ 107ec630 --- */
// [RE-AUTO c3]
// id: CMonsterPartGroupInfo::GetManagers
// strings:
//   ""CMonsterPartGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterPartGroupInfo::GetManagers
   strings:
     ""CMonsterPartGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMonsterPartGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123beef4 & 1) == 0) {
    DAT_123beef4 = DAT_123beef4 | 1;
    _DAT_123beeec = &DAT_123beedc;
    DAT_123beef0 = &DAT_123beedc;
    DAT_123beedc = 0;
    FUN_100d83d0("CMonsterPartGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71300);
  }
  return DAT_123beed8;
}



/* --- CMonsterPartGroupInfo::GetManagers_118d5000 @ 118d5000 --- */
// [RE-AUTO c3]
// id: CMonsterPartGroupInfo::GetManagers
// strings:
//   ""CMonsterPartGroupInfo""
//   ""CMonsterPartGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterPartGroupInfo::GetManagers
   strings:
     ""CMonsterPartGroupInfo""
     ""CMonsterPartGroupInfo::GetManagers"" */

void CMonsterPartGroupInfo__GetManagers_118d5000(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108045c0(0,"CMonsterPartGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dcaed4;
      if ((DAT_123beef4 & 1) == 0) {
        DAT_123beef4 = DAT_123beef4 | 1;
        FUN_102500e0("CMonsterPartGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c71300);
      }
      if (((*DAT_123beed8 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonsterPartGroupInfo",0), iVar3 == 0)) &&
         ((DAT_123bf02c & 1) == 0)) {
        DAT_123befbc = 0;
        DAT_123befcc = 0;
        DAT_123befd0 = 0;
        _DAT_123befd4 = 0;
        DAT_123befd8 = 0;
        DAT_123bf02c = DAT_123bf02c | 1;
        _DAT_123befb8 = &PTR_FUN_11dcafd0;
        DAT_123befdc = _DAT_11de9ae0;
        DAT_123befe0 = _UNK_11de9ae4;
        uRam123befe4 = _UNK_11de9ae8;
        DAT_123befe8 = _UNK_11de9aec;
        DAT_123befec = 1;
        DAT_123befc0 = iVar3;
        _DAT_123befc4 = iVar3;
        _DAT_123befc8 = iVar3;
        FUN_11a8911f(&LAB_11cb0030);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1185d990();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMonsterPartGroupInfo::GetManagers_118d5150 @ 118d5150 --- */
// [RE-AUTO c3]
// id: CMonsterPartGroupInfo::GetManagers
// strings:
//   ""CMonsterPartGroupInfo""
//   ""CMonsterPartGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterPartGroupInfo::GetManagers
   strings:
     ""CMonsterPartGroupInfo""
     ""CMonsterPartGroupInfo::GetManagers"" */

void CMonsterPartGroupInfo__GetManagers_118d5150(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108045c0(0,"CMonsterPartGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dcaed4;
      if ((DAT_123beef4 & 1) == 0) {
        DAT_123beef4 = DAT_123beef4 | 1;
        FUN_102500e0("CMonsterPartGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c71300);
      }
      if (((*DAT_123beed8 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CMonsterPartGroupInfo",0), iVar3 == 0)) &&
         ((DAT_123bf02c & 1) == 0)) {
        DAT_123befbc = 0;
        DAT_123befcc = 0;
        DAT_123befd0 = 0;
        _DAT_123befd4 = 0;
        DAT_123befd8 = 0;
        DAT_123bf02c = DAT_123bf02c | 1;
        _DAT_123befb8 = &PTR_FUN_11dcafd0;
        DAT_123befdc = _DAT_11de9ae0;
        DAT_123befe0 = _UNK_11de9ae4;
        uRam123befe4 = _UNK_11de9ae8;
        DAT_123befe8 = _UNK_11de9aec;
        DAT_123befec = 1;
        DAT_123befc0 = iVar3;
        _DAT_123befc4 = iVar3;
        _DAT_123befc8 = iVar3;
        FUN_11a8911f(&LAB_11cb0030);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1185d930();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



