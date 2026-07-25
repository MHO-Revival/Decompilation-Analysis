// FUN_11c55510 @ 11c55510  (2937 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 7, 12, 13, 16, 18, 20, 22, 24, 27, 28]


/* [RE-AUTO c0] */

undefined4 __thiscall
FUN_11c55510(int param_1,undefined4 param_2,uint param_3,int *param_4,char param_5,char param_6,
            int *param_7,int param_8,short *param_9)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  ushort uVar13;
  short *psVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  float fVar21;
  undefined1 auStack_2ec [40];
  undefined1 auStack_2c4 [40];
  undefined1 auStack_29c [40];
  undefined1 local_274 [40];
  undefined1 auStack_24c [40];
  undefined1 auStack_224 [40];
  undefined1 auStack_1fc [40];
  undefined1 auStack_1d4 [20];
  undefined1 auStack_1c0 [20];
  undefined1 auStack_1ac [20];
  undefined1 local_198 [20];
  undefined1 local_184 [40];
  uint uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int iStack_150;
  int iStack_14c;
  uint local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  short *local_138;
  undefined2 auStack_134 [2];
  undefined4 uStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined2 auStack_114 [2];
  undefined4 auStack_110 [8];
  undefined4 local_f0;
  undefined1 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  undefined1 local_80;
  ushort local_7e;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  uint local_70 [2];
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined1 local_58;
  ushort local_56;
  undefined4 local_54;
  undefined4 local_50;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  int local_18;
  uint local_14;
  int iStack_10;
  uint local_c;
  int local_8;
  
  uVar10 = param_3;
  local_8 = param_1;
  if (param_3 == 0) {
    FUN_11c17140();
    return 0;
  }
  local_d4 = (**(code **)(*DAT_123b004c + 0x3c))(param_1);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = local_d4;
  FUN_11c56f20(local_d4,param_2,uVar10);
  if (param_6 != '\0') {
    local_e4 = 1;
  }
  local_14 = 0;
  local_18 = 0;
  iVar6 = param_8;
  if (param_8 == 0) {
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  local_7c = 1;
  FUN_11ab4700(iVar6 + 4,*(undefined4 *)(iVar6 + 8));
  FUN_11ab4700(iVar6 + 0xc,*(undefined4 *)(iVar6 + 8));
  if (*(int *)(iVar6 + 0x14) != 0) {
    piVar11 = (int *)(*(int *)(iVar6 + 0x14) + 4);
    *piVar11 = *piVar11 + 1;
  }
  local_68 = *(int *)(iVar6 + 0x14);
  if (*(int *)(iVar6 + 0x18) != 0) {
    FUN_11a8aca0();
  }
  local_64 = *(int *)(iVar6 + 0x18);
  local_60 = *(undefined4 *)(iVar6 + 0x1c);
  local_5c = *(undefined2 *)(iVar6 + 0x20);
  local_5a = *(undefined2 *)(iVar6 + 0x22);
  local_58 = *(undefined1 *)(iVar6 + 0x24);
  local_56 = *(ushort *)(iVar6 + 0x26);
  psVar14 = param_9;
  if (param_9 == (short *)0x0) {
    psVar14 = *(short **)(param_1 + 0x18);
  }
  local_54 = 1;
  local_50 = 0;
  local_4c = psVar14[4];
  local_4a = psVar14[5];
  local_48 = psVar14[6];
  local_46 = psVar14[7];
  local_44 = psVar14[8];
  local_42 = psVar14[9];
  FUN_11b1b8c0(*(undefined4 *)(psVar14 + 2));
  local_a4 = 1;
  FUN_11ab4700(&local_78,local_74);
  FUN_11ab4700(local_70,local_74);
  if (local_68 != 0) {
    *(int *)(local_68 + 4) = *(int *)(local_68 + 4) + 1;
  }
  local_90 = local_68;
  if (local_64 != 0) {
    FUN_11a8aca0();
  }
  local_8c = local_64;
  local_88 = local_60;
  local_84 = local_5c;
  local_82 = local_5a;
  local_80 = local_58;
  local_7e = local_56;
  FUN_11b1db30(&DAT_11d9d32b,0xffffffff);
  iVar6 = FUN_11c57b00();
  if (iVar6 != 0x8000) {
    do {
      if (iVar6 == 1) break;
      if (4 < iVar6) {
        if (iVar6 != 0x8005) goto LAB_11c569de;
LAB_11c568f3:
        puVar17 = (uint *)0x0;
        param_3 = 0;
        local_c = 0;
        if (iVar6 == 4) {
          if (local_30 != 0) {
            puVar17 = (uint *)(local_34 + -0x4c + local_30 * 0x4c);
          }
          FUN_11c58490(&param_3,&local_c);
          uVar16 = local_c;
          uVar10 = param_3;
        }
        else {
          if (((local_14 != 0) && (*(char *)(local_14 + 9) != '\0')) || (local_30 == 0))
          goto LAB_11c569de;
          puVar17 = (uint *)(local_34 + -0x4c + local_30 * 0x4c);
          uVar10 = *puVar17;
          uVar16 = puVar17[1];
        }
        param_1 = local_8;
        param_3 = uVar16;
        if (puVar17 != (uint *)0x0) {
          iVar20 = FUN_11c59230(uVar10,uVar16,*puVar17,puVar17[1]);
          if (iVar20 == 0) {
LAB_11c56a47:
            uVar5 = *(ushort *)((int)puVar17 + 0x4a) >> 0xb & 3;
            param_3 = *(ushort *)((int)puVar17 + 0x4a) >> 8 & 0xffffff01;
            local_14 = puVar17[2];
            local_c = puVar17[3];
            FUN_11c58cb0(local_30 + -1);
            param_1 = local_8;
            if (local_14 == 0) {
              if ((param_7 != (int *)0x0) && ((char)param_3 != '\0')) {
                if (uVar5 == 1) goto LAB_11c56a9b;
                if (uVar5 == 2) {
                  iVar6 = FUN_11c18970();
                  if (param_5 != '\0') {
                    puVar7 = &DAT_11d8546c;
                    if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
                      puVar7 = &DAT_11d9d720;
                    }
                    FUN_11c15a10(puVar7,1,1,&local_a4,&local_54);
                  }
                  FUN_11c1a760(local_c,iVar6 - local_c);
                }
              }
            }
            else if ((*(int *)(local_14 + 4) == 6) ||
                    ((*(int *)(local_14 + 4) == 7 && (local_18 = local_18 + -1, iVar6 != 0x8005))))
            {
LAB_11c56a9b:
              if (param_5 != '\0') {
                puVar7 = &DAT_11d8546c;
                if ((*(byte *)(local_8 + 0x20) & 2) == 0) {
                  puVar7 = &DAT_11d9d720;
                }
                FUN_11c15a10(puVar7,1,1,&local_a4,&local_54);
              }
            }
          }
          else {
            iVar20 = FUN_11c55460(uVar10,param_3,&PTR_DAT_11d85470,0xd);
            param_1 = local_8;
            if (((iVar20 != 0) && (local_18 != 0)) &&
               ((*(int *)(iVar20 + 4) == 7 || (*(int *)(iVar20 + 4) == 6)))) {
              while (local_8 = param_1, local_30 != 0) {
                iVar18 = *(int *)(local_30 * 0x4c + -0x44 + local_34);
                if ((iVar18 != 0) && (*(int *)(iVar20 + 4) == *(int *)(iVar18 + 4))) {
                  if (local_30 != 0) {
                    puVar17 = (uint *)(local_34 + -0x4c + local_30 * 0x4c);
                    goto LAB_11c56a47;
                  }
                  break;
                }
                FUN_11c58cb0(local_30 + -1);
                param_1 = local_8;
              }
            }
          }
        }
        goto LAB_11c569de;
      }
      if (iVar6 == 4) goto LAB_11c568f3;
      if (iVar6 != 2) {
        if (((iVar6 == 3) &&
            (cVar4 = FUN_11c58220(&local_138,&local_148), uVar10 = local_148, cVar4 != '\0')) &&
           (local_148 != 0)) {
          iVar6 = FUN_11c18900();
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_11c18940();
          }
          if (((param_6 == '\0') || (1 < uVar10)) || ((*local_138 != 0x20 || (iVar6 != 0)))) {
            if (local_30 == 0) {
              FUN_11c15d60(local_138,uVar10,1,&local_7c,&local_54);
              FUN_11be28d0(&local_7c);
            }
            else {
              iVar6 = local_34 + -0x3c + local_30 * 0x4c;
              FUN_11c15d60(local_138,uVar10,1,iVar6,local_30 * 0x4c + -0x14 + local_34);
              FUN_11be28d0(iVar6);
            }
          }
        }
        goto LAB_11c569de;
      }
      FUN_11c589f0(&local_40,&local_3c);
      uVar3 = local_3c;
      uVar12 = local_40;
      local_14 = FUN_11c55460(local_40,local_3c,&PTR_DAT_11d85470,0xd);
      param_1 = local_8;
      piVar11 = param_4;
      local_c = local_30 - 1;
      if ((local_14 != 0) && (*(char *)(local_14 + 9) != '\0')) {
        iVar6 = *(int *)(local_14 + 4);
        if (iVar6 == 2) {
          if (param_5 != '\0') {
            puVar7 = &DAT_11d8546c;
            if ((*(byte *)(local_8 + 0x20) & 2) == 0) {
              puVar7 = &DAT_11d9d720;
            }
            FUN_11c15a10(puVar7,1,1,&local_a4,&local_54);
          }
        }
        else if (iVar6 == 5) {
          if (param_4 != (int *)0x0) {
            uVar12 = FUN_11c57210(local_d4);
            FUN_11c58b30(uVar12);
            FUN_11be22b0();
            iVar18 = piVar11[1] * 0x2c;
            iVar6 = *piVar11;
            iVar20 = FUN_11c18900();
            if (iVar20 == 0) {
              iVar20 = FUN_11c15700(&local_54);
            }
            FUN_11b1a2c0(&local_7c,0);
            *(undefined4 *)(iVar18 + -8 + iVar6) = *(undefined4 *)(iVar20 + 0x20);
            cVar4 = FUN_11c57d90(&local_cc,&local_c4);
            while (cVar4 != '\0') {
              iVar20 = FUN_11c55460(local_cc,local_c4,&PTR_s_ALIGN_11d85530,0x1b);
              if ((iVar20 != 0) && (cVar4 = FUN_11c57e50(&param_8,&param_2), cVar4 != '\0')) {
                switch(*(undefined4 *)(iVar20 + 4)) {
                case 0xc:
                  iVar20 = FUN_11c55460(param_8,param_2,&PTR_s_ALIGN_11d85530,0x1b);
                  if (iVar20 != 0) {
                    iVar20 = *(int *)(iVar20 + 4);
                    if (iVar20 == 0xe) {
                      *(undefined1 *)(iVar18 + -4 + iVar6) = 0;
                    }
                    else if (iVar20 == 0x23) {
                      *(undefined1 *)(iVar18 + -4 + iVar6) = 2;
                    }
                    else if (iVar20 == 0x24) {
                      *(undefined1 *)(iVar18 + -4 + iVar6) = 1;
                    }
                  }
                  break;
                case 0x13:
                  cVar4 = FUN_11c58720(&iStack_150,param_8,param_2);
                  if ((cVar4 != '\0') && (-1 < iStack_150)) {
                    *(int *)(iVar18 + -0x14 + iVar6) = iStack_150 * 0x14;
                  }
                  break;
                case 0x15:
                  cVar4 = FUN_11c58720(&iStack_13c,param_8,param_2);
                  if (cVar4 != '\0') {
                    *(int *)(iVar18 + -0xc + iVar6) = iStack_13c * 0x14;
                  }
                  break;
                case 0x16:
                  FUN_11ab4210(param_8,param_2);
                  break;
                case 0x1d:
                  FUN_11ab4210(param_8,param_2);
                  break;
                case 0x21:
                  cVar4 = FUN_11c58720(&iStack_158,param_8,param_2);
                  if (cVar4 != '\0') {
                    *(int *)(iVar18 + -0x10 + iVar6) = iStack_158 * 0x14;
                  }
                  break;
                case 0x22:
                  cVar4 = FUN_11c58720(&iStack_140,param_8,param_2);
                  if ((cVar4 != '\0') && (-1 < iStack_140)) {
                    *(int *)(iVar18 + -0x18 + iVar6) = iStack_140 * 0x14;
                  }
                }
              }
              cVar4 = FUN_11c57d90(&local_cc,&local_c4);
            }
            iVar20 = FUN_11c38300(0x60,local_8);
            if (iVar20 == 0) {
              param_3 = 0;
            }
            else {
              param_3 = FUN_11c57160();
            }
            uVar10 = param_3;
            FUN_11b1d860(param_3);
            iVar20 = *(int *)(iVar18 + -0x18 + iVar6);
            *(float *)(uVar10 + 0x14) =
                 (float)((double)iVar20 + (double)(&DAT_11de9c60)[-(iVar20 >> 0x1f)]);
            iVar20 = *(int *)(iVar18 + -0x14 + iVar6);
            *(float *)(uVar10 + 0x18) =
                 (float)((double)iVar20 + (double)(&DAT_11de9c60)[-(iVar20 >> 0x1f)]);
            *(undefined4 *)(uVar10 + 0x48) = *(undefined4 *)(iVar18 + -0x10 + iVar6);
            *(undefined4 *)(uVar10 + 0x4c) = *(undefined4 *)(iVar18 + -0xc + iVar6);
            FUN_11ab37e0(iVar6 + -0x28 + iVar18);
            FUN_11ab37e0(iVar6 + -0x20 + iVar18);
            uVar1 = *(undefined1 *)(iVar18 + -4 + iVar6);
            *(int *)(uVar10 + 4) = *(int *)(uVar10 + 4) + 1;
            *(undefined1 *)(uVar10 + 0x54) = uVar1;
            if (*(int *)(iVar18 + -0x2c + iVar6) != 0) {
              FUN_11a8ad80();
            }
            *(uint *)(iVar18 + -0x2c + iVar6) = uVar10;
            if ((int)local_c < 0) {
              puVar15 = &local_7c;
              puVar19 = &local_54;
            }
            else {
              puVar15 = (undefined4 *)(local_34 + 0x10 + local_c * 0x4c);
              puVar19 = (undefined4 *)(local_34 + 0x38 + local_c * 0x4c);
            }
            cVar4 = FUN_11b1cc50();
            if (cVar4 != '\0') {
              FUN_11b1db10(puVar15 + 3);
            }
            param_1 = local_8;
            FUN_11c15a10(&DAT_11d9e07c,1,1,local_184,puVar19);
            if (puVar15[5] != 0) {
              FUN_11a8ad80();
            }
            puVar15[5] = 0;
            *(ushort *)((int)puVar15 + 0x26) = *(ushort *)((int)puVar15 + 0x26) | 0x200;
            if (local_90 != 0) {
              FUN_11a8ad80();
            }
            local_7e = local_7e | 0x200;
            local_90 = 0;
            FUN_11c1b450(puVar15);
            FUN_11a8ad80();
            FUN_11b1a590();
          }
        }
        else if (iVar6 == 9) {
          FUN_11c159f0(&DAT_11d9eedc,1,1);
        }
        goto LAB_11c569de;
      }
      uVar8 = FUN_11c18970();
      uVar12 = FUN_11c57060(local_d4,uVar12,uVar3,local_14,0);
      FUN_11c58ac0(uVar12);
      FUN_11b1bd20();
      FUN_11b1a590();
      iVar6 = local_34;
      iVar20 = local_30 * 0x4c;
      *(undefined4 *)(iVar20 + -0x40 + local_34) = uVar8;
      if ((int)local_c < 0) {
        param_3 = local_34 + -0x3c + iVar20;
        FUN_11be28d0(&local_7c);
        iVar20 = iVar6 + -0x14 + iVar20;
        local_38 = iVar20;
        FUN_11b1a7b0(&local_54);
      }
      else {
        iVar18 = local_c * 0x4c;
        param_3 = local_34 + -0x3c + iVar20;
        FUN_11be28d0(local_34 + 0x10 + iVar18);
        iVar20 = iVar6 + -0x14 + iVar20;
        local_38 = iVar20;
        FUN_11b1a7b0(local_34 + 0x38 + iVar18);
      }
      iVar6 = local_8;
      if (local_14 == 0) {
        if ((param_7 == (int *)0x0) ||
           (iVar6 = (**(code **)(*param_7 + 4))(0,local_40,local_3c), iVar6 == 0))
        goto LAB_11c5629d;
        uVar12 = FUN_11b1cc70(local_198,iVar6 + 0x28);
        FUN_11b1a7b0(uVar12);
        FUN_11b1bd20();
        uVar10 = param_3;
        uVar12 = FUN_11b1ce00(local_274,iVar6);
        FUN_11be28d0(uVar12);
        FUN_11b1a590();
        param_1 = local_8;
        FUN_11be28d0(uVar10);
        goto LAB_11c569de;
      }
      switch(*(undefined4 *)(local_14 + 4)) {
      case 0:
        cVar4 = FUN_11c57d90(&uStack_a8,&uStack_dc);
        uVar10 = param_3;
        piVar11 = param_7;
        while (param_7 = piVar11, cVar4 != '\0') {
          iVar6 = FUN_11c55460(uStack_a8,uStack_dc,&PTR_s_ALIGN_11d85530,0x1b);
          if (((iVar6 != 0) && (cVar4 = FUN_11c57e50(&uStack_11c,auStack_110), cVar4 != '\0')) &&
             (*(int *)(iVar6 + 4) == 0x14)) {
            FUN_11b1db80(uStack_11c,auStack_110[0]);
            *(byte *)(local_8 + 0x20) = *(byte *)(local_8 + 0x20) | 1;
          }
          cVar4 = FUN_11c57d90(&uStack_a8,&uStack_dc);
          piVar11 = param_7;
        }
        if (piVar11 != (int *)0x0) {
          iVar6 = (**(code **)(*piVar11 + 8))(0,&DAT_11d9f250,0xffffffff);
          if (iVar6 != 0) {
            uVar12 = FUN_11b1ce00(auStack_29c,iVar6);
            FUN_11be28d0(uVar12);
            FUN_11b1a590();
          }
          cVar4 = FUN_11b1cc50();
          if ((cVar4 != '\0') &&
             (iVar6 = (**(code **)(*piVar11 + 8))(0,"a:link",0xffffffff), iVar6 != 0)) {
            uVar12 = FUN_11b1ce00(auStack_2c4,iVar6);
            FUN_11be28d0(uVar12);
            FUN_11b1a590();
            param_1 = local_8;
            FUN_11be28d0(uVar10);
            break;
          }
        }
        goto LAB_11c562a0;
      case 1:
        FUN_11b1d2e0(1);
      default:
LAB_11c5629d:
        uVar10 = param_3;
LAB_11c562a0:
        param_1 = local_8;
        FUN_11be28d0(uVar10);
        break;
      case 3:
        cVar4 = FUN_11c57d90(&uStack_e0,&uStack_c0);
        uVar10 = param_3;
        while (cVar4 != '\0') {
          iVar6 = FUN_11c55460(uStack_e0,uStack_c0,&PTR_s_ALIGN_11d85530,0x1b);
          if ((iVar6 != 0) && (cVar4 = FUN_11c57e50(&param_9,&iStack_24), cVar4 != '\0')) {
            switch(*(undefined4 *)(iVar6 + 4)) {
            case 0xd:
              if ((*param_9 == 0x23) &&
                 (cVar4 = FUN_11c58630(&uStack_154,param_9 + 1,iStack_24 + -1), cVar4 != '\0')) {
                FUN_11b1d290(uStack_154);
              }
              break;
            case 0x11:
              if ((*param_9 == 0x23) &&
                 (cVar4 = FUN_11c58630(&uStack_15c,param_9 + 1,iStack_24 + -1), cVar4 != '\0')) {
                *(uint *)(param_3 + 0x1c) =
                     *(uint *)(param_3 + 0x1c) ^ (*(uint *)(param_3 + 0x1c) ^ uStack_15c) & 0xffffff
                ;
                *(ushort *)(param_3 + 0x26) = *(ushort *)(param_3 + 0x26) | 1;
                uVar10 = param_3;
              }
              break;
            case 0x12:
              FUN_11b1d680(param_9,iStack_24);
              break;
            case 0x18:
              cVar4 = FUN_11c58720(&iStack_144,param_9,iStack_24);
              if ((cVar4 != '\0') && (-1 < iStack_144)) {
                if (iStack_144 == 0) {
                  *(byte *)(param_3 + 0x24) = *(byte *)(param_3 + 0x24) & 0xf7;
                  *(ushort *)(param_3 + 0x26) = *(ushort *)(param_3 + 0x26) & 0xff7f;
                  uVar10 = param_3;
                }
                else {
                  FUN_11b1d910(1);
                }
              }
              break;
            case 0x1b:
              cVar4 = FUN_11c58500(&fStack_12c,param_9,iStack_24);
              if (cVar4 != '\0') {
                fVar21 = fStack_12c * DAT_11cbf7f8;
                *(ushort *)(param_3 + 0x26) = *(ushort *)(param_3 + 0x26) | 2;
                *(short *)(param_3 + 0x20) = (short)(int)fVar21;
                uVar10 = param_3;
              }
              break;
            case 0x1e:
              cVar4 = FUN_11c58720(&iStack_124,param_9,iStack_24);
              if ((cVar4 != '\0') && (-1 < iStack_124)) {
                FUN_11b1d7e0((float)iStack_124);
              }
            }
          }
          cVar4 = FUN_11c57d90(&uStack_e0,&uStack_c0);
        }
        FUN_11be28d0(uVar10);
        param_1 = local_8;
        FUN_11be28d0(uVar10);
        break;
      case 4:
        FUN_11b1d8b0(1);
        param_1 = local_8;
        FUN_11be28d0(param_3);
        break;
      case 6:
        *(ushort *)(iVar20 + 0x12) = *(ushort *)(iVar20 + 0x12) | 0x8080;
        iVar18 = FUN_11c18900();
        if (iVar18 == 0) {
          FUN_11c15700(iVar20);
        }
        else {
          iVar18 = FUN_11c18940();
          if (iVar18 != 0) {
            if (param_5 != '\0') {
              puVar7 = &DAT_11d8546c;
              if ((*(byte *)(iVar6 + 0x20) & 2) == 0) {
                puVar7 = &DAT_11d9d720;
              }
              FUN_11c15a10(puVar7,1,1,&local_a4,&local_54);
            }
            FUN_11c18900();
          }
          uVar12 = FUN_11c173e0(iVar20);
          FUN_11c1b5e0(uVar12);
        }
        if ((param_7 == (int *)0x0) ||
           (iVar6 = (**(code **)(*param_7 + 4))(0,local_40,local_3c), iVar6 == 0))
        goto LAB_11c5629d;
        uVar12 = FUN_11b1cc70(auStack_1c0,iVar6 + 0x28);
        FUN_11b1a7b0(uVar12);
        FUN_11b1bd20();
        uVar10 = param_3;
        uVar12 = FUN_11b1ce00(auStack_1fc,iVar6);
        FUN_11be28d0(uVar12);
        FUN_11b1a590();
        param_1 = local_8;
        uVar12 = FUN_11c173e0(iVar20);
        FUN_11c1b5e0(uVar12);
        FUN_11be28d0(uVar10);
        break;
      case 7:
        iStack_10 = FUN_11c18900();
        if (iStack_10 == 0) {
          iStack_10 = FUN_11c15700(&local_54);
        }
        else if (local_18 != 0) {
          if (param_5 != '\0') {
            puVar7 = &DAT_11d8546c;
            if ((*(byte *)(iVar6 + 0x20) & 2) == 0) {
              puVar7 = &DAT_11d9d720;
            }
            FUN_11c15a10(puVar7,1,1,&local_a4,&local_54);
          }
          iStack_10 = FUN_11c18900();
        }
        if ((param_7 != (int *)0x0) &&
           (iVar6 = (**(code **)(*param_7 + 4))(0,local_40,local_3c), iVar6 != 0)) {
          uVar12 = FUN_11b1cc70(auStack_1d4,iVar6 + 0x28);
          FUN_11b1a7b0(uVar12);
          FUN_11b1bd20();
          uVar12 = FUN_11b1ce00(auStack_2ec,iVar6);
          FUN_11be28d0(uVar12);
          FUN_11b1a590();
        }
        cVar4 = FUN_11c57d90(&uStack_d0,&uStack_b8);
        while (cVar4 != '\0') {
          iVar6 = FUN_11c55460(uStack_d0,uStack_b8,&PTR_s_ALIGN_11d85530,0x1b);
          if ((iVar6 == 0) || (cVar4 = FUN_11c57e50(&uStack_d8,&uStack_b0), cVar4 == '\0'))
          goto LAB_11c56221;
          if (*(int *)(iVar6 + 4) != 0xc) {
            if (((*(int *)(iVar6 + 4) == 0x10) && (param_7 != (int *)0x0)) &&
               (iVar6 = (**(code **)(*param_7 + 4))(1,uStack_d8,uStack_b0), iVar6 != 0)) {
              uVar12 = FUN_11b1cc70(auStack_1ac,iVar6 + 0x28);
              FUN_11b1a7b0(uVar12);
              FUN_11b1bd20();
              uVar12 = FUN_11b1ce00(auStack_224,iVar6);
              FUN_11be28d0(uVar12);
              FUN_11b1a590();
            }
            goto LAB_11c56221;
          }
          iVar6 = FUN_11c55460(uStack_d8,uStack_b0,&PTR_s_ALIGN_11d85530,0x1b);
          if (iVar6 == 0) goto LAB_11c56221;
          switch(*(undefined4 *)(iVar6 + 4)) {
          case 0x23:
            uVar5 = *(ushort *)(iVar20 + 0x12) & 63999 | 1;
            goto LAB_11c5621d;
          case 0x24:
            uVar5 = *(ushort *)(iVar20 + 0x12) & 0xfbff;
            uVar13 = 0x201;
            goto LAB_11c5621a;
          case 0x25:
            *(ushort *)(iVar20 + 0x12) = *(ushort *)(iVar20 + 0x12) | 0x601;
            break;
          case 0x26:
            uVar5 = *(ushort *)(iVar20 + 0x12) & 0xfdff;
            uVar13 = 0x401;
LAB_11c5621a:
            uVar5 = uVar5 | uVar13;
LAB_11c5621d:
            *(ushort *)(iVar20 + 0x12) = uVar5;
          }
LAB_11c56221:
          cVar4 = FUN_11c57d90(&uStack_d0,&uStack_b8);
        }
        iVar6 = FUN_11c18940();
        param_1 = local_8;
        if (iVar6 == 0) {
          uVar12 = FUN_11c173e0(iVar20);
          FUN_11c1b5e0(uVar12);
          local_18 = local_18 + 1;
          FUN_11be28d0(param_3);
        }
        else {
          local_18 = local_18 + 1;
          FUN_11be28d0(param_3);
        }
        break;
      case 8:
        cVar4 = FUN_11c57d90(&uStack_bc,&uStack_b4);
        uVar10 = param_3;
        if (cVar4 == '\0') goto LAB_11c562a0;
        do {
          iVar6 = FUN_11c55460(uStack_bc,uStack_b4,&PTR_s_ALIGN_11d85530,0x1b);
          if ((((iVar6 != 0) && (cVar4 = FUN_11c57e50(&uStack_130,&uStack_128), cVar4 != '\0')) &&
              (*(int *)(iVar6 + 4) == 0x10)) &&
             ((param_7 != (int *)0x0 &&
              (iVar6 = (**(code **)(*param_7 + 4))(1,uStack_130,uStack_128), iVar6 != 0)))) {
            uVar12 = FUN_11b1ce00(auStack_24c,iVar6);
            FUN_11be28d0(uVar12);
            FUN_11b1a590();
            FUN_11be28d0(uVar10);
          }
          cVar4 = FUN_11c57d90(&uStack_bc,&uStack_b4);
          param_1 = local_8;
        } while (cVar4 != '\0');
        FUN_11be28d0(uVar10);
        break;
      case 10:
        cVar4 = FUN_11c57d90(&uStack_ac,&uStack_c8);
        if (cVar4 == '\0') goto LAB_11c5629d;
        do {
          iVar6 = FUN_11c55460(uStack_ac,uStack_c8,&PTR_s_ALIGN_11d85530,0x1b);
          if ((iVar6 != 0) &&
             (cVar4 = FUN_11c57e50(&iStack_1c,&uStack_20), iVar18 = iStack_1c, uVar10 = uStack_20,
             cVar4 != '\0')) {
            switch(*(undefined4 *)(iVar6 + 4)) {
            case 0xf:
              cVar4 = FUN_11c58720(&iStack_14c,iStack_1c,uStack_20);
              if ((cVar4 != '\0') && (-1 < iStack_14c)) {
                *(ushort *)(iVar20 + 0x12) = *(ushort *)(iVar20 + 0x12) | 2;
                *(short *)(iVar20 + 8) = (short)iStack_14c;
              }
              break;
            case 0x17:
              cVar4 = FUN_11c58720(auStack_134,iStack_1c,uStack_20);
              if (cVar4 != '\0') {
                *(ushort *)(iVar20 + 0x12) = *(ushort *)(iVar20 + 0x12) | 4;
                *(undefined2 *)(iVar20 + 10) = auStack_134[0];
              }
              break;
            case 0x19:
              cVar4 = FUN_11c58720(auStack_114,iStack_1c,uStack_20);
              if (cVar4 != '\0') {
                *(ushort *)(iVar20 + 0x12) = *(ushort *)(iVar20 + 0x12) | 8;
                *(undefined2 *)(iVar20 + 0xc) = auStack_114[0];
              }
              break;
            case 0x1a:
              cVar4 = FUN_11c58720(&iStack_118,iStack_1c,uStack_20);
              if ((cVar4 != '\0') && (-1 < iStack_118)) {
                *(ushort *)(iVar20 + 0x12) = *(ushort *)(iVar20 + 0x12) | 0x10;
                *(short *)(iVar20 + 0xe) = (short)iStack_118;
              }
              break;
            case 0x1c:
              cVar4 = FUN_11c58720(&iStack_120,iStack_1c,uStack_20);
              if ((cVar4 != '\0') && (-1 < iStack_120)) {
                *(ushort *)(iVar20 + 0x12) = *(ushort *)(iVar20 + 0x12) | 0x20;
                *(short *)(iVar20 + 0x10) = (short)iStack_120;
              }
              break;
            case 0x20:
              uVar16 = 0;
              if (uStack_20 != 0) {
                do {
                  cVar4 = FUN_11c58150(*(undefined2 *)(iVar18 + uVar16 * 2));
                  if (cVar4 == '\0') break;
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar10);
              }
              if (*(short *)(iVar18 + uVar16 * 2) == 0x5b) {
                uVar16 = uVar16 + 1;
              }
              iVar6 = 1;
              for (uVar9 = uVar16;
                  (uVar9 < uVar10 && (sVar2 = *(short *)(iVar18 + uVar9 * 2), sVar2 != 0x5d));
                  uVar9 = uVar9 + 1) {
                if (sVar2 == 0x2c) {
                  iVar6 = iVar6 + 1;
                }
              }
              FUN_11b1b2f0(iVar6);
              local_c = 0;
              *(ushort *)(local_38 + 0x12) = *(ushort *)(local_38 + 0x12) | 0x40;
              if (uVar16 < uVar10) {
code_r0x11c56724:
                if (*(short *)(iVar18 + uVar16 * 2) != 0x5d) {
                  iStack_10 = 0;
                  do {
                    cVar4 = FUN_11c580e0(*(undefined2 *)(iVar18 + uVar16 * 2));
                    if (cVar4 == '\0') goto joined_r0x11c56763;
                    iVar6 = uVar16 * 2;
                    uVar16 = uVar16 + 1;
                    iStack_10 = (uint)*(ushort *)(iVar18 + iVar6) + iStack_10 * 10 + -0x30;
                  } while (uVar16 < uVar10);
                  goto code_r0x11c5677e;
                }
                break;
              }
            }
          }
LAB_11c567c0:
          cVar4 = FUN_11c57d90(&uStack_ac,&uStack_c8);
          param_1 = local_8;
          iVar20 = local_38;
        } while (cVar4 != '\0');
        FUN_11be28d0(param_3);
        break;
      case 0xb:
        FUN_11b1dae0(1);
        param_1 = local_8;
        FUN_11be28d0(param_3);
      }
LAB_11c569de:
      iVar6 = FUN_11c57b00();
    } while (iVar6 != 0x8000);
    if (local_30 != 0) {
      iVar6 = local_30 * 0x4c;
      iVar20 = local_34 + -0x3c + iVar6;
      FUN_11c1b450(iVar20);
      FUN_11c1b390(local_34 + -0x14 + iVar6);
      FUN_11be28d0(iVar20);
      goto LAB_11c56b56;
    }
  }
  FUN_11c1b450(&local_7c);
  FUN_11c1b390(&local_54);
