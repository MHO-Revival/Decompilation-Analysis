/* ===== FUN_10835cb0 @ 10835cb0  size=3593 ===== */
// calls: sprintf
// strings:
//   "sys_show_damage_number"
//   "cl_MHFCCameraPitchControlByMouseZ"
//   "g_firstAtkRotEnable"
//   "r_Fullscreen"
//   "cl_ShowLocalPlayerNamePad"
//   "g_otherAtkRotEnable"
//   "pl_autoHolster"
//   "g_iCommonResetCameraType"
//   "g_iGunAimControlType"
//   "cl_ShowLocalPlayerTitle"
//   "r_ShowHrLevel"
//   "cl_invertMouse"
//   "cl_iEnableBothKeyAndPad"
//   "cl_iEnablePadHeadIcon"
//   "cl_fXICameraMoveHValue"
//   "cl_fXICameraMoveVValue"
//   "cl_fXIStickAimCameraMoveHValue"
//   "cl_fXIStickAimCameraMoveVValue"
//   "g_fGamepadMouseMoveSpeed"
//   "g_Gamepad_Feedback"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""sys_show_damage_number""
     ""cl_MHFCCameraPitchControlByMouseZ""
     ""g_firstAtkRotEnable""
     ""r_Fullscreen""
     ""cl_ShowLocalPlayerNamePad""
     ""g_otherAtkRotEnable""
     ""pl_autoHolster""
     ""g_iCommonResetCameraType""
     ""g_iGunAimControlType""
     ""cl_ShowLocalPlayerTitle"" */

void FUN_10835cb0(int **param_1,int param_2,int param_3,float param_4,int param_5)

{
  int **ppiVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float *pfStack_268;
  int *piStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  char *pcStack_254;
  int **ppiStack_250;
  float fStack_24c;
  float fStack_248;
  char *pcStack_244;
  char *pcStack_240;
  char *pcStack_23c;
  char *pcStack_238;
  char *pcStack_234;
  char *pcStack_230;
  char *pcStack_22c;
  char *pcStack_228;
  char *pcStack_224;
  char *pcStack_220;
  char *pcStack_21c;
  char *pcStack_218;
  char *pcStack_214;
  char *pcStack_210;
  char *pcStack_20c;
  char *pcStack_208;
  char *pcStack_204;
  char *pcStack_200;
  char *pcStack_1fc;
  char *pcStack_1f8;
  char *pcStack_1f4;
  char *pcStack_1f0;
  char *pcStack_1ec;
  char *pcStack_1e8;
  char *pcStack_1e4;
  char *pcStack_1e0;
  char *pcStack_1dc;
  char *pcStack_1d8;
  char *pcStack_1d4;
  char *pcStack_1d0;
  char *pcStack_1cc;
  char *pcStack_1c8;
  char *pcStack_1c4;
  char *pcStack_1c0;
  char *pcStack_1bc;
  char *pcStack_1b8;
  char *pcStack_1b4;
  char *pcStack_1b0;
  char *pcStack_1ac;
  char *pcStack_1a8;
  char *pcStack_1a4;
  int **ppiStack_1a0;
  int *piStack_19c;
  uint uStack_18c;
  int *piStack_188;
  uint uStack_184;
  int *piStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_164;
  char acStack_160 [8];
  int *piStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_148;
  float fStack_138;
  undefined4 uStack_130;
  char acStack_124 [4];
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  int **local_e0;
  int *piStack_d0;
  uint uStack_cc;
  int *piStack_c8;
  int *piStack_a8;
  uint uStack_a4;
  int *piStack_a0;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_18c;
  local_e0 = param_1;
  if ((((param_1 != (int **)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0.0 && (param_5 != 0)))) {
    if (((uint)param_1[1] >> 6 & 1) != 0) {
      piStack_19c = param_1[2];
      ppiStack_1a0 = param_1;
      pcStack_1a4 = (char *)0x10835d1e;
      (**(code **)(**param_1 + 8))();
      *param_1 = (int *)0x0;
    }
    iVar7 = DAT_1202e818;
    param_1[1] = (int *)0x2;
    *(undefined1 *)(param_1 + 2) = 0;
    piStack_19c = (int *)0x11dcdf00;
    ppiStack_1a0 = (int **)0x10835d41;
    piVar5 = (int *)(**(code **)(**(int **)(iVar7 + 0x2c) + 0x54))();
    ppiStack_1a0 = (int **)0x10835d48;
    uVar6 = (**(code **)(*piVar5 + 8))();
    ppiStack_1a0 = (int **)0x11dcdedc;
    pcStack_1a4 = (char *)0x10835d5d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1a4 = (char *)0x10835d64;
    uStack_110 = (**(code **)(*piVar5 + 8))();
    pcStack_1a4 = "g_firstAtkRotEnable";
    pcStack_1a8 = (char *)0x10835d7e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1a8 = (char *)0x10835d85;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1a8 = "r_Fullscreen";
    pcStack_1ac = (char *)0x10835d9f;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1ac = (char *)0x10835da6;
    DAT_123bb9f4 = (**(code **)(*piVar5 + 8))();
    pcStack_1ac = "cl_ShowLocalPlayerNamePad";
    pcStack_1b0 = (char *)0x10835dbd;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b0 = (char *)0x10835dc4;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1b0 = "g_otherAtkRotEnable";
    pcStack_1b4 = (char *)0x10835dde;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b4 = (char *)0x10835de5;
    uStack_f0 = (**(code **)(*piVar5 + 8))();
    pcStack_1b4 = "pl_autoHolster";
    pcStack_1b8 = (char *)0x10835dff;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1b8 = (char *)0x10835e06;
    uStack_f8 = (**(code **)(*piVar5 + 8))();
    pcStack_1b8 = "g_iCommonResetCameraType";
    pcStack_1bc = (char *)0x10835e20;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1bc = (char *)0x10835e27;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1bc = "g_iGunAimControlType";
    pcStack_1c0 = (char *)0x10835e3e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c0 = (char *)0x10835e45;
    uStack_154 = (**(code **)(*piVar5 + 8))();
    pcStack_1c0 = "cl_ShowLocalPlayerTitle";
    pcStack_1c4 = (char *)0x10835e5c;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c4 = (char *)0x10835e63;
    uStack_118 = (**(code **)(*piVar5 + 8))();
    pcStack_1c4 = "r_ShowHrLevel";
    pcStack_1c8 = (char *)0x10835e7d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1c8 = (char *)0x10835e84;
    uStack_114 = (**(code **)(*piVar5 + 8))();
    pcStack_1c8 = "cl_invertMouse";
    pcStack_1cc = (char *)0x10835e9e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1cc = (char *)0x10835ea5;
    uStack_164 = (**(code **)(*piVar5 + 8))();
    pcStack_1cc = "cl_iEnableBothKeyAndPad";
    piStack_188 = (int *)0x0;
    pcStack_1d0 = (char *)0x10835ec4;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1d0 = "cl_iEnableBothKeyAndPad";
      pcStack_1d4 = (char *)0x10835eda;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1d4 = (char *)0x10835ee1;
      uStack_18c = (**(code **)(*piVar5 + 8))();
    }
    pcStack_1d0 = "cl_iEnablePadHeadIcon";
    pcStack_1d4 = (char *)0x10835f00;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1d4 = "cl_iEnablePadHeadIcon";
      pcStack_1d8 = (char *)0x10835f16;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1d8 = (char *)0x10835f1d;
      (**(code **)(*piVar5 + 8))();
    }
    pcStack_1d4 = "cl_fXICameraMoveHValue";
    pcStack_1d8 = (char *)0x10835f34;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1d8 = (char *)0x10835f3b;
    uStack_130 = (**(code **)(*piVar5 + 8))();
    pcStack_1d8 = "cl_fXICameraMoveVValue";
    pcStack_1dc = (char *)0x10835f55;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1dc = (char *)0x10835f5c;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1dc = "cl_fXIStickAimCameraMoveHValue";
    pcStack_1e0 = (char *)0x10835f73;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e0 = (char *)0x10835f7a;
    uStack_118 = (**(code **)(*piVar5 + 8))();
    pcStack_1e0 = "cl_fXIStickAimCameraMoveVValue";
    pcStack_1e4 = (char *)0x10835f94;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e4 = (char *)0x10835f9b;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1e4 = "g_fGamepadMouseMoveSpeed";
    pcStack_1e8 = (char *)0x10835fb2;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1e8 = (char *)0x10835fbb;
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    pcStack_1e8 = "g_Gamepad_Feedback";
    fStack_138 = (float)fVar9;
    pcStack_1ec = (char *)0x10835fd4;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1ec = (char *)0x10835fdb;
    uStack_16c = (**(code **)(*piVar5 + 8))();
    pcStack_1ec = "g_DInputKeyboard";
    pcStack_1ac = (char *)0x0;
    pcStack_1f0 = (char *)0x10835ffd;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1f0 = "g_DInputKeyboard";
      pcStack_1f4 = (char *)0x10836013;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1f4 = (char *)0x1083601a;
      pcStack_1b0 = (char *)(**(code **)(*piVar5 + 8))();
    }
    pcStack_1f0 = "g_UseEmbeddedIME";
    pcStack_1b8 = (char *)0x0;
    pcStack_1f4 = (char *)0x10836039;
    iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    if (iVar7 != 0) {
      pcStack_1f4 = "g_UseEmbeddedIME";
      pcStack_1f8 = (char *)0x1083604f;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
      pcStack_1f8 = (char *)0x10836056;
      pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    }
    pcStack_1f4 = "g_refuseTeamInvite";
    pcStack_1f8 = (char *)0x1083606d;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1f8 = (char *)0x10836074;
    uStack_10c = (**(code **)(*piVar5 + 8))();
    pcStack_1f8 = "g_FriendRemind";
    pcStack_1fc = (char *)0x1083608e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_1fc = (char *)0x10836095;
    pcStack_1b4 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_1fc = "g_refuseTradeRequest";
    pcStack_200 = (char *)0x108360ac;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_200 = (char *)0x108360b3;
    uStack_148 = (**(code **)(*piVar5 + 8))();
    pcStack_200 = "g_refuseTeamRequest";
    pcStack_204 = (char *)0x108360cd;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_204 = (char *)0x108360d4;
    uStack_174 = (**(code **)(*piVar5 + 8))();
    pcStack_204 = "g_GuilderRemind";
    pcStack_208 = (char *)0x108360ee;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_208 = (char *)0x108360f5;
    uStack_120 = (**(code **)(*piVar5 + 8))();
    pcStack_208 = "g_OtherGuildName";
    pcStack_20c = (char *)0x1083610f;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_20c = (char *)0x10836116;
    uStack_174 = (**(code **)(*piVar5 + 8))();
    pcStack_20c = "g_selfGuildName";
    pcStack_210 = (char *)0x10836130;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_210 = (char *)0x10836137;
    pcStack_1c4 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_210 = "e_ChatDialogRendering";
    pcStack_214 = (char *)0x1083614e;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_214 = (char *)0x10836155;
    pcStack_1c0 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_214 = "g_refuseGuildRequest";
    pcStack_218 = (char *)0x1083616c;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_218 = (char *)0x10836173;
    pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_218 = "g_refuseClanRequest";
    pcStack_21c = (char *)0x1083618a;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_21c = (char *)0x10836191;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_21c = "cl_ShowPlayerNamePadMode";
    pcStack_220 = (char *)0x108361a8;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_220 = (char *)0x108361af;
    piStack_180 = (int *)(**(code **)(*piVar5 + 8))();
    pcStack_220 = "cl_ShowHeroNamePadMode";
    pcStack_224 = (char *)0x108361c9;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_224 = (char *)0x108361d0;
    pcStack_1cc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_224 = "cl_ShowPlayerPetName";
    pcStack_228 = (char *)0x108361e7;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_228 = (char *)0x108361ee;
    fStack_138 = (float)(**(code **)(*piVar5 + 8))();
    pcStack_228 = "cl_ShowHeroPetName";
    pcStack_22c = (char *)0x10836208;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_22c = (char *)0x1083620f;
    pcStack_1cc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_22c = "cl_ShowBossDeadGlow";
    pcStack_230 = (char *)0x10836226;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_230 = (char *)0x1083622d;
    pcStack_1bc = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_230 = "g_NPCName_hide";
    pcStack_234 = (char *)0x10836244;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_234 = (char *)0x1083624b;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_234 = "cl_TaskTraceMode";
    pcStack_238 = (char *)0x10836262;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_238 = (char *)0x10836269;
    pcStack_1ac = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_238 = "g_hideEmoji";
    pcStack_23c = (char *)0x10836283;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_23c = (char *)0x1083628a;
    pcStack_1b8 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_23c = "r_HideC2PlaeyerEffect";
    pcStack_240 = (char *)0x108362a4;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_240 = (char *)0x108362ab;
    pcStack_210 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_240 = "r_HideSelfPlaeyerEffect";
    pcStack_244 = (char *)0x108362c2;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    pcStack_244 = (char *)0x108362c9;
    pcStack_210 = (char *)(**(code **)(*piVar5 + 8))();
    pcStack_244 = "cl_iHideBreakEffect";
    fStack_248 = 5.182273e-29;
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))();
    fStack_248 = 5.182277e-29;
    pcStack_21c = (char *)(**(code **)(*piVar5 + 8))();
    fStack_248 = param_4;
    fStack_24c = 5.1822875e-29;
    FUN_104f4330();
    ppiStack_250 = &piStack_180;
    piStack_180 = (int *)0x0;
    uStack_17c = 0;
    pcStack_1c4 = (char *)CONCAT31(pcStack_1c4._1_3_,((byte)uStack_154 & 0x8f) == 10);
    fStack_24c = (float)pcStack_1c4;
    pcStack_254 = "SWITCH_CLASS_NAME";
    uStack_258 = uStack_150;
    uStack_25c = 0x10836351;
    cVar2 = (**(code **)(*piStack_158 + 0x10))();
    piStack_264 = (int *)0x0;
    if (((cVar2 != '\0') && (((byte)uStack_18c & 0x8f) == 6)) &&
       (piStack_264 = piStack_188, (uStack_18c >> 6 & 1) != 0)) {
      piStack_264 = (int *)*piStack_188;
    }
    uStack_25c = 0;
    uStack_260 = 0;
    pfStack_268 = &fStack_248;
    fStack_248 = 0.0;
    pcStack_244 = (char *)0x0;
    FUN_11a98de0();
    FUN_104d1550("isShowDamageNum",uVar6);
    FUN_104d1550("isMouseWheelControlCamera",pcStack_1d8);
    FUN_104d1550("isCamereFollowAction",pcStack_1d0);
    FUN_104d15e0("isWindowsMode",DAT_123bb9f4 == 0);
    FUN_104d1550("isShowSelf",pcStack_1c8);
    FUN_104d1550("unisCamereFollowAction",pcStack_1a8);
    FUN_104d1550("g_iCommonResetCameraType",pcStack_21c);
    FUN_104d1550("autoHolster",pcStack_1ac);
    if ((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0x2c) != 0)) {
      iVar8 = 1;
      iVar7 = DAT_1202e818;
      do {
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x2c) != 0)) {
          sprintf(acStack_160,"g_Gamepad_WeaponType_%d",iVar8);
          piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))(acStack_160);
          uVar6 = (**(code **)(*piVar5 + 8))();
          sprintf(acStack_124,"weapon_type_%d",iVar8);
          FUN_104d1550(acStack_124,uVar6);
          iVar7 = DAT_1202e818;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xd);
    }
    FUN_104d1550("g_playerTitleType",pcStack_214);
    FUN_104d1550("g_otherPlayerTitleType",pcStack_1cc);
    FUN_104d1550("g_hideSelfCat",pcStack_20c);
    FUN_104d1550("g_hideOtherCat",uStack_17c);
    FUN_104d1550("gamePad_cameraReversal",pcStack_204);
    FUN_104d1550("gamePad_disableMouse",pcStack_228);
    FUN_104d1550("gamePad_HeadIcon",pcStack_230);
    FUN_104d1550("gamePad_cameraHorizon",pcStack_1c4);
    FUN_104d1550("gamePad_cameraVertical",pcStack_1fc);
    FUN_104d1550("gamePad_foucsHorizon",pcStack_1a4);
    FUN_104d1550("gamePad_fouceVertical",pcStack_1f4);
    FUN_104d14d0("gamePad_mouseSpeed");
    FUN_104d1550("gamePad_Shake",pcStack_1ec);
    FUN_104d1550("g_useKeyboardCapable",pcStack_22c);
    FUN_104d1550("g_useInputPadCapable",pcStack_234);
    FUN_104d1550("g_refuseTeamInvite",piStack_180);
    FUN_104d1550("g_FriendRemind",pcStack_224);
    FUN_104d1550("g_refuseTradeRequest",pcStack_1b4);
    FUN_104d1550("g_refuseTeamRequest",pcStack_1dc);
    FUN_104d1550("g_GuilderRemind",uStack_184);
    FUN_104d1550("g_OtherGuildName",pcStack_1d4);
    FUN_104d1550("g_selfGuildName",pcStack_220);
    FUN_104d1550("g_popChat",pcStack_218);
    FUN_104d1550("g_refuseGuildRequest",pcStack_210);
    FUN_104d1550("g_refuseClanRequest",pcStack_208);
    FUN_104d1550("gunAim_ControlType",pcStack_200);
    FUN_104d1550("hideCapture",pcStack_1f8);
    FUN_104d1550("hideNpc",pcStack_1f0);
    FUN_104d1550("hideEmoji",pcStack_1e8);
    FUN_104d1550("taskTraceMode",pcStack_1e0);
    FUN_104d1550("hidetrailother",pcStack_23c);
    FUN_104d1550("hidetrailself",pcStack_238);
    FUN_104d1550("hideBreakEffect",pcStack_240);
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("i_mouse_accel");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    pcStack_244 = (char *)(float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouse");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("i_mouse_accel_v");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    fStack_248 = (float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouseV");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_MHFpsRotSpeed");
    fVar9 = (float10)(**(code **)(*piVar5 + 0xc))();
    fStack_24c = (float)(fVar9 * (float10)DAT_11de9a30);
    FUN_104d14d0("mouseJ");
    piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("cl_invertMouse");
    uVar6 = (**(code **)(*piVar5 + 8))();
    FUN_104d1550("i_mouse_accel_v_reverse",uVar6);
    (**(code **)(*piStack_188 + 0x14))
              (piStack_180,"switchVO",&pfStack_268,((byte)uStack_184 & 0x8f) == 10);
    FUN_113f3640();
    iVar7 = FUN_1115abd0();
    if (iVar7 == 0) {
      FUN_104d15e0("hidefashion",1);
      FUN_104d15e0("hidetaojian",1);
      uVar6 = 1;
    }
    else {
      piVar5 = (int *)(iVar7 + 0x25ddc);
      uVar3 = (**(code **)(*piVar5 + 4))();
      uStack_260 = CONCAT31(uStack_260._1_3_,uVar3);
      uVar4 = (**(code **)(*piVar5 + 0xc))();
      uStack_258 = CONCAT31(uStack_258._1_3_,uVar4);
      DAT_123bb9f1 = (**(code **)(*piVar5 + 0x14))();
      uStack_25c = CONCAT31(uStack_25c._1_3_,DAT_123bb9f1);
      DAT_123bb96b = uVar4;
      DAT_123bb9f0 = uVar3;
      FUN_104d15e0("hidefashion",uStack_260);
      FUN_104d15e0("hidetaojian",uStack_258);
      uVar6 = uStack_25c;
    }
    FUN_104d15e0("hidehelmet",uVar6);
    FUN_104d15e0("hidetitle",pcStack_1e0 == (char *)0x0);
    FUN_104d15e0("hideHRLevel",pcStack_1d8 == (char *)0x0);
    ppiVar1 = local_e0;
    if (((uint)local_e0[1] >> 6 & 1) != 0) {
      piStack_19c = local_e0[2];
      ppiStack_1a0 = local_e0;
      pcStack_1a4 = (char *)0x108369fe;
      (**(code **)(**local_e0 + 8))();
      *ppiVar1 = (int *)0x0;
    }
    ppiVar1[1] = (int *)0x2;
    *(undefined1 *)(ppiVar1 + 2) = 1;
    if ((uStack_184 >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_188;
      piStack_19c = piStack_180;
      pcStack_1a4 = (char *)0x10836a2c;
      (**(code **)(*piStack_188 + 8))();
      piStack_188 = (int *)0x0;
    }
    uStack_184 = 0;
    if ((uStack_cc >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_d0;
      piStack_19c = piStack_c8;
      pcStack_1a4 = (char *)0x10836a65;
      (**(code **)(*piStack_d0 + 8))();
      piStack_d0 = (int *)0x0;
    }
    uStack_cc = 0;
    if ((uStack_a4 >> 6 & 1) != 0) {
      ppiStack_1a0 = &piStack_a8;
      piStack_19c = piStack_a0;
      pcStack_1a4 = (char *)0x10836aa4;
      (**(code **)(*piStack_a8 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10836b50 @ 10836b50  size=1346 ===== */
// strings:
//   "g_refuseTeamInvite"
//   "g_FriendRemind"
//   "r_HideSelfPlaeyerEffect"
//   "r_HideC2PlaeyerEffect"
//   "g_refuseClanRequest"
//   "g_refuseGuildRequest"
//   "g_refuseTradeRequest"
//   "g_refuseTeamRequest"
//   "g_GuilderRemind"
//   "cl_ShowPlayerNamePadMode"
//   "cl_ShowHeroNamePadMode"
//   "cl_ShowPlayerPetName"
//   "cl_ShowHeroPetName"
//   "cl_ShowBossDeadGlow"
//   "g_NPCName_hide"
//   "g_hideEmoji"
//   "cl_TaskTraceMode"
//   "g_DInputKeyboard"
//   "g_UseEmbeddedIME"
//   "cl_iHideBreakEffect"

/* [RE-AUTO c0]
   strings:
     ""g_refuseTeamInvite""
     ""g_FriendRemind""
     ""r_HideSelfPlaeyerEffect""
     ""r_HideC2PlaeyerEffect""
     ""g_refuseClanRequest""
     ""g_refuseGuildRequest""
     ""g_refuseTradeRequest""
     ""g_refuseTeamRequest""
     ""g_GuilderRemind""
     ""cl_ShowPlayerNamePadMode"" */

void FUN_10836b50(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  
  uVar1 = *(undefined1 *)(param_3 + 0x28);
  uVar2 = *(undefined1 *)(param_3 + 0x38);
  uVar3 = *(undefined1 *)(param_3 + 0x48);
  uVar18 = *(undefined4 *)(param_3 + 0x58);
  uVar19 = *(undefined4 *)(param_3 + 0x68);
  uVar4 = *(undefined1 *)(param_3 + 0x78);
  cVar5 = *(char *)(param_3 + 0x88);
  uVar6 = *(undefined1 *)(param_3 + 0x98);
  uVar7 = *(undefined1 *)(param_3 + 8);
  uVar8 = *(undefined1 *)(param_3 + 0x18);
  uVar9 = *(undefined1 *)(param_3 + 0x138);
  uVar10 = *(undefined1 *)(param_3 + 0xa8);
  cVar11 = *(char *)(param_3 + 0xb8);
  cVar12 = *(char *)(param_3 + 200);
  cVar13 = *(char *)(param_3 + 0xd8);
  iVar23 = *(int *)(param_3 + 0xe8);
  uVar14 = *(undefined1 *)(param_3 + 0xf8);
  uVar15 = *(undefined1 *)(param_3 + 0x108);
  uVar16 = *(undefined1 *)(param_3 + 0x118);
  uVar17 = *(undefined1 *)(param_3 + 0x128);
  param_3 = (uint)*(byte *)(param_3 + 0x148);
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTeamInvite");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar7);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_FriendRemind");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar8);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("r_HideSelfPlaeyerEffect");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar9);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("r_HideC2PlaeyerEffect");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar17);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseClanRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar10);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseGuildRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar6);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTradeRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar1);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_refuseTeamRequest");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar2);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_GuilderRemind");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar3);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowPlayerNamePadMode");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar19);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowHeroNamePadMode");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar18);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowPlayerPetName");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar11 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowHeroPetName");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar5 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_ShowBossDeadGlow");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar12 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_NPCName_hide");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(cVar13 == '\0');
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_hideEmoji");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar16);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  bVar24 = false;
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_TaskTraceMode");
  if (piVar21 != (int *)0x0) {
    iVar22 = (**(code **)(*piVar21 + 8))();
    bVar24 = iVar22 != iVar23;
    (**(code **)(*piVar21 + 0x14))(iVar23);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_DInputKeyboard");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar14);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("g_UseEmbeddedIME");
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(uVar15);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("cl_iHideBreakEffect");
  uVar20 = param_3;
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x14))(param_3);
    (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
  }
  piVar21 = (int *)(**(code **)(**(int **)(DAT_1202e818[0x34] + 0x90) + 0xb4))();
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0x3b0))();
    FUN_11167fd0(uVar20 == 0);
    piVar21 = (int *)(**(code **)(*(int *)DAT_1202e818[0xb] + 0x54))("e_ChatDialogRendering");
    if (piVar21 != (int *)0x0) {
      (**(code **)(*piVar21 + 0x14))(uVar4);
      (**(code **)(*(int *)*DAT_1202e818 + 0x21c))();
    }
    if ((bVar24) && (iVar23 = FUN_10d17440(), iVar23 != 0)) {
      FUN_10d17440();
      iVar23 = FUN_10d17870();
      if (iVar23 != 0) {
        FUN_10d17440();
        piVar21 = (int *)FUN_10d17870();
        (**(code **)(*piVar21 + 4))(0x231,(int)&param_3 + 3);
      }
    }
  }
  return;
}



