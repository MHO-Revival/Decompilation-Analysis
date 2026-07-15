// ===== class CSpawnMonsterGroupInfo  (3 recovered methods) =====

/* --- CSpawnMonsterGroupInfo::GetManagers @ 10e95ba0 --- */
// [RE-AUTO c3]
// id: CSpawnMonsterGroupInfo::GetManagers
// strings:
//   ""CSpawnMonsterGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo::GetManagers"" */

undefined * CSpawnMonsterGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cf489c;
  if (param_3 == 0) {
    if ((DAT_12039bf4 & 1) == 0) {
      DAT_12039bf4 = DAT_12039bf4 | 1;
      FUN_102500e0("CSpawnMonsterGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c8fbc0);
    }
    if ((undefined *)*DAT_12039bd8 != (undefined *)0x0) {
      return (undefined *)*DAT_12039bd8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203a5b8 & 1) == 0) {
      DAT_1203a5b8 = DAT_1203a5b8 | 1;
      FUN_10e96460();
      FUN_11a8911f(&LAB_11c8f950);
    }
    puVar1 = &DAT_1203a580;
  }
  return puVar1;
}



/* --- CSpawnMonsterGroupInfo::GetManagers_10e9ae20 @ 10e9ae20 --- */
// [RE-AUTO c3]
// id: CSpawnMonsterGroupInfo::GetManagers
// strings:
//   ""CSpawnMonsterGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo::GetManagers"" */

undefined4 CSpawnMonsterGroupInfo__GetManagers_10e9ae20(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12039bf4 & 1) == 0) {
      DAT_12039bf4 = DAT_12039bf4 | 1;
      FUN_102500e0("CSpawnMonsterGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c8fbc0);
    }
    return *DAT_12039bd8;
  }
  return 0;
}



/* --- CSpawnMonsterGroupInfo::GetManagers_116fd440 @ 116fd440 --- */
// [RE-AUTO c3]
// id: CSpawnMonsterGroupInfo::GetManagers
// strings:
//   ""CMHLevelInfo""
//   ""CSpawnMonsterGroupInfo::GetManagers""
//   ""CSpawnMonsterGroupInfo""

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CMHLevelInfo""
     ""CSpawnMonsterGroupInfo::GetManagers""
     ""CSpawnMonsterGroupInfo"" */

