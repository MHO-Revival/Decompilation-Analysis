/* ===== FUN_1105f6c0 @ 1105f6c0  size=136 ===== */
// strings:
//   "[FsmChecker][1]HandleGotoState state_id: %u %u %u %u | skill: %d %d"

/* [RE-AUTO c0]
   strings:
     ""[FsmChecker][1]HandleGotoState state_id: %u %u %u %u | skill: %d %d"" */

uint __thiscall
FUN_1105f6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_11398e60();
  uVar2 = 0;
  if (iVar1 != 0) {
    local_c = param_4;
    local_8 = param_5;
    local_14 = param_2;
    local_10 = param_3;
    uVar2 = FUN_1105f7f0(&local_14,param_6,param_7,param_8,param_9,0);
    if ((char)uVar2 == '\0') {
      FUN_11481740(param_1,"[FsmChecker][1]HandleGotoState state_id: %u %u %u %u | skill: %d %d",
                   param_2,param_3,param_4,param_5,param_6,param_7);
      uVar2 = FUN_114811e0(param_10,1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}



/* ===== FUN_1105f750 @ 1105f750  size=136 ===== */
// strings:
//   "[FsmChecker][2]HandleTransitionToState state_id: %u %u %u %u | skill: %d %d"

/* [RE-AUTO c0]
   strings:
     ""[FsmChecker][2]HandleTransitionToState state_id: %u %u %u %u | skill: %d %d"" */

uint __thiscall
FUN_1105f750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_11398e60();
  uVar2 = 0;
  if (iVar1 != 0) {
    local_c = param_4;
    local_8 = param_5;
    local_14 = param_2;
    local_10 = param_3;
    uVar2 = FUN_1105f7f0(&local_14,param_6,param_7,param_8,param_9,1);
    if ((char)uVar2 == '\0') {
      FUN_11481740(param_1,
                   "[FsmChecker][2]HandleTransitionToState state_id: %u %u %u %u | skill: %d %d",
                   param_2,param_3,param_4,param_5,param_6,param_7);
      uVar2 = FUN_114811e0(param_10,2);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}



/* ===== FUN_1105f7f0 @ 1105f7f0  size=921 ===== */
// strings:
//   "[StateTransitionCheck]Request to goto unkown state(%u, %u, %u, %u) with skillId(%d) level(%d)"
//   "[StateTransitionCheck]Skill not match state or has no transition. nextstate name = %s, skill id = %d, level = %d, curstate name = %s"
//   "FsmTolerance"
//   "[StateTransitionCheck]currenst state %s transition to %s, cached %s to %s, takes %.2f and limited %.2f, "
//   "[StateTransitionCheck]Last sync time = %I64d, current = %I64d, multiplier = %.3f"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""[StateTransitionCheck]Request to goto unkown state(%u, %u, %u, %u) with skillId(%d)
   level(%d)""
     ""[StateTransitionCheck]Skill not match state or has no transition. nextstate name = %s, skill
   id = %d, level = %d, curst…"
     ""FsmTolerance""
     ""[StateTransitionCheck]currenst state %s transition to %s, cached %s to %s, takes %.2f and
   limited %.2f, ""
     ""[StateTransitionCheck]Last sync time = %I64d, current = %I64d, multiplier = %.3f"" */

undefined4 __thiscall
FUN_1105f7f0(int param_1,undefined4 *param_2,int param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 auVar13 [16];
  undefined4 uStack_74;
  int iStack_70;
  char *pcStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  char *pcStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_c;
  float local_8;
  
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  uStack_34 = 0x1105f806;
  iVar5 = FUN_11398e60();
  if ((iVar5 != 0) && (*(int **)(iVar5 + 0x50) != (int *)0x0)) {
    uStack_34 = 0x1105f821;
    iVar5 = (**(code **)(**(int **)(iVar5 + 0x50) + 0x790))();
    if (iVar5 != 0) {
      uVar9 = param_2[1];
      uVar1 = *param_2;
      uVar10 = param_2[3];
      uVar2 = param_2[2];
      uStack_34 = 0x1105f851;
      iVar5 = FUN_11398e60();
      if ((iVar5 != 0) && (*(int **)(iVar5 + 0x50) != (int *)0x0)) {
        uStack_34 = 0x1105f864;
        (**(code **)(**(int **)(iVar5 + 0x50) + 0x790))();
      }
      uStack_44 = 0x1105f87b;
      uStack_40 = uVar9;
      uStack_3c = uVar1;
      uStack_38 = uVar10;
      uStack_34 = uVar2;
      iVar5 = FUN_10fb8160();
      uStack_44 = 0x1105f888;
      iVar6 = FUN_11398e60();
      if ((iVar6 != 0) && (*(int **)(iVar6 + 0x50) != (int *)0x0)) {
        uStack_44 = 0x1105f89b;
        (**(code **)(**(int **)(iVar6 + 0x50) + 0x790))();
      }
      uStack_44 = 0x1105f8a4;
      iVar6 = FUN_10fd05d0();
      if (iVar5 == 0) {
        uStack_44 = param_4;
        uStack_48 = param_3;
        uStack_4c = param_2[2];
        uStack_50 = param_2[1];
        uStack_54 = *param_2;
        pcStack_5c = 
        "[StateTransitionCheck]Request to goto unkown state(%u, %u, %u, %u) with skillId(%d) level(%d)"
        ;
        puStack_64 = (undefined1 *)0x1105f8cb;
        puStack_60 = (undefined1 *)param_1;
        FUN_11481740();
      }
      else {
        uStack_44 = 0x1105f8e3;
        iVar7 = FUN_11398e60();
        if ((iVar7 != 0) && (*(int **)(iVar7 + 0x50) != (int *)0x0)) {
          uStack_44 = 0x1105f8f6;
          (**(code **)(**(int **)(iVar7 + 0x50) + 0x790))();
        }
        uStack_44 = param_4;
        uStack_48 = param_3;
        pcStack_5c = (char *)0x1105f913;
        uStack_58 = uVar9;
        uStack_54 = uVar1;
        uStack_50 = uVar10;
        uStack_4c = uVar2;
        cVar4 = FUN_10fd4810();
        if (cVar4 != '\0') {
          if (iVar6 != 0) {
            auVar13 = ZEXT416((uint)_DAT_11cbf11c);
            pcStack_5c = (char *)&param_3;
            puStack_64 = (undefined1 *)&uStack_74;
            puStack_60 = (undefined1 *)&uStack_74;
            param_3 = 0;
            param_4 = _DAT_11cbf11c;
            FUN_100b62c0("FsmTolerance","");
            FUN_11479100();
            cVar4 = FUN_1147cea0();
            if (cVar4 != '\0') {
              param_4 = (float)(param_3 + 100) / DAT_11de9a30;
              auVar13 = ZEXT416((uint)param_4);
            }
            local_8 = *(float *)(iVar6 + 0x50);
            pcVar8 = (char *)FUN_10f57110();
            pcVar3 = pcVar8;
            do {
              pcVar11 = pcVar3;
              pcVar3 = pcVar11 + 1;
            } while (*pcVar11 != '\0');
            FUN_100d83d0(pcVar8,pcVar11);
            local_8 = *(float *)(iVar5 + 0x50);
            pcVar8 = (char *)FUN_10f57110();
            pcVar3 = pcVar8;
            do {
              pcVar11 = pcVar3;
              pcVar3 = pcVar11 + 1;
            } while (*pcVar11 != '\0');
            FUN_100d83d0(pcVar8,pcVar11);
            iVar5 = FUN_11398e60();
            if ((iVar5 != 0) && (*(int **)(iVar5 + 0x50) != (int *)0x0)) {
              (**(code **)(**(int **)(iVar5 + 0x50) + 0x790))();
            }
            FUN_10fb41b0(&local_c);
            pcVar8 = (char *)FUN_10f57110();
            pcVar3 = pcVar8;
            do {
              pcVar11 = pcVar3;
              pcVar3 = pcVar11 + 1;
            } while (*pcVar11 != '\0');
            FUN_100d83d0(pcVar8,pcVar11);
            FUN_11a894ef();
            local_c = (float)auVar13._0_8_ * param_4;
            FUN_11479100();
            uVar9 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x294))
                              (param_1 + 0x28,param_1 + 0x40,param_1 + 0x58);
            fVar12 = (float10)FUN_11484e10(uVar9);
            local_8 = (float)(fVar12 * (float10)DAT_11de9a44);
            if ((-1 < *(int *)(param_1 + 0x24)) &&
               (((0 < *(int *)(param_1 + 0x24) || (*(int *)(param_1 + 0x20) != 0)) &&
                (local_c < local_8)))) {
              uVar9 = *(undefined4 *)(param_1 + 0x54);
              uVar1 = *(undefined4 *)(param_1 + 0x3c);
              uVar10 = FUN_10f57110((double)local_c,(double)local_8);
              uVar10 = FUN_10f57110(uVar10);
              FUN_11481740(param_1,
                           "[StateTransitionCheck]currenst state %s transition to %s, cached %s to %s, takes %.2f and limited %.2f, "
                           ,uVar1,uVar9,uVar10);
              FUN_11481740(param_1,
                           "[StateTransitionCheck]Last sync time = %I64d, current = %I64d, multiplier = %.3f"
                           ,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_5,
                           param_6,(double)param_4);
              if (local_8 <= DAT_11de9918) {
                return 1;
              }
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              return 0;
            }
            *(undefined4 *)(param_1 + 0x20) = param_5;
            *(undefined4 *)(param_1 + 0x24) = param_6;
          }
          return 1;
        }
        if (iVar6 != 0) {
          param_6 = *(undefined4 *)(iVar6 + 0x50);
          pcStack_5c = (char *)0x1105f932;
          pcStack_5c = (char *)FUN_10f57110();
          puStack_60 = (undefined1 *)param_4;
          puStack_64 = (undefined1 *)param_3;
          uStack_68 = 0x1105f941;
          uStack_68 = FUN_10f57110();
          pcStack_6c = 
          "[StateTransitionCheck]Skill not match state or has no transition. nextstate name = %s, skill id = %d, level = %d, curstate name = %s"
          ;
          uStack_74 = 0x1105f94d;
          iStack_70 = param_1;
          FUN_11481740();
          return 0;
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_11065d70 @ 11065d70  size=2019 ===== */
// calls: _strlwr
// strings:
//   "Sequence"
//   "DisablePhy"
//   "DisableColWithWall"
//   "EnableMoveSplineScale"
//   "IsLoop"
//   "Layer"
//   "SkillID"
//   "CatchUpDist"
//   "NextSequences"
//   "AnimationNode"
//   "SoundEvent"
//   "EffectEvent"
//   "PhysicEvent"
//   "TriggerEvent"
//   "AttachmentEvent"
//   "SkillEvent"
//   "SkillRotateEvent"

/* [RE-AUTO c0]
   calls: _strlwr
   strings:
     ""Sequence""
     ""DisablePhy""
     ""DisableColWithWall""
     ""EnableMoveSplineScale""
     ""IsLoop""
     ""Layer""
     ""SkillID""
     ""CatchUpDist""
     ""NextSequences""
     ""AnimationNode"" */

undefined1 __thiscall FUN_11065d70(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 uVar13;
  uint uVar14;
  int *piVar15;
  bool bVar16;
  char local_d0 [128];
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined1 local_24 [4];
  int *local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  undefined1 local_e;
  int *local_c;
  char local_5;
  
  local_20 = (int *)0x0;
  local_1c = param_1;
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x20))();
  pcVar12 = "Sequence";
  do {
    bVar3 = *pbVar5;
    bVar16 = bVar3 < (byte)*pcVar12;
    if (bVar3 != *pcVar12) {
LAB_11065db5:
      uVar6 = -(uint)bVar16 | 1;
      goto LAB_11065dba;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar5[1];
    bVar16 = bVar3 < (byte)pcVar12[1];
    if (bVar3 != pcVar12[1]) goto LAB_11065db5;
    pbVar5 = pbVar5 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar3 != 0);
  uVar6 = 0;
LAB_11065dba:
  if ((uVar6 != 0) || (iVar7 = (**(code **)(*param_2 + 0x7c))(&DAT_11da7300), iVar7 == 0)) {
    uVar13 = 0;
    goto LAB_11066d1d;
  }
  FUN_100ebf60(local_d0,0x80,iVar7);
  pcVar12 = _strlwr(local_d0);
  FUN_11316b10(pcVar12);
  (**(code **)(*param_2 + 0x70))(&DAT_11dbabc0,param_1 + 8);
  local_5 = '\0';
  (**(code **)(*param_2 + 0x50))("DisablePhy",&local_5);
  bVar3 = local_5 << 3;
  local_5 = '\0';
  *(byte *)(param_1 + 0x116) = *(byte *)(param_1 + 0x116) ^ (bVar3 ^ *(byte *)(param_1 + 0x116)) & 8
  ;
  (**(code **)(*param_2 + 0x50))("DisableColWithWall",&local_5);
  bVar3 = local_5 << 4;
  local_5 = '\0';
  *(byte *)(param_1 + 0x116) =
       *(byte *)(param_1 + 0x116) ^ (bVar3 ^ *(byte *)(param_1 + 0x116)) & 0x10;
  (**(code **)(*param_2 + 0x50))("EnableMoveSplineScale",&local_5);
  bVar3 = local_5 << 2;
  local_5 = '\0';
  *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) ^ (bVar3 ^ *(byte *)(param_1 + 0x117)) & 4
  ;
  (**(code **)(*param_2 + 0x50))("IsLoop",&local_5);
  *(byte *)(param_1 + 0x116) =
       *(byte *)(param_1 + 0x116) ^ (local_5 << 6 ^ *(byte *)(param_1 + 0x116)) & 0x40;
  cVar4 = (**(code **)(*param_2 + 0x70))("Layer",&local_14);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0x114) = (undefined1)local_14;
  }
  (**(code **)(*param_2 + 0x74))("SkillID",param_1 + 0x80);
  local_5 = '\0';
  (**(code **)(*param_2 + 0x50))("CatchUpDist",&local_5);
  *(byte *)(param_1 + 0x116) =
       *(byte *)(param_1 + 0x116) ^ (local_5 << 5 ^ *(byte *)(param_1 + 0x116)) & 0x20;
  (**(code **)(*param_2 + 0xac))(&local_50,"NextSequences");
  if (local_50 != (int *)0x0) {
    uVar6 = (**(code **)(*local_50 + 0xa0))();
    uVar14 = 0;
    if (uVar6 != 0) {
      do {
        (**(code **)(*local_50 + 0xa8))(&local_18,uVar14);
        iVar7 = (**(code **)(*local_18 + 0x7c))(&DAT_11da7300);
        if (iVar7 != 0) {
          FUN_100ebf60(local_d0,0x80,iVar7);
          pcVar12 = _strlwr(local_d0);
          FUN_113168d0(pcVar12);
          FUN_1106c030(local_24,&local_14);
        }
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 4))();
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar6);
    }
  }
  (**(code **)(*param_2 + 0xac))(&local_28,"AnimationNode");
  if (local_28 == (int *)0x0) {
LAB_110660e4:
    uVar13 = 0;
  }
  else {
    local_14 = (**(code **)(*local_28 + 0xa0))();
    local_e = 0;
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    uVar6 = 0;
    if (local_14 != 0) {
      do {
        (**(code **)(*local_28 + 0xa8))(&local_c,uVar6);
        if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x5c);
        }
        local_e = 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_14);
      goto LAB_110660e4;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    (**(code **)(*param_2 + 0xac))(&local_40,"SoundEvent");
    if ((local_40 != (int *)0x0) &&
       (local_18 = (int *)(**(code **)(*local_40 + 0xa0))(), local_18 != (int *)0x0)) {
      piVar15 = (int *)0x0;
      do {
        (**(code **)(*local_40 + 0xa8))(&local_c,piVar15);
        if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x60);
        }
        piVar15 = (int *)((int)piVar15 + 1);
      } while (piVar15 < local_18);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    (**(code **)(*param_2 + 0xac))(&local_48,"EffectEvent");
    if (local_48 != (int *)0x0) {
      local_18 = (int *)(**(code **)(*local_48 + 0xa0))();
      piVar15 = (int *)0x0;
      if (local_18 != (int *)0x0) {
        do {
          (**(code **)(*local_48 + 0xa8))(&local_c,piVar15);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x50);
          }
          piVar15 = (int *)((int)piVar15 + 1);
        } while (piVar15 < local_18);
      }
    }
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    (**(code **)(*param_2 + 0xac))(&local_38,"PhysicEvent");
    if (local_38 != (int *)0x0) {
      local_18 = (int *)(**(code **)(*local_38 + 0xa0))();
      piVar15 = (int *)0x0;
      if (local_18 != (int *)0x0) {
        do {
          (**(code **)(*local_38 + 0xa8))(&local_c,piVar15);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x30);
          }
          piVar15 = (int *)((int)piVar15 + 1);
        } while (piVar15 < local_18);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_4c,"TriggerEvent");
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if (local_4c != (int *)0x0) {
      local_2c = (int *)(**(code **)(*local_4c + 0xa0))();
      local_18 = (int *)0x0;
      if (local_2c != (int *)0x0) {
        do {
          (**(code **)(*local_4c + 0xa8))(&local_c,local_18);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x30);
          }
          local_18 = (int *)((int)local_18 + 1);
        } while (local_18 < local_2c);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_30,&DAT_11cc19cc);
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if (local_30 != (int *)0x0) {
      local_20 = (int *)(**(code **)(*local_30 + 0xa0))();
      local_18 = (int *)0x0;
      if (local_20 != (int *)0x0) {
        do {
          (**(code **)(*local_30 + 0xa8))(&local_c,local_18);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x20);
          }
          local_18 = (int *)((int)local_18 + 1);
        } while (local_18 < local_20);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_3c,"AttachmentEvent");
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if (local_3c != (int *)0x0) {
      local_20 = (int *)(**(code **)(*local_3c + 0xa0))();
      piVar15 = (int *)0x0;
      if (local_20 != (int *)0x0) {
        do {
          (**(code **)(*local_3c + 0xa8))(&local_c,piVar15);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x24);
          }
          piVar15 = (int *)((int)piVar15 + 1);
        } while (piVar15 < local_20);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_34,"SkillEvent");
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if (local_34 != (int *)0x0) {
      local_20 = (int *)(**(code **)(*local_34 + 0xa0))();
      piVar15 = (int *)0x0;
      if (local_20 != (int *)0x0) {
        do {
          (**(code **)(*local_34 + 0xa8))(&local_c,piVar15);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x1c);
          }
          piVar15 = (int *)((int)piVar15 + 1);
        } while (piVar15 < local_20);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_44,"SkillRotateEvent");
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if ((local_44 != (int *)0x0) &&
       (local_20 = (int *)(**(code **)(*local_44 + 0xa0))(), local_20 != (int *)0x0)) {
      piVar15 = (int *)0x0;
      do {
        (**(code **)(*local_44 + 0xa8))(&local_c,piVar15);
        if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x30);
        }
        piVar15 = (int *)((int)piVar15 + 1);
      } while (piVar15 < local_20);
    }
    piVar15 = *(int **)(param_1 + 0x38);
    if (piVar15 != (int *)0x0) {
      piVar1 = (int *)piVar15[1];
      piVar15 = (int *)*piVar15;
      local_18 = (int *)((uint)local_18 & 0xffffff00);
      local_2c = piVar1;
      if (piVar15 != piVar1) {
        iVar7 = 0;
        local_20 = (int *)((int)piVar1 - (int)piVar15 >> 2);
        for (piVar8 = local_20; piVar8 != (int *)0x1; piVar8 = (int *)((int)piVar8 >> 1)) {
          iVar7 = iVar7 + 1;
        }
        FUN_11069c20(piVar15,piVar1,0,iVar7 * 2,local_18);
        if ((int)local_20 < 0x11) {
          FUN_11069b80(piVar15,piVar1,0,local_18);
        }
        else {
          local_c = piVar15 + 0x10;
          FUN_11069b80(piVar15,local_c,0,local_18);
          if (local_c != piVar1) {
            do {
              iVar7 = *local_c;
              piVar15 = local_c;
              while( true ) {
                iVar2 = piVar15[-1];
                if (((iVar7 != 0) && (iVar2 != 0)) &&
                   (*(float *)(iVar2 + 4) < *(float *)(iVar7 + 4) ||
                    *(float *)(iVar2 + 4) == *(float *)(iVar7 + 4))) break;
                *piVar15 = iVar2;
                piVar15 = piVar15 + -1;
              }
              local_c = local_c + 1;
              *piVar15 = iVar7;
            } while (local_c != local_2c);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x30);
    }
    uVar9 = FUN_11317f30();
    uVar10 = FUN_11317f30();
    FUN_11070f80(uVar9,uVar10);
    puVar11 = (undefined4 *)FUN_11071600();
    if (puVar11 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x78) = *puVar11;
      *(undefined4 *)(param_1 + 0x7c) = puVar11[1];
    }
    uVar13 = 1;
    if (local_44 != (int *)0x0) {
      (**(code **)(*local_44 + 4))();
    }
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 4))();
    }
    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 4))();
    }
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 4))();
    }
    if (local_4c != (int *)0x0) {
      (**(code **)(*local_4c + 4))();
    }
    if (local_38 != (int *)0x0) {
      (**(code **)(*local_38 + 4))();
    }
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 4))();
    }
    if (local_40 != (int *)0x0) {
      (**(code **)(*local_40 + 4))();
    }
  }
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 4))();
  }
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 4))();
  }