/* ===== FUN_10840690 @ 10840690  size=2303 ===== */
// calls: CPet::SetName, CItemBaseInfo::ResolveRewardAmount, _snprintf
// strings:
//   "hunterRankLimit"
//   "hunterRankValid"
//   "friendValid"
//   "saleItemNumber"
//   "isBindMoney"
//   "moneyCount"
//   "allMoneyValue"
//   "friendName"
//   "friendRankName"
//   "saleBindType"
//   "saleIsBind"
//   "specialPoint%dValue"
//   "specialPoint1Value"
//   "specialPoint%dType"
//   "specialPoint1Type"
//   "specialPoint%dName"
//   "specialPoint1Name"
//   "arrayExchangeItem"
//   "itemName"
//   "itemCount"

/* WARNING: Removing unreachable block (ram,0x10840b24) */
/* WARNING: Removing unreachable block (ram,0x10840bea) */
/* WARNING: Removing unreachable block (ram,0x10840bee) */
/* WARNING: Removing unreachable block (ram,0x10840bf7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: _snprintf
   strings:
     ""hunterRankLimit""
     ""hunterRankValid""
     ""friendValid""
     ""saleItemNumber""
     ""isBindMoney""
     ""moneyCount""
     ""allMoneyValue""
     ""friendName""
     ""friendRankName""
     ""saleBindType"" */

void FUN_10840690(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int in_stack_00000010;
  int in_stack_00000014;
  int **ppiStack_d8;
  int *piStack_d4;
  undefined1 auStack_c4 [4];
  int *local_c0;
  int *local_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  undefined4 *local_ac;
  int *piStack_a8;
  int **ppiStack_a4;
  int *local_a0;
  uint local_9c;
  int *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [4];
  int iStack_88;
  int *piStack_84;
  int *piStack_80;
  int iStack_7c;
  int **ppiStack_78;
  int *piStack_74;
  int *piStack_70;
  uint uStack_6c;
  int *piStack_68;
  int iStack_60;
  undefined1 auStack_5c [4];
  int iStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  undefined1 auStack_3c [16];
  int **ppiStack_2c;
  int **ppiStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_c4;
  if (in_stack_00000014 == 4) {
    uVar2 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
    if ((uVar2 == 3) || (uVar2 == 4)) {
      local_bc = *(int **)(in_stack_00000010 + 8);
    }
    else {
      local_bc = (int *)0xdeadbeaf;
    }
    uVar2 = *(uint *)(in_stack_00000010 + 0x1c) & 0x8f;
    if ((uVar2 == 3) || (uVar2 == 4)) {
      local_c0 = *(int **)(in_stack_00000010 + 0x20);
    }
    else {
      local_c0 = (int *)0xdeadbeaf;
    }
    local_9c = *(uint *)(in_stack_00000010 + 0x34);
    local_94 = *(undefined4 *)(in_stack_00000010 + 0x3c);
    piStack_d4 = *(int **)(in_stack_00000010 + 0x38);
    local_90 = *(undefined4 *)(in_stack_00000010 + 0x40);
    local_a0 = (int *)0x0;
    local_98 = piStack_d4;
    if ((local_9c >> 6 & 1) != 0) {
      local_a0 = *(int **)(in_stack_00000010 + 0x30);
      ppiStack_d8 = &local_a0;
      (**(code **)(*local_a0 + 4))();
    }
    if (((byte)*(uint *)(in_stack_00000010 + 0x4c) & 0x8f) == 6) {
      local_ac = *(undefined4 **)(in_stack_00000010 + 0x50);
      if ((*(uint *)(in_stack_00000010 + 0x4c) >> 6 & 1) != 0) {
        local_ac = (undefined4 *)*local_ac;
      }
    }
    else {
      local_ac = (undefined4 *)&DAT_11d9d32b;
    }
    piStack_d4 = (int *)&DAT_11d9d32b;
    piStack_80 = (int *)0x0;
    piStack_b0 = (int *)0x0;
    ppiStack_d8 = (int **)0x10840788;
    CPet__SetName();
    ppiStack_d8 = (int **)&DAT_11d9d32b;
    local_ac = (undefined4 *)0x0;
    CPet__SetName();
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
      piStack_d4 = (int *)0x108407d0;
      piVar3 = (int *)(**(code **)(*piVar3 + 0xb4))();
      if ((piVar3 != (int *)0x0) && (piStack_b8 = (int *)piVar3[0xabf], piStack_b8 != (int *)0x0)) {
        piStack_d4 = local_bc;
        ppiStack_d8 = (int **)0x108407f5;
        iVar4 = FUN_1052c2d0();
        if (iVar4 != 0) {
          piStack_d4 = local_c0;
          ppiStack_d8 = (int **)0x1084080b;
          ppiVar5 = (int **)FUN_117dadb0();
          ppiStack_a4 = ppiVar5;
          if (ppiVar5 != (int **)0x0) {
            piStack_74 = ppiVar5[0x11];
            piStack_b4 = ppiVar5[0x10];
            iStack_7c = 0;
            piStack_d4 = (int *)0x10840839;
            iVar4 = (**(code **)(*piVar3 + 0x46c))();
            if (iVar4 != 0) {
              piStack_d4 = (int *)0x10840847;
              piVar6 = (int *)(**(code **)(*piVar3 + 0x46c))();
              piStack_d4 = (int *)0x1084084e;
              iStack_7c = (**(code **)(*piVar6 + 0x18))();
            }
            piVar6 = piStack_b4;
            iStack_88 = piVar3[0xab0];
            if (iStack_88 != 0) {
              piStack_d4 = piStack_b4;
              ppiStack_d8 = (int **)0x1084086e;
              ppiStack_78 = (int **)FUN_104d8bb0();
              piStack_d4 = piVar6;
              ppiStack_d8 = (int **)0x1084087b;
              piStack_84 = (int *)FUN_104d88b0();
              if (ppiStack_78 != (int **)0x0) {
                piStack_d4 = piStack_b4;
                ppiStack_d8 = (int **)0x1084089b;
                piStack_84 = (int *)FUN_115099f0();
                ppiStack_d8 = ppiStack_78;
                puVar7 = (undefined4 *)FUN_117302b0(auStack_8c);
                puVar10 = &DAT_11d9d32b;
                if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
                  puVar10 = (undefined1 *)*puVar7;
                }
                CPet__SetName(puVar10);
                FUN_100e5670();
              }
              if (piStack_84 != (int *)0x0) {
                piStack_d4 = (int *)&DAT_11d9d32b;
                if ((undefined1 *)piStack_84[4] != (undefined1 *)0x0) {
                  piStack_d4 = (int *)piStack_84[4];
                }
                ppiStack_d8 = (int **)0x108408e7;
                CPet__SetName();
              }
            }
            piStack_d4 = ppiVar5[10];
            ppiStack_d8 = (int **)0x108408ef;
            piStack_84 = (int *)FUN_10254130();
            if (piStack_84 != (int *)0x0) {
              piStack_d4 = ppiVar5[0xe];
              ppiStack_d8 = (int **)0x11dcf540;
              FUN_104d1550();
              FUN_104d15e0("hunterRankValid",(int)ppiVar5[0xe] <= iStack_7c);
              FUN_104d15e0("friendValid",(int)piStack_74 <= (int)piStack_80);
              FUN_104d1550("saleItemNumber",ppiVar5[0xb]);
              FUN_104d15e0("isBindMoney",*(char *)(ppiVar5 + 0xd) == '\0');
              piStack_d4 = ppiVar5[0xb];
              ppiStack_d8 = ppiVar5;
              uVar8 = FUN_114b74e0();
              uVar9 = FUN_114b74e0(ppiVar5,1);
              uVar9 = FUN_10841be0(uVar9);
              uVar8 = FUN_10841be0(uVar8);
              FUN_104d1550("moneyCount",uVar9);
              FUN_104d1550("allMoneyValue",uVar8);
              iStack_58._0_1_ = 0;
              piStack_48 = &iStack_58;
              piStack_44 = piStack_48;
              FUN_100e5aa0(piStack_48);
              FUN_104d1670("friendName",piStack_48);
              if ((piStack_48 != (int *)auStack_5c) && (piStack_48 != (int *)0x0)) {
                FUN_10c3d5d0(piStack_48);
              }
              piStack_4c = (int *)auStack_5c;
              auStack_5c[0] = 0;
              piStack_48 = piStack_4c;
              FUN_100e5aa0(piStack_4c);
              FUN_104d1670("friendRankName",piStack_4c);
              if ((piStack_4c != &iStack_60) && (piStack_4c != (int *)0x0)) {
                FUN_10c3d5d0(piStack_4c);
              }
              piVar3 = local_bc;
              uVar8 = CItemBaseInfo__ResolveRewardAmount(local_9c,local_bc[0x14]);
              FUN_104d1550("saleBindType",uVar8);
              FUN_104d15e0("saleIsBind",0);
              ppiStack_d8 = (int **)0x1;
              iVar4 = 0;
              do {
                piStack_d4 = (int *)0x0;
                CPet__SetName(&DAT_11d9d32b);
                FUN_108418c0(&stack0xffffff30,&ppiStack_d8);
                if (piStack_d4 != (int *)0x0) {
                  FUN_10c3da30(piStack_d4);
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < 0xd);
              iStack_88 = 0;
              piStack_84 = (int *)0x0;
              local_bc = (int *)CONCAT31(local_bc._1_3_,((byte)piStack_b4 & 0x8f) == 10);
              cVar1 = (**(code **)(*piStack_b8 + 0x10))
                                (piStack_b0,"arrayExchangeItem",&iStack_88,local_bc);
              if ((cVar1 != '\0') && (local_ac != (undefined4 *)0x0)) {
                puVar7 = (undefined4 *)piVar3[0x21];
                if (puVar7 != (undefined4 *)piVar3[0x22]) {
                  do {
                    piStack_d4 = (int *)0x0;
                    ppiStack_d8 = (int **)0x0;
                    piStack_48 = (int *)0x0;
                    piStack_44 = (int *)0x0;
                    FUN_11a98de0(&piStack_48,local_ac);
                    iVar4 = FUN_10254130(*puVar7);
                    if (iVar4 != 0) {
                      ppiStack_2c = (int **)auStack_3c;
                      auStack_3c[0] = 0;
                      ppiStack_28 = ppiStack_2c;
                      FUN_100e5aa0(ppiStack_2c);
                      FUN_104d1670("itemName",ppiStack_2c);
                      if ((ppiStack_28 != (int **)auStack_3c) && (ppiStack_28 != (int **)0x0)) {
                        FUN_10c3d5d0(ppiStack_28);
                      }
                    }
                    FUN_104d1550("itemCount",puVar7[1]);
                    FUN_104d1550("itemID",*puVar7);
                    (**(code **)(*piStack_80 + 0x3c))(ppiStack_78,&iStack_58);
                    if (((uint)piStack_44 >> 6 & 1) != 0) {
                      ppiStack_d8 = &piStack_48;
                      piStack_d4 = piStack_40;
                      (**(code **)(*piStack_48 + 8))();
                    }
                    puVar7 = puVar7 + 2;
                  } while (puVar7 != (undefined4 *)piVar3[0x22]);
                }
                piStack_d4 = (int *)piVar3[0x16];
                ppiStack_d8 = (int **)0x10840da5;
                ppiStack_d8 = (int **)FUN_114b6f80();
                FUN_117daa40(&iStack_58);
                piVar3 = piStack_54;
                if (piStack_54 != piStack_50) {
                  do {
                    piStack_b8 = (int *)*piVar3;
                    piStack_d4 = (int *)piStack_b8[2];
                    ppiStack_d8 = (int **)0x10840dd6;
                    cVar1 = FUN_117da9c0();
                    if (cVar1 == '\0') {
                      piStack_d4 = (int *)0x10840de7;
                      ppiStack_a4 = (int **)FUN_117daaf0();
                      if (ppiStack_a4 != (int **)0x0) {
                        piStack_d4 = (int *)0x0;
                        ppiStack_d8 = (int **)0x0;
                        piStack_48 = (int *)0x0;
                        piStack_44 = (int *)0x0;
                        FUN_11a98de0(&piStack_48,local_ac);
                        ppiStack_2c = (int **)auStack_3c;
                        auStack_3c[0] = 0;
                        ppiStack_28 = ppiStack_2c;
                        FUN_100e5aa0(ppiStack_2c);
                        FUN_104d1670("itemName",ppiStack_2c);
                        if ((ppiStack_2c != &piStack_40) && (ppiStack_2c != (int **)0x0)) {
                          FUN_10c3d5d0(ppiStack_2c);
                        }
                        FUN_104d1550("itemCount",_DAT_0000000c);
                        FUN_104d1550("itemID",_DAT_00000008);
                        (**(code **)(*piStack_84 + 0x3c))(iStack_7c,auStack_5c);
                        if (((uint)piStack_44 >> 6 & 1) != 0) {
                          ppiStack_d8 = &piStack_48;
                          piStack_d4 = piStack_40;
                          (**(code **)(*piStack_48 + 8))();
                        }
                      }
                    }
                    piVar3 = piVar3 + 1;
                  } while (piVar3 != piStack_50);
                }
                if (piStack_54 != (int *)0x0) {
                  ppiStack_d8 = (int **)0x10840f19;
                  piStack_d4 = piStack_54;
                  FUN_10c3d5d0();
                }
              }
              if ((uStack_6c >> 6 & 1) != 0) {
                ppiStack_d8 = &piStack_70;
                piStack_d4 = piStack_68;
                (**(code **)(*piStack_70 + 8))();
              }
            }
          }
        }
      }
    }
    if (piStack_a8 != (int *)0x0) {
      piStack_d4 = piStack_a8;
      ppiStack_d8 = (int **)0x10840f47;
      FUN_10c3da30();
    }
    if (piStack_b0 != (int *)0x0) {
      piStack_d4 = piStack_b0;
      ppiStack_d8 = (int **)0x10840f58;
      FUN_10c3da30();
    }
    if ((local_9c >> 6 & 1) != 0) {
      ppiStack_d8 = &local_a0;
      piStack_d4 = local_98;
      (**(code **)(*local_a0 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_10863ab0 @ 10863ab0  size=271 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "isPlayerJoinGuild"
//   "playerLevel"
//   "playerMapId"

/* [RE-AUTO c0]
   strings:
     ""isPlayerJoinGuild""
     ""playerLevel""
     ""playerMapId"" */

void FUN_10863ab0(void)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_stack_00000010;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar4 = 0;
  iVar5 = 0;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar3 != 0) {
      iVar5 = iVar3;
    }
  }
  local_20 = (int *)0x0;
  local_1c = in_stack_00000010[1];
  local_14 = in_stack_00000010[3];
  local_18 = in_stack_00000010[2];
  local_10 = in_stack_00000010[4];
  if ((local_1c >> 6 & 1) != 0) {
    local_20 = (int *)*in_stack_00000010;
    (**(code **)(*local_20 + 4))(&local_20,local_18);
  }
  if (iVar5 != 0) {
    uVar4 = CPlayer__GetHuntRankOrCount();
    uVar2 = FUN_1139ab70();
    FUN_104d15e0("isPlayerJoinGuild",uVar2);
  }
  FUN_104d1550("playerLevel",uVar4);
  if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 0xd0) != (int *)0x0)) {
    uVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x6c))();
    FUN_104d1550("playerMapId",uVar4);
  }
  if ((local_1c >> 6 & 1) != 0) {
    (**(code **)(*local_20 + 8))(&local_20,local_18);
  }
  return;
}



/* ===== FUN_10895a20 @ 10895a20  size=199 ===== */
// strings:
//   "_getChatMess"

/* [RE-AUTO c0]
   strings:
     ""_getChatMess"" */

void FUN_10895a20(void)

{
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 1) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    FUN_104d13b0("_getChatMess",FUN_108964e0);
    if ((DAT_123bd0c4 >> 6 & 1) != 0) {
      (**(code **)(*DAT_123bd0c0 + 8))(&DAT_123bd0c0,DAT_123bd0c8);
      DAT_123bd0c0 = (int *)0x0;
    }
    DAT_123bd0c4 = 1;
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_10895af0 @ 10895af0  size=2519 ===== */
// calls: wcstol
// strings:
//   "chatArray"
//   "CHATMESS_CLASS_NAME"
//   "m_nChannelType"
//   "m_nSrcId"
//   "m_nSrcDBId"
//   "m_sSrcName"
//   "m_sMsg"
//   "m_bSrcTeamLeader"
//   "m_bSrcSelf"
//   "m_nColor"
//   "m_nLineID"
//   "m_nVip"
//   "m_nQQMask"
//   "m_nWorldSvrID"
//   "e_ChatDialogRendering"
//   u"ITEMID_["
//   u"......"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: wcstol
   strings:
     ""chatArray""
     ""CHATMESS_CLASS_NAME""
     ""m_nChannelType""
     ""m_nSrcId""
     ""m_nSrcDBId""
     ""m_sSrcName""
     ""m_sMsg""
     ""m_bSrcTeamLeader""
     ""m_bSrcSelf""
     ""m_nColor"" */

