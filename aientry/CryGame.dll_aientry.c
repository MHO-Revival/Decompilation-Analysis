
// ######## CBTActor::LoadClientBehaviorTree @10262030  (586 bytes)  [via ".AISetting.ClientBehaviorTree"] ########

/* WARNING: Removing unreachable block (ram,0x1026221b) */
/* WARNING: Removing unreachable block (ram,0x10262246) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""ClientBehaviorTree""
     ""PropertyCustom""
     "".AISetting.ClientBehaviorTree""
     ""FileName"" */

void __fastcall CBTActor__LoadClientBehaviorTree(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 local_4c [2];
  undefined1 auStack_44 [4];
  int local_40;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 auStack_2c [20];
  undefined1 *puStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_54;
  bVar2 = false;
  bVar1 = false;
  local_4c[0] = 0;
  uStack_64 = *(undefined4 *)(param_1 + 300);
  puStack_68 = (undefined4 *)0x10262066;
  local_40 = param_1;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))();
  puStack_68 = &uStack_50;
  (**(code **)(*piVar4 + 0x14))();
  if (piStack_54 == (int *)0x0) {
LAB_102620f5:
    piVar4 = (int *)((uint)unaff_ESI & 0xffffff);
  }
  else {
    cVar3 = (**(code **)(*piStack_54 + 0x40))("ClientBehaviorTree",&stack0xffffffa8);
    if (cVar3 == '\0') {
      puStack_34 = auStack_44;
      bVar2 = true;
      bVar1 = true;
      puStack_30 = puStack_34;
      FUN_100b62c0("PropertyCustom","");
      iVar5 = FUN_100f2140(&puStack_34,local_4c,".AISetting.ClientBehaviorTree");
      cVar3 = (**(code **)(*unaff_ESI + 0x30))(*(undefined4 *)(iVar5 + 0x14),&stack0xffffffa0);
      if (cVar3 == '\0') goto LAB_102620f5;
    }
    piVar4 = (int *)CONCAT13(1,(int3)unaff_ESI);
  }
  if (((bVar1) && (puStack_18 != auStack_2c)) && (puStack_18 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_18);
  }
  if (((bVar2) && (puStack_30 != auStack_44)) && (puStack_30 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_30);
  }
  if ((char)((uint)piVar4 >> 0x18) != '\0') {
    piVar6 = (int *)(**(code **)(_DAT_00000000 + 0x44))();
    cVar3 = (**(code **)(_DAT_00000000 + 0x48))(piVar6);
    while (cVar3 != '\0') {
      piStack_54 = (int *)0x0;
      cVar3 = (**(code **)(*piVar6 + 4))(&piStack_54);
      if (cVar3 != '\0') {
        (**(code **)(_DAT_00000000 + 0xc))();
        piStack_54 = (int *)0x0;
        (**(code **)(_DAT_00000000 + 0x28))("FileName",&piStack_54);
        piStack_54 = (int *)0x0;
        uStack_50 = 0;
        local_4c[0] = 0;
        (**(code **)(_DAT_00000000 + 0x54))(piVar4,&piStack_54,1);
        if ((piVar4 != (int *)0x0) && (unaff_EDI != (int *)0x0)) {
          puVar7 = (undefined8 *)FUN_10262d10(&puStack_68);
          *puVar7 = CONCAT44(piVar4,unaff_EDI);
          *(undefined4 *)(puVar7 + 1) = 0;
        }
        (**(code **)(_DAT_00000000 + 0x10))();
      }
      cVar3 = (**(code **)(*unaff_EDI + 0x48))(piVar6);
    }
    (**(code **)(*piVar4 + 0x4c))(piVar6);
  }
  if (piStack_54 != (int *)0x0) {
    (**(code **)(*piStack_54 + 8))();
  }
  FUN_11a89daa();
  return;
}


// ######## CBTActor::LoadBehaviorTreeFromAISetting @10258840  (919 bytes)  [via ".AISetting.ClientBehaviorTree"] ########

/* [RE-R1]
   strings:
     ""BehaviorTree""
     ""PropertyCustom""
     "".AISetting.BehaviorTree""
     ""FileName""
     ""ClientBehaviorTree""
     "".AISetting.ClientBehaviorTree"" */

void __fastcall CBTActor__LoadBehaviorTreeFromAISetting(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint3 unaff_EBX;
  int *piVar7;
  uint uVar8;
  int *unaff_ESI;
  int *piStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  int *piStack_50;
  uint uStack_4c;
  int *piStack_48;
  int local_44;
  int local_40 [4];
  int *piStack_30;
  int *piStack_2c;
  undefined1 auStack_28 [20];
  undefined1 *puStack_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_5c;
  piVar7 = (int *)0x0;
  local_44 = 0;
  local_40[0] = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(*(undefined4 *)(param_1 + 300))
  ;
  if (piVar3 == (int *)0x0) goto LAB_10258bc5;
  (**(code **)(*piVar3 + 0x14))(&piStack_50);
  piStack_5c = (int *)0x0;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1025b990(*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = param_1 + 0x18;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)(param_1 + 0x24) = param_1 + 0x18;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  piVar3 = (int *)(uint)unaff_EBX;
  if (piStack_50 == (int *)0x0) {
LAB_10258930:
    uStack_58 = (int *)((uint)uStack_58 & 0xffffff);
  }
  else {
    cVar2 = (**(code **)(*piStack_50 + 0x40))("BehaviorTree",&piStack_5c);
    if (cVar2 == '\0') {
      piStack_30 = local_40;
      piVar7 = (int *)&DAT_00000007;
      piStack_48 = (int *)&DAT_00000007;
      piStack_2c = piStack_30;
      FUN_100b62c0("PropertyCustom","");
      piVar5 = uStack_58;
      iVar4 = FUN_100f2140(&piStack_30,&piStack_48,".AISetting.BehaviorTree");
      cVar2 = (**(code **)(*piVar5 + 0x30))(*(undefined4 *)(iVar4 + 0x14),&stack0xffffff9c);
      if (cVar2 == '\0') goto LAB_10258930;
    }
    uStack_58 = (int *)CONCAT13(1,(undefined3)uStack_58);
  }
  if (((((uint)piVar7 & 4) != 0) &&
      (piVar7 = (int *)((uint)piVar7 & 0xfffffffb), piStack_48 = piVar7, puStack_14 != auStack_28))
     && (puStack_14 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_14);
  }
  if (((((uint)piVar7 & 2) != 0) &&
      (piVar7 = (int *)((uint)piVar7 & 0xfffffffd), piStack_48 = piVar7, piStack_2c != local_40)) &&
     (piStack_2c != (int *)0x0)) {
    FUN_10c3d5d0(piStack_2c);
  }
  if (((uint)piVar7 & 1) != 0) {
    piStack_48 = (int *)((uint)piVar7 & 0xfffffffe);
  }
  uVar8 = 0;
  if (uStack_58._3_1_ != '\0') {
    piVar5 = (int *)(**(code **)(*piStack_5c + 0x44))();
    cVar2 = (**(code **)(*piStack_5c + 0x48))(piVar5);
    piVar7 = piStack_48;
    while (cVar2 != '\0') {
      uStack_58 = (int *)0x0;
      cVar2 = (**(code **)(*piVar5 + 4))(&uStack_58);
      piVar1 = piStack_5c;
      if (cVar2 != '\0') {
        (**(code **)(*piStack_5c + 0xc))();
        piStack_54 = (int *)0x0;
        (**(code **)(*piVar1 + 0x28))("FileName",&piStack_54);
        (**(code **)(*piVar7 + 4))(piStack_5c,1);
        (**(code **)(*piVar1 + 0x10))();
      }
      if (piStack_5c != (int *)0x0) {
        (**(code **)(*piStack_5c + 8))();
      }
      cVar2 = (**(code **)(*unaff_ESI + 0x48))(piVar5);
      uVar8 = uStack_4c;
    }
    (**(code **)(*piVar3 + 0x4c))(piVar5);
    param_1 = local_44;
  }
  cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2c) + 0x134))();
  if (cVar2 != '\0') {
    if (piStack_50 != (int *)0x0) {
      cVar2 = (**(code **)(*piStack_50 + 0x40))("ClientBehaviorTree",&piStack_5c);
      piVar7 = piStack_50;
      if (cVar2 == '\0') {
        uVar8 = uVar8 | 0x38;
        uVar6 = FUN_100b5f70("PropertyCustom",&stack0xffffffa3,".AISetting.ClientBehaviorTree");
        iVar4 = FUN_100f2140(&piStack_30,uVar6);
        cVar2 = (**(code **)(*piVar7 + 0x30))(*(undefined4 *)(iVar4 + 0x14),&stack0xffffff9c);
        if (cVar2 == '\0') goto LAB_10258ac9;
      }
      piVar3 = (int *)CONCAT13(1,unaff_EBX);
    }
LAB_10258ac9:
    if ((((uVar8 & 0x20) != 0) && (uVar8 = uVar8 & 0xffffffdf, puStack_14 != auStack_28)) &&
       (puStack_14 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(puStack_14);
    }
    if ((((uVar8 & 0x10) != 0) && (piStack_2c != local_40)) && (piStack_2c != (int *)0x0)) {
      FUN_10c3d5d0(piStack_2c);
    }
    if ((char)((uint)piVar3 >> 0x18) != '\0') {
      piVar7 = (int *)(**(code **)(*piStack_5c + 0x44))();
      cVar2 = (**(code **)(*piStack_5c + 0x48))(piVar7);
      while (cVar2 != '\0') {
        uStack_58 = (int *)0x0;
        cVar2 = (**(code **)(*piVar7 + 4))(&uStack_58);
        piVar5 = piStack_5c;
        if (cVar2 != '\0') {
          (**(code **)(*piStack_5c + 0xc))();
          piStack_54 = (int *)0x0;
          (**(code **)(*piVar5 + 0x28))("FileName",&piStack_54);
          (**(code **)(*piStack_54 + 4))(piStack_5c,1);
          (**(code **)(*piVar5 + 0x10))();
        }
        if (piStack_5c != (int *)0x0) {
          (**(code **)(*piStack_5c + 8))();
        }
        cVar2 = (**(code **)(*unaff_ESI + 0x48))(piVar7);
      }
      (**(code **)(*piVar3 + 0x4c))(piVar7);
    }
  }
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))();
  }
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
  }
