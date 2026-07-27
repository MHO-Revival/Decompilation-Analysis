
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: _stricmp, sprintf, _itoa_s, atoi, _itoa, fread, strtok, fclose, strcpy_s, fwrite
   strings:
     ""LevelLoading""
     ""Failed to read level info (level.pak or levelsrv.pak might be corrupted)!""
     ""e_TryloadLevelFlag""
     ""con_showonload""
     ""g_enableloadingscreen""
     ""log_SpamDelay""
     ""/GameTokens/*.xml""
     ""sys_spec""
     ""r_fwdrendering""
     ""e_IsInLobby"" */

int __thiscall FUN_108a4430(int *param_1,char *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  size_t sVar14;
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined *puVar24;
  int *piVar25;
  uint uVar26;
  undefined1 **ppuVar27;
  int iVar28;
  undefined1 *puVar29;
  bool bVar30;
  float10 fVar31;
  char *pcVar32;
  undefined1 local_cfc [564];
  int local_ac8;
  undefined1 *local_ac4;
  undefined1 local_ac0 [512];
  undefined1 local_8c0 [4];
  int local_8bc;
  byte *local_8b8;
  byte local_8b4 [512];
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined1 *local_6ac;
  undefined1 local_6a8 [512];
  char local_4a8 [260];
  FILE *local_3a4;
  int *local_3a0;
  undefined1 local_39c [24];
  int *local_384;
  int local_31c;
  int *local_314;
  char local_304 [260];
  FILE *local_200;
  int *local_1fc;
  char local_1f8 [32];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  char local_1a8 [16];
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  char local_170 [4];
  char local_16c [4];
  char local_168 [4];
  char local_164 [4];
  char local_160 [4];
  int *local_15c;
  undefined4 local_158;
  int *local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined4 local_140;
  int *local_13c;
  int local_138;
  int local_134;
  int local_130;
  int *local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined4 *local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [4];
  undefined1 *local_f4;
  undefined1 *local_f0;
  int *local_ec;
  undefined1 local_e8 [4];
  int local_e4;
  undefined1 local_e0 [4];
  float local_dc;
  int *local_d8;
  undefined *local_d4;
  int *local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  int local_b8;
  undefined1 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined1 local_a1;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined1 local_91;
  undefined4 *local_90;
  int local_8c;
  undefined4 *local_88;
  int local_84;
  int *local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  int local_6c;
  undefined1 local_68;
  char *local_64;
  undefined1 local_5d;
  int *local_5c;
  int *local_58;
  int *local_54;
  undefined1 *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 *local_3c;
  int local_38;
  int *local_34;
  undefined1 *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  char local_9;
  int *local_8;
  
  local_14 = param_1;
  (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x38))(1);
  local_f0 = &DAT_113cc00c;
  FUN_1043fc20("LevelLoading",0xc);
  puVar29 = local_f0;
  (**(code **)(*(int *)DAT_113f3a18[4] + 8))(local_f0);
  (**(code **)(*(int *)DAT_113f3a18[4] + 0xc))(puVar29);
  piVar25 = (int *)(puVar29 + -0xc);
  if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 - (*(int *)(puVar29 + -4) + 0xd);
    FUN_106540f0(piVar25);
  }
  if ((int *)DAT_113f3a18[0x22] != (int *)0x0) {
    (**(code **)(*(int *)DAT_113f3a18[0x22] + 0x10))();
  }
  (**(code **)(*(int *)DAT_113f3a18[4] + 0x5e4))(1);
  (**(code **)(*(int *)CCryAction::m_pThis + 0x40))(0,1,0,0);
  piVar25 = (int *)(**(code **)(*(int *)DAT_113f3a18[10] + 0x14))(local_1b8);
  param_1[0x1c] = *piVar25;
  param_1[0x1d] = piVar25[1];
  piVar25 = (int *)FUN_108a8940(param_2);
  local_1c = piVar25;
  if (piVar25 == (int *)0x0) {
    (**(code **)(*param_1 + 4))();
    (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x38))(0);
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  _stricmp((char *)param_1[0x16],param_2);
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    pcVar32 = param_2;
    do {
      cVar4 = *pcVar32;
      pcVar32 = pcVar32 + 1;
    } while (cVar4 != '\0');
    iVar5 = (int)pcVar32 - (int)(param_2 + 1);
  }
  FUN_1043fc20(param_2,iVar5);
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1);
  }
  iVar5 = FUN_10653d70(0x84);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_108a0fe0();
  }
  FUN_108af7f0(piVar25);
  param_1[7] = iVar5;
  cVar4 = FUN_108a2490();
  if (cVar4 == '\0') {
    (**(code **)(*param_1 + 0x10))
              (piVar25,"Failed to read level info (level.pak or levelsrv.pak might be corrupted)!");
    (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x38))(0);
    return 0;
  }
  FUN_108af7f0(piVar25);
  if ((DAT_114221cc & 1) == 0) {
    DAT_114221cc = DAT_114221cc | 1;
    DAT_114221c8 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("e_TryloadLevelFlag");
  }
  if ((DAT_114221c8 != (int *)0x0) && (iVar5 = (**(code **)(*DAT_114221c8 + 8))(), iVar5 != 0)) {
    (**(code **)(*(int *)DAT_113f3a18[0x16] + 0x128))(2,0);
  }
  (**(code **)(*(int *)DAT_113f3a18[0xb] + 0x24))(600);
  if ((DAT_114221cc & 2) == 0) {
    DAT_114221cc = DAT_114221cc | 2;
    DAT_114221d0 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("con_showonload");
  }
  if ((DAT_114221d0 != (int *)0x0) && (iVar5 = (**(code **)(*DAT_114221d0 + 8))(), iVar5 != 0)) {
    (**(code **)(*(int *)DAT_113f3a18[0xb] + 0x30))(1,0xffffffff);
    if ((DAT_114221cc & 4) == 0) {
      DAT_114221cc = DAT_114221cc | 4;
      DAT_114221d4 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("g_enableloadingscreen")
      ;
    }
    if (DAT_114221d4 != (int *)0x0) {
      (**(code **)(*DAT_114221d4 + 0x14))(0);
    }
  }
  FUN_108ae3d0();
  (**(code **)(*(int *)param_1[2] + 0x1cc))(local_cfc);
  param_1[8] = (int)piVar25;
  (**(code **)(*param_1 + 8))(piVar25);
  if ((int *)DAT_113f3a18[0x19] != (int *)0x0) {
    (**(code **)(*(int *)DAT_113f3a18[0x19] + 0x34))(1);
  }
  (**(code **)(*(int *)DAT_113f3a18[0x10] + 0x118))();
  local_154 = (int *)DAT_113f3a18[0x16];
  uVar6 = (**(code **)(*piVar25 + 8))();
  FUN_10423fd0(uVar6);
  piVar25 = (int *)FUN_10423fd0((int)DAT_113f3a18 + 0x189);
  piVar7 = (int *)FUN_10452770(&local_138,&local_84,&DAT_113acd50);
  if (*(int *)(*piVar7 + -0xc) < 0) {
    local_50 = &DAT_113cc00c;
  }
  else {
    local_50 = (undefined1 *)*piVar7;
    FUN_106542a0(local_50 + -0xc);
  }
  FUN_1044d150(*piVar25,*(undefined4 *)(*piVar25 + -8));
  piVar25 = (int *)(local_138 + -0xc);
  if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 - (*(int *)(local_138 + -4) + 0xd);
    FUN_106540f0(piVar25);
  }
  piVar25 = (int *)(local_8c + -0xc);
  if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 - (*(int *)(local_8c + -4) + 0xd);
    FUN_106540f0(piVar25);
  }
  (**(code **)(*(int *)param_1[2] + 0x250))(2,0);
  if ((DAT_114221cc & 8) == 0) {
    DAT_114221cc = DAT_114221cc | 8;
    DAT_114221d8 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("log_SpamDelay");
  }
  local_8c = 0;
  if (DAT_114221d8 == (int *)0x0) {
    local_dc = 0.0;
  }
  else {
    fVar31 = (float10)(**(code **)(*DAT_114221d8 + 0xc))();
    local_dc = (float)fVar31;
    (**(code **)(*DAT_114221d8 + 0x18))(0);
  }
  piVar25 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x8c))();
  (**(code **)(*piVar25 + 0x34))();
  uVar6 = FUN_10423fd0("/GameTokens/*.xml");
  uVar6 = (**(code **)(*local_1c + 8))(uVar6);
  puVar8 = (undefined4 *)FUN_104b3c50(&local_120,uVar6);
  (**(code **)(*piVar25 + 0x2c))(*puVar8);
  piVar7 = (int *)(local_120 + -0xc);
  if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 - (*(int *)(local_120 + -4) + 0xd);
    FUN_106540f0(piVar7);
  }
  piVar7 = (int *)(local_148 + -0xc);
  if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 - (*(int *)(local_148 + -4) + 0xd);
    FUN_106540f0(piVar7);
  }
  if (((int *)DAT_113f3a18[0x34] != (int *)0x0) &&
     (iVar5 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x7c))(), iVar5 != 0)) {
    for (puVar8 = *(undefined4 **)(iVar5 + 0x1c); puVar8 != (undefined4 *)(iVar5 + 0x1c);
        puVar8 = (undefined4 *)*puVar8) {
      piVar7 = (int *)(**(code **)(*piVar25 + 0x10))(puVar8[7]);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x2c))(puVar8[0xd],1);
      }
    }
  }
  if (*(char *)((int)DAT_113f3a18 + 0x209) == '\0') {
    iVar5 = (**(code **)(*(int *)DAT_113f3a18[1] + 0x3c))();
    if ((iVar5 != 0) &&
       (cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x160))(), cVar4 != '\x01')) {
      uVar26 = 4;
      if ((DAT_114221cc & 0x10) == 0) {
        DAT_114221cc = DAT_114221cc | 0x10;
        DAT_114221dc = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("sys_spec");
      }
      if ((DAT_114221dc != (int *)0x0) && (uVar26 = (**(code **)(*DAT_114221dc + 8))(), uVar26 == 1)
         ) {
        if ((DAT_114221cc & 0x20) == 0) {
          DAT_114221cc = DAT_114221cc | 0x20;
          DAT_114221e0 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("r_fwdrendering");
        }
        iVar5 = (**(code **)(*DAT_114221e0 + 8))();
        uVar26 = -(uint)(iVar5 != 1) & 1;
      }
      piVar25 = (int *)(**(code **)(*(int *)DAT_113f3a18[1] + 0x3c))();
      fVar31 = (float10)(**(code **)(*piVar25 + 0x27c))(param_2,uVar26);
      (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x43c))((float)fVar31);
    }
    if ((DAT_114221cc & 0x40) == 0) {
      DAT_114221cc = DAT_114221cc | 0x40;
      DAT_114221e4 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("e_IsInLobby");
    }
    if (-1 < (char)DAT_114221cc) {
      DAT_114221cc = DAT_114221cc | 0x80;
      DAT_114221e8 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("e_IsInTown");
    }
    iVar5 = (**(code **)(*(int *)DAT_113f3a18[1] + 0x3c))();
    if (iVar5 == 0) {
      if (DAT_114221e4 != (int *)0x0) {
        uVar6 = 0;
        piVar25 = DAT_114221e4;
        goto LAB_108a4b47;
      }
    }
    else {
      if (DAT_114221e4 != (int *)0x0) {
        (**(code **)(*DAT_114221e4 + 0x14))(0);
      }
      if (DAT_114221e8 != (int *)0x0) {
        (**(code **)(*DAT_114221e8 + 0x14))(0);
      }
      cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x160))();
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x164))();
        if ((cVar4 != '\0') && (DAT_114221e8 != (int *)0x0)) {
          uVar6 = 1;
          piVar25 = DAT_114221e8;
          goto LAB_108a4b47;
        }
      }
      else if (DAT_114221e4 != (int *)0x0) {
        uVar6 = 1;
        piVar25 = DAT_114221e4;
LAB_108a4b47:
        (**(code **)(*piVar25 + 0x14))(uVar6);
      }
    }
  }
  piVar25 = local_1c;
  puVar8 = (undefined4 *)(**(code **)(*local_1c + 0x30))();
  iVar5 = *(int *)DAT_113f3a18[0xd];
  uVar6 = (**(code **)(*piVar25 + 8))(*puVar8);
  cVar4 = (**(code **)(iVar5 + 0x20))(uVar6);
  if (cVar4 == '\0') {
    pcVar32 = "3DEngine failed to handle loading the level";
  }
  else {
    if (DAT_113f3a18[0x14] != 0) {
      iVar5 = *(int *)DAT_113f3a18[0x14];
      uVar6 = (**(code **)(*piVar25 + 8))();
      cVar4 = (**(code **)(iVar5 + 200))(uVar6);
      if (cVar4 != '\0') {
        piVar7 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("ag_loadXml");
        if (((piVar7 == (int *)0x0) || (iVar5 = (**(code **)(*piVar7 + 8))(), iVar5 == 0)) &&
           (*(char *)((int)DAT_113f3a18 + 0x209) == '\0')) {
          iVar5 = 0;
          do {
            iVar28 = 0;
            do {
              if (iVar28 == 0) {
                pcVar32 = "PlayerWe%02d.ag";
              }
              else {
                pcVar32 = "PlayerWe%02dUpper.ag";
              }
              sprintf(local_1f8,pcVar32,iVar5);
              local_f4 = &DAT_113cc00c;
              FUN_10423fd0(local_1f8);
              FUN_104eff50(&local_13c,&local_e4,0,1,&local_f4);
              if (local_13c != (int *)0x0) {
                (**(code **)(*local_13c + 8))();
              }
              iVar10 = local_e4;
              piVar25 = (int *)(local_e4 + -0xc);
              if ((-1 < *piVar25) && (iVar9 = FUN_106542c0(piVar25), iVar9 < 1)) {
                DAT_113f26c0 = DAT_113f26c0 - (*(int *)(iVar10 + -4) + 0xd);
                FUN_106540f0(piVar25);
              }
              puVar29 = local_f4;
              piVar25 = (int *)(local_f4 + -0xc);
              if ((-1 < *piVar25) && (iVar10 = FUN_106542c0(piVar25), iVar10 < 1)) {
                DAT_113f26c0 = DAT_113f26c0 - (*(int *)(puVar29 + -4) + 0xd);
                FUN_106540f0(piVar25);
              }
              iVar28 = iVar28 + 1;
            } while (iVar28 < 2);
            iVar5 = iVar5 + 1;
            piVar25 = local_1c;
          } while (iVar5 < 0xb);
        }
        if ((int *)DAT_113f3a18[0x19] != (int *)0x0) {
          (**(code **)(*(int *)DAT_113f3a18[0x19] + 0x70))();
        }
        (**(code **)(*(int *)DAT_113f3a18[0xc] + 0xd0))();
        if ((int *)DAT_113f3a18[0x13] != (int *)0x0) {
          (**(code **)(*(int *)DAT_113f3a18[0x13] + 0x10))(4);
        }
        FUN_109b3b70();
        local_17c = 0x13;
        local_178 = 0;
        local_174 = 0;
        FUN_1065c290(&local_17c);
        FUN_106606c0();
        if ((int *)DAT_113f3a18[0x23] != (int *)0x0) {
          (**(code **)(*(int *)DAT_113f3a18[0x23] + 0xc))(0);
          (**(code **)(*(int *)DAT_113f3a18[0x23] + 4))();
        }
        (**(code **)(*(int *)DAT_113f3a18[0xe] + 0x28))(1);
        piVar7 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xe] + 0x60))();
        if (piVar7 != (int *)0x0) {
          uVar6 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0xfc))();
          (**(code **)(*piVar7 + 0x1c))(uVar6);
        }
        (**(code **)(*(int *)DAT_113f3a18[0xe] + 0x94))(1,0);
        piVar7 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xe] + 0xd4))();
        (**(code **)(*piVar7 + 0x148))(1,1,1);
        (**(code **)(*(int *)DAT_113f3a18[0xe] + 4))(0xf);
        (**(code **)(*(int *)DAT_113f3a18[0xe] + 0x28))(0);
        (**(code **)(*(int *)DAT_113f3a18[0xe] + 0x30))(param_2);
        if (((int *)DAT_113f3a18[0x13] != (int *)0x0) &&
           (cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x13] + 0x30))(), cVar4 != '\0')) {
          (**(code **)(*(int *)DAT_113f3a18[0x13] + 0x74))();
          puVar8 = (undefined4 *)(**(code **)(*piVar25 + 0x30))();
          iVar5 = *(int *)DAT_113f3a18[0x13];
          uVar6 = (**(code **)(*piVar25 + 8))(*puVar8);
          (**(code **)(iVar5 + 0x80))(uVar6);
        }
        piVar7 = (int *)(**(code **)(*piVar25 + 0x14))();
        puVar8 = (undefined4 *)*piVar7;
        if (puVar8 != (undefined4 *)piVar7[1]) {
          do {
            (**(code **)(*(int *)DAT_113f3a18[0xf] + 0x74))(*puVar8,1,0);
            puVar8 = puVar8 + 1;
          } while (puVar8 != (undefined4 *)piVar7[1]);
        }
        if ((int *)DAT_113f3a18[0x14] != (int *)0x0) {
          (**(code **)(*(int *)DAT_113f3a18[0x14] + 0x3c))(1);
          (**(code **)(*(int *)DAT_113f3a18[0x14] + 0x3c))(0x7777);
        }
        piVar7 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x84))();
        iVar5 = FUN_1065b930();
        if (*(int *)(*(int *)(iVar5 + 0x98) + -0xc) < 0) {
          puVar29 = &DAT_113cc00c;
        }
        else {
          puVar29 = *(undefined1 **)(iVar5 + 0x98);
          FUN_106542a0(puVar29 + -0xc);
        }
        (**(code **)(*piVar7 + 8))(puVar29);
        piVar7 = (int *)(puVar29 + -0xc);
        if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
          DAT_113f26c0 = DAT_113f26c0 - (*(int *)(puVar29 + -4) + 0xd);
          FUN_106540f0(piVar7);
        }
        iVar5 = (**(code **)(*piVar25 + 0x30))();
        if (*(int *)(*(int *)(iVar5 + 4) + -0xc) < 0) {
          puVar29 = &DAT_113cc00c;
          local_30 = &DAT_113cc00c;
        }
        else {
          puVar29 = *(undefined1 **)(iVar5 + 4);
          local_30 = puVar29;
          FUN_106542a0(puVar29 + -0xc);
        }
        uVar6 = (**(code **)(*piVar25 + 8))();
        piVar7 = (int *)FUN_10423fd0(uVar6);
        if (*(int *)(*piVar7 + -0xc) < 0) {
          local_10 = (undefined4 *)&DAT_113cc00c;
        }
        else {
          local_10 = (undefined4 *)*piVar7;
          FUN_106542a0(local_10 + -3);
        }
        FUN_1044d150(&DAT_113acd50,1);
        puVar8 = local_10;
        piVar7 = local_10 + -3;
        if (*piVar7 < 0) {
          local_3c = (undefined4 *)&DAT_113cc00c;
        }
        else {
          local_3c = local_10;
          FUN_106542a0(piVar7);
        }
        FUN_1044d150(puVar29,*(undefined4 *)(puVar29 + -8));
        if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
          DAT_113f26c0 = DAT_113f26c0 - (puVar8[-1] + 0xd);
          FUN_106540f0(piVar7);
        }
        piVar7 = (int *)(local_134 + -0xc);
        if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
          DAT_113f26c0 = DAT_113f26c0 - (*(int *)(local_134 + -4) + 0xd);
          FUN_106540f0(piVar7);
        }
        (**(code **)(*(int *)local_14[2] + 0x1c0))(&local_24,local_3c,0,1,0);
        uVar6 = FUN_10423fd0("/moviedata.xml");
        uVar6 = (**(code **)(*piVar25 + 8))(uVar6);
        FUN_104b3c50(&local_48,uVar6);
        piVar7 = (int *)(local_124 + -0xc);
        if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
          DAT_113f26c0 = DAT_113f26c0 - (*(int *)(local_124 + -4) + 0xd);
          FUN_106540f0(piVar7);
        }
        local_11c = 0;
        local_118 = 0;
        local_114 = 0;
        piVar7 = (int *)DAT_113f3a18[0x12];
        local_4c = piVar7;
        if (piVar7 != (int *)0x0) {
          puVar8 = (undefined4 *)(**(code **)(*piVar25 + 0x30))();
          (**(code **)(*piVar7 + 0x84))(local_48,*puVar8,&local_11c);
        }
        local_34 = (int *)0x0;
        if (local_24 != (int *)0x0) {
          pcVar32 = (char *)(**(code **)(*local_24 + 0x7c))("Script");
          if ((pcVar32 != (char *)0x0) && (*pcVar32 != '\0')) {
            (**(code **)(*(int *)DAT_113f3a18[0xc] + 0x14))(pcVar32,1,1,0);
          }
          piVar7 = (int *)(**(code **)(*local_24 + 0xac))(&local_12c,"Objects");
          if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar7)();
          }
          if (local_34 != (int *)0x0) {
            (**(code **)(*local_34 + 4))();
          }
          local_34 = (int *)*piVar7;
          if (local_12c != (int *)0x0) {
            (**(code **)(*local_12c + 4))();
          }
        }
        piVar7 = (int *)(**(code **)(*local_24 + 0xac))(&local_15c,"RegionsInfo");
        if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar7)();
        }
        piVar7 = (int *)*piVar7;
        local_d8 = piVar7;
        local_8 = piVar7;
        if (local_15c != (int *)0x0) {
          (**(code **)(*local_15c + 4))();
        }
        if ((piVar7 != (int *)0x0) &&
           (iVar5 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 200))(), iVar5 != 0)) {
          FUN_108aa350(&local_d8,*(undefined4 *)(DAT_113f3a18[0x34] + 0x80),
                       *(undefined4 *)(DAT_113f3a18[0x34] + 0x84));
        }
        if (local_34 != (int *)0x0) {
          (**(code **)(*(int *)DAT_113f3a18[0x14] + 0x78))(&local_34,&local_11c);
          local_c8 = 0;
          local_c4 = 0;
          local_c0 = &local_c8;
          local_b8 = 0;
          local_b4 = local_91;
          local_bc = local_c0;
          if (DAT_113f3a18 != (undefined4 *)0x0) {
            if (((*(char *)((int)DAT_113f3a18 + 0x209) == '\0') && (DAT_113f3a18[0x34] != 0)) &&
               (iVar5 = FUN_10b27e30(), iVar5 == 5)) {
              local_158 = *(undefined4 *)(DAT_113f3a18[0x34] + 0xd8);
              local_b0 = 0;
              local_ac = 0;
              local_a8 = 0;
              CThousandsLayerModel__GetManagers_10e1b4b0(1,0x41,&local_b0,&local_158,0);
              local_a0 = 0;
              local_9c = 0;
              local_98 = 0;
              FUN_108b4f10(((local_ac - local_b0) / 0xc) * 4);
              piVar25 = (int *)(**(code **)(*(int *)DAT_113f3a18[0x14] + 0x20))();
              local_80 = (int *)(**(code **)(*piVar25 + 0xc))("EmCommon");
              iVar5 = local_b0;
              if (local_b0 != local_ac) {
                do {
                  local_14c = FUN_10e1c050();
                  if (0 < local_14c) {
                    FUN_108ad350(&local_a0,&local_14c);
                  }
                  iVar28 = FUN_10e1ca40();
                  if ((0 < iVar28) && (iVar28 = FUN_108b09e0(iVar28), iVar28 != 0)) {
                    if ((0 < *(int *)(iVar28 + 0x14)) && (0 < *(int *)(iVar28 + 0x18))) {
                      FUN_108ad350(&local_a0,iVar28 + 0x14);
                    }
                    if ((0 < *(int *)(iVar28 + 0x30)) && (0 < *(int *)(iVar28 + 0x34))) {
                      FUN_108ad350(&local_a0,iVar28 + 0x30);
                    }
                    if ((0 < *(int *)(iVar28 + 0x4c)) && (0 < *(int *)(iVar28 + 0x50))) {
                      FUN_108ad350(&local_a0,iVar28 + 0x4c);
                    }
                  }
                  iVar5 = iVar5 + 0xc;
                } while (iVar5 != local_ac);
              }
              piVar25 = (int *)(local_9c - local_a0 >> 2);
              local_28 = (int *)0x0;
              iVar5 = local_a0;
              local_18 = piVar25;
              if (piVar25 != (int *)0x0) {
                do {
                  iVar28 = *(int *)(iVar5 + (int)local_28 * 4);
                  local_128 = iVar28;
                  if (0 < iVar28) {
                    FUN_106a92e0(local_1c8,&local_128);
                    iVar28 = FUN_105b2c60(iVar28);
                    if (iVar28 != 0) {
                      FUN_10439700();
                      piVar25 = local_80;
                      if (*(int *)(iVar28 + 0x50) != *(int *)(iVar28 + 0x4c)) {
                        piVar25 = (int *)(**(code **)(*(int *)DAT_113f3a18[0x14] + 0x20))();
                        piVar25 = (int *)(**(code **)(*piVar25 + 0xc))
                                                   (*(undefined4 *)(iVar28 + 0x50));
                      }
                      local_384 = piVar25;
                      if (piVar25 != (int *)0x0) {
                        FUN_1043b4b0(*(undefined4 *)(iVar28 + 0x68));
                        piVar25 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xc] + 0x30))(0);
                        (**(code **)(*piVar25 + 8))();
                        iVar5 = (**(code **)(*local_384 + 0x1c))();
                        if (iVar5 != 0) {
                          local_d0 = (int *)0x0;
                          FUN_10465b20("PropertiesInstance",&local_d0);
                          piVar7 = local_d0;
                          (**(code **)(*piVar25 + 0x5c))(local_d0,1,0);
                          if (piVar7 != (int *)0x0) {
                            (**(code **)(*piVar7 + 0xc))();
                          }
                        }
                        local_314 = piVar25;
                        piVar7 = (int *)(**(code **)(*(int *)DAT_113f3a18[0x14] + 0x24))
                                                  (local_39c,1);
                        if (piVar7 != (int *)0x0) {
                          iVar5 = *(int *)DAT_113f3a18[0x14];
                          uVar6 = (**(code **)(*piVar7 + 4))(0);
                          (**(code **)(iVar5 + 0x40))(uVar6);
                        }
                        (**(code **)(*piVar25 + 0xc))();
                      }
                      iVar28 = local_31c;
                      piVar7 = (int *)(local_31c + -0xc);
                      iVar5 = local_a0;
                      piVar25 = local_18;
                      if ((-1 < *piVar7) &&
                         (iVar10 = FUN_106542c0(piVar7), iVar5 = local_a0, piVar25 = local_18,
                         iVar10 < 1)) {
                        DAT_113f26c0 = DAT_113f26c0 - (*(int *)(iVar28 + -4) + 0xd);
                        FUN_106540f0(piVar7);
                        iVar5 = local_a0;
                        piVar25 = local_18;
                      }
                    }
                  }
                  local_28 = (int *)((int)local_28 + 1);
                } while (local_28 < piVar25);
                local_8 = local_d8;
              }
              if (iVar5 != 0) {
                FUN_10653dc0(iVar5);
              }
              if (local_b0 != 0) {
                FUN_10653dc0(local_b0);
              }
            }
            else {
              if (DAT_113f3a18 == (undefined4 *)0x0) goto LAB_108a5bc3;
              if (((*(char *)((int)DAT_113f3a18 + 0x209) == '\0') &&
                  ((int *)DAT_113f3a18[0x34] != (int *)0x0)) &&
                 (cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x168))(), cVar4 != '\0')) {
                FUN_1045ccc0("FileLists\\PreSpawn\\");
                local_1a8[0] = '\0';
                if ((int *)DAT_113f3a18[0x34] != (int *)0x0) {
                  iVar28 = 10;
                  sVar14 = 0x10;
                  pcVar32 = local_1a8;
                  iVar5 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x6c))();
                  _itoa_s(iVar5,pcVar32,sVar14,iVar28);
                }
                FUN_1045dea0(local_1a8);
                piVar25 = (int *)(**(code **)(*(int *)DAT_113f3a18[0x16] + 0x7c))
                                           (local_ac4,&DAT_113a28a8,0);
                local_80 = piVar25;
                if (piVar25 != (int *)0x0) {
                  FUN_104d4b70();
                  iVar5 = (**(code **)(*(int *)DAT_113f3a18[0x16] + 0xa4))(piVar25);
                  FUN_1048e550(iVar5 + 1);
                  FUN_106b7260();
                  pcVar32 = local_64;
                  iVar28 = (**(code **)(*(int *)DAT_113f3a18[0x16] + 0x88))(local_64,iVar5,piVar25);
                  if (iVar5 == iVar28) {
                    pcVar32[iVar5] = '\0';
                    local_6ac = local_6a8;
                    local_6a8[0] = 0;
                    local_6b4 = 0;
                    local_6b0 = 0x1ff;
                    cVar4 = *pcVar32;
                    pcVar15 = pcVar32;
                    pcVar21 = pcVar32;
                    while (cVar4 != '\0') {
                      if (*pcVar21 == '\n') {
                        *pcVar21 = '\0';
                        FUN_10490d80(pcVar15);
                        FUN_108b12d0();
                        FUN_108b1270();
                        FUN_10423fd0(local_6ac);
                        FUN_106b9660(local_e0);
                        FUN_10424220();
                        pcVar15 = pcVar21 + 1;
                      }
                      else if (*pcVar21 == '\0') {
                        FUN_10490d80(pcVar15);
                        FUN_108b12d0();
                        FUN_108b1270();
                        FUN_10423fd0(local_6ac);
                        FUN_106b9660(local_e8);
                        FUN_10424220();
                        break;
                      }
                      pcVar21 = pcVar21 + 1;
                      cVar4 = *pcVar21;
                    }
                    if ((*pcVar21 == '\0') && (pcVar15 < pcVar21)) {
                      FUN_10490d80(pcVar15);
                      FUN_108b12d0();
                      FUN_108b1270();
                      FUN_10423fd0(local_6ac);
                      FUN_106b9660(local_f8);
                      FUN_10424220();
                    }
                    FUN_1045d440();
                    piVar25 = local_80;
                  }
                  (**(code **)(*(int *)DAT_113f3a18[0x16] + 0xc4))(piVar25);
                  if ((*(uint *)(local_38 + -4) & 0x7fffffff) != 0) {
                    iVar5 = 0;
                    do {
                      iVar28 = atoi(*(char **)(local_38 + iVar5 * 4));
                      local_130 = iVar28;
                      piVar25 = (int *)(**(code **)(*(int *)DAT_113f3a18[0x14] + 0x20))();
                      (**(code **)(*piVar25 + 0xc))("EmCommon");
                      if (0 < iVar28) {
                        FUN_106a92e0(local_1d8,&local_130);
                      }
                      iVar5 = iVar5 + 1;
                      pcVar32 = local_64;
                    } while (iVar5 < (int)(*(uint *)(local_38 + -4) & 0x7fffffff));
                  }
                  FUN_106b7930();
                  if (*(int *)(pcVar32 + -4) != 0) {
                    FUN_106540f0(pcVar32 + -4);
                  }
                }
                if (local_ac4 != local_ac0) {
                  DAT_113f2760 = DAT_113f2760 - (local_ac8 + 1);
                  FUN_106540f0(local_ac4);
                }
              }
            }
            if (DAT_113f3a18 != (undefined4 *)0x0) {
              if ((((*(char *)((int)DAT_113f3a18 + 0x209) == '\0') &&
                   ((int *)DAT_113f3a18[0x34] != (int *)0x0)) &&
                  (cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x168))(), cVar4 != '\0')) &&
                 ((iVar5 = DAT_113f3a18[0x34], *(int *)(iVar5 + 0x78) != 0 &&
                  (*(int *)(iVar5 + 0xb4) != 0)))) {
                if (*(char *)(*(int *)(iVar5 + 0xb4) + 0x38) != '\0') {
                  local_140 = *(undefined4 *)(iVar5 + 0xd8);
                  local_88 = (undefined4 *)FUN_10e015b0(*(undefined4 *)(iVar5 + 0xbc),&local_140);
                  if (0 < (int)local_88) {
                    FUN_106a92e0(local_1d0,&local_88);
                  }
                }
                uVar6 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x6c))();
                iVar5 = FUN_108b0a50(uVar6);
                if (iVar5 != 0) {
                  local_110 = 0;
                  local_10c = 0;
                  local_108 = &local_110;
                  local_fc = local_a1;
                  local_100 = 0;
                  local_90 = *(undefined4 **)(DAT_113f3a18[0x34] + 0xd8);
                  local_104 = local_108;
                  cVar4 = FUN_10e144a0(&local_110,*(undefined4 *)(DAT_113f3a18[0x34] + 0xbc),
                                       &local_90);
                  if ((cVar4 != '\0') && (local_cc = local_108, local_108 != &local_110)) {
                    do {
                      local_10 = (undefined4 *)local_cc[7];
                      if (local_10 != local_cc + 5) {
                        puVar8 = local_cc + 5;
                        local_88 = puVar8;
                        do {
                          puVar11 = (undefined4 *)local_10[5];
                          if (puVar11 != local_10 + 5) {
                            puVar1 = local_10 + 5;
                            local_90 = puVar1;
                            do {
                              FUN_106a92e0(local_1c0,puVar11 + 2);
                              puVar11 = (undefined4 *)*puVar11;
                              puVar8 = local_88;
                            } while (puVar11 != puVar1);
                          }
                          puVar11 = (undefined4 *)local_10[3];
                          if (puVar11 == (undefined4 *)0x0) {
                            puVar11 = (undefined4 *)local_10[1];
                            if (local_10 == (undefined4 *)puVar11[3]) {
                              do {
                                local_10 = puVar11;
                                puVar11 = (undefined4 *)local_10[1];
                              } while (local_10 == (undefined4 *)puVar11[3]);
                            }
                            if ((undefined4 *)local_10[3] != puVar11) {
                              local_10 = puVar11;
                            }
                          }
                          else {
                            for (puVar1 = (undefined4 *)puVar11[2]; local_10 = puVar11,
                                puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
                              puVar11 = puVar1;
                            }
                          }
                        } while (local_10 != puVar8);
                      }
                      FUN_108aff20();
                    } while (local_cc != &local_110);
                  }
                  FUN_108af2c0();
                }
              }
              if ((DAT_113f3a18 != (undefined4 *)0x0) &&
                 (piVar25 = (int *)DAT_113f3a18[0x34], piVar25 != (int *)0x0)) {
                uVar6 = (**(code **)(*piVar25 + 0x15c))();
                uVar6 = (**(code **)(*piVar25 + 0x158))(uVar6);
                uVar6 = FUN_10e0e8e0(uVar6);
                iVar5 = FUN_1078f890(uVar6);
                if ((iVar5 != 0) &&
                   (iVar10 = *(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x28), uVar26 = 0,
                   iVar28 = iVar10 >> 0x1f, iVar10 / 0x1c + iVar28 != iVar28)) {
                  iVar28 = 0;
                  do {
                    if (0 < *(int *)(iVar28 + 4 + *(int *)(iVar5 + 0x28))) {
                      FUN_106a92e0(local_1b0,*(int *)(iVar5 + 0x28) + 4 + iVar28);
                    }
                    uVar26 = uVar26 + 1;
                    iVar28 = iVar28 + 0x1c;
                  } while (uVar26 < (uint)((*(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x28)) / 0x1c)
                          );
                }
              }
            }
          }
