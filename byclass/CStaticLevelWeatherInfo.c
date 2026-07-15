// ===== class CStaticLevelWeatherInfo  (2 recovered methods) =====

/* --- CStaticLevelWeatherInfo::GetManagers @ 116ab8b0 --- */
// [RE-AUTO c3]
// id: CStaticLevelWeatherInfo::GetManagers
// strings:
//   ""CStaticLevelWeatherInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStaticLevelWeatherInfo::GetManagers
   strings:
     ""CStaticLevelWeatherInfo::GetManagers"" */

undefined * CStaticLevelWeatherInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d3df70;
  if (param_3 == 0) {
    if ((DAT_1238ad54 & 1) == 0) {
      DAT_1238ad54 = DAT_1238ad54 | 1;
      FUN_102500e0("CStaticLevelWeatherInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7830);
    }
    if ((undefined *)*DAT_1238ad38 != (undefined *)0x0) {
      return (undefined *)*DAT_1238ad38;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238b3ac & 1) == 0) {
      DAT_1238b3ac = DAT_1238b3ac | 1;
      FUN_116ac6b0();
      FUN_11a8911f(&LAB_11ca7710);
    }
    puVar1 = &DAT_1238b374;
  }
  return puVar1;
}



/* --- CStaticLevelWeatherInfo::GetManagers_116ae8e0 @ 116ae8e0 --- */
// [RE-AUTO c3]
// id: CStaticLevelWeatherInfo::GetManagers
// strings:
//   ""CStaticLevelWeatherInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStaticLevelWeatherInfo::GetManagers
   strings:
     ""CStaticLevelWeatherInfo::GetManagers"" */

undefined4 CStaticLevelWeatherInfo__GetManagers_116ae8e0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238ad54 & 1) == 0) {
      DAT_1238ad54 = DAT_1238ad54 | 1;
      FUN_102500e0("CStaticLevelWeatherInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7830);
    }
    return *DAT_1238ad38;
  }
  return 0;
}