LAB_10258bc5:
  FUN_11a89daa();
  return;
}


// ######## AISystem::PreloadEntityBehaviorTreeFiles @10aacc30  (627 bytes)  [via "ClientBehaviorTree"] ########

/* [RE-R1]
   strings:
     ""BehaviorTree""
     ""ClientBehaviorTree""
     ""AISetting""
     ""sBTFolder""
     ""/Scripts/AI/BehaviorTree/""
     ""sBlackBoardFile""
     ""sEventBT""
     ""sFilename"" */

void AISystem__PreloadEntityBehaviorTreeFiles(undefined4 param_1,int param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_5c [16];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 local_44 [16];
  undefined1 *local_34;
  undefined1 *local_30;
  char *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  char *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_2c = "ClientBehaviorTree";
  if ((char)param_3 == '\0') {
    local_2c = "BehaviorTree";
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x9c))();
  local_28 = (**(code **)(*piVar3 + 8))(param_1);
  if ((local_28 != 0) && (*(int *)(local_28 + 0x1c) != 0)) {
    iVar6 = 0;
    local_10 = 0;
    iVar4 = (**(code **)(**(int **)(local_28 + 0x1c) + 0xa0))();
    local_24 = iVar4;
    if (0 < iVar4) {
      do {
        (**(code **)(**(int **)(local_28 + 0x1c) + 0xa8))(&param_3,iVar6);
        local_4c = local_5c;
        local_5c[0] = 0;
        local_48 = local_4c;
        cVar2 = (**(code **)(*param_3 + 0x28))("AISetting");
        if (cVar2 != '\0') {
          local_14 = (char *)0x0;
          (**(code **)(*param_3 + 0x78))("sBTFolder",&local_14);
          (**(code **)(**(int **)(param_2 + 8) + 0x1c))("/Scripts/AI/BehaviorTree/");
          if (local_14 != (char *)0x0) {
            local_34 = local_44;
            pcVar1 = local_14;
            do {
              pcVar5 = pcVar1;
              pcVar1 = pcVar5 + 1;
            } while (*pcVar5 != '\0');
            local_30 = local_34;
            FUN_100b62c0(local_14,pcVar5);
            if (local_30 != local_34) {
              FUN_104a3f50(local_30);
            }
            if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_30);
            }
          }
          local_c = 0;
          (**(code **)(*param_3 + 0x78))("sBlackBoardFile",&local_c);
          if (local_c != 0) {
            (**(code **)(**(int **)(param_2 + 8) + 0x18))(local_c);
          }
          local_18 = 0;
          (**(code **)(*param_3 + 0x78))("sEventBT",&local_18);
          if (local_18 != 0) {
            AISystem__LoadEntityBehaviorTree_Recursive(local_18);
          }
          iVar4 = 0;
          iVar6 = (**(code **)(*param_3 + 0xa0))();
          if (0 < iVar6) {
LAB_10aacdb6:
            (**(code **)(*param_3 + 0xa8))(&local_8,iVar4);
            cVar2 = (**(code **)(*local_8 + 0x28))(local_2c);
            if (cVar2 == '\0') goto code_r0x10aacdda;
            iVar6 = (**(code **)(*local_8 + 0xa0))();
            iVar4 = 0;
            if (0 < iVar6) {
              do {
                (**(code **)(*local_8 + 0xa8))(&local_20,iVar4);
                local_1c = 0;
                (**(code **)(*local_20 + 0x78))("sFilename",&local_1c);
                if (local_1c != 0) {
                  (**(code **)(**(int **)(param_2 + 8) + 4))(local_1c,1);
                }
                if (local_20 != (int *)0x0) {
                  (**(code **)(*local_20 + 4))();
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar6);
            }
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 4))();
            }
          }
LAB_10aace57:
          iVar6 = local_10;
          iVar4 = local_24;
          if (local_c != 0) {
            (**(code **)(**(int **)(param_2 + 8) + 0x18))(local_c);
            iVar6 = local_10;
            iVar4 = local_24;
          }
        }
        if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_48);
        }
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 4))();
        }
        iVar6 = iVar6 + 1;
        local_10 = iVar6;
      } while (iVar6 < iVar4);
    }
  }
  return;
code_r0x10aacdda:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 4))();
  }
  iVar4 = iVar4 + 1;
  if (iVar6 <= iVar4) goto LAB_10aace57;
  goto LAB_10aacdb6;
}


// ######## CEntityCustomRoot::LoadAIAndModelSettings @10d15c60  (847 bytes)  [via "ClientBehaviorTree"] ########

/* [RE-R1]
   strings:
     ""EntityCustomRoot""
     ""sfileModel""
     ""HitPartSetting""
     ""sHitPartInfo""
     ""AISetting""
     ""sBlackBoardFile""
     ""sBTFolder""
     ""/Scripts/AI/BehaviorTree/""
     ""ClientBehaviorTree""
     ""sFileName"" */

