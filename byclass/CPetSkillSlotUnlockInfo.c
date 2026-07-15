// ===== class CPetSkillSlotUnlockInfo  (3 recovered methods) =====

/* --- CPetSkillSlotUnlockInfo::GetManagers @ 1174b760 --- */
// [RE-AUTO c3]
// id: CPetSkillSlotUnlockInfo::GetManagers
// strings:
//   ""CPetSkillSlotUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkillSlotUnlockInfo::GetManagers
   strings:
     ""CPetSkillSlotUnlockInfo::GetManagers"" */

undefined * CPetSkillSlotUnlockInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d45e60;
  if (param_3 == 0) {
    if ((DAT_123912ac & 1) == 0) {
      DAT_123912ac = DAT_123912ac | 1;
      FUN_102500e0("CPetSkillSlotUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9970);
    }
    if ((undefined *)*DAT_12391290 != (undefined *)0x0) {
      return (undefined *)*DAT_12391290;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12391644 & 1) == 0) {
      DAT_12391644 = DAT_12391644 | 1;
      FUN_1174ba00();
      FUN_11a8911f(&LAB_11ca98b0);
    }
    puVar1 = &DAT_1239160c;
  }
  return puVar1;
}



/* --- CPetSkillSlotUnlockInfo::GetManagers_1174c670 @ 1174c670 --- */
// [RE-AUTO c3]
// id: CPetSkillSlotUnlockInfo::GetManagers
// strings:
//   ""CPetSkillSlotUnlockInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkillSlotUnlockInfo::GetManagers
   strings:
     ""CPetSkillSlotUnlockInfo::GetManagers"" */

undefined4 CPetSkillSlotUnlockInfo__GetManagers_1174c670(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123912ac & 1) == 0) {
      DAT_123912ac = DAT_123912ac | 1;
      FUN_102500e0("CPetSkillSlotUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9970);
    }
    return *DAT_12391290;
  }
  return 0;
}



/* --- CPetSkillSlotUnlockInfo::GetManagers_1174ca80 @ 1174ca80 --- */
// [RE-AUTO c3]
// id: CPetSkillSlotUnlockInfo::GetManagers
// strings:
//   ""CPetSkillSlotUnlockInfo::GetManagers""
//   ""CPetSkillSlotUnlockInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillSlotUnlockInfo::GetManagers
   strings:
     ""CPetSkillSlotUnlockInfo::GetManagers""
     ""CPetSkillSlotUnlockInfo"" */

