
// ===== "BTCtrlObject" user FUN_10be8380@10be8380 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_10be8380(int *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_2 != (undefined2 *)0x0) && (param_3 == 0xa22)) {
    *param_2 = 0;
    iVar1 = **(int **)m_pThis_exref;
    uVar2 = (**(code **)(*param_1 + 0x18))();
    piVar3 = (int *)(**(code **)(iVar1 + 0x144))(uVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BTCtrlObject");
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xd8))(param_2);
      }
    }
    piVar3 = (int *)(**(code **)(param_1[1] + 4))();
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x1b8))(0);
      if (piVar3 != (int *)0x0) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x58))();
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x4c))(param_2);
        }
      }
    }
    return 0xa22;
  }
  return 0xffffffff;
}


// ===== "BTCtrlObject" user FUN_10be8430@10be8430 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject""
     ""Attach"" */

undefined4 __thiscall FUN_10be8430(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uStack_c;
  int local_8;
  
  if ((param_2 == 0) || (param_3 != 0xa22)) {
    return 0xffffffff;
  }
  iVar9 = 0;
  piVar2 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x144))(*(undefined4 *)(param_1 + 0x44));
  if ((piVar2 != (int *)0x0) &&
     (piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BTCtrlObject"), piVar2 != (int *)0x0)) {
    pbVar6 = &DAT_11cc35f8;
    pbVar5 = (byte *)(param_2 + 4);
    do {
      bVar1 = *pbVar5;
      bVar12 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10be84b1:
        uVar3 = -(uint)bVar12 | 1;
        goto LAB_10be84b6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar12 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10be84b1;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_10be84b6:
    if (uVar3 == 0) {
      iVar8 = *(int *)(param_2 + 0x24);
      iVar9 = 1;
      if (iVar8 != 0) {
        iVar9 = iVar8 + 1;
        puVar11 = (undefined4 *)(param_2 + 0xc6);
        do {
          CInfoRecord__GetModelString(puVar11 + -8);
          switch(*(undefined2 *)((int)puVar11 + -0x22)) {
          case 0:
            (**(code **)(*piVar2 + 0x70))(local_8,*puVar11);
            break;
          case 2:
            FUN_113168d0(puVar11);
            (**(code **)(*piVar2 + 0x78))(local_8,uStack_c);
            break;
          case 3:
            (**(code **)(*piVar2 + 0x7c))(local_8,*puVar11,puVar11[1],puVar11[2]);
            break;
          case 4:
            (**(code **)(*piVar2 + 0x74))(local_8,*puVar11);
          }
          piVar10 = (int *)(local_8 + -0xc);
          if ((-1 < *piVar10) && (iVar4 = FUN_10c3dad0(piVar10), iVar4 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_8 + -4));
            FUN_10c3d900(piVar10);
          }
          puVar11 = (undefined4 *)((int)puVar11 + 0xa2);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 4) + 4))();
  if (((piVar2 != (int *)0x0) &&
      (piVar2 = (int *)(**(code **)(*piVar2 + 0x1b8))(0), piVar2 != (int *)0x0)) &&
     (piVar2 = (int *)(**(code **)(*piVar2 + 0x58))(), piVar2 != (int *)0x0)) {
    iVar9 = iVar9 * 0xa2;
    pcVar7 = "Attach";
    pbVar5 = (byte *)(param_2 + 4 + iVar9);
    do {
      bVar1 = *pbVar5;
      bVar12 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10be85f2:
        uVar3 = -(uint)bVar12 | 1;
        goto LAB_10be85f7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar12 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10be85f2;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_10be85f7:
    if (uVar3 == 0) {
      (**(code **)(*piVar2 + 0x50))
                (*(undefined4 *)(iVar9 + 0x24 + param_2),*(undefined4 *)(iVar9 + 0x28 + param_2));
    }
  }
  return 0;
}


// ===== "BTCtrlObject" user CMonsterEntity::CreateAndBindRenderProxy@10be99f0 =====

/* [RE-R1]
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

undefined4 __thiscall CMonsterEntity__CreateAndBindRenderProxy(int *param_1,int param_2)

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


// ===== "BTCtrlObject" user GameFactory::RegisterEntityClasses@10be3840 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   strings:
     ""NullAI""
     ""BTEmCommon""
     ""BTCtrlObject""
     ""MHBuffArea""
     ""BehaviorTreeBase""
     ""MHCommonArea""
     ""MHTestSpawner""
     ""SceneObject""
     ""MHAttackable""
     ""MHBurnable"" */

void GameFactory__RegisterEntityClasses(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_2c;
  char *local_28;
  char *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1202e020 & 1) == 0) {
    DAT_1202e020 = DAT_1202e020 | 1;
    _DAT_1202e01c = &PTR_FUN_11cd50e4;
    FUN_11a8911f(&LAB_11c85d10);
  }
  (**(code **)(*param_1 + 0x10))("NullAI",&DAT_1202e01c,1);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))("NullAI");
  iVar1 = *piVar2;
  uVar3 = (**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x10))(uVar3 | 1);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("BTEmCommon",&DAT_1202e014,1);
  if ((DAT_1202e010 & 1) == 0) {
    DAT_1202e010 = DAT_1202e010 | 1;
    _DAT_1202e00c = &PTR_FUN_11cd50cc;
    FUN_11a8911f(&LAB_11c85bf0);
  }
  (**(code **)(*param_1 + 4))("BTCtrlObject",&DAT_1202e00c,1);
  if ((DAT_1202e028 & 1) == 0) {
    DAT_1202e028 = DAT_1202e028 | 1;
    _DAT_1202e024 = &PTR_FUN_11cd50f0;
    FUN_11a8911f(&LAB_11c85c80);
  }
  (**(code **)(*param_1 + 4))("MHBuffArea",&DAT_1202e024,0);
  if ((DAT_1202e030 & 1) == 0) {
    DAT_1202e030 = DAT_1202e030 | 1;
    _DAT_1202e02c = &PTR_FUN_11cd50fc;
    FUN_11a8911f(&LAB_11c85c00);
  }
  (**(code **)(*param_1 + 4))("BehaviorTreeBase",&DAT_1202e02c,0);
  if ((DAT_1202e038 & 1) == 0) {
    DAT_1202e038 = DAT_1202e038 | 1;
    _DAT_1202e034 = &PTR_FUN_11cd5108;
    FUN_11a8911f(&LAB_11c85ca0);
  }
  (**(code **)(*param_1 + 4))("MHCommonArea",&DAT_1202e034,0);
  if ((DAT_1202e040 & 1) == 0) {
    DAT_1202e040 = DAT_1202e040 | 1;
    _DAT_1202e03c = &PTR_FUN_11cd5114;
    FUN_11a8911f(&LAB_11c85cd0);
  }
  (**(code **)(*param_1 + 4))("MHTestSpawner",&DAT_1202e03c,0);
  if ((DAT_1202e048 & 1) == 0) {
    DAT_1202e048 = DAT_1202e048 | 1;
    _DAT_1202e044 = &PTR_FUN_11cd5120;
    FUN_11a8911f(&LAB_11c85cc0);
  }
  (**(code **)(*param_1 + 4))("SceneObject",&DAT_1202e044,0);
  if ((DAT_1202e050 & 1) == 0) {
    DAT_1202e050 = DAT_1202e050 | 1;
    _DAT_1202e04c = &PTR_FUN_11cd512c;
    FUN_11a8911f(&LAB_11c85c70);
  }
  (**(code **)(*param_1 + 4))("MHAttackable",&DAT_1202e04c,0);
  if ((DAT_1202e058 & 1) == 0) {
    DAT_1202e058 = DAT_1202e058 | 1;
    _DAT_1202e054 = &PTR_FUN_11cd5138;
    FUN_11a8911f(&LAB_11c85c90);
  }
  (**(code **)(*param_1 + 4))("MHBurnable",&DAT_1202e054,0);
  if ((DAT_1202e060 & 1) == 0) {
    DAT_1202e060 = DAT_1202e060 | 1;
    _DAT_1202e05c = &PTR_FUN_11cd5144;
    FUN_11a8911f(&LAB_11c85cb0);
  }
  (**(code **)(*param_1 + 4))("MHContAttacker",&DAT_1202e05c,0);
  if ((DAT_1202e068 & 1) == 0) {
    DAT_1202e068 = DAT_1202e068 | 1;
    _DAT_1202e064 = &PTR_FUN_11cd5150;
    FUN_11a8911f(&LAB_11c85c40);
  }
  (**(code **)(*param_1 + 4))("GroupAI",&DAT_1202e064,0);
  FUN_10be3540(param_1);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("EmCommon",&DAT_1202e014,1);
  if ((DAT_1202e070 & 1) == 0) {
    DAT_1202e070 = DAT_1202e070 | 1;
    _DAT_1202e06c = &PTR_FUN_11cd515c;
    FUN_11a8911f(&LAB_11c85d30);
  }
  (**(code **)(*param_1 + 4))("RageBullet",&DAT_1202e06c,1);
  if ((DAT_1202e020 & 1) == 0) {
    DAT_1202e020 = DAT_1202e020 | 1;
    _DAT_1202e01c = &PTR_FUN_11cd50e4;
    FUN_11a8911f(&LAB_11c85d10);
  }
  (**(code **)(*param_1 + 0x10))("Player",&DAT_1202e01c,0);
  if ((DAT_1202e078 & 1) == 0) {
    DAT_1202e078 = DAT_1202e078 | 1;
    _DAT_1202e074 = &PTR_FUN_11cd5168;
    FUN_11a8911f(&LAB_11c85c20);
  }
  (**(code **)(*param_1 + 4))("CombatNpc",&DAT_1202e074,0);
  if ((DAT_1202e080 & 1) == 0) {
    DAT_1202e080 = DAT_1202e080 | 1;
    _DAT_1202e07c = &PTR_FUN_11cd5174;
    FUN_11a8911f(&LAB_11c85cf0);
  }
  (**(code **)(*param_1 + 4))("MonsterCtrlPlugin",&DAT_1202e07c,0);
  if ((DAT_1202e018 & 1) == 0) {
    DAT_1202e018 = DAT_1202e018 | 1;
    _DAT_1202e014 = &PTR_FUN_11cd50d8;
    FUN_11a8911f(&LAB_11c85ce0);
  }
  (**(code **)(*param_1 + 0x10))("CatHandcart",&DAT_1202e014,1);
  if ((DAT_1202e088 & 1) == 0) {
    DAT_1202e088 = DAT_1202e088 | 1;
    _DAT_1202e084 = &PTR_FUN_11cd5180;
    FUN_11a8911f(&LAB_11c85c50);
  }
  (**(code **)(*param_1 + 0xc))(&DAT_11cc4fa8,&DAT_1202e084,0);
  if ((DAT_1202e090 & 1) == 0) {
    DAT_1202e090 = DAT_1202e090 | 1;
    _DAT_1202e08c = &PTR_FUN_11cd518c;
    FUN_11a8911f(&LAB_11c85d20);
  }
  (**(code **)(*param_1 + 0xc))("PlayerFeature",&DAT_1202e08c,0);
  if ((DAT_1202e098 & 1) == 0) {
    DAT_1202e098 = DAT_1202e098 | 1;
    _DAT_1202e094 = &PTR_FUN_11cd5198;
    FUN_11a8911f(&LAB_11c85c60);
  }
  (**(code **)(*param_1 + 0xc))(&DAT_11cd4e7c,&DAT_1202e094,0);
  if ((DAT_1202e0a0 & 1) == 0) {
    DAT_1202e0a0 = DAT_1202e0a0 | 1;
    _DAT_1202e09c = &PTR_FUN_11cd51a4;
    FUN_11a8911f(&LAB_11c85be0);
  }
  (**(code **)(*param_1 + 0xc))("Accessory",&DAT_1202e09c,0);
  if ((DAT_1202e0a8 & 1) == 0) {
    DAT_1202e0a8 = DAT_1202e0a8 | 1;
    _DAT_1202e0a4 = &PTR_FUN_11cd51b0;
    FUN_11a8911f(&LAB_11c85d50);
  }
  (**(code **)(*param_1 + 0xc))("Weapon",&DAT_1202e0a4,0);
  if ((DAT_1202e0b0 & 1) == 0) {
    DAT_1202e0b0 = DAT_1202e0b0 | 1;
    _DAT_1202e0ac = &PTR_FUN_11cd51bc;
    FUN_11a8911f(&LAB_11c85d40);
  }
  (**(code **)(*param_1 + 0xc))("VehicleWeapon",&DAT_1202e0ac,0);
  if ((DAT_1202e0b8 & 1) == 0) {
    DAT_1202e0b8 = DAT_1202e0b8 | 1;
    _DAT_1202e0b4 = &PTR_FUN_11cd51c8;
    FUN_11a8911f(&LAB_11c85c10);
  }
  (**(code **)(*param_1 + 4))("CameraRegion",&DAT_1202e0b4,0);
  if ((DAT_1202e0c0 & 1) == 0) {
    DAT_1202e0c0 = DAT_1202e0c0 | 1;
    _DAT_1202e0bc = &PTR_FUN_11cd51d4;
    FUN_11a8911f(&LAB_11c85d00);
  }
  (**(code **)(*param_1 + 0xc))("OffHand",&DAT_1202e0bc,0);
  piVar2 = (int *)(**(code **)(*param_1 + 0x80))();
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)("EntityAttachment",&DAT_10be45c0,0);
    DAT_1203eb70 = (**(code **)(*piVar2 + 0x6c))();
    (**(code **)(*piVar2 + 0x14))("Hovercraft",&DAT_10be45e0,0);
    (**(code **)(*piVar2 + 0x14))("Helicopter",&DAT_10be4600,0);
    (**(code **)(*piVar2 + 0x14))("StdBoat",&DAT_10be4620,0);
    (**(code **)(*piVar2 + 0x14))("StdWheeled",&DAT_10be4640,0);
    (**(code **)(*piVar2 + 0x14))("ArcadeWheeled",&DAT_10be4660,0);
    (**(code **)(*piVar2 + 0x14))(&DAT_11cd4f04,&DAT_10be4680,0);
    (**(code **)(*piVar2 + 0x14))(&DAT_11cd4f0c,&DAT_10be46a0,0);
    (**(code **)(*piVar2 + 0x14))("Warrior",&DAT_10be46c0,0);
    (**(code **)(*piVar2 + 0x14))("Amphibious",&DAT_10be46e0,0);
  }
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Tornado";
  local_24 = "Scripts/Entities/Environment/Tornado.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 1) == 0) {
    DAT_1202dfec = DAT_1202dfec | 1;
    _DAT_1202dfe8 = &PTR_FUN_11cd4f54;
    FUN_11a8911f(&LAB_11c85b60);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("Tornado",&DAT_1202dfe8,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Shake";
  local_24 = "Scripts/Entities/Environment/Shake.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 2) == 0) {
    DAT_1202dfec = DAT_1202dfec | 2;
    _DAT_1202dff0 = &PTR_FUN_11cd4f88;
    FUN_11a8911f(&LAB_11c85b70);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("Shake",&DAT_1202dff0,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Rain";
  local_24 = "Scripts/Entities/Environment/Rain.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 4) == 0) {
    DAT_1202dfec = DAT_1202dfec | 4;
    _DAT_1202dff4 = &PTR_FUN_11cd4fc4;
    FUN_11a8911f(&LAB_11c85bc0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))(&DAT_11cd4f94,&DAT_1202dff4,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "Snow";
  local_24 = "Scripts/Entities/Environment/Snow.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 8) == 0) {
    DAT_1202dfec = DAT_1202dfec | 8;
    _DAT_1202dff8 = &PTR_FUN_11cd5000;
    FUN_11a8911f(&LAB_11c85bd0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))(&DAT_11cd4fd0,&DAT_1202dff8,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "WaterRipplesGenerator";
  local_24 = "Scripts/Entities/Environment/WaterRipplesGenerator.lua";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x10) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x10;
    _DAT_1202dffc = &PTR_FUN_11cd505c;
    FUN_11a8911f(&LAB_11c85b80);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("WaterRipplesGenerator",&DAT_1202dffc,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "RopeEntAttach";
  local_24 = "";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x20) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x20;
    _DAT_1202e000 = &PTR_FUN_11cd5078;
    FUN_11a8911f(&LAB_11c85b90);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("RopeEntAttach",&DAT_1202e000,&local_2c);
  local_2c = 0;
  local_20 = &DAT_11d9d32b;
  local_1c = &DAT_11d9d32b;
  local_18 = 0;
  local_28 = "BattleEvent";
  local_24 = "";
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((DAT_1202dfec & 0x40) == 0) {
    DAT_1202dfec = DAT_1202dfec | 0x40;
    _DAT_1202e004 = &PTR_FUN_11cd5084;
    FUN_11a8911f(&LAB_11c85ba0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("BattleEvent",&DAT_1202e004,&local_2c);
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))("BattleEvent");
  iVar1 = *piVar2;
  uVar3 = (**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x10))(uVar3 | 1);
  if (-1 < (char)DAT_1202dfec) {
    DAT_1202dfec = DAT_1202dfec | 0x80;
    _DAT_1202e008 = &PTR_FUN_11cd5090;
    FUN_11a8911f(&LAB_11c85bb0);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x60))();
  (**(code **)(*piVar2 + 0x24))("ScriptControlledPhysics",&DAT_1202e008,0);
  if ((DAT_1202e0c8 & 1) == 0) {
    DAT_1202e0c8 = DAT_1202e0c8 | 1;
    _DAT_1202e0c4 = &PTR_FUN_11cd51e0;
    FUN_11a8911f(&LAB_11c85c30);
  }
  (**(code **)(*param_1 + 4))("GameRulesClient",&DAT_1202e0c4,0);
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 4))("SinglePlayer","GameRulesClient");
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 0x10))("SinglePlayer",&DAT_11cd50c4);
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 4))("DeathMatch","GameRulesClient");
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  (**(code **)(*piVar2 + 0x10))("DeathMatch",&DAT_11cd50c8);
  return;
}