void CEntityCustomRoot__LoadAIAndModelSettings(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int local_21c;
  undefined1 *local_218;
  undefined1 local_214 [512];
  int *local_14;
  int *local_10 [2];
  int *local_8;
  
  piVar1 = param_1;
  cVar2 = (**(code **)(*(int *)*param_1 + 0x28))("EntityCustomRoot");
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*(int *)*piVar1 + 0x7c))("sfileModel");
    if (iVar3 != 0) {
      FUN_110038f0(iVar3);
    }
    (**(code **)(*(int *)*piVar1 + 0xac))(local_10,"HitPartSetting");
    if (local_10[0] != (int *)0x0) {
      uVar4 = (**(code **)(*local_10[0] + 0x7c))("sHitPartInfo");
      FUN_11003730(0,uVar4);
    }
    (**(code **)(*(int *)*piVar1 + 0xac))(&param_1,"AISetting");
    if (param_1 != (int *)0x0) {
      pcVar5 = (char *)(**(code **)(*param_1 + 0x7c))("sBlackBoardFile");
      pcVar6 = (char *)(**(code **)(*param_1 + 0x7c))("sBTFolder");
      if (pcVar5 != (char *)0x0) {
        uVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0x68))();
        FUN_10a6c4c0(uVar4);
        FUN_10ae0250("/Scripts/AI/BehaviorTree/",0x19);
        if (pcVar6 != (char *)0x0) {
          FUN_10adf180(pcVar6);
          FUN_10adf180(&DAT_11d9dc6c);
        }
        pcVar8 = pcVar5;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        FUN_10ae0250(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
        FUN_11003730(1,local_218);
        if (local_218 != local_214) {
          DAT_1202015c = DAT_1202015c + (-1 - local_21c);
          FUN_10c3d900(local_218);
        }
      }
      (**(code **)(*param_1 + 0xac))(&local_8,"ClientBehaviorTree");
      if (local_8 != (int *)0x0) {
        iVar9 = 0;
        iVar3 = (**(code **)(*local_8 + 0xa0))();
        if (0 < iVar3) {
          do {
            puVar7 = (undefined4 *)(**(code **)(*local_8 + 0xa8))(&local_14,iVar9);
            pcVar5 = (char *)(**(code **)(*(int *)*puVar7 + 0x7c))("sFileName");
            if (local_14 != (int *)0x0) {
              (**(code **)(*local_14 + 4))();
            }
            if (pcVar5 != (char *)0x0) {
              uVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0x68))();
              FUN_10a6c4c0(uVar4);
              FUN_10ae0250("/Scripts/AI/BehaviorTree/",0x19);
              if (pcVar6 != (char *)0x0) {
                pcVar8 = pcVar6;
                do {
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
                FUN_10ae0250(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
                FUN_10ae0250(&DAT_11d9dc6c,1);
              }
              pcVar8 = pcVar5;
              do {
                cVar2 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar2 != '\0');
              FUN_10ae0250(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
              FUN_11003730(0,local_218);
              if (local_218 != local_214) {
                DAT_1202015c = DAT_1202015c + (-1 - local_21c);
                FUN_10c3d900(local_218);
              }
            }
            iVar9 = iVar9 + 1;
            iVar3 = (**(code **)(*local_8 + 0xa0))();
          } while (iVar9 < iVar3);
        }
      }
      pcVar5 = (char *)(**(code **)(*param_1 + 0x7c))("sEventBT");
      if (pcVar5 != (char *)0x0) {
        uVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0x68))();
        FUN_10a6c4c0(uVar4);
        FUN_10ae0250("/Scripts/AI/EventBT/",0x14);
        pcVar6 = pcVar5;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_10ae0250(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
        FUN_11003730(0,local_218);
        if (local_218 != local_214) {
          DAT_1202015c = DAT_1202015c + (-1 - local_21c);
          FUN_10c3d900(local_218);
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))();
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))();
      }
    }
    if (local_10[0] != (int *)0x0) {
      (**(code **)(*local_10[0] + 4))();
    }
  }
  return;
}


// ######## CBTActor::LoadDefaultBehaviorTree @10262480  (169 bytes)  [via "DefaultBehaviorTree"] ########

/* [RE-R1]
   strings:
     ""DefaultBehaviorTree"" */

void __fastcall CBTActor__LoadDefaultBehaviorTree(int *param_1)

{
  char cVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(param_1[0x4b]);
  (**(code **)(*piVar2 + 0x14))(&local_8);
  if (local_8 != (int *)0x0) {
    cVar1 = (**(code **)(*local_8 + 0x3c))("DefaultBehaviorTree",&local_c);
    if (cVar1 != '\0') {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      (**(code **)(*param_1 + 0x54))(local_c,&local_18,1);
      if ((local_14 != 0) && (local_18 != 0)) {
        param_1[0xc6] = local_14;
        param_1[0xc5] = local_18;
        param_1[199] = local_10;
        FUN_104b5420();
      }
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  return;
}


// ######## SkillBehaviorTree::LoadFromConfig @10262280  (510 bytes)  [via "SkillBehaviorTree"] ########

/* [RE-R1]
   strings:
     ""SkillBehaviorTree""
     ""FileName""
     ""SkillID"" */

void __fastcall SkillBehaviorTree__LoadFromConfig(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_EDI;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  char *pcStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  int *piStack_44;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int aiStack_24 [3];
  int *local_18;
  
  piStack_44 = (int *)param_1[0x4b];
  piStack_48 = (int *)0x102622a5;
  local_18 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))();
  piStack_48 = aiStack_24;
  puStack_4c = (undefined1 *)0x102622b1;
  (**(code **)(*piVar3 + 0x14))();
  puStack_4c = &stack0xffffffc8;
  pcStack_50 = "SkillBehaviorTree";
  piStack_54 = (int *)0x102622ce;
  cVar2 = (**(code **)(*piStack_28 + 0x40))();
  if (cVar2 != '\0') {
    piStack_54 = (int *)0x102622df;
    piVar3 = (int *)(**(code **)(*unaff_EDI + 0x44))();
    piStack_58 = (int *)0x102622ed;
    piStack_54 = piVar3;
    cVar2 = (**(code **)(*unaff_EDI + 0x48))();
    while (cVar2 != '\0') {
      piStack_58 = (int *)&stack0xffffffc0;
      piStack_5c = (int *)0x1026230b;
      cVar2 = (**(code **)(*piVar3 + 4))();
      piVar1 = piStack_44;
      if (cVar2 != '\0') {
        piStack_5c = (int *)0x1026231e;
        (**(code **)(*piStack_44 + 0xc))();
        piStack_5c = (int *)&stack0xffffffc0;
        (**(code **)(*piVar1 + 0x28))("FileName");
        uStack_34 = 0;
        piStack_30 = (int *)0x0;
        uStack_2c = 0;
        (**(code **)(*param_1 + 0x54))(piStack_48,&uStack_34,1);
        (**(code **)(*piVar1 + 0x20))("SkillID",&pcStack_50);
        piVar4 = (int *)FUN_10262e90(&piStack_58);
        *piVar4 = (int)puStack_4c;
        piVar4[1] = (int)piStack_48;
        piVar4[2] = (int)piStack_44;
        piStack_58 = (int *)FUN_10262e90(&piStack_5c);
        if (piStack_58[1] == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_100b4ca0(*piStack_58);
          piStack_58[2] = (int)piVar4;
        }
        if ((piVar4[0x3b] == 0) || (*(char *)(piVar4[0x3b] + 0x28) == '\0')) {
          if (piVar4[0x29] != 0) {
            FUN_10493dd0();
            *(undefined1 *)((int)piVar4 + 0xe9) = 1;
            (**(code **)(*(int *)piVar4[0x29] + 0xc))();
          }
        }
        else {
          if ((piVar4[0x21] == 0) && (piVar4[0x29] != 0)) {
            (**(code **)(*piVar4 + 0xc))();
          }
          if (piVar4[0x21] != 0) {
            FUN_104ba2d0();
          }
          *(undefined1 *)((int)piVar4 + 0xe9) = 1;
        }
        (**(code **)(*piVar1 + 0x10))();
        param_1 = piStack_30;
      }
      unaff_EDI = (int *)0x0;
      if (piStack_44 != (int *)0x0) {
        piStack_5c = (int *)0x1026243f;
        (**(code **)(*piStack_44 + 8))();
      }
      piStack_5c = piVar3;
      cVar2 = (**(code **)(*piStack_48 + 0x48))();
    }
    piStack_5c = (int *)0x1026245d;
    piStack_58 = piVar3;
    (**(code **)(*piStack_44 + 0x4c))();
  }
  if (unaff_EDI != (int *)0x0) {
    piStack_54 = (int *)0x1026246a;
    (**(code **)(*unaff_EDI + 8))();
  }
  if (piStack_30 != (int *)0x0) {
    piStack_54 = (int *)0x10262477;
    (**(code **)(*piStack_30 + 8))();
  }
  return;
}


// ######## CBTLevelActor::InitFromEntityProperties @10a63840  (642 bytes)  [via "bHaveBehaviorTree"] ########

/* [RE-R1]
   strings:
     ""Properties""
     ""bHaveBehaviorTree""
     ""bLevelActor""
     ""CatInCity"" */

