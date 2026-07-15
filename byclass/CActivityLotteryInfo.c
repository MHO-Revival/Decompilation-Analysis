// ===== class CActivityLotteryInfo  (3 recovered methods) =====

/* --- CActivityLotteryInfo::GetManagers @ 111fd4e0 --- */
// [RE-AUTO c3]
// id: CActivityLotteryInfo::GetManagers
// strings:
//   ""CActivityLotteryInfo::GetManagers""

/* [RE-AUTO c3]
   id: CActivityLotteryInfo::GetManagers
   strings:
     ""CActivityLotteryInfo::GetManagers"" */

undefined4 * CActivityLotteryInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d18424;
  if (param_3 == 0) {
    if ((DAT_1203f62c & 1) == 0) {
      DAT_1203f62c = DAT_1203f62c | 1;
      FUN_102500e0("CActivityLotteryInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97ab0);
    }
    if ((undefined4 *)*DAT_1203f610 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1203f610;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1203f6b8 & 1) == 0) {
      DAT_1203f6b8 = DAT_1203f6b8 | 1;
      FUN_111fdf80();
      FUN_11a8911f(&LAB_11c97a20);
    }
    puVar1 = &DAT_1203f680;
  }
  return puVar1;
}



/* --- CActivityLotteryInfo::GetManagers_111ff4d0 @ 111ff4d0 --- */
// [RE-AUTO c3]
// id: CActivityLotteryInfo::GetManagers
// strings:
//   ""CActivityLotteryInfo::GetManagers""

/* [RE-AUTO c3]
   id: CActivityLotteryInfo::GetManagers
   strings:
     ""CActivityLotteryInfo::GetManagers"" */

undefined4 CActivityLotteryInfo__GetManagers_111ff4d0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f62c & 1) == 0) {
      DAT_1203f62c = DAT_1203f62c | 1;
      FUN_102500e0("CActivityLotteryInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97ab0);
    }
    return *DAT_1203f610;
  }
  return 0;
}



/* --- CActivityLotteryInfo::GetManagers_11949ee0 @ 11949ee0 --- */
// [RE-AUTO c3]
// id: CActivityLotteryInfo::GetManagers
// strings:
//   ""CActivityLotteryInfo::GetManagers""
//   ""CActivityLotteryInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityLotteryInfo::GetManagers
   strings:
     ""CActivityLotteryInfo::GetManagers""
     ""CActivityLotteryInfo"" */

void CActivityLotteryInfo__GetManagers_11949ee0(void)

{
  int *piVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d18424;
  if ((DAT_1203f62c & 1) == 0) {
    DAT_1203f62c = DAT_1203f62c | 1;
    FUN_102500e0("CActivityLotteryInfo::GetManagers");
    FUN_11a8911f(&LAB_11c97ab0);
  }
  piVar1 = (int *)*DAT_1203f610;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_11679e10(&local_8,"CActivityLotteryInfo",0);
    if (piVar1 == (int *)0x0) {
      if ((DAT_1203f6b8 & 1) == 0) {
        DAT_1203f684 = 0;
        DAT_1203f694 = 0;
        uRam1203f698 = 0;
        _DAT_1203f69c = 0;
        uRam1203f6a0 = 0;
        DAT_1203f6b8 = DAT_1203f6b8 | 1;
        DAT_1203f680 = &PTR_FUN_11d18468;
        _DAT_1203f6a4 = _DAT_11de9ae0;
        uRam1203f6a8 = _UNK_11de9ae4;
        uRam1203f6ac = _UNK_11de9ae8;
        uRam1203f6b0 = _UNK_11de9aec;
        DAT_1203f6b4 = 1;
        DAT_1203f688 = piVar1;
        _DAT_1203f68c = piVar1;
        _DAT_1203f690 = piVar1;
        FUN_11a8911f(&LAB_11cb27c0);
      }
      piVar1 = (int *)&DAT_1203f680;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar1 + 0x28))();
  return;
}



