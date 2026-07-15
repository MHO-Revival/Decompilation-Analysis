// ===== class CHunterStarLevelInfo  (2 recovered methods) =====

/* --- CHunterStarLevelInfo::GetManagers @ 108baa40 --- */
// [RE-AUTO c3]
// id: CHunterStarLevelInfo::GetManagers
// strings:
//   ""CHunterStarLevelInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterStarLevelInfo::GetManagers
   strings:
     ""CHunterStarLevelInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHunterStarLevelInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7adc & 1) == 0) {
    DAT_123c7adc = DAT_123c7adc | 1;
    _DAT_123c7af4 = &DAT_123c7ae4;
    DAT_123c7af8 = &DAT_123c7ae4;
    DAT_123c7ae4 = 0;
    FUN_100d83d0("CHunterStarLevelInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c75390);
  }
  return DAT_123c7ae0;
}



/* --- CHunterStarLevelInfo::GetManagers_118ac740 @ 118ac740 --- */
// [RE-AUTO c3]
// id: CHunterStarLevelInfo::GetManagers
// strings:
//   ""CHunterStarLevelInfo::GetManagers""
//   ""CHunterStarLevelInfo""
//   ""CHunterBranchLevelInfo""
//   ""CHunterChallengeCardInfo::GetManagers""
//   ""CHunterChallengeCardInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterStarLevelInfo::GetManagers
   strings:
     ""CHunterStarLevelInfo::GetManagers""
     ""CHunterStarLevelInfo""
     ""CHunterBranchLevelInfo""
     ""CHunterChallengeCardInfo::GetManagers""
     ""CHunterChallengeCardInfo"" */