LAB_11066d1d:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return uVar13;
}



/* ===== FUN_110717d0 @ 110717d0  size=412 ===== */
// strings:
//   "SkillSequenceGroup"
//   "Sequence"
//   "Position"
//   "Rotation"

/* WARNING: Removing unreachable block (ram,0x11071982) */
/* WARNING: Removing unreachable block (ram,0x11071993) */
/* WARNING: Removing unreachable block (ram,0x110719c2) */
/* WARNING: Removing unreachable block (ram,0x1107199a) */
/* WARNING: Removing unreachable block (ram,0x110719a0) */
/* WARNING: Removing unreachable block (ram,0x110719ac) */
/* WARNING: Removing unreachable block (ram,0x110719b3) */
/* WARNING: Removing unreachable block (ram,0x110719f1) */
/* [RE-AUTO c0]
   strings:
     ""SkillSequenceGroup""
     ""Sequence""
     ""Position""
     ""Rotation"" */

undefined1 FUN_110717d0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  piVar4 = (int *)0x0;
  if ((int *)*param_2 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*(int *)*param_2 + 0xac))(&local_1c,"SkillSequenceGroup");
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)();
    }
    piVar4 = (int *)*piVar4;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 4))();
    }
    if ((piVar4 != (int *)0x0) &&
       (cVar1 = (**(code **)(*piVar4 + 0x28))("SkillSequenceGroup"), cVar1 != '\0')) {
      iVar2 = (**(code **)(*piVar4 + 0xa0))();
      local_18 = 0;
      if (0 < iVar2) {
        do {
          (**(code **)(*piVar4 + 0xa8))(&param_2,local_18);
          if (param_2 != (int *)0x0) {
            cVar1 = (**(code **)(*param_2 + 0x28))("Sequence");
            if ((cVar1 != '\0') &&
               (local_14 = (**(code **)(*param_2 + 0x7c))(&DAT_11da7300), local_14 != 0)) {
              local_10 = 0;
              (**(code **)(*param_2 + 0xac))(&local_8,"Position");
              if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x14);
              }
              (**(code **)(*param_2 + 0xac))(&local_c,"Rotation");
              if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x14);
              }
            }
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 4))();
            }
          }
          local_18 = local_18 + 1;
        } while (local_18 < iVar2);
      }
      uVar3 = 1;
      goto LAB_11071a1b;
    }
  }
  uVar3 = 0;
LAB_11071a1b:
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  return uVar3;
}



/* ===== FUN_110720a0 @ 110720a0  size=444 ===== */
// strings:
//   "SkillSequenceGroup"
//   "Sequence"
//   "Position"
//   "Rotation"

/* WARNING: Removing unreachable block (ram,0x11072230) */
/* WARNING: Removing unreachable block (ram,0x11072241) */
/* WARNING: Removing unreachable block (ram,0x11072270) */
/* WARNING: Removing unreachable block (ram,0x11072248) */
/* WARNING: Removing unreachable block (ram,0x1107224e) */
/* WARNING: Removing unreachable block (ram,0x1107225a) */
/* WARNING: Removing unreachable block (ram,0x11072261) */
/* WARNING: Removing unreachable block (ram,0x1107229f) */
/* [RE-AUTO c0]
   strings:
     ""SkillSequenceGroup""
     ""Sequence""
     ""Position""
     ""Rotation"" */

void __thiscall FUN_110720a0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 local_30 [20];
  undefined1 *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_8 = param_1;
    FUN_100f2140(local_30,param_1 + 0x38,param_3);
    local_18 = FUN_100f68b0(local_1c);
    if (local_18 != 0) {
      iVar3 = FUN_100f3cb0();
      if ((iVar3 != 0) && (iVar3 = FUN_110725e0(iVar3,"SkillSequenceGroup"), iVar3 != 0)) {
        for (piVar2 = *(int **)(iVar3 + 0x18); local_10 = piVar2, piVar2 != (int *)0x0;
            piVar2 = (int *)piVar2[10]) {
          if ((piVar2[5] == 1) && (iVar3 = (**(code **)(*piVar2 + 0x18))(), iVar3 != 0)) {
            iVar3 = (**(code **)(*piVar2 + 0x18))();
            pcVar6 = "Sequence";
            pbVar5 = (byte *)(*(int *)(iVar3 + 0x20) + 8);
            do {
              bVar1 = *pbVar5;
              bVar7 = bVar1 < (byte)*pcVar6;
              if (bVar1 != *pcVar6) {
LAB_11072170:
                uVar4 = -(uint)bVar7 | 1;
                goto LAB_11072175;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar7 = bVar1 < (byte)pcVar6[1];
              if (bVar1 != pcVar6[1]) goto LAB_11072170;
              pbVar5 = pbVar5 + 2;
              pcVar6 = pcVar6 + 2;
            } while (bVar1 != 0);
            uVar4 = 0;
LAB_11072175:
            if (uVar4 == 0) {
              local_c = FUN_100f40b0(&DAT_11da7300);
              local_14 = FUN_110725e0(iVar3,"Position");
              if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x14);
              }
              iVar3 = FUN_110725e0(iVar3,"Rotation");
              if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x14);
              }
            }
          }
        }
      }
      FUN_100f6910(local_18);
    }
    if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_1c);
    }
  }
  return;
}



/* ===== FUN_110722e0 @ 110722e0  size=475 ===== */
// calls: __alloca_probe
// strings:
//   "SkillSequenceGroup"
//   "Sequence"
//   "Position"
//   "Rotation"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x11072493) */
/* WARNING: Removing unreachable block (ram,0x110724a4) */
/* WARNING: Removing unreachable block (ram,0x110724d3) */
/* WARNING: Removing unreachable block (ram,0x110724ab) */
/* WARNING: Removing unreachable block (ram,0x110724b1) */
/* WARNING: Removing unreachable block (ram,0x110724bd) */
/* WARNING: Removing unreachable block (ram,0x110724c4) */
/* WARNING: Removing unreachable block (ram,0x11072502) */
/* [RE-AUTO c0]
   calls: __alloca_probe
   strings:
     ""SkillSequenceGroup""
     ""Sequence""
     ""Position""
     ""Rotation"" */

void __thiscall FUN_110722e0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  int iStack_10060;
  undefined1 local_34 [20];
  undefined1 *local_20;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  local_8 = 0x110722ed;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_100f2140(local_34,param_1 + 0x38,param_3);
    FUN_11074d70(local_20);
    FUN_11075080();
    iVar8 = local_18;
    FUN_11073650(local_18);
    if ((iStack_10060 != 0) && (iVar3 = FUN_11070530("SkillSequenceGroup",0,1), iVar3 != 0)) {
      for (puVar2 = *(undefined4 **)(iVar3 + 0x18); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)puVar2[0xb]) {
        if (puVar2[5] == 1) {
          pbVar4 = &DAT_1203e5c8;
          if ((byte *)*puVar2 != (byte *)0x0) {
            pbVar4 = (byte *)*puVar2;
          }
          pcVar7 = "Sequence";
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_110723a6:
              uVar5 = -(uint)bVar9 | 1;
              goto LAB_110723ab;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_110723a6;
            pbVar4 = pbVar4 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_110723ab:
          if (uVar5 == 0) {
            uVar6 = FUN_110704b0(&DAT_11da7300,0,1);
            local_c = FUN_11486af0(uVar6);
            if (local_c != 0) {
              local_8 = FUN_11070530("Position",0,1);
              if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x14);
              }
              local_8 = FUN_11070530("Rotation",0,1);
              if (local_8 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580(0x14);
              }
              local_8 = 0;
            }
          }
        }
        iVar8 = local_18;
      }
    }
    FUN_11076840();
    if ((iVar8 != 0) && (local_14 != 0)) {
      FUN_10c3da30(iVar8);
    }
    if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_20);
    }
  }
  return;
}



/* ===== FUN_11077b00 @ 11077b00  size=244 ===== */
// strings:
//   "SkillSequenceGroup"

/* [RE-AUTO c0]
   strings:
     ""SkillSequenceGroup"" */

undefined1 FUN_11077b00(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  int local_c;
  int *local_8;
  
  if (param_1 != (int *)0x0) {
    pbVar2 = (byte *)(**(code **)(*param_1 + 0x20))();
    pbVar4 = (byte *)0x11d0e0c8;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_11077b40:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_11077b45;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_11077b40;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_11077b45:
    if ((uVar3 == 0) &&
       ((**(code **)(*param_1 + 0xac))(&local_8,"SkillSequenceGroup"), local_8 != (int *)0x0)) {
      if (DAT_12031140 == 0) {
        FUN_10de9640();
        FUN_10de98c0();
      }
      uVar3 = (**(code **)(*local_8 + 0xa0))();
      if (uVar3 != 0) {
        uVar6 = 0;
        do {
          (**(code **)(*local_8 + 0xa8))(&local_c,uVar6);
          if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x11c);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      uVar5 = 1;
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))();
      }
      goto LAB_11077b69;
    }
  }
  uVar5 = 0;
LAB_11077b69:
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return uVar5;
}



/* ===== FUN_11099640 @ 11099640  size=785 ===== */
// strings:
//   "value"
//   "fire_cock"
//   "empty_clip"
//   "reload"
//   "reload_chamber_full"
//   "reload_chamber_empty"
//   "spin_down"
//   "spin_down_tail"
//   "overheating"
//   "cooldown"
//   "null_fire"

/* [RE-AUTO c0]
   strings:
     ""value""
     ""fire_cock""
     ""empty_clip""
     ""reload""
     ""reload_chamber_full""
     ""reload_chamber_empty""
     ""spin_down""
     ""spin_down_tail""
     ""overheating""
     ""cooldown"" */

void FUN_11099640(undefined4 param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != '\0') {
    FUN_10ab4370(&DAT_11dd633c);
  }
  piVar1 = (int *)FUN_10ab25f0(&DAT_11dd633c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370(&DAT_11dd633c);
  }
  piVar1 = (int *)FUN_10ab25f0("fire_cock");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370(&DAT_11d0f42c);
  }
  piVar1 = (int *)FUN_10ab25f0(&DAT_11d0f42c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("empty_clip");
  }
  piVar1 = (int *)FUN_10ab25f0("empty_clip");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("reload");
  }
  piVar1 = (int *)FUN_10ab25f0("reload");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("reload_chamber_full");
  }
  piVar1 = (int *)FUN_10ab25f0("reload_chamber_full");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("reload_chamber_empty");
  }
  piVar1 = (int *)FUN_10ab25f0("reload_chamber_empty");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("spin_up");
  }
  piVar1 = (int *)FUN_10ab25f0("spin_up");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("spin_down");
  }
  piVar1 = (int *)FUN_10ab25f0("spin_down");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("spin_down_tail");
  }
  piVar1 = (int *)FUN_10ab25f0("spin_down_tail");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("overheating");
  }
  piVar1 = (int *)FUN_10ab25f0("overheating");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("cooldown");
  }
  piVar1 = (int *)FUN_10ab25f0("cooldown");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  if (param_2 != '\0') {
    FUN_10ab4370("null_fire");
  }
  piVar1 = (int *)FUN_10ab25f0("null_fire");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))("value");
    if (iVar2 != 0) {
      FUN_10ab4370(iVar2);
    }
  }
  return;
}



/* ===== FUN_110ce4f0 @ 110ce4f0  size=7349 ===== */
// calls: memcpy, CInfoRecord::GetModelString, libm_sse2_cos_precise
// strings:
//   "Animations"
//   "engine"
//   "value"
//   "engineIgnitionTime"
//   "SoundParams"
//   "sounds/"
//   "sounds/vehicles:"
//   "eventGroup"
//   "eventGroupFunc"
//   "engineSoundPosition"
//   "rpmPitchSpeed"
//   "runSoundDelay"
//   "maxSlipSpeed"
//   ":start"
//   ":stop"
//   ":ambience"
//   ":bump_on_road"
//   ":bounce_on_waves"
//   ":gear"
//   ":slip"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memcpy, libm_sse2_cos_precise
   strings:
     ""Animations""
     ""engine""
     ""value""
     ""engineIgnitionTime""
     ""SoundParams""
     ""sounds/""
     ""sounds/vehicles:""
     ""eventGroup""
     ""eventGroupFunc""
     ""engineSoundPosition"" */

