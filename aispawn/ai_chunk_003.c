/* ===== FUN_10bdbc20 @ 10bdbc20  size=485 ===== */
// strings:
//   "camgoto"
//   "freeze"
//   "loadactionmap"
//   "restartgame"
//   "v_kill"
//   "sv_restart"
//   "sv_say"
//   "i_reload"
//   "dumpss"
//   "g_reloadGameRules"
//   "g_quickGame"
//   "g_quickGameStop"
//   "g_nextlevel"
//   "g_vote"
//   "g_startKickVoting"
//   "g_startNextMapVoting"
//   "g_battleDust_reload"
//   "bulletTimeMode"
//   "GOCMode"
//   "ShowGODMode"

/* [RE-AUTO c0]
   strings:
     ""camgoto""
     ""freeze""
     ""loadactionmap""
     ""restartgame""
     ""v_kill""
     ""sv_restart""
     ""sv_say""
     ""i_reload""
     ""dumpss""
     ""g_reloadGameRules"" */

void __fastcall FUN_10bdbc20(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))(&DAT_11cd4418);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))(&DAT_11cd4420);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("camgoto");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("freeze");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("loadactionmap");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("restartgame");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))(&DAT_11dbac80);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))(&DAT_11dd7eac);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))(&DAT_11cd44b0);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("v_kill");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("sv_restart");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("sv_say");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("i_reload");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("dumpss");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_reloadGameRules");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_quickGame");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_quickGameStop");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_nextlevel");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_vote");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_startKickVoting");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_startNextMapVoting");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_battleDust_reload");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("bulletTimeMode");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("GOCMode");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("ShowGODMode");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("test_pathfinder");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("CmdStartVideoCapture");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("CmdEndVideoCapture");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_hitDeathReactions_reload");
  (**(code **)(**(int **)(param_1 + 0x10) + 0x80))("g_hitDeathReactions_dumpAssetUsage");
  return;
}



/* ===== FUN_10be99f0 @ 10be99f0  size=3227 ===== */
// calls: CSculptureInfo::FindByLibKeyAndAppend, memset, _snprintf
// strings:
//   "RayWorldIntersection(Game)"
//   "%s_%08x"
//   "EmCommon"
//   "nMonsterDifficulty"
//   "nMonsterSizeScale"
//   "NPCSkillFile"
//   "NpcAnimationName1"
//   "NpcAnimationName2"
//   "NpcAnimationName3"
//   "NpcAnimationName4"
//   "NpcAnimationName5"
//   "NpcAnimationName6"
//   "NpcAnimationName7"
//   "NpcAnimationName8"
//   "DeadPose"
//   "CanLemon"
//   "BTCtrlObject"
//   "LastState"
//   "OnConnect"
//   "State"

/* [RE-AUTO c0]
   calls: CSculptureInfo::GetManagers_10be6ef0, memset, _snprintf
   strings:
     ""RayWorldIntersection(Game)""
     ""%s_%08x""
     ""EmCommon""
     ""nMonsterDifficulty""
     ""nMonsterSizeScale""
     ""NPCSkillFile""
     ""NpcAnimationName1""
     ""NpcAnimationName2""
     ""NpcAnimationName3""
     ""NpcAnimationName4"" */

undefined4 __thiscall FUN_10be99f0(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  char local_258;
  undefined1 local_257 [295];
  float local_130;
  int local_10c;
  int local_108;
  int *local_fc;
  char *local_f0;
  uint local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  uint local_ac;
  int *local_8c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  char *local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  int *local_28;
  undefined8 local_24;
  undefined8 local_1c;
  float local_14;
  int *local_10;
  char local_a;
  char local_9;
  int *local_8;
  
  param_1[0x10] = param_2;
  local_28 = param_1;
  if ((param_2 == 0) || (*(int *)(DAT_1202e818 + 0x50) == 0)) {
LAB_10be9f97:
    FUN_10be9720();
    return 0;
  }
  piVar7 = *(int **)(DAT_1202e818 + 0x50);
  local_9 = '\0';
  local_a = '\0';
  local_10 = piVar7;
  cVar2 = (**(code **)(*param_1 + 0x15c))();
  if (cVar2 != '\0') {
    local_9 = CSculptureInfo__FindByLibKeyAndAppend();
    cVar2 = (**(code **)(*(int *)param_1[0x10] + 0x9c))();
    if (cVar2 != '\0') {
      FUN_113a23b0();
      iVar3 = FUN_11681360();
      local_a = *(char *)(iVar3 + 0x4b);
    }
  }
  iVar3 = FUN_113a2790();
  local_30 = (ulonglong)DAT_11de9918;
  local_24 = 0;
  if (iVar3 == 0) {
    piVar7 = (int *)(**(code **)(*piVar7 + 0xfc))();
    local_8 = piVar7;
    if (piVar7 == (int *)0x0) goto LAB_10be9f97;
    iVar3 = (**(code **)(*piVar7 + 4))();
    param_1[0x11] = iVar3;
    puVar5 = (undefined4 *)FUN_11414f00();
    local_3c = *puVar5;
    local_38 = puVar5[1];
    local_34 = puVar5[2];
    (**(code **)(*piVar7 + 0x90))();
    puVar5 = (undefined4 *)FUN_11414f40();
    local_7c = *puVar5;
    local_78 = puVar5[1];
    local_74 = puVar5[2];
    local_70 = puVar5[3];
    (**(code **)(*piVar7 + 0xb0))();
  }
  else {
    if ((iVar3 != 1) && (iVar3 != 3)) {
      return 0;
    }
    FUN_10a6f680();
    puVar4 = (undefined8 *)FUN_11414f00();
    local_d8 = *(float *)(puVar4 + 1);
    local_e0 = *puVar4;
    local_14 = local_d8;
    cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))();
    if (cVar2 != '\0') {
      local_1c = local_e0;
      local_14 = local_d8 + (float)local_30;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0xc0000000;
      iVar3 = FUN_10a798b0();
      if (iVar3 != 0) {
        local_d8 = local_130;
      }
    }
    iVar3 = FUN_113a23b0();
    if (*(int *)(iVar3 + 0x20) == 3) {
      local_ac = (uint)(local_9 == '\0');
    }
    puVar5 = (undefined4 *)FUN_11414f40();
    local_14 = 1.0;
    local_d4 = *puVar5;
    uStack_d0 = puVar5[1];
    uStack_cc = puVar5[2];
    uStack_c8 = puVar5[3];
    local_bc = 0x3f800000;
    local_c4 = CONCAT44((int)local_30,(int)local_30);
    local_258 = '\0';
    memset(local_257,0,0x103);
    FUN_113a23b0();
    _snprintf(&local_258,0x104,"%s_%08x");
    piVar8 = (int *)param_1[0x10];
    local_f0 = &local_258;
    local_10c = piVar8[0x49a];
    local_108 = piVar8[0x49b];
    if (piVar8[0x102d] != 0) {
      local_e8 = local_e8 | 4;
    }
    iVar3 = (**(code **)(*piVar8 + 0xb4))();
    if ((iVar3 == 0) ||
       (pcVar6 = (char *)(**(code **)(*(int *)param_1[0x10] + 0xb4))(), *pcVar6 == '\0')) {
      piVar7 = (int *)(**(code **)(*piVar7 + 0x20))();
      local_fc = (int *)(**(code **)(*piVar7 + 0xc))();
    }
    else {
      piVar7 = (int *)(**(code **)(*piVar7 + 0x20))();
      iVar3 = *piVar7;
      (**(code **)(*(int *)param_1[0x10] + 0xb4))();
      local_fc = (int *)(**(code **)(iVar3 + 0xc))();
    }
    FUN_113a23b0();
    cVar2 = FUN_116817f0();
    if (cVar2 == '\0') {
      FUN_113a23b0();
      FUN_1083ac30();
    }
    piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x30))();
    (**(code **)(*piVar8 + 8))();
    iVar3 = (**(code **)(*local_fc + 0x1c))();
    if (iVar3 != 0) {
      local_8 = (int *)0x0;
      FUN_10a68ce0();
      piVar7 = local_8;
      (**(code **)(*piVar8 + 0x5c))();
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
    }
    local_8 = (int *)FUN_1025b060();
    FUN_10ab3590();
    iVar3 = FUN_10bec810();
    local_8 = (int *)((float)iVar3 / DAT_11de9a30);
    FUN_10bcceb0();
    iVar3 = FUN_113a23b0();
    if (*(int *)(iVar3 + 0x20) == 3) {
      iVar3 = FUN_11681360();
      if (*(int *)(iVar3 + 0xb0) != *(int *)(iVar3 + 0xac)) {
        iVar3 = FUN_11681360();
        local_8 = *(int **)(iVar3 + 0xb0);
        FUN_10ab3600();
      }
      iVar9 = FUN_11681360();
      iVar13 = *(int *)(iVar9 + 0xb8) - *(int *)(iVar9 + 0xb4);
      piVar7 = (int *)(iVar9 + 0xb4);
      iVar3 = iVar13 >> 0x1f;
      if (iVar13 / 0x18 + iVar3 != iVar3) {
        local_8 = *(int **)(*piVar7 + 0x14);
        FUN_10ab3600();
      }
      if (1 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x2c);
        FUN_10ab3600();
      }
      if (2 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x44);
        FUN_10ab3600();
      }
      if (3 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x5c);
        FUN_10ab3600();
      }
      if (4 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x74);
        FUN_10ab3600();
      }
      if (5 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0x8c);
        FUN_10ab3600();
      }
      if (6 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0xa4);
        FUN_10ab3600();
      }
      if (7 < (uint)((*(int *)(iVar9 + 0xb8) - *piVar7) / 0x18)) {
        local_8 = *(int **)(*piVar7 + 0xbc);
        FUN_10ab3600();
      }
    }
    local_8c = piVar8;
    if ((local_fc == (int *)0x0) ||
       (piVar7 = (int *)(**(code **)(*local_10 + 0x24))(), local_8 = piVar7, piVar7 == (int *)0x0))
    {
      (**(code **)(*piVar8 + 0xc))();
      FUN_10a72180();
      goto LAB_10be9f97;
    }
    iVar3 = (**(code **)(*piVar7 + 4))();
    param_1[0x11] = iVar3;
    param_1[0x13] = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    (**(code **)(*piVar8 + 0xc))();
    FUN_10a72180();
  }
  local_44 = (**(code **)(*(int *)param_1[0x10] + 0xd0))();
  iVar3 = *param_1;
  FUN_11414f40();
  FUN_11414f00();
  (**(code **)(iVar3 + 0x154))();
  (**(code **)(*piVar7 + 0x280))();
  if (local_9 != '\0') goto LAB_10bea235;
  piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar8 = (int *)(**(code **)(*piVar8 + 0x68))();
  piVar8 = (int *)(**(code **)(*piVar8 + 0xc))();
  if (piVar8 == (int *)0x0) goto LAB_10bea235;
  cVar2 = (**(code **)(*piVar8 + 0x1d4))();
  if (cVar2 != '\0') {
    param_1[0x12] = (int)piVar8;
    piVar8[0x72c] = (int)param_1;
  }
  local_14 = 0.0;
  (**(code **)(*piVar8 + 0x88))(&DAT_11dd2990,0x3f800000);
  (**(code **)(*piVar8 + 0x308))(param_2);
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x174))();
    if (cVar2 != '\0') goto LAB_10bea197;
  }
  else {
LAB_10bea197:
    piVar10 = (int *)(**(code **)(*piVar8 + 0x68))();
    (**(code **)(*piVar10 + 4))();
  }
  iVar3 = (**(code **)(*param_1 + 0xc4))();
  if (*(int *)(iVar3 + 0x20) == 3) {
    FUN_10a5cbc0();
  }
  cVar2 = (**(code **)(*(int *)param_1[0x10] + 0x180))();
  if (cVar2 != '\0') {
    piVar7 = (int *)(**(code **)(*piVar7 + 0x1b8))();
    if (piVar7 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar7 + 0x4c))();
      if (iVar3 != 0) {
        piVar7 = (int *)(**(code **)(*piVar7 + 0x4c))();
        (**(code **)(*piVar7 + 0x38))();
        local_14 = 0.0;
        (**(code **)(*piVar8 + 0x88))("DeadPose",0x3f800000);
      }
    }
  }
LAB_10bea235:
  if (*(int *)(param_1[0x10] + 0x40b4) != 0) {
    (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))();
    iVar3 = FUN_104753a0();
    if (iVar3 != 0) {
      param_2 = -1;
      FUN_113168d0();
      cVar2 = FUN_1046dc90();
      if (cVar2 != '\0') {
        FUN_1025bc30();
      }
    }
  }
  iVar3 = **(int **)m_pThis_exref;
  (**(code **)(*local_8 + 4))();
  piVar7 = (int *)(**(code **)(iVar3 + 0x144))();
  if (piVar7 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar7 + 0x18))();
    if (piVar7 != (int *)0x0) {
      iVar3 = FUN_113a23b0();
      if (*(int **)(iVar3 + 0x184) != (int *)(iVar3 + 0x184)) {
        local_10 = (int *)(**(code **)(*piVar7 + 0x98))();
        if (local_10 != (int *)0x0) {
          FUN_113a23b0();
          FUN_1046e370();
        }
      }
      FUN_113a2090();
      FUN_113168d0();
      (**(code **)(*piVar7 + 0x78))();
      piVar8 = (int *)FUN_113168d0(&DAT_11d9d32b);
      if (param_2 != *piVar8) {
        (**(code **)(*piVar7 + 0x78))("LastState",param_2);
      }
      FUN_113168d0("OnConnect");
      (**(code **)(*piVar7 + 0x78))("State",local_30._4_4_);
    }
  }
  piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar7 = local_8;
  (**(code **)(*piVar8 + 0x22c))();
  FUN_113a23b0();
  (**(code **)(*piVar7 + 0x2cc))();
  if (local_9 == '\0') {
    (**(code **)(*param_1 + 0x134))();
    if (*(int **)(param_1[0x10] + 0x125c) != (int *)0x0) {
      local_24 = (**(code **)(**(int **)(param_1[0x10] + 0x125c) + 8))();
      iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x8c))();
      if (iVar3 != -1) {
        piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))();
        if (piVar8 != (int *)0x0) {
          FUN_10b8ade0();
          local_5c = "Spawned";
          local_58 = 0;
          param_2 = *(int *)(param_1[0x10] + 4);
          local_54 = &param_2;
          (**(code **)(*piVar8 + 0x110))(local_60);
        }
      }
    }
    if (*(int **)(param_1[0x10] + 0x1260) != (int *)0x0) {
      local_24 = (**(code **)(**(int **)(param_1[0x10] + 0x1260) + 8))();
      iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x8c))();
      if (iVar3 != -1) {
        piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))();
        if (piVar8 != (int *)0x0) {
          FUN_10b8ade0();
          local_5c = "Spawned";
          local_58 = 0;
          param_2 = *(int *)(param_1[0x10] + 4);
          local_54 = &param_2;
          (**(code **)(*piVar8 + 0x110))(local_60);
        }
      }
    }
  }
  if (local_a != '\0') {
    piVar7 = (int *)(**(code **)(*piVar7 + 0x1b8))();
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x1bc))();
    }
  }
  piVar7 = param_1 + 0x18;
  iVar3 = 0;
  if ((*(uint *)(param_1[0x18] + -4) & 0x7fffffff) != 0) {
    do {
      FUN_10be1ff0(*(undefined4 *)(*piVar7 + iVar3 * 8));
      iVar3 = iVar3 + 1;
      param_1 = local_28;
    } while (iVar3 < (int)(*(uint *)(*piVar7 + -4) & 0x7fffffff));
  }
  puVar11 = (uint *)(*piVar7 + -4);
  uVar14 = *puVar11;
  if ((int)uVar14 < 0) {
    bVar1 = *(byte *)(*piVar7 + uVar14 * 8);
    if (bVar1 == 0) {
      uVar12 = *(uint *)((uint)(puVar11 + uVar14 * 2 + 2) & 0xfffffffc);
    }
    else {
      uVar12 = (uint)bVar1;
    }
    uVar14 = (uVar14 & 0x7fffffff) + uVar12;
  }
  if (uVar14 != 0) {
    FUN_10bee7c0(0,0);
  }
  local_8 = param_1 + 0x19;
  param_2 = 0;
  if ((*(uint *)(param_1[0x19] + -4) & 0x7fffffff) != 0) {
    iVar3 = 0;
    do {
      iVar9 = *local_8;
      local_10 = *(int **)(iVar3 + iVar9);
      local_28 = *(int **)(iVar3 + 0x20 + iVar9);
      local_30 = CONCAT44(*(undefined4 *)(iVar3 + 4 + iVar9),(float)local_30);
      iVar13 = (**(code **)(param_1[1] + 4))();
      if (iVar13 != 0) {
        local_3c = *(undefined4 *)(iVar3 + 0x14 + iVar9);
        local_38 = *(undefined4 *)(iVar3 + 0x18 + iVar9);
        local_34 = *(undefined4 *)(iVar3 + 0x1c + iVar9);
        local_1c = CONCAT44(*(undefined4 *)(iVar3 + 0xc + iVar9),*(undefined4 *)(iVar3 + 8 + iVar9))
        ;
        local_14 = *(float *)(iVar3 + 0x10 + iVar9);
        piVar7 = (int *)(**(code **)(param_1[1] + 4))();
        (**(code **)(*piVar7 + 0x1ec))(local_10,local_30._4_4_,&local_1c,&local_3c,local_28,1);
      }
      iVar3 = iVar3 + 0x24;
      param_2 = param_2 + 1;
    } while (param_2 < (int)(*(uint *)(*local_8 + -4) & 0x7fffffff));
  }
  iVar3 = *local_8;
  uVar14 = *(uint *)(iVar3 + -4);
  if ((int)uVar14 < 0) {
    iVar9 = (uVar14 & 0x7fffffff) + uVar14 * 8;
    bVar1 = *(byte *)(iVar3 + iVar9 * 4);
    if (bVar1 == 0) {
      uVar12 = *(uint *)(iVar3 + (iVar9 + 1) * 4 & 0xfffffffc);
    }
    else {
      uVar12 = (uint)bVar1;
    }
    uVar14 = (uVar14 & 0x7fffffff) + uVar12;
  }
  if (uVar14 != 0) {
    FUN_10beda70(iVar3);
    FUN_10bee900(0,0);
  }
  return 1;
}



/* ===== FUN_10c05b30 @ 10c05b30  size=91 ===== */
// strings:
//   "RequestSpawnGroup"

/* [RE-AUTO c0]
   strings:
     ""RequestSpawnGroup"" */

void __thiscall FUN_10c05b30(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x38))("RequestSpawnGroup");
    if (iVar2 == 4) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x34))(piVar1,"RequestSpawnGroup");
      FUN_10a69580(param_1 + 0x5c);
      FUN_10a69520(&param_2);
      (**(code **)(**(int **)(param_1 + 0x50) + 0x44))();
    }
  }
  return;
}



/* ===== FUN_10c05b90 @ 10c05b90  size=112 ===== */
// strings:
//   "SetPlayerSpawnGroup"

