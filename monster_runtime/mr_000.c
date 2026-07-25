
// ================= RegisterCombatBehaviorTreeNodes @ 10a9bc30 =================

/* [RE-R1]
   strings:
     ""CChangeArea""
     ""CSetTimerEvent""
     ""CBuffAreaPorcess""
     ""CNpcSkillPlay""
     ""CNpcStateAbnoraml""
     ""CCombatNpcRotateToPos""
     ""CCombatNpcRotateToTarget""
     ""CBTObjEnableItemListener""
     ""CPetExistNearestLedge""
     ""CApplyEffect"" */

void RegisterCombatBehaviorTreeNodes(void)

{
  int *piVar1;
  int iVar2;
  undefined1 local_8 [4];
  
  if (DAT_12020a88 == '\0') {
    DAT_12020a88 = '\x01';
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 0x2c))(FUN_10a9c110);
    FUN_113168d0("CChangeArea");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c310,1,0);
    FUN_10aa0200();
    FUN_113168d0("CSetTimerEvent");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9d0e0,1,0);
    FUN_10aa6870();
    FUN_113168d0("CBuffAreaPorcess");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c270,1,0);
    CBuffAreaPorcess__RegisterNodeParams();
    FUN_113168d0("CNpcSkillPlay");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cbe0,1,0);
    CNpcSkillPlay__RegisterNodeParams();
    FUN_113168d0("CNpcStateAbnoraml");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cd20,1,0);
    FUN_10aa5d50();
    FUN_113168d0("CCombatNpcRotateToPos");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c450,1,0);
    BTNode_CCombatNpcRotateToPos__DescribeParams();
    FUN_113168d0("CCombatNpcRotateToTarget");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c4f0,1,0);
    BTNode_CCombatNpcRotateToTarget__DescribeParams();
    FUN_113168d0("CBTObjEnableItemListener");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c1d0,1,0);
    FUN_10a9feb0();
    FUN_113168d0("CPetExistNearestLedge");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cf00,1,0);
    FUN_113168d0("CApplyEffect");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c130,1,0);
    FUN_10a9eed0();
    FUN_113168d0("CShowIcon");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9d150,1,0);
    FUN_10aa6bc0();
    FUN_113168d0("CLocalPlayerGotoState");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c950,1,0);
    FUN_10aa33e0();
    FUN_113168d0("CNpcGetClientTimeTable");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9ca00,1,0);
    FUN_10aa3650();
    FUN_113168d0("CPetAddGroupBuff");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cdc0,1,0);
    CPetAddGroupBuff__RegisterNodeParams();
    FUN_113168d0("CPetApplyGroupEffect");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9ce60,1,0);
    CPetApplyGroupEffect__RegisterFlowNodePorts();
    FUN_113168d0("CEnableMoveCollision");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c630,1,0);
    BTNode_CEnableMoveCollision__DescribeParams();
    FUN_113168d0("CEntityFollowTarget");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c6d0,1,0);
    FUN_10aa1d10();
    FUN_113168d0("CEntityPursuitTarget");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c810,1,0);
    FUN_10aa2990();
    FUN_113168d0("CResetLocomotion");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cfa0,1,0);
    FUN_10aa64f0();
    FUN_113168d0("CCommonRotateToPos");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c590,1,0);
    FUN_10aa1370();
    FUN_113168d0("CEntityMoveToPosEx");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c770,1,0);
    FUN_10aa2420();
    FUN_113168d0("CLMGRotateToPos");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c8b0,1,0);
    FUN_10aa3140();
    FUN_113168d0("CNpcStartCombo");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cc80,1,0);
    FUN_10aa5c00();
    FUN_113168d0("CNpcNextCombo");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9cb40,1,0);
    FUN_10aa46b0();
    FUN_113168d0("CNpcLeaveCombo");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9caa0,1,0);
    FUN_10aa40c0();
    FUN_113168d0("CSceneObjectHide");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9d040,1,0);
    FUN_10aa65c0();
    FUN_113168d0("CSwitchMonsterPartDefence");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9d1f0,1,0);
    FUN_10aa6d90();
    FUN_113168d0("CCheckBattleGround");
    piVar1 = (int *)FUN_104787d0();
    (**(code **)(*piVar1 + 4))(local_8,FUN_10a9c3b0,1,0);
    iVar2 = FUN_1048b080();
    *(undefined1 *)(iVar2 + 0x50) = 1;
  }
  return;
}


// ================= CPetSupportCatSkill::LoadAndPlaySkillAnims @ 10beff70 =================

/* [RE-R1]
   strings:
     ""PetActiveSkillID""
     ""NeedSummonAnim""
     ""SkillEntryAnim""
     ""SkillCastStartAnim""
     ""SkillCastLoopAnim""
     ""SkillAnim""
     ""SkillLeaveAnim""
     ""SkillCastTime"" */

undefined4 CPetSupportCatSkill__LoadAndPlaySkillAnims(uint param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_50;
  undefined1 local_40;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))(*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_104753a0();
  if (iVar3 != 0) {
    local_8 = 0xffffffff;
    uVar4 = FUN_113168d0("PetActiveSkillID",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bd00(local_8,iVar1 + 0xc);
    }
    FUN_113168d0(&DAT_11d9d32b);
    FUN_113168d0(&DAT_11d9d32b);
    FUN_113168d0(&DAT_11d9d32b);
    FUN_113168d0(&DAT_11d9d32b);
    FUN_113168d0(&DAT_11d9d32b);
    param_1 = CONCAT13(1,(undefined3)param_1);
    local_20 = 0;
    iVar3 = CPetSupportCatSkillInfo__FindSkillEntryByKey(*(undefined4 *)(iVar1 + 0xc));
    if (iVar3 != 0) {
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x24));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x88),*(undefined4 *)(iVar3 + 0x84));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x3c));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x58),*(undefined4 *)(iVar3 + 0x54));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_2c = local_3c;
      local_28 = local_2c;
      FUN_100b62c0(*(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar3 + 0x6c));
      FUN_11316b10(local_28);
      if ((local_28 != local_3c) && (local_28 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_28);
      }
      local_20 = *(undefined4 *)(iVar3 + 0x8c);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      param_1 = param_1 & 0xffffff;
      FUN_11316b10(&DAT_11cd58ec);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      FUN_11316b10(&DAT_11cd58ec);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      FUN_11316b10(&DAT_11cd58ec);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      FUN_11316b10(&DAT_11cd58ec);
    }
    iVar3 = FUN_11318860();
    if (iVar3 == 0) {
      FUN_11316b10(&DAT_11cd58ec);
    }
    uVar4 = FUN_113168d0("NeedSummonAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025be30(local_8,(int)&param_1 + 3);
    }
    uVar4 = FUN_113168d0("SkillEntryAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_c);
    }
    uVar4 = FUN_113168d0("SkillCastStartAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_10);
    }
    uVar4 = FUN_113168d0("SkillCastLoopAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_14);
    }
    uVar4 = FUN_113168d0("SkillAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_18);
    }
    uVar4 = FUN_113168d0("SkillLeaveAnim",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bc60(local_8,local_1c);
    }
    uVar4 = FUN_113168d0("SkillCastTime",&local_8);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      FUN_1025bd00(local_8,&local_20);
    }
    local_50 = *(undefined4 *)(iVar1 + 0x10);
    local_84 = 0x938;
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_40 = 0;
    (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(&local_84);
  }
  return 0;
}


// ================= CPlayerAnimGraph::SetupCombatTransitions_TypeB @ 10f7a080 =================

/* [RE-R1]
   strings:
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLCombat""
     ""NoBullet""
     ""COMBAT_PL05_NOBULLET""
     ""ChangeBullet""
     ""COMBAT_PL05_CHANGEBULLET""
     ""PLCharging""
     ""RageAim""
     ""COMBAT_PL05_RAGE_PRESHOOT"" */

void __fastcall CPlayerAnimGraph__SetupCombatTransitions_TypeB(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined1 local_b8 [56];
  undefined1 local_80 [56];
  undefined1 local_48 [36];
  undefined4 *local_24;
  undefined4 *local_20;
  code *local_10;
  code *local_c;
  undefined1 local_5;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0x15b4);
  if (0xb < iVar2 - 1U) {
    return;
  }
  iVar1 = iVar2 * 3 + 0x8c;
  iVar3 = *(int *)(param_1 + iVar1 * 4);
  iVar1 = param_1 + iVar1 * 4;
  iVar4 = *(int *)(iVar1 + 4);
  if (iVar3 != iVar4) {
    FUN_10f63c40(iVar3,iVar4,&local_5);
  }
  if (iVar2 == 1) {
    FUN_10f574b0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    local_c = FUN_10f6b660;
    if (local_24 == local_20) {
      FUN_108716d0(local_24,&local_c,&local_5,1,1);
      uVar6 = extraout_ECX_03;
    }
    else {
      *local_24 = FUN_10f6b660;
      local_24 = local_24 + 1;
      uVar6 = extraout_ECX_02;
    }
    FUN_10f56fa0("COMBAT_UNHOLSTER",uVar6,local_48);
    FUN_10f593b0();
  }
  else {
    if (iVar2 != 5) goto LAB_10f7a2f5;
    FUN_10f56e50();
    local_10 = FUN_10f73a40;
    FUN_10f574b0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0("NoBullet");
    FUN_10f573e0();
    FUN_10fb6bf0(&local_10);
    FUN_10f56fa0("COMBAT_PL05_NOBULLET",extraout_ECX,local_b8);
    FUN_10f593b0();
    FUN_10f574b0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0("ChangeBullet");
    FUN_10f573e0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10fb6bf0(&local_10);
    FUN_10f56fa0("COMBAT_PL05_CHANGEBULLET",extraout_ECX_00,local_80);
    FUN_10f593b0();
    FUN_10f574b0();
    FUN_10f56fa0("PLCharging");
    FUN_10f56fa0("RageAim");
    FUN_10f573e0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10fb6bf0(&local_10);
    FUN_10f56fa0("COMBAT_PL05_RAGE_PRESHOOT",extraout_ECX_01,local_48);
    FUN_10f593b0();
    FUN_10f61a80();
    FUN_10f61a80();
  }
  FUN_10f61a80();
LAB_10f7a2f5:
  FUN_10fb2130(iVar1);
  puVar5 = *(undefined4 **)(param_1 + 0x110);
  local_c = FUN_10f74a60;
  if (puVar5 == *(undefined4 **)(param_1 + 0x114)) {
    FUN_108716d0(puVar5,&local_c,&local_5,1,1);
    return;
  }
  *puVar5 = FUN_10f74a60;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  return;
}


// ================= CPetActionController::BuildNormalActionStateGraph @ 10f7a350 =================

/* [RE-R1]
   strings:
     ""NORMAL_IDLE""
     ""HolsteredIdleBreak""
     ""HolsteredIdleBreakHungry""
     ""HolsteredIdleBreakHot""
     ""HolsteredIdleBreakCold""
     ""PLBaseSignal""
     ""EatDrug""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""NORMAL_TAKE_DRUG"" */

void __fastcall CPetActionController__BuildNormalActionStateGraph(int param_1)

