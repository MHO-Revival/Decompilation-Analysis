// ===== class CEquipSuitEffectInfo  (7 recovered methods) =====

/* --- CEquipSuitEffectInfo::GetManagers @ 10856be0 --- */
// [RE-AUTO c3]
// id: CEquipSuitEffectInfo::GetManagers
// strings:
//   ""CEquipSuitEffectInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitEffectInfo::GetManagers
   strings:
     ""CEquipSuitEffectInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipSuitEffectInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf784 & 1) == 0) {
    DAT_123bf784 = DAT_123bf784 | 1;
    _DAT_123bf79c = &DAT_123bf78c;
    DAT_123bf7a0 = &DAT_123bf78c;
    DAT_123bf78c = 0;
    FUN_100d83d0("CEquipSuitEffectInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c73040);
  }
  return DAT_123bf788;
}



/* --- CEquipSuitEffectInfo::GetManagers_11212bc0 @ 11212bc0 --- */
// [RE-AUTO c3]
// id: CEquipSuitEffectInfo::GetManagers
// strings:
//   ""CEquipSuitEffectInfo::GetManagers""
//   ""CEquipSuitEffectInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitEffectInfo::GetManagers
   strings:
     ""CEquipSuitEffectInfo::GetManagers""
     ""CEquipSuitEffectInfo"" */

