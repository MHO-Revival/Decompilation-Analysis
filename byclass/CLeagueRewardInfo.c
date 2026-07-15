// ===== class CLeagueRewardInfo  (2 recovered methods) =====

/* --- CLeagueRewardInfo::GetManagers @ 1094c8e0 --- */
// [RE-AUTO c3]
// id: CLeagueRewardInfo::GetManagers
// strings:
//   ""CLeagueRewardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueRewardInfo::GetManagers
   strings:
     ""CLeagueRewardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLeagueRewardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c0034 & 1) == 0) {
    DAT_123c0034 = DAT_123c0034 | 1;
    _DAT_123c002c = &DAT_123c001c;
    DAT_123c0030 = &DAT_123c001c;
    DAT_123c001c = 0;
    FUN_100d83d0("CLeagueRewardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c78a30);
  }
  return DAT_123c0018;
}



/* --- CLeagueRewardInfo::GetManagers_119a19b0 @ 119a19b0 --- */
// [RE-AUTO c3]
// id: CLeagueRewardInfo::GetManagers
// strings:
//   ""CLeagueRewardInfo""
//   ""CLeagueRewardInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueRewardInfo::GetManagers
   strings:
     ""CLeagueRewardInfo""
     ""CLeagueRewardInfo::GetManagers"" */

void CLeagueRewardInfo__GetManagers_119a19b0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_109500a0(0,"CLeagueRewardInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11ddc718;
      if ((DAT_123c0034 & 1) == 0) {
        DAT_123c0034 = DAT_123c0034 | 1;
        FUN_102500e0("CLeagueRewardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78a30);
      }
      puVar4 = (undefined *)*DAT_123c0018;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CLeagueRewardInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c000c & 1) == 0) {
          DAT_123bffd8 = 0;
          DAT_123bffe8 = 0;
          DAT_123bffec = 0;
          _DAT_123bfff0 = 0;
          DAT_123bfff4 = 0;
          DAT_123c000c = DAT_123c000c | 1;
          _DAT_123bffd4 = &PTR_FUN_11ddc738;
          DAT_123bfff8 = _DAT_11de9ae0;
          DAT_123bfffc = _UNK_11de9ae4;
          uRam123c0000 = _UNK_11de9ae8;
          DAT_123c0004 = _UNK_11de9aec;
          DAT_123c0008 = 1;
          DAT_123bffdc = puVar4;
          _DAT_123bffe0 = puVar4;
          _DAT_123bffe4 = puVar4;
          FUN_11a8911f(&LAB_11cb3de0);
        }
        puVar4 = &DAT_123bffd4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a6fe10(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



