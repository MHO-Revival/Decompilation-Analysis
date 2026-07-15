// ===== class CGuildMatchInfo  (3 recovered methods) =====

/* --- CGuildMatchInfo::GetManagers @ 10943ab0 --- */
// [RE-AUTO c3]
// id: CGuildMatchInfo::GetManagers
// strings:
//   ""CGuildMatchInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildMatchInfo::GetManagers
   strings:
     ""CGuildMatchInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CGuildMatchInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bff7c & 1) == 0) {
    DAT_123bff7c = DAT_123bff7c | 1;
    _DAT_123bff94 = &DAT_123bff84;
    DAT_123bff98 = &DAT_123bff84;
    DAT_123bff84 = 0;
    FUN_100d83d0("CGuildMatchInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c78440);
  }
  return DAT_123bff80;
}



/* --- CGuildMatchInfo::GetManagers_1171c6b0 @ 1171c6b0 --- */
// [RE-AUTO c3]
// id: CGuildMatchInfo::GetManagers
// strings:
//   ""CGuildMatchInfo::GetManagers""
//   ""CGuildMatchInfo""

/* WARNING: Removing unreachable block (ram,0x1171c87f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildMatchInfo::GetManagers
   strings:
     ""CGuildMatchInfo::GetManagers""
     ""CGuildMatchInfo"" */

int CGuildMatchInfo__GetManagers_1171c6b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined **local_8;
  
  iVar6 = 0;
  iVar5 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11ddbd50;
    if ((DAT_123bff7c & 1) == 0) {
      DAT_123bff7c = DAT_123bff7c | 1;
      FUN_102500e0("CGuildMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c78440);
    }
    piVar2 = (int *)*DAT_123bff80;
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = (int *)FUN_11679e10(&local_8,"CGuildMatchInfo",0), piVar2 == (int *)0x0)) {
      if ((DAT_123bff70 & 1) == 0) {
        DAT_123bffa0 = 0;
        DAT_123bffb0 = 0;
        DAT_123bffb4 = 0;
        _DAT_123bffb8 = 0;
        DAT_123bffbc = 0;
        DAT_123bff70 = DAT_123bff70 | 1;
        DAT_123bff9c = &PTR_FUN_11ddbd78;
        DAT_123bffc0 = _DAT_11de9ae0;
        DAT_123bffc4 = _UNK_11de9ae4;
        uRam123bffc8 = _UNK_11de9ae8;
        DAT_123bffcc = _UNK_11de9aec;
        DAT_123bffd0 = 1;
        DAT_123bffa4 = piVar2;
        _DAT_123bffa8 = piVar2;
        _DAT_123bffac = piVar2;
        FUN_11a8911f(&LAB_11ca8a00);
      }
      piVar2 = (int *)&DAT_123bff9c;
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar6) break;
    local_8 = &PTR_FUN_11ddbd50;
    if ((DAT_123bff7c & 1) == 0) {
      DAT_123bff7c = DAT_123bff7c | 1;
      FUN_102500e0("CGuildMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c78440);
    }
    piVar2 = (int *)*DAT_123bff80;
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = (int *)FUN_11679e10(&local_8,"CGuildMatchInfo",0), piVar2 == (int *)0x0)) {
      if ((DAT_123bff70 & 1) == 0) {
        DAT_123bffa0 = 0;
        DAT_123bffb0 = 0;
        DAT_123bffb4 = 0;
        _DAT_123bffb8 = 0;
        DAT_123bffbc = 0;
        DAT_123bff70 = DAT_123bff70 | 1;
        DAT_123bff9c = &PTR_FUN_11ddbd78;
        DAT_123bffc0 = _DAT_11de9ae0;
        DAT_123bffc4 = _UNK_11de9ae4;
        uRam123bffc8 = _UNK_11de9ae8;
        DAT_123bffcc = _UNK_11de9aec;
        DAT_123bffd0 = 1;
        DAT_123bffa4 = piVar2;
        _DAT_123bffa8 = piVar2;
        _DAT_123bffac = piVar2;
        FUN_11a8911f(&LAB_11ca8a00);
      }
      piVar2 = (int *)&DAT_123bff9c;
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar3 = iVar5;
    if ((((-1 < iVar6) && (iVar6 < piVar2[6] - piVar2[5] >> 2)) &&
        (iVar1 = *(int *)(piVar2[5] + iVar6 * 4), iVar1 != 0)) &&
       (lVar7 = FUN_10a19e00(), iVar3 = iVar1, CONCAT44(param_2,param_1) < lVar7)) break;
    iVar6 = iVar6 + 1;
    iVar5 = iVar3;
  }
  if (iVar5 == 0) {
    local_8 = &PTR_FUN_11ddbd50;
    if ((DAT_123bff7c & 1) == 0) {
      DAT_123bff7c = DAT_123bff7c | 1;
      FUN_102500e0("CGuildMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c78440);
    }
    piVar2 = (int *)*DAT_123bff80;
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = (int *)FUN_11679e10(&local_8,"CGuildMatchInfo",0), piVar2 == (int *)0x0)) {
      if ((DAT_123bff70 & 1) == 0) {
        DAT_123bffa0 = 0;
        DAT_123bffb0 = 0;
        DAT_123bffb4 = 0;
        _DAT_123bffb8 = 0;
        DAT_123bffbc = 0;
        DAT_123bff70 = DAT_123bff70 | 1;
        DAT_123bff9c = &PTR_FUN_11ddbd78;
        DAT_123bffc0 = _DAT_11de9ae0;
        DAT_123bffc4 = _UNK_11de9ae4;
        uRam123bffc8 = _UNK_11de9ae8;
        DAT_123bffcc = _UNK_11de9aec;
        DAT_123bffd0 = 1;
        DAT_123bffa4 = piVar2;
        _DAT_123bffa8 = piVar2;
        _DAT_123bffac = piVar2;
        FUN_11a8911f(&LAB_11ca8a00);
      }
      piVar2 = (int *)&DAT_123bff9c;
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar6 = (**(code **)(*piVar2 + 0x28))();
    if (iVar6 != 0) {
      local_8 = &PTR_FUN_11ddbd50;
      if ((DAT_123bff7c & 1) == 0) {
        DAT_123bff7c = DAT_123bff7c | 1;
        FUN_102500e0("CGuildMatchInfo::GetManagers");
        FUN_11a8911f(&LAB_11c78440);
      }
      puVar4 = (undefined4 *)*DAT_123bff80;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CGuildMatchInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bff70 & 1) == 0) {
          DAT_123bff70 = DAT_123bff70 | 1;
          FUN_109439a0();
          FUN_11a8911f(&LAB_11ca8a00);
        }
        puVar4 = &DAT_123bff9c;
      }
      if ((int)(puVar4[6] - puVar4[5] & 0xfffffffc) < 1) {
        return 0;
      }
      return *(int *)puVar4[5];
    }
  }
  return iVar5;
}