{
  undefined4 *puVar1;
  code **ppcVar2;
  int extraout_ECX;
  undefined4 uStack_f04;
  undefined4 uStack_f00;
  int iStack_efc;
  undefined4 uStack_ef8;
  undefined4 uStack_ef4;
  int *piStack_ef0;
  char *pcStack_eec;
  char *pcStack_ee8;
  undefined4 uStack_ee0;
  undefined4 uStack_edc;
  undefined4 uStack_ed8;
  int *piStack_ed4;
  char *pcStack_ed0;
  char *pcStack_ecc;
  undefined4 uStack_ec4;
  undefined4 uStack_ec0;
  undefined4 uStack_ebc;
  int *piStack_eb8;
  char *pcStack_eb4;
  char *pcStack_eb0;
  undefined4 uStack_ea8;
  undefined4 uStack_ea4;
  undefined4 uStack_ea0;
  int *piStack_e9c;
  char *pcStack_e98;
  char *pcStack_e94;
  undefined4 uStack_e8c;
  char *pcStack_e88;
  int *piStack_e80;
  char *pcStack_e7c;
  char *pcStack_e78;
  undefined4 uStack_e70;
  char *pcStack_e6c;
  int *piStack_e64;
  char *pcStack_e60;
  char *pcStack_e5c;
  undefined4 uStack_e54;
  char *pcStack_e50;
  int *piStack_e48;
  char *pcStack_e44;
  char *pcStack_e40;
  undefined4 uStack_e38;
  char *pcStack_e34;
  int *piStack_e2c;
  char *pcStack_e28;
  char *pcStack_e24;
  undefined4 uStack_e1c;
  char *pcStack_e18;
  int *piStack_e10;
  char *pcStack_e0c;
  char *pcStack_e08;
  undefined4 uStack_e00;
  char *pcStack_dfc;
  undefined1 *puStack_df4;
  undefined *puStack_df0;
  char *pcStack_dec;
  undefined4 uStack_de4;
  char *pcStack_de0;
  undefined1 *puStack_dd8;
  char *pcStack_dd4;
  undefined1 *puStack_dcc;
  undefined *puStack_dc8;
  char *pcStack_dc4;
  undefined4 uStack_dbc;
  char *pcStack_db8;
  undefined1 *puStack_db0;
  char *pcStack_dac;
  char *pcStack_da8;
  undefined4 uStack_da0;
  char *pcStack_d9c;
  char *pcStack_d98;
  undefined4 uStack_d90;
  char *pcStack_d8c;
  undefined1 *puStack_d84;
  char *pcStack_d80;
  char *pcStack_d7c;
  undefined4 uStack_d74;
  char *pcStack_d70;
  undefined1 *puStack_d68;
  char *pcStack_d64;
  char *pcStack_d60;
  undefined4 uStack_d58;
  char *pcStack_d54;
  char *pcStack_d50;
  undefined4 uStack_d48;
  char *pcStack_d44;
  undefined1 *puStack_d3c;
  char *pcStack_d38;
  char *pcStack_d34;
  undefined4 uStack_d2c;
  char *pcStack_d28;
  undefined1 *puStack_d20;
  char *pcStack_d1c;
  char *pcStack_d18;
  undefined4 uStack_d10;
  char *pcStack_d0c;
  undefined1 *puStack_d04;
  char *pcStack_d00;
  char *pcStack_cfc;
  undefined4 uStack_cf4;
  char *pcStack_cf0;
  char *pcStack_cec;
  undefined4 uStack_ce4;
  char *pcStack_ce0;
  undefined1 *puStack_cd8;
  char *pcStack_cd4;
  char *pcStack_cd0;
  undefined4 uStack_cc8;
  char *pcStack_cc4;
  char *pcStack_cc0;
  undefined4 uStack_cb8;
  char *pcStack_cb4;
  undefined1 *puStack_cac;
  char *pcStack_ca8;
  char *pcStack_ca4;
  undefined4 uStack_c9c;
  char *pcStack_c98;
  undefined1 *puStack_c90;
  char *pcStack_c8c;
  char *pcStack_c88;
  undefined4 uStack_c80;
  char *pcStack_c7c;
  undefined1 *puStack_c74;
  char *pcStack_c70;
  char *pcStack_c6c;
  undefined4 uStack_c64;
  char *pcStack_c60;
  undefined1 *puStack_c58;
  char *pcStack_c54;
  char *pcStack_c50;
  undefined4 uStack_c48;
  char *pcStack_c44;
  undefined1 *puStack_c3c;
  char *pcStack_c38;
  char *pcStack_c34;
  undefined4 uStack_c2c;
  char *pcStack_c28;
  undefined1 *puStack_c20;
  char *pcStack_c1c;
  char *pcStack_c18;
  undefined4 uStack_c10;
  undefined *puStack_c0c;
  char *pcStack_c08;
  undefined4 uStack_c00;
  char *pcStack_bfc;
  undefined1 *puStack_bf4;
  char *pcStack_bf0;
  char *pcStack_bec;
  undefined4 uStack_be4;
  char *pcStack_be0;
  char *pcStack_bdc;
  undefined4 uStack_bd4;
  char *pcStack_bd0;
  undefined1 *puStack_bc8;
  char *pcStack_bc4;
  char *pcStack_bc0;
  undefined4 uStack_bb8;
  char *pcStack_bb4;
  char *pcStack_bb0;
  undefined4 uStack_ba8;
  char *pcStack_ba4;
  undefined1 *puStack_b9c;
  char *pcStack_b98;
  char *pcStack_b94;
  undefined4 uStack_b8c;
  char *pcStack_b88;
  char *pcStack_b84;
  undefined4 uStack_b7c;
  char *pcStack_b78;
  undefined1 *puStack_b70;
  char *pcStack_b6c;
  char *pcStack_b68;
  undefined4 uStack_b60;
  char *pcStack_b5c;
  char *pcStack_b58;
  undefined4 uStack_b50;
  char *pcStack_b4c;
  undefined1 *puStack_b44;
  char *pcStack_b40;
  char *pcStack_b3c;
  undefined4 uStack_b34;
  char *pcStack_b30;
  char *pcStack_b2c;
  undefined4 uStack_b24;
  char *pcStack_b20;
  undefined1 *puStack_b18;
  char *pcStack_b14;
  char *pcStack_b10;
  undefined4 uStack_b08;
  char *pcStack_b04;
  char *pcStack_b00;
  undefined4 uStack_af8;
  char *pcStack_af4;
  undefined1 *puStack_aec;
  char *pcStack_ae8;
  char *pcStack_ae4;
  undefined4 uStack_adc;
  char *pcStack_ad8;
  char *pcStack_ad4;
  undefined4 uStack_acc;
  char *pcStack_ac8;
  undefined1 *puStack_ac0;
  char *pcStack_abc;
  char *pcStack_ab8;
  undefined4 uStack_ab0;
  char *pcStack_aac;
  char *pcStack_aa8;
  undefined4 uStack_aa0;
  char *pcStack_a9c;
  undefined1 *puStack_a94;
  char *pcStack_a90;
  char *pcStack_a8c;
  undefined4 uStack_a84;
  char *pcStack_a80;
  char *pcStack_a7c;
  undefined4 uStack_a74;
  char *pcStack_a70;
  undefined1 *puStack_a68;
  char *pcStack_a64;
  char *pcStack_a60;
  undefined4 uStack_a58;
  char *pcStack_a54;
  char *pcStack_a50;
  undefined4 uStack_a48;
  char *pcStack_a44;
  undefined1 *puStack_a3c;
  char *pcStack_a38;
  char *pcStack_a34;
  undefined4 uStack_a2c;
  char *pcStack_a28;
  char *pcStack_a24;
  undefined4 uStack_a1c;
  char *pcStack_a18;
  undefined1 *puStack_a10;
  char *pcStack_a0c;
  char *pcStack_a08;
  undefined4 uStack_a00;
  char *pcStack_9fc;
  char *pcStack_9f8;
  undefined4 uStack_9f0;
  char *pcStack_9ec;
  undefined1 *puStack_9e4;
  char *pcStack_9e0;
  char *pcStack_9dc;
  undefined4 uStack_9d4;
  char *pcStack_9d0;
  char *pcStack_9cc;
  undefined4 uStack_9c4;
  char *pcStack_9c0;
  undefined1 *puStack_9b8;
  char *pcStack_9b4;
  char *pcStack_9b0;
  undefined4 uStack_9a8;
  char *pcStack_9a4;
  char *pcStack_9a0;
  undefined4 uStack_998;
  char *pcStack_994;
  undefined1 *puStack_98c;
  char *pcStack_988;
  char *pcStack_984;
  undefined4 uStack_97c;
  char *pcStack_978;
  char *pcStack_974;
  undefined4 uStack_96c;
  char *pcStack_968;
  undefined1 *puStack_960;
  char *pcStack_95c;
  char *pcStack_958;
  undefined4 uStack_954;
  undefined4 *puStack_950;
  code **ppcStack_94c;
  code **ppcStack_948;
  code **ppcStack_944;
  code **ppcStack_940;
  code **ppcStack_93c;
  char *pcStack_938;
  char *pcStack_934;
  char *pcStack_930;
  undefined4 uStack_92c;
  code *pcStack_928;
  code **ppcStack_924;
  code *pcStack_920;
  code **ppcStack_91c;
  code *pcStack_918;
  char *pcStack_914;
  int iStack_910;
  undefined1 local_904 [56];
  undefined1 local_8cc [56];
  undefined1 local_894 [56];
  undefined1 local_85c [56];
  undefined1 local_824 [56];
  undefined1 local_7ec [56];
  undefined1 local_7b4 [56];
  undefined1 local_77c [56];
  undefined1 local_744 [56];
  undefined1 local_70c [56];
  undefined1 local_6d4 [56];
  undefined1 local_69c [56];
  undefined1 local_664 [56];
  undefined1 local_62c [56];
  undefined1 local_5f4 [56];
  undefined1 local_5bc [56];
  undefined1 local_584 [56];
  undefined1 local_54c [56];
  undefined1 local_514 [56];
  undefined1 local_4dc [56];
  undefined1 local_4a4 [56];
  undefined1 local_46c [56];
  undefined1 local_434 [56];
  undefined1 local_3fc [56];
  undefined1 local_3c4 [56];
  undefined1 local_38c [56];
  undefined1 local_354 [56];
  undefined1 local_31c [56];
  undefined1 local_2e4 [56];
  undefined1 local_2ac [56];
  undefined1 local_274 [56];
  int local_23c [8];
  int local_21c;
  int local_210;
  int local_204 [8];
  int local_1e4;
  int local_1d8;
  int local_1cc [8];
  int local_1ac;
  int local_1a0;
  int local_194 [8];
  int local_174;
  int local_168;
  int local_15c [8];
  int local_13c;
  int local_130;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  undefined1 local_44 [44];
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x18;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iStack_910 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    iStack_910 = 1;
    pcStack_914 = (char *)0x1;
    pcStack_918 = (code *)&local_5;
    ppcStack_91c = &local_c;
    ppcStack_924 = (code **)0x10f7a38d;
    pcStack_920 = (code *)puVar1;
    FUN_10f64460();
    iStack_910 = extraout_ECX;
  }
  else {
    *puVar1 = 0x18;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  pcStack_914 = "NORMAL_IDLE";
  pcStack_918 = (code *)0x10f7a39a;
  CInfoRecord__GetModelString();
  pcStack_918 = (code *)0x10f7a3a1;
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x10;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10f9fc50;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    pcStack_918 = (code *)0x1;
    ppcStack_91c = (code **)0x1;
    pcStack_920 = (code *)&local_5;
    ppcStack_924 = &local_c;
    uStack_92c = 0x10f7a3e4;
    pcStack_928 = (code *)puVar1;
    FUN_108716d0();
  }
  else {
    *puVar1 = FUN_10f9fc50;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10fa2990;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    pcStack_918 = (code *)0x1;
    ppcStack_91c = (code **)0x1;
    pcStack_920 = (code *)&local_5;
    ppcStack_924 = &local_c;
    uStack_92c = 0x10f7a413;
    pcStack_928 = (code *)puVar1;
    FUN_108716d0();
  }
  else {
    *puVar1 = FUN_10fa2990;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = (code *)&DAT_10f73920;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    pcStack_918 = (code *)0x1;
    ppcStack_91c = (code **)0x1;
    pcStack_920 = (code *)&local_5;
    ppcStack_924 = &local_c;
    uStack_92c = 0x10f7a442;
    pcStack_928 = (code *)puVar1;
    FUN_108716d0();
  }
  else {
    *puVar1 = &DAT_10f73920;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa2210;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    pcStack_918 = (code *)0x1;
    ppcStack_91c = (code **)0x1;
    pcStack_920 = (code *)&local_5;
    ppcStack_924 = &local_c;
    uStack_92c = 0x10f7a478;
    pcStack_928 = (code *)puVar1;
    FUN_108716d0();
  }
  else {
    *puVar1 = FUN_10fa2210;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  pcStack_918 = FUN_10fa23b0;
  ppcStack_91c = (code **)0x6;
  pcStack_920 = (code *)0x10f7a486;
  FUN_10f5bd40();
  pcStack_920 = FUN_10f9fb80;
  ppcStack_924 = (code **)0x6;
  pcStack_928 = (code *)0x10f7a494;
  FUN_10f5bd40();
  pcStack_928 = FUN_10f917b0;
  uStack_92c = 6;
  pcStack_930 = (char *)0x10f7a4a2;
  FUN_10f5bd40();
  ppcVar2 = *(code ***)(param_1 + 200);
  local_c = FUN_10fa2670;
  if (ppcVar2 == *(code ***)(param_1 + 0xcc)) {
    pcStack_930 = (char *)0x1;
    pcStack_934 = (char *)0x1;
    pcStack_938 = &local_5;
    ppcStack_93c = &local_c;
    ppcStack_944 = (code **)0x10f7a4d8;
    ppcStack_940 = ppcVar2;
    FUN_108716d0();
  }
  else {
    *ppcVar2 = FUN_10fa2670;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  ppcVar2 = *(code ***)(param_1 + 0xf8);
  local_c = FUN_10fa2750;
  if (ppcVar2 == *(code ***)(param_1 + 0xfc)) {
    pcStack_930 = (char *)0x1;
    pcStack_934 = (char *)0x1;
    pcStack_938 = &local_5;
    ppcStack_93c = &local_c;
    ppcStack_944 = (code **)0x10f7a50e;
    ppcStack_940 = ppcVar2;
    FUN_108716d0();
  }
  else {
    *ppcVar2 = FUN_10fa2750;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  ppcVar2 = *(code ***)(param_1 + 0x11c);
  local_c = FUN_10fa16b0;
  if (ppcVar2 == *(code ***)(param_1 + 0x120)) {
    pcStack_930 = (char *)0x1;
    pcStack_934 = (char *)0x1;
    pcStack_938 = &local_5;
    ppcStack_93c = &local_c;
    ppcStack_944 = (code **)0x10f7a544;
    ppcStack_940 = ppcVar2;
    FUN_108716d0();
  }
  else {
    *ppcVar2 = FUN_10fa16b0;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 4;
  }
  ppcVar2 = *(code ***)(param_1 + 0x110);
  local_c = FUN_10f9fd30;
  if (ppcVar2 == *(code ***)(param_1 + 0x114)) {
    pcStack_930 = (char *)0x1;
    pcStack_934 = (char *)0x1;
    pcStack_938 = &local_5;
    ppcStack_93c = &local_c;
    ppcStack_944 = (code **)0x10f7a57a;
    ppcStack_940 = ppcVar2;
    FUN_108716d0();
  }
  else {
    *ppcVar2 = FUN_10f9fd30;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  }
  pcStack_930 = "HolsteredIdleBreak";
  pcStack_934 = (char *)0x10f7a587;
  FUN_10f56fa0();
  ppcVar2 = *(code ***)(param_1 + 100);
  if (ppcVar2 == *(code ***)(param_1 + 0x68)) {
    pcStack_934 = (char *)0x1;
    pcStack_938 = (char *)0x1;
    ppcStack_93c = (code **)&local_5;
    ppcStack_940 = &local_c;
    ppcStack_948 = (code **)0x10f7a5b3;
    ppcStack_944 = ppcVar2;
    FUN_10f649a0();
  }
  else {
    if (ppcVar2 != (code **)0x0) {
      *ppcVar2 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  pcStack_934 = "HolsteredIdleBreakHungry";
  pcStack_938 = (char *)0x10f7a5c0;
  FUN_10f56fa0();
  ppcVar2 = *(code ***)(param_1 + 100);
  if (ppcVar2 == *(code ***)(param_1 + 0x68)) {
    pcStack_938 = (char *)0x1;
    ppcStack_93c = (code **)0x1;
    ppcStack_940 = (code **)&local_5;
    ppcStack_944 = &local_c;
    ppcStack_94c = (code **)0x10f7a5ec;
    ppcStack_948 = ppcVar2;
    FUN_10f649a0();
  }
  else {
    if (ppcVar2 != (code **)0x0) {
      *ppcVar2 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  pcStack_938 = "HolsteredIdleBreakHot";
  ppcStack_93c = (code **)0x10f7a5f9;
  FUN_10f56fa0();
  ppcVar2 = *(code ***)(param_1 + 100);
  if (ppcVar2 == *(code ***)(param_1 + 0x68)) {
    ppcStack_93c = (code **)0x1;
    ppcStack_940 = (code **)0x1;
    ppcStack_944 = (code **)&local_5;
    ppcStack_948 = &local_c;
    puStack_950 = (undefined4 *)0x10f7a625;
    ppcStack_94c = ppcVar2;
    FUN_10f649a0();
  }
  else {
    if (ppcVar2 != (code **)0x0) {
      *ppcVar2 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  ppcStack_93c = (code **)0x11cfd4f8;
  ppcStack_940 = (code **)0x10f7a632;
  FUN_10f56fa0();
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    ppcStack_940 = (code **)0x1;
    ppcStack_944 = (code **)0x1;
    ppcStack_948 = (code **)&local_5;
    ppcStack_94c = &local_c;
    uStack_954 = 0x10f7a65e;
    puStack_950 = puVar1;
    FUN_10f649a0();
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  *(undefined2 *)(param_1 + 0x230) = 0;
  *(undefined1 **)(param_1 + 0x234) = &DAT_41400000;
  ppcStack_940 = (code **)0x10f7a67c;
  FUN_10f574b0();
  ppcStack_948 = (code **)0x11ce5eb8;
  ppcStack_94c = (code **)0x10f7a68d;
  FUN_10f56fa0();
  ppcStack_94c = (code **)0x11cfd1e8;
  puStack_950 = (undefined4 *)0x10f7a69a;
  FUN_10f56fa0();
  puStack_950 = (undefined4 *)0x10f7a6a5;
  FUN_10f573e0();
  pcStack_958 = "PLLocomotion";
  pcStack_95c = (char *)0x10f7a6b6;
  FUN_10f56fa0();
  pcStack_95c = "HolsteredIdle";
  puStack_960 = (undefined1 *)0x10f7a6c3;
  FUN_10f56fa0();
  puStack_960 = (undefined1 *)0x10f7a6ce;
  FUN_10f573e0();
  puStack_960 = local_4a4;
  pcStack_968 = "NORMAL_TAKE_DRUG";
  uStack_96c = 0x10f7a6e2;
  FUN_10f56fa0();
  uStack_96c = 0x10f7a6e9;
  FUN_10f593b0();
  uStack_96c = 0x10f7a6f4;
  FUN_10f574b0();
  pcStack_974 = "PLBaseSignal";
  pcStack_978 = (char *)0x10f7a705;
  FUN_10f56fa0();
  pcStack_978 = "EatMeat";
  uStack_97c = 0x10f7a712;
  FUN_10f56fa0();
  uStack_97c = 0x10f7a71d;
  FUN_10f573e0();
  pcStack_984 = "PLLocomotion";
  pcStack_988 = (char *)0x10f7a72e;
  FUN_10f56fa0();
  pcStack_988 = "HolsteredIdle";
  puStack_98c = (undefined1 *)0x10f7a73b;
  FUN_10f56fa0();
  puStack_98c = (undefined1 *)0x10f7a746;
  FUN_10f573e0();
  puStack_98c = local_434;
  pcStack_994 = "NORMAL_TAKE_MEAT";
  uStack_998 = 0x10f7a75a;
  FUN_10f56fa0();
  uStack_998 = 0x10f7a761;
  FUN_10f593b0();
  uStack_998 = 0x10f7a76c;
  FUN_10f574b0();
  pcStack_9a0 = "PLBaseSignal";
  pcStack_9a4 = (char *)0x10f7a77d;
  FUN_10f56fa0();
  pcStack_9a4 = "EatMeat";
  uStack_9a8 = 0x10f7a78a;
  FUN_10f56fa0();
  uStack_9a8 = 0x10f7a795;
  FUN_10f573e0();
  pcStack_9b0 = "PLLocomotion";
  pcStack_9b4 = (char *)0x10f7a7a6;
  FUN_10f56fa0();
  pcStack_9b4 = "HolsteredIdle";
  puStack_9b8 = (undefined1 *)0x10f7a7b3;
  FUN_10f56fa0();
  puStack_9b8 = (undefined1 *)0x10f7a7be;
  FUN_10f573e0();
  puStack_9b8 = local_3c4;
  pcStack_9c0 = "NORMAL_TAKE_DRAGON_MEAT";
  uStack_9c4 = 0x10f7a7d2;
  FUN_10f56fa0();
  uStack_9c4 = 0x10f7a7d9;
  FUN_10f593b0();
  uStack_9c4 = 0x10f7a7e4;
  FUN_10f574b0();
  pcStack_9cc = "PLBaseSignal";
  pcStack_9d0 = (char *)0x10f7a7f5;
  FUN_10f56fa0();
  pcStack_9d0 = "EatDrug";
  uStack_9d4 = 0x10f7a802;
  FUN_10f56fa0();
  uStack_9d4 = 0x10f7a80d;
  FUN_10f573e0();
  pcStack_9dc = "PLLocomotion";
  pcStack_9e0 = (char *)0x10f7a81e;
  FUN_10f56fa0();
  pcStack_9e0 = "HolsteredIdle";
  puStack_9e4 = (undefined1 *)0x10f7a82b;
  FUN_10f56fa0();
  puStack_9e4 = (undefined1 *)0x10f7a836;
  FUN_10f573e0();
  puStack_9e4 = local_354;
  pcStack_9ec = "NORMAL_TAKE_CHOCOLATE";
  uStack_9f0 = 0x10f7a84a;
  FUN_10f56fa0();
  uStack_9f0 = 0x10f7a851;
  FUN_10f593b0();
  uStack_9f0 = 0x10f7a85c;
  FUN_10f574b0();
  pcStack_9f8 = "PLBaseSignal";
  pcStack_9fc = (char *)0x10f7a86d;
  FUN_10f56fa0();
  pcStack_9fc = "EatCokeMeat";
  uStack_a00 = 0x10f7a87a;
  FUN_10f56fa0();
  uStack_a00 = 0x10f7a885;
  FUN_10f573e0();
  pcStack_a08 = "PLLocomotion";
  pcStack_a0c = (char *)0x10f7a896;
  FUN_10f56fa0();
  pcStack_a0c = "HolsteredIdle";
  puStack_a10 = (undefined1 *)0x10f7a8a3;
  FUN_10f56fa0();
  puStack_a10 = (undefined1 *)0x10f7a8ae;
  FUN_10f573e0();
  puStack_a10 = local_2e4;
  pcStack_a18 = "NORMAL_TAKE_COKE_MEAT";
  uStack_a1c = 0x10f7a8c2;
  FUN_10f56fa0();
  uStack_a1c = 0x10f7a8c9;
  FUN_10f593b0();
  uStack_a1c = 0x10f7a8d4;
  FUN_10f574b0();
  pcStack_a24 = "PLBaseSignal";
  pcStack_a28 = (char *)0x10f7a8e5;
  FUN_10f56fa0();
  pcStack_a28 = "StartFluteType1";
  uStack_a2c = 0x10f7a8f2;
  FUN_10f56fa0();
  uStack_a2c = 0x10f7a8fd;
  FUN_10f573e0();
  pcStack_a34 = "PLLocomotion";
  pcStack_a38 = (char *)0x10f7a90e;
  FUN_10f56fa0();
  pcStack_a38 = "HolsteredIdle";
  puStack_a3c = (undefined1 *)0x10f7a91b;
  FUN_10f56fa0();
  puStack_a3c = (undefined1 *)0x10f7a926;
  FUN_10f573e0();
  puStack_a3c = local_2ac;
  pcStack_a44 = "FLUTE_TYPE_1";
  uStack_a48 = 0x10f7a93a;
  FUN_10f56fa0();
  uStack_a48 = 0x10f7a941;
  FUN_10f593b0();
  uStack_a48 = 0x10f7a94c;
  FUN_10f574b0();
  pcStack_a50 = "PLBaseSignal";
  pcStack_a54 = (char *)0x10f7a95d;
  FUN_10f56fa0();
  pcStack_a54 = "StartFluteType2";
  uStack_a58 = 0x10f7a96a;
  FUN_10f56fa0();
  uStack_a58 = 0x10f7a975;
  FUN_10f573e0();
  pcStack_a60 = "PLLocomotion";
  pcStack_a64 = (char *)0x10f7a986;
  FUN_10f56fa0();
  pcStack_a64 = "HolsteredIdle";
  puStack_a68 = (undefined1 *)0x10f7a993;
  FUN_10f56fa0();
  puStack_a68 = (undefined1 *)0x10f7a99e;
  FUN_10f573e0();
  puStack_a68 = local_5bc;
  pcStack_a70 = "FLUTE_TYPE_2";
  uStack_a74 = 0x10f7a9b2;
  FUN_10f56fa0();
  uStack_a74 = 0x10f7a9b9;
  FUN_10f593b0();
  uStack_a74 = 0x10f7a9c4;
  FUN_10f574b0();
  pcStack_a7c = "PLBaseSignal";
  pcStack_a80 = (char *)0x10f7a9d5;
  FUN_10f56fa0();
  pcStack_a80 = "SetOnGround";
  uStack_a84 = 0x10f7a9e2;
  FUN_10f56fa0();
  uStack_a84 = 0x10f7a9ed;
  FUN_10f573e0();
  pcStack_a8c = "PLLocomotion";
  pcStack_a90 = (char *)0x10f7a9fe;
  FUN_10f56fa0();
  pcStack_a90 = "HolsteredIdle";
  puStack_a94 = (undefined1 *)0x10f7aa0b;
  FUN_10f56fa0();
  puStack_a94 = (undefined1 *)0x10f7aa16;
  FUN_10f573e0();
  puStack_a94 = local_62c;
  pcStack_a9c = "NORMAL_SET_ON_GROUND";
  uStack_aa0 = 0x10f7aa2a;
  FUN_10f56fa0();
  uStack_aa0 = 0x10f7aa31;
  FUN_10f593b0();
  uStack_aa0 = 0x10f7aa3c;
  FUN_10f574b0();
  pcStack_aa8 = "PLBaseSignal";
  pcStack_aac = (char *)0x10f7aa4d;
  FUN_10f56fa0();
  pcStack_aac = "SetLargeBucket";
  uStack_ab0 = 0x10f7aa5a;
  FUN_10f56fa0();
  uStack_ab0 = 0x10f7aa65;
  FUN_10f573e0();
  pcStack_ab8 = "PLLocomotion";
  pcStack_abc = (char *)0x10f7aa76;
  FUN_10f56fa0();
  pcStack_abc = "HolsteredIdle";
  puStack_ac0 = (undefined1 *)0x10f7aa83;
  FUN_10f56fa0();
  puStack_ac0 = (undefined1 *)0x10f7aa8e;
  FUN_10f573e0();
  puStack_ac0 = local_54c;
  pcStack_ac8 = "NORMAL_SET_LARGE_BUCKET";
  uStack_acc = 0x10f7aaa2;
  FUN_10f56fa0();
  uStack_acc = 0x10f7aaa9;
  FUN_10f593b0();
  uStack_acc = 0x10f7aab4;
  FUN_10f574b0();
  pcStack_ad4 = "PLBaseSignal";
  pcStack_ad8 = "h";
  FUN_10f56fa0();
  pcStack_ad8 = "SetSmallBucket";
  uStack_adc = 0x10f7aad2;
  FUN_10f56fa0();
  uStack_adc = 0x10f7aadd;
  FUN_10f573e0();
  pcStack_ae4 = "PLLocomotion";
  pcStack_ae8 = (char *)0x10f7aaee;
  FUN_10f56fa0();
  pcStack_ae8 = "HolsteredIdle";
  puStack_aec = (undefined1 *)0x10f7aafb;
  FUN_10f56fa0();
  puStack_aec = (undefined1 *)0x10f7ab06;
  FUN_10f573e0();
  puStack_aec = local_6d4;
  pcStack_af4 = "NORMAL_SET_SMALL_BUCKET";
  uStack_af8 = 0x10f7ab1a;
  FUN_10f56fa0();
  uStack_af8 = 0x10f7ab21;
  FUN_10f593b0();
  uStack_af8 = 0x10f7ab2c;
  FUN_10f574b0();
  pcStack_b00 = "PLBaseSignal";
  pcStack_b04 = (char *)0x10f7ab3d;
  FUN_10f56fa0();
  pcStack_b04 = "Throw";
  uStack_b08 = 0x10f7ab4a;
  FUN_10f56fa0();
  uStack_b08 = 0x10f7ab55;
  FUN_10f573e0();
  pcStack_b10 = "PLLocomotion";
  pcStack_b14 = (char *)0x10f7ab66;
  FUN_10f56fa0();
  pcStack_b14 = "HolsteredIdle";
  puStack_b18 = (undefined1 *)0x10f7ab73;
  FUN_10f56fa0();
  puStack_b18 = (undefined1 *)0x10f7ab7e;
  FUN_10f573e0();
  puStack_b18 = local_4dc;
  pcStack_b20 = "NORMAL_THROW";
  uStack_b24 = 0x10f7ab92;
  FUN_10f56fa0();
  uStack_b24 = 0x10f7ab99;
  FUN_10f593b0();
  uStack_b24 = 0x10f7aba4;
  FUN_10f574b0();
  pcStack_b2c = "PLBaseSignal";
  pcStack_b30 = (char *)0x10f7abb5;
  FUN_10f56fa0();
  pcStack_b30 = "Smash";
  uStack_b34 = 0x10f7abc2;
  FUN_10f56fa0();
  uStack_b34 = 0x10f7abcd;
  FUN_10f573e0();
  pcStack_b3c = "PLLocomotion";
  pcStack_b40 = (char *)0x10f7abde;
  FUN_10f56fa0();
  pcStack_b40 = "HolsteredIdle";
  puStack_b44 = (undefined1 *)0x10f7abeb;
  FUN_10f56fa0();
  puStack_b44 = (undefined1 *)0x10f7abf6;
  FUN_10f573e0();
  puStack_b44 = local_274;
  pcStack_b4c = "NORMAL_SMASH";
  uStack_b50 = 0x10f7ac0a;
  FUN_10f56fa0();
  uStack_b50 = 0x10f7ac11;
  FUN_10f593b0();
  uStack_b50 = 0x10f7ac1c;
  FUN_10f574b0();
  pcStack_b58 = "PLBaseSignal";
  pcStack_b5c = (char *)0x10f7ac2d;
  FUN_10f56fa0();
  pcStack_b5c = "SharpenWeapon";
  uStack_b60 = 0x10f7ac3a;
  FUN_10f56fa0();
  uStack_b60 = 0x10f7ac45;
  FUN_10f573e0();
  pcStack_b68 = "PLLocomotion";
  pcStack_b6c = (char *)0x10f7ac56;
  FUN_10f56fa0();
  pcStack_b6c = "HolsteredIdle";
  puStack_b70 = (undefined1 *)0x10f7ac63;
  FUN_10f56fa0();
  puStack_b70 = (undefined1 *)0x10f7ac6e;
  FUN_10f573e0();
  puStack_b70 = local_46c;
  pcStack_b78 = "NORMAL_SHARPENWEAPON";
  uStack_b7c = 0x10f7ac82;
  FUN_10f56fa0();
  uStack_b7c = 0x10f7ac89;
  FUN_10f593b0();
  uStack_b7c = 0x10f7ac94;
  FUN_10f574b0();
  pcStack_b84 = "PLBaseSignal";
  pcStack_b88 = (char *)0x10f7aca5;
  FUN_10f56fa0();
  pcStack_b88 = "CollectPlant";
  uStack_b8c = 0x10f7acb2;
  FUN_10f56fa0();
  uStack_b8c = 0x10f7acbd;
  FUN_10f573e0();
  pcStack_b94 = "PLLocomotion";
  pcStack_b98 = (char *)0x10f7acce;
  FUN_10f56fa0();
  pcStack_b98 = "HolsteredIdle";
  puStack_b9c = (undefined1 *)0x10f7acdb;
  FUN_10f56fa0();
  puStack_b9c = (undefined1 *)0x10f7ace6;
  FUN_10f573e0();
  puStack_b9c = local_5f4;
  pcStack_ba4 = "NORMAL_COLLECT";
  uStack_ba8 = 0x10f7acfa;
  FUN_10f56fa0();
  uStack_ba8 = 0x10f7ad01;
  FUN_10f593b0();
  uStack_ba8 = 0x10f7ad0c;
  FUN_10f574b0();
  pcStack_bb0 = "PLBaseSignal";
  pcStack_bb4 = (char *)0x10f7ad1d;
  FUN_10f56fa0();
  pcStack_bb4 = "Strip";
  uStack_bb8 = 0x10f7ad2a;
  FUN_10f56fa0();
  uStack_bb8 = 0x10f7ad35;
  FUN_10f573e0();
  pcStack_bc0 = "PLLocomotion";
  pcStack_bc4 = (char *)0x10f7ad46;
  FUN_10f56fa0();
  pcStack_bc4 = "HolsteredIdle";
  puStack_bc8 = (undefined1 *)0x10f7ad53;
  FUN_10f56fa0();
  puStack_bc8 = (undefined1 *)0x10f7ad5e;
  FUN_10f573e0();
  puStack_bc8 = local_3fc;
  pcStack_bd0 = "NORMAL_STRIP";
  uStack_bd4 = 0x10f7ad72;
  FUN_10f56fa0();
  uStack_bd4 = 0x10f7ad79;
  FUN_10f593b0();
  uStack_bd4 = 0x10f7ad84;
  FUN_10f574b0();
  pcStack_bdc = "PLBaseSignal";
  pcStack_be0 = (char *)0x10f7ad95;
  FUN_10f56fa0();
  pcStack_be0 = "Catch";
  uStack_be4 = 0x10f7ada2;
  FUN_10f56fa0();
  uStack_be4 = 0x10f7adad;
  FUN_10f573e0();
  pcStack_bec = "PLLocomotion";
  pcStack_bf0 = (char *)0x10f7adbe;
  FUN_10f56fa0();
  pcStack_bf0 = "HolsteredIdle";
  puStack_bf4 = (undefined1 *)0x10f7adcb;
  FUN_10f56fa0();
  puStack_bf4 = (undefined1 *)0x10f7add6;
  FUN_10f573e0();
  puStack_bf4 = local_584;
  pcStack_bfc = "NORMAL_CATCH";
  uStack_c00 = 0x10f7adea;
  FUN_10f56fa0();
  uStack_c00 = 0x10f7adf1;
  FUN_10f593b0();
  uStack_c00 = 0x10f7adfc;
  FUN_10f574b0();
  pcStack_c08 = "PLBaseSignal";
  puStack_c0c = (undefined *)0x10f7ae0d;
  FUN_10f56fa0();
  puStack_c0c = &DAT_11cfd3a0;
  uStack_c10 = 0x10f7ae1a;
  FUN_10f56fa0();
  uStack_c10 = 0x10f7ae25;
  FUN_10f573e0();
  pcStack_c18 = "PLLocomotion";
  pcStack_c1c = (char *)0x10f7ae36;
  FUN_10f56fa0();
  pcStack_c1c = "HolsteredIdle";
  puStack_c20 = (undefined1 *)0x10f7ae43;
  FUN_10f56fa0();
  puStack_c20 = (undefined1 *)0x10f7ae4e;
  FUN_10f573e0();
  puStack_c20 = local_38c;
  pcStack_c28 = "NORMAL_MINE";
  uStack_c2c = 0x10f7ae62;
  FUN_10f56fa0();
  uStack_c2c = 0x10f7ae69;
  FUN_10f593b0();
  uStack_c2c = 0x10f7ae74;
  FUN_10f574b0();
  pcStack_c34 = "PLLocomotion";
  pcStack_c38 = (char *)0x10f7ae85;
  FUN_10f56fa0();
  pcStack_c38 = "CarryHugeItemIdle";
  puStack_c3c = (undefined1 *)0x10f7ae92;
  FUN_10f56fa0();
  puStack_c3c = (undefined1 *)0x10f7ae9d;
  FUN_10f573e0();
  puStack_c3c = local_894;
  pcStack_c44 = "NORMAL_CARRY_EGG_IDLE";
  uStack_c48 = 0x10f7aeb1;
  FUN_10f56fa0();
  uStack_c48 = 0x10f7aeb8;
  FUN_10f593b0();
  uStack_c48 = 0x10f7aec3;
  FUN_10f574b0();
  pcStack_c50 = "PLLocomotion";
  pcStack_c54 = (char *)0x10f7aed4;
  FUN_10f56fa0();
  pcStack_c54 = "CliffFalling";
  puStack_c58 = (undefined1 *)0x10f7aee1;
  FUN_10f56fa0();
  puStack_c58 = (undefined1 *)0x10f7aeec;
  FUN_10f573e0();
  puStack_c58 = local_824;
  pcStack_c60 = "NORMAL_CLIFF_JUMP";
  uStack_c64 = 0x10f7af00;
  FUN_10f56fa0();
  uStack_c64 = 0x10f7af07;
  FUN_10f593b0();
  uStack_c64 = 0x10f7af12;
  FUN_10f574b0();
  pcStack_c6c = "PLLocomotion";
  pcStack_c70 = (char *)0x10f7af23;
  FUN_10f56fa0();
  pcStack_c70 = "StartFall";
  puStack_c74 = (undefined1 *)0x10f7af30;
  FUN_10f56fa0();
  puStack_c74 = (undefined1 *)0x10f7af3b;
  FUN_10f573e0();
  puStack_c74 = local_7b4;
  pcStack_c7c = "NORMAL_FALL";
  uStack_c80 = 0x10f7af4f;
  FUN_10f56fa0();
  uStack_c80 = 0x10f7af56;
  FUN_10f593b0();
  uStack_c80 = 0x10f7af61;
  FUN_10f574b0();
  pcStack_c88 = "PLLocomotion";
  pcStack_c8c = (char *)0x10f7af72;
  FUN_10f56fa0();
  pcStack_c8c = "CliffFalling_Parapet";
  puStack_c90 = (undefined1 *)0x10f7af7f;
  FUN_10f56fa0();
  puStack_c90 = (undefined1 *)0x10f7af8a;
  FUN_10f573e0();
  puStack_c90 = local_744;
  pcStack_c98 = "PARAPET_CLIFF_JUMP";
  uStack_c9c = 0x10f7af9e;
  FUN_10f56fa0();
  uStack_c9c = 0x10f7afa5;
  FUN_10f593b0();
  uStack_c9c = 0x10f7afb0;
  FUN_10f574b0();
  pcStack_ca4 = "PLLocomotion";
  pcStack_ca8 = (char *)0x10f7afc1;
  FUN_10f56fa0();
  pcStack_ca8 = "StartFall_Parapet";
  puStack_cac = (undefined1 *)0x10f7afce;
  FUN_10f56fa0();
  puStack_cac = (undefined1 *)0x10f7afd9;
  FUN_10f573e0();
  puStack_cac = local_8cc;
  pcStack_cb4 = "PARAPET_FALL";
  uStack_cb8 = 0x10f7afed;
  FUN_10f56fa0();
  uStack_cb8 = 0x10f7aff4;
  FUN_10f593b0();
  uStack_cb8 = 0x10f7afff;
  FUN_10f574b0();
  pcStack_cc0 = "PLBaseSignal";
  pcStack_cc4 = (char *)0x10f7b010;
  FUN_10f56fa0();
  pcStack_cc4 = "FishBegin";
  uStack_cc8 = 0x10f7b01d;
  FUN_10f56fa0();
  uStack_cc8 = 0x10f7b028;
  FUN_10f573e0();
  pcStack_cd0 = "PLLocomotion";
  pcStack_cd4 = (char *)0x10f7b039;
  FUN_10f56fa0();
  pcStack_cd4 = "HolsteredIdle";
  puStack_cd8 = (undefined1 *)0x10f7b046;
  FUN_10f56fa0();
  puStack_cd8 = (undefined1 *)0x10f7b051;
  FUN_10f573e0();
  puStack_cd8 = local_514;
  pcStack_ce0 = "FISH_BEGIN";
  uStack_ce4 = 0x10f7b065;
  FUN_10f56fa0();
  uStack_ce4 = 0x10f7b06c;
  FUN_10f593b0();
  uStack_ce4 = 0x10f7b077;
  FUN_10f574b0();
  pcStack_cec = "PLBaseSignal";
  pcStack_cf0 = (char *)0x10f7b088;
  FUN_10f56fa0();
  pcStack_cf0 = "NetFishing";
  uStack_cf4 = 0x10f7b095;
  FUN_10f56fa0();
  uStack_cf4 = 0x10f7b0a0;
  FUN_10f573e0();
  pcStack_cfc = "PLLocomotion";
  pcStack_d00 = (char *)0x10f7b0b1;
  FUN_10f56fa0();
  pcStack_d00 = "HolsteredIdle";
  puStack_d04 = (undefined1 *)0x10f7b0be;
  FUN_10f56fa0();
  puStack_d04 = (undefined1 *)0x10f7b0c9;
  FUN_10f573e0();
  puStack_d04 = local_31c;
  pcStack_d0c = "NET_FISHING";
  uStack_d10 = 0x10f7b0dd;
  FUN_10f56fa0();
  uStack_d10 = 0x10f7b0e4;
  FUN_10f593b0();
  uStack_d10 = 0x10f7b0ef;
  FUN_10f574b0();
  pcStack_d18 = "PLBaseAction";
  pcStack_d1c = "h";
  FUN_10f56fa0();
  pcStack_d1c = "VehicleStay";
  puStack_d20 = (undefined1 *)0x10f7b10d;
  FUN_10f56fa0();
  puStack_d20 = (undefined1 *)0x10f7b118;
  FUN_10f573e0();
  puStack_d20 = local_7ec;
  pcStack_d28 = "VEHICLE_STATE";
  uStack_d2c = 0x10f7b12c;
  FUN_10f56fa0();
  uStack_d2c = 0x10f7b133;
  FUN_10f593b0();
  uStack_d2c = 0x10f7b13e;
  FUN_10f574b0();
  pcStack_d34 = "PLBaseAction";
  pcStack_d38 = (char *)0x10f7b14f;
  FUN_10f56fa0();
  pcStack_d38 = "SpeedBoatStay";
  puStack_d3c = (undefined1 *)0x10f7b15c;
  FUN_10f56fa0();
  puStack_d3c = (undefined1 *)0x10f7b167;
  FUN_10f573e0();
  puStack_d3c = local_85c;
  pcStack_d44 = "VEHICLE_SPEEDBOAT_NORMAL";
  uStack_d48 = 0x10f7b17b;
  FUN_10f56fa0();
  uStack_d48 = 0x10f7b182;
  FUN_10f593b0();
  uStack_d48 = 0x10f7b18d;
  FUN_10f574b0();
  pcStack_d50 = "PLBaseSignal";
  pcStack_d54 = (char *)0x10f7b19e;
  FUN_10f56fa0();
  pcStack_d54 = "ClimbUp";
  uStack_d58 = 0x10f7b1ab;
  FUN_10f56fa0();
  uStack_d58 = 0x10f7b1b6;
  FUN_10f573e0();
  pcStack_d60 = "PLLocomotion";
  pcStack_d64 = (char *)0x10f7b1c7;
  FUN_10f56fa0();
  pcStack_d64 = "ClimbLadder";
  puStack_d68 = (undefined1 *)0x10f7b1d4;
  FUN_10f56fa0();
  puStack_d68 = (undefined1 *)0x10f7b1df;
  FUN_10f573e0();
  puStack_d68 = local_69c;
  pcStack_d70 = "NORMAL_CLIMBLADDER";
  uStack_d74 = 0x10f7b1f3;
  FUN_10f56fa0();
  uStack_d74 = 0x10f7b1fa;
  FUN_10f593b0();
  uStack_d74 = 0x10f7b205;
  FUN_10f574b0();
  pcStack_d7c = "PLLocomotion";
  pcStack_d80 = (char *)0x10f7b216;
  FUN_10f56fa0();
  pcStack_d80 = "StartRun";
  puStack_d84 = (undefined1 *)0x10f7b223;
  FUN_10f56fa0();
  puStack_d84 = (undefined1 *)0x10f7b22e;
  FUN_10f573e0();
  puStack_d84 = local_77c;
  pcStack_d8c = "NORMAL_RUN";
  uStack_d90 = 0x10f7b242;
  FUN_10f56fa0();
  uStack_d90 = 0x10f7b249;
  FUN_10f593b0();
  uStack_d90 = 0x10f7b254;
  FUN_10f574b0();
  pcStack_d98 = "PLLocomotion";
  pcStack_d9c = (char *)0x10f7b265;
  FUN_10f56fa0();
  pcStack_d9c = "FlyAttack";
  uStack_da0 = 0x10f7b272;
  FUN_10f56fa0();
  uStack_da0 = 0x10f7b27d;
  FUN_10f573e0();
  pcStack_da8 = "PLCombat";
  pcStack_dac = (char *)0x10f7b28e;
  FUN_10f56fa0();
  pcStack_dac = "FlyAttackStart";
  puStack_db0 = (undefined1 *)0x10f7b29b;
  FUN_10f56fa0();
  puStack_db0 = (undefined1 *)0x10f7b2a6;
  FUN_10f573e0();
  puStack_db0 = local_664;
  pcStack_db8 = "ATTACK_FLY";
  uStack_dbc = 0x10f7b2ba;
  FUN_10f56fa0();
  uStack_dbc = 0x10f7b2c1;
  FUN_10f593b0();
  uStack_dbc = 0x10f7b2cc;
  FUN_10f574b0();
  pcStack_dc4 = "PLLocomotion";
  puStack_dc8 = (undefined *)0x10f7b2dd;
  FUN_10f56fa0();
  puStack_dc8 = &DAT_11ce0e14;
  puStack_dcc = (undefined1 *)0x10f7b2ea;
  FUN_10f56fa0();
  puStack_dcc = (undefined1 *)0x10f7b2f5;
  FUN_10f573e0();
  puStack_dcc = local_70c;
  pcStack_dd4 = "NORMAL_GO_TO_CUISINE";
  puStack_dd8 = (undefined1 *)0x10f7b309;
  FUN_10f56fa0();
  puStack_dd8 = (undefined1 *)0x10f7b310;
  FUN_10f593b0();
  puStack_dd8 = (undefined1 *)0x10f7b31b;
  FUN_10f574b0();
  puStack_dd8 = local_904;
  pcStack_de0 = "NORMAL_GOTO_LOWCLIMB";
  uStack_de4 = 0x10f7b32f;
  FUN_10f56fa0();
  uStack_de4 = 0x10f7b336;
  FUN_10f593b0();
  uStack_de4 = 0x10f7b33e;
  FUN_10f574b0();
  pcStack_dec = "PLLocomotion";
  puStack_df0 = (undefined *)0x10f7b34f;
  FUN_10f56fa0();
  puStack_df0 = &DAT_11ce0e14;
  puStack_df4 = (undefined1 *)0x10f7b35c;
  FUN_10f56fa0();
  puStack_df4 = (undefined1 *)0x10f7b364;
  FUN_10f573e0();
  puStack_df4 = local_44;
  pcStack_dfc = "NORMAL_GOTO_MEDCLIMB";
  uStack_e00 = 0x10f7b375;
  FUN_10f56fa0();
  uStack_e00 = 0x10f7b37c;
  FUN_10f593b0();
  uStack_e00 = 0x10f7b387;
  FUN_10f574b0();
  pcStack_e08 = "PLBaseSignal";
  pcStack_e0c = (char *)0x10f7b398;
  FUN_10f56fa0();
  pcStack_e0c = "FindEgg";
  piStack_e10 = (int *)0x10f7b3a5;
  FUN_10f56fa0();
  piStack_e10 = (int *)0x10f7b3b0;
  FUN_10f573e0();
  piStack_e10 = local_23c;
  pcStack_e18 = "NORMAL_FIND_EGG";
  uStack_e1c = 0x10f7b3c4;
  FUN_10f56fa0();
  uStack_e1c = 0x10f7b3cb;
  FUN_10f593b0();
  uStack_e1c = 0x10f7b3d6;
  FUN_10f574b0();
  pcStack_e24 = "PLBaseSignal";
  pcStack_e28 = (char *)0x10f7b3e7;
  FUN_10f56fa0();
  pcStack_e28 = "BakeStart";
  piStack_e2c = (int *)0x10f7b3f4;
  FUN_10f56fa0();
  piStack_e2c = (int *)0x10f7b3ff;
  FUN_10f573e0();
  piStack_e2c = local_1cc;
  pcStack_e34 = "BAKE_START";
  uStack_e38 = 0x10f7b413;
  FUN_10f56fa0();
  uStack_e38 = 0x10f7b41a;
  FUN_10f593b0();
  uStack_e38 = 0x10f7b425;
  FUN_10f574b0();
  pcStack_e40 = "PLBaseSignal";
  pcStack_e44 = (char *)0x10f7b436;
  FUN_10f56fa0();
  pcStack_e44 = "Glider_JumpOut";
  piStack_e48 = (int *)0x10f7b443;
  FUN_10f56fa0();
  piStack_e48 = (int *)0x10f7b44e;
  FUN_10f573e0();
  piStack_e48 = local_15c;
  pcStack_e50 = "NORMAL_FLY";
  uStack_e54 = 0x10f7b462;
  FUN_10f56fa0();
  uStack_e54 = 0x10f7b469;
  FUN_10f593b0();
  uStack_e54 = 0x10f7b474;
  FUN_10f574b0();
  pcStack_e5c = "PLLocomotion";
  pcStack_e60 = (char *)0x10f7b485;
  FUN_10f56fa0();
  pcStack_e60 = "HolsteredIdleCreate";
  piStack_e64 = (int *)0x10f7b492;
  FUN_10f56fa0();
  piStack_e64 = (int *)0x10f7b49d;
  FUN_10f573e0();
  piStack_e64 = local_ec;
  pcStack_e6c = "NORMAL_IDLE_VIEW";
  uStack_e70 = 0x10f7b4b1;
  FUN_10f56fa0();
  uStack_e70 = 0x10f7b4b8;
  FUN_10f593b0();
  uStack_e70 = 0x10f7b4c3;
  FUN_10f574b0();
  pcStack_e78 = "PLLocomotion";
  pcStack_e7c = (char *)0x10f7b4d4;
  FUN_10f56fa0();
  pcStack_e7c = "HolsteredIdleSelect";
  piStack_e80 = (int *)0x10f7b4e1;
  FUN_10f56fa0();
  piStack_e80 = (int *)0x10f7b4ec;
  FUN_10f573e0();
  piStack_e80 = local_b4;
  pcStack_e88 = "NORMAL_IDLE_SELECT";
  uStack_e8c = 0x10f7b500;
  FUN_10f56fa0();
  uStack_e8c = 0x10f7b507;
  FUN_10f593b0();
  uStack_e8c = 0x10f7b512;
  FUN_10f574b0();
  pcStack_e94 = "PLBaseSignal";
  pcStack_e98 = (char *)0x10f7b523;
  FUN_10f56fa0();
  pcStack_e98 = "HolsteredIdleBreakHungry";
  piStack_e9c = (int *)0x10f7b530;
  FUN_10f56fa0();
  piStack_e9c = (int *)0x10f7b53b;
  FUN_10f573e0();
  piStack_e9c = local_204;
  uStack_ea0 = 4;
  uStack_ea4 = 0;
  uStack_ea8 = 0x10f7b54d;
  FUN_10f5a480();
  uStack_ea8 = 0x10f7b555;
  FUN_10f574b0();
  pcStack_eb0 = "PLBaseSignal";
  pcStack_eb4 = (char *)0x10f7b566;
  FUN_10f56fa0();
  pcStack_eb4 = "HolsteredIdleBreakHot";
  piStack_eb8 = (int *)0x10f7b573;
  FUN_10f56fa0();
  piStack_eb8 = (int *)0x10f7b57b;
  FUN_10f573e0();
  piStack_eb8 = local_7c;
  uStack_ebc = 4;
  uStack_ec0 = 1;
  uStack_ec4 = 0x10f7b58a;
  FUN_10f5a480();
  uStack_ec4 = 0x10f7b595;
  FUN_10f574b0();
  pcStack_ecc = "PLBaseSignal";
  pcStack_ed0 = (char *)0x10f7b5a6;
  FUN_10f56fa0();
  pcStack_ed0 = "HolsteredIdleBreakCold";
  piStack_ed4 = (int *)0x10f7b5b3;
  FUN_10f56fa0();
  piStack_ed4 = (int *)0x10f7b5be;
  FUN_10f573e0();
  piStack_ed4 = local_194;
  uStack_ed8 = 4;
  uStack_edc = 2;
  uStack_ee0 = 0x10f7b5d0;
  FUN_10f5a480();
  uStack_ee0 = 0x10f7b5db;
  FUN_10f574b0();
  pcStack_ee8 = "PLBaseSignal";
  pcStack_eec = (char *)0x10f7b5ec;
  FUN_10f56fa0();
  pcStack_eec = "HolsteredIdleBreak";
  piStack_ef0 = (int *)0x10f7b5f9;
  FUN_10f56fa0();
  piStack_ef0 = (int *)0x10f7b604;
  FUN_10f573e0();
  piStack_ef0 = local_124;
  uStack_ef4 = 4;
  uStack_ef8 = 3;
  iStack_efc = 0x10f7b616;
  FUN_10f5a480();
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (local_f8 != 0) {
    iStack_efc = local_f8;
    uStack_f00 = 0x10f7b62a;
    FUN_10c3d5d0();
  }
  if (local_104 != 0) {
    iStack_efc = local_104;
    uStack_f00 = 0x10f7b63d;
    FUN_10c3d5d0();
  }
  if (local_124[0] != 0) {
    iStack_efc = local_124[0];
    uStack_f00 = 0x10f7b650;
    FUN_10c3d5d0();
  }
  if (local_168 != 0) {
    iStack_efc = local_168;
    uStack_f00 = 0x10f7b663;
    FUN_10c3d5d0();
  }
  if (local_174 != 0) {
    iStack_efc = local_174;
    uStack_f00 = 0x10f7b676;
    FUN_10c3d5d0();
  }
  if (local_194[0] != 0) {
    iStack_efc = local_194[0];
    uStack_f00 = 0x10f7b689;
    FUN_10c3d5d0();
  }
  if (local_50 != 0) {
    iStack_efc = local_50;
    uStack_f00 = 0x10f7b699;
    FUN_10c3d5d0();
  }
  if (local_5c != 0) {
    iStack_efc = local_5c;
    uStack_f00 = 0x10f7b6a9;
    FUN_10c3d5d0();
  }
  if (local_7c[0] != 0) {
    iStack_efc = local_7c[0];
    uStack_f00 = 0x10f7b6b9;
    FUN_10c3d5d0();
  }
  if (local_1d8 != 0) {
    iStack_efc = local_1d8;
    uStack_f00 = 0x10f7b6cc;
    FUN_10c3d5d0();
  }
  if (local_1e4 != 0) {
    iStack_efc = local_1e4;
    uStack_f00 = 0x10f7b6df;
    FUN_10c3d5d0();
  }
  if (local_204[0] != 0) {
    iStack_efc = local_204[0];
    uStack_f00 = 0x10f7b6f2;
    FUN_10c3d5d0();
  }
  if (local_88 != 0) {
    iStack_efc = local_88;
    uStack_f00 = 0x10f7b705;
    FUN_10c3d5d0();
  }
  if (local_94 != 0) {
    iStack_efc = local_94;
    uStack_f00 = 0x10f7b718;
    FUN_10c3d5d0();
  }
  if (local_b4[0] != 0) {
    iStack_efc = local_b4[0];
    uStack_f00 = 0x10f7b72b;
    FUN_10c3d5d0();
  }
  if (local_c0 != 0) {
    iStack_efc = local_c0;
    uStack_f00 = 0x10f7b73e;
    FUN_10c3d5d0();
  }
  if (local_cc != 0) {
    iStack_efc = local_cc;
    uStack_f00 = 0x10f7b751;
    FUN_10c3d5d0();
  }
  if (local_ec[0] != 0) {
    iStack_efc = local_ec[0];
    uStack_f00 = 0x10f7b764;
    FUN_10c3d5d0();
  }
  if (local_130 != 0) {
    iStack_efc = local_130;
    uStack_f00 = 0x10f7b777;
    FUN_10c3d5d0();
  }
  if (local_13c != 0) {
    iStack_efc = local_13c;
    uStack_f00 = 0x10f7b78a;
    FUN_10c3d5d0();
  }
  if (local_15c[0] != 0) {
    iStack_efc = local_15c[0];
    uStack_f00 = 0x10f7b79d;
    FUN_10c3d5d0();
  }
  if (local_1a0 != 0) {
    iStack_efc = local_1a0;
    uStack_f00 = 0x10f7b7b0;
    FUN_10c3d5d0();
  }
  if (local_1ac != 0) {
    iStack_efc = local_1ac;
    uStack_f00 = 0x10f7b7c3;
    FUN_10c3d5d0();
  }
  if (local_1cc[0] != 0) {
    iStack_efc = local_1cc[0];
    uStack_f00 = 0x10f7b7d6;
    FUN_10c3d5d0();
  }
  if (local_210 != 0) {
    iStack_efc = local_210;
    uStack_f00 = 0x10f7b7e9;
    FUN_10c3d5d0();
  }
  if (local_21c != 0) {
    iStack_efc = local_21c;
    uStack_f00 = 0x10f7b7fc;
    FUN_10c3d5d0();
  }
  if (local_23c[0] != 0) {
    iStack_efc = local_23c[0];
    uStack_f00 = 0x10f7b80f;
    FUN_10c3d5d0();
  }
  if (local_18 != 0) {
    iStack_efc = local_18;
    uStack_f00 = 0x10f7b81f;
    FUN_10c3d5d0();
  }
  uStack_f00 = 0x10f7b82d;
  uStack_f00 = FUN_107d15c0();
  uStack_f04 = 0x10f7b835;
  FUN_107d6b40();
  FUN_107d0200(&uStack_f04);
  FUN_107d6b80();
  uStack_f04 = 0x10f7b84f;
  FUN_107d0240();
  uStack_f04 = 0x10f7b857;
  FUN_10f61a70();
  uStack_f04 = 0x10f7b862;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b86d;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b878;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b883;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b88e;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b899;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8a4;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8af;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8ba;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8c5;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8d0;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8db;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8e6;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8f1;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b8fc;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b907;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b912;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b91d;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b928;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b933;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b93e;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b949;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b954;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b95f;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b96a;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b975;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b980;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b98b;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b996;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b9a1;
  FUN_10f61a80();
  uStack_f04 = 0x10f7b9ac;
  FUN_10f61a80();
  return;
}


// ================= FUN_10f7bb40 @ 10f7bb40 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_IDLE_VIEW""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""NORMAL_IDLE""
     ""HolsteredRun""
     ""NORMAL_RUN""
     ""CreateToIdle"" */

void __fastcall FUN_10f7bb40(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x1a;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x1a;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(undefined2 *)(param_1 + 0x23c) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  CInfoRecord__GetModelString("NORMAL_IDLE_VIEW",iVar2);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x10;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa29f0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa29f0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10fa2af0);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fa2be0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa2be0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10fa2c20;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa2c20;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10fa2a80;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa2a80;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredRun");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_RUN",extraout_ECX_01,local_7c);
  FUN_10f593b0();
  FUN_10f56fa0("CreateToIdle");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f7bfc0 @ 10f7bfc0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_IDLE_SELECT""
     ""HolsteredIdleBreakSelect""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f7bfc0(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x1b;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x1b;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(undefined2 *)(param_1 + 0x23c) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  CInfoRecord__GetModelString("NORMAL_IDLE_SELECT",iVar2);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x10;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa2d50;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa2d50;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10fa2f20);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fa3020;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa3020;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10fa31e0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa31e0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = (code *)&DAT_10fa2f10;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10fa2f10;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  FUN_10f56fa0("HolsteredIdleBreakSelect");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f789a0 @ 10f789a0 =================

/* [RE-AUTO c0]
   strings:
     ""RunStop""
     ""PLLocomotion""
     ""PLIsTired"" */

void __thiscall FUN_10f789a0(int param_1,int param_2,float param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_1c [4];
  undefined8 local_18;
  float local_10;
  float local_c;
  float local_8;
  
  if ((*(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154) +
       *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158) +
       *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x15c) < DAT_11cbf074) ||
     (param_3 != 1.4013e-45)) goto LAB_10f78d22;
  pfVar2 = (float *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x138))();
  fVar5 = *pfVar2;
  fVar6 = pfVar2[1];
  fVar7 = pfVar2[4];
  fVar8 = pfVar2[5];
  FUN_10a78bc0();
  FUN_10a78bc0();
  local_8 = *(float *)(param_1 + 0x158) * fVar8 + *(float *)(param_1 + 0x154) * fVar7;
  param_3 = *(float *)(param_1 + 0x158) * fVar6 + *(float *)(param_1 + 0x154) * fVar5;
  fVar5 = param_3 * param_3 + local_8 * local_8 + 0.0;
  if (fVar5 <= DAT_11cbf070) {
    local_18 = DAT_1201fd04;
    uVar1 = local_18;
    local_10 = DAT_1201fd0c;
    local_c = DAT_1201fd0c;
    local_18._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
    local_8 = local_18._4_4_;
    local_18._0_4_ = (float)DAT_1201fd04;
    param_3 = (float)local_18;
    local_18 = uVar1;
  }
  else {
    auVar4 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    local_c = auVar4._0_4_;
    local_c = (DAT_11de9938 - local_c * fVar5 * local_c * DAT_11de98e8) * local_c;
    param_3 = local_c * param_3;
    local_8 = local_c * local_8;
    local_c = local_c * 0.0;
  }
  puVar3 = (uint *)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0xc) + 0xd0)
                   )(local_1c);
  fVar10 = (float)(puVar3[1] ^ DAT_11de9c90);
  fVar9 = (float)(puVar3[2] ^ DAT_11de9c90);
  fVar5 = (float)puVar3[3];
  fVar11 = (float)(*puVar3 ^ DAT_11de9c90);
  fVar8 = (fVar10 * local_c - fVar9 * local_8) + fVar5 * param_3;
  fVar7 = (fVar9 * param_3 - fVar11 * local_c) + fVar5 * local_8;
  fVar6 = (fVar11 * local_8 - fVar10 * param_3) + fVar5 * local_c;
  fVar5 = fVar10 * fVar6 - fVar9 * fVar7;
  fVar5 = fVar5 + param_3 + fVar5;
  fVar9 = fVar9 * fVar8 - fVar11 * fVar6;
  fVar6 = fVar11 * fVar7 - fVar10 * fVar8;
  local_8 = fVar9 + local_8 + fVar9;
  fVar6 = fVar6 + local_c + fVar6;
  fVar5 = fVar5 * fVar5 + local_8 * local_8 + fVar6 * fVar6;
  if (fVar5 <= DAT_11cbf070) {
    local_18 = DAT_1201fd04;
    uVar1 = local_18;
    local_18._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
    local_10 = DAT_1201fd0c;
    fVar5 = local_18._4_4_;
    local_18 = uVar1;
  }
  else {
    auVar4 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar4._0_4_;
    fVar5 = (DAT_11de9938 - fVar6 * fVar5 * fVar6 * DAT_11de98e8) * fVar6 * local_8;
  }
  if (DAT_11cfe218 <= fVar5) goto LAB_10f78d22;
  if ((*(int *)(param_1 + 0x23c) == 4) ||
     ((*(int *)(param_1 + 0x238) != 3 && (*(int *)(param_1 + 0x238) != 2)))) {
    if (*(int *)(param_1 + 0x238) == 0) {
      *(undefined4 *)(param_1 + 0x238) = 3;
      *(undefined4 *)(param_1 + 0x23c) = 4;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))("PLLocomotion","RunStop");
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))("PLIsTired",&DAT_11ce5cac)
      ;
    }
    else if ((*(int *)(param_1 + 0x238) == 1) && (*(int *)(param_1 + 0x23c) != 4))
    goto LAB_10f78d0b;
  }
  else {
LAB_10f78d0b:
    *(undefined4 *)(param_1 + 0x23c) = 4;
  }
  if (*(int *)(param_1 + 0x238) != 7) {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
LAB_10f78d22:
  if (param_2 != 0) {
    *(int *)(param_2 + -0xc) = *(int *)(param_2 + -0xc) + -1;
    if (*(int *)(param_2 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(param_2 + -0xc));
    }
  }
  return;
}


// ================= CPlayerAnimGraph::SetupCombatTransitions_TypeA @ 10f781b0 =================

/* [RE-R1]
   strings:
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLCombat""
     ""NoBullet""
     ""COMBAT_PL05_NOBULLET""
     ""ChangeBullet""
     ""COMBAT_PL05_CHANGEBULLET""
     ""PLCharging""
     ""RageAim""
     ""COMBAT_PL05_RAGE_PRESHOOT"" */

