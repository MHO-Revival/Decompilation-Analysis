// ===== class CPvpDamageParmInfo  (2 recovered methods) =====

/* --- CPvpDamageParmInfo::GetManagers @ 115d73d0 --- */
// [RE-AUTO c3]
// id: CPvpDamageParmInfo::GetManagers
// strings:
//   ""CPvpDamageParmInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPvpDamageParmInfo::GetManagers
   strings:
     ""CPvpDamageParmInfo::GetManagers"" */

undefined * CPvpDamageParmInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d3123c;
  if (param_3 == 0) {
    if ((DAT_122df93c & 1) == 0) {
      DAT_122df93c = DAT_122df93c | 1;
      FUN_102500e0("CPvpDamageParmInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca47f0);
    }
    if ((undefined *)*DAT_122df920 != (undefined *)0x0) {
      return (undefined *)*DAT_122df920;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df980 & 1) == 0) {
      DAT_122df980 = DAT_122df980 | 1;
      FUN_115d7640();
      FUN_11a8911f(&LAB_11ca4790);
    }
    puVar1 = &DAT_122df948;
  }
  return puVar1;
}



/* --- CPvpDamageParmInfo::GetManagers_115d8700 @ 115d8700 --- */
// [RE-AUTO c3]
// id: CPvpDamageParmInfo::GetManagers
// strings:
//   ""CPvpDamageParmInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPvpDamageParmInfo::GetManagers
   strings:
     ""CPvpDamageParmInfo::GetManagers"" */

undefined4 CPvpDamageParmInfo__GetManagers_115d8700(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df93c & 1) == 0) {
      DAT_122df93c = DAT_122df93c | 1;
      FUN_102500e0("CPvpDamageParmInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca47f0);
    }
    return *DAT_122df920;
  }
  return 0;
}