// ===== "BTCtrlObject" user FUN_1103a000@1103a000 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_1103a000(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xfc))(param_3);
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_1103a050@1103a050 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_1103a050(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xf8))(param_3);
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_1103a0a0@1103a0a0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_1103a0a0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x100))(param_3);
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_1103a0f0@1103a0f0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject""
     ""GoemType""
     ""radius""
     ""height"" */

undefined4 __thiscall FUN_1103a0f0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 local_ac [104];
  int local_44;
  undefined8 local_40;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  float local_14;
  int local_10;
  float local_c;
  int *local_8;
  
  piVar1 = param_2;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (((iVar2 != 0) &&
      (piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2),
      piVar3 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar3 + 0x18))("BTCtrlObject"), iVar2 != 0))
  {
    piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0xc) + 0x16c))();
    local_8 = piVar3;
    piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x40) + 0x10))();
    FUN_10a70810();
    if (piVar3 != (int *)0x0) {
      FUN_10a68900("GoemType",&local_10);
      FUN_10a68a10("radius",&param_2);
      FUN_10a68a10("height",&local_c);
      if (local_10 == 0) {
        puVar6 = &local_40;
        local_34 = param_2;
        local_44 = local_10;
        local_40 = 0;
        local_38 = local_10;
        uVar5 = 4;
      }
      else {
        if (local_10 != 1) goto LAB_1103a259;
        puVar6 = (undefined8 *)&local_30;
        local_18 = param_2;
        local_14 = local_c * DAT_11de98e8;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0x3f800000;
        uVar5 = 6;
      }
      piVar3 = (int *)(**(code **)(*piVar4 + 0x14))(uVar5,puVar6);
      iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar3,0,0,0);
      (**(code **)(*piVar3 + 0xc))();
      *(undefined4 *)(iVar2 + 0x30) = 0;
      (**(code **)(*local_8 + 0x20))(iVar2,local_ac,0,0);
    }
  }
