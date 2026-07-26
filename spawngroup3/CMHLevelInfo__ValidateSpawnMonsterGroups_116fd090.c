
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   id: CMHLevelInfo::GetManagers
   strings:
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo""
     ""CSpawnMonsterGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CSpawnMonsterGroupInfo"" */

uint __fastcall CMHLevelInfo__ValidateSpawnMonsterGroups(int *param_1)

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
    StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  piVar4 = (int *)*DAT_123bec7c;
  piVar5 = DAT_123bec7c;
  if ((piVar4 == (int *)0x0) &&
     (piVar4 = (int *)CInfoManager__FindByName(&local_8,"CMHLevelInfo",0), piVar5 = piVar4,
     piVar4 == (int *)0x0)) {
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
                 (piVar6 = (int *)CInfoManager__FindByName(&local_8,"CSpawnMonsterGroupInfo",0),
                 piVar5 = piVar6, piVar6 == (int *)0x0)) {
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

