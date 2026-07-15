// ===== class CPetSkillConditionInfo  (4 recovered methods) =====

/* --- CPetSkillConditionInfo::GetManagers @ 1154d480 --- */
// [RE-AUTO c3]
// id: CPetSkillConditionInfo::GetManagers
// strings:
//   ""CPetSkillConditionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo::GetManagers"" */

undefined * CPetSkillConditionInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2d308;
  if (param_3 == 0) {
    if ((DAT_122defe0 & 1) == 0) {
      DAT_122defe0 = DAT_122defe0 | 1;
      FUN_102500e0("CPetSkillConditionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1f00);
    }
    if ((undefined *)*DAT_122defc4 != (undefined *)0x0) {
      return (undefined *)*DAT_122defc4;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df028 & 1) == 0) {
      DAT_122df028 = DAT_122df028 | 1;
      FUN_1154d6f0();
      FUN_11a8911f(&LAB_11ca1ea0);
    }
    puVar1 = &DAT_122deff0;
  }
  return puVar1;
}



/* --- CPetSkillConditionInfo::GetManagers_1154dd70 @ 1154dd70 --- */
// [RE-AUTO c3]
// id: CPetSkillConditionInfo::GetManagers
// strings:
//   ""CPetSkillConditionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo::GetManagers"" */

undefined4 CPetSkillConditionInfo__GetManagers_1154dd70(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122defe0 & 1) == 0) {
      DAT_122defe0 = DAT_122defe0 | 1;
      FUN_102500e0("CPetSkillConditionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1f00);
    }
    return *DAT_122defc4;
  }
  return 0;
}



/* --- CPetSkillConditionInfo::GetManagers_1154e6b0 @ 1154e6b0 --- */
// [RE-AUTO c3]
// id: CPetSkillConditionInfo::GetManagers
// calls: CPetSkillConditionInfo::GetManagers
// strings:
//   ""CPetSkillConditionInfo""
//   ""CPetSkillConditionInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillConditionInfo::GetManagers
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo""
     ""CPetSkillConditionInfo::GetManagers"" */

undefined4 CPetSkillConditionInfo__GetManagers_1154e6b0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  undefined **local_8;
  
  FUN_11679c30();
  piVar2 = (int *)CPetSkillConditionInfo__GetManagers(0,"CPetSkillConditionInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  local_c = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11d2d308;
      if ((DAT_122defe0 & 1) == 0) {
        DAT_122defe0 = DAT_122defe0 | 1;
        FUN_102500e0("CPetSkillConditionInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca1f00);
      }
      puVar4 = (undefined *)*DAT_122defc4;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CPetSkillConditionInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_122df028 & 1) == 0) {
          DAT_122deff4 = 0;
          DAT_122df004 = 0;
          DAT_122df008 = 0;
          _DAT_122df00c = 0;
          DAT_122df010 = 0;
          DAT_122df028 = DAT_122df028 | 1;
          _DAT_122deff0 = &PTR_FUN_11d2d34c;
          DAT_122df014 = _DAT_11de9ae0;
          DAT_122df018 = _UNK_11de9ae4;
          uRam122df01c = _UNK_11de9ae8;
          DAT_122df020 = _UNK_11de9aec;
          DAT_122df024 = 1;
          DAT_122deff8 = puVar4;
          _DAT_122deffc = puVar4;
          _DAT_122df000 = puVar4;
          FUN_11a8911f(&LAB_11ca1ea0);
        }
        puVar4 = &DAT_122deff0;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < local_c) && (local_c < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + local_c * 4), iVar1 != 0)) {
        uVar6 = 0;
        if (*(int *)(iVar1 + 0x11c) - *(int *)(iVar1 + 0x118) >> 2 != 0) {
          do {
            piVar2 = *(int **)(*(int *)(iVar1 + 0x118) + uVar6 * 4);
            if (*piVar2 != 0) {
              iVar5 = FUN_11630610(piVar2);
              piVar2[0x18] = iVar5;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)(*(int *)(iVar1 + 0x11c) - *(int *)(iVar1 + 0x118) >> 2));
        }
        uVar6 = 0;
        if (*(int *)(iVar1 + 0x128) - *(int *)(iVar1 + 0x124) >> 2 != 0) {
          do {
            piVar2 = *(int **)(*(int *)(iVar1 + 0x124) + uVar6 * 4);
            if (*piVar2 != 0) {
              iVar5 = FUN_11630610(piVar2);
              piVar2[0x18] = iVar5;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)(*(int *)(iVar1 + 0x128) - *(int *)(iVar1 + 0x124) >> 2));
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar3);
  }
  return 0;
}