undefined1 __thiscall
CSpawnMonsterGroupInfo__GetManagers_116fd440
          (int param_1,undefined4 param_2,undefined4 param_3,undefined **param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *******pppppppiVar4;
  int iVar5;
  undefined *puVar6;
  int *******pppppppiVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 local_94 [4];
  char local_90;
  undefined1 local_8c [4];
  char local_88;
  undefined1 local_84 [4];
  char local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  undefined4 local_6c;
  int iStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  int local_5c;
  undefined4 local_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int local_44;
  undefined1 local_40;
  int local_3c;
  undefined4 local_38;
  int *local_34;
  int local_30;
  int iStack_2c;
  int *piStack_28;
  int *piStack_24;
  int local_20;
  int *******local_14;
  int *******local_10;
  int local_8;
  
  iVar8 = *(int *)(param_1 + 0x10);
  local_3c = param_1;
  iVar5 = FUN_107d78c0(0,"CMHLevelInfo",0);
  if ((iVar8 != -1) &&
     ((((iVar8 != 0 || (*(int *)(iVar5 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar5 + 0x28), iVar2 != 0)) &&
      ((iVar8 = iVar8 - *(int *)(iVar5 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(iVar5 + 0x24)))))))
  {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar8 / iVar2) * 4);
    if ((iVar5 != 0) && (local_7c = *(int *)(iVar5 + (iVar8 % iVar2) * 4), local_7c != 0)) {
      local_74 = FUN_116ae770(param_4);
      piVar10 = *(int **)(param_1 + 0x18);
      puStack_64 = &local_6c;
      local_70 = (int *)(param_1 + 0x18);
      local_6c = 0;
      iStack_68 = 0;
      local_5c = 0;
      puStack_60 = puStack_64;
      local_34 = piVar10;
      if (piVar10 != local_70) {
        do {
          piVar9 = (int *)piVar10[4];
          puStack_4c = &local_54;
          local_44 = 0;
          local_54 = 0;
          iStack_50 = 0;
          local_40 = param_3._3_1_;
          puStack_48 = puStack_4c;
          local_34 = piVar10;
          if (piVar9 != piVar10 + 4) {
            do {
              piStack_28 = &local_30;
              local_20 = 0;
              param_4 = (undefined **)piVar9[2];
              local_8 = piVar10[2];
              local_30 = 0;
              iStack_2c = 0;
              piStack_24 = piStack_28;
              FUN_116f9600(&local_8,&param_4);
              local_78 = FUN_116f9500();
              iVar8 = piVar9[6];
              iVar5 = FUN_100ee450();
              piVar3 = (int *)piVar9[4];
              iVar8 = (int)((double)iVar5 * _DAT_11de98f0 * (double)iVar8);
              while( true ) {
                if (piVar3 == piVar9 + 4) goto LAB_116fd921;
                piVar1 = piVar3 + 4;
                if (iVar8 < *piVar1) break;
                piVar3 = (int *)*piVar3;
                iVar8 = iVar8 - *piVar1;
              }
              local_8 = piVar3[2];
              iVar8 = piVar3[3];
              param_4 = &PTR_FUN_11cf489c;
              if ((DAT_12039bf4 & 1) == 0) {
                DAT_12039bf4 = DAT_12039bf4 | 1;
                FUN_102500e0("CSpawnMonsterGroupInfo::GetManagers");
                FUN_11a8911f(&LAB_11c8fbc0);
              }
              puVar6 = (undefined *)*DAT_12039bd8;
              if ((puVar6 == (undefined *)0x0) &&
                 (puVar6 = (undefined *)FUN_11679e10(&param_4,"CSpawnMonsterGroupInfo",0),
                 puVar6 == (undefined *)0x0)) {
                if ((DAT_1203a5b8 & 1) == 0) {
                  DAT_1203a584 = 0;
                  DAT_1203a594 = 0;
                  uRam1203a598 = 0;
                  _DAT_1203a59c = 0;
                  DAT_1203a5a0 = 0;
                  DAT_1203a5b8 = DAT_1203a5b8 | 1;
                  _DAT_1203a580 = &PTR_FUN_11cf48e0;
                  _DAT_1203a5a4 = _DAT_11de9ae0;
                  DAT_1203a5b4 = 1;
                  DAT_1203a588 = puVar6;
                  _DAT_1203a58c = puVar6;
                  _DAT_1203a590 = puVar6;
                  FUN_11a8911f(&LAB_11ca8220);
                }
                puVar6 = &DAT_1203a580;
              }
              param_4 = &PTR_FUN_11da54a8;
              if (((iVar8 == -1) ||
                  (((iVar8 == 0 && (*(int *)(puVar6 + 0x30) != 0)) || (*(int *)(puVar6 + 0x28) == 0)
                   ))) || ((iVar8 = iVar8 - *(int *)(puVar6 + 0x30), iVar8 < 0 ||
                           (*(int *)(puVar6 + 0x24) <= iVar8)))) goto LAB_116fd921;
              iVar5 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar8 / *(int *)(puVar6 + 0x28)) * 4);
              if ((iVar5 == 0) ||
                 ((*(int *)(iVar5 + (iVar8 % *(int *)(puVar6 + 0x28)) * 4) == 0 ||
                  (iVar8 = FUN_116f86a0(*(undefined4 *)(local_7c + 0x20),
                                        *(undefined4 *)(local_7c + 0x30)), iVar8 == 0))))
              goto LAB_116fd921;
              FUN_1184a310(local_74);
              FUN_1184a540(iVar8);
              local_38 = 0;
              if (0 < local_8) {
                if ((int ********)local_14 != &local_14) goto LAB_116fd750;
                goto LAB_116fd8ff;
              }
              pppppppiVar7 = local_14;
              if ((int ********)local_14 != &local_14) {
                do {
                  pppppppiVar4 = (int *******)*pppppppiVar7;
                  FUN_10c3d5d0(pppppppiVar7);
                  pppppppiVar7 = pppppppiVar4;
                } while ((int ********)pppppppiVar4 != &local_14);
              }
              local_14 = (int *******)&local_14;
              local_10 = local_14;
              iVar8 = iStack_2c;
              if (local_20 != 0) {
                while (iVar8 != 0) {
                  FUN_10463ae0(*(undefined4 *)(iVar8 + 0xc));
                  iVar5 = *(int *)(iVar8 + 8);
                  FUN_10c3d5d0(iVar8);
                  piVar10 = local_34;
                  iVar8 = iVar5;
                }
              }
              piVar9 = (int *)*piVar9;
            } while (piVar9 != piVar10 + 4);
            iVar8 = iStack_50;
            if (local_44 != 0) {
              while (iVar8 != 0) {
                FUN_10463ae0(*(undefined4 *)(iVar8 + 0xc));
                iVar5 = *(int *)(iVar8 + 8);
                FUN_10c3d5d0(iVar8);
                iVar8 = iVar5;
              }
            }
          }
          piVar10 = (int *)*piVar10;
          local_34 = piVar10;
        } while (piVar10 != local_70);
      }
      param_3._3_1_ = 1;
      goto LAB_116fd99d;
    }
  }
  return 0;