undefined4 __thiscall FUN_110ce4f0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  size_t _Size;
  byte *pbVar16;
  bool bVar17;
  double dVar18;
  undefined1 local_1a8 [12];
  undefined1 local_19c [8];
  undefined1 local_194 [8];
  undefined1 local_18c [8];
  undefined1 local_184 [8];
  undefined1 local_17c [8];
  undefined1 local_174 [8];
  undefined1 local_16c [8];
  undefined **local_164;
  int *local_160;
  int *local_15c;
  int *local_158;
  undefined **local_154;
  int *local_150;
  int *local_14c;
  undefined **local_148;
  int *local_144;
  int *local_140;
  undefined1 local_13c [4];
  int *local_138;
  undefined1 local_130 [4];
  int *local_12c;
  undefined1 local_124 [4];
  int *local_120;
  undefined1 local_118 [4];
  int *local_114;
  undefined4 local_10c;
  undefined **local_108;
  int *local_104;
  int *local_100;
  int local_fc;
  undefined4 local_f8;
  undefined **local_f4;
  int *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  int *local_c0;
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4;
  int *local_b0;
  undefined4 local_ac;
  int *local_a8;
  undefined4 local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  float local_88;
  int *local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  int *local_74;
  int *local_70;
  byte *local_6c;
  undefined1 local_65;
  int *local_64;
  int *local_60;
  char *local_5c;
  int *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  int *local_1c;
  int *local_18;
  char *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  param_1[3] = param_2;
  param_1[4] = *(int *)(param_2 + 0xc);
  piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  _DAT_1203ed54 = (**(code **)(*piVar5 + 0x8c))();
  piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  _DAT_1203ed58 = (**(code **)(*piVar5 + 0x80))();
  piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  DAT_1203ed5c = (**(code **)(*piVar5 + 0x68))();
  iVar6 = (**(code **)(*(int *)param_1[3] + 0x140))();
  param_1[0x31] = iVar6;
  (**(code **)(*param_1 + 0xf0))();
  iVar6 = param_3;
  param_1[0x30] = 0;
  (**(code **)(**(int **)(param_3 + 4) + 0xac))(&local_64,"Animations");
  piVar5 = local_64;
  local_158 = local_64;
  if (local_64 != (int *)0x0) {
    (**(code **)*local_64)();
  }
  piVar15 = *(int **)(iVar6 + 8);
  local_150 = piVar5;
  local_14c = piVar15;
  if (piVar5 != (int *)0x0) {
    (**(code **)*piVar5)();
    (**(code **)(*piVar5 + 4))();
  }
  local_160 = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)*piVar5)();
  }
  local_154 = &PTR_FUN_11d10dd4;
  local_15c = piVar15;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  if (local_64 != (int *)0x0) {
    (**(code **)(*local_64 + 4))();
  }
  if ((piVar5 != (int *)0x0) && (cVar2 = (**(code **)(*piVar5 + 0x80))("engine"), cVar2 != '\0')) {
    local_98 = (**(code **)(*piVar5 + 0x7c))("engine");
    cVar2 = (**(code **)(*piVar5 + 0x78))(&DAT_11dbb0b4,&local_10c);
    if ((cVar2 != '\0') &&
       (((**(code **)(*piVar15 + 4))(&local_90,local_10c,"engine"), local_90 != (int *)0x0 &&
        ((**(code **)(*local_90 + 0x78))("value",&local_98), local_90 != (int *)0x0)))) {
      (**(code **)(*local_90 + 4))();
    }
    iVar6 = (**(code **)(*(int *)param_1[3] + 0xc4))(local_98);
    param_1[0x30] = iVar6;
  }
  local_164 = &PTR_FUN_11d10dd4;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  piVar5 = param_1 + 0xf;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined2 *)((int)param_1 + 0x35) = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = -1;
  param_1[0x10] = -1;
  cVar2 = (**(code **)(**(int **)(param_3 + 4) + 100))("engineIgnitionTime",piVar5);
  cVar3 = (**(code **)(**(int **)(param_3 + 4) + 0x78))(&DAT_11dbb0b4,&local_e8);
  if (((cVar3 != '\0') &&
      ((**(code **)(**(int **)(param_3 + 8) + 4))(&local_74,local_e8,"engineIgnitionTime"),
      local_74 != (int *)0x0)) &&
     ((**(code **)(*local_74 + 100))("value",piVar5), local_74 != (int *)0x0)) {
    (**(code **)(*local_74 + 4))();
  }
  if (cVar2 == '\0') {
    *piVar5 = 0x3fcccccd;
  }
  local_5c = &DAT_1201fc98;
  piVar5 = (int *)(**(code **)(*(int *)param_1[4] + 0xc))();
  local_10 = (int *)(**(code **)(*piVar5 + 8))();
  piVar5 = (int *)&DAT_1201fc98;
  local_18 = (int *)&DAT_1201fc98;
  if (local_10 != (int *)0x0) {
    piVar15 = local_10;
    do {
      iVar6 = *piVar15;
      piVar15 = (int *)((int)piVar15 + 1);
    } while ((char)iVar6 != '\0');
    _Size = (int)piVar15 - (int)((int)local_10 + 1);
    if (_Size != 0) {
      puVar7 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
      DAT_123be268 = DAT_123be268 + _Size + 0xd;
      *puVar7 = 1;
      piVar5 = puVar7 + 3;
      puVar7[1] = _Size;
      puVar7[2] = _Size;
      *(char *)(_Size + (int)piVar5) = '\0';
      local_18 = piVar5;
      if (piVar5 != local_10) {
        memcpy(piVar5,local_10,_Size);
      }
    }
  }
  local_c = piVar5 + -3;
  if (piVar5[-3] < 0) {
    local_1c = (int *)&DAT_1201fc98;
  }
  else {
    local_1c = local_18;
    FUN_10c3dab0(local_c);
  }
  iVar6 = param_3;
  (**(code **)(**(int **)(param_3 + 4) + 0xac))(&local_60,"SoundParams");
  piVar5 = local_60;
  local_58 = local_60;
  if (local_60 != (int *)0x0) {
    (**(code **)*local_60)();
  }
  piVar15 = *(int **)(iVar6 + 8);
  local_144 = piVar5;
  local_140 = piVar15;
  local_10 = piVar15;
  if (piVar5 != (int *)0x0) {
    (**(code **)*piVar5)();
    (**(code **)(*piVar5 + 4))();
  }
  local_108 = &PTR_FUN_11d10dd4;
  local_104 = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)*piVar5)();
  }
  local_148 = &PTR_FUN_11d10dd4;
  local_100 = piVar15;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  if (local_60 != (int *)0x0) {
    (**(code **)(*local_60 + 4))();
  }
  if (piVar5 != (int *)0x0) {
    iVar6 = param_1[3];
    if (*(int *)(*(int *)(iVar6 + 0x14) + -8) == 0) {
      FUN_1083ab70("sounds/vehicles:",0x10);
      cVar2 = (**(code **)(*piVar5 + 0x80))("eventGroup");
      if (cVar2 != '\0') {
        pcVar9 = (char *)FUN_110b8a80("eventGroup");
        if (pcVar9 == (char *)0x0) {
          iVar13 = 0;
        }
        else {
          local_c = (int *)(pcVar9 + 1);
          pcVar14 = pcVar9;
          do {
            cVar2 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar2 != '\0');
          iVar13 = (int)pcVar14 - (int)local_c;
        }
        FUN_1083ab70(pcVar9,iVar13);
      }
    }
    else {
      FUN_1083ab70("sounds/",7);
      if (local_18 != *(int **)(iVar6 + 0x14)) {
        if (*local_c < 0) {
          piVar5 = local_58;
          if (-1 < *(int *)(*(int *)(iVar6 + 0x14) + -0xc)) {
LAB_110ce8f4:
            local_18 = *(int **)(iVar6 + 0x14);
            FUN_10c3dab0(local_18 + -3);
            piVar5 = local_58;
          }
        }
        else {
          if (-1 < *(int *)(*(int *)(iVar6 + 0x14) + -0xc)) {
            FUN_1083ac70();
            goto LAB_110ce8f4;
          }
          FUN_1083ac70();
          local_18 = *(int **)(iVar6 + 0x14);
          piVar5 = local_58;
        }
      }
    }
    if (*(int *)(*(int *)(iVar6 + 0x18) + -8) == 0) {
      FUN_1083ab70("sounds/vehicles:",0x10);
      cVar2 = (**(code **)(*piVar5 + 0x80))("eventGroupFunc");
      if (cVar2 != '\0') {
        pcVar9 = (char *)FUN_110b8a80("eventGroupFunc");
        if (pcVar9 == (char *)0x0) {
          iVar6 = 0;
        }
        else {
          pcVar14 = pcVar9;
          do {
            cVar2 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar2 != '\0');
          iVar6 = (int)pcVar14 - (int)(pcVar9 + 1);
        }
        FUN_1083ab70(pcVar9,iVar6);
      }
    }
    else {
      FUN_1083ab70("sounds/",7);
      if (local_1c != *(int **)(iVar6 + 0x18)) {
        if (local_1c[-3] < 0) {
          piVar5 = local_58;
          if (-1 < *(int *)(*(int *)(iVar6 + 0x18) + -0xc)) {
LAB_110ce9b7:
            local_1c = *(int **)(iVar6 + 0x18);
            FUN_10c3dab0(local_1c + -3);
            piVar5 = local_58;
          }
        }
        else {
          if (-1 < *(int *)(*(int *)(iVar6 + 0x18) + -0xc)) {
            FUN_1083ac70();
            goto LAB_110ce9b7;
          }
          FUN_1083ac70();
          local_1c = *(int **)(iVar6 + 0x18);
          piVar5 = local_58;
        }
      }
    }
    cVar2 = (**(code **)(*piVar5 + 0x80))("engineSoundPosition");
    if (cVar2 != '\0') {
      local_7c = (**(code **)(*piVar5 + 0x7c))("engineSoundPosition");
      cVar2 = (**(code **)(*piVar5 + 0x78))(&DAT_11dbb0b4,&local_e4);
      if (((cVar2 != '\0') &&
          ((**(code **)(*local_10 + 4))(&local_94,local_e4,"engineSoundPosition"),
          local_94 != (int *)0x0)) &&
         ((**(code **)(*local_94 + 0x78))("value",&local_7c), local_94 != (int *)0x0)) {
        (**(code **)(*local_94 + 4))();
      }
      piVar15 = (int *)(**(code **)(*(int *)param_1[3] + 400))(local_7c);
      if (piVar15 == (int *)0x0) {
        param_1[0x23] = 0;
        param_1[0x22] = 0;
        param_1[0x21] = 0;
      }
      else {
        puVar8 = (undefined8 *)(**(code **)(*piVar15 + 0x1c))(local_1a8);
        *(undefined8 *)(param_1 + 0x21) = *puVar8;
        param_1[0x23] = *(int *)(puVar8 + 1);
      }
    }
    (**(code **)(*piVar5 + 100))("rpmPitchSpeed",param_1 + 0x27);
    cVar2 = (**(code **)(*piVar5 + 0x78))(&DAT_11dbb0b4,&local_d4);
    piVar15 = local_10;
    if (((cVar2 != '\0') &&
        ((**(code **)(*local_10 + 4))(&local_8c,local_d4,"rpmPitchSpeed"), local_8c != (int *)0x0))
       && ((**(code **)(*local_8c + 100))("value",param_1 + 0x27), local_8c != (int *)0x0)) {
      (**(code **)(*local_8c + 4))();
    }
    (**(code **)(*piVar5 + 100))("runSoundDelay",param_1 + 0x24);
    cVar2 = (**(code **)(*piVar5 + 0x78))(&DAT_11dbb0b4,&local_f8);
    if (((cVar2 != '\0') &&
        ((**(code **)(*piVar15 + 4))(&local_84,local_f8,"runSoundDelay"), local_84 != (int *)0x0))
       && ((**(code **)(*local_84 + 100))("value",param_1 + 0x24), local_84 != (int *)0x0)) {
      (**(code **)(*local_84 + 4))();
    }
    (**(code **)(*piVar5 + 100))("maxSlipSpeed",param_1 + 0x28);
    cVar2 = (**(code **)(*piVar5 + 0x78))(&DAT_11dbb0b4,&local_e0);
    if (((cVar2 != '\0') &&
        ((**(code **)(*piVar15 + 4))(&local_70,local_e0,"maxSlipSpeed"), local_70 != (int *)0x0)) &&
       ((**(code **)(*local_70 + 100))("value",param_1 + 0x28), local_70 != (int *)0x0)) {
      (**(code **)(*local_70 + 4))();
    }
    if (0.0 < (float)param_1[0x24]) {
      param_1[0xf] = (int)((float)param_1[0x24] + DAT_11de98e8);
    }
  }
  local_108 = &PTR_FUN_11d10dd4;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  local_10 = local_18;
  if ((local_18[-2] == 0) || (local_c = local_1c, local_1c[-2] == 0)) goto LAB_110cf675;
  piVar5 = (int *)(local_5c + -0xc);
  if (*piVar5 < 0) {
    local_20 = &DAT_1201fc98;
  }
  else {
    local_20 = local_5c;
    FUN_10c3dab0(piVar5);
  }
  FUN_10a4c990(local_18,local_10[-2]);
  FUN_10a7ef40();
  cVar2 = *local_20;
  pcVar9 = local_20;
  while (cVar2 != '\0') {
    cVar2 = *pcVar9;
    if (('@' < cVar2) && (cVar2 < '[')) {
      cVar2 = cVar2 + ' ';
    }
    *pcVar9 = cVar2;
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar9;
  }
  if (*piVar5 < 0) {
    local_14 = &DAT_1201fc98;
  }
  else {
    local_14 = local_5c;
    FUN_10c3dab0(piVar5);
  }
  FUN_10a4c990(local_1c,local_c[-2]);
  FUN_10a7ef40();
  cVar2 = *local_14;
  pcVar9 = local_14;
  while (cVar2 != '\0') {
    cVar2 = *pcVar9;
    if (('@' < cVar2) && (cVar2 < '[')) {
      cVar2 = cVar2 + ' ';
    }
    *pcVar9 = cVar2;
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar9;
  }
  local_10 = (int *)(local_20 + -0xc);
  if (*local_10 < 0) {
    local_4c = &DAT_1201fc98;
  }
  else {
    local_4c = local_20;
    FUN_10c3dab0(local_10);
  }
  FUN_10a4c990(":start",6);
  pcVar9 = local_4c;
  if ((char *)param_1[0x14] != local_4c) {
    if (*(int *)((char *)param_1[0x14] + -0xc) < 0) {
      if (-1 < *(int *)(local_4c + -0xc)) {
        param_1[0x14] = (int)local_4c;
        piVar5 = (int *)(local_4c + -0xc);
LAB_110cedd0:
        pcVar9 = local_4c;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_c = (int *)(local_4c + -0xc);
      if (-1 < *local_c) {
        FUN_1083ac70();
        param_1[0x14] = (int)local_4c;
        piVar5 = local_c;
        goto LAB_110cedd0;
      }
      FUN_1083ac70();
      param_1[0x14] = (int)local_4c;
      pcVar9 = local_4c;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_10 < 0) {
    local_54 = &DAT_1201fc98;
  }
  else {
    local_54 = local_20;
    FUN_10c3dab0(local_10);
  }
  FUN_10a4c990(&DAT_11d121b8,4);
  pcVar9 = local_54;
  if ((char *)param_1[0x15] != local_54) {
    if (*(int *)((char *)param_1[0x15] + -0xc) < 0) {
      if (-1 < *(int *)(local_54 + -0xc)) {
        param_1[0x15] = (int)local_54;
        piVar5 = (int *)(local_54 + -0xc);
LAB_110cee7c:
        pcVar9 = local_54;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_c = (int *)(local_54 + -0xc);
      if (-1 < *local_c) {
        FUN_1083ac70();
        param_1[0x15] = (int)local_54;
        piVar5 = local_c;
        goto LAB_110cee7c;
      }
      FUN_1083ac70();
      param_1[0x15] = (int)local_54;
      pcVar9 = local_54;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_10 < 0) {
    local_48 = &DAT_1201fc98;
  }
  else {
    local_48 = local_20;
    FUN_10c3dab0(local_10);
  }
  FUN_10a4c990(":stop",5);
  pcVar9 = local_48;
  if ((char *)param_1[0x16] != local_48) {
    if (*(int *)((char *)param_1[0x16] + -0xc) < 0) {
      if (-1 < *(int *)(local_48 + -0xc)) {
        param_1[0x16] = (int)local_48;
        piVar5 = (int *)(local_48 + -0xc);
LAB_110cef28:
        pcVar9 = local_48;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_c = (int *)(local_48 + -0xc);
      if (-1 < *local_c) {
        FUN_1083ac70();
        param_1[0x16] = (int)local_48;
        piVar5 = local_c;
        goto LAB_110cef28;
      }
      FUN_1083ac70();
      param_1[0x16] = (int)local_48;
      pcVar9 = local_48;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_10 < 0) {
    local_2c = &DAT_1201fc98;
  }
  else {
    local_2c = local_20;
    FUN_10c3dab0(local_10);
  }
  FUN_10a4c990(":ambience",9);
  pcVar9 = local_2c;
  if ((char *)param_1[0x17] != local_2c) {
    if (*(int *)((char *)param_1[0x17] + -0xc) < 0) {
      if (-1 < *(int *)(local_2c + -0xc)) {
        param_1[0x17] = (int)local_2c;
        piVar5 = (int *)(local_2c + -0xc);
LAB_110cefd4:
        pcVar9 = local_2c;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_c = (int *)(local_2c + -0xc);
      if (-1 < *local_c) {
        FUN_1083ac70();
        param_1[0x17] = (int)local_2c;
        piVar5 = local_c;
        goto LAB_110cefd4;
      }
      FUN_1083ac70();
      param_1[0x17] = (int)local_2c;
      pcVar9 = local_2c;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  local_c = (int *)(local_14 + -0xc);
  if (*local_c < 0) {
    local_3c = &DAT_1201fc98;
  }
  else {
    local_3c = local_14;
    FUN_10c3dab0(local_c);
  }
  FUN_10a4c990(":bump_on_road",0xd);
  pcVar9 = local_3c;
  if ((char *)param_1[0x18] != local_3c) {
    if (*(int *)((char *)param_1[0x18] + -0xc) < 0) {
      if (-1 < *(int *)(local_3c + -0xc)) {
        param_1[0x18] = (int)local_3c;
        piVar5 = (int *)(local_3c + -0xc);
LAB_110cf086:
        pcVar9 = local_3c;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_3c + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x18] = (int)local_3c;
        piVar5 = local_8;
        goto LAB_110cf086;
      }
      FUN_1083ac70();
      param_1[0x18] = (int)local_3c;
      pcVar9 = local_3c;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_c < 0) {
    local_34 = &DAT_1201fc98;
  }
  else {
    local_34 = local_14;
    FUN_10c3dab0(local_c);
  }
  FUN_10a4c990(":bounce_on_waves",0x10);
  pcVar9 = local_34;
  if ((char *)param_1[0x19] != local_34) {
    if (*(int *)((char *)param_1[0x19] + -0xc) < 0) {
      if (-1 < *(int *)(local_34 + -0xc)) {
        param_1[0x19] = (int)local_34;
        piVar5 = (int *)(local_34 + -0xc);
LAB_110cf132:
        pcVar9 = local_34;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_34 + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x19] = (int)local_34;
        piVar5 = local_8;
        goto LAB_110cf132;
      }
      FUN_1083ac70();
      param_1[0x19] = (int)local_34;
      pcVar9 = local_34;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_c < 0) {
    local_44 = &DAT_1201fc98;
  }
  else {
    local_44 = local_14;
    FUN_10c3dab0(local_c);
  }
  FUN_10a4c990(":gear",5);
  pcVar9 = local_44;
  if ((char *)param_1[0x1a] != local_44) {
    if (*(int *)((char *)param_1[0x1a] + -0xc) < 0) {
      if (-1 < *(int *)(local_44 + -0xc)) {
        param_1[0x1a] = (int)local_44;
        piVar5 = (int *)(local_44 + -0xc);
LAB_110cf1de:
        pcVar9 = local_44;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_44 + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x1a] = (int)local_44;
        piVar5 = local_8;
        goto LAB_110cf1de;
      }
      FUN_1083ac70();
      param_1[0x1a] = (int)local_44;
      pcVar9 = local_44;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_c < 0) {
    local_24 = &DAT_1201fc98;
  }
  else {
    local_24 = local_14;
    FUN_10c3dab0(local_c);
  }
  FUN_10a4c990(":slip",5);
  pcVar9 = local_24;
  if ((char *)param_1[0x1b] != local_24) {
    if (*(int *)((char *)param_1[0x1b] + -0xc) < 0) {
      if (-1 < *(int *)(local_24 + -0xc)) {
        param_1[0x1b] = (int)local_24;
        piVar5 = (int *)(local_24 + -0xc);
LAB_110cf28a:
        pcVar9 = local_24;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_24 + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x1b] = (int)local_24;
        piVar5 = local_8;
        goto LAB_110cf28a;
      }
      FUN_1083ac70();
      param_1[0x1b] = (int)local_24;
      pcVar9 = local_24;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_10 < 0) {
    local_40 = &DAT_1201fc98;
  }
  else {
    local_40 = local_20;
    FUN_10c3dab0(local_10);
  }
  FUN_10a4c990(":acceleration",0xd);
  pcVar9 = local_40;
  if ((char *)param_1[0x1c] != local_40) {
    if (*(int *)((char *)param_1[0x1c] + -0xc) < 0) {
      if (-1 < *(int *)(local_40 + -0xc)) {
        param_1[0x1c] = (int)local_40;
        piVar5 = (int *)(local_40 + -0xc);
LAB_110cf336:
        pcVar9 = local_40;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_40 + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x1c] = (int)local_40;
        piVar5 = local_8;
        goto LAB_110cf336;
      }
      FUN_1083ac70();
      param_1[0x1c] = (int)local_40;
      pcVar9 = local_40;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_c < 0) {
    local_50 = &DAT_1201fc98;
  }
  else {
    local_50 = local_14;
    FUN_10c3dab0(local_c);
  }
  FUN_10a4c990(":boost",6);
  pcVar9 = local_50;
  if ((char *)param_1[0x1d] != local_50) {
    if (*(int *)((char *)param_1[0x1d] + -0xc) < 0) {
      if (-1 < *(int *)(local_50 + -0xc)) {
        param_1[0x1d] = (int)local_50;
        piVar5 = (int *)(local_50 + -0xc);
LAB_110cf3e2:
        pcVar9 = local_50;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_50 + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x1d] = (int)local_50;
        piVar5 = local_8;
        goto LAB_110cf3e2;
      }
      FUN_1083ac70();
      param_1[0x1d] = (int)local_50;
      pcVar9 = local_50;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_c < 0) {
    local_38 = &DAT_1201fc98;
  }
  else {
    local_38 = local_14;
    FUN_10c3dab0(local_c);
  }
  FUN_10a4c990(":damage",7);
  pcVar9 = local_38;
  if ((char *)param_1[0x1e] != local_38) {
    if (*(int *)((char *)param_1[0x1e] + -0xc) < 0) {
      if (-1 < *(int *)(local_38 + -0xc)) {
        param_1[0x1e] = (int)local_38;
        piVar5 = (int *)(local_38 + -0xc);
LAB_110cf48e:
        pcVar9 = local_38;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_38 + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x1e] = (int)local_38;
        piVar5 = local_8;
        goto LAB_110cf48e;
      }
      FUN_1083ac70();
      param_1[0x1e] = (int)local_38;
      pcVar9 = local_38;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_c < 0) {
    local_28 = &DAT_1201fc98;
  }
  else {
    local_28 = local_14;
    FUN_10c3dab0(local_c);
  }
  FUN_10a4c990(":WG_moto_player_turn_01",0x17);
  pcVar9 = local_28;
  if ((char *)param_1[0x1f] != local_28) {
    if (*(int *)((char *)param_1[0x1f] + -0xc) < 0) {
      if (-1 < *(int *)(local_28 + -0xc)) {
        param_1[0x1f] = (int)local_28;
        piVar5 = (int *)(local_28 + -0xc);
LAB_110cf53a:
        pcVar9 = local_28;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_28 + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x1f] = (int)local_28;
        piVar5 = local_8;
        goto LAB_110cf53a;
      }
      FUN_1083ac70();
      param_1[0x1f] = (int)local_28;
      pcVar9 = local_28;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  if (*local_c < 0) {
    local_30 = &DAT_1201fc98;
  }
  else {
    local_30 = local_14;
    FUN_10c3dab0(local_c);
  }
  FUN_10a4c990(":WG_moto_hit_01",0xf);
  pcVar9 = local_30;
  if ((char *)param_1[0x20] != local_30) {
    if (*(int *)((char *)param_1[0x20] + -0xc) < 0) {
      if (-1 < *(int *)(local_30 + -0xc)) {
        param_1[0x20] = (int)local_30;
        piVar5 = (int *)(local_30 + -0xc);
LAB_110cf5f2:
        pcVar9 = local_30;
        FUN_10c3dab0(piVar5);
      }
    }
    else {
      local_8 = (int *)(local_30 + -0xc);
      if (-1 < *local_8) {
        FUN_1083ac70();
        param_1[0x20] = (int)local_30;
        piVar5 = local_8;
        goto LAB_110cf5f2;
      }
      FUN_1083ac70();
      param_1[0x20] = (int)local_30;
      pcVar9 = local_30;
    }
  }
  piVar5 = (int *)(pcVar9 + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  piVar5 = local_c;
  if ((-1 < *local_c) && (iVar6 = FUN_10c3dad0(local_c), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
    FUN_10c3d900(piVar5);
  }
  piVar5 = local_10;
  if ((-1 < *local_10) && (iVar6 = FUN_10c3dad0(local_10), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
    FUN_10c3d900(piVar5);
  }
LAB_110cf675:
  iVar6 = (**(code **)(*(int *)param_1[4] + 0x158))(3);
  param_1[5] = iVar6;
  if ((*(int *)(param_1[0x15] + -8) != 0) && (*(char *)(DAT_1202e818 + 0x209) != '\0')) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x38) + 100))(param_1[0x15],0x44000,1);
  }
  if (DAT_1203ed8c == 0) {
    piVar5 = (int *)FUN_10c3d780(0x11);
    DAT_123be268 = DAT_123be268 + 0x11;
    *piVar5 = 1;
    local_b8 = piVar5 + 3;
    piVar5[1] = 4;
    piVar5[2] = 4;
    *(undefined1 *)(piVar5 + 4) = 0;
    if (local_b8 != &DAT_11d12250) {
      *local_b8 = DAT_11d12250;
    }
    if (*piVar5 < 0) {
      local_b8 = (int *)&DAT_1201fc98;
    }
    else {
      FUN_10c3dab0(piVar5);
    }
    local_b4 = 1;
    FUN_110d7160(local_16c,&local_b8);
    local_8 = local_b8 + -3;
    if ((-1 < *local_8) && (iVar6 = FUN_10c3dad0(local_8), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - local_8[2]);
      FUN_10c3d900(local_8);
    }
    if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
      FUN_10c3d900(piVar5);
    }
    piVar5 = (int *)FUN_10c3d780(0x13);
    DAT_123be268 = DAT_123be268 + 0x13;
    *piVar5 = 1;
    local_a0 = piVar5 + 3;
    piVar5[1] = 6;
    piVar5[2] = 6;
    *(undefined1 *)((int)piVar5 + 0x12) = 0;
    if (local_a0 != (int *)"gravel") {
      *local_a0 = s_gravel_11d12258._0_4_;
      *(undefined2 *)(piVar5 + 4) = s_gravel_11d12258._4_2_;
    }
    if (*piVar5 < 0) {
      local_a0 = (int *)&DAT_1201fc98;
    }
    else {
      FUN_10c3dab0(piVar5);
    }
    local_9c = 2;
    FUN_110d7160(local_174,&local_a0);
    local_8 = local_a0 + -3;
    if ((-1 < *local_8) && (iVar6 = FUN_10c3dad0(local_8), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - local_8[2]);
      FUN_10c3d900(local_8);
    }
    if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
      FUN_10c3d900(piVar5);
    }
    piVar5 = (int *)FUN_10c3d780(0x15);
    DAT_123be268 = DAT_123be268 + 0x15;
    *piVar5 = 1;
    local_b0 = piVar5 + 3;
    piVar5[1] = 8;
    piVar5[2] = 8;
    *(undefined1 *)(piVar5 + 5) = 0;
    if (local_b0 != (int *)"concrete") {
      *(undefined8 *)local_b0 = s_concrete_11d12260._0_8_;
    }
    if (*piVar5 < 0) {
      local_b0 = (int *)&DAT_1201fc98;
    }
    else {
      FUN_10c3dab0(piVar5);
    }
    local_ac = 3;
    FUN_110d7160(local_184,&local_b0);
    local_8 = local_b0 + -3;
    if ((-1 < *local_8) && (iVar6 = FUN_10c3dad0(local_8), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - local_8[2]);
      FUN_10c3d900(local_8);
    }
    if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
      FUN_10c3d900(piVar5);
    }
    piVar5 = (int *)FUN_10c3d780(0x12);
    DAT_123be268 = DAT_123be268 + 0x12;
    *piVar5 = 1;
    local_a8 = piVar5 + 3;
    piVar5[1] = 5;
    piVar5[2] = 5;
    *(undefined1 *)((int)piVar5 + 0x11) = 0;
    if (local_a8 != (int *)"metal") {
      *local_a8 = s_metal_11ce993c._0_4_;
      *(char *)(piVar5 + 4) = s_metal_11ce993c[4];
    }
    if (*piVar5 < 0) {
      local_a8 = (int *)&DAT_1201fc98;
    }
    else {
      FUN_10c3dab0(piVar5);
    }
    local_a4 = 4;
    FUN_110d7160(local_194,&local_a8);
    local_8 = local_a8 + -3;
    if ((-1 < *local_8) && (iVar6 = FUN_10c3dad0(local_8), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - local_8[2]);
      FUN_10c3d900(local_8);
    }
    if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
      FUN_10c3d900(piVar5);
    }
    piVar5 = (int *)FUN_10c3d780(0x17);
    DAT_123be268 = DAT_123be268 + 0x17;
    *piVar5 = 1;
    local_c0 = piVar5 + 3;
    piVar5[1] = 10;
    piVar5[2] = 10;
    *(undefined1 *)((int)piVar5 + 0x16) = 0;
    if (local_c0 != (int *)"vegetation") {
      *(undefined8 *)local_c0 = s_vegetation_11d1226c._0_8_;
      *(undefined2 *)(piVar5 + 5) = s_vegetation_11d1226c._8_2_;
    }
    if (*piVar5 < 0) {
      local_c0 = (int *)&DAT_1201fc98;
    }
    else {
      FUN_10c3dab0(piVar5);
    }
    local_bc = 5;
    FUN_110d7160(local_17c,&local_c0);
    local_8 = local_c0 + -3;
    if ((-1 < *local_8) && (iVar6 = FUN_10c3dad0(local_8), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - local_8[2]);
      FUN_10c3d900(local_8);
    }
    if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
      FUN_10c3d900(piVar5);
    }
    CInfoRecord__GetModelString("water");
    piVar5 = (int *)(local_78 + -0xc);
    if (*piVar5 < 0) {
      local_d0 = &DAT_1201fc98;
    }
    else {
      local_d0 = local_78;
      FUN_10c3dab0(piVar5);
    }
    local_cc = 6;
    FUN_110d7160(local_19c,&local_d0);
    local_8 = (int *)(local_d0 + -0xc);
    if ((-1 < *local_8) && (iVar6 = FUN_10c3dad0(local_8), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - local_8[2]);
      FUN_10c3d900(local_8);
    }
    if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_78 + -4));
      FUN_10c3d900(piVar5);
    }
    CInfoRecord__GetModelString(&DAT_11dd62c4);
    piVar5 = (int *)(local_80 + -0xc);
    if (*piVar5 < 0) {
      local_c8 = &DAT_1201fc98;
    }
    else {
      local_c8 = local_80;
      FUN_10c3dab0(piVar5);
    }
    local_c4 = 7;
    FUN_110d7160(local_18c,&local_c8);
    local_8 = (int *)(local_c8 + -0xc);
    if ((-1 < *local_8) && (iVar6 = FUN_10c3dad0(local_8), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - local_8[2]);
      FUN_10c3d900(local_8);
    }
    if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_80 + -4));
      FUN_10c3d900(piVar5);
    }
  }
  local_d8 = (**(code **)(*(int *)param_1[3] + 0xbc))(&DAT_11d12278);
  if (local_d8 != 0) {
    piVar5 = (int *)param_1[0xeb];
    if (piVar5 == (int *)param_1[0xec]) {
      FUN_108716d0(piVar5,&local_d8,(int)&param_2 + 3,1,1);
    }
    else {
      *piVar5 = local_d8;
      param_1[0xeb] = param_1[0xeb] + 4;
    }
  }
  local_dc = (**(code **)(*(int *)param_1[3] + 0xbc))("Engine");
  if (local_dc != 0) {
    piVar5 = (int *)param_1[0xeb];
    if (piVar5 == (int *)param_1[0xec]) {
      FUN_108716d0(piVar5,&local_dc,&local_65,1,1);
    }
    else {
      *piVar5 = local_dc;
      param_1[0xeb] = param_1[0xeb] + 4;
    }
  }
  FUN_110b8a00(local_118,"Boost");
  if (local_114 != (int *)0x0) {
    FUN_110b8740("endurance",param_1 + 0x2b);
    FUN_110b8740("regeneration",param_1 + 0x2c);
    FUN_110b8740("strength",param_1 + 0x2d);
    FUN_110cad00("skillID",param_1 + 0x2e);
    (**(code **)(*local_114 + 4))();
  }
  FUN_110b8a00(local_130,"AirDamp");
  if (local_12c != (int *)0x0) {
    FUN_110d5600("dampAngle",param_1 + 0xdd);
    FUN_110d5600("dampAngVel",param_1 + 0xe0);
    (**(code **)(*local_12c + 4))();
  }
  FUN_110b8a00(local_13c,"Eject");
  if (local_138 != (int *)0x0) {
    local_88 = 0.0;
    FUN_110b8740("timer",param_1 + 0xe5);
    FUN_110b8740("maxTippingAngle",&local_88);
    if (local_88 == 0.0) {
      param_1[0xe3] = -0x40733333;
    }
    else {
      dVar18 = (double)(local_88 * DAT_11de98c0);
      libm_sse2_cos_precise();
      param_1[0xe3] = (int)(float)dVar18;
    }
    (**(code **)(*local_138 + 4))();
  }
  piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0xc4))();
  local_10 = piVar5;
  uVar4 = (**(code **)(*piVar5 + 0xc))("vehicleEngineStarting");
  *(undefined2 *)(param_1 + 0xed) = uVar4;
  uVar4 = (**(code **)(*piVar5 + 0xc))("vehicleEnginePowered");
  *(undefined2 *)((int)param_1 + 0x3b6) = uVar4;
  uVar4 = (**(code **)(*piVar5 + 0xc))("vehicleCollision");
  *(undefined2 *)(param_1 + 0xee) = uVar4;
  FUN_110b8a00(local_124,"ForceFeedback");
  piVar5 = local_120;
  if (local_120 != (int *)0x0) {
    local_8 = (int *)(**(code **)(*local_120 + 0xa0))();
    param_3 = 0;
    if (0 < (int)local_8) {
      do {
        FUN_110cd8e0(&local_f4,param_3);
        pbVar16 = (byte *)0x11cc1680;
        pbVar10 = (byte *)(**(code **)(*local_f0 + 0x20))();
        do {
          bVar1 = *pbVar10;
          bVar17 = bVar1 < *pbVar16;
          if (bVar1 != *pbVar16) {
LAB_110cff63:
            uVar11 = -(uint)bVar17 | 1;
            goto LAB_110cff68;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar17 = bVar1 < pbVar16[1];
          if (bVar1 != pbVar16[1]) goto LAB_110cff63;
          pbVar10 = pbVar10 + 2;
          pbVar16 = pbVar16 + 2;
        } while (bVar1 != 0);
        uVar11 = 0;
LAB_110cff68:
        if (uVar11 == 0) {
          uVar12 = FUN_110b8a80("event");
          CInfoRecord__GetModelString(uVar12);
          uVar12 = FUN_110b8a80("effect");
          CInfoRecord__GetModelString(uVar12);
          iVar6 = local_fc;
          pcVar9 = "EngineStarting";
          pbVar10 = local_6c;
          do {
            bVar1 = *pbVar10;
            bVar17 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_110cffd0:
              uVar11 = -(uint)bVar17 | 1;
              goto LAB_110cffd5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar17 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_110cffd0;
            pbVar10 = pbVar10 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          uVar11 = 0;
LAB_110cffd5:
          if (uVar11 == 0) {
            uVar4 = (**(code **)(*local_10 + 0xc))(local_fc);
            *(undefined2 *)(param_1 + 0xed) = uVar4;
          }
          else {
            pcVar9 = "EnginePowered";
            pbVar10 = local_6c;
            do {
              bVar1 = *pbVar10;
              bVar17 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_110d0020:
                uVar11 = -(uint)bVar17 | 1;
                goto LAB_110d0025;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar10[1];
              bVar17 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_110d0020;
              pbVar10 = pbVar10 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            uVar11 = 0;
LAB_110d0025:
            if (uVar11 == 0) {
              uVar4 = (**(code **)(*local_10 + 0xc))(local_fc);
              *(undefined2 *)((int)param_1 + 0x3b6) = uVar4;
            }
            else {
              pcVar9 = "Collision";
              pbVar10 = local_6c;
              do {
                bVar1 = *pbVar10;
                bVar17 = bVar1 < (byte)*pcVar9;
                if (bVar1 != *pcVar9) {
LAB_110d0062:
                  uVar11 = -(uint)bVar17 | 1;
                  goto LAB_110d0067;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar10[1];
                bVar17 = bVar1 < (byte)pcVar9[1];
                if (bVar1 != pcVar9[1]) goto LAB_110d0062;
                pbVar10 = pbVar10 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar1 != 0);
              uVar11 = 0;
LAB_110d0067:
              if (uVar11 == 0) {
                uVar4 = (**(code **)(*local_10 + 0xc))(local_fc);
                *(undefined2 *)(param_1 + 0xee) = uVar4;
              }
            }
          }
          piVar5 = (int *)(iVar6 + -0xc);
          if ((-1 < *piVar5) && (iVar13 = FUN_10c3dad0(piVar5), iVar13 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
            FUN_10c3d900(piVar5);
          }
          pbVar10 = local_6c;
          pbVar16 = local_6c + -0xc;
          if ((-1 < *(int *)pbVar16) && (iVar6 = FUN_10c3dad0(pbVar16), iVar6 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar10 + -4));
            FUN_10c3d900(pbVar16);
          }
        }
        local_f4 = &PTR_FUN_11d10dd4;
        (**(code **)(*local_f0 + 4))();
        param_3 = param_3 + 1;
        piVar5 = local_120;
      } while (param_3 < (int)local_8);
    }
    (**(code **)(*piVar5 + 4))();
  }
  (**(code **)(*param_1 + 0xec))();
  piVar5 = local_1c;
  piVar15 = local_1c + -3;
  if ((-1 < *piVar15) && (iVar6 = FUN_10c3dad0(piVar15), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar5[-1]);
    FUN_10c3d900(piVar15);
  }
  piVar5 = local_18;
  piVar15 = local_18 + -3;
  if ((-1 < *piVar15) && (iVar6 = FUN_10c3dad0(piVar15), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar5[-1]);
    FUN_10c3d900(piVar15);
  }
  pcVar9 = local_5c;
  piVar5 = (int *)(local_5c + -0xc);
  if ((-1 < *piVar5) && (iVar6 = FUN_10c3dad0(piVar5), iVar6 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar9 + -4));
    FUN_10c3d900(piVar5);
  }
  return 1;
}



/* ===== FUN_111e0d40 @ 111e0d40  size=284 ===== */
// calls: DecodeBuffIdList
// strings:
//   "CEquipInfo"
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipInfo""
     ""CBuffInfo"" */

void __thiscall FUN_111e0d40(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_31;
  undefined4 local_30 [10];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_1053a9e0(0,"CEquipInfo",0);
  iVar3 = FUN_116c5010(*(undefined1 *)(param_1 + 0x1b));
  iVar4 = FUN_10500130(0,"CBuffInfo",0);
  if ((iVar3 != -1) &&
     ((((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
      ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24)))))))
  {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar4 != 0) &&
       ((iVar3 = *(int *)(iVar4 + (iVar3 % iVar1) * 4), iVar3 != 0 &&
        (iVar3 = DecodeBuffIdList(*(undefined4 *)(iVar3 + 0x3c8),local_30,10), 0 < iVar3)))) {
      puVar5 = local_30;
      do {
        puVar2 = *(undefined4 **)(param_2 + 4);
        if (puVar2 == *(undefined4 **)(param_2 + 8)) {
          FUN_10463c40(puVar2,puVar5,&local_31,1,1);
        }
        else {
          *puVar2 = *puVar5;
          *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 4;
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== CManufactureSkillName::GetManagers @ 112076e0  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CManufactureSkillName::GetManagers"

/* [RE-AUTO c3]
   id: CManufactureSkillName::GetManagers
   strings:
     ""CManufactureSkillName::GetManagers"" */

undefined * CManufactureSkillName__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1882c;
  if (param_3 == 0) {
    if ((DAT_1203f74c & 1) == 0) {
      DAT_1203f74c = DAT_1203f74c | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CManufactureSkillName::GetManagers");
      FUN_11a8911f(&LAB_11c97e70);
    }
    if ((undefined *)*DAT_1203f730 != (undefined *)0x0) {
      return (undefined *)*DAT_1203f730;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203f85c & 1) == 0) {
      DAT_1203f85c = DAT_1203f85c | 1;
      FUN_11208260();
      FUN_11a8911f(&LAB_11c97d80);
    }
    puVar1 = &DAT_1203f824;
  }
  return puVar1;
}



/* ===== CManufactureSkillName::GetManagers_1120a050 @ 1120a050  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CManufactureSkillName::GetManagers"

/* [RE-AUTO c3]
   id: CManufactureSkillName::GetManagers
   strings:
     ""CManufactureSkillName::GetManagers"" */

undefined4 CManufactureSkillName__GetManagers_1120a050(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f74c & 1) == 0) {
      DAT_1203f74c = DAT_1203f74c | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CManufactureSkillName::GetManagers");
      FUN_11a8911f(&LAB_11c97e70);
    }
    return *DAT_1203f730;
  }
  return 0;
}