void __fastcall CHunterStarLevelInfo__GetManagers_118ac740(int param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined **local_c;
  undefined1 local_5;
  
  local_c = &PTR_FUN_11dd58d0;
  iVar7 = *(int *)(param_1 + 0x20);
  if ((DAT_123c7adc & 1) == 0) {
    DAT_123c7adc = DAT_123c7adc | 1;
    FUN_102500e0("CHunterStarLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c75390);
  }
  puVar3 = (undefined *)*DAT_123c7ae0;
  if ((puVar3 == (undefined *)0x0) &&
     (puVar3 = (undefined *)FUN_11679e10(&local_c,"CHunterStarLevelInfo",0),
     puVar3 == (undefined *)0x0)) {
    if ((DAT_123c7c3c & 1) == 0) {
      DAT_123c7c44 = 0;
      DAT_123c7c54 = 0;
      uRam123c7c58 = 0;
      _DAT_123c7c5c = 0;
      DAT_123c7c60 = 0;
      DAT_123c7c3c = DAT_123c7c3c | 1;
      _DAT_123c7c40 = &PTR_FUN_11dd5a18;
      DAT_123c7c64 = _DAT_11de9ae0;
      DAT_123c7c68 = _UNK_11de9ae4;
      uRam123c7c6c = _UNK_11de9ae8;
      DAT_123c7c70 = _UNK_11de9aec;
      DAT_123c7c74 = 1;
      DAT_123c7c48 = puVar3;
      _DAT_123c7c4c = puVar3;
      _DAT_123c7c50 = puVar3;
      FUN_11a8911f(&LAB_11caf270);
    }
    puVar3 = &DAT_123c7c40;
  }
  local_c = &PTR_FUN_11da54a8;
  if (((iVar7 != -1) &&
      (((iVar7 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
       (iVar4 = *(int *)(puVar3 + 0x28), iVar4 != 0)))) &&
     ((iVar7 = iVar7 - *(int *)(puVar3 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(puVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar7 / iVar4) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar7 % iVar4) * 4) != 0)) {
      FUN_118aac00(*(undefined4 *)(param_1 + 0x10));
      if (*(int *)(param_1 + 0x28) != 0) {
        iVar7 = *(int *)(param_1 + 0x20);
        local_c = &PTR_FUN_11dd58d0;
        if ((DAT_123c7adc & 1) == 0) {
          DAT_123c7adc = DAT_123c7adc | 1;
          FUN_102500e0("CHunterStarLevelInfo::GetManagers");
          FUN_11a8911f(&LAB_11c75390);
        }
        puVar3 = (undefined *)*DAT_123c7ae0;
        if ((puVar3 == (undefined *)0x0) &&
           (puVar3 = (undefined *)FUN_11679e10(&local_c,"CHunterStarLevelInfo",0),
           puVar3 == (undefined *)0x0)) {
          if ((DAT_123c7c3c & 1) == 0) {
            DAT_123c7c3c = DAT_123c7c3c | 1;
            FUN_108c7c90();
            FUN_11a8911f(&LAB_11caf270);
          }
          puVar3 = &DAT_123c7c40;
        }
        local_c = &PTR_FUN_11da54a8;
        if (iVar7 == -1) {
          return;
        }
        if ((iVar7 == 0) && (*(int *)(puVar3 + 0x30) != 0)) {
          return;
        }
        if (*(int *)(puVar3 + 0x28) == 0) {
          return;
        }
        iVar7 = iVar7 - *(int *)(puVar3 + 0x30);
        if (iVar7 < 0) {
          return;
        }
        if (*(int *)(puVar3 + 0x24) <= iVar7) {
          return;
        }
        iVar4 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar7 / *(int *)(puVar3 + 0x28)) * 4);
        if (iVar4 == 0) {
          return;
        }
        if (*(int *)(iVar4 + (iVar7 % *(int *)(puVar3 + 0x28)) * 4) == 0) {
          return;
        }
        FUN_118aac40(*(undefined4 *)(param_1 + 0x10));
      }
      iVar7 = *(int *)(param_1 + 0x1c);
      if ((0 < iVar7) && (*(int *)(param_1 + 0x24) != 0)) {
        iVar4 = FUN_108c68e0(0,"CHunterBranchLevelInfo",0);
        if (iVar7 == -1) {
          return;
        }
        if ((iVar7 == 0) && (*(int *)(iVar4 + 0x30) != 0)) {
          return;
        }
        if (*(int *)(iVar4 + 0x28) == 0) {
          return;
        }
        iVar7 = iVar7 - *(int *)(iVar4 + 0x30);
        if (iVar7 < 0) {
          return;
        }
        if (*(int *)(iVar4 + 0x24) <= iVar7) {
          return;
        }
        iVar1 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar7 / *(int *)(iVar4 + 0x28)) * 4);
        if (iVar1 == 0) {
          return;
        }
        if (*(int *)(iVar1 + (iVar7 % *(int *)(iVar4 + 0x28)) * 4) == 0) {
          return;
        }
        cVar2 = FUN_118599b0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x10));
        if (cVar2 == '\0') {
          return;
        }
      }
      if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
        uVar8 = 0;
        uVar5 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2;
        if (uVar5 != 0) {
          while( true ) {
            local_c = &PTR_FUN_11dd58b8;
            iVar7 = *(int *)(*(int *)(param_1 + 0x2c) + uVar8 * 4);
            if ((DAT_123bfb7c & 1) == 0) {
              DAT_123bfb7c = DAT_123bfb7c | 1;
              FUN_102500e0("CHunterChallengeCardInfo::GetManagers");
              FUN_11a8911f(&LAB_11c752a0);
            }
            puVar6 = (undefined4 *)*DAT_123bfb60;
            if ((puVar6 == (undefined4 *)0x0) &&
               (puVar6 = (undefined4 *)FUN_11679e10(&local_c,"CHunterChallengeCardInfo",0),
               puVar6 == (undefined4 *)0x0)) {
              if ((DAT_123bfb2c & 1) == 0) {
                DAT_123bfaf8 = 0;
                DAT_123bfb08 = 0;
                DAT_123bfb0c = 0;
                _DAT_123bfb10 = 0;
                DAT_123bfb14 = 0;
                DAT_123bfb2c = DAT_123bfb2c | 1;
                DAT_123bfaf4 = &PTR_FUN_11dd5afc;
                DAT_123bfb18 = _DAT_11de9ae0;
                DAT_123bfb1c = _UNK_11de9ae4;
                uRam123bfb20 = _UNK_11de9ae8;
                DAT_123bfb24 = _UNK_11de9aec;
                DAT_123bfb28 = 1;
                DAT_123bfafc = puVar6;
                _DAT_123bfb00 = puVar6;
                _DAT_123bfb04 = puVar6;
                FUN_11a8911f(&LAB_11caf210);
              }
              puVar6 = &DAT_123bfaf4;
            }
            local_c = &PTR_FUN_11da54a8;
            if ((iVar7 == -1) ||
               ((((iVar7 == 0 && (puVar6[0xc] != 0)) || (puVar6[10] == 0)) ||
                ((iVar7 = iVar7 - puVar6[0xc], iVar7 < 0 || ((int)puVar6[9] <= iVar7)))))) break;
            iVar4 = *(int *)(puVar6[8] + (iVar7 / (int)puVar6[10]) * 4);
            if (iVar4 == 0) {
              return;
            }
            iVar7 = *(int *)(iVar4 + (iVar7 % (int)puVar6[10]) * 4);
            if (iVar7 == 0) {
              return;
            }
            puVar6 = *(undefined4 **)(iVar7 + 0xa4);
            if (puVar6 == *(undefined4 **)(iVar7 + 0xa8)) {
              FUN_10109320(puVar6,param_1 + 0x10,&local_5,1,1);
            }
            else {
              *puVar6 = *(undefined4 *)(param_1 + 0x10);
              *(int *)(iVar7 + 0xa4) = *(int *)(iVar7 + 0xa4) + 4;
            }
            uVar8 = uVar8 + 1;
            if (uVar5 <= uVar8) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}



