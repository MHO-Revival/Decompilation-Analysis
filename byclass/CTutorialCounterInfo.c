// ===== class CTutorialCounterInfo  (2 recovered methods) =====

/* --- CTutorialCounterInfo::GetManagers @ 11a3de10 --- */
// [RE-AUTO c3]
// id: CTutorialCounterInfo::GetManagers
// strings:
//   ""CTutorialCounterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTutorialCounterInfo::GetManagers
   strings:
     ""CTutorialCounterInfo::GetManagers"" */

undefined * CTutorialCounterInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d6ffc4;
  if (param_3 == 0) {
    if ((DAT_123a0990 & 1) == 0) {
      DAT_123a0990 = DAT_123a0990 | 1;
      FUN_102500e0("CTutorialCounterInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2be0);
    }
    if ((undefined *)*DAT_123a0974 != (undefined *)0x0) {
      return (undefined *)*DAT_123a0974;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123aa7ec & 1) == 0) {
      DAT_123aa7ec = DAT_123aa7ec | 1;
      FUN_11a3deb0();
      FUN_11a8911f(&LAB_11cb6990);
    }
    puVar1 = &DAT_123aa7b4;
  }
  return puVar1;
}



/* --- CTutorialCounterInfo::GetManagers_11a3e180 @ 11a3e180 --- */
// [RE-AUTO c3]
// id: CTutorialCounterInfo::GetManagers
// strings:
//   ""CTutorialCounterInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTutorialCounterInfo::GetManagers
   strings:
     ""CTutorialCounterInfo::GetManagers"" */

undefined4 CTutorialCounterInfo__GetManagers_11a3e180(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a0990 & 1) == 0) {
      DAT_123a0990 = DAT_123a0990 | 1;
      FUN_102500e0("CTutorialCounterInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2be0);
    }
    return *DAT_123a0974;
  }
  return 0;
}