/* ===== FUN_1120a2a0 @ 1120a2a0  size=52 ===== */
// calls: CManufactureSkillLearnInfo::GetInfoManager
// strings:
//   "CManufactureSkillLearnInfo"

/* [RE-AUTO c0]
   calls: CManufactureSkillLearnInfo::GetManagers
   strings:
     ""CManufactureSkillLearnInfo"" */

undefined4 FUN_1120a2a0(int param_1)

{
  int iVar1;
  
  iVar1 = CManufactureSkillLearnInfo__GetInfoManager(0,"CManufactureSkillLearnInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1120a300 @ 1120a300  size=78 ===== */
// calls: CManufactureSkillName::GetManagers
// strings:
//   "CManufactureSkillName"

/* [RE-AUTO c0]
   calls: CManufactureSkillName::GetManagers
   strings:
     ""CManufactureSkillName"" */

undefined4 FUN_1120a300(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CManufactureSkillName__GetManagers(0,"CManufactureSkillName",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_1120b200 @ 1120b200  size=115 ===== */
// calls: CManufactureSkillName::GetManagers
// strings:
//   "CManufactureSkillName"

/* [RE-AUTO c0]
   calls: CManufactureSkillName::GetManagers
   strings:
     ""CManufactureSkillName"" */

void FUN_1120b200(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  iVar3 = CManufactureSkillName__GetManagers(0,"CManufactureSkillName",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (param_1 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar3 = *(int *)(iVar1 + (param_1 % *(int *)(iVar3 + 0x28)) * 4), iVar3 != 0)) {
      puVar2 = *(undefined1 **)(iVar3 + 0x14);
      puVar5 = &DAT_11d9d32b;
      if (puVar2 != (undefined1 *)0x0) {
        puVar5 = puVar2;
      }
      uVar4 = FUN_1024e9b0(puVar5,0x2a);
      FUN_1112f070(0x4b6,uVar4);
    }
  }
  return;
}



/* ===== FUN_1124a0c0 @ 1124a0c0  size=188 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void FUN_1124a0c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *param_1;
  piVar3 = (int *)FUN_111e09f0();
  if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x14))(uVar1), iVar4 != 0)) {
    iVar6 = param_1[1];
    iVar5 = FUN_10500130(0,"CBuffInfo",0);
    if ((iVar6 != -1) &&
       ((((iVar6 != 0 || (*(int *)(iVar5 + 0x30) == 0)) && (*(int *)(iVar5 + 0x28) != 0)) &&
        ((iVar6 = iVar6 - *(int *)(iVar5 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar5 + 0x24))))))
       ) {
      iVar2 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar6 / *(int *)(iVar5 + 0x28)) * 4);
      if ((iVar2 != 0) &&
         (iVar6 = *(int *)(iVar2 + (iVar6 % *(int *)(iVar5 + 0x28)) * 4), iVar6 != 0)) {
        iVar5 = (**(code **)(**(int **)(iVar4 + 0x10) + 100))();
        if ((iVar5 != 0) && (*(int *)(iVar6 + 0x420) != 0)) {
          (**(code **)(**(int **)(iVar4 + 0x10) + 100))();
          FUN_114249e0(param_1[1]);
        }
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x54))(param_1[2],*(char *)(param_1 + 3) != '\0');
      }
    }
  }
  return;
}



/* ===== FUN_11260460 @ 11260460  size=253 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void FUN_11260460(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined4 local_96;
  undefined4 local_92;
  undefined1 local_28;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      local_a0 = *(undefined4 *)(iVar2 + 0x10);
      local_a4 = DAT_11dfa3cc;
      DAT_11dfa3cc = DAT_11dfa3cc + 1;
      local_9c = 0;
      local_98 = 1;
      local_96 = *(undefined4 *)(iVar2 + 0x10c);
      local_92 = *(undefined4 *)(iVar2 + 0x80);
      local_28 = 1;
      (**(code **)(**(int **)(param_1 + 0x10) + 0x40))(&local_a4);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== CCliLogicBuffArea::OnLogicEntityEnter @ 11288e90  size=199 ===== */
// strings:
//   "CCliLogicBuffArea::OnLogicEntityEnter"

/* [RE-AUTO c3]
   id: CCliLogicBuffArea::OnLogicEntityEnter
   strings:
     ""CCliLogicBuffArea::OnLogicEntityEnter"" */

void __thiscall CCliLogicBuffArea__OnLogicEntityEnter(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uStack_8;
  
  uVar2 = param_2;
  puVar1 = *(undefined4 **)(param_1 + 0x1b4);
  uStack_8 = param_1;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1b8)) {
    FUN_10109320(puVar1,&param_2,(int)&uStack_8 + 3,1,1);
  }
  else {
    *puVar1 = param_2;
    *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 4;
  }
  if (((*(char *)(param_1 + 0x168) != '\0') &&
      ((*(int *)(param_1 + 0x1b4) - *(int *)(param_1 + 0x1b0) & 0xfffffffcU) == 4)) &&
     (*(int *)(param_1 + 0x180) == -1)) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x118))
              ("CCliLogicBuffArea::OnLogicEntityEnter",
               (int)(*(float *)(param_1 + 0x16c) * DAT_11de9a44),0,param_1,FUN_11288d90,0);
    uVar4 = FUN_10a12780();
    *(undefined4 *)(param_1 + 0x180) = uVar4;
  }
  cVar3 = FUN_111e0ab0();
  if (cVar3 != '\0') {
    FUN_11415280(uVar2);
  }
  FUN_11415380(uVar2);
  return;
}



