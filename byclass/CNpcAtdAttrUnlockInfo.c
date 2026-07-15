// ===== class CNpcAtdAttrUnlockInfo  (3 recovered methods) =====

/* --- CNpcAtdAttrUnlockInfo::GetManagers @ 1192f530 --- */
// [RE-AUTO c3]
// id: CNpcAtdAttrUnlockInfo::GetManagers
// strings:
//   ""CNpcAtdAttrUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNpcAtdAttrUnlockInfo::GetManagers
   strings:
     ""CNpcAtdAttrUnlockInfo::GetManagers"" */

undefined * CNpcAtdAttrUnlockInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d602b4;
  if (param_3 == 0) {
    if ((DAT_1239f8b8 & 1) == 0) {
      DAT_1239f8b8 = DAT_1239f8b8 | 1;
      FUN_102500e0("CNpcAtdAttrUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2340);
    }
    if ((undefined *)*DAT_1239f89c != (undefined *)0x0) {
      return (undefined *)*DAT_1239f89c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239fa04 & 1) == 0) {
      DAT_1239fa04 = DAT_1239fa04 | 1;
      FUN_1192fb60();
      FUN_11a8911f(&LAB_11cb2160);
    }
    puVar1 = &DAT_1239f9cc;
  }
  return puVar1;
}



/* --- CNpcAtdAttrUnlockInfo::GetManagers_11931480 @ 11931480 --- */
// [RE-AUTO c3]
// id: CNpcAtdAttrUnlockInfo::GetManagers
// strings:
//   ""CNpcAtdAttrUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNpcAtdAttrUnlockInfo::GetManagers
   strings:
     ""CNpcAtdAttrUnlockInfo::GetManagers"" */

undefined4 CNpcAtdAttrUnlockInfo__GetManagers_11931480(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239f8b8 & 1) == 0) {
      DAT_1239f8b8 = DAT_1239f8b8 | 1;
      FUN_102500e0("CNpcAtdAttrUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2340);
    }
    return *DAT_1239f89c;
  }
  return 0;
}



/* --- CNpcAtdAttrUnlockInfo::GetManagers_11931d40 @ 11931d40 --- */
// [RE-AUTO c3]
// id: CNpcAtdAttrUnlockInfo::GetManagers
// calls: CNpcAtdAttrUnlockInfo::GetManagers
// strings:
//   ""CNpcAtdAttrUnlockInfo""
//   ""CNpcAtdAttrUnlockInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdAttrUnlockInfo::GetManagers
   calls: CNpcAtdAttrUnlockInfo::GetManagers
   strings:
     ""CNpcAtdAttrUnlockInfo""
     ""CNpcAtdAttrUnlockInfo::GetManagers"" */

void CNpcAtdAttrUnlockInfo__GetManagers_11931d40(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CNpcAtdAttrUnlockInfo__GetManagers(0,"CNpcAtdAttrUnlockInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d602b4;
      if ((DAT_1239f8b8 & 1) == 0) {
        DAT_1239f8b8 = DAT_1239f8b8 | 1;
        FUN_102500e0("CNpcAtdAttrUnlockInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb2340);
      }
      puVar3 = (undefined *)*DAT_1239f89c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CNpcAtdAttrUnlockInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_1239fa04 & 1) == 0) {
          DAT_1239f9d0 = 0;
          DAT_1239f9e0 = 0;
          DAT_1239f9e4 = 0;
          _DAT_1239f9e8 = 0;
          uRam1239f9ec = 0;
          DAT_1239fa04 = DAT_1239fa04 | 1;
          _DAT_1239f9cc = &PTR_FUN_11d602f8;
          _DAT_1239f9f0 = _DAT_11de9ae0;
          uRam1239f9f4 = _UNK_11de9ae4;
          uRam1239f9f8 = _UNK_11de9ae8;
          uRam1239f9fc = _UNK_11de9aec;
          DAT_1239fa00 = 1;
          DAT_1239f9d4 = puVar3;
          _DAT_1239f9d8 = puVar3;
          _DAT_1239f9dc = puVar3;
          FUN_11a8911f(&LAB_11cb2160);
        }
        puVar3 = &DAT_1239f9cc;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar3 + 0x14) + iVar4 * 4) != 0)) {
        FUN_11a1efa0();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



