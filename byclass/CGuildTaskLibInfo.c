// ===== class CGuildTaskLibInfo  (4 recovered methods) =====

/* --- CGuildTaskLibInfo::GetManagers @ 111ef6f0 --- */
// [RE-AUTO c3]
// id: CGuildTaskLibInfo::GetManagers
// strings:
//   ""CGuildTaskLibInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTaskLibInfo::GetManagers
   strings:
     ""CGuildTaskLibInfo::GetManagers"" */

undefined4 * CGuildTaskLibInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d17bd0;
  if (param_3 == 0) {
    if ((DAT_1203f440 & 1) == 0) {
      DAT_1203f440 = DAT_1203f440 | 1;
      FUN_102500e0("CGuildTaskLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97870);
    }
    if ((undefined4 *)*DAT_1203f424 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1203f424;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1203f4fc & 1) == 0) {
      DAT_1203f4fc = DAT_1203f4fc | 1;
      FUN_111f0020();
      FUN_11a8911f(&LAB_11c97780);
    }
    puVar1 = &DAT_1203f4c4;
  }
  return puVar1;
}



/* --- CGuildTaskLibInfo::GetManagers_111f3150 @ 111f3150 --- */
// [RE-AUTO c3]
// id: CGuildTaskLibInfo::GetManagers
// strings:
//   ""CGuildTaskLibInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTaskLibInfo::GetManagers
   strings:
     ""CGuildTaskLibInfo::GetManagers"" */

undefined4 CGuildTaskLibInfo__GetManagers_111f3150(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f440 & 1) == 0) {
      DAT_1203f440 = DAT_1203f440 | 1;
      FUN_102500e0("CGuildTaskLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97870);
    }
    return *DAT_1203f424;
  }
  return 0;
}



/* --- CGuildTaskLibInfo::GetManagers_117d6ce0 @ 117d6ce0 --- */
// [RE-AUTO c3]
// id: CGuildTaskLibInfo::GetManagers
// strings:
//   ""CGuildTaskLibInfo::GetManagers""
//   ""CGuildTaskLibInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTaskLibInfo::GetManagers
   strings:
     ""CGuildTaskLibInfo::GetManagers""
     ""CGuildTaskLibInfo"" */

void CGuildTaskLibInfo__GetManagers_117d6ce0(void)

{
  int *piVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d17bd0;
  if ((DAT_1203f440 & 1) == 0) {
    DAT_1203f440 = DAT_1203f440 | 1;
    FUN_102500e0("CGuildTaskLibInfo::GetManagers");
    FUN_11a8911f(&LAB_11c97870);
  }
  piVar1 = (int *)*DAT_1203f424;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_11679e10(&local_8,"CGuildTaskLibInfo",0);
    if (piVar1 == (int *)0x0) {
      if ((DAT_1203f4fc & 1) == 0) {
        DAT_1203f4c8 = 0;
        DAT_1203f4d8 = 0;
        DAT_1203f4dc = 0;
        _DAT_1203f4e0 = 0;
        uRam1203f4e4 = 0;
        DAT_1203f4fc = DAT_1203f4fc | 1;
        DAT_1203f4c4 = &PTR_FUN_11d17c0c;
        _DAT_1203f4e8 = _DAT_11de9ae0;
        uRam1203f4ec = _UNK_11de9ae4;
        uRam1203f4f0 = _UNK_11de9ae8;
        uRam1203f4f4 = _UNK_11de9aec;
        DAT_1203f4f8 = 1;
        DAT_1203f4cc = piVar1;
        _DAT_1203f4d0 = piVar1;
        _DAT_1203f4d4 = piVar1;
        FUN_11a8911f(&LAB_11caaee0);
      }
      piVar1 = (int *)&DAT_1203f4c4;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar1 + 0x28))();
  CGuildTaskGroupInfo__GetManagers_117d6dc0();
  return;
}



/* --- CGuildTaskLibInfo::GetManagers_1190c3f0 @ 1190c3f0 --- */
// [RE-AUTO c3]
// id: CGuildTaskLibInfo::GetManagers
// calls: CGuildTaskLibInfo::GetManagers, CGuildTaskLibInfo::GetManagers_117d6ce0
// strings:
//   ""CGuildTaskLibInfo""
//   ""CGuildTaskLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTaskLibInfo::GetManagers
   calls: CGuildTaskLibInfo::GetManagers, CGuildTaskLibInfo::GetManagers_117d6ce0
   strings:
     ""CGuildTaskLibInfo""
     ""CGuildTaskLibInfo::GetManagers"" */

void CGuildTaskLibInfo__GetManagers_1190c3f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildTaskLibInfo__GetManagers(0,"CGuildTaskLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d17bd0;
      if ((DAT_1203f440 & 1) == 0) {
        DAT_1203f440 = DAT_1203f440 | 1;
        FUN_102500e0("CGuildTaskLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97870);
      }
      if (((*DAT_1203f424 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildTaskLibInfo",0), iVar3 == 0)) &&
         ((DAT_1203f4fc & 1) == 0)) {
        DAT_1203f4c8 = 0;
        DAT_1203f4d8 = 0;
        DAT_1203f4dc = 0;
        _DAT_1203f4e0 = 0;
        uRam1203f4e4 = 0;
        DAT_1203f4fc = DAT_1203f4fc | 1;
        DAT_1203f4c4 = &PTR_FUN_11d17c0c;
        _DAT_1203f4e8 = _DAT_11de9ae0;
        uRam1203f4ec = _UNK_11de9ae4;
        uRam1203f4f0 = _UNK_11de9ae8;
        uRam1203f4f4 = _UNK_11de9aec;
        DAT_1203f4f8 = 1;
        DAT_1203f4cc = iVar3;
        _DAT_1203f4d0 = iVar3;
        _DAT_1203f4d4 = iVar3;
        FUN_11a8911f(&LAB_11cb13b0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CGuildTaskLibInfo__GetManagers_117d6ce0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