void __fastcall CPlayerAnimGraph__SetupCombatTransitions_TypeA(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *puVar5;
  undefined4 *extraout_ECX_02;
  int local_b8 [8];
  int local_98;
  int local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_80 [8];
  int local_60;
  int local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  int local_48 [8];
  int local_28;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_5;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0x15b4);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + (iVar2 + 0x2f) * 0xc);
  iVar1 = param_1 + (iVar2 + 0x2f) * 0xc;
  iVar4 = *(int *)(iVar1 + 4);
  if (iVar3 != iVar4) {
    FUN_10f63c40(iVar3,iVar4,&local_5);
  }
  FUN_10fb2130(param_1 + 0x184);
  if (iVar2 == 4) {
    FUN_10f56e50();
    local_10 = FUN_10f73a40;
    FUN_10f574b0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("RageRushLow");
    FUN_10f573e0();
    if (local_18 == local_14) {
      FUN_10fb5990(local_18,&local_10,&local_5,1,1);
      puVar5 = extraout_ECX_02;
    }
    else {
      if (local_18 != (undefined4 *)0x0) {
        *local_18 = local_10;
        local_18[1] = local_c;
      }
      puVar5 = local_18 + 2;
      local_18 = puVar5;
    }
    FUN_10f56fa0("COMBAT_PL04_RAGERUSH_START",puVar5,local_48);
    FUN_10f593b0();
  }
  else {
    if (iVar2 != 5) goto LAB_10f78551;
    FUN_10f56e50();
    local_10 = FUN_10f73a40;
    FUN_10f574b0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0("NoBullet");
    FUN_10f573e0();
    if (local_18 == local_14) {
      FUN_10fb5990(local_18,&local_10,&local_5,1,1);
      puVar5 = extraout_ECX;
    }
    else {
      if (local_18 != (undefined4 *)0x0) {
        *local_18 = local_10;
        local_18[1] = local_c;
      }
      puVar5 = local_18 + 2;
      local_18 = puVar5;
    }
    FUN_10f56fa0("COMBAT_PL05_NOBULLET",puVar5,local_48);
    FUN_10f593b0();
    FUN_10f574b0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0("ChangeBullet");
    FUN_10f573e0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    if (local_88 == local_84) {
      FUN_10fb5990(local_88,&local_10,&local_5,1,1);
      puVar5 = extraout_ECX_00;
    }
    else {
      if (local_88 != (undefined4 *)0x0) {
        *local_88 = local_10;
        local_88[1] = local_c;
      }
      puVar5 = local_88 + 2;
      local_88 = puVar5;
    }
    FUN_10f56fa0("COMBAT_PL05_CHANGEBULLET",puVar5,local_b8);
    FUN_10f593b0();
    FUN_10f574b0();
    FUN_10f56fa0("PLCharging");
    FUN_10f56fa0("RageAim");
    FUN_10f573e0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    if (local_50 == local_4c) {
      FUN_10fb5990(local_50,&local_10,&local_5,1,1);
      puVar5 = extraout_ECX_01;
    }
    else {
      if (local_50 != (undefined4 *)0x0) {
        *local_50 = local_10;
        local_50[1] = local_c;
      }
      puVar5 = local_50 + 2;
      local_50 = puVar5;
    }
    FUN_10f56fa0("COMBAT_PL05_RAGE_PRESHOOT",puVar5,local_80);
    FUN_10f593b0();
    if (local_54 != 0) {
      FUN_10c3d5d0(local_54);
    }
    if (local_60 != 0) {
      FUN_10c3d5d0(local_60);
    }
    if (local_80[0] != 0) {
      FUN_10c3d5d0(local_80[0]);
    }
    if (local_8c != 0) {
      FUN_10c3d5d0(local_8c);
    }
    if (local_98 != 0) {
      FUN_10c3d5d0(local_98);
    }
    if (local_b8[0] != 0) {
      FUN_10c3d5d0(local_b8[0]);
    }
  }
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  if (local_28 != 0) {
    FUN_10c3d5d0(local_28);
  }
  if (local_48[0] != 0) {
    FUN_10c3d5d0(local_48[0]);
  }
LAB_10f78551:
  FUN_10fb2130(iVar1);
  puVar5 = *(undefined4 **)(param_1 + 0x110);
  local_c = FUN_10f74a60;
  if (puVar5 == *(undefined4 **)(param_1 + 0x114)) {
    FUN_108716d0(puVar5,&local_c,&local_5,1,1);
    return;
  }
  *puVar5 = FUN_10f74a60;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  return;
}


// ================= FUN_10f79cb0 @ 10f79cb0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_RUN""
     ""IdleTurnBack""
     ""PLLocomotion"" */

void __thiscall FUN_10f79cb0(int param_1,int param_2,float param_3)

{
  undefined8 uVar1;
  char cVar2;
  float *pfVar3;
  uint *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_1c [4];
  undefined8 local_18;
  float local_10;
  float local_c;
  float local_8;
  
  if ((DAT_11cbf074 <=
       *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154) +
       *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158) +
       *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x15c)) && (param_3 == 1.4013e-45)) {
    pfVar3 = (float *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x138))();
    fVar7 = *pfVar3;
    fVar8 = pfVar3[1];
    fVar9 = pfVar3[4];
    fVar10 = pfVar3[5];
    FUN_10a78bc0();
    FUN_10a78bc0();
    local_8 = *(float *)(param_1 + 0x158) * fVar10 + *(float *)(param_1 + 0x154) * fVar9;
    param_3 = *(float *)(param_1 + 0x158) * fVar8 + *(float *)(param_1 + 0x154) * fVar7;
    fVar7 = param_3 * param_3 + local_8 * local_8 + 0.0;
    if (fVar7 <= DAT_11cbf070) {
      local_18 = DAT_1201fd04;
      uVar1 = local_18;
      local_10 = DAT_1201fd0c;
      local_c = DAT_1201fd0c;
      local_18._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
      local_8 = local_18._4_4_;
      local_18._0_4_ = (float)DAT_1201fd04;
      param_3 = (float)local_18;
      local_18 = uVar1;
    }
    else {
      auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      local_c = auVar6._0_4_;
      local_c = (DAT_11de9938 - local_c * fVar7 * local_c * DAT_11de98e8) * local_c;
      param_3 = local_c * param_3;
      local_8 = local_c * local_8;
      local_c = local_c * 0.0;
    }
    puVar4 = (uint *)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0xc) +
                                 0xd0))(local_1c);
    fVar12 = (float)(puVar4[1] ^ DAT_11de9c90);
    fVar11 = (float)(puVar4[2] ^ DAT_11de9c90);
    fVar7 = (float)puVar4[3];
    fVar13 = (float)(*puVar4 ^ DAT_11de9c90);
    fVar10 = (fVar12 * local_c - fVar11 * local_8) + fVar7 * param_3;
    fVar9 = (fVar11 * param_3 - fVar13 * local_c) + fVar7 * local_8;
    fVar8 = (fVar13 * local_8 - fVar12 * param_3) + fVar7 * local_c;
    fVar7 = fVar12 * fVar8 - fVar11 * fVar9;
    fVar7 = fVar7 + param_3 + fVar7;
    fVar11 = fVar11 * fVar10 - fVar13 * fVar8;
    fVar8 = fVar13 * fVar9 - fVar12 * fVar10;
    local_8 = fVar11 + local_8 + fVar11;
    fVar8 = fVar8 + local_c + fVar8;
    fVar7 = fVar7 * fVar7 + local_8 * local_8 + fVar8 * fVar8;
    if (fVar7 <= DAT_11cbf070) {
      local_18 = DAT_1201fd04;
      uVar1 = local_18;
      local_18._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
      local_10 = DAT_1201fd0c;
      fVar7 = local_18._4_4_;
      local_18 = uVar1;
    }
    else {
      auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar6._0_4_;
      fVar7 = (DAT_11de9938 - fVar8 * fVar7 * fVar8 * DAT_11de98e8) * fVar8 * local_8;
    }
    if (fVar7 < DAT_11cfe218) {
      CInfoRecord__GetModelString("NORMAL_RUN",extraout_ECX,0,1,0,0);
      cVar2 = FUN_10f59ff0();
      if (cVar2 != '\0') {
        iVar5 = FUN_10fd05d0();
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x238) = 5;
          *(undefined1 *)(iVar5 + 0xc) = 0;
          (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                    ("PLLocomotion","IdleTurnBack");
        }
      }
    }
  }
  if (param_2 != 0) {
    *(int *)(param_2 + -0xc) = *(int *)(param_2 + -0xc) + -1;
    if (*(int *)(param_2 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))((int *)(param_2 + -0xc));
    }
  }
  return;
}


// ================= CFlyState::Enter @ 10f79790 =================

/* [RE-R1]
   strings:
     ""NORMAL_FLY""
     ""Glide_TakeOff""
     ""HolsteredFly""
     ""Gliding_Throw_Bomb""
     ""PLLocomotion""
     ""PLBaseSignal""
     ""Glider_Throw_Bomb""
     ""StartFall""
     ""NORMAL_FALL"" */

void __fastcall CFlyState__Enter(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 extraout_ECX_00;
  int local_fc [8];
  int local_dc;
  int local_d0;
  int local_c4 [8];
  int local_a4;
  int local_98;
  int local_8c [8];
  int local_6c;
  int local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54 [8];
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  code *local_1c;
  undefined4 local_18;
  code *local_14;
  undefined4 local_10;
  code *local_c;
  undefined1 local_5;
  
  local_c = FUN_10fad1e0;
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  iVar3 = param_1 + 0xe8;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
    iVar3 = extraout_ECX;
  }
  else {
    *puVar1 = FUN_10fad1e0;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  CInfoRecord__GetModelString("NORMAL_FLY",iVar3);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x2011;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10facfd0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10facfd0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  local_c = (code *)0x24;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = 0x24;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fad070;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fad070;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = CGliderFlyState__OnAnimEvent;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = CGliderFlyState__OnAnimEvent;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f56fa0("Glide_TakeOff");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("HolsteredFly");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Gliding_Throw_Bomb");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredFly");
  FUN_10f573e0();
  FUN_10f5a480(1,0,local_fc);
  FUN_10f574b0();
  FUN_116db560();
  uVar2 = FUN_116db5e0();
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Glider_Throw_Bomb");
  FUN_10f573e0();
  FUN_10f56e50();
  local_14 = FUN_10fad240;
  local_c = FUN_10fad3d0;
  if (local_30 == local_2c) {
    FUN_108716d0(local_30,&local_c,&local_5,1,1);
  }
  else {
    *local_30 = FUN_10fad3d0;
    local_30 = local_30 + 1;
  }
  if (local_24 == local_20) {
    FUN_10fb5990(local_24,&local_14,&local_5,1,1);
  }
  else {
    if (local_24 != (undefined4 *)0x0) {
      *local_24 = local_14;
      local_24[1] = local_10;
    }
    local_24 = local_24 + 2;
  }
  FUN_10f5a480(2,1,local_54);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56e50();
  local_1c = FUN_10fad360;
  if (local_5c == local_58) {
    FUN_10fb5990(local_5c,&local_1c,&local_5,1,1);
  }
  else {
    if (local_5c != (undefined4 *)0x0) {
      *local_5c = FUN_10fad360;
      local_5c[1] = local_18;
    }
    local_5c = local_5c + 2;
  }
  FUN_10f5a480(1,2,local_8c);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX_00,local_c4);
  FUN_10f593b0();
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  if (local_98 != 0) {
    FUN_10c3d5d0(local_98);
  }
  if (local_a4 != 0) {
    FUN_10c3d5d0(local_a4);
  }
  if (local_c4[0] != 0) {
    FUN_10c3d5d0(local_c4[0]);
  }
  if (local_60 != 0) {
    FUN_10c3d5d0(local_60);
  }
  if (local_6c != 0) {
    FUN_10c3d5d0(local_6c);
  }
  if (local_8c[0] != 0) {
    FUN_10c3d5d0(local_8c[0]);
  }
  if (local_28 != 0) {
    FUN_10c3d5d0(local_28);
  }
  if (local_34 != 0) {
    FUN_10c3d5d0(local_34);
  }
  if (local_54[0] != 0) {
    FUN_10c3d5d0(local_54[0]);
  }
  if (local_d0 != 0) {
    FUN_10c3d5d0(local_d0);
  }
  if (local_dc != 0) {
    FUN_10c3d5d0(local_dc);
  }
  if (local_fc[0] != 0) {
    FUN_10c3d5d0(local_fc[0]);
  }
  return;
}


// ================= FUN_10f7eaf0 @ 10f7eaf0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_TIREDSTAND""
     ""TiredStand2Idle""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f7eaf0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_TIREDSTAND",param_1);
  FUN_10f58340();
  FUN_10f56fa0("TiredStand2Idle");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f7fb80 @ 10f7fb80 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_TAKE_MEAT""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""EatSatisfy""
     ""EAT_SATISFY"" */

void __fastcall FUN_10f7fb80(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_TAKE_MEAT",param_1);
  FUN_10f58340();
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = (code *)&DAT_10f7fac0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10f7fac0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = CEatState__OnAnimEvent_PLUseItem;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = CEatState__OnAnimEvent_PLUseItem;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f7fb30;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f7fb30;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatSatisfy");
  FUN_10f573e0();
  FUN_10f56fa0("EAT_SATISFY",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f7fcf0 @ 10f7fcf0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_TAKE_DRAGON_MEAT""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""EatSatisfy""
     ""EAT_SATISFY"" */

void __fastcall FUN_10f7fcf0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_TAKE_DRAGON_MEAT",param_1);
  FUN_10f58340();
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = (code *)&DAT_10f7fac0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10f7fac0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = CEatState__OnAnimEvent_PLUseItem;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = CEatState__OnAnimEvent_PLUseItem;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f7fb30;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f7fb30;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatSatisfy");
  FUN_10f573e0();
  FUN_10f56fa0("EAT_SATISFY",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f7fee0 @ 10f7fee0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_TAKE_COKE_MEAT""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""EatSatisfy""
     ""EAT_SATISFY""
     ""EatDisgorge""
     ""EAT_DISGORGE"" */

void __fastcall FUN_10f7fee0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_TAKE_COKE_MEAT",param_1);
  FUN_10f58340();
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = (code *)&DAT_10f7fac0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10f7fac0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = CEatState__OnAnimEvent_PLUseItem;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = CEatState__OnAnimEvent_PLUseItem;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f7fb30;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f7fb30;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatSatisfy");
  FUN_10f573e0();
  FUN_10f56fa0("EAT_SATISFY",extraout_ECX,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatDisgorge");
  FUN_10f573e0();
  FUN_10f56fa0("EAT_DISGORGE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  return;
}


// ================= FUN_10f7f580 @ 10f7f580 =================

/* [RE-AUTO c0]
   strings:
     ""EatDrug""
     ""SetItemOnGround""
     ""EatSatisfy""
     ""EatDisgorge""
     ""EndFluteType2""
     ""throw""
     ""Smash""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLBaseSignal"" */

void __fastcall FUN_10f7f580(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x1d;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = 0x1d;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  FUN_10f56fa0("EatDrug");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("SetItemOnGround");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("EatSatisfy");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("EatDisgorge");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("EndFluteType2");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("throw");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Smash");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f7f410;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f7f410;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = CUseItemState__OnAnimEvent_PLUseItem;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = CUseItemState__OnAnimEvent_PLUseItem;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fa33d0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa33d0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  return;
}


// ================= FUN_10f7caa0 @ 10f7caa0 =================

/* [RE-AUTO c0]
   strings:
     ""CROUCH_RUN""
     ""CrouchRun""
     ""PLLocomotion""
     ""CrouchIdle""
     ""CROUCH_IDLE""
     ""StartFall""
     ""NORMAL_FALL""
     ""PLBaseSignal""
     ""CollectPlant""
     ""HolsteredIdle"" */

void __fastcall FUN_10f7caa0(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x1e;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x1e;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("CROUCH_RUN",iVar2);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x11;
  *(undefined1 *)(param_1 + 0x14) = 1;
  FUN_10f56fa0("CrouchRun");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fa1010;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa1010;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa0df0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa0df0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10fa10e0);
  puVar1 = *(undefined4 **)(param_1 + 0x11c);
  local_c = FUN_10fa16b0;
  if (puVar1 == *(undefined4 **)(param_1 + 0x120)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa16b0;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 4;
  }
  FUN_10f5bd40(6,CPetLocomotion__SelectCliffJumpOrFallAnim);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CrouchIdle");
  FUN_10f573e0();
  FUN_10f56fa0("CROUCH_IDLE",extraout_ECX_00,local_124);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX_01,local_ec);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("CollectPlant");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_COLLECT",extraout_ECX_02,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Strip");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_STRIP",extraout_ECX_03,local_44);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ClimbUp");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("ClimbLadder");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CLIMBLADDER",extraout_ECX_04,local_b4);
  FUN_10f593b0();
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_c0 != 0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_ec[0] != 0) {
    FUN_10c3d5d0(local_ec[0]);
  }
  if (local_f8 != 0) {
    FUN_10c3d5d0(local_f8);
  }
  if (local_104 != 0) {
    FUN_10c3d5d0(local_104);
  }
  if (local_124[0] != 0) {
    FUN_10c3d5d0(local_124[0]);
  }
  return;
}


// ================= FUN_10f7c3b0 @ 10f7c3b0 =================

/* [RE-AUTO c0]
   strings:
     ""CROUCH_IDLE""
     ""StartCrouch""
     ""CrouchIdle""
     ""CrouchStop""
     ""PLLocomotion""
     ""CrouchRun""
     ""CROUCH_TOPOINT""
     ""StartFall""
     ""NORMAL_FALL""
     ""PLBaseSignal"" */

void __fastcall FUN_10f7c3b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  int extraout_ECX;
  int iVar10;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  float10 fVar11;
  int local_150 [8];
  int local_130;
  int local_124;
  int local_118 [8];
  int local_f8;
  int local_ec;
  int local_e0 [8];
  int local_c0;
  int local_b4;
  int local_a8 [8];
  int local_88;
  int local_7c;
  int local_70 [8];
  int local_50;
  int local_44;
  undefined4 local_30;
  undefined1 local_28 [16];
  undefined4 local_18;
  code **local_14;
  code *local_10;
  undefined1 *local_c;
  undefined1 local_5;
  
  local_c = (undefined1 *)0x19;
  puVar7 = *(undefined4 **)(param_1 + 0x44);
  iVar10 = param_1 + 0x40;
  if (puVar7 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar7,&local_c,&local_5,1,1);
    iVar10 = extraout_ECX;
  }
  else {
    *puVar7 = 0x19;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  local_30 = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  fVar9 = (float10)fcos((float10)0.0);
  fVar11 = (float10)fsin((float10)0.0);
  fVar1 = (float)fVar9;
  fVar2 = (float)fVar11;
  fVar9 = (float10)fcos((float10)0.0);
  fVar11 = (float10)fsin((float10)0.0);
  fVar3 = (float)fVar9;
  fVar4 = (float)fVar11;
  local_14 = &local_10;
  local_18 = 0;
  local_c = local_28;
  fVar9 = (float10)fcos((float10)0.0);
  fVar11 = (float10)fsin((float10)0.0);
  fVar5 = (float)fVar9;
  fVar6 = (float)fVar11;
  local_10 = (code *)(fVar4 * fVar2 * fVar6 + fVar3 * fVar1 * fVar5);
  *(float *)(param_1 + 0x240) = fVar5 * fVar3 * fVar2 - fVar6 * fVar4 * fVar1;
  *(code **)(param_1 + 0x24c) = local_10;
  *(float *)(param_1 + 0x244) = fVar5 * fVar4 * fVar1 + fVar6 * fVar3 * fVar2;
  *(float *)(param_1 + 0x248) = fVar6 * fVar3 * fVar1 - fVar5 * fVar4 * fVar2;
  CInfoRecord__GetModelString("CROUCH_IDLE",iVar10);
  FUN_10f58340();
  *(undefined1 *)(param_1 + 0x14) = 1;
  FUN_10f56fa0("StartCrouch");
  piVar8 = *(int **)(param_1 + 100);
  if (piVar8 == *(int **)(param_1 + 0x68)) {
    FUN_10f649a0(piVar8,&local_c,&local_5,1,1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      *piVar8 = (int)local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("CrouchIdle");
  piVar8 = *(int **)(param_1 + 100);
  if (piVar8 == *(int **)(param_1 + 0x68)) {
    FUN_10f649a0(piVar8,&local_c,&local_5,1,1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      *piVar8 = (int)local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("CrouchStop");
  piVar8 = *(int **)(param_1 + 100);
  if (piVar8 == *(int **)(param_1 + 0x68)) {
    FUN_10f649a0(piVar8,&local_c,&local_5,1,1);
  }
  else {
    if (piVar8 != (int *)0x0) {
      *piVar8 = (int)local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar7 = *(undefined4 **)(param_1 + 0xb0);
  local_10 = FUN_10fa07d0;
  if (puVar7 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar7,&local_10,&local_5,1,1);
  }
  else {
    *puVar7 = FUN_10fa07d0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10fa0810);
  FUN_10f5bd40(6,FUN_10f917b0);
  puVar7 = *(undefined4 **)(param_1 + 200);
  local_10 = FUN_10fa0cd0;
  if (puVar7 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar7,&local_10,&local_5,1,1);
  }
  else {
    *puVar7 = FUN_10fa0cd0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar7 = *(undefined4 **)(param_1 + 0xf8);
  local_10 = FUN_10fa1260;
  if (puVar7 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar7,&local_10,&local_5,1,1);
  }
  else {
    *puVar7 = FUN_10fa1260;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CrouchRun");
  FUN_10f573e0();
  FUN_10f56fa0("CROUCH_TOPOINT",extraout_ECX_00,local_150);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX_01,local_118);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("CollectPlant");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_COLLECT",extraout_ECX_02,local_70);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Strip");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_STRIP",extraout_ECX_03,local_e0);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ClimbUp");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("ClimbLadder");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CLIMBLADDER",extraout_ECX_04,local_a8);
  FUN_10f593b0();
  if (local_7c != 0) {
    FUN_10c3d5d0(local_7c);
  }
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_a8[0] != 0) {
    FUN_10c3d5d0(local_a8[0]);
  }
  if (local_b4 != 0) {
    FUN_10c3d5d0(local_b4);
  }
  if (local_c0 != 0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_e0[0] != 0) {
    FUN_10c3d5d0(local_e0[0]);
  }
  if (local_44 != 0) {
    FUN_10c3d5d0(local_44);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_70[0] != 0) {
    FUN_10c3d5d0(local_70[0]);
  }
  if (local_ec != 0) {
    FUN_10c3d5d0(local_ec);
  }
  if (local_f8 != 0) {
    FUN_10c3d5d0(local_f8);
  }
  if (local_118[0] != 0) {
    FUN_10c3d5d0(local_118[0]);
  }
  if (local_124 != 0) {
    FUN_10c3d5d0(local_124);
  }
  if (local_130 != 0) {
    FUN_10c3d5d0(local_130);
  }
  if (local_150[0] != 0) {
    FUN_10c3d5d0(local_150[0]);
  }
  return;
}


// ================= FUN_10f7db40 @ 10f7db40 =================

/* [RE-AUTO c0]
   strings:
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f7db40(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x1c;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = 0x1c;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x400;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f7ebe0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f7ebe0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f7ecf0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f7ecf0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10fa3310;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa3310;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f7ee20;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f7ee20;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(8,FUN_10fa32d0);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  *(undefined1 *)(param_1 + 0x200) = 0;
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= CPetActionController::BuildCombatIdleStateGraph @ 10f7d410 =================

/* [RE-R1]
   strings:
     ""INVALID_STATE""
     ""PLCombat""
     ""COMBAT_IDLE""
     ""PLLocomotion""
     ""StartFall_Parapet""
     ""PARAPET_FALL""
     ""StartFall""
     ""PLCombatAction""
     ""NORMAL_FALL"" */

void __fastcall CPetActionController__BuildCombatIdleStateGraph(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 *puVar2;
  int local_c8 [8];
  int local_a8;
  int local_9c;
  int local_90 [8];
  int local_70;
  int local_64;
  int local_58 [8];
  int local_38;
  int local_2c;
  undefined *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  code *local_14;
  code *local_10;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_18 = 0x10;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_18,&local_6,1,1);
  }
  else {
    *puVar1 = 0x10;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x20;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  *(undefined1 *)(param_1 + 500) = 0;
  FUN_1083ab70("INVALID_STATE",0xd);
  if (*(int *)(*(int *)(param_1 + 0x1e0) + -0xc) < 0) {
    puVar2 = &DAT_1201fc98;
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 0x1e0);
    FUN_10c3dab0(puVar2 + -0xc,puVar2);
  }
  FUN_10f570a0(puVar2);
  *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_10 = FUN_10f74c40;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_10,&local_8,1,1);
  }
  else {
    *puVar1 = FUN_10f74c40;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_20 = &DAT_10f9a600;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_20,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10f9a600;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x110);
  local_1c = &LAB_10f6b6a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0x114)) {
    FUN_108716d0(puVar1,&local_1c,&local_7,1,1);
  }
  else {
    *puVar1 = &LAB_10f6b6a0;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_14 = FUN_10f9a5b0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_14,&local_9,1,1);
  }
  else {
    *puVar1 = FUN_10f9a5b0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f5bd40(6,0x10f9a9c0);
  FUN_10f5bd40(6,FUN_10f91810);
  FUN_10f994e0(param_1,0);
  FUN_10f574b0();
  FUN_10f56fa0("PLCombat");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_c8);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall_Parapet");
  FUN_10f573e0();
  FUN_10f56fa0("PARAPET_FALL",extraout_ECX_00,local_90);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX_01,local_58);
  FUN_10f593b0();
  if (local_2c != 0) {
    FUN_10c3d5d0(local_2c);
  }
  if (local_38 != 0) {
    FUN_10c3d5d0(local_38);
  }
  if (local_58[0] != 0) {
    FUN_10c3d5d0(local_58[0]);
  }
  if (local_64 != 0) {
    FUN_10c3d5d0(local_64);
  }
  if (local_70 != 0) {
    FUN_10c3d5d0(local_70);
  }
  if (local_90[0] != 0) {
    FUN_10c3d5d0(local_90[0]);
  }
  if (local_9c != 0) {
    FUN_10c3d5d0(local_9c);
  }
  if (local_a8 != 0) {
    FUN_10c3d5d0(local_a8);
  }
  if (local_c8[0] != 0) {
    FUN_10c3d5d0(local_c8[0]);
  }
  return;
}


// ================= FUN_10f72c60 @ 10f72c60 =================

/* [RE-AUTO c0]
   strings:
     ""PLLocomotion""
     ""CarryHugeItemIdle""
     ""NORMAL_CARRY_EGG_IDLE"" */

void __fastcall FUN_10f72c60(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 uStack_54;
  int local_48 [8];
  int local_28;
  int local_1c;
  code *local_10;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x22;
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    uStack_54 = 1;
    FUN_10f64460(puVar1,&local_c,&local_5,1);
  }
  else {
    *puVar1 = 0x22;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x110);
  local_c = FUN_10f9fd30;
  if (puVar1 == *(undefined4 **)(param_1 + 0x114)) {
    uStack_54 = 1;
    FUN_108716d0(puVar1,&local_c,&local_5,1);
  }
  else {
    *puVar1 = FUN_10f9fd30;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f74f70;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    uStack_54 = 1;
    FUN_108716d0(puVar1,&local_c,&local_5,1);
  }
  else {
    *puVar1 = FUN_10f74f70;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + 0x18c) != 0)) {
    uStack_54 = 0x10f72d25;
    FUN_10f56e50();
    local_10 = FUN_10f8dbb0;
    uStack_54 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18c);
    FUN_10f3a580(&uStack_54,4);
    FUN_10f570a0();
    puVar1 = *(undefined4 **)(param_1 + 0xe0);
    if (puVar1 == *(undefined4 **)(param_1 + 0xe4)) {
      uStack_54 = 1;
      FUN_10fb5690(puVar1,&local_10,&local_5,1);
    }
    else {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = local_10;
        puVar1[1] = local_c;
      }
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 8;
    }
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  uStack_54 = 0x10f72d92;
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX,local_48);
  FUN_10f593b0();
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  if (local_28 != 0) {
    FUN_10c3d5d0(local_28);
  }
  if (local_48[0] != 0) {
    FUN_10c3d5d0(local_48[0]);
  }
  return;
}


// ================= FUN_10f73320 @ 10f73320 =================

/* [RE-AUTO c0]
   calls: _CIatan2
   strings:
     ""DODGE_FRONT""
     ""DODGE_RIGHT""
     ""DODGE_LEFT""
     ""HolsteredIdle""
     ""PLLocomotion""
     ""UnholsteredIdle"" */

void __thiscall FUN_10f73320(undefined4 param_1,float param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  float *pfVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_350;
  undefined4 local_34c;
  undefined1 *local_29c;
  undefined1 *local_280;
  undefined4 local_264;
  undefined4 local_a8;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [4];
  undefined8 local_1c;
  float local_14;
  undefined8 local_10;
  float local_8;
  
  iVar1 = (int)param_2;
  if (((0.0 < (float)(double)((ulonglong)(double)*(float *)((int)param_2 + 0x160) & DAT_11de9c70))
      || (0.0 < (float)(double)((ulonglong)(double)*(float *)((int)param_2 + 0x164) & DAT_11de9c70))
      ) || (0.0 < (float)(double)((ulonglong)(double)*(float *)((int)param_2 + 0x168) & DAT_11de9c70
                                 ))) {
    pfVar4 = (float *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x138))();
    local_50 = *pfVar4;
    fStack_4c = pfVar4[1];
    fStack_48 = pfVar4[2];
    fStack_44 = pfVar4[3];
    local_40 = pfVar4[4];
    fStack_3c = pfVar4[5];
    fStack_38 = pfVar4[6];
    fStack_34 = pfVar4[7];
    local_30 = pfVar4[8];
    fStack_2c = pfVar4[9];
    fStack_28 = pfVar4[10];
    fStack_24 = pfVar4[0xb];
    FUN_10a78bc0();
    local_80 = local_50;
    fStack_7c = fStack_4c;
    fStack_78 = fStack_48;
    fStack_74 = fStack_44;
    local_70 = local_40;
    fStack_6c = fStack_3c;
    fStack_68 = fStack_38;
    fStack_64 = fStack_34;
    local_60 = local_30;
    fStack_5c = fStack_2c;
    fStack_58 = fStack_28;
    fStack_54 = fStack_24;
    FUN_10a78bc0();
    local_8 = *(float *)((int)param_2 + 0x164) * fStack_6c +
              *(float *)((int)param_2 + 0x160) * local_70;
    param_2 = *(float *)((int)param_2 + 0x164) * fStack_7c +
              *(float *)((int)param_2 + 0x160) * local_80;
    fVar9 = param_2 * param_2 + local_8 * local_8 + 0.0;
    if (fVar9 <= DAT_11cbf070) {
      local_1c = DAT_1201fd04;
      uVar2 = local_1c;
      local_14 = DAT_1201fd0c;
      local_1c._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
      local_8 = local_1c._4_4_;
      local_1c._0_4_ = (float)DAT_1201fd04;
      param_2 = (float)local_1c;
      local_1c = uVar2;
      fVar9 = DAT_1201fd0c;
    }
    else {
      auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar8._0_4_;
      fVar10 = (DAT_11de9938 - fVar10 * fVar9 * fVar10 * DAT_11de98e8) * fVar10;
      param_2 = fVar10 * param_2;
      local_8 = fVar10 * local_8;
      fVar9 = fVar10 * 0.0;
    }
    local_10 = (double)CONCAT44(fVar9,(undefined4)local_10);
    puVar5 = (uint *)(**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0x18) + 0x100) + 0xc) + 0xd0)
                     )(local_20);
    fVar11 = (float)(puVar5[1] ^ DAT_11de9c90);
    fVar13 = (float)(puVar5[2] ^ DAT_11de9c90);
    fVar9 = (float)puVar5[3];
    fVar14 = (float)(*puVar5 ^ DAT_11de9c90);
    fVar10 = (fVar14 * local_8 - fVar11 * param_2) + fVar9 * local_10._4_4_;
    fVar12 = fVar11 * fVar10 -
             fVar13 * ((fVar13 * param_2 - fVar14 * local_10._4_4_) + fVar9 * local_8);
    fVar9 = fVar13 * ((fVar11 * local_10._4_4_ - fVar13 * local_8) + fVar9 * param_2) -
            fVar14 * fVar10;
    fVar12 = fVar12 + param_2 + fVar12;
    if (param_3 != '\0') {
      local_1c = 0;
      local_10 = (double)fVar12;
      fVar7 = (float10)_CIatan2();
      local_10 = (double)fVar7;
      local_29c = &DAT_1201fc98;
      local_280 = &DAT_1201fc98;
      local_a8 = 0;
      local_264 = 0x3f800000;
      local_350 = 0x1000;
      local_14 = (float)fVar7 - DAT_11de993c;
      local_34c = 0;
      FUN_10ddd710(&local_1c);
      piVar6 = (int *)(**(code **)(**(int **)(*(int *)(iVar1 + 0x18) + 0x100) + 0x198))();
      (**(code **)(*piVar6 + 4))(&local_350);
      CInfoRecord__GetModelString("DODGE_FRONT",extraout_ECX_00,0,1,0,0);
      FUN_10f59ff0();
      FUN_10ba1fc0();
      goto LAB_10f736e6;
    }
    param_1 = extraout_ECX;
    if ((float)(double)((ulonglong)(double)(fVar9 + local_8 + fVar9) & DAT_11de9c70) <
        (float)(double)((ulonglong)(double)fVar12 & DAT_11de9c70)) {
      if (DAT_11de9890 < fVar12) {
        CInfoRecord__GetModelString("DODGE_RIGHT",extraout_ECX,0,1,0,0);
        FUN_10f59ff0();
        return;
      }
      CInfoRecord__GetModelString("DODGE_LEFT",extraout_ECX,0,1,0,0);
      FUN_10f59ff0();
      return;
    }
  }
  CInfoRecord__GetModelString("DODGE_FRONT",param_1,0,1,0,0);
  FUN_10f59ff0();
LAB_10f736e6:
  cVar3 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x18) + 0x100) + 0x7bc))();
  iVar1 = **(int **)(*(int *)(iVar1 + 0x18) + 0x100);
  if (cVar3 != '\0') {
    (**(code **)(iVar1 + 0x600))("PLLocomotion","HolsteredIdle");
    return;
  }
  (**(code **)(iVar1 + 0x600))("PLLocomotion","UnholsteredIdle");
  return;
}


// ================= FUN_10ff0890 @ 10ff0890 =================

/* [RE-AUTO c0]
   strings:
     ""COMBAT_IDLE""
     ""PLCombat""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""COMBAT_PL05_AIM"" */