void FUN_10895af0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint **ppuVar6;
  uint **ppuVar7;
  uint **ppuVar8;
  undefined4 uVar9;
  uint ***pppuVar10;
  uint **ppuVar11;
  uint **extraout_ECX;
  uint **extraout_ECX_00;
  undefined4 *puVar12;
  int *unaff_EBX;
  uint uVar13;
  undefined1 *puVar14;
  undefined4 unaff_EDI;
  uint ***pppuStack_1f4;
  uint **ppuStack_1f0;
  undefined4 uStack_1ec;
  int **ppiStack_1e8;
  int *piStack_1e4;
  uint **ppuStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1c8;
  int *piStack_1c0;
  uint uStack_1bc;
  int *piStack_1b8;
  uint uStack_1ac;
  int *piStack_1a8;
  uint uStack_1a4;
  int *piStack_1a0;
  undefined4 uStack_19c;
  int *piStack_190;
  uint uStack_18c;
  int *piStack_188;
  uint **ppuStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  int iStack_178;
  int iStack_174;
  uint **ppuStack_164;
  int iStack_160;
  uint *puStack_15c;
  uint *puStack_158;
  int iStack_14c;
  uint **appuStack_148 [3];
  undefined4 uStack_13c;
  uint **ppuStack_138;
  uint *apuStack_134 [2];
  undefined1 auStack_12c [16];
  wchar_t *pwStack_11c;
  uint **ppuStack_110;
  uint *puStack_10c;
  undefined1 *puStack_108;
  uint **ppuStack_f4;
  undefined1 auStack_f0 [4];
  uint ***pppuStack_ec;
  uint **ppuStack_e8;
  undefined1 auStack_e4 [24];
  undefined1 *puStack_cc;
  undefined1 auStack_c8 [4];
  uint ***pppuStack_c4;
  uint **ppuStack_c0;
  undefined1 auStack_bc [24];
  undefined1 *puStack_a4;
  uint ***pppuStack_9c;
  undefined4 auStack_74 [26];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&ppuStack_1d4;
  if ((((DAT_123bba52 == '\0') || (((byte)DAT_123bd0c4 & 0x8f) == 1)) || (DAT_1202e818 == 0)) ||
     ((*(int *)(DAT_1202e818 + 0xd0) == 0 ||
      (piVar5 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar5 == (int *)0x0))))
  goto LAB_108964bb;
  piStack_1e4 = (int *)0x10895b5d;
  iVar2 = (**(code **)(*piVar5 + 0xb4))();
  if (iVar2 == 0) goto LAB_108964bb;
  piStack_1a8 = (int *)0x0;
  uStack_1a4 = 0;
  piStack_1e4 = (int *)(uint)(((byte)DAT_123bd0c4 & 0x8f) == 10);
  ppiStack_1e8 = &piStack_1a8;
  uStack_1ec = "chatArray";
  ppuStack_1f0 = DAT_123bd0c8;
  pppuStack_1f4 = (uint ***)0x10895ba8;
  (**(code **)(*DAT_123bd0c0 + 0x10))();
  piStack_1a0 = (int *)0x0;
  uStack_19c = 0;
  pppuStack_1f4 = (uint ***)CONCAT31((int3)((uint)unaff_EDI >> 8),((byte)DAT_123bd0c4 & 0x8f) == 10)
  ;
  cVar1 = (**(code **)(*DAT_123bd0c0 + 0x10))(DAT_123bd0c8,"CHATMESS_CLASS_NAME",&piStack_1a0);
  piVar5 = (int *)0x0;
  if (((cVar1 != '\0') && (((byte)uStack_1ac & 0x8f) == 6)) &&
     (piVar5 = piStack_1a8, (uStack_1ac >> 6 & 1) != 0)) {
    piVar5 = (int *)*piStack_1a8;
  }
  FUN_11a98de0(&stack0xfffffe20,piVar5,0,0);
  FUN_104d1550("m_nChannelType",*param_1);
  FUN_104d1550("m_nSrcId",param_1[1]);
  FUN_104d14d0("m_nSrcDBId");
  FUN_104d1670("m_sSrcName",param_1 + 4);
  FUN_104d1670("m_sMsg",param_1 + 0xc);
  FUN_104d15e0("m_bSrcTeamLeader",(char)param_1[0x8c]);
  FUN_104d15e0("m_bSrcSelf",*(undefined1 *)((int)param_1 + 0x231));
  FUN_104d1550("m_nColor",param_1[0x8d]);
  FUN_104d1550("m_nLineID",param_1[0x8f]);
  FUN_104d1550("m_nVip",param_1[0x90]);
  FUN_104d1550("m_nQQMask",param_1[0x91]);
  iVar3 = param_1[0x92];
  if (iVar3 == *(int *)(iVar2 + 0x2d78)) {
    iVar3 = 0;
  }
  FUN_104d1550("m_nWorldSvrID",iVar3);
  if (((byte)ppuStack_1d4 & 0x8f) != 1) {
    uVar4 = (**(code **)(*unaff_EBX + 0x28))(uStack_1d0);
    if ((uVar4 < 0x12d) || ((*param_1 != 1 && (*param_1 != 5)))) {
      (**(code **)(_DAT_00000000 + 0x3c))(ppuStack_1d4,&pppuStack_1f4);
    }
    FUN_104d12b0("chatArray",&stack0xfffffe24);
  }
  piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("e_ChatDialogRendering");
  iVar2 = (**(code **)(*piVar5 + 8))();
  if ((iVar2 != 0) && (*(int **)(DAT_1202e818 + 0xd0) != (int *)0x0)) {
    piStack_1e4 = (int *)0x10895e0e;
    cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x168))();
    if ((cVar1 != '\0') || (*param_1 != 1)) goto LAB_10896444;
    piStack_1e4 = (int *)0x10895e2c;
    piStack_1e4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x48))();
    ppiStack_1e8 = (int **)0x10895e36;
    FUN_108896d0();
    ppiStack_1e8 = (int **)param_1[1];
    if (0 < (int)ppiStack_1e8) {
      uStack_1ec = (char *)0x10895e4f;
      (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))();
      if (*(int *)(DAT_1202e818 + 0xd0) != 0) {
        ppiStack_1e8 = (int **)param_1[1];
        uStack_1ec = (char *)0x10895e70;
        iVar2 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x7c))();
        if (iVar2 != 0) {
          ppiStack_1e8 = (int **)0x10895e88;
          piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
          ppiStack_1e8 = (int **)0x10895e8f;
          piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
          ppiStack_1e8 = *(int ***)(iVar2 + 8);
          uStack_1ec = (char *)0x10895e99;
          iStack_1c8 = (**(code **)(*piVar5 + 0xc))();
          if (iStack_1c8 != 0) {
            puStack_15c = &uStack_17c;
            uStack_17c = uStack_17c & 0xffff0000;
            ppiStack_1e8 = (int **)((int)&uStack_1d0 + 3);
            uStack_1ec = (char *)(param_1 + 0xc);
            ppuStack_1f0 = (uint **)0x10895ed3;
            puStack_158 = puStack_15c;
            FUN_100b5f70();
            pppuStack_1f4 = &ppuStack_184;
            ppuStack_1f0 = (uint **)0x3;
            ppuVar6 = appuStack_148[0];
            FUN_100ecfd0(appuStack_148[0],iStack_14c - (int)appuStack_148[0]);
LAB_10895f02:
            ppuVar8 = ppuVar6;
            if ((appuStack_148[0] != &puStack_15c) && (appuStack_148[0] != (uint **)0x0)) {
              pppuStack_1f4 = (uint ***)0x10895f10;
              ppuStack_1f0 = appuStack_148[0];
              FUN_10c3d5d0();
              ppuVar8 = ppuVar6;
            }
            iVar2 = iStack_160;
            ppuVar7 = ppuStack_164;
            ppuVar11 = (uint **)((int)ppuStack_164 - iStack_160 >> 1);
            if ((ppuVar11 == (uint **)0x0) || (ppuVar11 < &DAT_00000008)) {
LAB_10895f67:
              ppuVar6 = (uint **)0xffffffff;
            }
            else {
              ppuStack_1f0 = ppuStack_1d4;
              pppuStack_1f4 = (uint ***)0x11dd32c0;
              ppuVar8 = ppuStack_164;
              ppuVar6 = (uint **)FUN_10898c80(iStack_160,ppuStack_164,L"ITEMID_[");
              if (ppuVar6 == ppuVar7) goto LAB_10895f67;
              ppuVar6 = (uint **)((int)ppuVar6 - iVar2 >> 1);
            }
            if ((int)ppuVar6 < 0) goto LAB_10896150;
            if ((ppuVar6 < ppuVar11) && ((uint **)((int)ppuVar6 + 1) <= ppuVar11)) {
              ppuStack_1f0 = ppuStack_1d4;
              pppuStack_1f4 = (uint ***)&DAT_11dd32ae;
              ppuVar8 = ppuVar7;
              ppuVar11 = (uint **)FUN_10898c80(iVar2 + (int)ppuVar6 * 2,ppuVar7,&DAT_11dd32ac);
              if (ppuVar11 == ppuVar7) goto LAB_10895fa3;
              iVar3 = (int)ppuVar11 - iVar2 >> 1;
            }
            else {
LAB_10895fa3:
              iVar3 = -1;
            }
            if (iVar3 < (int)ppuVar6) goto LAB_10896150;
            ppuStack_1f0 = (uint **)((iVar3 - (int)ppuVar6) + -8);
            pppuStack_1f4 = (uint ***)(ppuVar6 + 2);
            FUN_10897170(&puStack_15c);
            ppuVar8 = extraout_ECX;
            ppuVar7 = (uint **)FUN_10897120();
            if (ppuVar7 == (uint **)0xffffffff) goto LAB_1089612a;
            pppuStack_1f4 = (uint ***)0x0;
            ppuStack_1f0 = ppuVar7;
            FUN_10897170(apuStack_134);
            ppuVar8 = (uint **)wcstol(pwStack_11c,(wchar_t **)0x0,10);
            iVar2 = FUN_10254130();
            if (iVar2 != 0) {
              ppuStack_1f0 = (uint **)&DAT_11dd32ac;
              uVar9 = FUN_100e5c10(auStack_e4);
              FUN_108982b0(uVar9);
              FUN_10898350();
              if ((pppuStack_9c != &ppuStack_c0) && (pppuStack_9c != (uint ***)0x0)) {
                pppuStack_1f4 = pppuStack_9c;
                FUN_10c3d5d0();
              }
              if ((pppuStack_c4 != &ppuStack_e8) && (pppuStack_c4 != (uint ***)0x0)) {
                pppuStack_1f4 = pppuStack_c4;
                FUN_10c3d5d0();
              }
              pppuStack_1f4 = pppuStack_ec;
              FUN_108970a0(ppuVar6,1);
              if ((ppuStack_e8 != &puStack_10c) && (ppuStack_e8 != (uint **)0x0)) {
                ppuStack_1f0 = ppuStack_e8;
                pppuStack_1f4 = (uint ***)0x108960cf;
                FUN_10c3d5d0();
              }
              appuStack_148[0] = ppuStack_138;
              if ((ppuStack_110 != apuStack_134) && (ppuStack_110 != (uint **)0x0)) {
                ppuStack_1f0 = ppuStack_110;
                pppuStack_1f4 = (uint ***)0x108960ee;
                FUN_10c3d5d0();
                appuStack_148[0] = ppuStack_138;
              }
              goto LAB_10895f02;
            }
            ppuVar6 = apuStack_134;
            do {
              if ((ppuStack_110 != ppuVar6) && (ppuStack_110 != (uint **)0x0)) {
                pppuStack_1f4 = (uint ***)0x10896120;
                ppuStack_1f0 = ppuStack_110;
                FUN_10c3d5d0();
              }
LAB_1089612a:
              ppuVar7 = ppuStack_164;
              iVar2 = iStack_160;
              if ((ppuStack_138 != &puStack_15c) && (ppuStack_138 != (uint **)0x0)) {
                ppuStack_1f0 = ppuStack_138;
                pppuStack_1f4 = (uint ***)0x1089613f;
                FUN_10c3d5d0();
                ppuVar7 = ppuStack_164;
                iVar2 = iStack_160;
              }
LAB_10896150:
              uVar4 = (int)ppuVar7 - iVar2 >> 1;
              if ((uVar4 == 0) || (uVar4 < 9)) {
LAB_10896189:
                uVar13 = 0xffffffff;
              }
              else {
                ppuStack_1f0 = ppuStack_1d4;
                pppuStack_1f4 = (uint ***)&DAT_11dd335a;
                ppuVar8 = ppuVar7;
                ppuVar6 = (uint **)FUN_10898c80(iVar2,ppuVar7,&DAT_11dd3348);
                if (ppuVar6 == ppuVar7) goto LAB_10896189;
                uVar13 = (int)ppuVar6 - iVar2 >> 1;
              }
              if ((int)uVar13 < 0) goto LAB_108962c7;
              if ((uVar13 < uVar4) && (uVar13 + 1 <= uVar4)) {
                ppuStack_1f0 = ppuStack_1d4;
                pppuStack_1f4 = (uint ***)&DAT_11dd3346;
                ppuVar8 = ppuVar7;
                ppuVar6 = (uint **)FUN_10898c80(iVar2 + uVar13 * 2,ppuVar7,&DAT_11dd3344);
                if (ppuVar6 == ppuVar7) goto LAB_108961c5;
                iVar2 = (int)ppuVar6 - iVar2 >> 1;
              }
              else {
LAB_108961c5:
                iVar2 = -1;
              }
              if (iVar2 < (int)uVar13) goto LAB_108962c7;
              ppuStack_1f0 = (uint **)((iVar2 - uVar13) + -9);
              pppuStack_1f4 = (uint ***)(uVar13 + 9);
              FUN_10897170(&puStack_15c);
              ppuVar8 = extraout_ECX_00;
              pppuVar10 = (uint ***)FUN_10897120();
              if (pppuVar10 == (uint ***)0xffffffff) goto LAB_108962af;
              ppuStack_1f0 = (uint **)&DAT_11dd3344;
              pppuStack_1f4 = pppuVar10;
              uVar9 = FUN_10897170(auStack_bc,0);
              FUN_108982b0(uVar9);
              FUN_10898350();
              if ((puStack_cc != auStack_f0) && (puStack_cc != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_cc);
              }
              if ((puStack_a4 != auStack_c8) && (puStack_a4 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_a4);
              }
              ppuVar8 = ppuStack_f4;
              FUN_108970a0(uVar13,(int)ppiStack_1e8 + 1);
              ppuVar6 = &puStack_10c;
              ppuStack_110 = ppuStack_e8;
            } while( true );
          }
        }
      }
    }
    goto LAB_1089643b;
  }
  goto LAB_10896444;
LAB_108962af:
  if ((ppuStack_138 != &puStack_15c) && (ppuStack_138 != (uint **)0x0)) {
    ppuStack_1f0 = ppuStack_138;
    pppuStack_1f4 = (uint ***)0x108962c4;
    FUN_10c3d5d0();
  }
LAB_108962c7:
  iVar2 = 2;
  puVar12 = auStack_74;
  do {
    iVar2 = iVar2 + -1;
    *puVar12 = puVar12 + -8;
    puVar12[1] = puVar12 + -8;
    *(undefined2 *)*puVar12 = 0;
    puVar12 = puVar12 + 10;
  } while (-1 < iVar2);
  FUN_10897e60();
  FUN_10897e60();
  FUN_100e5ff0(L"......");
  uVar4 = iStack_178 - iStack_174 >> 1;
  if (uVar4 < 5) {
    FUN_100e2df0(&DAT_11dd3328,(int)&uStack_1ec + 3);
    FUN_100e65a0(uStack_17c,uStack_180);
    FUN_10897dc0(2,0x20);
LAB_108963a1:
    (*(code *)(*ppuVar8)[0x10b])(uStack_13c,&DAT_40a00000);
    if ((puStack_108 != auStack_12c) && (puStack_108 != (undefined1 *)0x0)) {
      ppiStack_1e8 = (int **)puStack_108;
      uStack_1ec = (char *)0x108963da;
      FUN_10c3d5d0();
    }
  }
  else {
    if (0x29 < uVar4) {
      FUN_10897170(appuStack_148,0,0x29);
      FUN_100e65a0(&DAT_11dd3320,&DAT_11dd3324);
      goto LAB_108963a1;
    }
    (**(code **)(*piStack_1e4 + 0x42c))(iStack_174,&DAT_40a00000);
  }
  iVar2 = 2;
  puVar14 = &stack0x00000010;
  do {
    ppiStack_1e8 = *(int ***)(puVar14 + -0x28);
    if ((ppiStack_1e8 != (int **)(puVar14 + -0x4c)) && (ppiStack_1e8 != (int **)0x0)) {
      uStack_1ec = (char *)0x10896419;
      FUN_10c3d5d0();
    }
    iVar2 = iVar2 + -1;
    puVar14 = puVar14 + -0x28;
  } while (-1 < iVar2);
  if ((puStack_158 != &uStack_17c) && (puStack_158 != (uint *)0x0)) {
    ppiStack_1e8 = (int **)puStack_158;
    uStack_1ec = (char *)0x10896438;
    FUN_10c3d5d0();
  }
LAB_1089643b:
  ppiStack_1e8 = (int **)0x10896444;
  FUN_10889710();
LAB_10896444:
  if ((uStack_1bc >> 6 & 1) != 0) {
    ppiStack_1e8 = &piStack_1c0;
    piStack_1e4 = piStack_1b8;
    uStack_1ec = (char *)0x10896461;
    (**(code **)(*piStack_1c0 + 8))();
    piStack_1c0 = (int *)0x0;
  }
  uStack_1bc = 0;
  if ((uStack_18c >> 6 & 1) != 0) {
    ppiStack_1e8 = &piStack_190;
    piStack_1e4 = piStack_188;
    uStack_1ec = (char *)0x1089648e;
    (**(code **)(*piStack_190 + 8))();
    piStack_190 = (int *)0x0;
  }
  uStack_18c = 0;
  if ((uStack_1a4 >> 6 & 1) != 0) {
    ppiStack_1e8 = &piStack_1a8;
    piStack_1e4 = piStack_1a0;
    uStack_1ec = (char *)0x108964bb;
    (**(code **)(*piStack_1a8 + 8))();
  }
LAB_108964bb:
  FUN_11a89daa();
  return;
}



/* ===== FUN_10896e80 @ 10896e80  size=79 ===== */
// strings:
//   "e_ChatAlpha"

/* [RE-AUTO c0]
   strings:
     ""e_ChatAlpha"" */

void FUN_10896e80(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000018;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("e_ChatAlpha");
  uVar2 = (**(code **)(*piVar1 + 8))();
  if (((uint)in_stack_00000018[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*in_stack_00000018 + 8))(in_stack_00000018,in_stack_00000018[2]);
    *in_stack_00000018 = 0;
  }
  in_stack_00000018[2] = uVar2;
  in_stack_00000018[1] = 3;
  return;
}



/* ===== FUN_10896ed0 @ 10896ed0  size=71 ===== */
// strings:
//   "e_ChatAlpha"

/* [RE-AUTO c0]
   strings:
     ""e_ChatAlpha"" */

void FUN_10896ed0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (in_stack_00000014 == 1) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("e_ChatAlpha");
    uVar2 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
    if ((uVar2 == 3) || (uVar3 = 0xdeadbeaf, uVar2 == 4)) {
      uVar3 = *(undefined4 *)(in_stack_00000010 + 8);
    }
    (**(code **)(*piVar1 + 0x14))(uVar3);
  }
  return;
}



/* ===== FUN_108a3ee0 @ 108a3ee0  size=1337 ===== */
// strings:
//   "UnionGuildItemRespondOkHandler"
//   "UnEquipALL_No"
//   "UnEquipALL_OK"
//   "UnionItemRespondOkHandler"

/* WARNING: Removing unreachable block (ram,0x108a4064) */
/* WARNING: Removing unreachable block (ram,0x108a406c) */
/* WARNING: Removing unreachable block (ram,0x108a40e4) */
/* WARNING: Removing unreachable block (ram,0x108a40f3) */
/* WARNING: Removing unreachable block (ram,0x108a40f7) */
/* WARNING: Removing unreachable block (ram,0x108a4100) */
/* WARNING: Removing unreachable block (ram,0x108a40ba) */
/* WARNING: Removing unreachable block (ram,0x108a40c6) */
/* WARNING: Removing unreachable block (ram,0x108a40c9) */
/* [RE-AUTO c0]
   strings:
     ""UnionGuildItemRespondOkHandler""
     ""UnEquipALL_No""
     ""UnEquipALL_OK""
     ""UnionItemRespondOkHandler"" */

void __thiscall
FUN_108a3ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint3 unaff_EBX;
  undefined4 unaff_ESI;
  int unaff_EDI;
  int *piStack_84;
  undefined4 uStack_80;
  int local_7c;
  int *local_78;
  int iStack_74;
  int local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_84;
  local_70 = param_4;
  local_6c = param_1;
  if (param_5 == 4) {
    local_7c = *(int *)(param_4 + 0x28);
    iVar3 = *(int *)(param_4 + 8);
    uVar5 = *(undefined4 *)(param_4 + 0x18);
    local_78 = *(int **)(param_4 + 0x38);
    if (iVar3 < 100) {
      iVar6 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      if ((iVar6 != 0) && (iStack_74 = FUN_113f9bb0(iVar3,uVar5), iStack_74 != 0)) {
        if ((local_7c == 3) || (local_7c == 8)) {
          cVar1 = FUN_116698a0();
          if (cVar1 == '\0') goto LAB_108a4402;
          cVar1 = FUN_1122fcf0(iVar3,uVar5);
          cVar2 = FUN_1166e250();
          if ((cVar2 == '\0') && (cVar1 != '\0')) {
            cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x168))();
            if ((cVar1 == '\0') || (cVar1 = FUN_107cd240(), cVar1 != '\0')) {
              FUN_1112d520();
              FUN_1112d990(iVar3,uVar5,0,0);
              *(int *)(local_7c + 0x48) = iVar3;
              *(undefined4 *)(local_7c + 0x4c) = uVar5;
              FUN_1112d6b0(0x1fb7,"UnEquipALL_OK","UnEquipALL_No",&local_78);
              FUN_1112d550();
              FUN_11a89daa();
              return;
            }
            goto LAB_108a4402;
          }
          uVar7 = FUN_1166c4b0();
          local_78 = (int *)FUN_11522980(uVar7);
        }
        iVar6 = local_7c;
        piVar4 = (int *)FUN_113f9bb0(local_7c);
        cVar1 = (char)((uint)local_78 >> 0x18);
        local_78 = piVar4;
        if (piVar4 == (int *)0x0) {
          FUN_11232b00(iVar3,uVar5,piStack_84,uStack_80);
          FUN_11a89daa();
          return;
        }
        puVar8 = &stack0xffffff7b;
        cVar2 = FUN_1122fc50(local_7c,piVar4,puVar8);
        if ((cVar1 != '\0') && (cVar2 == '\0')) {
          FUN_1112d520();
          FUN_1112d990(iVar3,uVar5,unaff_EDI,unaff_ESI);
          uStack_48._0_4_ = (int *)((uint)(int *)uStack_48 & 0xffffff00);
          *(undefined4 *)(unaff_EDI + 0x44) = 0;
          puStack_38 = &uStack_48;
          puStack_34 = puStack_38;
          uVar5 = FUN_11669730();
          iVar3 = FUN_10254130(uVar5);
          if (iVar3 != 0) {
            puVar8 = &DAT_11d9d32b;
            if (*(undefined1 **)(iVar3 + 0x14) != (undefined1 *)0x0) {
              puVar8 = *(undefined1 **)(iVar3 + 0x14);
            }
            uVar5 = FUN_1024e9b0(puVar8,10);
            FUN_1112d7d0(0x2024,"UnionItemRespondOkHandler",&DAT_11d9d32b,&stack0xffffff78,uVar5);
          }
          if ((puStack_34 != &uStack_48) && (puStack_34 != (undefined8 *)0x0)) {
            FUN_10c3d5d0(puStack_34);
          }
          FUN_1112d550();
          FUN_11a89daa();
          return;
        }
        cVar1 = FUN_1122fc50((uint)unaff_EBX,piStack_84,0);
        if (cVar1 != '\0') {
          FUN_11233250(iVar3,uVar5,0);
          FUN_11a89daa();
          return;
        }
        FUN_11233240(iVar3,uVar5,puVar8,iVar6);
      }
    }
    else if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
             (piVar4 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar4 != (int *)0x0)) &&
            (iVar3 = (**(code **)(*piVar4 + 0xb4))(), iVar3 != 0)) {
      (**(code **)(**(int **)(iVar3 + 0x2abc) + 0xc))();
      FUN_111743b0();
      FUN_1117e2a0();
      FUN_11491b70();
      uStack_58._4_4_ = *(undefined4 *)(local_70 + 0x18);
      uStack_58._0_4_ = *(int *)(local_70 + 8) + -100;
      piVar4 = (int *)FUN_11409a60((int)uStack_58,uVar5);
      local_78 = piVar4;
      if (piVar4 != (int *)0x0) {
        uStack_58 = FUN_11669710();
        auStack_50[0] = (**(code **)(*piVar4 + 0xc))();
      }
      FUN_11491b70();
      piVar4 = piStack_84;
      uStack_48._0_4_ = piStack_84;
      uStack_48._4_4_ = uStack_80;
      piStack_84 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
      piStack_84 = (int *)FUN_113f9bb0(piVar4,uStack_80);
      if (piStack_84 != (int *)0x0) {
        uStack_48 = FUN_11669710();
        uStack_40 = (**(code **)(*piStack_84 + 0xc))();
        cVar1 = FUN_1122fc50(uStack_80,piStack_84,&stack0xffffff73);
        if (cVar1 == '\0') {
          uVar5 = FUN_107cb600(auStack_50,auStack_68);
          FUN_11478020(uVar5);
          FUN_11a89daa();
          return;
        }
      }
      uVar5 = FUN_107cb600(auStack_68,auStack_50);
      FUN_11478690(uVar5);
      FUN_11a89daa();
      return;
    }
  }