/* ===== FUN_112b3650 @ 112b3650  size=78 ===== */
// calls: CTalentActiveInfo::GetManager
// strings:
//   "CTalentActiveInfo"

/* [RE-AUTO c0]
   calls: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo"" */

undefined4 FUN_112b3650(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CTalentActiveInfo__GetManager(0,"CTalentActiveInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_112b36a0 @ 112b36a0  size=52 ===== */
// calls: CTalentActiveInfo::GetManager
// strings:
//   "CTalentActiveInfo"

/* [RE-AUTO c0]
   calls: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo"" */

undefined4 FUN_112b36a0(int param_1)

{
  int iVar1;
  
  iVar1 = CTalentActiveInfo__GetManager(0,"CTalentActiveInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_112b3a20 @ 112b3a20  size=149 ===== */
// calls: CPet::SetName
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CNewSkillInfo"" */

undefined4 FUN_112b3a20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = FUN_107d4610(0,"CNewSkillInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / iVar1) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (param_1 % iVar1) * 4), iVar2 != 0)) {
      puVar3 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar2 + 0x88) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(iVar2 + 0x88);
      }
      CPet__SetName(puVar3);
      FUN_100e5e40(iVar2 + 0x18);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar2 + 0x48);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(iVar2 + 0x54);
      return 0;
    }
  }
  return 0xd5;
}



/* ===== FUN_112b3ca0 @ 112b3ca0  size=96 ===== */
// calls: CTalentActiveInfo::GetManager
// strings:
//   "CTalentActiveInfo"

/* [RE-AUTO c0]
   calls: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo"" */

undefined4 FUN_112b3ca0(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + 1;
  iVar2 = CTalentActiveInfo__GetManager(0,"CTalentActiveInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      return *(undefined4 *)(iVar2 + 0x14);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_112b59d0 @ 112b59d0  size=180 ===== */
// calls: CPet::SetName
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

void __thiscall FUN_112b59d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar1 = FUN_1087e7d0(0,"CTalentInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar4 = *(int *)(iVar1 + 0x28), iVar4 != 0)))) &&
     ((iVar2 = param_2 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar4) * 4);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + (iVar2 % iVar4) * 4), iVar1 != 0)) {
      uVar3 = FUN_11742830();
      *(undefined4 *)(param_3 + 0xc) = uVar3;
      *(int *)(param_3 + 0x10) = param_2;
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x14) + 8))();
      iVar4 = FUN_1141d820(param_2);
      *(bool *)(param_3 + 0x18) = iVar4 == 0;
      CPet__SetName(*(undefined4 *)(iVar1 + 0x90));
      puVar5 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar1 + 0x78) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(iVar1 + 0x78);
      }
      CPet__SetName(puVar5);
    }
  }
  return;
}



/* ===== CPetSupportBuff::GetManagers @ 112f0c40  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CPetSupportBuff::GetManagers"

/* [RE-AUTO c3]
   id: CPetSupportBuff::GetManagers
   strings:
     ""CPetSupportBuff::GetManagers"" */

undefined * CPetSupportBuff__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d21878;
  if (param_3 == 0) {
    if ((DAT_12040ba8 & 1) == 0) {
      DAT_12040ba8 = DAT_12040ba8 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CPetSupportBuff::GetManagers");
      FUN_11a8911f(&LAB_11c9a860);
    }
    if ((undefined *)*DAT_12040b8c != (undefined *)0x0) {
      return (undefined *)*DAT_12040b8c;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040cbc & 1) == 0) {
      DAT_12040cbc = DAT_12040cbc | 1;
      FUN_112f3d40();
      FUN_11a8911f(&LAB_11c9a770);
    }
    puVar1 = &DAT_12040c84;
  }
  return puVar1;
}



/* ===== FUN_112f5190 @ 112f5190  size=133 ===== */
// calls: CInfoManager::GetByName, CPetSkillInfo::HasNextLevelInList
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

uint FUN_112f5190(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_112fb460(param_1,param_2);
  iVar1 = FUN_1158d040();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  uVar3 = uVar2;
  if (((param_3 != -1) &&
      (((param_3 != 0 || (*(int *)(uVar2 + 0x30) == 0)) && (*(int *)(uVar2 + 0x28) != 0)))) &&
     ((uVar3 = param_3 - *(int *)(uVar2 + 0x30), -1 < (int)uVar3 &&
      ((int)uVar3 < *(int *)(uVar2 + 0x24))))) {
    iVar1 = (int)uVar3 % *(int *)(uVar2 + 0x28);
    uVar3 = *(uint *)(*(int *)(uVar2 + 0x20) + ((int)uVar3 / *(int *)(uVar2 + 0x28)) * 4);
    if ((uVar3 != 0) && (*(int *)(uVar3 + iVar1 * 4) != 0)) {
      uVar3 = CPetSkillInfo__HasNextLevelInList(param_3);
      return uVar3;
    }
  }
  return uVar3 & 0xffffff00;
}



/* ===== CPetSupportBuff::GetManagers_112f6120 @ 112f6120  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CPetSupportBuff::GetManagers"

/* [RE-AUTO c3]
   id: CPetSupportBuff::GetManagers
   strings:
     ""CPetSupportBuff::GetManagers"" */

undefined4 CPetSupportBuff__GetManagers_112f6120(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040ba8 & 1) == 0) {
      DAT_12040ba8 = DAT_12040ba8 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CPetSupportBuff::GetManagers");
      FUN_11a8911f(&LAB_11c9a860);
    }
    return *DAT_12040b8c;
  }
  return 0;
}



/* ===== FUN_112f6f90 @ 112f6f90  size=78 ===== */
// calls: CPetGiftSkillInfo::FindInfoByKey
// strings:
//   "CPetGiftSkillInfo"

/* [RE-AUTO c0]
   calls: CPetGiftSkillInfo::GetManagers
   strings:
     ""CPetGiftSkillInfo"" */

