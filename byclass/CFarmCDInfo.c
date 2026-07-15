// ===== class CFarmCDInfo  (2 recovered methods) =====

/* --- CFarmCDInfo::GetManagers @ 108e1b70 --- */
// [RE-AUTO c3]
// id: CFarmCDInfo::GetManagers
// strings:
//   ""CFarmCDInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFarmCDInfo::GetManagers
   strings:
     ""CFarmCDInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFarmCDInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7ee4 & 1) == 0) {
    DAT_123c7ee4 = DAT_123c7ee4 | 1;
    _DAT_123c7efc = &DAT_123c7eec;
    DAT_123c7f00 = &DAT_123c7eec;
    DAT_123c7eec = 0;
    FUN_100d83d0("CFarmCDInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c76260);
  }
  return DAT_123c7ee8;
}



/* --- CFarmCDInfo::GetManagers_11944110 @ 11944110 --- */
// [RE-AUTO c3]
// id: CFarmCDInfo::GetManagers
// calls: CItemBaseInfo::GetManagers_117c5b70
// strings:
//   ""CFarmCDInfo""
//   ""CFarmCDInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFarmCDInfo::GetManagers
   calls: CItemBaseInfo::GetManagers_117c5b70
   strings:
     ""CFarmCDInfo""
     ""CFarmCDInfo::GetManagers"" */

void CFarmCDInfo__GetManagers_11944110(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_108ecf40(0,"CFarmCDInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd68ac;
      if ((DAT_123c7ee4 & 1) == 0) {
        DAT_123c7ee4 = DAT_123c7ee4 | 1;
        FUN_102500e0("CFarmCDInfo::GetManagers");
        FUN_11a8911f(&LAB_11c76260);
      }
      if (((*DAT_123c7ee8 == 0) && (iVar4 = FUN_11679e10(&param_1,"CFarmCDInfo",0), iVar4 == 0)) &&
         ((DAT_123c8088 & 1) == 0)) {
        DAT_123c8090 = 0;
        DAT_123c80a0 = 0;
        DAT_123c80a4 = 0;
        _DAT_123c80a8 = 0;
        DAT_123c80ac = 0;
        DAT_123c8088 = DAT_123c8088 | 1;
        _DAT_123c808c = &PTR_FUN_11dd6940;
        DAT_123c80b0 = _DAT_11de9ae0;
        DAT_123c80b4 = _UNK_11de9ae4;
        uRam123c80b8 = _UNK_11de9ae8;
        DAT_123c80bc = _UNK_11de9aec;
        DAT_123c80c0 = 1;
        DAT_123c8094 = iVar4;
        _DAT_123c8098 = iVar4;
        _DAT_123c809c = iVar4;
        FUN_11a8911f(&LAB_11cb25e0);
      }
      param_1 = &PTR_FUN_11da54a8;
      CItemBaseInfo__GetManagers_117c5b70(uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



