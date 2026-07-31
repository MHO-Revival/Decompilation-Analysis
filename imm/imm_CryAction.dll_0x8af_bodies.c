
// ===== 0x8af in FUN_101c6a80@101c6a80 =====

/* [RE-AUTO c0]
   strings:
     ""E_BT_Monster_Abnormal_Paralysis""
     ""E_BT_Monster_Abnormal_Traped""
     ""E_BT_Monster_Abnormal_Poison""
     ""E_BT_Monster_Abnormal_Stun""
     ""E_BT_Monster_Abnormal_Flare""
     ""E_BT_Monster_Abnormal_SonicGranade""
     ""E_BT_Monster_Abnormal_Poo""
     ""E_BT_Monster_Abnormal_Marked""
     ""E_BT_Monster_Abnormal_Slivervine""
     ""E_BT_Monster_Abnormal_Sleep"" */

void __thiscall FUN_101c6a80(undefined4 *param_1,char param_2)

{
  undefined1 auStack_2c [7];
  undefined1 local_25;
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_c = DAT_113dd8c0 ^ (uint)auStack_2c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = local_25;
  *(undefined1 *)param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_1;
  param_1[3] = param_1;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(char *)(param_1 + 6) = param_2;
  if (param_2 != '\0') {
    local_14 = local_24;
    local_24[0] = 0;
    local_10 = local_14;
    FUN_101cafd0(0xd5,local_14);
    if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
      FUN_10653dc0(local_10);
    }
  }
  FUN_101c7790(0x8b4,"E_BT_Monster_Abnormal_Paralysis");
  FUN_101c7790(0x8b5,"E_BT_Monster_Abnormal_Traped");
  FUN_101c7790(0x8b6,"E_BT_Monster_Abnormal_Poison");
  FUN_101c7790(0x8b7,"E_BT_Monster_Abnormal_Stun");
  FUN_101c7790(0x8b8,"E_BT_Monster_Abnormal_Flare");
  FUN_101c7790(0x8b9,"E_BT_Monster_Abnormal_SonicGranade");
  FUN_101c7790(0x8ba,"E_BT_Monster_Abnormal_Poo");
  FUN_101c7790(0x8bb,"E_BT_Monster_Abnormal_Marked");
  FUN_101c7790(0x8bc,"E_BT_Monster_Abnormal_Slivervine");
  FUN_101c7790(0x8bd,"E_BT_Monster_Abnormal_Sleep");
  FUN_101c7790(0x8be,"E_BT_Monster_Abnormal_Balance");
  FUN_101c7790(0x8bf,"E_BT_Monster_Abnormal_Falldown");
  FUN_101c7790(0x8c0,"E_BT_Monster_Abnormal_PartBreak");
  FUN_101c7790(0x8c1,"E_BT_Monster_Abnormal_TailBreak");
  FUN_101c7790(0x8c2,"E_BT_Monster_Abnormal_CrazyRun");
  FUN_101c7790(0x8c3,"E_BT_Monster_Abnormal_FireFall");
  FUN_101c7790(0x8c4,"E_BT_Monster_Abnormal_Stuck");
  FUN_101c7790(0x8c6,"E_BT_Monster_Abnormal_Anethesia");
  FUN_101c7790(0x8c7,"E_BT_Monster_Abnormal_ParalysisTrap");
  FUN_101c7790(0x8c8,"E_BT_Monster_Abnormal_AdvancedTrap");
  FUN_101c7790(0x8c9,"E_BT_Monster_Abnormal_WindPressure");
  FUN_101c7790(0x8ca,"E_BT_Monster_Abnormal_DragonWindPressure");
  FUN_101c7790(0x8cb,"E_BT_Monster_Abnormal_Quake");
  FUN_101c7790(0x8cc,"E_BT_Monster_Abnormal_Roar");
  FUN_101c7790(0x8cd,"E_BT_Monster_Abnormal_Paralyse");
  FUN_101c7790(0x8ce,"E_BT_Monster_Abnormal_Snowman");
  FUN_101c7790(0x8cf,"E_BT_Monster_Abnormal_Exhaust");
  FUN_101c7790(0x8d0,"E_BT_Monster_Abnormal_Piyo");
  FUN_101c7790(0x8d1,"E_BT_Monster_Abnormal_Scare");
  FUN_101c7790(0x8d2,"E_BT_Monster_Abnormal_Bound");
  FUN_101c7790(0x8d3,"E_BT_Monster_Abnormal_Carry");
  FUN_101c7790(0x8d4,"E_BT_Monster_Abnormal_Haze");
  FUN_101c7790(0x8d5,"E_BT_Monster_Abnormal_Sink");
  FUN_101c7790(0x8d6,"E_BT_Monster_Abnormal_Paralysis_End");
  FUN_101c7790(0x8d7,"E_BT_Monster_Abnormal_Traped_End");
  FUN_101c7790(0x8d8,"E_BT_Monster_Abnormal_Poison_End");
  FUN_101c7790(0x8d9,"E_BT_Monster_Abnormal_Stun_End");
  FUN_101c7790(0x8da,"E_BT_Monster_Abnormal_Flare_End");
  FUN_101c7790(0x8db,"E_BT_Monster_Abnormal_SonicGranade_End");
  FUN_101c7790(0x8dc,"E_BT_Monster_Abnormal_Poo_End");
  FUN_101c7790(0x8dd,"E_BT_Monster_Abnormal_Marked_End");
  FUN_101c7790(0x8de,"E_BT_Monster_Abnormal_Slivervine_End");
  FUN_101c7790(0x8df,"E_BT_Monster_Abnormal_Sleep_End");
  FUN_101c7790(0x8e0,"E_BT_Monster_Abnormal_Balance_End");
  FUN_101c7790(0x8e1,"E_BT_Monster_Abnormal_Falldown_End");
  FUN_101c7790(0x8e2,"E_BT_Monster_Abnormal_PartBreak_End");
  FUN_101c7790(0x8e3,"E_BT_Monster_Abnormal_TailBreak_End");
  FUN_101c7790(0x8e4,"E_BT_Monster_Abnormal_CrazyRun_End");
  FUN_101c7790(0x8e5,"E_BT_Monster_Abnormal_FireFall_End");
  FUN_101c7790(0x8e6,"E_BT_Monster_Abnormal_Stuck_End");
  FUN_101c7790(0x8e8,"E_BT_Monster_Abnormal_Anethesia_End");
  FUN_101c7790(0x8e9,"E_BT_Monster_Abnormal_ParalysisTrap_End");
  FUN_101c7790(0x8ea,"E_BT_Monster_Abnormal_AdvancedTrap_End");
  FUN_101c7790(0x8eb,"E_BT_Monster_Abnormal_WindPressure_End");
  FUN_101c7790(0x8ec,"E_BT_Monster_Abnormal_DragonWindPressure_End");
  FUN_101c7790(0x8ed,"E_BT_Monster_Abnormal_Quake_End");
  FUN_101c7790(0x8ee,"E_BT_Monster_Abnormal_Roar_End");
  FUN_101c7790(0x8ef,"E_BT_Monster_Abnormal_Paralyse_End");
  FUN_101c7790(0x8f0,"E_BT_Monster_Abnormal_Snowman_End");
  FUN_101c7790(0x8f1,"E_BT_Monster_Abnormal_Exhaust_End");
  FUN_101c7790(0x8f2,"E_BT_Monster_Abnormal_Piyo_End");
  FUN_101c7790(0x8f3,"E_BT_Monster_Abnormal_Scare_End");
  FUN_101c7790(0x8f4,"E_BT_Monster_Abnormal_Bound_End");
  FUN_101c7790(0x8f5,"E_BT_Monster_Abnormal_Carry_End");
  FUN_101c7790(0x8f6,"E_BT_Monster_Abnormal_Haze_End");
  FUN_101c7790(0x8f7,"E_BT_Monster_Abnormal_Sink_End");
  FUN_101c7790(0x89e,"E_EVTTYPE_BT_DAMAGE_EVENT");
  FUN_101c7790(0x89f,"E_EVTTYPE_BT_TRAP");
  FUN_101c7790(0x8a0,"E_EVTTYPE_BT_PARARYSIS_TRAP");
  FUN_101c7790(0x8a1,"E_EVTTYPE_BT_PARARYSIS");
  FUN_101c7790(0x8a2,"E_EVTTYPE_BT_FLASH");
  FUN_101c7790(0x8a3,"E_EVTTYPE_BT_SONIC");
  FUN_101c7790(0x8a4,"E_EVTTYPE_BT_CATCH");
  FUN_101c7790(0x8a5,"E_EVTTYPE_BT_POOL");
  FUN_101c7790(0x8a6,"E_EVTTYPE_BT_ATTACKPLAYER");
  FUN_101c7790(0x8a7,"E_EVTTYPE_BT_ATTACKMONSTER");
  FUN_101c7790(0x8a8,"E_EVTTYPE_BT_INIT");
  FUN_101c7790(0x8a9,"E_EVTTYPE_BT_DESTROY");
  FUN_101c7790(0x8aa,"E_EVTTYPE_BT_GAME");
  FUN_101c7790(0x8ab,"E_EVTTYPE_BT_OnNoTarget");
  FUN_101c7790(0x8ac,"E_EVTTYPE_BT_OnInterestingSoundHeard");
  FUN_101c7790(0x8ad,"E_EVTTYPE_BT_OnThreateningSoundHeard");
  FUN_101c7790(0x8ae,"E_EVTTYPE_BT_OnSomethingSeen");
  FUN_101c7790(0x8af,"E_EVTTYPE_BT_OnEnemySeen");
  FUN_101c7790(0x8b0,"E_EVTTYPE_BT_COLLIDEWALL");
  FUN_101c7790(0x8b1,"E_EVTTYPE_BT_MOVETIMEOUT");
  FUN_101c7790(0x516,"E_EVTTYPE_MONSTER_HEALTH_LOW");
  FUN_101c7790(0x517,"E_EVTTYPE_MONSTER_DEAD");
  FUN_101c7790(0x518,"E_EVTTYPE_MONSTER_ATTR_THRESHOLD");
  FUN_101c7790(0x519,"E_EVTTYPE_MONSTER_PART_BREAK");
  FUN_101c7790(0x51b,"E_EVTTYPE_MONSTER_PART_BALANCE_LOST");
  FUN_101c7790(0x51c,"E_EVTTYPE_MONSTER_STATE_ABNORMAL");
  FUN_101c7790(0x51d,"E_EVTTYPE_MONSTER_STATE_ABNORMAL_END");
  FUN_101c7790(0x520,"E_EVTTYPE_MONSTER_ADD_THREAT");
  FUN_101c7790(0x521,"E_EVTTYPE_MONSTER_PART_FALLDOWN");
  FUN_101c7790(0x522,"E_EVTTYPE_MONSTER_PART_SCAR");
  FUN_101c7790(0x526,"E_EVTTYPE_MONSTER_LOSTBALANCE");
  FUN_101c7790(0x527,"E_EVTTYPE_MONSTER_HEALTH_REACH_CAPTURE");
  FUN_101c7790(0x528,"E_EVTTYPE_MONSTER_HEALTH_CHANGE");
  FUN_101c7790(0x529,"E_EVTTYPE_MONSTER_PET_TIMEOUT");
  FUN_101c7790(0x8f8,"E_BT_Master_Abnormalized");
  FUN_101c7790(0x8f9,"E_BT_Master_AbnormalizedEnd");
  FUN_101c7790(0x8fa,"E_BT_Master_Buffed");
  FUN_101c7790(0x8fb,"E_BT_Master_BuffedEnd");
  FUN_101c7790(0x8fc,"E_BT_Master_HitReactioned");
  FUN_101c7790(0x8fd,"E_BT_Master_DoAttack");
  FUN_101c7790(0x900,"E_BT_Master_DoDefense");
  FUN_101c7790(0x901,"E_BT_Master_DoDodge");
  FUN_101c7790(0x902,"E_BT_Master_DoUseItem");
  FUN_101c7790(0x903,"E_BT_Master_Died");
  FUN_101c7790(0x904,"E_BT_Master_SendCommand");
  FUN_101c7790(0x905,"E_BT_Master_EnterCombat");
  FUN_101c7790(0x906,"E_BT_Master_ExitCombat");
  FUN_101c7790(0x907,"E_BT_Master_StateChanged");
  FUN_101c7790(0x908,"E_BT_Master_DoStartMove");
  FUN_101c7790(0x909,"E_BT_Master_DoStopMove");
  FUN_101c7790(0x90a,"E_BT_GroupMember_Abnormalized");
  FUN_101c7790(0x90b,"E_BT_GroupMember_AbnormalizedEnd");
  FUN_101c7790(0x90c,"E_BT_GroupMember_Buffed");
  FUN_101c7790(0x90d,"E_BT_GroupMember_BuffedEnd");
  FUN_101c7790(0x90e,"E_BT_GroupMember_HitReactioned");
  FUN_101c7790(0x90f,"E_BT_GroupMember_DoAttack");
  FUN_101c7790(0x912,"E_BT_GroupMember_DoDefense");
  FUN_101c7790(0x913,"E_BT_GroupMember_DoDodge");
  FUN_101c7790(0x914,"E_BT_GroupMember_DoUseItem");
  FUN_101c7790(0x915,"E_BT_GroupMember_Died");
  FUN_101c7790(0x916,"E_BT_GroupMember_EnterCombat");
  FUN_101c7790(0x917,"E_BT_GroupMember_ExitCombat");
  FUN_101c7790(0x918,"E_BT_GroupMember_StateChanged");
  FUN_101c7790(0x919,"E_BT_AttentionTarget_Abnormalized");
  FUN_101c7790(0x91a,"E_BT_AttentionTarget_AbnormalizedEnd");
  FUN_101c7790(0x91b,"E_BT_AttentionTarget_Buffed");
  FUN_101c7790(0x91c,"E_BT_AttentionTarget_BuffedEnd");
  FUN_101c7790(0x91d,"E_BT_AttentionTarget_HitReactioned");
  FUN_101c7790(0x91e,"E_BT_AttentionTarget_DoAttack");
  FUN_101c7790(0x921,"E_BT_AttentionTarget_DoDefense");
  FUN_101c7790(0x922,"E_BT_AttentionTarget_DoDodge");
  FUN_101c7790(0x923,"E_BT_AttentionTarget_DoUseItem");
  FUN_101c7790(0x924,"E_BT_AttentionTarget_Died");
  FUN_101c7790(0x925,"E_BT_AttentionTarget_EnterCombat");
  FUN_101c7790(0x926,"E_BT_AttentionTarget_ExitCombat");
  FUN_101c7790(0x927,"E_BT_AttentionTarget_StateChanged");
  FUN_101c7790(0x928,"E_BT_AttentionTarget_DoStartMove");
  FUN_101c7790(0x929,"E_BT_AttentionTarget_DoStopMove");
  FUN_101c7790(0x92a,"E_BT_AttentionTarget_DoSomeAction");
  FUN_101c7790(0x92b,"E_BT_AttentionTarget_DoInterestingAction");
  FUN_101c7790(0x92c,"E_BT_AttentionTarget_DoFriendingAction");
  FUN_101c7790(0x92d,"E_BT_AttentionTarget_DoThreateningAction");
  FUN_101c7790(0x92e,"E_BT_SendFrom_FG");
  FUN_101c7790(0x930,"E_BT_SELF_FSM_STATE_CHANGE");
  FUN_101c7790(0x931,"E_BT_Inner_After_Abnormal");
  FUN_101c7790(0x933,"E_BT_SendFrom_UI");
  FUN_101c7790(0x934,"E_BT_QuestComplete");
  FUN_101c7790(0x935,"E_BT_QuestFail");
  FUN_101c7790(0x936,"E_BT_SKILL_HIT");
  FUN_101c7790(0x937,"E_BT_ENTER_ANGRY");
  FUN_101c7790(0x939,"E_BT_ENTER_LEMON");
  FUN_101c7790(0x93a,"E_BT_LEAVE_LEMON");
  FUN_101c7790(0x938,"E_BT_SMPET_Summon");
  FUN_101c7790(0x93b,"E_BT_PLAYER_INPUT");
  FUN_101c7790(0x93c,"E_BT_MONSTERCTRL_ACTION_CHANGED");
  FUN_101c7790(0x93d,"E_BT_MONSTERCTRL_ACTION_END");
  FUN_101c7790(0x93e,"E_BT_MONSTERCTRL_HIGH_FIGHT");
  FUN_101c7790(0x93f,"E_BT_MONSTERCTRL_LOW_FIGHT");
  FUN_101c7790(0x940,"E_BT_MONSTERCTRL_NORMAL_FIGHT");
  FUN_101c7790(0x941,"E_BT_MONSTERCTRL_LOW_POWER");
  FUN_101c7790(0x942,"E_BT_MONSTERCTRL_NORMAL_POWER");
  FUN_101c7790(0x943,"E_BT_MONSTERCTRL_MTM_MESSAGE");
  FUN_101c7790(0x944,"E_BT_3V3_FirstWin");
  FUN_101c7790(0x945,"E_BT_3V3_SecondWin");
  FUN_101c7790(0x946,"E_BT_MVM_FinalWin");
  FUN_101c7790(0x947,"E_BT_COOPERATION_ATTACK");
  FUN_101c7790(0x948,"E_BT_COOPERATION_ATTACK_END");
  FUN_101c7790(0x949,"E_BT_KEY_ATTR_CHANGE");
  FUN_101c7790(0x89c,"E_EVTTYPE_BT_COMMONAIBehaviorStart");
  FUN_101c7790(0x89d,"E_EVTTYPE_BT_COMMONAIBehaviorEnd");
  FUN_101c7790(0x94b,"E_BT_EMOTIONSTATE_NORMAL_START");
  FUN_101c7790(0x94c,"E_BT_EMOTIONSTATE_NORMAL_END");
  FUN_101c7790(0x94d,"E_BT_EMOTIONSTATE_ANGRY_START");
  FUN_101c7790(0x94e,"E_BT_EMOTIONSTATE_ANGRY_END");
  FUN_101c7790(0x94f,"E_BT_EMOTIONSTATE_TIRED_START");
  FUN_101c7790(0x950,"E_BT_EMOTIONSTATE_TIRED_END");
  FUN_101c7790(0x952,"E_BT_SOULBEAST_INTERACT");
  FUN_101c7790(0x953,"E_BT_SOULBEAST_CHANGEIMG");
  FUN_101c7790(0x955,"E_BT_Monster_Abnormal_Dynamite_end");
  FUN_101c7790(0x954,"E_BT_Monster_Abnormal_Dynamite");
  FUN_112bed8e();
  return;
}


