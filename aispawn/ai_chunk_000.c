/* ===== FUN_10255cc0 @ 10255cc0  size=47 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
//   u"E_Type_Int == m_eValueType"

/* [RE-AUTO c0]
   src: BTAttributeInfoType.h
   calls: _wassert
   strings:
     
   "u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h""
     "u"E_Type_Int == m_eValueType"" */

undefined4 __thiscall FUN_10255cc0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1[7] != 1) {
    _wassert(L"E_Type_Int == m_eValueType",
             L"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
             ,0x65);
  }
  *param_2 = *param_1;
  return *param_1;
}



/* ===== FUN_10255cf0 @ 10255cf0  size=47 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
//   u"E_Type_Bool == m_eValueType"

/* [RE-AUTO c0]
   src: BTAttributeInfoType.h
   calls: _wassert
   strings:
     
   "u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h""
     "u"E_Type_Bool == m_eValueType"" */

undefined1 __thiscall FUN_10255cf0(undefined1 *param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 0x1c) != 3) {
    _wassert(L"E_Type_Bool == m_eValueType",
             L"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
             ,0x75);
  }
  *param_2 = *param_1;
  return *param_1;
}



/* ===== FUN_10255fe0 @ 10255fe0  size=52 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_10255fe0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  else if ((int)param_1[1] < 0) {
    _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    return;
  }
  return;
}



/* ===== FUN_10256190 @ 10256190  size=3239 ===== */
// strings:
//   "E_BT_Monster_Abnormal_Paralysis"
//   "E_BT_Monster_Abnormal_Traped"
//   "E_BT_Monster_Abnormal_Poison"
//   "E_BT_Monster_Abnormal_Stun"
//   "E_BT_Monster_Abnormal_Flare"
//   "E_BT_Monster_Abnormal_SonicGranade"
//   "E_BT_Monster_Abnormal_Poo"
//   "E_BT_Monster_Abnormal_Marked"
//   "E_BT_Monster_Abnormal_Slivervine"
//   "E_BT_Monster_Abnormal_Sleep"
//   "E_BT_Monster_Abnormal_Balance"
//   "E_BT_Monster_Abnormal_Falldown"
//   "E_BT_Monster_Abnormal_PartBreak"
//   "E_BT_Monster_Abnormal_TailBreak"
//   "E_BT_Monster_Abnormal_CrazyRun"
//   "E_BT_Monster_Abnormal_FireFall"
//   "E_BT_Monster_Abnormal_Stuck"
//   "E_BT_Monster_Abnormal_Anethesia"
//   "E_BT_Monster_Abnormal_ParalysisTrap"
//   "E_BT_Monster_Abnormal_AdvancedTrap"

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

undefined4 * __fastcall FUN_10256190(undefined4 *param_1)

{
  undefined1 local_5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_1;
  param_1[3] = param_1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = local_5;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_10256e40(0x8b4,"E_BT_Monster_Abnormal_Paralysis");
  FUN_10256e40(0x8b5,"E_BT_Monster_Abnormal_Traped");
  FUN_10256e40(0x8b6,"E_BT_Monster_Abnormal_Poison");
  FUN_10256e40(0x8b7,"E_BT_Monster_Abnormal_Stun");
  FUN_10256e40(0x8b8,"E_BT_Monster_Abnormal_Flare");
  FUN_10256e40(0x8b9,"E_BT_Monster_Abnormal_SonicGranade");
  FUN_10256e40(0x8ba,"E_BT_Monster_Abnormal_Poo");
  FUN_10256e40(0x8bb,"E_BT_Monster_Abnormal_Marked");
  FUN_10256e40(0x8bc,"E_BT_Monster_Abnormal_Slivervine");
  FUN_10256e40(0x8bd,"E_BT_Monster_Abnormal_Sleep");
  FUN_10256e40(0x8be,"E_BT_Monster_Abnormal_Balance");
  FUN_10256e40(0x8bf,"E_BT_Monster_Abnormal_Falldown");
  FUN_10256e40(0x8c0,"E_BT_Monster_Abnormal_PartBreak");
  FUN_10256e40(0x8c1,"E_BT_Monster_Abnormal_TailBreak");
  FUN_10256e40(0x8c2,"E_BT_Monster_Abnormal_CrazyRun");
  FUN_10256e40(0x8c3,"E_BT_Monster_Abnormal_FireFall");
  FUN_10256e40(0x8c4,"E_BT_Monster_Abnormal_Stuck");
  FUN_10256e40(0x8c6,"E_BT_Monster_Abnormal_Anethesia");
  FUN_10256e40(0x8c7,"E_BT_Monster_Abnormal_ParalysisTrap");
  FUN_10256e40(0x8c8,"E_BT_Monster_Abnormal_AdvancedTrap");
  FUN_10256e40(0x8c9,"E_BT_Monster_Abnormal_WindPressure");
  FUN_10256e40(0x8ca,"E_BT_Monster_Abnormal_DragonWindPressure");
  FUN_10256e40(0x8cb,"E_BT_Monster_Abnormal_Quake");
  FUN_10256e40(0x8cc,"E_BT_Monster_Abnormal_Roar");
  FUN_10256e40(0x8cd,"E_BT_Monster_Abnormal_Paralyse");
  FUN_10256e40(0x8ce,"E_BT_Monster_Abnormal_Snowman");
  FUN_10256e40(0x8cf,"E_BT_Monster_Abnormal_Exhaust");
  FUN_10256e40(0x8d0,"E_BT_Monster_Abnormal_Piyo");
  FUN_10256e40(0x8d1,"E_BT_Monster_Abnormal_Scare");
  FUN_10256e40(0x8d2,"E_BT_Monster_Abnormal_Bound");
  FUN_10256e40(0x8d3,"E_BT_Monster_Abnormal_Carry");
  FUN_10256e40(0x8d4,"E_BT_Monster_Abnormal_Haze");
  FUN_10256e40(0x8d5,"E_BT_Monster_Abnormal_Sink");
  FUN_10256e40(0x8d6,"E_BT_Monster_Abnormal_Paralysis_End");
  FUN_10256e40(0x8d7,"E_BT_Monster_Abnormal_Traped_End");
  FUN_10256e40(0x8d8,"E_BT_Monster_Abnormal_Poison_End");
  FUN_10256e40(0x8d9,"E_BT_Monster_Abnormal_Stun_End");
  FUN_10256e40(0x8da,"E_BT_Monster_Abnormal_Flare_End");
  FUN_10256e40(0x8db,"E_BT_Monster_Abnormal_SonicGranade_End");
  FUN_10256e40(0x8dc,"E_BT_Monster_Abnormal_Poo_End");
  FUN_10256e40(0x8dd,"E_BT_Monster_Abnormal_Marked_End");
  FUN_10256e40(0x8de,"E_BT_Monster_Abnormal_Slivervine_End");
  FUN_10256e40(0x8df,"E_BT_Monster_Abnormal_Sleep_End");
  FUN_10256e40(0x8e0,"E_BT_Monster_Abnormal_Balance_End");
  FUN_10256e40(0x8e1,"E_BT_Monster_Abnormal_Falldown_End");
  FUN_10256e40(0x8e2,"E_BT_Monster_Abnormal_PartBreak_End");
  FUN_10256e40(0x8e3,"E_BT_Monster_Abnormal_TailBreak_End");
  FUN_10256e40(0x8e4,"E_BT_Monster_Abnormal_CrazyRun_End");
  FUN_10256e40(0x8e5,"E_BT_Monster_Abnormal_FireFall_End");
  FUN_10256e40(0x8e6,"E_BT_Monster_Abnormal_Stuck_End");
  FUN_10256e40(0x8e8,"E_BT_Monster_Abnormal_Anethesia_End");
  FUN_10256e40(0x8e9,"E_BT_Monster_Abnormal_ParalysisTrap_End");
  FUN_10256e40(0x8ea,"E_BT_Monster_Abnormal_AdvancedTrap_End");
  FUN_10256e40(0x8eb,"E_BT_Monster_Abnormal_WindPressure_End");
  FUN_10256e40(0x8ec,"E_BT_Monster_Abnormal_DragonWindPressure_End");
  FUN_10256e40(0x8ed,"E_BT_Monster_Abnormal_Quake_End");
  FUN_10256e40(0x8ee,"E_BT_Monster_Abnormal_Roar_End");
  FUN_10256e40(0x8ef,"E_BT_Monster_Abnormal_Paralyse_End");
  FUN_10256e40(0x8f0,"E_BT_Monster_Abnormal_Snowman_End");
  FUN_10256e40(0x8f1,"E_BT_Monster_Abnormal_Exhaust_End");
  FUN_10256e40(0x8f2,"E_BT_Monster_Abnormal_Piyo_End");
  FUN_10256e40(0x8f3,"E_BT_Monster_Abnormal_Scare_End");
  FUN_10256e40(0x8f4,"E_BT_Monster_Abnormal_Bound_End");
  FUN_10256e40(0x8f5,"E_BT_Monster_Abnormal_Carry_End");
  FUN_10256e40(0x8f6,"E_BT_Monster_Abnormal_Haze_End");
  FUN_10256e40(0x8f7,"E_BT_Monster_Abnormal_Sink_End");
  FUN_10256e40(0x89e,"E_EVTTYPE_BT_DAMAGE_EVENT");
  FUN_10256e40(0x89f,"E_EVTTYPE_BT_TRAP");
  FUN_10256e40(0x8a0,"E_EVTTYPE_BT_PARARYSIS_TRAP");
  FUN_10256e40(0x8a1,"E_EVTTYPE_BT_PARARYSIS");
  FUN_10256e40(0x8a2,"E_EVTTYPE_BT_FLASH");
  FUN_10256e40(0x8a3,"E_EVTTYPE_BT_SONIC");
  FUN_10256e40(0x8a4,"E_EVTTYPE_BT_CATCH");
  FUN_10256e40(0x8a5,"E_EVTTYPE_BT_POOL");
  FUN_10256e40(0x8a6,"E_EVTTYPE_BT_ATTACKPLAYER");
  FUN_10256e40(0x8a7,"E_EVTTYPE_BT_ATTACKMONSTER");
  FUN_10256e40(0x8a8,"E_EVTTYPE_BT_INIT");
  FUN_10256e40(0x8a9,"E_EVTTYPE_BT_DESTROY");
  FUN_10256e40(0x8aa,"E_EVTTYPE_BT_GAME");
  FUN_10256e40(0x8ab,"E_EVTTYPE_BT_OnNoTarget");
  FUN_10256e40(0x8ac,"E_EVTTYPE_BT_OnInterestingSoundHeard");
  FUN_10256e40(0x8ad,"E_EVTTYPE_BT_OnThreateningSoundHeard");
  FUN_10256e40(0x8ae,"E_EVTTYPE_BT_OnSomethingSeen");
  FUN_10256e40(0x8af,"E_EVTTYPE_BT_OnEnemySeen");
  FUN_10256e40(0x8b0,"E_EVTTYPE_BT_COLLIDEWALL");
  FUN_10256e40(0x8b1,"E_EVTTYPE_BT_MOVETIMEOUT");
  FUN_10256e40(0x516,"E_EVTTYPE_MONSTER_HEALTH_LOW");
  FUN_10256e40(0x517,"E_EVTTYPE_MONSTER_DEAD");
  FUN_10256e40(0x518,"E_EVTTYPE_MONSTER_ATTR_THRESHOLD");
  FUN_10256e40(0x519,"E_EVTTYPE_MONSTER_PART_BREAK");
  FUN_10256e40(0x51b,"E_EVTTYPE_MONSTER_PART_BALANCE_LOST");
  FUN_10256e40(0x51c,"E_EVTTYPE_MONSTER_STATE_ABNORMAL");
  FUN_10256e40(0x51d,"E_EVTTYPE_MONSTER_STATE_ABNORMAL_END");
  FUN_10256e40(0x520,"E_EVTTYPE_MONSTER_ADD_THREAT");
  FUN_10256e40(0x521,"E_EVTTYPE_MONSTER_PART_FALLDOWN");
  FUN_10256e40(0x522,"E_EVTTYPE_MONSTER_PART_SCAR");
  FUN_10256e40(0x526,"E_EVTTYPE_MONSTER_LOSTBALANCE");
  FUN_10256e40(0x527,"E_EVTTYPE_MONSTER_HEALTH_REACH_CAPTURE");
  FUN_10256e40(0x528,"E_EVTTYPE_MONSTER_HEALTH_CHANGE");
  FUN_10256e40(0x529,"E_EVTTYPE_MONSTER_PET_TIMEOUT");
  FUN_10256e40(0x8f8,"E_BT_Master_Abnormalized");
  FUN_10256e40(0x8f9,"E_BT_Master_AbnormalizedEnd");
  FUN_10256e40(0x8fa,"E_BT_Master_Buffed");
  FUN_10256e40(0x8fb,"E_BT_Master_BuffedEnd");
  FUN_10256e40(0x8fc,"E_BT_Master_HitReactioned");
  FUN_10256e40(0x8fd,"E_BT_Master_DoAttack");
  FUN_10256e40(0x900,"E_BT_Master_DoDefense");
  FUN_10256e40(0x901,"E_BT_Master_DoDodge");
  FUN_10256e40(0x902,"E_BT_Master_DoUseItem");
  FUN_10256e40(0x903,"E_BT_Master_Died");
  FUN_10256e40(0x904,"E_BT_Master_SendCommand");
  FUN_10256e40(0x905,"E_BT_Master_EnterCombat");
  FUN_10256e40(0x906,"E_BT_Master_ExitCombat");
  FUN_10256e40(0x907,"E_BT_Master_StateChanged");
  FUN_10256e40(0x908,"E_BT_Master_DoStartMove");
  FUN_10256e40(0x909,"E_BT_Master_DoStopMove");
  FUN_10256e40(0x90a,"E_BT_GroupMember_Abnormalized");
  FUN_10256e40(0x90b,"E_BT_GroupMember_AbnormalizedEnd");
  FUN_10256e40(0x90c,"E_BT_GroupMember_Buffed");
  FUN_10256e40(0x90d,"E_BT_GroupMember_BuffedEnd");
  FUN_10256e40(0x90e,"E_BT_GroupMember_HitReactioned");
  FUN_10256e40(0x90f,"E_BT_GroupMember_DoAttack");
  FUN_10256e40(0x912,"E_BT_GroupMember_DoDefense");
  FUN_10256e40(0x913,"E_BT_GroupMember_DoDodge");
  FUN_10256e40(0x914,"E_BT_GroupMember_DoUseItem");
  FUN_10256e40(0x915,"E_BT_GroupMember_Died");
  FUN_10256e40(0x916,"E_BT_GroupMember_EnterCombat");
  FUN_10256e40(0x917,"E_BT_GroupMember_ExitCombat");
  FUN_10256e40(0x918,"E_BT_GroupMember_StateChanged");
  FUN_10256e40(0x919,"E_BT_AttentionTarget_Abnormalized");
  FUN_10256e40(0x91a,"E_BT_AttentionTarget_AbnormalizedEnd");
  FUN_10256e40(0x91b,"E_BT_AttentionTarget_Buffed");
  FUN_10256e40(0x91c,"E_BT_AttentionTarget_BuffedEnd");
  FUN_10256e40(0x91d,"E_BT_AttentionTarget_HitReactioned");
  FUN_10256e40(0x91e,"E_BT_AttentionTarget_DoAttack");
  FUN_10256e40(0x921,"E_BT_AttentionTarget_DoDefense");
  FUN_10256e40(0x922,"E_BT_AttentionTarget_DoDodge");
  FUN_10256e40(0x923,"E_BT_AttentionTarget_DoUseItem");
  FUN_10256e40(0x924,"E_BT_AttentionTarget_Died");
  FUN_10256e40(0x925,"E_BT_AttentionTarget_EnterCombat");
  FUN_10256e40(0x926,"E_BT_AttentionTarget_ExitCombat");
  FUN_10256e40(0x927,"E_BT_AttentionTarget_StateChanged");
  FUN_10256e40(0x928,"E_BT_AttentionTarget_DoStartMove");
  FUN_10256e40(0x929,"E_BT_AttentionTarget_DoStopMove");
  FUN_10256e40(0x92a,"E_BT_AttentionTarget_DoSomeAction");
  FUN_10256e40(0x92b,"E_BT_AttentionTarget_DoInterestingAction");
  FUN_10256e40(0x92c,"E_BT_AttentionTarget_DoFriendingAction");
  FUN_10256e40(0x92d,"E_BT_AttentionTarget_DoThreateningAction");
  FUN_10256e40(0x92e,"E_BT_SendFrom_FG");
  FUN_10256e40(0x930,"E_BT_SELF_FSM_STATE_CHANGE");
  FUN_10256e40(0x931,"E_BT_Inner_After_Abnormal");
  FUN_10256e40(0x933,"E_BT_SendFrom_UI");
  FUN_10256e40(0x934,"E_BT_QuestComplete");
  FUN_10256e40(0x935,"E_BT_QuestFail");
  FUN_10256e40(0x936,"E_BT_SKILL_HIT");
  FUN_10256e40(0x937,"E_BT_ENTER_ANGRY");
  FUN_10256e40(0x939,"E_BT_ENTER_LEMON");
  FUN_10256e40(0x93a,"E_BT_LEAVE_LEMON");
  FUN_10256e40(0x938,"E_BT_SMPET_Summon");
  FUN_10256e40(0x93b,"E_BT_PLAYER_INPUT");
  FUN_10256e40(0x93c,"E_BT_MONSTERCTRL_ACTION_CHANGED");
  FUN_10256e40(0x93d,"E_BT_MONSTERCTRL_ACTION_END");
  FUN_10256e40(0x93e,"E_BT_MONSTERCTRL_HIGH_FIGHT");
  FUN_10256e40(0x93f,"E_BT_MONSTERCTRL_LOW_FIGHT");
  FUN_10256e40(0x940,"E_BT_MONSTERCTRL_NORMAL_FIGHT");
  FUN_10256e40(0x941,"E_BT_MONSTERCTRL_LOW_POWER");
  FUN_10256e40(0x942,"E_BT_MONSTERCTRL_NORMAL_POWER");
  FUN_10256e40(0x943,"E_BT_MONSTERCTRL_MTM_MESSAGE");
  FUN_10256e40(0x944,"E_BT_3V3_FirstWin");
  FUN_10256e40(0x945,"E_BT_3V3_SecondWin");
  FUN_10256e40(0x946,"E_BT_MVM_FinalWin");
  FUN_10256e40(0x947,"E_BT_COOPERATION_ATTACK");
  FUN_10256e40(0x948,"E_BT_COOPERATION_ATTACK_END");
  FUN_10256e40(0x949,"E_BT_KEY_ATTR_CHANGE");
  FUN_10256e40(0x89c,"E_EVTTYPE_BT_COMMONAIBehaviorStart");
  FUN_10256e40(0x89d,"E_EVTTYPE_BT_COMMONAIBehaviorEnd");
  FUN_10256e40(0x94b,"E_BT_EMOTIONSTATE_NORMAL_START");
  FUN_10256e40(0x94c,"E_BT_EMOTIONSTATE_NORMAL_END");
  FUN_10256e40(0x94d,"E_BT_EMOTIONSTATE_ANGRY_START");
  FUN_10256e40(0x94e,"E_BT_EMOTIONSTATE_ANGRY_END");
  FUN_10256e40(0x94f,"E_BT_EMOTIONSTATE_TIRED_START");
  FUN_10256e40(0x950,"E_BT_EMOTIONSTATE_TIRED_END");
  FUN_10256e40(0x952,"E_BT_SOULBEAST_INTERACT");
  FUN_10256e40(0x953,"E_BT_SOULBEAST_CHANGEIMG");
  FUN_10256e40(0x955,"E_BT_Monster_Abnormal_Dynamite_end");
  FUN_10256e40(0x954,"E_BT_Monster_Abnormal_Dynamite");
  return param_1;
}



