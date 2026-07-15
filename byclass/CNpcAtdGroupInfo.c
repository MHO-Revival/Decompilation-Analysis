// ===== class CNpcAtdGroupInfo  (3 recovered methods) =====

/* --- CNpcAtdGroupInfo::GetManagers @ 11507670 --- */
// [RE-AUTO c3]
// id: CNpcAtdGroupInfo::GetManagers
// strings:
//   ""CNpcAtdGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNpcAtdGroupInfo::GetManagers
   strings:
     ""CNpcAtdGroupInfo::GetManagers"" */

undefined * CNpcAtdGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2ba94;
  if (param_3 == 0) {
    if ((DAT_122de804 & 1) == 0) {
      DAT_122de804 = DAT_122de804 | 1;
      FUN_102500e0("CNpcAtdGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca00e0);
    }
    if ((undefined *)*DAT_122de7e8 != (undefined *)0x0) {
      return (undefined *)*DAT_122de7e8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de84c & 1) == 0) {
      DAT_122de84c = DAT_122de84c | 1;
      FUN_11507da0();
      FUN_11a8911f(&LAB_11c9ff60);
    }
    puVar1 = &DAT_122de814;
  }
  return puVar1;
}



/* --- CNpcAtdGroupInfo::GetManagers_115095f0 @ 115095f0 --- */
// [RE-AUTO c3]
// id: CNpcAtdGroupInfo::GetManagers
// calls: CNpcAtdGroupInfo::GetManagers
// strings:
//   ""CNpcAtdGroupInfo""
//   ""CNpcAtdGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdGroupInfo::GetManagers
   calls: CNpcAtdGroupInfo::GetManagers
   strings:
     ""CNpcAtdGroupInfo""
     ""CNpcAtdGroupInfo::GetManagers"" */

undefined4 CNpcAtdGroupInfo__GetManagers_115095f0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined **local_8;
  
  piVar3 = (int *)CNpcAtdGroupInfo__GetManagers(0,"CNpcAtdGroupInfo",0);
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      local_8 = &PTR_FUN_11d2ba94;
      if ((DAT_122de804 & 1) == 0) {
        DAT_122de804 = DAT_122de804 | 1;
        FUN_102500e0("CNpcAtdGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca00e0);
      }
      puVar5 = (undefined *)*DAT_122de7e8;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&local_8,"CNpcAtdGroupInfo",0),
         puVar5 == (undefined *)0x0)) {
        if ((DAT_122de84c & 1) == 0) {
          DAT_122de818 = 0;
          DAT_122de828 = 0;
          DAT_122de82c = 0;
          _DAT_122de830 = 0;
          uRam122de834 = 0;
          DAT_122de84c = DAT_122de84c | 1;
          _DAT_122de814 = &PTR_FUN_11d2bad0;
          _DAT_122de838 = _DAT_11de9ae0;
          uRam122de83c = _UNK_11de9ae4;
          uRam122de840 = _UNK_11de9ae8;
          uRam122de844 = _UNK_11de9aec;
          DAT_122de848 = 1;
          DAT_122de81c = puVar5;
          _DAT_122de820 = puVar5;
          _DAT_122de824 = puVar5;
          FUN_11a8911f(&LAB_11c9ff60);
        }
        puVar5 = &DAT_122de814;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar6) && (iVar6 < *(int *)(puVar5 + 0x18) - *(int *)(puVar5 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar5 + 0x14) + iVar6 * 4), iVar1 != 0)) &&
         (cVar2 = FUN_117fa320(param_1), cVar2 != '\0')) {
        *param_2 = *(undefined4 *)(iVar1 + 0x10);
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return 0;
}



/* --- CNpcAtdGroupInfo::GetManagers_11509850 @ 11509850 --- */
// [RE-AUTO c3]
// id: CNpcAtdGroupInfo::GetManagers
// strings:
//   ""CNpcAtdGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNpcAtdGroupInfo::GetManagers
   strings:
     ""CNpcAtdGroupInfo::GetManagers"" */

undefined4 CNpcAtdGroupInfo__GetManagers_11509850(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de804 & 1) == 0) {
      DAT_122de804 = DAT_122de804 | 1;
      FUN_102500e0("CNpcAtdGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca00e0);
    }
    return *DAT_122de7e8;
  }
  return 0;
}



