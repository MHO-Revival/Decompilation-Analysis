// ===== class CPetAvatarInfo  (3 recovered methods) =====

/* --- CPetAvatarInfo::GetManagers @ 10ae7180 --- */
// [RE-AUTO c3]
// id: CPetAvatarInfo::GetManagers
// strings:
//   ""CPetAvatarInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetAvatarInfo::GetManagers
   strings:
     ""CPetAvatarInfo::GetManagers"" */

undefined * CPetAvatarInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc2960;
  if (param_3 == 0) {
    if ((DAT_12021354 & 1) == 0) {
      DAT_12021354 = DAT_12021354 | 1;
      FUN_102500e0("CPetAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c809e0);
    }
    if ((undefined *)*DAT_12021338 != (undefined *)0x0) {
      return (undefined *)*DAT_12021338;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12021398 & 1) == 0) {
      DAT_12021398 = DAT_12021398 | 1;
      FUN_10ae78c0();
      FUN_11a8911f(&LAB_11c80980);
    }
    puVar1 = &DAT_12021360;
  }
  return puVar1;
}



/* --- CPetAvatarInfo::GetManagers_10ae8e50 @ 10ae8e50 --- */
// [RE-AUTO c3]
// id: CPetAvatarInfo::GetManagers
// strings:
//   ""CPetAvatarInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetAvatarInfo::GetManagers
   strings:
     ""CPetAvatarInfo::GetManagers"" */

undefined4 CPetAvatarInfo__GetManagers_10ae8e50(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12021354 & 1) == 0) {
      DAT_12021354 = DAT_12021354 | 1;
      FUN_102500e0("CPetAvatarInfo::GetManagers");
      FUN_11a8911f(&LAB_11c809e0);
    }
    return *DAT_12021338;
  }
  return 0;
}



/* --- CPetAvatarInfo::GetManagers_11a1b510 @ 11a1b510 --- */
// [RE-AUTO c3]
// id: CPetAvatarInfo::GetManagers
// strings:
//   ""CPetAvatarInfo::GetManagers""
//   ""CPetAvatarInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetAvatarInfo::GetManagers
   strings:
     ""CPetAvatarInfo::GetManagers""
     ""CPetAvatarInfo"" */

undefined * CPetAvatarInfo__GetManagers_11a1b510(void)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc2960;
  if ((DAT_12021354 & 1) == 0) {
    DAT_12021354 = DAT_12021354 | 1;
    FUN_102500e0("CPetAvatarInfo::GetManagers");
    FUN_11a8911f(&LAB_11c809e0);
  }
  puVar1 = (undefined *)*DAT_12021338;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)FUN_11679e10(&local_8,"CPetAvatarInfo",0);
    if (puVar1 == (undefined *)0x0) {
      if ((DAT_12021398 & 1) == 0) {
        DAT_12021364 = 0;
        DAT_12021374 = 0;
        uRam12021378 = 0;
        _DAT_1202137c = 0;
        uRam12021380 = 0;
        DAT_12021398 = DAT_12021398 | 1;
        DAT_12021368 = 0;
        _DAT_1202136c = 0;
        _DAT_12021370 = 0;
        _DAT_12021360 = &PTR_FUN_11cc2994;
        _DAT_12021384 = _DAT_11de9ae0;
        uRam12021388 = _UNK_11de9ae4;
        uRam1202138c = _UNK_11de9ae8;
        uRam12021390 = _UNK_11de9aec;
        DAT_12021394 = 1;
        FUN_11a8911f(&LAB_11cb62b0);
      }
      puVar1 = &DAT_12021360;
    }
  }
  return puVar1;
}



