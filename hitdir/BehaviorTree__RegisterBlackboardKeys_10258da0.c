
/* [RE-R1]
   strings:
     ""HitPart""
     ""HitDamageHealth""
     ""EnemyDamage""
     ""Health""
     ""HitSkillId""
     ""HitAttrDmgType""
     ""HitDamageType""
     ""HitPos""
     ""HitDirSim""
     ""ShooterId"" */

void __fastcall BehaviorTree__RegisterBlackboardKeys(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  uVar3 = FUN_113168d0("HitPart");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  uVar3 = FUN_113168d0("HitDamageHealth");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x230) = uVar3;
  uVar3 = FUN_113168d0("EnemyDamage");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  uVar3 = FUN_113168d0("Health",&local_c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 != '\0') {
    FUN_1025bfc0(local_c,param_1 + 0x280);
  }
  uVar3 = FUN_113168d0("HitSkillId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  uVar3 = FUN_113168d0("HitAttrDmgType",param_1 + 0x23c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDamageType",param_1 + 0x238);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitPos",param_1 + 0x240);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("HitDirSim",param_1 + 0x244);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterId",param_1 + 0x248);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterSrvId",param_1 + 0x24c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("ShooterMonsterInfoId",param_1 + 0x250);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Stimuli_Dead");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 600) = uVar3;
  uVar3 = FUN_113168d0("AbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x278) = uVar3;
  uVar3 = FUN_113168d0("LastAbnormalCauserId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  uVar3 = FUN_113168d0("Input_AbnormalType",param_1 + 0x260);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("PartBrokenLevel",param_1 + 0x26c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x26c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("DamageCauserId",param_1 + 0x270);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Flag_Invulnerability",param_1 + 0x25c);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_MasterAbnormalType",param_1 + 0x264);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("Sense_TargetAbnormalType",param_1 + 0x268);
  cVar2 = FUN_1046dc90(uVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  }
  uVar3 = FUN_113168d0("EventParam1");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  uVar3 = FUN_113168d0("EventParam2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  uVar3 = FUN_113168d0("EventParam3");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x28c) = uVar3;
  uVar3 = FUN_113168d0("EventParam4");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x290) = uVar3;
  uVar3 = FUN_113168d0("EventParamFloat");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x294) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x298) = uVar3;
  uVar3 = FUN_113168d0("EventParamVec2");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  uVar3 = FUN_113168d0("EventParamStr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = uVar3;
  uVar3 = FUN_113168d0("SelfFSMState");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a4) = uVar3;
  uVar3 = FUN_113168d0("ClimbStartPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  uVar3 = FUN_113168d0("ClimbEndDir");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  uVar3 = FUN_113168d0("KeepTarget");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  uVar3 = FUN_113168d0("KeepTargetID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2b8) = uVar3;
  uVar3 = FUN_113168d0("CommondMoveTargetPos");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 700) = uVar3;
  uVar3 = FUN_113168d0("CommondMove");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  uVar3 = FUN_113168d0("HitSkillResID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  uVar3 = FUN_113168d0("HitSkillID");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar3;
  uVar3 = FUN_113168d0("HitSkillLevel");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  uVar3 = FUN_113168d0("DamageFireAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  uVar3 = FUN_113168d0("DamageWaterAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar3;
  uVar3 = FUN_113168d0("DamageElectricAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  uVar3 = FUN_113168d0("DamageDragonAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e0) = uVar3;
  uVar3 = FUN_113168d0("DamageIceAttr");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  *(undefined4 *)(param_1 + 0x2e4) = uVar3;
  uVar3 = FUN_113168d0("Cooperation_Attack_TargetId");
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    cVar2 = FUN_1046dc90(uVar3,&local_c);
    uVar3 = 0xffffffff;
    if (cVar2 != '\0') {
      uVar3 = local_c;
    }
  }
  iVar1 = DAT_123bb90c;
  *(undefined4 *)(param_1 + 0x2e8) = uVar3;
  piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(undefined4 *)(param_1 + 300));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))(&local_8);
    if (local_8 != (int *)0x0) {
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName1",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 1) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 1;
          FUN_113168d0("NpcAnimationName1");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b14,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName2",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 2) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 2;
          FUN_113168d0("NpcAnimationName2");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b18,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName3",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 4) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 4;
          FUN_113168d0("NpcAnimationName3");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b1c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName4",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 8) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 8;
          FUN_113168d0("NpcAnimationName4");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b20,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName5",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x10) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x10;
          FUN_113168d0("NpcAnimationName5");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b24,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName6",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x20) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x20;
          FUN_113168d0("NpcAnimationName6");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b28,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName7",&local_10);
      if (cVar2 != '\0') {
        if ((DAT_123c2b10 & 0x40) == 0) {
          DAT_123c2b10 = DAT_123c2b10 | 0x40;
          FUN_113168d0("NpcAnimationName7");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b2c,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      cVar2 = (**(code **)(*local_8 + 0x34))("PropertiesInstance.NpcAnimationName8",&local_10);
      if (cVar2 != '\0') {
        if (-1 < (char)DAT_123c2b10) {
          DAT_123c2b10 = DAT_123c2b10 | 0x80;
          FUN_113168d0("NpcAnimationName8");
        }
        local_c = 0xffffffff;
        cVar2 = FUN_1046dc90(&DAT_123c2b30,&local_c);
        if (cVar2 != '\0') {
          uVar3 = FUN_113168d0(local_10);
          FUN_1025bc60(local_c,uVar3);
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
      }
    }
  }
  return;
}

