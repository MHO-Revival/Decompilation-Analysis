// ===== class CMonsterBattleBgmInfo  (2 recovered methods) =====

/* --- CMonsterBattleBgmInfo::GetManagers @ 11310190 --- */
// [RE-AUTO c3]
// id: CMonsterBattleBgmInfo::GetManagers
// strings:
//   ""CMonsterBattleBgmInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonsterBattleBgmInfo::GetManagers
   strings:
     ""CMonsterBattleBgmInfo::GetManagers"" */

undefined * CMonsterBattleBgmInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2245c;
  if (param_3 == 0) {
    if ((DAT_12040d7c & 1) == 0) {
      DAT_12040d7c = DAT_12040d7c | 1;
      FUN_102500e0("CMonsterBattleBgmInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9b220);
    }
    if ((undefined *)*DAT_12040d60 != (undefined *)0x0) {
      return (undefined *)*DAT_12040d60;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040dc0 & 1) == 0) {
      DAT_12040dc0 = DAT_12040dc0 | 1;
      FUN_11310400();
      FUN_11a8911f(&LAB_11c9b1c0);
    }
    puVar1 = &DAT_12040d88;
  }
  return puVar1;
}



/* --- CMonsterBattleBgmInfo::GetManagers_11310cc0 @ 11310cc0 --- */
// [RE-AUTO c3]
// id: CMonsterBattleBgmInfo::GetManagers
// strings:
//   ""CMonsterBattleBgmInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMonsterBattleBgmInfo::GetManagers
   strings:
     ""CMonsterBattleBgmInfo::GetManagers"" */

undefined4 CMonsterBattleBgmInfo__GetManagers_11310cc0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040d7c & 1) == 0) {
      DAT_12040d7c = DAT_12040d7c | 1;
      FUN_102500e0("CMonsterBattleBgmInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9b220);
    }
    return *DAT_12040d60;
  }
  return 0;
}



