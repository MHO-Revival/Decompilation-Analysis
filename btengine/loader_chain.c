

//========================================================
// ParseNode @ 10499f10
// CALL TARGETS:
    1049a00a -> 100b7960 FUN_100b7960
    1049a032 -> 100fd0c0 FUN_100fd0c0
    1049a0b0 -> 1049c080 FUN_1049c080
    1049a0bf -> 10c3d580 FUN_10c3d580
    1049a1c8 -> 10c3d5d0 FUN_10c3d5d0
    1049a1da -> 11a89daa FUN_11a89daa
    1049a1ee -> 100fd0c0 FUN_100fd0c0
    1049a27f -> 10c3d580 FUN_10c3d580
    1049a2f1 -> 10c3d580 FUN_10c3d580
    1049a330 -> 100fd0c0 FUN_100fd0c0
    1049a34a -> 10c3d580 FUN_10c3d580
    1049a38f -> 100fd0c0 FUN_100fd0c0
    1049a3f3 -> 1049e300 FUN_1049e300
    1049a460 -> 1049e390 FUN_1049e390
    1049a471 -> 104bfed0 FUN_104bfed0
    1049a4dc -> 1049e440 FUN_1049e440
    1049a55a -> 1049e4f0 FUN_1049e4f0
    1049a5da -> 1049e5a0 FUN_1049e5a0
    1049a633 -> 1049e650 FUN_1049e650
    1049a679 -> 1049e6e0 FUN_1049e6e0
    1049a6bb -> 10c3d580 FUN_10c3d580
    1049a737 -> 1049e800 FUN_1049e800
    1049a74c -> 100fd0c0 FUN_100fd0c0
    1049a761 -> 100fd0c0 FUN_100fd0c0
    1049a7d0 -> 100b5f70 FUN_100b5f70
    1049a7df -> 11316810 FUN_11316810
    1049a80c -> 11316810 FUN_11316810
    1049a84a -> 11316b10 FUN_11316b10
    1049a85e -> 10c3d5d0 FUN_10c3d5d0
    1049a881 -> 113168d0 FUN_113168d0
    1049a88f -> 11316b50 FUN_11316b50
    1049a8a2 -> 10493360 FUN_10493360
    1049a8af -> 1049ae30 LoadBehaviorTree::ParseNodeCustomAttrs
    1049a8eb -> 10495eb0 FUN_10495eb0
    1049a921 -> 10494210 FUN_10494210
    1049a959 -> 10495de0 FUN_10495de0
    1049a9a5 -> 10c3d580 FUN_10c3d580
    1049aac9 -> 10499f10 LoadBehaviorTree::ParseNode
    1049ab41 -> 10c3d5d0 FUN_10c3d5d0
    1049ab53 -> 11a89daa FUN_11a89daa
    1049ab71 -> 10499900 FUN_10499900
    1049ab89 -> 10499900 FUN_10499900
    1049aba2 -> 10499900 FUN_10499900
    1049abba -> 10499900 FUN_10499900
    1049abd3 -> 10499900 FUN_10499900
    1049abeb -> 10499900 FUN_10499900
    1049ac03 -> 10499900 FUN_10499900
    1049ac1b -> 10499900 FUN_10499900
    1049ac33 -> 10499900 FUN_10499900
    1049ac4c -> 10499900 FUN_10499900
    1049ac66 -> 10499900 FUN_10499900
    1049ac7f -> 10499900 FUN_10499900
    1049ac9e -> 10499900 FUN_10499900
    1049acc2 -> 10499900 FUN_10499900
    1049ace1 -> 10499900 FUN_10499900
    1049acff -> 10499900 FUN_10499900
//========================================================

/* WARNING: Removing unreachable block (ram,0x1049ab0b) */
/* WARNING: Removing unreachable block (ram,0x1049ab2b) */
/* WARNING: Type propagation algorithm not settling */
/* [RE-R1]
   src: LoadBehaviorTree.cpp
   strings:
     ""Node_id""
     ""Reference""
     ""Selector""
     ""SelectorType""
     ""Random""
     ""General""
     ""RandomAttack""
     ""Sequence""
     ""SequenceType""
     ""Filter"" */