LAB_1103a259:
  uVar5 = (**(code **)(*piVar1 + 0x2c))();
  if ((-1 < DAT_1201fc8c) && (iVar2 = FUN_10c3dad0(&DAT_1201fc8c), iVar2 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
    FUN_10c3d900(&DAT_1201fc8c);
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  return uVar5;
}


// ===== "BTCtrlObject" user FUN_1103a380@1103a380 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_1103a380(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if ((iVar1 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) {
        iVar1 = (**(code **)(**(int **)(iVar1 + 0xc) + 0x288))();
        if (iVar1 != 0) {
          (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x28))(iVar1,param_3,0);
        }
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_1103a2b0@1103a2b0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_1103a2b0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x104))(param_3);
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_1103a440@1103a440 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

int __thiscall FUN_1103a440(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (((iVar1 != 0) &&
      (piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1),
      piVar2 != (int *)0x0)) && (iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject"), iVar1 != 0))
  {
    return iVar1;
  }
  return 0;
}


// ===== "BTCtrlObject" user FUN_11038b30@11038b30 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_11038b30(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BTCtrlObject"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    local_8 = 0;
    FUN_10c62470(1,&local_8);
    param_2 = (int *)0x0;
    cVar2 = FUN_10d32550(2,&param_2);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x70))(local_8,param_2);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_11038bc0@11038bc0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_11038bc0(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BTCtrlObject"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10c623f0(2,&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x74))(param_2,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_11038af0@11038af0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_11038af0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_11038d80@11038d80 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_11038d80(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BTCtrlObject"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10c62470(2,&local_8);
    if (cVar2 != '\0') {
      iVar3 = *piVar4;
      puVar5 = (undefined4 *)FUN_113168d0(local_8);
      (**(code **)(iVar3 + 0x78))(param_2,*puVar5);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_11038c50@11038c50 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_11038c50(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 local_10;
  undefined4 local_8;
  
  piVar1 = param_2;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BTCtrlObject"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    puVar6 = &param_2;
    param_2 = (int *)0x0;
    uVar5 = 1;
    FUN_10c62470();
    cVar2 = FUN_10b1f370(2,&local_10,uVar5,puVar6);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x7c))(param_2,local_10,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_11038cf0@11038cf0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

void __thiscall FUN_11038cf0(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((((iVar3 != 0) &&
       (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
       piVar4 != (int *)0x0)) &&
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BTCtrlObject"), piVar4 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(1), iVar3 == 1)) {
    param_2 = (int *)0x0;
    FUN_10c62470(1,&param_2);
    cVar2 = FUN_10b1f4b0(2,&local_8);
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x80))(param_2,local_8);
    }
  }
  (**(code **)(*piVar1 + 0x2c))();
  return;
}