void __fastcall CBTLevelActor__InitFromEntityProperties(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 local_24 [12];
  int *local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  char local_5;
  
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x38))();
  }
  piVar2 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  if ((((iVar3 != 0) &&
       (cVar1 = FUN_10a68ce0("Properties",&local_14), piVar2 = local_14, cVar1 != '\0')) &&
      (cVar1 = FUN_10a68900("bHaveBehaviorTree",&local_10), cVar1 != '\0')) && (local_10 != 0)) {
    *(undefined1 *)(param_1 + 0xc4) = 1;
    local_5 = '\0';
    FUN_10a68da0("bLevelActor",&local_5);
    local_18 = *(int **)(DAT_1202e818 + 0xd0);
    if (local_18 == (int *)0x0) goto LAB_10a63ab0;
    local_14 = *(int **)(param_1 + 8);
    local_10 = local_18[0x1d];
    local_c = (undefined4 *)0x0;
    iVar3 = (**(code **)(*local_18 + 0x128))();
    puVar6 = (undefined4 *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*local_18 + 0x128))();
      iVar3 = (**(code **)(*piVar4 + 0x24))();
      if (iVar3 != 0) {
        piVar4 = (int *)(**(code **)(*local_18 + 0x128))();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x24))();
        uVar5 = (**(code **)(*piVar4 + 0x38))(&local_18);
        FUN_10a72340(uVar5);
        puVar6 = local_c;
        if (local_18 != (int *)0x0) {
          piVar4 = local_18 + 1;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)*local_18)(1);
            puVar6 = local_c;
          }
        }
      }
    }
    local_2c = local_3c;
    local_3c[0] = 0;
    local_28 = local_2c;
    if (*(int *)(param_1 + 0x155c) == 1) {
      iVar3 = FUN_10a60b80();
      if ((iVar3 != 0) && (iVar3 = FUN_113a23b0(), (undefined1 *)(iVar3 + 0x54) != local_3c)) {
        FUN_100d83d0(*(undefined4 *)(iVar3 + 0x68),*(undefined4 *)(iVar3 + 100));
      }
    }
    else if (*(int *)(param_1 + 0x155c) == 8) {
      local_18 = (int *)FUN_10a60b80();
      cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x16c))();
      if ((cVar1 == '\0') &&
         (cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))(), cVar1 == '\0')) {
        if (local_18 != (int *)0x0) {
          FUN_100e0410(*(undefined4 *)(local_18[0x7b4] + 0x94));
        }
      }
      else {
        FUN_100e0410("CatInCity");
      }
    }
    if (puVar6 != (undefined4 *)0x0) {
      if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
        if (local_5 == '\0') {
          puVar6[1] = puVar6[1] + 1;
          iVar3 = FUN_10a685d0(local_24,local_14,local_10,puVar6,local_3c,1);
          if (0 < *(int *)(*(int *)(iVar3 + 8) + 0x28)) {
            *(undefined1 *)(param_1 + 0x157d) = 1;
          }
        }
      }
      else {
        puVar6[1] = puVar6[1] + 1;
        if (local_5 == '\0') {
          FUN_10a68570(local_24,local_14,local_10,puVar6,local_3c,1);
        }
        else {
          FUN_10a68630();
        }
      }
    }
    if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_28);
    }
    if (puVar6 != (undefined4 *)0x0) {
      piVar4 = puVar6 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*puVar6)(1);
      }
    }
  }
  (**(code **)(**(int **)(param_1 + 0xc0) + 4))();
LAB_10a63ab0:
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}


// ######## CProjectileInfo::PreloadResourcesFromDataNode @10dde4b0  (2360 bytes)  [via "Scripts/AI/BehaviorTree/"] ########

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   id: CProjectileInfo::GetManagers
   calls: memcpy
   strings:
     ""sfileModel""
     ""AISetting""
     ""sSkill""
     ""sBlackBoardFile""
     ""Scripts/AI/BehaviorTree/""
     ""sequip_EquipmentPack""
     ""HitPartSetting""
     ""sHitPartInfo""
     ""sPreloadFlyObjInfo""
     ""CProjectileInfo::GetManagers"" */

