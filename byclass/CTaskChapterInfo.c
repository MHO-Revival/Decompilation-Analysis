// ===== class CTaskChapterInfo  (4 recovered methods) =====

/* --- CTaskChapterInfo::GetManagers @ 107eb8e0 --- */
// [RE-AUTO c3]
// id: CTaskChapterInfo::GetManagers
// strings:
//   ""CTaskChapterInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskChapterInfo::GetManagers
   strings:
     ""CTaskChapterInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTaskChapterInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bef78 & 1) == 0) {
    DAT_123bef78 = DAT_123bef78 | 1;
    _DAT_123bef70 = &DAT_123bef60;
    DAT_123bef74 = &DAT_123bef60;
    DAT_123bef60 = 0;
    FUN_100d83d0("CTaskChapterInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71210);
  }
  return DAT_123bef5c;
}



/* --- CTaskChapterInfo::GetManagers_117c1af0 @ 117c1af0 --- */
// [RE-AUTO c3]
// id: CTaskChapterInfo::GetManagers
// strings:
//   ""CTaskChapterInfo""
//   ""CTaskChapterInfo::GetManagers""
//   ""CTaskSeriesInfo::GetManagers""
//   ""CTaskSeriesInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskChapterInfo::GetManagers
   strings:
     ""CTaskChapterInfo""
     ""CTaskChapterInfo::GetManagers""
     ""CTaskSeriesInfo::GetManagers""
     ""CTaskSeriesInfo"" */

void __fastcall CTaskChapterInfo__GetManagers_117c1af0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined **local_8;
  
  iVar7 = 0;
  piVar3 = (int *)FUN_10803ee0(0,"CTaskChapterInfo",0);
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  if (0 < iVar4) {
    do {
      local_8 = &PTR_FUN_11dcaee4;
      if ((DAT_123bef78 & 1) == 0) {
        DAT_123bef78 = DAT_123bef78 | 1;
        FUN_102500e0("CTaskChapterInfo::GetManagers");
        FUN_11a8911f(&LAB_11c71210);
      }
      puVar5 = (undefined4 *)*DAT_123bef5c;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&local_8,"CTaskChapterInfo",0),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_123bf11c & 1) == 0) {
          DAT_123bf0e8 = 0;
          DAT_123bf0f8 = 0;
          DAT_123bf0fc = 0;
          _DAT_123bf100 = 0;
          DAT_123bf104 = 0;
          DAT_123bf11c = DAT_123bf11c | 1;
          DAT_123bf0e4 = &PTR_FUN_11dcb0c8;
          DAT_123bf108 = _DAT_11de9ae0;
          DAT_123bf10c = _UNK_11de9ae4;
          uRam123bf110 = _UNK_11de9ae8;
          DAT_123bf114 = _UNK_11de9aec;
          DAT_123bf118 = 1;
          DAT_123bf0ec = puVar5;
          _DAT_123bf0f0 = puVar5;
          _DAT_123bf0f4 = puVar5;
          FUN_11a8911f(&LAB_11caa610);
        }
        puVar5 = &DAT_123bf0e4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar7 < 0) || ((int)(puVar5[6] - puVar5[5]) >> 2 <= iVar7)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(puVar5[5] + iVar7 * 4);
      }
      cVar2 = CTaskSeriesInfo__GetManagers_118a87d0(param_1,param_1 + 0x34);
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x30) = uVar8;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 == 0) {
    local_8 = &PTR_FUN_11d49354;
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0x18);
    if ((DAT_12392be8 & 1) == 0) {
      DAT_12392be8 = DAT_12392be8 | 1;
      FUN_102500e0("CTaskSeriesInfo::GetManagers");
      FUN_11a8911f(&LAB_11caa790);
    }
    puVar6 = (undefined *)*DAT_12392bcc;
    if ((puVar6 == (undefined *)0x0) &&
       (puVar6 = (undefined *)FUN_11679e10(&local_8,"CTaskSeriesInfo",0), puVar6 == (undefined *)0x0
       )) {
      if ((DAT_12392c2c & 1) == 0) {
        DAT_12392bf8 = 0;
        DAT_12392c08 = 0;
        DAT_12392c0c = 0;
        _DAT_12392c10 = 0;
        DAT_12392c14 = 0;
        DAT_12392c2c = DAT_12392c2c | 1;
        _DAT_12392bf4 = &PTR_FUN_11d4938c;
        DAT_12392c18 = _DAT_11de9ae0;
        DAT_12392c1c = _UNK_11de9ae4;
        uRam12392c20 = _UNK_11de9ae8;
        DAT_12392c24 = _UNK_11de9aec;
        DAT_12392c28 = 1;
        DAT_12392bfc = puVar6;
        _DAT_12392c00 = puVar6;
        _DAT_12392c04 = puVar6;
        FUN_11a8911f(&LAB_11caa730);
      }
      puVar6 = &DAT_12392bf4;
    }
    if (((iVar4 != -1) &&
        (((iVar4 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
         (iVar7 = *(int *)(puVar6 + 0x28), iVar7 != 0)))) &&
       ((iVar4 = iVar4 - *(int *)(puVar6 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar6 + 0x24)))))
    {
      iVar1 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar4 / iVar7) * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + (iVar4 % iVar7) * 4);
        return;
      }
    }
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar4;
  return;
}