void CEquipSuitEffectInfo__GetManagers_11212bc0
               (int *param_1,char param_2,int param_3,char param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int local_44;
  undefined1 local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  undefined **local_14;
  int local_10;
  int *local_c;
  undefined1 local_5;
  
  local_44 = 0;
  local_3c = (int *)0x0;
  local_c = (int *)0x0;
  local_34 = (int *)0x0;
  local_54 = 0;
  iStack_50 = 0;
  puStack_4c = &local_54;
  local_10 = *(int *)(param_3 + 8);
  local_40 = param_3._3_1_;
  puStack_48 = puStack_4c;
  if (local_10 != param_3) {
    do {
      iVar7 = local_10;
      iVar9 = *(int *)(local_10 + 0x10);
      local_14 = &PTR_FUN_11dd04b0;
      if ((DAT_123bf784 & 1) == 0) {
        DAT_123bf784 = DAT_123bf784 | 1;
        FUN_102500e0("CEquipSuitEffectInfo::GetManagers");
        FUN_11a8911f(&LAB_11c73040);
      }
      puVar6 = (undefined *)*DAT_123bf788;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)FUN_11679e10(&local_14,"CEquipSuitEffectInfo",0),
         puVar6 == (undefined *)0x0)) {
        if ((DAT_123bf4f0 & 1) == 0) {
          DAT_123bf4f8 = 0;
          DAT_123bf508 = 0;
          DAT_123bf50c = 0;
          _DAT_123bf510 = 0;
          DAT_123bf514 = 0;
          DAT_123bf4f0 = DAT_123bf4f0 | 1;
          _DAT_123bf4f4 = &PTR_FUN_11dd0544;
          DAT_123bf518 = _DAT_11de9ae0;
          DAT_123bf51c = _UNK_11de9ae4;
          uRam123bf520 = _UNK_11de9ae8;
          DAT_123bf524 = _UNK_11de9aec;
          DAT_123bf528 = 1;
          DAT_123bf4fc = puVar6;
          _DAT_123bf500 = puVar6;
          _DAT_123bf504 = puVar6;
          FUN_11a8911f(&LAB_11c97f00);
        }
        puVar6 = &DAT_123bf4f4;
      }
      local_14 = &PTR_FUN_11da54a8;
      if (((iVar9 != -1) &&
          (((iVar9 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
           (iVar2 = *(int *)(puVar6 + 0x28), iVar2 != 0)))) &&
         ((iVar9 = iVar9 - *(int *)(puVar6 + 0x30), -1 < iVar9 && (iVar9 < *(int *)(puVar6 + 0x24)))
         )) {
        iVar3 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar9 / iVar2) * 4);
        if ((iVar3 != 0) && (local_1c = *(int *)(iVar3 + (iVar9 % iVar2) * 4), local_1c != 0)) {
          if (local_3c != local_c) {
            local_c = local_3c;
          }
          local_38 = local_c;
          iVar9 = iStack_50;
          if (local_44 != 0) {
            while (iVar9 != 0) {
              FUN_10463ae0(*(undefined4 *)(iVar9 + 0xc));
              iVar2 = *(int *)(iVar9 + 8);
              FUN_10c3d5d0(iVar9);
              iVar9 = iVar2;
            }
            puStack_4c = &local_54;
            iStack_50 = 0;
            local_44 = 0;
            puStack_48 = puStack_4c;
          }
          iVar9 = *param_1;
          if (param_1[1] - iVar9 >> 2 != 0) {
            uVar8 = 0;
            do {
              iVar9 = *(int *)(iVar9 + uVar8 * 4);
              local_18 = iVar9;
              if (*(int *)(iVar9 + 0x27c) == *(int *)(iVar7 + 0x10)) {
                if (local_c == local_34) {
                  FUN_11213220(local_c,&local_18,&local_5,1,1);
                }
                else {
                  *local_c = iVar9;
                  local_38 = local_c + 1;
                }
                local_c = local_38;
                local_18 = FUN_11522980(iVar9);
                FUN_10467580(local_24,&local_18);
              }
              uVar8 = uVar8 + 1;
              iVar9 = *param_1;
            } while (uVar8 < (uint)(param_1[1] - iVar9 >> 2));
          }
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          FUN_1172a630(&local_54,&local_30);
          local_14 = (undefined **)0x0;
          iVar9 = local_30;
          if (local_2c - local_30 >> 2 != 0) {
            do {
              piVar4 = *(int **)(iVar9 + (int)local_14 * 4);
              uVar8 = 0;
              if (param_2 == '\0') {
                if (piVar4[4] - piVar4[3] >> 2 != 0) {
                  do {
                    if ((((uint)(piVar4[10] - piVar4[9] >> 2) <= uVar8) ||
                        (*(int *)(piVar4[9] + uVar8 * 4) != 0xc)) || (param_4 == '\0')) {
                      puVar5 = *(undefined4 **)(param_5 + 4);
                      puVar1 = (undefined4 *)(piVar4[3] + uVar8 * 4);
                      if (puVar5 == *(undefined4 **)(param_5 + 8)) {
                        FUN_10463c40(puVar5,puVar1,&local_5,1,1);
                      }
                      else {
                        *puVar5 = *puVar1;
                        *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 4;
                      }
                    }
                    uVar8 = uVar8 + 1;
                    iVar9 = local_30;
                  } while (uVar8 < (uint)(piVar4[4] - piVar4[3] >> 2));
                }
              }
              else {
                iVar7 = *piVar4;
                if (piVar4[1] - iVar7 >> 2 != 0) {
                  do {
                    if ((((uint)(piVar4[7] - piVar4[6] >> 2) <= uVar8) ||
                        (*(int *)(piVar4[6] + uVar8 * 4) != 0xc)) || (param_4 == '\0')) {
                      puVar1 = (undefined4 *)(iVar7 + uVar8 * 4);
                      puVar5 = *(undefined4 **)(param_5 + 4);
                      if (puVar5 == *(undefined4 **)(param_5 + 8)) {
                        FUN_10463c40(puVar5,puVar1,&local_5,1,1);
                      }
                      else {
                        *puVar5 = *puVar1;
                        *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 4;
                      }
                    }
                    uVar8 = uVar8 + 1;
                    iVar7 = *piVar4;
                    iVar9 = local_30;
                  } while (uVar8 < (uint)(piVar4[1] - iVar7 >> 2));
                }
              }
              local_14 = (undefined **)((int)local_14 + 1);
              iVar7 = local_10;
            } while (local_14 < (undefined **)(local_2c - iVar9 >> 2));
          }
          if (iVar9 != 0) {
            FUN_10c3d5d0(iVar9);
          }
        }
      }
      local_10 = *(int *)(iVar7 + 0xc);
      if (local_10 == 0) {
        iVar9 = *(int *)(iVar7 + 4);
        if (iVar7 == *(int *)(iVar9 + 0xc)) {
          do {
            iVar7 = iVar9;
            iVar9 = *(int *)(iVar7 + 4);
          } while (iVar7 == *(int *)(iVar9 + 0xc));
        }
        local_10 = iVar7;
        if (*(int *)(iVar7 + 0xc) != iVar9) {
          local_10 = iVar9;
        }
      }
      else {
        for (iVar9 = *(int *)(local_10 + 8); iVar9 != 0; iVar9 = *(int *)(iVar9 + 8)) {
          local_10 = iVar9;
        }
      }
    } while (local_10 != param_3);
    iVar9 = iStack_50;
    if (local_44 != 0) {
      while (iVar9 != 0) {
        FUN_10463ae0(*(undefined4 *)(iVar9 + 0xc));
        iVar7 = *(int *)(iVar9 + 8);
        FUN_10c3d5d0(iVar9);
        iVar9 = iVar7;
      }
      puStack_4c = &local_54;
      iStack_50 = 0;
      local_44 = 0;
      puStack_48 = puStack_4c;
    }
    if (local_3c != (int *)0x0) {
      FUN_10c3d5d0(local_3c);
    }
  }
  return;
}