LAB_108a5bc3:
          if ((DAT_1142283c & 1) == 0) {
            DAT_1142283c = DAT_1142283c | 1;
            DAT_11422838 = &DAT_11422834;
          }
          puVar24 = DAT_11422838;
          puVar8 = local_c0;
          local_d4 = DAT_11422838;
          if (local_c0 != &local_c8) {
            do {
              uVar20 = *(uint *)(puVar24 + -4);
              uVar12 = *(uint *)(puVar24 + -4) & 0x7fffffff;
              puVar11 = (undefined4 *)(puVar24 + *(uint *)(puVar24 + -4) * 4);
              uVar26 = uVar12 + 1;
              if ((int)uVar20 < 0) {
                uVar19 = uVar20 & 0x7fffffff;
                if (puVar24[uVar20 * 4] == 0) {
                  uVar20 = uVar19 + *(int *)((uint)(puVar24 + (uVar19 + 1) * 4) & 0xfffffffc);
                }
                else {
                  uVar20 = uVar19 + (byte)puVar24[uVar20 * 4];
                }
              }
              if ((int)uVar20 < (int)uVar26) {
                FUN_108b5220(uVar26,uVar26,1 < (int)uVar26);
                puVar11 = (undefined4 *)(local_d4 + ((int)puVar11 - (int)puVar24 >> 2) * 4);
                puVar24 = local_d4;
              }
              else {
                uVar20 = *(uint *)(puVar24 + -4);
                if ((int)uVar20 < 0) {
                  uVar19 = uVar20 & 0x7fffffff;
                  if (puVar24[uVar20 * 4] == 0) {
                    uVar20 = uVar19 + *(int *)((uint)(puVar24 + (uVar19 + 1) * 4) & 0xfffffffc);
                  }
                  else {
                    uVar20 = uVar19 + (byte)puVar24[uVar20 * 4];
                  }
                }
                *(uint *)(puVar24 + -4) = uVar26;
                if ((int)uVar26 < (int)uVar20) {
                  iVar5 = uVar20 - uVar26;
                  *(uint *)(puVar24 + -4) = uVar26 | 0x80000000;
                  if (iVar5 < 0x100) {
                    puVar24[uVar26 * 4] = (char)iVar5;
                  }
                  else {
                    puVar24[uVar26 * 4] = 0;
                    *(int *)((uint)(puVar24 + (uVar12 + 2) * 4) & 0xfffffffc) = iVar5;
                  }
                }
              }
              puVar1 = puVar11 + 1;
              for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
                if (puVar11 != (undefined4 *)0x0) {
                  *puVar11 = puVar8[4];
                }
              }
              puVar11 = (undefined4 *)puVar8[3];
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)puVar8[1];
                if (puVar8 == (undefined4 *)puVar11[3]) {
                  do {
                    puVar8 = puVar11;
                    puVar11 = (undefined4 *)puVar8[1];
                  } while (puVar8 == (undefined4 *)puVar11[3]);
                }
                if ((undefined4 *)puVar8[3] != puVar11) {
                  puVar8 = puVar11;
                }
              }
              else {
                for (puVar1 = (undefined4 *)puVar11[2]; puVar8 = puVar11,
                    puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
                  puVar11 = puVar1;
                }
              }
            } while (puVar8 != &local_c8);
          }
          puVar2 = (uint *)(puVar24 + -4);
          if ((*(uint *)(puVar24 + -4) & 0x7fffffff) != 0) {
            piVar25 = (int *)(**(code **)(*(int *)*DAT_113f3a18 + 0x114))();
            (**(code **)(*piVar25 + 0xc))(0x1004,puVar24,*puVar2 & 0x7fffffff);
          }
          if (*puVar2 != 0) {
            FUN_106540f0(puVar2);
          }
          piVar25 = local_1c;
          piVar7 = local_8;
          puVar29 = local_30;
          iVar5 = local_c4;
          if (local_b8 != 0) {
            while (local_30 = puVar29, local_1c = piVar25, local_8 = piVar7, iVar5 != 0) {
              FUN_106a8750(*(undefined4 *)(iVar5 + 0xc));
              iVar28 = *(int *)(iVar5 + 8);
              FUN_10653dc0(iVar5);
              iVar5 = iVar28;
              puVar29 = local_30;
              piVar25 = local_1c;
              piVar7 = local_8;
            }
          }
        }
        iVar5 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 200))();
        if (((iVar5 != 0) && ((int *)DAT_113f3a18[0x13] != (int *)0x0)) &&
           (piVar13 = (int *)(**(code **)(*(int *)DAT_113f3a18[0x13] + 0x108))(),
           piVar13 != (int *)0x0)) {
          (**(code **)(*piVar13 + 0x74))();
        }
        cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x164))();
        if (cVar4 != '\0') {
          (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x444))
                    (1,DAT_112fe0bc,_DAT_11336cc0,DAT_112fe0c0,3,DAT_112fcacc,DAT_112fe0c0,
                     DAT_113c12f0,DAT_113075a8);
        }
        (**(code **)(*local_24 + 0xac))(&local_5c,"MHSpawners");
        if ((local_5c != (int *)0x0) &&
           ((**(code **)(*(int *)DAT_113f3a18[0x14] + 0x80))(&local_5c), local_5c != (int *)0x0)) {
          (**(code **)(*local_5c + 4))();
        }
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 4))();
        }
        if (local_34 != (int *)0x0) {
          (**(code **)(*local_34 + 4))();
        }
        piVar7 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("ca_EnableRopeLod");
        if (piVar7 != (int *)0x0) {
          cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 0x164))();
          (**(code **)(*piVar7 + 0x14))(cVar4 != '\0');
        }
        if ((int *)DAT_113f3a18[0x13] != (int *)0x0) {
          (**(code **)(*(int *)DAT_113f3a18[0x13] + 0x10))(1);
        }
        if (local_4c == (int *)0x0) goto LAB_108a6362;
        puVar8 = (undefined4 *)(**(code **)(*piVar25 + 0x30))();
        iVar5 = local_48;
        (**(code **)(*local_4c + 0x14))(local_48,*puVar8);
        local_6c = 0;
        local_7c = 0;
        local_78 = 0;
        local_74 = &local_7c;
        local_68 = local_5d;
        local_70 = local_74;
        (**(code **)(*(int *)*DAT_113f3a18 + 0x1c0))(&local_54,iVar5,0,1,0);
        if (local_54 == (int *)0x0) {
          iVar5 = local_78;
          if (local_6c != 0) {
            while (iVar5 != 0) {
              FUN_108b1f50(*(undefined4 *)(iVar5 + 0xc));
              iVar28 = *(int *)(iVar5 + 8);
              FUN_10653dc0(iVar5);
              iVar5 = iVar28;
            }
            local_74 = &local_7c;
            local_78 = 0;
            local_6c = 0;
            local_70 = local_74;
          }
          if (local_11c != 0) {
            FUN_10653dc0(local_11c);
          }
          piVar25 = (int *)(local_48 + -0xc);
          if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
            DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(local_48 + -4));
            FUN_106540f0(piVar25);
          }
          if (local_24 != (int *)0x0) {
            (**(code **)(*local_24 + 4))();
          }
          puVar8 = local_3c;
          piVar25 = local_3c + -3;
          if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
            DAT_113f26c0 = DAT_113f26c0 + (-0xd - puVar8[-1]);
            FUN_106540f0(piVar25);
          }
          piVar25 = (int *)(puVar29 + -0xc);
          if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
            DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(puVar29 + -4));
            FUN_106540f0(piVar25);
          }
          goto LAB_108a6db7;
        }
        piVar25 = (int *)0x0;
        piVar7 = (int *)0x0;
        local_28 = (int *)0x0;
        local_18 = (int *)0x0;
        iVar5 = (**(code **)(*local_54 + 0xa0))();
        if (0 < iVar5) {
          do {
            (**(code **)(*local_54 + 0xa8))(&local_2c,piVar7);
            local_8 = (int *)&DAT_113cc00c;
            uVar6 = (**(code **)(*local_2c + 0x7c))(&DAT_113a4d50);
            FUN_10423fd0(uVar6);
            piVar25 = local_20;
            piVar13 = (int *)&DAT_113cc00c;
            if (local_20 != (int *)&DAT_113cc00c) {
              if (DAT_113cc000 < 0) {
                piVar13 = local_8;
                if (-1 < local_20[-3]) {
                  local_8 = local_20;
                  FUN_106542a0(local_20 + -3);
                  piVar13 = piVar25;
                }
              }
              else {
                piVar25 = local_20 + -3;
                if (local_20[-3] < 0) {
                  FUN_1043fe40();
                  local_8 = local_20;
                  piVar7 = local_18;
                  piVar13 = local_20;
                  piVar25 = local_20;
                }
                else {
                  FUN_1043fe40();
                  piVar13 = local_20;
                  local_8 = local_20;
                  FUN_106542a0(piVar25);
                  piVar7 = local_18;
                  piVar25 = piVar13;
                }
              }
            }
            local_9 = piVar13 == (int *)0x0;
            piVar13 = piVar25 + -3;
            if ((-1 < *piVar13) && (iVar5 = FUN_106542c0(piVar13), iVar5 < 1)) {
              DAT_113f26c0 = DAT_113f26c0 - (piVar25[-1] + 0xd);
              FUN_106540f0(piVar13);
            }
            piVar25 = local_8;
            if (local_9 == '\0') {
              puVar8 = (undefined4 *)(**(code **)(*local_1c + 0x30))();
              piVar25 = local_8;
              iVar5 = _stricmp((char *)local_8,(char *)*puVar8);
              if (iVar5 == 0) {
                (**(code **)(*local_2c + 0xac))(&local_44,"SequenceData");
                if (local_44 == (int *)0x0) goto LAB_108a6257;
                iVar28 = 0;
                iVar5 = (**(code **)(*local_44 + 0xa0))();
                if (0 < iVar5) goto LAB_108a61e3;
                goto LAB_108a624b;
              }
            }
            piVar13 = piVar25 + -3;
            if ((-1 < *piVar13) && (iVar5 = FUN_106542c0(piVar13), iVar5 < 1)) {
              DAT_113f26c0 = DAT_113f26c0 - (piVar25[-1] + 0xd);
              FUN_106540f0(piVar13);
            }
            if (local_2c != (int *)0x0) {
              (**(code **)(*local_2c + 4))();
            }
            piVar7 = (int *)((int)piVar7 + 1);
            local_18 = piVar7;
            iVar5 = (**(code **)(*local_54 + 0xa0))();
          } while ((int)piVar7 < iVar5);
          piVar25 = (int *)0x0;
        }
        goto LAB_108a6334;
      }
    }
    pcVar32 = "EntitySystem failed to handle loading the level";
  }
  (**(code **)(*local_14 + 0x10))(piVar25,pcVar32);
  (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x38))(0);