void __fastcall CPetSkillSlotUnlockInfo__GetManagers_1174ca80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int local_14;
  undefined **local_10;
  int *local_c;
  undefined1 local_5;
  
  local_14 = 3;
  piVar6 = (int *)(param_1 + 0xe8);
  local_18 = param_1;
  do {
    iVar7 = *piVar6;
    local_10 = &PTR_FUN_11d45e60;
    local_c = piVar6;
    if ((DAT_123912ac & 1) == 0) {
      DAT_123912ac = DAT_123912ac | 1;
      FUN_102500e0("CPetSkillSlotUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9970);
    }
    puVar5 = (undefined *)*DAT_12391290;
    if ((puVar5 == (undefined *)0x0) &&
       (puVar5 = (undefined *)FUN_11679e10(&local_10,"CPetSkillSlotUnlockInfo",0),
       puVar5 == (undefined *)0x0)) {
      if ((DAT_12391644 & 1) == 0) {
        DAT_12391610 = 0;
        DAT_12391620 = 0;
        uRam12391624 = 0;
        _DAT_12391628 = 0;
        DAT_1239162c = 0;
        DAT_12391644 = DAT_12391644 | 1;
        _DAT_1239160c = &PTR_FUN_11d45ea8;
        DAT_12391630 = _DAT_11de9ae0;
        DAT_12391634 = _UNK_11de9ae4;
        uRam12391638 = _UNK_11de9ae8;
        DAT_1239163c = _UNK_11de9aec;
        DAT_12391640 = 1;
        DAT_12391614 = puVar5;
        _DAT_12391618 = puVar5;
        _DAT_1239161c = puVar5;
        FUN_11a8911f(&LAB_11ca98b0);
      }
      puVar5 = &DAT_1239160c;
    }
    if (((iVar7 == -1) ||
        (((iVar7 == 0 && (*(int *)(puVar5 + 0x30) != 0)) ||
         (iVar8 = *(int *)(puVar5 + 0x28), piVar6 = local_c, iVar8 == 0)))) ||
       ((iVar7 = iVar7 - *(int *)(puVar5 + 0x30), iVar7 < 0 || (*(int *)(puVar5 + 0x24) <= iVar7))))
    {
LAB_1174cbb0:
      local_10 = (undefined **)0x0;
    }
    else {
      iVar1 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar7 / iVar8) * 4);
      if (iVar1 == 0) goto LAB_1174cbb0;
      local_10 = *(undefined ***)(iVar1 + (iVar7 % iVar8) * 4);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x100);
    if (puVar2 == *(undefined4 **)(param_1 + 0x104)) {
      FUN_1174f140(puVar2,&local_10,&local_5,1,1);
    }
    else {
      *puVar2 = local_10;
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 4;
    }
    iVar7 = local_18;
    piVar6 = piVar6 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_14 = 2;
  piVar6 = (int *)(local_18 + 0xf4);
  do {
    iVar8 = *piVar6;
    local_10 = &PTR_FUN_11d45e60;
    local_c = piVar6;
    if ((DAT_123912ac & 1) == 0) {
      DAT_123912ac = DAT_123912ac | 1;
      FUN_102500e0("CPetSkillSlotUnlockInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9970);
    }
    puVar5 = (undefined *)*DAT_12391290;
    if ((puVar5 == (undefined *)0x0) &&
       (puVar5 = (undefined *)FUN_11679e10(&local_10,"CPetSkillSlotUnlockInfo",0),
       puVar5 == (undefined *)0x0)) {
      if ((DAT_12391644 & 1) == 0) {
        DAT_12391610 = 0;
        DAT_12391620 = 0;
        uRam12391624 = 0;
        _DAT_12391628 = 0;
        DAT_1239162c = 0;
        DAT_12391644 = DAT_12391644 | 1;
        _DAT_1239160c = &PTR_FUN_11d45ea8;
        DAT_12391630 = _DAT_11de9ae0;
        DAT_12391634 = _UNK_11de9ae4;
        uRam12391638 = _UNK_11de9ae8;
        DAT_1239163c = _UNK_11de9aec;
        DAT_12391640 = 1;
        DAT_12391614 = puVar5;
        _DAT_12391618 = puVar5;
        _DAT_1239161c = puVar5;
        FUN_11a8911f(&LAB_11ca98b0);
      }
      puVar5 = &DAT_1239160c;
    }
    local_10 = &PTR_FUN_11da54a8;
    if ((iVar8 == -1) ||
       ((((iVar8 == 0 && (*(int *)(puVar5 + 0x30) != 0)) ||
         (iVar1 = *(int *)(puVar5 + 0x28), piVar6 = local_c, iVar1 == 0)) ||
        ((iVar8 = iVar8 - *(int *)(puVar5 + 0x30), iVar8 < 0 || (*(int *)(puVar5 + 0x24) <= iVar8)))
        ))) {
LAB_1174cd05:
      local_18 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar8 / iVar1) * 4);
      if (iVar3 == 0) goto LAB_1174cd05;
      local_18 = *(int *)(iVar3 + (iVar8 % iVar1) * 4);
    }
    piVar4 = *(int **)(iVar7 + 0x10c);
    if (piVar4 == *(int **)(iVar7 + 0x110)) {
      FUN_1174f140(piVar4,&local_18,&local_5,1,1);
    }
    else {
      *piVar4 = local_18;
      *(int *)(iVar7 + 0x10c) = *(int *)(iVar7 + 0x10c) + 4;
    }
    piVar6 = piVar6 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      return;
    }
  } while( true );
}