// ===== "BTCtrlObject" user FUN_11038e20@11038e20 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11038e20(int param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 local_8 [4];
  
  local_1c = local_2c;
  pcVar1 = param_3;
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  local_18 = local_1c;
  FUN_100b62c0(param_3,pcVar5);
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BTCtrlObject");
      if (piVar3 != (int *)0x0) {
        FUN_11316810(local_2c);
        (**(code **)(*piVar3 + 0x98))(local_8,&param_3);
        FUN_1046dc90();
        (**(code **)(*piVar3 + 0x98))();
        (**(code **)(*piVar3 + 0x98))(param_3);
        FUN_1046deb0();
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x54);
      }
    }
  }
  uVar4 = (**(code **)(*param_2 + 0x2c))();
  if ((local_18 != local_2c) && (local_18 != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_18);
  }
  return uVar4;
}


// ===== "BTCtrlObject" user FUN_110399f0@110399f0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_110399f0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar1 != 0) {
        FUN_10b24600();
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_11039860@11039860 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039860(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int local_20;
  int *local_1c;
  int local_10;
  undefined1 *local_c;
  char *local_8;
  
  piVar7 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_10 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0) {
LAB_110398ac:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_110398ac;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BTCtrlObject");
    if (piVar4 == (int *)0x0) goto LAB_110398ac;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_11039962;
    }
    local_8 = (char *)0x0;
    FUN_10c62470(1,&local_8);
    if (local_8 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      pcVar6 = local_8;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar3 = (int)pcVar6 - (int)(local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar3);
    local_c = &DAT_1201fc98;
    cVar2 = BehaviorTree__StripScriptPathPrefix_dup(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0xa4))(local_c);
    }
    piVar4 = (int *)(puVar1 + -0xc);
    if (-1 < *piVar4) {
      iVar3 = FUN_10c3dad0(piVar4);
      if (iVar3 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
        FUN_10c3d900(piVar4);
      }
    }
  }
  uVar5 = (**(code **)(*piVar7 + 0x2c))();