undefined4 __thiscall
CProjectileInfo__PreloadResourcesFromDataNode(int param_1,char *param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint *puVar16;
  char *pcVar17;
  byte *pbVar18;
  size_t _Size;
  uint *_Dst;
  uint *puVar19;
  bool bVar20;
  int *local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined **local_20;
  undefined **local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  uint *local_c;
  undefined4 *local_8;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  local_10 = param_1;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x9c))();
  iVar5 = (**(code **)(*piVar4 + 8))(param_2);
  if (iVar5 == 0) {
    return 0;
  }
  pcVar17 = param_2;
  do {
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  FUN_1083ab70(param_2,(int)pcVar17 - (int)(param_2 + 1));
  piVar4 = *(int **)(iVar5 + 0x1c);
  local_24 = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)*piVar4)();
  }
  pcVar17 = (char *)(**(code **)(*piVar4 + 0x7c))("sfileModel");
  if ((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) {
    if (param_3 == '\0') {
      FUN_110038f0(pcVar17);
    }
    else if ((*(int **)(DAT_1202e818 + 100) != (int *)0x0) &&
            (local_3c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 100) + 0xc))(pcVar17,0,0,0,0),
            local_3c != (int *)0x0)) {
      (**(code **)(*local_3c + 4))();
      FUN_10b7f080(&local_3c);
    }
  }
  (**(code **)(*piVar4 + 0xac))(&local_18,"AISetting");
  if (local_18 != (int *)0x0) {
    iVar5 = (**(code **)(*local_18 + 0x7c))("sSkill");
    if (iVar5 != 0) {
      FUN_11070f80(iVar5);
      iVar5 = FUN_11071b90();
      if (iVar5 != 0) {
        FUN_110786f0(param_1 + 0x4c);
      }
    }
    pcVar17 = (char *)(**(code **)(*local_18 + 0x7c))("sBlackBoardFile");
    if ((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) {
      CInfoRecord__GetModelString("Scripts/AI/BehaviorTree/");
      FUN_10a4bfe0(param_2);
      FUN_10a4bfe0(&DAT_11d9dc6c);
      FUN_10a4bfe0(pcVar17);
      FUN_110038f0(local_14);
      FUN_104f6f60();
    }
    uVar6 = (**(code **)(*local_18 + 0x7c))("sequip_EquipmentPack");
    CItem__PreloadFiremodeXmlModels(uVar6);
  }
  (**(code **)(*piVar4 + 0xac))(&local_38,"HitPartSetting");
  if ((local_38 != (int *)0x0) &&
     (iVar5 = (**(code **)(*local_38 + 0x7c))("sHitPartInfo"), iVar5 != 0)) {
    FUN_11003730(0,iVar5);
  }
  if ((DAT_1202e170 & 1) == 0) {
    DAT_1202e170 = DAT_1202e170 | 1;
    DAT_1202e16c = &DAT_1202e168;
  }
  local_8 = DAT_1202e16c;
  uVar6 = (**(code **)(*piVar4 + 0x7c))("sPreloadFlyObjInfo");
  DataNode__ReadStringList(uVar6,&local_8);
  puVar7 = local_8 + -1;
  local_30 = (int *)0x0;
  local_c = puVar7;
  if ((*puVar7 & 0x7fffffff) != 0) {
    do {
      local_1c = &PTR_FUN_11ce0b94;
      iVar5 = local_8[(int)local_30];
      if ((DAT_1202f624 & 1) == 0) {
        DAT_1202f624 = DAT_1202f624 | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CProjectileInfo::GetManagers");
        FUN_11a8911f(&LAB_11c88430);
      }
      puVar8 = (undefined4 *)*DAT_1202f608;
      if ((puVar8 == (undefined4 *)0x0) &&
         (puVar8 = (undefined4 *)CInfoManager__FindByName(&local_1c,"CProjectileInfo",0),
         puVar8 == (undefined4 *)0x0)) {
        if ((DAT_1202f670 & 1) == 0) {
          DAT_1202f670 = DAT_1202f670 | 1;
          FUN_10cefbd0();
          FUN_11a8911f(&LAB_11c8a510);
        }
        puVar8 = &DAT_1202f638;
      }
      local_1c = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (puVar8[0xc] == 0)) && (iVar3 = puVar8[10], iVar3 != 0)) &&
          ((iVar5 = iVar5 - puVar8[0xc], -1 < iVar5 && (iVar5 < (int)puVar8[9])))))) {
        iVar9 = *(int *)(puVar8[8] + (iVar5 / iVar3) * 4);
        if ((iVar9 != 0) && (iVar5 = *(int *)(iVar9 + (iVar5 % iVar3) * 4), iVar5 != 0)) {
          if (*(int *)(iVar5 + 0x134) != *(int *)(iVar5 + 0x130)) {
            CInfoRecord__GetModelString(*(int *)(iVar5 + 0x134));
            uVar6 = FUN_10bedf30(*(int *)(local_10 + 0x4c) +
                                 *(int *)(*(int *)(local_10 + 0x4c) + -4) * 4,1);
            FUN_10bee250(uVar6,1,&local_28);
            iVar3 = local_28;
            piVar4 = (int *)(local_28 + -0xc);
            if ((-1 < *piVar4) && (iVar9 = FUN_10c3dad0(piVar4), iVar9 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar3 + -4));
              FUN_10c3d900(piVar4);
            }
          }
          if (*(int *)(iVar5 + 0x168) != *(int *)(iVar5 + 0x164)) {
            CInfoRecord__GetModelString(*(int *)(iVar5 + 0x168));
            uVar6 = FUN_10bedf30(*(int *)(local_10 + 0x4c) +
                                 *(int *)(*(int *)(local_10 + 0x4c) + -4) * 4,1);
            FUN_10bee250(uVar6,1,&local_2c);
            iVar3 = local_2c;
            piVar4 = (int *)(local_2c + -0xc);
            if ((-1 < *piVar4) && (iVar9 = FUN_10c3dad0(piVar4), iVar9 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar3 + -4));
              FUN_10c3d900(piVar4);
            }
          }
          if (*(int *)(iVar5 + 0x1c4) != *(int *)(iVar5 + 0x1c0)) {
            FUN_110038f0(*(int *)(iVar5 + 0x1c4));
          }
        }
      }
      local_30 = (int *)((int)local_30 + 1);
      piVar4 = local_24;
    } while ((int)local_30 < (int)(*puVar7 & 0x7fffffff));
  }
  if ((*(int **)(DAT_1202e818 + 4) != (int *)0x0) &&
     (iVar5 = (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x70))(), iVar5 != 0)) {
    piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x70))();
    local_30 = piVar10;
    uVar6 = (**(code **)(*piVar4 + 0x7c))("spreloadeffects");
    uVar14 = *local_c;
    if ((int)uVar14 < 0) {
      if ((byte)local_c[uVar14 + 1] == 0) {
        uVar11 = *(uint *)((uint)(local_c + uVar14 + 2) & 0xfffffffc);
      }
      else {
        uVar11 = (uint)(byte)local_c[uVar14 + 1];
      }
      uVar14 = (uVar14 & 0x7fffffff) + uVar11;
    }
    if (uVar14 != 0) {
      FUN_10bee680(0,0,0);
    }
    DataNode__ReadStringList(uVar6,&local_8);
    local_c = local_8 + -1;
    if ((local_8[-1] & 0x7fffffff) != 0) {
      iVar5 = 0;
      do {
        pbVar12 = (byte *)(**(code **)(*piVar10 + 0x1c))(local_8[iVar5]);
        pbVar18 = &DAT_11d9d32b;
        pbVar15 = pbVar12;
        do {
          bVar2 = *pbVar15;
          bVar20 = bVar2 < *pbVar18;
          if (bVar2 != *pbVar18) {
LAB_10dde990:
            uVar14 = -(uint)bVar20 | 1;
            goto LAB_10dde995;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar15[1];
          bVar20 = bVar2 < pbVar18[1];
          if (bVar2 != pbVar18[1]) goto LAB_10dde990;
          pbVar15 = pbVar15 + 2;
          pbVar18 = pbVar18 + 2;
        } while (bVar2 != 0);
        uVar14 = 0;
LAB_10dde995:
        if (uVar14 != 0) {
          CInfoRecord__GetModelString(pbVar12);
          uVar6 = FUN_10bedf30(*(int *)(local_10 + 0x4c) +
                               *(int *)(*(int *)(local_10 + 0x4c) + -4) * 4,1);
          FUN_10bee250(uVar6,1,&local_34);
          iVar3 = local_34;
          piVar4 = (int *)(local_34 + -0xc);
          if ((-1 < *piVar4) && (iVar9 = FUN_10c3dad0(piVar4), iVar9 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar3 + -4));
            FUN_10c3d900(piVar4);
          }
        }
        iVar5 = iVar5 + 1;
        piVar10 = local_30;
        piVar4 = local_24;
      } while (iVar5 < (int)(*local_c & 0x7fffffff));
    }
  }
  uVar14 = *local_c;
  if ((int)uVar14 < 0) {
    if ((byte)local_c[uVar14 + 1] == 0) {
      uVar11 = *(uint *)((uint)(local_c + (uVar14 & 0x7fffffff) + 2) & 0xfffffffc);
    }
    else {
      uVar11 = (uint)(byte)local_c[uVar14 + 1];
    }
    uVar14 = (uVar14 & 0x7fffffff) + uVar11;
  }
  if (uVar14 != 0) {
    FUN_10bee680(0,0,0);
  }
  uVar6 = (**(code **)(*piVar4 + 0x7c))("sPreloadMonsterInfo");
  DataNode__ReadStringList(uVar6,&local_8);
  puVar7 = local_8 + -1;
  local_30 = (int *)0x0;
  if ((*puVar7 & 0x7fffffff) != 0) {
    do {
      local_20 = &PTR_FUN_11dc8ee8;
      iVar5 = local_8[(int)local_30];
      if ((DAT_123bee5c & 1) == 0) {
        DAT_123bee5c = DAT_123bee5c | 1;
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CMonsterInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e30);
      }
      puVar8 = (undefined4 *)*DAT_123bee60;
      if ((puVar8 == (undefined4 *)0x0) &&
         (puVar8 = (undefined4 *)CInfoManager__FindByName(&local_20,"CMonsterInfo",0),
         puVar8 == (undefined4 *)0x0)) {
        if ((DAT_123bedd4 & 1) == 0) {
          DAT_123beddc = 0;
          DAT_123bedec = 0;
          DAT_123bedf0 = 0;
          _DAT_123bedf4 = 0;
          DAT_123bedf8 = 0;
          DAT_123bedd4 = DAT_123bedd4 | 1;
          DAT_123bedd8 = &PTR_FUN_11dc8ef0;
          DAT_123bedfc = _DAT_11de9ae0;
          DAT_123bee00 = _UNK_11de9ae4;
          uRam123bee04 = _UNK_11de9ae8;
          DAT_123bee08 = _UNK_11de9aec;
          DAT_123bee0c = 1;
          DAT_123bede0 = puVar8;
          _DAT_123bede4 = puVar8;
          _DAT_123bede8 = puVar8;
          FUN_11a8911f(&LAB_11c8a4b0);
        }
        puVar8 = &DAT_123bedd8;
      }
      local_20 = &PTR_FUN_11da54a8;
      if (((iVar5 != -1) &&
          (((iVar5 != 0 || (puVar8[0xc] == 0)) && (iVar3 = puVar8[10], iVar3 != 0)))) &&
         ((iVar5 = iVar5 - puVar8[0xc], -1 < iVar5 && (iVar5 < (int)puVar8[9])))) {
        iVar9 = *(int *)(puVar8[8] + (iVar5 / iVar3) * 4);
        if ((iVar9 != 0) &&
           ((iVar5 = *(int *)(iVar9 + (iVar5 % iVar3) * 4), iVar5 != 0 &&
            (pbVar15 = *(byte **)(iVar5 + 0x68), pbVar15 != (byte *)0x0)))) {
          iVar5 = 0;
          puVar8 = *(undefined4 **)(local_10 + 0x54);
          local_c = (uint *)(puVar8[-1] & 0x7fffffff);
          if (local_c != (uint *)0x0) {
            do {
              pbVar12 = (byte *)*puVar8;
              pbVar18 = pbVar15;
              do {
                bVar2 = *pbVar12;
                bVar20 = bVar2 < *pbVar18;
                if (bVar2 != *pbVar18) {
LAB_10ddebe7:
                  uVar14 = -(uint)bVar20 | 1;
                  goto LAB_10ddebec;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar12[1];
                bVar20 = bVar2 < pbVar18[1];
                if (bVar2 != pbVar18[1]) goto LAB_10ddebe7;
                pbVar12 = pbVar12 + 2;
                pbVar18 = pbVar18 + 2;
              } while (bVar2 != 0);
              uVar14 = 0;
LAB_10ddebec:
              if (uVar14 == 0) goto LAB_10dded86;
              iVar5 = iVar5 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar5 < (int)local_c);
          }
          local_c = (uint *)&DAT_1201fc98;
          pbVar12 = pbVar15;
          do {
            bVar2 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar2 != 0);
          _Size = (int)pbVar12 - (int)(pbVar15 + 1);
          _Dst = local_c;
          if (_Size != 0) {
            puVar8 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
            DAT_123be268 = DAT_123be268 + _Size + 0xd;
            *puVar8 = 1;
            _Dst = puVar8 + 3;
            puVar8[1] = _Size;
            puVar8[2] = _Size;
            *(byte *)((int)_Dst + _Size) = 0;
            if (_Dst != (uint *)pbVar15) {
              local_c = _Dst;
              memcpy(_Dst,pbVar15,_Size);
            }
          }
          iVar5 = local_10;
          local_c = *(uint **)(local_10 + 0x54);
          puVar19 = (uint *)((int)local_c + *(uint *)((int)local_c + -4) * 4);
          uVar11 = *(uint *)((int)local_c + -4);
          uVar14 = (*(uint *)((int)local_c + -4) & 0x7fffffff) + 1;
          if ((int)uVar11 < 0) {
            bVar2 = *(byte *)((int)local_c + uVar11 * 4);
            if (bVar2 == 0) {
              uVar11 = (uVar11 & 0x7fffffff) + *(int *)((int)local_c + uVar11 * 4 + 4 & 0xfffffffc);
            }
            else {
              uVar11 = (uVar11 & 0x7fffffff) + (uint)bVar2;
            }
          }
          if ((int)uVar11 < (int)uVar14) {
            FUN_10beea50(uVar14,uVar14,1 < (int)uVar14);
            puVar19 = (uint *)(*(int *)(iVar5 + 0x54) + ((int)puVar19 - (int)local_c >> 2) * 4);
          }
          else {
            uVar11 = *(uint *)((int)local_c + -4);
            if ((int)uVar11 < 0) {
              bVar2 = *(byte *)((int)local_c + uVar11 * 4);
              if (bVar2 == 0) {
                uVar13 = *(uint *)((int)local_c + uVar11 * 4 + 4 & 0xfffffffc);
              }
              else {
                uVar13 = (uint)bVar2;
              }
              uVar11 = (uVar11 & 0x7fffffff) + uVar13;
            }
            *(uint *)((int)local_c + -4) = uVar14;
            if ((int)uVar14 < (int)uVar11) {
              iVar5 = uVar11 - uVar14;
              *(uint *)((int)local_c + -4) = uVar14 | 0x80000000;
              if (iVar5 < 0x100) {
                *(char *)((int)local_c + uVar14 * 4) = (char)iVar5;
              }
              else {
                *(undefined1 *)((int)local_c + uVar14 * 4) = 0;
                *(int *)((int)local_c + uVar14 * 4 + 4 & 0xfffffffc) = iVar5;
              }
            }
          }
          puVar16 = puVar19 + 1;
          local_c = puVar16;
          if (puVar19 != puVar16) {
            do {
              if (puVar19 != (uint *)0x0) {
                if (*(int *)((int)_Dst + -0xc) < 0) {
                  *puVar19 = (uint)&DAT_1201fc98;
                }
                else {
                  *puVar19 = (uint)_Dst;
                  FUN_10c3dab0((byte *)((int)_Dst + -0xc));
                  puVar16 = local_c;
                }
              }
              puVar19 = puVar19 + 1;
            } while (puVar19 != puVar16);
          }
          pbVar15 = (byte *)((int)_Dst + -0xc);
          if ((-1 < *(int *)pbVar15) && (iVar5 = FUN_10c3dad0(pbVar15), iVar5 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)((int)_Dst + -4));
            FUN_10c3d900(pbVar15);
          }
        }
      }
LAB_10dded86:
      local_30 = (int *)((int)local_30 + 1);
      piVar4 = local_24;
    } while ((int)local_30 < (int)(*puVar7 & 0x7fffffff));
  }
  if (param_3 != '\0') {
    CMonsterInfo__PreCacheEntityResources(param_2);
  }
  if (*puVar7 != 0) {
    FUN_10c3d900(puVar7);
  }
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 4))();
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 4))();
  }
  (**(code **)(*piVar4 + 4))();
  return 1;
}


