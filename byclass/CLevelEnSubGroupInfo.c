// ===== class CLevelEnSubGroupInfo  (3 recovered methods) =====

/* --- CLevelEnSubGroupInfo::GetManagers @ 104d8330 --- */
// [RE-AUTO c3]
// id: CLevelEnSubGroupInfo::GetManagers
// strings:
//   ""CLevelEnSubGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnSubGroupInfo::GetManagers
   strings:
     ""CLevelEnSubGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelEnSubGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be224 & 1) == 0) {
    DAT_123be224 = DAT_123be224 | 1;
    _DAT_123be240 = &DAT_123be230;
    DAT_123be244 = &DAT_123be230;
    DAT_123be230 = 0;
    FUN_100d83d0("CLevelEnSubGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6ea50);
  }
  return DAT_123be22c;
}



/* --- CLevelEnSubGroupInfo::GetManagers_118f0190 @ 118f0190 --- */
// [RE-AUTO c3]
// id: CLevelEnSubGroupInfo::GetManagers
// calls: CLevelEntrustNpcInfo::GetManagers_1173f7c0
// strings:
//   ""CLevelEnSubGroupInfo""
//   ""CLevelEnSubGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnSubGroupInfo::GetManagers
   calls: CLevelEntrustNpcInfo::GetManagers_1173f7c0
   strings:
     ""CLevelEnSubGroupInfo""
     ""CLevelEnSubGroupInfo::GetManagers"" */

void CLevelEnSubGroupInfo__GetManagers_118f0190(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_104edfa0(0,"CLevelEnSubGroupInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  FUN_11744050();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dbddc8;
      if ((DAT_123be224 & 1) == 0) {
        DAT_123be224 = DAT_123be224 | 1;
        FUN_102500e0("CLevelEnSubGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ea50);
      }
      puVar4 = (undefined *)*DAT_123be22c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CLevelEnSubGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123be0ac & 1) == 0) {
          DAT_123be078 = 0;
          DAT_123be088 = 0;
          DAT_123be08c = 0;
          _DAT_123be090 = 0;
          DAT_123be094 = 0;
          DAT_123be0ac = DAT_123be0ac | 1;
          _DAT_123be074 = &PTR_FUN_11dbe07c;
          DAT_123be098 = _DAT_11de9ae0;
          DAT_123be09c = _UNK_11de9ae4;
          uRam123be0a0 = _UNK_11de9ae8;
          DAT_123be0a4 = _UNK_11de9aec;
          DAT_123be0a8 = 1;
          DAT_123be07c = puVar4;
          _DAT_123be080 = puVar4;
          _DAT_123be084 = puVar4;
          FUN_11a8911f(&LAB_11cb0810);
        }
        puVar4 = &DAT_123be074;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CLevelEntrustNpcInfo__GetManagers_1173f7c0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* --- CLevelEnSubGroupInfo::GetManagers_119f4720 @ 119f4720 --- */
// [RE-AUTO c3]
// id: CLevelEnSubGroupInfo::GetManagers
// strings:
//   ""CLevelEnSubGroupInfo::GetManagers""
//   ""CLevelEnSubGroupInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnSubGroupInfo::GetManagers
   strings:
     ""CLevelEnSubGroupInfo::GetManagers""
     ""CLevelEnSubGroupInfo""
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

void __fastcall CLevelEnSubGroupInfo__GetManagers_119f4720(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbddc8;
  if ((DAT_123be224 & 1) == 0) {
    DAT_123be224 = DAT_123be224 | 1;
    FUN_102500e0("CLevelEnSubGroupInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6ea50);
  }
  if (((*DAT_123be22c == 0) && (iVar1 = FUN_11679e10(&local_8,"CLevelEnSubGroupInfo",0), iVar1 == 0)
      ) && ((DAT_123be0ac & 1) == 0)) {
    DAT_123be078 = 0;
    DAT_123be088 = 0;
    DAT_123be08c = 0;
    _DAT_123be090 = 0;
    DAT_123be094 = 0;
    DAT_123be0ac = DAT_123be0ac | 1;
    DAT_123be07c = 0;
    _DAT_123be080 = 0;
    _DAT_123be084 = 0;
    _DAT_123be074 = &PTR_FUN_11dbe07c;
    DAT_123be098 = _DAT_11de9ae0;
    DAT_123be09c = _UNK_11de9ae4;
    uRam123be0a0 = _UNK_11de9ae8;
    DAT_123be0a4 = _UNK_11de9aec;
    DAT_123be0a8 = 1;
    FUN_11a8911f(&LAB_11cb5420);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 4 != 0) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb53c0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 4));
  }
  return;
}