/* [RE-AUTO c0]
   strings:
     ""SetPlayerSpawnGroup"" */

void __thiscall FUN_10c05b90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = param_3;
  piVar1 = *(int **)(param_1 + 0x5c);
  param_3 = param_2;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x38))("SetPlayerSpawnGroup");
    if (iVar2 == 4) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x34))(piVar1,"SetPlayerSpawnGroup");
      FUN_10a69580(param_1 + 0x5c);
      FUN_10a69520(&param_3);
      FUN_10a69520(&local_8);
      (**(code **)(**(int **)(param_1 + 0x50) + 0x44))();
    }
  }
  return;
}



/* ===== FUN_10c05c00 @ 10c05c00  size=143 ===== */
// strings:
//   "GetPlayerSpawnGroup"

/* [RE-AUTO c0]
   strings:
     ""GetPlayerSpawnGroup"" */

int __thiscall FUN_10c05c00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    local_8 = param_1;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x38))("GetPlayerSpawnGroup");
    if (iVar1 == 4) {
      local_8 = 0;
      (**(code **)(**(int **)(param_1 + 0x50) + 0x34))
                (*(undefined4 *)(param_1 + 0x5c),"GetPlayerSpawnGroup");
      FUN_10a69580((undefined4 *)(param_1 + 0x5c));
      piVar2 = (int *)(**(code **)(**(int **)(param_2 + 0xc) + 0x150))(2);
      if (piVar2 == (int *)0x0) {
        param_2 = 0;
      }
      else {
        param_2 = (**(code **)(*piVar2 + 0x38))();
      }
      FUN_10a69450(&param_2);
      FUN_10c0bfb0(&local_8);
      return local_8;
    }
  }
  return 0;
}



/* ===== FUN_10c05d50 @ 10c05d50  size=333 ===== */
// strings:
//   "OnSpawnGroupInvalid"

/* [RE-AUTO c0]
   strings:
     ""OnSpawnGroupInvalid"" */

void __thiscall FUN_10c05d50(int *param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_2 != 0) {
    piVar5 = param_1 + 0x8d;
    piVar2 = (int *)param_1[0x8e];
    piVar8 = piVar5;
    if ((int *)param_1[0x8e] != (int *)0x0) {
      do {
        if ((uint)piVar2[4] < param_2) {
          piVar3 = (int *)piVar2[3];
        }
        else {
          piVar3 = (int *)piVar2[2];
          piVar8 = piVar2;
        }
        piVar2 = piVar3;
      } while (piVar3 != (int *)0x0);
      if (piVar8 == piVar5) goto LAB_10c05dba;
      if (param_2 < (uint)piVar8[4]) {
        piVar8 = piVar5;
      }
    }
    if ((piVar8 != piVar5) &&
       (iVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2), iVar4 != 0)) {
      iVar4 = (**(code **)(*param_1 + 0x208))(param_2);
      bVar1 = true;
      if (iVar4 != 0) goto LAB_10c05dbe;
    }
  }
LAB_10c05dba:
  bVar1 = false;
LAB_10c05dbe:
  local_8 = (undefined4 *)param_1[0x22];
  if (local_8 != (undefined4 *)param_1[0x23]) {
    do {
      uVar9 = *local_8;
      piVar5 = (int *)(**(code **)(*(int *)param_1[0xf] + 0x68))();
      iVar4 = (**(code **)(*piVar5 + 0x18))(uVar9);
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(iVar4 + 8);
        local_c = uVar9;
        uVar6 = (**(code **)(*param_1 + 0x2b0))(iVar4);
        if (uVar6 == param_2) {
          if (bVar1) {
            iVar4 = (**(code **)(*param_1 + 0x208))(uVar9);
            iVar7 = (**(code **)(*param_1 + 0x208))(param_2);
            uVar9 = local_c;
            if (iVar7 == iVar4) goto LAB_10c05e7f;
          }
          piVar5 = (int *)param_1[0x19];
          local_10 = param_2;
          local_c = uVar9;
          if ((piVar5 != (int *)0x0) &&
             (iVar4 = (**(code **)(*piVar5 + 0x38))("OnSpawnGroupInvalid"), iVar4 == 4)) {
            (**(code **)(*(int *)param_1[0x14] + 0x34))(piVar5,"OnSpawnGroupInvalid");
            FUN_10a69580(param_1 + 0x17);
            FUN_10a69520(&local_c);
            FUN_10a69520(&local_10);
            (**(code **)(*(int *)param_1[0x14] + 0x44))();
          }
        }
      }
LAB_10c05e7f:
      local_8 = local_8 + 1;
    } while (local_8 != (undefined4 *)param_1[0x23]);
  }
  return;
}



/* ===== FUN_10c21d10 @ 10c21d10  size=2183 ===== */
// calls: ceil
// strings:
//   "Particle.SpawnEffect"
//   "Water_Ability_Mst.HIT.N_Blood_Red_Weak"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   src: Water_Ability_Mst.H
   calls: ceil
   strings:
     ""Particle.SpawnEffect""
     ""Water_Ability_Mst.HIT.N_Blood_Red_Weak"" */