LAB_11039962:
  puVar1 = (undefined1 *)param_2;
  piVar7 = (int *)((int)param_2 + -0xc);
  if (-1 < *piVar7) {
    iVar3 = FUN_10c3dad0(piVar7);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
      FUN_10c3d900(piVar7);
    }
  }
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar5;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar5;
}


// ===== "BTCtrlObject" user FUN_11039b60@11039b60 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039b60(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar1 != 0) {
        FUN_10b245f0(param_3);
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_11039bf0@11039bf0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039bf0(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_9c [64];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar1 != 0) {
        FUN_10a709f0();
        if (param_3 == '\0') {
          local_54 = 0xffffffff;
          local_50 = 0xffffffdf;
        }
        else {
          local_5c = 0;
          local_58 = 0x20;
        }
        piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0xc) + 0x16c))();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(local_9c,0);
        }
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_11039a80@11039a80 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039a80(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_9c [64];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar1 != 0) {
        FUN_10a709f0();
        if (param_3 == '\0') {
          local_54 = 0xffffffff;
          local_50 = 0xfffff7ff;
        }
        else {
          local_5c = 0;
          local_58 = 0x800;
        }
        piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0xc) + 0x16c))();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(local_9c,0);
        }
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_11039db0@11039db0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039db0(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_9c [64];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar1 != 0) {
        FUN_10a709f0();
        if (param_3 == '\0') {
          local_54 = 0xffffffff;
          local_50 = 0xffffffef;
        }
        else {
          local_5c = 0;
          local_58 = 0x10;
        }
        piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0xc) + 0x16c))();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(local_9c,0);
        }
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_11039cd0@11039cd0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039cd0(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_9c [64];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar1 != 0) {
        FUN_10a709f0();
        if (param_3 == '\0') {
          local_54 = 0xffffffff;
          local_50 = 0xffffffbf;
        }
        else {
          local_5c = 0;
          local_58 = 0x40;
        }
        piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0xc) + 0x16c))();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(local_9c,0);
        }
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_11039f70@11039f70 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039f70(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xf4))(param_3);
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_11039e90@11039e90 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039e90(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_9c [64];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar1 != 0) {
        FUN_10a709f0();
        if (param_3 == '\0') {
          local_54 = 0xffffffff;
          local_50 = 0xfffdffff;
        }
        else {
          local_5c = 0;
          local_58 = 0x20000;
        }
        piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0xc) + 0x16c))();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(local_9c,0);
        }
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (-1 < DAT_1201fc8c) {
    iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
  }
  return uVar3;
}


