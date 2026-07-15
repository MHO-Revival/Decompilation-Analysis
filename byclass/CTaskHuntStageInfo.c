// ===== class CTaskHuntStageInfo  (5 recovered methods) =====

/* --- CTaskHuntStageInfo::GetManagers @ 1161e4d0 --- */
// [RE-AUTO c3]
// id: CTaskHuntStageInfo::GetManagers
// strings:
//   ""CTaskHuntStageInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskHuntStageInfo::GetManagers
   strings:
     ""CTaskHuntStageInfo::GetManagers"" */

undefined * CTaskHuntStageInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d344e0;
  if (param_3 == 0) {
    if ((DAT_122e00e0 & 1) == 0) {
      DAT_122e00e0 = DAT_122e00e0 | 1;
      FUN_102500e0("CTaskHuntStageInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca5ce0);
    }
    if ((undefined *)*DAT_122e00c4 != (undefined *)0x0) {
      return (undefined *)*DAT_122e00c4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122e017c & 1) == 0) {
      DAT_122e017c = DAT_122e017c | 1;
      FUN_1161f350();
      FUN_11a8911f(&LAB_11ca5c30);
    }
    puVar1 = &DAT_122e0144;
  }
  return puVar1;
}



/* --- CTaskHuntStageInfo::GetManagers_11620720 @ 11620720 --- */
// [RE-AUTO c3]
// id: CTaskHuntStageInfo::GetManagers
// calls: CTaskHuntStageInfo::GetManagers
// strings:
//   ""CTaskHuntStageInfo""
//   ""CTaskHuntStageInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskHuntStageInfo::GetManagers
   calls: CTaskHuntStageInfo::GetManagers
   strings:
     ""CTaskHuntStageInfo""
     ""CTaskHuntStageInfo::GetManagers"" */

undefined4 CTaskHuntStageInfo__GetManagers_11620720(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_c;
  undefined **local_8;
  
  local_c = 0;
  piVar2 = (int *)CTaskHuntStageInfo__GetManagers(0,"CTaskHuntStageInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d344e0;
      if ((DAT_122e00e0 & 1) == 0) {
        DAT_122e00e0 = DAT_122e00e0 | 1;
        FUN_102500e0("CTaskHuntStageInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca5ce0);
      }
      puVar4 = (undefined *)*DAT_122e00c4;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskHuntStageInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_122e017c & 1) == 0) {
          DAT_122e0148 = 0;
          DAT_122e0158 = 0;
          DAT_122e015c = 0;
          _DAT_122e0160 = 0;
          uRam122e0164 = 0;
          DAT_122e017c = DAT_122e017c | 1;
          _DAT_122e0144 = &PTR_FUN_11d3451c;
          _DAT_122e0168 = _DAT_11de9ae0;
          uRam122e016c = _UNK_11de9ae4;
          uRam122e0170 = _UNK_11de9ae8;
          uRam122e0174 = _UNK_11de9aec;
          DAT_122e0178 = 1;
          DAT_122e014c = puVar4;
          _DAT_122e0150 = puVar4;
          _DAT_122e0154 = puVar4;
          FUN_11a8911f(&LAB_11ca5c30);
        }
        puVar4 = &DAT_122e0144;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < local_c) && (local_c < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (piVar2 = *(int **)(*(int *)(puVar4 + 0x14) + local_c * 4), piVar2 != (int *)0x0)) &&
         ((iVar7 = piVar2[9], iVar7 < 1 || (iVar5 = FUN_1134b7d0(), iVar7 <= iVar5)))) {
        puVar8 = (undefined4 *)piVar2[5];
        iVar7 = 0;
        if (puVar8 != (undefined4 *)piVar2[6]) {
          do {
            cVar1 = FUN_114cdd70(*puVar8);
            if (cVar1 != '\0') {
              iVar7 = iVar7 + 1;
            }
            puVar8 = puVar8 + 1;
          } while (puVar8 != (undefined4 *)piVar2[6]);
        }
        if (piVar2[8] <= iVar7) {
          uVar6 = (**(code **)(*piVar2 + 0x18))();
          return uVar6;
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar3);
  }
  return 0;
}