void FUN_10c21d10(int param_1,float *param_2,undefined4 param_3,int *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
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
  float local_48;
  float local_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  float local_18;
  int *local_14;
  
  if ((param_4 != (int *)0x0) && (iVar2 = (**(code **)(*param_4 + 4))(), iVar2 != 0)) {
    piVar3 = (int *)(**(code **)(*param_4 + 4))();
    iVar2 = (**(code **)(*piVar3 + 0xa8))();
    if ((iVar2 == 1) &&
       ((param_5 != (int *)0x0 && (iVar2 = (**(code **)(*param_5 + 4))(), iVar2 != 0)))) {
      piVar3 = (int *)(**(code **)(*param_5 + 4))();
      iVar2 = (**(code **)(*piVar3 + 0xa8))();
      if (iVar2 == 1) {
        piVar3 = (int *)(**(code **)(*param_4 + 4))();
        iVar2 = (**(code **)(*param_5 + 4))();
        if (((piVar3 != (int *)0x0) && (iVar2 != 0)) &&
           (cVar1 = (**(code **)(*piVar3 + 0x1c4))(), cVar1 != '\0')) {
          piVar3 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0xd8))();
          local_14 = (int *)(**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(iVar2 + 8));
          if (local_14 != (int *)0x0) {
            uStack_28 = (double)*param_2;
            dVar15 = ceil(uStack_28);
            uStack_28 = (double)(param_2[1] + 0.0 + param_2[2] + param_2[3] + param_2[4] +
                                param_2[5]);
            uStack_28 = ceil(uStack_28);
            piVar3 = local_14;
            if (0.0 < (float)((int)uStack_28 + (int)dVar15)) {
              piVar4 = (int *)(**(code **)(*local_14 + 0x1b8))();
              piVar4 = (int *)(**(code **)(*piVar4 + 0x50))();
              pfVar5 = (float *)(**(code **)(*piVar4 + 0x20))(param_2[0x22]);
              fVar10 = *pfVar5;
              fVar12 = pfVar5[1];
              fVar8 = pfVar5[2];
              fVar7 = pfVar5[3];
              pfVar5 = (float *)(**(code **)(*piVar3 + 0x74))();
              local_80 = *pfVar5;
              fStack_7c = pfVar5[1];
              fStack_78 = pfVar5[2];
              fStack_74 = pfVar5[3];
              local_70 = pfVar5[4];
              fStack_6c = pfVar5[5];
              fStack_68 = pfVar5[6];
              fStack_64 = pfVar5[7];
              local_60 = pfVar5[8];
              fStack_5c = pfVar5[9];
              fStack_58 = pfVar5[10];
              fStack_54 = pfVar5[0xb];
              iVar2 = (**(code **)(*(int *)DAT_1202e818[0x28] + 0xc))
                                (PTR_s_Water_Ability_Mst_HIT_N_Blood_Re_11df7d7c,
                                 "Particle.SpawnEffect",1,1);
              if (iVar2 != 0) {
                uStack_2c = 0x3fc90fdb;
                uStack_28 = 0.0;
                FUN_10a7b1f0(&uStack_2c);
                fVar9 = local_a4 + local_94 + local_84;
                if (fVar9 <= 0.0) {
                  if ((local_a4 < local_94) || (local_a4 < local_84)) {
                    if ((local_94 < local_a4) || (local_94 < local_84)) {
                      if ((local_84 < local_a4) || (local_84 < local_94)) {
                        local_30 = _UNK_11cbf0ec;
                        uStack_2c = 0;
                        uStack_28 = 0.0;
                        fVar9 = _UNK_11cbf0e8;
                        fVar11 = _UNK_11cbf0e4;
                        fVar6 = _DAT_11cbf0e0;
                      }
                      else {
                        fVar9 = SQRT(((local_84 - local_a4) - local_94) + DAT_11de9918);
                        fVar6 = DAT_11de98e8 / fVar9;
                        local_30 = (local_98 - local_a0) * fVar6;
                        fVar9 = fVar9 * DAT_11de98e8;
                        fVar11 = (local_88 + local_90) * fVar6;
                        fVar6 = (local_9c + local_8c) * fVar6;
                      }
                    }
                    else {
                      fVar11 = SQRT(((local_94 - local_84) - local_a4) + DAT_11de9918);
                      fVar6 = DAT_11de98e8 / fVar11;
                      local_30 = (local_9c - local_8c) * fVar6;
                      fVar9 = (local_88 + local_90) * fVar6;
                      fVar11 = fVar11 * DAT_11de98e8;
                      fVar6 = (local_98 + local_a0) * fVar6;
                    }
                  }
                  else {
                    fVar6 = SQRT(((local_a4 - local_94) - local_84) + DAT_11de9918);
                    fVar11 = DAT_11de98e8 / fVar6;
                    local_30 = (local_88 - local_90) * fVar11;
                    fVar9 = (local_9c + local_8c) * fVar11;
                    fVar11 = (local_98 + local_a0) * fVar11;
                    fVar6 = fVar6 * DAT_11de98e8;
                  }
                }
                else {
                  local_30 = SQRT(fVar9 + DAT_11de9918);
                  fVar6 = DAT_11de98e8 / local_30;
                  local_30 = local_30 * DAT_11de98e8;
                  uStack_2c = 0;
                  uStack_28 = 0.0;
                  fVar9 = (local_98 - local_a0) * fVar6;
                  fVar11 = (local_9c - local_8c) * fVar6;
                  fVar6 = (local_88 - local_90) * fVar6;
                }
                fVar13 = (fVar12 * fVar9 - fVar8 * fVar11) + fVar7 * fVar6 + fVar10 * local_30;
                local_44 = (fVar8 * fVar6 - fVar10 * fVar9) + fVar7 * fVar11 + fVar12 * local_30;
                fVar14 = (fVar10 * fVar11 - fVar12 * fVar6) + fVar7 * fVar9 + fVar8 * local_30;
                local_48 = fVar7 * local_30 - (fVar12 * fVar11 + fVar10 * fVar6 + fVar8 * fVar9);
                fVar10 = fStack_6c + local_80 + fStack_58;
                if (fVar10 <= 0.0) {
                  if ((local_80 < fStack_6c) || (local_80 < fStack_58)) {
                    if ((fStack_6c < local_80) || (fStack_6c < fStack_58)) {
                      fVar10 = _UNK_11cbf0ec;
                      fVar12 = _DAT_11cbf0e0;
                      fVar8 = _UNK_11cbf0e8;
                      fVar7 = _UNK_11cbf0e4;
                      if ((local_80 <= fStack_58) && (fStack_6c <= fStack_58)) {
                        fVar8 = SQRT(((fStack_58 - local_80) - fStack_6c) + DAT_11de9918);
                        fVar7 = DAT_11de98e8 / fVar8;
                        fVar10 = (local_70 - fStack_7c) * fVar7;
                        fVar12 = (local_60 + fStack_78) * fVar7;
                        fVar8 = fVar8 * DAT_11de98e8;
                        fVar7 = (fStack_5c + fStack_68) * fVar7;
                      }
                    }
                    else {
                      fVar7 = SQRT(((fStack_6c - fStack_58) - local_80) + DAT_11de9918);
                      fVar8 = DAT_11de98e8 / fVar7;
                      fVar10 = (fStack_78 - local_60) * fVar8;
                      fVar12 = (local_70 + fStack_7c) * fVar8;
                      fVar8 = (fStack_5c + fStack_68) * fVar8;
                      fVar7 = fVar7 * DAT_11de98e8;
                    }
                  }
                  else {
                    fVar12 = SQRT(((local_80 - fStack_6c) - fStack_58) + DAT_11de9918);
                    fVar7 = DAT_11de98e8 / fVar12;
                    fVar10 = (fStack_5c - fStack_68) * fVar7;
                    fVar12 = fVar12 * DAT_11de98e8;
                    fVar8 = (local_60 + fStack_78) * fVar7;
                    fVar7 = (local_70 + fStack_7c) * fVar7;
                  }
                }
                else {
                  fVar10 = SQRT(fVar10 + DAT_11de9918);
                  fVar7 = DAT_11de98e8 / fVar10;
                  fVar10 = fVar10 * DAT_11de98e8;
                  fVar12 = (fStack_5c - fStack_68) * fVar7;
                  fVar8 = (local_70 - fStack_7c) * fVar7;
                  fVar7 = (fStack_78 - local_60) * fVar7;
                }
                fVar6 = (fVar7 * fVar14 - fVar8 * local_44) + fVar13 * fVar10 + fVar12 * local_48;
                fVar11 = (fVar8 * fVar13 - fVar12 * fVar14) + local_44 * fVar10 + fVar7 * local_48;
                fVar9 = (fVar12 * local_44 - fVar7 * fVar13) + fVar14 * fVar10 + fVar8 * local_48;
                uStack_28 = (double)CONCAT44(fVar9,(undefined4)uStack_28);
                local_40 = fVar10 * local_48 - (fVar7 * local_44 + fVar12 * fVar13 + fVar8 * fVar14)
                ;
                fVar12 = fVar9 + fVar9;
                uStack_3c = 0;
                uStack_38 = 0;
                uStack_34 = 0;
                local_18 = (fVar6 + fVar6) * local_40;
                fVar10 = fVar11 + fVar11;
                fStack_58 = DAT_11de9918 - (fVar6 + fVar6) * fVar6;
                local_14 = (int *)(fVar10 * local_40);
                local_80 = (DAT_11de9918 - fVar10 * fVar11) - fVar12 * fVar9;
                fStack_7c = fVar10 * fVar6 - fVar12 * local_40;
                fStack_78 = fVar12 * fVar6 + (float)local_14;
                local_70 = fVar12 * local_40 + fVar10 * fVar6;
                local_60 = fVar12 * fVar6 - (float)local_14;
                fStack_6c = fStack_58 - fVar12 * fVar9;
                fStack_58 = fStack_58 - fVar10 * fVar11;
                fStack_68 = fVar12 * fVar11 - local_18;
                fStack_5c = fVar12 * fVar11 + local_18;
                fStack_74 = *(float *)(param_1 + 0x50);
                fStack_64 = *(float *)(param_1 + 0x54);
                fStack_54 = *(float *)(param_1 + 0x58);
                FUN_10a7b9f0(1,&local_80,0,0);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10c225a0 @ 10c225a0  size=5137 ===== */
// calls: CInfoRecord::GetModelString, libm_sse2_asin_precise
// strings:
//   "mat_default"
//   "weapon_bone"
//   "Particle.SpawnEffect"
//   "Water_Ability_Mst.HIT.ShootBlood_S"
//   "Water_Ability_Mst.HIT.ShootBlood_M"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   src: Water_Ability_Mst.H
   calls: libm_sse2_asin_precise
   strings:
     ""mat_default""
     ""weapon_bone""
     ""Particle.SpawnEffect""
     ""Water_Ability_Mst.HIT.ShootBlood_S""
     ""Water_Ability_Mst.HIT.ShootBlood_M"" */

void __thiscall
FUN_10c225a0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  undefined4 uStack_12c;
  char *apcStack_128 [2];
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int *local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 local_54;
  float local_50;
  undefined8 uStack_4c;
  float fStack_44;
  float local_34;
  float local_30;
  int *local_2c;
  float local_28;
  int *local_24;
  int *local_20;
  byte local_19;
  float local_18;
  int *local_14;
  
  piVar6 = (int *)FUN_10c007c0(*param_3);
  if (piVar6 == (int *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*piVar6 + 0x1c4))();
  if (cVar2 == '\0') {
    piVar7 = (int *)(**(code **)(*piVar6 + 800))();
    iVar8 = (**(code **)(*piVar7 + 0xa8))();
    if (iVar8 != 8) {
      return;
    }
  }
  local_d4 = (int *)piVar6[3];
  local_2c = (int *)0x0;
  if ((local_d4 != (int *)0x0) && (cVar2 = (**(code **)(*piVar6 + 0x1c4))(), cVar2 != '\0')) {
    local_2c = (int *)(**(code **)(*local_d4 + 0x288))();
  }
  piVar7 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x68))();
  local_24 = (int *)(**(code **)(*piVar7 + 0xc))(param_3[1]);
  if (local_24 == (int *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*local_24 + 0x1d4))();
  if (cVar2 == '\0') {
    return;
  }
  local_d4 = (int *)0x0;
  iVar8 = FUN_10c083a0(param_3[4],param_3[5],param_3[7]);
  if (iVar8 != 0) {
    local_d4 = (int *)(iVar8 + 0xc0);
  }
  local_34 = (float)(uint)(*(int *)(param_5 + 0x34) == 2);
  CInfoRecord__GetModelString("mat_default");
  if (((*(int *)(DAT_1202e818 + 0x34) != 0) &&
      (local_14 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x298))(),
      local_14 != (int *)0x0)) && (iVar8 = (**(code **)(*local_14 + 0x50))(), iVar8 != 0)) {
    piVar7 = (int *)(**(code **)(*local_14 + 0x50))();
    piVar7 = (int *)(**(code **)(*piVar7 + 8))(param_3[0x53],0);
    if (piVar7 != (int *)0x0) {
      uVar9 = (**(code **)(*piVar7 + 0xc))();
      FUN_1083ac30(uVar9);
      FUN_10a793e0();
    }
  }
  *(undefined4 **)(*(int *)(param_1 + 0x2d4) + 0xe8) = param_3;
  local_18 = *(float *)(param_5 + 0x38);
  FUN_10dbff80(param_2,local_18,param_5);
  local_28 = 0.0;
  local_30 = 0.0;
  local_14 = (int *)((uint)local_14 & 0xffffff00);
  if (param_3[3] != 0) {
    (**(code **)(*DAT_120286c8 + 0x168))(param_3[3]);
    local_20 = (int *)FUN_1111b530();
    if (local_20 != (int *)0x0) {
      local_28 = (float)(**(code **)(**(int **)((int)local_20 + 0xd4) + 0x18))();
      local_30 = *(float *)(*(int *)((int)local_20 + 0xd4) + 0x180);
      uVar3 = FUN_10d800c0();
      local_14 = (int *)CONCAT31(local_14._1_3_,uVar3);
    }
  }
  local_24 = (int *)(**(code **)(*local_24 + 800))();
  local_20 = (int *)0x0;
  if ((local_24 == (int *)0x0) || (iVar8 = (**(code **)(*local_24 + 0xa8))(), iVar8 != 1)) {
    uVar9 = 0;
  }
  else {
    local_20 = local_24;
    iVar8 = FUN_113a23b0();
    uVar9 = *(undefined4 *)(iVar8 + 0x96c);
  }
  FUN_10dc0f30(uVar9);
  FUN_10dc0ed0(local_28,local_30,local_14);
  local_14 = (int *)0x0;
  if (local_20 != (int *)0x0) {
    local_14 = (int *)FUN_1025b060();
  }
  local_19 = FUN_10dc00b0(local_18,&local_54,param_5);
  if (DAT_11de9890 < *(float *)(param_4 + 0x50)) {
    bVar4 = FUN_10dc0470(local_18,&local_54,param_4 + 0x14,param_5);
    local_19 = local_19 | bVar4;
  }
  FUN_10dc0790(local_18,param_5);
  if (0 < (int)local_14) {
    FUN_10dc0880(local_18,param_5);
  }
  local_14 = (int *)((uint)local_14 & 0xffffff00);
  if ((local_2c != (int *)0x0) && (cVar2 = (**(code **)(*piVar6 + 0x1c4))(), cVar2 != '\0')) {
    iVar8 = (**(code **)(*local_2c + 0x294))();
    local_14 = (int *)CONCAT31(local_14._1_3_,iVar8 == 3);
  }
  FUN_10dc0970(local_18,&local_54,param_5,param_4 + 0x14,local_14);
  FUN_10dc0ad0(local_18,param_5);
  FUN_10dc0c20(local_18,param_5);
  if (local_19 != 0) goto LAB_10c2399e;
  piVar7 = (int *)(**(code **)(*(int *)piVar6[3] + 0x1b8))(0);
  piVar7 = (int *)(**(code **)(*piVar7 + 0x50))();
  sVar5 = (**(code **)(*piVar7 + 0x10))("weapon_bone");
  pfVar10 = (float *)(**(code **)(*piVar7 + 0x20))((int)sVar5);
  local_110 = *pfVar10;
  fStack_10c = pfVar10[1];
  fStack_108 = pfVar10[2];
  fStack_104 = pfVar10[3];
  fStack_f8 = pfVar10[6];
  local_100 = (float)*(undefined8 *)(pfVar10 + 4);
  fStack_fc = (float)((ulonglong)*(undefined8 *)(pfVar10 + 4) >> 0x20);
  pfVar10 = (float *)(**(code **)(*(int *)piVar6[3] + 0x74))();
  local_d0 = *pfVar10;
  fStack_cc = pfVar10[1];
  fStack_c8 = pfVar10[2];
  fStack_c4 = pfVar10[3];
  local_c0 = pfVar10[4];
  fStack_bc = pfVar10[5];
  fStack_b8 = pfVar10[6];
  fStack_b4 = pfVar10[7];
  local_b0 = pfVar10[8];
  fStack_ac = pfVar10[9];
  fStack_a8 = pfVar10[10];
  fStack_a4 = pfVar10[0xb];
  if ((piVar6[0x56d] == 10) || (piVar6[0x56d] == 5)) {
    apcStack_128[0] = "Water_Ability_Mst.HIT.ShootBlood_S";
    apcStack_128[1] = "Water_Ability_Mst.HIT.ShootBlood_M";
    iVar8 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                      (apcStack_128[(int)local_34],"Particle.SpawnEffect",1,1);
    if (iVar8 == 0) goto LAB_10c2399e;
    fStack_6c = 1.5707964;
    fStack_68 = 0.0;
    fStack_64 = 0.0;
    FUN_10a7b1f0(&fStack_6c);
    fVar13 = fStack_84 + fStack_94 + fStack_74;
    if (fVar13 <= 0.0) {
      if ((fStack_94 < fStack_84) || (fStack_94 < fStack_74)) {
        if ((fStack_84 < fStack_94) || (fStack_84 < fStack_74)) {
          if ((fStack_74 < fStack_94) || (fStack_74 < fStack_84)) {
            local_130 = _UNK_11cbf0ec;
            local_70 = _UNK_11cbf0e8;
            local_f0 = _UNK_11cbf0e4;
            local_50 = _DAT_11cbf0e0;
          }
          else {
            local_70 = SQRT(((fStack_74 - fStack_94) - fStack_84) + DAT_11de9918);
            local_130 = DAT_11de98e8 / local_70;
            local_70 = local_70 * DAT_11de98e8;
            local_50 = (fStack_7c + fStack_8c) * local_130;
            local_f0 = (fStack_78 + local_80) * local_130;
            local_130 = (fStack_88 - local_90) * local_130;
          }
        }
        else {
          local_f0 = SQRT(((fStack_84 - fStack_74) - fStack_94) + DAT_11de9918);
          local_130 = DAT_11de98e8 / local_f0;
          local_f0 = local_f0 * DAT_11de98e8;
          local_50 = (fStack_88 + local_90) * local_130;
          local_70 = (fStack_78 + local_80) * local_130;
          local_130 = (fStack_8c - fStack_7c) * local_130;
        }
      }
      else {
        local_50 = SQRT(((fStack_94 - fStack_84) - fStack_74) + DAT_11de9918);
        local_130 = DAT_11de98e8 / local_50;
        local_50 = local_50 * DAT_11de98e8;
        local_f0 = (fStack_88 + local_90) * local_130;
        local_70 = (fStack_7c + fStack_8c) * local_130;
        local_130 = (fStack_78 - local_80) * local_130;
      }
    }
    else {
      local_130 = SQRT(fVar13 + DAT_11de9918);
      local_70 = DAT_11de98e8 / local_130;
      local_130 = local_130 * DAT_11de98e8;
      local_50 = (fStack_78 - local_80) * local_70;
      local_f0 = (fStack_8c - fStack_7c) * local_70;
      local_70 = (fStack_88 - local_90) * local_70;
    }
    fStack_e8 = 0.0;
    fStack_ec = 0.0;
    apcStack_128[1] = (char *)0x0;
    apcStack_128[0] = (char *)0x0;
    uStack_12c = 0;
    fVar13 = fStack_104 * 0.0;
    fVar17 = (fStack_10c * 0.0 - fStack_108 * 0.0) + fVar13;
    fVar14 = (fStack_108 * 0.0 - local_110 * DAT_11de9890) + fVar13;
    fVar13 = (local_110 * DAT_11de9890 - fStack_10c * 0.0) + fVar13;
    fVar15 = fStack_10c * fVar13 - fStack_108 * fVar14;
    fVar13 = fStack_108 * fVar17 - local_110 * fVar13;
    fVar17 = local_110 * fVar14 - fStack_10c * fVar17;
    local_100 = local_100 + fVar15 + DAT_11de9890 + fVar15;
    local_30 = fStack_fc + fVar13 + DAT_11de9890 + fVar13;
    local_14 = (int *)(fStack_f8 + fVar17 + DAT_11de9890 + fVar17);
    local_24 = (int *)((fStack_10c * local_70 - fStack_108 * local_f0) + fStack_104 * local_50 +
                      local_110 * local_130);
    local_18 = (fStack_108 * local_50 - local_110 * local_70) + fStack_104 * local_f0 +
               fStack_10c * local_130;
    local_20 = (int *)((local_110 * local_f0 - fStack_10c * local_50) + fStack_104 * local_70 +
                      fStack_108 * local_130);
    local_2c = (int *)(fStack_104 * local_130 -
                      (local_110 * local_50 + fStack_10c * local_f0 + fStack_108 * local_70));
    fVar13 = fStack_bc + local_d0 + fStack_a8;
    if (fVar13 <= DAT_11de9890) {
      if ((local_d0 < fStack_bc) || (local_d0 < fStack_a8)) {
        if ((fStack_bc < local_d0) || (fStack_bc < fStack_a8)) {
          if ((fStack_a8 < local_d0) || (fStack_a8 < fStack_bc)) {
            local_f0 = _DAT_11cbf0e0;
            fStack_ec = _UNK_11cbf0e4;
            fStack_e8 = _UNK_11cbf0e8;
            local_50 = _DAT_11cbf0e0;
            fVar13 = _UNK_11cbf0e8;
            fVar15 = _UNK_11cbf0e4;
            local_70 = _UNK_11cbf0ec;
          }
          else {
            fVar13 = SQRT(((fStack_a8 - local_d0) - fStack_bc) + DAT_11de9918);
            fVar17 = DAT_11de98e8 / fVar13;
            local_50 = (local_b0 + fStack_c8) * fVar17;
            fVar13 = fVar13 * DAT_11de98e8;
            fVar15 = (fStack_ac + fStack_b8) * fVar17;
            local_70 = (local_c0 - fStack_cc) * fVar17;
          }
        }
        else {
          fVar15 = SQRT(((fStack_bc - fStack_a8) - local_d0) + DAT_11de9918);
          fVar17 = DAT_11de98e8 / fVar15;
          local_50 = (local_c0 + fStack_cc) * fVar17;
          fVar13 = (fStack_ac + fStack_b8) * fVar17;
          fVar15 = fVar15 * DAT_11de98e8;
          local_70 = (fStack_c8 - local_b0) * fVar17;
        }
      }
      else {
        fVar13 = SQRT(((local_d0 - fStack_bc) - fStack_a8) + DAT_11de9918);
        fVar17 = DAT_11de98e8 / fVar13;
        local_50 = fVar13 * DAT_11de98e8;
        fVar13 = (local_b0 + fStack_c8) * fVar17;
        fVar15 = (local_c0 + fStack_cc) * fVar17;
        local_70 = (fStack_ac - fStack_b8) * fVar17;
      }
    }
    else {
      fVar17 = SQRT(fVar13 + DAT_11de9918);
      fVar15 = DAT_11de98e8 / fVar17;
      local_50 = (fStack_ac - fStack_b8) * fVar15;
      fVar13 = (local_c0 - fStack_cc) * fVar15;
      fVar15 = (fStack_c8 - local_b0) * fVar15;
      local_70 = fVar17 * DAT_11de98e8;
    }
    uStack_4c = 0;
    fStack_44 = 0.0;
    fVar16 = (fVar15 * (float)local_14 - fVar13 * local_30) + local_70 * local_100;
    fVar14 = (fVar13 * local_100 - local_50 * (float)local_14) + local_70 * local_30;
    fVar17 = (local_50 * local_30 - fVar15 * local_100) + local_70 * (float)local_14;
    local_28 = fVar15 * fVar17 - fVar13 * fVar14;
    local_28 = local_100 + local_28 + local_28;
    fVar17 = fVar13 * fVar16 - local_50 * fVar17;
    fStack_fc = fStack_c4 + local_28;
    fVar14 = local_50 * fVar14 - fVar15 * fVar16;
    fStack_f8 = fVar17 + local_30 + fVar17 + fStack_b4;
    fStack_f4 = fVar14 + (float)local_14 + fVar14 + fStack_a4;
    fStack_10c = (fVar15 * (float)local_20 - fVar13 * local_18) + (float)local_24 * local_70 +
                 local_50 * (float)local_2c;
    fStack_108 = (fVar13 * (float)local_24 - local_50 * (float)local_20) + local_18 * local_70 +
                 fVar15 * (float)local_2c;
    fStack_104 = (local_50 * local_18 - fVar15 * (float)local_24) + (float)local_20 * local_70 +
                 fVar13 * (float)local_2c;
    local_70 = local_70 * (float)local_2c;
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    fStack_64 = 0.0;
    local_100 = local_70 -
                (fVar15 * local_18 + local_50 * (float)local_24 + fVar13 * (float)local_20);
    fStack_e4 = fStack_f4;
    FUN_1053ae00(&fStack_10c);
    piVar6 = (int *)0x0;
    local_154 = param_3[0x14];
    local_144 = param_3[0x15];
    local_134 = param_3[0x16];
    pfVar10 = &local_160;
  }
  else {
    piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar6 = (int *)(**(code **)(*piVar6 + 0x6c))();
    local_20 = (int *)(**(code **)(*piVar6 + 0x54))(param_3[2]);
    if (((local_20 == (int *)0x0) || (iVar8 = FUN_11104780(local_54,local_34), iVar8 == 0)) ||
       (apcStack_128[1] =
             (char *)(**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                               (iVar8,"Particle.SpawnEffect",1,1), apcStack_128[1] == (char *)0x0))
    goto LAB_10c2399e;
    uVar9 = FUN_1053ae00(&local_110);
    pfVar10 = (float *)FUN_10a67d20(&local_a0,&local_d0,uVar9);
    fVar13 = pfVar10[5];
    fVar15 = *pfVar10;
    fVar17 = pfVar10[10];
    fVar14 = fVar13 + fVar15 + fVar17;
    if (fVar14 <= DAT_11de9890) {
      if ((fVar13 <= fVar15) && (fVar17 <= fVar15)) {
        fVar14 = ((fVar15 - fVar13) - fVar17) + DAT_11de9918;
        goto LAB_10c22aec;
      }
      if ((fVar15 <= fVar13) && (fVar17 <= fVar13)) {
        fVar14 = ((fVar13 - fVar17) - fVar15) + DAT_11de9918;
        goto LAB_10c22aec;
      }
      if ((fVar15 <= fVar17) && (fVar13 <= fVar17)) {
        fVar14 = ((fVar17 - fVar15) - fVar13) + DAT_11de9918;
        goto LAB_10c22aec;
      }
    }
    else {
      fVar14 = fVar14 + DAT_11de9918;
LAB_10c22aec:
      local_34 = SQRT(fVar14);
    }
    pfVar10 = (float *)(**(code **)(**(int **)(DAT_1202e818 + 0x10) + 0x138))();
    local_18 = pfVar10[1];
    local_24 = (int *)pfVar10[5];
    local_34 = pfVar10[9];
    FUN_11104600(&fStack_6c);
    fVar13 = fStack_68 * (float)local_24 + fStack_6c * local_18 + fStack_64 * local_34;
    fVar15 = fStack_6c - local_18 * fVar13;
    fVar17 = fStack_68 - (float)local_24 * fVar13;
    fVar14 = fStack_64 - local_34 * fVar13;
    fVar13 = fVar17 * fVar17 + fVar15 * fVar15 + fVar14 * fVar14;
    if (fVar13 <= DAT_11cbf070) {
LAB_10c22c17:
      FUN_111044f0(&uStack_4c);
      fVar13 = uStack_4c._4_4_ * (float)local_24 + (float)uStack_4c * local_18 +
               fStack_44 * local_34;
      uStack_4c._0_4_ = (float)uStack_4c - local_18 * fVar13;
      uStack_4c._4_4_ = uStack_4c._4_4_ - (float)local_24 * fVar13;
      fStack_e4 = fStack_44 - local_34 * fVar13;
      fVar13 = uStack_4c._4_4_ * uStack_4c._4_4_ + (float)uStack_4c * (float)uStack_4c +
               fStack_e4 * fStack_e4;
      if (fVar13 <= DAT_11cbf070) {
        uStack_4c = DAT_1201fd04;
        uVar1 = uStack_4c;
        local_2c = (int *)0x0;
        fStack_44 = DAT_1201fd0c;
        local_28 = DAT_1201fd0c;
        uStack_4c._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
        local_14 = (int *)uStack_4c._4_4_;
        uStack_4c._0_4_ = (float)DAT_1201fd04;
        local_30 = (float)uStack_4c;
        uStack_4c = uVar1;
      }
      else {
        auVar12 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar15 = auVar12._0_4_;
        fVar15 = (DAT_11de9938 - fVar15 * fVar13 * fVar15 * DAT_11de98e8) * fVar15;
        local_14 = (int *)(uStack_4c._4_4_ * fVar15);
        local_30 = (float)uStack_4c * fVar15;
        local_28 = fStack_e4 * fVar15;
        local_2c = (int *)(DAT_11de9918 / fVar15);
        uStack_4c = CONCAT44(uStack_4c._4_4_,(float)uStack_4c);
        fStack_44 = fStack_e4;
      }
    }
    else {
      auVar12 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      local_28 = auVar12._0_4_;
      local_28 = (DAT_11de9938 - fVar13 * local_28 * local_28 * DAT_11de98e8) * local_28;
      local_2c = (int *)(DAT_11de9918 / local_28);
      local_30 = fVar15 * local_28;
      local_14 = (int *)(fVar17 * local_28);
      local_28 = fVar14 * local_28;
      if ((float)local_2c < DAT_11de98bc) goto LAB_10c22c17;
    }
    local_d0 = *pfVar10;
    fStack_cc = pfVar10[1];
    fStack_c8 = pfVar10[2];
    fStack_c4 = pfVar10[3];
    local_c0 = pfVar10[4];
    fStack_bc = pfVar10[5];
    fStack_b8 = pfVar10[6];
    fStack_b4 = pfVar10[7];
    local_b0 = pfVar10[8];
    fStack_ac = pfVar10[9];
    fStack_a8 = pfVar10[10];
    fStack_a4 = pfVar10[0xb];
    FUN_104f6e50();
    uStack_4c = 0x3fc90fdb;
    fStack_44 = 0.0;
    FUN_10a7b1f0(&uStack_4c);
    local_120 = fStack_94;
    fStack_11c = local_90;
    fStack_118 = fStack_8c;
    local_110 = fStack_88;
    fStack_10c = fStack_84;
    fStack_108 = local_80;
    local_100 = fStack_7c;
    fStack_fc = fStack_78;
    fStack_f8 = fStack_74;
    fStack_114 = 0.0;
    fStack_104 = 0.0;
    fStack_f4 = 0.0;
    if (DAT_11de98b4 < (float)local_2c) {
      local_a0 = local_d0;
      fStack_9c = fStack_cc;
      fStack_98 = fStack_c8;
      fStack_94 = fStack_c4;
      local_90 = local_c0;
      fStack_8c = fStack_bc;
      fStack_88 = fStack_b8;
      fStack_84 = fStack_b4;
      local_80 = local_b0;
      fStack_7c = fStack_ac;
      fStack_78 = fStack_a8;
      fStack_74 = fStack_a4;
      FUN_10a78bc0();
      FUN_104f6e50();
      fVar13 = fStack_9c * (float)local_14 + local_a0 * local_30 + fStack_98 * local_28;
      fVar13 = ((fVar13 + DAT_11de9918) -
               (float)(double)((ulonglong)(double)(fVar13 - DAT_11de9918) & DAT_11de9c70)) *
               DAT_11de98e8;
      dVar11 = (double)(((float)(double)((ulonglong)(double)(fVar13 - DAT_11de9a68) & DAT_11de9c70)
                        + (fVar13 - DAT_11de9918)) * DAT_11de98e8);
      libm_sse2_asin_precise();
      FUN_10b3db50((float)dVar11);
      local_160 = fStack_94;
      local_15c = local_90;
      local_158 = fStack_8c;
      local_150 = fStack_88;
      local_14c = fStack_84;
      local_148 = local_80;
      local_140 = fStack_7c;
      local_13c = fStack_78;
      local_138 = fStack_74;
      local_154 = 0;
      local_144 = 0;
      local_134 = 0;
      pfVar10 = (float *)FUN_10a67d20(&local_a0,&local_160,&local_120);
      local_120 = *pfVar10;
      fStack_11c = pfVar10[1];
      fStack_118 = pfVar10[2];
      fStack_114 = pfVar10[3];
      local_110 = pfVar10[4];
      fStack_10c = pfVar10[5];
      fStack_108 = pfVar10[6];
      fStack_104 = pfVar10[7];
      local_100 = pfVar10[8];
      fStack_fc = pfVar10[9];
      fStack_f8 = pfVar10[10];
      fStack_f4 = pfVar10[0xb];
    }
    pfVar10 = (float *)FUN_10a67d20(&local_160,&local_d0,&local_120);
    local_d0 = *pfVar10;
    fStack_cc = pfVar10[1];
    fStack_c8 = pfVar10[2];
    local_c0 = pfVar10[4];
    fStack_bc = pfVar10[5];
    fStack_b8 = pfVar10[6];
    local_b0 = pfVar10[8];
    fStack_ac = pfVar10[9];
    fStack_a8 = pfVar10[10];
    pfVar10 = &local_d0;
    fStack_c4 = (float)param_3[0x14];
    fStack_b4 = (float)param_3[0x15];
    fStack_a4 = (float)param_3[0x16];
    piVar6 = local_d4;
  }
  FUN_10a7b9f0(1,pfVar10,piVar6,0);
LAB_10c2399e:
  FUN_104f6f60();
  return;
}



/* ===== FUN_10c330b0 @ 10c330b0  size=777 ===== */
// strings:
//   "notice"
//   "buyammo"
//   "g_debug_minimap"
//   "g_debug_teams"
//   "g_debug_objectives"
//   "debugmonsterskel"
//   "debugenablesvranimopt"
//   "debugmonsterphyspart"
//   "syscmd"
//   "setdmglog"
//   "GetMonstersAround"
//   "GetPlayersAround"
//   "farmpet"
//   "PetEquipChg"
//   "PetTalk"
//   "TestFirework"
//   "IterateNextFace"
//   "IteratePrevFace"
//   "IterateNextHair"
//   "IteratePrevHair"

/* [RE-AUTO c0]
   strings:
     ""notice""
     ""buyammo""
     ""g_debug_minimap""
     ""g_debug_teams""
     ""g_debug_objectives""
     ""debugmonsterskel""
     ""debugenablesvranimopt""
     ""debugmonsterphyspart""
     ""syscmd""
     ""setdmglog"" */

void FUN_10c330b0(int *param_1)

{
  (**(code **)(*param_1 + 0x80))("notice");
  (**(code **)(*param_1 + 0x80))(&DAT_11cd8b78);
  (**(code **)(*param_1 + 0x80))("buyammo");
  (**(code **)(*param_1 + 0x80))("g_debug_spawns");
  (**(code **)(*param_1 + 0x80))("g_debug_minimap");
  (**(code **)(*param_1 + 0x80))("g_debug_teams");
  (**(code **)(*param_1 + 0x80))("g_debug_objectives");
  (**(code **)(*param_1 + 0x80))("debugmonsterskel");
  (**(code **)(*param_1 + 0x80))("debugenablesvranimopt");
  (**(code **)(*param_1 + 0x80))("debugmonsterphyspart");
  (**(code **)(*param_1 + 0x80))("syscmd");
  (**(code **)(*param_1 + 0x80))(&DAT_11cd89ac);
  (**(code **)(*param_1 + 0x80))("setdmglog");
  (**(code **)(*param_1 + 0x80))("GetMonstersAround");
  (**(code **)(*param_1 + 0x80))("GetPlayersAround");
  (**(code **)(*param_1 + 0x80))("farmpet");
  (**(code **)(*param_1 + 0x80))("PetEquipChg");
  (**(code **)(*param_1 + 0x80))("PetTalk");
  (**(code **)(*param_1 + 0x80))("TestFirework");
  (**(code **)(*param_1 + 0x80))("IterateNextFace");
  (**(code **)(*param_1 + 0x80))("IteratePrevFace");
  (**(code **)(*param_1 + 0x80))("IterateNextHair");
  (**(code **)(*param_1 + 0x80))("IteratePrevHair");
  (**(code **)(*param_1 + 0x80))("ChangeMonster");
  (**(code **)(*param_1 + 0x80))("g_playmonsterskill");
  (**(code **)(*param_1 + 0x80))("addbuffP");
  (**(code **)(*param_1 + 0x80))("delbuffP");
  (**(code **)(*param_1 + 0x80))("getbuffP");
  (**(code **)(*param_1 + 0x80))("CtrlM");
  (**(code **)(*param_1 + 0x80))("ViewTeamPlayer");
  (**(code **)(*param_1 + 0x80))("ViewTeamPet");
  (**(code **)(*param_1 + 0x80))("ChangeArea");
  (**(code **)(*param_1 + 0x80))("SpawnItem");
  (**(code **)(*param_1 + 0x80))("PlayBuffFX");
  (**(code **)(*param_1 + 0x80))("PDAnim");
  (**(code **)(*param_1 + 0x80))("unloadui");
  (**(code **)(*param_1 + 0x80))("loadui");
  (**(code **)(*param_1 + 0x80))("g_firstAtkRotEnable");
  (**(code **)(*param_1 + 0x80))("g_otherAtkRotEnable");
  (**(code **)(*param_1 + 0x80))("setfaction");
  (**(code **)(*param_1 + 0x80))("uionly");
  (**(code **)(*param_1 + 0x80))("GotoLogin");
  (**(code **)(*param_1 + 0x80))("reloadui");
  (**(code **)(*param_1 + 0x80))("ReloadData");
  (**(code **)(*param_1 + 0x80))("buynpcshopitem");
  (**(code **)(*param_1 + 0x80))("sellnpcshopitem");
  (**(code **)(*param_1 + 0x80))("manuprod");
  (**(code **)(*param_1 + 0x80))("lmanuskl");
  (**(code **)(*param_1 + 0x80))("lmanuingd");
  (**(code **)(*param_1 + 0x80))("catcs");
  (**(code **)(*param_1 + 0x80))("warninglevel");
  return;
}



/* ===== FUN_10c36430 @ 10c36430  size=353 ===== */
// calls: atoi, memset
// strings:
//   "gm disablemonsterai %d"

/* [RE-AUTO c0]
   calls: atoi, memset
   strings:
     ""gm disablemonsterai %d"" */

void FUN_10c36430(int *param_1)

{
  char cVar1;
  char *_Str;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 local_123 [263];
  undefined4 local_1c;
  
  cVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))();
  if (cVar1 == '\0') {
    _Str = (char *)(**(code **)(*param_1 + 8))();
    iVar2 = atoi(_Str);
    (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x8c))();
    cVar1 = FUN_113a58c0();
    while (cVar1 == '\0') {
      iVar3 = FUN_113a5930();
      iVar4 = FUN_113a2390();
      if ((iVar4 == iVar2) && (*(int *)(iVar3 + 0xc) != 0)) {
        piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
        piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
        piVar5 = (int *)(**(code **)(*piVar5 + 0xc))();
        memset(local_123,0,0xff);
        FUN_100b4300();
        (**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x84))();
        iVar3 = *piVar5;
        local_1c = 0;
        uVar6 = (**(code **)(*param_1 + 8))(2,0x3f800000);
        (**(code **)(iVar3 + 0x5b4))(uVar6);
      }
      FUN_113a58d0();
      cVar1 = FUN_113a58c0();
    }
    FUN_113a5790();
  }
  return;
}



