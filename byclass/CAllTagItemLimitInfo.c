// ===== class CAllTagItemLimitInfo  (3 recovered methods) =====

/* --- CAllTagItemLimitInfo::GetManagers @ 11520090 --- */
// [RE-AUTO c3]
// id: CAllTagItemLimitInfo::GetManagers
// strings:
//   ""CAllTagItemLimitInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAllTagItemLimitInfo::GetManagers
   strings:
     ""CAllTagItemLimitInfo::GetManagers"" */

undefined4 * CAllTagItemLimitInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2c19c;
  if (param_3 == 0) {
    if ((DAT_122dea24 & 1) == 0) {
      DAT_122dea24 = DAT_122dea24 | 1;
      FUN_102500e0("CAllTagItemLimitInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0c10);
    }
    if ((undefined4 *)*DAT_122dea08 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_122dea08;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_122deaac & 1) == 0) {
      DAT_122deaac = DAT_122deaac | 1;
      FUN_11520a40();
      FUN_11a8911f(&LAB_11ca0970);
    }
    puVar1 = &DAT_122dea74;
  }
  return puVar1;
}



/* --- CAllTagItemLimitInfo::GetManagers_11521b00 @ 11521b00 --- */
// [RE-AUTO c3]
// id: CAllTagItemLimitInfo::GetManagers
// strings:
//   ""CAllTagItemLimitInfo::GetManagers""
//   ""CAllTagItemLimitInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAllTagItemLimitInfo::GetManagers
   strings:
     ""CAllTagItemLimitInfo::GetManagers""
     ""CAllTagItemLimitInfo"" */

undefined4 CAllTagItemLimitInfo__GetManagers_11521b00(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  iVar4 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11d2c19c;
    if ((DAT_122dea24 & 1) == 0) {
      DAT_122dea24 = DAT_122dea24 | 1;
      FUN_102500e0("CAllTagItemLimitInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0c10);
    }
    piVar2 = (int *)*DAT_122dea08;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&local_8,"CAllTagItemLimitInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_122deaac & 1) == 0) {
          DAT_122dea78 = 0;
          DAT_122dea88 = 0;
          DAT_122dea8c = 0;
          _DAT_122dea90 = 0;
          uRam122dea94 = 0;
          DAT_122deaac = DAT_122deaac | 1;
          DAT_122dea74 = &PTR_FUN_11d2c1e0;
          _DAT_122dea98 = _DAT_11de9ae0;
          uRam122dea9c = _UNK_11de9ae4;
          uRam122deaa0 = _UNK_11de9ae8;
          uRam122deaa4 = _UNK_11de9aec;
          DAT_122deaa8 = 1;
          DAT_122dea7c = piVar2;
          _DAT_122dea80 = piVar2;
          _DAT_122dea84 = piVar2;
          FUN_11a8911f(&LAB_11ca0970);
        }
        piVar2 = (int *)&DAT_122dea74;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    local_8 = &PTR_FUN_11d2c19c;
    if ((DAT_122dea24 & 1) == 0) {
      DAT_122dea24 = DAT_122dea24 | 1;
      FUN_102500e0("CAllTagItemLimitInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0c10);
    }
    piVar2 = (int *)*DAT_122dea08;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&local_8,"CAllTagItemLimitInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_122deaac & 1) == 0) {
          DAT_122dea78 = 0;
          DAT_122dea88 = 0;
          DAT_122dea8c = 0;
          _DAT_122dea90 = 0;
          uRam122dea94 = 0;
          DAT_122deaac = DAT_122deaac | 1;
          DAT_122dea74 = &PTR_FUN_11d2c1e0;
          _DAT_122dea98 = _DAT_11de9ae0;
          uRam122dea9c = _UNK_11de9ae4;
          uRam122deaa0 = _UNK_11de9ae8;
          uRam122deaa4 = _UNK_11de9aec;
          DAT_122deaa8 = 1;
          DAT_122dea7c = piVar2;
          _DAT_122dea80 = piVar2;
          _DAT_122dea84 = piVar2;
          FUN_11a8911f(&LAB_11ca0970);
        }
        piVar2 = (int *)&DAT_122dea74;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
        (iVar3 = *(int *)(piVar2[5] + iVar4 * 4), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0x14) == param_1)) {
      cVar1 = FUN_11801e50(param_2);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    iVar4 = iVar4 + 1;
  }
  return 1;
}



/* --- CAllTagItemLimitInfo::GetManagers_11522ca0 @ 11522ca0 --- */
// [RE-AUTO c3]
// id: CAllTagItemLimitInfo::GetManagers
// strings:
//   ""CAllTagItemLimitInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAllTagItemLimitInfo::GetManagers
   strings:
     ""CAllTagItemLimitInfo::GetManagers"" */

undefined4 CAllTagItemLimitInfo__GetManagers_11522ca0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122dea24 & 1) == 0) {
      DAT_122dea24 = DAT_122dea24 | 1;
      FUN_102500e0("CAllTagItemLimitInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0c10);
    }
    return *DAT_122dea08;
  }
  return 0;
}