void __thiscall
LoadBehaviorTree__ParseNode(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  code *pcVar9;
  int *piVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  int local_d8;
  undefined4 *local_d4;
  int local_d0 [3];
  undefined1 local_c1;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int *local_ac;
  int local_a8;
  char local_a2;
  char local_a1;
  int *local_a0;
  int *local_9c [7];
  undefined1 local_80 [20];
  undefined1 *local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  byte local_20 [16];
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_bc = *param_2;
  local_c0 = param_2;
  local_d8 = param_2[0x16];
  local_9c[0] = param_4;
  local_d4 = param_3;
  if (local_d8 == 0) {
    local_a0 = (int *)0x0;
  }
  else {
    local_a0 = *(int **)(local_d8 + 0x40);
  }
  local_d0[2] = 0;
  local_a8 = param_1;
  cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Node_id",local_d0 + 2);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x38c,"Failed to find \'Node_id\' attribute.");
  }
  local_10 = local_20;
  local_20[0] = 0;
  local_c = local_10;
  cVar3 = (**(code **)(*(int *)*param_3 + 0x28))(&DAT_11dbabc0,local_20);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x39a,"Failed to find \'Type\' attribute.");
  }
  local_ac = (int *)(**(code **)(*(int *)*param_3 + 0x5c))(&DAT_11da7300);
  pbVar6 = local_c;
  local_a1 = '\x01';
  if ((param_4 == (int *)0x0) && (local_9c[0] = param_4, local_a0 != (int *)0x0)) {
    local_9c[0] = local_a0;
  }
  local_a2 = '\0';
  if (((int)local_10 - (int)local_c == 4) &&
     (iVar4 = FUN_100b7960(local_c,&DAT_11dbaf60,4), iVar4 == 0)) {
    local_a1 = '\0';
    piVar8 = local_9c[0];
    piVar10 = local_9c[0];
  }
  else {
    cVar3 = FUN_100fd0c0(local_20,"Reference");
    if (cVar3 != '\0') {
      pcVar5 = (char *)(**(code **)(*(int *)*param_3 + 0x5c))("Reference");
      if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
        pcVar11 = pcVar5;
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        if (pcVar11 != pcVar5 + 1) {
          local_28 = local_38;
          local_a0 = (int *)0x0;
          local_58 = local_68;
          local_40 = local_50;
          local_38[0] = 0;
          local_68[0] = 0;
          local_50[0] = 0;
          local_54 = local_58;
          local_3c = local_40;
          local_24 = local_28;
          cVar3 = FUN_1049c080(pcVar5,local_38,local_68,local_40);
          if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x3cc,"Failed to parse reference string: %s",pcVar5);
          }
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(100);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                   ,0x3b7,"Empty Reference!");
    }
    cVar3 = FUN_100fd0c0(local_20,"Selector");
    if (cVar3 != '\0') {
      pbVar6 = (byte *)(**(code **)(*(int *)*param_3 + 0x5c))("SelectorType");
      if (pbVar6 == (byte *)0x0) {
LAB_1049abbf:
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x3f7,"Unsupported \'SelectorType\': \'%s\'",pbVar6);
      }
      pcVar5 = "Random";
      pbVar12 = pbVar6;
      do {
        bVar1 = *pbVar12;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a240:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a245;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a240;
        pbVar12 = pbVar12 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a245:
      if (uVar7 != 0) {
        pcVar5 = "General";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a274:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a279;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a274;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a279:
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x54);
        }
        pcVar5 = "RandomAttack";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a2e2:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a2e7;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a2e2;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a2e7:
        if (uVar7 != 0) goto LAB_1049abbf;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x70);
    }
    cVar3 = FUN_100fd0c0(local_20,"Sequence");
    if (cVar3 != '\0') {
      (**(code **)(*(int *)*param_3 + 0x5c))("SequenceType");
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x54);
    }
    cVar3 = FUN_100fd0c0(local_20,"Filter");
    if (cVar3 == '\0') {
      cVar3 = FUN_100fd0c0(local_20,"Action");
      if ((cVar3 == '\0') && (cVar3 = FUN_100fd0c0(local_20,"Condition"), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x493,"Unsupported Node Type: \'%s\'",pbVar6);
      }
      pcVar5 = "Action";
      do {
        bVar1 = *pbVar6;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a796:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a79b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a796;
        pbVar6 = pbVar6 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a79b:
      local_a2 = '\x01';
      iVar4 = (**(code **)(*(int *)*param_3 + 0x5c))("Operation");
      local_b4 = iVar4;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x48e,"Failed to retrieve operation type!");
      }
      FUN_100b5f70(iVar4,&local_c1);
      FUN_11316810(local_80);
      cVar3 = (**(code **)(**(int **)(DAT_123bb90c + 0x14) + 0xc))(&local_b8);
      if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x480,
                     "Failed to fined the leaf class for operation type: \'%s\', \n please ensure the corresponding leaf class has been registered in leaf factory!"
                     ,iVar4);
      }
      FUN_11316810(local_80);
      pcVar9 = (code *)(**(code **)(**(int **)(DAT_123bb90c + 0x14) + 8))
                                 (local_e0,local_9c[0],local_c0[0xe],0);
      piVar8 = (int *)(*pcVar9)();
      piVar8[0x17] = 2 - (uint)(uVar7 != 0);
      FUN_11316b10(local_b4);
      piVar10 = local_9c[0];
      if ((local_6c != local_80) && (local_6c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_6c);
        piVar10 = local_9c[0];
      }
    }
    else {
      pbVar6 = (byte *)(**(code **)(*(int *)*param_3 + 0x5c))("Filter_Type");
      piVar10 = local_9c[0];
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x468,"Unsupported Filter Type: \'%s\'",0);
      }
      pcVar5 = "Logger";
      pbVar12 = pbVar6;
      do {
        bVar1 = *pbVar12;
        bVar15 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_1049a3e0:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_1049a3e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar15 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_1049a3e0;
        pbVar12 = pbVar12 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_1049a3e5:
      if (uVar7 == 0) {
        piVar8 = (int *)FUN_1049e300();
      }
      else {
        pcVar5 = "Timer";
        pbVar12 = pbVar6;
        do {
          bVar1 = *pbVar12;
          bVar15 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_1049a426:
            uVar7 = -(uint)bVar15 | 1;
            goto LAB_1049a42b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar15 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_1049a426;
          pbVar12 = pbVar12 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1049a42b:
        if (uVar7 == 0) {
          local_d0[1] = 0xbf800000;
          cVar3 = (**(code **)(*(int *)*param_3 + 0x44))(&DAT_11dbb648,local_d0 + 1);
          piVar10 = local_9c[0];
          if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x422,"Failed to retrieve  \'Time\' param for Timer.");
          }
          piVar8 = (int *)FUN_1049e390();
          FUN_104bfed0();
        }
        else {
          pcVar5 = "Counter";
          pbVar12 = pbVar6;
          do {
            bVar1 = *pbVar12;
            bVar15 = bVar1 < (byte)*pcVar5;
            if (bVar1 != *pcVar5) {
LAB_1049a4a2:
              uVar7 = -(uint)bVar15 | 1;
              goto LAB_1049a4a7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar12[1];
            bVar15 = bVar1 < (byte)pcVar5[1];
            if (bVar1 != pcVar5[1]) goto LAB_1049a4a2;
            pbVar12 = pbVar12 + 2;
            pcVar5 = pcVar5 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_1049a4a7:
          if (uVar7 == 0) {
            local_d0[0] = -1;
            cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",local_d0);
            piVar10 = local_9c[0];
            if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                           "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                           ,0x42f,"Failed to retrieve  \'Times\' param for Counter.");
            }
            piVar8 = (int *)FUN_1049e440();
            piVar8[0x17] = 0;
            piVar8[0x16] = local_d0[0];
          }
          else {
            pbVar13 = (byte *)&DAT_11dbb71c;
            pbVar12 = pbVar6;
            do {
              bVar1 = *pbVar12;
              bVar15 = bVar1 < *pbVar13;
              if (bVar1 != *pbVar13) {
LAB_1049a520:
                uVar7 = -(uint)bVar15 | 1;
                goto LAB_1049a525;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar12[1];
              bVar15 = bVar1 < pbVar13[1];
              if (bVar1 != pbVar13[1]) goto LAB_1049a520;
              pbVar12 = pbVar12 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_1049a525:
            if (uVar7 == 0) {
              local_b4 = -1;
              cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",&local_b4);
              piVar10 = local_9c[0];
              if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                             "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                             ,0x43c,"Failed to retrieve  \'Times\' param for Loop.");
              }
              piVar8 = (int *)FUN_1049e4f0();
              piVar8[0x16] = local_b4;
              piVar8[0x17] = 0;
            }
            else {
              pcVar5 = "Until_Fails_Limited";
              pbVar12 = pbVar6;
              do {
                bVar1 = *pbVar12;
                bVar15 = bVar1 < (byte)*pcVar5;
                if (bVar1 != *pcVar5) {
LAB_1049a5a0:
                  uVar7 = -(uint)bVar15 | 1;
                  goto LAB_1049a5a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar12[1];
                bVar15 = bVar1 < (byte)pcVar5[1];
                if (bVar1 != pcVar5[1]) goto LAB_1049a5a0;
                pbVar12 = pbVar12 + 2;
                pcVar5 = pcVar5 + 2;
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_1049a5a5:
              if (uVar7 == 0) {
                local_b8 = -1;
                cVar3 = (**(code **)(*(int *)*param_3 + 0x54))("Times",&local_b8);
                piVar10 = local_9c[0];
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                               "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                               ,0x449,"Failed to retrieve  \'Times\' param for Until_Fails_Limited."
                              );
                }
                piVar8 = (int *)FUN_1049e5a0();
                piVar8[0x16] = local_b8;
                piVar8[0x17] = 0;
              }
              else {
                pcVar5 = "Until_Fails";
                pbVar12 = pbVar6;
                do {
                  bVar1 = *pbVar12;
                  bVar15 = bVar1 < (byte)*pcVar5;
                  if (bVar1 != *pcVar5) {
LAB_1049a620:
                    uVar7 = -(uint)bVar15 | 1;
                    goto LAB_1049a625;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar12[1];
                  bVar15 = bVar1 < (byte)pcVar5[1];
                  if (bVar1 != pcVar5[1]) goto LAB_1049a620;
                  pbVar12 = pbVar12 + 2;
                  pcVar5 = pcVar5 + 2;
                } while (bVar1 != 0);
                uVar7 = 0;
LAB_1049a625:
                if (uVar7 == 0) {
                  piVar8 = (int *)FUN_1049e650();
                }
                else {
                  pcVar5 = "Until_Success";
                  pbVar12 = pbVar6;
                  do {
                    bVar1 = *pbVar12;
                    bVar15 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_1049a666:
                      uVar7 = -(uint)bVar15 | 1;
                      goto LAB_1049a66b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar12[1];
                    bVar15 = bVar1 < (byte)pcVar5[1];
                    if (bVar1 != pcVar5[1]) goto LAB_1049a666;
                    pbVar12 = pbVar12 + 2;
                    pcVar5 = pcVar5 + 2;
                  } while (bVar1 != 0);
                  uVar7 = 0;
LAB_1049a66b:
                  if (uVar7 == 0) {
                    piVar8 = (int *)FUN_1049e6e0();
                  }
                  else {
                    pcVar5 = "Enter_Exit";
                    pbVar12 = pbVar6;
                    do {
                      bVar1 = *pbVar12;
                      bVar15 = bVar1 < (byte)*pcVar5;
                      if (bVar1 != *pcVar5) {
LAB_1049a6b0:
                        uVar7 = -(uint)bVar15 | 1;
                        goto LAB_1049a6b5;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar12[1];
                      bVar15 = bVar1 < (byte)pcVar5[1];
                      if (bVar1 != pcVar5[1]) goto LAB_1049a6b0;
                      pbVar12 = pbVar12 + 2;
                      pcVar5 = pcVar5 + 2;
                    } while (bVar1 != 0);
                    uVar7 = 0;
LAB_1049a6b5:
                    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_10c3d580(0x5c);
                    }
                    pbVar13 = &DAT_11dbb75c;
                    pbVar12 = pbVar6;
                    do {
                      bVar1 = *pbVar12;
                      bVar15 = bVar1 < *pbVar13;
                      if (bVar1 != *pbVar13) {
LAB_1049a720:
                        uVar7 = -(uint)bVar15 | 1;
                        goto LAB_1049a725;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar12[1];
                      bVar15 = bVar1 < pbVar13[1];
                      if (bVar1 != pbVar13[1]) goto LAB_1049a720;
                      pbVar12 = pbVar12 + 2;
                      pbVar13 = pbVar13 + 2;
                    } while (bVar1 != 0);
                    uVar7 = 0;
LAB_1049a725:
                    if (uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_3,
                                   "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                                   ,0x462,"Unsupported filter type : \'%s\'!",pbVar6);
                    }
                    piVar8 = (int *)FUN_1049e800();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  piVar8[9] = local_d0[2];
  FUN_113168d0(local_ac);
  FUN_11316b50(local_ac);
  piVar8[0xe] = piVar8[0xe] | local_c0[0xf];
  FUN_10493360();
  LoadBehaviorTree__ParseNodeCustomAttrs(param_3,piVar8);
  if (((local_a1 != '\0') && (piVar10 != (int *)0x0)) && (piVar8 != piVar10)) {
    puVar2 = (undefined4 *)piVar10[5];
    if (puVar2 == (undefined4 *)piVar10[6]) {
      local_ac = piVar8;
      FUN_10495eb0(puVar2,&local_ac,piVar10 + 4,1,1);
    }
    else {
      *puVar2 = piVar8;
      piVar10[5] = piVar10[5] + 4;
      local_ac = piVar8;
    }
  }
  if (local_d8 == 0) {
    iVar4 = FUN_10494210(1,*(undefined4 *)(local_bc + 0x38));
    if ((iVar4 != 0) && (piVar8[9] != -1)) {
      local_b0 = piVar8[9];
      local_ac = piVar8;
      FUN_10495de0(local_dc,&local_b0);
      if (*(int *)(iVar4 + 0x24) != 0) {
        piVar8[0x13] = *(int *)(iVar4 + 0x24);
        if ((char)local_d8 != '\0') goto LAB_1049a979;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),0,
                 "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                 ,0x4bb,"Failed to record normal node into id map!");
  }
  if (local_a0 == (int *)0x0) {
    *(int **)(local_d8 + 0x40) = piVar8;
  }
LAB_1049a979:
  if (local_a2 == '\0') {
    piVar10 = (int *)(**(code **)(*(int *)*param_3 + 0x6c))("EventBT");
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x50);
    }
    piVar10 = (int *)(**(code **)(*(int *)*local_d4 + 0x6c))("Connector");
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
      local_a0 = (int *)0x0;
      iVar4 = (**(code **)(*piVar10 + 100))();
      if (0 < iVar4) {
        piVar14 = (int *)0x0;
        do {
          local_9c[0] = (int *)(**(code **)(*piVar10 + 0x68))(piVar14);
          if (((local_9c[0] == (int *)0x0) ||
              ((**(code **)(*local_9c[0] + 4))(), local_9c[0] == (int *)0x0)) ||
             (cVar3 = (**(code **)(*local_9c[0] + 0x10))(&DAT_11dbb4bc), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
            FUN_10499900(*(undefined4 *)(local_a8 + 0x3c),local_9c,
                         "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                         ,0x4d7,"Unrecognized child Node!");
          }
          cVar3 = LoadBehaviorTree__ParseNode(local_c0,local_9c,piVar8,local_a0);
          if (cVar3 == '\0') {
            if (local_9c[0] != (int *)0x0) {
              (**(code **)(*local_9c[0] + 8))();
            }
            (**(code **)(*piVar10 + 8))();
            if ((local_c != local_20) && (local_c != (byte *)0x0)) {
              FUN_10c3d5d0(local_c);
            }
            FUN_11a89daa();
            return;
          }
          if (local_9c[0] != (int *)0x0) {
            (**(code **)(*local_9c[0] + 8))();
          }
          local_a0 = (int *)((int)local_a0 + 1);
          iVar4 = (**(code **)(*piVar10 + 100))();
          piVar14 = local_a0;
        } while ((int)local_a0 < iVar4);
      }
      (**(code **)(*piVar10 + 8))();
    }
  }
  if ((local_c != local_20) && (local_c != (byte *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  FUN_11a89daa();
  return;
}



//========================================================
// FUN_104934f0 @ 104934f0
// CALL TARGETS:
    10493566 -> 11a8911f FUN_11a8911f
    10493590 -> 100b62c0 FUN_100b62c0
    104935a2 -> 100d82a0 FUN_100d82a0
    104935b6 -> 10c3d5d0 FUN_10c3d5d0
    104935d3 -> 100b62c0 FUN_100b62c0
    104935e5 -> 100d82a0 FUN_100d82a0
    104935f9 -> 10c3d5d0 FUN_10c3d5d0
    10493616 -> 100b62c0 FUN_100b62c0
    10493628 -> 100d82a0 FUN_100d82a0
    1049363c -> 10c3d5d0 FUN_10c3d5d0
    10493659 -> 100b62c0 FUN_100b62c0
    1049366b -> 100d82a0 FUN_100d82a0
    1049367f -> 10c3d5d0 FUN_10c3d5d0
    1049369c -> 100b62c0 FUN_100b62c0
    104936ae -> 100d82a0 FUN_100d82a0
    104936c2 -> 10c3d5d0 FUN_10c3d5d0
    104936df -> 100b62c0 FUN_100b62c0
    104936f1 -> 100d82a0 FUN_100d82a0
    10493705 -> 10c3d5d0 FUN_10c3d5d0
    10493722 -> 100b62c0 FUN_100b62c0
    10493734 -> 100d82a0 FUN_100d82a0
    10493748 -> 10c3d5d0 FUN_10c3d5d0
    10493765 -> 100b62c0 FUN_100b62c0
    10493777 -> 100d82a0 FUN_100d82a0
    1049378b -> 10c3d5d0 FUN_10c3d5d0
    10493799 -> 100d93e0 FUN_100d93e0
    104937e1 -> 100b62c0 FUN_100b62c0
    104937e9 -> 1048b0d0 FUN_1048b0d0
    104937f8 -> 100ede30 FUN_100ede30
    10493811 -> 100b7960 FUN_100b7960
    10493832 -> 10c3d5d0 FUN_10c3d5d0
    10493866 -> 1048b3c0 FUN_1048b3c0
    1049389a -> 100ede30 FUN_100ede30
    104938a6 -> 11316810 FUN_11316810
    104938b3 -> 104b84a0 FUN_104b84a0
    104938c7 -> 10c3d5d0 FUN_10c3d5d0
    10493910 -> 11316810 FUN_11316810
    1049391f -> 104b84a0 FUN_104b84a0
    10493931 -> 104b8450 FUN_104b8450
    10493945 -> 10c3d5d0 FUN_10c3d5d0
    10493955 -> 11a89daa FUN_11a89daa
//========================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Node_id""
     ""SelectorType""
     ""Operation""
     ""Filter_Type""
     ""FilterType""
     ""SequenceType"" */

void __thiscall FUN_104934f0(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_4c [8];
  uint local_44;
  undefined4 local_40;
  char local_3a;
  undefined1 local_39;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_40 = param_2;
  if ((DAT_123c2cc4 & 1) == 0) {
    DAT_123c2cc4 = DAT_123c2cc4 | 1;
    DAT_123c2cd8 = 0;
    _DAT_123c2cc8 = 0;
    DAT_123c2ccc = 0;
    _DAT_123c2cd0 = &DAT_123c2cc8;
    _DAT_123c2cd4 = &DAT_123c2cc8;
    DAT_123c2cdc = local_39;
    FUN_11a8911f(&LAB_11c6e860);
  }
  if (DAT_123c2cd8 == 0) {
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0(&DAT_11da7300,&DAT_11da7304);
    FUN_100d82a0(local_4c,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Node_id","");
    FUN_100d82a0(local_4c,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0(&DAT_11dbabc0,&DAT_11dbabc4);
    FUN_100d82a0(local_4c,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("SelectorType","");
    FUN_100d82a0(local_4c,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Operation","");
    FUN_100d82a0(local_4c,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("Filter_Type","");
    FUN_100d82a0(local_4c,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("FilterType","");
    FUN_100d82a0(local_4c,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    local_10 = local_20;
    local_c = local_10;
    FUN_100b62c0("SequenceType","");
    FUN_100d82a0(local_4c,local_20);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
  }
  puVar3 = (undefined *)FUN_100d93e0(param_2);
  if (puVar3 != &DAT_123c2cc8) goto LAB_1049394d;
  pcVar4 = (char *)(**(code **)(*param_1 + 0x34))();
  if (*pcVar4 == '\0') goto LAB_1049394d;
  local_28 = local_38;
  pcVar2 = pcVar4;
  do {
    pcVar7 = pcVar2;
    pcVar2 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  local_24 = local_28;
  FUN_100b62c0(pcVar4,pcVar7);
  FUN_1048b0d0();
  iVar5 = FUN_100ede30(local_20,0,3);
  if (*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0x14) == 3) {
    iVar5 = FUN_100b7960(*(int *)(iVar5 + 0x14),&DAT_11dbb078,3);
    if (iVar5 != 0) goto LAB_10493821;
    bVar1 = true;
  }
  else {
LAB_10493821:
    bVar1 = false;
  }
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if (bVar1) {
    if (3 < (uint)(*(int *)(param_3 + 0x10) - *(int *)(param_3 + 0x14))) {
      local_39 = 0;
      uVar6 = FUN_1048b3c0(local_38,local_40,&local_39);
      if ((-1 < (int)uVar6) &&
         (uVar6 < (uint)(((int *)param_1[0xb])[1] - *(int *)param_1[0xb] >> 2))) {
        FUN_100ede30(local_20,3,(*(int *)(param_3 + 0x10) - *(int *)(param_3 + 0x14)) + -3);
        FUN_11316810(local_20);
        FUN_104b84a0(uVar6,&local_40);
        if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_c);
        }
      }
    }
  }
  else {
    local_44 = 0;
    local_3a = '\0';
    iVar5 = (**(code **)*DAT_123bb918)(local_38,local_40,param_3,&local_44,&local_3a);
    if (local_3a == '\0') {
      if (iVar5 != 0) {
        FUN_104b8450(local_44,iVar5);
      }
    }
    else if (local_44 < (uint)(((int *)param_1[0xb])[1] - *(int *)param_1[0xb] >> 2)) {
      FUN_11316810(param_3);
      FUN_104b84a0(local_44,&local_40);
    }
  }
  if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_24);
  }
LAB_1049394d:
  FUN_11a89daa();
  return;
}



//========================================================
// BuildRuntimeNodeMaps @ 104a69f0
// CALL TARGETS:
    104a6a25 -> 1048a120 FUN_1048a120
    104a6a62 -> 1046f170 FUN_1046f170
    104a6a69 -> 104a2a90 FUN_104a2a90
    104a6a89 -> 104a6d40 FUN_104a6d40
    104a6aaa -> 104a8600 FUN_104a8600
    104a6acb -> 11316810 FUN_11316810
    104a6add -> 113168d0 FUN_113168d0
    104a6ae4 -> 113182e0 FUN_113182e0
    104a6b08 -> 104a7460 FUN_104a7460
    104a6b26 -> 1025b990 FUN_1025b990
    104a6b59 -> 104a6d40 FUN_104a6d40
    104a6b7a -> 104a8600 FUN_104a8600
    104a6be9 -> 104a6d40 FUN_104a6d40
    104a6c0d -> 104a86b0 FUN_104a86b0
    104a6c83 -> 1025a680 FUN_1025a680
    104a6cb6 -> 104a6d40 FUN_104a6d40
    104a6ce9 -> EXTERNAL:000001bc _wassert
//========================================================

/* [RE-R1]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

uint __fastcall CBehaviorTreeContext__BuildRuntimeNodeMaps(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint in_EAX;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar9;
  int iVar10;
  int local_24;
  int iStack_20;
  int local_1c;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    in_EAX = *(uint *)(param_1 + 0x200);
    if (((in_EAX != *(uint *)(param_1 + 0x1fc)) &&
        (uVar2 = *(uint *)(DAT_123bb90c + 0x28), in_EAX = FUN_1048a120(param_1 + 0x1ec),
        in_EAX != uVar2)) && (iVar8 = *(int *)(in_EAX + 0x28), iVar8 != 0)) {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(iVar8 + 0x80);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 300);
      local_8 = iVar8;
      FUN_1046f170(iVar8 + 0x84);
      FUN_104a2a90();
      iVar10 = *(int *)(iVar8 + 0x10);
      while (local_10 = iVar10, iVar10 != iVar8 + 8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        uVar9 = extraout_ECX;
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a8600(iVar10 + 0x10);
          iVar10 = local_1c;
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
          FUN_11316810(*(int *)(local_8 + 0x60) + 0x10);
          FUN_113168d0(*(undefined4 *)(iVar10 + 0x9c),&local_c);
          iVar6 = FUN_113182e0();
          uVar9 = extraout_ECX_00;
          if (iVar6 == 0) {
            *(ulonglong *)(param_1 + 0x118) = CONCAT44(iStack_20,local_24);
            *(int *)(param_1 + 0x120) = iVar10;
          }
        }
        FUN_104a7460(local_18,uVar9);
        iVar10 = local_10;
      }
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b990(*(undefined4 *)(param_1 + 0x34));
        *(int *)(param_1 + 0x38) = param_1 + 0x30;
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(int *)(param_1 + 0x3c) = param_1 + 0x30;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      iVar8 = local_8 + 0x20;
      iVar10 = *(int *)(local_8 + 0x28);
      while (iVar10 != iVar8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a8600(iVar10 + 0x10);
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
        }
        iVar6 = *(int *)(iVar10 + 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar10 + 4);
          if (iVar10 == *(int *)(iVar6 + 0xc)) {
            do {
              iVar10 = iVar6;
              iVar6 = *(int *)(iVar10 + 4);
            } while (iVar10 == *(int *)(iVar6 + 0xc));
          }
          if (*(int *)(iVar10 + 0xc) != iVar6) {
            iVar10 = iVar6;
          }
        }
        else {
          for (iVar7 = *(int *)(iVar6 + 8); iVar10 = iVar6, iVar7 != 0; iVar7 = *(int *)(iVar7 + 8))
          {
            iVar6 = iVar7;
          }
        }
      }
      iVar8 = local_8 + 0x44;
      iVar10 = *(int *)(local_8 + 0x4c);
      iVar6 = local_8;
      while (local_8 = iVar6, iVar10 != iVar8) {
        FUN_104a6d40(&local_24,*(undefined4 *)(iVar10 + 0x28));
        if ((iStack_20 != 0) && (local_24 != 0)) {
          puVar5 = (undefined8 *)FUN_104a86b0(iVar10 + 0x10);
          *puVar5 = CONCAT44(iStack_20,local_24);
          *(int *)(puVar5 + 1) = local_1c;
        }
        iVar7 = *(int *)(iVar10 + 0xc);
        iVar6 = local_8;
        if (iVar7 == 0) {
          iVar7 = *(int *)(iVar10 + 4);
          if (iVar10 == *(int *)(iVar7 + 0xc)) {
            do {
              iVar10 = iVar7;
              iVar7 = *(int *)(iVar10 + 4);
            } while (iVar10 == *(int *)(iVar7 + 0xc));
          }
          if (*(int *)(iVar10 + 0xc) != iVar7) {
            iVar10 = iVar7;
          }
        }
        else {
          for (iVar4 = *(int *)(iVar7 + 8); iVar10 = iVar7, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8))
          {
            iVar7 = iVar4;
          }
        }
      }
      local_24 = 0;
      iStack_20 = 0;
      local_1c = 0;
      FUN_1025a680(*(undefined4 *)(iVar6 + 0x7c),&local_24);
      iVar8 = 0;
      local_10 = 0;
      if (0 < *(int *)(iVar6 + 0x7c)) {
        local_c = 0;
        do {
          piVar3 = *(int **)(*(int *)(iVar6 + 0x38) + local_10 * 4);
          if (piVar3 != (int *)0x0) {
            piVar3[1] = piVar3[1] + 1;
            iVar8 = *(int *)(param_1 + 0x10c);
            puVar5 = (undefined8 *)FUN_104a6d40(&local_24,piVar3);
            *(undefined8 *)(iVar8 + local_c) = *puVar5;
            *(undefined4 *)(iVar8 + 8 + local_c) = *(undefined4 *)(puVar5 + 1);
            piVar1 = piVar3 + 1;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*piVar3 + 4))();
            }
            else if (piVar3[1] < 0) {
              _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",
                       0x18c);
            }
          }
          local_c = local_c + 0xc;
          iVar8 = local_10 + 1;
          iVar6 = local_8;
          local_10 = iVar8;
        } while (iVar8 < *(int *)(local_8 + 0x7c));
      }
      *(undefined1 *)(param_1 + 0x171) = 1;
      return CONCAT31((int3)((uint)iVar8 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



//========================================================
// LoadClientBehaviorTree @ 10262030
// CALL TARGETS:
    102620b8 -> 100b62c0 FUN_100b62c0
    102620d0 -> 100f2140 FUN_100f2140
    10262113 -> 10c3d5d0 FUN_10c3d5d0
    10262135 -> 10c3d5d0 FUN_10c3d5d0
    102621f6 -> 10262d10 FUN_10262d10
    10262263 -> 11a89daa FUN_11a89daa
//========================================================

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



//========================================================
// ParseNodeCustomAttrs @ 1049ae30
// CALL TARGETS:
    1049af83 -> 100b5f70 FUN_100b5f70
    1049af92 -> 100b5f70 FUN_100b5f70
    1049afa2 -> 104934f0 FUN_104934f0
    1049afb6 -> 10c3d5d0 FUN_10c3d5d0
    1049afcd -> 10c3d5d0 FUN_10c3d5d0
    1049afed -> 11a89daa FUN_11a89daa
    1049b012 -> 10499900 FUN_10499900
//========================================================

/* [RE-R1]
   src: LoadBehaviorTree.cpp
   strings:
     ""Comment""
     ""Node_id""
     ""Failed to get %-i th attribute.""
     ""D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"" */

void __thiscall LoadBehaviorTree__ParseNodeCustomAttrs(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_44;
  byte *local_40;
  undefined1 local_39;
  undefined1 local_38 [20];
  undefined1 *local_24;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (((int *)*param_2 != (int *)0x0) && (param_3 != 0)) {
    iVar8 = 0;
    iVar3 = (**(code **)(*(int *)*param_2 + 0x18))();
    if (0 < iVar3) {
      do {
        local_40 = (byte *)0x0;
        local_44 = 0;
        cVar2 = (**(code **)(*(int *)*param_2 + 0x1c))(iVar8,&local_40,&local_44);
        if ((cVar2 == '\0') || (local_40 == (byte *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(param_1 + 0x3c),param_2,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x4f3,"Failed to get %-i th attribute.",iVar8 + 1);
        }
        pcVar6 = "Comment";
        pbVar4 = local_40;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_1049aed0:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_1049aed5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < (byte)pcVar6[1];
          if (bVar1 != pcVar6[1]) goto LAB_1049aed0;
          pbVar4 = pbVar4 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_1049aed5:
        if (uVar5 != 0) {
          pbVar7 = &DAT_11da7300;
          pbVar4 = local_40;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_1049af04:
              uVar5 = -(uint)bVar9 | 1;
              goto LAB_1049af09;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_1049af04;
            pbVar4 = pbVar4 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_1049af09:
          if (uVar5 != 0) {
            pbVar7 = &DAT_11dbabc0;
            pbVar4 = local_40;
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_1049af38:
                uVar5 = -(uint)bVar9 | 1;
                goto LAB_1049af3d;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_1049af38;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            uVar5 = 0;
LAB_1049af3d:
            if (uVar5 != 0) {
              pcVar6 = "Node_id";
              pbVar4 = local_40;
              do {
                bVar1 = *pbVar4;
                bVar9 = bVar1 < (byte)*pcVar6;
                if (bVar1 != *pcVar6) {
LAB_1049af70:
                  uVar5 = -(uint)bVar9 | 1;
                  goto LAB_1049af75;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar9 = bVar1 < (byte)pcVar6[1];
                if (bVar1 != pcVar6[1]) goto LAB_1049af70;
                pbVar4 = pbVar4 + 2;
                pcVar6 = pcVar6 + 2;
              } while (bVar1 != 0);
              uVar5 = 0;
LAB_1049af75:
              if (uVar5 != 0) {
                FUN_100b5f70(local_44,&local_39);
                FUN_100b5f70(local_40,&local_39);
                FUN_104934f0(local_20,local_38);
                if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(local_c);
                }
                if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(local_24);
                }
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
        iVar3 = (**(code **)(*(int *)*param_2 + 0x18))();
      } while (iVar8 < iVar3);
    }
  }
  FUN_11a89daa();
  return;
}



//========================================================
// ExpandRefs @ 1049b020
// CALL TARGETS:
    1049b0ce -> 10494490 FUN_10494490
    1049b112 -> 10494320 FUN_10494320
    1049b137 -> 10498e20 FUN_10498e20
    1049b1c4 -> 1049c5e0 FUN_1049c5e0
    1049b214 -> 1049dbf0 FUN_1049dbf0
    1049b21b -> 1047eb70 FUN_1047eb70
    1049b239 -> 10494410 FUN_10494410
    1049b24c -> 104940c0 FUN_104940c0
    1049b269 -> 10494170 FUN_10494170
    1049b280 -> 10495720 FUN_10495720
    1049b2a3 -> 10498ea0 FUN_10498ea0
    1049b2cf -> 1049ec60 FUN_1049ec60
    1049b2f6 -> 10c3d5d0 FUN_10c3d5d0
    1049b366 -> 104a1b30 FUN_104a1b30
    1049b37a -> 10497b20 FUN_10497b20
    1049b380 -> 1049d650 FUN_1049d650
    1049b398 -> 10499470 FUN_10499470
    1049b3ac -> 10499020 FUN_10499020
    1049b3e4 -> 10c3d5d0 FUN_10c3d5d0
    1049b429 -> 1049bd50 FUN_1049bd50
    1049b46b -> 10498be0 FUN_10498be0
    1049b48d -> 1049dbf0 FUN_1049dbf0
    1049b49d -> 1047b540 FUN_1047b540
    1049b4c5 -> 10498ea0 FUN_10498ea0
    1049b50d -> 1049c6f0 FUN_1049c6f0
    1049b529 -> 10c3d5d0 FUN_10c3d5d0
    1049b537 -> 10481210 FUN_10481210
    1049b542 -> 10481210 FUN_10481210
    1049b57f -> 10497b20 FUN_10497b20
    1049b585 -> 1049d650 FUN_1049d650
    1049b5a0 -> 10499470 FUN_10499470
    1049b5c1 -> 10499020 FUN_10499020
    1049b5d4 -> 10c3d5d0 FUN_10c3d5d0
    1049b6bf -> 1047b030 FUN_1047b030
    1049b6cf -> 104977f0 FUN_104977f0
    1049b6dd -> 1047b160 FUN_1047b160
    1049b6f1 -> 10c3d5d0 FUN_10c3d5d0
    1049b70c -> 1047df80 FUN_1047df80
    1049b737 -> 1047d530 FUN_1047d530
    1049b759 -> 1047e5a0 FUN_1047e5a0
    1049b765 -> 1047f3c0 FUN_1047f3c0
    1049b77a -> 10499160 FUN_10499160
    1049b7c9 -> 104942f0 FUN_104942f0
    1049b810 -> 1049bd50 FUN_1049bd50
    1049b87c -> 10499750 FUN_10499750
    1049b897 -> 1049b020 LoadBehaviorTree::ExpandReferencesAndApplyOverrides
    1049b8a2 -> 1047f370 FUN_1047f370
    1049b8b6 -> 10c3d5d0 FUN_10c3d5d0
    1049b8cd -> 10c3d5d0 FUN_10c3d5d0
    1049b8e4 -> 1049de40 FUN_1049de40
    1049b912 -> 10c3d5d0 FUN_10c3d5d0
    1049b922 -> 11a89daa FUN_11a89daa
    1049b93d -> 10499820 FUN_10499820
    1049b971 -> 10499900 FUN_10499900
    1049b986 -> 10499820 FUN_10499820
    1049b9ba -> 10499900 FUN_10499900
    1049b9cf -> 10499820 FUN_10499820
    1049ba03 -> 10499900 FUN_10499900
    1049ba18 -> 10499820 FUN_10499820
    1049ba4c -> 10499900 FUN_10499900
    1049ba61 -> 10499820 FUN_10499820
    1049ba95 -> 10499900 FUN_10499900
    1049baaa -> 10499820 FUN_10499820
    1049bade -> 10499900 FUN_10499900
    1049baed -> 10499820 FUN_10499820
    1049bb21 -> 10499900 FUN_10499900
    1049bb30 -> 10499820 FUN_10499820
    1049bb64 -> 10499900 FUN_10499900
    1049bb73 -> 10499820 FUN_10499820
    1049bba7 -> 10499900 FUN_10499900
    1049bbb3 -> 10499820 FUN_10499820
    1049bbdb -> 10499900 FUN_10499900
    1049bbe7 -> 10499820 FUN_10499820
    1049bc0f -> 10499900 FUN_10499900
    1049bc1b -> 10499820 FUN_10499820
    1049bc43 -> 10499900 FUN_10499900
    1049bc4f -> 10499820 FUN_10499820
    1049bc7a -> 10499900 FUN_10499900
    1049bc86 -> 10499820 FUN_10499820
    1049bcae -> 10499900 FUN_10499900
    1049bcba -> 10499820 FUN_10499820
    1049bce2 -> 10499900 FUN_10499900
    1049bcee -> 10499820 FUN_10499820
    1049bd10 -> 10499900 FUN_10499900
    1049bd1c -> 10499820 FUN_10499820
    1049bd3e -> 10499900 FUN_10499900
//========================================================

/* [RE-R1]
   src: LoadBehaviorTree.cpp
   strings:
     ""%s%c%-i""
     ""Failed to erase original reference node when applying override, \n RT Path: '%s' \n Current
   Expanding Path: %s.""
     ""D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp""
     ""Failed to erase old overridden node id-map from parent group manager, RT Path: '%s' \n
   Current Expanding Path: %s.""
     ""Failed to erase old overridden node id-map from sub-tree group manager, RT Path: '%s' \n
   Current Expanding Path: %s.""
     ""Failed to clone override sub-tree.\n  Override RT Path: %s, \n Current Expanding Path: %s.""
     ""Failed to retrieve reference node forapplying override, \n RT Path: '%s' \n Current Expanding
   Path: %s.""
     ""Failed to find target node for applying override,\nPlease ensure the override RT path is
   correct:\n RT Path: '%s' \n Cu…"
     ""Incorrect override RT-Path! \nRT Path: '%s' \nCurrent Expanding Path: %s.""
     ""Override applying over expanded tree is not supported for the moment.\n Target Ref File: %s,
   \n Current Expanding Path:…" */

void __thiscall LoadBehaviorTree__ExpandReferencesAndApplyOverrides(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined1 *extraout_ECX;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 local_c0;
  int *local_b8;
  int local_b4;
  int *local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  int local_a4;
  int *local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined1 local_54 [12];
  int local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_3c [12];
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  piVar7 = *(int **)(param_2 + 0x1c);
  piVar16 = (int *)(param_2 + 0x1c);
  local_84 = param_2;
  iVar15 = 0;
  piVar3 = piVar7;
  local_80 = param_1;
  if (piVar7 == piVar16) goto LAB_1049b91a;
  do {
    piVar3 = (int *)*piVar3;
    iVar15 = iVar15 + 1;
  } while (piVar3 != piVar16);
  if (((iVar15 == 0) || (local_88 = *(int *)(*(int *)(param_2 + 0x20) + 8), local_88 == 0)) ||
     (*(int *)(local_88 + 0xc) == 0)) goto LAB_1049b91a;
  local_a4 = local_88 + 0x14;
  uVar4 = 0;
  if (piVar7 == piVar16) {
LAB_1049b64f:
    iVar15 = *(int *)(*(int *)(local_88 + 0xc) + 0x44);
    if (((iVar15 == 0) || (iVar15 = *(int *)(iVar15 + 0xc), iVar15 == 0)) ||
       (*(int *)(iVar15 + 0x48) == 0)) goto LAB_1049b91a;
  }
  else {
    do {
      piVar7 = (int *)*piVar7;
      uVar4 = uVar4 + 1;
    } while (piVar7 != piVar16);
    if (uVar4 < 2) goto LAB_1049b64f;
    piVar7 = *(int **)(local_88 + 0x1c);
    piVar16 = (int *)(local_88 + 0x1c);
    bVar17 = piVar7 == piVar16;
    while (local_b0 = piVar7, !bVar17) {
      iVar15 = piVar7[2];
      uVar18 = 0xffffffff;
      uVar6 = *(undefined4 *)(iVar15 + 100);
      local_8c = iVar15;
      puVar5 = (undefined4 *)FUN_10494490();
      local_ac = puVar5;
      if (*(undefined4 **)(local_88 + 0x10) == puVar5) {
        uVar1 = *(undefined4 *)(iVar15 + 0x20);
        puVar5 = (undefined4 *)FUN_10499820(local_24,uVar6,uVar18);
                    /* WARNING: Subroutine does not return */
        FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                     "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                     ,0x52f,
                     "Incorrect override RT-Path! \nRT Path: \'%s\' \nCurrent Expanding Path: %s.",
                     uVar1,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4),
                     (int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
      }
      local_b4 = 0;
      if (puVar5 == (undefined4 *)0x0) {
        local_b4 = FUN_10498e20(*(undefined4 *)(iVar15 + 0x7c));
        if (local_b4 == 0) {
          uVar1 = *(undefined4 *)(iVar15 + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24,uVar6,uVar18);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x54f,
                       "Failed to find target node for applying override,\nPlease ensure the override RT path is correct:\n RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar1,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        local_9c = *(int *)(local_b4 + 8);
        local_a8 = *(undefined4 *)(*(int *)(local_b4 + 4) + 0x58);
        local_c0 = *(undefined4 *)(*(int *)(local_b4 + 4) + 0x54);
        if (*(int *)(local_9c + 0x4c) == 0) goto LAB_1049b176;
        local_b8 = *(int **)(*(int *)(local_9c + 0x4c) + 0x48);
      }
      else {
        local_9c = puVar5[2];
        if (local_9c == 0) {
          local_a8 = 0xffffffff;
        }
        else {
          local_a8 = FUN_10494320(puVar5);
        }
        local_c0 = puVar5[9];
        if (puVar5[0x13] == 0) {
LAB_1049b176:
          local_b8 = (int *)0x0;
        }
        else {
          local_b8 = *(int **)(puVar5[0x13] + 0x48);
        }
      }
      if ((local_b8 != (int *)0x0) && ((char)local_b8[2] != '\0')) {
        local_b8[1] = local_b8[1] + 1;
      }
      if (puVar5 == (undefined4 *)0x0) {
        local_98 = (int *)0x0;
      }
      else {
        local_98 = (int *)puVar5[0x12];
      }
      local_a0 = local_b8;
      local_90 = local_98;
      if (local_98 == (int *)0x0) {
        FUN_1049c5e0(&local_b8);
        local_90 = local_98;
      }
      else if ((char)local_98[2] != '\0') {
        local_98[1] = local_98[1] + 1;
      }
      piVar3 = local_90;
      local_48 = 0;
      local_94 = 0;
      local_44 = 0;
      local_40 = (undefined1 *)0x0;
      local_98 = local_90;
      if (puVar5 != (undefined4 *)0x0) {
        local_30 = 0;
        local_2c = 0;
        local_28 = (undefined1 *)0x0;
        if ((*(char *)(local_8c + 0x3c) == '\0') && (*(int *)(local_8c + 0x40) != 0)) {
          FUN_1049dbf0(puVar5 + 4);
          FUN_1047eb70();
          local_94 = local_44;
          puVar5 = local_ac;
        }
        else {
          FUN_10494410(&local_30,0);
        }
        if ((piVar3 == (int *)0x0) || (cVar2 = FUN_104940c0(&local_30), cVar2 == '\0')) {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x57b,
                       "Failed to erase old overridden node id-map from sub-tree group manager, RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        if ((local_a0 == (int *)0x0) || (cVar2 = FUN_10494170(puVar5,local_a0), cVar2 == '\0')) {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x584,
                       "Failed to erase old overridden node id-map from parent group manager, RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        FUN_10495720(&local_ac);
        uVar4 = 0;
        if (local_2c - local_30 >> 2 != 0) {
          do {
            cVar2 = FUN_10498ea0(*(undefined4 *)(local_30 + uVar4 * 4),0xffffffff,0);
            if (cVar2 == '\0') {
              uVar6 = *(undefined4 *)(local_8c + 0x20);
              puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
              FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                           "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                           ,0x593,
                           "Failed to erase original reference node when applying override, \n RT Path: \'%s\' \n Current Expanding Path: %s."
                           ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],
                           (int)*(undefined8 *)(puVar5 + 4),
                           (int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)(local_2c - local_30 >> 2));
        }
        cVar2 = FUN_1049ec60();
        if (cVar2 == '\0') {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x5a1,
                       "Failed to erase original reference node when applying override, \n RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        if (local_ac != (undefined4 *)0x0) {
          (**(code **)*local_ac)(1);
        }
        if (local_30 != 0) {
          FUN_10c3d5d0(local_30);
        }
      }
      iVar9 = local_88;
      iVar15 = local_8c;
      piVar11 = *(int **)(local_8c + 0x44);
      if (*(int *)(local_8c + 0x40) == 0) {
        iVar9 = *(int *)(*(int *)(*(int *)(local_8c + 0x80) + 0x60) + (int)piVar11 * 4);
        if ((iVar9 == 0) || (*(char *)(iVar9 + 0x5c) == '\0')) {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x619,
                       "Failed to retrieve reference node forapplying override, \n RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],(int)*(undefined8 *)(puVar5 + 4)
                       ,(int)((ulonglong)*(undefined8 *)(puVar5 + 4) >> 0x20));
        }
        if (local_b4 == 0) {
          *(undefined4 *)(iVar9 + 0x54) = local_c0;
          *(undefined4 *)(iVar9 + 0x58) = local_a8;
          uVar6 = FUN_10497b20(iVar9,local_9c,*(undefined4 *)(local_8c + 0x7c));
          piVar8 = (int *)FUN_1049d650(uVar6);
          piVar11 = *(int **)(local_a4 + 4);
          piVar8[1] = (int)piVar11;
          *piVar8 = local_a4;
          *piVar11 = (int)piVar8;
          *(int **)(local_a4 + 4) = piVar8;
          FUN_10499470();
          FUN_10499020(local_9c,*(undefined4 *)(iVar15 + 0x7c),*(int *)(local_a4 + 4) + 8);
          piVar11 = local_a0;
          goto LAB_1049b5cc;
        }
        *(undefined4 *)(iVar9 + 0x58) = *(undefined4 *)(*(int *)(local_b4 + 4) + 0x58);
        *(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(*(int *)(local_b4 + 4) + 0x54);
        FUN_1049c6f0();
        *(undefined4 *)(local_b4 + 0x24) = *(undefined4 *)(iVar15 + 0x84);
        if (local_48 != 0) {
          FUN_10c3d5d0(local_48);
        }
        FUN_10481210();
        FUN_10481210();
        piVar7 = (int *)*piVar7;
        bVar17 = piVar7 == piVar16;
      }
      else {
        local_b8 = (int *)(*(int *)(local_8c + 0x80) + 0x60);
        local_98 = piVar11;
        if (piVar11 != (int *)0xffffffff) {
          local_14 = local_24;
          local_24[0] = 0;
          local_10 = local_14;
          if ((int)piVar11 <= *(int *)(local_8c + 0x48)) {
            do {
              iVar10 = *(int *)(*local_b8 + (int)piVar11 * 4);
              local_98 = piVar11;
              FUN_104a1b30(local_24,"%s%c%-i",*(undefined4 *)(iVar15 + 0x7c),0x3a,
                           *(undefined4 *)(iVar10 + 0x54));
              uVar6 = FUN_10497b20(iVar10,*(undefined4 *)(iVar10 + 0x60),local_10,0xffffffff);
              piVar7 = (int *)FUN_1049d650(uVar6);
              puVar5 = *(undefined4 **)(iVar9 + 0x18);
              piVar7[1] = (int)puVar5;
              *piVar7 = iVar9 + 0x14;
              *puVar5 = piVar7;
              *(int **)(iVar9 + 0x18) = piVar7;
              FUN_10499470();
              FUN_10499020(*(undefined4 *)(iVar10 + 0x60),local_10,*(int *)(iVar9 + 0x18) + 8);
              piVar3 = local_90;
              piVar7 = local_b0;
              piVar11 = (int *)((int)local_98 + 1);
            } while ((int)piVar11 <= *(int *)(iVar15 + 0x48));
            local_98 = piVar11;
            if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_10);
            }
          }
        }
        piVar11 = local_a0;
        local_90 = (int *)FUN_1049bd50(local_88,local_a0,*(undefined1 *)(local_8c + 0x3c),local_9c,
                                       local_a8,*(undefined4 *)(local_8c + 0x40),1);
        if (local_90 == (int *)0x0) {
          uVar14 = 0;
          uVar4 = local_94 - local_48 >> 2;
          local_90 = (int *)0x0;
          iVar15 = local_48;
          if (uVar4 != 0) {
            do {
              puVar5 = *(undefined4 **)(iVar15 + uVar14 * 4);
              if (puVar5 != (undefined4 *)0x0) {
                (**(code **)*puVar5)(1);
                iVar15 = local_48;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar4);
          }
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x5da,
                       "Failed to clone override sub-tree.\n  Override RT Path: %s, \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],*(undefined8 *)(puVar5 + 4));
        }
        if (*(undefined4 **)(local_88 + 0x10) == local_ac) {
          *(int **)(local_88 + 0x10) = local_90;
        }
        if (*(char *)(local_8c + 0x3c) == '\0') {
          if (local_ac != (undefined4 *)0x0) {
            FUN_10498be0();
          }
          if (local_94 - local_48 >> 2 != 0) {
            FUN_1049dbf0(&local_48);
          }
          if (piVar3 != piVar11) {
            FUN_1047b540(piVar3);
          }
        }
        if ((local_b4 != 0) && (cVar2 = FUN_10498ea0(local_9c,local_a8,local_b4), cVar2 == '\0')) {
          uVar6 = *(undefined4 *)(local_8c + 0x20);
          puVar5 = (undefined4 *)FUN_10499820(local_24);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x607,
                       "Failed to erase original reference node when applying override, \n RT Path: \'%s\' \n Current Expanding Path: %s."
                       ,uVar6,*puVar5,puVar5[1],puVar5[2],puVar5[3],*(undefined8 *)(puVar5 + 4));
        }
LAB_1049b5cc:
        if (local_48 != 0) {
          FUN_10c3d5d0(local_48);
        }
        if ((piVar3 != (int *)0x0) && ((char)piVar3[2] != '\0')) {
          piVar8 = piVar3 + 1;
          *piVar8 = *piVar8 + -1;
          if (*piVar8 == 0) {
            (**(code **)*piVar3)(1);
          }
        }
        if ((piVar11 != (int *)0x0) && ((char)piVar11[2] != '\0')) {
          piVar3 = piVar11 + 1;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)*piVar11)(1);
          }
        }
        piVar7 = (int *)*piVar7;
        bVar17 = piVar7 == piVar16;
      }
    }
  }
  iVar15 = local_88;
  piVar16 = *(int **)(local_88 + 0x14);
  if (piVar16 != (int *)(local_88 + 0x14)) {
    do {
      iVar9 = piVar16[3];
      local_88 = iVar9;
      if ((char)piVar16[2] != '\0') {
        if ((iVar9 == 0) || (*(int *)(iVar9 + 0x54) == -1)) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x665,
                       "Incorrect reference node info during expanding!\nTarget Ref File: %s, \n Current Expanding Path: %s."
                       ,*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        local_b0 = (int *)piVar16[4];
        if (local_b0 == (int *)0x0) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x672,
                       "Failed to find parent node for expanding reference tree.\n Target Ref File: %s, \n Current Expanding Path: %s."
                       ,*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        FUN_1047b030();
        FUN_104977f0(local_3c,local_40,iVar9 + 0xc);
        FUN_1047b160();
        puVar12 = local_3c;
        if ((local_28 != puVar12) && (local_28 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_28);
          puVar12 = extraout_ECX;
        }
        iVar9 = FUN_1047df80(local_10,*(undefined4 *)(local_80 + 0x3c),puVar12,1);
        local_94 = iVar9;
        if (iVar9 == 0) {
LAB_1049bcb3:
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x68a,
                       "Failed to load reference sub tree:\n BTFile: %s.\n Current Expanding Path: %s."
                       ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        if (*(char *)(iVar9 + 8) != '\0') {
          *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
        }
        if (iVar9 == 0) goto LAB_1049bcb3;
        FUN_1047d530(local_84);
        if ((*(char *)(iVar9 + 0x40) != '\0') && (0 < *(int *)(iVar15 + 0x24))) {
          uVar6 = FUN_1047e5a0(local_10,local_80,*(undefined4 *)(local_80 + 0x3c));
          FUN_1047f3c0(uVar6);
          iVar9 = local_94;
        }
        iVar10 = FUN_10499160(iVar9,0,piVar16 + 2);
        if (iVar10 == 0) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x6a0,
                       "Failed to create sub-tree info!\n BTFile: %s.\n Current Expanding Path: %s."
                       ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        if (*(int *)(local_88 + 0x38) != *(int *)(local_88 + 0x34)) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x6c9,
                       "Failed to find source node by RTPath,\n BTFile: %s. \n, RTPath: %s.\n Current Expanding Path: %s."
                       ,*(undefined4 *)(iVar9 + 0x38),*(undefined4 *)(local_88 + 0x20),
                       *(undefined4 *)(iVar15 + 0x14));
        }
        if (((*(int *)(iVar9 + 0x44) == 0) ||
            (iVar13 = *(int *)(*(int *)(iVar9 + 0x44) + 0xc), iVar13 == 0)) ||
           ((*(int *)(iVar13 + 0x14) - *(int *)(iVar13 + 0x10) & 0xfffffffcU) != 4)) {
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x6b7,
                       "Target reference bt file is not a valid sub-tree, Please ensure that the BT file\'s root *MUST* contains single child.\n Target BT File: %s. \n Current Expanding Path: %s."
                       ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        uVar6 = FUN_104942f0(0);
        iVar13 = local_b0[0x12];
        if (iVar13 == 0) {
          if (local_b0[0x13] == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(local_b0[0x13] + 0x48);
          }
        }
        iVar10 = FUN_1049bd50(iVar10,iVar13,1,local_b0,*(undefined4 *)(local_88 + 0x58),uVar6,0,
                              *(undefined4 *)(local_88 + 0x54));
        if (iVar10 == 0) {
LAB_1049bbe0:
          iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
          FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                       "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                       ,0x6de,
                       "Failed to clone sub-tree for expanding reference tree.\n Target Ref File: %s, \n Current Expanding Path: %s."
                       ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
        }
        if (*(int *)(iVar10 + 0x4c) == 0) {
          local_a4 = 0;
        }
        else {
          local_a4 = *(int *)(*(int *)(iVar10 + 0x4c) + 0x48);
        }
        iVar13 = local_b0[0x12];
        if (iVar13 == 0) {
          if (local_b0[0x13] == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(local_b0[0x13] + 0x48);
          }
        }
        if ((local_a4 != iVar13) || (*(int *)(iVar10 + 0x48) == 0)) goto LAB_1049bbe0;
        if (*(char *)(iVar9 + 0x40) == '\0') {
LAB_1049b891:
          LoadBehaviorTree__ExpandReferencesAndApplyOverrides(local_84);
        }
        else {
          if (0 < *(int *)(iVar15 + 0x24)) {
            if ((*(char *)(iVar9 + 0x40) != '\0') && (0 < *(int *)(iVar15 + 0x24))) {
              iVar15 = FUN_10499820(local_3c);
                    /* WARNING: Subroutine does not return */
              FUN_10499900(*(undefined4 *)(local_80 + 0x3c),0,
                           "D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree\\Behavior_Tree\\LoadBehaviorTree.cpp"
                           ,0x6ee,
                           "Override applying over expanded tree is not supported for the moment.\n Target Ref File: %s, \n Current Expanding Path: %s."
                           ,*(undefined4 *)(local_88 + 0x20),*(undefined4 *)(iVar15 + 0x14));
            }
            goto LAB_1049b891;
          }
          FUN_10499750();
        }
        FUN_1047f370();
        if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_10);
        }
        if ((local_40 != local_54) && (local_40 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_40);
        }
      }
      piVar16 = (int *)*piVar16;
    } while (piVar16 != (int *)(iVar15 + 0x14));
  }
  FUN_1049de40();
  piVar16 = *(int **)(local_84 + 0x20);
  iVar15 = *piVar16;
  piVar7 = (int *)piVar16[1];
  *piVar7 = iVar15;
  *(int **)(iVar15 + 4) = piVar7;
  puVar5 = (undefined4 *)piVar16[2];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
    piVar7 = puVar5 + 1;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  FUN_10c3d5d0(piVar16);
LAB_1049b91a:
  FUN_11a89daa();
  return;
}



//========================================================
// LoopFilterSite @ 104c2cb0
// CALL TARGETS:
    104c2cd5 -> 100b62c0 FUN_100b62c0
    104c2cef -> 100b62c0 FUN_100b62c0
    104c2d08 -> 1048b170 FUN_1048b170
    104c2d1c -> 10c3d5d0 FUN_10c3d5d0
    104c2d33 -> 10c3d5d0 FUN_10c3d5d0
    104c2d40 -> 11a89daa FUN_11a89daa
//========================================================

/* [RE-AUTO c0]
   strings:
     ""Times""
     ""CLoopFilter"" */

void FUN_104c2cb0(void)

{
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = local_38;
  local_24 = local_28;
  FUN_100b62c0("Times","");
  local_10 = local_20;
  local_c = local_10;
  FUN_100b62c0("CLoopFilter","");
  FUN_1048b170(local_20,local_38,0,5,0);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_24);
  }
  FUN_11a89daa();
  return;
}