undefined4 FUN_112f6f90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPetGiftSkillInfo__FindInfoByKey(0,"CPetGiftSkillInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_112f7940 @ 112f7940  size=78 ===== */
// calls: CPetSupportBuff::GetManagers
// strings:
//   "CPetSupportBuff"

/* [RE-AUTO c0]
   calls: CPetSupportBuff::GetManagers
   strings:
     ""CPetSupportBuff"" */

undefined4 FUN_112f7940(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPetSupportBuff__GetManagers(0,"CPetSupportBuff",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== CLogicPlayer::IsRagePowerEnough @ 1139a9f0  size=131 ===== */
// strings:
//   "CLogicPlayer::IsRagePowerEnough skill[%d] rage not equip or rageinfo not exist"

/* [RE-AUTO c3]
   id: CLogicPlayer::IsRagePowerEnough
   strings:
     ""CLogicPlayer::IsRagePowerEnough skill[%d] rage not equip or rageinfo not exist"" */

void CLogicPlayer__IsRagePowerEnough(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_1139f0f0(param_1);
  if (iVar1 != 0) {
    FUN_115bcbf0(param_2);
    FUN_11a89daa();
    return;
  }
  local_88[0] = 0;
  FUN_100ea370(local_88,
               "CLogicPlayer::IsRagePowerEnough skill[%d] rage not equip or rageinfo not exist",
               param_1);
  FUN_1139c980(local_88);
  FUN_11a89daa();
  return;
}



/* ===== FUN_113f9970 @ 113f9970  size=78 ===== */
// calls: CEquipSkillInfo::FindInfoByKey
// strings:
//   "CEquipSkillInfo"

/* [RE-AUTO c0]
   calls: CEquipSkillInfo::GetManagers
   strings:
     ""CEquipSkillInfo"" */

undefined4 FUN_113f9970(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipSkillInfo__FindInfoByKey(0,"CEquipSkillInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== CLogicBuffArea::SetEnable @ 11415450  size=279 ===== */
// strings:
//   "CLogicBuffArea::SetEnable"

/* [RE-AUTO c3]
   id: CLogicBuffArea::SetEnable
   strings:
     ""CLogicBuffArea::SetEnable"" */

void __thiscall CLogicBuffArea__SetEnable(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  float fVar4;
  
  cVar3 = (char)param_2;
  if (cVar3 != '\0') {
    *(char *)(param_1 + 0x58) = cVar3;
  }
  (**(code **)(*param_1 + 0x1c8))(param_2);
  *(char *)(param_1 + 0x58) = cVar3;
  piVar1 = (int *)(**(code **)(*param_1 + 0xd8))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xa4))((char)param_1[0x58]);
  }
  if ((char)param_1[0x58] == '\0') {
    if (param_1[0x5f] != -1) {
      (**(code **)(*param_1 + 0x17c))(param_1[0x5f]);
      FUN_100ea6a0();
      param_1[0x5f] = -1;
    }
    if ((char)param_1[0x6b] != '\0') {
      (**(code **)(*(int *)param_1[3] + 0x1c))(param_1);
    }
  }
  else if (DAT_11de9890 < (float)param_1[0x5e]) {
    if (param_1[0x5f] != -1) {
      (**(code **)(*param_1 + 0x17c))(param_1[0x5f]);
      FUN_100ea6a0();
      param_1[0x5f] = -1;
    }
    fVar4 = (float)param_1[0x5e] * DAT_11de9a44;
    (**(code **)(*param_1 + 0x17c))();
    iVar2 = FUN_100ea610("CLogicBuffArea::SetEnable",(int)fVar4,1,param_1,FUN_11415260,0);
    param_1[0x5f] = iVar2;
    return;
  }
  return;
}



/* ===== FUN_1141bef0 @ 1141bef0  size=146 ===== */
// strings:
//   "CBuffBase_OnConditionChange"

/* [RE-AUTO c0]
   strings:
     ""CBuffBase_OnConditionChange"" */

void __thiscall FUN_1141bef0(int param_1,char param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x3d) != '\0') {
    if (DAT_11dfa438 == -1) {
      DAT_11dfa438 = 10;
    }
    else if (DAT_11dfa438 < 1) {
      return;
    }
    DAT_11dfa438 = DAT_11dfa438 + -1;
    FUN_100b3cd0("CBuffBase_OnConditionChange");
    return;
  }
  cVar1 = FUN_115d3de0();
  if (cVar1 == '\0') {
    if ((*(char *)(*(int *)(param_1 + 0x48) + 4) != '\0') && (FUN_115d2990(1), param_2 != '\0')) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 0x10) + 0x10))(param_1,0);
    }
  }
  else if ((*(char *)(*(int *)(param_1 + 0x48) + 4) == '\0') && (FUN_115d2a50(), param_2 != '\0')) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 0x10) + 0x10))(param_1,1);
    return;
  }
  return;
}



/* ===== CBuffBase::_AddTimer @ 1141c350  size=248 ===== */
// calls: GetTickCount
// strings:
//   "CBuffBase::_AddTimer"

/* [RE-AUTO c3]
   id: CBuffBase::_AddTimer
   calls: GetTickCount
   strings:
     ""CBuffBase::_AddTimer"" */

void __thiscall CBuffBase___AddTimer(int param_1,int param_2)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((*(char *)(param_1 + 0x34) == '\0') && (param_2 != 0)) {
    DVar1 = GetTickCount();
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 0xc) + 0x184))();
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x420) != 0) {
      *(DWORD *)(param_1 + 0x1c) = DVar1 + param_2;
      *(int *)(param_1 + 0x20) = param_2 / 1000 + iVar2;
      return;
    }
    if (*(int *)(param_1 + 0x24) == -1) {
      uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + 0x14) + 8))();
      iVar4 = (int)(1000 / (ulonglong)uVar3);
      if (uVar3 != 0) {
        uVar3 = iVar4 + param_2;
        iVar5 = FUN_10a127d0("CBuffBase::_AddTimer",uVar3,1,param_1,FUN_1141c470);
        *(int *)(param_1 + 0x24) = iVar5;
        if (iVar5 != -1) {
          FUN_1154c9d0(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc));
          FUN_1154cbe0();
          *(DWORD *)(param_1 + 0x1c) = iVar4 + DVar1 + param_2;
          *(uint *)(param_1 + 0x20) = uVar3 / 1000 + iVar2;
        }
      }
    }
  }
  return;
}



/* ===== FUN_1141c960 @ 1141c960  size=126 ===== */
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CNewSkillInfo"" */

undefined4 FUN_1141c960(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_107d4610(0,"CNewSkillInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)
       ) {
      if (param_1 != *(int *)(iVar2 + 0x40)) {
        return 0xe3;
      }
      uVar4 = FUN_1141dac0(param_2);
      return uVar4;
    }
  }
  return 0xd5;
}



/* ===== FUN_1141cf80 @ 1141cf80  size=52 ===== */
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

undefined4 FUN_1141cf80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1087e7d0(0,"CTalentInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1141d020 @ 1141d020  size=170 ===== */
// calls: CTalentActiveInfo::GetManager
// strings:
//   "CTalentActiveInfo"

/* [RE-AUTO c0]
   calls: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo"" */

undefined4 __thiscall FUN_1141d020(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  param_2 = param_2 + 1;
  iVar1 = CTalentActiveInfo__GetManager(0,"CTalentActiveInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar1 + 0x28), iVar2 != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar1 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (param_2 / iVar2) * 4);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + (param_2 % iVar2) * 4), iVar1 != 0)) {
      piVar3 = *(int **)(*param_1 + 4);
      iVar2 = (**(code **)(*piVar3 + 0xa8))();
      if (iVar2 == 0) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x46c))();
        if (piVar3 != (int *)0x0) {
          iVar2 = (**(code **)(*piVar3 + 0x18))();
          uVar4 = 0;
          if (iVar2 < *(int *)(iVar1 + 0x14)) {
            uVar4 = 0xe6;
          }
          return uVar4;
        }
      }
      return 0xca;
    }
  }
  return 0xd6;
}



/* ===== FUN_1141d4a0 @ 1141d4a0  size=312 ===== */
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

undefined4 __thiscall FUN_1141d4a0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0xa8))();
  if (iVar1 != 0) {
    return 0xcc;
  }
  iVar1 = FUN_1087e7d0(0,"CTalentInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar3 = *(int *)(iVar1 + 0x28), iVar3 != 0)))) &&
     ((iVar2 = param_2 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar3) * 4);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + (iVar2 % iVar3) * 4), iVar1 != 0)) {
      piVar4 = *(int **)(*param_1 + 4);
      iVar3 = (**(code **)(*piVar4 + 0xa8))();
      piVar6 = (int *)0x0;
      if (iVar3 == 0) {
        piVar6 = piVar4;
      }
      iVar3 = (**(code **)(*piVar6 + 0x294))();
      if (iVar3 == *(int *)(iVar1 + 0x44)) {
        iVar1 = FUN_1141df30(param_2);
        if (iVar1 != 0) {
          piVar4 = *(int **)(*param_1 + 4);
          iVar3 = (**(code **)(*piVar4 + 0xa8))();
          piVar6 = (int *)0x0;
          if (iVar3 == 0) {
            piVar6 = piVar4;
          }
          (**(code **)(*(int *)piVar6[4] + 0x44))(0,iVar1,0,1,0x10);
        }
      }
      FUN_1157a340(param_2,param_3);
      piVar4 = (int *)(**(code **)(*(int *)*param_1 + 4))();
      iVar1 = *piVar4;
      uVar5 = FUN_1157a720(param_2);
      (**(code **)(iVar1 + 0x30))(param_2,uVar5);
      return 0;
    }
  }
  return 0xd2;
}



/* ===== FUN_1141d640 @ 1141d640  size=468 ===== */
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

undefined4 __thiscall FUN_1141d640(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0xa8))();
  if (iVar2 != 0) {
    return 0xcc;
  }
  iVar2 = FUN_1087e7d0(0,"CTalentInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar4 = *(int *)(iVar2 + 0x28), iVar4 != 0)))) &&
     ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4), iVar2 != 0)) {
      iVar4 = FUN_1157a720(param_2);
      if (0 < iVar4) {
        return 0xdc;
      }
      local_8 = FUN_1141df30(param_2);
      iVar4 = iVar4 + 1;
      FUN_1157a380(param_2,iVar4);
      piVar5 = (int *)(**(code **)(*(int *)*param_1 + 4))();
      (**(code **)(*piVar5 + 0x2c))(iVar2,iVar4);
      local_c = *(undefined4 *)(iVar2 + 0x44);
      local_18 = *(undefined4 *)(*param_1 + 4);
      local_24 = 0x6ac;
      local_20 = 0xffffffff;
      local_1c = 0xffffffff;
      local_14 = param_2;
      local_10 = iVar4;
      FUN_1157c850(&local_24);
      FUN_1157df40(&local_24);
      iVar4 = FUN_117427f0(iVar4);
      if (iVar4 == 0) {
        return 0xd3;
      }
      cVar1 = FUN_1157a850(param_2);
      if (cVar1 != '\0') {
        piVar5 = (int *)FUN_1141de90();
        iVar3 = (**(code **)(*piVar5 + 0x294))();
        if (*(int *)(iVar4 + 0x44) == iVar3) {
          if (local_8 != 0) {
            iVar4 = FUN_1141de90();
            (**(code **)(**(int **)(iVar4 + 0x10) + 0x4c))(local_8,1);
          }
          iVar4 = FUN_1141df30(param_2);
          if (iVar4 != 0) {
            iVar3 = FUN_1141de90();
            (**(code **)(**(int **)(iVar3 + 0x10) + 0x44))(0,iVar4,0,1,0x10);
          }
        }
      }
      piVar5 = (int *)(**(code **)(*(int *)*param_1 + 4))();
      (**(code **)(*piVar5 + 0x20))
                (*(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar2 + 0x10),
                 *(undefined4 *)(iVar2 + 0x14));
      return 0;
    }
  }
  return 0xd2;
}



/* ===== FUN_1141dac0 @ 1141dac0  size=230 ===== */
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CNewSkillInfo"" */

undefined4 __thiscall FUN_1141dac0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = FUN_107d4610(0,"CNewSkillInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar3 = *(int *)(iVar2 + 0x28), iVar3 != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar2 + 0x24))))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / iVar3) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (param_2 % iVar3) * 4), iVar2 != 0)) {
      piVar4 = *(int **)(*param_1 + 4);
      iVar3 = (**(code **)(*piVar4 + 0xa8))();
      if (iVar3 == 0) {
        piVar4 = (int *)(**(code **)(*piVar4 + 0x46c))();
        if (piVar4 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar4 + 0x18))();
          if ((*(int *)(iVar2 + 0x48) != 0) && (iVar3 < *(int *)(iVar2 + 0x48))) {
            return 0xe1;
          }
          if (*(int *)(iVar2 + 0x4c) != 0) {
            cVar1 = FUN_114e0340(*(int *)(iVar2 + 0x4c));
            if (cVar1 == '\0') {
              return 0xe2;
            }
          }
          return 0;
        }
      }
      return 0xca;
    }
  }
  return 0xd5;
}



/* ===== FUN_1141dcb0 @ 1141dcb0  size=311 ===== */
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

void __fastcall FUN_1141dcb0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0xa8))();
  if (iVar2 == 0) {
    piVar4 = *(int **)(*param_1 + 4);
    iVar2 = (**(code **)(*piVar4 + 0xa8))();
    piVar6 = (int *)0x0;
    if (iVar2 == 0) {
      piVar6 = piVar4;
    }
    if (piVar6[3] != 0) {
      piVar4 = *(int **)(*param_1 + 4);
      iVar2 = (**(code **)(*piVar4 + 0xa8))();
      piVar6 = (int *)0x0;
      if (iVar2 == 0) {
        piVar6 = piVar4;
      }
      cVar1 = (**(code **)(*(int *)piVar6[3] + 0x168))();
      if (cVar1 != '\0') {
        piVar4 = *(int **)(*param_1 + 4);
        iVar2 = (**(code **)(*piVar4 + 0xa8))();
        piVar6 = (int *)0x0;
        if (iVar2 == 0) {
          piVar6 = piVar4;
        }
        iVar2 = (**(code **)(*piVar6 + 0x294))();
        if (iVar2 < 0xd) {
          piVar4 = *(int **)(*param_1 + 4);
          iVar3 = (**(code **)(*piVar4 + 0xa8))();
          piVar6 = (int *)0x0;
          if (iVar3 == 0) {
            piVar6 = piVar4;
          }
          if (piVar6[0xabd] != 0) {
            iVar3 = FUN_1141de90();
            iVar2 = (**(code **)(**(int **)(iVar3 + 0x2af4) + 0x10))(iVar2);
            if (iVar2 != 1) {
              iVar3 = 0;
              piVar4 = (int *)FUN_1087e7d0(0,"CTalentInfo",0);
              iVar2 = (**(code **)(*piVar4 + 0x28))();
              if (0 < iVar2) {
                do {
                  iVar2 = FUN_1141cf80(iVar3);
                  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x44) == param_1[6])) {
                    iVar5 = FUN_1141de90();
                    (**(code **)(**(int **)(iVar5 + 0x10) + 0x44))
                              (0,*(undefined4 *)(iVar2 + 0x54),0,1,0x10);
                  }
                  iVar3 = iVar3 + 1;
                  piVar4 = (int *)FUN_1087e7d0(0,"CTalentInfo",0);
                  iVar2 = (**(code **)(*piVar4 + 0x28))();
                } while (iVar3 < iVar2);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_1141df30 @ 1141df30  size=132 ===== */
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

undefined4 FUN_1141df30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = FUN_1087e7d0(0,"CTalentInfo",0);
  if ((((param_1 != -1) && (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)) &&
      (iVar3 = param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3)) && (iVar3 < *(int *)(iVar2 + 0x24))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar3 % iVar1) * 4) != 0)) {
      iVar2 = FUN_1157a720(param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_117427f0(iVar2);
        if (iVar2 != 0) {
          return *(undefined4 *)(iVar2 + 0x54);
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_1141e3c0 @ 1141e3c0  size=269 ===== */
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CNewSkillInfo"" */

void __thiscall FUN_1141e3c0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_3 < 0xd) {
    piVar5 = *(int **)(*param_1 + 4);
    iVar3 = (**(code **)(*piVar5 + 0xa8))();
    if (iVar3 == 0) {
      piVar5 = (int *)piVar5[0xabd];
      if (piVar5 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*piVar5 + 0x10))(param_3);
      }
    }
    else {
      iVar3 = 0;
    }
    if ((iVar3 == 0) || (iVar3 == 1)) {
      if (param_2 == 0) {
        iVar3 = 3;
      }
      else if (param_2 == 1) {
        iVar3 = 2;
      }
      else {
        iVar3 = 0;
      }
      if (param_2 == 0) {
        param_1 = param_1 + 0x14;
      }
      else if (param_2 == 1) {
        param_1 = param_1 + 0x3b;
      }
      else {
        param_1 = (int *)0x0;
      }
      bVar2 = false;
      if (iVar3 != 0) {
        piVar5 = param_1 + param_3;
        do {
          iVar4 = *piVar5;
          piVar5 = piVar5 + 0xd;
          if (iVar4 != 0) {
            bVar2 = true;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (bVar2) {
          return;
        }
      }
      iVar3 = FUN_11679c30();
      if (iVar3 != 0) {
        iVar3 = FUN_1169ebe0(param_3,0);
        iVar4 = FUN_107d4610(0,"CNewSkillInfo",0);
        if (((iVar3 != -1) &&
            (((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) && (*(int *)(iVar4 + 0x28) != 0)))) &&
           ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24)))
           )) {
          iVar1 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / *(int *)(iVar4 + 0x28)) * 4);
          if ((iVar1 != 0) &&
             (iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar4 + 0x28)) * 4), iVar3 != 0)) {
            param_1[param_3] = *(int *)(iVar3 + 0x14);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_114249e0 @ 114249e0  size=111 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_114249e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
     ) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       ((*(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4) != 0 &&
        (*(int *)(param_1 + 0x3c) != 0)))) {
      iVar2 = FUN_1141bd30();
      if (iVar2 == param_2) {
        FUN_1139d4a0();
      }
    }
  }
  return;
}



