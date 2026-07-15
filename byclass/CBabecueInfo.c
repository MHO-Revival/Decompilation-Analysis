// ===== class CBabecueInfo  (2 recovered methods) =====

/* --- CBabecueInfo::GetManagers @ 108a2b70 --- */
// [RE-AUTO c3]
// id: CBabecueInfo::GetManagers
// strings:
//   ""CBabecueInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBabecueInfo::GetManagers
   strings:
     ""CBabecueInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CBabecueInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c78cc & 1) == 0) {
    DAT_123c78cc = DAT_123c78cc | 1;
    _DAT_123c78e4 = &DAT_123c78d4;
    DAT_123c78e8 = &DAT_123c78d4;
    DAT_123c78d4 = 0;
    FUN_100d83d0("CBabecueInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c74d10);
  }
  return DAT_123c78d0;
}



/* --- CBabecueInfo::GetManagers_11719200 @ 11719200 --- */
// [RE-AUTO c3]
// id: CBabecueInfo::GetManagers
// strings:
//   ""CBabecueInfo""
//   ""CBabecueInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBabecueInfo::GetManagers
   strings:
     ""CBabecueInfo""
     ""CBabecueInfo::GetManagers"" */

int CBabecueInfo__GetManagers_11719200(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108aa830(0,"CBabecueInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (iVar2 < 1) {
    return 0;
  }
  while( true ) {
    local_8 = &PTR_FUN_11dd4468;
    if ((DAT_123c78cc & 1) == 0) {
      DAT_123c78cc = DAT_123c78cc | 1;
      FUN_102500e0("CBabecueInfo::GetManagers");
      FUN_11a8911f(&LAB_11c74d10);
    }
    puVar3 = (undefined4 *)*DAT_123c78d0;
    if ((puVar3 == (undefined4 *)0x0) &&
       (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CBabecueInfo",0), puVar3 == (undefined4 *)0x0)
       ) {
      if ((DAT_123c79e4 & 1) == 0) {
        DAT_123c79ec = 0;
        DAT_123c79fc = 0;
        DAT_123c7a00 = 0;
        _DAT_123c7a04 = 0;
        uRam123c7a08 = 0;
        DAT_123c79e4 = DAT_123c79e4 | 1;
        DAT_123c79e8 = &PTR_FUN_11dd44cc;
        _DAT_123c7a0c = _DAT_11de9ae0;
        uRam123c7a10 = _UNK_11de9ae4;
        uRam123c7a14 = _UNK_11de9ae8;
        uRam123c7a18 = _UNK_11de9aec;
        DAT_123c7a1c = 1;
        DAT_123c79f0 = puVar3;
        _DAT_123c79f4 = puVar3;
        _DAT_123c79f8 = puVar3;
        FUN_11a8911f(&LAB_11ca88a0);
      }
      puVar3 = &DAT_123c79e8;
    }
    if ((iVar5 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar5)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(puVar3[5] + iVar5 * 4);
    }
    if (*(int *)(iVar4 + 0x24) == param_1) break;
    iVar5 = iVar5 + 1;
    if (iVar2 <= iVar5) {
      return 0;
    }
  }
  return iVar4;
}