/* ===== FUN_10257170 @ 10257170  size=52 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_10257170(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  else if ((int)param_1[1] < 0) {
    _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    return;
  }
  return;
}



/* ===== FUN_102571d0 @ 102571d0  size=52 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_102571d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  else if ((int)param_1[1] < 0) {
    _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    return;
  }
  return;
}



/* ===== FUN_10257230 @ 10257230  size=52 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_10257230(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  else if ((int)param_1[1] < 0) {
    _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    return;
  }
  return;
}



/* ===== FUN_10257270 @ 10257270  size=503 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall
FUN_10257270(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puStack_34;
  undefined1 auStack_28 [4];
  undefined4 **ppuStack_24;
  undefined4 **ppuStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_28;
  puStack_34 = param_4;
  FUN_104a2050(param_2,param_3,0);
  *param_1 = &PTR_FUN_11da55a4;
  *(undefined1 *)(param_1 + 0x9f) = 1;
  param_1[0xa1] = 0xffffffff;
  param_1[0xa2] = 0xffffffff;
  param_1[0xa3] = 0xffffffff;
  param_1[0xa4] = 0xffffffff;
  param_1[0xa5] = 0xffffffff;
  param_1[0xa6] = 0xffffffff;
  param_1[0xa7] = 0xffffffff;
  param_1[0xa8] = 0xffffffff;
  param_1[0xa9] = 0xffffffff;
  param_1[0xaa] = 0xffffffff;
  param_1[0xab] = 0xffffffff;
  param_1[0xac] = 0xffffffff;
  param_1[0xb1] = 0xffffffff;
  param_1[0xb2] = 0xffffffff;
  param_1[0xb3] = 0xffffffff;
  param_1[0xb4] = 0xffffffff;
  param_1[0xb5] = 0xffffffff;
  param_1[0xb6] = 0xffffffff;
  param_1[0xb7] = 0xffffffff;
  param_1[0xb8] = 0xffffffff;
  param_1[0xb9] = 0xffffffff;
  param_1[0x4c] = 1;
  FUN_104a3850();
  if ((DAT_123bb90c != 0) && (*(int **)(DAT_123bb90c + 0x10) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 4))(param_1[0x4b]);
    if (piVar2 != (int *)0x0) {
      pcVar3 = (char *)(**(code **)(*piVar2 + 4))();
      ppuStack_24 = &puStack_34;
      pcVar1 = pcVar3;
      do {
        pcVar4 = pcVar1;
        pcVar1 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      ppuStack_20 = ppuStack_24;
      FUN_100b62c0(pcVar3,pcVar4);
      if (&puStack_34 != (undefined4 **)(param_1 + 0x56)) {
        FUN_100d83d0(ppuStack_20,ppuStack_24);
      }
      if ((ppuStack_20 != &puStack_34) && (ppuStack_20 != (undefined4 **)0x0)) {
        FUN_10c3d5d0(ppuStack_20);
      }
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    piVar2 = param_4 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*param_4)(1);
    }
    else if ((int)param_4[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10258840 @ 10258840  size=919 ===== */