/* --- CEquipSuitEffectInfo::GetManagers_11300ec0 @ 11300ec0 --- */
// [RE-AUTO c3]
// id: CEquipSuitEffectInfo::GetManagers
// calls: CSuitCfgInfo::GetManagers_11300ae0
// strings:
//   ""CEquipSuitEffectInfo::GetManagers""
//   ""CEquipSuitEffectInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitEffectInfo::GetManagers
   calls: CSuitCfgInfo::GetManagers_11300ae0
   strings:
     ""CEquipSuitEffectInfo::GetManagers""
     ""CEquipSuitEffectInfo"" */

void __thiscall CEquipSuitEffectInfo__GetManagers_11300ec0(int param_1,undefined **param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int local_20 [4];
  int local_10;
  int local_c;
  int *local_8;
  
  local_20[2] = 0;
  local_c = param_1;
  CSuitCfgInfo__GetManagers_11300ae0(param_2);
  local_8 = *(int **)(param_1 + 0x54);
  if (local_8 != *(int **)(param_1 + 0x58)) {
    bVar7 = false;
    do {
      iVar8 = *local_8;
      param_2 = &PTR_FUN_11dd04b0;
      if ((DAT_123bf784 & 1) == 0) {
        DAT_123bf784 = DAT_123bf784 | 1;
        FUN_102500e0("CEquipSuitEffectInfo::GetManagers");
        FUN_11a8911f(&LAB_11c73040);
      }
      puVar4 = (undefined *)*DAT_123bf788;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_2,"CEquipSuitEffectInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bf4f0 & 1) == 0) {
          DAT_123bf4f8 = 0;
          DAT_123bf508 = 0;
          DAT_123bf50c = 0;
          _DAT_123bf510 = 0;
          DAT_123bf514 = 0;
          DAT_123bf4f0 = DAT_123bf4f0 | 1;
          _DAT_123bf4f4 = &PTR_FUN_11dd0544;
          DAT_123bf518 = _DAT_11de9ae0;
          DAT_123bf51c = _UNK_11de9ae4;
          uRam123bf520 = _UNK_11de9ae8;
          DAT_123bf524 = _UNK_11de9aec;
          DAT_123bf528 = 1;
          DAT_123bf4fc = puVar4;
          _DAT_123bf500 = puVar4;
          _DAT_123bf504 = puVar4;
          FUN_11a8911f(&LAB_11c9ab30);
        }
        puVar4 = &DAT_123bf4f4;
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((iVar8 != -1) &&
          (((iVar8 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar5 = *(int *)(puVar4 + 0x28), iVar5 != 0)))) &&
         ((iVar8 = iVar8 - *(int *)(puVar4 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar6 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar8 / iVar5) * 4);
        if ((iVar6 != 0) &&
           (((iVar8 = *(int *)(iVar6 + (iVar8 % iVar5) * 4), local_10 = iVar8, iVar8 != 0 &&
             (iVar5 = CEquipSuitSkillGroupInfo__GetManagers_1172a750(), -1 < iVar5)) &&
            (iVar8 = *(int *)(iVar8 + 0x24), iVar8 != *(int *)(local_10 + 0x28))))) {
          local_20[2] = local_c + 0x78;
          do {
            iVar3 = *(int *)(local_20[2] + 4);
            iVar6 = local_20[2];
            while (iVar2 = iVar3, iVar2 != 0) {
              if (*(int *)(iVar2 + 0x10) < iVar5) {
                iVar3 = *(int *)(iVar2 + 0xc);
              }
              else {
                iVar3 = *(int *)(iVar2 + 8);
                iVar6 = iVar2;
              }
            }
            if ((iVar6 == local_20[2]) || (bVar7 = true, iVar5 < *(int *)(iVar6 + 0x10))) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar7) {
              bVar7 = false;
            }
            if (bVar1) {
              local_20[1] = 0;
              local_20[0] = iVar5;
              FUN_10464a20(local_20 + 3,iVar6,local_20);
              iVar6 = local_20[3];
            }
            if ((*(int *)(iVar8 + 0x10) == 0) ||
               (((*(int *)(iVar8 + 0x10) == 1 &&
                 ((*(int *)(iVar8 + 8) - *(int *)(iVar8 + 4) & 0xfffffffcU) == 8)) &&
                (*(int *)(*(int *)(iVar8 + 0x14) + 4) <= *(int *)(iVar6 + 0x14))))) {
              FUN_113008c0(iVar8,local_c + 0x60,*local_8);
            }
            iVar8 = iVar8 + 0x20;
          } while (iVar8 != *(int *)(local_10 + 0x28));
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 != *(int **)(local_c + 0x58));
  }
  return;
}