/* ===== FUN_11424f30 @ 11424f30  size=290 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_11424f30(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  (**(code **)(*param_1 + 0xc))(0);
  param_1[0xf] = 0;
  if (0 < param_2) {
    iVar2 = FUN_10500130(0,"CBuffInfo",0);
    if ((((param_2 == -1) || (iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0)) ||
        (param_2 = param_2 - *(int *)(iVar2 + 0x30), param_2 < 0)) ||
       (*(int *)(iVar2 + 0x24) <= param_2)) {
LAB_11424fa6:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / iVar1) * 4);
      if (iVar2 == 0) goto LAB_11424fa6;
      iVar2 = *(int *)(iVar2 + (param_2 % iVar1) * 4);
    }
    param_1[9] = iVar2;
    if (iVar2 != 0) {
      param_1[7] = *(int *)(iVar2 + 0x420);
      param_1[8] = param_3;
    }
  }
  if (param_4 < 1) goto LAB_1142501a;
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if (((param_4 == -1) || (iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0)) ||
     ((param_4 = param_4 - *(int *)(iVar2 + 0x30), param_4 < 0 ||
      (*(int *)(iVar2 + 0x24) <= param_4)))) {
LAB_11425002:
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (param_4 / iVar1) * 4);
    if (iVar2 == 0) goto LAB_11425002;
    iVar2 = *(int *)(iVar2 + (param_4 % iVar1) * 4);
  }
  param_1[0xc] = iVar2;
  if (iVar2 != 0) {
    param_1[10] = *(int *)(iVar2 + 0x420);
    param_1[0xb] = param_5;
  }
LAB_1142501a:
  if (param_1[9] != 0) {
    iVar2 = (**(code **)(*(int *)param_1[1] + 0xa8))();
    if (iVar2 == 0xb) {
      uVar3 = 6;
    }
    else {
      uVar3 = 5;
    }
    FUN_11473320(param_1[8],param_1[9],0,0,uVar3);
  }
  return;
}



/* ===== FUN_1143dab0 @ 1143dab0  size=296 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

undefined4 __thiscall FUN_1143dab0(int *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  int local_8;
  
  if (DAT_11de9890 < *param_2) {
    iVar3 = (**(code **)(*param_1 + 0xd8))();
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*param_1 + 0xd8))();
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*param_1 + 0xd8))();
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(**(code **)(*param_1 + 0xd8))();
        }
        (**(code **)(*piVar4 + 0xb8))();
      }
    }
  }
  if (param_1[3] != 0) {
    piVar4 = *(int **)(param_1[3] + 0x90);
    uVar5 = (**(code **)(*param_1 + 0x1d4))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(uVar5);
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 0xa8))();
      if (iVar3 == 0) {
        piVar4 = (int *)piVar4[4];
        pfVar7 = param_2 + 0x25;
        local_8 = 10;
        do {
          fVar1 = *pfVar7;
          if (fVar1 != 0.0) {
            iVar3 = FUN_10500130(0,"CBuffInfo",0);
            if ((((fVar1 != -NAN) && (iVar2 = *(int *)(iVar3 + 0x28), iVar2 != 0)) &&
                (iVar6 = (int)fVar1 - *(int *)(iVar3 + 0x30), -1 < iVar6)) &&
               (iVar6 < *(int *)(iVar3 + 0x24))) {
              iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar6 / iVar2) * 4);
              if ((iVar3 != 0) && (*(int *)(iVar3 + (iVar6 % iVar2) * 4) != 0)) {
                (**(code **)(*piVar4 + 0x44))
                          (param_2[0x16],fVar1,0,*(char *)(param_2 + 0x24) == '\0',0xb);
              }
            }
          }
          pfVar7 = pfVar7 + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
    }
  }
  return 0;
}



/* ===== FUN_1143f020 @ 1143f020  size=188 ===== */
// calls: CBuffFilterInfo::FindInfoByKey
// strings:
//   "CBuffFilterInfo"

/* [RE-AUTO c0]
   calls: CBuffFilterInfo::GetManagers
   strings:
     ""CBuffFilterInfo"" */

void FUN_1143f020(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 != (int *)0x0) && (param_3 != 0)) {
    iVar2 = CBuffFilterInfo__FindInfoByKey(0,"CBuffFilterInfo",0);
    iVar1 = *(int *)(iVar2 + 0x28);
    if ((iVar1 != 0) &&
       ((iVar3 = param_3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24)))))
    {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
      if (((iVar2 != 0) &&
          ((iVar1 = *(int *)(iVar2 + (iVar3 % iVar1) * 4), iVar1 != 0 &&
           ((iVar2 = (**(code **)(*param_1 + 0xa8))(), iVar2 != 1 ||
            (param_3 = *(int *)(iVar1 + 0x14), param_3 == 0)))))) &&
         ((iVar2 = (**(code **)(*param_1 + 0xa8))(), iVar2 != 0 ||
          (param_3 = *(int *)(iVar1 + 0x18), param_3 == 0)))) {
        iVar2 = (**(code **)(*param_1 + 0xa8))();
        if (iVar2 != 8) {
          return;
        }
        param_3 = *(int *)(iVar1 + 0x1c);
        if (param_3 == 0) {
          return;
        }
      }
    }
    uVar4 = (**(code **)(*(int *)param_1[4] + 0x44))(param_2,param_3,0,1,0x2d);
    *param_4 = uVar4;
  }
  return;
}



/* ===== FUN_1143f250 @ 1143f250  size=257 ===== */
// calls: CBuffFilterInfo::FindInfoByKey
// strings:
//   "CBuffFilterInfo"

/* [RE-AUTO c0]
   calls: CBuffFilterInfo::GetManagers
   strings:
     ""CBuffFilterInfo"" */

undefined4 FUN_1143f250(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c [2];
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar1 = CBuffFilterInfo__FindInfoByKey(0,"CBuffFilterInfo",0);
    iVar3 = *(int *)(iVar1 + 0x28);
    if ((iVar3 != 0) &&
       ((iVar2 = param_2 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24)))))
    {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar3) * 4);
      if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + (iVar2 % iVar3) * 4), iVar3 != 0)) {
        iVar1 = (**(code **)(*param_1 + 0xa8))();
        if (((iVar1 != 1) || (iVar1 = *(int *)(iVar3 + 0x14), iVar1 == 0)) &&
           ((iVar1 = (**(code **)(*param_1 + 0xa8))(), iVar1 != 0 ||
            (iVar1 = *(int *)(iVar3 + 0x18), iVar1 == 0)))) {
          iVar1 = (**(code **)(*param_1 + 0xa8))();
          if (iVar1 != 8) {
            return 0;
          }
          iVar1 = *(int *)(iVar3 + 0x1c);
          if (iVar1 == 0) {
            return 0;
          }
        }
        (**(code **)(*(int *)param_1[4] + 0x4c))(iVar1,1);
        return 1;
      }
    }
    if (param_3 == '\0') {
      (**(code **)(*(int *)param_1[4] + 0x4c))(param_2,1);
      return 0;
    }
    iVar3 = FUN_104fd710(param_2);
    if (iVar3 != 0) {
      FUN_116a7450(local_c,2);
      iVar3 = 0;
      do {
        (**(code **)(*(int *)param_1[4] + 0x58))(local_c[iVar3],1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
  }
  return 0;
}



/* ===== FUN_1143f360 @ 1143f360  size=64 ===== */
// calls: CBuffFilterInfo::FindInfoByKey
// strings:
//   "CBuffFilterInfo"

/* [RE-AUTO c0]
   calls: CBuffFilterInfo::GetManagers
   strings:
     ""CBuffFilterInfo"" */

undefined4 FUN_1143f360(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CBuffFilterInfo__FindInfoByKey(0,"CBuffFilterInfo",0);
  if (((*(int *)(iVar2 + 0x28) != 0) && (param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1))
     && (param_1 < *(int *)(iVar2 + 0x24))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11441be0 @ 11441be0  size=103 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_11441be0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar2 + 0x24))))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       ((iVar2 = *(int *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0 &&
        (iVar2 = *(int *)(iVar2 + 0x424), iVar2 != -1)))) {
      *(undefined4 *)(param_1 + 0x14 + iVar2 * 4) = 0;
    }
  }
  return;
}



/* ===== FUN_1145f260 @ 1145f260  size=87 ===== */
// strings:
//   "CGuildSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CGuildSkillInfo"" */

undefined4 FUN_1145f260(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_1 * 100 + param_2;
  iVar2 = FUN_1091e560(0,"CGuildSkillInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_1145f2c0 @ 1145f2c0  size=78 ===== */
// strings:
//   "CGuildSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CGuildSkillInfo"" */

undefined4 FUN_1145f2c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_1091e560(0,"CGuildSkillInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11465310 @ 11465310  size=197 ===== */
// strings:
//   "CEquipRandPassiveSkillActivateSetInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipRandPassiveSkillActivateSetInfo"" */

undefined4 __thiscall FUN_11465310(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if (*param_3 == 1) {
    return 0;
  }
  iVar7 = param_3[5];
  iVar4 = FUN_10870cd0(0,"CEquipRandPassiveSkillActivateSetInfo",0);
  if ((iVar7 != -1) &&
     ((((iVar7 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
      ((iVar7 = iVar7 - *(int *)(iVar4 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(iVar4 + 0x24)))))))
  {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar7 / iVar1) * 4);
    if ((iVar4 != 0) &&
       ((iVar7 = *(int *)(iVar4 + (iVar7 % iVar1) * 4), iVar7 != 0 &&
        (iVar7 = *(int *)(iVar7 + 0x2c), iVar7 != 0)))) {
      puVar8 = *(undefined4 **)(iVar7 + 0x10);
      if (puVar8 != *(undefined4 **)(iVar7 + 0x14)) {
        do {
          piVar2 = (int *)*puVar8;
          uVar5 = (**(code **)(*piVar2 + 0x10))();
          piVar6 = (int *)FUN_11562d00(uVar5);
          cVar3 = (**(code **)(*piVar6 + 0xc))
                            (param_2,piVar2,param_3,*(undefined4 *)(param_1 + 0xc));
          if (cVar3 == '\0') {
            return 0;
          }
          puVar8 = puVar8 + 1;
        } while (puVar8 != *(undefined4 **)(iVar7 + 0x14));
      }
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_114733f0 @ 114733f0  size=675 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_114733f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined1 local_d8 [16];
  int local_c8;
  int *local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  uint local_a8;
  undefined1 local_a1;
  undefined **local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined1 *local_4c;
  char local_48 [64];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  param_1[0x116] = 0;
  FUN_1154c9d0(param_1[3]);
  FUN_1154cbe0();
  if (param_1[1] == 0) {
    FUN_11a89daa();
    return;
  }
  iVar6 = param_2[1];
  iVar3 = FUN_10500130(0,"CBuffInfo",0);
  if ((iVar6 != -1) &&
     ((((iVar6 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)) &&
      ((iVar6 = iVar6 - *(int *)(iVar3 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar3 + 0x24)))))))
  {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar6 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar6 = *(int *)(iVar1 + (iVar6 % *(int *)(iVar3 + 0x28)) * 4), iVar6 != 0)
       ) {
      iVar3 = (**(code **)(*param_1 + 100))();
      if ((iVar3 != 0) && (*(int *)(iVar6 + 0x420) != 0)) {
        FUN_1083ded0(local_48,&DAT_11d9e0b4,param_2[1]);
        local_50 = local_60;
        pcVar2 = local_48;
        do {
          pcVar4 = pcVar2;
          pcVar2 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
        local_4c = local_50;
        FUN_100b62c0(local_48,pcVar4);
        (**(code **)(*param_1 + 100))(local_60,param_2[2]);
        FUN_11424c80();
        if ((local_4c != local_60) && (local_4c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_4c);
        }
        FUN_11a89daa();
        return;
      }
      local_a1 = *(char *)(param_2 + 0x1f) != '\0';
      local_88 = local_98;
      pppuVar5 = (undefined ***)0x0;
      local_9c = 1;
      local_a0 = &PTR_FUN_11cd7298;
      local_98[0] = 0;
      local_84 = local_88;
      if (*(short *)((int)param_2 + 0x16) != 0) {
        FUN_1141fcb0(param_2 + 6,*(short *)((int)param_2 + 0x16));
        pppuVar5 = &local_a0;
      }
      local_b4 = param_2[2];
      local_b0 = *param_2;
      local_ac = local_a1;
      local_a8 = (uint)*(ushort *)((int)param_2 + 0x7d);
      local_ab = 1;
      local_bc = param_1;
      local_b8 = iVar6;
      FUN_11472cb0((int)*(short *)(param_2 + 3),*(undefined4 *)((int)param_2 + 0xe),
                   *(undefined4 *)((int)param_2 + 0x12),pppuVar5,
                   *(undefined2 *)((int)param_2 + 0x7f),(int)param_2 + 0x81);
      iVar6 = FUN_11612920(local_b0);
      if ((iVar6 == 0) && (iVar6 = FUN_11612230(&local_bc,local_d8), iVar6 != 0)) {
        FUN_11475fb0(iVar6,0);
      }
      if (local_c8 != 0) {
        FUN_10c3d5d0(local_c8);
      }
      local_a0 = &PTR_FUN_11cd7298;
      if ((local_84 != local_98) && (local_84 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_84);
      }
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_114736a0 @ 114736a0  size=679 ===== */
// strings:
//   "CBuffSystem_AddBuff"

/* [RE-AUTO c0]
   strings:
     ""CBuffSystem_AddBuff"" */

void __thiscall
FUN_114736a0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_bc [16];
  int local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int *local_94;
  int local_90;
  int *local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 local_61;
  undefined1 local_60 [20];
  undefined1 *local_4c;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_68 = param_6;
  param_1[0x116] = 0;
  iVar5 = param_2;
  if (param_2 == 0) {
    iVar5 = *(int *)(param_1[3] + 4);
  }
  FUN_1154c9d0(param_1[3]);
  FUN_1154cbe0();
  local_70 = CONCAT31(local_70._1_3_,param_5);
  if (*(int **)(param_1[3] + 0xc) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1[3] + 0xc) + 0x174))();
    if (cVar1 != '\0') {
      param_5 = 0;
    }
    local_70 = CONCAT31(local_70._1_3_,param_5);
  }
  if (param_1[1] != 0) {
    uVar2 = (**(code **)(*(int *)param_1[3] + 0xa8))();
    local_74 = FUN_117d60c0(param_3,uVar2);
    if (local_74 != 0) {
      iVar3 = FUN_104fd710(local_74);
      if (iVar3 == 0) {
        if (DAT_11dfa5b4 == -1) {
          DAT_11dfa5b4 = 10;
        }
        else if (DAT_11dfa5b4 < 1) goto LAB_1147378d;
        DAT_11dfa5b4 = DAT_11dfa5b4 + -1;
        FUN_100b3cd0("CBuffSystem_AddBuff");
      }
      else {
        local_6c = param_3;
        local_94 = &local_6c;
        local_90 = param_1[3];
        local_a0 = 0x1fb;
        local_9c = 0xffffffff;
        local_98 = 0xffffffff;
        (**(code **)(**(int **)(local_90 + 0x1c) + 0x14))(&local_a0);
        if (local_6c == 0) {
          param_1[0x116] = 0x65;
          FUN_11a89daa();
          return;
        }
        iVar4 = (**(code **)(*param_1 + 100))();
        if ((iVar4 == 0) || (*(int *)(iVar3 + 0x420) == 0)) {
          FUN_11473320(iVar5,iVar3,param_4,local_70,local_68);
          FUN_11a89daa();
          return;
        }
        FUN_1083ded0(local_48,&DAT_11d9e0b4,local_74);
        FUN_100b5f70(local_48,&local_61);
        (**(code **)(*param_1 + 100))(local_60,param_2);
        FUN_11424c80();
        if ((local_4c != local_60) && (local_4c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_4c);
        }
        local_80 = 0;
        local_7c = 0x101;
        local_78 = local_68;
        local_8c = param_1;
        local_88 = iVar3;
        local_84 = iVar5;
        FUN_11472cb0(1,*(undefined4 *)(iVar3 + 0x10c),*(undefined4 *)(iVar3 + 0x80),param_4,0,0);
        iVar5 = FUN_11579b90(&local_8c);
        if (iVar5 != 0) {
          FUN_1141bd70(local_bc);
          (**(code **)(*(int *)param_1[4] + 4))(iVar5);
          FUN_11579c00(iVar5);
        }
        if (local_ac != 0) {
          FUN_10c3d5d0(local_ac);
          FUN_11a89daa();
          return;
        }
      }
LAB_1147378d:
      FUN_11a89daa();
      return;
    }
    FUN_1154c9d0(param_1[3]);
    FUN_1154cbe0();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_114739b0 @ 114739b0  size=150 ===== */
// strings:
//   "CBuffInfo"
//   "CBuffSystem_ConflictCheck"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo""
     ""CBuffSystem_ConflictCheck"" */

uint FUN_114739b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar3 = param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)
       ) {
      param_1 = 0;
      uVar4 = FUN_11475300(iVar2,&param_1);
      return uVar4;
    }
  }
  if (DAT_11dfa5b0 == 0xffffffff) {
    DAT_11dfa5b0 = 10;
  }
  else {
    uVar4 = DAT_11dfa5b0;
    if ((int)DAT_11dfa5b0 < 1) goto LAB_11473a3f;
  }
  DAT_11dfa5b0 = DAT_11dfa5b0 - 1;
  uVar4 = FUN_100b3cd0("CBuffSystem_ConflictCheck");
LAB_11473a3f:
  return uVar4 & 0xffffff00;
}