// strings:
//   "BehaviorTree"
//   "PropertyCustom"
//   ".AISetting.BehaviorTree"
//   "FileName"
//   "ClientBehaviorTree"
//   ".AISetting.ClientBehaviorTree"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTree""
     ""PropertyCustom""
     "".AISetting.BehaviorTree""
     ""FileName""
     ""ClientBehaviorTree""
     "".AISetting.ClientBehaviorTree"" */

void __fastcall FUN_10258840(int param_1)

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



/* ===== FUN_1025aa10 @ 1025aa10  size=50 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_1025aa10(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1025aa60 @ 1025aa60  size=50 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_1025aa60(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1025aab0 @ 1025aab0  size=50 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_1025aab0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1025b730 @ 1025b730  size=295 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
//   u"E_Type_Int == m_eValueType"

/* [RE-AUTO c0]
   src: BTAttributeInfoType.h
   calls: _wassert
   strings:
     
   "u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h""
     "u"E_Type_Int == m_eValueType"" */

void __thiscall FUN_1025b730(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_50;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x5c));
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 4))();
      if (piVar2 != (int *)0x0) {
        puStack_38 = auStack_48;
        auStack_48[0] = 0;
        uStack_30 = 0;
        uStack_4c = 0;
        puStack_34 = puStack_38;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(auStack_2c,param_2);
        uVar1 = *puVar3;
        if (puVar3 + 1 != &uStack_50) {
          FUN_100d83d0(puVar3[6],puVar3[5]);
        }
        puStack_38 = (undefined1 *)puVar3[7];
        if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_1c);
        }
        if (puStack_38 != (undefined1 *)0x1) {
          _wassert(L"E_Type_Int == m_eValueType",
                   L"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
                   ,0x65);
        }
        *param_3 = uVar1;
        if ((puStack_3c != &uStack_50) && (puStack_3c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_3c);
        }
        FUN_11a89daa();
        return;
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1025b860 @ 1025b860  size=295 ===== */
// calls: _wassert
// strings:
//   u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
//   u"E_Type_Bool == m_eValueType"

/* [RE-AUTO c0]
   src: BTAttributeInfoType.h
   calls: _wassert
   strings:
     
   "u"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h""
     "u"E_Type_Bool == m_eValueType"" */

void __thiscall FUN_1025b860(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined4 *puStack_1c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_50;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(int **)(param_1 + 0x1c) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(undefined4 *)(param_1 + 0x5c));
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 4))();
      if (piVar2 != (int *)0x0) {
        puStack_38 = auStack_48;
        auStack_48[0] = 0;
        uStack_30 = 0;
        uStack_4c = 0;
        puStack_34 = puStack_38;
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(auStack_2c,param_2);
        uVar1 = *puVar3;
        if (puVar3 + 1 != &uStack_50) {
          FUN_100d83d0(puVar3[6],puVar3[5]);
        }
        puStack_38 = (undefined1 *)puVar3[7];
        if ((puStack_1c != &uStack_30) && (puStack_1c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_1c);
        }
        if (puStack_38 != (undefined1 *)0x3) {
          _wassert(L"E_Type_Bool == m_eValueType",
                   L"d:\\mhfc\\oprelease\\code\\common\\behaviortree\\interface\\../CEShare/BTAttributeInfoType.h"
                   ,0x75);
        }
        *param_3 = (char)uVar1;
        if ((puStack_3c != &uStack_50) && (puStack_3c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_3c);
        }
        FUN_11a89daa();
        return;
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1025bd90 @ 1025bd90  size=145 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

float * __fastcall FUN_1025bd90(float *param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float local_10;
  float fStack_c;
  
  uVar1 = *param_3;
  fVar2 = *(float *)(param_3 + 1);
  local_10 = (float)uVar1;
  *param_1 = *param_2 - local_10;
  fStack_c = (float)((ulonglong)uVar1 >> 0x20);
  param_1[1] = param_2[1] - fStack_c;
  param_1[2] = param_2[2] - fVar2;
  if (((((uint)*param_1 & 0x7f800000) == 0x7f800000) ||
      (((uint)param_1[1] & 0x7f800000) == 0x7f800000)) ||
     (((uint)param_1[2] & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  return param_1;
}



/* ===== FUN_1025c060 @ 1025c060  size=137 ===== */
// strings:
//   "IdPtrNameSvr<class CBehaviorTree>::GetIdPtrBaseName"

/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBehaviorTree>::GetIdPtrBaseName"" */

undefined4 * __fastcall FUN_1025c060(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_100ddd90(0x118);
  iVar1 = DAT_123bdc04;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_100bcc20();
    *param_1 = uVar3;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    if ((iVar2 != 0) && ((undefined4 *)(iVar2 + 8) != (undefined4 *)0x0)) {
      *(undefined4 *)(iVar2 + 8) = uVar3;
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int *)(iVar2 + 0x10) = iVar2;
    }
    FUN_100b4ad0(uVar3,iVar2,"IdPtrNameSvr<class CBehaviorTree>::GetIdPtrBaseName");
  }
  if (iVar2 != 0) {
    FUN_104b4f70(*param_2,*param_3);
  }
  return param_1;
}



/* ===== FUN_1025c570 @ 1025c570  size=89 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

uint * __fastcall FUN_1025c570(uint *param_1)

{
  uint in_XMM1_Da;
  uint in_XMM2_Da;
  uint in_XMM3_Da;
  
  *param_1 = in_XMM1_Da;
  param_1[1] = in_XMM2_Da;
  param_1[2] = in_XMM3_Da;
  if ((((*param_1 & 0x7f800000) == 0x7f800000) || ((param_1[1] & 0x7f800000) == 0x7f800000)) ||
     ((param_1[2] & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  return param_1;
}



/* ===== FUN_1025ef10 @ 1025ef10  size=51 ===== */
// strings:
//   "IdPtrNameSvr<class CBehaviorTree>::GetIdPtrBaseName"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""IdPtrNameSvr<class CBehaviorTree>::GetIdPtrBaseName"" */

undefined * FUN_1025ef10(void)

{
  _DAT_123c2b60 = &PTR_FUN_11da557c;
  if (DAT_123ba6a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x48);
  }
  FUN_100d6fd0("IdPtrNameSvr<class CBehaviorTree>::GetIdPtrBaseName",&DAT_123c2b60,1);
  return &DAT_123c2b60;
}



/* ===== FUN_10260400 @ 10260400  size=476 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

bool FUN_10260400(float *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  FUN_102612f0(&local_18);
  fVar3 = (float)((uint)fStack_1c ^ DAT_11de9c90);
  fVar2 = (float)((uint)local_18 ^ DAT_11de9c90);
  fVar4 = (float)((uint)fStack_14 ^ DAT_11de9c90);
  if (((((uint)fVar3 & 0x7f800000) == 0x7f800000) || (((uint)fVar2 & 0x7f800000) == 0x7f800000)) ||
     (((uint)fVar4 & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  if (((DAT_11de98ac < (float)(double)((ulonglong)(double)(*param_1 - fStack_1c) & DAT_11de9c70)) ||
      (DAT_11de98ac < (float)(double)((ulonglong)(double)(param_1[1] - local_18) & DAT_11de9c70)))
     || ((DAT_11de98ac < (float)(double)((ulonglong)(double)(param_1[2] - fStack_14) & DAT_11de9c70)
         || (DAT_11de98ac <
             (float)(double)((ulonglong)(double)(param_1[3] - fStack_10) & DAT_11de9c70))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((float)(double)((ulonglong)(double)(*param_1 - fVar3) & DAT_11de9c70) <= DAT_11de98ac) &&
      ((float)(double)((ulonglong)(double)(param_1[1] - fVar2) & DAT_11de9c70) <= DAT_11de98ac)) &&
     (((float)(double)((ulonglong)(double)(param_1[2] - fVar4) & DAT_11de9c70) <= DAT_11de98ac &&
      ((float)(double)((ulonglong)(double)(param_1[3] - (float)((uint)fStack_10 ^ DAT_11de9c90)) &
                      DAT_11de9c70) <= DAT_11de98ac)))) {
    return false;
  }
  return !bVar1;
}



/* ===== FUN_102608a0 @ 102608a0  size=461 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

bool __thiscall FUN_102608a0(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)((uint)*param_2 ^ DAT_11de9c90);
  fVar2 = (float)((uint)param_2[1] ^ DAT_11de9c90);
  fVar4 = (float)((uint)param_2[2] ^ DAT_11de9c90);
  if (((((uint)fVar3 & 0x7f800000) == 0x7f800000) || (((uint)fVar2 & 0x7f800000) == 0x7f800000)) ||
     (((uint)fVar4 & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  if (((DAT_11de98ac < (float)(double)((ulonglong)(double)(*param_1 - *param_2) & DAT_11de9c70)) ||
      (DAT_11de98ac < (float)(double)((ulonglong)(double)(param_1[1] - param_2[1]) & DAT_11de9c70)))
     || ((DAT_11de98ac <
          (float)(double)((ulonglong)(double)(param_1[2] - param_2[2]) & DAT_11de9c70) ||
         (DAT_11de98ac <
          (float)(double)((ulonglong)(double)(param_1[3] - param_2[3]) & DAT_11de9c70))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((float)(double)((ulonglong)(double)(*param_1 - fVar3) & DAT_11de9c70) <= DAT_11de98ac) &&
      ((float)(double)((ulonglong)(double)(param_1[1] - fVar2) & DAT_11de9c70) <= DAT_11de98ac)) &&
     (((float)(double)((ulonglong)(double)(param_1[2] - fVar4) & DAT_11de9c70) <= DAT_11de98ac &&
      ((float)(double)((ulonglong)(double)(param_1[3] - (float)((uint)param_2[3] ^ DAT_11de9c90)) &
                      DAT_11de9c70) <= DAT_11de98ac)))) {
    return false;
  }
  return !bVar1;
}



/* ===== FUN_10260b20 @ 10260b20  size=445 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

undefined1 __thiscall FUN_10260b20(float *param_1,float *param_2)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)((uint)*param_2 ^ DAT_11de9c90);
  fVar2 = (float)((uint)param_2[1] ^ DAT_11de9c90);
  fVar4 = (float)((uint)param_2[2] ^ DAT_11de9c90);
  if (((((uint)fVar3 & 0x7f800000) == 0x7f800000) || (((uint)fVar2 & 0x7f800000) == 0x7f800000)) ||
     (((uint)fVar4 & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  if (((DAT_11de98ac < (float)(double)((ulonglong)(double)(*param_1 - *param_2) & DAT_11de9c70)) ||
      (DAT_11de98ac < (float)(double)((ulonglong)(double)(param_1[1] - param_2[1]) & DAT_11de9c70)))
     || ((DAT_11de98ac <
          (float)(double)((ulonglong)(double)(param_1[2] - param_2[2]) & DAT_11de9c70) ||
         (DAT_11de98ac <
          (float)(double)((ulonglong)(double)(param_1[3] - param_2[3]) & DAT_11de9c70))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if ((((float)(double)((ulonglong)(double)(*param_1 - fVar3) & DAT_11de9c70) <= DAT_11de98ac) &&
      ((float)(double)((ulonglong)(double)(param_1[1] - fVar2) & DAT_11de9c70) <= DAT_11de98ac)) &&
     (((float)(double)((ulonglong)(double)(param_1[2] - fVar4) & DAT_11de9c70) <= DAT_11de98ac &&
      ((float)(double)((ulonglong)(double)(param_1[3] - (float)((uint)param_2[3] ^ DAT_11de9c90)) &
                      DAT_11de9c70) <= DAT_11de98ac)))) {
    return 1;
  }
  return uVar1;
}



/* ===== FUN_10260ce0 @ 10260ce0  size=452 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

undefined1 __thiscall FUN_10260ce0(float *param_1,float *param_2)

{
  undefined1 uVar1;
  float in_XMM2_Da;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)((uint)*param_2 ^ DAT_11de9c90);
  fVar2 = (float)((uint)param_2[1] ^ DAT_11de9c90);
  fVar4 = (float)((uint)param_2[2] ^ DAT_11de9c90);
  if (((((uint)fVar3 & 0x7f800000) == 0x7f800000) || (((uint)fVar2 & 0x7f800000) == 0x7f800000)) ||
     (((uint)fVar4 & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  if (((in_XMM2_Da < (float)(double)((ulonglong)(double)(*param_1 - *param_2) & DAT_11de9c70)) ||
      (in_XMM2_Da < (float)(double)((ulonglong)(double)(param_1[1] - param_2[1]) & DAT_11de9c70)))
     || ((in_XMM2_Da < (float)(double)((ulonglong)(double)(param_1[2] - param_2[2]) & DAT_11de9c70)
         || (in_XMM2_Da <
             (float)(double)((ulonglong)(double)(param_1[3] - param_2[3]) & DAT_11de9c70))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if ((((float)(double)((ulonglong)(double)(*param_1 - fVar3) & DAT_11de9c70) <= in_XMM2_Da) &&
      ((float)(double)((ulonglong)(double)(param_1[1] - fVar2) & DAT_11de9c70) <= in_XMM2_Da)) &&
     (((float)(double)((ulonglong)(double)(param_1[2] - fVar4) & DAT_11de9c70) <= in_XMM2_Da &&
      ((float)(double)((ulonglong)(double)(param_1[3] - (float)((uint)param_2[3] ^ DAT_11de9c90)) &
                      DAT_11de9c70) <= in_XMM2_Da)))) {
    return 1;
  }
  return uVar1;
}



/* ===== FUN_10260eb0 @ 10260eb0  size=171 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

void __thiscall FUN_10260eb0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_1 ^ DAT_11de9c90;
  uVar3 = param_1[1] ^ DAT_11de9c90;
  uVar4 = param_1[2] ^ DAT_11de9c90;
  if ((((uVar2 & 0x7f800000) == 0x7f800000) || ((uVar3 & 0x7f800000) == 0x7f800000)) ||
     ((uVar4 & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  uVar1 = DAT_11de9c90;
  *param_2 = CONCAT44(uVar3,uVar2);
  uVar2 = param_1[3];
  *(uint *)(param_2 + 1) = uVar4;
  *(uint *)((int)param_2 + 0xc) = uVar2 ^ uVar1;
  return;
}



/* ===== FUN_10260f60 @ 10260f60  size=131 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

uint * __thiscall FUN_10260f60(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = DAT_11de9c90;
  *param_2 = *param_1 ^ DAT_11de9c90;
  param_2[1] = param_1[1] ^ uVar1;
  param_2[2] = param_1[2] ^ uVar1;
  if ((((*param_2 & 0x7f800000) == 0x7f800000) || ((param_2[1] & 0x7f800000) == 0x7f800000)) ||
     ((param_2[2] & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  return param_2;
}



/* ===== FUN_10261ce0 @ 10261ce0  size=310 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 * __thiscall
FUN_10261ce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_4 != (undefined4 *)0x0) {
    param_4[1] = param_4[1] + 1;
  }
  FUN_10257270(param_2,param_3,param_4);
  puVar1 = param_1 + 0xbc;
  *param_1 = &PTR_FUN_11da7540;
  *puVar1 = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(undefined1 *)puVar1 = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = puVar1;
  param_1[0xbf] = puVar1;
  param_1[0xc0] = 0;
  *(undefined1 *)(param_1 + 0xc1) = param_4._3_1_;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0xffffffff;
  param_1[0xca] = 0xffffffff;
  param_1[0xcb] = 0xffffffff;
  param_1[0xcc] = 0xffffffff;
  param_1[0xcd] = 0xffffffff;
  param_1[0xce] = 0xffffffff;
  param_1[0xcf] = 0xffffffff;
  param_1[0xd0] = 0xffffffff;
  param_1[0x4c] = 2;
  FUN_104a3850();
  if (param_4 != (undefined4 *)0x0) {
    iVar2 = param_4[1] + -1;
    param_4[1] = iVar2;
    if (iVar2 == 0) {
      (**(code **)*param_4)(1);
    }
    else if (iVar2 < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_10262030 @ 10262030  size=586 ===== */
// strings:
//   "ClientBehaviorTree"
//   "PropertyCustom"
//   ".AISetting.ClientBehaviorTree"
//   "FileName"

/* WARNING: Removing unreachable block (ram,0x1026221b) */
/* WARNING: Removing unreachable block (ram,0x10262246) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""ClientBehaviorTree""
     ""PropertyCustom""
     "".AISetting.ClientBehaviorTree""
     ""FileName"" */

void __fastcall FUN_10262030(int param_1)

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



/* ===== FUN_10262280 @ 10262280  size=510 ===== */
// strings:
//   "SkillBehaviorTree"
//   "FileName"
//   "SkillID"

/* [RE-AUTO c0]
   strings:
     ""SkillBehaviorTree""
     ""FileName""
     ""SkillID"" */

void __fastcall FUN_10262280(int *param_1)

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



/* ===== FUN_10262480 @ 10262480  size=169 ===== */
// strings:
//   "DefaultBehaviorTree"

/* [RE-AUTO c0]
   strings:
     ""DefaultBehaviorTree"" */

void __fastcall FUN_10262480(int *param_1)

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



/* ===== FUN_10263ac0 @ 10263ac0  size=134 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 * __thiscall
FUN_10263ac0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_4 != (undefined4 *)0x0) {
    param_4[1] = param_4[1] + 1;
  }
  FUN_10257270(param_2,param_3,param_4);
  *param_1 = &PTR_FUN_11da75d8;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  if (param_4 != (undefined4 *)0x0) {
    iVar1 = param_4[1] + -1;
    param_4[1] = iVar1;
    if (iVar1 == 0) {
      (**(code **)*param_4)(1);
    }
    else if (iVar1 < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_102654c0 @ 102654c0  size=100 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_102654c0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x24))();
  if (piVar2 != (int *)0x0) {
    uVar1 = param_2[2];
    (**(code **)(*piVar2 + 0x38))(&param_2);
    FUN_10475890(uVar1,0);
    if (param_2 != (undefined4 *)0x0) {
      piVar2 = param_2 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*param_2)(1);
      }
      else if ((int)param_2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
        return;
      }
    }
  }
  return;
}



/* ===== FUN_10267bb0 @ 10267bb0  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 * __thiscall FUN_10267bb0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_11da78c8;
  puVar2 = (undefined4 *)param_1[8];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *param_1 = &PTR_FUN_11da7908;
  if ((param_2 & 1) != 0) {
    FUN_10c3d5d0(param_1);
  }
  return param_1;
}



/* ===== FUN_10267c20 @ 10267c20  size=74 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_10267c20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_11da78c8;
  puVar2 = (undefined4 *)param_1[8];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = &PTR_FUN_11da7908;
      return;
    }
  }
  *param_1 = &PTR_FUN_11da7908;
  return;
}



/* ===== FUN_10268060 @ 10268060  size=75 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_10268060(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  *param_1 = param_2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x102680a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
    if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  return;
}



/* ===== FUN_1026a360 @ 1026a360  size=141 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\AnimusInfoSystemManager.cpp"
//   u"temp.IsValid()"

/* [RE-AUTO c0]
   src: AnimusInfoSystemManager.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\AnimusInfoSystemManager.cpp""
     "u"temp.IsValid()"" */

void __thiscall FUN_1026a360(int param_1,undefined4 param_2)

{
  undefined1 local_1c [8];
  int local_14;
  undefined **local_10;
  undefined1 *local_c;
  int local_8;
  
  local_10 = &PTR_FUN_11da7ab0;
  local_c = &LAB_1026bc27;
  local_8 = param_1;
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0x98) + 0x1c))
            (local_1c,param_2,0xffffffff,0xffffffff,&local_10,0xffffffff,1,0,0);
  if ((local_14 == 0) &&
     (_wassert(L"temp.IsValid()",
               L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\AnimusInfoSystemManager.cpp"
               ,0x40), local_14 == 0)) {
    return;
  }
  FUN_1026ad90(&param_2,param_1 + 0x20,local_1c);
  return;
}



