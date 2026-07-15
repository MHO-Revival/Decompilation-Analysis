// ===== class CStarStoneSlotInfo  (2 recovered methods) =====

/* --- CStarStoneSlotInfo::GetManagers @ 1098b960 --- */
// [RE-AUTO c3]
// id: CStarStoneSlotInfo::GetManagers
// strings:
//   ""CStarStoneSlotInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CStarStoneSlotInfo::GetManagers
   strings:
     ""CStarStoneSlotInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CStarStoneSlotInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c88a4 & 1) == 0) {
    DAT_123c88a4 = DAT_123c88a4 | 1;
    _DAT_123c88bc = &DAT_123c88ac;
    DAT_123c88c0 = &DAT_123c88ac;
    DAT_123c88ac = 0;
    FUN_100d83d0("CStarStoneSlotInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7a860);
  }
  return DAT_123c88a8;
}



/* --- CStarStoneSlotInfo::GetManagers_115a6180 @ 115a6180 --- */
// [RE-AUTO c3]
// id: CStarStoneSlotInfo::GetManagers
// strings:
//   ""CStarStoneSlotInfo::GetManagers""
//   ""CStarStoneSlotInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CStarStoneSlotInfo::GetManagers
   strings:
     ""CStarStoneSlotInfo::GetManagers""
     ""CStarStoneSlotInfo"" */

int CStarStoneSlotInfo__GetManagers_115a6180(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  uVar3 = FUN_115a6b30();
  iVar6 = 1;
  while( true ) {
    local_8 = &PTR_FUN_11de0300;
    if ((DAT_123c88a4 & 1) == 0) {
      DAT_123c88a4 = DAT_123c88a4 | 1;
      FUN_102500e0("CStarStoneSlotInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7a860);
    }
    puVar4 = (undefined *)*DAT_123c88a8;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)FUN_11679e10(&local_8,"CStarStoneSlotInfo",0);
      if (puVar4 == (undefined *)0x0) {
        if ((DAT_123c88f4 & 1) == 0) {
          DAT_123c88fc = 0;
          DAT_123c890c = 0;
          uRam123c8910 = 0;
          _DAT_123c8914 = 0;
          DAT_123c8918 = 0;
          DAT_123c88f4 = DAT_123c88f4 | 1;
          _DAT_123c88f8 = &PTR_FUN_11de035c;
          DAT_123c891c = _DAT_11de9ae0;
          DAT_123c8920 = _UNK_11de9ae4;
          uRam123c8924 = _UNK_11de9ae8;
          DAT_123c8928 = _UNK_11de9aec;
          DAT_123c892c = 1;
          DAT_123c8900 = puVar4;
          _DAT_123c8904 = puVar4;
          _DAT_123c8908 = puVar4;
          FUN_11a8911f(&LAB_11ca3950);
        }
        puVar4 = &DAT_123c88f8;
      }
    }
    if ((iVar6 == -1) ||
       ((((iVar6 == 0 && (*(int *)(puVar4 + 0x30) != 0)) ||
         (iVar1 = *(int *)(puVar4 + 0x28), iVar1 == 0)) ||
        ((iVar5 = iVar6 - *(int *)(puVar4 + 0x30), iVar5 < 0 || (*(int *)(puVar4 + 0x24) <= iVar5)))
        ))) break;
    iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
    if ((iVar2 == 0) ||
       ((iVar1 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar1 == 0 ||
        (uVar3 < *(uint *)(iVar1 + 0x14))))) break;
    iVar6 = iVar6 + 1;
    if (4 < iVar6) {
      return 4;
    }
  }
  return iVar6 + -1;
}