LAB_108a6db7:
  puVar29 = local_50;
  piVar25 = (int *)(local_50 + -0xc);
  if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(puVar29 + -4));
    FUN_106540f0(piVar25);
  }
  piVar25 = (int *)(local_84 + -0xc);
  if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(local_84 + -4));
    FUN_106540f0(piVar25);
  }
  return 0;
  while( true ) {
    if (local_58 != (int *)0x0) {
      (**(code **)(*local_58 + 4))();
    }
    iVar28 = iVar28 + 1;
    iVar5 = (**(code **)(*local_44 + 0xa0))();
    if (iVar5 <= iVar28) break;
LAB_108a61e3:
    (**(code **)(*local_44 + 0xa8))(&local_58,iVar28);
    pcVar32 = (char *)(**(code **)(*local_58 + 0x7c))(&DAT_113a4d50);
    iVar5 = _stricmp(pcVar32,"CatHandcartTrack1");
    if (iVar5 == 0) {
      local_28 = local_58;
      if (local_58 != (int *)0x0) {
        (**(code **)*local_58)();
        local_28 = local_58;
        if (local_58 != (int *)0x0) {
          (**(code **)(*local_58 + 4))();
        }
      }
      break;
    }
  }
LAB_108a624b:
  if (local_44 != (int *)0x0) {
    (**(code **)(*local_44 + 4))();
  }