/* ===== FUN_1026a3f0 @ 1026a3f0  size=141 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\AnimusInfoSystemManager.cpp"
//   u"temp.IsValid()"

/* [RE-AUTO c0]
   src: AnimusInfoSystemManager.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\AnimusInfoSystemManager.cpp""
     "u"temp.IsValid()"" */

void __thiscall FUN_1026a3f0(int param_1,undefined4 param_2)

{
  undefined1 local_1c [8];
  int local_14;
  undefined **local_10;
  undefined1 *local_c;
  int local_8;
  
  local_10 = &PTR_FUN_11da7ab0;
  local_c = &LAB_1026bc1d;
  local_8 = param_1;
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0x98) + 0x1c))
            (local_1c,param_2,0xffffffff,0xffffffff,&local_10,0xffffffff,1,0,0);
  if ((local_14 == 0) &&
     (_wassert(L"temp.IsValid()",
               L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\AnimusInfoSystemManager.cpp"
               ,0x4d), local_14 == 0)) {
    return;
  }
  FUN_1026ad90(&param_2,param_1 + 0x20,local_1c);
  return;
}



/* ===== FUN_1026a4d0 @ 1026a4d0  size=140 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_1026a4d0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_1026b190(&param_1);
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = (undefined4 *)*piVar3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *piVar3 = (int)param_2;
  if (param_2 != (undefined4 *)0x0) {
    piVar3 = param_2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1026a610 @ 1026a610  size=94 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026a610(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  (**(code **)(*param_1 + 0xc))(&param_2,param_2[7]);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x24))(piVar1);
    if (param_2 != (int *)0x0) {
      piVar1 = param_2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_2)(1);
      }
      else if (param_2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
        return 0;
      }
    }
  }
  return 0;
}



/* ===== FUN_1026a670 @ 1026a670  size=133 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026a670(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  if (*param_2 == 0x520) {
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1[7] + 0x2c) + 0x90) + 0x7c))(param_2[3]);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0xc))(&param_2,*(undefined4 *)(iVar2 + 8));
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 0x28))(piVar1);
        if (param_2 != (int *)0x0) {
          piVar1 = param_2 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*param_2)(1);
          }
          else if (param_2[1] < 0) {
            _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",
                     0x18c);
            return 0;
          }
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_1026a780 @ 1026a780  size=176 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026a780(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_2 == 0x9cb) {
    iVar5 = *(int *)(param_1 + 0xc);
    while (iVar5 != param_1 + 4) {
      piVar2 = *(int **)(iVar5 + 0x14);
      if (piVar2 != (int *)0x0) {
        piVar2[1] = piVar2[1] + 1;
        (**(code **)(*piVar2 + 0x2c))(param_2);
        piVar1 = piVar2 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar2)(1);
        }
        else if (piVar2[1] < 0) {
          _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c)
          ;
        }
      }
      iVar4 = *(int *)(iVar5 + 0xc);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar5 + 4);
        if (iVar5 == *(int *)(iVar4 + 0xc)) {
          do {
            iVar5 = iVar4;
            iVar4 = *(int *)(iVar5 + 4);
          } while (iVar5 == *(int *)(iVar4 + 0xc));
        }
        if (*(int *)(iVar5 + 0xc) != iVar4) {
          iVar5 = iVar4;
        }
      }
      else {
        for (iVar3 = *(int *)(iVar4 + 8); iVar5 = iVar4, iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
          iVar4 = iVar3;
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_1026ab60 @ 1026ab60  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_1026ab60(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_1026acc0 @ 1026acc0  size=105 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_1026acc0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_100d86b0(param_2,param_1 + 4,param_1 + 8,param_1 + 0xc);
  puVar2 = *(undefined4 **)(iVar3 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  if (iVar3 != 0) {
    FUN_10c3d5d0(iVar3);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}



/* ===== FUN_1026b090 @ 1026b090  size=119 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026b090(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_2 != 0) {
    FUN_1026b090(*(undefined4 *)(param_2 + 0xc));
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    iVar3 = *(int *)(param_2 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      else if ((int)puVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
    FUN_10c3d5d0(param_2);
    param_2 = iVar3;
  }
  return param_1;
}



/* ===== FUN_1026b7b0 @ 1026b7b0  size=64 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int __fastcall FUN_1026b7b0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_1026bc60 @ 1026bc60  size=52 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_1026bc60(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  else if ((int)param_1[1] < 0) {
    _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    return;
  }
  return;
}



/* ===== FUN_1026bf90 @ 1026bf90  size=140 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_1026bf90(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_1026c660(&param_1);
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = (undefined4 *)*piVar3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *piVar3 = (int)param_2;
  if (param_2 != (undefined4 *)0x0) {
    piVar3 = param_2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1026c0d0 @ 1026c0d0  size=94 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026c0d0(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  (**(code **)(*param_1 + 4))(&param_2,param_2[7]);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x14))(piVar1);
    if (param_2 != (int *)0x0) {
      piVar1 = param_2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_2)(1);
      }
      else if (param_2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
        return 0;
      }
    }
  }
  return 0;
}



/* ===== FUN_1026c300 @ 1026c300  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_1026c300(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_1026c3e0 @ 1026c3e0  size=105 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_1026c3e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_100d86b0(param_2,param_1 + 4,param_1 + 8,param_1 + 0xc);
  puVar2 = *(undefined4 **)(iVar3 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  if (iVar3 != 0) {
    FUN_10c3d5d0(iVar3);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}



/* ===== FUN_1026c590 @ 1026c590  size=119 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026c590(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_2 != 0) {
    FUN_1026c590(*(undefined4 *)(param_2 + 0xc));
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    iVar3 = *(int *)(param_2 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      else if ((int)puVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
    FUN_10c3d5d0(param_2);
    param_2 = iVar3;
  }
  return param_1;
}



/* ===== FUN_1026cba0 @ 1026cba0  size=64 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int __fastcall FUN_1026cba0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_1026d130 @ 1026d130  size=582 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp"
//   u"m_listEventSlotTag.empty()"
//   u"temp.IsValid()"

/* [RE-AUTO c0]
   src: BehaviorTreeEventSystem.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp""
     "u"m_listEventSlotTag.empty()""
     "u"temp.IsValid()"" */

