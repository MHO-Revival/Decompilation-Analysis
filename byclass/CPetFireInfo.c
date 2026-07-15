// ===== class CPetFireInfo  (3 recovered methods) =====

/* --- CPetFireInfo::GetManagers @ 11580e30 --- */
// [RE-AUTO c3]
// id: CPetFireInfo::GetManagers
// strings:
//   ""CPetFireInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetFireInfo::GetManagers
   strings:
     ""CPetFireInfo::GetManagers"" */

undefined * CPetFireInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2df40;
  if (param_3 == 0) {
    if ((DAT_122df1dc & 1) == 0) {
      DAT_122df1dc = DAT_122df1dc | 1;
      FUN_102500e0("CPetFireInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca2f20);
    }
    if ((undefined *)*DAT_122df1c0 != (undefined *)0x0) {
      return (undefined *)*DAT_122df1c0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df224 & 1) == 0) {
      DAT_122df224 = DAT_122df224 | 1;
      FUN_115810a0();
      FUN_11a8911f(&LAB_11ca2c80);
    }
    puVar1 = &DAT_122df1ec;
  }
  return puVar1;
}



/* --- CPetFireInfo::GetManagers_11582a60 @ 11582a60 --- */
// [RE-AUTO c3]
// id: CPetFireInfo::GetManagers
// strings:
//   ""CPetFireInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetFireInfo::GetManagers
   strings:
     ""CPetFireInfo::GetManagers"" */

undefined4 CPetFireInfo__GetManagers_11582a60(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df1dc & 1) == 0) {
      DAT_122df1dc = DAT_122df1dc | 1;
      FUN_102500e0("CPetFireInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca2f20);
    }
    return *DAT_122df1c0;
  }
  return 0;
}



/* --- CPetFireInfo::GetManagers_11928ce0 @ 11928ce0 --- */
// [RE-AUTO c3]
// id: CPetFireInfo::GetManagers
// calls: CPetFireInfo::GetManagers
// strings:
//   ""CPetFireInfo""
//   ""CPetFireInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetFireInfo::GetManagers
   calls: CPetFireInfo::GetManagers
   strings:
     ""CPetFireInfo""
     ""CPetFireInfo::GetManagers"" */

void CPetFireInfo__GetManagers_11928ce0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetFireInfo__GetManagers(0,"CPetFireInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d2df40;
      if ((DAT_122df1dc & 1) == 0) {
        DAT_122df1dc = DAT_122df1dc | 1;
        FUN_102500e0("CPetFireInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca2f20);
      }
      puVar4 = (undefined *)*DAT_122df1c0;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetFireInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_122df224 & 1) == 0) {
          DAT_122df1f0 = 0;
          DAT_122df200 = 0;
          DAT_122df204 = 0;
          _DAT_122df208 = 0;
          uRam122df20c = 0;
          DAT_122df224 = DAT_122df224 | 1;
          _DAT_122df1ec = &PTR_FUN_11d2df74;
          _DAT_122df210 = _DAT_11de9ae0;
          uRam122df214 = _UNK_11de9ae4;
          uRam122df218 = _UNK_11de9ae8;
          uRam122df21c = _UNK_11de9aec;
          DAT_122df220 = 1;
          DAT_122df1f4 = puVar4;
          _DAT_122df1f8 = puVar4;
          _DAT_122df1fc = puVar4;
          FUN_11a8911f(&LAB_11cb1e60);
        }
        puVar4 = &DAT_122df1ec;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CItemBaseInfo__GetManagers_11a185c0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