// ######## AISystem::ScanArchetypesAndPreloadBTs @10aad5c0  (1791 bytes)  [via "Scripts/AI/BehaviorTree/"] ########

/* [RE-R1]
   calls: _findfirst64i32, _findnext64i32, _findclose
   strings:
     ""/Libs/EntityArchetypes/""
     ""*.xml""
     ""EntityPrototypeLibrary""
     ""EntityPrototype""
     ""Properties""
     ""/Scripts/AI/BehaviorTree/""
     ""BTFolder""
     ""Scripts/AI/BehaviorTree/""
     ""file_BlackBoardFile""
     ""file_BTEventFileName"" */

void AISystem__ScanArchetypesAndPreloadBTs
               (undefined8 *param_1,char param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  intptr_t _FindHandle;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int *piVar13;
  code *pcVar14;
  _finddata64i32_t local_240;
  undefined1 local_118 [12];
  undefined1 local_10c [20];
  undefined1 *local_f8;
  undefined1 local_f4 [20];
  undefined1 *local_e0;
  char local_dc [20];
  char *local_c8;
  undefined8 local_c4;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined1 *local_74;
  undefined4 local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_5c [16];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 local_44 [20];
  undefined1 *local_30;
  undefined1 local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_14;
  intptr_t local_10;
  int *local_c;
  int local_8;
  
  piVar3 = (int *)FUN_10478730();
  local_6c = piVar3;
  if (piVar3 != (int *)0x0) {
    pcVar4 = (char *)FUN_10478770();
    local_90 = local_a0;
    pcVar1 = pcVar4;
    do {
      pcVar12 = pcVar1;
      pcVar1 = pcVar12 + 1;
    } while (*pcVar12 != '\0');
    local_8c = local_90;
    FUN_100b62c0(pcVar4,pcVar12);
    FUN_100f2140(local_10c,local_a0,"/Libs/EntityArchetypes/");
    FUN_100f2140(local_dc,local_10c,"*.xml");
    _FindHandle = _findfirst64i32(local_c8,&local_240);
    pcVar14 = _findnext64i32_exref;
    local_10 = _FindHandle;
    if (_FindHandle != -1) {
      iVar5 = _findnext64i32(_FindHandle,&local_240);
      while (iVar5 != -1) {
        uVar6 = FUN_100f2140(local_88,local_a0,"/Libs/EntityArchetypes/",local_240.name);
        FUN_100f2140(local_f4,uVar6);
        if ((local_74 != local_88) && (local_74 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_74);
        }
        (**(code **)(*piVar3 + 0xc))(&local_c,local_e0,0);
        if (local_c == (int *)0x0) {
          if ((local_e0 != local_f4) && (local_e0 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_e0);
          }
          goto LAB_10aadc32;
        }
        cVar2 = (**(code **)(*local_c + 0x10))("EntityPrototypeLibrary");
        if (cVar2 != '\0') {
          pcVar4 = (char *)(**(code **)(*local_c + 0x5c))(&DAT_11da7300);
          local_a8 = local_b8;
          pcVar1 = pcVar4;
          do {
            pcVar12 = pcVar1;
            pcVar1 = pcVar12 + 1;
          } while (*pcVar12 != '\0');
          local_a4 = local_a8;
          FUN_100b62c0(pcVar4,pcVar12);
          FUN_100d9260(&DAT_11d9f004,&DAT_11d9f005);
          iVar5 = 0;
          local_60 = 0;
          local_64 = (**(code **)(*local_c + 100))();
          if (0 < local_64) {
            do {
              piVar3 = (int *)(**(code **)(*local_c + 0x68))(iVar5);
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 4))();
              }
              cVar2 = (**(code **)(*piVar3 + 0x10))("EntityPrototype");
              if (cVar2 != '\0') {
                pcVar4 = (char *)(**(code **)(*piVar3 + 0x5c))(&DAT_11da7300);
                local_78 = local_88;
                pcVar1 = pcVar4;
                do {
                  pcVar12 = pcVar1;
                  pcVar1 = pcVar12 + 1;
                } while (*pcVar12 != '\0');
                local_74 = local_78;
                FUN_100b62c0(pcVar4,pcVar12);
                iVar5 = 0;
                local_8 = 0;
                local_68 = (**(code **)(*piVar3 + 100))();
                if (0 < local_68) {
                  do {
                    piVar7 = (int *)(**(code **)(*piVar3 + 0x68))(iVar5);
                    if (piVar7 != (int *)0x0) {
                      (**(code **)(*piVar7 + 4))();
                    }
                    cVar2 = (**(code **)(*piVar7 + 0x10))("Properties");
                    if (cVar2 == '\0') {
LAB_10aadb7b:
                      (**(code **)(*piVar7 + 8))();
                    }
                    else {
                      if (param_2 == '\0') {
                        local_c4 = *param_1;
                        piVar13 = *(int **)(param_1 + 1);
                      }
                      else {
                        local_14 = DAT_11df7390;
                        DAT_11df7390 = DAT_11df7390 + 1;
                        local_70 = 0;
                        puVar8 = (undefined8 *)
                                 CBTActor__Create_WithIdPtr_dup
                                           (local_118,&local_14,&local_70,&param_4);
                        local_c4 = *puVar8;
                        piVar13 = *(int **)(puVar8 + 1);
                        FUN_10258d40();
                        piVar9 = (int *)FUN_100f21e0(local_44,local_b8,local_88);
                        if (piVar9 != piVar13 + 0x7b) {
                          FUN_100d83d0(piVar9[5],piVar9[4]);
                        }
                        if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                          FUN_10c3d5d0(local_30);
                        }
                      }
                      (**(code **)(*piVar13 + 0x1c))("/Scripts/AI/BehaviorTree/");
                      local_4c = local_5c;
                      local_5c[0] = 0;
                      local_48 = local_4c;
                      cVar2 = (**(code **)(*piVar7 + 0x28))("BTFolder",local_5c);
                      if (cVar2 != '\0') {
                        FUN_104a3f50(local_48);
                        puVar10 = (undefined1 *)
                                  FUN_104977f0(local_44,"Scripts/AI/BehaviorTree/",local_5c);
                        if (puVar10 != local_5c) {
                          FUN_100d83d0(*(undefined4 *)(puVar10 + 0x14),
                                       *(undefined4 *)(puVar10 + 0x10));
                        }
                        if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                          FUN_10c3d5d0(local_30);
                        }
                        local_1c = local_2c;
                        local_2c[0] = 0;
                        local_18 = local_1c;
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BlackBoardFile",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 0x18))(*(undefined4 *)(iVar5 + 0x14));
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BTEventFileName",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 4))(*(undefined4 *)(iVar5 + 0x14),1);
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BTFileName1",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 4))(*(undefined4 *)(iVar5 + 0x14),1);
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BTFileName2",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 4))(*(undefined4 *)(iVar5 + 0x14),1);
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        cVar2 = (**(code **)(*piVar7 + 0x28))("file_BTFileName3",local_2c);
                        if ((cVar2 != '\0') && (local_18 != local_1c)) {
                          iVar5 = FUN_1046bea0(local_44,local_48,local_18);
                          (**(code **)(*piVar13 + 4))(*(undefined4 *)(iVar5 + 0x14),1);
                          if ((local_30 != local_44) && (local_30 != (undefined1 *)0x0)) {
                            FUN_10c3d5d0(local_30);
                          }
                        }
                        if (param_2 == '\0') {
                          (**(code **)(*piVar13 + 0xc))();
                        }
                        else {
                          local_14 = DAT_11df7390 + -1;
                          puVar11 = (undefined4 *)FUN_10aadda0(&local_14);
                          *puVar11 = (undefined4)local_c4;
                          puVar11[1] = local_c4._4_4_;
                          puVar11[2] = piVar13;
                        }
                        if ((local_18 != local_2c) && (local_18 != (undefined1 *)0x0)) {
                          FUN_10c3d5d0(local_18);
                        }
                        iVar5 = local_8;
                        if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
                          FUN_10c3d5d0(local_48);
                          iVar5 = local_8;
                        }
                        goto LAB_10aadb7b;
                      }
                      if ((local_48 != local_5c) && (local_48 != (undefined1 *)0x0)) {
                        FUN_10c3d5d0(local_48);
                      }
                      (**(code **)(*piVar7 + 8))();
                      iVar5 = local_8;
                    }
                    iVar5 = iVar5 + 1;
                    local_8 = iVar5;
                  } while (iVar5 < local_68);
                }
                if ((local_74 != local_88) && (local_74 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(local_74);
                }
              }
              (**(code **)(*piVar3 + 8))();
              iVar5 = local_60 + 1;
              piVar3 = local_6c;
              local_60 = iVar5;
            } while (iVar5 < local_64);
          }
          _FindHandle = local_10;
          pcVar14 = _findnext64i32_exref;
          if ((local_a4 != local_b8) && (local_a4 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_a4);
            _FindHandle = local_10;
            pcVar14 = _findnext64i32_exref;
          }
        }
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))();
        }
        if ((local_e0 != local_f4) && (local_e0 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_e0);
        }
        iVar5 = (*pcVar14)(_FindHandle,&local_240);
      }
      _findclose(_FindHandle);
    }
