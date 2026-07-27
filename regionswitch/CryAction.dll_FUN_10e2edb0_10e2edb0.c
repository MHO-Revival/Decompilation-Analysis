
/* [RE-AUTO c0]
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

void __thiscall FUN_10e2edb0(int param_1,undefined4 param_2)

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
  
  local_8 = DAT_113dd8c0 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_10050e50(param_2);
  if (iVar2 == 0) {
    FUN_112bed8e();
    return;
  }
  iVar3 = FUN_1004aff0();
  if (iVar3 != 0) {
    iVar3 = FUN_1004b020("Entity");
    while (iVar3 != 0) {
      local_98 = local_a8;
      local_a8[0] = 0;
      local_94 = local_98;
      FUN_10050f70(iVar3,"EntityClass",local_98,&DAT_1130bf64);
      cVar1 = FUN_10033a50(local_a8,"MHMonsterSpawnPoint");
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
        FUN_10fcfdb0(iVar3);
        local_d4 = CONCAT44(local_48,(undefined4)local_d4);
        if (((undefined4 ******)local_48 == (undefined4 ******)0x0) ||
           (iVar3 = FUN_10e294a0((int)&local_d4 + 4), iVar3 == param_1 + 0xc0)) {
          FUN_10e28510(&local_5c,local_78);
          FUN_10e2c9e0();
        }
        FUN_10e2c5d0();
        goto LAB_10e2f2a5;
      }
      cVar1 = FUN_10033a50(local_a8,"ProximityTrigger");
      if (cVar1 == '\0') {
        cVar1 = FUN_10033a50(local_a8,"EnterInstance");
        if (cVar1 != '\0') {
          local_30 = &local_40;
          local_40 = (undefined4 ****)((uint)local_40 & 0xffffff00);
          local_18 = &local_28;
          local_28 = (undefined4 *****)((uint)local_28 & 0xffffff00);
          local_10 = (undefined4 ******)0x0;
          local_2c = local_30;
          local_14 = local_18;
          FUN_10fcfc10(iVar3);
          local_d4 = CONCAT44(local_2c,(undefined4)local_d4);
          if (((undefined4 ******)local_2c == (undefined4 ******)0x0) ||
             (iVar3 = FUN_10e29180((int)&local_d4 + 4), iVar3 == param_1 + 0x78)) {
            FUN_10e283c0(&local_40,&local_5c);
            FUN_10e2c970();
          }
          if (((undefined4 ******)local_14 != &local_28) &&
             ((undefined4 ******)local_14 != (undefined4 ******)0x0)) {
            FUN_10653dc0(local_14);
          }
          ppppppuVar5 = (undefined4 ******)&local_40;
          ppppppuVar4 = (undefined4 ******)local_2c;
          goto LAB_10e2f104;
        }
        cVar1 = FUN_10033a50(local_a8,"SwitchRegionTrigger");
        if (cVar1 != '\0') {
          FUN_10e2bd00();
          FUN_10fcfab0(iVar3);
          local_d4 = CONCAT44(local_44,(undefined4)local_d4);
          if (((undefined4 ******)local_44 == (undefined4 ******)0x0) ||
             (iVar3 = FUN_10e29ae0((int)&local_d4 + 4), iVar3 == param_1 + 0x60)) {
            FUN_10e289d0(&local_58,local_90);
            FUN_10e2cc00();
          }
          ppppppuVar5 = (undefined4 ******)&local_40;
          ppppppuVar4 = (undefined4 ******)local_2c;
          goto LAB_10e2f0ed;
        }
        cVar1 = FUN_10033a50(local_a8,"MHPlayerSpawnPoint");
        if (cVar1 == '\0') {
          cVar1 = FUN_10033a50(local_a8,"LogicPoint");
          if (cVar1 == '\0') {
            cVar1 = FUN_10033a50(local_a8,"MHPathPoint");
            if (cVar1 == '\0') {
              cVar1 = FUN_10033a50(local_a8,"WayPointList");
              if (cVar1 != '\0') {
                FUN_10fd00f0(iVar3);
              }
            }
            else {
              FUN_10e2b830();
              FUN_10fd0460(iVar3);
              FUN_10e28640(local_cc,local_cc);
              FUN_10e2ca80();
              FUN_10e2c630();
            }
          }
          else {
            local_28 = (undefined4 *****)local_38;
            local_38[0] = 0;
            local_10 = (undefined4 *****)local_20;
            local_20[0] = 0;
            local_24 = local_28;
            local_c = local_10;
            FUN_10fcffc0(iVar3);
            FUN_10e2da30(local_54);
            FUN_10e2c590();
          }
        }
        else {
          FUN_10e2bb20();
          FUN_10fcf860(iVar3);
          if (local_68 == 3) {
            cVar1 = FUN_10e2f460();
            if (cVar1 == '\0') {
              FUN_10e2daf0(local_90);
              FUN_10e2c810();
              goto LAB_10e2f2a5;
            }
          }
          else if (local_70 == 0) {
            cVar1 = FUN_10e2f3d0(local_40);
            if (cVar1 == '\0') {
              FUN_10e2d9d0(local_90);
            }
          }
          else {
            cVar1 = FUN_10e2f3a0();
            if (cVar1 == '\0') {
              FUN_10e2d9b0(local_90);
              FUN_10e2c810();
              goto LAB_10e2f2a5;
            }
          }
          FUN_10e2c810();
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
        FUN_10fcf6d0(iVar3);
        local_d4 = CONCAT44(local_28,(undefined4)local_d4);
        if (((undefined4 ******)local_28 == (undefined4 ******)0x0) ||
           (iVar3 = FUN_10e29950((int)&local_d4 + 4), iVar3 == param_1 + 0x48)) {
          FUN_10e288a0(&local_3c,local_78);
          FUN_10e2cb70();
          FUN_10e28250(&local_40,local_78);
          FUN_10e2cb70();
        }
        if (((undefined4 ******)local_10 != &local_24) &&
           ((undefined4 ******)local_10 != (undefined4 ******)0x0)) {
          FUN_10653dc0(local_10);
        }
        ppppppuVar5 = (undefined4 ******)&local_3c;
        ppppppuVar4 = (undefined4 ******)local_28;
LAB_10e2f0ed:
        if ((ppppppuVar4 != ppppppuVar5) && (ppppppuVar4 != (undefined4 ******)0x0)) {
          FUN_10653dc0(ppppppuVar4);
        }
        ppppppuVar5 = (undefined4 ******)&local_58;
        ppppppuVar4 = (undefined4 ******)local_44;
LAB_10e2f104:
        if ((ppppppuVar4 != ppppppuVar5) && (ppppppuVar4 != (undefined4 ******)0x0)) {
          FUN_10653dc0(ppppppuVar4);
        }
      }
LAB_10e2f2a5:
      iVar3 = FUN_1004b090("Entity");
      if ((local_94 != local_a8) && (local_94 != (undefined1 *)0x0)) {
        FUN_10653dc0(local_94);
      }
    }
  }
  FUN_10050eb0(iVar2);
  FUN_112bed8e();
  return;
}