/* --- CEquipSuitEffectInfo::GetManagers_114646c0 @ 114646c0 --- */
// [RE-AUTO c3]
// id: CEquipSuitEffectInfo::GetManagers
// strings:
//   ""CEquipSuitEffectInfo::GetManagers""
//   ""CEquipSuitEffectInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitEffectInfo::GetManagers
   strings:
     ""CEquipSuitEffectInfo::GetManagers""
     ""CEquipSuitEffectInfo"" */

undefined4 CEquipSuitEffectInfo__GetManagers_114646c0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  undefined **local_8;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  CSuitCfgInfo__GetManagers_11464a00(&local_18);
  uVar7 = 0;
  local_c = local_14 - local_18 >> 2;
  if (local_c != 0) {
    do {
      iVar5 = *(int *)(local_18 + uVar7 * 4);
      local_8 = &PTR_FUN_11dd04b0;
      if ((DAT_123bf784 & 1) == 0) {
        DAT_123bf784 = DAT_123bf784 | 1;
        FUN_102500e0("CEquipSuitEffectInfo::GetManagers");
        FUN_11a8911f(&LAB_11c73040);
      }
      puVar3 = (undefined *)*DAT_123bf788;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CEquipSuitEffectInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123bf4f0 & 1) == 0) {
          DAT_123bf4f8 = 0;
          DAT_123bf508 = 0;
          DAT_123bf50c = 0;
          _DAT_123bf510 = 0;
          DAT_123bf514 = 0;
          DAT_123bf4f0 = DAT_123bf4f0 | 1;
          _DAT_123bf4f4 = &PTR_FUN_11dd0544;
          DAT_123bf518 = _DAT_11de9ae0;
          DAT_123bf51c = _UNK_11de9ae4;
          uRam123bf520 = _UNK_11de9ae8;
          DAT_123bf524 = _UNK_11de9aec;
          DAT_123bf528 = 1;
          DAT_123bf4fc = puVar3;
          _DAT_123bf500 = puVar3;
          _DAT_123bf504 = puVar3;
          FUN_11a8911f(&LAB_11c9dd00);
        }
        puVar3 = &DAT_123bf4f4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)) &&
          ((iVar5 = iVar5 - *(int *)(puVar3 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar3 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0)) {
          for (piVar4 = *(int **)(iVar5 + 0x24); piVar4 != *(int **)(iVar5 + 0x28);
              piVar4 = piVar4 + 8) {
            if ((*piVar4 == 2) && ((undefined4 *)piVar4[1] != (undefined4 *)piVar4[2])) {
              uVar6 = *(undefined4 *)piVar4[1];
              goto LAB_11464838;
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_c);
  }
  uVar6 = 0;
LAB_11464838:
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  return uVar6;
}



/* --- CEquipSuitEffectInfo::GetManagers_11464860 @ 11464860 --- */
// [RE-AUTO c3]
// id: CEquipSuitEffectInfo::GetManagers
// strings:
//   ""CEquipSuitEffectInfo::GetManagers""
//   ""CEquipSuitEffectInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitEffectInfo::GetManagers
   strings:
     ""CEquipSuitEffectInfo::GetManagers""
     ""CEquipSuitEffectInfo"" */

void CEquipSuitEffectInfo__GetManagers_11464860(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined **local_8;
  
  piVar6 = (int *)*param_1;
  if (piVar6 != (int *)param_1[1]) {
    do {
      iVar4 = *piVar6;
      local_8 = &PTR_FUN_11dd04b0;
      if ((DAT_123bf784 & 1) == 0) {
        DAT_123bf784 = DAT_123bf784 | 1;
        FUN_102500e0("CEquipSuitEffectInfo::GetManagers");
        FUN_11a8911f(&LAB_11c73040);
      }
      puVar2 = (undefined *)*DAT_123bf788;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&local_8,"CEquipSuitEffectInfo",0),
         puVar2 == (undefined *)0x0)) {
        if ((DAT_123bf4f0 & 1) == 0) {
          DAT_123bf4f8 = 0;
          DAT_123bf508 = 0;
          DAT_123bf50c = 0;
          _DAT_123bf510 = 0;
          DAT_123bf514 = 0;
          DAT_123bf4f0 = DAT_123bf4f0 | 1;
          _DAT_123bf4f4 = &PTR_FUN_11dd0544;
          DAT_123bf518 = _DAT_11de9ae0;
          DAT_123bf51c = _UNK_11de9ae4;
          uRam123bf520 = _UNK_11de9ae8;
          DAT_123bf524 = _UNK_11de9aec;
          DAT_123bf528 = 1;
          DAT_123bf4fc = puVar2;
          _DAT_123bf500 = puVar2;
          _DAT_123bf504 = puVar2;
          FUN_11a8911f(&LAB_11c9dd00);
        }
        puVar2 = &DAT_123bf4f4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((iVar4 != -1) &&
          (((iVar4 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
           (iVar5 = *(int *)(puVar2 + 0x28), iVar5 != 0)))) &&
         ((iVar4 = iVar4 - *(int *)(puVar2 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar2 + 0x24)))
         )) {
        iVar3 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar4 / iVar5) * 4);
        if ((iVar3 != 0) &&
           ((iVar4 = *(int *)(iVar3 + (iVar4 % iVar5) * 4), iVar4 != 0 &&
            (iVar5 = *(int *)(iVar4 + 0x24), iVar5 != *(int *)(iVar4 + 0x28))))) {
          do {
            if ((*(int *)(iVar5 + 0x10) == 0) ||
               (((*(int *)(iVar5 + 0x10) == 1 &&
                 ((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) & 0xfffffffcU) == 8)) &&
                (puVar1 = *(undefined4 **)(iVar5 + 0x14), iVar3 = FUN_11572960(*puVar1),
                (int)puVar1[1] <= iVar3)))) {
              FUN_11463910(iVar5,param_2,*piVar6);
            }
            iVar5 = iVar5 + 0x20;
          } while (iVar5 != *(int *)(iVar4 + 0x28));
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)param_1[1]);
  }
  return;
}