void __fastcall FUN_1026d130(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_84;
  undefined4 *puStack_80;
  int *piStack_7c;
  int *piStack_78;
  undefined ***pppuStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined ***pppuStack_64;
  undefined4 uStack_60;
  int iStack_44;
  int *local_40;
  int iStack_3c;
  undefined **ppuStack_38;
  undefined1 *puStack_34;
  int *piStack_30;
  undefined **ppuStack_2c;
  undefined1 *puStack_28;
  int *piStack_24;
  undefined *apuStack_20 [7];
  
  local_40 = param_1;
  (**(code **)(*param_1 + 0x10))();
  piVar1 = param_1 + 1;
  if ((int *)*piVar1 != piVar1) {
    uStack_60 = 0x1026d160;
    _wassert(L"m_listEventSlotTag.empty()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp"
             ,0x31);
  }
  if (*(int *)(param_1[3] + 0x2c) != 0) {
    iVar2 = 0x89a;
    do {
      pppuStack_64 = &ppuStack_38;
      uStack_60 = 0xffffffff;
      uStack_68 = 0xffffffff;
      pppuStack_74 = &ppuStack_2c;
      puStack_6c = (undefined1 *)0xffffffff;
      ppuStack_38 = &PTR_FUN_11da7b60;
      puStack_34 = &LAB_1026d752;
      piStack_78 = (int *)0x1026d1bf;
      puStack_70 = (undefined1 *)iVar2;
      piStack_30 = param_1;
      (**(code **)(**(int **)(*(int *)(param_1[3] + 0x2c) + 0x98) + 0x1c))();
      ppuStack_38 = &PTR_FUN_11da765c;
      if (piStack_24 == (int *)0x0) {
        uStack_60 = 0x1026d1e0;
        _wassert(L"temp.IsValid()",
                 L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp"
                 ,0x3e);
        if (piStack_24 != (int *)0x0) goto LAB_1026d1ea;
      }
      else {
LAB_1026d1ea:
        uStack_60 = 0x1026d200;
        FUN_1026ad90();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x956);
    pppuStack_64 = &ppuStack_2c;
    uStack_60 = 0xffffffff;
    uStack_68 = 0xffffffff;
    iVar2 = 0;
    pppuStack_74 = (undefined ***)apuStack_20;
    puStack_6c = (undefined1 *)0xffffffff;
    puStack_70 = (undefined1 *)0x67;
    ppuStack_2c = &PTR_FUN_11da7b60;
    puStack_28 = &LAB_1026d757;
    piStack_78 = (int *)0x1026d258;
    piStack_24 = param_1;
    (**(code **)(**(int **)(*(int *)(param_1[3] + 0x2c) + 0x98) + 0x1c))();
    if (iStack_3c != 0) {
      piStack_78 = &iStack_44;
      puStack_80 = &uStack_60;
      uStack_84 = 0x1026d275;
      piStack_7c = piVar1;
      FUN_1026ad90();
    }
    puStack_80 = (undefined4 *)0x1;
    uStack_84 = 0xffffffff;
    piStack_78 = (int *)0x0;
    piStack_7c = (int *)0x0;
    (**(code **)(**(int **)(*(int *)(param_1[3] + 0x2c) + 0x98) + 0x1c))
              (&ppuStack_38,0x66,0xffffffff,0xffffffff);
    if (iVar2 != 0) {
      FUN_1026ad90(&uStack_84,piVar1,&stack0xffffffa4);
    }
    iVar2 = 0x516;
    do {
      pppuStack_74 = (undefined ***)&PTR_FUN_11da7b60;
      puStack_70 = &LAB_1026d75c;
      puStack_6c = &stack0xffffffb0;
      (**(code **)(**(int **)(*(int *)(iStack_44 + 0x2c) + 0x98) + 0x1c))
                (&puStack_80,iVar2,0xffffffff,0xffffffff,&pppuStack_74,0xffffffff,1,0,0);
      pppuStack_74 = (undefined ***)&PTR_FUN_11da765c;
      if (piStack_78 != (int *)0x0) {
LAB_1026d35b:
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x14);
      }
      _wassert(L"temp.IsValid()",
               L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\BehaviorTreeEventSystem.cpp"
               ,0x55);
      if (piStack_78 != (int *)0x0) goto LAB_1026d35b;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x52f);
  }
  return;
}



/* ===== FUN_1026d9d0 @ 1026d9d0  size=141 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\MVMPowerManager.cpp"
//   u"temp.IsValid()"

/* [RE-AUTO c0]
   src: MVMPowerManager.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\MVMPowerManager.cpp""
     "u"temp.IsValid()"" */

void __thiscall FUN_1026d9d0(int param_1,undefined4 param_2)

{
  undefined1 local_1c [8];
  int local_14;
  undefined **local_10;
  undefined1 *local_c;
  int local_8;
  
  local_10 = &PTR_FUN_11da7d28;
  local_c = &LAB_1026eadd;
  local_8 = param_1;
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0x98) + 0x1c))
            (local_1c,param_2,0xffffffff,0xffffffff,&local_10,0xffffffff,1,0,0);
  if ((local_14 == 0) &&
     (_wassert(L"temp.IsValid()",
               L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\MVMPowerManager.cpp",
               0x3e), local_14 == 0)) {
    return;
  }
  FUN_1026ad90(&param_2,param_1 + 0x20,local_1c);
  return;
}



/* ===== FUN_1026daa0 @ 1026daa0  size=140 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_1026daa0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_1026e130(&param_1);
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = (undefined4 *)*piVar3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *piVar3 = (int)param_2;
  if (param_2 != (undefined4 *)0x0) {
    piVar3 = param_2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1026dbe0 @ 1026dbe0  size=94 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026dbe0(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  (**(code **)(*param_1 + 0xc))(&param_2,param_2[0xd]);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x10))(piVar1);
    if (param_2 != (int *)0x0) {
      piVar1 = param_2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_2)(1);
      }
      else if (param_2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
        return 0;
      }
    }
  }
  return 0;
}



/* ===== FUN_1026ddd0 @ 1026ddd0  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_1026ddd0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_1026deb0 @ 1026deb0  size=105 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_1026deb0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_100d86b0(param_2,param_1 + 4,param_1 + 8,param_1 + 0xc);
  puVar2 = *(undefined4 **)(iVar3 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  if (iVar3 != 0) {
    FUN_10c3d5d0(iVar3);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}



/* ===== FUN_1026e060 @ 1026e060  size=119 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026e060(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_2 != 0) {
    FUN_1026e060(*(undefined4 *)(param_2 + 0xc));
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    iVar3 = *(int *)(param_2 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      else if ((int)puVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
    FUN_10c3d5d0(param_2);
    param_2 = iVar3;
  }
  return param_1;
}



/* ===== FUN_1026e670 @ 1026e670  size=64 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int __fastcall FUN_1026e670(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_1026ed50 @ 1026ed50  size=141 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\MVMFightManager.cpp"
//   u"temp.IsValid()"

/* [RE-AUTO c0]
   src: MVMFightManager.cpp
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\MVMFightManager.cpp""
     "u"temp.IsValid()"" */

void __thiscall FUN_1026ed50(int param_1,undefined4 param_2)

{
  undefined1 local_1c [8];
  int local_14;
  undefined **local_10;
  undefined1 *local_c;
  int local_8;
  
  local_10 = &PTR_FUN_11da7e10;
  local_c = &LAB_1026fe5d;
  local_8 = param_1;
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0x98) + 0x1c))
            (local_1c,param_2,0xffffffff,0xffffffff,&local_10,0xffffffff,1,0,0);
  if ((local_14 == 0) &&
     (_wassert(L"temp.IsValid()",
               L"D:\\MHFC\\OpRelease\\Code\\Common\\MHAIGame\\BehaviorTree\\MVMFightManager.cpp",
               0x3e), local_14 == 0)) {
    return;
  }
  FUN_1026ad90(&param_2,param_1 + 0x20,local_1c);
  return;
}