LAB_10aadc32:
    if ((local_c8 != local_dc) && (local_c8 != (char *)0x0)) {
      FUN_10c3d5d0(local_c8);
    }
    if ((local_f8 != local_10c) && (local_f8 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_f8);
    }
    if ((local_8c != local_a0) && (local_8c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_8c);
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    piVar3 = param_4 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_4)(1);
    }
  }
  return;
}


// ######## FUN_10eb6a90 @10eb6a90  (543 bytes)  [via "%s/%s.xml"] ########

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""%s/%s.xml""
     ""Minimap""
     ""Filename""
     ""%s/%s""
     ""startX""
     ""startY""
     ""width""
     ""height"" */

void FUN_10eb6a90(void)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  char local_110 [256];
  int *local_10;
  int local_c;
  int *local_8;
  
  piVar2 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 100))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x38))();
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(), iVar3 != 0)) {
    piVar4 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x1c4))();
    iVar3 = (**(code **)(*piVar4 + 4))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 8))();
      piVar5 = (int *)(**(code **)(*piVar2 + 8))();
      uVar6 = (**(code **)(*piVar4 + 4))();
      uVar6 = (**(code **)(*piVar5 + 8))(uVar6);
      sprintf(local_110,"%s/%s.xml",uVar6);
      (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_8,local_110,0,1,0);
      if (local_8 != (int *)0x0) {
        piVar4 = (int *)(**(code **)(*local_8 + 0xac))(&local_10,"Minimap");
        if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar4)();
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 4))();
        }
        local_8 = (int *)*piVar4;
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 4))();
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 0x78))("Filename",&local_10);
          piVar2 = (int *)(**(code **)(*piVar2 + 8))();
          uVar6 = (**(code **)(*piVar2 + 8))(local_10);
          sprintf(local_110,"%s/%s",uVar6);
          iVar3 = local_c;
          (**(code **)(*local_8 + 100))("startX",local_c + 0xc);
          (**(code **)(*local_8 + 100))("startY",(float *)(iVar3 + 0x10));
          (**(code **)(*local_8 + 100))(&DAT_11cf6448,(float *)(iVar3 + 0x14));
          (**(code **)(*local_8 + 100))(&DAT_11cf6450,(float *)(iVar3 + 0x18));
          (**(code **)(*local_8 + 0x74))("width",local_c + 4);
          (**(code **)(*local_8 + 0x74))("height",local_c + 8);
          fVar1 = DAT_11de9918;
          fVar7 = *(float *)(iVar3 + 0x18) - *(float *)(iVar3 + 0x10);
          fVar8 = *(float *)(iVar3 + 0x14) - *(float *)(local_c + 0xc);
          *(float *)(local_c + 0x20) = fVar7;
          *(float *)(local_c + 0x1c) = fVar8;
          if (fVar8 <= 0.0) {
            fVar8 = fVar1;
          }
          *(float *)(local_c + 0x1c) = fVar8;
          if (fVar7 <= 0.0) {
            fVar7 = fVar1;
          }
          *(float *)(local_c + 0x20) = fVar7;
          FUN_1083ac30(local_110);
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 4))();
          }
        }
      }
    }
  }
  return;
}