/* --- CTaskChapterInfo::GetManagers_119058d0 @ 119058d0 --- */
// [RE-AUTO c3]
// id: CTaskChapterInfo::GetManagers
// strings:
//   ""CTaskChapterInfo""
//   ""CTaskChapterInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskChapterInfo::GetManagers
   strings:
     ""CTaskChapterInfo""
     ""CTaskChapterInfo::GetManagers"" */

void CTaskChapterInfo__GetManagers_119058d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10803ee0(0,"CTaskChapterInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dcaee4;
      if ((DAT_123bef78 & 1) == 0) {
        DAT_123bef78 = DAT_123bef78 | 1;
        FUN_102500e0("CTaskChapterInfo::GetManagers");
        FUN_11a8911f(&LAB_11c71210);
      }
      if (((*DAT_123bef5c == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskChapterInfo",0), iVar3 == 0)
          ) && ((DAT_123bf11c & 1) == 0)) {
        DAT_123bf0e8 = 0;
        DAT_123bf0f8 = 0;
        DAT_123bf0fc = 0;
        _DAT_123bf100 = 0;
        DAT_123bf104 = 0;
        DAT_123bf11c = DAT_123bf11c | 1;
        DAT_123bf0e4 = &PTR_FUN_11dcb0c8;
        DAT_123bf108 = _DAT_11de9ae0;
        DAT_123bf10c = _UNK_11de9ae4;
        uRam123bf110 = _UNK_11de9ae8;
        DAT_123bf114 = _UNK_11de9aec;
        DAT_123bf118 = 1;
        DAT_123bf0ec = iVar3;
        _DAT_123bf0f0 = iVar3;
        _DAT_123bf0f4 = iVar3;
        FUN_11a8911f(&LAB_11cb0ed0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_118a8af0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskChapterInfo::GetManagers_11905a20 @ 11905a20 --- */
// [RE-AUTO c3]
// id: CTaskChapterInfo::GetManagers
// calls: CTaskSeriesInfo::GetManagers_118a8980
// strings:
//   ""CTaskChapterInfo""
//   ""CTaskChapterInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskChapterInfo::GetManagers
   calls: CTaskSeriesInfo::GetManagers_118a8980
   strings:
     ""CTaskChapterInfo""
     ""CTaskChapterInfo::GetManagers"" */

void CTaskChapterInfo__GetManagers_11905a20(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10803ee0(0,"CTaskChapterInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dcaee4;
      if ((DAT_123bef78 & 1) == 0) {
        DAT_123bef78 = DAT_123bef78 | 1;
        FUN_102500e0("CTaskChapterInfo::GetManagers");
        FUN_11a8911f(&LAB_11c71210);
      }
      if (((*DAT_123bef5c == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskChapterInfo",0), iVar3 == 0)
          ) && ((DAT_123bf11c & 1) == 0)) {
        DAT_123bf0e8 = 0;
        DAT_123bf0f8 = 0;
        DAT_123bf0fc = 0;
        _DAT_123bf100 = 0;
        DAT_123bf104 = 0;
        DAT_123bf11c = DAT_123bf11c | 1;
        DAT_123bf0e4 = &PTR_FUN_11dcb0c8;
        DAT_123bf108 = _DAT_11de9ae0;
        DAT_123bf10c = _UNK_11de9ae4;
        uRam123bf110 = _UNK_11de9ae8;
        DAT_123bf114 = _UNK_11de9aec;
        DAT_123bf118 = 1;
        DAT_123bf0ec = iVar3;
        _DAT_123bf0f0 = iVar3;
        _DAT_123bf0f4 = iVar3;
        FUN_11a8911f(&LAB_11cb0ed0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CTaskSeriesInfo__GetManagers_118a8980();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