/* ===== FUN_1026ee20 @ 1026ee20  size=140 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_1026ee20(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_1026f4b0(&param_1);
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = (undefined4 *)*piVar3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *piVar3 = (int)param_2;
  if (param_2 != (undefined4 *)0x0) {
    piVar3 = param_2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1026ef60 @ 1026ef60  size=94 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026ef60(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  (**(code **)(*param_1 + 0xc))(&param_2,param_2[0xd]);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(piVar1);
    if (param_2 != (int *)0x0) {
      piVar1 = param_2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_2)(1);
      }
      else if (param_2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
        return 0;
      }
    }
  }
  return 0;
}



/* ===== FUN_1026f150 @ 1026f150  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_1026f150(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_1026f230 @ 1026f230  size=105 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_1026f230(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_100d86b0(param_2,param_1 + 4,param_1 + 8,param_1 + 0xc);
  puVar2 = *(undefined4 **)(iVar3 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  if (iVar3 != 0) {
    FUN_10c3d5d0(iVar3);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}



/* ===== FUN_1026f3e0 @ 1026f3e0  size=119 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_1026f3e0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_2 != 0) {
    FUN_1026f3e0(*(undefined4 *)(param_2 + 0xc));
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    iVar3 = *(int *)(param_2 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      else if ((int)puVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
    FUN_10c3d5d0(param_2);
    param_2 = iVar3;
  }
  return param_1;
}



/* ===== FUN_1026f9f0 @ 1026f9f0  size=64 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int __fastcall FUN_1026f9f0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_1026fea0 @ 1026fea0  size=52 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_1026fea0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  else if ((int)param_1[1] < 0) {
    _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    return;
  }
  return;
}



/* ===== FUN_102700d0 @ 102700d0  size=152 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_102700d0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_10270700(&param_1);
  if (param_2 != (int *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = (undefined4 *)*piVar3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *piVar3 = (int)param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
    if (param_2 != (int *)0x0) {
      piVar3 = param_2 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*param_2)(1);
      }
      else if (param_2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
        return;
      }
    }
  }
  return;
}



/* ===== FUN_102703f0 @ 102703f0  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_102703f0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_102704d0 @ 102704d0  size=105 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_102704d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_100d86b0(param_2,param_1 + 4,param_1 + 8,param_1 + 0xc);
  puVar2 = *(undefined4 **)(iVar3 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  if (iVar3 != 0) {
    FUN_10c3d5d0(iVar3);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}



/* ===== FUN_10270680 @ 10270680  size=119 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

undefined4 __thiscall FUN_10270680(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_2 != 0) {
    FUN_10270680(*(undefined4 *)(param_2 + 0xc));
    puVar2 = *(undefined4 **)(param_2 + 0x14);
    iVar3 = *(int *)(param_2 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      else if ((int)puVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
    FUN_10c3d5d0(param_2);
    param_2 = iVar3;
  }
  return param_1;
}



/* ===== FUN_10270ba0 @ 10270ba0  size=64 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int __fastcall FUN_10270ba0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return param_1;
    }
  }
  return param_1;
}



/* ===== FUN_102a6fc0 @ 102a6fc0  size=270 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar
// strings:
//   "%I64u"
//   "[ullEffectID]"
//   "[iEffectType]"
//   "[stPos]"
//   "[ullOwnerID]"
//   "[ullSpawnTime]"
//   "[iDurationTime]"
//   "0x%02x"
//   "[bSrcType]"

/* [RE-AUTO c0]
   strings:
     ""%I64u""
     ""[ullEffectID]""
     ""[iEffectType]""
     ""[stPos]""
     ""[ullOwnerID]""
     ""[ullSpawnTime]""
     ""[iDurationTime]""
     ""0x%02x""
     ""[bSrcType]"" */

void __thiscall FUN_102a6fc0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullEffectID]","%I64u",*param_1,param_1[1]);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iEffectType]",&DAT_11d9e0b4,param_1[2])
      , iVar1 == 0)) && (iVar1 = TdrText_FieldLabelChar(param_4,"[stPos]",extraout_ECX), iVar1 == 0)
     ) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if (((iVar1 == 0) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullOwnerID]","%I64u",param_1[6],
                                     param_1[7]), iVar1 == 0)) &&
       ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullSpawnTime]","%I64u",param_1[8],
                                     param_1[9]), iVar1 == 0 &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDurationTime]",&DAT_11d9e0b4,
                                     param_1[10]), iVar1 == 0)))) {
      TdrText_FieldScalar(param_2,param_3,param_4,"[bSrcType]","0x%02x",
                          *(undefined1 *)(param_1 + 0xb));
    }
  }
  return;
}



/* ===== FUN_102b1930 @ 102b1930  size=1073 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_ByteThenFloatSub, TdrText_ArrayHeader, TdrBuf_PutU8Z, TdrDebugFormat_VarsList16
// strings:
//   "[dwNetID]"
//   "[szEntityName]"
//   "[szClassName]"
//   "[stPose]"
//   "[iSubTypeID]"
//   "[bSync2CE]"
//   "0x%02x"
//   "[chSpawnType]"
//   "[iBone]"
//   "[dwHolder]"
//   "[dwOwner]"
//   "[iFaction]"
//   "[iRegionId]"
//   "[iDataLen]"
//   "[szUsrData]"
//   "%I64u"
//   "[ullEntGUID]"
//   "[szPropertityFile]"
//   "[nMHSpawnType]"
//   "[szBTState]"

/* [RE-AUTO c0]
   strings:
     ""[dwNetID]""
     ""[szEntityName]""
     ""[szClassName]""
     ""[stPose]""
     ""[iSubTypeID]""
     ""[bSync2CE]""
     ""0x%02x""
     ""[chSpawnType]""
     ""[iBone]""
     ""[dwHolder]"" */

int __thiscall FUN_102b1930(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwNetID]",&DAT_11d9f574,*param_1);
  if ((((iVar2 == 0) &&
       (iVar2 = TdrText_FieldValueFmt(param_4,"[szEntityName]",param_1 + 1), iVar2 == 0)) &&
      (iVar2 = TdrText_FieldValueFmt(param_4,"[szClassName]",param_1 + 9), iVar2 == 0)) &&
     (iVar2 = TdrText_FieldLabelChar(param_4,"[stPose]",extraout_ECX), iVar2 == 0)) {
    iVar2 = param_3;
    if (-1 < param_3) {
      iVar2 = param_3 + 1;
    }
    iVar2 = TdrDebugFormat_ByteThenFloatSub(param_2,iVar2,param_4);
    if (((((iVar2 == 0) &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iSubTypeID]",&DAT_11d9e0b4,
                                       param_1[0x18]), iVar2 == 0)) &&
         ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[bSync2CE]",&DAT_11d9e0b4,
                                       *(undefined1 *)(param_1 + 0x19)), iVar2 == 0 &&
          ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[chSpawnType]","0x%02x",
                                        (int)*(char *)((int)param_1 + 0x65)), iVar2 == 0 &&
           (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBone]",&DAT_11d9e0b4,
                                        *(undefined4 *)((int)param_1 + 0x66)), iVar2 == 0)))))) &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwHolder]",&DAT_11d9f574,
                                     *(undefined4 *)((int)param_1 + 0x6a)), iVar2 == 0)) &&
       ((((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwOwner]",&DAT_11d9f574,
                                       *(undefined4 *)((int)param_1 + 0x6e)), iVar2 == 0 &&
          (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iFaction]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x72)), iVar2 == 0)) &&
         (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iRegionId]",&DAT_11d9e0b4,
                                      *(undefined4 *)((int)param_1 + 0x76)), iVar2 == 0)) &&
        (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[iDataLen]",&DAT_11d9e0b4,
                                     *(undefined4 *)((int)param_1 + 0x7a)), iVar2 == 0)))) {
      iVar2 = *(int *)((int)param_1 + 0x7a);
      if (iVar2 < 0) {
        return -6;
      }
      if (100 < iVar2) {
        return -7;
      }
      iVar2 = TdrText_ArrayHeader(extraout_ECX_00,"[szUsrData]",iVar2,iVar2 >> 0x1f);
      if (iVar2 == 0) {
        if (0 < *(int *)((int)param_1 + 0x7a)) {
          iVar2 = 0;
          do {
            iVar3 = FUN_1010c010(param_2,&DAT_11d9f710,*(undefined1 *)((int)param_1 + iVar2 + 0x7e))
            ;
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)((int)param_1 + 0x7a));
        }
        iVar2 = TdrBuf_PutU8Z(param_4);
        if ((((iVar2 == 0) &&
             (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullEntGUID]","%I64u",
                                          *(undefined4 *)((int)param_1 + 0xe2),
                                          *(undefined4 *)((int)param_1 + 0xe6)), iVar2 == 0)) &&
            ((iVar2 = TdrText_FieldValueFmt(param_4,"[szPropertityFile]",(int)param_1 + 0xea),
             iVar2 == 0 &&
             ((iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nMHSpawnType]",&DAT_11d9e0b4,
                                           (int)*(short *)((int)param_1 + 0x12a)), iVar2 == 0 &&
              (iVar2 = TdrText_FieldValueFmt(param_4,"[szBTState]",param_1 + 0x4b), iVar2 == 0))))))
           && (iVar2 = TdrText_FieldLabelChar(param_4,"[stBBVars]",extraout_ECX_01), iVar2 == 0)) {
          iVar2 = param_3;
          if (-1 < param_3) {
            iVar2 = param_3 + 1;
          }
          iVar2 = TdrDebugFormat_VarsList16(param_2,iVar2,param_4);
          if ((iVar2 == 0) &&
             (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[wBuffSize]",&DAT_11d9e0b4,
                                          *(undefined2 *)((int)param_1 + 0xb6e)), iVar2 == 0)) {
            if (0x2800 < *(ushort *)((int)param_1 + 0xb6e)) {
              return -7;
            }
            iVar2 = TdrText_ArrayHeader(0x2800,"[szBuff]",*(ushort *)((int)param_1 + 0xb6e),0);
            if (iVar2 == 0) {
              if (*(short *)((int)param_1 + 0xb6e) != 0) {
                uVar1 = 0;
                do {
                  iVar2 = FUN_1010c010(param_2,&DAT_11d9f710,
                                       *(undefined1 *)(uVar1 + 0xb70 + (int)param_1));
                  if (iVar2 != 0) {
                    return iVar2;
                  }
                  uVar1 = uVar1 + 1;
                } while (uVar1 < *(ushort *)((int)param_1 + 0xb6e));
              }
              iVar2 = TdrBuf_PutU8Z(param_4);
              if ((iVar2 == 0) &&
                 (iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwParentID]",&DAT_11d9f574,
                                              param_1[0xcdc]), iVar2 == 0)) {
                iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[ullParentGUID]","%I64u",
                                            param_1[0xcdd],param_1[0xcde]);
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_102d1ac0 @ 102d1ac0  size=389 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldLabelChar, TdrDebugFormat_ByteThenFloatSub, TdrText_FieldValueFmt
// strings:
//   "[iTrapID]"
//   "0x%02x"
//   "[chSpawnType]"
//   "[stPose]"
//   "[stRotation]"
//   "[iBone]"
//   "[stOffset]"
//   "[dwHolder]"
//   "[szCEClassName]"
//   "[iParam]"

/* [RE-AUTO c0]
   strings:
     ""[iTrapID]""
     ""0x%02x""
     ""[chSpawnType]""
     ""[stPose]""
     ""[stRotation]""
     ""[iBone]""
     ""[stOffset]""
     ""[dwHolder]""
     ""[szCEClassName]""
     ""[iParam]"" */