LAB_11c56b56:
  FUN_11c17140();
  iVar6 = FUN_11c18900();
  if ((iVar6 != 0) && (iVar6 = FUN_11c18940(), iVar6 == 0)) {
    iVar6 = *(int *)(param_1 + 0x10);
    while (((iVar6 = iVar6 + -1, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 0x10))) &&
           (uVar10 = FUN_11c18940(), uVar10 < 2))) {
      if (*(int *)(local_8 + 8) == 0) {
        piVar11 = (int *)(**(code **)(*DAT_123b004c + 0x3c))(local_8);
        iVar20 = (**(code **)(*piVar11 + 0x28))(0x4c,0);
        if (iVar20 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = FUN_11b71860(piVar11,0);
        }
        if (*(int *)(local_8 + 8) != 0) {
          FUN_11a8ad80();
        }
        *(undefined4 *)(local_8 + 8) = uVar12;
      }
      FUN_11c1be40(*(undefined4 *)(local_8 + 8),&local_a4,0,0xffffffff);
      param_1 = local_8;
    }
  }
  if (local_8c != 0) {
    FUN_11a8ad60();
  }
  if (local_90 != 0) {
    FUN_11a8ad80();
  }
  piVar11 = (int *)((local_98 & 0xfffffffc) + 4);
  LOCK();
  iVar6 = *piVar11;
  *piVar11 = *piVar11 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    (**(code **)(*DAT_123b004c + 0x30))(local_98 & 0xfffffffc);
  }
  piVar11 = (int *)((local_a0 & 0xfffffffc) + 4);
  LOCK();
  iVar6 = *piVar11;
  *piVar11 = *piVar11 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    (**(code **)(*DAT_123b004c + 0x30))(local_a0 & 0xfffffffc);
  }
  FUN_11b1bd20();
  if (local_64 != 0) {
    FUN_11a8ad60();
  }
  if (local_68 != 0) {
    FUN_11a8ad80();
  }
  piVar11 = (int *)((local_70[0] & 0xfffffffc) + 4);
  LOCK();
  iVar6 = *piVar11;
  *piVar11 = *piVar11 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    (**(code **)(*DAT_123b004c + 0x30))(local_70[0] & 0xfffffffc);
  }
  piVar11 = (int *)((local_78 & 0xfffffffc) + 4);
  LOCK();
  iVar6 = *piVar11;
  *piVar11 = *piVar11 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    (**(code **)(*DAT_123b004c + 0x30))(local_78 & 0xfffffffc);
  }
  (**(code **)(*DAT_123b004c + 0x30))(local_f0);
  iVar6 = local_34;
  FUN_11c57a10(local_34,local_30);
  (**(code **)(*DAT_123b004c + 0x30))(iVar6);
  return 1;
joined_r0x11c56763:
  while ((uVar16 < uVar10 &&
         (cVar4 = FUN_11c58150(*(undefined2 *)(iVar18 + uVar16 * 2)), cVar4 != '\0'))) {
    uVar16 = uVar16 + 1;
  }
code_r0x11c5677e:
  FUN_11b1dac0(local_c,iStack_10);
  local_c = local_c + 1;
  if (*(short *)(iVar18 + uVar16 * 2) == 0x2c) {
    do {
      uVar16 = uVar16 + 1;
      if (uVar10 <= uVar16) goto LAB_11c567c0;
      cVar4 = FUN_11c58150(*(undefined2 *)(iVar18 + uVar16 * 2));
    } while (cVar4 != '\0');
  }
  if (uVar10 <= uVar16) goto LAB_11c567c0;
  goto code_r0x11c56724;
}