// ######## ScriptBind_MonsterBehaviorTree::Register @11037e80  (2890 bytes)  [via "LoadBehaviorTree"] ########

/* [RE-R1]
   strings:
     ""TestFunc""
     ""SetBTBlackBoardValueBool""
     ""KeyName,BoolValue""
     ""SetBTBlackBoardValueEntityID""
     ""KeyName,EntityIDValue""
     ""SetBTBlackBoardValueFloat""
     ""KeyName,FloatValue""
     ""SetBTBlackBoardValueString""
     ""KeyName,StringValue""
     ""SetBTBlackBoardValueVec3"" */

undefined4 * __thiscall ScriptBind_MonsterBehaviorTree__Register(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char *local_40;
  char *local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  code *pcStack_28;
  undefined4 local_24;
  code *local_20;
  undefined4 **local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  int *piStack_10;
  undefined4 *puStack_c;
  code *pcStack_8;
  
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11d0a518;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  piVar2 = (int *)(**(code **)(*param_2 + 0x124))();
  uVar3 = (**(code **)(*piVar2 + 0x3c))();
  param_1[0x16] = uVar3;
  piVar2 = (int *)(**(code **)(*param_2 + 0xfc))();
  param_1[0x12] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x11] = piVar2;
  (**(code **)(*piVar2 + 8))();
  piVar2 = (int *)param_1[0x12];
  param_1[0x13] = 1;
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 0xc))();
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x14] = piVar2;
  (**(code **)(*piVar2 + 8))();
  local_14 = &LAB_1103a854;
  pcStack_8 = FUN_1103aa40;
  puStack_c = param_1;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "TestFunc";
    local_34 = &LAB_1103a854;
    uStack_30 = piStack_10;
    pcStack_28 = FUN_1103aa40;
    local_38 = puVar1;
    puStack_2c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038cf0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueBool";
    local_3c = "KeyName,BoolValue";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038b30;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueEntityID";
    local_3c = "KeyName,EntityIDValue";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038bc0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueFloat";
    local_3c = "KeyName,FloatValue";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038d80;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueString";
    local_3c = "KeyName,StringValue";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038c50;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueVec3";
    local_3c = "KeyName,Vec3Value";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039370;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueBool";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110390b0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueEntityID";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110391a0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueFloat";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039450;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueString";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039280;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueVec3";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039540;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadEventBehaviorTree";
    local_3c = "FileName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110396d0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadBehaviorTree";
    local_3c = "FileName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039860;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadBlackboard";
    local_3c = "FileName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110399f0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ClearPhysicsFlag";
    local_3c = "";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039a80;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableAttackable";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039b60;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetReceiveAttackType";
    local_3c = "spAttackType";
    local_20 = FUN_1103a8e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039bf0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnablePlayerWall";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039cd0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableMonsterWall";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a0f0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "AddGeometry";
    local_3c = "geometryInfo";
    local_20 = FUN_1103a980;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039db0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableTerrain";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039e90;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableSpecialObject";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039f70;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "IgnoreHitCount";
    local_3c = "ignore";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a050;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetPlayerCanAttack";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a000;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetMonsterCanAttack";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a2b0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetUseMaterialEffect";
    local_3c = "use";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a0a0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetCanHitCount";
    local_3c = "enable";
    local_20 = FUN_1103a8e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038e20;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueStringString";
    local_3c = "Name,Value";
    local_20 = FUN_1103a920;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a380;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LogicHide";
    local_3c = "hide";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = (undefined1 *)0x4;
  piStack_10 = (int *)&DAT_3f800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("AF_Normal_Short",&local_14);
  if (local_14 == (undefined1 *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (undefined1 *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (undefined1 *)0x4;
  piStack_10 = (int *)&DAT_40000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("AF_Shake_Gournd",&local_14);
  if (local_14 == (undefined1 *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (undefined1 *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (undefined1 *)0x4;
  piStack_10 = (int *)&DAT_41000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("AF_FlyObj",&local_14);
  if (local_14 == (undefined1 *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (undefined1 *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (undefined1 *)0x4;
  piStack_10 = (int *)&DAT_40800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("AF_Rush",&local_14);
  if (local_14 == (undefined1 *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
      return param_1;
    }
  }
  else if ((local_14 == (undefined1 *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  return param_1;
}


// ######## ScriptBind_BehaviorTree::Register @11035fb0  (1739 bytes)  [via "LoadBehaviorTree"] ########

/* [RE-R1]
   strings:
     ""TestFunc""
     ""SetBTBlackBoardValueBool""
     ""KeyName,BoolValue""
     ""SetBTBlackBoardValueEntityID""
     ""KeyName,EntityIDValue""
     ""SetBTBlackBoardValueFloat""
     ""KeyName,FloatValue""
     ""SetBTBlackBoardValueString""
     ""KeyName,StringValue""
     ""SetBTBlackBoardValueVec3"" */

undefined4 * __thiscall ScriptBind_BehaviorTree__Register(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char *local_40;
  char *local_3c;
  undefined4 *local_38;
  code *local_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  code *pcStack_28;
  undefined4 local_24;
  code *local_20;
  undefined4 **local_1c;
  undefined4 local_18;
  code *local_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  code *pcStack_8;
  
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11d0a268;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  piVar2 = (int *)(**(code **)(*param_2 + 0x124))();
  uVar3 = (**(code **)(*piVar2 + 0x3c))();
  param_1[0x16] = uVar3;
  piVar2 = (int *)(**(code **)(*param_2 + 0xfc))();
  param_1[0x12] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x11] = piVar2;
  (**(code **)(*piVar2 + 8))();
  piVar2 = (int *)param_1[0x12];
  param_1[0x13] = 1;
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 0xc))();
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x14] = piVar2;
  (**(code **)(*piVar2 + 8))();
  local_14 = (code *)&LAB_11037c95;
  pcStack_8 = FUN_11037e60;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "TestFunc";
    local_34 = (code *)&LAB_11037c95;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11037e60;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__SetBlackboardBool;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueBool";
    local_3c = "KeyName,BoolValue";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__SetBlackboardEntityID;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueEntityID";
    local_3c = "KeyName,EntityIDValue";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__SetBlackboardFloat;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueFloat";
    local_3c = "KeyName,FloatValue";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__SetBlackboardString;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueString";
    local_3c = "KeyName,StringValue";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__SetBlackboardVec3;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueVec3";
    local_3c = "KeyName,Vec3Value";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__SetBlackboardUint;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueUint";
    local_3c = "KeyName,Uint";
    local_20 = FUN_11037d80;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__GetBlackboardBool;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueBool";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__GetBlackboardEntityID;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueEntityID";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__GetBlackboardFloat;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueFloat";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__GetBlackboardString;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueString";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__GetBlackboardVec3;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueVec3";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__LoadEventBehaviorTree;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadEventBehaviorTree";
    local_3c = "FileName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__LoadBehaviorTree;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadBehaviorTree";
    local_3c = "FileName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__LoadBlackboard;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadBlackboard";
    local_3c = "FileName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__ClearAllTrees;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ClearAllTrees";
    local_3c = "";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__InitBehaviorTrees;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "InitBehaviorTrees";
    local_3c = "paramsTable";
    local_20 = FUN_11037de0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = ScriptBind_BT__SetBlackboardStringString;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueStringString";
    local_3c = "Name,Value";
    local_20 = FUN_11037d20;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = ScriptBind_BT__ExecuteEventTree;
  pcStack_8 = FUN_11037e60;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "ExecuteEventTree";
    local_34 = ScriptBind_BT__ExecuteEventTree;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11037e60;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  return param_1;
}

