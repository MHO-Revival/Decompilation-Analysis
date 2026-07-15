// ===== class CDamageDampingInfo  (2 recovered methods) =====

/* --- CDamageDampingInfo::GetManagers @ 1142a4f0 --- */
// [RE-AUTO c3]
// id: CDamageDampingInfo::GetManagers
// strings:
//   ""CDamageDampingInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDamageDampingInfo::GetManagers
   strings:
     ""CDamageDampingInfo::GetManagers"" */

undefined * CDamageDampingInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d25fb0;
  if (param_3 == 0) {
    if ((DAT_12190178 & 1) == 0) {
      DAT_12190178 = DAT_12190178 | 1;
      FUN_102500e0("CDamageDampingInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9d360);
    }
    if ((undefined *)*DAT_1219015c != (undefined *)0x0) {
      return (undefined *)*DAT_1219015c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_121901c4 & 1) == 0) {
      DAT_121901c4 = DAT_121901c4 | 1;
      FUN_1142a810();
      FUN_11a8911f(&LAB_11c9d1e0);
    }
    puVar1 = &DAT_1219018c;
  }
  return puVar1;
}



/* --- CDamageDampingInfo::GetManagers_1142bb90 @ 1142bb90 --- */
// [RE-AUTO c3]
// id: CDamageDampingInfo::GetManagers
// strings:
//   ""CDamageDampingInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDamageDampingInfo::GetManagers
   strings:
     ""CDamageDampingInfo::GetManagers"" */

undefined4 CDamageDampingInfo__GetManagers_1142bb90(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12190178 & 1) == 0) {
      DAT_12190178 = DAT_12190178 | 1;
      FUN_102500e0("CDamageDampingInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9d360);
    }
    return *DAT_1219015c;
  }
  return 0;
}