// ===== "BTCtrlObject" user FUN_110391a0@110391a0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_110391a0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  undefined4 local_8;
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BTCtrlObject");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_8 = 0;
          (**(code **)(*piVar3 + 0x88))(param_2,&local_8);
          uVar4 = FUN_10d1c5b0(&local_8);
          goto LAB_1103923a;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_1103923a:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== "BTCtrlObject" user FUN_110390b0@110390b0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_110390b0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  int *local_8;
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BTCtrlObject");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_8 = (int *)0x0;
          (**(code **)(*piVar3 + 0x84))(param_2,&local_8);
          param_2 = local_8;
          uVar4 = FUN_110273e0(&param_2);
          goto LAB_11039150;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_11039150:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== "BTCtrlObject" user FUN_11039370@11039370 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039370(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  undefined4 local_8;
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BTCtrlObject");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          local_8 = 0;
          FUN_10c62470(1,&local_8);
          param_2 = (int *)((uint)param_2 & 0xffffff);
          (**(code **)(*piVar3 + 0x94))(local_8,(int)&param_2 + 3);
          uVar4 = FUN_10d1c620((int)&param_2 + 3);
          goto LAB_11039407;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_11039407:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== "BTCtrlObject" user FUN_11039280@11039280 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039280(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_20;
  int *local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BTCtrlObject");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_10 = 0;
          local_c = 0;
          local_8 = 0;
          (**(code **)(*piVar3 + 0x90))(param_2,&local_10);
          uVar4 = FUN_110333d0(&local_10);
          goto LAB_11039328;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_20);
LAB_11039328:
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar4;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar4;
}