void __thiscall FUN_102d1ac0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iTrapID]",&DAT_11d9e0b4,*param_1);
  if (((iVar1 == 0) &&
      (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[chSpawnType]","0x%02x",
                                   (int)*(char *)(param_1 + 1)), iVar1 == 0)) &&
     (iVar1 = TdrText_FieldLabelChar(param_4,"[stPose]",extraout_ECX), iVar1 == 0)) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stRotation]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102780d0(param_2,iVar1,param_4);
      if (((iVar1 == 0) &&
          (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[iBone]",&DAT_11d9e0b4,
                                       *(undefined4 *)((int)param_1 + 0x21)), iVar1 == 0)) &&
         (iVar1 = TdrText_FieldLabelChar(param_4,"[stOffset]",extraout_ECX_01), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = TdrDebugFormat_ByteThenFloatSub(param_2,iVar1,param_4);
        if (((iVar1 == 0) &&
            (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwHolder]",&DAT_11d9f574,
                                         *(undefined4 *)((int)param_1 + 0x41)), iVar1 == 0)) &&
           (iVar1 = TdrText_FieldValueFmt(param_4,"[szCEClassName]",(int)param_1 + 0x45), iVar1 == 0
           )) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[iParam]",&DAT_11d9e0b4,
                              *(undefined4 *)((int)param_1 + 0x6d));
        }
      }
    }
  }
  return;
}



/* ===== FUN_102ee200 @ 102ee200  size=1112 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar, TdrDebugFormat_ByteThenFloatSub, TdrDebugFormat_VarsList16, TdrText_ArrayElemLabel, TdrText_ArrayHeader, TdrBuf_PutU8Z
// strings:
//   "[iNetID]"
//   "[nSpawnType]"
//   "[iMonsterInfoID]"
//   "%I64u"
//   "[ullEntGUID]"
//   "[szName]"
//   "[szClass]"
//   "[stPose]"
//   "[iFaction]"
//   "[szBTState]"
//   "[stBBVars]"
//   "[bDead]"
//   "[stLcmState]"
//   "[nAttrCount]"
//   "[astAttrInit]"
//   "[iProjIdCount]"
//   "[astProjIds]"
//   "[nBuffSize]"
//   "[szBuff]"
//   "[ullParentGUID]"

/* [RE-AUTO c0]
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

int __thiscall FUN_102ee200(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
        iVar3 = FUN_102ed140(param_2,iVar3,param_4);
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



/* ===== FUN_102ef620 @ 102ef620  size=432 ===== */
// calls: TdrText_FieldScalar, TdrText_FieldValueFmt, TdrText_FieldLabelChar
// strings:
//   "%I64i"
//   "[llSyncTime]"
//   "[dwMonsterID]"
//   "[szPartName]"
//   "[szPartBoneName]"
//   "[szPartTemplate]"
//   "[dwSpawnFlag]"
//   "[stSpawnPoint]"
//   "[stSpawnDir]"
//   "[stSpawnVel]"
//   "0x%02x"
//   "[bHide]"

/* [RE-AUTO c0]
   strings:
     ""%I64i""
     ""[llSyncTime]""
     ""[dwMonsterID]""
     ""[szPartName]""
     ""[szPartBoneName]""
     ""[szPartTemplate]""
     ""[dwSpawnFlag]""
     ""[stSpawnPoint]""
     ""[stSpawnDir]""
     ""[stSpawnVel]"" */

void __thiscall FUN_102ef620(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[llSyncTime]","%I64i",*param_1,param_1[1]);
  if (((((iVar1 == 0) &&
        (iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwMonsterID]",&DAT_11d9f574,
                                     param_1[2]), iVar1 == 0)) &&
       (iVar1 = TdrText_FieldValueFmt(param_4,"[szPartName]",param_1 + 3), iVar1 == 0)) &&
      ((iVar1 = TdrText_FieldValueFmt(param_4,"[szPartBoneName]",(int)param_1 + 0x3e), iVar1 == 0 &&
       (iVar1 = TdrText_FieldValueFmt(param_4,"[szPartTemplate]",param_1 + 0x17), iVar1 == 0)))) &&
     ((iVar1 = TdrText_FieldScalar(param_2,param_3,param_4,"[dwSpawnFlag]",&DAT_11d9f574,
                                   *(undefined4 *)((int)param_1 + 0x7a)), iVar1 == 0 &&
      (iVar1 = TdrText_FieldLabelChar(param_4,"[stSpawnPoint]",extraout_ECX), iVar1 == 0)))) {
    iVar1 = param_3;
    if (-1 < param_3) {
      iVar1 = param_3 + 1;
    }
    iVar1 = FUN_102713d0(param_2,iVar1,param_4);
    if ((iVar1 == 0) &&
       (iVar1 = TdrText_FieldLabelChar(param_4,"[stSpawnDir]",extraout_ECX_00), iVar1 == 0)) {
      iVar1 = param_3;
      if (-1 < param_3) {
        iVar1 = param_3 + 1;
      }
      iVar1 = FUN_102713d0(param_2,iVar1,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = TdrText_FieldLabelChar(param_4,"[stSpawnVel]",extraout_ECX_01), iVar1 == 0)) {
        iVar1 = param_3;
        if (-1 < param_3) {
          iVar1 = param_3 + 1;
        }
        iVar1 = FUN_102713d0(param_2,iVar1,param_4);
        if (iVar1 == 0) {
          TdrText_FieldScalar(param_2,param_3,param_4,"[bHide]","0x%02x",
                              *(undefined1 *)((int)param_1 + 0xa2));
        }
      }
    }
  }
  return;
}



/* ===== FUN_10467d80 @ 10467d80  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10467d80(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x1c,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10467ea0 @ 10467ea0  size=153 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10467ea0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 != (int *)0x0) {
    local_8 = (**(code **)(*param_2 + 0xc))();
    uVar3 = (**(code **)(*param_2 + 0x18))(local_8,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar3);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x20,1);
  cVar2 = (**(code **)(*param_2 + 0x50))(param_1 + 0x1c,1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_2 + 8))();
    if (cVar2 == '\0') {
      uVar3 = FUN_11317f40();
    }
    else {
      uVar3 = FUN_11318b60();
    }
    iVar1 = *param_2;
    uVar3 = FUN_11317f30(uVar3,1);
    (**(code **)(iVar1 + 0x4c))(uVar3);
  }
  (**(code **)(*param_2 + 0x10))(local_8);
  return;
}



/* ===== FUN_10468ac0 @ 10468ac0  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10468ac0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x28,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10468b80 @ 10468b80  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10468b80(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x20,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10468c40 @ 10468c40  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10468c40(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x20,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10468d00 @ 10468d00  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10468d00(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x20,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10468dc0 @ 10468dc0  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10468dc0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x20,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10468e80 @ 10468e80  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10468e80(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x20,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10468f60 @ 10468f60  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10468f60(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x2c,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10469020 @ 10469020  size=76 ===== */
// strings:
//   "BT BlackBoard Fact"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard Fact"" */

void __thiscall FUN_10469020(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard Fact",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x20,1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_10469910 @ 10469910  size=282 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

uint FUN_10469910(void)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  float local_8;
  
  uVar2 = FUN_102611f0(&local_1c);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_102611f0(&local_28);
    if ((char)uVar2 != '\0') {
      cVar1 = FUN_11316b80(&DAT_11dbaa24);
      if (cVar1 == '\0') {
        uVar2 = FUN_11316b80(&DAT_11d9dcd4);
        if ((char)uVar2 == '\0') goto LAB_10469a23;
        local_10 = local_1c - (float)local_28;
        fStack_c = local_18 - local_28._4_4_;
        fVar3 = local_14 - local_20;
      }
      else {
        local_10 = local_1c + (float)local_28;
        fStack_c = local_18 + local_28._4_4_;
        fVar3 = local_14 + local_20;
      }
      local_8 = fVar3;
      if (((((uint)local_10 & 0x7f800000) == 0x7f800000) ||
          (((uint)fStack_c & 0x7f800000) == 0x7f800000)) ||
         (((uint)fVar3 & 0x7f800000) == 0x7f800000)) {
        _wassert(L"this->IsValid()",
                 L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
      }
      local_28 = CONCAT44(fStack_c,local_10);
      local_20 = fVar3;
      uVar2 = FUN_1025f590(&local_28);
      return uVar2;
    }
  }
LAB_10469a23:
  return uVar2 & 0xffffff00;
}



/* ===== FUN_1046a430 @ 1046a430  size=124 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

float * __fastcall FUN_1046a430(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2 + *param_3;
  param_1[1] = param_2[1] + param_3[1];
  param_1[2] = param_2[2] + param_3[2];
  if (((((uint)*param_1 & 0x7f800000) == 0x7f800000) ||
      (((uint)param_1[1] & 0x7f800000) == 0x7f800000)) ||
     (((uint)param_1[2] & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  return param_1;
}



/* ===== FUN_1046c210 @ 1046c210  size=84 ===== */
// strings:
//   "BT BlackBoard"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard"" */

void __thiscall FUN_1046c210(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(uVar2,"BT BlackBoard",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0x10,1);
  FUN_104716e0(param_1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  return;
}



/* ===== FUN_1046d000 @ 1046d000  size=273 ===== */
// strings:
//   "/Scripts/AI/BehaviorTree/"

/* [RE-AUTO c0]
   strings:
     ""/Scripts/AI/BehaviorTree/"" */

void __thiscall FUN_1046d000(int param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcStack_64;
  undefined1 auStack_54 [4];
  char **ppcStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 **ppuStack_38;
  undefined1 auStack_34 [20];
  undefined1 *puStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_54;
  pcVar1 = param_2;
  do {
    pcStack_64 = pcVar1;
    pcVar1 = pcStack_64 + 1;
  } while (*pcStack_64 != '\0');
  FUN_100d83d0(param_2);
  puStack_4c = &stack0xffffffa4;
  pcVar1 = *(char **)(DAT_123bb90c + 0x18);
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  puStack_48 = puStack_4c;
  FUN_100b62c0(*(char **)(DAT_123bb90c + 0x18),pcVar3);
  iVar2 = FUN_100f2140(auStack_34,&pcStack_64,"/Scripts/AI/BehaviorTree/");
  iVar2 = FUN_1046bea0(&puStack_4c,*(undefined4 *)(iVar2 + 0x14),param_2);
  if (iVar2 != param_1 + 0x7c) {
    FUN_100d83d0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x10));
  }
  if ((ppuStack_38 != &puStack_4c) && (ppuStack_38 != (undefined1 **)0x0)) {
    FUN_10c3d5d0(ppuStack_38);
  }
  if ((puStack_20 != auStack_34) && (puStack_20 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(puStack_20);
  }
  if ((ppcStack_50 != &pcStack_64) && (ppcStack_50 != (char **)0x0)) {
    FUN_10c3d5d0(ppcStack_50);
  }
  *(undefined4 *)(param_1 + 0x94) = param_3;
  FUN_104b9210(param_2,0);
  FUN_11a89daa();
  return;
}



/* ===== FUN_1046e830 @ 1046e830  size=194 ===== */
// strings:
//   "BT BlackBoard System"
//   "BT BlackBoard"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard System""
     ""BT BlackBoard"" */

void __thiscall FUN_1046e830(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 != (int *)0x0) {
    local_8 = (**(code **)(*param_2 + 0xc))();
    uVar1 = (**(code **)(*param_2 + 0x18))(local_8,"BT BlackBoard System",1);
    (**(code **)(*param_2 + 0x10))(uVar1);
  }
  (**(code **)(*param_2 + 0x4c))(param_1,0xac,1);
  uVar1 = (**(code **)(*param_2 + 0xc))();
  uVar2 = (**(code **)(*param_2 + 0x18))(uVar1,"BT BlackBoard",1);
  (**(code **)(*param_2 + 0x10))(uVar2);
  (**(code **)(*param_2 + 0x4c))(param_1 + 8,0x10,1);
  FUN_104716e0(param_1 + 8);
  (**(code **)(*param_2 + 0x10))(uVar1);
  FUN_10472560(param_1 + 0x20);
  FUN_104725c0(param_1 + 0x2c);
  FUN_10472680(param_1 + 0x50);
  (**(code **)(*param_2 + 0x10))(local_8);
  return;
}



