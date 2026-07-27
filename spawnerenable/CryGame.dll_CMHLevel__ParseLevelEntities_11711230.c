
/* [RE-R1]
   strings:
     ""Entity""
     ""EntityClass""
     ""MHMonsterSpawnPoint""
     ""ProximityTrigger""
     ""EnterInstance""
     ""SwitchRegionTrigger""
     ""MHPlayerSpawnPoint""
     ""LogicPoint""
     ""MHPathPoint""
     ""WayPointList"" */

void __thiscall CMHLevel__ParseLevelEntities(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 ******ppppppuVar4;
  undefined4 ******ppppppuVar5;
  undefined8 local_d4;
  undefined1 local_cc [36];
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 local_90 [24];
  undefined1 local_78 [8];
  int local_70;
  int local_68;
  undefined4 ****local_5c;
  undefined4 ****local_58;
  undefined1 local_54 [8];
  undefined4 *****local_4c;
  undefined4 *****local_48;
  undefined4 *****local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  undefined1 local_38 [4];
  undefined4 *****local_34;
  undefined4 *****local_30;
  undefined4 *****local_2c;
  undefined4 *****local_28;
  undefined4 *****local_24;
  undefined1 local_20 [8];
  undefined4 *****local_18;
  undefined4 *****local_14;
  undefined4 *****local_10;
  undefined4 *****local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_100f68b0(param_2);
  if (iVar2 == 0) {
    FUN_11a89daa();
    return;
  }
  iVar3 = FUN_100f3cb0();
  if (iVar3 != 0) {
    iVar3 = FUN_100f3ce0("Entity");
    while (iVar3 != 0) {
      local_98 = local_a8;
      local_a8[0] = 0;
      local_94 = local_98;
      FUN_100f69d0(iVar3,"EntityClass",local_98,&DAT_11cd58ec);
      cVar1 = FUN_100fd0c0(local_a8,"MHMonsterSpawnPoint");
      if (cVar1 != '\0') {
        local_4c = &local_5c;
        local_5c._0_1_ = 0;
        local_34 = &local_44;
        local_d4 = 0;
        local_10 = &local_10;
        local_44 = (undefined4 *****)((uint)local_44 & 0xffffff00);
        local_48 = local_4c;
        local_30 = local_34;
        local_c = local_10;
        MHMonsterSpawnPoint__ParseEntity(iVar3);
        local_d4 = CONCAT44(local_48,(undefined4)local_d4);
        if (((undefined4 ******)local_48 == (undefined4 ******)0x0) ||
           (iVar3 = FUN_1170ba20((int)&local_d4 + 4), iVar3 == param_1 + 0xc0)) {
          FUN_1170aa90(&local_5c,local_78);
          FUN_1170ee70();
        }
        FUN_1170ea60();
        goto LAB_11711725;
      }
      cVar1 = FUN_100fd0c0(local_a8,"ProximityTrigger");
      if (cVar1 == '\0') {
        cVar1 = FUN_100fd0c0(local_a8,"EnterInstance");
        if (cVar1 != '\0') {
          local_30 = &local_40;
          local_40 = (undefined4 ****)((uint)local_40 & 0xffffff00);
          local_18 = &local_28;
          local_28 = (undefined4 *****)((uint)local_28 & 0xffffff00);
          local_10 = (undefined4 ******)0x0;
          local_2c = local_30;
          local_14 = local_18;
          CInstancePortalDef__ParseXML(iVar3);
          local_d4 = CONCAT44(local_2c,(undefined4)local_d4);
          if (((undefined4 ******)local_2c == (undefined4 ******)0x0) ||
             (iVar3 = FUN_1170b700((int)&local_d4 + 4), iVar3 == param_1 + 0x78)) {
            FUN_1170a940(&local_40,&local_5c);
            FUN_1170ee00();
          }
          if (((undefined4 ******)local_14 != &local_28) &&
             ((undefined4 ******)local_14 != (undefined4 ******)0x0)) {
            FUN_10c3d5d0(local_14);
          }
          ppppppuVar5 = (undefined4 ******)&local_40;
          ppppppuVar4 = (undefined4 ******)local_2c;
          goto LAB_11711584;
        }
        cVar1 = FUN_100fd0c0(local_a8,"SwitchRegionTrigger");
        if (cVar1 != '\0') {
          FUN_1170e190();
          FUN_118a3270(iVar3);
          local_d4 = CONCAT44(local_44,(undefined4)local_d4);
          if (((undefined4 ******)local_44 == (undefined4 ******)0x0) ||
             (iVar3 = FUN_1170c060((int)&local_d4 + 4), iVar3 == param_1 + 0x60)) {
            FUN_1170af50(&local_58,local_90);
            FUN_1170f090();
          }
          ppppppuVar5 = (undefined4 ******)&local_40;
          ppppppuVar4 = (undefined4 ******)local_2c;
          goto LAB_1171156d;
        }
        cVar1 = FUN_100fd0c0(local_a8,"MHPlayerSpawnPoint");
        if (cVar1 == '\0') {
          cVar1 = FUN_100fd0c0(local_a8,"LogicPoint");
          if (cVar1 == '\0') {
            cVar1 = FUN_100fd0c0(local_a8,"MHPathPoint");
            if (cVar1 == '\0') {
              cVar1 = FUN_100fd0c0(local_a8,"WayPointList");
              if (cVar1 != '\0') {
                FUN_118a3820(iVar3);
              }
            }
            else {
              FUN_1170dcc0();
              FUN_118a3b90(iVar3);
              FUN_1170abc0(local_cc,local_cc);
              FUN_1170ef10();
              FUN_1170eac0();
            }
          }
          else {
            local_28 = (undefined4 *****)local_38;
            local_38[0] = 0;
            local_10 = (undefined4 *****)local_20;
            local_20[0] = 0;
            local_24 = local_28;
            local_c = local_10;
            FUN_118a3710(iVar3);
            FUN_1170ff40(local_54);
            FUN_1170ea20();
          }
        }
        else {
          FUN_1170dfb0();
          FUN_118a3020(iVar3);
          if (local_68 == 3) {
            cVar1 = FUN_117118e0();
            if (cVar1 == '\0') {
              FUN_11710000(local_90);
              FUN_1170eca0();
              goto LAB_11711725;
            }
          }
          else if (local_70 == 0) {
            cVar1 = FUN_11711850(local_40);
            if (cVar1 == '\0') {
              FUN_1170fee0(local_90);
            }
          }
          else {
            cVar1 = FUN_11711820();
            if (cVar1 == '\0') {
              FUN_1170fec0(local_90);
              FUN_1170eca0();
              goto LAB_11711725;
            }
          }
          FUN_1170eca0();
        }
      }
      else {
        local_48 = &local_58;
        local_58._0_1_ = 0;
        local_2c = &local_3c;
        local_14 = &local_24;
        local_3c._0_1_ = 0;
        local_24 = (undefined4 *****)((uint)local_24 & 0xffffff00);
        local_40 = (undefined4 *****)0x0;
        local_44 = local_48;
        local_28 = local_2c;
        local_10 = local_14;
        FUN_118a2e90(iVar3);
        local_d4 = CONCAT44(local_28,(undefined4)local_d4);
        if (((undefined4 ******)local_28 == (undefined4 ******)0x0) ||
           (iVar3 = FUN_1170bed0((int)&local_d4 + 4), iVar3 == param_1 + 0x48)) {
          FUN_1170ae20(&local_3c,local_78);
          FUN_1170f000();
          FUN_1170a7d0(&local_40,local_78);
          FUN_1170f000();
        }
        if (((undefined4 ******)local_10 != &local_24) &&
           ((undefined4 ******)local_10 != (undefined4 ******)0x0)) {
          FUN_10c3d5d0(local_10);
        }
        ppppppuVar5 = (undefined4 ******)&local_3c;
        ppppppuVar4 = (undefined4 ******)local_28;
LAB_1171156d:
        if ((ppppppuVar4 != ppppppuVar5) && (ppppppuVar4 != (undefined4 ******)0x0)) {
          FUN_10c3d5d0(ppppppuVar4);
        }
        ppppppuVar5 = (undefined4 ******)&local_58;
        ppppppuVar4 = (undefined4 ******)local_44;
LAB_11711584:
        if ((ppppppuVar4 != ppppppuVar5) && (ppppppuVar4 != (undefined4 ******)0x0)) {
          FUN_10c3d5d0(ppppppuVar4);
        }
      }
LAB_11711725:
      iVar3 = FUN_100f3d50("Entity");
      if ((local_94 != local_a8) && (local_94 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_94);
      }
    }
  }
  FUN_100f6910(iVar2);
  FUN_11a89daa();
  return;
}

