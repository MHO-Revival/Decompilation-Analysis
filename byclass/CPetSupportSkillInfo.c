// ===== class CPetSupportSkillInfo  (4 recovered methods) =====

/* --- CPetSupportSkillInfo::GetManagers @ 1174f9d0 --- */
// [RE-AUTO c3]
// id: CPetSupportSkillInfo::GetManagers
// strings:
//   ""CPetSupportSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSupportSkillInfo::GetManagers
   strings:
     ""CPetSupportSkillInfo::GetManagers"" */

undefined * CPetSupportSkillInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d46410;
  if (param_3 == 0) {
    if ((DAT_12391704 & 1) == 0) {
      DAT_12391704 = DAT_12391704 | 1;
      FUN_102500e0("CPetSupportSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d90);
    }
    if ((undefined *)*DAT_123916e8 != (undefined *)0x0) {
      return (undefined *)*DAT_123916e8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12391a5c & 1) == 0) {
      DAT_12391a5c = DAT_12391a5c | 1;
      FUN_11750730();
      FUN_11a8911f(&LAB_11ca9c40);
    }
    puVar1 = &DAT_12391a24;
  }
  return puVar1;
}



/* --- CPetSupportSkillInfo::GetManagers_11752a10 @ 11752a10 --- */
// [RE-AUTO c3]
// id: CPetSupportSkillInfo::GetManagers
// calls: CPetSupportSkillInfo::GetManagers
// strings:
//   ""CPetSupportSkillInfo""
//   ""CPetSupportSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSupportSkillInfo::GetManagers
   calls: CPetSupportSkillInfo::GetManagers
   strings:
     ""CPetSupportSkillInfo""
     ""CPetSupportSkillInfo::GetManagers"" */

void __fastcall CPetSupportSkillInfo__GetManagers_11752a10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_18 = 0;
  local_14 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  piVar1 = (int *)CPetSupportSkillInfo__GetManagers(0,"CPetSupportSkillInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11d46410;
      if ((DAT_12391704 & 1) == 0) {
        DAT_12391704 = DAT_12391704 | 1;
        FUN_102500e0("CPetSupportSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9d90);
      }
      puVar3 = (undefined *)*DAT_123916e8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetSupportSkillInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_12391a5c & 1) == 0) {
          DAT_12391a28 = 0;
          DAT_12391a38 = 0;
          DAT_12391a3c = 0;
          _DAT_12391a40 = 0;
          uRam12391a44 = 0;
          DAT_12391a5c = DAT_12391a5c | 1;
          _DAT_12391a24 = &PTR_FUN_11d46454;
          _DAT_12391a48 = _DAT_11de9ae0;
          uRam12391a4c = _UNK_11de9ae4;
          uRam12391a50 = _UNK_11de9ae8;
          uRam12391a54 = _UNK_11de9aec;
          DAT_12391a58 = 1;
          DAT_12391a2c = puVar3;
          _DAT_12391a30 = puVar3;
          _DAT_12391a34 = puVar3;
          FUN_11a8911f(&LAB_11ca9c40);
        }
        puVar3 = &DAT_12391a24;
      }
      if ((iVar5 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4);
      }
      local_c = *(undefined ***)(iVar4 + 0x14);
      if (local_14 == local_10) {
        FUN_10463c40(local_14,&local_c,&local_5,1,1);
      }
      else {
        *local_14 = local_c;
        local_14 = local_14 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  iVar2 = FUN_10a1cee0(&local_18);
  if (iVar2 != -1) {
    local_c = &PTR_FUN_11d46410;
    if ((DAT_12391704 & 1) == 0) {
      DAT_12391704 = DAT_12391704 | 1;
      FUN_102500e0("CPetSupportSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d90);
    }
    puVar3 = (undefined *)*DAT_123916e8;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetSupportSkillInfo",0),
       puVar3 == (undefined *)0x0)) {
      if ((DAT_12391a5c & 1) == 0) {
        DAT_12391a5c = DAT_12391a5c | 1;
        FUN_11750730();
        FUN_11a8911f(&LAB_11ca9c40);
      }
      puVar3 = &DAT_12391a24;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((-1 < iVar2) && (iVar2 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
       (iVar2 = *(int *)(*(int *)(puVar3 + 0x14) + iVar2 * 4), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  return;
}



/* --- CPetSupportSkillInfo::GetManagers_11753750 @ 11753750 --- */
// [RE-AUTO c3]
// id: CPetSupportSkillInfo::GetManagers
// strings:
//   ""CPetSupportSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSupportSkillInfo::GetManagers
   strings:
     ""CPetSupportSkillInfo::GetManagers"" */

undefined4 CPetSupportSkillInfo__GetManagers_11753750(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12391704 & 1) == 0) {
      DAT_12391704 = DAT_12391704 | 1;
      FUN_102500e0("CPetSupportSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d90);
    }
    return *DAT_123916e8;
  }
  return 0;
}



/* --- CPetSupportSkillInfo::GetManagers_1192c960 @ 1192c960 --- */
// [RE-AUTO c3]
// id: CPetSupportSkillInfo::GetManagers
// calls: CPetSupportSkillInfo::GetManagers
// strings:
//   ""CPetSupportSkillInfo""
//   ""CPetSupportSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSupportSkillInfo::GetManagers
   calls: CPetSupportSkillInfo::GetManagers
   strings:
     ""CPetSupportSkillInfo""
     ""CPetSupportSkillInfo::GetManagers"" */

void CPetSupportSkillInfo__GetManagers_1192c960(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetSupportSkillInfo__GetManagers(0,"CPetSupportSkillInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d46410;
      if ((DAT_12391704 & 1) == 0) {
        DAT_12391704 = DAT_12391704 | 1;
        FUN_102500e0("CPetSupportSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9d90);
      }
      puVar4 = (undefined *)*DAT_123916e8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetSupportSkillInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12391a5c & 1) == 0) {
          DAT_12391a28 = 0;
          DAT_12391a38 = 0;
          DAT_12391a3c = 0;
          _DAT_12391a40 = 0;
          uRam12391a44 = 0;
          DAT_12391a5c = DAT_12391a5c | 1;
          _DAT_12391a24 = &PTR_FUN_11d46454;
          _DAT_12391a48 = _DAT_11de9ae0;
          uRam12391a4c = _UNK_11de9ae4;
          uRam12391a50 = _UNK_11de9ae8;
          uRam12391a54 = _UNK_11de9aec;
          DAT_12391a58 = 1;
          DAT_12391a2c = puVar4;
          _DAT_12391a30 = puVar4;
          _DAT_12391a34 = puVar4;
          FUN_11a8911f(&LAB_11cb2100);
        }
        puVar4 = &DAT_12391a24;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CPetSupportBuff__GetManagers_11a1ba20(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