void __fastcall FUN_10ff0890(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  FUN_1083ab70("COMBAT_IDLE",0xb);
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10ff1400;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff1400;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = (code *)&DAT_10ff1460;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10ff1460;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10ff06f0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff06f0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLCombat");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_PL05_AIM",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f70800 @ 10f70800 =================

/* [RE-AUTO c0]
   strings:
     ""ABNORMAL_RESTRICTED_THROWPOO""
     ""RestrictedThrowPooEnd""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLCombatAction""
     ""COMBAT_IDLE""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f70800(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0x2a;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x2a;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("ABNORMAL_RESTRICTED_THROWPOO",iVar2);
  FUN_10f58340();
  FUN_10f56fa0("RestrictedThrowPooEnd");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX_00,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_01,local_44);
  FUN_10f593b0();
  FUN_10f5bd40(6,&DAT_10f9c8c0);
  FUN_10f5bd40(7,FUN_10f9c8d0);
  FUN_10f5bd40(9,FUN_10f9c930);
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  return;
}


// ================= FUN_10f70b00 @ 10f70b00 =================

/* [RE-AUTO c0]
   strings:
     ""ABNORMAL_RESTRICTED""
     ""RestrictedEnd""
     ""PLBaseAction""
     ""PLInjurySignal""
     ""RestrictedThrowPoo""
     ""ABNORMAL_RESTRICTED_THROWPOO""
     ""RestrictedQTE""
     ""ABNORMAL_RESTRICTED_QTE""
     ""PLLocomotion""
     ""UnholsteredIdle"" */

void __fastcall FUN_10f70b00(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int local_15c [8];
  int local_13c;
  int local_130;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x29;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x29;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("ABNORMAL_RESTRICTED",iVar2);
  FUN_10f58340();
  FUN_10f56fa0("RestrictedEnd");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f70f40(param_1);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0("RestrictedThrowPoo");
  FUN_10f573e0();
  FUN_10f56fa0("ABNORMAL_RESTRICTED_THROWPOO",extraout_ECX_00,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0("RestrictedQTE");
  FUN_10f573e0();
  FUN_10f56fa0("ABNORMAL_RESTRICTED_QTE",extraout_ECX_01,local_ec);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX_02,local_44);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_03,local_b4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f5a480(1,0,local_15c);
  FUN_10f574b0();
  FUN_10f5a480(2,1,local_124);
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f9cdf0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9cdf0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f5bd40(6,FUN_10f9cb10);
  FUN_10f5bd40(7,FUN_10f9cbe0);
  FUN_10f5bd40(9,FUN_10f9cc50);
  if (local_f8 != 0) {
    FUN_10c3d5d0(local_f8);
  }
  if (local_104 != 0) {
    FUN_10c3d5d0(local_104);
  }
  if (local_124[0] != 0) {
    FUN_10c3d5d0(local_124[0]);
  }
  if (local_130 != 0) {
    FUN_10c3d5d0(local_130);
  }
  if (local_13c != 0) {
    FUN_10c3d5d0(local_13c);
  }
  if (local_15c[0] != 0) {
    FUN_10c3d5d0(local_15c[0]);
  }
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_c0 != 0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_ec[0] != 0) {
    FUN_10c3d5d0(local_ec[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  return;
}


// ================= FUN_10f70520 @ 10f70520 =================

/* [RE-AUTO c0]
   strings:
     ""ABNORMAL_RESTRICTED_QTE""
     ""RestrictedQTE""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLCombatAction""
     ""COMBAT_IDLE""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f70520(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0x2b;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x2b;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("ABNORMAL_RESTRICTED_QTE",iVar2);
  FUN_10f58340();
  FUN_10f56fa0("RestrictedQTE");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX_00,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_01,local_44);
  FUN_10f593b0();
  FUN_10f5bd40(6,&DAT_10f9d0c0);
  FUN_10f5bd40(7,FUN_10f9d0d0);
  FUN_10f5bd40(9,FUN_10f9d130);
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  return;
}


// ================= FUN_10f71d30 @ 10f71d30 =================

/* [RE-AUTO c0]
   strings:
     ""PLBaseAction""
     ""PLBaseSignal""
     ""ReviveUp""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""NORMAL_REVIVEUP""
     ""NORMAL_CATHANDCART"" */

void __fastcall FUN_10f71d30(int param_1)

{
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *puVar1;
  int local_84 [8];
  int local_64;
  int local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c [8];
  int local_2c;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  code *local_14;
  undefined4 local_10;
  code *local_c;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  CInfoRecord__GetModelString(&DAT_11cfcabc,param_1);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x88;
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = (code *)&DAT_10f72160;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10f72160;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f9ec50;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9ec50;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f9ea90;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9ea90;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10f9eca0);
  FUN_10f56e50();
  local_14 = FUN_10f9ed30;
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ReviveUp");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  if (local_54 == local_50) {
    FUN_10fb5990(local_54,&local_14,&local_5,1,1);
    puVar1 = extraout_ECX;
  }
  else {
    if (local_54 != (undefined4 *)0x0) {
      *local_54 = local_14;
      local_54[1] = local_10;
    }
    puVar1 = local_54 + 2;
    local_54 = puVar1;
  }
  FUN_10f56fa0("NORMAL_REVIVEUP",puVar1,local_84);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ReviveUp");
  FUN_10f573e0();
  if (local_1c == local_18) {
    FUN_10fb5990(local_1c,&local_14,&local_5,1,1);
    puVar1 = extraout_ECX_00;
  }
  else {
    if (local_1c != (undefined4 *)0x0) {
      *local_1c = local_14;
      local_1c[1] = local_10;
    }
    puVar1 = local_1c + 2;
    local_1c = puVar1;
  }
  FUN_10f56fa0("NORMAL_CATHANDCART",puVar1,local_4c);
  FUN_10f593b0();
  if (local_20 != 0) {
    FUN_10c3d5d0(local_20);
  }
  if (local_2c != 0) {
    FUN_10c3d5d0(local_2c);
  }
  if (local_4c[0] != 0) {
    FUN_10c3d5d0(local_4c[0]);
  }
  if (local_58 != 0) {
    FUN_10c3d5d0(local_58);
  }
  if (local_64 != 0) {
    FUN_10c3d5d0(local_64);
  }
  if (local_84[0] != 0) {
    FUN_10c3d5d0(local_84[0]);
  }
  return;
}


// ================= CPlayerRage_PL05::EnterRageShoot @ 10ff1200 =================

/* [RE-R1]
   strings:
     ""COMBAT_PL05_RAGE_SHOOT""
     ""RageShoot""
     ""COMBAT_IDLE""
     ""PLLocomotion""
     ""UnholsteredIdle"" */

void __fastcall CPlayerRage_PL05__EnterRageShoot(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_PL05_RAGE_SHOOT",param_1);
  FUN_10f58340();
  FUN_10f56fa0("RageShoot");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("COMBAT_IDLE",0xb);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10ff1d80;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff1d80;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10ff06f0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff06f0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= CPetActionController::RegisterActionStates @ 10f769c0 =================

/* [RE-R1]
   strings:
     ""NORMAL_RUN""
     ""PLFlying""
     ""Evading""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""NORMAL_JUMP_EVADE""
     ""PLBaseSignal""
     ""TiredStand""
     ""NORMAL_TIREDSTAND""
     ""EatDrug"" */

void __fastcall CPetActionController__RegisterActionStates(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined1 local_874 [56];
  undefined1 local_83c [56];
  undefined1 local_804 [56];
  undefined1 local_7cc [56];
  undefined1 local_794 [56];
  undefined1 local_75c [56];
  undefined1 local_724 [56];
  undefined1 local_6ec [56];
  undefined1 local_6b4 [56];
  undefined1 local_67c [56];
  int local_644 [8];
  int local_624;
  int local_618;
  undefined1 local_60c [56];
  undefined1 local_5d4 [56];
  undefined1 local_59c [56];
  undefined1 local_564 [56];
  undefined1 local_52c [56];
  undefined1 local_4f4 [56];
  undefined1 local_4bc [56];
  undefined1 local_484 [56];
  undefined1 local_44c [56];
  undefined1 local_414 [56];
  undefined1 local_3dc [56];
  undefined1 local_3a4 [56];
  undefined1 local_36c [56];
  undefined1 local_334 [56];
  undefined1 local_2fc [56];
  undefined1 local_2c4 [56];
  int local_28c [8];
  int local_26c;
  int local_260;
  undefined1 local_254 [56];
  undefined1 local_21c [56];
  int local_1e4 [8];
  int local_1c4;
  int local_1b8;
  int local_1ac [8];
  int local_18c;
  int local_180;
  int local_174 [8];
  int local_154;
  int local_148;
  undefined1 local_13c [36];
  undefined4 *local_118;
  undefined4 *local_114;
  int local_104 [8];
  int local_e4;
  int local_d8;
  undefined4 *local_d4;
  undefined4 *local_d0;
  int local_cc [8];
  int local_ac;
  int local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  int local_94 [8];
  int local_74;
  int local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  int local_5c [8];
  int local_3c;
  int local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  code *local_24;
  undefined4 local_20;
  code *local_1c;
  undefined4 local_18;
  code *local_14;
  undefined4 local_10;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x17;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x17;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("NORMAL_RUN",iVar2);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x11;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10f9fc50;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9fc50;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  FUN_10fdbb90();
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10f9fd60;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9fd60;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = (code *)&DAT_10f73920;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10f73920;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  FUN_10f5bd40(6,FUN_10f74810);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fa03a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa03a0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = (code *)&LAB_10fa0040;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &LAB_10fa0040;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10fa0510);
  FUN_10f5bd40(6,FUN_10f9fb80);
  FUN_10f5bd40(6,CPetLocomotion__SelectCliffJumpOrFallAnim);
  puVar1 = *(undefined4 **)(param_1 + 0x11c);
  local_c = FUN_10fa16b0;
  if (puVar1 == *(undefined4 **)(param_1 + 0x120)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa16b0;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10fa1860;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa1860;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x110);
  local_c = FUN_10f9fd30;
  if (puVar1 == *(undefined4 **)(param_1 + 0x114)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9fd30;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f000000;
  FUN_10f56e50();
  FUN_10f574b0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0("Evading");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  local_c = FUN_10f74780;
  if (local_118 == local_114) {
    FUN_108716d0(local_118,&local_c,&local_5,1,1);
    uVar3 = extraout_ECX_01;
  }
  else {
    *local_118 = FUN_10f74780;
    local_118 = local_118 + 1;
    uVar3 = extraout_ECX_00;
  }
  FUN_10f56fa0("NORMAL_JUMP_EVADE",uVar3,local_13c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("TiredStand");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_TIREDSTAND",extraout_ECX_02,local_564);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatDrug");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_TAKE_DRUG",extraout_ECX_03,local_4f4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatMeat");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_TAKE_MEAT",extraout_ECX_04,local_484);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatMeat");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_TAKE_DRAGON_MEAT",extraout_ECX_05,local_414);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatDrug");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_TAKE_CHOCOLATE",extraout_ECX_06,local_3a4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("EatCokeMeat");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_TAKE_COKE_MEAT",extraout_ECX_07,local_334);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("StartFluteType1");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("FLUTE_TYPE_1",extraout_ECX_08,local_2c4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("StartFluteType2");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("FLUTE_TYPE_2",extraout_ECX_09,local_254);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("SetOnGround");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_SET_ON_GROUND",extraout_ECX_10,local_67c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("SetLargeBucket");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_SET_LARGE_BUCKET",extraout_ECX_11,local_52c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("SetSmallBucket");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_SET_SMALL_BUCKET",extraout_ECX_12,local_60c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Throw");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_THROW",extraout_ECX_13,local_4bc);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Smash");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_SMASH",extraout_ECX_14,local_5d4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("SharpenWeapon");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_SHARPENWEAPON",extraout_ECX_15,local_44c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("CollectPlant");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_COLLECT",extraout_ECX_16,local_21c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Strip");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_STRIP",extraout_ECX_17,local_3dc);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11cfd3a0);
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_MINE",extraout_ECX_18,local_6b4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0(&DAT_11ce0e14);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_GO_TO_CUISINE",extraout_ECX_19,local_874);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Catch");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CATCH",extraout_ECX_20,local_36c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CliffFalling_Parapet");
  FUN_10f573e0();
  FUN_10f56fa0("PARAPET_CLIFF_JUMP",extraout_ECX_21,local_804);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall_Parapet");
  FUN_10f573e0();
  FUN_10f56fa0("PARAPET_FALL",extraout_ECX_22,local_794);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CliffFalling");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CLIFF_JUMP",extraout_ECX_23,local_75c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX_24,local_7cc);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("FishBegin");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("FISH_BEGIN",extraout_ECX_25,local_6ec);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0("VehicleStay");
  FUN_10f573e0();
  FUN_10f56fa0("VEHICLE_STATE",extraout_ECX_26,local_83c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0("SpeedBoatStay");
  FUN_10f573e0();
  FUN_10f56fa0("VEHICLE_SPEEDBOAT_NORMAL",extraout_ECX_27,local_724);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("NetFishing");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NET_FISHING",extraout_ECX_28,local_2fc);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ClimbUp");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("ClimbLadder");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CLIMBLADDER",extraout_ECX_29,local_59c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("NORMAL_GOTO_LOWCLIMB",extraout_ECX_30,local_28c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("NORMAL_GOTO_MEDCLIMB",extraout_ECX_31,local_644);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("FindEgg");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FIND_EGG",extraout_ECX_32,local_1e4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("BakeStart");
  FUN_10f573e0();
  FUN_10f56fa0("BAKE_START",extraout_ECX_33,local_174);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX_34,local_1ac);
  FUN_10f593b0();
  FUN_10f56e50();
  local_24 = FUN_10fa1510;
  FUN_10f57080(&DAT_11d9e064);
  FUN_10f56e50();
  local_1c = FUN_10fa1510;
  FUN_10f57080(&DAT_11d9e074);
  FUN_10f574b0();
  FUN_10f56fa0("PLIsTired");
  FUN_10f56fa0("Tired");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredRun");
  FUN_10f573e0();
  local_14 = FUN_10fa13b0;
  if (local_64 == local_60) {
    FUN_10fb5990(local_64,&local_14,&local_5,1,1);
  }
  else {
    if (local_64 != (undefined4 *)0x0) {
      *local_64 = FUN_10fa13b0;
      local_64[1] = local_10;
    }
    local_64 = local_64 + 2;
  }
  FUN_10f5a480(1,0,local_94);
  FUN_10f5a480(1,3,local_94);
  if (local_64 == local_60) {
    FUN_10fb5990(local_64,&local_1c,&local_5,1,1);
  }
  else {
    if (local_64 != (undefined4 *)0x0) {
      *local_64 = local_1c;
      local_64[1] = local_18;
    }
    local_64 = local_64 + 2;
  }
  FUN_10f5a480(1,2,local_94);
  FUN_10f574b0();
  FUN_10f56fa0("PLIsTired");
  FUN_10f56fa0("BackToBoss");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredRun");
  FUN_10f573e0();
  local_14 = FUN_10fa1460;
  if (local_2c == local_28) {
    FUN_10fb5990(local_2c,&local_14,&local_5,1,1);
  }
  else {
    if (local_2c != (undefined4 *)0x0) {
      *local_2c = FUN_10fa1460;
      local_2c[1] = local_10;
    }
    local_2c = local_2c + 2;
  }
  if (local_2c == local_28) {
    FUN_10fb5990(local_2c,&local_24,&local_5,1,1);
  }
  else {
    if (local_2c != (undefined4 *)0x0) {
      *local_2c = local_24;
      local_2c[1] = local_20;
    }
    local_2c = local_2c + 2;
  }
  FUN_10f5a480(2,0,local_5c);
  FUN_10f5a480(2,1,local_5c);
  FUN_10f5a480(2,3,local_5c);
  FUN_10f574b0();
  FUN_10f56fa0("PLIsTired");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  local_14 = FUN_10fa1550;
  if (local_d4 == local_d0) {
    FUN_10fb5990(local_d4,&local_14,&local_5,1,1);
  }
  else {
    if (local_d4 != (undefined4 *)0x0) {
      *local_d4 = FUN_10fa1550;
      local_d4[1] = local_10;
    }
    local_d4 = local_d4 + 2;
  }
  FUN_10f5a480(0,1,local_104);
  FUN_10f5a480(0,3,local_104);
  if (local_d4 == local_d0) {
    FUN_10fb5990(local_d4,&local_1c,&local_5,1,1);
  }
  else {
    if (local_d4 != (undefined4 *)0x0) {
      *local_d4 = local_1c;
      local_d4[1] = local_18;
    }
    local_d4 = local_d4 + 2;
  }
  FUN_10f5a480(0,2,local_104);
  FUN_10f574b0();
  FUN_10f56fa0("PLIsTired");
  FUN_10f56fa0("CreepRun");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredRun");
  FUN_10f573e0();
  local_14 = FUN_10fa1600;
  if (local_9c == local_98) {
    FUN_10fb5990(local_9c,&local_14,&local_5,1,1);
  }
  else {
    if (local_9c != (undefined4 *)0x0) {
      *local_9c = FUN_10fa1600;
      local_9c[1] = local_10;
    }
    local_9c = local_9c + 2;
  }
  FUN_10f5a480(3,1,local_cc);
  FUN_10f5a480(3,0,local_cc);
  if (local_9c == local_98) {
    FUN_10fb5990(local_9c,&local_1c,&local_5,1,1);
  }
  else {
    if (local_9c != (undefined4 *)0x0) {
      *local_9c = local_1c;
      local_9c[1] = local_18;
    }
    local_9c = local_9c + 2;
  }
  FUN_10f5a480(3,2,local_cc);
  if (local_a0 != 0) {
    FUN_10c3d5d0(local_a0);
  }
  if (local_ac != 0) {
    FUN_10c3d5d0(local_ac);
  }
  if (local_cc[0] != 0) {
    FUN_10c3d5d0(local_cc[0]);
  }
  if (local_d8 != 0) {
    FUN_10c3d5d0(local_d8);
  }
  if (local_e4 != 0) {
    FUN_10c3d5d0(local_e4);
  }
  if (local_104[0] != 0) {
    FUN_10c3d5d0(local_104[0]);
  }
  if (local_30 != 0) {
    FUN_10c3d5d0(local_30);
  }
  if (local_3c != 0) {
    FUN_10c3d5d0(local_3c);
  }
  if (local_5c[0] != 0) {
    FUN_10c3d5d0(local_5c[0]);
  }
  if (local_68 != 0) {
    FUN_10c3d5d0(local_68);
  }
  if (local_74 != 0) {
    FUN_10c3d5d0(local_74);
  }
  if (local_94[0] != 0) {
    FUN_10c3d5d0(local_94[0]);
  }
  if (local_180 != 0) {
    FUN_10c3d5d0(local_180);
  }
  if (local_18c != 0) {
    FUN_10c3d5d0(local_18c);
  }
  if (local_1ac[0] != 0) {
    FUN_10c3d5d0(local_1ac[0]);
  }
  if (local_148 != 0) {
    FUN_10c3d5d0(local_148);
  }
  if (local_154 != 0) {
    FUN_10c3d5d0(local_154);
  }
  if (local_174[0] != 0) {
    FUN_10c3d5d0(local_174[0]);
  }
  if (local_1b8 != 0) {
    FUN_10c3d5d0(local_1b8);
  }
  if (local_1c4 != 0) {
    FUN_10c3d5d0(local_1c4);
  }
  if (local_1e4[0] != 0) {
    FUN_10c3d5d0(local_1e4[0]);
  }
  if (local_618 != 0) {
    FUN_10c3d5d0(local_618);
  }
  if (local_624 != 0) {
    FUN_10c3d5d0(local_624);
  }
  if (local_644[0] != 0) {
    FUN_10c3d5d0(local_644[0]);
  }
  if (local_260 != 0) {
    FUN_10c3d5d0(local_260);
  }
  if (local_26c != 0) {
    FUN_10c3d5d0(local_26c);
  }
  if (local_28c[0] != 0) {
    FUN_10c3d5d0(local_28c[0]);
  }
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  FUN_10f61a80();
  return;
}


// ================= FUN_10f75060 @ 10f75060 =================

/* [RE-AUTO c0]
   strings:
     ""HolsteredIdle""
     ""UnholsteredIdle""
     ""PLLocomotion"" */

void FUN_10f75060(int param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  
  cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x7bc))();
  if (cVar1 == '\0') {
    FUN_10f15e70();
    pcVar3 = "UnholsteredIdle";
  }
  else {
    pcVar3 = "HolsteredIdle";
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))("PLLocomotion",pcVar3);
  piVar2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
  (**(code **)(*piVar2 + 0x5c))();
  piVar2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
                    /* WARNING: Could not recover jumptable at 0x10f750dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x54))();
  return;
}


// ================= FUN_10d68ed0 @ 10d68ed0 =================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""NORMAL_IDLE_VIEW""
     ""NORMAL_IDLE_SELECT""
     ""HolsteredIdleCreate""
     ""PLLocomotion"" */

void __thiscall
FUN_10d68ed0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,int param_8,undefined4 param_9,uint param_10,
            uint param_11,uint param_12)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 extraout_ECX;
  undefined4 *puVar9;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 *puVar10;
  float fVar11;
  char *_Str;
  undefined1 local_b0 [24];
  undefined1 local_98 [20];
  undefined4 local_84;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  int iStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  local_1c = param_1;
  piVar3 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x124))();
  if (piVar3 == (int *)0x0) {
    return;
  }
  local_18 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x790))();
  if (iVar4 == 0) {
    return;
  }
  local_20 = (int *)piVar3[3];
  if (local_20 == (int *)0x0) {
    return;
  }
  CInfoRecord__GetModelString("NORMAL_IDLE_VIEW",extraout_ECX);
  iVar4 = FUN_10fb8080();
  if (iVar4 == 0) {
    return;
  }
  FUN_10520070();
  iVar4 = FUN_10849910(param_5);
  if (iVar4 != 0) {
    if (param_3 == 0) {
      puVar5 = (undefined1 *)(iVar4 + 0x14);
    }
    else {
      puVar5 = (undefined1 *)(iVar4 + 0x2c);
    }
    if (puVar5 != local_98) {
      FUN_100d83d0(*(undefined4 *)(puVar5 + 0x14),*(undefined4 *)(puVar5 + 0x10));
    }
  }
  iVar4 = FUN_1052c870(param_6);
  if (iVar4 != 0) {
    param_5 = 4;
    iVar6 = FUN_1053b770(&param_5);
    if (param_3 == 0) {
      if (iVar4 + 0x14 != iVar6) {
        FUN_100d83d0(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x24));
      }
      param_5 = 3;
      iVar6 = FUN_1053b770(&param_5);
      if (iVar4 + 0x2c != iVar6) {
        FUN_100d83d0(*(undefined4 *)(iVar4 + 0x40),*(undefined4 *)(iVar4 + 0x3c));
      }
      iVar4 = iVar4 + 0x44;
    }
    else {
      if (iVar4 + 0x5c != iVar6) {
        FUN_100d83d0(*(undefined4 *)(iVar4 + 0x70),*(undefined4 *)(iVar4 + 0x6c));
      }
      param_5 = 3;
      iVar6 = FUN_1053b770(&param_5);
      if (iVar4 + 0x74 != iVar6) {
        FUN_100d83d0(*(undefined4 *)(iVar4 + 0x88),*(undefined4 *)(iVar4 + 0x84));
      }
      iVar4 = iVar4 + 0x8c;
    }
    param_5 = 5;
    iVar6 = FUN_1053b770(&param_5);
    if (iVar4 != iVar6) {
      FUN_100d83d0(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x10));
    }
  }
  (**(code **)(*(int *)piVar3[3] + 0x1b8))(0);
  CAvatarInfo__ApplyAppearanceData(local_b0,0);
  iVar4 = param_3;
  if (param_3 == *(int *)(param_1 + 0xd80)) {
    (**(code **)(*piVar3 + 0x790))();
    cVar2 = FUN_10fd4710();
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 0x790))();
      FUN_10fdb820();
      FUN_10f171a0(*(undefined4 *)(param_1 + 0xd80),param_4,0);
      bVar1 = false;
      goto LAB_10d690e0;
    }
  }
  *(int *)(param_1 + 0xd80) = iVar4;
  FUN_10f171a0(iVar4,param_4,1);
  (**(code **)(*(int *)piVar3[3] + 0x120))(1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  bVar1 = true;
  *(undefined4 *)(param_1 + 0x2c) = 1;
LAB_10d690e0:
  *(undefined4 *)(param_1 + 0xd9c) = param_4;
  *(undefined4 *)(param_1 + 0xda4) = *(undefined4 *)(param_2 + 0x28);
  *(uint *)(param_1 + 0xda8) = param_11;
  *(int *)(param_1 + 0xda0) = param_8;
  if (bVar1) {
    local_14 = _DAT_11cbf0e0;
    iStack_10 = _UNK_11cbf0e4;
    puStack_c = _UNK_11cbf0e8;
    puStack_8 = (undefined4 *)_UNK_11cbf0ec;
    (**(code **)(*local_20 + 0xb0))(&local_14,0);
    FUN_10d664d0("NORMAL_IDLE_SELECT");
    piVar7 = (int *)(**(code **)(*piVar3 + 0x10c))();
    (**(code **)(*piVar7 + 0xfc))("PLLocomotion","HolsteredIdleCreate");
  }
  else {
    (**(code **)(*piVar3 + 0x790))();
    FUN_10fdb8a0();
  }
  FUN_10d67730();
  iVar4 = 0x17;
  puVar9 = (undefined4 *)(param_1 + 0xdb0);
  puVar10 = (undefined4 *)(param_2 + 0x34);
  do {
    puVar9[-1] = puVar10[-1];
    *puVar9 = *puVar10;
    iVar4 = iVar4 + -1;
    puVar9 = puVar9 + 2;
    puVar10 = puVar10 + 2;
  } while (iVar4 != 0);
  FUN_10efcf50(param_1 + 0xdac,1);
  puStack_8 = (undefined4 *)(float)((double)(param_12 & 0xff) + DAT_11de9c60);
  FUN_10f1e010(CONCAT44((float)((double)(param_12 >> 8 & 0xff) + DAT_11de9c60),
                        (float)((double)(param_12 >> 0x10 & 0xff) + DAT_11de9c60)),puStack_8,0);
  FUN_10f1e0a0((float)((double)param_8 + (&DAT_11de9c60)[-(param_8 >> 0x1f)]) / DAT_11de9a30,0);
  fVar11 = (float)*(int *)(param_2 + 0x28) / DAT_11de9a24;
  if (fVar11 < DAT_11ce6094) {
    fVar11 = DAT_11ce6094;
  }
  FUN_10f1e260(fVar11);
  puStack_8 = (undefined4 *)(float)((double)(param_7 & 0xff) + DAT_11de9c60);
  FUN_10f1e150(CONCAT44((float)((double)(param_7 >> 8 & 0xff) + DAT_11de9c60),
                        (float)((double)(param_7 >> 0x10 & 0xff) + DAT_11de9c60)),puStack_8,0);
  puStack_8 = (undefined4 *)(float)((double)(param_11 & 0xff) + DAT_11de9c60);
  FUN_10f1e350(CONCAT44((float)((double)(param_11 >> 8 & 0xff) + DAT_11de9c60),
                        (float)((double)(param_11 >> 0x10 & 0xff) + DAT_11de9c60)),puStack_8,0);
  puStack_8 = (undefined4 *)(float)((double)(param_10 & 0xff) + DAT_11de9c60);
  FUN_10f1e300(CONCAT44((float)((double)(param_10 >> 8 & 0xff) + DAT_11de9c60),
                        (float)((double)(param_10 >> 0x10 & 0xff) + DAT_11de9c60)),puStack_8,0);
  iVar4 = FUN_10849e90(param_9);
  uVar8 = extraout_ECX_00;
  if (iVar4 != 0) {
    if (param_3 == 0) {
      _Str = *(char **)(iVar4 + 0x28);
    }
    else {
      _Str = *(char **)(iVar4 + 0x40);
    }
    iVar4 = atoi(_Str);
    FUN_10f1e1e0(iVar4);
    uVar8 = extraout_ECX_01;
  }
  iVar4 = *piVar3;
  CInfoRecord__GetModelString(&DAT_11d9d32b,uVar8,0);
  CInfoRecord__GetModelString(local_84,extraout_ECX_02);
  (**(code **)(iVar4 + 0x32c))();
  iVar4 = FUN_10a76eb0(param_4);
  if (iVar4 != 0) {
    iVar6 = *piVar3;
    if (param_3 == 0) {
      uVar8 = *(undefined4 *)(iVar4 + 0x28);
    }
    else {
      uVar8 = *(undefined4 *)(iVar4 + 0x40);
    }
    CInfoRecord__GetModelString(&DAT_11d9d32b,extraout_ECX_03,0);
    CInfoRecord__GetModelString(uVar8,extraout_ECX_04);
    (**(code **)(iVar6 + 0x32c))();
  }
  FUN_10f02dc0();
  param_3 = 4;
  iVar6 = FUN_1053b770(&param_3);
  iVar4 = *piVar3;
  uVar8 = *(undefined4 *)(iVar6 + 0x14);
  CInfoRecord__GetModelString(&DAT_11d9d32b,extraout_ECX_05,0);
  CInfoRecord__GetModelString(uVar8,extraout_ECX_06);
  (**(code **)(iVar4 + 0x32c))();
  param_3 = 3;
  iVar6 = FUN_1053b770(&param_3);
  iVar4 = *piVar3;
  uVar8 = *(undefined4 *)(iVar6 + 0x14);
  CInfoRecord__GetModelString(&DAT_11d9d32b,extraout_ECX_07,0);
  CInfoRecord__GetModelString(uVar8,extraout_ECX_08);
  (**(code **)(iVar4 + 0x32c))();
  param_3 = 5;
  iVar6 = FUN_1053b770(&param_3);
  iVar4 = *piVar3;
  uVar8 = *(undefined4 *)(iVar6 + 0x14);
  CInfoRecord__GetModelString(&DAT_11d9d32b,extraout_ECX_09,0);
  CInfoRecord__GetModelString(uVar8,extraout_ECX_10);
  (**(code **)(iVar4 + 0x32c))();
  piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar7 = (int *)(**(code **)(*piVar7 + 0x124))();
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x2c4))(0);
    *(undefined4 *)(local_1c + 0xd88) = 0;
  }
  if (((int *)piVar3[3] != (int *)0x0) &&
     (iVar4 = (**(code **)(*(int *)piVar3[3] + 0x1b8))(0), iVar4 != 0)) {
    iStack_10 = 0;
    puStack_c = (undefined4 *)0x0;
    puStack_8 = (undefined4 *)0x0;
    puVar9 = local_34;
    if (local_34 != local_30) {
      do {
        if (puStack_c == puStack_8) {
          FUN_1053b850(puStack_c,puVar9,(int)&param_3 + 3,1,1);
        }
        else {
          *puStack_c = *puVar9;
          puStack_c = puStack_c + 1;
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != local_30);
    }
    piVar3 = (int *)piVar3[3];
    piVar7 = (int *)(**(code **)(*piVar3 + 0x1b8))(0);
    iVar4 = *piVar7;
    uVar8 = (**(code **)(*piVar3 + 0x48))(&iStack_10,0x3f800000);
    (**(code **)(iVar4 + 0x1e4))(uVar8);
    piVar3 = local_18;
    if (iStack_10 != 0) {
      FUN_10c3d5d0(iStack_10);
      piVar3 = local_18;
    }
  }
  (**(code **)(*(int *)piVar3[3] + 0x2f8))(1,0);
  FUN_10516930();
  return;
}


// ================= CPlayerRageRush::EnterRageRushToIdle @ 10fee5b0 =================

/* [RE-R1]
   strings:
     ""RageRushToIdle""
     ""Fire_Ability_Mst.CST.FireBallSparkM_MST""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""COMBAT_PL04_RAGERUSH_END"" */

void __fastcall CPlayerRageRush__EnterRageRushToIdle(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = FUN_10fee1e0;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x11;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fee1e0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = CPlayerRageRush__OnLowHighLeave_B;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = CPlayerRageRush__OnLowHighLeave_B;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f5bd40(6,CPlayerRageRush__UpdateEnergyDrain);
  FUN_10f56fa0("RageRushToIdle");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("Fire_Ability_Mst.CST.FireBallSparkM_MST",0x27);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_PL04_RAGERUSH_END",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f6fe20 @ 10f6fe20 =================

/* [RE-AUTO c0]
   strings:
     ""Bip01 Head""
     ""ABNORMAL_QUAKE""
     ""COMBAT_IDLE""
     ""UnholsteredIdle""
     ""PLLocomotion""
     ""UnholsteredIdle(Sword)""
     ""PLCombatAction""
     ""NORMAL_IDLE""
     ""HolsteredIdle"" */

void FUN_10f6fe20(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  bool bVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  FUN_10f15e70();
  piVar9 = *(int **)(iVar2 + 0x1c8);
  if (piVar9 != *(int **)(iVar2 + 0x1cc)) {
    while (iVar6 = *piVar9, *(int *)(iVar6 + 4) != 0) {
      piVar9 = piVar9 + 1;
      if (piVar9 == *(int **)(iVar2 + 0x1cc)) {
        return;
      }
    }
    if (iVar6 != 0) {
      iVar7 = 0;
      *(undefined2 *)(iVar6 + 0x18) = 0x100;
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *(undefined1 *)(iVar6 + 0x1a) = 0;
      *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x20);
      if (0 < *(int *)(iVar6 + 0x20)) {
        do {
          local_14 = 0xc2a00000;
          local_c = ((float)iVar7 * DAT_11de9a40) / (float)*(int *)(iVar6 + 0x24);
          local_10 = 0;
          local_20 = 0;
          local_1c = 0x3e4ccccd;
          local_18 = 0xbe800000;
          (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0x18) + 0x100) + 0xc) + 0x1e8))
                    (*(undefined4 *)(iVar6 + 0x1c),"Bip01 Head",&local_20,&local_14,0x3f800000,0,1,1
                     ,0,0);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar6 + 0x24));
      }
      if (*(char *)(iVar6 + 8) != '\0') {
        cVar3 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x7bc))();
        if (cVar3 == '\0') {
          local_8 = *(undefined4 *)(iVar2 + 0x50);
          pcVar8 = "ABNORMAL_QUAKE";
          pbVar4 = (byte *)FUN_10f57110();
          do {
            bVar1 = *pbVar4;
            bVar10 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10f6ff68:
              uVar5 = -(uint)bVar10 | 1;
              goto LAB_10f6ff6d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar10 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10f6ff68;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_10f6ff6d:
          if (uVar5 != 0) {
            CInfoRecord__GetModelString("COMBAT_IDLE");
            cVar3 = FUN_10fdc0a0(&param_1);
            FUN_10f57080(param_1);
            (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                      ("PLLocomotion","UnholsteredIdle");
            if (cVar3 == '\x01') {
              pcVar8 = "UnholsteredIdle(Sword)";
            }
            else {
              pcVar8 = "Null";
            }
            (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                      ("PLCombatAction",pcVar8);
            iVar2 = param_1;
            piVar9 = (int *)(param_1 + -0xc);
            if (*piVar9 < 0) {
              return;
            }
            iVar6 = FUN_10c3dad0(piVar9);
            if (0 < iVar6) {
              return;
            }
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar2 + -4));
            FUN_10c3d900(piVar9);
            return;
          }
        }
        FUN_10f57080("NORMAL_IDLE");
        (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                  ("PLLocomotion","HolsteredIdle");
      }
    }
  }
  return;
}


// ================= FUN_10fef020 @ 10fef020 =================

/* [RE-AUTO c0]
   strings:
     ""ATTACK_FLY""
     ""FlyAttackEnd""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLFlying""
     ""PLInjurySignal""
     ""PLCombat""
     ""COMBAT_IDLE""
     ""HolsteredIdle""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10fef020(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_f8 [8];
  int local_d8;
  int local_cc;
  int local_c0 [8];
  int local_a0;
  int local_94;
  int local_88 [8];
  int local_68;
  int local_5c;
  int local_50 [8];
  int local_30;
  int local_24;
  undefined4 local_10;
  code *local_c;
  undefined1 local_5;
  
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x80;
  *(undefined1 *)(param_1 + 0x70) = 1;
  CInfoRecord__GetModelString("ATTACK_FLY",param_1);
  FUN_10f58340();
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10ff0000;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff0000;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10ff0100);
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10ff0460;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff0460;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10ff0530;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10ff0530;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  FUN_10f56fa0("FlyAttackEnd");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  *(ulonglong *)(param_1 + 0x1d8) = (ulonglong)DAT_11cbf0b4 << 0x20;
  *(undefined1 **)(param_1 + 0x1e0) = &DAT_41200000;
  *(undefined8 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0xc1700000;
  local_10 = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombat");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_88);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombat");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_00,local_50);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("FlyAttackCombo");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombat");
  FUN_10f56fa0("FlyAttackCombo1");
  FUN_10f573e0();
  FUN_10f5a480(1,0,local_f8);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("FlyAttack");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombat");
  FUN_10f56fa0("FlyAttackEnd");
  FUN_10f573e0();
  FUN_10f5a480(2,0,local_c0);
  FUN_10f5a480(2,1,local_c0);
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_a0 != 0) {
    FUN_10c3d5d0(local_a0);
  }
  if (local_c0[0] != 0) {
    FUN_10c3d5d0(local_c0[0]);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_d8 != 0) {
    FUN_10c3d5d0(local_d8);
  }
  if (local_f8[0] != 0) {
    FUN_10c3d5d0(local_f8[0]);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_30 != 0) {
    FUN_10c3d5d0(local_30);
  }
  if (local_50[0] != 0) {
    FUN_10c3d5d0(local_50[0]);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_68 != 0) {
    FUN_10c3d5d0(local_68);
  }
  if (local_88[0] != 0) {
    FUN_10c3d5d0(local_88[0]);
  }
  return;
}


// ================= FUN_10fef560 @ 10fef560 =================

/* [RE-AUTO c0]
   strings:
     ""HolsteredIdle""
     ""PLLocomotion""
     ""PLCombat"" */

void FUN_10fef560(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double in_XMM0_Qa;
  
  if (((param_1 != 0) &&
      (piVar1 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x790))(), iVar2 != 0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x10))(0);
    FUN_11a894ef();
    fVar3 = (float)in_XMM0_Qa * DAT_11de98b0 - *(float *)(param_1 + 500);
    if (*(float *)(param_1 + 0x1f0) <= fVar3 && fVar3 != *(float *)(param_1 + 0x1f0)) {
      *(undefined1 *)(param_1 + 0x1f8) = 0;
      (**(code **)(*piVar1 + 0x600))("PLLocomotion","HolsteredIdle");
      (**(code **)(*piVar1 + 0x600))("PLCombat",&DAT_11ce5cac);
      return;
    }
    if (*(char *)(param_1 + 0x1f8) != '\0') {
      if ((DAT_11de9890 < *(float *)(param_1 + 0x1fc)) &&
         (DAT_11de98e8 < (float)in_XMM0_Qa * DAT_11de98b0 - *(float *)(param_1 + 0x1fc))) {
        *(undefined4 *)(param_1 + 0x200) = 0;
      }
      fVar4 = (float)*(int *)(param_1 + 0x200) * DAT_11de98c4 + DAT_11de9918;
      fVar3 = DAT_11de9918;
      if ((fVar4 <= DAT_11de9918) || (fVar3 = DAT_11de9990, DAT_11de9990 <= fVar4)) {
        fVar4 = fVar3;
      }
      FUN_10fd9120((int)(fVar4 * DAT_11de9a30));
      return;
    }
    FUN_10fd9120(100);
  }
  return;
}


// ================= FUN_10f6c8f0 @ 10f6c8f0 =================

/* [RE-AUTO c0]
   strings:
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLFlying""
     ""PLInjurySignal""
     ""COMBAT_IDLE""
     ""HolsteredIdle""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f6c8f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = FUN_10f75060;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x84;
  *(undefined4 *)(param_1 + 0x1e4) = 100;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  *(undefined4 *)(param_1 + 0x1e0) = 1;
  *(undefined1 *)(param_1 + 0x1de) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f75060;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f6ce10;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f6ce10;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f6cf10;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f6cf10;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f6d020;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f6d020;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLInjurySignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  FUN_10f5bd40(6,FUN_10f6cfc0);
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  return;
}


// ================= FUN_10d67820 @ 10d67820 =================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""NORMAL_IDLE_VIEW""
     ""Interact_Avatar""
     ""PLBaseSignal""
     ""INTERACT_AVATAR""
     ""NORMAL_IDLE_SELECT""
     ""HolsteredIdleSelect""
     ""PLLocomotion""
     ""PLBaseAction"" */

void __fastcall FUN_10d67820(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x124))();
  if (piVar1 != (int *)0x0) {
    local_8 = (**(code **)(*piVar1 + 0x790))();
    if ((local_8 != 0) && (piVar3 = (int *)piVar1[3], piVar3 != (int *)0x0)) {
      CInfoRecord__GetModelString("NORMAL_IDLE_VIEW",extraout_ECX);
      iVar2 = FUN_10fb8080();
      if (iVar2 != 0) {
        local_18 = _DAT_11cbf0e0;
        uStack_14 = _UNK_11cbf0e4;
        uStack_10 = _UNK_11cbf0e8;
        uStack_c = _UNK_11cbf0ec;
        (**(code **)(*piVar3 + 0xb0))(&local_18,0);
        CPlayerFSM__TransitionToIdle(0);
        if ((*(char *)(param_1 + 0xd72) == '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
          *(undefined1 *)(param_1 + 0x10) = 1;
          *(undefined1 *)(param_1 + 0xd72) = 1;
          piVar1 = (int *)(**(code **)(*piVar1 + 0x10c))();
          (**(code **)(*piVar1 + 0xfc))("PLBaseSignal","Interact_Avatar");
          FUN_10d664d0("INTERACT_AVATAR");
          return;
        }
        FUN_10d664d0("NORMAL_IDLE_SELECT");
        piVar3 = (int *)(**(code **)(*piVar1 + 0x10c))();
        (**(code **)(*piVar3 + 0xfc))("PLLocomotion","HolsteredIdleSelect");
        piVar1 = (int *)(**(code **)(*piVar1 + 0x10c))();
        (**(code **)(*piVar1 + 0xfc))("PLBaseAction",&DAT_11ce5cac);
      }
    }
  }
  return;
}


// ================= CPlayerAnimGraph::RegisterStateTransitions @ 10fd99c0 =================

/* [RE-R1]
   strings:
     ""PLCombatAction""
     ""PLCombat""
     ""PLBaseSignal""
     ""PLBaseAction""
     ""PLIsTired""
     ""PLRebound""
     ""PLFlying""
     ""PLCharging""
     ""PLInjurySignal""
     ""WindPressure"" */

