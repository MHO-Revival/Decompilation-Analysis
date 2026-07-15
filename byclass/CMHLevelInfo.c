// ===== class CMHLevelInfo  (23 recovered methods) =====

/* --- CMHLevelInfo::GetManagers @ 107d6dd0 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMHLevelInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    _DAT_123bec90 = &DAT_123bec80;
    DAT_123bec94 = &DAT_123bec80;
    DAT_123bec80 = 0;
    FUN_100d83d0("CMHLevelInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70cf0);
  }
  return DAT_123bec7c;
}



/* --- CMHLevelInfo::GetManagers_10b606f0 @ 10b606f0 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CHubEntryInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""
//   ""CMHMapInfo::GetManagers""
//   ""CMHMapInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CHubEntryInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo""
     ""CMHMapInfo::GetManagers""
     ""CMHMapInfo"" */

void CMHLevelInfo__GetManagers_10b606f0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  bool local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [20];
  undefined1 *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  undefined **local_8;
  
  local_1c = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
  if (local_1c != (int *)0x0) {
    iVar4 = *(int *)local_1c[0xb4b];
    local_20 = iVar4;
    iVar3 = FUN_109160f0(0,"CHubEntryInfo",0);
    if ((iVar4 != -1) &&
       ((((iVar4 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
         (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)) &&
        ((iVar4 = iVar4 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))))
       ) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar1) * 4);
      if ((iVar3 != 0) && (local_18 = *(int *)(iVar3 + (iVar4 % iVar1) * 4), local_18 != 0)) {
        FUN_100e55d0(&DAT_11d9d32b);
        FUN_100e55d0(&DAT_11d9d32b);
        local_14 = 0;
        do {
          local_14 = local_14 + 1;
          iVar4 = FUN_116b8970(local_14);
          if ((iVar4 != 0) && (uVar9 = 0, *(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x28) >> 2 != 0)
             ) {
            do {
              local_8 = &PTR_FUN_11dc893c;
              iVar3 = *(int *)(*(int *)(iVar4 + 0x28) + uVar9 * 4);
              if ((DAT_123bec98 & 1) == 0) {
                DAT_123bec98 = DAT_123bec98 | 1;
                FUN_102500e0("CMHLevelInfo::GetManagers");
                FUN_11a8911f(&LAB_11c70cf0);
              }
              puVar5 = (undefined4 *)*DAT_123bec7c;
              if ((puVar5 == (undefined4 *)0x0) &&
                 (puVar5 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0),
                 puVar5 == (undefined4 *)0x0)) {
                if ((DAT_123bec74 & 1) == 0) {
                  DAT_123beca0 = 0;
                  DAT_123becb0 = 0;
                  DAT_123becb4 = 0;
                  _DAT_123becb8 = 0;
                  DAT_123becbc = 0;
                  DAT_123bec74 = DAT_123bec74 | 1;
                  DAT_123bec9c = &PTR_FUN_11dc8960;
                  DAT_123becc0 = _DAT_11de9ae0;
                  DAT_123becc4 = _UNK_11de9ae4;
                  uRam123becc8 = _UNK_11de9ae8;
                  DAT_123beccc = _UNK_11de9aec;
                  DAT_123becd0 = 1;
                  DAT_123beca4 = puVar5;
                  _DAT_123beca8 = puVar5;
                  _DAT_123becac = puVar5;
                  FUN_11a8911f(&LAB_11c831c0);
                }
                puVar5 = &DAT_123bec9c;
              }
              local_8 = &PTR_FUN_11da54a8;
              if (((iVar3 != -1) && (((iVar3 != 0 || (puVar5[0xc] == 0)) && (puVar5[10] != 0)))) &&
                 ((iVar3 = iVar3 - puVar5[0xc], -1 < iVar3 && (iVar3 < (int)puVar5[9])))) {
                iVar1 = *(int *)(puVar5[8] + (iVar3 / (int)puVar5[10]) * 4);
                if ((iVar1 != 0) &&
                   (iVar3 = *(int *)(iVar1 + (iVar3 % (int)puVar5[10]) * 4), iVar3 != 0)) {
                  iVar4 = *(int *)(iVar3 + 0x14);
                  local_8 = &PTR_FUN_11dc8578;
                  if ((DAT_123bed2c & 1) == 0) {
                    DAT_123bed2c = DAT_123bed2c | 1;
                    FUN_102500e0("CMHMapInfo::GetManagers");
                    FUN_11a8911f(&LAB_11c70640);
                  }
                  puVar5 = (undefined4 *)*DAT_123bed10;
                  if ((puVar5 == (undefined4 *)0x0) &&
                     (puVar5 = (undefined4 *)FUN_11679e10(&local_8,"CMHMapInfo",0),
                     puVar5 == (undefined4 *)0x0)) {
                    if ((DAT_123bea78 & 1) == 0) {
                      DAT_123bea78 = DAT_123bea78 | 1;
                      FUN_107d5710();
                      FUN_11a8911f(&LAB_11c83220);
                    }
                    puVar5 = &DAT_123bea7c;
                  }
                  local_8 = &PTR_FUN_11da54a8;
                  if (((iVar4 != -1) &&
                      (((iVar4 != 0 || (puVar5[0xc] == 0)) && (iVar3 = puVar5[10], iVar3 != 0)))) &&
                     ((iVar4 = iVar4 - puVar5[0xc], -1 < iVar4 && (iVar4 < (int)puVar5[9])))) {
                    iVar1 = *(int *)(puVar5[8] + (iVar4 / iVar3) * 4);
                    if ((iVar1 != 0) && (iVar4 = *(int *)(iVar1 + (iVar4 % iVar3) * 4), iVar4 != 0))
                    {
                      puVar8 = &DAT_11d9d32b;
                      if (*(undefined1 **)(iVar4 + 0x2c) != (undefined1 *)0x0) {
                        puVar8 = *(undefined1 **)(iVar4 + 0x2c);
                      }
                      FUN_100e5d80(puVar8);
                      FUN_100e5d80(*(undefined4 *)(iVar4 + 0x5c));
                      goto LAB_10b609eb;
                    }
                  }
                  break;
                }
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < (uint)(*(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x28) >> 2));
          }
        } while (local_14 < 10);
LAB_10b609eb:
        piVar7 = local_1c;
        local_50 = false;
        local_4c = 0;
        local_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        local_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        cVar2 = (**(code **)(*local_1c + 0x394))();
        if (cVar2 == '\0') {
          local_50 = true;
        }
        else {
          piVar6 = (int *)(**(code **)(*piVar7 + 0x3a4))();
          piVar6 = (int *)(**(code **)(*piVar6 + 0x88))();
          iVar4 = piVar7[1];
          iVar3 = (**(code **)(*piVar6 + 0xc))();
          local_50 = iVar4 == iVar3;
        }
        local_4c = local_20;
        iVar4 = FUN_100e5b40(local_38);
        FUN_100ec080(&local_48,0x10,*(undefined4 *)(iVar4 + 0x14),0x10);
        if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_24);
        }
        iVar4 = FUN_100e5b40(local_38);
        FUN_100ec080(&local_70,0x20,*(undefined4 *)(iVar4 + 0x14),0x20);
        if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_24);
        }
        FUN_10d17440();
        piVar7 = (int *)FUN_10d17870();
        (**(code **)(*piVar7 + 4))(0x45,&local_70);
        FUN_100e5670();
        FUN_100e5670();
      }
    }
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_1130bda0 @ 1130bda0 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CHubEntryConfigKingQuestInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CHubEntryConfigKingQuestInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void CMHLevelInfo__GetManagers_1130bda0
               (int param_1,undefined **param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 local_9c [7];
  undefined1 local_80;
  undefined4 local_30;
  undefined1 local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar4 = FUN_107d3d90(0,"CHubEntryConfigKingQuestInfo",0);
  if (((param_2 != (undefined **)0xffffffff) &&
      (((param_2 != (undefined **)0x0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar5 = (int)param_2 - *(int *)(iVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar4 + 0x24))
      ))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar1) * 4);
    if ((iVar4 != 0) && ((*(int *)(iVar4 + (iVar5 % iVar1) * 4) != 0 && (param_1 != 0)))) {
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      FUN_1175f3a0(param_3,&local_14);
      iVar1 = param_4;
      local_8 = 0;
      iVar4 = local_10 - local_14 >> 0x1f;
      if ((local_10 - local_14) / 0x4c + iVar4 != iVar4) {
        local_18 = 0;
        do {
          param_2 = &PTR_FUN_11dc893c;
          local_1c = local_18 + local_14;
          iVar4 = *(int *)(local_18 + 8 + local_14);
          if ((DAT_123bec98 & 1) == 0) {
            DAT_123bec98 = DAT_123bec98 | 1;
            FUN_102500e0("CMHLevelInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70cf0);
          }
          puVar6 = (undefined4 *)*DAT_123bec7c;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_11679e10(&param_2,"CMHLevelInfo",0);
            if (puVar6 == (undefined4 *)0x0) {
              if ((DAT_123bec74 & 1) == 0) {
                DAT_123bec74 = DAT_123bec74 | 1;
                FUN_107d6cc0();
                FUN_11a8911f(&LAB_11c9b010);
              }
              puVar6 = &DAT_123bec9c;
            }
          }
          param_2 = &PTR_FUN_11da54a8;
          if ((iVar4 != -1) &&
             ((((iVar4 != 0 || (puVar6[0xc] == 0)) && (iVar5 = puVar6[10], iVar5 != 0)) &&
              ((iVar4 = iVar4 - puVar6[0xc], -1 < iVar4 && (iVar4 < (int)puVar6[9])))))) {
            iVar2 = *(int *)(puVar6[8] + (iVar4 / iVar5) * 4);
            if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar4 % iVar5) * 4) != 0)) {
              FUN_1130b080();
              iVar4 = local_1c;
              local_9c[0] = *(undefined4 *)(local_1c + 8);
              FUN_100e5d80(*(undefined4 *)(local_1c + 0x30));
              local_30 = *(undefined4 *)(iVar4 + 0xc);
              local_2c = *(undefined1 *)(iVar4 + 0x10);
              puVar7 = &DAT_11d9d32b;
              if (*(undefined1 **)(iVar4 + 0x18) != (undefined1 *)0x0) {
                puVar7 = *(undefined1 **)(iVar4 + 0x18);
              }
              FUN_100e5d80(puVar7);
              local_80 = FUN_1130d400(param_1,*(undefined4 *)(iVar4 + 8));
              cVar3 = FUN_1130b720(param_1,*(undefined4 *)(iVar4 + 8),local_9c);
              if (cVar3 != '\0') {
                iVar4 = *(int *)(iVar1 + 4);
                if (iVar4 == *(int *)(iVar1 + 8)) {
                  FUN_1130dad0(iVar4,local_9c,(int)&param_2 + 3,1,1);
                }
                else {
                  if (iVar4 != 0) {
                    FUN_1130af50(local_9c);
                  }
                  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x80;
                }
              }
              FUN_1097da70();
            }
          }
          local_8 = local_8 + 1;
          local_18 = local_18 + 0x4c;
        } while (local_8 < (uint)((local_10 - local_14) / 0x4c));
      }
      FUN_1130a220(local_10,local_14,0,(int)&param_2 + 3);
      if (local_14 != 0) {
        FUN_10c3d5d0(local_14);
      }
    }
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_1130c060 @ 1130c060 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CHubEntryConfigLetterQuestInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CHubEntryConfigLetterQuestInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void CMHLevelInfo__GetManagers_1130c060
               (int param_1,undefined **param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_9c [32];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar4 = FUN_107d3ef0(0,"CHubEntryConfigLetterQuestInfo",0);
  if (((param_2 != (undefined **)0xffffffff) &&
      (((param_2 != (undefined **)0x0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar5 = (int)param_2 - *(int *)(iVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar4 + 0x24))
      ))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar1) * 4);
    if ((iVar4 != 0) && ((*(int *)(iVar4 + (iVar5 % iVar1) * 4) != 0 && (param_1 != 0)))) {
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      FUN_11760c20(param_3,&local_14);
      iVar1 = param_4;
      local_8 = 0;
      iVar4 = local_10 - local_14 >> 0x1f;
      if ((local_10 - local_14) / 0x2c + iVar4 != iVar4) {
        local_18 = 0;
        do {
          local_1c = local_14 + local_18;
          param_2 = &PTR_FUN_11dc893c;
          iVar4 = *(int *)(local_1c + 8);
          if ((DAT_123bec98 & 1) == 0) {
            DAT_123bec98 = DAT_123bec98 | 1;
            FUN_102500e0("CMHLevelInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70cf0);
          }
          puVar6 = (undefined4 *)*DAT_123bec7c;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_11679e10(&param_2,"CMHLevelInfo",0);
            if (puVar6 == (undefined4 *)0x0) {
              if ((DAT_123bec74 & 1) == 0) {
                DAT_123bec74 = DAT_123bec74 | 1;
                FUN_107d6cc0();
                FUN_11a8911f(&LAB_11c9b010);
              }
              puVar6 = &DAT_123bec9c;
            }
          }
          param_2 = &PTR_FUN_11da54a8;
          if ((iVar4 != -1) &&
             ((((iVar4 != 0 || (puVar6[0xc] == 0)) && (iVar5 = puVar6[10], iVar5 != 0)) &&
              ((iVar4 = iVar4 - puVar6[0xc], -1 < iVar4 && (iVar4 < (int)puVar6[9])))))) {
            iVar2 = *(int *)(puVar6[8] + (iVar4 / iVar5) * 4);
            if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar4 % iVar5) * 4) != 0)) {
              FUN_1130b080();
              local_9c[0] = *(undefined4 *)(local_1c + 8);
              cVar3 = FUN_1130b720(param_1,*(undefined4 *)(local_1c + 8),local_9c);
              if (cVar3 != '\0') {
                iVar4 = *(int *)(iVar1 + 4);
                if (iVar4 == *(int *)(iVar1 + 8)) {
                  FUN_1130dad0(iVar4,local_9c,(int)&param_2 + 3,1,1);
                }
                else {
                  if (iVar4 != 0) {
                    FUN_1130af50(local_9c);
                  }
                  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x80;
                }
              }
              FUN_1097da70();
            }
          }
          local_8 = local_8 + 1;
          local_18 = local_18 + 0x2c;
        } while (local_8 < (uint)((local_10 - local_14) / 0x2c));
      }
      FUN_1130a280(local_10,local_14,0,(int)&param_2 + 3);
      if (local_14 != 0) {
        FUN_10c3d5d0(local_14);
      }
    }
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_1130c2e0 @ 1130c2e0 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CHubEntryConfigInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CHubEntryConfigInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void CMHLevelInfo__GetManagers_1130c2e0
               (int param_1,undefined **param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_7c;
  undefined4 local_64;
  int local_38;
  int local_34;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar4 = FUN_107d3970(0,"CHubEntryConfigInfo",0);
  if (((param_2 != (undefined **)0xffffffff) &&
      (((param_2 != (undefined **)0x0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar5 = (int)param_2 - *(int *)(iVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar4 + 0x24))
      ))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar1) * 4);
    if ((iVar4 != 0) && ((*(int *)(iVar4 + (iVar5 % iVar1) * 4) != 0 && (param_1 != 0)))) {
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      FUN_116b89d0(param_3,&local_10);
      iVar1 = param_4;
      local_18 = 0;
      iVar4 = local_c - local_10 >> 0x1f;
      if ((local_c - local_10) / 0x60 + iVar4 != iVar4) {
        local_14 = 0;
        do {
          iVar5 = local_14 + local_10;
          param_2 = &PTR_FUN_11dc893c;
          iVar4 = *(int *)(iVar5 + 0xc);
          if ((DAT_123bec98 & 1) == 0) {
            DAT_123bec98 = DAT_123bec98 | 1;
            FUN_102500e0("CMHLevelInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70cf0);
          }
          puVar6 = (undefined4 *)*DAT_123bec7c;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_11679e10(&param_2,"CMHLevelInfo",0);
            if (puVar6 == (undefined4 *)0x0) {
              if ((DAT_123bec74 & 1) == 0) {
                DAT_123bec74 = DAT_123bec74 | 1;
                FUN_107d6cc0();
                FUN_11a8911f(&LAB_11c9b010);
              }
              puVar6 = &DAT_123bec9c;
            }
          }
          param_2 = &PTR_FUN_11da54a8;
          if ((iVar4 != -1) &&
             ((((iVar4 != 0 || (puVar6[0xc] == 0)) && (puVar6[10] != 0)) &&
              ((iVar4 = iVar4 - puVar6[0xc], -1 < iVar4 && (iVar4 < (int)puVar6[9])))))) {
            iVar2 = *(int *)(puVar6[8] + (iVar4 / (int)puVar6[10]) * 4);
            if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar4 % (int)puVar6[10]) * 4) != 0)) {
              FUN_1130b080();
              local_98[0] = *(undefined4 *)(iVar5 + 0xc);
              local_88 = *(undefined4 *)(iVar5 + 0x20);
              local_84 = *(undefined4 *)(iVar5 + 0x24);
              local_90 = *(undefined4 *)(iVar5 + 0x10);
              FUN_100e5d80(*(undefined4 *)(iVar5 + 0x5c));
              local_64 = *(undefined4 *)(iVar5 + 0x2c);
              local_7c = FUN_1130d400(param_1,*(undefined4 *)(iVar5 + 0xc));
              cVar3 = FUN_1130b720(param_1,*(undefined4 *)(iVar5 + 0xc),local_98);
              if (cVar3 != '\0') {
                iVar4 = *(int *)(iVar5 + 0x18);
                iVar5 = *(int *)(iVar5 + 0x14);
                if (iVar5 != iVar4) {
                  uVar7 = iVar4 - iVar5 >> 2;
                  if ((uint)(local_34 - local_38 >> 2) < uVar7) {
                    FUN_11223ec0(local_38,iVar5,iVar4,uVar7);
                  }
                  else {
                    FUN_11223dc0(local_38,iVar5,iVar4,uVar7,(int)&param_2 + 3);
                  }
                }
                iVar4 = *(int *)(iVar1 + 4);
                if (iVar4 == *(int *)(iVar1 + 8)) {
                  FUN_1130dad0(iVar4,local_98,(int)&param_2 + 3,1,1);
                }
                else {
                  if (iVar4 != 0) {
                    FUN_1130af50(local_98);
                  }
                  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x80;
                }
              }
              FUN_1097da70();
            }
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + 0x60;
        } while (local_18 < (uint)((local_c - local_10) / 0x60));
      }
      FUN_1130a2c0(local_c,local_10,0,(int)&param_2 + 3);
      if (local_10 != 0) {
        FUN_10c3d5d0(local_10);
      }
    }
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_1130c630 @ 1130c630 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CHubEntryRaidConfigInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CHubEntryRaidConfigInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void CMHLevelInfo__GetManagers_1130c630
               (int param_1,undefined **param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int local_90 [32];
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  iVar3 = FUN_107d4050();
  if (((param_2 != (undefined **)0xffffffff) &&
      (((param_2 != (undefined **)0x0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar6 = *(int *)(iVar3 + 0x28), iVar6 != 0)))) &&
     ((iVar4 = (int)param_2 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))
      ))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar6) * 4);
    if ((iVar3 != 0) && ((*(int *)(iVar3 + (iVar4 % iVar6) * 4) != 0 && (param_1 != 0)))) {
      local_10 = (int *)0x0;
      local_c = (int *)0x0;
      local_8 = 0;
      FUN_1175da10();
      iVar3 = param_4;
      if (local_10 != local_c) {
        piVar7 = local_10 + 2;
        do {
          iVar6 = *piVar7;
          param_2 = &PTR_FUN_11dc893c;
          if ((DAT_123bec98 & 1) == 0) {
            DAT_123bec98 = DAT_123bec98 | 1;
            FUN_102500e0();
            FUN_11a8911f();
          }
          puVar5 = (undefined4 *)*DAT_123bec7c;
          if ((puVar5 == (undefined4 *)0x0) &&
             (puVar5 = (undefined4 *)FUN_11679e10(), puVar5 == (undefined4 *)0x0)) {
            if ((DAT_123bec74 & 1) == 0) {
              DAT_123bec74 = DAT_123bec74 | 1;
              FUN_107d6cc0();
              FUN_11a8911f();
            }
            puVar5 = &DAT_123bec9c;
          }
          param_2 = &PTR_FUN_11da54a8;
          if ((iVar6 != -1) &&
             ((((iVar6 != 0 || (puVar5[0xc] == 0)) && (puVar5[10] != 0)) &&
              ((iVar6 = iVar6 - puVar5[0xc], -1 < iVar6 && (iVar6 < (int)puVar5[9])))))) {
            iVar4 = *(int *)(puVar5[8] + (iVar6 / (int)puVar5[10]) * 4);
            if ((iVar4 != 0) && (*(int *)(iVar4 + (iVar6 % (int)puVar5[10]) * 4) != 0)) {
              FUN_1130b080();
              FUN_100e5d80();
              local_90[0] = *piVar7;
              cVar2 = FUN_1130b720(param_1);
              if (cVar2 != '\0') {
                iVar6 = *(int *)(iVar3 + 4);
                if (iVar6 == *(int *)(iVar3 + 8)) {
                  FUN_1130dad0(iVar6,local_90,(int)&param_2 + 3);
                }
                else {
                  if (iVar6 != 0) {
                    FUN_1130af50();
                  }
                  *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 0x80;
                }
              }
              FUN_1097da70();
            }
          }
          piVar1 = piVar7 + 0xf;
          piVar7 = piVar7 + 0x11;
        } while (piVar1 != local_c);
      }
      FUN_1130a330(local_c);
      if (local_10 != (int *)0x0) {
        FUN_10c3d5d0();
      }
    }
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_1130c940 @ 1130c940 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CHubPageStarLevelInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CHubPageStarLevelInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void CMHLevelInfo__GetManagers_1130c940
               (undefined4 param_1,undefined **param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_84 [7];
  undefined1 local_68;
  undefined4 local_18;
  
  iVar7 = (int)param_2 * 100 + param_3;
  iVar4 = FUN_107d3c30(0,"CHubPageStarLevelInfo",0);
  iVar2 = param_4;
  if (((iVar7 != -1) &&
      (((iVar7 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)))) &&
     ((iVar7 = iVar7 - *(int *)(iVar4 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar7 / iVar1) * 4);
    if ((iVar4 != 0) && (param_3 = *(int *)(iVar4 + (iVar7 % iVar1) * 4), param_3 != 0)) {
      iVar4 = *(int *)(param_3 + 0x18);
      uVar6 = 0;
      if (*(int *)(param_3 + 0x1c) - iVar4 >> 3 != 0) {
        do {
          iVar4 = *(int *)(iVar4 + 4 + uVar6 * 8);
          param_2 = &PTR_FUN_11dc893c;
          if ((DAT_123bec98 & 1) == 0) {
            DAT_123bec98 = DAT_123bec98 | 1;
            FUN_102500e0("CMHLevelInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70cf0);
          }
          puVar5 = (undefined4 *)*DAT_123bec7c;
          if ((puVar5 == (undefined4 *)0x0) &&
             (puVar5 = (undefined4 *)FUN_11679e10(&param_2,"CMHLevelInfo",0),
             puVar5 == (undefined4 *)0x0)) {
            if ((DAT_123bec74 & 1) == 0) {
              DAT_123bec74 = DAT_123bec74 | 1;
              FUN_107d6cc0();
              FUN_11a8911f(&LAB_11c9b010);
            }
            puVar5 = &DAT_123bec9c;
          }
          param_2 = &PTR_FUN_11da54a8;
          if ((iVar4 != -1) &&
             ((((iVar4 != 0 || (puVar5[0xc] == 0)) && (puVar5[10] != 0)) &&
              ((iVar4 = iVar4 - puVar5[0xc], -1 < iVar4 && (iVar4 < (int)puVar5[9])))))) {
            iVar7 = *(int *)(puVar5[8] + (iVar4 / (int)puVar5[10]) * 4);
            if ((iVar7 != 0) && (*(int *)(iVar7 + (iVar4 % (int)puVar5[10]) * 4) != 0)) {
              FUN_1130b080();
              local_84[0] = *(undefined4 *)(*(int *)(param_3 + 0x18) + 4 + uVar6 * 8);
              local_18 = *(undefined4 *)(*(int *)(param_3 + 0x18) + uVar6 * 8);
              local_68 = FUN_1130d400(param_1,local_84[0]);
              cVar3 = FUN_1130b720(param_1,local_84[0],local_84);
              if (cVar3 != '\0') {
                iVar4 = *(int *)(iVar2 + 4);
                if (iVar4 == *(int *)(iVar2 + 8)) {
                  FUN_1130dad0(iVar4,local_84,(int)&param_2 + 3,1,1);
                }
                else {
                  if (iVar4 != 0) {
                    FUN_1130af50(local_84);
                  }
                  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 0x80;
                }
              }
              FUN_1097da70();
            }
          }
          uVar6 = uVar6 + 1;
          iVar4 = *(int *)(param_3 + 0x18);
        } while (uVar6 < (uint)(*(int *)(param_3 + 0x1c) - iVar4 >> 3));
      }
    }
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_114cdb70 @ 114cdb70 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

uint __thiscall CMHLevelInfo__GetManagers_114cdb70(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  uint local_c;
  undefined **local_8;
  
  local_c = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 5 != 0) {
    local_10 = 0;
    do {
      piVar5 = (int *)(*(int *)(param_1 + 0x10) + local_10);
      local_8 = &PTR_FUN_11dc893c;
      iVar4 = *piVar5;
      if ((DAT_123bec98 & 1) == 0) {
        DAT_123bec98 = DAT_123bec98 | 1;
        FUN_102500e0("CMHLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70cf0);
      }
      puVar2 = (undefined4 *)*DAT_123bec7c;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0);
        if (puVar2 == (undefined4 *)0x0) {
          if ((DAT_123bec74 & 1) == 0) {
            DAT_123beca0 = 0;
            DAT_123becb0 = 0;
            DAT_123becb4 = 0;
            _DAT_123becb8 = 0;
            DAT_123becbc = 0;
            DAT_123bec74 = DAT_123bec74 | 1;
            DAT_123bec9c = &PTR_FUN_11dc8960;
            DAT_123becc0 = _DAT_11de9ae0;
            DAT_123becc4 = _UNK_11de9ae4;
            uRam123becc8 = _UNK_11de9ae8;
            DAT_123beccc = _UNK_11de9aec;
            DAT_123becd0 = 1;
            DAT_123beca4 = puVar2;
            _DAT_123beca8 = puVar2;
            _DAT_123becac = puVar2;
            FUN_11a8911f(&LAB_11c9ef20);
          }
          puVar2 = &DAT_123bec9c;
        }
      }
      if ((iVar4 != -1) &&
         ((((iVar4 != 0 || (puVar2[0xc] == 0)) && (puVar2[10] != 0)) &&
          ((iVar4 = iVar4 - puVar2[0xc], -1 < iVar4 && (iVar4 < (int)puVar2[9])))))) {
        iVar1 = *(int *)(puVar2[8] + (iVar4 / (int)puVar2[10]) * 4);
        if ((iVar1 != 0) &&
           (((uVar3 = *(uint *)(iVar1 + (iVar4 % (int)puVar2[10]) * 4), uVar3 != 0 &&
             (*(int *)(uVar3 + 0x14) == param_2)) && (piVar5[1] != 0)))) {
          return uVar3 & 0xffffff00;
        }
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x20;
      uVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 5;
    } while (local_c < uVar3);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}



/* --- CMHLevelInfo::GetManagers_11576780 @ 11576780 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

uint __thiscall CMHLevelInfo__GetManagers_11576780(int param_1,undefined **param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int local_c;
  uint local_8;
  
  ppuVar3 = param_2;
  local_8 = 0;
  uVar7 = 0;
  if ((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0xc != 0) {
    local_c = 0;
    do {
      cVar4 = FUN_11576ac0(ppuVar3,*(undefined4 *)(local_c + *(int *)(param_1 + 0xc)));
      if (cVar4 != '\0') {
        param_2 = &PTR_FUN_11dc893c;
        if ((DAT_123bec98 & 1) == 0) {
          DAT_123bec98 = DAT_123bec98 | 1;
          FUN_102500e0("CMHLevelInfo::GetManagers");
          FUN_11a8911f(&LAB_11c70cf0);
        }
        puVar5 = (undefined4 *)*DAT_123bec7c;
        if ((puVar5 == (undefined4 *)0x0) &&
           (puVar5 = (undefined4 *)FUN_11679e10(&param_2,"CMHLevelInfo",0),
           puVar5 == (undefined4 *)0x0)) {
          if ((DAT_123bec74 & 1) == 0) {
            DAT_123bec74 = DAT_123bec74 | 1;
            FUN_107d6cc0();
            FUN_11a8911f(&LAB_11ca2920);
          }
          puVar5 = &DAT_123bec9c;
        }
        param_2 = &PTR_FUN_11da54a8;
        if (((ppuVar3 != (undefined **)0xffffffff) &&
            (((ppuVar3 != (undefined **)0x0 || (puVar5[0xc] == 0)) &&
             (iVar1 = puVar5[10], iVar1 != 0)))) &&
           ((iVar6 = (int)ppuVar3 - puVar5[0xc], -1 < iVar6 && (iVar6 < (int)puVar5[9])))) {
          iVar2 = *(int *)(puVar5[8] + (iVar6 / iVar1) * 4);
          if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + (iVar6 % iVar1) * 4), iVar1 != 0)) {
            return (uint)(param_3 <
                         (uint)(*(int *)(*(int *)(param_1 + 0xc) + 4 + local_8 * 0xc) +
                               *(int *)(*(int *)(iVar1 + 0x24) + 0x50)));
          }
        }
      }
      local_8 = local_8 + 1;
      local_c = local_c + 0xc;
      uVar7 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0xc;
    } while (local_8 < uVar7);
  }
  return uVar7 & 0xffffff00;
}



/* --- CMHLevelInfo::GetManagers_115cd230 @ 115cd230 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

undefined4 __thiscall
CMHLevelInfo__GetManagers_115cd230(int param_1,undefined **param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  char cVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined1 *local_1c;
  int local_14;
  int local_c;
  undefined4 local_8;
  
  iVar11 = (int)param_2;
  if (param_2 == (undefined **)param_3) {
    return 1;
  }
  for (piVar6 = *(int **)(param_1 + 4); piVar6 != *(int **)(param_1 + 8); piVar6 = piVar6 + 1) {
    if (param_2 == (undefined **)*piVar6) {
      return 0;
    }
  }
  param_2 = &PTR_FUN_11dc893c;
  local_c = param_1;
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  puVar7 = (undefined4 *)*DAT_123bec7c;
  if ((puVar7 == (undefined4 *)0x0) &&
     (puVar7 = (undefined4 *)FUN_11679e10(&param_2,"CMHLevelInfo",0), puVar7 == (undefined4 *)0x0))
  {
    if ((DAT_123bec74 & 1) == 0) {
      DAT_123bec74 = DAT_123bec74 | 1;
      FUN_107d6cc0();
      FUN_11a8911f(&LAB_11ca4550);
    }
    puVar7 = &DAT_123bec9c;
  }
  param_2 = &PTR_FUN_11da54a8;
  if ((iVar11 != -1) &&
     ((((iVar11 != 0 || (puVar7[0xc] == 0)) && (iVar1 = puVar7[10], iVar1 != 0)) &&
      ((iVar11 = iVar11 - puVar7[0xc], -1 < iVar11 && (iVar11 < (int)puVar7[9])))))) {
    iVar2 = *(int *)(puVar7[8] + (iVar11 / iVar1) * 4);
    if ((iVar2 != 0) &&
       ((*(int *)(iVar2 + (iVar11 % iVar1) * 4) != 0 && (iVar11 = FUN_116ae750(), iVar11 != 0)))) {
      uVar8 = FUN_117108c0();
      FUN_108899c0(uVar8);
      piVar6 = param_4;
      if (local_1c != local_24) {
        local_8 = 0;
        puVar10 = local_1c;
        do {
          piVar3 = (int *)piVar6[1];
          param_4 = (int *)(puVar10 + 0x14);
          if (piVar3 == (int *)piVar6[2]) {
            FUN_115cd670(piVar3,&param_4,(int)&param_2 + 3,1,1);
          }
          else {
            *piVar3 = (int)param_4;
            piVar6[1] = piVar6[1] + 4;
          }
          puVar7 = *(undefined4 **)(param_1 + 8);
          if (puVar7 == *(undefined4 **)(param_1 + 0xc)) {
            FUN_10463c40(puVar7,&local_8,(int)&param_2 + 3,1,1);
          }
          else {
            *puVar7 = 0;
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
          }
          cVar5 = CMHLevelInfo__GetManagers_115cd230(*(undefined4 *)(puVar10 + 0x10),param_3,piVar6)
          ;
          if (cVar5 != '\0') {
            if (local_14 != 0) {
              FUN_1088a020(local_20);
            }
            return 1;
          }
          if (piVar6[1] != *piVar6) {
            piVar6[1] = piVar6[1] + -4;
          }
          if (*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
          }
          puVar9 = *(undefined1 **)(puVar10 + 0xc);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)(puVar10 + 4);
            if (puVar10 == *(undefined1 **)(puVar9 + 0xc)) {
              do {
                puVar10 = puVar9;
                puVar9 = *(undefined1 **)(puVar10 + 4);
              } while (puVar10 == *(undefined1 **)(puVar9 + 0xc));
            }
            if (*(undefined1 **)(puVar10 + 0xc) != puVar9) {
              puVar10 = puVar9;
            }
          }
          else {
            for (puVar4 = *(undefined1 **)(puVar9 + 8); puVar10 = puVar9,
                puVar4 != (undefined1 *)0x0; puVar4 = *(undefined1 **)(puVar4 + 8)) {
              puVar9 = puVar4;
            }
          }
        } while (puVar10 != local_24);
      }
      if (local_14 != 0) {
        FUN_1088a020(local_20);
      }
    }
  }
  return 0;
}



/* --- CMHLevelInfo::GetManagers_116b4620 @ 116b4620 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo""
//   ""CMHLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo""
     ""CMHLevelInfo::GetManagers"" */

void CMHLevelInfo__GetManagers_116b4620(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  piVar1 = (int *)FUN_107d78c0(0,"CMHLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dc893c;
      if ((DAT_123bec98 & 1) == 0) {
        DAT_123bec98 = DAT_123bec98 | 1;
        FUN_102500e0("CMHLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70cf0);
      }
      if (((*DAT_123bec7c == 0) && (iVar3 = FUN_11679e10(&local_8,"CMHLevelInfo",0), iVar3 == 0)) &&
         ((DAT_123bec74 & 1) == 0)) {
        DAT_123beca0 = 0;
        DAT_123becb0 = 0;
        DAT_123becb4 = 0;
        _DAT_123becb8 = 0;
        DAT_123becbc = 0;
        DAT_123bec74 = DAT_123bec74 | 1;
        DAT_123beca4 = 0;
        _DAT_123beca8 = 0;
        _DAT_123becac = 0;
        DAT_123bec9c = &PTR_FUN_11dc8960;
        DAT_123becc0 = _DAT_11de9ae0;
        DAT_123becc4 = _UNK_11de9ae4;
        uRam123becc8 = _UNK_11de9ae8;
        DAT_123beccc = _UNK_11de9aec;
        DAT_123becd0 = 1;
        FUN_11a8911f(&LAB_11ca7590);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_116fd090 @ 116fd090 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""
//   ""CSpawnMonsterGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CSpawnMonsterGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo""
     ""CSpawnMonsterGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CSpawnMonsterGroupInfo"" */

uint __fastcall CMHLevelInfo__GetManagers_116fd090(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined **local_8;
  
  uVar3 = (**(code **)(*param_1 + 0x18))();
  if ((int)uVar3 < 0) {
    return uVar3 & 0xffffff00;
  }
  local_8 = &PTR_FUN_11dc893c;
  iVar7 = param_1[4];
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  piVar4 = (int *)*DAT_123bec7c;
  piVar5 = DAT_123bec7c;
  if ((piVar4 == (int *)0x0) &&
     (piVar4 = (int *)FUN_11679e10(&local_8,"CMHLevelInfo",0), piVar5 = piVar4, piVar4 == (int *)0x0
     )) {
    piVar5 = DAT_123bec74;
    if (((uint)DAT_123bec74 & 1) == 0) {
      DAT_123beca0 = 0;
      DAT_123becb0 = 0;
      DAT_123becb4 = 0;
      _DAT_123becb8 = 0;
      DAT_123becbc = 0;
      DAT_123bec74 = (int *)((uint)DAT_123bec74 | 1);
      DAT_123bec9c = &PTR_FUN_11dc8960;
      DAT_123becc0 = _DAT_11de9ae0;
      DAT_123becc4 = _UNK_11de9ae4;
      uRam123becc8 = _UNK_11de9ae8;
      DAT_123beccc = _UNK_11de9aec;
      DAT_123becd0 = 1;
      DAT_123beca4 = piVar4;
      _DAT_123beca8 = piVar4;
      _DAT_123becac = piVar4;
      piVar5 = (int *)FUN_11a8911f(&LAB_11ca81c0);
    }
    piVar4 = (int *)&DAT_123bec9c;
  }
  if (((iVar7 != -1) && (((iVar7 != 0 || (piVar4[0xc] == 0)) && (iVar1 = piVar4[10], iVar1 != 0))))
     && ((iVar7 = iVar7 - piVar4[0xc], -1 < iVar7 && (iVar7 < piVar4[9])))) {
    piVar5 = *(int **)(piVar4[8] + (iVar7 / iVar1) * 4);
    if ((piVar5 != (int *)0x0) && (piVar5[iVar7 % iVar1] != 0)) {
      piVar4 = (int *)param_1[6];
      do {
        if (piVar4 == param_1 + 6) {
          return CONCAT31((int3)((uint)piVar4 >> 8),1);
        }
        for (piVar2 = (int *)piVar4[4]; piVar2 != piVar4 + 4; piVar2 = (int *)*piVar2) {
          piVar8 = (int *)piVar2[4];
          if (piVar8 != piVar2 + 4) {
            do {
              piVar5 = piVar2 + 4;
              iVar7 = piVar8[3];
              local_8 = &PTR_FUN_11cf489c;
              if ((DAT_12039bf4 & 1) == 0) {
                DAT_12039bf4 = DAT_12039bf4 | 1;
                _DAT_12039bec = &DAT_12039bdc;
                DAT_12039bf0 = &DAT_12039bdc;
                DAT_12039bdc = 0;
                FUN_100d9260("CSpawnMonsterGroupInfo::GetManagers","");
                FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
                DAT_12039bd8 = (undefined4 *)FUN_100dfd90(DAT_12039bf0);
                if (DAT_12039bd8 == (undefined4 *)0x0) {
                  DAT_12039bd8 = (undefined4 *)FUN_100dde50(4);
                  *DAT_12039bd8 = 0;
                  FUN_100dfdc0(DAT_12039bf0,DAT_12039bd8);
                }
                piVar5 = (int *)FUN_11a8911f(&LAB_11c8fbc0);
              }
              piVar6 = (int *)*DAT_12039bd8;
              if ((piVar6 == (int *)0x0) &&
                 (piVar6 = (int *)FUN_11679e10(&local_8,"CSpawnMonsterGroupInfo",0), piVar5 = piVar6
                 , piVar6 == (int *)0x0)) {
                piVar5 = DAT_1203a5b8;
                if (((uint)DAT_1203a5b8 & 1) == 0) {
                  DAT_1203a584 = 0;
                  DAT_1203a594 = 0;
                  uRam1203a598 = 0;
                  _DAT_1203a59c = 0;
                  DAT_1203a5a0 = 0;
                  DAT_1203a5b8 = (int *)((uint)DAT_1203a5b8 | 1);
                  _DAT_1203a580 = &PTR_FUN_11cf48e0;
                  DAT_1203a5a4 = _DAT_11de9ae0;
                  DAT_1203a5a8 = _UNK_11de9ae4;
                  uRam1203a5ac = _UNK_11de9ae8;
                  DAT_1203a5b0 = _UNK_11de9aec;
                  DAT_1203a5b4 = 1;
                  DAT_1203a588 = piVar6;
                  _DAT_1203a58c = piVar6;
                  _DAT_1203a590 = piVar6;
                  piVar5 = (int *)FUN_11a8911f(&LAB_11ca8220);
                }
                piVar6 = (int *)&DAT_1203a580;
              }
              if ((iVar7 == -1) ||
                 ((((iVar7 == 0 && (piVar6[0xc] != 0)) || (piVar6[10] == 0)) ||
                  ((iVar7 = iVar7 - piVar6[0xc], iVar7 < 0 || (piVar6[9] <= iVar7))))))
              goto LAB_116fd3b2;
              piVar5 = *(int **)(piVar6[8] + (iVar7 / piVar6[10]) * 4);
              if ((piVar5 == (int *)0x0) || (piVar5[iVar7 % piVar6[10]] == 0)) goto LAB_116fd3b2;
              piVar8 = (int *)*piVar8;
            } while (piVar8 != piVar2 + 4);
          }
        }
        piVar4 = (int *)*piVar4;
      } while( true );
    }
  }
LAB_116fd3b2:
  return (uint)piVar5 & 0xffffff00;
}



/* --- CMHLevelInfo::GetManagers_1173b870 @ 1173b870 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void __thiscall CMHLevelInfo__GetManagers_1173b870(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc893c;
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  if (((*DAT_123bec7c == 0) && (iVar1 = FUN_11679e10(&local_8,"CMHLevelInfo",0), iVar1 == 0)) &&
     ((DAT_123bec74 & 1) == 0)) {
    DAT_123beca0 = 0;
    DAT_123becb0 = 0;
    DAT_123becb4 = 0;
    _DAT_123becb8 = 0;
    DAT_123becbc = 0;
    DAT_123bec74 = DAT_123bec74 | 1;
    DAT_123beca4 = 0;
    _DAT_123beca8 = 0;
    _DAT_123becac = 0;
    DAT_123bec9c = &PTR_FUN_11dc8960;
    DAT_123becc0 = _DAT_11de9ae0;
    DAT_123becc4 = _UNK_11de9ae4;
    uRam123becc8 = _UNK_11de9ae8;
    DAT_123beccc = _UNK_11de9aec;
    DAT_123becd0 = 1;
    FUN_11a8911f(&LAB_11ca9190);
  }
  iVar1 = 0;
  local_8 = &PTR_FUN_11da54a8;
  if (0 < (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x54) {
    do {
      FUN_1173b780(param_2,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x54);
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_11894cf0 @ 11894cf0 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

bool __fastcall CMHLevelInfo__GetManagers_11894cf0(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **local_8;
  
  local_8 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x18))();
  if (iVar2 < 0) {
    return false;
  }
  iVar2 = FUN_1171c3f0();
  local_8 = &PTR_FUN_11dc893c;
  iVar2 = *(int *)(iVar2 + 0x40);
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  puVar3 = (undefined4 *)*DAT_123bec7c;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0);
    if (puVar3 == (undefined4 *)0x0) {
      if ((DAT_123bec74 & 1) == 0) {
        DAT_123beca0 = 0;
        DAT_123becb0 = 0;
        DAT_123becb4 = 0;
        _DAT_123becb8 = 0;
        DAT_123becbc = 0;
        DAT_123bec74 = DAT_123bec74 | 1;
        DAT_123bec9c = &PTR_FUN_11dc8960;
        DAT_123becc0 = _DAT_11de9ae0;
        DAT_123becc4 = _UNK_11de9ae4;
        uRam123becc8 = _UNK_11de9ae8;
        DAT_123beccc = _UNK_11de9aec;
        DAT_123becd0 = 1;
        DAT_123beca4 = puVar3;
        _DAT_123beca8 = puVar3;
        _DAT_123becac = puVar3;
        FUN_11a8911f(&LAB_11cae790);
      }
      puVar3 = &DAT_123bec9c;
    }
  }
  local_8 = &PTR_FUN_11da54a8;
  if ((iVar2 != -1) &&
     ((((iVar2 != 0 || (puVar3[0xc] == 0)) && (iVar4 = puVar3[10], iVar4 != 0)) &&
      ((iVar2 = iVar2 - puVar3[0xc], -1 < iVar2 && (iVar2 < (int)puVar3[9])))))) {
    iVar1 = *(int *)(puVar3[8] + (iVar2 / iVar4) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar2 % iVar4) * 4) != 0)) {
      iVar2 = FUN_1171c3f0();
      local_8 = &PTR_FUN_11dc893c;
      iVar2 = *(int *)(iVar2 + 0x44);
      if ((DAT_123bec98 & 1) == 0) {
        DAT_123bec98 = DAT_123bec98 | 1;
        FUN_102500e0("CMHLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70cf0);
      }
      puVar3 = (undefined4 *)*DAT_123bec7c;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0);
        if (puVar3 == (undefined4 *)0x0) {
          if ((DAT_123bec74 & 1) == 0) {
            DAT_123bec74 = DAT_123bec74 | 1;
            FUN_107d6cc0();
            FUN_11a8911f(&LAB_11cae790);
          }
          puVar3 = &DAT_123bec9c;
        }
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((iVar2 != -1) && ((iVar2 != 0 || (puVar3[0xc] == 0)))) &&
          (iVar4 = puVar3[10], iVar4 != 0)) &&
         ((iVar2 = iVar2 - puVar3[0xc], -1 < iVar2 && (iVar2 < (int)puVar3[9])))) {
        iVar1 = *(int *)(puVar3[8] + (iVar2 / iVar4) * 4);
        if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar2 % iVar4) * 4) != 0)) {
          iVar2 = FUN_1171c3f0();
          local_8 = &PTR_FUN_11dc893c;
          iVar2 = *(int *)(iVar2 + 0x48);
          if ((DAT_123bec98 & 1) == 0) {
            DAT_123bec98 = DAT_123bec98 | 1;
            FUN_102500e0("CMHLevelInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70cf0);
          }
          puVar3 = (undefined4 *)*DAT_123bec7c;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0);
            if (puVar3 == (undefined4 *)0x0) {
              if ((DAT_123bec74 & 1) == 0) {
                DAT_123bec74 = DAT_123bec74 | 1;
                FUN_107d6cc0();
                FUN_11a8911f(&LAB_11cae790);
              }
              puVar3 = &DAT_123bec9c;
            }
          }
          local_8 = &PTR_FUN_11da54a8;
          if (((iVar2 != -1) &&
              (((iVar2 != 0 || (puVar3[0xc] == 0)) && (iVar4 = puVar3[10], iVar4 != 0)))) &&
             ((iVar2 = iVar2 - puVar3[0xc], -1 < iVar2 && (iVar2 < (int)puVar3[9])))) {
            iVar1 = *(int *)(puVar3[8] + (iVar2 / iVar4) * 4);
            if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar2 % iVar4) * 4) != 0)) {
              iVar2 = FUN_1171c3f0();
              iVar2 = *(int *)(iVar2 + 0x4c);
              iVar4 = FUN_107d78c0(0,"CMHLevelInfo",0);
              if ((((iVar2 != -1) && ((iVar2 != 0 || (*(int *)(iVar4 + 0x30) == 0)))) &&
                  (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
                 ((iVar2 = iVar2 - *(int *)(iVar4 + 0x30), -1 < iVar2 &&
                  (iVar2 < *(int *)(iVar4 + 0x24))))) {
                iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar2 / iVar1) * 4);
                if ((iVar4 != 0) && (*(int *)(iVar4 + (iVar2 % iVar1) * 4) != 0)) {
                  iVar2 = FUN_1171c3f0();
                  iVar2 = FUN_107d7930(*(undefined4 *)(iVar2 + 0x50));
                  return iVar2 != 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



/* --- CMHLevelInfo::GetManagers_118c5350 @ 118c5350 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// calls: CLevelResInfo::GetManagers_116b2a30, CMHLevelInfo::GetManagers_116b4620
// strings:
//   ""CMHLevelInfo""
//   ""CMHLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   calls: CLevelResInfo::GetManagers_116b2a30, CMHLevelInfo::GetManagers_116b4620
   strings:
     ""CMHLevelInfo""
     ""CMHLevelInfo::GetManagers"" */

void CMHLevelInfo__GetManagers_118c5350(undefined **param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_107d78c0(0,"CMHLevelInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  FUN_11744050();
  ppuVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dc893c;
      if ((DAT_123bec98 & 1) == 0) {
        DAT_123bec98 = DAT_123bec98 | 1;
        FUN_102500e0("CMHLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70cf0);
      }
      puVar4 = (undefined4 *)*DAT_123bec7c;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CMHLevelInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bec74 & 1) == 0) {
          DAT_123beca0 = 0;
          DAT_123becb0 = 0;
          DAT_123becb4 = 0;
          _DAT_123becb8 = 0;
          DAT_123becbc = 0;
          DAT_123bec74 = DAT_123bec74 | 1;
          DAT_123bec9c = &PTR_FUN_11dc8960;
          DAT_123becc0 = _DAT_11de9ae0;
          DAT_123becc4 = _UNK_11de9ae4;
          uRam123becc8 = _UNK_11de9ae8;
          DAT_123beccc = _UNK_11de9aec;
          DAT_123becd0 = 1;
          DAT_123beca4 = puVar4;
          _DAT_123beca8 = puVar4;
          _DAT_123becac = puVar4;
          FUN_11a8911f(&LAB_11cafd00);
        }
        puVar4 = &DAT_123bec9c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        CLevelResInfo__GetManagers_116b2a30(ppuVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  CMHLevelInfo__GetManagers_116b4620();
  return;
}



/* --- CMHLevelInfo::GetManagers_11987540 @ 11987540 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// calls: list::sort_119850d0
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   calls: list::sort_119850d0
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo""
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

undefined4 __fastcall CMHLevelInfo__GetManagers_11987540(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int *piVar13;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc893c;
  iVar10 = *(int *)(param_1 + 0x10);
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  puVar9 = (undefined4 *)*DAT_123bec7c;
  if ((puVar9 == (undefined4 *)0x0) &&
     (puVar9 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0), puVar9 == (undefined4 *)0x0))
  {
    if ((DAT_123bec74 & 1) == 0) {
      DAT_123beca0 = 0;
      DAT_123becb0 = 0;
      DAT_123becb4 = 0;
      _DAT_123becb8 = 0;
      DAT_123becbc = 0;
      DAT_123bec74 = DAT_123bec74 | 1;
      DAT_123bec9c = &PTR_FUN_11dc8960;
      DAT_123becc0 = _DAT_11de9ae0;
      DAT_123becc4 = _UNK_11de9ae4;
      uRam123becc8 = _UNK_11de9ae8;
      DAT_123beccc = _UNK_11de9aec;
      DAT_123becd0 = 1;
      DAT_123beca4 = puVar9;
      _DAT_123beca8 = puVar9;
      _DAT_123becac = puVar9;
      FUN_11a8911f(&LAB_11cb3810);
    }
    puVar9 = &DAT_123bec9c;
  }
  local_8 = &PTR_FUN_11da54a8;
  if ((iVar10 != -1) &&
     ((((iVar10 != 0 || (puVar9[0xc] == 0)) && (iVar2 = puVar9[10], iVar2 != 0)) &&
      ((iVar10 = iVar10 - puVar9[0xc], -1 < iVar10 && (iVar10 < (int)puVar9[9])))))) {
    iVar3 = *(int *)(puVar9[8] + (iVar10 / iVar2) * 4);
    if ((iVar3 != 0) && (*(int *)(iVar3 + (iVar10 % iVar2) * 4) != 0)) {
      piVar13 = (int *)(param_1 + 0x14);
      piVar8 = *(int **)(param_1 + 0x14);
      do {
        if (piVar8 == piVar13) {
          return 1;
        }
        ppuVar1 = (undefined **)(piVar8 + 3);
        list__sort_119850d0(ppuVar1,piVar13);
        ppuVar6 = (undefined **)*ppuVar1;
        while (ppuVar6 != ppuVar1) {
          ppuVar11 = (undefined **)ppuVar6[3];
          if ((undefined **)ppuVar6[3] != ppuVar6 + 3) {
            do {
              puVar4 = ppuVar11[2];
              local_8 = &PTR_FUN_11da5518;
              if ((DAT_123bdbfc & 1) == 0) {
                DAT_123bdbfc = DAT_123bdbfc | 1;
                _DAT_123bdbb4 = &DAT_123bdba4;
                DAT_123bdbb8 = &DAT_123bdba4;
                DAT_123bdba4 = 0;
                FUN_100d9260("CItemBaseInfo::GetManagers","");
                FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
                DAT_123bdba0 = (undefined4 *)FUN_100dfd90(DAT_123bdbb8);
                if (DAT_123bdba0 == (undefined4 *)0x0) {
                  DAT_123bdba0 = (undefined4 *)FUN_100dde50(4);
                  *DAT_123bdba0 = 0;
                  FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
                }
                FUN_11a8911f(&LAB_11c6e610);
              }
              puVar9 = (undefined4 *)*DAT_123bdba0;
              if ((puVar9 == (undefined4 *)0x0) &&
                 (puVar9 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0),
                 puVar9 == (undefined4 *)0x0)) {
                if ((DAT_123bdc00 & 1) == 0) {
                  DAT_123bdbc4 = 0;
                  DAT_123bdbd4 = 0;
                  DAT_123bdbd8 = 0;
                  _DAT_123bdbdc = 0;
                  DAT_123bdbe0 = 0;
                  DAT_123bdc00 = DAT_123bdc00 | 1;
                  DAT_123bdbc0 = &PTR_FUN_11da5520;
                  DAT_123bdbe4 = _DAT_11de9ae0;
                  DAT_123bdbe8 = _UNK_11de9ae4;
                  uRam123bdbec = _UNK_11de9ae8;
                  DAT_123bdbf0 = _UNK_11de9aec;
                  DAT_123bdbf4 = 1;
                  DAT_123bdbc8 = puVar9;
                  _DAT_123bdbcc = puVar9;
                  _DAT_123bdbd0 = puVar9;
                  FUN_11a8911f(&LAB_11cb37b0);
                }
                puVar9 = &DAT_123bdbc0;
              }
              if (puVar4 == (undefined *)0xffffffff) {
                return 0;
              }
              if ((puVar4 == (undefined *)0x0) && (puVar9[0xc] != 0)) {
                return 0;
              }
              if (puVar9[10] == 0) {
                return 0;
              }
              iVar10 = (int)puVar4 - puVar9[0xc];
              if (iVar10 < 0) {
                return 0;
              }
              if ((int)puVar9[9] <= iVar10) {
                return 0;
              }
              iVar2 = *(int *)(puVar9[8] + (iVar10 / (int)puVar9[10]) * 4);
              if (iVar2 == 0) {
                return 0;
              }
              if (*(int *)(iVar2 + (iVar10 % (int)puVar9[10]) * 4) == 0) {
                return 0;
              }
              if ((float)ppuVar11[3] < DAT_11de9890) {
                return 0;
              }
              if (DAT_11de9918 < (float)ppuVar11[3]) {
                return 0;
              }
              puVar4 = ppuVar11[2];
              local_8 = &PTR_FUN_11da5518;
              if ((DAT_123bdbfc & 1) == 0) {
                DAT_123bdbfc = DAT_123bdbfc | 1;
                _DAT_123bdbb4 = &DAT_123bdba4;
                DAT_123bdbb8 = &DAT_123bdba4;
                DAT_123bdba4 = 0;
                FUN_100d9260("CItemBaseInfo::GetManagers","");
                FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
                DAT_123bdba0 = (undefined4 *)FUN_100dfd90(DAT_123bdbb8);
                if (DAT_123bdba0 == (undefined4 *)0x0) {
                  DAT_123bdba0 = (undefined4 *)FUN_100dde50(4);
                  *DAT_123bdba0 = 0;
                  FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
                }
                FUN_11a8911f(&LAB_11c6e610);
              }
              puVar9 = (undefined4 *)*DAT_123bdba0;
              if ((puVar9 == (undefined4 *)0x0) &&
                 (puVar9 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0),
                 puVar9 == (undefined4 *)0x0)) {
                if ((DAT_123bdc00 & 1) == 0) {
                  DAT_123bdbc4 = 0;
                  DAT_123bdbd4 = 0;
                  DAT_123bdbd8 = 0;
                  _DAT_123bdbdc = 0;
                  DAT_123bdbe0 = 0;
                  DAT_123bdc00 = DAT_123bdc00 | 1;
                  DAT_123bdbc0 = &PTR_FUN_11da5520;
                  DAT_123bdbe4 = _DAT_11de9ae0;
                  DAT_123bdbe8 = _UNK_11de9ae4;
                  uRam123bdbec = _UNK_11de9ae8;
                  DAT_123bdbf0 = _UNK_11de9aec;
                  DAT_123bdbf4 = 1;
                  DAT_123bdbc8 = puVar9;
                  _DAT_123bdbcc = puVar9;
                  _DAT_123bdbd0 = puVar9;
                  FUN_11a8911f(&LAB_11cb37b0);
                }
                puVar9 = &DAT_123bdbc0;
              }
              local_8 = &PTR_FUN_11da54a8;
              if (((puVar4 == (undefined *)0xffffffff) ||
                  (((puVar4 == (undefined *)0x0 && (puVar9[0xc] != 0)) || (puVar9[10] == 0)))) ||
                 ((iVar10 = (int)puVar4 - puVar9[0xc], iVar10 < 0 || ((int)puVar9[9] <= iVar10)))) {
LAB_119879f6:
                puVar9 = (undefined4 *)ppuVar11[1];
                ppuVar12 = (undefined **)*ppuVar11;
                *puVar9 = ppuVar12;
                ppuVar12[1] = (undefined *)puVar9;
                FUN_10c3d5d0(ppuVar11);
              }
              else {
                iVar2 = *(int *)(puVar9[8] + (iVar10 / (int)puVar9[10]) * 4);
                if (((iVar2 == 0) ||
                    ((*(int *)(iVar2 + (iVar10 % (int)puVar9[10]) * 4) == 0 ||
                     (((float)ppuVar11[3] < 0.0 && (DAT_11de9918 < (float)ppuVar11[3])))))) ||
                   ((int)ppuVar11[4] < 1)) goto LAB_119879f6;
                ppuVar12 = (undefined **)*ppuVar11;
              }
              ppuVar11 = ppuVar12;
            } while (ppuVar12 != ppuVar6 + 3);
          }
          if ((undefined **)ppuVar6[3] == ppuVar6 + 3) {
            local_8 = (undefined **)*ppuVar6;
            ppuVar11 = ppuVar6 + 3;
            puVar9 = (undefined4 *)ppuVar6[1];
            *puVar9 = local_8;
            local_8[1] = (undefined *)puVar9;
            ppuVar12 = (undefined **)*ppuVar11;
            while (ppuVar12 != ppuVar11) {
              ppuVar5 = (undefined **)*ppuVar12;
              FUN_10c3d5d0(ppuVar12);
              ppuVar12 = ppuVar5;
            }
            *ppuVar11 = (undefined *)ppuVar11;
            ppuVar6[4] = (undefined *)ppuVar11;
            FUN_10c3d5d0(ppuVar6);
            ppuVar6 = local_8;
          }
          else {
            ppuVar6 = (undefined **)*ppuVar6;
          }
        }
        if ((int *)*piVar13 == piVar13) {
          puVar9 = (undefined4 *)piVar8[1];
          piVar7 = (int *)*piVar8;
          *puVar9 = piVar7;
          piVar7[1] = (int)puVar9;
          FUN_11988330();
          FUN_10c3d5d0(piVar8);
          piVar8 = piVar7;
        }
        else {
          piVar8 = (int *)*piVar8;
        }
      } while( true );
    }
  }
  return 0;
}



/* --- CMHLevelInfo::GetManagers_119ec430 @ 119ec430 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo""
//   ""CMHLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo""
     ""CMHLevelInfo::GetManagers"" */

void __fastcall CMHLevelInfo__GetManagers_119ec430(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_107d78c0(0,"CMHLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11dc893c;
      if ((DAT_123bec98 & 1) == 0) {
        DAT_123bec98 = DAT_123bec98 | 1;
        FUN_102500e0("CMHLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70cf0);
      }
      puVar3 = (undefined4 *)*DAT_123bec7c;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_11679e10(&local_c,"CMHLevelInfo",0);
        if (puVar3 == (undefined4 *)0x0) {
          if ((DAT_123bec74 & 1) == 0) {
            DAT_123beca0 = 0;
            DAT_123becb0 = 0;
            DAT_123becb4 = 0;
            _DAT_123becb8 = 0;
            DAT_123becbc = 0;
            DAT_123bec74 = DAT_123bec74 | 1;
            DAT_123bec9c = &PTR_FUN_11dc8960;
            DAT_123becc0 = _DAT_11de9ae0;
            DAT_123becc4 = _UNK_11de9ae4;
            uRam123becc8 = _UNK_11de9ae8;
            DAT_123beccc = _UNK_11de9aec;
            DAT_123becd0 = 1;
            DAT_123beca4 = puVar3;
            _DAT_123beca8 = puVar3;
            _DAT_123becac = puVar3;
            FUN_11a8911f(&LAB_11cb51e0);
          }
          puVar3 = &DAT_123bec9c;
        }
      }
      if ((iVar4 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(puVar3[5] + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && (local_c[8] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x128);
        if (piVar1 == *(int **)(param_1 + 300)) {
          FUN_118c54f0(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_119f3f10 @ 119f3f10 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo""
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

void __fastcall CMHLevelInfo__GetManagers_119f3f10(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc893c;
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  if (((*DAT_123bec7c == 0) && (iVar1 = FUN_11679e10(&local_8,"CMHLevelInfo",0), iVar1 == 0)) &&
     ((DAT_123bec74 & 1) == 0)) {
    DAT_123beca0 = 0;
    DAT_123becb0 = 0;
    DAT_123becb4 = 0;
    _DAT_123becb8 = 0;
    DAT_123becbc = 0;
    DAT_123bec74 = DAT_123bec74 | 1;
    DAT_123beca4 = 0;
    _DAT_123beca8 = 0;
    _DAT_123becac = 0;
    DAT_123bec9c = &PTR_FUN_11dc8960;
    DAT_123becc0 = _DAT_11de9ae0;
    DAT_123becc4 = _UNK_11de9ae4;
    uRam123becc8 = _UNK_11de9ae8;
    DAT_123beccc = _UNK_11de9aec;
    DAT_123becd0 = 1;
    FUN_11a8911f(&LAB_11cb5360);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 4 != 0) {
    do {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb5300);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 4));
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_11a008c0 @ 11a008c0 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CMHLevelInfo"" */

void __fastcall CMHLevelInfo__GetManagers_11a008c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != *(int *)(param_1 + 0x18)) {
    do {
      local_8 = &PTR_FUN_11dc893c;
      if ((DAT_123bec98 & 1) == 0) {
        DAT_123bec98 = DAT_123bec98 | 1;
        _DAT_123bec90 = &DAT_123bec80;
        DAT_123bec94 = &DAT_123bec80;
        DAT_123bec80 = 0;
        FUN_100d9260("CMHLevelInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bec7c = (int *)FUN_100dfd90(DAT_123bec94);
        if (DAT_123bec7c == (int *)0x0) {
          DAT_123bec7c = (int *)FUN_100dde50(4);
          *DAT_123bec7c = 0;
          FUN_100dfdc0(DAT_123bec94,DAT_123bec7c);
        }
        FUN_11a8911f(&LAB_11c70cf0);
      }
      if (((*DAT_123bec7c == 0) && (iVar1 = FUN_11679e10(&local_8,"CMHLevelInfo",0), iVar1 == 0)) &&
         ((DAT_123bec74 & 1) == 0)) {
        DAT_123beca0 = 0;
        DAT_123becb0 = 0;
        DAT_123becb4 = 0;
        _DAT_123becb8 = 0;
        DAT_123becbc = 0;
        DAT_123bec74 = DAT_123bec74 | 1;
        DAT_123beca4 = 0;
        _DAT_123beca8 = 0;
        _DAT_123becac = 0;
        DAT_123bec9c = &PTR_FUN_11dc8960;
        DAT_123becc0 = _DAT_11de9ae0;
        DAT_123becc4 = _UNK_11de9ae4;
        uRam123becc8 = _UNK_11de9ae8;
        DAT_123beccc = _UNK_11de9aec;
        DAT_123becd0 = 1;
        FUN_11a8911f(&LAB_11cb58c0);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x18));
  }
  return;
}



/* --- CMHLevelInfo::GetManagers_11a08370 @ 11a08370 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

undefined4 * CMHLevelInfo__GetManagers_11a08370(void)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc893c;
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  puVar1 = (undefined4 *)*DAT_123bec7c;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bec74 & 1) == 0) {
        DAT_123beca0 = 0;
        DAT_123becb0 = 0;
        DAT_123becb4 = 0;
        _DAT_123becb8 = 0;
        DAT_123becbc = 0;
        DAT_123bec74 = DAT_123bec74 | 1;
        DAT_123beca4 = 0;
        _DAT_123beca8 = 0;
        _DAT_123becac = 0;
        DAT_123bec9c = &PTR_FUN_11dc8960;
        DAT_123becc0 = _DAT_11de9ae0;
        DAT_123becc4 = _UNK_11de9ae4;
        uRam123becc8 = _UNK_11de9ae8;
        DAT_123beccc = _UNK_11de9aec;
        DAT_123becd0 = 1;
        FUN_11a8911f(&LAB_11cb5d40);
      }
      puVar1 = &DAT_123bec9c;
    }
  }
  return puVar1;
}



/* --- CMHLevelInfo::GetManagers_11a4aaa0 @ 11a4aaa0 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

undefined4 * CMHLevelInfo__GetManagers_11a4aaa0(void)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc893c;
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  puVar1 = (undefined4 *)*DAT_123bec7c;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0);
    if (puVar1 == (undefined4 *)0x0) {
      if ((DAT_123bec74 & 1) == 0) {
        DAT_123beca0 = 0;
        DAT_123becb0 = 0;
        DAT_123becb4 = 0;
        _DAT_123becb8 = 0;
        DAT_123becbc = 0;
        DAT_123bec74 = DAT_123bec74 | 1;
        DAT_123beca4 = 0;
        _DAT_123beca8 = 0;
        _DAT_123becac = 0;
        DAT_123bec9c = &PTR_FUN_11dc8960;
        DAT_123becc0 = _DAT_11de9ae0;
        DAT_123becc4 = _UNK_11de9ae4;
        uRam123becc8 = _UNK_11de9ae8;
        DAT_123beccc = _UNK_11de9aec;
        DAT_123becd0 = 1;
        FUN_11a8911f(&LAB_11cb6c90);
      }
      puVar1 = &DAT_123bec9c;
    }
  }
  return puVar1;
}



/* --- CMHLevelInfo::GetManagers_11a4b300 @ 11a4b300 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// calls: CQualifierMatchInfo::GetManagers
// strings:
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""
//   ""CGuildMatchInfo""
//   ""CQualifierMatchInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   calls: CQualifierMatchInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo""
     ""CGuildMatchInfo""
     ""CQualifierMatchInfo"" */

undefined4 * CMHLevelInfo__GetManagers_11a4b300(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc893c;
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  if (((*DAT_123bec7c == 0) && (iVar1 = FUN_11679e10(&local_8,"CMHLevelInfo",0), iVar1 == 0)) &&
     ((DAT_123bec74 & 1) == 0)) {
    DAT_123beca0 = 0;
    DAT_123becb0 = 0;
    DAT_123becb4 = 0;
    _DAT_123becb8 = 0;
    DAT_123becbc = 0;
    DAT_123bec74 = DAT_123bec74 | 1;
    DAT_123beca4 = 0;
    _DAT_123beca8 = 0;
    _DAT_123becac = 0;
    DAT_123bec9c = &PTR_FUN_11dc8960;
    DAT_123becc0 = _DAT_11de9ae0;
    DAT_123becc4 = _UNK_11de9ae4;
    uRam123becc8 = _UNK_11de9ae8;
    DAT_123beccc = _UNK_11de9aec;
    DAT_123becd0 = 1;
    FUN_11a8911f(&LAB_11cb6d50);
  }
  local_8 = &PTR_FUN_11da54a8;
  FUN_109445a0(0,"CGuildMatchInfo",0);
  CQualifierMatchInfo__GetManagers(0,"CQualifierMatchInfo",0);
  local_8 = &PTR_FUN_11dc893c;
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  puVar2 = (undefined4 *)*DAT_123bec7c;
  if ((puVar2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0), puVar2 == (undefined4 *)0x0))
  {
    if ((DAT_123bec74 & 1) == 0) {
      DAT_123beca0 = 0;
      DAT_123becb0 = 0;
      DAT_123becb4 = 0;
      _DAT_123becb8 = 0;
      DAT_123becbc = 0;
      DAT_123bec74 = DAT_123bec74 | 1;
      DAT_123beca4 = 0;
      _DAT_123beca8 = 0;
      _DAT_123becac = 0;
      DAT_123bec9c = &PTR_FUN_11dc8960;
      DAT_123becc0 = _DAT_11de9ae0;
      DAT_123becc4 = _UNK_11de9ae4;
      uRam123becc8 = _UNK_11de9ae8;
      DAT_123beccc = _UNK_11de9aec;
      DAT_123becd0 = 1;
      FUN_11a8911f(&LAB_11cb6d50);
    }
    puVar2 = &DAT_123bec9c;
  }
  return puVar2;
}



/* --- CMHLevelInfo::GetManagers_11a6b7f0 @ 11a6b7f0 --- */
// [RE-AUTO c3]
// id: CMHLevelInfo::GetManagers
// calls: CLeagueSchedule::GetManagers
// strings:
//   ""CLeagueSchedule""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""
//   ""CLeagueDetail::GetManagers""
//   ""CLeagueDetail""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMHLevelInfo::GetManagers
   calls: CLeagueSchedule::GetManagers
   strings:
     ""CLeagueSchedule""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo""
     ""CLeagueDetail::GetManagers""
     ""CLeagueDetail"" */

void __fastcall CMHLevelInfo__GetManagers_11a6b7f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined **local_10;
  int *local_c;
  undefined1 local_5;
  
  iVar8 = param_1[5];
  iVar4 = CLeagueSchedule__GetManagers(0,"CLeagueSchedule",0);
  if (((iVar8 != -1) &&
      (((iVar8 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar4 + 0x28), iVar2 != 0)))) &&
     ((iVar8 = iVar8 - *(int *)(iVar4 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar8 / iVar2) * 4);
    if (iVar4 != 0) {
      local_c = *(int **)(iVar4 + (iVar8 % iVar2) * 4);
      goto LAB_11a6b84e;
    }
  }
  local_c = (int *)0x0;
LAB_11a6b84e:
  uVar7 = 0;
  if (param_1[0x2d] - param_1[0x2c] >> 2 != 0) {
    do {
      local_10 = &PTR_FUN_11dc893c;
      iVar8 = *(int *)(param_1[0x2c] + uVar7 * 4);
      if ((DAT_123bec98 & 1) == 0) {
        DAT_123bec98 = DAT_123bec98 | 1;
        FUN_102500e0("CMHLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70cf0);
      }
      puVar5 = (undefined4 *)*DAT_123bec7c;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&local_10,"CMHLevelInfo",0),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_123bec74 & 1) == 0) {
          DAT_123beca0 = 0;
          DAT_123becb0 = 0;
          DAT_123becb4 = 0;
          _DAT_123becb8 = 0;
          DAT_123becbc = 0;
          DAT_123bec74 = DAT_123bec74 | 1;
          DAT_123bec9c = &PTR_FUN_11dc8960;
          DAT_123becc0 = _DAT_11de9ae0;
          DAT_123becc4 = _UNK_11de9ae4;
          uRam123becc8 = _UNK_11de9ae8;
          DAT_123beccc = _UNK_11de9aec;
          DAT_123becd0 = 1;
          DAT_123beca4 = puVar5;
          _DAT_123beca8 = puVar5;
          _DAT_123becac = puVar5;
          FUN_11a8911f(&LAB_11cb76d0);
        }
        puVar5 = &DAT_123bec9c;
      }
      local_10 = &PTR_FUN_11da54a8;
      if ((iVar8 != -1) &&
         ((((iVar8 != 0 || (puVar5[0xc] == 0)) && (puVar5[10] != 0)) &&
          ((iVar8 = iVar8 - puVar5[0xc], -1 < iVar8 && (iVar8 < (int)puVar5[9])))))) {
        iVar4 = *(int *)(puVar5[8] + (iVar8 / (int)puVar5[10]) * 4);
        if ((iVar4 != 0) && (iVar8 = *(int *)(iVar4 + (iVar8 % (int)puVar5[10]) * 4), iVar8 != 0)) {
          *(undefined4 *)(iVar8 + 0x264) = *(undefined4 *)((int)local_c + 0x14);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(param_1[0x2d] - param_1[0x2c] >> 2));
  }
  iVar8 = (**(code **)(*param_1 + 0x18))();
  local_10 = &PTR_FUN_11d667b4;
  if ((DAT_123a2040 & 1) == 0) {
    DAT_123a2040 = DAT_123a2040 | 1;
    FUN_102500e0("CLeagueDetail::GetManagers");
    FUN_11a8911f(&LAB_11cb4020);
  }
  puVar6 = (undefined *)*DAT_123a2024;
  if ((puVar6 == (undefined *)0x0) &&
     (puVar6 = (undefined *)FUN_11679e10(&local_10,"CLeagueDetail",0), puVar6 == (undefined *)0x0))
  {
    if ((DAT_123a21e4 & 1) == 0) {
      DAT_123a21b0 = 0;
      DAT_123a21c0 = 0;
      DAT_123a21c4 = 0;
      _DAT_123a21c8 = 0;
      DAT_123a21cc = 0;
      DAT_123a21e4 = DAT_123a21e4 | 1;
      _DAT_123a21ac = &PTR_FUN_11d667e8;
      DAT_123a21d0 = _DAT_11de9ae0;
      DAT_123a21d4 = _UNK_11de9ae4;
      uRam123a21d8 = _UNK_11de9ae8;
      DAT_123a21dc = _UNK_11de9aec;
      DAT_123a21e0 = 1;
      DAT_123a21b4 = puVar6;
      _DAT_123a21b8 = puVar6;
      _DAT_123a21bc = puVar6;
      FUN_11a8911f(&LAB_11cb7610);
    }
    puVar6 = &DAT_123a21ac;
  }
  local_10 = &PTR_FUN_11da54a8;
  if (((iVar8 != -1) &&
      (((iVar8 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
       (iVar4 = *(int *)(puVar6 + 0x28), iVar4 != 0)))) &&
     ((iVar8 = iVar8 - *(int *)(puVar6 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(puVar6 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar8 / iVar4) * 4);
    if ((iVar2 != 0) && (iVar8 = *(int *)(iVar2 + (iVar8 % iVar4) * 4), iVar8 != 0)) {
      piVar1 = param_1 + 0x30;
      FUN_11a69550(*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x18),&local_5);
      local_10 = (undefined **)param_1[0x31];
      ppuVar3 = (undefined **)*piVar1;
      if (ppuVar3 != local_10) {
        iVar8 = 0;
        local_c = (int *)(((int)local_10 - (int)ppuVar3) / 0xf8);
        for (iVar4 = (int)local_c; iVar4 != 1; iVar4 = iVar4 >> 1) {
          iVar8 = iVar8 + 1;
        }
        FUN_11a69d20(ppuVar3,local_10,0,iVar8 * 2,FUN_11a6bd30);
        if ((int)local_c < 0x11) {
          FUN_11a69cd0(ppuVar3,local_10,0,FUN_11a6bd30);
        }
        else {
          FUN_11a69cd0(ppuVar3,ppuVar3 + 0x3e0,0,FUN_11a6bd30);
          FUN_11a6a380(ppuVar3 + 0x3e0,local_10,FUN_11a6bd30);
        }
      }
      if (0 < (param_1[0x31] - *piVar1) / 0xf8 + -1) {
        local_c = param_1 + 0x14;
        iVar8 = 0;
        local_10 = (undefined **)(param_1 + 0x20);
        iVar4 = 0;
        do {
          FUN_10a1a390(local_c);
          FUN_10a1a3c0(local_10);
          FUN_10a1a390(local_c);
          FUN_10a1a3c0(local_10);
          FUN_10a1a330(*piVar1 + iVar8 + 0xf8);
          iVar4 = iVar4 + 1;
          iVar8 = iVar8 + 0xf8;
        } while (iVar4 < (param_1[0x31] - *piVar1) / 0xf8 + -1);
      }
    }
  }
  return;
}