/* ===== FUN_10c3c550 @ 10c3c550  size=262 ===== */
// strings:
//   "SpawnEffectName"

/* [RE-AUTO c0]
   strings:
     ""SpawnEffectName"" */

void __fastcall FUN_10c3c550(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  undefined4 local_8;
  
  if ((param_1[0x10] != 0) && (iVar2 = FUN_11438280(), iVar2 != 0)) {
    local_8 = 0;
    piVar1 = *(int **)(DAT_1202e818 + 0xd0);
    uVar3 = (**(code **)(*param_1 + 0x18))();
    (**(code **)(*piVar1 + 0xe0))(uVar3);
    iVar2 = FUN_104753a0();
    if ((iVar2 != 0) && (iVar2 != -0x60)) {
      uVar3 = FUN_113168d0("SpawnEffectName",&local_8);
      FUN_1046dc90(uVar3);
      uVar3 = FUN_11438220();
      local_c = FUN_10520400(uVar3);
      if (((local_c != 0) && (iVar2 = FUN_11438280(), iVar2 != 0)) &&
         (iVar2 = FUN_11438280(), *(int *)(iVar2 + 0x2b14) != 0)) {
        FUN_11438280();
        uVar3 = FUN_11438220();
        iVar2 = FUN_114137f0(uVar3);
        if (iVar2 != 0) {
          uVar3 = FUN_11439740();
          iVar2 = FUN_116eb990(uVar3);
          if (iVar2 != 0) {
            FUN_11316810(iVar2 + 0x54);
            FUN_1025bc60(local_8,&local_c);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_10c5dcb0 @ 10c5dcb0  size=272 ===== */
// strings:
//   "BehaviorTreeBase"
//   "NewComerID"
//   "NewCome"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase""
     ""NewComerID""
     ""NewCome"" */

void __fastcall FUN_10c5dcb0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  char *local_2c;
  undefined4 local_28;
  int local_24 [5];
  int local_10;
  undefined4 local_c;
  char local_5;
  
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x8c))(local_24);
  cVar1 = FUN_113a58c0();
  while (cVar1 == '\0') {
    iVar2 = (**(code **)(local_24[0] + 0xc))();
    uVar5 = *(undefined4 *)(iVar2 + 8);
    iVar2 = (**(code **)(*param_1 + 0x68))(uVar5);
    local_5 = iVar2 != -1;
    piVar3 = (int *)(**(code **)(local_24[0] + 0xc))();
    iVar2 = (**(code **)(*piVar3 + 0x88))();
    if ((((param_1[8] == iVar2) && (local_5 == '\0')) &&
        (piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(uVar5),
        piVar3 != (int *)0x0)) &&
       (piVar4 = (int *)(**(code **)(*(int *)param_1[1] + 0x18))("BehaviorTreeBase"),
       piVar4 != (int *)0x0)) {
      uVar5 = (**(code **)(*piVar3 + 4))();
      (**(code **)(*piVar4 + 0x70))("NewComerID",uVar5);
      local_10 = param_1[2];
      local_30 = &local_10;
      local_38 = 0x124;
      local_34 = 0x4ffff;
      local_28 = 0;
      local_2c = "NewCome";
      local_c = 2;
      (**(code **)(*(int *)param_1[1] + 0x24))(&local_38);
    }
    FUN_113a58d0();
    cVar1 = FUN_113a58c0();
  }
  FUN_113a5790();
  return;
}



/* ===== FUN_10c5e3d0 @ 10c5e3d0  size=136 ===== */
// strings:
//   "BehaviorTreeBase"
//   "NewComerID"
//   "NewCome"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase""
     ""NewComerID""
     ""NewCome"" */

void __thiscall FUN_10c5e3d0(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  char *local_14;
  undefined4 local_10;
  int local_c [2];
  
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x7c))(param_2);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x68))();
    if (iVar1 == -1) {
      piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x18))("BehaviorTreeBase");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x70))("NewComerID",param_2);
        local_c[0] = param_1[2];
        local_18 = local_c;
        local_20 = 0x124;
        local_1c = 0x4ffff;
        local_10 = 0;
        local_14 = "NewCome";
        local_c[1] = 2;
        (**(code **)(*(int *)param_1[1] + 0x24))(&local_20);
        return;
      }
    }
  }
  return;
}



/* ===== CSingle::Shoot @ 10c63300  size=3226 ===== */
// strings:
//   "g_aimdebug"
//   "CSingle::Shoot"
//   "Particle.SpawnEffect"
//   "Fire_Ability_Pc.CST.WN_MultipleCST"
//   "Fire_Ability_Pc.CST.WN_MultipleChargeCST"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSingle::Shoot
   strings:
     ""g_aimdebug""
     ""CSingle::Shoot""
     ""Particle.SpawnEffect""
     ""Fire_Ability_Pc.CST.WN_MultipleCST""
     ""Fire_Ability_Pc.CST.WN_MultipleChargeCST"" */