void CPlayerAnimGraph__RegisterStateTransitions(undefined4 param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  undefined4 extraout_ECX_36;
  undefined4 extraout_ECX_37;
  undefined4 extraout_ECX_38;
  undefined4 extraout_ECX_39;
  undefined4 extraout_ECX_40;
  undefined4 extraout_ECX_41;
  undefined4 extraout_ECX_42;
  undefined4 extraout_ECX_43;
  undefined4 extraout_ECX_44;
  undefined4 extraout_ECX_45;
  undefined4 extraout_ECX_46;
  undefined4 extraout_ECX_47;
  undefined4 extraout_ECX_48;
  undefined4 extraout_ECX_49;
  undefined4 extraout_ECX_50;
  undefined4 extraout_ECX_51;
  undefined4 extraout_ECX_52;
  undefined4 extraout_ECX_53;
  undefined4 extraout_ECX_54;
  undefined4 extraout_ECX_55;
  undefined4 extraout_ECX_56;
  undefined4 extraout_ECX_57;
  undefined4 extraout_ECX_58;
  undefined4 extraout_ECX_59;
  undefined4 extraout_ECX_60;
  undefined4 extraout_ECX_61;
  undefined4 extraout_ECX_62;
  undefined4 extraout_ECX_63;
  undefined4 extraout_ECX_64;
  undefined4 extraout_ECX_65;
  undefined4 extraout_ECX_66;
  undefined4 extraout_ECX_67;
  undefined4 extraout_ECX_68;
  undefined4 extraout_ECX_69;
  undefined4 extraout_ECX_70;
  undefined4 extraout_ECX_71;
  undefined4 extraout_ECX_72;
  undefined4 extraout_ECX_73;
  undefined4 extraout_ECX_74;
  undefined4 extraout_ECX_75;
  undefined4 extraout_ECX_76;
  undefined4 extraout_ECX_77;
  undefined4 extraout_ECX_78;
  undefined4 extraout_ECX_79;
  undefined4 extraout_ECX_80;
  undefined4 extraout_ECX_81;
  undefined4 extraout_ECX_82;
  undefined4 extraout_ECX_83;
  undefined4 extraout_ECX_84;
  undefined4 extraout_ECX_85;
  undefined4 extraout_ECX_86;
  undefined4 extraout_ECX_87;
  undefined4 extraout_ECX_88;
  undefined4 extraout_ECX_89;
  undefined4 extraout_ECX_90;
  undefined4 extraout_ECX_91;
  undefined4 extraout_ECX_92;
  undefined4 extraout_ECX_93;
  undefined4 extraout_ECX_94;
  undefined4 extraout_ECX_95;
  undefined4 extraout_ECX_96;
  undefined4 extraout_ECX_97;
  undefined4 extraout_ECX_98;
  undefined4 extraout_ECX_99;
  undefined4 extraout_ECX_x00100;
  undefined4 extraout_ECX_x00101;
  undefined4 extraout_ECX_x00102;
  undefined4 extraout_ECX_x00103;
  undefined4 extraout_ECX_x00104;
  undefined4 extraout_ECX_x00105;
  undefined4 extraout_ECX_x00106;
  undefined4 extraout_ECX_x00107;
  undefined4 extraout_ECX_x00108;
  undefined4 extraout_ECX_x00109;
  undefined4 extraout_ECX_x00110;
  undefined4 extraout_ECX_x00111;
  undefined4 extraout_ECX_x00112;
  undefined4 extraout_ECX_x00113;
  undefined4 extraout_ECX_x00114;
  undefined4 extraout_ECX_x00115;
  undefined4 extraout_ECX_x00116;
  undefined4 extraout_ECX_x00117;
  undefined4 extraout_ECX_x00118;
  undefined4 extraout_ECX_x00119;
  undefined4 extraout_ECX_x00120;
  undefined4 extraout_ECX_x00121;
  undefined4 extraout_ECX_x00122;
  undefined4 extraout_ECX_x00123;
  undefined4 extraout_ECX_x00124;
  undefined4 extraout_ECX_x00125;
  undefined4 extraout_ECX_x00126;
  undefined4 extraout_ECX_x00127;
  undefined4 extraout_ECX_x00128;
  undefined4 extraout_ECX_x00129;
  undefined4 extraout_ECX_x00130;
  undefined4 extraout_ECX_x00131;
  undefined4 extraout_ECX_x00132;
  undefined4 extraout_ECX_x00133;
  undefined4 extraout_ECX_x00134;
  undefined4 extraout_ECX_x00135;
  undefined4 extraout_ECX_x00136;
  undefined4 extraout_ECX_x00137;
  undefined4 extraout_ECX_x00138;
  undefined4 extraout_ECX_x00139;
  undefined4 extraout_ECX_x00140;
  int local_160 [8];
  int local_140;
  int local_134;
  int local_128 [8];
  int local_108;
  int local_fc;
  int local_f0 [8];
  int local_d0;
  int local_c4;
  int local_b8 [8];
  int local_98;
  int local_8c;
  int local_80 [8];
  int local_60;
  int local_54;
  int local_48 [11];
  int local_1c;
  int local_10;
  
  if (DAT_1203d0c0 == 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    FUN_10f56fa0("PLCombatAction");
    FUN_10f56fa0(&DAT_11ce5cac);
    FUN_10f573e0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0(&DAT_11ce5cac);
    FUN_10f573e0();
    FUN_10f56fa0("PLBaseSignal");
    FUN_10f56fa0(&DAT_11ce5cac);
    FUN_10f573e0();
    FUN_10f56fa0("PLBaseAction");
    FUN_10f56fa0(&DAT_11ce5cac);
    FUN_10f573e0();
    FUN_10f56fa0("PLIsTired");
    FUN_10f56fa0(&DAT_11ce5cac);
    FUN_10f573e0();
    FUN_10f56fa0("PLRebound");
    FUN_10f56fa0(&DAT_11ce5cac);
    FUN_10f573e0();
    FUN_10f56fa0("PLFlying");
    FUN_10f56fa0(&DAT_11ce5cac);
    FUN_10f573e0();
    FUN_10f56fa0("PLCharging");
    FUN_10f56fa0(&DAT_11ce5cac);
    FUN_10f573e0();
    FUN_10f574b0();
    FUN_10f57490(local_48);
    FUN_10f56fa0("PLInjurySignal");
    FUN_10f56fa0("WindPressure");
    FUN_10f573e0();
    FUN_10f57330("PLBaseAction","WindPressure");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_WINDPRESSURE",extraout_ECX,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","DragonWindPressure");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","DragonWindPressure");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_DRAGONWINDPRESSURE",extraout_ECX_00,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","InHale");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","InHaleStart");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_INHALE",extraout_ECX_01,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal",&DAT_11d04138);
    FUN_10f57080();
    FUN_10f57330("PLBaseAction",&DAT_11d04138);
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_ROAR",extraout_ECX_02,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal",&DAT_11cfcf44);
    FUN_10f57080();
    FUN_10f57330("PLBaseAction",&DAT_11cfcf44);
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_PIYO",extraout_ECX_03,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","EarthQuake");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","EarthQuake");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_QUAKE",extraout_ECX_04,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","Paralyse");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","Paralyse");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_PARALYSE",extraout_ECX_05,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","StartSleep");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","Sleeping");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_SLEEP",extraout_ECX_06,local_80);
    FUN_10fb71a0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("CarryHugeItemIdle");
    FUN_10f573e0();
    FUN_10f57330("PLInjurySignal",&DAT_11ce5cac);
    FUN_10f57080();
    FUN_10f57330("PLBaseAction",&DAT_11ce5cac);
    FUN_10f57080();
    FUN_10f57330("PLBaseSignal","signalMudStart");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_MUDMAN_START",extraout_ECX_07,local_80);
    FUN_10fb71a0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("CarryHugeItemIdle");
    FUN_10f573e0();
    FUN_10f57330("PLInjurySignal",&DAT_11ce5cac);
    FUN_10f57080();
    FUN_10f57330("PLBaseAction",&DAT_11ce5cac);
    FUN_10f57080();
    FUN_10f57330("PLBaseSignal",&DAT_11ce5cac);
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_MUDMAN_IDLE",extraout_ECX_08,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","Bound");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","Bound");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_BOUND",extraout_ECX_09,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal",&DAT_11d0417c);
    FUN_10f57080();
    FUN_10f57330("PLBaseAction",&DAT_11d0417c);
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_SINK",extraout_ECX_10,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal",&DAT_11d04184);
    FUN_10f57080();
    FUN_10f57330("PLBaseAction",&DAT_11d04184);
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_HAZE",extraout_ECX_11,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","Gluttony");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","Gluttony");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_GLUTTONY",extraout_ECX_12,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","Restricted");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","Restricted");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_RESTRICTED",extraout_ECX_13,local_80);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","HitFall");
    FUN_10f57080();
    FUN_10f57330("PLBaseAction","HitFall");
    FUN_10f57080();
    FUN_10f56fa0("ABNORMAL_HITFALL",extraout_ECX_14,local_80);
    FUN_10fb71a0();
    FUN_10f574b0();
    FUN_10f57490(local_48);
    FUN_10f56fa0("INJURY_LEVEL1_FRONT_RUN",extraout_ECX_15,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL1_BACK_RUN",extraout_ECX_16,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL14_FRONT_RUN",extraout_ECX_17,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL14_BACK_RUN",extraout_ECX_18,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL1_FRONT_RUN_SWORD",extraout_ECX_19,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL1_BACK_RUN_SWORD",extraout_ECX_20,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL14_FRONT_RUN_SWORD",extraout_ECX_21,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL14_BACK_RUN_SWORD",extraout_ECX_22,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("PLInjurySignal");
    FUN_10f56fa0("PLInjuryLevel1Front");
    FUN_10f573e0();
    FUN_10f56fa0("INJURY_LEVEL1_FRONT",extraout_ECX_23,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel1Front_SWORD");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL1_FRONT_SWORD",extraout_ECX_24,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0(&DAT_11d9d32b,extraout_ECX_25);
    FUN_10f56fa0("PLInjuryLevel1Back",extraout_ECX_26);
    FUN_10f56fa0("INJURY_LEVEL1_BACK",extraout_ECX_27,local_48 + 3,0);
    FUN_10fdc220(param_1);
    FUN_10f56fa0(&DAT_11d9d32b,extraout_ECX_28);
    FUN_10f56fa0("PLInjuryLevel2Front",extraout_ECX_29);
    FUN_10f56fa0("INJURY_LEVEL2_FRONT",extraout_ECX_30,local_48 + 3,0);
    FUN_10fdc220(param_1);
    FUN_10f56fa0(&DAT_11d9d32b,extraout_ECX_31);
    FUN_10f56fa0("PLInjuryLevel2Back",extraout_ECX_32);
    FUN_10f56fa0("INJURY_LEVEL2_BACK",extraout_ECX_33,local_48 + 3,0);
    FUN_10fdc220(param_1);
    FUN_10f56fa0(&DAT_11d9d32b,extraout_ECX_34);
    FUN_10f56fa0("PLInjuryLevel3Front",extraout_ECX_35);
    FUN_10f56fa0("INJURY_LEVEL3_FRONT",extraout_ECX_36,local_48 + 3,0);
    FUN_10fdc220(param_1);
    FUN_10f56fa0(&DAT_11d9d32b,extraout_ECX_37);
    FUN_10f56fa0("PLInjuryLevel3Back",extraout_ECX_38);
    FUN_10f56fa0("INJURY_LEVEL3_BACK",extraout_ECX_39,local_48 + 3,0);
    FUN_10fdc220(param_1);
    FUN_10f57330("PLInjurySignal","PLInjuryLevel4Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL4_FRONT",extraout_ECX_40,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL4_FRONT_SWORD",extraout_ECX_41,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel4Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL4_BACK",extraout_ECX_42,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL4_BACK_SWORD",extraout_ECX_43,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel5Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL5_FRONT",extraout_ECX_44,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL5_FRONT_SWORD",extraout_ECX_45,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel5Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL5_BACK",extraout_ECX_46,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL5_BACK_SWORD",extraout_ECX_47,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel6Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL6_FRONT",extraout_ECX_48,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL6_FRONT_SWORD",extraout_ECX_49,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel6Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL6_BACK",extraout_ECX_50,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL6_BACK_SWORD",extraout_ECX_51,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel7Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL7_FRONT",extraout_ECX_52,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL7_FRONT_SWORD",extraout_ECX_53,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel7Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL7_BACK",extraout_ECX_54,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL7_BACK_SWORD",extraout_ECX_55,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel8Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL8_FRONT",extraout_ECX_56,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL8_FRONT_SWORD",extraout_ECX_57,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel8Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL8_BACK",extraout_ECX_58,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL8_BACK_SWORD",extraout_ECX_59,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLFlying","FrontL9");
    FUN_10f57080();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel9FlyUpFront");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL9_FRONT",extraout_ECX_60,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL9_FRONT_SWORD",extraout_ECX_61,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel9FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL9");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL9_BACK",extraout_ECX_62,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL9_BACK_SWORD",extraout_ECX_63,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLFlying","FrontL10");
    FUN_10f57080();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel10FlyUpFront");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL10_FRONT",extraout_ECX_64,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL10_FRONT_SWORD",extraout_ECX_65,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel10FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL10");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL10_BACK",extraout_ECX_66,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL10_BACK_SWORD",extraout_ECX_67,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLFlying","FrontL11");
    FUN_10f57080();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel11FlyUpFront");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL11_FRONT",extraout_ECX_68,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL11_FRONT_SWORD",extraout_ECX_69,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel11FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL11");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL11_BACK",extraout_ECX_70,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL11_BACK_SWORD",extraout_ECX_71,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel12FlyUpFront");
    FUN_10f57080();
    FUN_10f57330("PLFlying","FrontL12");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL12_FRONT",extraout_ECX_72,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL12_FRONT_SWORD",extraout_ECX_73,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel12FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL12");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL12_BACK",extraout_ECX_74,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL12_BACK_SWORD",extraout_ECX_75,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel13FlyUpFront");
    FUN_10f57080();
    FUN_10f57330("PLFlying","FrontL13");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL13_FRONT",extraout_ECX_76,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL13_FRONT_SWORD",extraout_ECX_77,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel13FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL13");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL13_BACK",extraout_ECX_78,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL13_BACK_SWORD",extraout_ECX_79,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLFlying",&DAT_11ce5cac);
    FUN_10f57080();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel14Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL14_FRONT",extraout_ECX_80,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL14_FRONT_SWORD",extraout_ECX_81,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel14Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL14_BACK",extraout_ECX_82,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL14_BACK_SWORD",extraout_ECX_83,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel15Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL15_FRONT",extraout_ECX_84,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL15_FRONT_SWORD",extraout_ECX_85,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel15Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL15_BACK",extraout_ECX_86,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL15_BACK_SWORD",extraout_ECX_87,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel16Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL16_FRONT",extraout_ECX_88,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL16_FRONT_SWORD",extraout_ECX_89,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel16Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL16_BACK",extraout_ECX_90,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL16_BACK_SWORD",extraout_ECX_91,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel17Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL17_FRONT",extraout_ECX_92,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL17_FRONT_SWORD",extraout_ECX_93,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel17Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL17_BACK",extraout_ECX_94,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL17_BACK_SWORD",extraout_ECX_95,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel18Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL18_FRONT",extraout_ECX_96,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL18_FRONT_SWORD",extraout_ECX_97,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel18Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL18_BACK",extraout_ECX_98,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL18_FRONT_SWORD",extraout_ECX_99,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel19Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL19_FRONT",extraout_ECX_x00100,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL19_FRONT_SWORD",extraout_ECX_x00101,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel19Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL19_BACK",extraout_ECX_x00102,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL19_BACK_SWORD",extraout_ECX_x00103,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel20Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL20_FRONT",extraout_ECX_x00104,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL20_FRONT_SWORD",extraout_ECX_x00105,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel20Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL20_BACK",extraout_ECX_x00106,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL20_BACK_SWORD",extraout_ECX_x00107,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel21Front");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL21_FRONT",extraout_ECX_x00108,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL21_FRONT_SWORD",extraout_ECX_x00109,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel21Back");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL21_BACK",extraout_ECX_x00110,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL21_BACK_SWORD",extraout_ECX_x00111,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLFlying","FrontL22");
    FUN_10f57080();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel22FlyUpFront");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL22_FRONT",extraout_ECX_x00112,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL22_FRONT_SWORD",extraout_ECX_x00113,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel22FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL22");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL22_BACK",extraout_ECX_x00114,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL22_BACK_SWORD",extraout_ECX_x00115,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel23FlyUpFront");
    FUN_10f57080();
    FUN_10f57330("PLFlying","FrontL23");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL23_FRONT",extraout_ECX_x00116,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL23_FRONT_SWORD",extraout_ECX_x00117,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel23FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL23");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL23_BACK",extraout_ECX_x00118,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL23_BACK_SWORD",extraout_ECX_x00119,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel24FlyUpFront");
    FUN_10f57080();
    FUN_10f57330("PLFlying","FrontL24");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL24_FRONT",extraout_ECX_x00120,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL24_FRONT_SWORD",extraout_ECX_x00121,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel24FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL24");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL24_BACK",extraout_ECX_x00122,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL24_BACK_SWORD",extraout_ECX_x00123,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel25FlyUpFront");
    FUN_10f57080();
    FUN_10f57330("PLFlying","FrontL25");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL25_FRONT",extraout_ECX_x00124,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL25_FRONT_SWORD",extraout_ECX_x00125,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel25FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","BackL25");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL25_BACK",extraout_ECX_x00126,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL25_BACK_SWORD",extraout_ECX_x00127,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLFlying","Front26");
    FUN_10f57080();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel26FlyUpFront");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL26_FRONT",extraout_ECX_x00128,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL26_FRONT_SWORD",extraout_ECX_x00129,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f57330("PLInjurySignal","PLInjuryLevel26FlyUpBack");
    FUN_10f57080();
    FUN_10f57330("PLFlying","Back26");
    FUN_10f57080();
    FUN_10f56fa0("INJURY_LEVEL26_BACK",extraout_ECX_x00130,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f56fa0("INJURY_LEVEL26_BACK_SWORD",extraout_ECX_x00131,local_48 + 3);
    FUN_10fb71a0();
    FUN_10f574b0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLBaseAction",&DAT_11cfe774);
    FUN_10f57080();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("HolsteredIdle");
    FUN_10f573e0();
    FUN_10f56fa0(&DAT_11cfcabc,extraout_ECX_x00132,local_f0);
    FUN_10fb71a0();
    FUN_10f574b0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLRebound","Rebound1");
    FUN_10f57080();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10f56fa0("COMBAT_REBOUND_LV1",extraout_ECX_x00133,local_b8);
    FUN_10fb71a0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLRebound","Rebound2");
    FUN_10f57080();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10f56fa0("COMBAT_REBOUND_LV2",extraout_ECX_x00134,local_b8);
    FUN_10fb71a0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLRebound","Rebound3");
    FUN_10f57080();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10f56fa0("COMBAT_REBOUND_LV3",extraout_ECX_x00135,local_b8);
    FUN_10fb71a0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLRebound","PLChargeReboundlv1");
    FUN_10f57080();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredRun");
    FUN_10f573e0();
    FUN_10f57330("PLCharging","Stab_Charge");
    FUN_10f57080();
    FUN_10f56fa0("COMBAT_ChargeREBOUND_LV1",extraout_ECX_x00136,local_b8);
    FUN_10fb71a0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLRebound","PLChargeReboundlv2");
    FUN_10f57080();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredRun");
    FUN_10f573e0();
    FUN_10f57330("PLCharging","Stab_Charge");
    FUN_10f57080();
    FUN_10f56fa0("COMBAT_ChargeREBOUND_LV2",extraout_ECX_x00137,local_b8);
    FUN_10fb71a0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLRebound","PLChargeReboundlv3");
    FUN_10f57080();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredRun");
    FUN_10f573e0();
    FUN_10f57330("PLCharging","Stab_Charge");
    FUN_10f57080();
    FUN_10f56fa0("COMBAT_ChargeREBOUND_LV3",extraout_ECX_x00138,local_b8);
    FUN_10fb71a0();
    FUN_10f574b0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLBaseSignal","QuestComplete");
    FUN_10f57080();
    FUN_10f56fa0("QUEST_COMPLETE",extraout_ECX_x00139,local_160);
    FUN_10fb71a0();
    FUN_10f574b0();
    FUN_10f57490(local_48);
    FUN_10f57330("PLBaseSignal","QuestFail");
    FUN_10f57080();
    FUN_10f56fa0("QUEST_FAIL",extraout_ECX_x00140,local_128);
    FUN_10fb71a0();
    if (local_fc != 0) {
      FUN_10c3d5d0(local_fc);
    }
    if (local_108 != 0) {
      FUN_10c3d5d0(local_108);
    }
    if (local_128[0] != 0) {
      FUN_10c3d5d0(local_128[0]);
    }
    if (local_134 != 0) {
      FUN_10c3d5d0(local_134);
    }
    if (local_140 != 0) {
      FUN_10c3d5d0(local_140);
    }
    if (local_160[0] != 0) {
      FUN_10c3d5d0(local_160[0]);
    }
    if (local_8c != 0) {
      FUN_10c3d5d0(local_8c);
    }
    if (local_98 != 0) {
      FUN_10c3d5d0(local_98);
    }
    if (local_b8[0] != 0) {
      FUN_10c3d5d0(local_b8[0]);
    }
    if (local_c4 != 0) {
      FUN_10c3d5d0(local_c4);
    }
    if (local_d0 != 0) {
      FUN_10c3d5d0(local_d0);
    }
    if (local_f0[0] != 0) {
      FUN_10c3d5d0(local_f0[0]);
    }
    if (local_10 != 0) {
      FUN_10c3d5d0(local_10);
    }
    if (local_1c != 0) {
      FUN_10c3d5d0(local_1c);
    }
    if (local_48[3] != 0) {
      FUN_10c3d5d0(local_48[3]);
    }
    if (local_54 != 0) {
      FUN_10c3d5d0(local_54);
    }
    if (local_60 != 0) {
      FUN_10c3d5d0(local_60);
    }
    if (local_80[0] != 0) {
      FUN_10c3d5d0(local_80[0]);
    }
    if (local_48[0] != 0) {
      FUN_10c3d5d0(local_48[0]);
    }
  }
  return;
}


// ================= CPlayerFSM::TransitionToIdle @ 10fd5d60 =================

/* [RE-R1]
   strings:
     ""CHANGE_WEAPON""
     ""NORMAL_IDLE""
     ""NORMAL_IDLE_WARDROBE""
     ""HolsteredIdleCreate""
     ""PLLocomotion""
     ""PLBaseAction""
     ""WardrobeView"" */

void __thiscall CPlayerFSM__TransitionToIdle(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 uVar9;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  double dVar10;
  char *pcVar11;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  *(undefined2 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 400) != 0) {
    FUN_110b1ad0();
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_10f3a2b0();
    uVar9 = extraout_ECX;
  }
  *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28c) = 0xffffffff;
  if (param_2 == '\0') {
    pcVar11 = "NORMAL_IDLE";
  }
  else {
    pcVar11 = "CHANGE_WEAPON";
  }
  CInfoRecord__GetModelString(pcVar11,uVar9);
  iVar4 = FUN_10fb8080();
  bVar3 = true;
  iVar8 = *(int *)(param_1 + 0x100);
  iVar6 = extraout_ECX_00;
  if (iVar8 != 0) {
    if (*(char *)(iVar8 + 0x2405) == '\x01') {
      CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",extraout_ECX_00);
      iVar4 = FUN_10fb8080();
      bVar3 = false;
      iVar6 = extraout_ECX_01;
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(iVar4 + 0x24);
        uVar1 = *(undefined4 *)(iVar4 + 0x28);
        uVar2 = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(param_1 + 0xb4) = uVar9;
        *(undefined4 *)(param_1 + 0xb8) = uVar1;
        *(undefined4 *)(param_1 + 0xbc) = uVar2;
      }
    }
    else {
      CInfoRecord__GetModelString("NORMAL_IDLE_WARDROBE",extraout_ECX_00);
      iVar6 = FUN_10fb8080();
      if (iVar6 != 0) {
        dVar10 = *(double *)(iVar6 + 0x20);
        if ((((SUB84(dVar10,0) == *(int *)(param_1 + 0xb0)) &&
             (iStack_10 = (int)((ulonglong)dVar10 >> 0x20), iStack_10 == *(int *)(param_1 + 0xb4)))
            && (iStack_c = (int)*(undefined8 *)(iVar6 + 0x28), iStack_c == *(int *)(param_1 + 0xb8))
            ) && (iStack_8 = (int)((ulonglong)*(undefined8 *)(iVar6 + 0x28) >> 0x20),
                 iStack_8 == *(int *)(param_1 + 0xbc))) {
          if (*(int *)(param_1 + 0xc0) == 0) {
            *(int *)(param_1 + 0xc0) = iVar6;
          }
          FUN_10f595c0("PLLocomotion","HolsteredIdleCreate");
          FUN_10f595c0("PLBaseAction",&DAT_11ce5cac);
          (**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x10))(0);
          FUN_11a894ef();
          *(float *)(param_1 + 0x18) = (float)dVar10 * DAT_11de98b0;
          if (*(int **)(iVar8 + 0x1c50) == (int *)0x0) {
            return;
          }
          (**(code **)(**(int **)(iVar8 + 0x1c50) + 0x44))(1);
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x106) = 1;
  if (*(int *)(param_1 + 0xc0) != 0) {
    if (bVar3) {
      if (iVar4 == 0) {
        puVar5 = &DAT_11d9d32b;
      }
      else {
        puVar5 = (undefined1 *)FUN_10f57110();
        iVar6 = extraout_ECX_02;
      }
      CInfoRecord__GetModelString(puVar5,iVar6);
      FUN_10f58fc0();
      goto LAB_10fd5f85;
    }
    *(undefined1 *)(param_1 + 0x230) = 0;
  }
  if (!bVar3) {
    FUN_10f595c0("PLLocomotion","HolsteredIdleCreate");
    FUN_10f595c0("PLBaseAction",&DAT_11ce5cac);
  }
LAB_10fd5f85:
  *(int *)(param_1 + 0xc0) = iVar4;
  *(int *)(param_1 + 0xc4) = iVar4;
  if (iVar4 != 0) {
    FUN_10f58d40();
    puVar7 = (undefined4 *)FUN_10fd9890("WardrobeView");
    if (((puVar7 != (undefined4 *)0x0) && (iVar8 = (**(code **)*puVar7)(), iVar8 == 3)) &&
       ((!bVar3 && (*(char *)(param_1 + 0x14) != '\0')))) {
      FUN_10f69a40(param_1 + 0x1c);
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x10a) = 1;
  return;
}


// ================= FUN_10fd5fe0 @ 10fd5fe0 =================

/* [RE-AUTO c0]
   strings:
     ""COMBAT_IDLE""
     ""NORMAL_IDLE""
     ""INVALID_STATE""
     ""UnholsteredIdle""
     ""HolsteredIdle""
     ""PLLocomotion"" */

void __thiscall FUN_10fd5fe0(int param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  
  *(undefined1 *)(param_1 + 0x109) = 0;
  if (*(int *)(param_1 + 400) != 0) {
    FUN_110b1ad0();
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_10f3a2b0();
    uVar6 = extraout_ECX;
  }
  *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28c) = 0xffffffff;
  if (param_2 == '\0') {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x100) + 0x7bc))();
    uVar6 = extraout_ECX_00;
    if (cVar2 == '\0') {
      bVar1 = true;
      pcVar10 = "COMBAT_IDLE";
      goto LAB_10fd6051;
    }
  }
  bVar1 = false;
  pcVar10 = "NORMAL_IDLE";
LAB_10fd6051:
  CInfoRecord__GetModelString(pcVar10,uVar6);
  iVar3 = FUN_10fb8080();
  iVar4 = FUN_10f19240();
  (**(code **)(**(int **)(iVar4 + 0x14) + 0x3c))();
  if (*(int *)(param_1 + 0xc0) == 0) {
    *(int *)(param_1 + 0xc0) = iVar3;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    CInfoRecord__GetModelString("INVALID_STATE",extraout_ECX_01);
    FUN_10f58fc0();
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xc0);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x100) + 0x20c))();
    piVar5 = (int *)(**(code **)(*piVar5 + 0x6c))();
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xbc))();
    }
    (**(code **)(**(int **)(param_1 + 0x100) + 0x7d4))();
    if (bVar1) {
      pcVar10 = "UnholsteredIdle";
    }
    else {
      pcVar10 = "HolsteredIdle";
    }
    FUN_10f595c0("PLLocomotion",pcVar10);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xc0) = iVar3;
      FUN_10f58d40();
      piVar5 = *(int **)(*(int *)(param_1 + 0xc0) + 0x14c);
      piVar8 = *(int **)(*(int *)(param_1 + 0xc0) + 0x148);
      uVar7 = (uint)((int)piVar5 + (3 - (int)piVar8)) >> 2;
      if (piVar5 < piVar8) {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        uVar9 = 0;
        do {
          if ((char)((int *)*piVar8)[7] != '\0') {
            (**(code **)(*(int *)*piVar8 + 0x1c))();
          }
          uVar9 = uVar9 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar9 != uVar7);
        return;
      }
    }
  }
  return;
}


// ================= FUN_10f4a9c0 @ 10f4a9c0 =================

/* [RE-AUTO c0]
   strings:
     ""PLLocomotion"" */

void __thiscall FUN_10f4a9c0(int param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  
  cVar1 = FUN_10efa230();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x790))(100);
    FUN_10fd9120();
    return;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x5f4))();
  if (uVar2 < 0x17) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 0x1b4 + uVar2 * 0xcc);
  }
  else {
    DAT_1201ffe4 = 1;
    puVar5 = &DAT_1201ff28;
  }
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)((int)puVar5 + 10) != '\0')) {
    if (DAT_11de98b0 <= param_2) {
      puVar6 = &DAT_11cfaf54;
    }
    else {
      puVar6 = &DAT_11dd2990;
    }
    FUN_1083ac30(puVar6);
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x5f4))();
  switch(uVar3) {
  case 0:
    pcVar7 = "Null";
    goto LAB_10f4aa82;
  case 1:
    pcVar7 = "BackToBoss";
    goto LAB_10f4aa82;
  case 2:
    pcVar7 = "Tired";
    goto LAB_10f4aa82;
  case 3:
    pcVar7 = "Unholstered";
    break;
  case 4:
    pcVar7 = "Crouch";
    break;
  default:
    goto LAB_10f4aade;
  case 6:
    pcVar7 = "RageRushLow";
    break;
  case 7:
    pcVar7 = "RageRushHigh";
    break;
  case 8:
    pcVar7 = "UnholsteredRush";
    break;
  case 9:
    pcVar7 = "Walk";
    break;
  case 10:
    pcVar7 = "CarryHugeItem";
    break;
  case 0xb:
    pcVar7 = "CreepRun";
LAB_10f4aa82:
    (**(code **)(**(int **)(param_1 + 4) + 0x600))("PLIsTired",pcVar7);
    pcVar7 = "Holstered";
    break;
  case 0x15:
LAB_10f4ab0e:
    if ((-1 < DAT_1201fc8c) && (iVar4 = FUN_10c3dad0(&DAT_1201fc8c), iVar4 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
    if ((-1 < DAT_1201fc8c) && (iVar4 = FUN_10c3dad0(&DAT_1201fc8c), iVar4 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
    return;
  }
  FUN_1083ac30(pcVar7);
LAB_10f4aade:
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)((int)puVar5 + 10) != '\0')) {
    FUN_10a4c990(&DAT_1201fc98,DAT_1201fc90);
  }
  if (DAT_1201fc90 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x600))("PLLocomotion",&DAT_1201fc98);
  }
  goto LAB_10f4ab0e;
}


// ================= FUN_10fc3a60 @ 10fc3a60 =================

/* [RE-AUTO c0]
   strings:
     ""HolsteredIdle""
     ""PLLocomotion"" */

void __thiscall FUN_10fc3a60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM0_Db;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    param_2 = 0x1a;
    cVar3 = FUN_10f5c510(&param_2,1);
    if (((cVar3 != '\0') && (piVar1 = *(int **)(param_1 + 0x100), piVar1 != (int *)0x0)) &&
       (piVar1[0x714] != 0)) {
      (**(code **)(*piVar1 + 0x600))("PLLocomotion","HolsteredIdle");
      (**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0x10))(0);
      FUN_11a894ef();
      *(float *)(iVar2 + 0x240) =
           (float)(double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * DAT_11de98b0 + DAT_11cbf0b8;
    }
  }
  return;
}


// ================= FUN_10fab840 @ 10fab840 =================

/* [RE-AUTO c0]
   strings:
     ""HolsteredIdle""
     ""PLLocomotion"" */

void FUN_10fab840(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_10de9ff0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x100));
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
            ("PLLocomotion","HolsteredIdle");
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x740))(1);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x278))(1);
  piVar2 = (int *)(param_2 + -0xc);
  if (-1 < *piVar2) {
    iVar1 = FUN_10c3dad0(piVar2);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
      FUN_10c3d900(piVar2);
    }
  }
  return;
}


// ================= FUN_10fab4c0 @ 10fab4c0 =================

/* [RE-AUTO c0]
   strings:
     ""HolsteredIdle""
     ""PLLocomotion"" */

void FUN_10fab4c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_10de9ff0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x100));
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
            ("PLLocomotion","HolsteredIdle");
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x740))(1);
  FUN_10f17060(0x10002);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x278))(1);
  piVar2 = (int *)(param_2 + -0xc);
  if (-1 < *piVar2) {
    iVar1 = FUN_10c3dad0(piVar2);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
      FUN_10c3d900(piVar2);
    }
  }
  return;
}


// ================= FUN_10facbc0 @ 10facbc0 =================

/* [RE-AUTO c0]
   strings:
     ""CanLeave""
     ""StartRun""
     ""HolsteredRun""
     ""PLLocomotion""
     ""RunStop""
     ""StartRunStop""
     ""HolsteredIdle""
     ""NORMAL_IDLE"" */

void FUN_10facbc0(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 != 0) {
    pbVar6 = *(byte **)(param_2 + 0xc);
    piVar2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
    pbVar3 = (byte *)(**(code **)(*piVar2 + 0x8c))();
    pcVar4 = "CanLeave";
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10facc18:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_10facc1d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10facc18;
      pbVar6 = pbVar6 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10facc1d:
    if (uVar5 == 0) {
      pcVar4 = "StartRun";
      pbVar6 = pbVar3;
      do {
        bVar1 = *pbVar6;
        bVar7 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_10facc50:
          uVar5 = -(uint)bVar7 | 1;
          goto LAB_10facc55;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar7 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_10facc50;
        pbVar6 = pbVar6 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_10facc55:
      if (uVar5 == 0) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                  ("PLLocomotion","HolsteredRun");
        return;
      }
      pcVar4 = "RunStop";
      pbVar6 = pbVar3;
      do {
        bVar1 = *pbVar6;
        bVar7 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_10facca0:
          uVar5 = -(uint)bVar7 | 1;
          goto LAB_10facca5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar7 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_10facca0;
        pbVar6 = pbVar6 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_10facca5:
      if (uVar5 != 0) {
        pcVar4 = "StartRunStop";
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < (byte)*pcVar4;
          if (bVar1 != *pcVar4) {
LAB_10faccd0:
            uVar5 = -(uint)bVar7 | 1;
            goto LAB_10faccd5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < (byte)pcVar4[1];
          if (bVar1 != pcVar4[1]) goto LAB_10faccd0;
          pbVar3 = pbVar3 + 2;
          pcVar4 = pcVar4 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_10faccd5:
        if (uVar5 != 0) {
          return;
        }
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                ("PLLocomotion","HolsteredIdle");
      FUN_10f57080("NORMAL_IDLE");
    }
  }
  return;
}


// ================= FUN_10fa2750 @ 10fa2750 =================

/* [RE-AUTO c0]
   strings:
     ""PLCrouch""
     ""CROUCH_IDLE""
     ""OnLeave""
     ""HolsteredIdle""
     ""PLLocomotion"" */

void FUN_10fa2750(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  bool bVar9;
  float10 fVar10;
  undefined4 local_8;
  
  local_8 = 0x18;
  cVar3 = FUN_10f5c510(&local_8,1);
  if ((((cVar3 != '\0') && (param_1 != 0)) && (*(int *)(param_1 + 0x18) != 0)) &&
     (piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar2 != (int *)0x0)) {
    cVar3 = (**(code **)(*piVar2 + 0x7bc))();
    if (cVar3 == '\0') {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x184))(1,1);
    }
    pcVar8 = "PLCrouch";
    pbVar4 = *(byte **)(param_2 + 0xc);
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_10fa27e7:
        uVar5 = -(uint)bVar9 | 1;
        goto LAB_10fa27ec;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_10fa27e7;
      pbVar4 = pbVar4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10fa27ec:
    if (uVar5 == 0) {
      if (*(char *)(param_1 + 0x230) != '\0') {
        cVar3 = FUN_10ef9bd0();
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*piVar2 + 0x228))();
          if (cVar3 != '\0') {
            CInfoRecord__GetModelString("CROUCH_IDLE");
            FUN_10a4bb60(&local_8,extraout_ECX,0,1,0,0);
            FUN_10f59ff0();
            FUN_104f6f60();
            return;
          }
        }
        *(undefined1 *)(param_1 + 0x230) = 0;
        return;
      }
    }
    else {
      piVar6 = (int *)(**(code **)(*piVar2 + 0x10c))();
      uVar7 = (**(code **)(*piVar6 + 0x8c))();
      cVar3 = FUN_10f59630(uVar7);
      if (cVar3 != '\0') {
        pbVar4 = *(byte **)(param_2 + 0xc);
        pcVar8 = "OnLeave";
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10fa28a8:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_10fa28ad;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10fa28a8;
          pbVar4 = pbVar4 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_10fa28ad:
        if (uVar5 == 0) {
          cVar3 = (**(code **)(*piVar2 + 0x228))();
          if (cVar3 != '\0') {
            if (*(char *)(param_1 + 0x231) != '\0') {
              *(undefined1 *)(param_1 + 0x231) = 0;
              (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x16c))(1);
            }
            FUN_10f7ba00();
            fVar10 = (float10)(**(code **)(**(int **)(DAT_1202e818 + 0x28) + 0xc))(0);
            *(float *)(param_1 + 0x238) = (float)fVar10;
          }
          (**(code **)(*piVar2 + 0x600))("PLLocomotion","HolsteredIdle");
          *(undefined2 *)(param_1 + 0x1ac) = 4;
        }
      }
    }
  }
  return;
}


// ================= FUN_10fa3860 @ 10fa3860 =================

/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""FallingAttack""
     ""PLCombatAction""
     ""UnholsteredIdle""
     ""PLLocomotion"" */