LAB_108a4402:
  FUN_11a89daa();
  return;
}



/* ===== FUN_108ae290 @ 108ae290  size=1499 ===== */
// strings:
//   "CMHUI_HunterGroup"
//   "AddGuilderRight"
//   "ReqJoinGroup"
//   "QuitHunterGroup"
//   "NoteSetting"
//   "CanImpeachLeader"
//   "HasImpeachMoney"
//   "ImpeachLeader"
//   "OnGetMembers"
//   "RemoveUselessFormat"
//   "AS2C_RequestRecordData"
//   "AS2C_GetRecordData"
//   "_getSearchGroupList"
//   "_getReqJoinGroupList"
//   "_getGroupMemberList"
//   "_getGuildTitleList"
//   "ImpeachMoney"

/* [RE-AUTO c0]
   strings:
     ""CMHUI_HunterGroup""
     ""AddGuilderRight""
     ""ReqJoinGroup""
     ""QuitHunterGroup""
     ""NoteSetting""
     ""CanImpeachLeader""
     ""HasImpeachMoney""
     ""ImpeachLeader""
     ""OnGetMembers""
     ""RemoveUselessFormat"" */

void __thiscall
FUN_108ae290(char *param_1,int *param_2,code *****param_3,undefined4 param_4,code *****param_5,
            int param_6)

{
  int iVar1;
  code *pcStack_108;
  undefined4 uStack_104;
  char *pcStack_100;
  code ****ppppcStack_fc;
  code ****ppppcStack_f8;
  code **ppcStack_f4;
  undefined4 uStack_f0;
  char *pcStack_ec;
  undefined4 ****ppppuStack_e8;
  code ****ppppcStack_e4;
  code ***pppcStack_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  code ****ppppcStack_d4;
  code ****ppppcStack_d0;
  code ****ppppcStack_cc;
  undefined4 uStack_c8;
  char *pcStack_c4;
  code ****ppppcStack_c0;
  code ****ppppcStack_bc;
  code ****ppppcStack_b8;
  undefined4 uStack_b4;
  char *pcStack_b0;
  code ****ppppcStack_ac;
  char ****ppppcStack_a8;
  undefined4 ****ppppuStack_a4;
  undefined4 uStack_a0;
  char *pcStack_9c;
  code ****ppppcStack_98;
  code ****ppppcStack_94;
  code ****ppppcStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  code ****ppppcStack_84;
  code ****ppppcStack_80;
  code ****ppppcStack_7c;
  undefined4 uStack_78;
  char *pcStack_74;
  code ****ppppcStack_70;
  code ****ppppcStack_6c;
  code ****ppppcStack_68;
  undefined4 uStack_64;
  char *pcStack_60;
  char *pcStack_5c;
  code ****ppppcStack_58;
  code ****ppppcStack_54;
  code ****local_44;
  code ****local_40;
  uint uStack_3c;
  code ****ppppcStack_38;
  undefined1 auStack_34 [4];
  code ****ppppcStack_30;
  code ****appppcStack_2c [4];
  char ****ppppcStack_1c;
  char ****ppppcStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_44;
  local_44 = (code ****)param_3;
  if (param_6 == 1) {
    if (*(int **)(param_1 + 0x24) != param_2) {
      if (*(int **)(param_1 + 0x24) != (int *)0x0) goto LAB_108ae857;
      ppppcStack_54 = (code ****)0x108ae2d4;
      FUN_108ae220();
      if (param_2 != (int *)0x0) {
        *(int **)(param_1 + 0x24) = param_2;
        ppppcStack_58 = (code ****)(param_1 + 0x20);
        ppppcStack_54 = (code ****)0x11dd4670;
        pcStack_5c = (char *)0x108ae2ee;
        (**(code **)(*param_2 + 0xe8))();
      }
    }
    ppppcStack_54 = (code ****)param_5;
    ppppcStack_58 = (code ****)0x108ae2f8;
    FUN_104f4330();
    ppppcStack_58 = (code ****)param_5;
    pcStack_5c = (char *)0x108ae301;
    FUN_104f42b0();
    ppppcStack_1c = (char ****)appppcStack_2c;
    pcStack_5c = "";
    pcStack_60 = "AddGuilderRight";
    uStack_64 = 0x108ae31e;
    ppppcStack_18 = ppppcStack_1c;
    FUN_100b62c0();
    uStack_64 = 0;
    ppppcStack_68 = (code ****)FUN_108aeef0;
    ppppcStack_6c = (code ****)auStack_34;
    ppppcStack_70 = (code ****)0x108ae331;
    FUN_108b6f80();
    if (((code *****)appppcStack_2c[0] != &local_40) &&
       ((code *****)appppcStack_2c[0] != (code *****)0x0)) {
      ppppcStack_70 = appppcStack_2c[0];
      pcStack_74 = (char *)0x108ae347;
      FUN_10c3d5d0();
    }
    ppppcStack_30 = (code ****)&local_40;
    ppppcStack_70 = (code ****)0x11dd46a0;
    pcStack_74 = "ReqJoinGroup";
    uStack_78 = 0x108ae367;
    appppcStack_2c[0] = ppppcStack_30;
    FUN_100b62c0();
    uStack_78 = 0;
    ppppcStack_7c = (code ****)FUN_108afe10;
    ppppcStack_80 = (code ****)&stack0xffffffb8;
    ppppcStack_84 = (code ****)0x108ae37a;
    FUN_108b6f80();
    if (((code *****)local_40 != &ppppcStack_54) && ((code *****)local_40 != (code *****)0x0)) {
      ppppcStack_84 = local_40;
      pcStack_88 = (char *)0x108ae390;
      FUN_10c3d5d0();
    }
    local_44 = (code ****)&ppppcStack_54;
    ppppcStack_84 = (code ****)0x11dd46b3;
    pcStack_88 = "QuitHunterGroup";
    uStack_8c = 0x108ae3b0;
    local_40 = local_44;
    FUN_100b62c0();
    uStack_8c = 0;
    ppppcStack_90 = (code ****)FUN_108afd90;
    ppppcStack_94 = (code ****)&pcStack_5c;
    ppppcStack_98 = (code ****)0x108ae3c3;
    FUN_108b6f80();
    if (((code *****)ppppcStack_54 != &ppppcStack_68) &&
       ((code *****)ppppcStack_54 != (code *****)0x0)) {
      ppppcStack_98 = ppppcStack_54;
      pcStack_9c = (char *)0x108ae3d9;
      FUN_10c3d5d0();
    }
    ppppcStack_58 = (code ****)&ppppcStack_68;
    ppppcStack_98 = (code ****)0x11dd46bf;
    pcStack_9c = "NoteSetting";
    uStack_a0 = 0x108ae3f9;
    ppppcStack_54 = ppppcStack_58;
    FUN_100b62c0();
    uStack_a0 = 0;
    ppppuStack_a4 = (undefined4 ****)FUN_108afbf0;
    ppppcStack_a8 = (char ****)&ppppcStack_70;
    ppppcStack_ac = (code ****)0x108ae40c;
    FUN_108b6f80();
    if (((code *****)ppppcStack_68 != &ppppcStack_7c) &&
       ((code *****)ppppcStack_68 != (code *****)0x0)) {
      ppppcStack_ac = ppppcStack_68;
      pcStack_b0 = (char *)0x108ae422;
      FUN_10c3d5d0();
    }
    ppppcStack_6c = (code ****)&ppppcStack_7c;
    ppppcStack_ac = (code ****)0x11dd46d0;
    pcStack_b0 = "CanImpeachLeader";
    uStack_b4 = 0x108ae442;
    ppppcStack_68 = ppppcStack_6c;
    FUN_100b62c0();
    uStack_b4 = 0;
    ppppcStack_b8 = (code ****)FUN_108b67c0;
    ppppcStack_bc = (code ****)&ppppcStack_84;
    ppppcStack_c0 = (code ****)0x108ae455;
    FUN_108b6f80();
    if (((code *****)ppppcStack_7c != &ppppcStack_90) &&
       ((code *****)ppppcStack_7c != (code *****)0x0)) {
      ppppcStack_c0 = ppppcStack_7c;
      pcStack_c4 = (char *)0x108ae46b;
      FUN_10c3d5d0();
    }
    ppppcStack_80 = (code ****)&ppppcStack_90;
    ppppcStack_c0 = (code ****)0x11dd45a7;
    pcStack_c4 = "HasImpeachMoney";
    uStack_c8 = 0x108ae48b;
    ppppcStack_7c = ppppcStack_80;
    FUN_100b62c0();
    uStack_c8 = 0;
    ppppcStack_cc = (code ****)FUN_108b6890;
    ppppcStack_d0 = (code ****)&ppppcStack_98;
    ppppcStack_d4 = (code ****)0x108ae49e;
    FUN_108b6f80();
    if (((undefined4 *****)ppppcStack_90 != &ppppuStack_a4) &&
       ((undefined4 *****)ppppcStack_90 != (undefined4 *****)0x0)) {
      ppppcStack_d4 = ppppcStack_90;
      pcStack_d8 = (char *)0x108ae4b4;
      FUN_10c3d5d0();
    }
    ppppcStack_94 = (code ****)&ppppuStack_a4;
    ppppcStack_d4 = (code ****)0x11dd45b5;
    pcStack_d8 = "ImpeachLeader";
    uStack_dc = 0x108ae4d4;
    ppppcStack_90 = ppppcStack_94;
    FUN_100b62c0();
    uStack_dc = 0;
    pppcStack_e0 = (code ***)&LAB_108b6930;
    ppppcStack_e4 = (code ****)&ppppcStack_ac;
    ppppuStack_e8 = (undefined4 ****)0x108ae4e7;
    FUN_108b6f80();
    if (((code *****)ppppuStack_a4 != &ppppcStack_b8) &&
       ((code *****)ppppuStack_a4 != (code *****)0x0)) {
      ppppuStack_e8 = ppppuStack_a4;
      pcStack_ec = (char *)0x108ae4fd;
      FUN_10c3d5d0();
    }
    ppppcStack_a8 = (char ****)&ppppcStack_b8;
    ppppuStack_e8 = (undefined4 ****)0x11dd45c4;
    pcStack_ec = "OnGetMembers";
    uStack_f0 = 0x108ae51d;
    ppppuStack_a4 = (undefined4 ****)ppppcStack_a8;
    FUN_100b62c0();
    uStack_f0 = 0;
    ppcStack_f4 = (code **)FUN_108b38a0;
    ppppcStack_f8 = (code ****)&ppppcStack_c0;
    ppppcStack_fc = (code ****)0x108ae530;
    FUN_108b6f80();
    if (((code *****)ppppcStack_b8 != &ppppcStack_cc) &&
       ((code *****)ppppcStack_b8 != (code *****)0x0)) {
      ppppcStack_fc = ppppcStack_b8;
      pcStack_100 = (char *)0x108ae546;
      FUN_10c3d5d0();
    }
    ppppcStack_bc = (code ****)&ppppcStack_cc;
    ppppcStack_fc = (code ****)0x11dd45db;
    pcStack_100 = "RemoveUselessFormat";
    uStack_104 = 0x108ae566;
    ppppcStack_b8 = ppppcStack_bc;
    FUN_100b62c0();
    uStack_104 = 0;
    pcStack_108 = FUN_108afa40;
    FUN_108b6f80(&ppppcStack_d4);
    if ((ppppcStack_cc != &pppcStack_e0) && (ppppcStack_cc != (code ****)0x0)) {
      FUN_10c3d5d0(ppppcStack_cc);
    }
    ppppcStack_d0 = &pppcStack_e0;
    ppppcStack_cc = ppppcStack_d0;
    FUN_100b62c0("AS2C_RequestRecordData","");
    FUN_108b6f80(&ppppuStack_e8,FUN_108b6a00,0);
    if ((pppcStack_e0 != &ppcStack_f4) && (pppcStack_e0 != (code ***)0x0)) {
      FUN_10c3d5d0(pppcStack_e0);
    }
    ppppcStack_e4 = (code ****)&ppcStack_f4;
    pppcStack_e0 = (code ***)ppppcStack_e4;
    FUN_100b62c0("AS2C_GetRecordData","");
    FUN_108b6f80(&ppppcStack_fc,FUN_108b6aa0,0);
    if ((ppcStack_f4 != &pcStack_108) && (ppcStack_f4 != (code **)0x0)) {
      FUN_10c3d5d0(ppcStack_f4);
    }
    FUN_104d13b0("_getSearchGroupList",FUN_108b07d0);
    FUN_104d13b0("_getReqJoinGroupList",FUN_108aefc0);
    FUN_104d13b0("_getGroupMemberList",FUN_108aee10);
    FUN_104d13b0("_getGuildTitleList",FUN_108ae900);
    iVar1 = FUN_11720120();
    FUN_104d1550("ImpeachMoney",*(undefined4 *)(iVar1 + 0xac));
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b4790,0);
        FUN_10d17870();
        FUN_108b8c90();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b41e0,0);
        FUN_10d17870();
        FUN_108b8ce0();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b3300,0);
        FUN_10d17870();
        FUN_108b8d30();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b2820,0);
        FUN_10d17870();
        FUN_108b8d80();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b2440,0);
        FUN_10d17870();
        FUN_108b8dd0();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108ae990,0);
        FUN_10d17870();
        FUN_108b8e20();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      FUN_10d17440();
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        FUN_10d17440(param_1,FUN_108b4770,0);
        FUN_10d17870();
        FUN_108b8e70();
      }
    }
    iVar1 = FUN_10d17440();
    if (iVar1 != 0) {
      ppppcStack_54 = (code ****)0x108ae814;
      FUN_10d17440();
      ppppcStack_54 = (code ****)0x108ae81b;
      iVar1 = FUN_10d17870();
      if (iVar1 != 0) {
        ppppcStack_54 = (code ****)0x0;
        ppppcStack_58 = (code ****)FUN_108b1080;
        pcStack_60 = (char *)0x108ae82c;
        pcStack_5c = param_1;
        FUN_10d17440();
        pcStack_60 = (char *)0x108ae833;
        FUN_10d17870();
        pcStack_60 = (char *)0x108ae83a;
        FUN_108b8ec0();
      }
    }
    if ((uStack_3c >> 6 & 1) != 0) {
      ppppcStack_58 = (code ****)&local_40;
      ppppcStack_54 = ppppcStack_38;
      pcStack_5c = (char *)0x108ae857;
      (*(code *)(*local_40)[2])();
    }
  }
LAB_108ae857:
  FUN_11a89daa();
  return;
}



/* ===== FUN_108ae990 @ 108ae990  size=1152 ===== */
// strings:
//   "guildTitleArray"
//   "GUILDTITLEVO_CLASS_NAME"
//   "GUILDTITLEVODepots_CLASS_NAME"
//   "m_Title"
//   "m_Name"
//   "m_Rights"
//   "m_cfg"
//   "m_DepotFetchCount"
//   "UpdataTitleArray"

/* [RE-AUTO c0]
   strings:
     ""guildTitleArray""
     ""GUILDTITLEVO_CLASS_NAME""
     ""GUILDTITLEVODepots_CLASS_NAME""
     ""m_Title""
     ""m_Name""
     ""m_Rights""
     ""m_cfg""
     ""m_DepotFetchCount""
     ""UpdataTitleArray"" */