undefined1 __thiscall
CSingle__Shoot(int *param_1,ulonglong param_2,undefined **param_3,undefined8 param_4,float param_5,
              int param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined1 *puVar4;
  float10 fVar5;
  bool bVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
  uint uVar14;
  undefined1 *puVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  char *pcVar22;
  undefined1 local_f0 [4];
  undefined4 local_ec;
  undefined1 local_b0 [12];
  undefined1 local_a4 [28];
  int *local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  undefined **local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined **local_3c;
  undefined8 local_38;
  undefined **ppuStack_30;
  float fStack_2c;
  int *local_28;
  int local_24;
  float local_20;
  undefined1 local_19;
  int *local_18;
  float local_14;
  int *local_10;
  char local_9;
  float local_8;
  
  local_18 = *(int **)(param_1[0x62] + 0x38);
  local_88 = param_1;
  local_24 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 0x60))(local_18);
  piVar8 = (int *)FUN_10cbb820();
  local_10 = piVar8;
  if (piVar8 == (int *)0x0) {
    local_9 = '\0';
  }
  else {
    local_9 = (**(code **)(*piVar8 + 0x1c4))();
    (**(code **)(*piVar8 + 0x1d0))();
  }
  cVar7 = (**(code **)(*param_1 + 0x8c))(1);
  if (cVar7 == '\0') {
    return 0;
  }
  local_4c = param_3;
  local_58 = param_5;
  local_54 = param_2;
  local_60 = param_4;
  (**(code **)(*param_1 + 0x18c))(local_b0,&local_60);
  local_19 = 0;
  local_ec = 0;
  (**(code **)(*param_1 + 0x188))(local_a4,0x44fa0000,&local_19,local_f0);
  if ((DAT_1202f070 & 1) == 0) {
    DAT_1202f070 = DAT_1202f070 | 1;
    DAT_1202f06c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))("g_aimdebug");
  }
  iVar9 = (**(code **)(*DAT_1202f06c + 8))();
  if (iVar9 != 0) {
    piVar8 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
    piVar8 = (int *)(**(code **)(*piVar8 + 0x194))();
    (**(code **)(*piVar8 + 4))("CSingle::Shoot",0);
    (**(code **)(*piVar8 + 8))(local_a4,0x3f19999a,0,0,0x3f800000,0x3f800000,&DAT_41200000);
    local_38 = CONCAT44((float)local_54 + (float)local_60 * DAT_11de9a30,(undefined4)local_38);
    ppuStack_30 = (undefined **)(local_54._4_4_ + local_60._4_4_ * DAT_11de9a30);
    fStack_2c = (float)local_4c + local_58 * DAT_11de9a30;
    (**(code **)(*piVar8 + 0x10))
              (&local_54,(int)&local_38 + 4,0,0,0x3f800000,0x3f800000,&DAT_41200000);
  }
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    piVar8 = (int *)(**(code **)(*param_1 + 0x1fc))
                              (local_18,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    piVar8 = (int *)(**(code **)(*(int *)(param_1[4] + 0x34c) + 0x158))(local_18,0);
  }
  local_28 = piVar8;
  if (piVar8 != (int *)0x0) {
    iVar9 = param_1[100];
    (**(code **)(*piVar8 + 0xcc))
              (*(undefined4 *)(iVar9 + 0x5c),*(undefined4 *)(iVar9 + 0x60),
               *(undefined4 *)(iVar9 + 100),*(undefined4 *)(iVar9 + 0x68));
    if (*(char *)(param_1[0x62] + 0x6a) != '\0') {
      (**(code **)(*piVar8 + 0xb8))();
    }
    FUN_10ba9b00();
    if (*(char *)(DAT_1202e818 + 0x209) != '\0') {
      (**(code **)(*local_10 + 0x1c4))();
    }
    (**(code **)(*piVar8 + 200))();
    if ((char)param_1[0x49] == '\0') {
      iVar9 = *piVar8;
      uVar11 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 0x20))();
      (**(code **)(iVar9 + 0x88))(uVar11);
      piVar8 = local_28;
    }
    else {
      (**(code **)(*piVar8 + 0x84))(param_1[0x48]);
    }
    if (*(char *)(DAT_1202e818 + 0x209) != '\0') {
      local_38 = local_38 & 0xffffffff;
      ppuStack_30 = (undefined **)0x3f800000;
      fStack_2c = 0.0;
      FUN_10c64010((int)&local_38 + 4,&local_60);
      if (param_6 == 0) {
        pcVar22 = "Fire_Ability_Pc.CST.WN_MultipleCST";
LAB_10c6368c:
        piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                                   (pcVar22,"Particle.SpawnEffect",1,1);
        if (piVar10 != (int *)0x0) {
          fVar5 = (float10)fcos((float10)-0.7853982);
          fVar16 = (float10)fsin((float10)-0.7853982);
          fVar18 = (float)fVar5;
          fVar19 = (float)fVar16;
          fVar5 = (float10)fcos((float10)0.0);
          fVar16 = (float10)fsin((float10)0.0);
          fVar17 = (float)fVar5;
          fVar21 = (float)fVar16;
          fVar5 = (float10)fcos((float10)0.0);
          fVar16 = (float10)fsin((float10)0.0);
          fVar1 = (float)fVar5;
          fVar2 = (float)fVar16;
          fVar20 = fVar21 * fVar19 * fVar2 + fVar17 * fVar18 * fVar1;
          local_8 = fVar1 * fVar17 * fVar19 - fVar2 * fVar21 * fVar18;
          local_14 = fVar18 * fVar2 * fVar17 - fVar19 * fVar1 * fVar21;
          local_20 = fVar18 * fVar1 * fVar21 + fVar19 * fVar2 * fVar17;
          fVar18 = local_74 + local_84 + local_64;
          if (fVar18 <= DAT_11de9890) {
            if ((local_84 < local_74) || (local_84 < local_64)) {
              if ((local_74 < local_84) || (local_74 < local_64)) {
                fVar18 = _UNK_11cbf0e8;
                fVar19 = _UNK_11cbf0e4;
                fVar17 = _DAT_11cbf0e0;
                fVar21 = _UNK_11cbf0ec;
                if ((local_84 <= local_64) && (local_74 <= local_64)) {
                  fVar18 = SQRT(((local_64 - local_84) - local_74) + DAT_11de9918);
                  fVar21 = DAT_11de98e8 / fVar18;
                  fVar18 = fVar18 * DAT_11de98e8;
                  fVar19 = (local_68 + local_70) * fVar21;
                  fVar17 = (local_7c + local_6c) * fVar21;
                  fVar21 = (local_78 - local_80) * fVar21;
                }
              }
              else {
                fVar19 = SQRT(((local_74 - local_64) - local_84) + DAT_11de9918);
                fVar21 = DAT_11de98e8 / fVar19;
                fVar18 = (local_68 + local_70) * fVar21;
                fVar19 = fVar19 * DAT_11de98e8;
                fVar17 = (local_78 + local_80) * fVar21;
                fVar21 = (local_7c - local_6c) * fVar21;
              }
            }
            else {
              fVar17 = SQRT(((local_84 - local_74) - local_64) + DAT_11de9918);
              fVar21 = DAT_11de98e8 / fVar17;
              fVar18 = (local_7c + local_6c) * fVar21;
              fVar19 = (local_78 + local_80) * fVar21;
              fVar17 = fVar17 * DAT_11de98e8;
              fVar21 = (local_68 - local_70) * fVar21;
            }
          }
          else {
            fVar21 = SQRT(fVar18 + DAT_11de9918);
            fVar17 = DAT_11de98e8 / fVar21;
            fVar18 = (local_78 - local_80) * fVar17;
            fVar19 = (local_7c - local_6c) * fVar17;
            fVar17 = (local_68 - local_70) * fVar17;
            fVar21 = fVar21 * DAT_11de98e8;
          }
          ppuStack_30 = param_3;
          fStack_2c = 1.0;
          local_48 = (fVar19 * local_14 - fVar18 * local_20) + local_8 * fVar21 + fVar17 * fVar20;
          local_44 = (fVar18 * local_8 - fVar17 * local_14) + local_20 * fVar21 + fVar19 * fVar20;
          local_40 = (fVar17 * local_20 - fVar19 * local_8) + local_14 * fVar21 + fVar18 * fVar20;
          local_38 = param_2;
          local_3c = (undefined **)
                     (fVar21 * fVar20 - (fVar19 * local_20 + fVar17 * local_8 + fVar18 * local_14));
          (**(code **)(*piVar10 + 0x10))(&local_48,0,0,0,0);
        }
      }
      else if (param_6 == 1) {
        pcVar22 = "Fire_Ability_Pc.CST.WN_MultipleChargeCST";
        goto LAB_10c6368c;
      }
      (**(code **)(*piVar8 + 0x8c))(&local_54,&local_60,local_b0,param_1[0x1c]);
    }
    param_6 = *(int *)(param_1[0x62] + 0xb4);
    if ((*(int *)(DAT_120286b8 + 0x360) != 0) || (*(int *)(DAT_120286b8 + 0x364) != 0)) {
      param_6 = 1;
    }
    iVar9 = (**(code **)(*(int *)param_1[4] + 0x200))();
    if ((*(byte *)(iVar9 + 0x20) & 1) == 0) {
      iVar9 = *(int *)(param_1[0x62] + 0x98);
      if ((iVar9 == 0) || (*(int *)(iVar9 + -8) == 0)) goto LAB_10c63af8;
LAB_10c63b01:
      iVar9 = (**(code **)(*param_1 + 0x3c))();
      if ((local_24 != iVar9) && (local_24 % param_6 != 0)) goto LAB_10c63b22;
      bVar6 = true;
    }
    else {
      iVar9 = *(int *)(param_1[0x62] + 0xa0);
      if ((iVar9 != 0) && (*(int *)(iVar9 + -8) != 0)) goto LAB_10c63b01;
LAB_10c63af8:
      cVar7 = FUN_10ab5740();
      if (cVar7 == '\0') goto LAB_10c63b01;
LAB_10c63b22:
      bVar6 = false;
    }
    if ((*(int *)(param_1[0x62] + 0x20) < 1) || (*(int *)(param_1[0x62] + 0x20) < local_24)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    param_6 = CONCAT31(param_6._1_3_,cVar7);
    if ((bVar6) || (cVar7 != '\0')) {
      FUN_11095c60(&local_54,local_a4,param_6);
    }
    iVar9 = (**(code **)(*(int *)piVar8[3] + 4))();
    param_1[10] = iVar9;
  }
  if ((local_9 != '\0') && (cVar7 = (**(code **)(*local_10 + 0x1d0))(), cVar7 != '\0')) {
    (**(code **)(*local_10 + 0x48c))();
    piVar10 = (int *)local_10[0x4e7];
    if ((*(char *)(param_1[0x62] + 0x70) != '\0') &&
       (((piVar10 != (int *)0x0 && (cVar7 = (**(code **)(*piVar10 + 8))(3), cVar7 == '\0')) &&
        (cVar7 = (**(code **)(*piVar10 + 8))(4), cVar7 == '\0')))) {
      ppuStack_30 = &PTR_FUN_11cbc798;
      fStack_2c = 1.0;
      uVar11 = FUN_10a74dd0(&ppuStack_30);
      uVar12 = FUN_10b09fd0(local_10[2],0x3f400000);
      uVar12 = FUN_10a74e40(uVar12);
      local_3c = &PTR_FUN_11cbc7b0;
      (**(code **)(*(int *)local_10[0x4e7] + 4))(uVar12,uVar11,0x3e4ccccd,3);
      piVar8 = local_28;
    }
  }
  if (((piVar8 == (int *)0x0) || (piVar8[7] == 0)) ||
     ((*(char *)(piVar8[7] + 5) == '\0' || (*(char *)(DAT_1202e818 + 0x208) == '\0')))) {
LAB_10c63c82:
    if (*(char *)(DAT_1202e818 + 0x16c) != '\0') {
      if (local_18 == (int *)0x0) {
        ppuVar13 = (undefined **)0x0;
      }
      else {
        ppuVar13 = (undefined **)(**(code **)(*local_18 + 8))();
      }
      piVar8 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      piVar8 = (int *)(**(code **)(*piVar8 + 0x7c))();
      fStack_2c = *(float *)(local_88[4] + 8);
      local_40 = (float)CONCAT31(local_40._1_3_,0x1b);
      local_38 = 0x3f800000;
      ppuStack_30 = (undefined **)0x0;
      iVar9 = *piVar8;
      local_3c = ppuVar13;
      uVar11 = FUN_10cbb800(&local_40);
      (**(code **)(iVar9 + 0x18))(uVar11);
      piVar8 = local_28;
      param_1 = local_88;
    }
  }
  else if (*(char *)(DAT_1202e818 + 0x16c) != '\0') {
    if ((local_10 != (int *)0x0) && (cVar7 = (**(code **)(*local_10 + 0x1d0))(), cVar7 != '\0')) {
      (**(code **)(*(int *)piVar8[1] + 0xc))(0);
    }
    goto LAB_10c63c82;
  }
  if (piVar8 == (int *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*(int *)piVar8[3] + 4))();
  }
  iVar9 = ((int *)param_1[4])[0xd3];
  uVar11 = (**(code **)(*(int *)param_1[4] + 0x68))(uVar11,local_18,&local_54,&local_60,local_b0);
  (**(code **)(iVar9 + 0x128))(uVar11);
  (**(code **)(*param_1 + 0x1a8))(1,1,1);
  (**(code **)(*param_1 + 0x1b8))(&local_54);
  (**(code **)(*param_1 + 0x1b4))();
  (**(code **)(*param_1 + 0x1bc))(&local_54,&local_60);
  fVar18 = (float)param_1[7];
  *(short *)(param_1 + 9) = (short)param_1[9] + 1;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = (int)((float)param_1[6] + fVar18);
  param_1[0x47] = (int)((float)param_1[6] + fVar18 + DAT_11de98e8);
  if ((short)param_1[9] == *(short *)(param_1[0x62] + 0x1c)) {
    *(undefined2 *)(param_1 + 9) = 0;
  }
  iVar9 = local_24;
  if (*(int *)(DAT_120286b8 + 0x3e0) == 0) {
    iVar9 = local_24 + -1;
  }
  uVar3 = *(uint *)(param_1[0x62] + 0x80);
  if ((uVar3 != 0) && (local_9 != '\0')) {
    uVar14 = FUN_10c3f250();
    iVar9 = iVar9 - (int)((ulonglong)uVar14 * (ulonglong)uVar3 >> 0x20);
    if (iVar9 < 0) {
      iVar9 = 0;
    }
  }
  if (*(short *)(param_1[0x62] + 6) != -1) {
    if (*(short *)(param_1[0x62] + 6) == 0) {
      (**(code **)(*(int *)(param_1[4] + 0x34c) + 0x160))(local_18,iVar9);
    }
    else {
      (**(code **)(*(int *)(param_1[4] + 0x34c) + 100))();
    }
  }
  cVar7 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 200))();
  if (((cVar7 == '\0') || (cVar7 = (**(code **)(*param_1 + 0x40))(), cVar7 != '\0')) ||
     (*(char *)(param_1[0x62] + 0x1e) == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  puVar4 = *(undefined1 **)(param_1[0x62] + 0x40);
  if ((puVar4 != (undefined1 *)0x0) && (*(int *)(puVar4 + -8) != 0)) {
    if ((!bVar6) && (0 < iVar9)) goto LAB_10c63eff;
    local_8 = 0.0;
    puVar15 = &DAT_11d9d32b;
    if (puVar4 != (undefined1 *)0x0) {
      puVar15 = puVar4;
    }
    FUN_10ab4370(puVar15);
    FUN_10cdcfe0(&local_8,0x21a0033,1);
    FUN_10ab53d0(local_8);
  }
  if (bVar6) {
    iVar9 = *(int *)(param_1[4] + 0x34c);
    uVar11 = (**(code **)(iVar9 + 0x9c))();
    piVar8 = (int *)(**(code **)(iVar9 + 0x94))(uVar11);
    if ((piVar8 != (int *)0x0) && (cVar7 = (**(code **)(*piVar8 + 0x4c))(), cVar7 != '\0')) {
      (**(code **)(*piVar8 + 0xa8))(1,1,1);
    }
  }
LAB_10c63eff:
  cVar7 = (**(code **)(*param_1 + 0x40))();
  piVar8 = local_18;
  if ((cVar7 != '\0') &&
     (((**(code **)(*(int *)(param_1[4] + 0x34c) + 0x154))(local_18), local_10 == (int *)0x0 ||
      (cVar7 = (**(code **)(*local_10 + 0x1c4))(), cVar7 != '\0')))) {
    (**(code **)(*(int *)param_1[4] + 0xd4))(1);
  }
  if (local_28 == (int *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*(int *)local_28[1] + 0x70))();
  }
  (**(code **)(*(int *)(param_1[4] + 0x34c) + 0xf0))
            (piVar8,&local_54,&local_60,local_b0,local_a4,param_1[0x1c],uVar11,0);
  return 1;
}



/* ===== CGunTurret::PredictTargetPos @ 10c65a10  size=1251 ===== */
// strings:
//   "CGunTurret::PredictTargetPos"
//   "Predict %s: speed %.1f (dspeed %.1f), acc %.1f, time %.1f"

/* [RE-AUTO c3]
   id: CGunTurret::PredictTargetPos
   strings:
     ""CGunTurret::PredictTargetPos""
     ""Predict %s: speed %.1f (dspeed %.1f), acc %.1f, time %.1f"" */

void __thiscall CGunTurret__PredictTargetPos(int param_1,float *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_d0 [12];
  undefined8 local_c4;
  float local_bc;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  float local_30;
  int *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float local_14;
  
  uVar1 = (**(code **)(*param_3 + 4))();
  piVar2 = (int *)FUN_10cbb850(uVar1);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x25c))();
    if (iVar3 != 0) {
      param_3 = *(int **)(iVar3 + 0xc);
    }
  }
  FUN_10c65920(&local_1c,param_3);
  if ((*(char *)(param_1 + 0x4ea) == '\0') && (*(float *)(param_1 + 0x4cc) != 0.0)) {
    local_2c = (int *)(**(code **)(*param_3 + 0x16c))();
    FUN_10a70bf0();
    if (local_2c != (int *)0x0) {
      iVar3 = (**(code **)(*local_2c + 0x18))(local_d0);
      if (iVar3 != 0) {
        local_44 = local_c4;
        local_3c = local_bc;
        local_30 = local_a4;
        local_60 = SQRT(fStack_a8 * fStack_a8 + local_ac * local_ac + local_a4 * local_a4);
        if (DAT_11de98bc <= local_60) {
          local_20 = DAT_11de9918 / local_60;
          local_28 = fStack_a8 * local_20;
          local_ac = local_ac * local_20;
          local_20 = local_a4 * local_20;
        }
        else {
          local_20 = local_a4;
          local_60 = 0.0;
          local_28 = fStack_a8;
        }
        uStack_54 = 0;
        uStack_58 = 0;
        uStack_5c = 0;
        local_24 = local_ac;
        iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x198))(1);
        fVar5 = local_1c - *(float *)(iVar3 + 0xc);
        local_30 = *(float *)(iVar3 + 0x2c);
        fVar6 = fStack_18 - *(float *)(iVar3 + 0x1c);
        fVar7 = local_14 - local_30;
        local_38 = CONCAT44(*(float *)(iVar3 + 0x1c),*(float *)(iVar3 + 0xc));
        local_70 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        if (DAT_11de98bc <= local_70) {
          fVar4 = DAT_11de9918 / local_70;
          local_2c = (int *)(local_44._4_4_ * fVar6 * fVar4 + (float)local_44 * fVar5 * fVar4 +
                            local_3c * fVar7 * fVar4);
          piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x34c) + 0x78))(0);
          uVar1 = (**(code **)(*piVar2 + 0xdc))();
          (**(code **)(*DAT_120286c8 + 0x168))(uVar1);
          iVar3 = FUN_1111b3f0();
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
            fVar5 = *(float *)(iVar3 + 0x2c) - (float)local_2c;
            if (fVar5 <= DAT_11de9918) {
              fVar5 = DAT_11de9918;
            }
            local_70 = local_70 / fVar5;
            if (DAT_11cc4180 < local_60) {
              local_60 = DAT_11cc4180;
              uStack_5c = 0;
              uStack_58 = 0;
              uStack_54 = 0;
            }
            fVar6 = local_60 * DAT_11de98e8;
            fVar7 = local_20 * fVar6;
            fVar5 = *(float *)(param_1 + 0x4cc);
            local_20 = ((float)local_44 * local_70 + local_24 * fVar6 * local_70 * local_70) * fVar5
            ;
            local_28 = (local_44._4_4_ * local_70 + local_28 * fVar6 * local_70 * local_70) * fVar5;
            local_24 = (local_3c * local_70 + fVar7 * local_70 * local_70) * fVar5;
            if (*(int *)(DAT_120286b8 + 0x8a8) == 2) {
              piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar2 = (int *)(**(code **)(*piVar2 + 0x194))();
              (**(code **)(*piVar2 + 4))("CGunTurret::PredictTargetPos",0);
              local_50 = local_20 + local_1c;
              local_4c = local_28 + fStack_18;
              local_48 = local_24 + local_14;
              (**(code **)(*piVar2 + 8))(&local_50,0x3e4ccccd,0x3f800000,0,0,0x3f800000,0x3f800000);
              uVar1 = (**(code **)(*param_3 + 0x48))
                                ((double)SQRT((float)local_44 * (float)local_44 +
                                              local_44._4_4_ * local_44._4_4_ + local_3c * local_3c)
                                 ,(double)(float)local_2c,(double)local_60,(double)local_70);
              FUN_10c6a900(*(undefined4 *)(DAT_1202e818 + 0x10),local_38,local_30,0x3fb33333,
                           "Predict %s: speed %.1f (dspeed %.1f), acc %.1f, time %.1f",uVar1);
            }
            *param_2 = local_20 + local_1c;
            param_2[1] = local_28 + fStack_18;
            param_2[2] = local_24 + local_14;
            return;
          }
        }
      }
    }
  }
  *(ulonglong *)param_2 = CONCAT44(fStack_18,local_1c);
  param_2[2] = local_14;
  return;
}



/* ===== FUN_10c8a390 @ 10c8a390  size=2171 ===== */
// strings:
//   "UIEntityTagsDynTex"
//   "CUIEntityDynTexTag"
//   "AddEntityTag"
//   "Adds a 3D entity Tag"
//   "EntityID"
//   "Entity ID of tagged entity"
//   "uiElements_UIElement"
//   "UIElement that is used for this tag (Instance with EntityId as instanceId will be created)"
//   "EntityClass"
//   "EntityClass of the spawned entity"
//   "Material"
//   "Material template that is used for the dyn texture"
//   "OffsetX"
//   "X Offset in camera space relative to entity pos"
//   "OffsetY"
//   "Y Offset in camera space relative to entity pos"
//   "OffsetZ"
//   "Z Offset in camera space relative to entity pos"
//   "TagIDX"
//   "Custom IDX to identify entity tag."

/* [RE-AUTO c0]
   strings:
     ""UIEntityTagsDynTex""
     ""CUIEntityDynTexTag""
     ""AddEntityTag""
     ""Adds a 3D entity Tag""
     ""EntityID""
     ""Entity ID of tagged entity""
     ""uiElements_UIElement""
     ""UIElement that is used for this tag (Instance with EntityId as instanceId will be created)""
     ""EntityClass""
     ""EntityClass of the spawned entity"" */

