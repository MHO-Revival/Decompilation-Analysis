// FUN_11c31df0 @ 11c31df0  (3097 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 4, 5, 12, 16, 19, 20, 22, 24, 26, 27, 28]


/* [RE-AUTO c0]
   calls: libm_sse2_sqrt_precise
   strings:
     ""An image in TextLayout is NULL"" */

void __thiscall FUN_11c31df0(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint3 uVar13;
  uint uVar11;
  ushort *puVar12;
  int iVar14;
  uint uVar15;
  float10 fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_158 [11];
  char local_14d;
  undefined4 *local_14c;
  char cStack_146;
  char cStack_145;
  int *local_144;
  float fStack_140;
  uint uStack_134;
  byte local_12d;
  float fStack_12c;
  uint uStack_128;
  uint local_124;
  float fStack_120;
  int *piStack_11c;
  int iStack_118;
  float fStack_114;
  int *local_110;
  int *piStack_10c;
  float local_108;
  float local_104;
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  ushort *puStack_f4;
  float fStack_f0;
  uint uStack_d8;
  float fStack_d4;
  int local_d0;
  uint uStack_cc;
  int local_c8;
  float fStack_c0;
  undefined4 uStack_bc;
  ushort *puStack_b8;
  ushort *puStack_b4;
  int iStack_78;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  float fStack_64;
  int iStack_60;
  uint uStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int *piStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_11e11390 ^ (uint)auStack_158;
  iVar14 = 0;
  local_14c = param_2;
  local_c8 = param_3;
  local_124 = param_1[4];
  if ((((local_124 != 0) && (local_124 < (uint)param_1[1])) && (-1 < (int)local_124)) &&
     (param_1[1] != 0)) {
    iVar14 = *(int *)(((int *)*param_1)[local_124] + 0x10) - *(int *)(*(int *)*param_1 + 0x10);
  }
  local_12d = *(byte *)(param_1 + 0xd) >> 2 & 1;
  local_14d = '\0';
  local_104 = (float)((uint)(float)((double)iVar14 + (&DAT_11de9c60)[-(iVar14 >> 0x1f)]) ^
                     DAT_11de9c90);
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_144 = param_1;
  if (param_3 != 0) {
    local_14d = FUN_11c30480();
  }
  local_d0 = 0;
  local_110 = (int *)0x0;
  local_108 = 0.0;
  if (((*(byte *)(param_1 + 0xd) & 0x24) == 0) && (cVar6 = FUN_11c337b0(local_104), cVar6 != '\0'))
  {
    iVar14 = param_1[9];
    iVar7 = param_1[10];
    iVar9 = param_1[0xb];
    cStack_146 = '\x01';
    param_2[0x10] = param_1[8];
    param_2[0x11] = iVar14;
    param_2[0x12] = iVar7;
    param_2[0x13] = iVar9;
  }
  else {
    cStack_146 = '\0';
  }
  uStack_bc = 0xffff;
LAB_11c31f13:
  if ((uint)param_1[1] <= local_124) goto LAB_11c31fc2;
  if ((int)local_124 < 0) goto LAB_11c31fc2;
  if (local_12d == 0) {
    piVar2 = *(int **)(*param_1 + local_124 * 4);
    if (local_124 == param_1[4]) {
      bVar3 = (float)piVar2[4] + local_104 <=
              ((float)param_1[0xb] - (float)param_1[9]) + DAT_11cbf7f8;
    }
    else {
      if ((uint)param_1[4] < local_124) {
        if (*piVar2 < 0) {
          uVar15 = (uint)*(ushort *)((int)piVar2 + 0x16);
        }
        else {
          uVar15 = piVar2[6];
        }
        if ((float)(int)(uVar15 + piVar2[4]) + local_104 <=
            ((float)param_1[0xb] - (float)param_1[9]) + DAT_11cbf7f8) {
          bVar3 = true;
          goto LAB_11c31fc4;
        }
      }
      bVar3 = false;
    }
  }
  else {
    bVar3 = true;
  }
LAB_11c31fc4:
  do {
    if (!bVar3) {
      uVar8 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      *param_2 = *param_4;
      param_2[1] = uVar8;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      uVar8 = param_4[5];
      uVar4 = param_4[6];
      uVar5 = param_4[7];
      param_2[4] = param_4[4];
      param_2[5] = uVar8;
      param_2[6] = uVar4;
      param_2[7] = uVar5;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_4 + 8);
      param_2[10] = param_4[10];
      FUN_11a89daa();
      return;
    }
    piStack_10c = *(int **)(*param_1 + local_124 * 4);
    fStack_120 = (float)param_1[8] + (float)piStack_10c[3];
    if (*piStack_10c < 0) {
      uVar1 = *(ushort *)((int)piStack_10c + 0x1a);
    }
    else {
      uVar1 = *(ushort *)((int)piStack_10c + 0x26);
    }
    fStack_c0 = (float)uVar1 + local_104 + (float)param_1[9] + (float)piStack_10c[4];
    FUN_11c31a60(&puStack_b8,local_c8);
    iStack_118 = 0;
    uStack_128 = 0;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    piStack_44 = (int *)0x0;
    uVar15 = 0;
    iVar14 = 0;
    cStack_145 = '\x01';
    uStack_d8 = 0;
    fStack_fc = 0.0;
    fStack_f8 = 0.0;
    if (*piStack_10c < 0) {
      uVar10 = (uint)*(ushort *)((int)piStack_10c + 0x16);
      uVar1 = *(ushort *)((int)piStack_10c + 0x1a);
    }
    else {
      uVar10 = piStack_10c[6];
      uVar1 = *(ushort *)((int)piStack_10c + 0x26);
    }
    fStack_d4 = (float)(int)uVar10 - (float)uVar1;
    puVar12 = puStack_b8;
LAB_11c320c3:
    if ((puVar12 == (ushort *)0x0) || (puStack_b4 <= puVar12)) goto LAB_11c3288c;
    puStack_f4 = puVar12 + 3;
    uStack_134 = (uint)puVar12[1];
    if (((byte)puVar12[3] >> 6 & 1) != 0) {
      uStack_134 = -uStack_134;
    }
    uStack_100 = (uint)*puVar12;
    if ((ushort)uStack_bc <= *puVar12) {
      uStack_100 = 0xffffffff;
    }
    uStack_cc = uStack_6c;
    fStack_140 = 0.0;
    piStack_11c = (int *)0x0;
    fStack_114 = DAT_11de9a68;
    if (fStack_64 == 0.0) {
      fStack_114 = (float)((double)(puVar12[2] & 0xfff) + DAT_11de9c60);
      if ((puVar12[3] & 0x10) != 0) {
        fStack_114 = fStack_114 * DAT_11d06328;
      }
      fStack_114 = fStack_114 * DAT_11cbf7f8;
      fStack_12c = fStack_114 * DAT_11de98b8;
      if (iStack_68 == 0) {
        piStack_11c = (int *)0x0;
      }
      else {
        piStack_11c = *(int **)(iStack_68 + 0x18);
      }
      if ((*(byte *)(local_144 + 0xd) & 4) == 0) {
        iVar7 = (**(code **)(*piStack_11c + 0x1c))(uStack_100,&local_30);
        fStack_12c = *(float *)(iVar7 + 8) * fStack_12c;
        puVar12 = puStack_b8;
      }
      else {
        fStack_12c = 0.0;
      }
    }
    else {
      fStack_12c = *(float *)((int)fStack_64 + 0x14);
      fStack_140 = fStack_64;
    }
    fStack_f0 = fStack_120 -
                (float)((double)local_144[0xc] + (&DAT_11de9c60)[-(local_144[0xc] >> 0x1f)]);
    if ((*(byte *)(local_144 + 0xd) & 4) != 0) {
LAB_11c3225b:
      if (iStack_60 == 0) {
        local_14d = '\0';
      }
      else if ((*puStack_f4 & 0x100) == 0) {
        local_14d = '\x01';
      }
      if (cStack_145 != '\0') {
        FUN_11c2f5e0(fStack_f0,fStack_c0);
        cStack_145 = '\0';
      }
      iVar7 = iStack_78;
      if (((((*puStack_f4 >> 9 & 1) == 0) && (cStack_146 == '\0')) &&
          ((*(byte *)(local_144 + 0xd) & 0x24) == 0)) &&
         (((fVar19 = (float)local_144[8], fStack_f0 < fVar19 && (fVar19 < fStack_f0 + fStack_12c))
          || ((fStack_f0 < (float)local_144[10] && ((float)local_144[10] < fStack_f0 + fStack_12c)))
          ))) {
        fVar21 = (float)local_144[10];
        fVar20 = (float)local_144[9] - DAT_11ce4f68;
        fVar22 = (float)local_144[0xb] + DAT_11ce4f68;
        cStack_146 = '\x01';
        local_14c[0x10] = fVar19 - 0.0;
        local_14c[0x12] = fVar21 + 0.0;
        local_14c[0x11] = fVar20;
        local_14c[0x13] = fVar22;
      }
      if (fStack_140 == 0.0) {
        if (iStack_78 != local_d0) {
          FUN_11c2ecd0(iStack_78);
        }
        if ((piStack_11c != local_110) || (fStack_114 != local_108)) {
          FUN_11c2ed10(piStack_11c,fStack_114);
          FUN_11c2eb00(iStack_70);
        }
        iVar9 = iStack_118;
        if ((iVar14 == iStack_70) && (iStack_118 == iStack_60)) {
          if (iStack_70 != 0) {
            uStack_128 = uStack_128 + uStack_134;
          }
        }
        else {
          if (iVar14 != 0) {
            switch(iStack_118) {
            default:
              uVar8 = 0;
              break;
            case 2:
              uVar8 = 1;
              break;
            case 3:
              uVar8 = 2;
              break;
            case 4:
              uVar8 = 3;
              break;
            case 5:
              uVar8 = 4;
              break;
            case 6:
              uVar8 = 5;
            }
            FUN_11c2ec60(fStack_fc -
                         (float)((double)local_144[0xc] + (&DAT_11de9c60)[-(local_144[0xc] >> 0x1f)]
                                ),fStack_d4 * DAT_11de98e8 + fStack_f8,(float)(int)uStack_128,uVar8,
                         iVar14);
            iVar9 = extraout_ECX;
          }
          fStack_fc = fStack_120;
          fStack_f8 = fStack_c0;
          uStack_128 = uStack_134;
        }
        if ((uStack_6c != 0) ||
           (uVar10 = uStack_134, uVar15 = uStack_cc, fVar21 = fStack_50, fVar19 = fStack_4c,
           fVar20 = fStack_48, piVar2 = piStack_44, uStack_d8 != 0)) {
          fStack_140 = (float)(int)uStack_134;
          iVar14 = FUN_11bd1e30();
          iVar9 = FUN_11c331f0();
          fVar16 = (float10)FUN_11c33030();
          uVar15 = uStack_cc;
          fStack_140 = fStack_140 + fStack_120;
          fStack_f0 = fStack_120 + 0.0;
          fStack_54 = (float)((float10)fStack_c0 - fVar16);
          local_110 = (int *)(fStack_54 + (float)(iVar14 + iVar9));
          local_108 = fStack_54 + 0.0;
          uVar10 = uStack_d8;
          iVar9 = extraout_ECX_00;
          if (uStack_cc == uStack_d8) {
            fVar21 = fStack_50;
            fVar19 = fStack_4c;
            fVar20 = fStack_48;
            piVar2 = piStack_44;
            if (uStack_cc != 0) {
              fVar21 = fStack_f0;
              if (fStack_50 <= fStack_f0) {
                fVar21 = fStack_50;
              }
              if (fStack_48 <= fStack_140) {
                fStack_48 = fStack_140;
              }
              fVar19 = local_108;
              if (fStack_4c <= local_108) {
                fVar19 = fStack_4c;
              }
              fVar20 = fStack_48;
              if ((float)piStack_44 <= (float)local_110) {
                piVar2 = local_110;
              }
            }
          }
          else {
            fVar21 = fStack_f0;
            fVar19 = local_108;
            fVar20 = fStack_140;
            piVar2 = local_110;
            if (uStack_d8 != 0) {
              fStack_38 = (float)((uint)(float)((double)local_144[0xc] +
                                               (&DAT_11de9c60)[-(local_144[0xc] >> 0x1f)]) ^
                                 DAT_11de9c90);
              fStack_40 = fStack_38 + fStack_50;
              fStack_38 = fStack_38 + fStack_48;
              fStack_3c = fStack_4c + DAT_11cdb740;
              fStack_34 = (float)piStack_44 + DAT_11cdb740;
              uVar10 = FUN_11c2eb80(&fStack_40,uStack_d8);
              iVar9 = extraout_ECX_01;
              fVar21 = fStack_f0;
              fVar19 = local_108;
              fVar20 = fStack_140;
              piVar2 = local_110;
            }
          }
        }
        piStack_44 = piVar2;
        fStack_48 = fVar20;
        fStack_4c = fVar19;
        fStack_50 = fVar21;
        uVar13 = (uint3)((uint)iVar9 >> 8);
        if (iStack_68 == 0) {
          uVar11 = (uint)uVar13 << 8;
          uVar10 = uVar10 & 0xffffff00;
        }
        else {
          uVar11 = CONCAT31(uVar13,*(undefined1 *)(iStack_68 + 0xc)) & 0xffffff01;
          uVar10 = CONCAT31((uint3)(*(uint *)(iStack_68 + 0xc) >> 9),
                            (char)(*(uint *)(iStack_68 + 0xc) >> 1)) & 0xffffff01;
        }
        FUN_11c2e990(uStack_100,(float)(int)uStack_134,(byte)(*puStack_f4 >> 9) & 1,uVar10,uVar11);
        local_d0 = iVar7;
        local_110 = piStack_11c;
        local_108 = fStack_114;
        puVar12 = puStack_b8;
        uStack_d8 = uVar15;
        if (local_14d == '\0') {
          iVar14 = 0;
          iStack_118 = 0;
        }
        else {
          iStack_118 = iStack_60;
          iVar14 = iStack_70;
        }
      }
      else if (*(int *)((int)fStack_140 + 8) == 0) {
        FUN_11bcf500(0x21000,"An image in TextLayout is NULL");
        puVar12 = puStack_b8;
      }
      else {
        dVar17 = (double)(*(float *)((int)fStack_140 + 0x24) * *(float *)((int)fStack_140 + 0x24) +
                         *(float *)((int)fStack_140 + 0x34) * *(float *)((int)fStack_140 + 0x34));
        libm_sse2_sqrt_precise(*(undefined4 *)((int)fStack_140 + 0x10),(float)(int)uStack_134);
        dVar18 = (double)(*(float *)((int)fStack_140 + 0x20) * *(float *)((int)fStack_140 + 0x20) +
                         *(float *)((int)fStack_140 + 0x30) * *(float *)((int)fStack_140 + 0x30));
        libm_sse2_sqrt_precise((float)dVar17);
        FUN_11c2ea60(*(undefined4 *)((int)fStack_140 + 8),(float)dVar18);
        puVar12 = puStack_b8;
      }
LAB_11c327eb:
      if ((puVar12 != (ushort *)0x0) && (puVar12 < puStack_b4)) {
        if (uStack_5c == 0) {
          uStack_5c = (uint)(puVar12[2] >> 0xc);
        }
        puStack_b8 = puVar12 + 4;
        if ((((puVar12[6] & 0xf000) != 0) && (uStack_5c != 0)) &&
           (cVar6 = FUN_11c30a30(), cVar6 == '\0')) {
          FUN_11c2fc10(uStack_5c);
          uStack_5c = 0;
        }
        FUN_11c34580();
        puVar12 = puStack_b8;
      }
      fStack_120 = (float)(int)uStack_134 + fStack_120;
      goto LAB_11c320c3;
    }
    if ((uStack_100 != 0xffffffff) && (fStack_f0 + fStack_12c <= (float)local_144[8]))
    goto LAB_11c327eb;
    if ((int)fStack_f0 < (int)(float)local_144[10]) goto LAB_11c3225b;
LAB_11c3288c:
    if (iVar14 != 0) {
      switch(iStack_118) {
      default:
        uVar8 = 0;
        break;
      case 2:
        uVar8 = 1;
        break;
      case 3:
        uVar8 = 2;
        break;
      case 4:
        uVar8 = 3;
        break;
      case 5:
        uVar8 = 4;
        break;
      case 6:
        uVar8 = 5;
      }
      FUN_11c2ec60(fStack_fc -
                   (float)((double)local_144[0xc] + (&DAT_11de9c60)[-(local_144[0xc] >> 0x1f)]),
                   fStack_d4 * DAT_11de98e8 + fStack_f8,(float)(int)uStack_128,uVar8,iVar14);
    }
    param_1 = local_144;
    param_2 = local_14c;
    if (uVar15 != 0) {
      fVar19 = (float)((uint)(float)((double)local_144[0xc] +
                                    (&DAT_11de9c60)[-(local_144[0xc] >> 0x1f)]) ^ DAT_11de9c90);
      fStack_50 = fVar19 + fStack_50;
      fStack_48 = fVar19 + fStack_48;
      fStack_4c = fStack_4c + DAT_11cdb740;
      piStack_44 = (int *)((float)piStack_44 + DAT_11cdb740);
      FUN_11c2eb80(&fStack_50,uVar15);
    }
    if (fStack_64 != 0.0) {
      FUN_11a8ad80();
    }
    if (iStack_68 != 0) {
      FUN_11a8ad60();
    }
    if (local_124 < (uint)param_1[1]) break;
LAB_11c31fc2:
    bVar3 = false;
  } while( true );
  local_124 = local_124 + 1;
  goto LAB_11c31f13;
}