// ===== "BTCtrlObject" user FUN_11039540@11039540 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039540(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int local_20;
  int *local_1c;
  int local_10;
  undefined1 *local_c;
  char *local_8;
  
  piVar7 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_10 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0) {
LAB_1103958c:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_1103958c;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BTCtrlObject");
    if (piVar4 == (int *)0x0) goto LAB_1103958c;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_11039642;
    }
    local_8 = (char *)0x0;
    FUN_10c62470(1,&local_8);
    if (local_8 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      pcVar6 = local_8;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar3 = (int)pcVar6 - (int)(local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar3);
    local_c = &DAT_1201fc98;
    cVar2 = BehaviorTree__StripScriptPathPrefix_dup(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0xf0))(local_c);
    }
    piVar4 = (int *)(puVar1 + -0xc);
    if (-1 < *piVar4) {
      iVar3 = FUN_10c3dad0(piVar4);
      if (iVar3 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
        FUN_10c3d900(piVar4);
      }
    }
  }
  uVar5 = (**(code **)(*piVar7 + 0x2c))();
LAB_11039642:
  puVar1 = (undefined1 *)param_2;
  piVar7 = (int *)((int)param_2 + -0xc);
  if (-1 < *piVar7) {
    iVar3 = FUN_10c3dad0(piVar7);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
      FUN_10c3d900(piVar7);
    }
  }
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar5;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar5;
}


// ===== "BTCtrlObject" user FUN_11039450@11039450 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_11039450(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_18;
  int *local_14;
  undefined1 local_8 [4];
  
  piVar1 = param_2;
  local_18 = 0;
  local_14 = (int *)0x0;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BTCtrlObject");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          FUN_113168d0(&DAT_11d9d32b);
          (**(code **)(*piVar3 + 0x8c))(param_2,local_8);
          param_2 = (int *)FUN_11317f30();
          uVar4 = FUN_10a01710(&param_2);
          goto LAB_110394fb;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_110394fb:
  if (local_18 == 6) {
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
      return uVar4;
    }
  }
  else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
  }
  return uVar4;
}


// ===== "BTCtrlObject" user FUN_110396d0@110396d0 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_110396d0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int local_20;
  int *local_1c;
  int local_10;
  undefined1 *local_c;
  char *local_8;
  
  piVar7 = param_2;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_10 = param_1;
  iVar3 = (**(code **)(*param_2 + 8))();
  if (iVar3 == 0) {
LAB_1103971c:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_1103971c;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BTCtrlObject");
    if (piVar4 == (int *)0x0) goto LAB_1103971c;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_110397d2;
    }
    local_8 = (char *)0x0;
    FUN_10c62470(1,&local_8);
    if (local_8 == (char *)0x0) {
      iVar3 = 0;
    }
    else {
      pcVar6 = local_8;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar3 = (int)pcVar6 - (int)(local_8 + 1);
    }
    FUN_1083ab70(local_8,iVar3);
    local_c = &DAT_1201fc98;
    cVar2 = BehaviorTree__StripScriptPathPrefix_dup(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0xa0))(local_c);
    }
    piVar4 = (int *)(puVar1 + -0xc);
    if (-1 < *piVar4) {
      iVar3 = FUN_10c3dad0(piVar4);
      if (iVar3 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
        FUN_10c3d900(piVar4);
      }
    }
  }
  uVar5 = (**(code **)(*piVar7 + 0x2c))();
LAB_110397d2:
  puVar1 = (undefined1 *)param_2;
  piVar7 = (int *)((int)param_2 + -0xc);
  if (-1 < *piVar7) {
    iVar3 = FUN_10c3dad0(piVar7);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
      FUN_10c3d900(piVar7);
    }
  }
  if (local_20 == 6) {
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 0xc))();
      return uVar5;
    }
  }
  else if ((local_20 == 7) && (local_1c != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_1c);
  }
  return uVar5;
}


// ===== "BTCtrlObject" user FUN_10db6480@10db6480 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __fastcall FUN_10db6480(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  bool bVar7;
  
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x1d00) + 0xc))();
  pcVar6 = "BTCtrlObject";
  pbVar3 = (byte *)(**(code **)(*piVar2 + 8))();
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10db64c0:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_10db64c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10db64c0;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10db64c5:
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_10d9d300();
  return uVar5;
}


// ===== "BTCtrlObject" user FUN_115af020@115af020 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