/* --- CTaskHuntStageInfo::GetManagers_11620df0 @ 11620df0 --- */
// [RE-AUTO c3]
// id: CTaskHuntStageInfo::GetManagers
// strings:
//   ""CTaskHuntStageInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskHuntStageInfo::GetManagers
   strings:
     ""CTaskHuntStageInfo::GetManagers"" */

undefined4 CTaskHuntStageInfo__GetManagers_11620df0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122e00e0 & 1) == 0) {
      DAT_122e00e0 = DAT_122e00e0 | 1;
      FUN_102500e0("CTaskHuntStageInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca5ce0);
    }
    return *DAT_122e00c4;
  }
  return 0;
}



/* --- CTaskHuntStageInfo::GetManagers_119071c0 @ 119071c0 --- */
// [RE-AUTO c3]
// id: CTaskHuntStageInfo::GetManagers
// calls: CTaskHuntStageInfo::GetManagers
// strings:
//   ""CTaskHuntStageInfo""
//   ""CTaskHuntStageInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskHuntStageInfo::GetManagers
   calls: CTaskHuntStageInfo::GetManagers
   strings:
     ""CTaskHuntStageInfo""
     ""CTaskHuntStageInfo::GetManagers"" */

void CTaskHuntStageInfo__GetManagers_119071c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskHuntStageInfo__GetManagers(0,"CTaskHuntStageInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d344e0;
      if ((DAT_122e00e0 & 1) == 0) {
        DAT_122e00e0 = DAT_122e00e0 | 1;
        FUN_102500e0("CTaskHuntStageInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca5ce0);
      }
      if (((*DAT_122e00c4 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CTaskHuntStageInfo",0), iVar3 == 0)) &&
         ((DAT_122e017c & 1) == 0)) {
        DAT_122e0148 = 0;
        DAT_122e0158 = 0;
        DAT_122e015c = 0;
        _DAT_122e0160 = 0;
        uRam122e0164 = 0;
        DAT_122e017c = DAT_122e017c | 1;
        _DAT_122e0144 = &PTR_FUN_11d3451c;
        _DAT_122e0168 = _DAT_11de9ae0;
        uRam122e016c = _UNK_11de9ae4;
        uRam122e0170 = _UNK_11de9ae8;
        uRam122e0174 = _UNK_11de9aec;
        DAT_122e0178 = 1;
        DAT_122e014c = iVar3;
        _DAT_122e0150 = iVar3;
        _DAT_122e0154 = iVar3;
        FUN_11a8911f(&LAB_11cb0ff0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a00a40();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskHuntStageInfo::GetManagers_11907310 @ 11907310 --- */
// [RE-AUTO c3]
// id: CTaskHuntStageInfo::GetManagers
// calls: CTaskHuntStageInfo::GetManagers
// strings:
//   ""CTaskHuntStageInfo""
//   ""CTaskHuntStageInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskHuntStageInfo::GetManagers
   calls: CTaskHuntStageInfo::GetManagers
   strings:
     ""CTaskHuntStageInfo""
     ""CTaskHuntStageInfo::GetManagers"" */

void CTaskHuntStageInfo__GetManagers_11907310(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskHuntStageInfo__GetManagers(0,"CTaskHuntStageInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d344e0;
      if ((DAT_122e00e0 & 1) == 0) {
        DAT_122e00e0 = DAT_122e00e0 | 1;
        FUN_102500e0("CTaskHuntStageInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca5ce0);
      }
      if (((*DAT_122e00c4 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CTaskHuntStageInfo",0), iVar3 == 0)) &&
         ((DAT_122e017c & 1) == 0)) {
        DAT_122e0148 = 0;
        DAT_122e0158 = 0;
        DAT_122e015c = 0;
        _DAT_122e0160 = 0;
        uRam122e0164 = 0;
        DAT_122e017c = DAT_122e017c | 1;
        _DAT_122e0144 = &PTR_FUN_11d3451c;
        _DAT_122e0168 = _DAT_11de9ae0;
        uRam122e016c = _UNK_11de9ae4;
        uRam122e0170 = _UNK_11de9ae8;
        uRam122e0174 = _UNK_11de9aec;
        DAT_122e0178 = 1;
        DAT_122e014c = iVar3;
        _DAT_122e0150 = iVar3;
        _DAT_122e0154 = iVar3;
        FUN_11a8911f(&LAB_11cb0ff0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CMHLevelInfo__GetManagers_11a008c0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



