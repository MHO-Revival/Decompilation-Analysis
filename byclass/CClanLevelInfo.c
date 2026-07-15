// ===== class CClanLevelInfo  (3 recovered methods) =====

/* --- CClanLevelInfo::GetManagers @ 1194bbf0 --- */
// [RE-AUTO c3]
// id: CClanLevelInfo::GetManagers
// strings:
//   ""CClanLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CClanLevelInfo::GetManagers
   strings:
     ""CClanLevelInfo::GetManagers"" */

undefined * CClanLevelInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d61fb4;
  if (param_3 == 0) {
    if ((DAT_123a0278 & 1) == 0) {
      DAT_123a0278 = DAT_123a0278 | 1;
      FUN_102500e0("CClanLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2910);
    }
    if ((undefined *)*DAT_123a025c != (undefined *)0x0) {
      return (undefined *)*DAT_123a025c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a02e8 & 1) == 0) {
      DAT_123a02e8 = DAT_123a02e8 | 1;
      FUN_1194bf00();
      FUN_11a8911f(&LAB_11cb28b0);
    }
    puVar1 = &DAT_123a02b0;
  }
  return puVar1;
}



/* --- CClanLevelInfo::GetManagers_1194c7a0 @ 1194c7a0 --- */
// [RE-AUTO c3]
// id: CClanLevelInfo::GetManagers
// strings:
//   ""CClanLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CClanLevelInfo::GetManagers
   strings:
     ""CClanLevelInfo::GetManagers"" */

undefined4 CClanLevelInfo__GetManagers_1194c7a0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a0278 & 1) == 0) {
      DAT_123a0278 = DAT_123a0278 | 1;
      FUN_102500e0("CClanLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2910);
    }
    return *DAT_123a025c;
  }
  return 0;
}



/* --- CClanLevelInfo::GetManagers_1194c9c0 @ 1194c9c0 --- */
// [RE-AUTO c3]
// id: CClanLevelInfo::GetManagers
// calls: CClanLevelInfo::GetManagers
// strings:
//   ""CClanLevelInfo""
//   ""CClanLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CClanLevelInfo::GetManagers
   calls: CClanLevelInfo::GetManagers
   strings:
     ""CClanLevelInfo""
     ""CClanLevelInfo::GetManagers"" */

void CClanLevelInfo__GetManagers_1194c9c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CClanLevelInfo__GetManagers(0,"CClanLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d61fb4;
      if ((DAT_123a0278 & 1) == 0) {
        DAT_123a0278 = DAT_123a0278 | 1;
        FUN_102500e0("CClanLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb2910);
      }
      if (((*DAT_123a025c == 0) && (iVar3 = FUN_11679e10(&local_8,"CClanLevelInfo",0), iVar3 == 0))
         && ((DAT_123a02e8 & 1) == 0)) {
        DAT_123a02b4 = 0;
        DAT_123a02c4 = 0;
        DAT_123a02c8 = 0;
        _DAT_123a02cc = 0;
        uRam123a02d0 = 0;
        DAT_123a02e8 = DAT_123a02e8 | 1;
        _DAT_123a02b0 = &PTR_FUN_11d61fe8;
        _DAT_123a02d4 = _DAT_11de9ae0;
        uRam123a02d8 = _UNK_11de9ae4;
        uRam123a02dc = _UNK_11de9ae8;
        uRam123a02e0 = _UNK_11de9aec;
        DAT_123a02e4 = 1;
        DAT_123a02b8 = iVar3;
        _DAT_123a02bc = iVar3;
        _DAT_123a02c0 = iVar3;
        FUN_11a8911f(&LAB_11cb28b0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a368d0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