void FUN_10fa3860(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (((((char *)*param_2 != (char *)0x0) &&
       (iVar2 = _stricmp((char *)*param_2,"melee1"), iVar2 == 0)) && (param_3 == 1)) &&
     ((*(char *)(param_1 + 0x1da) != '\0' &&
      (piVar1 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar1 != (int *)0x0)))) {
    (**(code **)(*piVar1 + 0x600))("PLCombatAction","FallingAttack");
    (**(code **)(*piVar1 + 0x600))("PLLocomotion","UnholsteredIdle");
    (**(code **)(*piVar1 + 0x184))(0,1);
    *(undefined2 *)(param_1 + 0x1ac) = 1;
  }
  return;
}


// ================= CPetLocomotion::OnFallAnimEvent @ 10fa35e0 =================

/* [RE-R1]
   calls: LAB_12402b6b+1
   strings:
     ""OnLeave""
     ""StartFall""
     ""StartFall_Parapet""
     ""CloseCol""
     ""AGAnimationEnd""
     ""StartJump""
     ""Falling""
     ""PLLocomotion"" */

void CPetLocomotion__OnFallAnimEvent(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x228))();
  if (cVar2 != '\0') {
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
    uVar4 = (**(code **)(*piVar3 + 0x8c))();
    cVar2 = FUN_10f59630(uVar4);
    if (cVar2 != '\0') {
      pcVar8 = "OnLeave";
      pbVar7 = *(byte **)(param_2 + 0xc);
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_10fa3660:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_10fa3665;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_10fa3660;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_10fa3665:
      if (uVar6 == 0) {
        uVar4 = 1;
        if (*(int *)(*(int *)(param_1 + 0x200) + -0xc) < 0) {
          FUN_10f59ff0(&DAT_1201fc98,0,1,0,0);
          return;
        }
        iVar10 = *(int *)(param_1 + 0x200);
        uVar11 = uVar6;
        uVar12 = uVar6;
        FUN_10c3dab0(iVar10 + -0xc,iVar10);
        FUN_10f59ff0(iVar10,uVar6,uVar4,uVar11,uVar12);
        return;
      }
      pcVar8 = "StartFall";
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_10fa36d6:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_10fa36db;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_10fa36d6;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_10fa36db:
      if (uVar6 == 0) {
        func_0x12402b6c(1,1,0);
        return;
      }
      pcVar8 = "StartFall_Parapet";
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_10fa3717:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_10fa371c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_10fa3717;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_10fa371c:
      if (uVar6 == 0) {
        func_0x12402b6c(2,1,0);
        return;
      }
      pcVar8 = "CloseCol";
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_10fa3758:
          uVar6 = -(uint)bVar9 | 1;
          goto LAB_10fa375d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_10fa3758;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_10fa375d:
      if (uVar6 != 0) {
        pcVar8 = "AGAnimationEnd";
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10fa3790:
            uVar6 = -(uint)bVar9 | 1;
            goto LAB_10fa3795;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10fa3790;
          pbVar7 = pbVar7 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_10fa3795:
        if (uVar6 == 0) {
          piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
          pcVar8 = "StartJump";
          pbVar7 = (byte *)(**(code **)(*piVar3 + 0x8c))();
          do {
            bVar1 = *pbVar7;
            bVar9 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10fa37e0:
              uVar6 = -(uint)bVar9 | 1;
              goto LAB_10fa37e5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar9 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10fa37e0;
            pbVar7 = pbVar7 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar6 = 0;
LAB_10fa37e5:
          if (uVar6 != 0) {
            piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
            pcVar8 = "StartFall";
            pbVar7 = (byte *)(**(code **)(*piVar3 + 0x8c))();
            do {
              bVar1 = *pbVar7;
              bVar9 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_10fa3830:
                uVar6 = -(uint)bVar9 | 1;
                goto LAB_10fa3835;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar9 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_10fa3830;
              pbVar7 = pbVar7 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            uVar6 = 0;
LAB_10fa3835:
            if (uVar6 != 0) {
              return;
            }
          }
          (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                    ("PLLocomotion","Falling");
        }
      }
    }
  }
  return;
}


// ================= FUN_10fa08d0 @ 10fa08d0 =================

/* [RE-AUTO c0]
   strings:
     ""CrouchRun""
     ""PLLocomotion""
     ""CROUCH_TUNNEL_RUN"" */

void FUN_10fa08d0(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  undefined4 extraout_ECX;
  float local_18;
  float fStack_14;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  fVar2 = *(float *)(param_1 + 0x1e0);
  local_18 = (float)uVar1;
  fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
  if (DAT_11cbf0b8 < SQRT(local_18 * local_18 + fStack_14 * fStack_14 + fVar2 * fVar2)) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))("PLLocomotion","CrouchRun");
    iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
    *(undefined8 *)(iVar3 + 0x1698) = uVar1;
    *(float *)(iVar3 + 0x16a0) = fVar2;
    CInfoRecord__GetModelString("CROUCH_TUNNEL_RUN",extraout_ECX,0);
    FUN_10fd1830();
  }
  return;
}


// ================= FUN_10fa0810 @ 10fa0810 =================

/* [RE-AUTO c0]
   strings:
     ""CrouchRun""
     ""PLLocomotion""
     ""CROUCH_RUN"" */

void FUN_10fa0810(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  undefined4 extraout_ECX;
  float local_18;
  float fStack_14;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  fVar2 = *(float *)(param_1 + 0x1e0);
  local_18 = (float)uVar1;
  fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
  if ((DAT_11cbf0b8 < SQRT(local_18 * local_18 + fStack_14 * fStack_14 + fVar2 * fVar2)) &&
     (*(char *)(param_1 + 0x230) == '\0')) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))("PLLocomotion","CrouchRun");
    iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
    *(undefined8 *)(iVar3 + 0x1698) = uVar1;
    *(float *)(iVar3 + 0x16a0) = fVar2;
    CInfoRecord__GetModelString("CROUCH_RUN",extraout_ECX,0);
    FUN_10fd1830();
  }
  return;
}


// ================= FUN_10fa0510 @ 10fa0510 =================

/* [RE-AUTO c0]
   strings:
     ""PLIsTired""
     ""HolsteredIdle""
     ""PLLocomotion""
     ""NORMAL_IDLE""
     ""NORMAL_TIREDSTAND""
     ""StartRunStop""
     ""RunStop"" */

void FUN_10fa0510(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar6;
  float local_20;
  float fStack_1c;
  float local_8;
  
  local_8 = 3.22299e-44;
  cVar4 = FUN_10f5c510(&local_8,1);
  if ((((cVar4 != '\0') && (param_1 != 0)) && (*(int *)(param_1 + 0x18) != 0)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x100), iVar2 != 0)) {
    iVar5 = FUN_10f19240();
    if (iVar5 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x1d8);
      fVar3 = *(float *)(param_1 + 0x1e0);
      if (((*(char *)(param_1 + 0x235) != '\0') && (*(short *)(param_1 + 0x1ac) != 3)) &&
         (*(short *)(param_1 + 0x1ac) != 2)) {
        *(undefined1 *)(param_1 + 0x235) = 0;
        (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                  ("PLIsTired",&DAT_11ce5cac);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                  ("PLLocomotion","HolsteredIdle");
        CInfoRecord__GetModelString("NORMAL_IDLE",extraout_ECX,0);
        FUN_10fd1830();
        return;
      }
      local_20 = (float)uVar1;
      fStack_1c = (float)((ulonglong)uVar1 >> 0x20);
      if (SQRT(local_20 * local_20 + fStack_1c * fStack_1c + fVar3 * fVar3) < DAT_11cbf0b8) {
        fVar6 = (float10)FUN_10268110();
        local_8 = (float)fVar6;
        if (local_8 <= 0.0) {
          CInfoRecord__GetModelString("NORMAL_TIREDSTAND",extraout_ECX_00,0,1,0,0);
          FUN_10f59ff0();
          return;
        }
        iVar5 = *(int *)(param_1 + 0x238);
        if ((iVar5 == 1) && (*(int *)(param_1 + 0x23c) != 4)) {
          *(undefined4 *)(param_1 + 0x238) = 2;
          *(undefined4 *)(param_1 + 0x23c) = 2;
          (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                    ("PLLocomotion","StartRunStop");
          *(undefined1 *)(param_1 + 0xc) = 0;
        }
        else if (iVar5 == 0) {
          *(undefined4 *)(param_1 + 0x238) = 3;
          (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                    ("PLLocomotion","RunStop");
          (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                    ("PLIsTired",&DAT_11ce5cac);
        }
        else if (iVar5 == 4) {
          *(undefined4 *)(param_1 + 0x23c) = 3;
        }
        *(undefined8 *)(iVar2 + 0x1698) = uVar1;
        *(float *)(iVar2 + 0x16a0) = fVar3;
        return;
      }
      if (*(int *)(param_1 + 0x238) == 4) {
        *(undefined4 *)(param_1 + 0x23c) = 0;
      }
    }
  }
  return;
}


// ================= FUN_10fa1860 @ 10fa1860 =================

/* [RE-AUTO c0]
   strings:
     ""OnLeave""
     ""RunStop""
     ""StartRunStop""
     ""CanLeave""
     ""StartRunEnd""
     ""StartRun""
     ""HolsteredRun""
     ""PLLocomotion""
     ""PLCrouch""
     ""CROUCH_IDLE"" */

void FUN_10fa1860(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 extraout_ECX;
  bool bVar11;
  
  iVar2 = (int)param_1;
  if (param_1 == (int *)0x0) {
    return;
  }
  param_1 = (int *)0x17;
  cVar3 = FUN_10f5c510(&param_1,1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(int *)(iVar2 + 0x18) == 0) {
    return;
  }
  param_1 = *(int **)(*(int *)(iVar2 + 0x18) + 0x100);
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_10f19240();
  if (iVar4 == 0) {
    return;
  }
  cVar3 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x7bc))();
  if (cVar3 == '\0') {
    (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x184))(1,1);
  }
  pbVar9 = *(byte **)(param_2 + 0xc);
  piVar5 = (int *)(**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x10c))();
  pbVar6 = (byte *)(**(code **)(*piVar5 + 0x8c))();
  cVar3 = (**(code **)(*param_1 + 0x228))();
  piVar5 = param_1;
  if (cVar3 != '\0') {
    pcVar10 = "OnLeave";
    pbVar7 = pbVar9;
    do {
      bVar1 = *pbVar7;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10fa1943:
        uVar8 = -(uint)bVar11 | 1;
        goto LAB_10fa1948;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10fa1943;
      pbVar7 = pbVar7 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_10fa1948:
    if (uVar8 == 0) {
      pcVar10 = "RunStop";
      pbVar7 = pbVar6;
      do {
        bVar1 = *pbVar7;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10fa1977:
          uVar8 = -(uint)bVar11 | 1;
          goto LAB_10fa197c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10fa1977;
        pbVar7 = pbVar7 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_10fa197c:
      if (uVar8 != 0) {
        pcVar10 = "StartRunStop";
        pbVar7 = pbVar6;
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_10fa19a7:
            uVar8 = -(uint)bVar11 | 1;
            goto LAB_10fa19ac;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_10fa19a7;
          pbVar7 = pbVar7 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar8 = 0;
LAB_10fa19ac:
        if (uVar8 != 0) goto LAB_10fa19d8;
      }
      if ((((*(int *)(iVar2 + 0x238) != 4) && (*(int *)(iVar2 + 0x238) != 1)) &&
          (*(short *)(iVar2 + 0x1ac) != 3)) && (*(short *)(iVar2 + 0x1ac) != 2)) {
        *(undefined1 *)(iVar2 + 0x235) = 1;
      }
    }
  }
LAB_10fa19d8:
  pcVar10 = "CanLeave";
  pbVar7 = pbVar9;
  do {
    bVar1 = *pbVar7;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_10fa1a00:
      uVar8 = -(uint)bVar11 | 1;
      goto LAB_10fa1a05;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_10fa1a00;
    pbVar7 = pbVar7 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  uVar8 = 0;
LAB_10fa1a05:
  if (uVar8 == 0) {
    switch(*(undefined4 *)(iVar2 + 0x238)) {
    case 1:
      pcVar10 = "StartRun";
      do {
        bVar1 = *pbVar6;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10fa1a50:
          uVar8 = -(uint)bVar11 | 1;
          goto LAB_10fa1a55;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10fa1a50;
        pbVar6 = pbVar6 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_10fa1a55:
      if (uVar8 == 0) {
        iVar4 = *(int *)(iVar2 + 0x23c);
        if (iVar4 == 0) goto LAB_10fa1d08;
        if (iVar4 == 2) {
          *(undefined4 *)(iVar2 + 0x238) = 2;
          (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                    ("PLLocomotion","StartRunStop");
          *(undefined1 *)(iVar2 + 0xc) = 0;
          return;
        }
        if (iVar4 == 4) {
          *(undefined4 *)(iVar2 + 0x238) = 2;
          (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                    ("PLLocomotion","StartRunStop");
          (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                    ("PLIsTired",&DAT_11ce5cac);
          *(undefined1 *)(iVar2 + 0xc) = 0;
          return;
        }
      }
      break;
    case 2:
    case 3:
      pcVar10 = "StartRunStop";
      pbVar9 = pbVar6;
      do {
        bVar1 = *pbVar9;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10fa1b13:
          uVar8 = -(uint)bVar11 | 1;
          goto LAB_10fa1b18;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10fa1b13;
        pbVar9 = pbVar9 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_10fa1b18:
      if (uVar8 != 0) {
        pcVar10 = "RunStop";
        do {
          bVar1 = *pbVar6;
          bVar11 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_10fa1b41:
            uVar8 = -(uint)bVar11 | 1;
            goto LAB_10fa1b46;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar11 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_10fa1b41;
          pbVar6 = pbVar6 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar8 = 0;
LAB_10fa1b46:
        if (uVar8 != 0) {
          return;
        }
      }
      if (*(int *)(iVar2 + 0x23c) == 4) {
        *(undefined4 *)(iVar2 + 0x238) = 4;
        *(undefined1 *)(iVar2 + 0xc) = 0;
        (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                  ("PLLocomotion","RunTurnBack");
        (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))("PLIsTired",&DAT_11ce5cac)
        ;
        return;
      }
      if ((*(short *)(iVar2 + 0x1ac) != 3) && (*(short *)(iVar2 + 0x1ac) != 2)) {
        *(undefined1 *)(iVar2 + 0x235) = 1;
        return;
      }
      break;
    case 4:
    case 5:
      piVar5 = (int *)(**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x10c))();
      pcVar10 = "RunStop";
      pbVar9 = (byte *)(**(code **)(*piVar5 + 0x8c))();
      do {
        bVar1 = *pbVar9;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10fa1c05:
          uVar8 = -(uint)bVar11 | 1;
          goto LAB_10fa1c0a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10fa1c05;
        pbVar9 = pbVar9 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_10fa1c0a:
      if (uVar8 != 0) {
        *(undefined4 *)(iVar2 + 0x238) = 0;
        *(undefined4 *)(iVar2 + 0x23c) = 0;
        *(undefined1 *)(iVar2 + 0xc) = 1;
        (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                  ("PLLocomotion","HolsteredRun");
        return;
      }
    }
  }
  else {
    pcVar10 = "StartRunEnd";
    pbVar6 = pbVar9;
    do {
      bVar1 = *pbVar6;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10fa1c71:
        uVar8 = -(uint)bVar11 | 1;
        goto LAB_10fa1c76;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10fa1c71;
      pbVar6 = pbVar6 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_10fa1c76:
    if (uVar8 == 0) {
      piVar5 = (int *)(**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x10c))();
      pcVar10 = "StartRun";
      pbVar9 = (byte *)(**(code **)(*piVar5 + 0x8c))();
      do {
        bVar1 = *pbVar9;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10fa1cc0:
          uVar8 = -(uint)bVar11 | 1;
          goto LAB_10fa1cc5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10fa1cc0;
        pbVar9 = pbVar9 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_10fa1cc5:
      if (((uVar8 == 0) && ((*(int *)(iVar2 + 0x238) == 1 || (*(int *)(iVar2 + 0x238) == 0)))) &&
         (*(int *)(iVar2 + 0x23c) == 0)) {
        (**(code **)(**(int **)(*(int *)(iVar2 + 0x18) + 0x100) + 0x600))
                  ("PLLocomotion","HolsteredRun");
LAB_10fa1d08:
        *(undefined4 *)(iVar2 + 0x238) = 0;
        return;
      }
    }
    else {
      pcVar10 = "PLCrouch";
      do {
        bVar1 = *pbVar9;
        bVar11 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10fa1d40:
          uVar8 = -(uint)bVar11 | 1;
          goto LAB_10fa1d45;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar11 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10fa1d40;
        pbVar9 = pbVar9 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_10fa1d45:
      if ((uVar8 == 0) && (*(char *)(iVar2 + 0x234) != '\0')) {
        cVar3 = FUN_10ef9bd0();
        if (cVar3 == '\0') {
          *(undefined1 *)(iVar2 + 0x234) = 0;
        }
        else {
          cVar3 = (**(code **)(*piVar5 + 0x228))();
          if (cVar3 != '\0') {
            CInfoRecord__GetModelString("CROUCH_IDLE");
            FUN_10a4bb60(&param_1,extraout_ECX,0,1,0,0);
            FUN_10f59ff0();
            FUN_104f6f60();
            return;
          }
        }
      }
    }
  }
  return;
}


// ================= FUN_10fa1f80 @ 10fa1f80 =================

/* [RE-AUTO c0]
   strings:
     ""HolsteredIdle""
     ""PLLocomotion""
     ""NORMAL_IDLE"" */

void FUN_10fa1f80(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 extraout_ECX;
  float local_10;
  float fStack_c;
  
  if (*(short *)(param_1 + 0x1ac) == 1) {
    fVar1 = *(float *)(param_1 + 0x1e0);
    local_10 = (float)*(undefined8 *)(param_1 + 0x1d8);
    fStack_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20);
    if (SQRT(local_10 * local_10 + fStack_c * fStack_c + fVar1 * fVar1) < DAT_11cbf0b8) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
      *(undefined8 *)(iVar2 + 0x1698) = *(undefined8 *)(param_1 + 0x1d8);
      *(float *)(iVar2 + 0x16a0) = fVar1;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                ("PLLocomotion","HolsteredIdle");
      CInfoRecord__GetModelString("NORMAL_IDLE",extraout_ECX,0,1,0,0);
      FUN_10fd7800();
    }
  }
  return;
}


// ================= FUN_10fa10e0 @ 10fa10e0 =================

/* [RE-AUTO c0]
   strings:
     ""CROUCH_IDLE""
     ""CrouchIdle""
     ""PLLocomotion"" */

void FUN_10fa10e0(int param_1)

{
  float fVar1;
  int iVar2;
  float local_10;
  float fStack_c;
  
  fVar1 = *(float *)(param_1 + 0x1e0);
  local_10 = (float)*(undefined8 *)(param_1 + 0x1d8);
  fStack_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20);
  if (SQRT(local_10 * local_10 + fStack_c * fStack_c + fVar1 * fVar1) < DAT_11cbf0b8) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
    *(undefined8 *)(iVar2 + 0x1698) = *(undefined8 *)(param_1 + 0x1d8);
    *(float *)(iVar2 + 0x16a0) = fVar1;
    CInfoRecord__GetModelString("CROUCH_IDLE",fVar1,0);
    FUN_10fd1830();
    (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))("PLLocomotion","CrouchIdle")
    ;
  }
  return;
}


// ================= FUN_10fa11a0 @ 10fa11a0 =================

/* [RE-AUTO c0]
   strings:
     ""CROUCH_TUNNEL_IDLE""
     ""CrouchIdle""
     ""PLLocomotion"" */

void FUN_10fa11a0(int param_1)

{
  float fVar1;
  int iVar2;
  float local_10;
  float fStack_c;
  
  fVar1 = *(float *)(param_1 + 0x1e0);
  local_10 = (float)*(undefined8 *)(param_1 + 0x1d8);
  fStack_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20);
  if (SQRT(local_10 * local_10 + fStack_c * fStack_c + fVar1 * fVar1) < DAT_11cbf0b8) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
    *(undefined8 *)(iVar2 + 0x1698) = *(undefined8 *)(param_1 + 0x1d8);
    *(float *)(iVar2 + 0x16a0) = fVar1;
    CInfoRecord__GetModelString("CROUCH_TUNNEL_IDLE",fVar1,0);
    FUN_10fd1830();
    (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))("PLLocomotion","CrouchIdle")
    ;
  }
  return;
}


// ================= FUN_10fa43a0 @ 10fa43a0 =================

/* [RE-AUTO c0]
   strings:
     ""HolsteredIdle""
     ""PLLocomotion"" */

void FUN_10fa43a0(int *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = *(undefined4 *)(param_1[6] + 0x100);
  FUN_10f117f0(0);
  FUN_10de9ff0(uVar1);
  iVar3 = FUN_10f19240();
  if (iVar3 != 0) {
    piVar4 = *(int **)(iVar3 + 0x10);
    cVar2 = (**(code **)(*piVar4 + 0x30))(0xea67);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*piVar4 + 0x30))(0xea73);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*piVar4 + 0x30))(0xea7c);
        if (cVar2 == '\0') {
          (**(code **)(**(int **)(param_1[6] + 0x100) + 0x600))("PLLocomotion","HolsteredIdle");
        }
      }
    }
    (**(code **)(**(int **)(param_1[6] + 0x100) + 0x740))(1);
    (**(code **)(**(int **)(param_1[6] + 0x100) + 0x278))(1);
    (**(code **)(**(int **)(param_1[6] + 0x100) + 0x284))(1);
    (**(code **)(*param_1 + 0x70))(0,0);
  }
  piVar4 = (int *)(param_2 + -0xc);
  if (-1 < *piVar4) {
    iVar3 = FUN_10c3dad0(piVar4);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
      FUN_10c3d900(piVar4);
    }
  }
  return;
}


// ================= FUN_10f988b0 @ 10f988b0 =================

/* [RE-AUTO c0]
   strings:
     ""BAKE_SUCCESS""
     ""NORMAL_IDLE""
     ""BakeSuccess""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f988b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("BAKE_SUCCESS",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f56fa0("BakeSuccess");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f98700;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f98700;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f987d0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f987d0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f98860;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f98860;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f98a40 @ 10f98a40 =================

/* [RE-AUTO c0]
   strings:
     ""BAKE_FAIL""
     ""NORMAL_IDLE""
     ""BakeFail""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f98a40(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("BAKE_FAIL",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f56fa0("BakeFail");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f98700;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f98700;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f987d0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f987d0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f98860;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f98860;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= CRageTransmissionState::Enter @ 10f98d30 =================

/* [RE-R1]
   strings:
     ""RAGE_TRANSMISSION""
     ""RageTransmission""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseAction"" */

void __fastcall CRageTransmissionState__Enter(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("RAGE_TRANSMISSION",param_1);
  FUN_10f58340();
  FUN_10f56fa0("RageTransmission");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fac4b0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fac4b0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f57080("NORMAL_IDLE");
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f9ea90 @ 10f9ea90 =================

/* [RE-AUTO c0]
   strings:
     ""HolsteredIdle""
     ""PLLocomotion""
     ""DeadOnInjuryFlying""
     ""PLBaseAction"" */

void FUN_10f9ea90(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_10f19240();
  if (iVar2 != 0) {
    FUN_10f19240();
    FUN_113980d0();
  }
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x7bc))();
  if (cVar1 == '\0') {
    FUN_10f15e70();
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
            ("PLLocomotion","HolsteredIdle");
  cVar1 = FUN_1140e1d0();
  if (cVar1 != '\0') {
    piVar3 = (int *)FUN_10fd05e0();
    if (piVar3 != (int *)0x0) {
      cVar1 = FUN_10f5b8d0();
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(*piVar3 + 0x3c))(0x29);
        if (0x15 < iVar2) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x600))
                    ("PLBaseAction","DeadOnInjuryFlying");
          *(undefined4 *)(param_1 + 0x1dc) = 0;
          return;
        }
      }
    }
  }
  piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
  (**(code **)(*piVar3 + 0x5c))();
  piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x10c))();
  (**(code **)(*piVar3 + 0x54))();
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return;
}


// ================= FUN_10f92a20 @ 10f92a20 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_LOWCLIMB""
     ""LowWallClimb_Loop""
     ""LowWallClimb""
     ""NORMAL_LOCOMOTION""
     ""PLBaseSignal""
     ""LowClimb""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseAction""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f92a20(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x100;
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  CInfoRecord__GetModelString("NORMAL_LOWCLIMB",param_1);
  FUN_10f58340();
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 5;
  FUN_10f56fa0("LowWallClimb_Loop");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("LowWallClimb");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f5bd40(6,FUN_10fab8d0);
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10fabaa0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fabaa0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fab720;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fab720;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fab840;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fab840;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fab600;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fab600;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_1083ab70("NORMAL_LOCOMOTION",0x11);
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  FUN_10f574b0();
  FUN_10f5a480(1,0,local_b4);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("LowClimb");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11cd58ec);
  FUN_10f573e0();
  FUN_10f5a480(2,1,local_44);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_7c);
  FUN_10f593b0();
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  return;
}


// ================= FUN_10f92db0 @ 10f92db0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_GO_TO_CUISINE""
     ""NORMAL_SIT_DOWN""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseAction""
     ""Sitting""
     ""PLBaseSignal""
     ""CrossBench""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f92db0(int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_74 [8];
  int local_54;
  int local_48;
  int local_3c [8];
  int local_1c;
  int local_10;
  
  CInfoRecord__GetModelString("NORMAL_GO_TO_CUISINE",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_SIT_DOWN");
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0("Sitting");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("CrossBench");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_SIT_DOWN",extraout_ECX,local_3c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_00,local_74);
  FUN_10f593b0();
  FUN_10f5bd40(6,FUN_10fa8950);
  FUN_10f5bd40(7,FUN_10fabc70);
  *(undefined1 *)(param_1 + 0x204) = 0;
  if (local_48 != 0) {
    FUN_10c3d5d0(local_48);
  }
  if (local_54 != 0) {
    FUN_10c3d5d0(local_54);
  }
  if (local_74[0] != 0) {
    FUN_10c3d5d0(local_74[0]);
  }
  if (local_10 != 0) {
    FUN_10c3d5d0(local_10);
  }
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  if (local_3c[0] != 0) {
    FUN_10c3d5d0(local_3c[0]);
  }
  return;
}


// ================= FUN_10f92f70 @ 10f92f70 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_SIT_DOWN""
     ""NORMAL_SITTING""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseAction""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f92f70(undefined4 param_1)

{
  undefined4 extraout_ECX;
  int local_3c [8];
  int local_1c;
  int local_10;
  
  CInfoRecord__GetModelString("NORMAL_SIT_DOWN",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_SITTING");
  FUN_10f5bd40(7,FUN_10fabd50);
  FUN_10f5bd40(9,FUN_10fabd70);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_3c);
  FUN_10f593b0();
  if (local_10 != 0) {
    FUN_10c3d5d0(local_10);
  }
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  if (local_3c[0] != 0) {
    FUN_10c3d5d0(local_3c[0]);
  }
  return;
}


// ================= FUN_10f92060 @ 10f92060 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_GOTO_MEDCLIMB""
     ""NORMAL_MEDCLIMB""
     ""PLBaseAction""
     ""MedWallClimbing""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f92060(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x16;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x16;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("NORMAL_GOTO_MEDCLIMB",iVar2);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x40;
  *(undefined4 *)(param_1 + 0x6c) = 5;
  FUN_10f57080("NORMAL_MEDCLIMB");
  FUN_10f5bd40(6,FUN_10faa4e0);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10faad40;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10faad40;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  *(undefined4 *)(param_1 + 0x1fc) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0("MedWallClimbing");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_MEDCLIMB",extraout_ECX_00,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f92250 @ 10f92250 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_MEDCLIMB""
     ""MedWallClimbHang""
     ""LadderOffTop""
     ""ClimbLadderUp""
     ""ClimbLadderNone""
     ""ClimbLadderDown""
     ""ClimbHanging""
     ""LadderOnBottom""
     ""NORMAL_LOCOMOTION""
     ""PLBaseSignal"" */

void __fastcall FUN_10f92250(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x100;
  CInfoRecord__GetModelString("NORMAL_MEDCLIMB",param_1);
  FUN_10f58340();
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 5;
  FUN_10f56fa0("MedWallClimbHang");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("LadderOffTop");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f5bd40(6,FUN_10faadf0);
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10faaff0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10faaff0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = (code *)&DAT_10fab570;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &DAT_10fab570;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fab380;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fab380;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fab4c0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fab4c0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fab600;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fab600;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f56fa0("ClimbLadderUp");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("ClimbLadderNone");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("ClimbLadderDown");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("LadderOffTop");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("ClimbHanging");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("LadderOnBottom");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("NORMAL_LOCOMOTION",0x11);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined2 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  FUN_10f574b0();
  FUN_10f5a480(1,0,local_b4);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("LadderOffTop");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11cd58ec);
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f5a480(3,1,local_44);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_7c);
  FUN_10f593b0();
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  return;
}


// ================= FUN_10f93f30 @ 10f93f30 =================

/* [RE-AUTO c0]
   strings:
     ""MUDMAN_END""
     ""ABNORMAL_MUDMAN_IDLE""
     ""ABNORMAL_MUDMAN_RUN""
     ""ABNORMAL_MUDMAN_JUMP""
     ""MudStart""
     ""PLLocomotion""
     ""CarryHugeItemRun""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""BreakMud"" */

