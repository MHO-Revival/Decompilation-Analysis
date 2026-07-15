// ===== class CPetMonsterSkillInfo  (2 recovered methods) =====

/* --- CPetMonsterSkillInfo::GetManagers @ 10970bd0 --- */
// [RE-AUTO c3]
// id: CPetMonsterSkillInfo::GetManagers
// strings:
//   ""CPetMonsterSkillInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetMonsterSkillInfo::GetManagers
   strings:
     ""CPetMonsterSkillInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CPetMonsterSkillInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8778 & 1) == 0) {
    DAT_123c8778 = DAT_123c8778 | 1;
    _DAT_123c8790 = &DAT_123c8780;
    DAT_123c8794 = &DAT_123c8780;
    DAT_123c8780 = 0;
    FUN_100d83d0("CPetMonsterSkillInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79bc0);
  }
  return DAT_123c877c;
}



/* --- CPetMonsterSkillInfo::GetManagers_1154e340 @ 1154e340 --- */
// [RE-AUTO c3]
// id: CPetMonsterSkillInfo::GetManagers
// strings:
//   ""CPetMonsterSkillInfo""
//   ""CPetMonsterSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetMonsterSkillInfo::GetManagers
   strings:
     ""CPetMonsterSkillInfo""
     ""CPetMonsterSkillInfo::GetManagers"" */

void __fastcall CPetMonsterSkillInfo__GetManagers_1154e340(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined **local_68;
  undefined **local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54 [9];
  int local_30 [10];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_11679c30();
  piVar2 = (int *)FUN_10971ed0(0,"CPetMonsterSkillInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  local_60 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = local_60;
      local_68 = &PTR_FUN_11dde0d4;
      if ((DAT_123c8778 & 1) == 0) {
        DAT_123c8778 = DAT_123c8778 | 1;
        FUN_102500e0("CPetMonsterSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c79bc0);
      }
      puVar4 = (undefined *)*DAT_123c877c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_68,"CPetMonsterSkillInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c87a0 & 1) == 0) {
          DAT_123c87a8 = 0;
          DAT_123c87b8 = 0;
          DAT_123c87bc = 0;
          _DAT_123c87c0 = 0;
          DAT_123c87c4 = 0;
          DAT_123c87a0 = DAT_123c87a0 | 1;
          _DAT_123c87a4 = &PTR_FUN_11dde0e8;
          DAT_123c87c8 = _DAT_11de9ae0;
          DAT_123c87cc = _UNK_11de9ae4;
          uRam123c87d0 = _UNK_11de9ae8;
          DAT_123c87d4 = _UNK_11de9aec;
          DAT_123c87d8 = 1;
          DAT_123c87ac = puVar4;
          _DAT_123c87b0 = puVar4;
          _DAT_123c87b4 = puVar4;
          FUN_11a8911f(&LAB_11ca1e40);
        }
        puVar4 = &DAT_123c87a4;
      }
      local_68 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (local_5c = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), local_5c != 0)) {
        iVar5 = FUN_1169e9d0(*(undefined4 *)(local_5c + 0x14));
        local_64 = &PTR_FUN_11dde0d4;
        if ((DAT_123c8778 & 1) == 0) {
          DAT_123c8778 = DAT_123c8778 | 1;
          FUN_102500e0("CPetMonsterSkillInfo::GetManagers");
          FUN_11a8911f(&LAB_11c79bc0);
        }
        puVar4 = (undefined *)*DAT_123c877c;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_64,"CPetMonsterSkillInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_123c87a0 & 1) == 0) {
            DAT_123c87a0 = DAT_123c87a0 | 1;
            FUN_10972180();
            FUN_11a8911f(&LAB_11ca1e40);
          }
          puVar4 = &DAT_123c87a4;
        }
        local_64 = &PTR_FUN_11da54a8;
        if ((((iVar5 != -1) && ((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)))) &&
            (iVar7 = *(int *)(puVar4 + 0x28), iVar7 != 0)) &&
           ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
            (iVar5 < *(int *)(puVar4 + 0x24))))) {
          iVar8 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar7) * 4);
          if ((iVar8 != 0) && (*(int *)(iVar8 + (iVar5 % iVar7) * 4) != 0)) {
            FUN_116cdce0(local_5c);
          }
        }
        local_58 = 9;
        FUN_116cd2d0(&local_58,local_54);
        iVar5 = 0;
        if (0 < local_58) {
          do {
            FUN_11630a60(local_54[iVar5]);
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_58);
        }
        local_58 = 10;
        FUN_116cd8b0(&local_58,local_30);
        iVar7 = 0;
        iVar5 = local_58;
        if (0 < local_58) {
          do {
            iVar8 = local_30[iVar7];
            if ((*(int *)(iVar8 + 0x1c) != 0) &&
               ((*(char *)(param_1 + 8) != '\0' || (*(int *)(iVar8 + 0x1c) != 0x8f)))) {
              uVar6 = FUN_11430a30(iVar8 + 0x18);
              *(undefined4 *)(iVar8 + 300) = uVar6;
              iVar5 = local_58;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
        local_58 = 10;
        FUN_116cd900(&local_58,local_30,0);
        iVar7 = 0;
        iVar5 = local_58;
        if (0 < local_58) {
          do {
            iVar8 = local_30[iVar7];
            if ((*(int *)(iVar8 + 0x1c) != 0) &&
               ((*(char *)(param_1 + 8) != '\0' || (*(int *)(iVar8 + 0x1c) != 0x8f)))) {
              uVar6 = FUN_11430a30(iVar8 + 0x18);
              *(undefined4 *)(iVar8 + 300) = uVar6;
              iVar5 = local_58;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
        local_58 = 10;
        FUN_116cd4a0(&local_58,local_30);
        iVar8 = 0;
        iVar7 = local_58;
        iVar5 = local_60;
        if (0 < local_58) {
          do {
            iVar5 = local_30[iVar8];
            if ((*(int *)(iVar5 + 0x1c) != 0) &&
               ((*(char *)(param_1 + 8) != '\0' || (*(int *)(iVar5 + 0x1c) != 0x8f)))) {
              uVar6 = FUN_11430a30(iVar5 + 0x18);
              *(undefined4 *)(iVar5 + 300) = uVar6;
              iVar7 = local_58;
            }
            iVar8 = iVar8 + 1;
            iVar5 = local_60;
          } while (iVar8 < iVar7);
        }
      }
      local_60 = iVar5 + 1;
    } while (local_60 < iVar3);
  }
  FUN_11a89daa(iVar3,uVar1);
  return;
}



