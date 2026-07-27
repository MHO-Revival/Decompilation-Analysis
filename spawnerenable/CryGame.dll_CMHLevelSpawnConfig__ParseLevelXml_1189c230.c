
/* [RE-R1]
   strings:
     ""LevelID""
     ""MonsterSpawnGroups""
     ""Entities""
     ""FlowgraphEnable""
     ""ConfigSets""
     ""DefaultConfigSet"" */

void __thiscall CMHLevelSpawnConfig__ParseLevelXml(int *param_1,int param_2)

{
  undefined4 ******ppppppuVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 local_48;
  int local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined4 ****local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 *****local_18;
  undefined4 *****local_14;
  undefined4 *****local_10;
  undefined4 *****local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((((param_2 == 0) || (local_40 = FUN_100f3cb0(), local_40 == 0)) ||
      (cVar2 = FUN_100f6ef0(local_40,"LevelID",&local_3c), cVar2 == '\0')) ||
     (local_3c != *(int *)(*param_1 + 0x10))) {
    FUN_11a89daa();
    return;
  }
  iVar3 = FUN_100f3ce0("MonsterSpawnGroups");
  if (iVar3 != 0) {
    iVar3 = FUN_100f3cb0();
    while (iVar3 != 0) {
      FUN_1189bdb0();
      cVar2 = CMonsterSpawnGroupEntry__ParseXml(iVar3,param_1);
      if (cVar2 != '\0') {
        FUN_1189dab0(local_38);
      }
      FUN_116ad790();
      iVar3 = FUN_100f3d20();
    }
  }
  iVar3 = FUN_100f3ce0("Entities");
  if (iVar3 != 0) {
    iVar3 = FUN_100f3cb0();
    while (iVar3 != 0) {
      local_24._0_1_ = 0;
      local_14 = &local_24;
      local_c = (undefined4 ******)0x1;
      local_10 = local_14;
      if (iVar3 != 0) {
        cVar2 = FUN_100f6ea0(iVar3,&DAT_11da7300,local_14);
        ppppppuVar1 = (undefined4 ******)local_10;
        if (((cVar2 == '\0') || (local_10 == local_14)) ||
           (iVar4 = FUN_1189c080(local_10), iVar4 != 0)) {
          if (ppppppuVar1 != (undefined4 ******)&local_24) goto joined_r0x1189c384;
        }
        else {
          FUN_100f6ef0(iVar3,"FlowgraphEnable",&local_c);
          FUN_1189d780((int)&local_48 + 4,param_1 + 6,&local_24);
          ppppppuVar1 = (undefined4 ******)local_10;
          if (local_10 != &local_24) {
joined_r0x1189c384:
            if (ppppppuVar1 != (undefined4 ******)0x0) {
              FUN_10c3d5d0(ppppppuVar1);
            }
          }
        }
      }
      iVar3 = FUN_100f3d20();
    }
  }
  iVar3 = FUN_100f3ce0("ConfigSets");
  if (iVar3 != 0) {
    iVar3 = FUN_100f3cb0();
    while (iVar3 != 0) {
      local_20 = local_30;
      local_34 = 0;
      local_18 = &local_18;
      local_48 = 0;
      local_10 = &local_10;
      local_30[0] = 0;
      local_1c = local_20;
      local_14 = local_18;
      local_c = local_10;
      cVar2 = FUN_1189c520(iVar3,param_1);
      if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x34);
      }
      FUN_116b40b0();
      FUN_116b4170();
      if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_1c);
      }
      iVar3 = FUN_100f3d20();
    }
  }
  cVar2 = FUN_100f6ef0(local_40,"DefaultConfigSet",&local_3c);
  if (cVar2 != '\0') {
    for (piVar5 = (int *)param_1[1]; piVar5 != param_1 + 1; piVar5 = (int *)*piVar5) {
      if (piVar5[2] == local_3c) {
        piVar5 = piVar5 + 2;
        goto LAB_1189c4cd;
      }
    }
    piVar5 = (int *)0x0;
LAB_1189c4cd:
    param_1[3] = (int)piVar5;
  }
  FUN_11a89daa();
  return;
}