void __fastcall FUN_10f93f30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x10;
  *(undefined4 *)(param_1 + 0x6c) = 10;
  FUN_10f9c060(param_1,0);
  piVar3 = *(int **)(param_1 + 0x1c8);
  do {
    if (piVar3 == *(int **)(param_1 + 0x1cc)) {
LAB_10f93f89:
      FUN_10f57080("MUDMAN_END");
      CInfoRecord__GetModelString("ABNORMAL_MUDMAN_IDLE",extraout_ECX);
      FUN_10f58340();
      FUN_1083ab70("ABNORMAL_MUDMAN_RUN",0x13);
      FUN_1083ab70("ABNORMAL_MUDMAN_JUMP",0x14);
      puVar2 = *(undefined4 **)(param_1 + 0xb0);
      local_c = FUN_10fac060;
      if (puVar2 == *(undefined4 **)(param_1 + 0xb4)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = FUN_10fac060;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 0xb0);
      local_c = (code *)&DAT_10f93e00;
      if (puVar2 == *(undefined4 **)(param_1 + 0xb4)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = &DAT_10f93e00;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 200);
      local_c = FUN_10f93e20;
      if (puVar2 == *(undefined4 **)(param_1 + 0xcc)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = FUN_10f93e20;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
      }
      FUN_10f56fa0("MudStart");
      puVar2 = *(undefined4 **)(param_1 + 100);
      if (puVar2 == *(undefined4 **)(param_1 + 0x68)) {
        FUN_10f649a0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_c;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 0xf8);
      local_c = (code *)&DAT_10f93e10;
      if (puVar2 == *(undefined4 **)(param_1 + 0xfc)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = &DAT_10f93e10;
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x110);
      local_c = CPlayerWeaponFSM__TryComboTransitionWithSkillGate;
      if (puVar2 == *(undefined4 **)(param_1 + 0x114)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = CPlayerWeaponFSM__TryComboTransitionWithSkillGate;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
      }
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemRun");
      FUN_10f573e0();
      FUN_10f56e60(param_1 + 0x230,extraout_ECX_00,local_b4);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("BreakMud");
      FUN_10f573e0();
      FUN_10f56fa0("MUDMAN_END",extraout_ECX_01,local_44);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemFall");
      FUN_10f573e0();
      FUN_10f56e60(param_1 + 0x234,extraout_ECX_02,local_7c);
      FUN_10f593b0();
      if (local_50 != 0) {
        FUN_10c3d5d0(local_50);
      }
      if (local_5c != 0) {
        FUN_10c3d5d0(local_5c);
      }
      if (local_7c[0] != 0) {
        FUN_10c3d5d0(local_7c[0]);
      }
      if (local_18 != 0) {
        FUN_10c3d5d0(local_18);
      }
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      if (local_44[0] != 0) {
        FUN_10c3d5d0(local_44[0]);
      }
      if (local_88 != 0) {
        FUN_10c3d5d0(local_88);
      }
      if (local_94 != 0) {
        FUN_10c3d5d0(local_94);
      }
      if (local_b4[0] != 0) {
        FUN_10c3d5d0(local_b4[0]);
      }
      return;
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 4) == 0) {
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      goto LAB_10f93f89;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


// ================= FUN_10f91a80 @ 10f91a80 =================

/* [RE-AUTO c0]
   strings:
     ""CROUCH_TOPOINT""
     ""CROUCH_IDLE""
     ""PLLocomotion""
     ""CrouchIdle"" */

void __fastcall FUN_10f91a80(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0xa;
  iVar2 = param_1 + 0x40;
  *(undefined4 *)(param_1 + 0x6c) = 4;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 10;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("CROUCH_TOPOINT",iVar2);
  FUN_10f58340();
  FUN_10f57080("CROUCH_IDLE");
  FUN_10f5bd40(6,FUN_10fa9f30);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fa09e0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa09e0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  *(undefined4 *)(param_1 + 0x1fc) = 0x40000000;
  *(undefined4 *)(param_1 + 0x200) = 0x40000000;
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CrouchIdle");
  FUN_10f573e0();
  FUN_10f56fa0("CROUCH_IDLE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f91ec0 @ 10f91ec0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_GOTO_LOWCLIMB""
     ""NORMAL_LOWCLIMB""
     ""PLBaseAction""
     ""LowWallClimbing""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f91ec0(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x15;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x15;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("NORMAL_GOTO_LOWCLIMB",iVar2);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x40;
  *(undefined4 *)(param_1 + 0x6c) = 5;
  FUN_10f57080("NORMAL_LOWCLIMB");
  *(undefined4 *)(param_1 + 0x1fc) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  FUN_10f5bd40(6,FUN_10faa4e0);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10faac90;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10faac90;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0("LowWallClimbing");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_LOWCLIMB",extraout_ECX_00,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f96890 @ 10f96890 =================

/* [RE-AUTO c0]
   strings:
     ""FLUTE_TYPE_2""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f96890(undefined4 param_1)

{
  undefined4 extraout_ECX;
  int local_3c [8];
  int local_1c;
  int local_10;
  
  CInfoRecord__GetModelString("FLUTE_TYPE_2",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_3c);
  FUN_10f593b0();
  if (local_10 != 0) {
    FUN_10c3d5d0(local_10);
  }
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  if (local_3c[0] != 0) {
    FUN_10c3d5d0(local_3c[0]);
  }
  return;
}


// ================= FUN_10f96940 @ 10f96940 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_SET_LARGE_BUCKET""
     ""SetLargeBucket""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f96940(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_SET_LARGE_BUCKET",param_1);
  FUN_10f58340();
  FUN_10f56fa0("SetLargeBucket");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f96a20 @ 10f96a20 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_SET_SMALL_BUCKET""
     ""SetSmallBucket""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f96a20(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_SET_SMALL_BUCKET",param_1);
  FUN_10f58340();
  FUN_10f56fa0("SetSmallBucket");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f96070 @ 10f96070 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_DROP_EGG""
     ""NORMAL_IDLE""
     ""DropEgg""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f96070(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x82;
  CInfoRecord__GetModelString("NORMAL_DROP_EGG",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f56fa0("DropEgg");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f95fe0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f95fe0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f96270 @ 10f96270 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_DROP_EGG_C""
     ""NORMAL_IDLE""
     ""DropEgg""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f96270(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x82;
  CInfoRecord__GetModelString("NORMAL_DROP_EGG_C",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f56fa0("DropEgg");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f961a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f961a0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f963a0 @ 10f963a0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_BREAK_EGG""
     ""NORMAL_IDLE""
     ""BreakEgg""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f963a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_BREAK_EGG",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f56fa0("BreakEgg");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= QuestPresenter::SetupQuestCompleteAnimState @ 10f964d0 =================

/* [RE-R1]
   strings:
     ""QUEST_COMPLETE""
     ""NORMAL_IDLE""
     ""QuestComplete""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall QuestPresenter__SetupQuestCompleteAnimState(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("QUEST_COMPLETE",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f964b0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f964b0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f75060;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f75060;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10fac080);
  FUN_10f56fa0("QuestComplete");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= QuestPresenter::SetupQuestFailAnimState @ 10f96650 =================

/* [RE-R1]
   strings:
     ""QUEST_FAIL""
     ""NORMAL_IDLE""
     ""QuestFail""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall QuestPresenter__SetupQuestFailAnimState(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("QUEST_FAIL",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f96630;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f96630;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f75060;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f75060;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f56fa0("QuestFail");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f967a0 @ 10f967a0 =================

/* [RE-AUTO c0]
   strings:
     ""EndFluteType1""
     ""FLUTE_TYPE_1""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f967a0(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  FUN_10f56fa0("EndFluteType1");
  puVar1 = *(undefined4 **)(param_1 + 100);
  iVar2 = param_1 + 0x60;
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  CInfoRecord__GetModelString("FLUTE_TYPE_1",iVar2);
  FUN_10f58340();
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f94c00 @ 10f94c00 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_FIND_EGG""
     ""NORMAL_CARRY_EGG_IDLE""
     ""FindEgg""
     ""PLLocomotion""
     ""CarryHugeItemIdle"" */

void __fastcall FUN_10f94c00(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_FIND_EGG",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_CARRY_EGG_IDLE");
  FUN_10f56fa0("FindEgg");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f94dd0 @ 10f94dd0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CARRY_EGG_IDLE""
     ""NORMAL_DROP_EGG""
     ""NORMAL_CARRY_EGG_RUN""
     ""NORMAL_CARRY_EGG_JUMP""
     ""PLLocomotion""
     ""CarryHugeItemRun""
     ""CarryHugeItemJump""
     ""PLBaseSignal""
     ""DropEgg""
     ""HolsteredIdle"" */

void __fastcall FUN_10f94dd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int local_15c [8];
  int local_13c;
  int local_130;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x92;
  *(undefined4 *)(param_1 + 0x6c) = 10;
  CInfoRecord__GetModelString("NORMAL_CARRY_EGG_IDLE",param_1);
  FUN_10f58340();
  FUN_10f9c060(param_1,0);
  piVar3 = *(int **)(param_1 + 0x1c8);
  do {
    if (piVar3 == *(int **)(param_1 + 0x1cc)) {
LAB_10f94e4d:
      FUN_1083ab70("NORMAL_CARRY_EGG_RUN",0x14);
      FUN_1083ab70("NORMAL_CARRY_EGG_JUMP",0x15);
      puVar2 = *(undefined4 **)(param_1 + 0x110);
      local_c = CPlayerWeaponFSM__TryComboTransitionWithSkillGate;
      if (puVar2 == *(undefined4 **)(param_1 + 0x114)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = CPlayerWeaponFSM__TryComboTransitionWithSkillGate;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x110);
      local_c = FUN_10f9fd30;
      if (puVar2 == *(undefined4 **)(param_1 + 0x114)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = FUN_10f9fd30;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 0xec);
      local_c = FUN_10f94cf0;
      if (puVar2 == *(undefined4 **)(param_1 + 0xf0)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = FUN_10f94cf0;
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
      }
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemRun");
      FUN_10f573e0();
      FUN_10f56e60(param_1 + 0x230,extraout_ECX,local_15c);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemJump");
      FUN_10f573e0();
      FUN_10f56e60(param_1 + 0x234,extraout_ECX_00,local_ec);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("DropEgg");
      FUN_10f573e0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_DROP_EGG_C",extraout_ECX_01,local_44);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("DropEgg");
      FUN_10f573e0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_DROP_EGG",extraout_ECX_02,local_7c);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_03,local_b4);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLBaseAction");
      FUN_10f56fa0("VehicleStay");
      FUN_10f573e0();
      FUN_10f56fa0("VEHICLE_STATE",extraout_ECX_04,local_124);
      FUN_10f593b0();
      if (local_f8 != 0) {
        FUN_10c3d5d0(local_f8);
      }
      if (local_104 != 0) {
        FUN_10c3d5d0(local_104);
      }
      if (local_124[0] != 0) {
        FUN_10c3d5d0(local_124[0]);
      }
      if (local_88 != 0) {
        FUN_10c3d5d0(local_88);
      }
      if (local_94 != 0) {
        FUN_10c3d5d0(local_94);
      }
      if (local_b4[0] != 0) {
        FUN_10c3d5d0(local_b4[0]);
      }
      if (local_50 != 0) {
        FUN_10c3d5d0(local_50);
      }
      if (local_5c != 0) {
        FUN_10c3d5d0(local_5c);
      }
      if (local_7c[0] != 0) {
        FUN_10c3d5d0(local_7c[0]);
      }
      if (local_18 != 0) {
        FUN_10c3d5d0(local_18);
      }
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      if (local_44[0] != 0) {
        FUN_10c3d5d0(local_44[0]);
      }
      if (local_c0 != 0) {
        FUN_10c3d5d0(local_c0);
      }
      if (local_cc != 0) {
        FUN_10c3d5d0(local_cc);
      }
      if (local_ec[0] != 0) {
        FUN_10c3d5d0(local_ec[0]);
      }
      if (local_130 != 0) {
        FUN_10c3d5d0(local_130);
      }
      if (local_13c != 0) {
        FUN_10c3d5d0(local_13c);
      }
      if (local_15c[0] != 0) {
        FUN_10c3d5d0(local_15c[0]);
      }
      return;
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 4) == 0) {
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
        FUN_1083ab70("NORMAL_DROP_EGG",0xf);
      }
      goto LAB_10f94e4d;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


// ================= FUN_10f942c0 @ 10f942c0 =================

/* [RE-AUTO c0]
   strings:
     ""MUDMAN_END""
     ""ABNORMAL_MUDMAN_RUN""
     ""ABNORMAL_MUDMAN_IDLE""
     ""ABNORMAL_MUDMAN_JUMP""
     ""PLLocomotion""
     ""CarryHugeItemIdle""
     ""CarryHugeItemJump""
     ""CarryHugeItemRun""
     ""MudmanRush""
     ""HolsteredIdle"" */

void __fastcall FUN_10f942c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  FUN_10f9c060(param_1,0);
  piVar3 = *(int **)(param_1 + 0x1c8);
  do {
    if (piVar3 == *(int **)(param_1 + 0x1cc)) {
LAB_10f9430b:
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x11;
      FUN_10f57080("MUDMAN_END");
      *(undefined4 *)(param_1 + 0x6c) = 10;
      CInfoRecord__GetModelString("ABNORMAL_MUDMAN_RUN",extraout_ECX);
      FUN_10f58340();
      *(undefined2 *)(param_1 + 0x230) = 0x100;
      *(undefined4 *)(param_1 + 0x234) = 0x1a1;
      *(undefined4 *)(param_1 + 0x238) = 0x1a1;
      FUN_1083ab70("ABNORMAL_MUDMAN_IDLE",0x14);
      FUN_1083ab70("ABNORMAL_MUDMAN_JUMP",0x14);
      puVar2 = *(undefined4 **)(param_1 + 200);
      local_c = FUN_10f93e20;
      if (puVar2 == *(undefined4 **)(param_1 + 0xcc)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = FUN_10f93e20;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x110);
      local_c = CPlayerWeaponFSM__TryComboTransitionWithSkillGate;
      if (puVar2 == *(undefined4 **)(param_1 + 0x114)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = CPlayerWeaponFSM__TryComboTransitionWithSkillGate;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
      }
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemIdle");
      FUN_10f573e0();
      FUN_10f56e60(param_1 + 0x23c,extraout_ECX_00,local_124);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemJump");
      FUN_10f573e0();
      FUN_10f56e60(param_1 + 0x240,extraout_ECX_01,local_b4);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemRun");
      FUN_10f573e0();
      FUN_10f5a480(0x10,0x11,local_ec);
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("MudmanRush");
      FUN_10f573e0();
      FUN_10f5a480(0x11,0x10,local_7c);
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("BreakMud");
      FUN_10f573e0();
      FUN_10f56fa0("MUDMAN_END",extraout_ECX_02,local_44);
      FUN_10f593b0();
      if (local_18 != 0) {
        FUN_10c3d5d0(local_18);
      }
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      if (local_44[0] != 0) {
        FUN_10c3d5d0(local_44[0]);
      }
      if (local_50 != 0) {
        FUN_10c3d5d0(local_50);
      }
      if (local_5c != 0) {
        FUN_10c3d5d0(local_5c);
      }
      if (local_7c[0] != 0) {
        FUN_10c3d5d0(local_7c[0]);
      }
      if (local_c0 != 0) {
        FUN_10c3d5d0(local_c0);
      }
      if (local_cc != 0) {
        FUN_10c3d5d0(local_cc);
      }
      if (local_ec[0] != 0) {
        FUN_10c3d5d0(local_ec[0]);
      }
      if (local_88 != 0) {
        FUN_10c3d5d0(local_88);
      }
      if (local_94 != 0) {
        FUN_10c3d5d0(local_94);
      }
      if (local_b4[0] != 0) {
        FUN_10c3d5d0(local_b4[0]);
      }
      if (local_f8 != 0) {
        FUN_10c3d5d0(local_f8);
      }
      if (local_104 != 0) {
        FUN_10c3d5d0(local_104);
      }
      if (local_124[0] != 0) {
        FUN_10c3d5d0(local_124[0]);
      }
      return;
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 4) == 0) {
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      goto LAB_10f9430b;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


// ================= FUN_10f94690 @ 10f94690 =================

/* [RE-AUTO c0]
   strings:
     ""ABNORMAL_MUDMAN_JUMP""
     ""ABNORMAL_MUDMAN_IDLE""
     ""ABNORMAL_MUDMAN_LAND_LOW""
     ""ABNORMAL_MUDMAN_LAND_HIGH""
     ""CarryHugeItemJump""
     ""CarryHugeItemLandLow""
     ""CarryHugeItemLandHigh""
     ""BreakEgg""
     ""PLLocomotion""
     ""CarryHugeItemFall"" */

void __fastcall FUN_10f94690(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("ABNORMAL_MUDMAN_JUMP",param_1);
  FUN_10f58340();
  FUN_1083ab70("ABNORMAL_MUDMAN_IDLE",0x14);
  FUN_1083ab70("ABNORMAL_MUDMAN_IDLE",0x14);
  FUN_1083ab70("ABNORMAL_MUDMAN_LAND_LOW",0x18);
  FUN_1083ab70("ABNORMAL_MUDMAN_LAND_HIGH",0x19);
  FUN_10f56fa0("CarryHugeItemJump");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("CarryHugeItemLandLow");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("CarryHugeItemLandHigh");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("BreakEgg");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x82;
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f93e20;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f93e20;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemFall");
  FUN_10f573e0();
  FUN_10f5a480(1,0,local_ec);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("ABNORMAL_MUDMAN_IDLE",extraout_ECX,local_b4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("CarryHugeItemLandLow");
  FUN_10f573e0();
  FUN_10f56fa0("ABNORMAL_MUDMAN_LAND_LOW",extraout_ECX_00,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("CarryHugeItemLandHigh");
  FUN_10f573e0();
  FUN_10f56fa0("ABNORMAL_MUDMAN_LAND_HIGH",extraout_ECX_01,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  if (local_c0 != 0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_ec[0] != 0) {
    FUN_10c3d5d0(local_ec[0]);
  }
  return;
}


// ================= FUN_10f958f0 @ 10f958f0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CARRY_EGG_JUMP""
     ""NORMAL_CARRY_EGG_IDLE""
     ""NORMAL_CARRY_EGG_LAND_LOW""
     ""NORMAL_CARRY_EGG_LAND_HIGH""
     ""NORMAL_BREAK_EGG""
     ""CarryHugeItemJump""
     ""CarryHugeItemLandLow""
     ""CarryHugeItemLandHigh""
     ""BreakEgg""
     ""PLLocomotion"" */

void __fastcall FUN_10f958f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_CARRY_EGG_JUMP",param_1);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x82;
  FUN_10f9c060(param_1,0);
  piVar3 = *(int **)(param_1 + 0x1c8);
  do {
    if (piVar3 == *(int **)(param_1 + 0x1cc)) {
LAB_10f95959:
      FUN_1083ab70("NORMAL_CARRY_EGG_IDLE",0x15);
      FUN_1083ab70("NORMAL_CARRY_EGG_LAND_LOW",0x19);
      FUN_1083ab70("NORMAL_CARRY_EGG_LAND_HIGH",0x1a);
      FUN_1083ab70("NORMAL_BREAK_EGG",0x10);
      FUN_10f56fa0("CarryHugeItemJump");
      puVar2 = *(undefined4 **)(param_1 + 100);
      if (puVar2 == *(undefined4 **)(param_1 + 0x68)) {
        FUN_10f649a0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_c;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
      }
      FUN_10f56fa0("CarryHugeItemLandLow");
      puVar2 = *(undefined4 **)(param_1 + 100);
      if (puVar2 == *(undefined4 **)(param_1 + 0x68)) {
        FUN_10f649a0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_c;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
      }
      FUN_10f56fa0("CarryHugeItemLandHigh");
      puVar2 = *(undefined4 **)(param_1 + 100);
      if (puVar2 == *(undefined4 **)(param_1 + 0x68)) {
        FUN_10f649a0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_c;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
      }
      FUN_10f56fa0("BreakEgg");
      puVar2 = *(undefined4 **)(param_1 + 100);
      if (puVar2 == *(undefined4 **)(param_1 + 0x68)) {
        FUN_10f649a0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_c;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
      }
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemFall");
      FUN_10f573e0();
      FUN_10f5a480(1,0,local_124);
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX,local_ec);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemIdle");
      FUN_10f573e0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("CarryHugeItemLandLow");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_CARRY_EGG_LAND_LOW",extraout_ECX_00,local_7c);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemIdle");
      FUN_10f573e0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("CarryHugeItemLandHigh");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_CARRY_EGG_LAND_HIGH",extraout_ECX_01,local_44);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("BreakEgg");
      FUN_10f573e0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_BREAK_EGG",extraout_ECX_02,local_b4);
      FUN_10f593b0();
      if (local_88 != 0) {
        FUN_10c3d5d0(local_88);
      }
      if (local_94 != 0) {
        FUN_10c3d5d0(local_94);
      }
      if (local_b4[0] != 0) {
        FUN_10c3d5d0(local_b4[0]);
      }
      if (local_18 != 0) {
        FUN_10c3d5d0(local_18);
      }
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      if (local_44[0] != 0) {
        FUN_10c3d5d0(local_44[0]);
      }
      if (local_50 != 0) {
        FUN_10c3d5d0(local_50);
      }
      if (local_5c != 0) {
        FUN_10c3d5d0(local_5c);
      }
      if (local_7c[0] != 0) {
        FUN_10c3d5d0(local_7c[0]);
      }
      if (local_c0 != 0) {
        FUN_10c3d5d0(local_c0);
      }
      if (local_cc != 0) {
        FUN_10c3d5d0(local_cc);
      }
      if (local_ec[0] != 0) {
        FUN_10c3d5d0(local_ec[0]);
      }
      if (local_f8 != 0) {
        FUN_10c3d5d0(local_f8);
      }
      if (local_104 != 0) {
        FUN_10c3d5d0(local_104);
      }
      if (local_124[0] != 0) {
        FUN_10c3d5d0(local_124[0]);
      }
      return;
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 4) == 0) {
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      goto LAB_10f95959;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


// ================= FUN_10f95d80 @ 10f95d80 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CARRY_EGG_LAND_LOW""
     ""NORMAL_CARRY_EGG_IDLE""
     ""CarryHugeItemLandLow""
     ""PLLocomotion""
     ""CarryHugeItemIdle"" */

void __fastcall FUN_10f95d80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_CARRY_EGG_LAND_LOW",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_CARRY_EGG_IDLE");
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x82;
  FUN_10f9c060(param_1,0);
  piVar3 = *(int **)(param_1 + 0x1c8);
  do {
    if (piVar3 == *(int **)(param_1 + 0x1cc)) {
LAB_10f95df9:
      FUN_10f56fa0("CarryHugeItemLandLow");
      puVar2 = *(undefined4 **)(param_1 + 100);
      if (puVar2 == *(undefined4 **)(param_1 + 0x68)) {
        FUN_10f649a0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_c;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
      }
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX,local_44);
      FUN_10f593b0();
      if (local_18 != 0) {
        FUN_10c3d5d0(local_18);
      }
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      if (local_44[0] != 0) {
        FUN_10c3d5d0(local_44[0]);
      }
      return;
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 4) == 0) {
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      goto LAB_10f95df9;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


// ================= FUN_10f95eb0 @ 10f95eb0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CARRY_EGG_LAND_HIGH""
     ""NORMAL_CARRY_EGG_IDLE""
     ""CarryHugeItemLandHigh""
     ""PLLocomotion""
     ""CarryHugeItemIdle"" */

void __fastcall FUN_10f95eb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_CARRY_EGG_LAND_HIGH",param_1);
  FUN_10f58340();
  FUN_10f57080("NORMAL_CARRY_EGG_IDLE");
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x82;
  FUN_10f9c060(param_1,0);
  piVar3 = *(int **)(param_1 + 0x1c8);
  do {
    if (piVar3 == *(int **)(param_1 + 0x1cc)) {
LAB_10f95f29:
      FUN_10f56fa0("CarryHugeItemLandHigh");
      puVar2 = *(undefined4 **)(param_1 + 100);
      if (puVar2 == *(undefined4 **)(param_1 + 0x68)) {
        FUN_10f649a0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_c;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
      }
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX,local_44);
      FUN_10f593b0();
      if (local_18 != 0) {
        FUN_10c3d5d0(local_18);
      }
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      if (local_44[0] != 0) {
        FUN_10c3d5d0(local_44[0]);
      }
      return;
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 4) == 0) {
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      goto LAB_10f95f29;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


// ================= FUN_10f95270 @ 10f95270 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CARRY_EGG_RUN""
     ""NORMAL_DROP_EGG""
     ""NORMAL_CARRY_EGG_IDLE""
     ""NORMAL_CARRY_EGG_JUMP""
     ""NORMAL_BREAK_EGG""
     ""PLLocomotion""
     ""CarryHugeItemIdle""
     ""PLBaseSignal""
     ""DropEgg""
     ""HolsteredIdle"" */

void __fastcall FUN_10f95270(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int local_204 [8];
  int local_1e4;
  int local_1d8;
  int local_1cc [8];
  int local_1ac;
  int local_1a0;
  int local_194 [8];
  int local_174;
  int local_168;
  int local_15c [8];
  int local_13c;
  int local_130;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_CARRY_EGG_RUN",param_1);
  FUN_10f58340();
  FUN_10f9c060(param_1,0);
  piVar3 = *(int **)(param_1 + 0x1c8);
  do {
    if (piVar3 == *(int **)(param_1 + 0x1cc)) {
LAB_10f952dc:
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x93;
      *(undefined4 *)(param_1 + 0x6c) = 10;
      *(undefined1 *)(param_1 + 0x230) = 0;
      *(undefined4 *)(param_1 + 0x234) = 0x1a1;
      *(undefined4 *)(param_1 + 0x238) = 0x1a2;
      FUN_1083ab70("NORMAL_CARRY_EGG_IDLE",0x15);
      FUN_1083ab70("NORMAL_CARRY_EGG_JUMP",0x15);
      FUN_1083ab70("NORMAL_BREAK_EGG",0x10);
      puVar2 = *(undefined4 **)(param_1 + 0x110);
      local_c = CPlayerWeaponFSM__TryComboTransitionWithSkillGate;
      if (puVar2 == *(undefined4 **)(param_1 + 0x114)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = CPlayerWeaponFSM__TryComboTransitionWithSkillGate;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x110);
      local_c = FUN_10f9fd30;
      if (puVar2 == *(undefined4 **)(param_1 + 0x114)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = FUN_10f9fd30;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
      }
      puVar2 = *(undefined4 **)(param_1 + 0xec);
      local_c = FUN_10f94cf0;
      if (puVar2 == *(undefined4 **)(param_1 + 0xf0)) {
        FUN_108716d0(puVar2,&local_c,&local_5,1,1);
      }
      else {
        *puVar2 = FUN_10f94cf0;
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
      }
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemIdle");
      FUN_10f573e0();
      FUN_10f56e60(param_1 + 0x23c,extraout_ECX,local_204);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("DropEgg");
      FUN_10f573e0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_DROP_EGG_C",extraout_ECX_00,local_b4);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("DropEgg");
      FUN_10f573e0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_DROP_EGG",extraout_ECX_01,local_7c);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLBaseSignal");
      FUN_10f56fa0("BreakEgg");
      FUN_10f573e0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_BREAK_EGG",extraout_ECX_02,local_44);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemJump");
      FUN_10f573e0();
      FUN_10f56e60(param_1 + 0x240,extraout_ECX_03,local_194);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemRun");
      FUN_10f573e0();
      FUN_10f5a480(0x10,0x11,local_124);
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("CarryHugeItemRush");
      FUN_10f573e0();
      FUN_10f5a480(0x11,0x10,local_1cc);
      FUN_10f574b0();
      FUN_10f56fa0("PLLocomotion");
      FUN_10f56fa0("HolsteredIdle");
      FUN_10f573e0();
      FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_04,local_15c);
      FUN_10f593b0();
      FUN_10f574b0();
      FUN_10f56fa0("PLBaseAction");
      FUN_10f56fa0("VehicleStay");
      FUN_10f573e0();
      FUN_10f56fa0("VEHICLE_STATE",extraout_ECX_05,local_ec);
      FUN_10f593b0();
      if (local_c0 != 0) {
        FUN_10c3d5d0(local_c0);
      }
      if (local_cc != 0) {
        FUN_10c3d5d0(local_cc);
      }
      if (local_ec[0] != 0) {
        FUN_10c3d5d0(local_ec[0]);
      }
      if (local_130 != 0) {
        FUN_10c3d5d0(local_130);
      }
      if (local_13c != 0) {
        FUN_10c3d5d0(local_13c);
      }
      if (local_15c[0] != 0) {
        FUN_10c3d5d0(local_15c[0]);
      }
      if (local_1a0 != 0) {
        FUN_10c3d5d0(local_1a0);
      }
      if (local_1ac != 0) {
        FUN_10c3d5d0(local_1ac);
      }
      if (local_1cc[0] != 0) {
        FUN_10c3d5d0(local_1cc[0]);
      }
      if (local_f8 != 0) {
        FUN_10c3d5d0(local_f8);
      }
      if (local_104 != 0) {
        FUN_10c3d5d0(local_104);
      }
      if (local_124[0] != 0) {
        FUN_10c3d5d0(local_124[0]);
      }
      if (local_168 != 0) {
        FUN_10c3d5d0(local_168);
      }
      if (local_174 != 0) {
        FUN_10c3d5d0(local_174);
      }
      if (local_194[0] != 0) {
        FUN_10c3d5d0(local_194[0]);
      }
      if (local_18 != 0) {
        FUN_10c3d5d0(local_18);
      }
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      if (local_44[0] != 0) {
        FUN_10c3d5d0(local_44[0]);
      }
      if (local_50 != 0) {
        FUN_10c3d5d0(local_50);
      }
      if (local_5c != 0) {
        FUN_10c3d5d0(local_5c);
      }
      if (local_7c[0] != 0) {
        FUN_10c3d5d0(local_7c[0]);
      }
      if (local_88 != 0) {
        FUN_10c3d5d0(local_88);
      }
      if (local_94 != 0) {
        FUN_10c3d5d0(local_94);
      }
      if (local_b4[0] != 0) {
        FUN_10c3d5d0(local_b4[0]);
      }
      if (local_1d8 != 0) {
        FUN_10c3d5d0(local_1d8);
      }
      if (local_1e4 != 0) {
        FUN_10c3d5d0(local_1e4);
      }
      if (local_204[0] != 0) {
        FUN_10c3d5d0(local_204[0]);
      }
      return;
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 4) == 0) {
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
        FUN_1083ab70("NORMAL_DROP_EGG",0xf);
      }
      goto LAB_10f952dc;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}


// ================= FUN_10f0a890 @ 10f0a890 =================

/* [RE-AUTO c0]
   strings:
     ""PLCombat""
     ""HolsteredIdle""
     ""PLLocomotion""
     ""PLBaseSignal"" */

void __fastcall FUN_10f0a890(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint local_8;
  
  if (*(int **)(param_1 + 0x1358) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1358) + 0x6c))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x1358) + 0x6c))();
      iVar2 = *piVar3;
      uVar1 = (**(code **)(iVar2 + 0x78))("PLCombat",&DAT_11ce5cac,0);
      (**(code **)(iVar2 + 8))(uVar1);
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x1358) + 0x6c))();
      iVar2 = *piVar3;
      uVar1 = (**(code **)(iVar2 + 0x78))("PLLocomotion","HolsteredIdle",0);
      (**(code **)(iVar2 + 8))(uVar1);
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x1358) + 0x6c))();
      iVar2 = *piVar3;
      uVar1 = (**(code **)(iVar2 + 0x78))("PLBaseSignal",&DAT_11ce5cac,0);
      (**(code **)(iVar2 + 8))(uVar1);
    }
    puVar4 = (uint *)(**(code **)(**(int **)(param_1 + 0x1358) + 0xac))();
    uStack_14 = puVar4[1];
    uStack_10 = puVar4[2];
    uStack_c = puVar4[3];
    local_8 = puVar4[4];
    local_18 = *puVar4 | 0x100;
    (**(code **)(**(int **)(param_1 + 0x1358) + 0xb0))(&local_18);
  }
  return;
}


// ================= CChargeFallState::Enter @ 10f8bc00 =================

/* [RE-R1]
   strings:
     ""PlayerChargeBuff""
     ""PLLocomotion""
     ""StartFall""
     ""PLCharging""
     ""NORMAL_FALL"" */

void __fastcall CChargeFallState__Enter(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *piVar4;
  int local_50 [8];
  int local_30;
  int local_24;
  code *local_18;
  code *local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_c = 0x12;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = 0x12;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(undefined2 *)(param_1 + 0x1ac) = 0;
  piVar2 = (int *)CInfoRecord__GetModelString("PlayerChargeBuff");
  piVar4 = (int *)(param_1 + 0x200);
  if (*piVar4 != *piVar2) {
    if (*(int *)(*piVar4 + -0xc) < 0) {
      if (*(int *)(*piVar2 + -0xc) < 0) goto LAB_10f8bc97;
    }
    else {
      if (*(int *)(*piVar2 + -0xc) < 0) {
        FUN_1083ac70();
        *piVar4 = *piVar2;
        goto LAB_10f8bc97;
      }
      FUN_1083ac70();
    }
    iVar3 = *piVar2;
    *piVar4 = iVar3;
    FUN_10c3dab0(iVar3 + -0xc);
  }
LAB_10f8bc97:
  piVar4 = (int *)(local_10 + -0xc);
  if ((-1 < *piVar4) && (iVar3 = FUN_10c3dad0(piVar4), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_10 + -4));
    FUN_10c3d900(piVar4);
  }
  *(undefined1 *)(param_1 + 0x204) = *(undefined1 *)(param_1 + 0x1af);
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_14 = FUN_10f9b620;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_14,&local_6,1,1);
  }
  else {
    *puVar1 = FUN_10f9b620;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_18 = FUN_10f9b1e0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_18,&local_7,1,1);
  }
  else {
    *puVar1 = FUN_10f9b1e0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f5bd40(6,FUN_10f9b100);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("PLCharging");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX,local_50);
  FUN_10f593b0();
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_30 != 0) {
    FUN_10c3d5d0(local_30);
  }
  if (local_50[0] != 0) {
    FUN_10c3d5d0(local_50[0]);
  }
  return;
}


// ================= FUN_10f8b160 @ 10f8b160 =================

/* [RE-AUTO c0]
   strings:
     ""COMBAT_IDLE""
     ""PLLocomotion""
     ""StartFall""
     ""PLCharging""
     ""PLCombatAction""
     ""NORMAL_FALL"" */

void __fastcall FUN_10f8b160(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_IDLE",param_1);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x10;
  *(undefined4 *)(param_1 + 0x6c) = 3;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa0750;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa0750;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = (code *)&LAB_10f750e0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = &LAB_10f750e0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x110);
  local_c = FUN_10f9fd30;
  if (puVar1 == *(undefined4 **)(param_1 + 0x114)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9fd30;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10f73930;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f73930;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  FUN_10f5bd40(6,FUN_10f917b0);
  FUN_10f5bd40(6,FUN_10fa5aa0);
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_10f5bd40(6,FUN_10f9fb80);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("PLCharging");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f8b450 @ 10f8b450 =================

/* [RE-AUTO c0]
   strings:
     ""COMBAT_RUN""
     ""PLLocomotion""
     ""StartFall""
     ""PLCharging""
     ""PLCombatAction""
     ""NORMAL_FALL"" */

void __fastcall FUN_10f8b450(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_RUN",param_1);
  FUN_10f58340();
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x11;
  *(undefined4 *)(param_1 + 0x1f0) = 0x409ccccd;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f74e30;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f74e30;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  *(undefined4 *)(param_1 + 0x6c) = 3;
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f74fc0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f74fc0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x110);
  local_c = FUN_10f9fd30;
  if (puVar1 == *(undefined4 **)(param_1 + 0x114)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9fd30;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  }
  FUN_10f5bd40(6,CPetLocomotion__SelectCliffJumpOrFallAnim);
  FUN_10f5bd40(6,FUN_10fa5aa0);
  FUN_10f5bd40(6,FUN_10f9fb80);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("PLCharging");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f88db0 @ 10f88db0 =================

/* [RE-AUTO c0]
   strings:
     ""COMBAT_DEFENSE""
     ""PLCombatAction""
     ""COMBAT_ENDDEFENSE""
     ""PLCombat""
     ""PLDefenceFailed""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""COMBAT_DEFENSEFAILED""
     ""DefenseSuccess""
     ""COMBAT_DEFENSESUCCESS"" */

void __fastcall FUN_10f88db0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_DEFENSE",param_1);
  FUN_10f58340();
  FUN_10f56fa0("PLCombatAction");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f88c80;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f88c80;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f5bd40(6,FUN_10fa54d0);
  FUN_10f5bd40(6,FUN_10f917b0);
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa5520;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa5520;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fa55a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa55a0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  FUN_10f574b0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_ENDDEFENSE",extraout_ECX,local_124);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombat");
  FUN_10f56fa0("PLDefenceFailed");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_DEFENSEFAILED",extraout_ECX_00,local_44);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0("DefenseSuccess");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_DEFENSESUCCESS",extraout_ECX_01,local_b4);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0("DefenseKnockBack");
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_DEFENSEKNOCKBACK",extraout_ECX_02,local_ec);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX_03,local_7c);
  FUN_10f593b0();
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_c0 != 0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_ec[0] != 0) {
    FUN_10c3d5d0(local_ec[0]);
  }
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_f8 != 0) {
    FUN_10c3d5d0(local_f8);
  }
  if (local_104 != 0) {
    FUN_10c3d5d0(local_104);
  }
  if (local_124[0] != 0) {
    FUN_10c3d5d0(local_124[0]);
  }
  return;
}


// ================= FUN_10f89c90 @ 10f89c90 =================

/* [RE-AUTO c0]
   strings:
     ""COMBAT_DEFENSESUCCESS""
     ""DefenceSuccess""
     ""PLCombatAction""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""COMBAT_IDLE""
     ""Defensing""
     ""COMBAT_DEFENSE"" */

void __fastcall FUN_10f89c90(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_DEFENSESUCCESS",param_1);
  FUN_10f58340();
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_10f56fa0("DefenceSuccess");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x1080;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f89750;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f89750;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f89ba0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f89ba0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10f89810);
  FUN_10f574b0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0("Defensing");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_DEFENSE",extraout_ECX_00,local_7c);
  FUN_10f593b0();
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f89310 @ 10f89310 =================

/* [RE-AUTO c0]
   strings:
     ""COMBAT_DEFENSEFAILED""
     ""DefenceFailed""
     ""PLCombatAction""
     ""PLCombat""
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""COMBAT_IDLE"" */

void __fastcall FUN_10f89310(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int local_50 [8];
  int local_30;
  int local_24;
  undefined4 local_10;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("COMBAT_DEFENSEFAILED",param_1);
  FUN_10f58340();
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_10f56fa0("DefenceFailed");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x1080;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa5600;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa5600;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10fa5670;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa5670;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  FUN_10f5bd40(6,FUN_10fa5760);
  *(ulonglong *)(param_1 + 0x1dc) = (ulonglong)DAT_11cfe228 << 0x20;
  uVar2 = DAT_11cc1fb8;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  local_10 = 0;
  *(ulonglong *)(param_1 + 0x1e8) = (ulonglong)uVar2 << 0x20;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  FUN_10f574b0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombat");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX,local_50);
  FUN_10f593b0();
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_30 != 0) {
    FUN_10c3d5d0(local_30);
  }
  if (local_50[0] != 0) {
    FUN_10c3d5d0(local_50[0]);
  }
  return;
}


// ================= FUN_10f82850 @ 10f82850 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_JUMP_EVADE""
     ""JumpEvadeStandUp""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLFlying"" */

void __fastcall FUN_10f82850(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_a4 [8];
  int local_84;
  int local_78;
  int local_6c [8];
  int local_4c;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  code *local_34;
  int local_30;
  undefined4 local_24;
  code *local_20;
  code *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_JUMP_EVADE",param_1);
  FUN_10f58340();
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  local_14 = 4;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_14,&local_9,1,1);
  }
  else {
    *puVar1 = 4;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_10f56fa0("JumpEvadeStandUp");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_10,&local_7,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_10;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_20 = FUN_10f823a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_20,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f823a0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10f82500);
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_34 = FUN_10f82440;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_34,&local_6,1,1);
  }
  else {
    *puVar1 = FUN_10f82440;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  *(ulonglong *)(param_1 + 0x20c) = (ulonglong)DAT_11cfe200 << 0x20;
  *(undefined4 *)(param_1 + 0x214) = 0x3f666666;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0xc154cccd;
  local_24 = 0;
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  piVar2 = (int *)CInfoRecord__GetModelString("NORMAL_IDLE");
  piVar4 = (int *)(param_1 + 0x1e0);
  if (*piVar4 != *piVar2) {
    if (*(int *)(*piVar4 + -0xc) < 0) {
      if (*(int *)(*piVar2 + -0xc) < 0) goto LAB_10f82a10;
    }
    else {
      if (*(int *)(*piVar2 + -0xc) < 0) {
        FUN_1083ac70();
        *piVar4 = *piVar2;
        goto LAB_10f82a10;
      }
      FUN_1083ac70();
    }
    iVar3 = *piVar2;
    *piVar4 = iVar3;
    FUN_10c3dab0(iVar3 + -0xc);
  }
LAB_10f82a10:
  piVar4 = (int *)(local_30 + -0xc);
  if ((-1 < *piVar4) && (iVar3 = FUN_10c3dad0(piVar4), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_30 + -4));
    FUN_10c3d900(piVar4);
  }
  FUN_10f574b0();
  FUN_10f56e50();
  local_1c = FUN_10fa3b00;
  if (local_3c == local_38) {
    FUN_10fb5990(local_3c,&local_1c,&local_8,1,1);
  }
  else {
    if (local_3c != (undefined4 *)0x0) {
      *local_3c = FUN_10fa3b00;
      local_3c[1] = local_18;
    }
    local_3c = local_3c + 2;
  }
  FUN_10f5a480(1,0,local_6c);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f5a480(2,1,local_a4);
  *(undefined1 *)(param_1 + 0x1fc) = 0;
  if (local_78 != 0) {
    FUN_10c3d5d0(local_78);
  }
  if (local_84 != 0) {
    FUN_10c3d5d0(local_84);
  }
  if (local_a4[0] != 0) {
    FUN_10c3d5d0(local_a4[0]);
  }
  if (local_40 != 0) {
    FUN_10c3d5d0(local_40);
  }
  if (local_4c != 0) {
    FUN_10c3d5d0(local_4c);
  }
  if (local_6c[0] != 0) {
    FUN_10c3d5d0(local_6c[0]);
  }
  return;
}


// ================= FUN_10f82b80 @ 10f82b80 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CATHANDCART""
     ""InjuryStandFront""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseAction"" */

void __fastcall FUN_10f82b80(int param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  local_c = (code *)0x14;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar2 = param_1 + 0x40;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    iVar2 = extraout_ECX;
  }
  else {
    *puVar1 = 0x14;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  CInfoRecord__GetModelString("NORMAL_CATHANDCART",iVar2);
  FUN_10f58340();
  FUN_10f56fa0("InjuryStandFront");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f9ee30;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9ee30;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f9f020;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f9f020;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10f9eee0);
  FUN_10f57080("NORMAL_IDLE");
  *(undefined1 *)(param_1 + 0x1ae) = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f82da0 @ 10f82da0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CLIMBLADDER""
     ""ClimbLadder""
     ""ClimbLadderUp""
     ""ClimbLadderNone""
     ""ClimbLadderDown""
     ""LadderOffTopHigh""
     ""ClimbHanging""
     ""LadderOnBottom""
     ""NORMAL_LOCOMOTION""
     ""PLBaseSignal"" */