LAB_116fd750:
  param_4 = (undefined **)FUN_1184a650(param_5);
  if ((int)param_4 < 1) goto LAB_116fd8ff;
  if ((char)param_3 != '\0') {
LAB_116fd7fb:
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((((char)piVar9[3] != '\0') || ((char)piVar10[3] != '\0')) ||
     (*(char *)(local_3c + 0x14) != '\0')) {
    FUN_1184a630(param_4);
  }
  if (((((char)piVar9[3] == '\0') || (FUN_10467580(local_94,&param_4), local_90 != '\0')) &&
      (((char)piVar10[3] == '\0' || (FUN_10467580(local_8c,&param_4), local_88 != '\0')))) &&
     ((*(char *)(local_3c + 0x14) == '\0' || (FUN_10467580(local_84,&param_4), local_80 != '\0'))))
  goto LAB_116fd7fb;
  goto LAB_116fd750;
LAB_116fd8ff:
  pppppppiVar7 = local_14;
  if ((int ********)local_14 != &local_14) {
    do {
      pppppppiVar4 = (int *******)*pppppppiVar7;
      FUN_10c3d5d0(pppppppiVar7);
      pppppppiVar7 = pppppppiVar4;
    } while ((int ********)pppppppiVar4 != &local_14);
  }
  local_14 = (int *******)&local_14;
  local_10 = local_14;
LAB_116fd921:
  iVar8 = iStack_2c;
  if (local_20 != 0) {
    while (iVar8 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar8 + 0xc));
      iVar5 = *(int *)(iVar8 + 8);
      FUN_10c3d5d0(iVar8);
      iVar8 = iVar5;
    }
    piStack_28 = &local_30;
    iStack_2c = 0;
    local_20 = 0;
    piStack_24 = piStack_28;
  }
  iVar8 = iStack_50;
  if (local_44 != 0) {
    while (iVar8 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar8 + 0xc));
      iVar5 = *(int *)(iVar8 + 8);
      FUN_10c3d5d0(iVar8);
      iVar8 = iVar5;
    }
  }
  param_3._3_1_ = 0;
LAB_116fd99d:
  iVar8 = iStack_68;
  if (local_5c != 0) {
    while (iVar8 != 0) {
      FUN_10463ae0(*(undefined4 *)(iVar8 + 0xc));
      iVar5 = *(int *)(iVar8 + 8);
      FUN_10c3d5d0(iVar8);
      iVar8 = iVar5;
    }
  }
  return param_3._3_1_;
}