void __fastcall FUN_108ae990(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 unaff_ESI;
  byte unaff_DI;
  int *piStack_164;
  int *piStack_160;
  undefined4 *puStack_15c;
  undefined4 *puStack_158;
  int *piStack_154;
  char *pcStack_150;
  int *piStack_14c;
  uint uStack_148;
  int *piStack_144;
  undefined4 auStack_134 [2];
  int *piStack_12c;
  byte bStack_128;
  int *piStack_124;
  int *piStack_11c;
  int *piStack_118;
  undefined1 auStack_f4 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  uint uStack_e0;
  undefined4 *puStack_dc;
  int aiStack_d4 [3];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_8c [8];
  undefined4 *puStack_84;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined1 auStack_74 [16];
  undefined1 **ppuStack_64;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_134;
  if ((((byte)*(undefined4 *)(param_1 + 0x2c) & 0x8f) != 1) &&
     (*(int **)(param_1 + 0x24) != (int *)0x0)) {
    piStack_144 = (int *)0x108ae9cf;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))();
    if (iVar2 != 0) {
      piStack_144 = (int *)0x108ae9e2;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x24) + 0x8c))();
      piStack_144 = (int *)0x108ae9ec;
      iVar2 = (**(code **)(*piVar3 + 0x108))();
      if (iVar2 != 0) {
        piStack_144 = (int *)(param_1 + 0x28);
        uStack_148 = 0x108aea03;
        FUN_104f4330();
        aiStack_d4[0] = 0;
        aiStack_d4[1] = 0;
        uStack_148 = (uint)((bStack_128 & 0x8f) == 10);
        piStack_14c = aiStack_d4;
        pcStack_150 = "guildTitleArray";
        piStack_154 = piStack_124;
        puStack_158 = (undefined4 *)0x108aea3c;
        (**(code **)(*piStack_12c + 0x10))();
        puStack_158 = (undefined4 *)0x0;
        puStack_15c = puStack_dc;
        piStack_160 = (int *)0x108aea4b;
        (**(code **)(*piStack_e4 + 0x2c))();
        piStack_160 = (int *)0x108aea50;
        iVar2 = FUN_107cb5c0();
        if (iVar2 != 0) {
          piStack_160 = (int *)0x108aea61;
          iVar4 = FUN_11398f30();
          if (iVar4 != 0) {
            piStack_164 = aiStack_d4;
            aiStack_d4[0] = 0;
            aiStack_d4[1] = 0;
            piStack_14c = (int *)CONCAT31(piStack_14c._1_3_,(unaff_DI & 0x8f) == 10);
            uStack_148 = 0;
            piStack_160 = piStack_14c;
            cVar1 = (**(code **)(*piStack_144 + 0x10))(unaff_ESI);
            if (((cVar1 != '\0') && (((byte)uStack_e0 & 0x8f) == 6)) &&
               (puStack_158 = puStack_dc, (uStack_e0 >> 6 & 1) != 0)) {
              puStack_158 = (undefined4 *)*puStack_dc;
            }
            uStack_9c = 0;
            uStack_98 = 0;
            (**(code **)(*piStack_154 + 0x10))
                      (piStack_14c,"GUILDTITLEVODepots_CLASS_NAME",&uStack_9c,
                       ((byte)pcStack_150 & 0x8f) == 10);
            if (*(int **)(iVar2 + 0x2abc) != (int *)0x0) {
              (**(code **)(**(int **)(iVar2 + 0x2abc) + 0xc))();
              FUN_111743b0();
              FUN_1117e2a0();
              FUN_11398f30();
              uVar5 = FUN_114a93a0();
              FUN_108b73a0(uVar5);
              piVar3 = piStack_11c;
              if (piStack_11c != piStack_118) {
                do {
                  iVar2 = *piVar3;
                  auStack_134[0] = 0;
                  FUN_11a98de0(&stack0xfffffec8,unaff_ESI,0,0);
                  uStack_f0 = 0;
                  uStack_e8 = *(undefined4 *)(iVar2 + 0x20);
                  uStack_ec = 4;
                  FUN_104d1550("m_Title",*(undefined4 *)(iVar2 + 4));
                  puStack_7c = auStack_8c;
                  auStack_8c[0] = 0;
                  puStack_78 = puStack_7c;
                  FUN_108adbe0(auStack_74);
                  FUN_108b9da0();
                  if ((ppuStack_64 != &puStack_78) && (ppuStack_64 != (undefined1 **)0x0)) {
                    FUN_10c3d5d0(ppuStack_64);
                  }
                  FUN_104d1670("m_Name",puStack_7c);
                  FUN_104d12b0("m_Rights",auStack_f4);
                  piStack_164 = (int *)0x0;
                  piStack_160 = (int *)0x0;
                  puVar6 = (undefined4 *)FUN_114f7690();
                  if (((uint)piStack_160 >> 6 & 1) != 0) {
                    (**(code **)(*piStack_164 + 8))(&piStack_164,puStack_15c);
                    piStack_164 = (int *)0x0;
                  }
                  piStack_160 = (int *)0x3;
                  puStack_15c = puVar6;
                  FUN_104d12b0("m_cfg",&piStack_164);
                  FUN_104d1550("m_DepotFetchCount",*(undefined4 *)(iVar2 + 0x40));
                  (**(code **)(*piStack_124 + 0x3c))(piStack_11c,&piStack_14c);
                  FUN_104d7c10();
                  if ((puStack_84 != &uStack_98) && (puStack_84 != (undefined4 *)0x0)) {
                    FUN_10c3d5d0(puStack_84);
                  }
                  FUN_104d7c10();
                  FUN_104d7c10();
                  piVar3 = piVar3 + 1;
                } while (piVar3 != piStack_118);
              }
              uStack_98 = 0;
              uStack_94 = 0;
              uStack_c8 = 0;
              uStack_c4 = 3;
              uStack_c0 = 1;
              (**(code **)(s_GUILDTITLEVO_CLASS_NAME_11dd4788._0_4_ + 0x18))
                        (piStack_160,&uStack_98,"UpdataTitleArray",&uStack_c8,1,
                         ((byte)piStack_164 & 0x8f) == 10);
              FUN_104d7c10();
              FUN_104d7c10();
              if (piStack_11c != (int *)0x0) {
                FUN_10c3d5d0(piStack_11c);
              }
            }
            FUN_104d7c10();
            FUN_104d7c10();
          }
        }
        piStack_160 = (int *)0x108aedf0;
        FUN_104d7c10();
        piStack_160 = (int *)0x108aedf9;
        FUN_104d7c10();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108b0070 @ 108b0070  size=1345 ===== */
// strings:
//   "guildTitleArray"
//   "m_Name"
//   "mh_sharemem_addrinfo"
//   "m_Rights"
//   "m_DepotFetchCount"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""guildTitleArray""
     ""m_Name""
     ""mh_sharemem_addrinfo""
     ""m_Rights""
     ""m_DepotFetchCount"" */

void __thiscall FUN_108b0070(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_stack_00000010;
  int *piVar8;
  int *piStack_154;
  int *piStack_150;
  int *piStack_14c;
  int ***pppiStack_148;
  int *piStack_144;
  int *piStack_140;
  char *pcStack_13c;
  int **ppiStack_138;
  int *piStack_134;
  int *local_128;
  int *piStack_124;
  int *piStack_120;
  undefined4 uStack_11c;
  int *local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  int *piStack_104;
  uint uStack_100;
  uint uStack_fc;
  int *piStack_f8;
  uint uStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  int *local_e8;
  uint local_e4;
  int *local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int **ppiStack_d4;
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [8];
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 auStack_ac [8];
  int iStack_a4;
  undefined1 **ppuStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined1 *apuStack_8c [4];
  undefined1 **ppuStack_7c;
  undefined1 **ppuStack_78;
  int *piStack_70;
  undefined1 auStack_60 [84];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&local_128;
  local_dc = *(undefined4 *)(param_1 + 0x34);
  local_e4 = *(uint *)(param_1 + 0x2c);
  local_d8 = *(undefined4 *)(param_1 + 0x38);
  local_e8 = (int *)0x0;
  piStack_134 = *(int **)(param_1 + 0x30);
  local_e0 = piStack_134;
  if ((local_e4 >> 6 & 1) != 0) {
    local_e8 = *(int **)(param_1 + 0x28);
    ppiStack_138 = &local_e8;
    pcStack_13c = (char *)0x108b00c9;
    (**(code **)(*local_e8 + 4))();
  }
  local_118 = (int *)0x0;
  local_114 = 0;
  ppiStack_138 = &local_118;
  local_128 = (int *)CONCAT31(local_128._1_3_,((byte)local_e4 & 0x8f) == 10);
  piStack_134 = local_128;
  pcStack_13c = "guildTitleArray";
  piStack_144 = (int *)0x108b0109;
  piStack_140 = local_e0;
  (**(code **)(*local_e8 + 0x10))();
  if (((byte)piStack_124 & 0x8f) == 9) {
    piStack_144 = piStack_120;
    pppiStack_148 = (int ***)0x108b0127;
    iVar3 = (**(code **)(*local_128 + 0x28))();
    if (iVar3 != 0) {
      piVar7 = (int *)0x0;
      piStack_144 = piStack_120;
      piStack_134 = (int *)0x0;
      pppiStack_148 = (int ***)0x108b0156;
      iVar3 = (**(code **)(*local_128 + 0x28))();
      if (iVar3 != 0) {
        do {
          pppiStack_148 = (int ***)0x108b016c;
          FUN_11491ad0();
          pppiStack_148 = (int ***)&local_114;
          local_114 = 0;
          uStack_110 = 0;
          piStack_150 = piStack_124;
          piStack_154 = (int *)0x108b018f;
          piStack_14c = piVar7;
          (**(code **)(_DAT_00000000 + 0x30))();
          piStack_f0 = (int *)0x0;
          uStack_ec = 0;
          pppiStack_148 = (int ***)CONCAT31(pppiStack_148._1_3_,((byte)uStack_11c & 0x8f) == 10);
          piStack_154 = (int *)pppiStack_148;
          (**(code **)(*piStack_120 + 0x10))(local_118,"m_Name",&piStack_f0);
          puStack_b4 = auStack_c4;
          auStack_c4[0] = 0;
          if (((byte)uStack_fc & 0x8f) == 6) {
            piVar4 = piStack_f8;
            if ((uStack_fc >> 6 & 1) != 0) {
              piVar4 = (int *)*piStack_f8;
            }
          }
          else {
            piVar4 = (int *)&DAT_11d9d32b;
          }
          puStack_9c = auStack_ac;
          piVar1 = piVar4;
          do {
            piVar8 = piVar1;
            piVar1 = (int *)((int)piVar8 + 1);
          } while ((char)*piVar8 != '\0');
          puStack_b0 = puStack_b4;
          puStack_98 = puStack_9c;
          FUN_100b62c0(piVar4,piVar8);
          ppuStack_7c = &puStack_9c;
          puStack_9c = (undefined1 *)((uint)puStack_9c & 0xffff0000);
          ppuStack_78 = ppuStack_7c;
          cVar2 = FUN_100ecfd0(ppuStack_a0,iStack_a4 - (int)ppuStack_a0,&puStack_9c,3);
          if (cVar2 != '\0') {
            FUN_100ed090(&puStack_9c,auStack_cc,4);
          }
          if ((ppuStack_78 != &puStack_9c) && (ppuStack_78 != (undefined1 **)0x0)) {
            FUN_10c3d5d0(ppuStack_78);
          }
          if ((ppuStack_a0 != &puStack_b4) && (ppuStack_a0 != (undefined1 **)0x0)) {
            FUN_10c3d5d0(ppuStack_a0);
          }
          piVar4 = piStack_bc;
          FUN_100d83d0(uStack_b8);
          piStack_f0 = (int *)0x0;
          uStack_f4 = CONCAT31(uStack_f4._1_3_,((byte)pcStack_13c & 0x8f) == 10);
          uStack_ec = 0;
          ppuStack_7c = (undefined1 **)piVar7;
          (**(code **)(*piStack_140 + 0x10))(ppiStack_138,"m_Rights",&piStack_f0,uStack_f4);
          if (((uStack_fc & 0x8f) == 3) || (piStack_70 = (int *)0xdeadbeaf, (uStack_fc & 0x8f) == 4)
             ) {
            piStack_70 = piStack_f8;
          }
          FUN_104d4800("m_DepotFetchCount",auStack_60);
          FUN_108b74e0(apuStack_8c);
          if ((uStack_100 >> 6 & 1) != 0) {
            (**(code **)(*piStack_104 + 8))(&piStack_104,uStack_fc);
            piStack_104 = (int *)0x0;
          }
          uStack_100 = 0;
          if ((ppiStack_d4 != &local_e8) && (ppiStack_d4 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_d4);
          }
          if (((uint)piStack_120 >> 6 & 1) != 0) {
            (**(code **)(*piStack_124 + 8))(&piStack_124,uStack_11c);
            piStack_124 = (int *)0x0;
          }
          piStack_120 = (int *)0x0;
          if (((uint)piStack_150 >> 6 & 1) != 0) {
            (**(code **)(*piStack_154 + 8))(&piStack_154,piStack_14c);
            piStack_154 = (int *)0x0;
          }
          piStack_150 = (int *)0x0;
          if (piStack_70 != (int *)0x0) {
            FUN_10c3d5d0(piStack_70);
          }
          if ((ppuStack_78 != apuStack_8c) && (ppuStack_78 != (undefined1 **)0x0)) {
            FUN_10c3d5d0(ppuStack_78);
          }
          piVar7 = (int *)((int)piVar7 + 1);
          piVar4 = (int *)(**(code **)(*piVar4 + 0x28))(piVar8);
        } while (piVar7 < piVar4);
      }
      uVar5 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
      if (((uVar5 == 3) || (uVar5 == 4)) && (*(int *)(in_stack_00000010 + 8) == 0)) {
        uVar6 = 0;
        if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
           (piVar7 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar7 != (int *)0x0)) {
          pppiStack_148 = (int ***)0x108b04e3;
          uVar6 = (**(code **)(*piVar7 + 0xb4))();
        }
        pppiStack_148 = &ppiStack_138;
        piStack_150 = (int *)0x108b04f0;
        piStack_14c = (int *)uVar6;
        FUN_11478e40();
      }
      else {
        uVar6 = 0;
        if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
           (piVar7 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar7 != (int *)0x0)) {
          pppiStack_148 = (int ***)0x108b0519;
          uVar6 = (**(code **)(*piVar7 + 0xb4))();
        }
        pppiStack_148 = &ppiStack_138;
        piStack_150 = (int *)0x108b0526;
        piStack_14c = (int *)uVar6;
        FUN_11478af0();
      }
      pppiStack_148 = (int ***)ppiStack_138;
      piStack_14c = piStack_134;
      piStack_150 = (int *)0x108b0540;
      FUN_108b97d0();
      if (piStack_134 != (int *)0x0) {
        piStack_144 = piStack_134;
        pppiStack_148 = (int ***)0x108b0551;
        FUN_10c3d5d0();
      }
    }
  }
  if (((uint)piStack_124 >> 6 & 1) != 0) {
    pppiStack_148 = (int ***)&local_128;
    piStack_144 = piStack_120;
    piStack_14c = (int *)0x108b0571;
    (**(code **)(*local_128 + 8))();
    local_128 = (int *)0x0;
  }
  piStack_124 = (int *)0x0;
  if ((uStack_f4 >> 6 & 1) != 0) {
    pppiStack_148 = (int ***)&piStack_f8;
    piStack_144 = piStack_f0;
    piStack_14c = (int *)0x108b059e;
    (**(code **)(*piStack_f8 + 8))();
  }
  pcStack_13c = (char *)0x108b05ae;
  FUN_11a89daa();
  return;
}



/* ===== FUN_108b0970 @ 108b0970  size=1793 ===== */
// strings:
//   "InitModel"
//   "CheckGroupName"
//   "RenameGroup"
//   "GetGuildName"
//   "RefreshGuildDetail"
//   "UpdataState"
//   "UpdataSelf"
//   "UpdataTitleRights"
//   "SubmitCreateHunterGroup"
//   "CreateCondition"
//   "InviteJoinHunterGroup"
//   "HandlerRequestJoin"
//   "AssignmentGroupLeaderTo"
//   "RemoveHunterGroupMember"
//   "EditMemberRights"
//   "EditMemberUpDownRights"
//   "TitleSetting"
//   "UpGuildLevel"
//   "EditIcon"
//   "TakeWage"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""CheckGroupName""
     ""RenameGroup""
     ""GetGuildName""
     ""RefreshGuildDetail""
     ""UpdataState""
     ""UpdataSelf""
     ""UpdataTitleRights""
     ""SubmitCreateHunterGroup""
     ""CreateCondition"" */

void FUN_108b0970(void)

