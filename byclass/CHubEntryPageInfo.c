// ===== class CHubEntryPageInfo  (2 recovered methods) =====

/* --- CHubEntryPageInfo::GetManagers @ 107ca500 --- */
// [RE-AUTO c3]
// id: CHubEntryPageInfo::GetManagers
// strings:
//   ""CHubEntryPageInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubEntryPageInfo::GetManagers
   strings:
     ""CHubEntryPageInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHubEntryPageInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bedd0 & 1) == 0) {
    DAT_123bedd0 = DAT_123bedd0 | 1;
    _DAT_123bedac = &DAT_123bed9c;
    DAT_123bedb0 = &DAT_123bed9c;
    DAT_123bed9c = 0;
    FUN_100d83d0("CHubEntryPageInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70550);
  }
  return DAT_123bed98;
}



/* --- CHubEntryPageInfo::GetManagers_118ee390 @ 118ee390 --- */
// [RE-AUTO c3]
// id: CHubEntryPageInfo::GetManagers
// strings:
//   ""CHubEntryPageInfo""
//   ""CHubEntryPageInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubEntryPageInfo::GetManagers
   strings:
     ""CHubEntryPageInfo""
     ""CHubEntryPageInfo::GetManagers"" */

void CHubEntryPageInfo__GetManagers_118ee390(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_107d3ad0(0,"CHubEntryPageInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dc85b0;
      if ((DAT_123bedd0 & 1) == 0) {
        DAT_123bedd0 = DAT_123bedd0 | 1;
        FUN_102500e0("CHubEntryPageInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70550);
      }
      puVar3 = (undefined4 *)*DAT_123bed98;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CHubEntryPageInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123beb68 & 1) == 0) {
          DAT_123beb70 = 0;
          DAT_123beb80 = 0;
          DAT_123beb84 = 0;
          _DAT_123beb88 = 0;
          DAT_123beb8c = 0;
          DAT_123beb68 = DAT_123beb68 | 1;
          DAT_123beb6c = &PTR_FUN_11dc887c;
          DAT_123beb90 = _DAT_11de9ae0;
          DAT_123beb94 = _UNK_11de9ae4;
          uRam123beb98 = _UNK_11de9ae8;
          DAT_123beb9c = _UNK_11de9aec;
          DAT_123beba0 = 1;
          DAT_123beb74 = puVar3;
          _DAT_123beb78 = puVar3;
          _DAT_123beb7c = puVar3;
          FUN_11a8911f(&LAB_11cb06f0);
        }
        puVar3 = &DAT_123beb6c;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
         (*(int *)(puVar3[5] + iVar4 * 4) != 0)) {
        FUN_116b8f60();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