/* --- CEquipSuitEffectInfo::GetManagers_11466200 @ 11466200 --- */
// [RE-AUTO c3]
// id: CEquipSuitEffectInfo::GetManagers
// calls: memcpy, CSuitCfgInfo::GetManagers_11464a00, CEquipSuitEffectInfo::GetManagers_11464860, puts, exit
// strings:
//   ""CEquipSuitEffectInfo::GetManagers""
//   ""CEquipSuitEffectInfo""
//   ""out of memory\n""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitEffectInfo::GetManagers
   calls: memcpy, CSuitCfgInfo::GetManagers_11464a00, CEquipSuitEffectInfo::GetManagers_11464860,
   puts, exit
   strings:
     ""CEquipSuitEffectInfo::GetManagers""
     ""CEquipSuitEffectInfo""
     ""out of memory\n"" */

void __fastcall CEquipSuitEffectInfo__GetManagers_11466200(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint extraout_EDX;
  int iVar10;
  undefined **ppuVar11;
  undefined4 local_6c;
  int iStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  int local_5c;
  undefined1 local_58;
  undefined4 local_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int local_44;
  undefined1 local_40;
  undefined4 local_3c;
  int local_38;
  void *local_34;
  void *local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  void *local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_14 = param_1;
  FUN_100ed750();
  if ((extraout_EDX & 0x20000) != 0) {
    puStack_64 = &local_6c;
    local_5c = 0;
    iVar10 = 0;
    local_6c = 0;
    iStack_68 = 0;
    local_58 = local_5;
    puStack_60 = puStack_64;
    do {
      iVar4 = FUN_114645a0(iVar10);
      if ((iVar4 != 0) && (iVar4 = FUN_1166c4b0(), *(int *)(iVar4 + 0x27c) != 0)) {
        iVar4 = FUN_1166c4b0();
        local_10 = *(void **)(iVar4 + 0x27c);
        FUN_10467580(local_1c,&local_10);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x17);
    puStack_4c = &local_54;
    local_44 = 0;
    local_40 = local_5;
    local_54 = 0;
    iStack_50 = 0;
    puVar9 = puStack_64;
    puStack_48 = puStack_4c;
    if (puStack_64 != &local_6c) {
      do {
        iVar10 = iStack_50;
        iVar4 = local_14;
        if (local_44 != 0) {
          while (param_1 = iVar4, local_14 = param_1, iVar10 != 0) {
            FUN_10463ae0(*(undefined4 *)(iVar10 + 0xc));
            iVar4 = *(int *)(iVar10 + 8);
            FUN_10c3d5d0(iVar10);
            iVar10 = iVar4;
            iVar4 = local_14;
          }
          puStack_4c = &local_54;
          iStack_50 = 0;
          local_44 = 0;
          puStack_48 = puStack_4c;
        }
        iVar10 = puVar9[4];
        local_c = &PTR_FUN_11dd04b0;
        if ((DAT_123bf784 & 1) == 0) {
          DAT_123bf784 = DAT_123bf784 | 1;
          FUN_102500e0("CEquipSuitEffectInfo::GetManagers");
          FUN_11a8911f(&LAB_11c73040);
        }
        puVar5 = (undefined *)*DAT_123bf788;
        if ((puVar5 == (undefined *)0x0) &&
           (puVar5 = (undefined *)FUN_11679e10(&local_c,"CEquipSuitEffectInfo",0),
           puVar5 == (undefined *)0x0)) {
          if ((DAT_123bf4f0 & 1) == 0) {
            DAT_123bf4f8 = 0;
            DAT_123bf508 = 0;
            DAT_123bf50c = 0;
            _DAT_123bf510 = 0;
            DAT_123bf514 = 0;
            DAT_123bf4f0 = DAT_123bf4f0 | 1;
            _DAT_123bf4f4 = &PTR_FUN_11dd0544;
            DAT_123bf518 = _DAT_11de9ae0;
            DAT_123bf51c = _UNK_11de9ae4;
            uRam123bf520 = _UNK_11de9ae8;
            DAT_123bf524 = _UNK_11de9aec;
            DAT_123bf528 = 1;
            DAT_123bf4fc = puVar5;
            _DAT_123bf500 = puVar5;
            _DAT_123bf504 = puVar5;
            FUN_11a8911f(&LAB_11c9dd00);
          }
          puVar5 = &DAT_123bf4f4;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar10 != -1) &&
           ((((iVar10 != 0 || (*(int *)(puVar5 + 0x30) == 0)) && (*(int *)(puVar5 + 0x28) != 0)) &&
            ((iVar10 = iVar10 - *(int *)(puVar5 + 0x30), -1 < iVar10 &&
             (iVar10 < *(int *)(puVar5 + 0x24))))))) {
          iVar4 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar10 / *(int *)(puVar5 + 0x28)) * 4);
          if ((iVar4 != 0) &&
             (local_18 = *(void **)(iVar4 + (iVar10 % *(int *)(puVar5 + 0x28)) * 4),
             local_18 != (void *)0x0)) {
            local_3c = puVar9[4];
            local_34 = (void *)0x0;
            local_30 = (void *)0x0;
            local_2c = 0;
            local_10 = (void *)0x0;
            do {
              pvVar7 = local_10;
              iVar10 = FUN_114645a0(local_10);
              if ((iVar10 != 0) && (iVar10 = FUN_1166c4b0(), *(int *)(iVar10 + 0x27c) != 0)) {
                FUN_10467580(&local_24,&local_10);
              }
              local_10 = (void *)((int)pvVar7 + 1);
            } while ((int)local_10 < 0x17);
            local_38 = local_44;
            FUN_1172a630(&local_54,&local_34);
            puVar8 = *(undefined4 **)(param_1 + 0x104);
            if (puVar8 == *(undefined4 **)(param_1 + 0x108)) {
              FUN_11467880(puVar8,&local_3c,&local_5,1,1);
            }
            else {
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = local_3c;
                puVar8[1] = local_38;
                uVar6 = (int)local_30 - (int)local_34 >> 2;
                puVar8[2] = 0;
                puVar8[3] = 0;
                puVar8[4] = 0;
                if (0x3fffffff < uVar6) {
                  puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
                  exit(1);
                }
                if (uVar6 != 0) {
                  local_18 = (void *)(uVar6 << 2);
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(local_18);
                }
                iVar10 = 0;
                puVar8[2] = 0;
                puVar8[3] = 0;
                puVar8[4] = 0;
                local_18 = local_30;
                local_10 = local_34;
                if (local_30 != local_34) {
                  pvVar7 = memcpy((void *)0x0,local_34,(int)local_30 - (int)local_34);
                  iVar10 = ((int)local_18 - (int)local_10) + (int)pvVar7;
                }
                puVar8[3] = iVar10;
              }
              *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 0x14;
            }
            uVar6 = 0;
            pvVar7 = local_34;
            if ((int)local_30 - (int)local_34 >> 2 != 0) {
              do {
                iVar10 = *(int *)(*(int *)((int)pvVar7 + uVar6 * 4) + 0x30);
                if (iVar10 != 0) {
                  if (*(int *)(param_1 + 0xc) == 0) {
                    local_18 = (void *)0xffffffff;
                  }
                  else {
                    local_18 = (void *)(**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) +
                                                   0x44))(0,iVar10,0,0,1);
                  }
                  piVar1 = *(int **)(param_1 + 0x8c);
                  if (piVar1 == *(int **)(param_1 + 0x90)) {
                    FUN_10463c40(piVar1,&local_18,&local_5,1,1);
                    pvVar7 = local_34;
                  }
                  else {
                    *piVar1 = (int)local_18;
                    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 4;
                    pvVar7 = local_34;
                  }
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < (uint)((int)local_30 - (int)pvVar7 >> 2));
            }
            if (pvVar7 != (void *)0x0) {
              FUN_10c3d5d0(pvVar7);
            }
          }
        }
        puVar8 = (undefined4 *)puVar9[3];
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)puVar9[1];
          if (puVar9 == (undefined4 *)puVar8[3]) {
            do {
              puVar9 = puVar8;
              puVar8 = (undefined4 *)puVar9[1];
            } while (puVar9 == (undefined4 *)puVar8[3]);
          }
          if ((undefined4 *)puVar9[3] != puVar8) {
            puVar9 = puVar8;
          }
        }
        else {
          for (puVar2 = (undefined4 *)puVar8[2]; puVar9 = puVar8, puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)puVar2[2]) {
            puVar8 = puVar2;
          }
        }
      } while (puVar9 != &local_6c);
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    CSuitCfgInfo__GetManagers_11464a00(&local_28);
    CEquipSuitEffectInfo__GetManagers_11464860(&local_28,param_1 + 0x34);
    ppuVar11 = *(undefined ***)(param_1 + 0x7c);
    local_c = ppuVar11;
    if (ppuVar11 != *(undefined ***)(param_1 + 0x80)) {
      do {
        local_c = ppuVar11;
        cVar3 = FUN_11463b10(ppuVar11[1]);
        if (cVar3 != '\0') {
          *(undefined1 *)(ppuVar11 + 2) = 1;
          puVar9 = *(undefined4 **)(ppuVar11[1] + 0x40);
          if (puVar9 != *(undefined4 **)(ppuVar11[1] + 0x44)) {
            do {
              if (*(int *)(param_1 + 0xc) == 0) {
                local_18 = (void *)0xffffffff;
              }
              else {
                local_18 = (void *)(**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x44))
                                             (0,*puVar9,0,0,1);
              }
              piVar1 = *(int **)(param_1 + 0x8c);
              if (piVar1 == *(int **)(param_1 + 0x90)) {
                FUN_10463c40(piVar1,&local_18,&local_5,1,1);
              }
              else {
                *piVar1 = (int)local_18;
                *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 4;
              }
              puVar9 = puVar9 + 1;
              ppuVar11 = local_c;
            } while (puVar9 != *(undefined4 **)(local_c[1] + 0x44));
          }
        }
        ppuVar11 = ppuVar11 + 5;
        local_c = ppuVar11;
      } while (ppuVar11 != *(undefined ***)(param_1 + 0x80));
    }
    if (local_28 != 0) {
      FUN_10c3d5d0(local_28);
    }
    iVar10 = iStack_50;
    if (local_44 != 0) {
      while (iVar10 != 0) {
        FUN_10463ae0(*(undefined4 *)(iVar10 + 0xc));
        iVar4 = *(int *)(iVar10 + 8);
        FUN_10c3d5d0(iVar10);
        iVar10 = iVar4;
      }
      puStack_4c = &local_54;
      iStack_50 = 0;
      local_44 = 0;
      puStack_48 = puStack_4c;
    }
    iVar10 = iStack_68;
    if (local_5c != 0) {
      while (iVar10 != 0) {
        FUN_10463ae0(*(undefined4 *)(iVar10 + 0xc));
        iVar4 = *(int *)(iVar10 + 8);
        FUN_10c3d5d0(iVar10);
        iVar10 = iVar4;
      }
    }
  }
  return;
}