// ===== 0x8af in FUN_101d91c0@101d91c0 =====

/* [RE-AUTO c0]
   calls: memmove */

void __thiscall FUN_101d91c0(int param_1,float param_2)

{
  undefined4 *_Src;
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint auStack_6c [2];
  undefined4 *puStack_64;
  undefined4 *local_60;
  undefined4 *puStack_5c;
  int *piStack_58;
  int iStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  if (*(float *)(param_1 + 0x14) < DAT_113c12a4) {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + param_2;
    return;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_44 = (undefined4 *)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2);
  local_40 = *(undefined4 **)(param_1 + 0x34);
  local_60 = puVar9;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x14))();
  piStack_50 = piVar3;
  if (((piVar3 != (int *)0x0) && (*(int **)(param_1 + 4) != (int *)0x0)) &&
     (iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x10))(), iVar4 != 0)) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x10))();
    iVar4 = (**(code **)(*piVar5 + 0x20))();
    if (iVar4 != 0) {
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x10))();
      iVar4 = (**(code **)(*piVar5 + 0x20))();
      piVar5 = *(int **)(iVar4 + 0x90);
      uStack_4c = (**(code **)(*piVar3 + 0x88))();
      puVar9 = local_60;
      if (piVar5 != (int *)0x0) {
        puStack_3c = (undefined4 *)0x0;
        uStack_38 = 0;
        uStack_34 = 0;
        (**(code **)(*piVar5 + 0xac))(auStack_30);
        cVar2 = FUN_10a6b260();
        puVar9 = (undefined4 *)0x0;
        while (cVar2 == '\0') {
          uVar10 = 0xc;
          FUN_10a6b2d0(0xc);
          cVar2 = FUN_10b3ded0();
          if (cVar2 == '\0') {
            puStack_5c = (undefined4 *)FUN_10a6b2d0(uVar10);
            FUN_101d9c20(&puStack_5c);
          }
          FUN_10a6b270();
          cVar2 = FUN_10a6b260();
          puVar9 = puStack_3c;
        }
        (**(code **)(*piVar5 + 0xa4))(auStack_20);
        cVar2 = FUN_10a6b260();
        puVar8 = local_44;
        while (local_44 = puVar8, cVar2 == '\0') {
          puStack_5c = (undefined4 *)FUN_10a6b2d0();
          if (puVar9 == puStack_3c) {
            FUN_101da0b0(puVar9,&puStack_5c);
          }
          else {
            *puVar9 = puStack_5c;
            local_40 = puVar9 + 1;
          }
          puVar9 = local_40;
          FUN_10a6b270();
          cVar2 = FUN_10a6b260();
          puVar8 = local_44;
        }
        uVar11 = 0;
        uVar6 = (uint)((int)puVar9 + (3 - (int)puVar8)) >> 2;
        if (puVar9 < puVar8) {
          uVar6 = 0;
        }
        auStack_6c[0] = uVar6;
        puStack_5c = puVar8;
        if (uVar6 != 0) {
          do {
            piStack_50 = (int *)*puVar8;
            puStack_5c = puVar8;
            if ((piStack_50 != (int *)0x0) && (piStack_50 != piStack_58)) {
              cVar2 = '\0';
              for (puVar9 = *(undefined4 **)(param_1 + 0x18);
                  puVar9 != *(undefined4 **)(param_1 + 0x1c); puVar9 = puVar9 + 1) {
                if ((int *)*puVar9 == piStack_50) {
                  cVar2 = '\x01';
                  break;
                }
              }
              bVar1 = false;
              for (puVar8 = *(undefined4 **)(param_1 + 0x24);
                  puVar8 != *(undefined4 **)(param_1 + 0x28); puVar8 = puVar8 + 2) {
                if ((int *)*puVar8 == piStack_50) {
                  bVar1 = true;
                  break;
                }
              }
              puStack_64 = puVar9;
              local_60 = puVar8;
              iVar4 = (**(code **)(*piStack_50 + 0x88))();
              piVar3 = piStack_50;
              if (iStack_54 == iVar4) {
                FUN_101d9520(piStack_50,cVar2,&puStack_64);
                FUN_101d97a0(piVar3,unaff_ESI,auStack_6c);
                uVar6 = auStack_6c[0];
              }
              else {
                if (cVar2 != '\0') {
                  _Src = puVar9 + 1;
                  if ((_Src != *(undefined4 **)(param_1 + 0x1c)) &&
                     (sVar7 = (int)*(undefined4 **)(param_1 + 0x1c) - (int)_Src, sVar7 != 0)) {
                    memmove(puVar9,_Src,sVar7);
                  }
                  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -4;
                }
                uVar6 = auStack_6c[0];
                if (bVar1) {
                  puVar9 = puVar8 + 2;
                  if ((puVar9 != *(undefined4 **)(param_1 + 0x28)) &&
                     (sVar7 = (int)*(undefined4 **)(param_1 + 0x28) - (int)puVar9, sVar7 != 0)) {
                    memmove(puVar8,puVar9,sVar7);
                  }
                  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -8;
                  uVar6 = auStack_6c[0];
                }
              }
            }
            uVar11 = uVar11 + 1;
            puVar8 = puStack_5c + 1;
            puStack_5c = puVar8;
          } while (uVar11 != uVar6);
        }
        puVar8 = local_44;
        FUN_10a6b130();
        FUN_10a6b130();
        puVar9 = local_60;
        if (puVar8 != (undefined4 *)0x0) {
          FUN_10653dc0(puVar8);
          puVar9 = local_60;
        }
      }
    }
  }
  if (local_44 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) goto LAB_101d9504;
    uVar10 = 0x8af;
  }
  else {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) goto LAB_101d9504;
    uVar10 = 0x8ab;
  }
  FUN_101d9b40(uVar10);
LAB_101d9504:
  FUN_101d9a10(puVar9,local_40);
  return;
}


// ===== 0x8af in FUN_101d9760@101d9760 =====

/* [RE-AUTO c0] */

void __thiscall FUN_101d9760(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
      FUN_101d9b40(0x8af,param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
    FUN_101d9b40(0x8ab,param_1);
  }
  return;
}