void __fastcall FUN_10f82da0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar2;
  uint uVar3;
  int local_19c [8];
  int local_17c;
  int local_170;
  int local_164 [8];
  int local_144;
  int local_138;
  int local_12c [8];
  int local_10c;
  int local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
  int local_f4 [8];
  int local_d4;
  int local_c8;
  undefined4 *local_c4;
  undefined4 *local_c0;
  int local_bc [8];
  int local_9c;
  int local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  int local_84 [8];
  int local_64;
  int local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c [8];
  int local_2c;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  code *local_14;
  undefined4 local_10;
  code *local_c;
  undefined1 local_5;
  
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x100;
  CInfoRecord__GetModelString("NORMAL_CLIMBLADDER",param_1);
  FUN_10f58340();
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 5;
  FUN_10f56fa0("ClimbLadder");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f5bd40(6,FUN_10fa3b40);
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10fa3e00;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa3e00;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10fa44a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa44a0;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa4270;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa4270;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10fa43a0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa43a0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f56fa0("ClimbLadderUp");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("ClimbLadderNone");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("ClimbLadderDown");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("LadderOffTopHigh");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("ClimbHanging");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("LadderOnBottom");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_1083ab70("NORMAL_LOCOMOTION",0x11);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined2 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ClimbUp");
  FUN_10f573e0();
  FUN_10f56e50();
  local_14 = FUN_10fa4600;
  if (local_8c == local_88) {
    FUN_10fb5990(local_8c,&local_14,&local_5,1,1);
  }
  else {
    if (local_8c != (undefined4 *)0x0) {
      *local_8c = FUN_10fa4600;
      local_8c[1] = local_10;
    }
    local_8c = local_8c + 2;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ClimbUp");
  FUN_10f573e0();
  local_14 = FUN_10fa4600;
  if (local_fc == local_f8) {
    FUN_10fb5990(local_fc,&local_14,&local_5,1,1);
  }
  else {
    if (local_fc != (undefined4 *)0x0) {
      *local_fc = FUN_10fa4600;
      local_fc[1] = local_10;
    }
    local_fc = local_fc + 2;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ClimbDown");
  FUN_10f573e0();
  local_14 = FUN_10fa4660;
  if (local_c4 == local_c0) {
    FUN_10fb5990(local_c4,&local_14,&local_5,1,1);
  }
  else {
    if (local_c4 != (undefined4 *)0x0) {
      *local_c4 = FUN_10fa4660;
      local_c4[1] = local_10;
    }
    local_c4 = local_c4 + 2;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("ClimbDown");
  FUN_10f573e0();
  local_14 = FUN_10fa4660;
  if (local_54 == local_50) {
    FUN_10fb5990(local_54,&local_14,&local_5,1,1);
  }
  else {
    if (local_54 != (undefined4 *)0x0) {
      *local_54 = FUN_10fa4660;
      local_54[1] = local_10;
    }
    local_54 = local_54 + 2;
  }
  FUN_10f574b0();
  local_14 = FUN_10fa46c0;
  if (local_1c == local_18) {
    FUN_10fb5990(local_1c,&local_14,&local_5,1,1);
  }
  else {
    if (local_1c != (undefined4 *)0x0) {
      *local_1c = FUN_10fa46c0;
      local_1c[1] = local_10;
    }
    local_1c = local_1c + 2;
  }
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("LadderOffTopHigh");
  FUN_10f573e0();
  uVar2 = 0;
  do {
    uVar3 = uVar2 & 0xffff;
    FUN_10f5a480(1,uVar3,local_bc);
    FUN_10f5a480(2,uVar3,local_12c);
    FUN_10f5a480(3,uVar3,local_f4);
    FUN_10f5a480(4,uVar3,local_84);
    FUN_10f5a480(5,uVar3,local_4c);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_164);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX_00,local_19c);
  FUN_10f593b0();
  if (local_170 != 0) {
    FUN_10c3d5d0(local_170);
  }
  if (local_17c != 0) {
    FUN_10c3d5d0(local_17c);
  }
  if (local_19c[0] != 0) {
    FUN_10c3d5d0(local_19c[0]);
  }
  if (local_138 != 0) {
    FUN_10c3d5d0(local_138);
  }
  if (local_144 != 0) {
    FUN_10c3d5d0(local_144);
  }
  if (local_164[0] != 0) {
    FUN_10c3d5d0(local_164[0]);
  }
  if (local_20 != 0) {
    FUN_10c3d5d0(local_20);
  }
  if (local_2c != 0) {
    FUN_10c3d5d0(local_2c);
  }
  if (local_4c[0] != 0) {
    FUN_10c3d5d0(local_4c[0]);
  }
  if (local_58 != 0) {
    FUN_10c3d5d0(local_58);
  }
  if (local_64 != 0) {
    FUN_10c3d5d0(local_64);
  }
  if (local_84[0] != 0) {
    FUN_10c3d5d0(local_84[0]);
  }
  if (local_c8 != 0) {
    FUN_10c3d5d0(local_c8);
  }
  if (local_d4 != 0) {
    FUN_10c3d5d0(local_d4);
  }
  if (local_f4[0] != 0) {
    FUN_10c3d5d0(local_f4[0]);
  }
  if (local_100 != 0) {
    FUN_10c3d5d0(local_100);
  }
  if (local_10c != 0) {
    FUN_10c3d5d0(local_10c);
  }
  if (local_12c[0] != 0) {
    FUN_10c3d5d0(local_12c[0]);
  }
  if (local_90 != 0) {
    FUN_10c3d5d0(local_90);
  }
  if (local_9c != 0) {
    FUN_10c3d5d0(local_9c);
  }
  if (local_bc[0] != 0) {
    FUN_10c3d5d0(local_bc[0]);
  }
  return;
}


// ================= FUN_10f82250 @ 10f82250 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_MINE""
     ""PLLocomotion""
     ""CarryHugeItemIdle""
     ""NORMAL_CARRY_EGG_IDLE"" */

void __fastcall FUN_10f82250(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  CInfoRecord__GetModelString("NORMAL_MINE",param_1);
  FUN_10f58340();
  FUN_10f56fa0(&DAT_11cfd3a0);
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f81f20;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f81f20;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  local_c = (code *)0x3;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = 3;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f80ae0 @ 10f80ae0 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CLIFF_JUMP""
     ""Landing""
     ""StartJump""
     ""Falling""
     ""StartFall""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLFlying""
     ""PLCombatAction""
     ""UnholsteredIdle"" */

void __fastcall FUN_10f80ae0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NORMAL_CLIFF_JUMP",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Landing");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa38f0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa38f0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f56fa0("Landing");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("StartJump");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Falling");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("StartFall");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("Falling");
  FUN_10f573e0();
  FUN_10f5a480(1,0,local_124);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f5a480(3,1,local_44);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f5a480(4,1,local_7c);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_ec);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX_00,local_b4);
  FUN_10f593b0();
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  if (local_c0 != 0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_ec[0] != 0) {
    FUN_10c3d5d0(local_ec[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_f8 != 0) {
    FUN_10c3d5d0(local_f8);
  }
  if (local_104 != 0) {
    FUN_10c3d5d0(local_104);
  }
  if (local_124[0] != 0) {
    FUN_10c3d5d0(local_124[0]);
  }
  return;
}


// ================= FUN_10f800f0 @ 10f800f0 =================

/* [RE-AUTO c0]
   strings:
     ""EAT_SATISFY""
     ""EatSatisfy""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal"" */

void __fastcall FUN_10f800f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("EAT_SATISFY",param_1);
  FUN_10f58340();
  FUN_10f56fa0("EatSatisfy");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f80200 @ 10f80200 =================

/* [RE-AUTO c0]
   strings:
     ""EAT_DISGORGE""
     ""EatDisgorge""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal"" */

void __fastcall FUN_10f80200(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("EAT_DISGORGE",param_1);
  FUN_10f58340();
  FUN_10f56fa0("EatDisgorge");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f57080("NORMAL_IDLE");
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f81870 @ 10f81870 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_COLLECT""
     ""CollectPlant""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""NORMAL_IDLE""
     ""CarryHugeItemIdle""
     ""NORMAL_CARRY_EGG_IDLE""
     ""Glider_JumpOut""
     ""NORMAL_FLY"" */

void __fastcall FUN_10f81870(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 *puVar3;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  CInfoRecord__GetModelString("NORMAL_COLLECT",param_1);
  FUN_10f58340();
  FUN_10f56fa0("CollectPlant");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  piVar2 = (int *)FUN_10fdc130();
  if (*(int *)(*piVar2 + -0xc) < 0) {
    puVar3 = &DAT_1201fc98;
  }
  else {
    puVar3 = (undefined1 *)*piVar2;
    FUN_10c3dab0(puVar3 + -0xc,puVar3);
  }
  FUN_10f570a0(puVar3);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX_00,local_b4);
  FUN_10f593b0();
  *(undefined1 *)(param_1 + 0x14) = 1;
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("Glider_JumpOut");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FLY",extraout_ECX_01,local_7c);
  FUN_10f593b0();
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f81c10 @ 10f81c10 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_CATCH""
     ""Catch""
     ""PLLocomotion""
     ""CarryHugeItemIdle""
     ""NORMAL_CARRY_EGG_IDLE"" */

void __fastcall FUN_10f81c10(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  undefined4 local_c;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  CInfoRecord__GetModelString("NORMAL_CATCH",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Catch");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f81d90 @ 10f81d90 =================

/* [RE-AUTO c0]
   strings:
     ""NORMAL_STRIP""
     ""Strip""
     ""PLLocomotion""
     ""CrouchIdle""
     ""CROUCH_IDLE""
     ""CarryHugeItemIdle""
     ""NORMAL_CARRY_EGG_IDLE"" */

void __fastcall FUN_10f81d90(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  CInfoRecord__GetModelString("NORMAL_STRIP",param_1);
  FUN_10f58340();
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f81cf0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f81cf0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f56fa0("Strip");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CrouchIdle");
  FUN_10f573e0();
  FUN_10f56fa0("CROUCH_IDLE",extraout_ECX,local_7c);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("CarryHugeItemIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_CARRY_EGG_IDLE",extraout_ECX_00,local_44);
  FUN_10f593b0();
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  return;
}


// ================= CPetActionController::BuildParapetCliffJumpStates @ 10f81100 =================

/* [RE-R1]
   strings:
     ""PARAPET_CLIFF_JUMP""
     ""Landing""
     ""StartJump_Parapet""
     ""Falling_Parapet""
     ""StartFall_Parapet""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLFlying""
     ""PLCombatAction""
     ""UnholsteredIdle"" */

void __fastcall CPetActionController__BuildParapetCliffJumpStates(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_124 [8];
  int local_104;
  int local_f8;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("PARAPET_CLIFF_JUMP",param_1);
  FUN_10f58340();
  FUN_10f56fa0("Landing");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fa39f0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fa39f0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f56fa0("StartJump_Parapet");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("Falling_Parapet");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("StartFall_Parapet");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("Falling_Parapet");
  FUN_10f573e0();
  FUN_10f5a480(2,0,local_124);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f5a480(3,2,local_44);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLFlying");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f5a480(4,2,local_7c);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_ec);
  FUN_10f593b0();
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("UnholsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLCombatAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("COMBAT_IDLE",extraout_ECX_00,local_b4);
  FUN_10f593b0();
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  if (local_c0 != 0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_ec[0] != 0) {
    FUN_10c3d5d0(local_ec[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_f8 != 0) {
    FUN_10c3d5d0(local_f8);
  }
  if (local_104 != 0) {
    FUN_10c3d5d0(local_104);
  }
  if (local_124[0] != 0) {
    FUN_10c3d5d0(local_124[0]);
  }
  return;
}


// ================= FUN_10f81730 @ 10f81730 =================

/* [RE-AUTO c0]
   strings:
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal""
     ""NORMAL_IDLE"" */

void FUN_10f81730(void)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined1 *puVar2;
  int local_3c [8];
  int local_1c;
  int local_10;
  
  piVar1 = (int *)FUN_10fdc130();
  if (*(int *)(*piVar1 + -0xc) < 0) {
    puVar2 = &DAT_1201fc98;
  }
  else {
    puVar2 = (undefined1 *)*piVar1;
    FUN_10c3dab0(puVar2 + -0xc,puVar2);
  }
  FUN_10f570a0(puVar2);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_3c);
  FUN_10f593b0();
  if (local_10 != 0) {
    FUN_10c3d5d0(local_10);
  }
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  if (local_3c[0] != 0) {
    FUN_10c3d5d0(local_3c[0]);
  }
  return;
}


// ================= FUN_10f86f90 @ 10f86f90 =================

/* [RE-AUTO c0]
   strings:
     ""VEHICLE_STATE""
     ""VehicleLeave""
     ""PLBaseAction""
     ""VehicleStay""
     ""PLBaseSignal""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""NORMAL_IDLE"" */

void __fastcall FUN_10f86f90(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_ec [8];
  int local_cc;
  int local_c0;
  int local_b4 [8];
  int local_94;
  int local_88;
  int local_7c [8];
  int local_5c;
  int local_50;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("VEHICLE_STATE",param_1);
  FUN_10f58340();
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  local_c = (code *)0x6;
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = 6;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x800;
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f868e0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f868e0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10f86a50);
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f86c60;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f86c60;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f86d60;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f86d60;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f56fa0("VehicleLeave");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0("VehicleStay");
  FUN_10f573e0();
  FUN_10f5a480(1,0,local_ec);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("VehicleLeave");
  FUN_10f573e0();
  FUN_10f5a480(3,1,local_7c);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("VehicleLeave");
  FUN_10f573e0();
  FUN_10f5a480(3,0,local_b4);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  if (local_88 != 0) {
    FUN_10c3d5d0(local_88);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_b4[0] != 0) {
    FUN_10c3d5d0(local_b4[0]);
  }
  if (local_50 != 0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_7c[0] != 0) {
    FUN_10c3d5d0(local_7c[0]);
  }
  if (local_c0 != 0) {
    FUN_10c3d5d0(local_c0);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_ec[0] != 0) {
    FUN_10c3d5d0(local_ec[0]);
  }
  return;
}


// ================= FUN_10f86390 @ 10f86390 =================

/* [RE-AUTO c0]
   strings:
     ""NET_FISHING""
     ""NetFishing""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseSignal"" */

void __fastcall FUN_10f86390(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("NET_FISHING",param_1);
  FUN_10f58340();
  FUN_10f56fa0("NetFishing");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f57080("NORMAL_IDLE");
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f86270;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f86270;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f862f0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f862f0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}


// ================= FUN_10f85a60 @ 10f85a60 =================

/* [RE-AUTO c0]
   strings:
     ""FISH_BEGIN""
     ""FishBegin""
     ""FishFail""
     ""FishStruggle""
     ""FishSuccess""
     ""PLBaseAction""
     ""FishMaintain""
     ""PLBaseSignal""
     ""PLLocomotion""
     ""HolsteredIdle"" */

void __fastcall FUN_10f85a60(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_f8 [8];
  int local_d8;
  int local_cc;
  int local_c0 [8];
  int local_a0;
  int local_94;
  int local_88 [8];
  int local_68;
  int local_5c;
  int local_50 [8];
  int local_30;
  int local_24;
  undefined4 local_10;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("FISH_BEGIN",param_1);
  FUN_10f58340();
  local_10 = 0;
  *(undefined2 *)(param_1 + 0x1ac) = 4;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  *(undefined4 *)(param_1 + 0x220) = 1;
  *(undefined4 *)(param_1 + 0x21c) = 1;
  *(undefined4 *)(param_1 + 0x224) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 2000;
  *(undefined4 *)(param_1 + 0x230) = 3000;
  *(undefined4 *)(param_1 + 0x234) = 3000;
  *(undefined4 *)(param_1 + 0x238) = 4000;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 20000;
  *(undefined4 *)(param_1 + 0x244) = 1;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xec);
  local_c = FUN_10f83e00;
  if (puVar1 == *(undefined4 **)(param_1 + 0xf0)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f83e00;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  local_c = FUN_10f84ce0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xfc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f84ce0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10f83ec0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f83ec0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f5bd40(6,FUN_10f84780);
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_c = FUN_10f84ac0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10f84ac0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f56fa0("FishBegin");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("FishFail");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("FishStruggle");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f56fa0("FishSuccess");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0("FishMaintain");
  FUN_10f573e0();
  FUN_10f5a480(1,0,local_f8);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("FishSuccess");
  FUN_10f573e0();
  FUN_10f5a480(2,1,local_88);
  FUN_10f574b0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0("FishFail");
  FUN_10f573e0();
  FUN_10f5a480(3,1,local_c0);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseSignal");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_50);
  FUN_10f593b0();
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_30 != 0) {
    FUN_10c3d5d0(local_30);
  }
  if (local_50[0] != 0) {
    FUN_10c3d5d0(local_50[0]);
  }
  if (local_94 != 0) {
    FUN_10c3d5d0(local_94);
  }
  if (local_a0 != 0) {
    FUN_10c3d5d0(local_a0);
  }
  if (local_c0[0] != 0) {
    FUN_10c3d5d0(local_c0[0]);
  }
  if (local_5c != 0) {
    FUN_10c3d5d0(local_5c);
  }
  if (local_68 != 0) {
    FUN_10c3d5d0(local_68);
  }
  if (local_88[0] != 0) {
    FUN_10c3d5d0(local_88[0]);
  }
  if (local_cc != 0) {
    FUN_10c3d5d0(local_cc);
  }
  if (local_d8 != 0) {
    FUN_10c3d5d0(local_d8);
  }
  if (local_f8[0] != 0) {
    FUN_10c3d5d0(local_f8[0]);
  }
  return;
}


// ================= CSkillSequence::LoadFromXmlNode @ 11065d70 =================

/* [RE-R1]
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

undefined1 __thiscall CSkillSequence__LoadFromXmlNode(int param_1,int *param_2)

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


// ================= TlvMonsterSkillSyncV2::PrintText @ 102ed140 =================

/* [RE-R1]
   strings:
     ""0x%02x""
     ""[bSteeringEnabled]""
     ""%I64i""
     ""[llSyncTime]""
     ""[dwMonsterID]""
     ""[szAnimSeqName]""
     ""[szPartBoneName]""
     ""[iSkillID]""
     ""[iSkillLv]""
     ""[dwSyncFlag]"" */

int __thiscall
TlvMonsterSkillSyncV2__PrintText
          (undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar3;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  
  iVar2 = param_3;
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSteeringEnabled]","0x%02x",*param_1);
  if ((((iVar1 == 0) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llSyncTime]","%I64i",
                                    *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5)),
       iVar1 == 0)) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMonsterID]",&DAT_11d9f574,
                                   *(undefined4 *)(param_1 + 9)), iVar1 == 0)) &&
     (((((iVar1 = TdrText_FieldValueFmt(param_4,"[szAnimSeqName]",param_1 + 0xd), iVar1 == 0 &&
         (iVar1 = TdrText_FieldValueFmt(param_4,"[szPartBoneName]",param_1 + 0x10d), iVar1 == 0)) &&
        ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillID]",&DAT_11d9e0b4,
                                      *(undefined4 *)(param_1 + 299)), iVar1 == 0 &&
         ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSkillLv]",&DAT_11d9e0b4,
                                       *(undefined4 *)(param_1 + 0x12f)), iVar1 == 0 &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSyncFlag]",&DAT_11d9f574,
                                       *(undefined4 *)(param_1 + 0x133)), iVar1 == 0)))))) &&
       (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwTargetID]",&DAT_11d9f574,
                                    *(undefined4 *)(param_1 + 0x137)), iVar1 == 0)) &&
      (((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTargetSrvID]",&DAT_11d9e0b4,
                                     *(undefined4 *)(param_1 + 0x13b)), iVar1 == 0 &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwFlag]",&DAT_11d9f574,
                                     *(undefined4 *)(param_1 + 0x13f)), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stTargetDis]",extraout_ECX), iVar1 == 0)))))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stMoveSpeed]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_4,"[stTargetRot]",extraout_ECX_01), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102713d0(param_2,iVar1,param_4);
        if ((iVar1 == 0) &&
           (iVar1 = TdrText_FieldLabelChar(param_4,"[stRotSpeed]",extraout_ECX_02), iVar1 == 0)) {
          iVar1 = param_3;
          if (-1 < param_3) {
            iVar1 = param_3 + 1;
          }
          iVar1 = FUN_102713d0(param_2,iVar1,param_4);
          if (((iVar1 == 0) &&
              (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bRotSpeedByAnim]","0x%02x",
                                           param_1[0x173]), iVar1 == 0)) &&
             (iVar1 = TdrText_FieldLabelChar(param_4,"[stMonsterPos]",extraout_ECX_03), iVar1 == 0))
          {
            iVar1 = param_3;
            if (-1 < param_3) {
              iVar1 = param_3 + 1;
            }
            iVar1 = FUN_102713d0(param_2,iVar1,param_4);
            if ((iVar1 == 0) &&
               (iVar1 = TdrText_FieldLabelChar(param_4,"[stMonsterRot]",extraout_ECX_04), iVar1 == 0
               )) {
              iVar1 = param_3;
              if (-1 < param_3) {
                iVar1 = param_3 + 1;
              }
              iVar1 = TdrDebugFormat_FloatField_at0xc(param_2,iVar1,param_4);
              if (((iVar1 == 0) && (iVar1 = TdrText_FieldScalar(), iVar1 == 0)) &&
                 ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[bRestartAnim]","0x%02x",
                                               param_1[0x194]), iVar1 == 0 &&
                  ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRotFlag]",&DAT_11d9e0b4,
                                                *(undefined4 *)(param_1 + 0x195)), iVar1 == 0 &&
                   (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTargetAttackNum]",
                                                &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x199)),
                   iVar1 == 0)))))) {
                iVar1 = *(int *)(param_1 + 0x199);
                if (iVar1 < 0) {
                  return -6;
                }
                if (8 < iVar1) {
                  return -7;
                }
                iVar3 = 0;
                param_3 = 0;
                if (0 < iVar1) {
                  do {
                    iVar1 = TdrText_ArrayElemLabel
                                      (param_4,"[astTargetMultiAttackPos]",param_3,param_3);
                    if (iVar1 != 0) {
                      return iVar1;
                    }
                    iVar1 = FUN_102713d0(param_2);
                    if (iVar1 != 0) {
                      return iVar1;
                    }
                    iVar3 = param_3 + 1;
                    param_3 = iVar3;
                  } while (iVar3 < *(int *)(param_1 + 0x199));
                }
                iVar1 = TdrText_FieldLabelChar(param_4,"[stTargetAttackPos]",iVar3);
                if (iVar1 == 0) {
                  iVar1 = iVar2;
                  if (-1 < iVar2) {
                    iVar1 = iVar2 + 1;
                  }
                  iVar1 = FUN_102713d0(param_2,CONCAT44(param_4,iVar1));
                  if ((((((iVar1 == 0) &&
                         (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNeedTargetAttackPos]"
                                                      ,"0x%02x",param_1[0x209]), iVar1 == 0)) &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[dwAckFlag]",
                                                     &DAT_11d9f574,*(undefined4 *)(param_1 + 0x20a))
                        , iVar1 == 0)) &&
                       ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iUserParam1]",
                                                     &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x20e))
                        , iVar1 == 0 &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[iUserParam2]",
                                                     &DAT_11d9e0b4,*(undefined4 *)(param_1 + 0x212))
                        , iVar1 == 0)))) &&
                      ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bSetRotate]","0x%02x",
                                                    param_1[0x216]), iVar1 == 0 &&
                       ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bSetPos]","0x%02x",
                                                     param_1[0x217]), iVar1 == 0 &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNoTransferCorrection]"
                                                     ,"0x%02x",param_1[0x218]), iVar1 == 0)))))) &&
                     ((iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[bNeedMoveSpeedAcc]",
                                                   "0x%02x",param_1[0x219]), iVar1 == 0 &&
                      (iVar1 = TdrText_FieldLabelChar
                                         (param_4,"[stMoveSpeedAccelerate]",extraout_ECX_05),
                      iVar1 == 0)))) {
                    iVar1 = iVar2;
                    if (-1 < iVar2) {
                      iVar1 = iVar2 + 1;
                    }
                    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
                    if ((((iVar1 == 0) &&
                         (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[fMoveSpeedAccStart]",
                                                      &DAT_11da0cf4,
                                                      (double)*(float *)(param_1 + 0x226)),
                         iVar1 == 0)) &&
                        (iVar1 = TdrText_FieldScalar(param_2,iVar2,param_4,"[fMoveSpeedAccEnd]",
                                                     &DAT_11da0cf4,
                                                     (double)*(float *)(param_1 + 0x22a)),
                        iVar1 == 0)) &&
                       (iVar1 = TdrText_FieldLabelChar
                                          (param_4,"[stMoveSplineScale]",extraout_ECX_06),
                       iVar1 == 0)) {
                      if (iVar2 < 0) {
                        iVar2 = FUN_102713d0(param_2,iVar2,param_4);
                        return iVar2;
                      }
                      iVar1 = FUN_102713d0(param_2,iVar2 + 1,param_4);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


// ================= TlvMonsterFullSnapshot::PrintText @ 102ee200 =================

/* [RE-R1]
   strings:
     ""[iNetID]""
     ""[nSpawnType]""
     ""[iMonsterInfoID]""
     ""%I64u""
     ""[ullEntGUID]""
     ""[szName]""
     ""[szClass]""
     ""[stPose]""
     ""[iFaction]""
     ""[szBTState]"" */

int __thiscall
TlvMonsterFullSnapshot__PrintText
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar5;
  uint extraout_ECX_02;
  int extraout_ECX_03;
  
  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iNetID]",&DAT_11d9e0b4,*param_1);
  if (((((iVar3 == 0) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nSpawnType]",&DAT_11d9e0b4,
                                     (int)*(short *)(param_1 + 1)), iVar3 == 0)) &&
       (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iMonsterInfoID]",&DAT_11d9e0b4,
                                    *(undefined4 *)((int)param_1 + 6)), iVar3 == 0)) &&
      ((iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullEntGUID]","%I64u",
                                    *(undefined4 *)((int)param_1 + 10),
                                    *(undefined4 *)((int)param_1 + 0xe)), iVar3 == 0 &&
       (iVar3 = TdrText_FieldValueFmt(param_4,"[szName]",(int)param_1 + 0x12), iVar3 == 0)))) &&
     ((iVar3 = TdrText_FieldValueFmt(param_4,"[szClass]",(int)param_1 + 0x32), iVar3 == 0 &&
      (iVar3 = TdrText_FieldLabelChar(param_4,"[stPose]",extraout_ECX), iVar3 == 0)))) {
    iVar3 = param_3;
    if (-1 < param_3) {
      iVar3 = param_3 + 1;
    }
    iVar3 = TdrDebugFormat_ByteThenFloatSub(param_2,iVar3,param_4);
    if (((iVar3 == 0) &&
        (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x6e)), iVar3 == 0)) &&
       ((iVar3 = TdrText_FieldValueFmt(param_4,"[szBTState]",(int)param_1 + 0x72), iVar3 == 0 &&
        (iVar3 = TdrText_FieldLabelChar(param_4,"[stBBVars]",extraout_ECX_00), iVar3 == 0)))) {
      iVar3 = param_3;
      if (-1 < param_3) {
        iVar3 = param_3 + 1;
      }
      iVar3 = TdrDebugFormat_VarsList16(param_2,iVar3,param_4);
      if (((iVar3 == 0) &&
          (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[bDead]",&DAT_11d9e0b4,
                                       *(undefined1 *)(param_1 + 0x2ad)), iVar3 == 0)) &&
         (iVar3 = TdrText_FieldLabelChar(param_4,"[stLcmState]",extraout_ECX_01), iVar3 == 0)) {
        iVar3 = param_3;
        if (-1 < param_3) {
          iVar3 = param_3 + 1;
        }
        iVar3 = TlvMonsterSkillSyncV2__PrintText(param_2,iVar3,param_4);
        if ((iVar3 == 0) &&
           (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nAttrCount]",&DAT_11d9e0b4,
                                        (int)*(short *)((int)param_1 + 0xcef)), iVar3 == 0)) {
          uVar1 = *(ushort *)((int)param_1 + 0xcef);
          uVar5 = (uint)uVar1;
          if ((short)uVar1 < 0) {
            return -6;
          }
          if (100 < (short)uVar1) {
            return -7;
          }
          sVar2 = 0;
          if (0 < (short)uVar1) {
            do {
              iVar3 = TdrText_ArrayElemLabel(param_4,"[astAttrInit]",(int)sVar2,uVar5);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar3 = param_3;
              if (-1 < param_3) {
                iVar3 = param_3 + 1;
              }
              iVar3 = FUN_102850c0(param_2,iVar3,param_4);
              if (iVar3 != 0) {
                return iVar3;
              }
              sVar2 = sVar2 + 1;
              uVar5 = extraout_ECX_02;
            } while (sVar2 < *(short *)((int)param_1 + 0xcef));
          }
          iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iProjIdCount]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x1a39));
          if (iVar3 == 0) {
            iVar3 = *(int *)((int)param_1 + 0x1a39);
            if (iVar3 < 0) {
              return -6;
            }
            if (0x14 < iVar3) {
              return -7;
            }
            if (0 < iVar3) {
              iVar3 = (int)param_1 + 0x1a3d;
              iVar4 = 0;
              do {
                iVar3 = TdrText_ArrayElemLabel(param_4,"[astProjIds]",iVar4,iVar3);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = param_3;
                if (-1 < param_3) {
                  iVar3 = param_3 + 1;
                }
                iVar3 = FUN_102a4760(param_2,iVar3,param_4);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar4 = iVar4 + 1;
                iVar3 = extraout_ECX_03;
              } while (iVar4 < *(int *)((int)param_1 + 0x1a39));
            }
            iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[nBuffSize]",&DAT_11d9e0b4,
                                        (int)*(short *)((int)param_1 + 0x1add));
            if (iVar3 == 0) {
              sVar2 = *(short *)((int)param_1 + 0x1add);
              if (sVar2 < 0) {
                return -6;
              }
              if (0x2800 < sVar2) {
                return -7;
              }
              iVar3 = TdrText_ArrayHeader(0x2800,"[szBuff]",(int)sVar2,(int)sVar2 >> 0x1f);
              if (iVar3 == 0) {
                sVar2 = 0;
                if (0 < *(short *)((int)param_1 + 0x1add)) {
                  do {
                    iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,
                                         *(undefined1 *)(sVar2 + 0x1adf + (int)param_1));
                    if (iVar3 != 0) {
                      return iVar3;
                    }
                    sVar2 = sVar2 + 1;
                  } while (sVar2 < *(short *)((int)param_1 + 0x1add));
                }
                iVar3 = TdrBuf_PutU8Z(param_4);
                if ((iVar3 == 0) &&
                   (iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullParentGUID]","%I64u",
                                                *(undefined4 *)((int)param_1 + 0x42df),
                                                *(undefined4 *)((int)param_1 + 0x42e3)), iVar3 == 0)
                   ) {
                  iVar3 = TdrText_FieldScalar(param_2,param_3,param_4,"[iLastChildID]",&DAT_11d9e0b4
                                              ,*(undefined4 *)((int)param_1 + 0x42e7));
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}


// ================= FUN_100ebf60 @ 100ebf60 =================

/* [RE-AUTO c0] */

bool FUN_100ebf60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100eb740(param_3);
  if (iVar1 == -0x7ff8ffa9) {
    return (bool)2;
  }
  if (iVar1 != -0x7ff8ff86) {
    return iVar1 != 0;
  }
  return (bool)3;
}


// ================= FUN_10f1e1e0 @ 10f1e1e0 =================

/* [RE-AUTO c0] */

void __thiscall FUN_10f1e1e0(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x2294) = *(uint *)(param_1 + 0x2294) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x2298) = 0;
    return;
  }
  *(uint *)(param_1 + 0x2294) = *(uint *)(param_1 + 0x2294) | 1;
  *(int *)(param_1 + 0x2298) = param_2;
  *(undefined4 *)(param_1 + 0x2264) = 0;
  *(undefined4 *)(param_1 + 0x2268) = 0;
  *(undefined4 *)(param_1 + 0x226c) = 0;
  *(undefined4 *)(param_1 + 0x2270) = 0;
  *(undefined4 *)(param_1 + 0x2274) = 0;
  *(undefined4 *)(param_1 + 0x2278) = 0;
  *(undefined4 *)(param_1 + 0x227c) = 0;
  *(undefined4 *)(param_1 + 0x2280) = 0;
  return;
}


// ================= FUN_10fd7800 @ 10fd7800 =================

/* [RE-AUTO c0] */

undefined1
FUN_10fd7800(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)(param_1 + -0xc) < 0) {
    puVar4 = &DAT_1201fc98;
  }
  else {
    puVar4 = param_1;
    FUN_10c3dab0(param_1 + -0xc,param_1,param_2,param_3,param_4,param_5);
  }
  uVar1 = FUN_10f59ff0(puVar4);
  piVar3 = (int *)(param_1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  return uVar1;
}


// ================= FUN_11069c20 @ 11069c20 =================

/* [RE-AUTO c0] */

void FUN_11069c20(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if (0x40 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
    while (param_4 != 0) {
      iVar3 = *param_1;
      piVar7 = param_2 + -1;
      param_4 = param_4 + -1;
      iVar5 = ((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f) >> 1;
      iVar4 = param_1[iVar5];
      piVar8 = param_1 + iVar5;
      piVar6 = piVar8;
      if (((iVar3 == 0) || (iVar4 == 0)) ||
         (*(float *)(iVar3 + 4) <= *(float *)(iVar4 + 4) &&
          *(float *)(iVar4 + 4) != *(float *)(iVar3 + 4))) {
        iVar5 = *piVar7;
        if ((((iVar4 != 0) && (iVar5 != 0)) &&
            (fVar2 = *(float *)(iVar5 + 4),
            fVar2 < *(float *)(iVar4 + 4) || fVar2 == *(float *)(iVar4 + 4))) &&
           (((iVar3 == 0 || (iVar5 == 0)) ||
            (piVar6 = param_1, *(float *)(iVar3 + 4) <= fVar2 && fVar2 != *(float *)(iVar3 + 4)))))
        goto LAB_11069cab;
      }
      else {
        iVar5 = *piVar7;
        piVar6 = param_1;
        if ((((iVar3 != 0) && (iVar5 != 0)) &&
            (fVar2 = *(float *)(iVar5 + 4),
            fVar2 < *(float *)(iVar3 + 4) || fVar2 == *(float *)(iVar3 + 4))) &&
           (((iVar4 == 0 || (iVar5 == 0)) ||
            (piVar6 = piVar8, *(float *)(iVar4 + 4) <= fVar2 && fVar2 != *(float *)(iVar4 + 4))))) {
LAB_11069cab:
          piVar6 = piVar7;
        }
      }
      fVar2 = *(float *)(*piVar6 + 4);
      piVar7 = param_2;
      piVar8 = param_1;
      while( true ) {
        while ((*piVar8 == 0 ||
               (pfVar1 = (float *)(*piVar8 + 4), *pfVar1 <= fVar2 && fVar2 != *pfVar1))) {
          piVar8 = piVar8 + 1;
        }
        do {
          do {
            piVar6 = piVar7 + -1;
            piVar7 = piVar7 + -1;
          } while (*piVar6 == 0);
        } while (fVar2 < *(float *)(*piVar6 + 4));
        if (piVar7 <= piVar8) break;
        iVar3 = *piVar8;
        *piVar8 = *piVar7;
        piVar8 = piVar8 + 1;
        *piVar7 = iVar3;
      }
      FUN_11069c20(piVar8,param_2,0,param_4,param_5);
      param_2 = piVar8;
      if ((int)((int)piVar8 - (int)param_1 & 0xfffffffcU) < 0x41) {
        return;
      }
    }
    FUN_11069f70(param_1,param_2,param_2,0,param_5);
  }
  return;
}


// ================= FUN_10849910 @ 10849910 =================

/* [RE-AUTO c0]
   calls: CHairInfo::GetManagers
   strings:
     ""CHairInfo"" */

undefined4 FUN_10849910(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dcf98c;
  puVar2 = (undefined4 *)CHairInfo__GetManager();
  puVar2 = (undefined4 *)*puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)CInfoManager__FindByName(&local_8,"CHairInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123c755c & 1) == 0) {
        DAT_123c755c = DAT_123c755c | 1;
        FUN_10854170();
        FUN_11a8911f(&LAB_11c72d20);
      }
      puVar2 = &DAT_123c7560;
    }
  }
  if (((param_1 != -1) && (((param_1 != 0 || (puVar2[0xc] == 0)) && (puVar2[10] != 0)))) &&
     ((param_1 = param_1 - puVar2[0xc], -1 < param_1 && (param_1 < (int)puVar2[9])))) {
    iVar1 = *(int *)(puVar2[8] + (param_1 / (int)puVar2[10]) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % (int)puVar2[10]) * 4);
    }
  }
  return 0;
}


// ================= FUN_10f57490 @ 10f57490 =================

/* [RE-AUTO c0] */

undefined4 __thiscall FUN_10f57490(undefined4 param_1,undefined4 param_2)

{
  FUN_10f61b10(param_2);
  return param_1;
}


// ================= FUN_10f59ff0 @ 10f59ff0 =================

/* [RE-AUTO c0] */

undefined1
FUN_10f59ff0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)(param_1 + -0xc) < 0) {
    puVar4 = &DAT_1201fc98;
  }
  else {
    puVar4 = param_1;
    FUN_10c3dab0(param_1 + -0xc,param_1);
  }
  iVar2 = FUN_10fb8080(puVar4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CItem__PlaySelectActionAndTransition
                      (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
                       *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),param_2,param_3,
                       0xffffffff,param_4,0,param_5);
  }
  piVar3 = (int *)(param_1 + -0xc);
  if (-1 < *piVar3) {
    iVar2 = FUN_10c3dad0(piVar3);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_1 + -4));
      FUN_10c3d900(piVar3);
    }
  }
  return uVar1;
}


// ================= FUN_10f63c40 @ 10f63c40 =================

/* [RE-AUTO c0] */

int * __thiscall FUN_10f63c40(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = param_3;
  piVar4 = param_2;
  do {
    if (piVar4 == param_3) {
LAB_10f63cec:
      if (piVar3 != piVar1) {
        piVar3 = piVar3 + 1;
        do {
          if (piVar4 != (int *)0x0) {
            *piVar4 = piVar3[-1];
            piVar4[1] = *piVar3;
            piVar4[2] = piVar3[1];
            piVar3[-1] = 0;
            piVar3[1] = 0;
            *piVar3 = 0;
          }
          piVar4 = piVar4 + 3;
          piVar5 = piVar3 + 2;
          piVar3 = piVar3 + 3;
        } while (piVar5 != piVar1);
      }
      *(int **)(param_1 + 4) = piVar4;
      return param_2;
    }
    if (piVar3 == piVar1) {
      piVar5 = piVar4;
      if (piVar4 != param_3) {
        do {
          iVar2 = *piVar5;
          for (iVar6 = piVar5[1]; iVar6 != iVar2; iVar6 = iVar6 + -0x48) {
            FUN_10f380d0();
          }
          if (*piVar5 != 0) {
            FUN_10c3d5d0(*piVar5);
          }
          piVar5 = piVar5 + 3;
        } while (piVar5 != param_3);
        *(int **)(param_1 + 4) = piVar4;
        return param_2;
      }
      goto LAB_10f63cec;
    }
    iVar2 = *piVar4;
    for (iVar6 = piVar4[1]; iVar6 != iVar2; iVar6 = iVar6 + -0x48) {
      FUN_10f380d0();
    }
    if (*piVar4 != 0) {
      FUN_10c3d5d0(*piVar4);
    }
    *piVar4 = *piVar3;
    piVar4[1] = *(int *)((int)param_3 + (4 - (int)param_2) + (int)piVar4);
    piVar4[2] = piVar3[2];
    *(undefined4 *)((int)param_3 + (4 - (int)param_2) + (int)piVar4) = 0;
    piVar4 = piVar4 + 3;
    *piVar3 = 0;
    piVar3[2] = 0;
    piVar3 = piVar3 + 3;
  } while( true );
}


// ================= FUN_10aa6d90 @ 10aa6d90 =================

/* [RE-AUTO c0]
   strings:
     ""Status""
     ""CSwitchMonsterPartDefence""
     ""TargetEntityID"" */

void FUN_10aa6d90(void)

{
  undefined1 local_34 [16];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [16];
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("Status","");
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("CSwitchMonsterPartDefence","");
  FUN_1048b080(local_1c,local_34,0,1,0);
  FUN_1048b170();
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  local_c = local_1c;
  local_8 = local_c;
  FUN_100b62c0("TargetEntityID","");
  local_24 = local_34;
  local_20 = local_24;
  FUN_100b62c0("CSwitchMonsterPartDefence","");
  FUN_1048b080(local_34,local_1c,1,4,0);
  FUN_1048b170();
  if ((local_20 != local_34) && (local_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_20);
  }
  if ((local_8 != local_1c) && (local_8 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_8);
  }
  return;
}


// ================= FUN_11069b80 @ 11069b80 =================

/* [RE-AUTO c0]
   calls: memmove */

void FUN_11069b80(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = param_1;
  if (param_1 != param_2) {
    while (piVar4 = piVar4 + 1, piVar4 != param_2) {
      iVar2 = *piVar4;
      if (((iVar2 == 0) || (*param_1 == 0)) ||
         (fVar1 = *(float *)(*param_1 + 4), piVar5 = piVar4,
         *(float *)(iVar2 + 4) <= fVar1 && fVar1 != *(float *)(iVar2 + 4))) {
        if (0 < (int)piVar4 - (int)param_1) {
          memmove(param_1 + 1,param_1,(int)piVar4 - (int)param_1);
        }
        *param_1 = iVar2;
      }
      else {
        while( true ) {
          iVar3 = piVar5[-1];
          if (((iVar2 != 0) && (iVar3 != 0)) &&
             (*(float *)(iVar3 + 4) < *(float *)(iVar2 + 4) ||
              *(float *)(iVar3 + 4) == *(float *)(iVar2 + 4))) break;
          *piVar5 = iVar3;
          piVar5 = piVar5 + -1;
        }
        *piVar5 = iVar2;
      }
    }
  }
  return;
}


// ================= FUN_116db560 @ 116db560 =================

/* [RE-AUTO c0] */

undefined * FUN_116db560(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_11899550(0x1c);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1238db88 & 1) == 0) {
      DAT_1238db88 = DAT_1238db88 | 1;
      FUN_116d9e50();
      FUN_11a8911f(&LAB_11ca7f30);
    }
    puVar1 = &DAT_1238da90;
  }
  return puVar1;
}