/* --- CEquipSuitEffectInfo::GetManagers_118b89e0 @ 118b89e0 --- */
// [RE-AUTO c3]
// id: CEquipSuitEffectInfo::GetManagers
// calls: CEquipSuitSkillGroupInfo::GetManagers_1172a8f0
// strings:
//   ""CEquipSuitEffectInfo""
//   ""CEquipSuitEffectInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitEffectInfo::GetManagers
   calls: CEquipSuitSkillGroupInfo::GetManagers_1172a8f0
   strings:
     ""CEquipSuitEffectInfo""
     ""CEquipSuitEffectInfo::GetManagers"" */

void CEquipSuitEffectInfo__GetManagers_118b89e0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_10871240(0,"CEquipSuitEffectInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd04b0;
      if ((DAT_123bf784 & 1) == 0) {
        DAT_123bf784 = DAT_123bf784 | 1;
        FUN_102500e0("CEquipSuitEffectInfo::GetManagers");
        FUN_11a8911f(&LAB_11c73040);
      }
      puVar4 = (undefined *)*DAT_123bf788;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CEquipSuitEffectInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bf4f0 & 1) == 0) {
          DAT_123bf4f8 = 0;
          DAT_123bf508 = 0;
          DAT_123bf50c = 0;
          _DAT_123bf510 = 0;
          DAT_123bf514 = 0;
          DAT_123bf4f0 = DAT_123bf4f0 | 1;
          _DAT_123bf4f4 = &PTR_FUN_11dd0544;
          DAT_123bf518 = _DAT_11de9ae0;
          DAT_123bf51c = _UNK_11de9ae4;
          uRam123bf520 = _UNK_11de9ae8;
          DAT_123bf524 = _UNK_11de9aec;
          DAT_123bf528 = 1;
          DAT_123bf4fc = puVar4;
          _DAT_123bf500 = puVar4;
          _DAT_123bf504 = puVar4;
          FUN_11a8911f(&LAB_11caf910);
        }
        puVar4 = &DAT_123bf4f4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CEquipSuitSkillGroupInfo__GetManagers_1172a8f0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