undefined4 * __fastcall FUN_10c8a390(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *local_38;
  char *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined1 local_24;
  char *local_20;
  undefined1 *local_1c;
  char *local_18;
  char *pcStack_14;
  char *pcStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  param_1[1] = &PTR_FUN_11cdc4fc;
  param_1[2] = &PTR_LAB_11dbedbc;
  param_1[3] = &PTR_FUN_11cd600c;
  *param_1 = &PTR_FUN_11cdc514;
  param_1[1] = &PTR_LAB_11cdc51c;
  param_1[2] = &PTR_LAB_11cdc534;
  param_1[3] = &PTR_LAB_11cdc554;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(int **)(DAT_1202e818 + 0xbc) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x68))("UIEntityTagsDynTex",0);
    param_1[4] = piVar1;
    (**(code **)(*piVar1 + 0x10))(param_1,"CUIEntityDynTexTag");
    local_38 = "AddEntityTag";
    local_34 = "AddEntityTag";
    local_30 = "Adds a 3D entity Tag";
    local_2c = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_24 = 0;
    local_20 = "Array";
    local_1c = &DAT_11d9d32b;
    local_18 = "EntityID";
    pcStack_14 = "EntityID";
    pcStack_10 = "Entity ID of tagged entity";
    uStack_c = 2;
    local_28 = DAT_1202f1cc;
    puVar2 = (undefined4 *)FUN_10c90ef0(DAT_1202f1cc + *(int *)(DAT_1202f1cc + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "uiElements_UIElement";
    pcStack_14 = "uiElements_UIElement";
    pcStack_10 = 
    "UIElement that is used for this tag (Instance with EntityId as instanceId will be created)";
    uStack_c = 4;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "EntityClass";
    pcStack_14 = "EntityClass";
    pcStack_10 = "EntityClass of the spawned entity";
    uStack_c = 4;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "Material";
    pcStack_14 = "Material";
    pcStack_10 = "Material template that is used for the dyn texture";
    uStack_c = 4;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "OffsetX";
    pcStack_14 = "OffsetX";
    pcStack_10 = "X Offset in camera space relative to entity pos";
    uStack_c = 3;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "OffsetY";
    pcStack_14 = "OffsetY";
    pcStack_10 = "Y Offset in camera space relative to entity pos";
    uStack_c = 3;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "OffsetZ";
    pcStack_14 = "OffsetZ";
    pcStack_10 = "Z Offset in camera space relative to entity pos";
    uStack_c = 3;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "TagIDX";
    pcStack_14 = "TagIDX";
    pcStack_10 = "Custom IDX to identify entity tag.";
    uStack_c = 4;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_8 = (**(code **)(*(int *)param_1[4] + 0xc))(&local_38);
    puVar3 = (undefined4 *)FUN_10c8c080(&local_8);
    *puVar3 = FUN_10c8b6b0;
    puVar3[1] = 0;
    if (*(int *)(local_28 + -4) != 0) {
      FUN_10c3d900(local_28 + -4);
    }
    local_38 = "UpdateEntityTag";
    local_34 = "UpdateEntityTag";
    local_30 = "Updates a 3D entity Tag";
    local_2c = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_24 = 0;
    local_20 = "Array";
    local_1c = &DAT_11d9d32b;
    local_18 = "EntityID";
    pcStack_14 = "EntityID";
    pcStack_10 = "Entity ID of tagged entity";
    uStack_c = 2;
    local_28 = DAT_1202f1cc;
    puVar2 = (undefined4 *)FUN_10c90ef0(DAT_1202f1cc + *(int *)(DAT_1202f1cc + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "TagIDX";
    pcStack_14 = "TagIDX";
    pcStack_10 = "Custom IDX to identify entity tag.";
    uStack_c = 4;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "OffsetX";
    pcStack_14 = "OffsetX";
    pcStack_10 = "X Offset in camera space relative to entity pos";
    uStack_c = 3;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "OffsetY";
    pcStack_14 = "OffsetY";
    pcStack_10 = "Y Offset in camera space relative to entity pos";
    uStack_c = 3;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "OffsetZ";
    pcStack_14 = "OffsetZ";
    pcStack_10 = "Z Offset in camera space relative to entity pos";
    uStack_c = 3;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "LerpSpeed";
    pcStack_14 = "LerpSpeed";
    pcStack_10 = "Define speed of lerp between old and new offset, 0=instant";
    uStack_c = 3;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_8 = (**(code **)(*(int *)param_1[4] + 0xc))(&local_38);
    puVar3 = (undefined4 *)FUN_10c8c080(&local_8);
    *puVar3 = FUN_10c8b8d0;
    puVar3[1] = 0;
    if (*(int *)(local_28 + -4) != 0) {
      FUN_10c3d900(local_28 + -4);
    }
    local_38 = "RemoveEntityTag";
    local_34 = "RemoveEntityTag";
    local_30 = "Removes a 3D entity Tag";
    local_2c = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_24 = 0;
    local_20 = "Array";
    local_1c = &DAT_11d9d32b;
    local_18 = "EntityID";
    pcStack_14 = "EntityID";
    pcStack_10 = "Entity ID of tagged entity";
    uStack_c = 2;
    local_28 = DAT_1202f1cc;
    puVar2 = (undefined4 *)FUN_10c90ef0(DAT_1202f1cc + *(int *)(DAT_1202f1cc + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_18 = "TagIDX";
    pcStack_14 = "TagIDX";
    pcStack_10 = "Custom IDX to identify entity tag.";
    uStack_c = 4;
    puVar2 = (undefined4 *)FUN_10c90ef0(local_28 + *(int *)(local_28 + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_8 = (**(code **)(*(int *)param_1[4] + 0xc))(&local_38);
    puVar3 = (undefined4 *)FUN_10c8c080(&local_8);
    *puVar3 = FUN_10c8ba20;
    puVar3[1] = 0;
    if (*(int *)(local_28 + -4) != 0) {
      FUN_10c3d900(local_28 + -4);
    }
    local_38 = "RemoveAllEntityTag";
    local_34 = "RemoveAllEntityTag";
    local_30 = "Removes all 3D entity Tags for given entity";
    local_2c = 0;
    if ((DAT_1202f1d0 & 1) == 0) {
      DAT_1202f1d0 = DAT_1202f1d0 | 1;
      DAT_1202f1cc = &DAT_1202f1c8;
    }
    local_24 = 0;
    local_20 = "Array";
    local_1c = &DAT_11d9d32b;
    local_18 = "EntityID";
    pcStack_14 = "EntityID";
    pcStack_10 = "Entity ID of tagged entity";
    uStack_c = 2;
    local_28 = DAT_1202f1cc;
    puVar2 = (undefined4 *)FUN_10c90ef0(DAT_1202f1cc + *(int *)(DAT_1202f1cc + -4) * 0x10,1);
    puVar3 = puVar2 + 4;
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_18;
        puVar2[1] = pcStack_14;
        puVar2[2] = pcStack_10;
        puVar2[3] = uStack_c;
      }
    }
    local_8 = (**(code **)(*(int *)param_1[4] + 0xc))(&local_38);
    puVar3 = (undefined4 *)FUN_10c8c080(&local_8);
    *puVar3 = FUN_10c8bab0;
    puVar3[1] = 0;
    if (*(int *)(local_28 + -4) != 0) {
      FUN_10c3d900(local_28 + -4);
    }
    (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0x5c))(param_1 + 1,"CUIEntityDynTexTag");
  }
  return param_1;
}



/* ===== FUN_10ccea90 @ 10ccea90  size=214 ===== */
// strings:
//   "HitPoints"
//   "bPickable"
//   "bMounted"
//   "bPhysics"
//   "bUsable"
//   "bAutoPickup"
//   "bRespawn"
//   "Respawn"
//   "nTimer"
//   "bUnique"

/* [RE-AUTO c0]
   strings:
     ""HitPoints""
     ""bPickable""
     ""bMounted""
     ""bPhysics""
     ""bUsable""
     ""bAutoPickup""
     ""bRespawn""
     ""Respawn""
     ""nTimer""
     ""bUnique"" */

void __thiscall FUN_10ccea90(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_10ab32a0("HitPoints",param_1 + 0x2a8);
    FUN_10ccf320("bPickable",param_1 + 0x2ac);
    FUN_10ccf320("bMounted",param_1 + 0x2ad);
    FUN_10ccf320("bPhysics",param_1 + 0x2ae);
    FUN_10ccf320("bUsable",param_1 + 0x2af);
    FUN_10ccf320("bAutoPickup",param_1 + 0x2b0);
    FUN_10c69dc0(*(undefined4 *)(param_1 + 0xc),"Respawn","bRespawn",param_1 + 0x2a5);
    FUN_10ccf1f0(*(undefined4 *)(param_1 + 0xc),"Respawn","nTimer",param_1 + 0x2a0);
    FUN_10c69dc0(*(undefined4 *)(param_1 + 0xc),"Respawn","bUnique",param_1 + 0x2a4);
  }
  return;
}



/* ===== FUN_10d07650 @ 10d07650  size=413 ===== */
// strings:
//   "Anti-Parallel Path"
//   "Parallel Path"
//   "Perpendicular Path"
//   "ThreatCollisionPath [%s]"

/* [RE-AUTO c0]
   strings:
     ""Anti-Parallel Path""
     ""Parallel Path""
     ""Perpendicular Path""
     ""ThreatCollisionPath [%s]"" */

void FUN_10d07650(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_34 [12];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((*param_1 != 0) && (*(int *)(DAT_120286b8 + 0xc0c) != 0)) &&
     (piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x4c) + 0x90))(), piVar2 != (int *)0x0)
     ) {
    FUN_10d057b0(local_1c);
    (**(code **)(*(int *)*param_1 + 200))(local_28);
    (**(code **)(*(int *)*param_1 + 0x7c))(&local_4c,1);
    local_40 = local_40 - local_4c;
    local_10 = 0.0;
    if (0.0 <= local_40) {
      local_10 = SQRT((local_3c - local_48) * (local_3c - local_48) + local_40 * local_40 +
                      (local_38 - local_44) * (local_38 - local_44)) * DAT_11de98e8;
    }
    local_8 = 0xff0000ff;
    local_c = 0xff0000ff;
    (**(code **)(*piVar2 + 0x50))(local_1c,&local_c,local_28,&local_8,0x3f800000);
    local_c = 0xff00ff00;
    local_8 = 0xff00ff00;
    (**(code **)(*piVar2 + 0x50))(local_1c,&local_8,param_1 + 1,&local_c,0x3f800000);
    local_c = 0xff0000ff;
    (**(code **)(*piVar2 + 0x28))(local_28,local_10,&local_c);
    iVar1 = param_1[7];
    if (iVar1 == 1) {
      pcVar4 = "Anti-Parallel Path";
    }
    else if (iVar1 == 2) {
      pcVar4 = "Parallel Path";
    }
    else if (iVar1 == 3) {
      pcVar4 = "Perpendicular Path";
    }
    else {
      pcVar4 = "None";
    }
    iVar1 = *piVar2;
    uVar3 = (**(code **)(*(int *)*param_1 + 200))
                      (local_34,0x3f99999a,"ThreatCollisionPath [%s]",pcVar4);
    (**(code **)(iVar1 + 0x44))(piVar2,uVar3);
  }
  return;
}



/* ===== FUN_10d14690 @ 10d14690  size=476 ===== */
// calls: rand, libm_sse2_sin_precise, libm_sse2_cos_precise
// strings:
//   "Steer_WanderRadius"
//   "Steer_WanderDistance"
//   "Steer_WanderJitter"
//   "Steer_WanderTimePeriod"

/* [RE-AUTO c0]
   calls: rand, libm_sse2_sin_precise, libm_sse2_cos_precise
   strings:
     ""Steer_WanderRadius""
     ""Steer_WanderDistance""
     ""Steer_WanderJitter""
     ""Steer_WanderTimePeriod"" */

void __fastcall FUN_10d14690(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  float local_c;
  float local_8;
  
  FUN_10d05380();
  FUN_113168d0("Steer_WanderRadius");
  FUN_10d05610(param_1 + 0x78,&local_c);
  FUN_113168d0("Steer_WanderDistance");
  FUN_10d05610(param_1 + 0x90,&local_c);
  FUN_113168d0("Steer_WanderJitter");
  FUN_10d05610(param_1 + 0xa8,&local_c);
  FUN_113168d0("Steer_WanderTimePeriod");
  FUN_10d05610(param_1 + 0xcc,&local_c);
  iVar2 = rand();
  local_8 = (float)iVar2 * DAT_11ce1f28 * DAT_11de99b0 * DAT_11de9990;
  local_c = 0.0;
  iVar2 = FUN_10d05620();
  iVar3 = FUN_10cf1b40();
  if ((iVar3 != 0) && (*(char *)(iVar2 + 0xbe) != '\0')) {
    FUN_1025bef0(*(undefined4 *)(iVar2 + 0xc0),iVar2 + 200);
  }
  if (*(char *)(iVar2 + 200) != '\0') {
    iVar2 = FUN_10cf1b40();
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x82) != '\0')) {
      FUN_10264630(*(undefined4 *)(param_1 + 0x84),param_1 + 0x8c);
    }
    dVar4 = (double)local_8;
    libm_sse2_sin_precise();
    local_c = (float)dVar4 * *(float *)(param_1 + 0x8c);
  }
  iVar2 = FUN_10cf1b40();
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x82) != '\0')) {
    FUN_10264630(*(undefined4 *)(param_1 + 0x84),param_1 + 0x8c);
  }
  fVar1 = *(float *)(param_1 + 0x8c);
  dVar4 = (double)local_8;
  libm_sse2_cos_precise();
  iVar2 = FUN_10cf1b40();
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x82) != '\0')) {
    FUN_10264630(*(undefined4 *)(param_1 + 0x84),param_1 + 0x8c);
  }
  dVar5 = (double)local_8;
  libm_sse2_sin_precise();
  *(ulonglong *)(param_1 + 0xc0) =
       CONCAT44((float)dVar4 * fVar1,(float)dVar5 * *(float *)(param_1 + 0x8c));
  *(float *)(param_1 + 200) = local_c;
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0xc);
}



/* ===== FUN_10d14c70 @ 10d14c70  size=37 ===== */
// strings:
//   "Wander"

/* [RE-AUTO c0]
   strings:
     ""Wander"" */

int FUN_10d14c70(int param_1)

{
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  FUN_100b62c0("Wander","");
  return param_1;
}



/* ===== FUN_10d15c60 @ 10d15c60  size=847 ===== */
// strings:
//   "EntityCustomRoot"
//   "sfileModel"
//   "HitPartSetting"
//   "sHitPartInfo"
//   "AISetting"
//   "sBlackBoardFile"
//   "sBTFolder"
//   "/Scripts/AI/BehaviorTree/"
//   "ClientBehaviorTree"
//   "sFileName"
//   "sEventBT"
//   "/Scripts/AI/EventBT/"

/* [RE-AUTO c0]
   strings:
     ""EntityCustomRoot""
     ""sfileModel""
     ""HitPartSetting""
     ""sHitPartInfo""
     ""AISetting""
     ""sBlackBoardFile""
     ""sBTFolder""
     ""/Scripts/AI/BehaviorTree/""
     ""ClientBehaviorTree""
     ""sFileName"" */

void FUN_10d15c60(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int local_21c;
  undefined1 *local_218;
  undefined1 local_214 [512];
  int *local_14;
  int *local_10 [2];
  int *local_8;
  
  piVar1 = param_1;
  cVar2 = (**(code **)(*(int *)*param_1 + 0x28))("EntityCustomRoot");
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*(int *)*piVar1 + 0x7c))("sfileModel");
    if (iVar3 != 0) {
      FUN_110038f0(iVar3);
    }
    (**(code **)(*(int *)*piVar1 + 0xac))(local_10,"HitPartSetting");
    if (local_10[0] != (int *)0x0) {
      uVar4 = (**(code **)(*local_10[0] + 0x7c))("sHitPartInfo");
      FUN_11003730(0,uVar4);
    }
    (**(code **)(*(int *)*piVar1 + 0xac))(&param_1,"AISetting");
    if (param_1 != (int *)0x0) {
      pcVar5 = (char *)(**(code **)(*param_1 + 0x7c))("sBlackBoardFile");
      pcVar6 = (char *)(**(code **)(*param_1 + 0x7c))("sBTFolder");
      if (pcVar5 != (char *)0x0) {
        uVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0x68))();
        FUN_10a6c4c0(uVar4);
        FUN_10ae0250("/Scripts/AI/BehaviorTree/",0x19);
        if (pcVar6 != (char *)0x0) {
          FUN_10adf180(pcVar6);
          FUN_10adf180(&DAT_11d9dc6c);
        }
        pcVar8 = pcVar5;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        FUN_10ae0250(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
        FUN_11003730(1,local_218);
        if (local_218 != local_214) {
          DAT_1202015c = DAT_1202015c + (-1 - local_21c);
          FUN_10c3d900(local_218);
        }
      }
      (**(code **)(*param_1 + 0xac))(&local_8,"ClientBehaviorTree");
      if (local_8 != (int *)0x0) {
        iVar9 = 0;
        iVar3 = (**(code **)(*local_8 + 0xa0))();
        if (0 < iVar3) {
          do {
            puVar7 = (undefined4 *)(**(code **)(*local_8 + 0xa8))(&local_14,iVar9);
            pcVar5 = (char *)(**(code **)(*(int *)*puVar7 + 0x7c))("sFileName");
            if (local_14 != (int *)0x0) {
              (**(code **)(*local_14 + 4))();
            }
            if (pcVar5 != (char *)0x0) {
              uVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0x68))();
              FUN_10a6c4c0(uVar4);
              FUN_10ae0250("/Scripts/AI/BehaviorTree/",0x19);
              if (pcVar6 != (char *)0x0) {
                pcVar8 = pcVar6;
                do {
                  cVar2 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar2 != '\0');
                FUN_10ae0250(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
                FUN_10ae0250(&DAT_11d9dc6c,1);
              }
              pcVar8 = pcVar5;
              do {
                cVar2 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar2 != '\0');
              FUN_10ae0250(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
              FUN_11003730(0,local_218);
              if (local_218 != local_214) {
                DAT_1202015c = DAT_1202015c + (-1 - local_21c);
                FUN_10c3d900(local_218);
              }
            }
            iVar9 = iVar9 + 1;
            iVar3 = (**(code **)(*local_8 + 0xa0))();
          } while (iVar9 < iVar3);
        }
      }
      pcVar5 = (char *)(**(code **)(*param_1 + 0x7c))("sEventBT");
      if (pcVar5 != (char *)0x0) {
        uVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0x58) + 0x68))();
        FUN_10a6c4c0(uVar4);
        FUN_10ae0250("/Scripts/AI/EventBT/",0x14);
        pcVar6 = pcVar5;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_10ae0250(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
        FUN_11003730(0,local_218);
        if (local_218 != local_214) {
          DAT_1202015c = DAT_1202015c + (-1 - local_21c);
          FUN_10c3d900(local_218);
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))();
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))();
      }
    }
    if (local_10[0] != (int *)0x0) {
      (**(code **)(*local_10[0] + 4))();
    }
  }
  return;
}



/* ===== FUN_10d1ee70 @ 10d1ee70  size=2060 ===== */
// strings:
//   "PrintLog"
//   "SpawnMonster"
//   "params"
//   "SpawnCollectPoint"
//   "SpawnGameObjItem"
//   "spawner, ItemCEClass"
//   "SpawnCollectPointUnderEntity"
//   "spawner, resid"
//   "GetEntityLogicId"
//   "GetEntityIDByLogicId"
//   "LogicEntityId"
//   "GetLocalPlayer"
//   "GetAllPlayers"
//   "RegisterBattleGroundEvent"
//   "nEventID, entity, callback, params"
//   "RegisterLogicPlayerEvent"
//   "nPlayerNetID, nEventID, entity, callback, params"
//   "RegisterLogicMonsterEvent"
//   "nMonsterNetID, nEventID, entity, callback, params"
//   "AddGameEventListener"

/* [RE-AUTO c0]
   strings:
     ""PrintLog""
     ""SpawnMonster""
     ""params""
     ""SpawnCollectPoint""
     ""SpawnGameObjItem""
     ""spawner, ItemCEClass""
     ""SpawnCollectPointUnderEntity""
     ""spawner, resid""
     ""GetEntityLogicId""
     ""GetEntityIDByLogicId"" */

void __fastcall FUN_10d1ee70(int param_1)

{
  char *local_3c;
  char *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  code *local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  code *local_c;
  undefined4 local_8;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d1f920;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "PrintLog";
    local_38 = "str";
    local_1c = FUN_10d3ee60;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d1fa00;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SpawnMonster";
    local_38 = "params";
    local_1c = FUN_10d3eeb0;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d1fe80;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SpawnCollectPoint";
    local_38 = "params";
    local_1c = FUN_10d3eeb0;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20680;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SpawnGameObjItem";
    local_38 = "spawner, ItemCEClass";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20450;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SpawnCollectPointUnderEntity";
    local_38 = "spawner, resid";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d207f0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "GetEntityLogicId";
    local_38 = "this";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d208e0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "GetEntityIDByLogicId";
    local_38 = "LogicEntityId";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20bf0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "GetLocalPlayer";
    local_38 = "";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20c50;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "GetAllPlayers";
    local_38 = "";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20d40;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RegisterBattleGroundEvent";
    local_38 = "nEventID, entity, callback, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20d60;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RegisterLogicPlayerEvent";
    local_38 = "nPlayerNetID, nEventID, entity, callback, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20d80;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RegisterLogicMonsterEvent";
    local_38 = "nMonsterNetID, nEventID, entity, callback, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20da0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "AddGameEventListener";
    local_38 = "eventID, entity, func, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d22090;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RemoveGameEventListener";
    local_38 = "eventID, entity, func, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d22230;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "DispatchGameEvent";
    local_38 = "eventID, eventParams";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d222f0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "UIShowFallPrompt";
    local_38 = "text";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d223d0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "EnableSpawner";
    local_38 = "spawner, enable";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d224f0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "Spawner_DoSpawn";
    local_38 = "spawner, param";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d226b0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "Spawner_Reset";
    local_38 = "spawner";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20940;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SetGameObjProperty";
    local_38 = "entityId, key, value";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20a80;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SetMHScnObjProperty";
    local_38 = "entityId, key, value";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20b80;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RemoveLogicEntity";
    local_38 = "LogicId";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  return;
}