LAB_108a6257:
  piVar7 = piVar25 + -3;
  if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 - (piVar25[-1] + 0xd);
    FUN_106540f0(piVar7);
  }
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 4))();
  }
  piVar25 = local_28;
  if (local_28 != (int *)0x0) {
    iVar5 = 2;
    local_170[0] = s_CatHandcartTrack1_11336b58[0];
    local_170[1] = s_CatHandcartTrack1_11336b58[1];
    local_170[2] = s_CatHandcartTrack1_11336b58[2];
    local_170[3] = s_CatHandcartTrack1_11336b58[3];
    local_16c[0] = s_CatHandcartTrack1_11336b58[4];
    local_16c[1] = s_CatHandcartTrack1_11336b58[5];
    local_16c[2] = s_CatHandcartTrack1_11336b58[6];
    local_16c[3] = s_CatHandcartTrack1_11336b58[7];
    local_168[0] = s_CatHandcartTrack1_11336b58[8];
    local_168[1] = s_CatHandcartTrack1_11336b58[9];
    local_168[2] = s_CatHandcartTrack1_11336b58[10];
    local_168[3] = s_CatHandcartTrack1_11336b58[0xb];
    local_164[0] = s_CatHandcartTrack1_11336b58[0xc];
    local_164[1] = s_CatHandcartTrack1_11336b58[0xd];
    local_164[2] = s_CatHandcartTrack1_11336b58[0xe];
    local_164[3] = s_CatHandcartTrack1_11336b58[0xf];
    local_160[0] = s_CatHandcartTrack1_11336b58[0x10];
    local_160[1] = s_CatHandcartTrack1_11336b58[0x11];
    do {
      _itoa(iVar5,local_160,10);
      cVar4 = (**(code **)(*(int *)DAT_113f3a18[0x14] + 0x7c))(&local_11c,&local_7c);
      if (cVar4 != '\0') {
        (**(code **)*piVar25)(piVar25,&local_7c,local_170);
        (**(code **)(*local_4c + 0x88))();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
LAB_108a6334:
  (**(code **)(*local_4c + 0xd0))(1,0);
  if (piVar25 != (int *)0x0) {
    (**(code **)(*piVar25 + 4))();
  }
  if (local_54 != (int *)0x0) {
    (**(code **)(*local_54 + 4))();
  }
  FUN_108b39e0();
LAB_108a6362:
  piVar25 = local_14;
  if (DAT_113f3a18[0x21] != 0) {
    uVar6 = FUN_10423fd0("/MapSectionList.xml");
    uVar6 = (**(code **)(*local_1c + 8))(uVar6);
    FUN_104b3c50(&local_144,uVar6);
    piVar25 = (int *)(local_150 + -0xc);
    if ((-1 < *piVar25) && (iVar5 = FUN_106542c0(piVar25), iVar5 < 1)) {
      DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(local_150 + -4));
      FUN_106540f0(piVar25);
    }
    piVar25 = local_14;
    (**(code **)(*(int *)local_14[2] + 0x1c0))(&local_ec,local_144,0,1,0);
    (**(code **)(*(int *)DAT_113f3a18[0x21] + 8))(&local_ec);
    if (local_ec != (int *)0x0) {
      (**(code **)(*local_ec + 4))();
    }
    piVar7 = (int *)(local_144 + -0xc);
    if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
      DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(local_144 + -4));
      FUN_106540f0(piVar7);
    }
  }
  piVar7 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x94))();
  (**(code **)(*piVar7 + 0x24))();
  local_198 = 0x1f;
  local_194 = 0;
  local_190 = 0;
  local_18c = 0;
  local_188 = 0;
  local_180 = 0;
  local_184 = 0;
  (**(code **)(*(int *)DAT_113f3a18[0x14] + 0x4c))(&local_198);
  (**(code **)(*(int *)DAT_113f3a18[0x1d] + 0xc))(0);
  piVar7 = (int *)(**(code **)(*(int *)*DAT_113f3a18 + 0x114))();
  (**(code **)(*piVar7 + 0xc))(0x1001,0,0);
  puVar8 = (undefined4 *)piVar25[0x1e];
  if (puVar8 != (undefined4 *)piVar25[0x1f]) {
    do {
      (**(code **)(*(int *)*puVar8 + 0xc))(piVar25[7]);
      puVar8 = puVar8 + 1;
    } while (puVar8 != (undefined4 *)piVar25[0x1f]);
  }
  piVar7 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x84))();
  piVar7 = (int *)(**(code **)(*piVar7 + 0x28))();
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x6c))();
  }
  (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x30))();
  if ((int *)DAT_113f3a18[0xc] != (int *)0x0) {
    (**(code **)(*(int *)DAT_113f3a18[0xc] + 0x80))();
  }
  (**(code **)(*(int *)DAT_113f3a18[0xb] + 0x24))(300);
  piVar7 = (int *)(**(code **)(*local_154 + 0x124))(3);
  (**(code **)(*piVar7 + 8))();
  if (DAT_114221d8 != (int *)0x0) {
    (**(code **)(*DAT_114221d8 + 0x18))(local_dc);
  }
  if ((int *)DAT_113f3a18[0x21] != (int *)0x0) {
    (**(code **)(*(int *)DAT_113f3a18[0x21] + 0xc))();
  }
  *(undefined1 *)(piVar25 + 0x1a) = 1;
  if (local_11c != 0) {
    FUN_10653dc0(local_11c);
  }
  piVar7 = (int *)(local_48 + -0xc);
  if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(local_48 + -4));
    FUN_106540f0(piVar7);
  }
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 4))();
  }
  puVar8 = local_3c;
  piVar7 = local_3c + -3;
  if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 + (-0xd - puVar8[-1]);
    FUN_106540f0(piVar7);
  }
  puVar29 = local_30;
  piVar7 = (int *)(local_30 + -0xc);
  if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(puVar29 + -4));
    FUN_106540f0(piVar7);
  }
  puVar29 = local_50;
  piVar7 = (int *)(local_50 + -0xc);
  if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(puVar29 + -4));
    FUN_106540f0(piVar7);
  }
  piVar7 = (int *)(local_84 + -0xc);
  if ((-1 < *piVar7) && (iVar5 = FUN_106542c0(piVar7), iVar5 < 1)) {
    DAT_113f26c0 = DAT_113f26c0 + (-0xd - *(int *)(local_84 + -4));
    FUN_106540f0(piVar7);
  }
  piVar7 = (int *)(**(code **)(*(int *)*DAT_113f3a18 + 0x114))();
  (**(code **)(*piVar7 + 0xc))(0x13,0,0);
  (**(code **)(*(int *)piVar25[2] + 0x250))(2,1);
  piVar25 = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("sv_map");
  (**(code **)(*piVar25 + 0x1c))(param_2);
  (**(code **)(*(int *)DAT_113f3a18[0x16] + 0x160))("endlevelload");
  piVar25 = (int *)(**(code **)(*(int *)*DAT_113f3a18 + 0x114))();
  (**(code **)(*piVar25 + 0xc))(0x14,0,0);
  iVar5 = (**(code **)(*(int *)*DAT_113f3a18 + 0x68))();
  if ((iVar5 == 0) && ((int *)DAT_113f3a18[0x14] != (int *)0x0)) {
    (**(code **)(*(int *)DAT_113f3a18[0x14] + 0xe0))(1);
  }
  if ((int *)DAT_113f3a18[0x19] != (int *)0x0) {
    (**(code **)(*(int *)DAT_113f3a18[0x19] + 0x34))(0);
  }
  (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x24))();
  if ((int *)DAT_113f3a18[0x22] != (int *)0x0) {
    (**(code **)(*(int *)DAT_113f3a18[0x22] + 0x14))();
  }
  (**(code **)(*(int *)DAT_113f3a18[4] + 0x5e4))(0);
  if ((DAT_114221cc & 0x100) == 0) {
    DAT_114221cc = DAT_114221cc | 0x100;
    DAT_114221ec = (int *)(**(code **)(*(int *)DAT_113f3a18[0xb] + 0x54))("e_LevelsPrecache");
  }
  if ((DAT_114221ec != (int *)0x0) && (iVar5 = (**(code **)(*DAT_114221ec + 8))(), iVar5 != 0)) {
    if ((DAT_113cf304 == '\0') &&
       ((cVar4 = (**(code **)(*(int *)*DAT_113f3a18 + 0x2f8))(), cVar4 != '\0' &&
        (cVar4 = (**(code **)(*(int *)*DAT_113f3a18 + 0x2e8))(), cVar4 == '\0')))) {
      if ((DAT_114221cc & 0x200) == 0) {
        DAT_114221cc = DAT_114221cc | 0x200;
        DAT_114221fc = 0;
        DAT_114221f8 = &DAT_114221fc;
        DAT_114221f0 = 0;
        _DAT_114221f4 = 0x1ff;
        DAT_11422408 = 0;
        DAT_11422404 = &DAT_11422408;
        DAT_114223fc = 0;
        DAT_11422400 = 0x1ff;
        DAT_11422614 = 0;
        DAT_11422610 = &DAT_11422614;
        DAT_11422608 = 0;
        DAT_1142260c = 0x1ff;
        FUN_112be5f1(&LAB_112db7b0);
      }
      if (DAT_113cf305 != '\0') {
        DAT_113cf305 = '\0';
        local_3a4 = (FILE *)0x0;
        if (DAT_113f3a18 == (undefined4 *)0x0) {
          local_3a0 = (int *)0x0;
        }
        else {
          local_3a0 = (int *)DAT_113f3a18[0x16];
        }
        cVar4 = FUN_108b0e70("%user%/testrec.txt",&DAT_113a28a8,0);
        if ((cVar4 != '\0') && (iVar5 = FUN_108b0950(), iVar5 != 0)) {
          sVar14 = FUN_108b0950();
          pcVar32 = (char *)FUN_10654250(sVar14 + 1);
          pcVar32[sVar14] = '\0';
          if (local_3a0 == (int *)0x0) {
            fread(pcVar32,1,sVar14,local_3a4);
          }
          else {
            (**(code **)(*local_3a0 + 0x84))();
          }
          local_40 = DAT_113a41f8;
          local_3e = DAT_113a41fa;
          pcVar15 = strtok(pcVar32,(char *)&local_40);
          if (pcVar15 != (char *)0x0) {
            puVar8 = &DAT_114221f0;
            do {
              if (0x11422813 < (int)puVar8) break;
              if (pcVar15 == (char *)0x0) {
                iVar5 = 0;
              }
              else {
                pcVar21 = pcVar15;
                do {
                  cVar4 = *pcVar21;
                  pcVar21 = pcVar21 + 1;
                } while (cVar4 != '\0');
                iVar5 = (int)pcVar21 - (int)(pcVar15 + 1);
              }
              FUN_1045e500(pcVar15,iVar5);
              FUN_108b1330(puVar8);
              pcVar15 = strtok((char *)0x0,(char *)&local_40);
              puVar8 = puVar8 + 0x83;
            } while (pcVar15 != (char *)0x0);
          }
          FUN_10654220(pcVar32);
        }
        FUN_1045ccc0(param_2);
        FUN_108b1330(local_8c0);
        ppuVar27 = &DAT_11422610;
        pbVar17 = local_8b8;
        do {
          pbVar23 = *ppuVar27;
          pbVar22 = &DAT_1139eb9e;
          pbVar16 = pbVar23;
          do {
            bVar3 = *pbVar16;
            bVar30 = bVar3 < *pbVar22;
            if (bVar3 != *pbVar22) {
LAB_108a6a30:
              uVar26 = -(uint)bVar30 | 1;
              goto LAB_108a6a35;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar16[1];
            bVar30 = bVar3 < pbVar22[1];
            if (bVar3 != pbVar22[1]) goto LAB_108a6a30;
            pbVar16 = pbVar16 + 2;
            pbVar22 = pbVar22 + 2;
          } while (bVar3 != 0);
          uVar26 = 0;
LAB_108a6a35:
          pbVar16 = pbVar23;
          pbVar22 = pbVar17;
          if (uVar26 != 0) {
            do {
              bVar3 = *pbVar16;
              bVar30 = bVar3 < *pbVar22;
              if (bVar3 != *pbVar22) {
LAB_108a6a60:
                uVar26 = -(uint)bVar30 | 1;
                goto LAB_108a6a65;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar16[1];
              bVar30 = bVar3 < pbVar22[1];
              if (bVar3 != pbVar22[1]) goto LAB_108a6a60;
              pbVar16 = pbVar16 + 2;
              pbVar22 = pbVar22 + 2;
            } while (bVar3 != 0);
            uVar26 = 0;
LAB_108a6a65:
            if (uVar26 != 0) {
              FUN_108a8d00(pbVar23);
              pbVar17 = local_8b8;
            }
          }
          ppuVar27 = ppuVar27 + -0x83;
        } while (0x114221f7 < (int)ppuVar27);
        if (pbVar17 != local_8b4) {
          DAT_113f2760 = DAT_113f2760 + (-1 - local_8bc);
          FUN_106540f0(pbVar17);
        }
        if (local_3a4 != (FILE *)0x0) {
          if (local_3a0 == (int *)0x0) {
            fclose(local_3a4);
          }
          else {
            (**(code **)(*local_3a0 + 0xc4))();
          }
          local_3a4 = (FILE *)0x0;
          strcpy_s(local_4a8,0x104,"");
        }
      }
      FUN_1045e500(DAT_11422404,DAT_114223fc);
      FUN_1045e500(DAT_11422610,DAT_11422608);
      if (param_2 == (char *)0x0) {
        iVar5 = 0;
      }
      else {
        pcVar32 = param_2;
        do {
          cVar4 = *pcVar32;
          pcVar32 = pcVar32 + 1;
        } while (cVar4 != '\0');
        iVar5 = (int)pcVar32 - (int)(param_2 + 1);
      }
      FUN_1045e500(param_2,iVar5);
      FUN_108b1330(&DAT_11422608);
      local_200 = (FILE *)0x0;
      if (DAT_113f3a18 == (undefined4 *)0x0) {
        local_1fc = (int *)0x0;
      }
      else {
        local_1fc = (int *)DAT_113f3a18[0x16];
      }
      cVar4 = FUN_108b0e70("%user%/testrec.txt",&DAT_113a3778,0);
      if (cVar4 != '\0') {
        ppuVar27 = &DAT_114221f8;
        do {
          pbVar23 = &DAT_1139eb9e;
          pbVar17 = *ppuVar27;
          do {
            bVar3 = *pbVar17;
            bVar30 = bVar3 < *pbVar23;
            if (bVar3 != *pbVar23) {
LAB_108a6be0:
              uVar26 = -(uint)bVar30 | 1;
              goto LAB_108a6be5;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar17[1];
            bVar30 = bVar3 < pbVar23[1];
            if (bVar3 != pbVar23[1]) goto LAB_108a6be0;
            pbVar17 = pbVar17 + 2;
            pbVar23 = pbVar23 + 2;
          } while (bVar3 != 0);
          uVar26 = 0;
LAB_108a6be5:
          if (uVar26 != 0) {
            if (local_1fc == (int *)0x0) {
              fwrite(*ppuVar27,1,(size_t)ppuVar27[-2],local_200);
            }
            else {
              (**(code **)(*local_1fc + 0x90))();
            }
            if (local_1fc == (int *)0x0) {
              fwrite(&DAT_113a41f8,1,2,local_200);
            }
            else {
              (**(code **)(*local_1fc + 0x90))();
            }
          }
          ppuVar27 = ppuVar27 + 0x83;
        } while ((int)ppuVar27 < 0x1142281c);
      }
      if (local_200 != (FILE *)0x0) {
        if (local_1fc == (int *)0x0) {
          fclose(local_200);
        }
        else {
          (**(code **)(*local_1fc + 0xc4))();
        }
        local_200 = (FILE *)0x0;
        strcpy_s(local_304,0x104,"");
      }
    }
    DAT_113cf304 = '\0';
  }
  if (((DAT_113f3a18[0x14] != 0) && ((int *)DAT_113f3a18[0x34] != (int *)0x0)) &&
     (iVar5 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 200))(), iVar5 != 0)) {
    iVar5 = (**(code **)(*(int *)DAT_113f3a18[0x34] + 200))();
    piVar25 = *(int **)(iVar5 + 0x14);
    piVar7 = (int *)(**(code **)(*(int *)DAT_113f3a18[0x14] + 0x48))();
    if ((piVar25 != (int *)0x0) && (piVar7 != (int *)0x0)) {
      (**(code **)(*piVar7 + 0x18))();
      piVar13 = (int *)(**(code **)(*piVar7 + 0x10))();
      while (piVar13 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar13 + 0xc))();
        if (iVar5 != 0) {
          piVar18 = (int *)(**(code **)(*piVar13 + 0xc))();
          pcVar32 = "LedgeBox";
          pbVar17 = (byte *)(**(code **)(*piVar18 + 8))();
          do {
            bVar3 = *pbVar17;
            bVar30 = bVar3 < (byte)*pcVar32;
            if (bVar3 != *pcVar32) {
LAB_108a6d52:
              uVar26 = -(uint)bVar30 | 1;
              goto LAB_108a6d57;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar17[1];
            bVar30 = bVar3 < (byte)pcVar32[1];
            if (bVar3 != pcVar32[1]) goto LAB_108a6d52;
            pbVar17 = pbVar17 + 2;
            pcVar32 = pcVar32 + 2;
          } while (bVar3 != 0);
          uVar26 = 0;
LAB_108a6d57:
          if (uVar26 == 0) {
            iVar5 = *piVar25;
            uVar6 = (**(code **)(*piVar13 + 4))();
            (**(code **)(iVar5 + 0x14))(uVar6);
          }
        }
        piVar13 = (int *)(**(code **)(*piVar7 + 0x10))();
      }
    }
  }
  (**(code **)(*(int *)DAT_113f3a18[0xd] + 0x38))(0);
  return local_14[7];
}