/* --- CGuildMatchInfo::GetManagers_1196ccb0 @ 1196ccb0 --- */
// [RE-AUTO c3]
// id: CGuildMatchInfo::GetManagers
// strings:
//   ""CGuildMatchInfo::GetManagers""
//   ""CGuildMatchInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildMatchInfo::GetManagers
   strings:
     ""CGuildMatchInfo::GetManagers""
     ""CGuildMatchInfo"" */

void CGuildMatchInfo__GetManagers_1196ccb0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11ddbd50;
    if ((DAT_123bff7c & 1) == 0) {
      DAT_123bff7c = DAT_123bff7c | 1;
      FUN_102500e0("CGuildMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c78440);
    }
    piVar1 = (int *)*DAT_123bff80;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CGuildMatchInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_123bff70 & 1) == 0) {
          DAT_123bffa0 = 0;
          DAT_123bffb0 = 0;
          DAT_123bffb4 = 0;
          _DAT_123bffb8 = 0;
          DAT_123bffbc = 0;
          DAT_123bff70 = DAT_123bff70 | 1;
          DAT_123bff9c = &PTR_FUN_11ddbd78;
          DAT_123bffc0 = _DAT_11de9ae0;
          DAT_123bffc4 = _UNK_11de9ae4;
          uRam123bffc8 = _UNK_11de9ae8;
          DAT_123bffcc = _UNK_11de9aec;
          DAT_123bffd0 = 1;
          DAT_123bffa4 = piVar1;
          _DAT_123bffa8 = piVar1;
          _DAT_123bffac = piVar1;
          FUN_11a8911f(&LAB_11cb2dc0);
        }
        piVar1 = (int *)&DAT_123bff9c;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 <= iVar4) break;
    local_8 = &PTR_FUN_11ddbd50;
    if ((DAT_123bff7c & 1) == 0) {
      DAT_123bff7c = DAT_123bff7c | 1;
      FUN_102500e0("CGuildMatchInfo::GetManagers");
      FUN_11a8911f(&LAB_11c78440);
    }
    piVar1 = (int *)*DAT_123bff80;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CGuildMatchInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_123bff70 & 1) == 0) {
          DAT_123bffa0 = 0;
          DAT_123bffb0 = 0;
          DAT_123bffb4 = 0;
          _DAT_123bffb8 = 0;
          DAT_123bffbc = 0;
          DAT_123bff70 = DAT_123bff70 | 1;
          DAT_123bff9c = &PTR_FUN_11ddbd78;
          DAT_123bffc0 = _DAT_11de9ae0;
          DAT_123bffc4 = _UNK_11de9ae4;
          uRam123bffc8 = _UNK_11de9ae8;
          DAT_123bffcc = _UNK_11de9aec;
          DAT_123bffd0 = 1;
          DAT_123bffa4 = piVar1;
          _DAT_123bffa8 = piVar1;
          _DAT_123bffac = piVar1;
          FUN_11a8911f(&LAB_11cb2dc0);
        }
        piVar1 = (int *)&DAT_123bff9c;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((iVar4 < 0) || (piVar1[6] - piVar1[5] >> 2 <= iVar4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[5] + iVar4 * 4);
      if (iVar2 != 0) {
        FUN_1171dd00(param_1);
      }
    }
    if (iVar3 != 0) {
      FUN_10a1a330(iVar3 + 0x48);
      *(int *)(iVar3 + 0x234) = iVar2;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar2;
  }
  return;
}