/* ===== FUN_10d20450 @ 10d20450  size=559 ===== */
// calls: memset, _itoa
// strings:
//   "EffectSpawnedCollectPoint"

/* [RE-AUTO c0]
   calls: memset, _itoa
   strings:
     ""EffectSpawnedCollectPoint"" */

undefined4 FUN_10d20450(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  char local_164;
  undefined1 local_163 [127];
  undefined4 local_e4 [11];
  int local_b8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar3 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (iVar1 < 2) {
    local_14 = 4;
    local_10 = (int *)0x0;
    uVar2 = (**(code **)(*piVar3 + 0x28))(&local_14);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
        return uVar2;
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    return uVar2;
  }
  param_1 = (int *)0x0;
  FUN_10acf5c0(2,&param_1);
  uVar2 = FUN_10d1f790(piVar3,1);
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(uVar2);
  iVar1 = (int)param_1;
  if ((piVar3 != (int *)0x0) && (param_1 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x94))();
    FUN_11415cf0();
    local_b8 = FUN_10d3f100(iVar1);
    uVar2 = 0xffffffff;
    local_e4[0] = *(undefined4 *)(local_b8 + 0x28);
    iVar1 = (**(code **)(*piVar3 + 0x288))();
    if (iVar1 != 0) {
      piVar4 = (int *)(**(code **)(*piVar3 + 0x288))();
      uVar2 = (**(code **)(*piVar4 + 0x88))();
    }
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xb4))();
    local_24 = *puVar5;
    local_20 = puVar5[1];
    local_1c = puVar5[2];
    local_18 = puVar5[3];
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x94))();
    local_10 = (int *)*puVar5;
    local_c = puVar5[1];
    local_8 = puVar5[2];
    iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x48))
                      ("EffectSpawnedCollectPoint",&local_10,&local_24,local_e4,0,uVar2);
    if (iVar1 != 0) {
      local_164 = '\0';
      memset(local_163,0,0x7f);
      param_1 = (int *)_itoa(*(int *)(iVar1 + 4),&local_164,10);
      uVar2 = FUN_10d32330(&param_1);
      FUN_10d3de80();
      return uVar2;
    }
    param_1 = (int *)0x0;
    uVar2 = FUN_10a01780(&param_1);
    FUN_10d3de80();
    return uVar2;
  }
  param_1 = (int *)0x0;
  uVar2 = FUN_10a01780(&param_1);
  return uVar2;
}



/* ===== FUN_10d224f0 @ 10d224f0  size=433 ===== */
// strings:
//   "Spawned"

/* [RE-AUTO c0]
   strings:
     ""Spawned"" */

undefined4 FUN_10d224f0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 local_28 [4];
  char *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int *local_18;
  int *local_c;
  undefined4 local_8;
  
  piVar5 = param_1;
  uVar2 = FUN_10d1f790(param_1,1);
  local_c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(uVar2);
  if ((((local_c != (int *)0x0) && (DAT_1202e818 != 0)) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x9c), piVar3 != (int *)0x0)) {
    iVar4 = *piVar3;
    uVar6 = (**(code **)(*local_c + 8))();
    piVar3 = (int *)(**(code **)(iVar4 + 0xc))(uVar6);
    if (piVar3 != (int *)0x0) {
      local_8 = 0;
      iVar4 = (**(code **)(*piVar3 + 4))();
      if (iVar4 == 1) {
        local_8 = (**(code **)(*piVar3 + 0x9c))(0);
      }
      else if (iVar4 == 2) {
        param_1 = (int *)0x1;
        cVar1 = FUN_10acf5c0(2,&param_1);
        piVar5 = param_1;
        if (cVar1 == '\0') {
          piVar5 = (int *)0x1;
        }
        local_8 = (**(code **)(*piVar3 + 0xb4))(piVar5);
      }
      else {
        if (iVar4 != 3) {
          param_1 = (int *)((uint)param_1 & 0xffffff);
          uVar2 = FUN_10d1c620((int)&param_1 + 3);
          return uVar2;
        }
        param_1 = (int *)0x0;
        cVar1 = FUN_10acf5c0(2,&param_1);
        piVar5 = param_1;
        if (cVar1 == '\0') {
          piVar5 = (int *)0x0;
        }
        local_8 = (**(code **)(*piVar3 + 0xc0))(piVar5);
      }
      FUN_10b8ade0(0x10);
      local_1c = &local_8;
      local_24 = "Spawned";
      local_20 = 0;
      (**(code **)(*local_c + 0x110))(local_28);
      param_1 = (int *)CONCAT13(1,param_1._0_3_);
      uVar2 = FUN_10d32410((int)&param_1 + 3,&local_8);
      return uVar2;
    }
  }
  local_1c = (undefined4 *)0x2;
  local_18 = (int *)((uint)local_18 & 0xffffff00);
  uVar2 = (**(code **)(*piVar5 + 0x28))(&local_1c);
  if (local_1c == (undefined4 *)0x6) {
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0xc))();
      return uVar2;
    }
  }
  else if ((local_1c == (undefined4 *)0x7) && (local_18 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_18);
  }
  return uVar2;
}



/* ===== FUN_10d49870 @ 10d49870  size=260 ===== */
// strings:
//   "TriggerEntGuid"
//   "ShapeEntGuid"
//   "SpawnPointEntGuid"
//   "LinkedSection"
//   "AffectExtent"

/* [RE-AUTO c0]
   strings:
     ""TriggerEntGuid""
     ""ShapeEntGuid""
     ""SpawnPointEntGuid""
     ""LinkedSection""
     ""AffectExtent"" */

void __thiscall FUN_10d49870(int param_1,undefined4 *param_2,char param_3)

{
  if (param_3 != '\0') {
    (**(code **)(*(int *)*param_2 + 0x70))(&DAT_11dbabc0,param_1 + 8);
    (**(code **)(*(int *)*param_2 + 0x68))("TriggerEntGuid",param_1 + 0x18,1);
    (**(code **)(*(int *)*param_2 + 0x68))("ShapeEntGuid",param_1 + 0x10,1);
    (**(code **)(*(int *)*param_2 + 0x68))("SpawnPointEntGuid",param_1 + 0x20,1);
    (**(code **)(*(int *)*param_2 + 0x48))("LinkedSection",param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x10d498ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)*param_2 + 100))();
    return;
  }
  (**(code **)(*(int *)*param_2 + 0x100))(&DAT_11dbabc0,*(undefined4 *)(param_1 + 8));
  (**(code **)(*(int *)*param_2 + 0xf8))
            ("TriggerEntGuid",*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),1);
  (**(code **)(*(int *)*param_2 + 0xf8))
            ("ShapeEntGuid",*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
  (**(code **)(*(int *)*param_2 + 0xf8))
            ("SpawnPointEntGuid",*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1);
  (**(code **)(*(int *)*param_2 + 0x108))("LinkedSection",*(undefined4 *)(param_1 + 0x28));
  (**(code **)(*(int *)*param_2 + 0xf4))("AffectExtent",*(undefined4 *)(param_1 + 0x30));
  return;
}



/* ===== FUN_10d604a0 @ 10d604a0  size=107 ===== */
// strings:
//   "BehaviorTreeBase"
//   "EnterEntityID"
//   "EnterEntity"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase""
     ""EnterEntityID""
     ""EnterEntity"" */

void __thiscall FUN_10d604a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))("BehaviorTreeBase");
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))("EnterEntityID",param_2);
    local_c = *(undefined4 *)(param_1 + 8);
    local_18 = &local_c;
    local_20 = 0x124;
    local_1c = 0x4ffff;
    local_10 = 0;
    local_14 = "EnterEntity";
    local_8 = 2;
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(&local_20);
  }
  return;
}



/* ===== FUN_10d60510 @ 10d60510  size=107 ===== */
// strings:
//   "BehaviorTreeBase"
//   "LeaveEntityID"
//   "LeaveEntity"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase""
     ""LeaveEntityID""
     ""LeaveEntity"" */

void __thiscall FUN_10d60510(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))("BehaviorTreeBase");
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))("LeaveEntityID",param_2);
    local_c = *(undefined4 *)(param_1 + 8);
    local_18 = &local_c;
    local_20 = 0x124;
    local_1c = 0x4ffff;
    local_10 = 0;
    local_14 = "LeaveEntity";
    local_8 = 2;
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(&local_20);
  }
  return;
}



/* ===== FUN_10d72ff0 @ 10d72ff0  size=2447 ===== */
// calls: CSingle::Shoot_10d73980
// strings:
//   "CommonShoot"
//   "Particle.SpawnEffect"
//   "Fire_Ability_Pc.CST.WN_MultipleCST"
//   "ChargeShoot"
//   "Fire_Ability_Pc.CST.WN_MultipleChargeCST"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""CommonShoot""
     ""Particle.SpawnEffect""
     ""Fire_Ability_Pc.CST.WN_MultipleCST""
     ""ChargeShoot""
     ""Fire_Ability_Pc.CST.WN_MultipleChargeCST"" */

void __thiscall FUN_10d72ff0(int *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  char cVar4;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 *local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined1 local_c4 [12];
  float local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  int local_74;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  float local_50;
  int *local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined8 local_34;
  float fStack_2c;
  float fStack_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  byte local_5;
  
  local_4c = param_1;
  piVar5 = (int *)FUN_10cbb800();
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (param_1[0x5d] == 0) {
    return;
  }
  local_58 = 0;
  uStack_54 = 0;
  local_50 = 0.0;
  local_d0 = 0;
  uStack_cc = 0;
  local_c8 = 0;
  (**(code **)(*piVar5 + 0xb4))();
  local_20 = 0;
  local_e4 = 0;
  local_dc = 0;
  piVar5 = (int *)FUN_10cbb820();
  if (((piVar5 != (int *)0x0) && (cVar4 = (**(code **)(*piVar5 + 0x1c4))(), cVar4 != '\0')) &&
     (cVar4 = (**(code **)(*piVar5 + 0x490))(), cVar4 != '\0')) {
    cVar4 = (**(code **)(*piVar5 + 0x494))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar5 + 0x7f0))();
      local_20 = (uint)(cVar4 != '\0') * 2 + 1;
    }
    else {
      local_20 = 2;
    }
    puVar6 = (undefined8 *)FUN_10d74270(&local_104,local_20);
    local_e4 = *puVar6;
    local_dc = *(undefined4 *)(puVar6 + 1);
  }
  local_5 = 1;
  iVar10 = *(int *)(param_2 + 0x44);
  local_18 = iVar10;
  if (iVar10 != *(int *)(param_2 + 0x48)) {
    local_ec = &local_e4;
    if (local_20 == 0) {
      local_ec = (undefined8 *)0x0;
    }
    do {
      local_18 = iVar10;
      FUN_10d77020(0xffffffff,0xffffffff,0,0,0x3f800000,0x3f800000);
      local_1c = (**(code **)(*local_4c + 0x208))(iVar10,&local_58,&local_d0,local_c4,local_ec);
      if (local_1c < 0) {
        if (local_68 != 0) {
          FUN_10c3d5d0(local_68);
        }
        if (local_74 == 0) {
          return;
        }
        FUN_10c3d5d0(local_74);
        return;
      }
      local_b8 = local_b8 + param_3;
      if (((piVar5 != (int *)0x0) && (cVar4 = (**(code **)(*piVar5 + 0x1c4))(), cVar4 != '\0')) &&
         (iVar7 = FUN_10f19240(), iVar10 = local_18, iVar7 != 0)) {
        uVar8 = FUN_1025b060();
        iVar7 = FUN_11398590(uVar8);
        iVar10 = local_18;
        if (iVar7 == 4) {
          local_104 = 0;
          local_100 = 0x3f800000;
          local_fc = 0;
          FUN_10c64010(&local_104,&local_d0);
          cVar4 = FUN_10a675d0();
          if (((cVar4 != '\0') ||
              (cVar4 = FUN_10a675d0(param_2,"ChargeShoot"), iVar10 = local_18, cVar4 != '\0')) &&
             (piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))(),
             iVar10 = local_18, piVar9 != (int *)0x0)) {
            fVar3 = (float10)fcos((float10)-0.7853982);
            fVar11 = (float10)fsin((float10)-0.7853982);
            fVar13 = (float)fVar3;
            fVar14 = (float)fVar11;
            fVar3 = (float10)fcos((float10)0.0);
            fVar11 = (float10)fsin((float10)0.0);
            fVar12 = (float)fVar3;
            fVar15 = (float)fVar11;
            fVar3 = (float10)fcos((float10)0.0);
            fVar11 = (float10)fsin((float10)0.0);
            fVar1 = (float)fVar3;
            fVar2 = (float)fVar11;
            local_24 = fVar15 * fVar14 * fVar2 + fVar12 * fVar13 * fVar1;
            local_10 = fVar1 * fVar12 * fVar14 - fVar2 * fVar15 * fVar13;
            local_14 = fVar2 * fVar12 * fVar13 - fVar1 * fVar15 * fVar14;
            local_c = fVar1 * fVar15 * fVar13 + fVar2 * fVar12 * fVar14;
            fVar13 = local_38 + local_48 + fStack_28;
            if (fVar13 <= 0.0) {
              if ((local_48 < local_38) || (local_48 < fStack_28)) {
                if ((local_38 < local_48) || (local_38 < fStack_28)) {
                  fVar13 = _UNK_11cbf0e8;
                  fVar14 = _UNK_11cbf0e4;
                  fVar12 = _DAT_11cbf0e0;
                  fVar15 = _UNK_11cbf0ec;
                  if ((local_48 <= fStack_28) && (local_38 <= fStack_28)) {
                    fVar13 = SQRT(((fStack_28 - local_48) - local_38) + DAT_11de9918);
                    fVar15 = DAT_11de98e8 / fVar13;
                    fVar13 = fVar13 * DAT_11de98e8;
                    fVar14 = (fStack_2c + (float)local_34) * fVar15;
                    fVar12 = (local_40 + local_34._4_4_) * fVar15;
                    fVar15 = (local_3c - local_44) * fVar15;
                  }
                }
                else {
                  fVar14 = SQRT(((local_38 - fStack_28) - local_48) + DAT_11de9918);
                  fVar15 = DAT_11de98e8 / fVar14;
                  fVar13 = (fStack_2c + (float)local_34) * fVar15;
                  fVar14 = fVar14 * DAT_11de98e8;
                  fVar12 = (local_3c + local_44) * fVar15;
                  fVar15 = (local_40 - local_34._4_4_) * fVar15;
                }
              }
              else {
                fVar12 = SQRT(((local_48 - local_38) - fStack_28) + DAT_11de9918);
                fVar15 = DAT_11de98e8 / fVar12;
                fVar13 = (local_40 + local_34._4_4_) * fVar15;
                fVar14 = (local_3c + local_44) * fVar15;
                fVar12 = fVar12 * DAT_11de98e8;
                fVar15 = (fStack_2c - (float)local_34) * fVar15;
              }
            }
            else {
              fVar15 = SQRT(fVar13 + DAT_11de9918);
              fVar12 = DAT_11de98e8 / fVar15;
              fVar13 = (local_3c - local_44) * fVar12;
              fVar14 = (local_40 - local_34._4_4_) * fVar12;
              fVar12 = (fStack_2c - (float)local_34) * fVar12;
              fVar15 = fVar15 * DAT_11de98e8;
            }
            fStack_2c = local_50;
            fStack_28 = 1.0;
            local_44 = (fVar14 * local_14 - fVar13 * local_c) + local_10 * fVar15 +
                       fVar12 * local_24;
            local_40 = (fVar13 * local_10 - fVar12 * local_14) + local_c * fVar15 +
                       fVar14 * local_24;
            local_3c = (fVar12 * local_c - fVar14 * local_10) + local_14 * fVar15 +
                       fVar13 * local_24;
            local_34 = CONCAT44(uStack_54,local_58);
            local_38 = fVar15 * local_24 -
                       (fVar14 * local_c + fVar12 * local_10 + fVar13 * local_14);
            (**(code **)(*piVar9 + 0x10))(&local_44,0,0,0,0);
            iVar10 = local_18;
          }
        }
      }
      iVar7 = CSingle__Shoot_10d73980
                        (CONCAT44(uStack_54,local_58),local_50,CONCAT44(uStack_cc,local_d0),local_c8
                         ,local_1c,local_c4);
      local_5 = local_5 & -(iVar7 != 0);
      if (local_68 != 0) {
        FUN_10c3d5d0(local_68);
      }
      if (local_74 != 0) {
        FUN_10c3d5d0(local_74);
      }
      iVar10 = iVar10 + 0xa8;
    } while (iVar10 != *(int *)(param_2 + 0x48));
    local_18 = iVar10;
    if (local_5 == 0) {
      return;
    }
  }
  if (local_20 != 1) {
    return;
  }
  iVar10 = FUN_10f19240();
  piVar9 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar9 = (int *)(**(code **)(*piVar9 + 0x78))();
  piVar9 = (int *)(**(code **)(*piVar9 + 0x1c))();
  if (iVar10 == 0) {
    return;
  }
  if (piVar9 == (int *)0x0) {
    return;
  }
  if (piVar5[0x56d] != 5) {
    return;
  }
  piVar5 = (int *)FUN_11399c60();
  iVar10 = 0;
  if (piVar5 != (int *)0x0) {
    uVar8 = FUN_1025b060();
    iVar10 = (**(code **)(*piVar5 + 0xd0))(uVar8);
  }
  FUN_10a6ffb0();
  iVar7 = *(int *)(DAT_1202e818 + 0x7c);
  if (iVar10 != 0) {
    if (iVar10 == 1) {
      local_ac = *(undefined4 *)(iVar7 + 0x4b0);
      local_a4 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4b4);
      local_a0 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4b8);
      local_9c = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4bc);
      local_98 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4c0);
      local_94 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4c4);
      local_88 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4c8);
      goto LAB_10d7393a;
    }
    if (iVar10 == 2) {
      local_ac = *(undefined4 *)(iVar7 + 0x4cc);
      local_a4 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4d0);
      local_a0 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4d4);
      local_9c = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4d8);
      local_98 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4dc);
      local_94 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4e0);
      local_88 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4e4);
      goto LAB_10d7393a;
    }
  }
  local_ac = *(undefined4 *)(iVar7 + 0x494);
  local_a4 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x498);
  local_a0 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x49c);
  local_9c = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4a0);
  local_98 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4a4);
  local_94 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4a8);
  local_88 = *(undefined4 *)(*(int *)(DAT_1202e818 + 0x7c) + 0x4ac);
