// ===== class CDailyScheduleGoldInfo  (2 recovered methods) =====

/* --- CDailyScheduleGoldInfo::GetManagers @ 11863480 --- */
// [RE-AUTO c3]
// id: CDailyScheduleGoldInfo::GetManagers
// strings:
//   ""CDailyScheduleGoldInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDailyScheduleGoldInfo::GetManagers
   strings:
     ""CDailyScheduleGoldInfo::GetManagers"" */

undefined * CDailyScheduleGoldInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d51608;
  if (param_3 == 0) {
    if ((DAT_12399174 & 1) == 0) {
      DAT_12399174 = DAT_12399174 | 1;
      FUN_102500e0("CDailyScheduleGoldInfo::GetManagers");
      FUN_11a8911f(&LAB_11cadcb0);
    }
    if ((undefined *)*DAT_12399158 != (undefined *)0x0) {
      return (undefined *)*DAT_12399158;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1239920c & 1) == 0) {
      DAT_1239920c = DAT_1239920c | 1;
      FUN_118636f0();
      FUN_11a8911f(&LAB_11cadc50);
    }
    puVar1 = &DAT_123991d4;
  }
  return puVar1;
}



/* --- CDailyScheduleGoldInfo::GetManagers_11863cd0 @ 11863cd0 --- */
// [RE-AUTO c3]
// id: CDailyScheduleGoldInfo::GetManagers
// strings:
//   ""CDailyScheduleGoldInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDailyScheduleGoldInfo::GetManagers
   strings:
     ""CDailyScheduleGoldInfo::GetManagers"" */

undefined4 CDailyScheduleGoldInfo__GetManagers_11863cd0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12399174 & 1) == 0) {
      DAT_12399174 = DAT_12399174 | 1;
      FUN_102500e0("CDailyScheduleGoldInfo::GetManagers");
      FUN_11a8911f(&LAB_11cadcb0);
    }
    return *DAT_12399158;
  }
  return 0;
}



