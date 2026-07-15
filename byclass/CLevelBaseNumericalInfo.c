// ===== class CLevelBaseNumericalInfo  (2 recovered methods) =====

/* --- CLevelBaseNumericalInfo::GetManagers @ 115301f0 --- */
// [RE-AUTO c3]
// id: CLevelBaseNumericalInfo::GetManagers
// strings:
//   ""CLevelBaseNumericalInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelBaseNumericalInfo::GetManagers
   strings:
     ""CLevelBaseNumericalInfo::GetManagers"" */

undefined * CLevelBaseNumericalInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c610;
  if (param_3 == 0) {
    if ((DAT_122deae0 & 1) == 0) {
      DAT_122deae0 = DAT_122deae0 | 1;
      FUN_102500e0("CLevelBaseNumericalInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1120);
    }
    if ((undefined *)*DAT_122deac4 != (undefined *)0x0) {
      return (undefined *)*DAT_122deac4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122deb28 & 1) == 0) {
      DAT_122deb28 = DAT_122deb28 | 1;
      FUN_115305d0();
      FUN_11a8911f(&LAB_11ca0fa0);
    }
    puVar1 = &DAT_122deaf0;
  }
  return puVar1;
}



/* --- CLevelBaseNumericalInfo::GetManagers_11531ce0 @ 11531ce0 --- */
// [RE-AUTO c3]
// id: CLevelBaseNumericalInfo::GetManagers
// strings:
//   ""CLevelBaseNumericalInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelBaseNumericalInfo::GetManagers
   strings:
     ""CLevelBaseNumericalInfo::GetManagers"" */

undefined4 CLevelBaseNumericalInfo__GetManagers_11531ce0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122deae0 & 1) == 0) {
      DAT_122deae0 = DAT_122deae0 | 1;
      FUN_102500e0("CLevelBaseNumericalInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1120);
    }
    return *DAT_122deac4;
  }
  return 0;
}



