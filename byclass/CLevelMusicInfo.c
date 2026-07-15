// ===== class CLevelMusicInfo  (2 recovered methods) =====

/* --- CLevelMusicInfo::GetManagers @ 112ac620 --- */
// [RE-AUTO c3]
// id: CLevelMusicInfo::GetManagers
// strings:
//   ""CLevelMusicInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelMusicInfo::GetManagers
   strings:
     ""CLevelMusicInfo::GetManagers"" */

undefined * CLevelMusicInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1dea0;
  if (param_3 == 0) {
    if ((DAT_12040870 & 1) == 0) {
      DAT_12040870 = DAT_12040870 | 1;
      FUN_102500e0("CLevelMusicInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99990);
    }
    if ((undefined *)*DAT_12040854 != (undefined *)0x0) {
      return (undefined *)*DAT_12040854;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_120408b4 & 1) == 0) {
      DAT_120408b4 = DAT_120408b4 | 1;
      FUN_112ac8a0();
      FUN_11a8911f(&LAB_11c99930);
    }
    puVar1 = &DAT_1204087c;
  }
  return puVar1;
}



/* --- CLevelMusicInfo::GetManagers_112ad480 @ 112ad480 --- */
// [RE-AUTO c3]
// id: CLevelMusicInfo::GetManagers
// strings:
//   ""CLevelMusicInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelMusicInfo::GetManagers
   strings:
     ""CLevelMusicInfo::GetManagers"" */

undefined4 CLevelMusicInfo__GetManagers_112ad480(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040870 & 1) == 0) {
      DAT_12040870 = DAT_12040870 | 1;
      FUN_102500e0("CLevelMusicInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99990);
    }
    return *DAT_12040854;
  }
  return 0;
}