int * __thiscall
FUN_115af020(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,char *param_5,
            char *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 8))
                            (*(undefined4 *)(param_1 + 0xc),7,param_7,0xffffffff);
  if (piVar2 != (int *)0x0) {
    if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
      piVar2[0x38] = 4;
      (**(code **)(*piVar2 + 0xac))(param_2);
      pcVar1 = param_5;
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      FUN_100d83d0(param_5,pcVar3);
      FUN_11414fc0(piVar2,param_3);
      FUN_11414fe0(piVar2,param_4);
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        FUN_11414fa0(piVar2,param_2);
      }
    }
    if (param_6 == (char *)0x0) {
      param_6 = "BTCtrlObject";
    }
    (**(code **)(*piVar2 + 0xb0))(param_6);
    (**(code **)(*piVar2 + 0xcc))(param_8,param_9);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(piVar2);
    return piVar2;
  }
  return (int *)0x0;
}


// ===== "BTCtrlObject" user CBTActor::InstantiateBehaviorTreeForEntity@10aa66e0 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""BTCtrlObject"" */

undefined4 __fastcall CBTActor__InstantiateBehaviorTreeForEntity(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *local_8;
  
  local_8 = param_1;
  cVar1 = FUN_11318380();
  if (cVar1 != '\0') {
    return 1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar5 = *piVar2;
  uVar3 = (**(code **)(*param_1 + 0x50))();
  piVar2 = (int *)(**(code **)(iVar5 + 0xc))(uVar3);
  if (piVar2 == (int *)0x0) {
    iVar5 = **(int **)m_pThis_exref;
    uVar3 = (**(code **)(*(int *)param_1[0x15] + 0xc))();
    piVar2 = (int *)(**(code **)(iVar5 + 0x144))(uVar3);
    if (piVar2 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (piVar4 != (int *)0x0) {
        FUN_10aa6af0(3,param_1 + 0x18);
        cVar1 = FUN_104969c0(4,&local_8);
        iVar5 = *piVar4;
        piVar2 = local_8;
        if (cVar1 == '\0') {
          piVar2 = (int *)0xffffffff;
        }
        uVar3 = FUN_11317f30(param_1[0x18],(char)param_1[0x1a],piVar2);
        (**(code **)(iVar5 + 0xc0))(uVar3);
        return 2;
      }
      iVar5 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
      if (iVar5 != 0) {
        FUN_10aa6af0(3,param_1 + 0x18);
        uVar3 = FUN_11317f30(param_1[0x18],(char)param_1[0x1a]);
        FUN_10b24e30(uVar3);
        return 2;
      }
    }
  }
  else {
    cVar1 = (**(code **)(*piVar2 + 0x1d4))();
    if (cVar1 != '\0') {
      param_1[0x1c] = param_1[0x1c] + 1;
      *(undefined2 *)((int)param_1 + 0x72) = 0;
      FUN_10aa6af0(3,param_1 + 0x18);
      uVar3 = FUN_11317f30();
      cVar1 = FUN_10db7340(param_1[0x18],param_1[0x1b] + param_1[0x1c],(char)param_1[0x1a],uVar3);
      if (cVar1 != '\0') {
        return 2;
      }
    }
  }
  return 1;
}


// ===== "BTCtrlObject" user FUN_10a9fe20@10a9fe20 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __fastcall FUN_10a9fe20(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint local_8;
  
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    return 2;
  }
  iVar3 = **(int **)m_pThis_exref;
  local_8 = param_1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar2 = (int *)(**(code **)(iVar3 + 0x144))(uVar1);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x18))("BTCtrlObject");
    if (iVar3 != 0) {
      local_8 = local_8 & 0xffffff00;
      FUN_104968c0(0,&local_8);
      FUN_10b24fb0(local_8);
      return 2;
    }
  }
  return 1;
}


// ===== vtable +0x104 of run 11ccfc4c : FUN_10be8b60@10be8b60 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10be8b60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10be8b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x2f0))();
    return uVar1;
  }
  return 0;
}


// ===== vtable +0x108 of run 11ccfc4c : FUN_10bd10d0@10bd10d0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10bd10d0(int param_1,undefined4 *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x74))(&local_10);
  return;
}


// ===== vtable +0x10c of run 11ccfc4c : FUN_10bd1110@10bd1110 =====

/* [RE-AUTO c0] */

void __fastcall FUN_10bd1110(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x10bd111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x78))();
  return;
}


// ===== vtable +0x118 of run 11ccfc4c : FUN_10be8640@10be8640 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10be8640(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_23c [568];
  
  FUN_10a6fb20();
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x68))();
  iVar1 = *piVar2;
  uVar3 = (**(code **)(*param_1 + 0x18))();
  piVar2 = (int *)(**(code **)(iVar1 + 0xc))(uVar3);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x38c))(local_23c);
    FUN_10beac30(param_2);
  }
  return;
}


// ===== vtable +0x104 of run 11cd520c : _purecall@11a89034 =====

void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x11a89034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}