LAB_10d7393a:
  local_a8 = 0;
  local_90 = 0;
  local_7c = 0;
  local_8c = 0;
  local_80 = 1;
  local_84 = 0;
  (**(code **)(*piVar9 + 0x20))(&local_ac);
  return;
}



/* ===== FUN_10d858d0 @ 10d858d0  size=78 ===== */
// calls: CProjectileSpawnEffectInfo::FindInfoByKey
// strings:
//   "CProjectileSpawnEffectInfo"

/* [RE-AUTO c0]
   calls: CProjectileSpawnEffectInfo::GetManagers
   strings:
     ""CProjectileSpawnEffectInfo"" */

undefined4 FUN_10d858d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CProjectileSpawnEffectInfo__FindInfoByKey(0,"CProjectileSpawnEffectInfo",0);
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



/* ===== FUN_10d8ccc0 @ 10d8ccc0  size=319 ===== */
// strings:
//   "Properties"
//   "file_propertyFile"
//   "obj_ModelFile"
//   "n_LogicEntityType"
//   "s_SpawnEntityName"
//   "b_InitTrigger"
//   "vector_triggerBox"

/* [RE-AUTO c0]
   strings:
     ""Properties""
     ""file_propertyFile""
     ""obj_ModelFile""
     ""n_LogicEntityType""
     ""s_SpawnEntityName""
     ""b_InitTrigger""
     ""vector_triggerBox"" */

void __fastcall FUN_10d8ccc0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_8;
  
  local_8 = param_1;
  piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x38))();
  }
  local_8 = (int *)0x0;
  FUN_10a68ce0("Properties",&local_8);
  piVar3 = local_8;
  if (local_8 != (int *)0x0) {
    local_8 = (int *)0x0;
    FUN_10a68bb0("file_propertyFile",&local_8);
    piVar2 = local_8;
    if (local_8 != (int *)0x0) {
      piVar1 = (int *)((int)local_8 + 1);
      do {
        iVar4 = *local_8;
        local_8 = (int *)((int)local_8 + 1);
      } while ((char)iVar4 != '\0');
      iVar4 = (int)local_8 - (int)piVar1;
      local_8 = piVar1;
      FUN_1083ab70(piVar2,iVar4);
    }
    local_8 = (int *)0x0;
    FUN_10a68bb0("obj_ModelFile",&local_8);
    piVar2 = local_8;
    if (local_8 != (int *)0x0) {
      piVar1 = (int *)((int)local_8 + 1);
      do {
        iVar4 = *local_8;
        local_8 = (int *)((int)local_8 + 1);
      } while ((char)iVar4 != '\0');
      iVar4 = (int)local_8 - (int)piVar1;
      local_8 = piVar1;
      FUN_1083ab70(piVar2,iVar4);
    }
    FUN_10a68900("n_LogicEntityType",param_1 + 9);
    local_8 = (int *)0x0;
    FUN_10a68bb0("s_SpawnEntityName",&local_8);
    piVar2 = local_8;
    if (local_8 != (int *)0x0) {
      piVar1 = (int *)((int)local_8 + 1);
      do {
        iVar4 = *local_8;
        local_8 = (int *)((int)local_8 + 1);
      } while ((char)iVar4 != '\0');
      iVar4 = (int)local_8 - (int)piVar1;
      local_8 = piVar1;
      FUN_1083ab70(piVar2,iVar4);
    }
    FUN_10a68da0("b_InitTrigger",param_1 + 10);
    FUN_10a68c40("vector_triggerBox",param_1 + 0xb);
    (**(code **)(*piVar3 + 0xc))();
  }
  return;
}



/* ===== FUN_10d8d3a0 @ 10d8d3a0  size=1630 ===== */
// calls: CSingle::Shoot_10d73980, libm_sse2_sqrt_precise
// strings:
//   "Particle.SpawnEffect"

/* [RE-AUTO c0]
   calls: CSingle::Shoot_10d73980, libm_sse2_sqrt_precise
   strings:
     ""Particle.SpawnEffect"" */

void __thiscall FUN_10d8d3a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *unaff_EDI;
  float10 fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_150;
  undefined8 uStack_130;
  double dStack_120;
  int iStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined1 auStack_90 [104];
  int iStack_28;
  int iStack_1c;
  
  iVar6 = FUN_10cbb800();
  if ((iVar6 != 0) && (*(int *)(param_1 + 0x174) != 0)) {
    iVar6 = *(int *)(param_2 + 0x44);
    if (iVar6 != *(int *)(param_2 + 0x48)) {
      do {
        FUN_10d77020(0xffffffff,0xffffffff,0,0,0x3f800000,0x3f800000);
        iVar7 = (**(code **)(*unaff_EDI + 0x208))
                          (iVar6,(int)&uStack_130 + 4,&stack0xfffffe84,auStack_90,&fStack_100);
        if (0 < iVar7) {
          iVar22 = iStack_10c;
          piVar8 = (int *)CSingle__Shoot_10d73980();
          if (piVar8 != (int *)0x0) {
            iVar4 = *piVar8;
            uVar9 = (**(code **)(*(int *)(*(int *)(iVar7 + 0x10) + 0x34c) + 0xac))();
            iVar6 = iVar22;
            (**(code **)(iVar4 + 0xd0))(uVar9);
          }
          if (*(char *)(param_2 + 4) != '\0') {
            piVar8 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x78))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x1c))();
            if (piVar8 != (int *)0x0) {
              FUN_10a6ffb0();
              uStack_e8 = *(undefined4 *)(param_2 + 0x10);
              uStack_f0 = *(undefined8 *)(param_2 + 8);
              uStack_f8 = CONCAT44(uStack_e8,(undefined4)uStack_f8);
              uStack_dc = *(undefined4 *)(param_2 + 0x1c);
              uStack_e4 = (undefined4)*(undefined8 *)(param_2 + 0x14);
              uStack_e0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
              uStack_d8 = *(undefined4 *)(param_2 + 0x24);
              uStack_cc = *(undefined4 *)(param_2 + 0x20);
              uStack_c8 = 0;
              uStack_c4 = 1;
              uStack_d0 = 0;
              uStack_c0 = 0;
              uStack_d4 = 0;
              (**(code **)(*piVar8 + 0x20))(&uStack_f0);
            }
          }
          piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                                    (*(undefined4 *)(param_2 + 0x28),"Particle.SpawnEffect",1,1);
          if (piVar8 != (int *)0x0) {
            fVar10 = (float10)(*(float *)(param_2 + 0x2c) * DAT_11de98c0 * DAT_11de98e8);
            fVar5 = (float10)fcos(fVar10);
            fVar10 = (float10)fsin(fVar10);
            fVar18 = (float)fVar5;
            fVar19 = (float)fVar10;
            fVar10 = (float10)(*(float *)(param_2 + 0x30) * DAT_11de98c0 * DAT_11de98e8);
            fVar5 = (float10)fcos(fVar10);
            fVar10 = (float10)fsin(fVar10);
            fVar17 = (float)fVar5;
            fVar1 = (float)fVar10;
            fVar10 = (float10)(*(float *)(param_2 + 0x34) * DAT_11de98c0 * DAT_11de98e8);
            fVar5 = (float10)fcos(fVar10);
            fVar10 = (float10)fsin(fVar10);
            fVar2 = (float)fVar5;
            fVar3 = (float)fVar10;
            fVar20 = fVar1 * fVar19 * fVar3 + fVar17 * fVar18 * fVar2;
            fVar21 = fVar2 * fVar17 * fVar19 - fVar3 * fVar1 * fVar18;
            fVar14 = fVar18 * fVar2 * fVar1 + fVar19 * fVar3 * fVar17;
            uStack_130 = (double)CONCAT44(uStack_130._4_4_,DAT_11cc33a8);
            fVar18 = fVar18 * fVar3 * fVar17 - fVar19 * fVar2 * fVar1;
            dStack_120 = (double)CONCAT44(dStack_120._4_4_,
                                          (float)((double)(fStack_15c + fStack_15c) * DAT_11de9950))
            ;
            dVar11 = (double)(fStack_164 * fStack_164 + fStack_160 * fStack_160);
            libm_sse2_sqrt_precise();
            dVar11 = (double)(float)dVar11;
            if (dVar11 <= DAT_11de98e0) {
              fStack_150 = 0.0;
              fStack_158 = 0.0;
              fVar19 = dStack_120._0_4_;
              fVar17 = (float)uStack_130;
            }
            else {
              dVar15 = (double)fStack_164 / dVar11;
              uStack_130 = (double)fStack_160 / dVar11 + DAT_11de9978;
              dVar11 = dVar11 + DAT_11de9978;
              dVar12 = uStack_130 * uStack_130 + dVar15 * dVar15;
              libm_sse2_sqrt_precise();
              dVar13 = (double)(fStack_15c * fStack_15c) + dVar11 * dVar11;
              dStack_120 = dVar12;
              libm_sse2_sqrt_precise();
              dVar16 = 0.0;
              dVar12 = DAT_11cc06d8;
              if (DAT_11de98e0 < dStack_120) {
                dVar12 = (double)((ulonglong)(dVar15 / dStack_120) ^ DAT_11de9c80);
                dVar16 = uStack_130 / dStack_120;
              }
              fStack_158 = (float)((dVar11 / dVar13) * dVar12);
              fStack_150 = (float)(((double)fStack_15c / dVar13) * dVar12);
              fVar19 = (float)(((double)fStack_15c / dVar13) * dVar16);
              fVar17 = (float)((dVar11 / dVar13) * dVar16);
            }
            uStack_f0 = CONCAT44(0x3f800000,uStack_e0);
            fStack_108 = (fStack_150 * fVar18 - fStack_158 * fVar14) + fVar21 * fVar17 +
                         fVar19 * fVar20;
            fStack_104 = (fStack_158 * fVar21 - fVar19 * fVar18) + fVar14 * fVar17 +
                         fStack_150 * fVar20;
            fStack_100 = (fVar19 * fVar14 - fStack_150 * fVar21) + fVar18 * fVar17 +
                         fStack_158 * fVar20;
            uStack_f8 = CONCAT44(uStack_e4,uStack_e8);
            fStack_fc = fVar17 * fVar20 -
                        (fStack_150 * fVar14 + fVar19 * fVar21 + fStack_158 * fVar18);
            (**(code **)(*piVar8 + 0x10))(&fStack_108,0,0,0,0);
          }
        }
        if (iStack_1c != 0) {
          FUN_10c3d5d0(iStack_1c);
        }
        if (iStack_28 != 0) {
          FUN_10c3d5d0(iStack_28);
        }
        iVar6 = iVar6 + 0xa8;
      } while (iVar6 != *(int *)(param_2 + 0x48));
    }
  }
  return;
}



/* ===== FUN_10d9c1b0 @ 10d9c1b0  size=1448 ===== */
// calls: _stricmp, strchr, CInfoRecord::GetModelString
// strings:
//   "sound_tp"
//   "watereffect"
//   "MH_ROOT"
//   "Particle.SpawnEffect"
//   "fireStareffect"
//   "dusteffect"

/* [RE-AUTO c0]
   calls: _stricmp, strchr
   strings:
     ""sound_tp""
     ""watereffect""
     ""MH_ROOT""
     ""Particle.SpawnEffect""
     ""fireStareffect""
     ""dusteffect"" */

void __thiscall FUN_10d9c1b0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar11;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  int *local_8;
  
  local_8 = param_1;
  FUN_10a57480(param_2,param_3);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    iVar4 = *(int *)(param_3 + 0x14);
    if ((((DAT_1201fffc == iVar4) || (DAT_12020074 == iVar4)) || (DAT_12020078 == iVar4)) ||
       (DAT_1202007c == iVar4)) {
      (**(code **)(*param_1 + 0x6b8))(param_2,*(undefined4 *)(param_3 + 0x20),param_3,0);
    }
    else if (DAT_12020000 == iVar4) {
      (**(code **)(*param_1 + 0x6bc))
                (param_2,*(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x20),param_3);
    }
    else if (DAT_1202000c == iVar4) {
      (**(code **)(*param_1 + 0x6c0))(param_2,param_3);
    }
    pcVar7 = *(char **)(param_3 + 0x18);
    cVar2 = (**(code **)(*param_1 + 0x1b0))();
    if (((cVar2 != '\0') && (pcVar7 != (char *)0x0)) &&
       (iVar4 = _stricmp(pcVar7,"sound_tp"), iVar4 == 0)) {
      local_20 = 0;
      local_18 = 0x3f800000;
      if (((*(char **)(param_3 + 0x20) != (char *)0x0) && (**(char **)(param_3 + 0x20) != '\0')) &&
         ((param_2 != (int *)0x0 &&
          (piVar5 = (int *)(**(code **)(*param_2 + 0x50))(), piVar5 != (int *)0x0)))) {
        sVar3 = (**(code **)(*piVar5 + 0x10))(*(undefined4 *)(param_3 + 0x20));
        if (-1 < sVar3) {
          puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x20))((int)sVar3);
          local_54 = *puVar6;
          uStack_50 = puVar6[1];
          uStack_4c = puVar6[2];
          uStack_48 = puVar6[3];
          local_20 = *(undefined8 *)(puVar6 + 4);
          local_18 = puVar6[6];
        }
      }
      pcVar7 = strchr(*(char **)(param_3 + 0x1c),0x3a);
      uVar8 = 0x44000;
      if (pcVar7 == (char *)0x0) {
        uVar8 = 0x244000;
      }
      piVar5 = (int *)(**(code **)(*piVar1 + 0x150))(3);
      if (piVar5 != (int *)0x0) {
        local_14 = 0.0;
        local_10 = 1.0;
        local_c = 0.0;
        (**(code **)(*piVar5 + 0x48))
                  (*(undefined4 *)(param_3 + 0x1c),&local_20,&local_14,uVar8,0x80000000,0,0,
                   0x3f800000,0);
      }
    }
    cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x164))();
    if (((cVar2 == '\0') ||
        (piVar5 = (int *)(**(code **)(*piVar1 + 0x150))(0), piVar5 == (int *)0x0)) ||
       (fVar11 = (float10)(**(code **)(*piVar5 + 0xd0))(), DAT_11cc1a8c <= (float)fVar11)) {
      iVar4 = _stricmp(*(char **)(param_3 + 0x18),"watereffect");
      if (iVar4 == 0) {
        (**(code **)(*piVar1 + 200))(&local_20);
        iVar4 = _stricmp(*(char **)(param_3 + 0x20),"MH_ROOT");
        if (iVar4 != 0) {
          iVar4 = *piVar1;
          CInfoRecord__GetModelString(*(undefined4 *)(param_3 + 0x20),extraout_ECX);
          puVar9 = (undefined8 *)(**(code **)(iVar4 + 0x264))(&local_38);
          local_20 = *puVar9;
          local_18 = *(undefined4 *)(puVar9 + 1);
          param_1 = local_8;
        }
        uVar10 = (**(code **)(*param_1 + 0x6b0))
                           ((int)local_20,(int)((ulonglong)local_20 >> 0x20),local_18);
        if (((uVar10 & 1) != 0) &&
           (iVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                              (*(undefined4 *)(param_3 + 0x1c),"Particle.SpawnEffect",1,1),
           iVar4 != 0)) {
          local_30 = local_18;
          local_38 = local_20;
          (**(code **)(*piVar1 + 0xcc))(&local_14);
          local_14 = local_14 + *(float *)(param_3 + 0x30) * DAT_11de98c0;
          local_10 = local_10 + *(float *)(param_3 + 0x34) * DAT_11de98c0;
          local_c = local_c + *(float *)(param_3 + 0x38) * DAT_11de98c0;
          FUN_10a7b1f0(&local_14);
          local_2c = local_58;
          local_28 = uStack_4c;
          local_24 = local_40;
          uVar8 = FUN_10b01ff0(local_68,&local_38,&local_2c,0x3f800000,0,0);
          FUN_10a7b9f0(1,uVar8);
        }
      }
      iVar4 = _stricmp(*(char **)(param_3 + 0x18),"fireStareffect");
      if (iVar4 == 0) {
        (**(code **)(*piVar1 + 200))(&local_20);
        iVar4 = _stricmp(*(char **)(param_3 + 0x20),"MH_ROOT");
        if (iVar4 != 0) {
          iVar4 = *piVar1;
          CInfoRecord__GetModelString(*(undefined4 *)(param_3 + 0x20),extraout_ECX_00);
          puVar9 = (undefined8 *)(**(code **)(iVar4 + 0x264))(&local_38);
          local_20 = *puVar9;
          local_18 = *(undefined4 *)(puVar9 + 1);
          param_1 = local_8;
        }
        cVar2 = (**(code **)(*piVar1 + 0x25c))();
        if (((cVar2 != '\0') &&
            (iVar4 = (**(code **)(*param_1 + 0x6b0))
                               ((int)local_20,(int)((ulonglong)local_20 >> 0x20),local_18),
            iVar4 == 0)) &&
           (iVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                              (*(undefined4 *)(param_3 + 0x1c),"Particle.SpawnEffect",1,1),
           iVar4 != 0)) {
          local_30 = local_18;
          local_38 = local_20;
          (**(code **)(*piVar1 + 0xcc))(&local_14);
          local_14 = local_14 + *(float *)(param_3 + 0x30) * DAT_11de98c0;
          local_10 = local_10 + *(float *)(param_3 + 0x34) * DAT_11de98c0;
          local_c = local_c + *(float *)(param_3 + 0x38) * DAT_11de98c0;
          FUN_10a7b1f0(&local_14);
          local_2c = local_58;
          local_28 = uStack_4c;
          local_24 = local_40;
          uVar8 = FUN_10b01ff0(local_68,&local_38,&local_2c,0x3f800000,0,0);
          FUN_10a7b9f0(1,uVar8);
        }
      }
      iVar4 = _stricmp(*(char **)(param_3 + 0x18),"dusteffect");
      if ((iVar4 == 0) && (cVar2 = (**(code **)(*piVar1 + 0x25c))(), cVar2 == '\0')) {
        iVar4 = *param_1;
        puVar9 = (undefined8 *)(**(code **)(*piVar1 + 200))(&local_38);
        piVar1 = local_8;
        iVar4 = (**(code **)(iVar4 + 0x6b0))
                          ((int)*puVar9,(int)((ulonglong)*puVar9 >> 0x20),
                           *(undefined4 *)(puVar9 + 1));
        if ((iVar4 == 0) &&
           (((param_2 != (int *)0x0 && (iVar4 = (**(code **)(*param_2 + 0x4c))(), iVar4 != 0)) &&
            (*(int *)(param_3 + 0x1c) != 0)))) {
          iVar4 = *param_2;
          uVar8 = (**(code **)(*(int *)piVar1[3] + 0x74))
                            (0,0x3f800000,0,0xffffffff,0x3f800000,0,0,0,1);
          (**(code **)(iVar4 + 0x134))
                    (*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0xc),
                     *(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x20),param_3 + 0x24,
                     param_3 + 0x30,uVar8);
        }
      }
    }
  }
  return;
}