/* ===== FUN_11473aa0 @ 11473aa0  size=290 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

undefined4 __thiscall FUN_11473aa0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_78 [92];
  int *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  uVar1 = (**(code **)(*(int *)param_1[3] + 0xa8))();
  iVar2 = FUN_117d60c0(param_2,uVar1);
  iVar3 = FUN_10500130(0,"CBuffInfo",0);
  if ((iVar2 != -1) &&
     ((((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar5 = *(int *)(iVar3 + 0x28), iVar5 != 0)) &&
      ((iVar4 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24)))))))
  {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar5) * 4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + (iVar4 % iVar5) * 4), iVar3 != 0)) {
      iVar5 = (**(code **)(*param_1 + 100))();
      if ((iVar5 != 0) && (*(int *)(iVar3 + 0x420) != 0)) {
        (**(code **)(*param_1 + 100))(iVar2);
        FUN_114249e0();
        local_14 = *(undefined4 *)(param_1[3] + 4);
        local_10 = 0;
        local_c = 0x101;
        local_8 = 0;
        local_1c = param_1;
        local_18 = iVar3;
        FUN_1141b890(&local_1c);
        (**(code **)(*(int *)param_1[4] + 8))(local_78,param_3);
        FUN_1141ba70();
        return 0;
      }
      FUN_11475450(*(undefined4 *)(iVar3 + 0x44),1,*(undefined4 *)(iVar3 + 0x10),param_3);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_114744f0 @ 114744f0  size=145 ===== */
// strings:
//   "CBuffInfo"
//   "CBuffSystem_GetCountByTypeID"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo""
     ""CBuffSystem_GetCountByTypeID"" */

undefined4 FUN_114744f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar3 = param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
      uVar4 = FUN_11612a80(param_1);
      return uVar4;
    }
  }
  if (DAT_11dfa5bc == -1) {
    DAT_11dfa5bc = 10;
  }
  else if (DAT_11dfa5bc < 1) {
    return 0xffffffff;
  }
  DAT_11dfa5bc = DAT_11dfa5bc + -1;
  FUN_100b3cd0("CBuffSystem_GetCountByTypeID");
  return 0xffffffff;
}



/* ===== FUN_11475fb0 @ 11475fb0  size=215 ===== */
// strings:
//   "CBuffSystem_OnAddBuff"

/* [RE-AUTO c0]
   strings:
     ""CBuffSystem_OnAddBuff"" */

void __thiscall FUN_11475fb0(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 4) != 1) && (*(int *)(param_1 + 4) == 2)) {
    if (*(char *)(param_2 + 0x3c) != '\0') {
      if (DAT_11dfa5b8 == -1) {
        DAT_11dfa5b8 = 10;
      }
      else if (DAT_11dfa5b8 < 1) {
        return;
      }
      DAT_11dfa5b8 = DAT_11dfa5b8 + -1;
      FUN_100b3cd0("CBuffSystem_OnAddBuff");
      return;
    }
    local_14 = 0x1fa;
    local_10 = 0xffffffff;
    local_c = 0xffffffff;
    local_8 = param_2;
    FUN_11476270(&local_14);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(param_2);
    uVar1 = FUN_1141bcc0();
    if (param_3 == '\0') {
      uVar1 = FUN_11476490(param_2);
    }
    FUN_1141bbe0(uVar1);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
    local_24 = 0x1f8;
    local_20 = 0xffffffff;
    local_1c = 0xffffffff;
    local_18 = param_2;
    FUN_11476270(&local_24);
  }
  return;
}



/* ===== FUN_114d75f0 @ 114d75f0  size=259 ===== */
// calls: _itoa
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   calls: _itoa
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_114d75f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *_Dest;
  int local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_1c = FUN_1025b060();
  local_1c = local_1c + param_2;
  iVar1 = FUN_1134d820();
  if (iVar1 <= local_1c) {
    iVar1 = FUN_1134d720();
    iVar2 = FUN_10500130(0,"CBuffInfo",0);
    if (((iVar1 != -1) &&
        (((iVar1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
         (iVar4 = *(int *)(iVar2 + 0x28), iVar4 != 0)))) &&
       ((iVar3 = iVar1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4), iVar2 != 0)) {
        _Dest = local_18;
        iVar3 = 10;
        iVar4 = FUN_1134d720();
        _itoa(iVar4,_Dest,iVar3);
        if (*(int *)(iVar2 + 0x420) == 0) {
          local_1c = 0;
          (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 0x44))(0,iVar1,0,0,4);
        }
      }
    }
  }
  FUN_113b5640(&local_1c,0,0);
  FUN_11a89daa();
  return;
}



/* ===== FUN_114d7700 @ 114d7700  size=259 ===== */
// calls: _itoa
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   calls: _itoa
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_114d7700(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *_Dest;
  int local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_1c = FUN_1025b060();
  local_1c = local_1c + param_2;
  iVar1 = FUN_11351760();
  if (iVar1 <= local_1c) {
    iVar1 = FUN_11351740();
    iVar2 = FUN_10500130(0,"CBuffInfo",0);
    if (((iVar1 != -1) &&
        (((iVar1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
         (iVar4 = *(int *)(iVar2 + 0x28), iVar4 != 0)))) &&
       ((iVar3 = iVar1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4), iVar2 != 0)) {
        _Dest = local_18;
        iVar3 = 10;
        iVar4 = FUN_11351740();
        _itoa(iVar4,_Dest,iVar3);
        if (*(int *)(iVar2 + 0x420) == 0) {
          local_1c = 0;
          (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 0x44))(0,iVar1,0,0,4);
        }
      }
    }
  }
  FUN_113b5d80(&local_1c,0,0);
  FUN_11a89daa();
  return;
}



/* ===== CPlayerSPMgr::AddPiyo @ 114d7810  size=492 ===== */
// calls: _itoa, memmove
// strings:
//   "CBuffInfo"
//   "CPlayerSPMgr::AddPiyo"

/* [RE-AUTO c3]
   id: CPlayerSPMgr::AddPiyo
   calls: _itoa, memmove
   strings:
     ""CBuffInfo""
     ""CPlayerSPMgr::AddPiyo"" */

void __thiscall CPlayerSPMgr__AddPiyo(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  size_t _Size;
  int *piVar7;
  char *_Dest;
  undefined1 local_1d;
  int local_1c;
  char local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_1c = FUN_1025b060();
  local_1c = local_1c + param_2;
  iVar2 = FUN_113520d0();
  if (iVar2 <= local_1c) {
    FUN_113b5fc0(&local_1c,0,0);
    iVar2 = FUN_11351fd0();
    iVar3 = FUN_10500130(0,"CBuffInfo",0);
    if ((iVar2 != -1) &&
       ((((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
         (iVar5 = *(int *)(iVar3 + 0x28), iVar5 != 0)) &&
        ((iVar4 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))))
       ) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar5) * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + (iVar4 % iVar5) * 4), iVar3 != 0)) {
        _Dest = local_18;
        iVar4 = 10;
        iVar5 = FUN_11351fd0();
        _itoa(iVar5,_Dest,iVar4);
        if (*(int *)(iVar3 + 0x420) == 0) {
          (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 0x44))(0,iVar2,0,0,4);
        }
      }
    }
  }
  if (local_1c < 1) {
    for (piVar7 = *(int **)(param_1 + 0x20); piVar7 != *(int **)(param_1 + 0x24);
        piVar7 = piVar7 + 2) {
      if (*piVar7 == 1) {
        if ((*(int *)(param_1 + 8) != 0) && (piVar7[1] != -1)) {
          FUN_100ea6a0(piVar7[1]);
        }
        piVar6 = piVar7 + 2;
        if ((piVar6 != *(int **)(param_1 + 0x24)) &&
           (_Size = (int)*(int **)(param_1 + 0x24) - (int)piVar6, _Size != 0)) {
          memmove(piVar7,piVar6,_Size);
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -8;
        break;
      }
    }
  }
  else {
    piVar7 = *(int **)(param_1 + 0x24);
    piVar6 = *(int **)(param_1 + 0x20);
    if (piVar6 != piVar7) {
      do {
        if (*piVar6 == 1) break;
        piVar6 = piVar6 + 2;
      } while (piVar6 != piVar7);
      if (piVar6 != piVar7) goto LAB_114d79d3;
    }
    if (*(int *)(param_1 + 8) != 0) {
      local_c = FUN_100ea610("CPlayerSPMgr::AddPiyo",1000,0,param_1,FUN_114d82d0,0);
      puVar1 = *(undefined4 **)(param_1 + 0x24);
      local_10 = 1;
      if (puVar1 == *(undefined4 **)(param_1 + 0x28)) {
        FUN_114d8590(puVar1,&local_10,&local_1d,1,1);
      }
      else {
        *puVar1 = 1;
        puVar1[1] = local_c;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 8;
      }
    }
  }
LAB_114d79d3:
  FUN_113b5fc0(&local_1c,0,0);
  FUN_11a89daa();
  return;
}



/* ===== FUN_114d7a00 @ 114d7a00  size=259 ===== */
// calls: _itoa
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   calls: _itoa
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_114d7a00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *_Dest;
  int local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_1c = FUN_1025b060();
  local_1c = local_1c + param_2;
  iVar1 = FUN_11352650();
  if (iVar1 <= local_1c) {
    iVar1 = FUN_11352570();
    iVar2 = FUN_10500130(0,"CBuffInfo",0);
    if (((iVar1 != -1) &&
        (((iVar1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
         (iVar4 = *(int *)(iVar2 + 0x28), iVar4 != 0)))) &&
       ((iVar3 = iVar1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4), iVar2 != 0)) {
        _Dest = local_18;
        iVar3 = 10;
        iVar4 = FUN_11352570();
        _itoa(iVar4,_Dest,iVar3);
        if (*(int *)(iVar2 + 0x420) == 0) {
          local_1c = 0;
          (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 0x44))(0,iVar1,0,0,4);
        }
      }
    }
  }
  FUN_113b6010(&local_1c,0,0);
  FUN_11a89daa();
  return;
}



/* ===== FUN_114d7b10 @ 114d7b10  size=259 ===== */
// calls: _itoa
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   calls: _itoa
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_114d7b10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *_Dest;
  int local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_1c = FUN_1025b060();
  local_1c = local_1c + param_2;
  iVar1 = FUN_11353880();
  if (iVar1 <= local_1c) {
    iVar1 = FUN_11353860();
    iVar2 = FUN_10500130(0,"CBuffInfo",0);
    if (((iVar1 != -1) &&
        (((iVar1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
         (iVar4 = *(int *)(iVar2 + 0x28), iVar4 != 0)))) &&
       ((iVar3 = iVar1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4), iVar2 != 0)) {
        _Dest = local_18;
        iVar3 = 10;
        iVar4 = FUN_11353860();
        _itoa(iVar4,_Dest,iVar3);
        if (*(int *)(iVar2 + 0x420) == 0) {
          local_1c = 0;
          (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 0x44))(0,iVar1,0,0,4);
        }
      }
    }
  }
  FUN_113b6530(&local_1c,0,0);
  FUN_11a89daa();
  return;
}



/* ===== FUN_114da6b0 @ 114da6b0  size=1320 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void __fastcall FUN_114da6b0(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  undefined1 local_e0 [20];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  undefined1 *local_70;
  undefined1 local_69;
  undefined1 local_68 [20];
  undefined1 *local_54;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  char local_20 [16];
  char *local_10;
  char *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  (**(code **)(*param_1 + 4))();
  uVar5 = FUN_11399c90();
  (**(code **)(*param_1 + 4))(uVar5);
  uVar5 = FUN_11399c70();
  FUN_117eab90(uVar5);
  local_8c = FUN_117eaca0(param_1[0x10]);
  iVar6 = FUN_116cc020();
  uVar5 = *(undefined4 *)(iVar6 + 0x5c);
  iVar6 = FUN_116cc020();
  uVar1 = *(undefined4 *)(iVar6 + 100);
  (**(code **)(*param_1 + 4))();
  cVar3 = FUN_11463d90(uVar5);
  local_70 = (undefined1 *)CONCAT31(local_70._1_3_,cVar3);
  if (cVar3 == '\0') {
    iVar6 = (**(code **)(*param_1 + 4))();
    uVar4 = (**(code **)(**(int **)(iVar6 + 0x10) + 0x30))(uVar1);
    local_70 = (undefined1 *)CONCAT31(local_70._1_3_,uVar4);
  }
  local_74 = CONCAT31(local_74._1_3_,param_1[0x11] == 1);
  puVar7 = (undefined1 *)FUN_117eb840(param_1[0x13],local_70,local_74);
  local_70 = puVar7;
  iVar6 = FUN_10500130(0,"CBuffInfo",0);
  if ((puVar7 != (undefined1 *)0xffffffff) &&
     ((((puVar7 != (undefined1 *)0x0 || (*(int *)(iVar6 + 0x30) == 0)) &&
       (iVar11 = *(int *)(iVar6 + 0x28), iVar11 != 0)) &&
      ((iVar8 = (int)puVar7 - *(int *)(iVar6 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(iVar6 + 0x24))
       ))))) {
    iVar6 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar8 / iVar11) * 4);
    if ((iVar6 != 0) &&
       (iVar6 = *(int *)(iVar6 + (iVar8 % iVar11) * 4), local_74 = iVar6, iVar6 != 0)) {
      cVar3 = FUN_116a78d0(0x24);
      if (cVar3 == '\0') {
        iVar11 = (**(code **)(*param_1 + 4))();
        (**(code **)(**(int **)(iVar11 + 0x10) + 0x44))(0,puVar7,0,0,0x20);
        local_80 = 0;
        local_7c = (int *)0x0;
        local_78 = (int *)0x0;
        FUN_117eb890(local_68);
        iVar11 = FUN_100e5a30();
        local_74 = FUN_1024e9b0(*(undefined4 *)(iVar11 + 0x14),0x2a);
        if (local_7c == local_78) {
          FUN_10899eb0(local_7c,&local_74,&local_69,1,1);
        }
        else {
          *local_7c = local_74;
          local_7c = local_7c + 1;
        }
        if ((local_54 != local_68) && (local_54 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_54);
        }
        local_10 = local_20;
        local_20[0] = '\0';
        local_c = local_10;
        FUN_114daf10(iVar6 + 0x14,local_10);
        FUN_100e55b0(local_20);
        puVar7 = &DAT_11d9d32b;
        if (local_70 != (undefined1 *)0x0) {
          puVar7 = local_70;
        }
        local_74 = FUN_1024e9b0(puVar7,0x2a);
        if (local_7c == local_78) {
          FUN_10899eb0(local_7c,&local_74,&local_69,1,1);
        }
        else {
          *local_7c = local_74;
          local_7c = local_7c + 1;
        }
        FUN_100e5670();
        piVar12 = (int *)(**(code **)(*param_1 + 4))();
        iVar6 = FUN_116cc020();
        (**(code **)(*piVar12 + 0x460))(*(undefined4 *)(iVar6 + 0x60),&local_80);
        if ((local_c != local_20) && (local_c != (char *)0x0)) {
          FUN_10c3d5d0(local_c);
        }
        if (local_80 != 0) {
          FUN_10c3d5d0(local_80);
        }
      }
      else {
        iVar6 = (**(code **)(*param_1 + 4))();
        piVar12 = *(int **)(iVar6 + 0xc);
        if (piVar12 != (int *)0x0) {
          local_b8 = 0;
          puStack_9c = &local_a4;
          local_a8 = 0;
          local_90 = local_69;
          uStack_bc = 0;
          local_a4 = 0;
          uStack_a0 = 0;
          local_94 = 0;
          local_cc = 1;
          local_c8 = 1;
          uStack_c4 = 0xffffffff;
          uStack_c0 = 1;
          puStack_98 = puStack_9c;
          piVar9 = (int *)(**(code **)(*param_1 + 4))();
          puVar10 = (undefined4 *)(**(code **)(*piVar9 + 0x28))();
          local_b4 = *puVar10;
          local_b0 = puVar10[1];
          local_ac = puVar10[2];
          local_a8 = (**(code **)(*param_1 + 4))();
          (**(code **)(*piVar12 + 0xb8))(local_e0,&local_cc);
          iVar6 = FUN_113a5930();
          cVar3 = FUN_113a58c0();
          while ((cVar3 == '\0' && (iVar6 != 0))) {
            (**(code **)(**(int **)(iVar6 + 0x10) + 0x44))
                      (*(undefined4 *)(iVar6 + 4),puVar7,0,1,0x20);
            local_10 = local_20;
            local_20[0] = '\0';
            local_c = local_10;
            FUN_114daf10(local_74 + 0x14,local_10);
            local_28 = local_38;
            pcVar2 = local_c;
            do {
              pcVar13 = pcVar2;
              pcVar2 = pcVar13 + 1;
            } while (*pcVar13 != '\0');
            local_24 = local_28;
            FUN_100b62c0(local_c,pcVar13);
            FUN_117eb890(local_68);
            iVar11 = FUN_100e5a30();
            local_40 = local_50;
            pcVar2 = *(char **)(iVar11 + 0x14);
            do {
              pcVar13 = pcVar2;
              pcVar2 = pcVar13 + 1;
            } while (*pcVar13 != '\0');
            local_3c = local_40;
            FUN_100b62c0(*(char **)(iVar11 + 0x14),pcVar13);
            (**(code **)(*param_1 + 0xc4))(*(undefined4 *)(iVar6 + 4),local_50,local_38);
            if ((local_3c != local_50) && (local_3c != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_3c);
            }
            if ((local_54 != local_68) && (local_54 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_54);
            }
            if ((local_24 != local_38) && (local_24 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(local_24);
            }
            piVar12 = *(int **)(iVar6 + 4);
            iVar6 = (**(code **)(*param_1 + 4))();
            local_7c = *(int **)(iVar6 + 4);
            local_88 = 0x204;
            local_84 = 0xffffffff;
            local_80 = -1;
            local_78 = piVar12;
            iVar6 = (**(code **)(*param_1 + 4))();
            (**(code **)(**(int **)(*(int *)(iVar6 + 0xc) + 0x98) + 0x14))(&local_88);
            if ((local_c != local_20) && (local_c != (char *)0x0)) {
              FUN_10c3d5d0(local_c);
            }
            iVar6 = FUN_113a58d0();
            cVar3 = FUN_113a58c0();
            puVar7 = local_70;
          }
          FUN_113a5790();
          FUN_10c37890();
          FUN_11a89daa();
          return;
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



