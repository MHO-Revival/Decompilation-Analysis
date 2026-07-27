
/* [RE-R1]
   strings:
     ""ACTIVITY_ID""
     ""ACTIVITY_NAME""
     ""ACTIVITY_NOTE""
     ""ACTIVITY_TYPE""
     ""ACTIVITY_TIME""
     ""ACTIVITY_RULE""
     ""ACTIVITY_ICON""
     ""ACTIVITY_BUBBLE""
     ""ACTIVITY_BUBBLEINTERVAL""
     ""ACTIVITY_SERIAL"" */

void __fastcall CActivityDef__LoadFromDataNode(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  undefined1 local_dd4 [4];
  undefined1 auStack_dd0 [3];
  undefined2 local_dcd;
  undefined1 local_dcb;
  undefined1 local_dca;
  char local_dc9;
  undefined1 local_dc8 [3];
  undefined1 local_dc5;
  undefined1 local_dc4;
  byte bStack_dc3;
  undefined4 uStack_dc2;
  int *piStack_dbe;
  undefined1 auStack_dba [9];
  char local_db1;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined1 local_dab [2];
  undefined1 local_da9 [15];
  undefined1 local_d9a [2];
  undefined1 local_d98 [71];
  undefined1 local_d51 [13];
  undefined1 local_d44 [3];
  undefined1 local_d41 [17];
  undefined1 local_d30 [24];
  undefined1 auStack_d18 [71];
  undefined1 local_cd1 [13];
  undefined4 local_cc4;
  undefined1 local_cbd [4];
  undefined1 local_cb9 [4];
  undefined1 local_cb5 [29];
  undefined1 auStack_c98 [128];
  byte local_c18;
  undefined4 auStack_c17 [39];
  undefined1 local_b78 [456];
  undefined4 local_9b0 [2];
  char *local_9a8;
  undefined4 local_9a0 [2];
  char *local_998;
  undefined4 local_990 [2];
  char *local_988;
  undefined4 local_980 [2];
  undefined1 *local_978;
  undefined4 local_970 [2];
  char *local_968;
  undefined4 auStack_960 [2];
  char *pcStack_958;
  undefined4 local_950 [2];
  char *local_948;
  undefined4 auStack_940 [2];
  char *pcStack_938;
  int aiStack_930 [2];
  undefined4 auStack_928 [2];
  char *pcStack_920;
  undefined4 local_918 [2];
  char *local_910;
  undefined4 auStack_908 [2];
  char *pcStack_900;
  undefined4 local_8f8 [2];
  char *local_8f0;
  undefined4 auStack_8e8 [2];
  char *pcStack_8e0;
  undefined4 local_8d8 [2];
  char *local_8d0;
  undefined4 auStack_8c8 [2];
  char *pcStack_8c0;
  undefined4 local_8b8 [2];
  char *local_8b0;
  undefined4 auStack_8a8 [2];
  char *pcStack_8a0;
  undefined4 local_898 [2];
  char *local_890;
  undefined4 auStack_888 [2];
  char *pcStack_880;
  undefined4 local_878 [2];
  char *local_870;
  undefined4 auStack_868 [2];
  char *pcStack_860;
  undefined4 local_858 [2];
  char *local_850;
  undefined4 auStack_848 [2];
  char *pcStack_840;
  undefined4 local_838 [2];
  undefined1 *local_830;
  undefined4 auStack_828 [2];
  char *pcStack_820;
  undefined4 local_818 [2];
  char *local_810;
  undefined4 auStack_808 [2];
  char *pcStack_800;
  undefined4 local_7f8 [2];
  char *local_7f0;
  undefined4 auStack_7e8 [2];
  char *pcStack_7e0;
  undefined4 local_7d8 [2];
  undefined *local_7d0;
  undefined4 auStack_7c8 [2];
  char *pcStack_7c0;
  undefined4 local_7b8 [2];
  char *local_7b0;
  undefined4 auStack_7a8 [2];
  char *pcStack_7a0;
  undefined4 local_798 [2];
  char *local_790;
  undefined4 auStack_788 [2];
  char *pcStack_780;
  undefined4 local_778 [2];
  char *local_770;
  undefined4 auStack_768 [2];
  char *pcStack_760;
  undefined4 local_758 [2];
  char *local_750;
  undefined4 auStack_748 [2];
  char *pcStack_740;
  undefined4 local_738 [2];
  char *local_730;
  undefined4 auStack_728 [2];
  char *pcStack_720;
  undefined4 local_718 [2];
  char *local_710;
  undefined4 auStack_708 [2];
  char *pcStack_700;
  undefined4 local_6f8 [2];
  char *local_6f0;
  undefined4 auStack_6e8 [2];
  char *pcStack_6e0;
  undefined4 local_6d8 [2];
  char *local_6d0;
  undefined4 auStack_6c8 [2];
  char *pcStack_6c0;
  undefined4 local_6b8 [2];
  char *local_6b0;
  undefined4 auStack_6a8 [2];
  char *pcStack_6a0;
  undefined4 local_698 [2];
  char *local_690;
  undefined4 auStack_688 [2];
  char *pcStack_680;
  undefined4 local_678 [2];
  char *local_670;
  undefined4 auStack_668 [2];
  char *pcStack_660;
  undefined4 local_658 [2];
  char *local_650;
  undefined4 auStack_648 [2];
  char *pcStack_640;
  undefined4 local_638 [2];
  char *local_630;
  undefined4 auStack_628 [2];
  char *pcStack_620;
  undefined4 local_618 [2];
  char *local_610;
  undefined4 auStack_608 [2];
  char *pcStack_600;
  undefined4 local_5f8 [2];
  char *local_5f0;
  undefined4 auStack_5e8 [2];
  char *pcStack_5e0;
  undefined4 local_5d8 [2];
  char *local_5d0;
  undefined4 auStack_5c8 [2];
  char *pcStack_5c0;
  undefined4 local_5b8 [2];
  undefined *local_5b0;
  undefined4 auStack_5a8 [2];
  char *pcStack_5a0;
  undefined4 local_598 [2];
  char *local_590;
  undefined4 auStack_588 [2];
  char *pcStack_580;
  undefined4 local_578 [2];
  char *local_570;
  undefined4 auStack_568 [2];
  char *pcStack_560;
  undefined4 local_558 [2];
  char *local_550;
  undefined4 auStack_548 [2];
  char *pcStack_540;
  undefined4 local_538 [2];
  char *local_530;
  undefined4 auStack_528 [2];
  char *pcStack_520;
  undefined4 local_518 [2];
  char *local_510;
  undefined4 auStack_508 [2];
  char *pcStack_500;
  undefined4 local_4f8 [2];
  char *local_4f0;
  undefined4 auStack_4e8 [2];
  char *pcStack_4e0;
  undefined4 local_4d8 [2];
  char *local_4d0;
  undefined4 auStack_4c8 [2];
  char *pcStack_4c0;
  undefined4 local_4b8 [2];
  char *local_4b0;
  undefined4 auStack_4a8 [2];
  char *pcStack_4a0;
  undefined4 local_498 [2];
  char *local_490;
  undefined4 auStack_488 [2];
  char *pcStack_480;
  undefined4 local_478 [2];
  char *local_470;
  undefined4 auStack_468 [2];
  char *pcStack_460;
  undefined4 local_458 [2];
  char *local_450;
  undefined4 local_448 [2];
  char *local_440;
  undefined4 local_438 [2];
  char *local_430;
  undefined4 local_428 [2];
  char *local_420;
  undefined4 local_418 [2];
  char *local_410;
  undefined4 local_408 [2];
  char *local_400;
  undefined4 local_3f8 [2];
  undefined *local_3f0;
  undefined4 local_3e8 [2];
  char *local_3e0;
  undefined4 local_3d8 [2];
  char *local_3d0;
  undefined4 local_3c8 [2];
  char *local_3c0;
  undefined4 local_3b8 [2];
  char *local_3b0;
  undefined4 local_3a8 [2];
  char *local_3a0;
  undefined4 local_398 [2];
  char *local_390;
  undefined4 local_388 [2];
  char *local_380;
  undefined4 local_378 [2];
  char *local_370;
  undefined4 local_368 [2];
  char *local_360;
  undefined4 local_358 [2];
  undefined1 *local_350;
  undefined4 local_348 [2];
  char *local_340;
  undefined4 local_338 [2];
  char *local_330;
  undefined4 local_328 [2];
  char *local_320;
  undefined4 local_318 [2];
  char *local_310;
  undefined4 local_308 [2];
  char *local_300;
  undefined4 local_2f8 [2];
  char *local_2f0;
  undefined4 local_2e8 [2];
  char *local_2e0;
  undefined4 local_2d8 [2];
  char *local_2d0;
  undefined4 local_2c8 [2];
  int *local_2c0;
  undefined4 local_2bc;
  int local_2b8 [2];
  int *local_2b0;
  undefined4 local_2ac;
  int local_2a8 [4];
  int local_298;
  int local_294;
  int local_290 [2];
  undefined *local_288;
  int local_280 [2];
  undefined *local_278;
  undefined8 local_270;
  int local_268;
  int local_264;
  int local_260;
  ulonglong local_25c;
  int *local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  uint local_244;
  int local_240;
  int local_23c [2];
  int *local_234;
  undefined4 local_230;
  int local_22c;
  int local_228;
  int local_224 [2];
  int *local_21c;
  undefined4 local_218;
  undefined4 local_214 [2];
  int *local_20c;
  undefined4 local_208;
  int *local_204;
  int local_200;
  int local_1fc [2];
  int *local_1f4;
  undefined4 local_1f0;
  int local_1ec;
  int *local_1e8;
  int local_1e4 [2];
  char *local_1dc;
  int *local_1d4;
  int *local_1d0;
  int *local_1cc;
  int local_1c8 [2];
  int *local_1c0;
  undefined4 local_1bc;
  int *local_1b8;
  int *local_1b4;
  char local_1ad;
  undefined4 local_1ac;
  undefined1 local_12b [55];
  undefined4 local_f4 [31];
  char local_77 [33];
  char local_56 [36];
  undefined1 local_32;
  undefined1 local_31 [4];
  undefined1 local_2d [5];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_244 = 0;
  local_1b4 = param_1;
  (**(code **)(*param_1 + 8))();
  iVar7 = FUN_1145b350();
  if (iVar7 == 0) goto LAB_1160b0b2;
  local_1c0 = DAT_11d9b548;
  local_1bc = DAT_11d9b54c;
  local_1c8[0] = 0;
  cVar6 = (**(code **)(*(int *)param_1[2] + 0x18))("ACTIVITY_ID",local_1c8);
  if (cVar6 == '\0') {
    FUN_10a2eb80();
  }
  else {
    cVar6 = FUN_1158d840(param_1 + 8);
    FUN_10a2eb80();
    piVar12 = local_1b4;
    param_1 = local_1b4;
    if (cVar6 != '\0') {
      FUN_11607a40("ACTIVITY_NAME",local_1b4[0x14] + 0xd);
      FUN_11607a40("ACTIVITY_NOTE",piVar12[0x14] + 0x2d);
      puVar3 = (undefined1 *)piVar12[0x14];
      local_1c8[0] = 0;
      *puVar3 = 0;
      local_1c0 = DAT_11d9b548;
      local_1bc = DAT_11d9b54c;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("ACTIVITY_TYPE",local_1c8);
      if (cVar6 != '\0') {
        FUN_11607cd0(puVar3);
      }
      FUN_10a2eb80();
      FUN_116079c0("ACTIVITY_TIME",piVar12[0x14] + 0x4d);
      FUN_11607ac0("ACTIVITY_RULE",piVar12[0x14] + 0x14d);
      FUN_116079c0("ACTIVITY_ICON",piVar12[0x14] + 0x94d);
      FUN_11607b40("ACTIVITY_BUBBLE",piVar12[0x14] + 0xa4d);
      iVar7 = piVar12[0x14];
      local_1c8[0] = 0;
      *(undefined4 *)(iVar7 + 0xacd) = 0;
      local_1c0 = DAT_11d9b548;
      local_1bc = DAT_11d9b54c;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("ACTIVITY_BUBBLEINTERVAL",local_1c8);
      if (cVar6 != '\0') {
        FUN_10a2f6d0((undefined4 *)(iVar7 + 0xacd));
      }
      FUN_10a2eb80();
      iVar7 = piVar12[0x14];
      local_1c8[0] = 0;
      *(undefined1 *)(iVar7 + 0xad1) = 0;
      local_1c0 = DAT_11d9b548;
      local_1bc = DAT_11d9b54c;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("ACTIVITY_SERIAL",local_1c8);
      if (cVar6 != '\0') {
        FUN_11607d70((undefined1 *)(iVar7 + 0xad1));
      }
      FUN_10a2eb80();
      FUN_11607ac0("ACTIVITY_URL",piVar12[0x14] + 0x54d);
      puVar1 = (uint *)(piVar12 + 0xe);
      local_234 = DAT_11d9b548;
      local_230 = DAT_11d9b54c;
      local_23c[0] = 0;
      *puVar1 = 0xffffffff;
      piVar12[0xf] = -1;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("START_DATE",local_23c);
      if ((cVar6 != '\0') && (local_23c[0] != 0)) {
        FUN_10a2ebd0(puVar1);
      }
      puVar2 = (uint *)(piVar12 + 0x10);
      *(uint *)(piVar12[0x14] + 1) = *puVar1;
      *puVar2 = 0xffffffff;
      piVar12[0x11] = -1;
      cVar6 = (**(code **)(*(int *)piVar12[2] + 0x18))("STOP_DATE",local_23c);
      if ((cVar6 != '\0') && (local_23c[0] != 0)) {
        FUN_10a2ebd0(puVar2);
      }
      piVar9 = piVar12 + 0x12;
      *(uint *)(piVar12[0x14] + 5) = *puVar2;
      *piVar9 = -1;
      piVar12[0x13] = -1;
      cVar6 = (**(code **)(*(int *)local_1b4[2] + 0x18))("SHOW_DATE",local_23c);
      if ((cVar6 != '\0') && (local_23c[0] != 0)) {
        FUN_10a2ebd0(piVar9);
      }
      *(int *)(local_1b4[0x14] + 9) = *piVar9;
      uVar13 = piVar12[0xf];
      if ((*puVar1 & uVar13) != 0xffffffff) {
        uVar4 = piVar12[0x11];
        if ((((*puVar2 & uVar4) != 0xffffffff) && ((int)uVar4 <= (int)uVar13)) &&
           (((int)uVar4 < (int)uVar13 || (*puVar2 < *puVar1)))) {
          FUN_10a2eb80();
          param_1 = local_1b4;
          goto LAB_1160b0ab;
        }
      }
      FUN_10a2eb80();
      param_1 = local_1b4;
      piVar12 = (int *)0x0;
      local_1f4 = DAT_11d9b548;
      local_1f0 = DAT_11d9b54c;
      local_1e8 = (int *)0x0;
      local_1fc[0] = 0;
      cVar6 = (**(code **)(*(int *)local_1b4[2] + 0x18))("ACTIVITY_PERIOD",local_1fc);
      if (cVar6 == '\0') {
        FUN_10a2eb80();
      }
      else {
        if (local_1fc[0] == 0xc) {
          if (local_1f4 != (int *)0x0) {
            local_1f4[1] = local_1f4[1] + 1;
            local_1e8 = local_1f4;
            piVar12 = local_1f4;
          }
          local_1ad = '\x01';
        }
        else {
          local_1ad = '\0';
        }
        FUN_10a2eb80();
        if ((local_1ad != '\0') &&
           (cVar6 = (**(code **)(*piVar12 + 0x10))(&local_1ec,&local_200), cVar6 != '\0')) {
          local_1c0 = DAT_11d9b548;
          local_1bc = DAT_11d9b54c;
          local_1c8[0] = 0;
          if ((DAT_122e0084 & 1) == 0) {
            DAT_122e0084 = DAT_122e0084 | 1;
            DAT_122e0080 = 5;
          }
          if (local_1ec < local_200) {
            while (cVar6 = (**(code **)(*piVar12 + 0x14))(local_1ec,local_1c8), cVar6 != '\0') {
              if (local_1c8[0] == 0xc) {
                local_1cc = (int *)0x0;
                if (local_1c0 != (int *)0x0) {
                  local_1c0[1] = local_1c0[1] + 1;
                  local_1cc = local_1c0;
                }
                piVar9 = local_1cc;
                if ((int)(uint)*(byte *)(param_1[0x14] + 0x11393) < DAT_122e0080) {
                  FUN_103d5460();
                  local_1e4[0] = 0xb;
                  local_1dc = "Type";
                  cVar6 = FUN_11607600(local_1e4,&local_1ac);
                  FUN_10a2eb80();
                  if (cVar6 != '\0') {
                    local_280[0] = 0xb;
                    local_278 = &DAT_11d33d6c;
                    iVar7 = FUN_11607940(local_280,(int)&local_1ac + 1);
                    FUN_10a2eb80();
                    if (iVar7 != 0) {
                      local_290[0] = 0xb;
                      local_288 = &DAT_11dbb648;
                      iVar7 = FUN_116077c0(local_290,local_12b);
                      FUN_10a2eb80();
                      param_1 = local_1b4;
                      if (iVar7 != 0) {
                        puVar11 = &local_1ac;
                        puVar14 = (undefined4 *)
                                  (local_1b4[0x14] + 0x11394 +
                                  (uint)*(byte *)(local_1b4[0x14] + 0x11393) * 0x181);
                        for (iVar7 = 0x60; iVar7 != 0; iVar7 = iVar7 + -1) {
                          *puVar14 = *puVar11;
                          puVar11 = puVar11 + 1;
                          puVar14 = puVar14 + 1;
                        }
                        *(undefined1 *)puVar14 = *(undefined1 *)puVar11;
                        *(char *)(local_1b4[0x14] + 0x11393) =
                             *(char *)(local_1b4[0x14] + 0x11393) + '\x01';
                        FUN_10a2efb0();
                        piVar12 = local_1e8;
                        goto LAB_1160b649;
                      }
                    }
                    FUN_10a2efb0();
                    break;
                  }
                }
                if ((piVar9 != (int *)0x0) && (piVar9[1] = piVar9[1] + -1, piVar9[1] < 1)) {
                  (**(code **)*piVar9)(1);
                }
                break;
              }
LAB_1160b649:
              local_1ec = local_1ec + 1;
              if (local_200 <= local_1ec) break;
            }
          }
          FUN_10a2eb80();
          param_1 = local_1b4;
        }
        if ((piVar12 != (int *)0x0) && (piVar12[1] = piVar12[1] + -1, piVar12[1] < 1)) {
          (**(code **)*piVar12)(1);
        }
      }
      piVar12 = param_1 + 0xb;
      piVar9 = (int *)param_1[0xb];
      while (piVar9 != piVar12) {
        piVar5 = (int *)*piVar9;
        FUN_10c3d5d0(piVar9);
        piVar9 = piVar5;
      }
      *piVar12 = (int)piVar12;
      param_1[0xc] = (int)piVar12;
      piVar12 = (int *)0x0;
      local_1f4 = DAT_11d9b548;
      local_1f0 = DAT_11d9b54c;
      local_1fc[0] = 0;
      cVar6 = (**(code **)(*(int *)param_1[2] + 0x18))("ACTIVITY_PHASES",local_1fc);
      if (cVar6 == '\0') {
        FUN_10a2eb80();
      }
      else {
        if (local_1fc[0] == 0xc) {
          if (local_1f4 != (int *)0x0) {
            local_1f4[1] = local_1f4[1] + 1;
            piVar12 = local_1f4;
          }
          local_1ad = '\x01';
        }
        else {
          local_1ad = '\0';
        }
        FUN_10a2eb80();
        if (local_1ad == '\0') {
          if (piVar12 != (int *)0x0) goto LAB_1160b8ba;
        }
        else if (piVar12 != (int *)0x0) {
          local_20c = DAT_11d9b548;
          local_21c = DAT_11d9b548;
          local_208 = DAT_11d9b54c;
          local_218 = DAT_11d9b54c;
          local_214[0] = 0;
          local_224[0] = 0;
          cVar6 = (**(code **)(*piVar12 + 0x1c))(local_214,local_224);
          if (cVar6 != '\0') {
            local_254 = (int *)((uint)local_254 & 0xffffff00);
            local_25c = 0;
            cVar6 = FUN_11607d70(&local_254);
            if ((cVar6 != '\0') && (cVar6 = FUN_10a2ebd0(&local_270), cVar6 != '\0')) {
              local_25c = (ulonglong)(int)local_270;
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(0x18);
            }
            FUN_10a2eb80();
            FUN_10a2eb80();
            piVar12[1] = piVar12[1] + -1;
            if (piVar12[1] < 1) {
              (**(code **)*piVar12)(1);
            }
            goto LAB_1160b0ab;
          }
          FUN_10a2eb80();
          FUN_10a2eb80();
LAB_1160b8ba:
          piVar12[1] = piVar12[1] + -1;
          if (piVar12[1] < 1) {
            (**(code **)*piVar12)(1);
          }
        }
      }
      piVar12 = (int *)0x0;
      local_1f4 = DAT_11d9b548;
      local_1f0 = DAT_11d9b54c;
      local_1fc[0] = 0;
      cVar6 = (**(code **)(*(int *)param_1[2] + 0x18))("ACTIVITY_PARAMS",local_1fc);
      if (cVar6 == '\0') {
        FUN_10a2eb80();
        goto LAB_1160be38;
      }
      if (local_1fc[0] == 0xc) {
        if (local_1f4 != (int *)0x0) {
          local_1f4[1] = local_1f4[1] + 1;
          piVar12 = local_1f4;
        }
        local_1ad = '\x01';
      }
      else {
        local_1ad = '\0';
      }
      FUN_10a2eb80();
      if (local_1ad == '\0') {
LAB_1160be23:
        if (piVar12 == (int *)0x0) goto LAB_1160be38;
      }
      else {
        iVar7 = param_1[0x14];
        local_1c0 = DAT_11d9b548;
        local_1bc = DAT_11d9b54c;
        local_1e4[0] = 0xb;
        local_1dc = "iParam1";
        local_1c8[0] = 0;
        cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
        if (cVar6 == '\0') {
          FUN_10a2eb80();
          local_1ad = '\0';
        }
        else {
          local_1ad = FUN_10a2f6d0(iVar7 + 0x11b19);
          FUN_10a2eb80();
        }
        FUN_10a2eb80();
        if (local_1ad != '\0') {
          local_1c0 = DAT_11d9b548;
          local_1bc = DAT_11d9b54c;
          local_1e4[0] = 0xb;
          local_1dc = "iParam2";
          local_1c8[0] = 0;
          cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
          if (cVar6 == '\0') {
            FUN_10a2eb80();
            local_1ad = '\0';
          }
          else {
            local_1ad = FUN_10a2f6d0(iVar7 + 0x11b1d);
            FUN_10a2eb80();
          }
          FUN_10a2eb80();
          if (local_1ad != '\0') {
            local_1c0 = DAT_11d9b548;
            local_1bc = DAT_11d9b54c;
            local_1e4[0] = 0xb;
            local_1dc = "iParam3";
            local_1c8[0] = 0;
            cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
            if (cVar6 == '\0') {
              FUN_10a2eb80();
              local_1ad = '\0';
            }
            else {
              local_1ad = FUN_10a2f6d0(iVar7 + 0x11b21);
              FUN_10a2eb80();
            }
            FUN_10a2eb80();
            if (local_1ad != '\0') {
              local_1c0 = DAT_11d9b548;
              local_1bc = DAT_11d9b54c;
              local_1e4[0] = 0xb;
              local_1dc = "iParam4";
              local_1c8[0] = 0;
              cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
              if (cVar6 == '\0') {
                FUN_10a2eb80();
                local_1ad = '\0';
              }
              else {
                local_1ad = FUN_10a2f6d0(iVar7 + 0x11b25);
                FUN_10a2eb80();
              }
              FUN_10a2eb80();
              if (local_1ad != '\0') {
                local_1c0 = DAT_11d9b548;
                local_1bc = DAT_11d9b54c;
                local_1e4[0] = 0xb;
                local_1dc = "iParam5";
                local_1c8[0] = 0;
                cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
                if (cVar6 == '\0') {
                  FUN_10a2eb80();
                  local_1ad = '\0';
                }
                else {
                  local_1ad = FUN_10a2f6d0(iVar7 + 0x11b29);
                  FUN_10a2eb80();
                }
                FUN_10a2eb80();
                if (local_1ad != '\0') {
                  local_1c0 = DAT_11d9b548;
                  local_1bc = DAT_11d9b54c;
                  local_1e4[0] = 0xb;
                  local_1dc = "iParam6";
                  local_1c8[0] = 0;
                  cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
                  if (cVar6 == '\0') {
                    FUN_10a2eb80();
                    local_1ad = '\0';
                  }
                  else {
                    local_1ad = FUN_10a2f6d0(iVar7 + 0x11b2d);
                    FUN_10a2eb80();
                  }
                  FUN_10a2eb80();
                  if (local_1ad != '\0') {
                    local_1c0 = DAT_11d9b548;
                    local_1bc = DAT_11d9b54c;
                    local_1e4[0] = 0xb;
                    local_1dc = "szStr1";
                    local_1c8[0] = 0;
                    cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
                    if (cVar6 == '\0') {
                      FUN_10a2eb80();
                      local_1e8 = (int *)0x0;
                    }
                    else {
                      uVar8 = (**(code **)(*piVar12 + 4))(iVar7 + 0x11b31,0x80,0,0);
                      local_1e8 = (int *)FUN_10a2eb30(uVar8);
                      FUN_10a2eb80();
                    }
                    FUN_10a2eb80();
                    if (local_1e8 != (int *)0x0) {
                      local_1c0 = DAT_11d9b548;
                      local_1bc = DAT_11d9b54c;
                      local_1e4[0] = 0xb;
                      local_1dc = "szStr2";
                      local_1c8[0] = 0;
                      cVar6 = (**(code **)(*piVar12 + 0xc))(local_1e4,local_1c8);
                      if (cVar6 == '\0') {
                        FUN_10a2eb80();
                        iVar7 = 0;
                      }
                      else {
                        uVar8 = (**(code **)(*piVar12 + 4))(iVar7 + 0x11bb1,0x80,0,0);
                        iVar7 = FUN_10a2eb30(uVar8);
                        FUN_10a2eb80();
                      }
                      FUN_10a2eb80();
                      if (iVar7 != 0) goto LAB_1160be23;
                    }
                  }
                }
              }
            }
          }
        }
      }
      piVar12[1] = piVar12[1] + -1;
      if (piVar12[1] < 1) {
        (**(code **)*piVar12)(1);
      }
LAB_1160be38:
      piVar12 = (int *)0x0;
      local_2b0 = DAT_11d9b548;
      local_2ac = DAT_11d9b54c;
      local_1e8 = (int *)0x0;
      local_2b8[0] = 0;
      cVar6 = (**(code **)(*(int *)param_1[2] + 0x18))("ACTIVITY_DATA",local_2b8);
      if (cVar6 == '\0') {
        FUN_10a2eb80();
        param_1[9] = 1;
        FUN_11a89daa();
        return;
      }
      if (local_2b8[0] == 0xc) {
        if (local_2b0 != (int *)0x0) {
          local_2b0[1] = local_2b0[1] + 1;
          local_1e8 = local_2b0;
          piVar12 = local_2b0;
        }
        local_1ad = '\x01';
      }
      else {
        local_1ad = '\0';
      }
      FUN_10a2eb80();
      if ((local_1ad != '\0') &&
         (cVar6 = (**(code **)(*piVar12 + 0x10))(&local_1ec,&local_200), cVar6 != '\0')) {
        local_254 = DAT_11d9b548;
        local_250 = DAT_11d9b54c;
        local_25c = local_25c & 0xffffffff00000000;
        if ((DAT_122e0084 & 2) == 0) {
          DAT_122e0084 = DAT_122e0084 | 2;
          DAT_122e0088 = 0x40;
        }
        while( true ) {
          if ((local_200 <= local_1ec) ||
             (cVar6 = (**(code **)(*piVar12 + 0x14))(local_1ec,&local_25c), cVar6 == '\0'))
          goto LAB_1160e092;
          if ((int)local_25c != 0xc) goto LAB_1160d785;
          local_1b8 = (int *)0x0;
          if (local_254 != (int *)0x0) {
            local_254[1] = local_254[1] + 1;
            local_1b8 = local_254;
          }
          piVar9 = local_1b8;
          if (DAT_122e0088 <= (int)(uint)*(byte *)(param_1[0x14] + 0xad2)) break;
          FUN_103d5050();
          local_dd4[0] = (undefined1)local_1ec;
          local_2c0 = DAT_11d9b548;
          local_2bc = DAT_11d9b54c;
          local_dd4[2] = 1;
          local_980[0] = 0xb;
          local_978 = &DAT_11dbabc0;
          local_2c8[0] = 0;
          cVar6 = (**(code **)(*piVar9 + 0xc))(local_980,local_2c8);
          if (cVar6 == '\0') {
            FUN_10a2eb80();
            cVar6 = '\0';
          }
          else {
            cVar6 = FUN_11607d70(local_dd4 + 1);
            FUN_10a2eb80();
          }
          FUN_10a2eb80();
          if (cVar6 == '\0') goto LAB_1160e081;
          local_9a0[0] = 0xb;
          local_998 = "InitState";
          local_dd4[2] = FUN_11607750(local_9a0,1);
          FUN_10a2eb80();
          if (local_dd4[1] == '\0') {
            piVar9[1] = piVar9[1] + -1;
            param_1 = local_1b4;
            if (0 < piVar9[1]) goto LAB_1160d785;
            (**(code **)*piVar9)(1);
            local_1ec = local_1ec + 1;
            param_1 = local_1b4;
            piVar12 = local_1e8;
          }
          else {
            if (local_dd4[1] == '\x10') {
              local_2f8[0] = 0xb;
              local_2f0 = "szUrl";
              FUN_116078c0(local_2f8,local_dd4 + 3);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == ' ') {
              local_818[0] = 0xb;
              local_810 = "szLabel";
              FUN_11607840(local_818,local_dd4 + 3);
              FUN_10a2eb80();
              local_318[0] = 0xb;
              local_310 = "iCondParam1";
              FUN_10a2f4b0(local_318,&local_db1);
              FUN_10a2eb80();
              local_678[0] = 0xb;
              local_670 = "iCondParam2";
              FUN_10a2f4b0(local_678,(int)&local_db0 + 3);
              FUN_10a2eb80();
              local_338[0] = 0xb;
              local_330 = "szScript";
              FUN_11607840(local_338,local_da9);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'D') {
              local_8f8[0] = 0xb;
              local_8f0 = "szLabel";
              FUN_11607840(local_8f8,local_dd4 + 3);
              FUN_10a2eb80();
              piVar12 = &local_db0;
              local_db1 = '\0';
              uVar13 = 1;
              do {
                local_1cc = piVar12;
                FUN_100f6650(local_28,0x20,"%s%lu","iCondParam",uVar13);
                local_358[0] = 0xb;
                local_350 = local_28;
                cVar6 = FUN_10a2f4b0(local_358,piVar12);
                FUN_10a2eb80();
                if (cVar6 == '\0') break;
                uVar13 = uVar13 + 1;
                local_db1 = local_db1 + '\x01';
                piVar12 = local_1cc + 1;
                local_1cc = piVar12;
              } while (uVar13 < 0x21);
              local_698[0] = 0xb;
              local_690 = "szScript";
              FUN_11607840(local_698,local_d30);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'E') {
              local_378[0] = 0xb;
              local_370 = "szLabel";
              FUN_11607840(local_378,local_dd4 + 3);
              FUN_10a2eb80();
              piVar12 = &local_db0;
              local_db1 = '\0';
              uVar13 = 1;
              do {
                local_1cc = piVar12;
                FUN_100f6650(local_28,0x20,"%s%lu","iCondParam",uVar13);
                local_838[0] = 0xb;
                local_830 = local_28;
                cVar6 = FUN_10a2f4b0(local_838,piVar12);
                FUN_10a2eb80();
                if (cVar6 == '\0') break;
                uVar13 = uVar13 + 1;
                local_db1 = local_db1 + '\x01';
                piVar12 = local_1cc + 1;
                local_1cc = piVar12;
              } while (uVar13 < 0x21);
              local_398[0] = 0xb;
              local_390 = "szScript";
              FUN_11607840(local_398,local_d30);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'F') {
              FUN_103d3f30();
              local_6b8[0] = 0xb;
              local_6b0 = "iParam1";
              FUN_10a2f4b0(local_6b8,local_b78);
              FUN_10a2eb80();
              FUN_10a2de90();
              local_3b8[0] = 0xb;
              local_3b0 = "HuntTasks";
              cVar6 = (**(code **)(*piVar9 + 0xc))(local_3b8,local_2a8);
              FUN_10a2eb80();
              if ((cVar6 != '\0') && (local_2a8[0] == 0xc)) {
                local_1cc = (int *)0x0;
                cVar6 = FUN_11607540(&local_1cc);
                piVar12 = local_1cc;
                if (cVar6 != '\0') {
                  local_228 = 0;
                  local_240 = 0;
                  cVar6 = (**(code **)(*local_1cc + 0x10))(&local_228,&local_240);
                  if (cVar6 != '\0') {
                    FUN_10a2de90();
                    if ((DAT_122e0084 & 4) == 0) {
                      DAT_122e0084 = DAT_122e0084 | 4;
                      DAT_122e008c = 3;
                    }
                    if (local_228 < local_240) {
                      do {
                        cVar6 = (**(code **)(*piVar12 + 0x14))(local_228,local_290);
                        if (cVar6 == '\0') break;
                        if (local_290[0] == 0xc) {
                          local_1d4 = (int *)0x0;
                          cVar6 = FUN_11607540(&local_1d4);
                          if ((cVar6 != '\0') && ((int)(stack0xfffff22f & 0xff) < DAT_122e008c)) {
                            FUN_103d37f0();
                            piVar12 = local_1d4;
                            local_990[0] = 0xb;
                            local_988 = "HuntNum";
                            cVar6 = FUN_116076e0(local_990,local_31);
                            FUN_10a2eb80();
                            if (cVar6 != '\0') {
                              local_3d8[0] = 0xb;
                              local_3d0 = "CounterID";
                              cVar6 = FUN_11607600(local_3d8,local_2d);
                              FUN_10a2eb80();
                              if (cVar6 != '\0') {
                                FUN_10a2de90();
                                local_6d8[0] = 0xb;
                                local_6d0 = "NeedIntenseFighting";
                                cVar6 = (**(code **)(*piVar12 + 0xc))(local_6d8,local_214);
                                FUN_10a2eb80();
                                if (cVar6 != '\0') {
                                  local_32 = FUN_1160add0(0);
                                  local_3f8[0] = 0xb;
                                  local_3f0 = &DAT_11dbe644;
                                  iVar7 = FUN_11607940(local_3f8,local_f4);
                                  FUN_10a2eb80();
                                  if (iVar7 != 0) {
                                    FUN_10a2de90();
                                    local_858[0] = 0xb;
                                    local_850 = "LevelTitleTag";
                                    cVar6 = (**(code **)(*piVar12 + 0xc))(local_858,local_224);
                                    FUN_10a2eb80();
                                    if ((cVar6 != '\0') && (local_224[0] == 0xc)) {
                                      local_1d0 = (int *)0x0;
                                      cVar6 = FUN_11607540(&local_1d0);
                                      if ((cVar6 != '\0') &&
                                         (cVar6 = (**(code **)(*local_1d0 + 0x10))
                                                            (&local_294,&local_260), cVar6 != '\0'))
                                      {
                                        if ((local_294 < local_260) && (0 < local_294)) {
                                          pcVar10 = local_56 + local_294 * 4;
                                          iVar7 = local_294;
                                          do {
                                            piVar12 = local_1d4;
                                            if ((8 < iVar7) ||
                                               (cVar6 = FUN_10a2f530(iVar7,pcVar10),
                                               piVar12 = local_1d4, cVar6 == '\0')) break;
                                            local_56[3] = local_56[3] + '\x01';
                                            iVar7 = iVar7 + 1;
                                            pcVar10 = pcVar10 + 4;
                                          } while (iVar7 < local_260);
                                        }
                                        FUN_10a2de90();
                                        local_418[0] = 0xb;
                                        local_410 = "BossId";
                                        cVar6 = (**(code **)(*piVar12 + 0xc))(local_418,local_1fc);
                                        FUN_10a2eb80();
                                        if ((cVar6 != '\0') && (local_1fc[0] == 0xc)) {
                                          local_204 = (int *)0x0;
                                          cVar6 = FUN_11607540(&local_204);
                                          if ((cVar6 != '\0') &&
                                             (cVar6 = (**(code **)(*local_204 + 0x10))
                                                                (&local_298,&local_264),
                                             cVar6 != '\0')) {
                                            if ((local_298 < local_264) && (0 < local_298)) {
                                              pcVar10 = local_77 + local_298 * 4;
                                              iVar7 = local_298;
                                              do {
                                                if ((8 < iVar7) ||
                                                   (cVar6 = FUN_10a2f530(iVar7,pcVar10),
                                                   cVar6 == '\0')) break;
                                                local_77[3] = local_77[3] + '\x01';
                                                iVar7 = iVar7 + 1;
                                                pcVar10 = pcVar10 + 4;
                                              } while (iVar7 < local_264);
                                            }
                                            puVar11 = local_f4;
                                            puVar14 = (undefined4 *)
                                                      (auStack_dd0 + (stack0xfffff22f & 0xff) * 200)
                                            ;
                                            for (iVar7 = 0x32; iVar7 != 0; iVar7 = iVar7 + -1) {
                                              *puVar14 = *puVar11;
                                              puVar11 = puVar11 + 1;
                                              puVar14 = puVar14 + 1;
                                            }
                                            stack0xfffff22f =
                                                 CONCAT31(auStack_dd0,local_dd4[3] + '\x01');
                                            FUN_10a2efb0();
                                            FUN_10a2eb80();
                                            FUN_10a2efb0();
                                            FUN_10a2eb80();
                                            FUN_10a2eb80();
                                            FUN_10a2efb0();
                                            piVar12 = local_1cc;
                                            goto LAB_1160c921;
                                          }
                                          FUN_10a2efb0();
                                        }
                                        FUN_10a2eb80();
                                      }
                                      FUN_10a2efb0();
                                    }
                                    FUN_10a2eb80();
                                  }
                                }
                                FUN_10a2eb80();
                              }
                            }
                          }
                          FUN_10a2efb0();
                          break;
                        }
LAB_1160c921:
                        local_228 = local_228 + 1;
                      } while (local_228 < local_240);
                    }
                    FUN_10a2eb80();
                  }
                }
                FUN_10a2efb0();
              }
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '!') {
              local_6f8[0] = 0xb;
              local_6f0 = "szLabel";
              FUN_11607840(local_6f8,local_dd4 + 3);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '\"') {
              local_438[0] = 0xb;
              local_430 = "szLabel";
              FUN_11607840(local_438,local_dd4 + 3);
              FUN_10a2eb80();
              local_918[0] = 0xb;
              local_910 = "szUrl";
              FUN_116078c0(local_918,&local_db1);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '#') {
              local_458[0] = 0xb;
              local_450 = "szLabel";
              FUN_11607840(local_458,local_dd4 + 3);
              FUN_10a2eb80();
              local_718[0] = 0xb;
              local_710 = "szUrl";
              FUN_116078c0(local_718,&local_db1);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '$') {
              local_478[0] = 0xb;
              local_470 = "szLabel";
              FUN_11607840(local_478,local_dd4 + 3);
              FUN_10a2eb80();
              local_878[0] = 0xb;
              local_870 = "dwTaskID";
              FUN_116076e0(local_878,&local_db1);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '%') {
              local_498[0] = 0xb;
              local_490 = "szLabel";
              FUN_11607840(local_498,local_dd4 + 3);
              FUN_10a2eb80();
              local_738[0] = 0xb;
              local_730 = "dwLevelID";
              FUN_116076e0(local_738,&local_db1);
              FUN_10a2eb80();
              local_4b8[0] = 0xb;
              local_4b0 = "bEnterMode";
              FUN_11607600(local_4b8,(int)&local_db0 + 3);
              FUN_10a2eb80();
              local_970[0] = 0xb;
              local_968 = "bDataID";
              FUN_11607600(local_970,&local_dac);
              FUN_10a2eb80();
              local_4d8[0] = 0xb;
              local_4d0 = "szCondition";
              FUN_11607940(local_4d8,local_dab);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == '@') {
              local_758[0] = 0xb;
              local_750 = "iParam1";
              FUN_10a2f4b0(local_758,local_dd4 + 3);
              FUN_10a2eb80();
              local_4f8[0] = 0xb;
              local_4f0 = "iParam2";
              FUN_10a2f4b0(local_4f8,&local_dcd);
              FUN_10a2eb80();
              local_898[0] = 0xb;
              local_890 = "iParam3";
              FUN_10a2f4b0(local_898,&local_dc9);
              FUN_10a2eb80();
              local_518[0] = 0xb;
              local_510 = "iParam4";
              FUN_10a2f4b0(local_518,&local_dc5);
              FUN_10a2eb80();
              local_778[0] = 0xb;
              local_770 = "szParam5";
              FUN_11607940(local_778,(int)&uStack_dc2 + 1);
              FUN_10a2eb80();
              local_538[0] = 0xb;
              local_530 = "szParam6";
              FUN_11607940(local_538,local_d41);
              FUN_10a2eb80();
              local_2d8[0] = 0xb;
              local_2d0 = "iParam7";
              FUN_10a2f4b0(local_2d8,(int)&local_cc4 + 3);
              FUN_10a2eb80();
              local_558[0] = 0xb;
              local_550 = "iParam8";
              FUN_10a2f4b0(local_558,local_cbd);
              FUN_10a2eb80();
              local_798[0] = 0xb;
              local_790 = "iParam9";
              FUN_10a2f4b0(local_798,local_cb9);
              FUN_10a2eb80();
              local_578[0] = 0xb;
              local_570 = "szParam10";
              FUN_11607940(local_578,local_cb5);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'A') {
              local_8b8[0] = 0xb;
              local_8b0 = "szGroups";
              FUN_11607940(local_8b8,local_dd4 + 3);
              FUN_10a2eb80();
              local_598[0] = 0xb;
              local_590 = "szSubGroups";
              FUN_11607940(local_598,local_d51);
              FUN_10a2eb80();
              local_7b8[0] = 0xb;
              local_7b0 = "szLevels";
              FUN_116077c0(local_7b8,local_cd1);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'B') {
              local_5b8[0] = 0xb;
              local_5b0 = &DAT_11d33ef0;
              FUN_11607600(local_5b8,local_dd4 + 3);
              FUN_10a2eb80();
              local_9b0[0] = 0xb;
              local_9a8 = "szPages";
              FUN_116077c0(local_9b0,auStack_dd0);
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] == 'C') {
              FUN_103d2160();
              local_5d8[0] = 0xb;
              local_5d0 = "bControlType";
              FUN_11607600(local_5d8,local_dd4 + 3);
              FUN_10a2eb80();
              local_7d8[0] = 0xb;
              local_7d0 = &DAT_11dd3e38;
              FUN_10a2f4b0(local_7d8,auStack_dd0);
              FUN_10a2eb80();
              local_5f8[0] = 0xb;
              local_5f0 = "iDateType";
              FUN_10a2f4b0(local_5f8,(int)&local_dcd + 1);
              FUN_10a2eb80();
              local_8d8[0] = 0xb;
              local_8d0 = "iDateInterval";
              FUN_10a2f4b0(local_8d8,local_dc8);
              FUN_10a2eb80();
              local_618[0] = 0xb;
              local_610 = "szDateDays";
              FUN_11607940(local_618,&local_dc4);
              FUN_10a2eb80();
              local_7f8[0] = 0xb;
              local_7f0 = "szDateTime";
              FUN_11607940(local_7f8,local_d44);
              FUN_10a2eb80();
              FUN_10a2de90();
              uVar13 = local_244;
              local_638[0] = 0xb;
              local_270 = 0;
              local_244 = local_244 | 1;
              local_630 = "begin_date";
              cVar6 = (**(code **)(*piVar9 + 0xc))(local_638,local_280);
              if ((cVar6 != '\0') && (local_280[0] != 0)) {
                FUN_10a2ebd0(&local_270);
              }
              local_244 = uVar13 & 0xfffffffe;
              FUN_10a2eb80();
              local_cc4 = (int)local_270;
              goto LAB_1160c0f9;
            }
            if (local_dd4[1] != '0') goto LAB_1160d774;
            FUN_103d2ca0();
            local_950[0] = 0xb;
            local_948 = "dwItemID";
            FUN_116076e0(local_950,local_dd4 + 3);
            FUN_10a2eb80();
            local_658[0] = 0xb;
            local_650 = "nItemCount";
            FUN_11607670(local_658,&local_dcd);
            FUN_10a2eb80();
            local_2e8[0] = 0xb;
            local_2e0 = "bBindType";
            FUN_11607600(local_2e8,&local_dcb);
            FUN_10a2eb80();
            local_308[0] = 0xb;
            local_300 = "bOpenType";
            FUN_11607600(local_308,&local_dca);
            FUN_10a2eb80();
            local_328[0] = 0xb;
            local_320 = "chColumn";
            FUN_11607590(local_328,&local_dc9);
            FUN_10a2eb80();
            local_348[0] = 0xb;
            local_340 = "dwFlags";
            FUN_116076e0(local_348,local_dc8);
            FUN_10a2eb80();
            local_368[0] = 0xb;
            local_360 = "bCondType";
            FUN_11607600(local_368,&local_dc4);
            FUN_10a2eb80();
            local_388[0] = 0xb;
            local_380 = "nGetCountMax";
            FUN_11607670(local_388,local_d9a);
            FUN_10a2eb80();
            local_3a8[0] = 0xb;
            local_3a0 = "szDesc";
            FUN_11607940(local_3a8,local_d98);
            FUN_10a2eb80();
            FUN_10a2de90();
            local_3c8[0] = 0xb;
            local_3c0 = "ItemRewards";
            cVar6 = (**(code **)(*piVar9 + 0xc))(local_3c8,local_1c8);
            FUN_10a2eb80();
            if ((cVar6 != '\0') && (local_1c8[0] == 0xc)) {
              local_1cc = (int *)0x0;
              cVar6 = FUN_11607540(&local_1cc);
              piVar12 = local_1cc;
              if ((cVar6 != '\0') &&
                 (cVar6 = (**(code **)(*local_1cc + 0x10))(&local_22c,&local_268), cVar6 != '\0')) {
                FUN_10a2de90();
                if ((DAT_122e0084 & 8) == 0) {
                  DAT_122e0084 = DAT_122e0084 | 8;
                  DAT_122e0090 = 10;
                }
                if (local_22c < local_268) {
                  do {
                    cVar6 = (**(code **)(*piVar12 + 0x14))(local_22c,local_1e4);
                    if (cVar6 == '\0') break;
                    if (local_1e4[0] == 0xc) {
                      local_1d0 = (int *)0x0;
                      cVar6 = FUN_11607540(&local_1d0);
                      if ((cVar6 != '\0') && ((int)(uint)local_c18 < DAT_122e0090)) {
                        FUN_103d2940();
                        local_3e8[0] = 0xb;
                        local_3e0 = "dwItemID";
                        cVar6 = FUN_116076e0(local_3e8,&local_24c);
                        FUN_10a2eb80();
                        if (cVar6 != '\0') {
                          local_408[0] = 0xb;
                          local_400 = "nItemCount";
                          cVar6 = FUN_11607670(local_408,&local_248);
                          FUN_10a2eb80();
                          if (cVar6 != '\0') {
                            local_428[0] = 0xb;
                            local_420 = "bBindType";
                            cVar6 = FUN_11607600(local_428,(int)&local_248 + 2);
                            FUN_10a2eb80();
                            if (cVar6 != '\0') {
                              local_448[0] = 0xb;
                              local_440 = "chColumn";
                              cVar6 = FUN_11607590(local_448,(int)&local_248 + 3);
                              FUN_10a2eb80();
                              if (cVar6 != '\0') {
                                auStack_c17[(uint)local_c18 * 2] = local_24c;
                                auStack_c17[(uint)local_c18 * 2 + 1] = local_248;
                                local_c18 = local_c18 + 1;
                                FUN_10a2efb0();
                                piVar12 = local_1cc;
                                goto LAB_1160d59a;
                              }
                            }
                          }
                        }
                      }
                      FUN_10a2efb0();
                      break;
                    }
LAB_1160d59a:
                    local_22c = local_22c + 1;
                  } while (local_22c < local_268);
                }
                FUN_10a2eb80();
              }
              FUN_10a2efb0();
            }
            FUN_10a2eb80();
            if ((stack0xfffff22f != 0) &&
               ((iVar7 = FUN_10254130(stack0xfffff22f), iVar7 == 0 ||
                ((((local_dc9 == '\0' && (*(int *)(iVar7 + 0x50) != 0)) &&
                  (*(int *)(iVar7 + 0x50) < (int)local_dcd)) ||
                 ((*(int *)(iVar7 + 0x48) != 0 && (*(int *)(iVar7 + 0x48) < (int)local_dcd))))))))
            goto LAB_1160d774;
            iVar7 = 0;
            if (local_c18 != 0) {
              do {
                FUN_10254130(auStack_c17[iVar7 * 2]);
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)(uint)local_c18);
            }
            switch(local_dc4) {
            case 1:
              auStack_4a8[0] = 0xb;
              pcStack_4a0 = "iCondParam1";
              FUN_10a2f4b0(auStack_4a8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_4c8[0] = 0xb;
              pcStack_4c0 = "iCondParam2";
              FUN_10a2f4b0(auStack_4c8,&piStack_dbe);
              FUN_10a2eb80();
              iVar7 = FUN_10254130(uStack_dc2);
              goto joined_r0x1160dce7;
            case 2:
              auStack_4e8[0] = 0xb;
              pcStack_4e0 = "iCondParam1";
              cVar6 = FUN_1160ace0(auStack_4e8,aiStack_930);
              FUN_10a2eb80();
              auStack_508[0] = 0xb;
              if (cVar6 != '\0') {
                uStack_dc2 = aiStack_930[0];
              }
              pcStack_500 = "iCondParam2";
              cVar6 = FUN_1160ace0(auStack_508,&local_234);
              FUN_10a2eb80();
              if (cVar6 != '\0') {
                piStack_dbe = local_234;
              }
              goto LAB_1160c0fe;
            case 3:
              auStack_528[0] = 0xb;
              pcStack_520 = "iCondParam1";
              FUN_10a2f4b0(auStack_528,&uStack_dc2);
              FUN_10a2eb80();
              auStack_548[0] = 0xb;
              pcStack_540 = "iCondParam2";
              FUN_10a2f4b0(auStack_548,&piStack_dbe);
              FUN_10a2eb80();
              if (((0 < uStack_dc2) && (-1 < (int)piStack_dbe)) && ((int)piStack_dbe < 4))
              goto LAB_1160c0fe;
              goto LAB_1160d774;
            case 4:
              auStack_568[0] = 0xb;
              pcStack_560 = "iCondParam1";
              FUN_10a2f4b0(auStack_568,&uStack_dc2);
              FUN_10a2eb80();
              auStack_588[0] = 0xb;
              pcStack_580 = "iCondParam2";
              FUN_10a2f4b0(auStack_588,&piStack_dbe);
              FUN_10a2eb80();
              if ((uStack_dc2 < 0) || ((int)piStack_dbe < 0)) goto LAB_1160d774;
              bVar16 = SBORROW4(uStack_dc2,(int)piStack_dbe);
              iVar7 = uStack_dc2 - (int)piStack_dbe;
              bVar15 = iVar7 == 0;
              goto LAB_1160d76e;
            case 5:
              auStack_668[0] = 0xb;
              pcStack_660 = "bCondId";
              FUN_11607600(auStack_668,&bStack_dc3);
              FUN_10a2eb80();
              auStack_688[0] = 0xb;
              pcStack_680 = "iCondParam1";
              FUN_10a2f4b0(auStack_688,&uStack_dc2);
              FUN_10a2eb80();
              auStack_6a8[0] = 0xb;
              pcStack_6a0 = "iCondParam2";
              FUN_10a2f4b0(auStack_6a8,&piStack_dbe);
              FUN_10a2eb80();
              if ((0 < (int)piStack_dbe) && (local_200 <= (int)(uint)bStack_dc3)) goto LAB_1160c0fe;
              goto LAB_1160d774;
            case 6:
              auStack_728[0] = 0xb;
              pcStack_720 = "bCondId";
              FUN_11607600(auStack_728,&bStack_dc3);
              FUN_10a2eb80();
              auStack_748[0] = 0xb;
              pcStack_740 = "iCondParam1";
              FUN_10a2f4b0(auStack_748,&uStack_dc2);
              FUN_10a2eb80();
              auStack_768[0] = 0xb;
              pcStack_760 = "iCondParam2";
              FUN_10a2f4b0(auStack_768,&piStack_dbe);
              FUN_10a2eb80();
              iVar7 = FUN_10254130(uStack_dc2);
joined_r0x1160dce7:
              if ((iVar7 != 0) && (0 < (int)piStack_dbe)) {
                piVar12 = *(int **)(iVar7 + 0x48);
                if (piVar12 != (int *)0x0) {
                  bVar16 = SBORROW4((int)piStack_dbe,(int)piVar12);
                  iVar7 = (int)piStack_dbe - (int)piVar12;
                  bVar15 = piStack_dbe == piVar12;
LAB_1160d76e:
                  if (!bVar15 && bVar16 == iVar7 < 0) goto LAB_1160d774;
                }
                goto LAB_1160c0fe;
              }
              goto LAB_1160d774;
            case 7:
              auStack_788[0] = 0xb;
              pcStack_780 = "szCondParam";
              FUN_11607840(auStack_788,auStack_dba);
              break;
            case 8:
              auStack_7e8[0] = 0xb;
              pcStack_7e0 = "bCondId";
              FUN_11607600(auStack_7e8,&bStack_dc3);
              FUN_10a2eb80();
              auStack_808[0] = 0xb;
              pcStack_800 = "iCondParam1";
              FUN_10a2f4b0(auStack_808,&uStack_dc2);
              FUN_10a2eb80();
              auStack_828[0] = 0xb;
              pcStack_820 = "iCondParam2";
              FUN_10a2f4b0(auStack_828,&piStack_dbe);
              break;
            case 9:
              auStack_848[0] = 0xb;
              pcStack_840 = "iCondParam1";
              FUN_10a2f4b0(auStack_848,&uStack_dc2);
              FUN_10a2eb80();
              auStack_868[0] = 0xb;
              pcStack_860 = "iCondParam2";
              FUN_10a2f4b0(auStack_868,&piStack_dbe);
              FUN_10a2eb80();
              iVar7 = FUN_114dc750(uStack_dc2);
              if (iVar7 != 0) {
LAB_1160dc27:
                if (0 < (int)piStack_dbe) goto LAB_1160c0fe;
              }
              goto LAB_1160d774;
            case 10:
              auStack_888[0] = 0xb;
              pcStack_880 = "szCondParam";
              FUN_11607840(auStack_888,auStack_dba);
              FUN_10a2eb80();
              auStack_8a8[0] = 0xb;
              pcStack_8a0 = "iCondParam1";
              FUN_10a2f4b0(auStack_8a8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_8c8[0] = 0xb;
              pcStack_8c0 = "iCondParam2";
              FUN_10a2f4b0(auStack_8c8,&piStack_dbe);
              break;
            case 0xb:
              auStack_468[0] = 0xb;
              pcStack_460 = "szCondArg1";
              FUN_11607940(auStack_468,auStack_d18);
              FUN_10a2eb80();
              auStack_488[0] = 0xb;
              pcStack_480 = "szCondArg2";
              FUN_11607940(auStack_488,auStack_c98);
              break;
            case 0xc:
              auStack_8e8[0] = 0xb;
              pcStack_8e0 = "iCondParam1";
              FUN_10a2f4b0(auStack_8e8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_908[0] = 0xb;
              pcStack_900 = "iCondParam2";
              FUN_10a2f4b0(auStack_908,&piStack_dbe);
              break;
            case 0xd:
              auStack_928[0] = 0xb;
              pcStack_920 = "iCondParam1";
              FUN_10a2f4b0(auStack_928,&uStack_dc2);
              FUN_10a2eb80();
              auStack_940[0] = 0xb;
              pcStack_938 = "iCondParam2";
              FUN_10a2f4b0(auStack_940,&piStack_dbe);
              FUN_10a2eb80();
              auStack_960[0] = 0xb;
              pcStack_958 = "bCondId";
              FUN_11607600(auStack_960,&bStack_dc3);
              FUN_10a2eb80();
              iVar7 = FUN_107ca5b0(uStack_dc2);
              if ((iVar7 != 0) && (iVar7 = FUN_116b8a70(piStack_dbe), iVar7 != 0))
              goto LAB_1160c0fe;
              goto LAB_1160d774;
            case 0xe:
              auStack_6c8[0] = 0xb;
              pcStack_6c0 = "bCondId";
              FUN_11607600(auStack_6c8,&bStack_dc3);
              FUN_10a2eb80();
              auStack_6e8[0] = 0xb;
              pcStack_6e0 = "iCondParam1";
              FUN_10a2f4b0(auStack_6e8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_708[0] = 0xb;
              pcStack_700 = "iCondParam2";
              FUN_10a2f4b0(auStack_708,&piStack_dbe);
              FUN_10a2eb80();
              if (0 < uStack_dc2) goto LAB_1160dc27;
              goto LAB_1160d774;
            case 0xf:
              auStack_5a8[0] = 0xb;
              pcStack_5a0 = "iCondParam1";
              FUN_10a2f4b0(auStack_5a8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_5c8[0] = 0xb;
              pcStack_5c0 = "iCondParam2";
              FUN_10a2f4b0(auStack_5c8,&piStack_dbe);
              FUN_10a2eb80();
              auStack_5e8[0] = 0xb;
              pcStack_5e0 = "bCondId";
              FUN_11607600(auStack_5e8,&bStack_dc3);
              FUN_10a2eb80();
              if (((-1 < uStack_dc2) && (-1 < (int)piStack_dbe)) && (bStack_dc3 != 0))
              goto LAB_1160c0fe;
LAB_1160d774:
              FUN_10a2efb0();
              param_1 = local_1b4;
              goto LAB_1160d785;
            case 0x10:
              auStack_608[0] = 0xb;
              pcStack_600 = "iCondParam1";
              FUN_10a2f4b0(auStack_608,&uStack_dc2);
              break;
            case 0x11:
              auStack_7a8[0] = 0xb;
              pcStack_7a0 = "iCondParam1";
              FUN_10a2f4b0(auStack_7a8,&uStack_dc2);
              FUN_10a2eb80();
              auStack_7c8[0] = 0xb;
              pcStack_7c0 = "iCondParam2";
              FUN_10a2f4b0(auStack_7c8,&piStack_dbe);
              break;
            case 0x12:
              auStack_628[0] = 0xb;
              pcStack_620 = "iCondParam1";
              FUN_10a2f4b0(auStack_628,&uStack_dc2);
              FUN_10a2eb80();
              auStack_648[0] = 0xb;
              pcStack_640 = "iCondParam2";
              FUN_10a2f4b0(auStack_648,&piStack_dbe);
              break;
            default:
              goto LAB_1160c0fe;
            }
LAB_1160c0f9:
            FUN_10a2eb80();
LAB_1160c0fe:
            param_1 = local_1b4;
            puVar11 = (undefined4 *)local_dd4;
            puVar14 = (undefined4 *)
                      (local_1b4[0x14] + 0xad3 + (uint)*(byte *)(local_1b4[0x14] + 0xad2) * 0x423);
            for (iVar7 = 0x108; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar14 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar14 = puVar14 + 1;
            }
            *(undefined2 *)puVar14 = *(undefined2 *)puVar11;
            *(undefined1 *)((int)puVar14 + 2) = *(undefined1 *)((int)puVar11 + 2);
            *(char *)(local_1b4[0x14] + 0xad2) = *(char *)(local_1b4[0x14] + 0xad2) + '\x01';
            local_1b8[1] = local_1b8[1] + -1;
            if (local_1b8[1] < 1) {
              (**(code **)*local_1b8)(1);
              local_1ec = local_1ec + 1;
              piVar12 = local_1e8;
            }
            else {
LAB_1160d785:
              local_1ec = local_1ec + 1;
              piVar12 = local_1e8;
            }
          }
        }
        if (local_1b8 != (int *)0x0) {
LAB_1160e081:
          piVar9[1] = piVar9[1] + -1;
          if (piVar9[1] < 1) {
            (**(code **)*piVar9)(1);
          }
        }
LAB_1160e092:
        FUN_10a2eb80();
        param_1 = local_1b4;
      }
      if ((piVar12 != (int *)0x0) && (piVar12[1] = piVar12[1] + -1, piVar12[1] < 1)) {
        (**(code **)*piVar12)(1);
      }
      param_1[9] = 1;
      FUN_11a89daa();
      return;
    }
  }
LAB_1160b0ab:
  (**(code **)(*param_1 + 8))();
LAB_1160b0b2:
  FUN_11a89daa();
  return;
}