/* ===== FUN_1046f700 @ 1046f700  size=118 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* WARNING: Removing unreachable block (ram,0x1046f758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

undefined8 * FUN_1046f700(void)

{
  _DAT_123c2c44 = _DAT_123c2c44 | 1;
  DAT_123c2c54 = 0;
  DAT_123c2c4c._4_4_ = 0;
  DAT_123c2c4c._0_4_ = 0;
  return &DAT_123c2c4c;
}



/* ===== FUN_1046f840 @ 1046f840  size=123 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h"
//   u"this->IsValid()"

/* [RE-AUTO c0]
   src: BTCry_Vector3.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h""
     "u"this->IsValid()"" */

uint * __thiscall FUN_1046f840(uint *param_1,uint param_2)

{
  uint in_XMM1_Da;
  uint in_XMM2_Da;
  uint in_XMM3_Da;
  
  *param_1 = in_XMM2_Da;
  param_1[1] = in_XMM3_Da;
  param_1[2] = param_2;
  if ((((*param_1 & 0x7f800000) == 0x7f800000) || ((param_1[1] & 0x7f800000) == 0x7f800000)) ||
     ((param_1[2] & 0x7f800000) == 0x7f800000)) {
    _wassert(L"this->IsValid()",
             L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/BTCry_Vector3.h",0x95);
  }
  param_1[3] = in_XMM1_Da;
  return param_1;
}



/* ===== FUN_10472500 @ 10472500  size=81 ===== */
// strings:
//   "BT BlackBoard"

/* [RE-AUTO c0]
   strings:
     ""BT BlackBoard"" */

void __thiscall FUN_10472500(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0xc))();
    uVar1 = (**(code **)(*param_1 + 0x18))(uVar2,"BT BlackBoard",1);
    (**(code **)(*param_1 + 0x10))(uVar1);
  }
  (**(code **)(*param_1 + 0x4c))(param_2,0x10,1);
  FUN_104716e0(param_2);
  (**(code **)(*param_1 + 0x10))(uVar2);
  return;
}



/* ===== FUN_1047b8a0 @ 1047b8a0  size=132 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_1047b8a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = param_2[1] + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  *(undefined4 **)(param_1 + 0x78) = param_2;
  if (param_2 != (undefined4 *)0x0) {
    piVar1 = param_2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_2)(1);
    }
    else if ((int)param_2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1047bfd0 @ 1047bfd0  size=514 ===== */
// calls: DeleteCriticalSection, _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: DeleteCriticalSection, _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_1047bfd0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *local_8;
  
  *param_1 = &PTR_FUN_11dbae18;
  local_8 = param_1;
  if (param_1[0x16] != 0) {
    FUN_10480560(param_1[0x13]);
    param_1[0x14] = param_1 + 0x12;
    param_1[0x13] = 0;
    param_1[0x15] = param_1 + 0x12;
    param_1[0x16] = 0;
  }
  puVar5 = (undefined4 *)param_1[0x11];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
    piVar2 = puVar5 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  param_1[0x11] = 0;
  puVar5 = (undefined4 *)param_1[0x22];
  if (puVar5 != param_1 + 0x20) {
    local_8 = param_1;
    do {
      FUN_1047f970(&local_8);
      puVar4 = (undefined4 *)puVar5[3];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)puVar5[1];
        if (puVar5 == (undefined4 *)puVar4[3]) {
          do {
            puVar5 = puVar4;
            puVar4 = (undefined4 *)puVar5[1];
          } while (puVar5 == (undefined4 *)puVar4[3]);
        }
        if ((undefined4 *)puVar5[3] != puVar4) {
          puVar5 = puVar4;
        }
      }
      else {
        for (puVar3 = (undefined4 *)puVar4[2]; puVar5 = puVar4, puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)puVar3[2]) {
          puVar4 = puVar3;
        }
      }
    } while (puVar5 != param_1 + 0x20);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  if (param_1[0x24] != 0) {
    FUN_10480600(param_1[0x21]);
    param_1[0x22] = param_1 + 0x20;
    param_1[0x21] = 0;
    param_1[0x23] = param_1 + 0x20;
    param_1[0x24] = 0;
  }
  puVar5 = (undefined4 *)param_1[0x1f];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
    piVar2 = puVar5 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  puVar5 = (undefined4 *)param_1[0x1e];
  if (puVar5 != (undefined4 *)0x0) {
    piVar2 = puVar5 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(1);
    }
    else if ((int)puVar5[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  FUN_104805b0();
  piVar2 = (int *)param_1[0x18];
  piVar6 = (int *)param_1[0x19];
  while (piVar6 != piVar2) {
    piVar6 = piVar6 + -1;
    puVar5 = (undefined4 *)*piVar6;
    if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
      piVar1 = puVar5 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(1);
      }
    }
  }
  if (param_1[0x18] != 0) {
    FUN_10c3d5d0(param_1[0x18]);
  }
  if (param_1[0x16] != 0) {
    FUN_10480560(param_1[0x13]);
    param_1[0x14] = param_1 + 0x12;
    param_1[0x13] = 0;
    param_1[0x15] = param_1 + 0x12;
    param_1[0x16] = 0;
  }
  puVar5 = (undefined4 *)param_1[0x11];
  if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 2) != '\0')) {
    piVar2 = puVar5 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  puVar5 = (undefined4 *)param_1[0xe];
  if ((puVar5 != param_1 + 9) && (puVar5 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puVar5);
  }
  puVar5 = (undefined4 *)param_1[8];
  if ((puVar5 != param_1 + 3) && (puVar5 != (undefined4 *)0x0)) {
    FUN_10c3d5d0(puVar5);
  }
  *param_1 = &PTR_FUN_11dbaa58;
  return;
}



/* ===== FUN_1047f010 @ 1047f010  size=50 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_1047f010(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      return;
    }
  }
  return;
}



/* ===== FUN_1047f060 @ 1047f060  size=85 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_1047f060(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = param_2;
      return param_1;
    }
  }
  *param_1 = param_2;
  return param_1;
}



/* ===== FUN_1047f0c0 @ 1047f0c0  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_1047f0c0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_10486530 @ 10486530  size=396 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_10486530(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_1046bc30(param_1[0x28],param_1[0x27]);
  if (param_1[0x27] != 0) {
    FUN_10c3d5d0(param_1[0x27]);
  }
  if (param_1[0x24] != 0) {
    FUN_10c3d5d0(param_1[0x24]);
  }
  if (param_1[0x21] != 0) {
    FUN_10c3d5d0(param_1[0x21]);
  }
  if (param_1[0x1d] != 0) {
    FUN_100d8360(param_1[0x1a]);
    param_1[0x1b] = param_1 + 0x19;
    param_1[0x1a] = 0;
    param_1[0x1c] = param_1 + 0x19;
    param_1[0x1d] = 0;
  }
  piVar1 = (int *)param_1[0x18];
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    else if (iVar2 < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  piVar1 = (int *)param_1[0x17];
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    else if (iVar2 < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  if (param_1[0x15] != 0) {
    FUN_104878e0(param_1[0x12]);
    param_1[0x13] = param_1 + 0x11;
    param_1[0x12] = 0;
    param_1[0x14] = param_1 + 0x11;
    param_1[0x15] = 0;
  }
  FUN_1048a240(param_1[0xf],param_1[0xe]);
  if (param_1[0xe] != 0) {
    FUN_10c3d5d0(param_1[0xe]);
  }
  if (param_1[0xc] != 0) {
    FUN_104878e0(param_1[9]);
    param_1[10] = param_1 + 8;
    param_1[9] = 0;
    param_1[0xb] = param_1 + 8;
    param_1[0xc] = 0;
  }
  if (param_1[6] != 0) {
    FUN_104878e0(param_1[3]);
    param_1[4] = param_1 + 2;
    param_1[3] = 0;
    param_1[5] = param_1 + 2;
    param_1[6] = 0;
  }
  *param_1 = &PTR_FUN_11dbac64;
  return;
}



/* ===== FUN_10486a80 @ 10486a80  size=90 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_10486a80(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    else if (piVar1[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_10486f00 @ 10486f00  size=91 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

int * __thiscall FUN_10486f00(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = *param_2;
  return param_1;
}



/* ===== FUN_104878e0 @ 104878e0  size=128 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_104878e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  while (param_1 != 0) {
    FUN_104878e0(*(undefined4 *)(param_1 + 0xc));
    piVar2 = *(int **)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 8);
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
      else if (piVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
    iVar4 = *(int *)(param_1 + 0x24);
    if ((iVar4 != param_1 + 0x10) && (iVar4 != 0)) {
      FUN_10c3d5d0(iVar4);
    }
    FUN_10c3d5d0(param_1);
    param_1 = iVar3;
  }
  return;
}



/* ===== FUN_104879a0 @ 104879a0  size=129 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void FUN_104879a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  while (param_1 != 0) {
    FUN_104879a0(*(undefined4 *)(param_1 + 0xc));
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      else if ((int)puVar2[1] < 0) {
        _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
      }
    }
    iVar4 = *(int *)(param_1 + 0x24);
    if ((iVar4 != param_1 + 0x10) && (iVar4 != 0)) {
      FUN_10c3d5d0(iVar4);
    }
    FUN_10c3d5d0(param_1);
    param_1 = iVar3;
  }
  return;
}



/* ===== FUN_10487ef0 @ 10487ef0  size=204 ===== */
// calls: _stricmp, _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _stricmp, _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __thiscall FUN_10487ef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [4];
  undefined1 local_24 [16];
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_1048aac0(param_2);
  if (iVar1 != param_1) {
    iVar2 = _stricmp(*(char **)(param_2 + 0x14),*(char **)(iVar1 + 0x24));
    if (-1 < iVar2) goto LAB_10487fa6;
  }
  local_14 = local_24;
  local_10 = local_14;
  FUN_100b62c0(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10));
  local_c = (undefined4 *)0x0;
  FUN_10488c40(local_28,iVar1,local_24);
  if (local_c != (undefined4 *)0x0) {
    iVar1 = local_c[1] + -1;
    local_c[1] = iVar1;
    if (iVar1 == 0) {
      (**(code **)*local_c)(1);
    }
    else if (iVar1 < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  if ((local_10 != local_24) && (local_10 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_10);
  }
LAB_10487fa6:
  FUN_11a89daa();
  return;
}



/* ===== FUN_10488100 @ 10488100  size=73 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_10488100(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
    else if (piVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((iVar3 != param_1) && (iVar3 != 0)) {
    FUN_10c3d5d0(iVar3);
  }
  return;
}



/* ===== FUN_10488160 @ 10488160  size=74 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_10488160(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    else if ((int)puVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((iVar3 != param_1) && (iVar3 != 0)) {
    FUN_10c3d5d0(iVar3);
  }
  return;
}



/* ===== FUN_10488900 @ 10488900  size=73 ===== */
// calls: _wassert
// strings:
//   u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"

/* [RE-AUTO c0]
   src: smartptr.h
   calls: _wassert
   strings:
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h"" */

void __fastcall FUN_10488900(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
    else if (piVar2[1] < 0) {
      _wassert(L"0",L"D:\\MHFC\\OpRelease\\Code\\Common\\BehaviorTree/CEShare/smartptr.h",0x18c);
    }
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if ((iVar3 != param_1) && (iVar3 != 0)) {
    FUN_10c3d5d0(iVar3);
  }
  return;
}