{
  code *pcStack_204;
  undefined4 uStack_200;
  char *pcStack_1fc;
  code ***pppcStack_1f8;
  code ***pppcStack_1f4;
  code **ppcStack_1f0;
  undefined4 uStack_1ec;
  char *pcStack_1e8;
  undefined4 ***pppuStack_1e4;
  code ***pppcStack_1e0;
  code ***pppcStack_1dc;
  undefined4 uStack_1d8;
  char *pcStack_1d4;
  code ***pppcStack_1d0;
  undefined4 ***pppuStack_1cc;
  undefined4 ***pppuStack_1c8;
  undefined4 uStack_1c4;
  char *pcStack_1c0;
  code ***pppcStack_1bc;
  code ***pppcStack_1b8;
  code ***pppcStack_1b4;
  undefined4 uStack_1b0;
  char *pcStack_1ac;
  undefined4 ***pppuStack_1a8;
  code ***pppcStack_1a4;
  code ***pppcStack_1a0;
  undefined4 uStack_19c;
  char *pcStack_198;
  code ***pppcStack_194;
  code ***pppcStack_190;
  undefined4 ***pppuStack_18c;
  undefined4 uStack_188;
  char *pcStack_184;
  undefined4 ***pppuStack_180;
  code ***pppcStack_17c;
  code ***pppcStack_178;
  undefined4 uStack_174;
  char *pcStack_170;
  code ***pppcStack_16c;
  code ***pppcStack_168;
  undefined4 ***pppuStack_164;
  undefined4 uStack_160;
  char *pcStack_15c;
  code ***pppcStack_158;
  code ***pppcStack_154;
  code ***pppcStack_150;
  undefined4 uStack_14c;
  char *pcStack_148;
  code ***pppcStack_144;
  code ***pppcStack_140;
  code ***pppcStack_13c;
  undefined4 uStack_138;
  char *pcStack_134;
  code ***pppcStack_130;
  code ***pppcStack_12c;
  code ***pppcStack_128;
  undefined4 uStack_124;
  char *pcStack_120;
  code ***pppcStack_11c;
  code ***pppcStack_118;
  code ***pppcStack_114;
  undefined4 uStack_110;
  char *pcStack_10c;
  code ***pppcStack_108;
  code ***pppcStack_104;
  code ***pppcStack_100;
  undefined4 uStack_fc;
  char *pcStack_f8;
  code ***pppcStack_f4;
  code ***pppcStack_f0;
  code ***pppcStack_ec;
  undefined4 uStack_e8;
  char *pcStack_e4;
  code ***pppcStack_e0;
  code ***pppcStack_dc;
  code ***pppcStack_d8;
  undefined4 uStack_d4;
  char *pcStack_d0;
  code ***pppcStack_cc;
  code ***pppcStack_c8;
  code ***pppcStack_c4;
  undefined4 uStack_c0;
  char *pcStack_bc;
  code ***pppcStack_b8;
  code ***pppcStack_b4;
  code ***pppcStack_b0;
  undefined4 uStack_ac;
  char *pcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  undefined4 uStack_98;
  char *pcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined4 ***pppuStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  undefined4 uStack_70;
  char *pcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  undefined4 ***pppuStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 uStack_48;
  char *pcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  code ***pppcStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_2c;
  code ***local_24 [4];
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)local_24;
  local_10 = (undefined1 *)local_24;
  local_c = DAT_11e11390 ^ (uint)local_24;
  pcStack_2c = "";
  pcStack_30 = "InitModel";
  uStack_34 = 0x108b09a4;
  FUN_100b62c0();
  uStack_34 = 0;
  pppcStack_38 = (code ***)FUN_108ae290;
  pppcStack_3c = (code ***)&pcStack_2c;
  pppcStack_40 = (code ***)0x108b09b7;
  FUN_108b6f80();
  if (((code ****)local_24[0] != &pppcStack_38) && ((code ****)local_24[0] != (code ****)0x0)) {
    pppcStack_40 = local_24[0];
    pcStack_44 = (char *)0x108b09cd;
    FUN_10c3d5d0();
  }
  local_24[0] = (code ***)&pppcStack_38;
  pppcStack_40 = (code ***)0x11dd48ae;
  pcStack_44 = "CheckGroupName";
  uStack_48 = 0x108b09ed;
  FUN_100b62c0();
  uStack_48 = 0;
  pppcStack_4c = (code ***)FUN_108b5bb0;
  pppcStack_50 = (code ***)&pppcStack_40;
  pppcStack_54 = (code ***)0x108b0a00;
  FUN_108b6f80();
  if (((code ****)pppcStack_38 != &pppcStack_4c) && ((code ****)pppcStack_38 != (code ****)0x0)) {
    pppcStack_54 = pppcStack_38;
    pcStack_58 = (char *)0x108b0a16;
    FUN_10c3d5d0();
  }
  pppcStack_3c = (code ***)&pppcStack_4c;
  pppcStack_54 = (code ***)0x11dd48bb;
  pcStack_58 = "RenameGroup";
  uStack_5c = 0x108b0a36;
  pppcStack_38 = pppcStack_3c;
  FUN_100b62c0();
  uStack_5c = 0;
  pppuStack_60 = (undefined4 ***)FUN_108b5e60;
  pppcStack_64 = (code ***)&pppcStack_54;
  pppcStack_68 = (code ***)0x108b0a49;
  FUN_108b6f80();
  if (((undefined4 ****)pppcStack_4c != &pppuStack_60) &&
     ((undefined4 ****)pppcStack_4c != (undefined4 ****)0x0)) {
    pppcStack_68 = pppcStack_4c;
    pcStack_6c = (char *)0x108b0a5f;
    FUN_10c3d5d0();
  }
  pppcStack_50 = (code ***)&pppuStack_60;
  pppcStack_68 = (code ***)0x11dd48c8;
  pcStack_6c = "GetGuildName";
  uStack_70 = 0x108b0a7f;
  pppcStack_4c = pppcStack_50;
  FUN_100b62c0();
  uStack_70 = 0;
  pppcStack_74 = (code ***)FUN_108b5d50;
  pppcStack_78 = (code ***)&pppcStack_68;
  pppuStack_7c = (undefined4 ***)0x108b0a92;
  FUN_108b6f80();
  if (((code ****)pppuStack_60 != &pppcStack_74) && ((code ****)pppuStack_60 != (code ****)0x0)) {
    pppuStack_7c = pppuStack_60;
    pcStack_80 = (char *)0x108b0aa8;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppuStack_7c = (undefined4 ***)0x11dd48de;
  pcStack_80 = "RefreshGuildDetail";
  uStack_84 = 0x108b0ac8;
  pppuStack_60 = (undefined4 ***)pppcStack_64;
  FUN_100b62c0();
  uStack_84 = 0;
  pppcStack_88 = (code ***)&LAB_108b5fc0;
  pppcStack_8c = (code ***)&pppuStack_7c;
  pppcStack_90 = (code ***)0x108b0adb;
  FUN_108b6f80();
  if (((code ****)pppcStack_74 != &pppcStack_88) && ((code ****)pppcStack_74 != (code ****)0x0)) {
    pppcStack_90 = pppcStack_74;
    pcStack_94 = (char *)0x108b0af1;
    FUN_10c3d5d0();
  }
  pppcStack_78 = (code ***)&pppcStack_88;
  pppcStack_90 = (code ***)0x11dd48eb;
  pcStack_94 = "UpdataState";
  uStack_98 = 0x108b0b11;
  pppcStack_74 = pppcStack_78;
  FUN_100b62c0();
  uStack_98 = 0;
  pppcStack_9c = (code ***)FUN_108b5550;
  pppcStack_a0 = (code ***)&pppcStack_90;
  pppcStack_a4 = (code ***)0x108b0b24;
  FUN_108b6f80();
  if (((code ****)pppcStack_88 != &pppcStack_9c) && ((code ****)pppcStack_88 != (code ****)0x0)) {
    pppcStack_a4 = pppcStack_88;
    pcStack_a8 = (char *)0x108b0b3a;
    FUN_10c3d5d0();
  }
  pppcStack_8c = (code ***)&pppcStack_9c;
  pppcStack_a4 = (code ***)0x11dd47da;
  pcStack_a8 = "UpdataSelf";
  uStack_ac = 0x108b0b5a;
  pppcStack_88 = pppcStack_8c;
  FUN_100b62c0();
  uStack_ac = 0;
  pppcStack_b0 = (code ***)FUN_108b52e0;
  pppcStack_b4 = (code ***)&pppcStack_a4;
  pppcStack_b8 = (code ***)0x108b0b6d;
  FUN_108b6f80();
  if (((code ****)pppcStack_9c != &pppcStack_b0) && ((code ****)pppcStack_9c != (code ****)0x0)) {
    pppcStack_b8 = pppcStack_9c;
    pcStack_bc = (char *)0x108b0b83;
    FUN_10c3d5d0();
  }
  pppcStack_a0 = (code ***)&pppcStack_b0;
  pppcStack_b8 = (code ***)0x11dd47ed;
  pcStack_bc = "UpdataTitleRights";
  uStack_c0 = 0x108b0ba3;
  pppcStack_9c = pppcStack_a0;
  FUN_100b62c0();
  uStack_c0 = 0;
  pppcStack_c4 = (code ***)FUN_108b5090;
  pppcStack_c8 = (code ***)&pppcStack_b8;
  pppcStack_cc = (code ***)0x108b0bb6;
  FUN_108b6f80();
  if (((code ****)pppcStack_b0 != &pppcStack_c4) && ((code ****)pppcStack_b0 != (code ****)0x0)) {
    pppcStack_cc = pppcStack_b0;
    pcStack_d0 = (char *)0x108b0bcc;
    FUN_10c3d5d0();
  }
  pppcStack_b4 = (code ***)&pppcStack_c4;
  pppcStack_cc = (code ***)0x11dd4807;
  pcStack_d0 = "SubmitCreateHunterGroup";
  uStack_d4 = 0x108b0bec;
  pppcStack_b0 = pppcStack_b4;
  FUN_100b62c0();
  uStack_d4 = 0;
  pppcStack_d8 = (code ***)FUN_108b6430;
  pppcStack_dc = (code ***)&pppcStack_cc;
  pppcStack_e0 = (code ***)0x108b0bff;
  FUN_108b6f80();
  if (((code ****)pppcStack_c4 != &pppcStack_d8) && ((code ****)pppcStack_c4 != (code ****)0x0)) {
    pppcStack_e0 = pppcStack_c4;
    pcStack_e4 = (char *)0x108b0c15;
    FUN_10c3d5d0();
  }
  pppcStack_c8 = (code ***)&pppcStack_d8;
  pppcStack_e0 = (code ***)0x11dd4817;
  pcStack_e4 = "CreateCondition";
  uStack_e8 = 0x108b0c35;
  pppcStack_c4 = pppcStack_c8;
  FUN_100b62c0();
  uStack_e8 = 0;
  pppcStack_ec = (code ***)FUN_108b5770;
  pppcStack_f0 = (code ***)&pppcStack_e0;
  pppcStack_f4 = (code ***)0x108b0c48;
  FUN_108b6f80();
  if (((code ****)pppcStack_d8 != &pppcStack_ec) && ((code ****)pppcStack_d8 != (code ****)0x0)) {
    pppcStack_f4 = pppcStack_d8;
    pcStack_f8 = (char *)0x108b0c5e;
    FUN_10c3d5d0();
  }
  pppcStack_dc = (code ***)&pppcStack_ec;
  pppcStack_f4 = (code ***)0x11dd482d;
  pcStack_f8 = "InviteJoinHunterGroup";
  uStack_fc = 0x108b0c7e;
  pppcStack_d8 = pppcStack_dc;
  FUN_100b62c0();
  uStack_fc = 0;
  pppcStack_100 = (code ***)FUN_108b6010;
  pppcStack_104 = (code ***)&pppcStack_f4;
  pppcStack_108 = (code ***)0x108b0c91;
  FUN_108b6f80();
  if (((code ****)pppcStack_ec != &pppcStack_100) && ((code ****)pppcStack_ec != (code ****)0x0)) {
    pppcStack_108 = pppcStack_ec;
    pcStack_10c = (char *)0x108b0ca7;
    FUN_10c3d5d0();
  }
  pppcStack_f0 = (code ***)&pppcStack_100;
  pppcStack_108 = (code ***)0x11dd4842;
  pcStack_10c = "HandlerRequestJoin";
  uStack_110 = 0x108b0cc7;
  pppcStack_ec = pppcStack_f0;
  FUN_100b62c0();
  uStack_110 = 0;
  pppcStack_114 = (code ***)FUN_108b6310;
  pppcStack_118 = (code ***)&pppcStack_108;
  pppcStack_11c = (code ***)0x108b0cda;
  FUN_108b6f80();
  if (((code ****)pppcStack_100 != &pppcStack_114) && ((code ****)pppcStack_100 != (code ****)0x0))
  {
    pppcStack_11c = pppcStack_100;
    pcStack_120 = (char *)0x108b0cf0;
    FUN_10c3d5d0();
  }
  pppcStack_104 = (code ***)&pppcStack_114;
  pppcStack_11c = (code ***)0x11dd485b;
  pcStack_120 = "AssignmentGroupLeaderTo";
  uStack_124 = 0x108b0d10;
  pppcStack_100 = pppcStack_104;
  FUN_100b62c0();
  uStack_124 = 0;
  pppcStack_128 = (code ***)FUN_108b61b0;
  pppcStack_12c = (code ***)&pppcStack_11c;
  pppcStack_130 = (code ***)0x108b0d23;
  FUN_108b6f80();
  if (((code ****)pppcStack_114 != &pppcStack_128) && ((code ****)pppcStack_114 != (code ****)0x0))
  {
    pppcStack_130 = pppcStack_114;
    pcStack_134 = (char *)0x108b0d39;
    FUN_10c3d5d0();
  }
  pppcStack_118 = (code ***)&pppcStack_128;
  pppcStack_130 = (code ***)0x11dd4873;
  pcStack_134 = "RemoveHunterGroupMember";
  uStack_138 = 0x108b0d59;
  pppcStack_114 = pppcStack_118;
  FUN_100b62c0();
  uStack_138 = 0;
  pppcStack_13c = (code ***)FUN_108b6260;
  pppcStack_140 = (code ***)&pppcStack_130;
  pppcStack_144 = (code ***)0x108b0d6c;
  FUN_108b6f80();
  if (((code ****)pppcStack_128 != &pppcStack_13c) && ((code ****)pppcStack_128 != (code ****)0x0))
  {
    pppcStack_144 = pppcStack_128;
    pcStack_148 = (char *)0x108b0d82;
    FUN_10c3d5d0();
  }
  pppcStack_12c = (code ***)&pppcStack_13c;
  pppcStack_144 = (code ***)0x11dd495c;
  pcStack_148 = "EditMemberRights";
  uStack_14c = 0x108b0da2;
  pppcStack_128 = pppcStack_12c;
  FUN_100b62c0();
  uStack_14c = 0;
  pppcStack_150 = (code ***)FUN_108b4e10;
  pppcStack_154 = (code ***)&pppcStack_144;
  pppcStack_158 = (code ***)0x108b0db5;
  FUN_108b6f80();
  if (((code ****)pppcStack_13c != &pppcStack_150) && ((code ****)pppcStack_13c != (code ****)0x0))
  {
    pppcStack_158 = pppcStack_13c;
    pcStack_15c = (char *)0x108b0dcb;
    FUN_10c3d5d0();
  }
  pppcStack_140 = (code ***)&pppcStack_150;
  pppcStack_158 = (code ***)0x11dd4976;
  pcStack_15c = "EditMemberUpDownRights";
  uStack_160 = 0x108b0deb;
  pppcStack_13c = pppcStack_140;
  FUN_100b62c0();
  uStack_160 = 0;
  pppuStack_164 = (undefined4 ***)FUN_108b4f90;
  pppcStack_168 = (code ***)&pppcStack_158;
  pppcStack_16c = (code ***)0x108b0dfe;
  FUN_108b6f80();
  if (((undefined4 ****)pppcStack_150 != &pppuStack_164) &&
     ((undefined4 ****)pppcStack_150 != (undefined4 ****)0x0)) {
    pppcStack_16c = pppcStack_150;
    pcStack_170 = (char *)0x108b0e14;
    FUN_10c3d5d0();
  }
  pppcStack_154 = (code ***)&pppuStack_164;
  pppcStack_16c = (code ***)0x11dd4984;
  pcStack_170 = "TitleSetting";
  uStack_174 = 0x108b0e34;
  pppcStack_150 = pppcStack_154;
  FUN_100b62c0();
  uStack_174 = 0;
  pppcStack_178 = (code ***)FUN_108b0070;
  pppcStack_17c = (code ***)&pppcStack_16c;
  pppuStack_180 = (undefined4 ***)0x108b0e47;
  FUN_108b6f80();
  if (((code ****)pppuStack_164 != &pppcStack_178) && ((code ****)pppuStack_164 != (code ****)0x0))
  {
    pppuStack_180 = pppuStack_164;
    pcStack_184 = (char *)0x108b0e5d;
    FUN_10c3d5d0();
  }
  pppcStack_168 = (code ***)&pppcStack_178;
  pppuStack_180 = (undefined4 ***)0x11dd4994;
  pcStack_184 = "UpGuildLevel";
  uStack_188 = 0x108b0e7d;
  pppuStack_164 = (undefined4 ***)pppcStack_168;
  FUN_100b62c0();
  uStack_188 = 0;
  pppuStack_18c = (undefined4 ***)&LAB_108b05f0;
  pppcStack_190 = (code ***)&pppuStack_180;
  pppcStack_194 = (code ***)0x108b0e90;
  FUN_108b6f80();
  if (((undefined4 ****)pppcStack_178 != &pppuStack_18c) &&
     ((undefined4 ****)pppcStack_178 != (undefined4 ****)0x0)) {
    pppcStack_194 = pppcStack_178;
    pcStack_198 = (char *)0x108b0ea6;
    FUN_10c3d5d0();
  }
  pppcStack_17c = (code ***)&pppuStack_18c;
  pppcStack_194 = (code ***)0x11dd49a0;
  pcStack_198 = "EditIcon";
  uStack_19c = 0x108b0ec6;
  pppcStack_178 = pppcStack_17c;
  FUN_100b62c0();
  uStack_19c = 0;
  pppcStack_1a0 = (code ***)FUN_108b0640;
  pppcStack_1a4 = (code ***)&pppcStack_194;
  pppuStack_1a8 = (undefined4 ***)0x108b0ed9;
  FUN_108b6f80();
  if (((code ****)pppuStack_18c != &pppcStack_1a0) && ((code ****)pppuStack_18c != (code ****)0x0))
  {
    pppuStack_1a8 = pppuStack_18c;
    pcStack_1ac = (char *)0x108b0eef;
    FUN_10c3d5d0();
  }
  pppcStack_190 = (code ***)&pppcStack_1a0;
  pppuStack_1a8 = (undefined4 ***)0x11dd49ac;
  pcStack_1ac = "TakeWage";
  uStack_1b0 = 0x108b0f0f;
  pppuStack_18c = (undefined4 ***)pppcStack_190;
  FUN_100b62c0();
  uStack_1b0 = 0;
  pppcStack_1b4 = (code ***)&LAB_108b0780;
  pppcStack_1b8 = (code ***)&pppuStack_1a8;
  pppcStack_1bc = (code ***)0x108b0f22;
  FUN_108b6f80();
  if (((code ****)pppcStack_1a0 != &pppcStack_1b4) && ((code ****)pppcStack_1a0 != (code ****)0x0))
  {
    pppcStack_1bc = pppcStack_1a0;
    pcStack_1c0 = (char *)0x108b0f38;
    FUN_10c3d5d0();
  }
  pppcStack_1a4 = (code ***)&pppcStack_1b4;
  pppcStack_1bc = (code ***)0x11dd49bc;
  pcStack_1c0 = "EditBaseName";
  uStack_1c4 = 0x108b0f58;
  pppcStack_1a0 = pppcStack_1a4;
  FUN_100b62c0();
  uStack_1c4 = 0;
  pppuStack_1c8 = (undefined4 ***)FUN_108b06b0;
  pppuStack_1cc = &pppcStack_1bc;
  pppcStack_1d0 = (code ***)0x108b0f6b;
  FUN_108b6f80();
  if (((undefined4 ****)pppcStack_1b4 != &pppuStack_1c8) &&
     ((undefined4 ****)pppcStack_1b4 != (undefined4 ****)0x0)) {
    pppcStack_1d0 = pppcStack_1b4;
    pcStack_1d4 = (char *)0x108b0f81;
    FUN_10c3d5d0();
  }
  pppcStack_1b8 = (code ***)&pppuStack_1c8;
  pppcStack_1d0 = (code ***)0x11dd49ca;
  pcStack_1d4 = "ResetRight";
  uStack_1d8 = 0x108b0fa1;
  pppcStack_1b4 = pppcStack_1b8;
  FUN_100b62c0();
  uStack_1d8 = 0;
  pppcStack_1dc = (code ***)FUN_108b5020;
  pppcStack_1e0 = (code ***)&pppcStack_1d0;
  pppuStack_1e4 = (undefined4 ***)0x108b0fb4;
  FUN_108b6f80();
  if (((code ****)pppuStack_1c8 != &pppcStack_1dc) && ((code ****)pppuStack_1c8 != (code ****)0x0))
  {
    pppuStack_1e4 = pppuStack_1c8;
    pcStack_1e8 = (char *)0x108b0fca;
    FUN_10c3d5d0();
  }
  pppuStack_1cc = &pppcStack_1dc;
  pppuStack_1e4 = (undefined4 ***)0x11dd48f8;
  pcStack_1e8 = "DisBandGuild";
  uStack_1ec = 0x108b0fea;
  pppuStack_1c8 = pppuStack_1cc;
  FUN_100b62c0();
  uStack_1ec = 0;
  ppcStack_1f0 = (code **)&LAB_108b4dc0;
  pppcStack_1f4 = (code ***)&pppuStack_1e4;
  pppcStack_1f8 = (code ***)0x108b0ffd;
  FUN_108b6f80();
  if ((pppcStack_1dc != &ppcStack_1f0) && (pppcStack_1dc != (code ***)0x0)) {
    pppcStack_1f8 = pppcStack_1dc;
    pcStack_1fc = (char *)0x108b1013;
    FUN_10c3d5d0();
  }
  pppcStack_1e0 = &ppcStack_1f0;
  pppcStack_1f8 = (code ***)0x11dd4906;
  pcStack_1fc = "BanGuilder";
  uStack_200 = 0x108b1033;
  pppcStack_1dc = pppcStack_1e0;
  FUN_100b62c0();
  uStack_200 = 0;
  pcStack_204 = FUN_108b6970;
  FUN_108b6f80(&pppcStack_1f8);
  if ((ppcStack_1f0 != &pcStack_204) && (ppcStack_1f0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_1f0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108b3300 @ 108b3300  size=1435 ===== */
// calls: CGuildLevelUpInfo::GetValueForLevel
// strings:
//   "inHunterGroup"
//   "m_name"
//   "m_note"
//   "m_level"
//   "m_Repute"
//   "m_Fund"
//   "guildersCount"
//   "m_dwGuilderCountMax"
//   "m_nMemberAvgLevel"
//   "m_nRankNum"
//   "m_nReqLevel"
//   "m_nOnlineGuildersCount"
//   "IsLevelFull"
//   "testUpArray"
//   "lm_ID"
//   "lm_Exp"
//   "lm_preExp"
//   "lm_GuildersCount"
//   "lm_Repute"
//   "lm_Fund"

/* [RE-AUTO c0]
   strings:
     ""inHunterGroup""
     ""m_name""
     ""m_note""
     ""m_level""
     ""m_Repute""
     ""m_Fund""
     ""guildersCount""
     ""m_dwGuilderCountMax""
     ""m_nMemberAvgLevel""
     ""m_nRankNum"" */

void __fastcall FUN_108b3300(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *unaff_EBX;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  int iStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int iStack_a8;
  int local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [12];
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 auStack_24 [16];
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_b4;
  local_a4 = param_1;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar8 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar8 != (int *)0x0)) &&
     (piStack_b0 = (int *)(**(code **)(*piVar8 + 0xb4))(), piStack_b0 != (int *)0x0)) {
    piVar8 = (int *)piStack_b0[0xaaf];
    piStack_ac = (int *)(**(code **)(*piVar8 + 0xc))();
    if ((*(int **)(param_1 + 0x24) != (int *)0x0) &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))(), iVar3 != 0)) {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x24) + 0x8c))();
      iStack_a8 = (**(code **)(*piVar4 + 0x108))();
      if ((iStack_a8 != 0) && (((byte)*(undefined4 *)(param_1 + 0x44) & 0x8f) != 1)) {
        cVar1 = (**(code **)(*piVar8 + 8))();
        iStack_b4 = CONCAT31(iStack_b4._1_3_,cVar1);
        *(bool *)(param_1 + 0x58) = cVar1 == '\0';
        puVar9 = (undefined4 *)(param_1 + 0x40);
        FUN_104d15e0("inHunterGroup",iStack_b4);
        piVar8 = piStack_ac;
        if (cVar1 != '\0') {
          puStack_14 = auStack_24;
          auStack_24[0] = 0;
          puStack_10 = puStack_14;
          FUN_108adc20(auStack_58);
          FUN_108b9da0();
          if ((puStack_48 != auStack_5c) && (puStack_48 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_48);
          }
          FUN_104d1670("m_name",puStack_14);
          puStack_30 = auStack_40;
          auStack_40[0] = 0;
          puStack_2c = puStack_30;
          FUN_108adc60(auStack_5c);
          FUN_108b9da0();
          if ((puStack_4c != auStack_60) && (puStack_4c != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_4c);
          }
          FUN_104d1670("m_note",puStack_30);
          FUN_104d1550("m_level",piVar8[0x11]);
          FUN_104d1550(&DAT_11dbf768,piVar8[10]);
          uVar5 = FUN_114a85f0();
          FUN_104d1550(&DAT_11dbfbc8,uVar5);
          FUN_104d1550("m_Repute",piVar8[0x13]);
          uVar5 = FUN_114a8610();
          FUN_104d1550("m_Fund",uVar5);
          uVar5 = (**(code **)(*piVar8 + 0x18))();
          FUN_104d1550("guildersCount",uVar5);
          FUN_104d1440("m_dwGuilderCountMax",piVar8[0x8a]);
          uVar5 = (**(code **)(*piVar8 + 0x20))();
          FUN_104d1550("m_nMemberAvgLevel",uVar5);
          FUN_114a85f0();
          uVar5 = FUN_114a8110();
          FUN_104d1550("m_nRankNum",uVar5);
          FUN_104d1550("m_nReqLevel",piVar8[0x2c]);
          uVar5 = (**(code **)(*piVar8 + 0x1c))();
          FUN_104d1550("m_nOnlineGuildersCount",uVar5);
          uVar2 = FUN_114a96e0();
          FUN_104d15e0("IsLevelFull",uVar2);
          cVar1 = FUN_114a96e0();
          if (cVar1 == '\0') {
            iStack_b4 = CGuildLevelUpInfo__GetValueForLevel(piVar8[0x11]);
            if (iStack_b4 != 0) {
              uStack_a0 = 0;
              uStack_9c = 0;
              pcVar11 = "testUpArray";
              (**(code **)(*(int *)*puVar9 + 0x10))
                        (*(undefined4 *)(param_1 + 0x48),"testUpArray",&uStack_a0,
                         ((byte)*(undefined4 *)(param_1 + 0x44) & 0x8f) == 10);
              (**(code **)(*piStack_b0 + 0x2c))(iStack_a8,0);
              FUN_104d1550("lm_ID",*(undefined4 *)(pcVar11 + 0x10));
              FUN_104d1550("lm_Exp",*(undefined4 *)(pcVar11 + 0x14));
              FUN_104d1550("lm_preExp",0);
              uStack_70 = 0;
              uStack_6c = 2;
              uStack_68 = 1;
              (**(code **)(*unaff_EBX + 0x3c))(piStack_b0,&uStack_70);
              FUN_104d7c10();
              FUN_104d1550("lm_GuildersCount",*(undefined4 *)(pcVar11 + 0x18));
              FUN_104d1550("lm_Repute",*(undefined4 *)(pcVar11 + 0x1c));
              FUN_104d1550("lm_Fund",*(undefined4 *)(pcVar11 + 0x20));
              FUN_104d1550("lm_ResA",*(undefined4 *)(pcVar11 + 0x24));
              FUN_104d1550("lm_ResB",*(undefined4 *)(pcVar11 + 0x28));
              FUN_104d1550("lm_Item1",*(undefined4 *)(pcVar11 + 0x2c));
              FUN_104d1550("lm_Item1Count",*(undefined4 *)(pcVar11 + 0x30));
              iVar3 = *(int *)(pcVar11 + 0x2c);
              iVar10 = iVar3;
              iVar6 = FUN_113f9300(0,iVar3,0);
              iVar7 = FUN_113f9300(2,iVar3,0);
              iVar3 = FUN_113f9300(10,iVar3,0);
              puVar9 = (undefined4 *)(iVar10 + 0x40);
              FUN_104d1440("lm_OwnItem1Count",iVar6 + iVar7 + iVar3);
              FUN_104d7c10();
              piVar8 = piStack_ac;
            }
            if ((1 < piVar8[0x11]) &&
               (iVar3 = CGuildLevelUpInfo__GetValueForLevel(piVar8[0x11] + -1), iVar3 != 0)) {
              FUN_104d1550("lm_preExp",*(undefined4 *)(iVar3 + 0x14));
            }
          }
          if ((puStack_28 != auStack_3c) && (puStack_28 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_28);
          }
          if ((puStack_10 != auStack_24) && (puStack_10 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_10);
          }
        }
        FUN_104d15e0("hasData",1);
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_88 = 0;
        uStack_84 = 3;
        uStack_80 = 1;
        (**(code **)(*(int *)*puVar9 + 0x18))
                  (puVar9[2],&uStack_70,"UpdataCallback",&uStack_88,1,((byte)puVar9[1] & 0x8f) == 10
                  );
        FUN_104d7c10();
        FUN_104d7c10();
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108b38a0 @ 108b38a0  size=2362 ===== */
// calls: _i64toa
// strings:
//   "groupMemberArray"
//   "GROUPMEMBER_CLASS_NAME"
//   "GroupMemberMaxPageNum"
//   "GroupMemberCurrentPage"
//   "name_member"
//   "level_member"
//   "HRlevel_member"
//   "titleIndex"
//   "titleName"
//   "currentP"
//   "growLevel"
//   "hunterNum"
//   "weekP"
//   "taskNum"
//   "isBaned"
//   "isCanBanGuilder"
//   "state"
//   "offlineTimeSpan"
//   "otherMess"
//   "UpdataGROUPMEMBER"

/* [RE-AUTO c0]
   calls: _i64toa
   strings:
     ""groupMemberArray""
     ""GROUPMEMBER_CLASS_NAME""
     ""GroupMemberMaxPageNum""
     ""GroupMemberCurrentPage""
     ""name_member""
     ""level_member""
     ""HRlevel_member""
     ""titleIndex""
     ""titleName""
     ""currentP"" */

void FUN_108b38a0(void)

{
  int *piVar1;
  longlong _Val;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int ****ppppiVar6;
  undefined4 unaff_EBX;
  undefined4 uVar7;
  undefined4 *puVar8;
  int unaff_EDI;
  undefined8 uVar9;
  int in_stack_00000010;
  int in_stack_00000014;
  char *pcStack_208;
  uint uStack_204;
  char *pcStack_200;
  int *piStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 *puStack_1f0;
  char *pcStack_1ec;
  int **ppiStack_1e8;
  int ****ppppiStack_1e4;
  undefined *puStack_1e0;
  undefined1 **ppuStack_1dc;
  int **ppiStack_1d8;
  undefined1 **ppuStack_1d4;
  int **ppiStack_1d0;
  int ***pppiStack_1cc;
  int *piStack_1c8;
  char *pcStack_1c4;
  undefined4 *puStack_1c0;
  undefined4 *puStack_1bc;
  int *piStack_1b8;
  int **ppiStack_1b4;
  int *piStack_1b0;
  char *pcStack_1ac;
  undefined4 *puStack_1a8;
  uint uStack_1a4;
  int iStack_1a0;
  int **ppiStack_19c;
  undefined4 uStack_198;
  int ***pppiStack_194;
  int *piStack_190;
  uint uStack_18c;
  uint3 uVar11;
  int *piVar10;
  byte abStack_17c [4];
  int *local_178;
  uint uStack_174;
  undefined4 uStack_170;
  int *piStack_168;
  byte bStack_164;
  int *piStack_160;
  int **ppiStack_154;
  uint uStack_150;
  int *piStack_14c;
  int *piStack_148;
  uint uStack_144;
  undefined4 *puStack_140;
  undefined1 auStack_13c [4];
  undefined4 uStack_138;
  int *apiStack_134 [3];
  undefined1 *puStack_128;
  int **ppiStack_124;
  int **ppiStack_120;
  int *apiStack_11c [2];
  undefined1 auStack_114 [4];
  undefined4 uStack_110;
  int **ppiStack_10c;
  int **ppiStack_108;
  int *piStack_104;
  undefined1 *puStack_100;
  int ***pppiStack_fc;
  int ***pppiStack_f8;
  int aiStack_f4 [2];
  int **ppiStack_ec;
  int ****ppppiStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_d0;
  int aiStack_cc [2];
  int **ppiStack_c4;
  uint uStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  int ***pppiStack_b4;
  int ***pppiStack_b0;
  int ***pppiStack_a0;
  undefined1 auStack_9c [20];
  undefined1 *puStack_88;
  undefined1 auStack_84 [20];
  undefined1 *puStack_70;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)abStack_17c;
  uStack_18c = 0x44;
  piStack_190 = (int *)0x108b38d4;
  cVar2 = FUN_1050a110();
  if ((cVar2 != '\0') && (in_stack_00000014 == 3)) {
    uVar3 = *(uint *)(in_stack_00000010 + 4) & 0x8f;
    if ((uVar3 == 3) || (uVar7 = 0xdeadbeaf, uVar3 == 4)) {
      uVar7 = *(undefined4 *)(in_stack_00000010 + 8);
    }
    uVar3 = *(uint *)(in_stack_00000010 + 0x1c) & 0x8f;
    if ((uVar3 == 3) || (uVar3 == 4)) {
      local_178 = *(int **)(in_stack_00000010 + 0x20);
    }
    else {
      local_178 = (int *)0xdeadbeaf;
    }
    uVar11 = (uint3)((uint)unaff_EBX >> 8);
    if (((byte)*(undefined4 *)(in_stack_00000010 + 0x34) & 0x8f) == 2) {
      piVar10 = (int *)CONCAT31(uVar11,*(undefined1 *)(in_stack_00000010 + 0x38));
    }
    else {
      piVar10 = (int *)((uint)uVar11 << 8);
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
      piStack_190 = (int *)0x108b396b;
      iVar4 = (**(code **)(*piVar1 + 0xb4))();
      if ((iVar4 != 0) && (aiStack_f4[0] = *(int *)(iVar4 + 0x2abc), aiStack_f4[0] != 0)) {
        piStack_190 = (int *)0x108b398d;
        iVar4 = FUN_111743b0();
        if (iVar4 != 0) {
          ppiStack_19c = &piStack_d0;
          pppiStack_194 = (int ***)local_178;
          iStack_1a0 = 0x108b39af;
          uStack_198 = uVar7;
          piStack_190 = piVar10;
          FUN_1117e320();
          iStack_1a0 = uStack_18c + 0x28;
          uStack_1a4 = 0x108b39c0;
          FUN_104f4330();
          uStack_138 = 0;
          apiStack_134[0] = (int *)0x0;
          uStack_1a4 = (uint)((bStack_164 & 0x8f) == 10);
          puStack_1a8 = &uStack_138;
          pcStack_1ac = "groupMemberArray";
          piStack_1b0 = piStack_160;
          ppiStack_1b4 = (int **)0x108b39f9;
          (**(code **)(*piStack_168 + 0x10))();
          ppiStack_1b4 = (int **)0x0;
          piStack_1b8 = puStack_140;
          puStack_1bc = (undefined4 *)0x108b3a08;
          (**(code **)(*piStack_148 + 0x2c))();
          puStack_1c0 = &uStack_138;
          uStack_138 = 0;
          apiStack_134[0] = (int *)0x0;
          pcStack_1ac = (char *)0x0;
          puStack_1a8 = (undefined4 *)CONCAT31(puStack_1a8._1_3_,(abStack_17c[0] & 0x8f) == 10);
          puStack_1bc = puStack_1a8;
          pcStack_1c4 = "GROUPMEMBER_CLASS_NAME";
          piStack_1c8 = local_178;
          pppiStack_1cc = (int ***)0x108b3a54;
          cVar2 = (**(code **)(*piVar10 + 0x10))();
          puVar8 = (undefined4 *)0x0;
          if (((cVar2 != '\0') && (((byte)uStack_144 & 0x8f) == 6)) &&
             (puVar8 = puStack_140, puStack_1bc = puStack_140, (uStack_144 >> 6 & 1) != 0)) {
            puStack_1bc = (undefined4 *)*puStack_140;
            puVar8 = puStack_1bc;
          }
          pppiStack_1cc = *(int ****)(iVar4 + 0x2a8);
          ppiStack_1d0 = (int **)0x11dd4c24;
          ppuStack_1d4 = (undefined1 **)0x108b3a9e;
          FUN_104d1550();
          ppuStack_1d4 = *(undefined1 ***)(iVar4 + 0x2a4);
          ppiStack_1d8 = (int **)0x11dd4c3c;
          ppuStack_1dc = (undefined1 **)0x108b3ab4;
          FUN_104d1550();
          pppiStack_1cc = (int ***)0x108b3abc;
          uVar9 = FUN_111f8d20();
          ppiStack_1b4 = ppiStack_10c;
          iVar4 = unaff_EDI;
          if (ppiStack_10c != ppiStack_108) {
            do {
              pppiStack_194 = (int ***)((ulonglong)uVar9 >> 0x20);
              piStack_1b8 = (int *)uVar9;
              piVar10 = *ppiStack_1b4;
              pppiStack_1cc = (int ***)0x0;
              ppiStack_1d0 = (int **)0x0;
              ppiStack_1d8 = &piStack_1b0;
              piStack_1b0 = (int *)0x0;
              pcStack_1ac = (char *)0x0;
              ppuStack_1dc = (undefined1 **)0x108b3b03;
              ppuStack_1d4 = (undefined1 **)puVar8;
              FUN_11a98de0();
              puStack_1a8 = (undefined4 *)piVar10[8];
              uStack_1a4 = piVar10[9];
              ppuStack_1dc = (undefined1 **)&DAT_11dd4c54;
              puStack_1e0 = (undefined *)0x108b3b27;
              FUN_104d14d0();
              ppuStack_1dc = (undefined1 **)0x108b3b31;
              ppuStack_1dc = (undefined1 **)(**(code **)(*piVar10 + 4))();
              puStack_1e0 = &DAT_11dd4c5c;
              ppppiStack_1e4 = (int ****)0x108b3b42;
              FUN_104d1440();
              ppiStack_c4 = (int **)((uint)ppiStack_c4 & 0xffffff00);
              pppiStack_b4 = &ppiStack_c4;
              piStack_e4 = aiStack_f4;
              ppuStack_1dc = (undefined1 **)piVar10[6];
              puStack_1e0 = (undefined *)piVar10[7];
              ppppiStack_1e4 = (int ****)0x108b3b84;
              piStack_e0 = piStack_e4;
              pppiStack_b0 = pppiStack_b4;
              FUN_100b62c0();
              ppppiStack_1e4 = (int ****)0x108b3b97;
              FUN_108b9da0();
              if ((ppppiStack_e8 != &pppiStack_fc) && (ppppiStack_e8 != (int ****)0x0)) {
                ppppiStack_1e4 = ppppiStack_e8;
                ppiStack_1e8 = (int **)0x108b3bb3;
                FUN_10c3d5d0();
              }
              ppppiStack_1e4 = (int ****)piStack_b8;
              ppiStack_1e8 = (int **)0x11dd4c60;
              pcStack_1ec = (char *)0x108b3bcd;
              FUN_104d1670();
              ppppiStack_1e4 = (int ****)0x108b3bd7;
              ppppiStack_1e4 = (int ****)(**(code **)(*piVar10 + 8))();
              ppiStack_1e8 = (int **)0x11dd4b84;
              pcStack_1ec = (char *)0x108b3be8;
              FUN_104d1550();
              ppppiStack_1e4 = (int ****)0x108b3bf2;
              ppppiStack_1e4 = (int ****)(**(code **)(*piVar10 + 0x3c))();
              ppiStack_1e8 = (int **)0x11dd4b94;
              pcStack_1ec = (char *)0x108b3c03;
              FUN_104d1550();
              piStack_190 = (int *)0x0;
              uStack_18c = 0;
              ppppiStack_1e4 = (int ****)0x108b3c1d;
              iVar4 = FUN_114b0f80();
              iVar4 = *(int *)(iVar4 + 4);
              if ((uStack_18c >> 6 & 1) != 0) {
                ppiStack_1e8 = &piStack_190;
                pcStack_1ec = (char *)0x108b3c3d;
                ppppiStack_1e4 = (int ****)unaff_EDI;
                (**(code **)(*piStack_190 + 8))();
                piStack_190 = (int *)0x0;
              }
              uStack_18c = 4;
              ppppiStack_1e4 = (int ****)(uint)(((byte)pcStack_1c4 & 0x8f) == 10);
              ppiStack_1e8 = &piStack_190;
              pcStack_1ec = "titleIndex";
              puStack_1f0 = puStack_1c0;
              uStack_1f4 = 0x108b3c7a;
              (**(code **)(*piStack_1c8 + 0x14))();
              pppiStack_b4 = &ppiStack_c4;
              ppiStack_c4 = (int **)((uint)ppiStack_c4 & 0xffffff00);
              uStack_1f4 = 0x108b3c9e;
              pppiStack_b0 = pppiStack_b4;
              iVar5 = FUN_114b0f80();
              pppiStack_fc = &ppiStack_10c;
              uStack_1f4 = *(undefined4 *)(iVar5 + 0x18);
              uStack_1f8 = *(undefined4 *)(iVar5 + 0x1c);
              piStack_1fc = (int *)0x108b3cbe;
              pppiStack_f8 = pppiStack_fc;
              FUN_100b62c0();
              piStack_1fc = (int *)0x108b3cd1;
              FUN_108b9da0();
              if ((puStack_100 != auStack_114) && (puStack_100 != (undefined1 *)0x0)) {
                piStack_1fc = (int *)puStack_100;
                pcStack_200 = (char *)0x108b3ced;
                FUN_10c3d5d0();
              }
              piStack_1fc = piStack_b8;
              pcStack_200 = "titleName";
              uStack_204 = 0x108b3d07;
              FUN_104d1670();
              piStack_1fc = (int *)0x108b3d11;
              piStack_1fc = (int *)(**(code **)(*piVar10 + 0x14))();
              pcStack_200 = "currentP";
              uStack_204 = 0x108b3d22;
              FUN_104d1550();
              piStack_1fc = (int *)0x108b3d2c;
              piStack_1fc = (int *)(**(code **)(*piVar10 + 0x28))();
              pcStack_200 = "growLevel";
              uStack_204 = 0x108b3d3d;
              FUN_104d1550();
              piStack_1fc = (int *)0x108b3d47;
              piStack_1fc = (int *)(**(code **)(*piVar10 + 0x2c))();
              pcStack_200 = "hunterNum";
              uStack_204 = 0x108b3d58;
              FUN_104d1550();
              piStack_1fc = (int *)0x108b3d62;
              piStack_1fc = (int *)(**(code **)(*piVar10 + 0x24))();
              pcStack_200 = "weekP";
              uStack_204 = 0x108b3d73;
              FUN_104d1550();
              piStack_1fc = (int *)0x108b3d7d;
              piStack_1fc = (int *)(**(code **)(*piVar10 + 0x30))();
              pcStack_200 = "taskNum";
              uStack_204 = 0x108b3d8e;
              FUN_104d1550();
              uStack_204 = (uint)*(byte *)(piVar10 + 0x32);
              pcStack_208 = "isBaned";
              FUN_104d15e0();
              piStack_1fc = (int *)0x0;
              pcStack_200 = (char *)0x0;
              uStack_204 = 0;
              pcStack_208 = (char *)0x0;
              (**(code **)(*piStack_160 + 0x208))();
              FUN_104d15e0();
              _Val = (**(code **)(*piVar10 + 0x20))();
              _i64toa(_Val,(char *)&pppiStack_b4,10);
              piStack_bc = aiStack_cc;
              ppppiVar6 = &pppiStack_b4;
              do {
                cVar2 = *(char *)ppppiVar6;
                ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
              } while (cVar2 != '\0');
              piStack_b8 = piStack_bc;
              FUN_100b62c0();
              FUN_104d1670();
              iVar5 = 0;
              cVar2 = (**(code **)(*piVar10 + 0x10))();
              if ((cVar2 == '\0') && (iVar5 = (int)pcStack_208 - piVar10[0x25], iVar5 < 0)) {
                iVar5 = 0;
              }
              FUN_104d1550();
              FUN_104d1550("offlineTimeSpan",iVar5);
              apiStack_11c[0] = (int *)((uint)apiStack_11c[0] & 0xffffff00);
              ppiStack_10c = apiStack_11c;
              ppiStack_124 = apiStack_134;
              ppiStack_120 = ppiStack_124;
              ppiStack_108 = ppiStack_10c;
              FUN_100b62c0();
              FUN_108b9da0();
              if ((puStack_128 != auStack_13c) && (puStack_128 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(puStack_128);
              }
              FUN_104d1670("otherMess",uStack_110);
              (**(code **)(*piStack_1b8 + 0x3c))(piStack_1b0,&pcStack_208);
              if ((piStack_b8 != aiStack_cc) && (piStack_b8 != (int *)0x0)) {
                pppiStack_1cc = (int ***)piStack_b8;
                ppiStack_1d0 = (int **)0x108b3f65;
                FUN_10c3d5d0();
              }
              if ((puStack_70 != auStack_84) && (puStack_70 != (undefined1 *)0x0)) {
                pppiStack_1cc = (int ***)puStack_70;
                ppiStack_1d0 = (int **)0x108b3f84;
                FUN_10c3d5d0();
              }
              if ((puStack_88 != auStack_9c) && (puStack_88 != (undefined1 *)0x0)) {
                pppiStack_1cc = (int ***)puStack_88;
                ppiStack_1d0 = (int **)0x108b3fa3;
                FUN_10c3d5d0();
              }
              if ((uStack_174 >> 6 & 1) != 0) {
                ppiStack_1d0 = &local_178;
                pppiStack_1cc = (int ***)uStack_170;
                ppuStack_1d4 = (undefined1 **)0x108b3fc3;
                (**(code **)(*local_178 + 8))();
                local_178 = (int *)0x0;
              }
              uStack_174 = 0;
              if (((int ****)pppiStack_a0 != &pppiStack_b4) &&
                 ((int ****)pppiStack_a0 != (int ****)0x0)) {
                pppiStack_1cc = pppiStack_a0;
                ppiStack_1d0 = (int **)0x108b3fef;
                FUN_10c3d5d0();
              }
              if (((uint)pcStack_1ac >> 6 & 1) != 0) {
                ppiStack_1d0 = &piStack_1b0;
                pppiStack_1cc = (int ***)puStack_1a8;
                ppuStack_1d4 = (undefined1 **)0x108b400f;
                (**(code **)(*piStack_1b0 + 8))();
              }
              uVar9 = CONCAT44(pppiStack_194,piStack_1b8);
              ppiStack_1b4 = ppiStack_1b4 + 1;
              puVar8 = puStack_1bc;
              unaff_EDI = iVar4;
            } while (ppiStack_1b4 != ppiStack_108);
          }
          puStack_1e0 = (undefined *)iVar4;
          pppiStack_194 = (int ***)((ulonglong)uVar9 >> 0x20);
          piStack_1b8 = (int *)uVar9;
          puStack_100 = (undefined1 *)0x0;
          pppiStack_fc = (int ***)0x0;
          puStack_128 = (undefined1 *)0x0;
          pppiStack_1cc = (int ***)(uint)(((byte)uStack_18c & 0x8f) == 10);
          ppiStack_1d0 = (int **)0x1;
          ppuStack_1d4 = &puStack_128;
          ppiStack_124 = (int **)0x3;
          ppiStack_1d8 = (int **)0x11dd4d40;
          ppuStack_1dc = &puStack_100;
          ppiStack_120 = (int **)0x1;
          ppppiStack_1e4 = (int ****)0x108b4098;
          (**(code **)(*piStack_190 + 0x18))();
          if (((uint)ppppiStack_e8 >> 6 & 1) != 0) {
            pppiStack_194 = &ppiStack_ec;
            piStack_190 = piStack_e4;
            uStack_198 = 0x108b40c1;
            (*(code *)(*ppiStack_ec)[2])();
            ppiStack_ec = (int **)0x0;
          }
          ppppiStack_e8 = (int ****)0x0;
          if ((uStack_c0 >> 6 & 1) != 0) {
            pppiStack_194 = &ppiStack_c4;
            piStack_190 = piStack_bc;
            uStack_198 = 0x108b4100;
            (*(code *)(*ppiStack_c4)[2])();
            ppiStack_c4 = (int **)0x0;
          }
          uStack_c0 = 0;
          if (((uint)ppiStack_108 >> 6 & 1) != 0) {
            pppiStack_194 = &ppiStack_10c;
            piStack_190 = piStack_104;
            uStack_198 = 0x108b413f;
            (*(code *)(*ppiStack_10c)[2])();
            ppiStack_10c = (int **)0x0;
          }
          ppiStack_108 = (int **)0x0;
          if (((uint)ppiStack_120 >> 6 & 1) != 0) {
            pppiStack_194 = &ppiStack_124;
            piStack_190 = apiStack_11c[0];
            uStack_198 = 0x108b4172;
            (*(code *)(*ppiStack_124)[2])();
            ppiStack_124 = (int **)0x0;
          }
          ppiStack_120 = (int **)0x0;
          if ((uStack_150 >> 6 & 1) != 0) {
            pppiStack_194 = &ppiStack_154;
            piStack_190 = piStack_14c;
            uStack_198 = 0x108b419f;
            (*(code *)(*ppiStack_154)[2])();
            ppiStack_154 = (int **)0x0;
          }
          uStack_150 = 0;
          if (piStack_d0 != (int *)0x0) {
            piStack_190 = piStack_d0;
            pppiStack_194 = (int ***)0x108b41c0;
            FUN_10c3d5d0();
          }
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108b4790 @ 108b4790  size=1584 ===== */
// strings:
//   "searchGroupArray"
//   "GroupListMaxPageNum"
//   "GroupListCurrentPage"
//   "SEARCHGROUP_CLASS_NAME"
//   "guildId"
//   "level"
//   "leader"
//   "prestige"
//   "Maxnum"
//   "AVGLevel"
//   "REQLevel"
//   "UpdataSEARCHGROUP"

/* [RE-AUTO c0]
   strings:
     ""searchGroupArray""
     ""GroupListMaxPageNum""
     ""GroupListCurrentPage""
     ""SEARCHGROUP_CLASS_NAME""
     ""guildId""
     ""level""
     ""leader""
     ""prestige""
     ""Maxnum""
     ""AVGLevel"" */

void __fastcall FUN_108b4790(int param_1)

{
  int **ppiVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int ****ppppiVar5;
  int *piVar6;
  int ***pppiVar7;
  int *unaff_ESI;
  byte unaff_DI;
  undefined *puStack_164;
  char *pcStack_160;
  int **ppiStack_15c;
  int *piStack_158;
  int **ppiStack_154;
  int ***pppiStack_150;
  char *pcStack_14c;
  char *pcStack_148;
  int *piStack_144;
  int *piStack_140;
  int *piStack_13c;
  uint uStack_138;
  uint uStack_134;
  char *pcStack_130;
  int *piStack_12c;
  int ****ppppiStack_128;
  int ***pppiStack_124;
  int *piStack_114;
  byte bStack_110;
  undefined4 uStack_10c;
  int *piStack_fc;
  int ***pppiStack_f8;
  uint uStack_f4;
  int ***pppiStack_f0;
  int *piStack_ec;
  uint uStack_e8;
  int *piStack_e4;
  int iStack_dc;
  int ***pppiStack_d8;
  uint uStack_d4;
  int ***pppiStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int ***pppiStack_c0;
  uint uStack_bc;
  int ***pppiStack_b8;
  undefined4 uStack_b4;
  int **ppiStack_b0;
  int ***pppiStack_ac;
  int ***pppiStack_a8;
  int ***pppiStack_a4;
  int ***pppiStack_a0;
  int ***pppiStack_9c;
  int ***pppiStack_98;
  int ***pppiStack_94;
  undefined4 uStack_8c;
  int ****ppppiStack_88;
  int ****ppppiStack_84;
  int ***pppiStack_80;
  undefined4 uStack_7c;
  int ****ppppiStack_78;
  int ****ppppiStack_74;
  int ***pppiStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [12];
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 **ppuStack_3c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_114;
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar6 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar6 != (int *)0x0)) {
    pppiStack_124 = (int ***)0x108b47e1;
    iVar4 = (**(code **)(*piVar6 + 0xb4))();
    if (iVar4 != 0) {
      piStack_114 = *(int **)(iVar4 + 0x2abc);
      pppiStack_124 = (int ***)0x108b47fa;
      ppppiVar5 = (int ****)FUN_1117ce00();
      pppiStack_a4 = (int ***)ppppiVar5;
      if (*(int **)(param_1 + 0x24) != (int *)0x0) {
        pppiStack_124 = (int ***)0x108b4813;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))();
        if (iVar4 != 0) {
          pppiStack_124 = (int ***)0x108b4826;
          piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x24) + 0x8c))();
          pppiStack_124 = (int ***)0x108b4830;
          iVar4 = (**(code **)(*piVar6 + 0x108))();
          if (iVar4 != 0) {
            pppiStack_124 = (int ***)(param_1 + 0x28);
            ppppiStack_128 = (int ****)0x108b4847;
            FUN_104f4330();
            iStack_dc = 0;
            pppiStack_d8 = (int ***)0x0;
            ppppiStack_128 = (int ****)(uint)(((byte)pppiStack_f8 & 0x8f) == 10);
            piStack_12c = &iStack_dc;
            pcStack_130 = "searchGroupArray";
            uStack_134 = uStack_f4;
            uStack_138 = 0x108b4880;
            (**(code **)(*piStack_fc + 0x10))();
            uStack_138 = 0;
            piStack_13c = piStack_e4;
            piStack_140 = (int *)0x108b488f;
            (**(code **)(*piStack_ec + 0x2c))();
            pcVar2 = pcStack_130;
            piStack_140 = *(int **)(pcStack_130 + 0x54);
            piStack_144 = (int *)0x11dd4cd0;
            pcStack_148 = (char *)0x108b48a6;
            FUN_104d1550();
            pcStack_148 = *(char **)(pcVar2 + 0x50);
            pcStack_14c = "GroupListCurrentPage";
            pppiStack_150 = (int ***)0x108b48b9;
            FUN_104d1550();
            piStack_144 = &iStack_dc;
            iStack_dc = 0;
            pppiStack_d8 = (int ***)0x0;
            pcStack_130 = (char *)0x0;
            piStack_fc = (int *)CONCAT31(piStack_fc._1_3_,(bStack_110 & 0x8f) == 10);
            piStack_140 = piStack_fc;
            pcStack_148 = "SEARCHGROUP_CLASS_NAME";
            pcStack_14c = (char *)uStack_10c;
            pppiStack_150 = (int ***)0x108b4901;
            cVar3 = (**(code **)(*piStack_114 + 0x10))();
            if ((cVar3 == '\0') || (((byte)uStack_e8 & 0x8f) != 6)) {
              piStack_e4 = (int *)0x0;
            }
            else {
              piStack_140 = piStack_e4;
              if ((uStack_e8 >> 6 & 1) != 0) {
                piStack_e4 = (int *)*piStack_e4;
                piStack_140 = piStack_e4;
              }
            }
            pppiVar7 = *ppppiVar5;
            piStack_158 = piStack_e4;
            piVar6 = unaff_ESI;
            if (pppiVar7 != ppppiVar5[1]) {
              do {
                ppiVar1 = *pppiVar7;
                pppiStack_150 = (int ***)0x0;
                ppiStack_154 = (int **)0x0;
                ppiStack_15c = &piStack_13c;
                piStack_13c = (int *)0x0;
                uStack_138 = 0;
                pcStack_160 = (char *)0x108b4958;
                FUN_11a98de0();
                piVar6 = *ppiVar1;
                pcStack_160 = "guildId";
                puStack_164 = (undefined *)0x108b497b;
                FUN_104d14d0();
                pcStack_160 = (char *)ppiVar1[8];
                puStack_164 = &DAT_11dbf768;
                FUN_104d1550();
                auStack_60[0] = 0;
                puStack_50 = auStack_60;
                pppiStack_98 = (int ***)&pppiStack_a8;
                pcStack_160 = (char *)ppiVar1[6];
                puStack_164 = (undefined *)ppiVar1[7];
                pppiStack_94 = pppiStack_98;
                puStack_4c = puStack_50;
                FUN_100b62c0();
                FUN_108b9da0();
                if ((pppiStack_9c != &ppiStack_b0) && ((int ****)pppiStack_9c != (int ****)0x0)) {
                  FUN_10c3d5d0(pppiStack_9c);
                }
                FUN_104d1670(&DAT_11dbac80,puStack_54);
                FUN_104d1550("level",ppiVar1[0xf]);
                pppiStack_98 = (int ***)((uint)pppiStack_98 & 0xffffff00);
                ppppiStack_88 = &pppiStack_98;
                pppiStack_a0 = &ppiStack_b0;
                pppiStack_9c = pppiStack_a0;
                ppppiStack_84 = ppppiStack_88;
                FUN_100b62c0(ppiVar1[0x16],ppiVar1[0x15]);
                FUN_108b9da0();
                if (((int ****)pppiStack_a4 != &pppiStack_b8) &&
                   ((int ****)pppiStack_a4 != (int ****)0x0)) {
                  FUN_10c3d5d0(pppiStack_a4);
                }
                FUN_104d1670("leader",uStack_8c);
                ppppiStack_88 = (int ****)((uint)ppppiStack_88 & 0xffffff00);
                ppppiStack_78 = (int ****)&ppppiStack_88;
                pppiStack_a8 = (int ***)&pppiStack_b8;
                pppiStack_a4 = pppiStack_a8;
                ppppiStack_74 = ppppiStack_78;
                FUN_100b62c0(ppiVar1[0xe],ppiVar1[0xd]);
                FUN_108b9da0();
                if (((int ****)pppiStack_ac != &pppiStack_c0) &&
                   ((int ****)pppiStack_ac != (int ****)0x0)) {
                  FUN_10c3d5d0(pppiStack_ac);
                }
                FUN_104d1670(&DAT_11dd4e00,uStack_7c);
                FUN_104d1550("prestige",ppiVar1[0x10]);
                FUN_104d1550(&DAT_11dbdc0c,ppiVar1[0x17]);
                FUN_104d1550("Maxnum",ppiVar1[0x17]);
                FUN_104d1550("AVGLevel",ppiVar1[0x18]);
                FUN_104d1550("REQLevel",ppiVar1[0x19]);
                (**(code **)(*piStack_12c + 0x3c))(pppiStack_124,&puStack_164);
                if ((puStack_54 != auStack_68) && (puStack_54 != (undefined1 *)0x0)) {
                  pppiStack_150 = (int ***)puStack_54;
                  ppiStack_154 = (int **)0x108b4bd5;
                  FUN_10c3d5d0();
                }
                if (((int ****)pppiStack_6c != &pppiStack_80) &&
                   ((int ****)pppiStack_6c != (int ****)0x0)) {
                  pppiStack_150 = pppiStack_6c;
                  ppiStack_154 = (int **)0x108b4bf4;
                  FUN_10c3d5d0();
                }
                if ((ppuStack_3c != &puStack_50) && (ppuStack_3c != (undefined1 **)0x0)) {
                  pppiStack_150 = (int ***)ppuStack_3c;
                  ppiStack_154 = (int **)0x108b4c13;
                  FUN_10c3d5d0();
                }
                if ((uStack_138 >> 6 & 1) != 0) {
                  ppiStack_154 = &piStack_13c;
                  pppiStack_150 = (int ***)uStack_134;
                  piStack_158 = (int *)0x108b4c33;
                  (**(code **)(*piStack_13c + 8))();
                }
                pppiVar7 = pppiVar7 + 1;
                piStack_158 = piStack_140;
              } while (pppiVar7 != (int ***)pppiStack_d0[1]);
            }
            puStack_164 = (undefined *)piVar6;
            uStack_b4 = 0;
            ppiStack_b0 = (int **)0x0;
            uStack_cc = 0;
            pppiStack_150 = (int ***)(uint)((unaff_DI & 0x8f) == 10);
            ppiStack_154 = (int **)0x1;
            piStack_158 = &uStack_cc;
            uStack_c8 = 3;
            ppiStack_15c = (int **)0x11dd4d68;
            pcStack_160 = (char *)&uStack_b4;
            uStack_c4 = 1;
            (*(code *)(*pppiStack_124)[6])();
            if (((uint)pppiStack_9c >> 6 & 1) != 0) {
              ppppiStack_128 = &pppiStack_a0;
              pppiStack_124 = pppiStack_98;
              piStack_12c = (int *)0x108b4cdd;
              (*(code *)(*pppiStack_a0)[2])();
              pppiStack_a0 = (int ***)0x0;
            }
            pppiStack_9c = (int ***)0x0;
            if (((uint)ppppiStack_84 >> 6 & 1) != 0) {
              ppppiStack_128 = (int ****)&ppppiStack_88;
              pppiStack_124 = pppiStack_80;
              piStack_12c = (int *)0x108b4d1c;
              (*(code *)(*ppppiStack_88)[2])();
              ppppiStack_88 = (int ****)0x0;
            }
            ppppiStack_84 = (int ****)0x0;
            if ((uStack_bc >> 6 & 1) != 0) {
              ppppiStack_128 = &pppiStack_c0;
              pppiStack_124 = pppiStack_b8;
              piStack_12c = (int *)0x108b4d4f;
              (*(code *)(*pppiStack_c0)[2])();
              pppiStack_c0 = (int ***)0x0;
            }
            uStack_bc = 0;
            if ((uStack_d4 >> 6 & 1) != 0) {
              ppppiStack_128 = &pppiStack_d8;
              pppiStack_124 = pppiStack_d0;
              piStack_12c = (int *)0x108b4d7c;
              (*(code *)(*pppiStack_d8)[2])();
              pppiStack_d8 = (int ***)0x0;
            }
            uStack_d4 = 0;
            if ((uStack_f4 >> 6 & 1) != 0) {
              ppppiStack_128 = &pppiStack_f8;
              pppiStack_124 = pppiStack_f0;
              piStack_12c = (int *)0x108b4da9;
              (*(code *)(*pppiStack_f8)[2])();
            }
          }
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_108ca7e0 @ 108ca7e0  size=2883 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "other_info"
//   "taskName"
//   "taskLevel"
//   "queststatus"
//   "bTeam"
//   "bRepeat"
//   "gold_bind"
//   "farm_actuarialpoint"
//   "hunter_exp"
//   "hunter_fund"
//   "hunter_contribution"
//   "npcfriendvalue"
//   "TaskContent"
//   "limit"
//   "task_awardList"
//   "TASK_AWARD_CLASS_NAME"
//   "itemIconPathName"
//   "slotid"
//   "ItemID"
//   "task_targets"

/* [RE-AUTO c0]
   strings:
     ""other_info""
     ""taskName""
     ""taskLevel""
     ""queststatus""
     ""bTeam""
     ""bRepeat""
     ""gold_bind""
     ""farm_actuarialpoint""
     ""hunter_exp""
     ""hunter_fund"" */

void __fastcall FUN_108ca7e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int **extraout_ECX;
  int **ppiVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int *local_e0;
  uint local_dc;
  undefined4 local_d8;
  int *local_c8;
  uint local_c4;
  undefined4 local_c0;
  int *local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_94;
  int *local_90;
  uint local_8c;
  float *local_88;
  int *local_78;
  uint local_74;
  undefined4 local_70;
  float *local_6c;
  float *local_68;
  int *local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 *local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  float *local_30;
  float local_2c;
  int *local_28;
  uint local_24;
  undefined4 *local_20;
  int **local_18;
  int **local_14;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_94 = param_2;
  local_44 = param_1;
  if (0 < DAT_123bbaac) {
    local_60 = (int *)0x0;
    local_5c = 0;
    local_34 = (undefined4 *)CONCAT31(local_34._1_3_,((byte)param_1[1] & 0x8f) == 10);
    local_c8 = (int *)0x0;
    local_c4 = 0;
    local_b0 = (int *)0x0;
    local_ac = 0;
    local_e0 = (int *)0x0;
    local_dc = 0;
    cVar2 = (**(code **)(*(int *)*param_1 + 0x10))(param_1[2],"other_info",&local_60,local_34);
    if (cVar2 != '\0') {
      local_18 = &local_28;
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      local_14 = local_18;
      FUN_100e5aa0(local_18);
      FUN_104d1670("taskName",local_14);
      ppiVar5 = &local_28;
      if ((local_14 != ppiVar5) && (local_14 != (int **)0x0)) {
        FUN_10c3d5d0(local_14);
        ppiVar5 = extraout_ECX;
      }
      FUN_104d8d20(*(undefined4 *)(param_2 + 4),ppiVar5,&local_38);
      puVar3 = (undefined4 *)FUN_117c1280();
      FUN_104d1550("taskLevel",*puVar3);
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      local_18 = &local_28;
      local_14 = local_18;
      FUN_100e5aa0(local_18);
      FUN_104d1670("taskName",local_14);
      if ((local_14 != &local_28) && (local_14 != (int **)0x0)) {
        FUN_10c3d5d0(local_14);
      }
      local_34 = *(undefined4 **)(param_2 + 4);
      iVar4 = (**(code **)(*DAT_123bbab4 + 0x50))(local_34);
      if (iVar4 == 0) {
        cVar2 = (**(code **)(*DAT_123bbab4 + 0x60))(local_34);
        uVar6 = -(uint)(cVar2 != '\0') & 10;
      }
      else {
        uVar6 = *(uint *)(iVar4 + 0x14);
      }
      FUN_104d1550("queststatus",uVar6);
      iVar4 = FUN_10804c90();
      if ((iVar4 == 0) || (**(int **)(iVar4 + 4) < 2)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      FUN_104d15e0("bTeam",uVar9);
      FUN_104d15e0("bRepeat",*(char *)(param_2 + 0x80) != '\0');
      local_2c = (float)FUN_10804cd0(param_2 + 0x4c,0x19);
      local_34 = (undefined4 *)0x0;
      if (local_2c == 0.0) {
        FUN_104d1550(&DAT_11dbfbc8,0);
      }
      else {
        local_30 = (float *)0x0;
        if (DAT_123bbaa8 != 0) {
          uVar9 = CPlayer__GetHuntRankOrCount(*(undefined4 *)((int)local_2c + 4),0,0,&local_30,0);
          FUN_1185f2e0(uVar9);
          FUN_104d1550(&DAT_11dbfbc8,(int)((float)*(int *)((int)local_2c + 8) * (float)local_30));
        }
      }
      local_40 = FUN_10804940(param_2 + 0x4c,0x18);
      if (local_40 == 0) {
        FUN_104d1550(&DAT_11dc0944,0);
        iVar4 = 0;
      }
      else {
        local_30 = (float *)0x0;
        local_2c = 0.0;
        if (DAT_123bbaa8 != 0) {
          uVar9 = CPlayer__GetHuntRankOrCount(*(undefined4 *)(local_40 + 4),&local_2c,&local_30,0,0)
          ;
          FUN_1185f2e0(uVar9);
        }
        FUN_104d1550(&DAT_11dc0944,(int)((float)*(int *)(local_40 + 8) * (float)local_30));
        iVar4 = (int)((float)*(int *)(local_40 + 0xc) * local_2c);
      }
      FUN_104d1550("gold_bind",iVar4);
      local_40 = FUN_10804980();
      if (local_40 == 0) {
        iVar4 = 0;
      }
      else {
        local_2c = 0.0;
        if (DAT_123bbaa8 != 0) {
          uVar9 = CPlayer__GetHuntRankOrCount(*(undefined4 *)(local_40 + 4),0,0,0,&local_2c);
          FUN_1185f2e0(uVar9);
          local_34 = (undefined4 *)local_2c;
        }
        iVar4 = (int)((float)*(int *)(local_40 + 8) * (float)local_34);
      }
      FUN_104d1550("farm_actuarialpoint",iVar4);
      local_34 = (undefined4 *)FUN_108049c0(param_2 + 0x4c,0x21);
      if (local_34 == (undefined4 *)0x0) {
        FUN_104d1550("hunter_exp",0);
        uVar9 = 0;
      }
      else {
        FUN_104d1550("hunter_exp",*(undefined4 *)((int)local_34 + 8));
        uVar9 = *(undefined4 *)((int)local_34 + 0xc);
      }
      FUN_104d1550("hunter_fund",uVar9);
      iVar4 = FUN_108049c0(param_2 + 0x4c,0x21);
      if (iVar4 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar4 + 4);
      }
      FUN_104d1550("hunter_contribution",uVar9);
      iVar4 = FUN_10804a00();
      if (iVar4 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar4 + 8);
      }
      FUN_104d1550("npcfriendvalue",uVar9);
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      local_18 = &local_28;
      local_14 = local_18;
      FUN_100e5aa0(local_18);
      FUN_104d1670("TaskContent",local_14);
      if ((local_14 != &local_28) && (local_14 != (int **)0x0)) {
        FUN_10c3d5d0(local_14);
      }
    }
    local_34 = (undefined4 *)CONCAT31(local_34._1_3_,((byte)param_1[1] & 0x8f) == 10);
    cVar2 = (**(code **)(*(int *)*param_1 + 0x10))(param_1[2],"limit",&local_e0,local_34);
    if (cVar2 != '\0') {
      FUN_108cb330(param_3);
    }
    local_34 = (undefined4 *)CONCAT31(local_34._1_3_,((byte)param_1[1] & 0x8f) == 10);
    cVar2 = (**(code **)(*(int *)*param_1 + 0x10))(param_1[2],"task_awardList",&local_c8,local_34);
    if (cVar2 != '\0') {
      (**(code **)(*local_c8 + 0x44))(local_c0,0,0xffffffff);
      local_28 = (int *)0x0;
      local_24 = 0;
      local_34 = (undefined4 *)CONCAT31(local_34._1_3_,((byte)param_1[1] & 0x8f) == 10);
      cVar2 = (**(code **)(*(int *)*param_1 + 0x10))
                        (param_1[2],"TASK_AWARD_CLASS_NAME",&local_28,local_34);
      if ((cVar2 != '\0') && (((byte)local_24 & 0x8f) == 6)) {
        local_34 = local_20;
        if ((local_24 >> 6 & 1) != 0) {
          local_34 = (undefined4 *)*local_20;
        }
        local_90 = (int *)0x0;
        local_8c = 0;
        iVar4 = FUN_10804900(param_2 + 0x4c,0x1f);
        if (iVar4 != 0) {
          FUN_107ff120(iVar4 + 4);
          uVar8 = 0;
          local_30 = local_6c;
          uVar6 = (uint)((int)local_68 + (3 - (int)local_6c)) >> 2;
          if (local_68 < local_6c) {
            uVar6 = 0;
          }
          if (uVar6 != 0) {
            do {
              local_2c = *local_30;
              local_40 = *(int *)((int)local_2c + 4);
              FUN_11a98de0(&local_90,local_34,0,0);
              if (local_40 == 0) {
                FUN_104d1670("itemIconPathName",&DAT_11d9d32b);
                FUN_104d1550("slotid",10);
                FUN_104d1550("ItemID",0);
                FUN_104d1550(&DAT_11dbdc0c,0);
              }
              else {
                FUN_104d1670("itemIconPathName",*(undefined4 *)(local_40 + 0xb4));
                FUN_104d1550("slotid",uVar8);
                uVar9 = (**(code **)(**(int **)((int)local_2c + 4) + 0x18))();
                FUN_104d1550("ItemID",uVar9);
                FUN_104d1550(&DAT_11dbdc0c,*(undefined4 *)((int)local_2c + 8));
                FUN_104d1550(&DAT_11dca14c,*(undefined4 *)(local_40 + 0x10));
              }
              (**(code **)(*local_c8 + 0x3c))(local_c0,&local_90);
              uVar8 = uVar8 + 1;
              local_30 = local_30 + 1;
              param_1 = local_44;
            } while (uVar8 != uVar6);
          }
          if (local_6c != (float *)0x0) {
            FUN_10c3d5d0(local_6c);
          }
        }
        if ((local_8c >> 6 & 1) != 0) {
          (**(code **)(*local_90 + 8))(&local_90,local_88);
        }
      }
      if ((local_24 >> 6 & 1) != 0) {
        (**(code **)(*local_28 + 8))(&local_28,local_20);
      }
    }
    local_44 = (undefined4 *)CONCAT31(local_44._1_3_,((byte)param_1[1] & 0x8f) == 10);
    cVar2 = (**(code **)(*(int *)*param_1 + 0x10))(param_1[2],"task_targets",&local_b0,local_44);
    if (cVar2 != '\0') {
      (**(code **)(*local_b0 + 0x44))(local_a8,0,0xffffffff);
      puVar3 = (undefined4 *)0x0;
      local_90 = (int *)0x0;
      local_8c = 0;
      local_3c = (undefined4 *)0x0;
      local_44 = (undefined4 *)CONCAT31(local_44._1_3_,((byte)param_1[1] & 0x8f) == 10);
      local_38 = (undefined4 *)0x0;
      local_34 = (undefined4 *)0x0;
      cVar2 = (**(code **)(*(int *)*param_1 + 0x10))
                        (param_1[2],"TASK_TARGET_VO_NAME",&local_90,local_44);
      iVar4 = local_94;
      puVar7 = local_3c;
      if ((cVar2 != '\0') && (((byte)local_8c & 0x8f) == 6)) {
        local_30 = local_88;
        if ((local_8c >> 6 & 1) != 0) {
          local_30 = (float *)*local_88;
        }
        cVar2 = FUN_100e57c0(&DAT_11d9d32b);
        if (cVar2 == '\0') {
          puVar7 = local_3c;
          if (iVar4 != 0) {
            local_28 = (int *)0x0;
            local_24 = 0;
            FUN_11a98de0(&local_28,local_30,0,0);
            FUN_104d1790("strTarget4",iVar4 + 0x14);
            FUN_104d1550("nOpType",0x1f);
            (**(code **)(*local_b0 + 0x3c))(local_a8,&local_28);
            FUN_104d7c10();
            puVar7 = local_3c;
          }
        }
        else {
          FUN_107fa640();
          puVar3 = local_38;
          local_78 = (int *)0x0;
          local_74 = 0;
          if (local_3c != local_38) {
            puVar7 = local_3c + 2;
            do {
              FUN_11a98de0(&local_78,local_30,0,0);
              FUN_104d1550("nTargetID1",puVar7[-2]);
              FUN_104d1550("nTargetID2",puVar7[-1]);
              FUN_104d1550("nTargetID3",*puVar7);
              FUN_104d1550("nTargetID4",puVar7[1]);
              FUN_104d1550("nTargetID5",puVar7[2]);
              FUN_104d1670("strTarget1",puVar7[0xb]);
              FUN_104d1670("strTarget2",puVar7[0x11]);
              FUN_104d1670("strTarget3",puVar7[0x17]);
              FUN_104d1670("strTarget4",puVar7[0x1d]);
              FUN_104d1670("strTarget5",puVar7[0x23]);
              FUN_104d1550("nOpType",puVar7[3]);
              FUN_104d1550("nCurCount",puVar7[4]);
              FUN_104d1550("nMaxCount",puVar7[5]);
              FUN_104d1550("nQuestType",puVar7[0x36]);
              FUN_104d1550(&DAT_11dca874,0);
              (**(code **)(*local_b0 + 0x3c))(local_a8,&local_78);
              puVar1 = puVar7 + 0x39;
              puVar7 = puVar7 + 0x3b;
            } while (puVar1 != puVar3);
          }
          puVar7 = local_3c;
          if ((local_74 >> 6 & 1) != 0) {
            (**(code **)(*local_78 + 8))(&local_78,local_70);
          }
        }
      }
      if ((local_8c >> 6 & 1) != 0) {
        (**(code **)(*local_90 + 8))(&local_90,local_88);
        local_90 = (int *)0x0;
      }
      local_8c = 0;
      for (; puVar3 != puVar7; puVar3 = puVar3 + -0x3b) {
        FUN_104f9f50();
      }
      if (puVar7 != (undefined4 *)0x0) {
        FUN_10c3d5d0(puVar7);
      }
    }
    if ((local_dc >> 6 & 1) != 0) {
      (**(code **)(*local_e0 + 8))(&local_e0,local_d8);
      local_e0 = (int *)0x0;
    }
    local_dc = 0;
    if ((local_ac >> 6 & 1) != 0) {
      (**(code **)(*local_b0 + 8))(&local_b0,local_a8);
      local_b0 = (int *)0x0;
    }
    local_ac = 0;
    if ((local_c4 >> 6 & 1) != 0) {
      (**(code **)(*local_c8 + 8))(&local_c8,local_c0);
      local_c8 = (int *)0x0;
    }
    local_c4 = 0;
    if ((local_5c >> 6 & 1) != 0) {
      (**(code **)(*local_60 + 8))(&local_60,local_58);
    }
  }
  FUN_11a89daa();
  return;
}