/* --- CPetSkillConditionInfo::GetManagers_1157f5f0 @ 1157f5f0 --- */
// [RE-AUTO c3]
// id: CPetSkillConditionInfo::GetManagers
// calls: CPetSkillInfo::GetManagers_113ef7e0
// strings:
//   ""CPetSkillConditionInfo::GetManagers""
//   ""CPetSkillConditionInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillConditionInfo::GetManagers
   calls: CPetSkillInfo::GetManagers_113ef7e0
   strings:
     ""CPetSkillConditionInfo::GetManagers""
     ""CPetSkillConditionInfo"" */

uint __fastcall CPetSkillConditionInfo__GetManagers_1157f5f0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_1c = 0;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  iVar2 = FUN_113f3640();
  if (*(char *)(iVar2 + 0x98) == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1ed4);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 0)) {
      CPetSkillInfo__GetManagers_113ef7e0(&local_1c);
    }
    else {
      FUN_11587830(6,&local_1c);
    }
  }
  else {
    local_10 = 0x2b3a;
    if (local_18 == local_14) {
      FUN_10463c40(local_18,&local_10,&local_5,1,1);
    }
    else {
      *local_18 = 0x2b3a;
      local_18 = local_18 + 1;
    }
  }
  FUN_10f3e8c0(local_1c,local_18,FUN_11580040);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  local_10 = 0;
  if ((int)local_18 - local_1c >> 2 != 0) {
    do {
      local_c = &PTR_FUN_11d2d308;
      uVar6 = *(uint *)(local_1c + local_10 * 4);
      if ((DAT_122defe0 & 1) == 0) {
        DAT_122defe0 = DAT_122defe0 | 1;
        FUN_102500e0("CPetSkillConditionInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca1f00);
      }
      puVar3 = (undefined *)*DAT_122defc4;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetSkillConditionInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_122df028 & 1) == 0) {
          DAT_122deff4 = 0;
          DAT_122df004 = 0;
          DAT_122df008 = 0;
          _DAT_122df00c = 0;
          DAT_122df010 = 0;
          DAT_122df028 = DAT_122df028 | 1;
          _DAT_122deff0 = &PTR_FUN_11d2d34c;
          DAT_122df014 = _DAT_11de9ae0;
          DAT_122df018 = _UNK_11de9ae4;
          uRam122df01c = _UNK_11de9ae8;
          DAT_122df020 = _UNK_11de9aec;
          DAT_122df024 = 1;
          DAT_122deff8 = puVar3;
          _DAT_122deffc = puVar3;
          _DAT_122df000 = puVar3;
          FUN_11a8911f(&LAB_11ca2bc0);
        }
        puVar3 = &DAT_122deff0;
      }
      local_c = &PTR_FUN_11da54a8;
      if (((uVar6 != 0xffffffff) &&
          (((uVar6 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar2 = *(int *)(puVar3 + 0x28), iVar2 != 0)))) &&
         ((iVar4 = uVar6 - *(int *)(puVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar3 + 0x24)))
         )) {
        iVar5 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar2) * 4);
        if ((iVar5 != 0) &&
           ((((iVar2 = *(int *)(iVar5 + (iVar4 % iVar2) * 4), iVar2 != 0 &&
              (cVar1 = FUN_11580660(iVar2), cVar1 != '\0')) &&
             ((iVar4 = FUN_115803e0(iVar2), 0 < iVar4 &&
              ((((*(int *)(param_1 + 8) == 0 ||
                 (iVar4 = FUN_1154bc80(*(undefined4 *)(iVar2 + 0x10)), iVar4 / 1000 < 1)) &&
                (*(int *)(param_1 + 8) != 0)) &&
               ((cVar1 = FUN_1154bc10(*(int *)(iVar2 + 0x10) * 100), cVar1 != '\0' ||
                (cVar1 = FUN_115807a0(iVar2 + 0x118), cVar1 != '\0')))))))) &&
            (cVar1 = FUN_115807a0(iVar2 + 0x124), cVar1 != '\0')))) {
          iVar2 = *(int *)(param_1 + 0x58);
          param_1 = param_1 + 0x54;
          iVar4 = param_1;
          if (iVar2 != 0) goto LAB_1157f890;
          goto LAB_1157f8ad;
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < (uint)((int)local_18 - local_1c >> 2));
  }
  uVar6 = 0;
LAB_1157f864:
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  return uVar6;
LAB_1157f890:
  do {
    if (*(uint *)(iVar2 + 0x10) < uVar6) {
      iVar5 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar5 = *(int *)(iVar2 + 8);
      iVar4 = iVar2;
    }
    iVar2 = iVar5;
  } while (iVar5 != 0);
  if (iVar4 != param_1) {
    if (uVar6 < *(uint *)(iVar4 + 0x10)) {
      iVar4 = param_1;
    }
LAB_1157f8ad:
    if (iVar4 != param_1) {
      uVar6 = *(uint *)(iVar4 + 0x14);
    }
  }
  goto LAB_1157f864;
}



