/* ===== FUN_110fe590 @ 110fe590  size=2570 ===== */
// calls: _stricmp, libm_sse2_sqrt_precise
// strings:
//   "OnChgFireMode"
//   "OnEnter"
//   "OnLeave"
//   "swordflashghostlevel01"
//   "start"
//   "ghostlevel01"
//   "swordflashghostlevel02"
//   "ghostlevel02"
//   "swordflash"
//   "default"
//   "bloodsplash"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c0]
   calls: _stricmp, libm_sse2_sqrt_precise
   strings:
     ""OnChgFireMode""
     ""OnEnter""
     ""OnLeave""
     ""swordflashghostlevel01""
     ""start""
     ""ghostlevel01""
     ""swordflashghostlevel02""
     ""ghostlevel02""
     ""swordflash""
     ""default"" */

void __thiscall FUN_110fe590(int param_1,int *param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  float fVar10;
  undefined1 *puVar11;
  int *unaff_ESI;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float *pfVar26;
  char *pcVar27;
  float local_68;
  undefined4 uStack_60;
  undefined1 auStack_4c [4];
  char *local_48;
  undefined8 local_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float afStack_2c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  iVar3 = *param_2;
  if ((iVar3 == 0x11d) && (*(char *)(param_1 + 0x49c) == '\0')) {
    iVar3 = _stricmp((char *)param_2[3],"OnChgFireMode");
    if (iVar3 == 0) {
      local_48 = (char *)param_2[2];
      local_44 = (double)CONCAT44(local_44._4_4_,local_48);
      iVar3 = FUN_10b6c3f0(&local_44);
      FUN_10bb5970();
      if (iVar3 == param_1 + 0x360) {
        FUN_10cb6200(param_2);
        return;
      }
      iVar3 = *(int *)(iVar3 + 0x14);
      iVar4 = (**(code **)(unaff_ESI[0xd3] + 0x80))();
      if (iVar4 != iVar3) {
        (**(code **)(unaff_ESI[0xd3] + 0x88))(iVar3);
      }
      goto LAB_110fe637;
    }
    iVar3 = _stricmp((char *)param_2[3],"OnEnter");
    if ((iVar3 == 0) || (iVar3 = _stricmp((char *)param_2[3],"OnLeave"), iVar3 == 0)) {
      local_48 = (char *)param_2[2];
      local_44 = (double)CONCAT44(local_44._4_4_,local_48);
      iVar3 = FUN_10b6c3f0(&local_44);
      FUN_10bb5970();
      if (iVar3 != param_1 + 0x360) {
        iVar3 = *(int *)(iVar3 + 0x14);
        iVar4 = (**(code **)(*(int *)(param_1 + 0x34c) + 0x80))();
        if (iVar4 != iVar3) {
          (**(code **)(*(int *)(param_1 + 0x34c) + 0x88))(iVar3);
        }
      }
    }
  }
  else {
    if (iVar3 != 0x11e) {
      if (iVar3 != 0x130) goto LAB_110fe637;
      iVar3 = _stricmp((char *)param_2[3],"swordflashghostlevel01");
      pcVar12 = _stricmp_exref;
      if (iVar3 == 0) {
        local_48 = (char *)param_2[2];
        if (local_48 == (char *)0x0) goto LAB_110fe637;
        iVar3 = _stricmp(local_48,"start");
        if (iVar3 != 0) {
LAB_110fe8fc:
          iVar3 = (*pcVar12)(local_48,&DAT_11cbde00);
          if (iVar3 == 0) {
            FUN_11108cf0();
            if (*(int **)(param_1 + 0x494) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0x494) + 4))(0);
              FUN_10cb6200(param_2);
              return;
            }
          }
          goto LAB_110fe637;
        }
        pcVar27 = "ghostlevel01";
      }
      else {
        iVar3 = _stricmp((char *)param_2[3],"swordflashghostlevel02");
        pcVar12 = _stricmp_exref;
        if (iVar3 == 0) {
          local_48 = (char *)param_2[2];
          if (local_48 == (char *)0x0) goto LAB_110fe637;
          iVar3 = _stricmp(local_48,"start");
          if (iVar3 != 0) goto LAB_110fe8fc;
          pcVar27 = "ghostlevel02";
        }
        else {
          iVar3 = _stricmp((char *)param_2[3],"swordflash");
          pcVar12 = _stricmp_exref;
          if (iVar3 != 0) {
            iVar3 = _stricmp((char *)param_2[3],"bloodsplash");
            if ((((iVar3 == 0) && (*(int **)(param_1 + 0xc) != (int *)0x0)) &&
                (piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x1b8))(1),
                piVar5 != (int *)0x0)) &&
               ((piVar5 = (int *)(**(code **)(*piVar5 + 0x50))(), piVar5 != (int *)0x0 &&
                (iVar3 = param_2[2], *(int *)(param_1 + 0x18) != 0)))) {
              local_48 = *(char **)(iVar3 + 0x1c);
              iVar4 = FUN_11106980(&local_48);
              if ((iVar4 != *(int *)(param_1 + 0x18) + 0x1d8) &&
                 (uVar7 = *(uint *)(iVar3 + 0x20), uVar7 < 2)) {
                pcVar27 = *(char **)(iVar4 + 0x18 + uVar7 * 4);
                local_48 = "";
                if (pcVar27 != (char *)0x0) {
                  local_48 = pcVar27;
                }
                puVar11 = &DAT_11d9d32b;
                if (*(undefined1 **)(iVar4 + 0x14) != (undefined1 *)0x0) {
                  puVar11 = *(undefined1 **)(iVar4 + 0x14);
                }
                sVar2 = (**(code **)(*piVar5 + 0x10))(puVar11);
                fVar10 = (float)(int)sVar2;
                if (fVar10 != -NAN) {
                  iVar3 = (**(code **)(*piVar5 + 0x20))(fVar10);
                  uStack_24 = 0;
                  uStack_20 = 0;
                  uStack_18 = *(undefined8 *)(iVar3 + 0x10);
                  uStack_10 = *(undefined4 *)(iVar3 + 0x18);
                  uStack_1c = 0x3f800000;
                  (**(code **)(*piVar5 + 0x1c))(0);
                  pfVar26 = &fStack_38;
                  (**(code **)(*piVar5 + 200))(pfVar26);
                  puVar11 = auStack_4c;
                  piVar8 = (int *)(**(code **)(*piVar5 + 0xd0))(puVar11);
                  uVar6 = 0;
                  iVar3 = *piVar8;
                  fVar18 = (float)piVar8[2];
                  pfVar9 = (float *)(**(code **)(*unaff_ESI + 0x20))
                                              (0,puVar11,pfVar26,piVar8[3],fVar10,piVar8[1]);
                  fVar21 = pfVar9[1];
                  fVar17 = pfVar9[2];
                  fVar23 = *pfVar9;
                  fVar1 = pfVar9[3];
                  fVar25 = 0.0;
                  fVar20 = *(float *)(iVar3 + 0x10) * 0.0;
                  fVar24 = *(float *)(iVar3 + 0xc) * 0.0;
                  fVar13 = (float)pfVar26 * fVar1 -
                           (fVar18 * fVar23 + fVar10 * fVar21 + (float)unaff_ESI * fVar17);
                  fVar14 = (float)((uint)((fVar10 * fVar17 - (float)unaff_ESI * fVar21) +
                                          (float)pfVar26 * fVar23 + fVar18 * fVar1) ^ DAT_11de9c90);
                  fVar15 = (float)((uint)(((float)unaff_ESI * fVar23 - fVar18 * fVar17) +
                                          (float)pfVar26 * fVar21 + fVar10 * fVar1) ^ DAT_11de9c90);
                  fVar10 = (float)((uint)((fVar18 * fVar21 - fVar10 * fVar23) +
                                          (float)pfVar26 * fVar17 + (float)unaff_ESI * fVar1) ^
                                  DAT_11de9c90);
                  dVar22 = (double)(fVar24 + fVar20 + *(float *)(iVar3 + 0x14)) + DAT_11de9978;
                  if (dVar22 <= _DAT_11cc33a0) {
                    local_68 = 0.80999994;
                    /* WARNING: Ignoring partial resolution of indirect */
                    local_44._0_4_ = 0.0;
                    fVar18 = (float)((uint)fStack_30 ^ DAT_11de9c90);
                    /* WARNING: Ignoring partial resolution of indirect */
                    local_44._4_4_ = afStack_2c[0];
                    local_44._0_4_ = SUB84(local_44,0);
                    local_44._4_4_ = SUB84(local_44,4);
                    fVar21 = (float)local_44 * (float)local_44 + local_44._4_4_ * local_44._4_4_ +
                             fVar18 * fVar18 + DAT_11de98a0;
                    auVar19 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
                    fVar17 = auVar19._0_4_;
                    fVar17 = (DAT_11de9938 - fVar17 * fVar21 * fVar17 * DAT_11de98e8) * fVar17;
                    fVar23 = (float)local_44 * fVar17;
                    fVar21 = local_44._4_4_ * fVar17;
                    fVar18 = fVar18 * fVar17;
                    afStack_2c[0] = fVar18;
                  }
                  else {
                    fVar18 = *(float *)(iVar3 + 0x14) * 0.0;
                    fVar20 = fVar20 - fVar24;
                    local_68 = *(float *)(iVar3 + 0xc) - fVar18;
                    local_44 = (double)(fVar18 - *(float *)(iVar3 + 0x10));
                    dVar16 = local_44 * local_44 + dVar22 * dVar22 +
                             (double)local_68 * (double)local_68 + (double)fVar20 * (double)fVar20;
                    libm_sse2_sqrt_precise(uVar6,puVar11,fVar13,fVar15,fVar10,fVar14,fVar20);
                    dVar16 = DAT_11de9978 / dVar16;
                    fVar25 = (float)(dVar16 * dVar22);
                    fVar23 = (float)(dVar16 * local_44);
                    fVar21 = (float)(dVar16 * (double)local_68);
                    fVar18 = (float)(dVar16 * (double)fVar20);
                  }
                  local_44 = (double)CONCAT44((fVar23 * fVar10 - fVar18 * fVar14) + fVar21 * fVar13
                                              + fVar25 * fVar15,
                                              (fVar18 * fVar15 - fVar21 * fVar10) + fVar23 * fVar13
                                              + fVar25 * fVar14);
                  fStack_3c = (fVar21 * fVar14 - fVar23 * fVar15) + fVar18 * fVar13 +
                              fVar25 * fVar10;
                  fStack_38 = fVar25 * fVar13 -
                              (fVar21 * fVar15 + fVar23 * fVar14 + fVar18 * fVar10);
                  FUN_10abc150(&local_44);
                  fStack_38 = fStack_38 * DAT_11d148a0;
                  fStack_34 = fStack_34 * DAT_11d148a0;
                  fStack_30 = fStack_30 * DAT_11d148a0;
                  if (*(float *)((int)local_68 + 0x24) <= 0.0) {
                    (**(code **)(*piVar5 + 0x1e8))
                              (uStack_60,iVar3,afStack_2c,&fStack_38,0x3f800000,0,1,1,0,0);
                    FUN_10cb6200(param_2);
                    return;
                  }
                  (**(code **)(*piVar5 + 0x204))
                            (*(float *)((int)local_68 + 0x24),uStack_60,iVar3,afStack_2c,&fStack_38,
                             0x3f800000,0,1,1);
                  FUN_10cb6200(param_2);
                  return;
                }
              }
            }
            goto LAB_110fe637;
          }
          local_48 = (char *)param_2[2];
          if (local_48 == (char *)0x0) goto LAB_110fe637;
          iVar3 = _stricmp(local_48,"start");
          if (iVar3 != 0) goto LAB_110fe8fc;
          pcVar27 = "default";
        }
      }
      FUN_11104250(pcVar27);
      FUN_11108cf0();
      if (*(int **)(param_1 + 0x494) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x494) + 8))();
        (**(code **)(**(int **)(param_1 + 0x494) + 4))(1);
        FUN_10cb6200(param_2);
        return;
      }
      goto LAB_110fe637;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
    iVar3 = *DAT_1202f458;
    uVar6 = (**(code **)(*piVar5 + 8))();
    uVar7 = (**(code **)(iVar3 + 0x2c))(uVar6);
    if ((uVar7 & 0xff) != *(uint *)(param_2[4] + 0x24)) {
      return;
    }
    iVar3 = _stricmp((char *)param_2[3],"OnEnter");
    if ((iVar3 == 0) || (iVar3 = _stricmp((char *)param_2[3],"OnLeave"), iVar3 == 0)) {
      local_48 = (char *)param_2[2];
      local_44 = (double)CONCAT44(local_44._4_4_,local_48);
      iVar3 = FUN_10b6c3f0(&local_44);
      FUN_10bb5970();
      if (iVar3 != param_1 + 0x360) {
        iVar3 = *(int *)(iVar3 + 0x14);
        iVar4 = (**(code **)(*(int *)(param_1 + 0x34c) + 0x80))();
        if (iVar4 != iVar3) {
          (**(code **)(*(int *)(param_1 + 0x34c) + 0x88))(iVar3);
        }
      }
    }
  }
  if (*(int **)(param_1 + 0x350) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x350) + 0x160))(param_2);
    FUN_10cb6200(param_2);
    return;
  }
LAB_110fe637:
  FUN_10cb6200(param_2);
  return;
}



/* ===== FUN_110ff0d0 @ 110ff0d0  size=751 ===== */
// strings:
//   "FireModes"
//   "ZoomModes"

/* [RE-AUTO c0]
   strings:
     ""FireModes""
     ""ZoomModes"" */

void __thiscall FUN_110ff0d0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  (**(code **)(*param_2 + 0x18))(param_1,0x4b4,1);
  FUN_10cb66e0(param_2);
  (**(code **)(*param_2 + 0x24))("FireModes");
  if (*(int *)(param_1 + 0x370) != 0) {
    (**(code **)(*param_2 + 0x18))
              (*(int *)(param_1 + 0x368) + 0x10,*(int *)(param_1 + 0x370) * 0x18,1);
  }
  iVar3 = *(int *)(param_1 + 0x380) - *(int *)(param_1 + 0x378) >> 2;
  if (iVar3 != 0) {
    (**(code **)(*param_2 + 0x18))(*(int *)(param_1 + 0x378),iVar3 << 2,1);
  }
  iVar3 = *(int *)(param_1 + 0x368);
  if (iVar3 != param_1 + 0x360) {
    do {
      iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + -8);
      if (iVar4 != 0) {
        (**(code **)(*param_2 + 0x18))(*(int *)(iVar3 + 0x10),iVar4,1);
      }
      iVar4 = *(int *)(iVar3 + 0xc);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar3 + 4);
        if (iVar3 == *(int *)(iVar4 + 0xc)) {
          do {
            iVar3 = iVar4;
            iVar4 = *(int *)(iVar3 + 4);
          } while (iVar3 == *(int *)(iVar4 + 0xc));
        }
        if (*(int *)(iVar3 + 0xc) != iVar4) {
          iVar3 = iVar4;
        }
      }
      else {
        for (iVar2 = *(int *)(iVar4 + 8); iVar3 = iVar4, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
          iVar4 = iVar2;
        }
      }
    } while (iVar3 != param_1 + 0x360);
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x37c) - *(int *)(param_1 + 0x378) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x378) + uVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1c))(param_2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x37c) - *(int *)(param_1 + 0x378) >> 2));
  }
  (**(code **)(*param_2 + 0x2c))();
  (**(code **)(*param_2 + 0x24))("ZoomModes");
  if (*(int *)(param_1 + 0x394) != 0) {
    (**(code **)(*param_2 + 0x18))
              (*(int *)(param_1 + 0x38c) + 0x10,*(int *)(param_1 + 0x394) * 0x18,1);
  }
  iVar3 = *(int *)(param_1 + 0x3a4) - *(int *)(param_1 + 0x39c) >> 2;
  if (iVar3 != 0) {
    (**(code **)(*param_2 + 0x18))(*(int *)(param_1 + 0x39c),iVar3 << 2,1);
  }
  iVar3 = *(int *)(param_1 + 0x38c);
  if (iVar3 != param_1 + 900) {
    do {
      iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + -8);
      if (iVar4 != 0) {
        (**(code **)(*param_2 + 0x18))(*(int *)(iVar3 + 0x10),iVar4,1);
      }
      iVar4 = *(int *)(iVar3 + 0xc);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar3 + 4);
        if (iVar3 == *(int *)(iVar4 + 0xc)) {
          do {
            iVar3 = iVar4;
            iVar4 = *(int *)(iVar3 + 4);
          } while (iVar3 == *(int *)(iVar4 + 0xc));
        }
        if (*(int *)(iVar3 + 0xc) != iVar4) {
          iVar3 = iVar4;
        }
      }
      else {
        for (iVar2 = *(int *)(iVar4 + 8); iVar3 = iVar4, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
          iVar4 = iVar2;
        }
      }
    } while (iVar3 != param_1 + 900);
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x3a0) - *(int *)(param_1 + 0x39c) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x39c) + uVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(param_2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x3a0) - *(int *)(param_1 + 0x39c) >> 2));
  }
  (**(code **)(*param_2 + 0x2c))();
  (**(code **)(*param_2 + 0x24))(&DAT_11ddfa14);
  if (*(int *)(param_1 + 0x3b8) != 0) {
    (**(code **)(*param_2 + 0x18))
              (*(int *)(param_1 + 0x3b0) + 0x10,*(int *)(param_1 + 0x3b8) * 0x18,1);
  }
  if (*(int *)(param_1 + 0x3d0) != 0) {
    (**(code **)(*param_2 + 0x18))
              (*(int *)(param_1 + 0x3c8) + 0x10,*(int *)(param_1 + 0x3d0) * 0x18,1);
  }
  if (*(int *)(param_1 + 1000) != 0) {
    (**(code **)(*param_2 + 0x18))
              (*(int *)(param_1 + 0x3e0) + 0x10,*(int *)(param_1 + 1000) * 0x18,1);
  }
  if (*(int *)(param_1 + 0x400) != 0) {
    (**(code **)(*param_2 + 0x18))
              (*(int *)(param_1 + 0x3f8) + 0x10,*(int *)(param_1 + 0x400) * 0x18,1);
  }
  (**(code **)(*param_2 + 0x2c))();
  iVar3 = *(int *)(param_1 + 0x424) - *(int *)(param_1 + 0x41c) >> 2;
  if (iVar3 != 0) {
    (**(code **)(*param_2 + 0x18))(*(int *)(param_1 + 0x41c),iVar3 << 2,1);
  }
  return;
}



/* ===== FUN_11102000 @ 11102000  size=386 ===== */
// calls: _stricmp
// strings:
//   "firemodes"

/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""firemodes"" */

undefined1 __thiscall FUN_11102000(int *param_1,int *param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_6;
  undefined1 local_5;
  
  if (DAT_1202f450 == 0) {
    return 0;
  }
  local_6 = 0;
  local_5 = 0;
  piVar6 = (int *)param_1[0x36];
  do {
    if (piVar6 == param_1 + 0x34) {
      (**(code **)(*param_2 + 0x34))(0);
      (**(code **)(*param_2 + 0x34))(1);
      *(undefined1 *)(param_1 + 0x10f) = local_6;
      return local_5;
    }
    if ((piVar6[4] == *(int *)(DAT_1202f450 + 0xd4)) || (piVar6[4] == *(int *)(DAT_1202f450 + 0xd8))
       ) {
      local_6 = 1;
    }
    iVar1 = (**(code **)(*param_1 + 0x284))(piVar6 + 4);
    if (((iVar1 != 0) && (*(int **)(iVar1 + 0x24) != (int *)0x0)) &&
       (piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x24) + 0x58))("firemodes"),
       piVar2 != (int *)0x0)) {
      iVar1 = (**(code **)(*piVar2 + 0x50))();
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          piVar3 = (int *)(**(code **)(*piVar2 + 0x5c))(iVar7);
          pcVar4 = (char *)(**(code **)(*piVar3 + 0x28))(&DAT_11dbac80);
          if ((pcVar4 != (char *)0x0) && (iVar5 = _stricmp(pcVar4,param_3), iVar5 == 0)) {
            iVar1 = *param_2;
LAB_11102105:
            (**(code **)(iVar1 + 0x2c))(piVar3);
            local_5 = 1;
            break;
          }
          pcVar4 = (char *)(**(code **)(*piVar3 + 0x28))(&DAT_11dca14c);
          if ((pcVar4 != (char *)0x0) && (iVar5 = _stricmp(pcVar4,param_3), iVar5 == 0)) {
            iVar1 = *param_2;
            goto LAB_11102105;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
    }
    piVar2 = (int *)piVar6[3];
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)piVar6[1];
      if (piVar6 == (int *)piVar2[3]) {
        do {
          piVar6 = piVar2;
          piVar2 = (int *)piVar6[1];
        } while (piVar6 == (int *)piVar2[3]);
      }
      if ((int *)piVar6[3] != piVar2) {
        piVar6 = piVar2;
      }
    }
    else {
      for (piVar3 = (int *)piVar2[2]; piVar6 = piVar2, piVar3 != (int *)0x0;
          piVar3 = (int *)piVar3[2]) {
        piVar2 = piVar3;
      }
    }
  } while( true );
}



/* ===== FUN_111047e0 @ 111047e0  size=1053 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "params"
//   "melee_attack_firemode"
//   "value"
//   "firemodes"
//   "zoommodes"
//   "ammos"
//   "ai_descriptor"
//   "/Scripts/Entities/Items/XML/Weapons/"
//   "_firemode.xml"

/* [RE-AUTO c0]
   strings:
     ""params""
     ""melee_attack_firemode""
     ""value""
     ""firemodes""
     ""zoommodes""
     ""ammos""
     ""ai_descriptor""
     ""/Scripts/Entities/Items/XML/Weapons/""
     ""_firemode.xml"" */

undefined1 __thiscall FUN_111047e0(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  int *local_10;
  undefined1 *local_c;
  int local_8;
  
  piVar6 = param_2;
  local_8 = param_1;
  cVar2 = FUN_10cca8f0(param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  local_14 = &DAT_1201fc98;
  local_1c = (**(code **)(*piVar6 + 0x58))("params");
  piVar3 = (int *)FUN_10ab25f0("melee_attack_firemode");
  if ((piVar3 != (int *)0x0) &&
     (pcVar4 = (char *)(**(code **)(*piVar3 + 0x28))("value"), pcVar4 != (char *)0x0)) {
    pcVar9 = pcVar4;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_1083ab70(pcVar4,(int)pcVar9 - (int)(pcVar4 + 1));
  }
  if ((((int *)DAT_1202e818[0x34] != (int *)0x0) &&
      (cVar2 = (**(code **)(*(int *)DAT_1202e818[0x34] + 0x164))(), cVar2 == '\0')) ||
     (*(char *)((int)DAT_1202e818 + 0x209) != '\0')) {
    uVar5 = (**(code **)(*piVar6 + 0x58))("firemodes");
    FUN_11104d20(uVar5);
  }
  uVar5 = (**(code **)(*piVar6 + 0x58))("zoommodes");
  FUN_11104fa0(uVar5);
  uVar5 = (**(code **)(*piVar6 + 0x58))("ammos");
  FUN_11105270(uVar5);
  uVar5 = (**(code **)(*piVar6 + 0x58))("ai_descriptor");
  FUN_11105400(uVar5);
  *(int **)(param_1 + 0x418) = piVar6;
  (**(code **)(*piVar6 + 4))();
  if ((((int *)DAT_1202e818[0x34] == (int *)0x0) ||
      (cVar2 = (**(code **)(*(int *)DAT_1202e818[0x34] + 0x164))(), cVar2 != '\0')) &&
     (*(char *)((int)DAT_1202e818 + 0x209) == '\0')) goto LAB_11104bb1;
  piVar6 = (int *)(**(code **)(**(int **)(local_8 + 0xc) + 0xc))();
  uVar5 = (**(code **)(*piVar6 + 8))();
  CInfoRecord__GetModelString(uVar5);
  uVar5 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  CInfoRecord__GetModelString(uVar5);
  piVar6 = (int *)FUN_10a4b980(&local_24,&local_18,"/Scripts/Entities/Items/XML/Weapons/");
  if (*(int *)(*piVar6 + -0xc) < 0) {
    local_c = &DAT_1201fc98;
  }
  else {
    local_c = (undefined1 *)*piVar6;
    FUN_10c3dab0(local_c + -0xc);
  }
  piVar6 = param_2;
  FUN_10a4c990(param_2,param_2[-2]);
  piVar3 = (int *)FUN_10a4b980(&local_20,&local_c,"_firemode.xml");
  if (piVar6 != (int *)*piVar3) {
    if (piVar6[-3] < 0) {
      if (-1 < *(int *)(*piVar3 + -0xc)) {
LAB_111049ce:
        param_2 = (int *)*piVar3;
        FUN_10c3dab0(param_2 + -3);
      }
    }
    else {
      if (-1 < *(int *)(*piVar3 + -0xc)) {
        FUN_1083ac70();
        goto LAB_111049ce;
      }
      FUN_1083ac70();
      param_2 = (int *)*piVar3;
    }
  }
  piVar6 = (int *)(local_20 + -0xc);
  if ((-1 < *piVar6) && (iVar7 = FUN_10c3dad0(piVar6), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_20 + -4));
    FUN_10c3d900(piVar6);
  }
  puVar1 = local_c;
  piVar6 = (int *)(local_c + -0xc);
  if ((-1 < *piVar6) && (iVar7 = FUN_10c3dad0(piVar6), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
    FUN_10c3d900(piVar6);
  }
  piVar6 = (int *)(local_24 + -0xc);
  if ((-1 < *piVar6) && (iVar7 = FUN_10c3dad0(piVar6), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_24 + -4));
    FUN_10c3d900(piVar6);
  }
  piVar6 = (int *)(local_18 + -0xc);
  if ((-1 < *piVar6) && (iVar7 = FUN_10c3dad0(piVar6), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_18 + -4));
    FUN_10c3d900(piVar6);
  }
  FUN_10ae00d0(&param_2);
  piVar6 = param_2;
  if ((int *)DAT_1202e818[0x22] == (int *)0x0) {
    piVar3 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    piVar6 = param_2;
    piVar3 = (int *)(**(code **)(*piVar3 + 0x40))(&local_2c,param_2,0);
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)();
    }
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[0x22] + 4))(&local_28,param_2,1,0xffffdd48);
    local_2c = local_28;
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)();
      local_2c = local_28;
    }
  }
  piVar3 = (int *)*piVar3;
  local_10 = piVar3;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 4))();
  }
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_30,piVar6,0,1,0);
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)();
    }
    piVar3 = (int *)*piVar3;
    local_10 = piVar3;
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 4))();
    }
  }
  FUN_11105900(&local_10);
  if (*(int *)(local_14 + -8) != 0) {
    piVar8 = (int *)(**(code **)(*(int *)(local_8 + 0x34c) + 0x74))(local_14);
    *(int **)(local_8 + 0x354) = piVar8;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0x104))(0);
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  piVar3 = piVar6 + -3;
  if ((-1 < *piVar3) && (iVar7 = FUN_10c3dad0(piVar3), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar6[-1]);
    FUN_10c3d900(piVar3);
  }
LAB_11104bb1:
  iVar7 = local_8;
  FUN_11106020();
  (**(code **)(**(int **)(iVar7 + 0x42c) + 0x14))(1);
  puVar1 = local_14;
  piVar6 = (int *)(local_14 + -0xc);
  if ((-1 < *piVar6) && (iVar7 = FUN_10c3dad0(piVar6), iVar7 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar1 + -4));
    FUN_10c3d900(piVar6);
  }
  return 1;
}



/* ===== FUN_11104c00 @ 11104c00  size=141 ===== */
// calls: _stricmp
// strings:
//   "firemodes"

/* [RE-AUTO c0]
   calls: _stricmp
   strings:
     ""firemodes"" */

int * __thiscall FUN_11104c00(int param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char *_Str2;
  int iVar4;
  int iVar5;
  
  if (*(int **)(param_1 + 0x418) == (int *)0x0) {
    return (int *)0x0;
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x418) + 0x58))("firemodes");
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = (**(code **)(*piVar1 + 0x50))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      piVar3 = (int *)(**(code **)(*piVar1 + 0x5c))(iVar5);
      _Str2 = (char *)(**(code **)(*piVar3 + 0x28))(&DAT_11dbac80);
      if ((_Str2 != (char *)0x0) && (*_Str2 != '\0')) {
        iVar4 = _stricmp(param_2,_Str2);
        if (iVar4 == 0) {
          return piVar3;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return (int *)0x0;
}



/* ===== FUN_11104d20 @ 11104d20  size=633 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "/Scripts/Entities/Items/XML/Weapons/"
//   "_firemode.xml"

/* [RE-AUTO c0]
   strings:
     ""/Scripts/Entities/Items/XML/Weapons/""
     ""_firemode.xml"" */

void __fastcall FUN_11104d20(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar7;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined1 *puVar6;
  
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
  uVar3 = (**(code **)(*piVar2 + 8))();
  CInfoRecord__GetModelString(uVar3);
  uVar3 = (**(code **)(*(int *)DAT_1202e818[0x16] + 0x68))();
  CInfoRecord__GetModelString(uVar3);
  local_20 = (int *)(local_18 + -0xc);
  if (*local_20 < 0) {
    local_10 = &DAT_1201fc98;
  }
  else {
    local_10 = local_18;
    FUN_10c3dab0(local_20);
  }
  FUN_10a4c990("/Scripts/Entities/Items/XML/Weapons/",0x24);
  puVar7 = local_10;
  piVar2 = (int *)(local_10 + -0xc);
  if (*piVar2 < 0) {
    local_14 = &DAT_1201fc98;
  }
  else {
    local_14 = local_10;
    FUN_10c3dab0(piVar2);
  }
  FUN_10a4c990(local_8,*(undefined4 *)(local_8 + -8));
  local_1c = (int *)(local_14 + -0xc);
  if (*local_1c < 0) {
    local_c = &DAT_1201fc98;
  }
  else {
    local_c = local_14;
    FUN_10c3dab0(local_1c);
  }
  FUN_10a4c990("_firemode.xml",0xd);
  puVar1 = local_c;
  puVar6 = local_c;
  if (local_8 != local_c) {
    if (*(int *)(local_8 + -0xc) < 0) {
      if (*(int *)(local_c + -0xc) < 0) goto LAB_11104e43;
    }
    else {
      if (*(int *)(local_c + -0xc) < 0) {
        FUN_1083ac70();
        local_8 = local_c;
        puVar6 = local_c;
        goto LAB_11104e43;
      }
      FUN_1083ac70();
    }
    puVar6 = local_c;
    local_8 = local_c;
    FUN_10c3dab0(puVar1 + -0xc);
  }
LAB_11104e43:
  piVar5 = (int *)(puVar6 + -0xc);
  if ((-1 < *piVar5) && (iVar4 = FUN_10c3dad0(piVar5), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar6 + -4));
    FUN_10c3d900(piVar5);
  }
  piVar5 = local_1c;
  if ((-1 < *local_1c) && (iVar4 = FUN_10c3dad0(local_1c), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar5[2]);
    FUN_10c3d900(piVar5);
  }
  if ((-1 < *piVar2) && (iVar4 = FUN_10c3dad0(piVar2), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar7 + -4));
    FUN_10c3d900(piVar2);
  }
  piVar2 = local_20;
  if ((-1 < *local_20) && (iVar4 = FUN_10c3dad0(local_20), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - piVar2[2]);
    FUN_10c3d900(piVar2);
  }
  FUN_10ae00d0(&local_8);
  puVar7 = local_8;
  if ((int *)DAT_1202e818[0x22] == (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    puVar7 = local_8;
    piVar2 = (int *)(**(code **)(*piVar2 + 0x40))(&local_28,local_8,0);
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)();
    }
  }
  else {
    piVar2 = (int *)(**(code **)(*(int *)DAT_1202e818[0x22] + 4))(&local_24,local_8,1,0xffffdd48);
    local_28 = local_24;
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)();
      local_28 = local_24;
    }
  }
  piVar2 = (int *)*piVar2;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 4))();
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  piVar2 = (int *)(puVar7 + -0xc);
  if ((-1 < *piVar2) && (iVar4 = FUN_10c3dad0(piVar2), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar7 + -4));
    FUN_10c3d900(piVar2);
  }
  return;
}



/* ===== FUN_11116730 @ 11116730  size=467 ===== */
// calls: sprintf_s
// strings:
//   "[FireModeName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to avoid redundant hash code."

/* [RE-AUTO c0]
   calls: sprintf_s
   strings:
     ""[FireModeName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to
   avoid redundant hash code."" */

void __thiscall FUN_11116730(int param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  char local_120 [256];
  undefined1 local_20 [8];
  uint local_18;
  undefined1 *local_14;
  int *local_10;
  undefined1 *local_c;
  int *local_8;
  
  uVar12 = 0x4e67c6a7;
  bVar1 = *param_2;
  pbVar5 = param_2;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    uVar12 = uVar12 ^ uVar12 * 0x20 + (uVar12 >> 2) + (int)(char)bVar1;
    bVar1 = *pbVar5;
  }
  iVar11 = param_1 + 0x108;
  iVar8 = *(int *)(param_1 + 0x10c);
  iVar9 = iVar11;
  if (*(int *)(param_1 + 0x10c) != 0) {
    do {
      if (*(int *)(iVar8 + 0x10) < (int)uVar12) {
        iVar4 = *(int *)(iVar8 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar8 + 8);
        iVar9 = iVar8;
      }
      iVar8 = iVar4;
    } while (iVar4 != 0);
    if (iVar9 == iVar11) goto LAB_11116805;
    if ((int)uVar12 < *(int *)(iVar9 + 0x10)) {
      iVar9 = iVar11;
    }
  }
  if (iVar9 != iVar11) {
    pbVar5 = *(byte **)(iVar9 + 0x14);
    pbVar10 = param_2;
    do {
      bVar1 = *pbVar5;
      bVar14 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_111167d0:
        uVar6 = -(uint)bVar14 | 1;
        goto LAB_111167d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar14 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_111167d0;
      pbVar5 = pbVar5 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_111167d5:
    if (uVar6 != 0) {
      sprintf_s(local_120,0x100,
                "[FireModeName]Find redundant hash code, Name1:%s; Name2: %s, MUST change one of the name to avoid redundant hash code."
                ,*(byte **)(iVar9 + 0x14),param_2);
      FUN_100ee330(local_120,1);
    }
  }
LAB_11116805:
  local_c = &DAT_1201fc98;
  local_8 = (int *)0x0;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  FUN_1083ab70(param_2,(int)pbVar5 - (int)(param_2 + 1));
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))();
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0xc))();
  }
  puVar3 = local_c;
  piVar13 = (int *)(local_c + -0xc);
  local_18 = uVar12;
  if (*piVar13 < 0) {
    local_14 = &DAT_1201fc98;
  }
  else {
    local_14 = local_c;
    FUN_10c3dab0(piVar13);
  }
  local_10 = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))();
  }
  FUN_11119710(local_20,&local_18);
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 0xc))();
  }
  puVar2 = local_14;
  piVar7 = (int *)(local_14 + -0xc);
  if ((-1 < *piVar7) && (iVar8 = FUN_10c3dad0(piVar7), iVar8 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar2 + -4));
    FUN_10c3d900(piVar7);
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  if ((-1 < *piVar13) && (iVar8 = FUN_10c3dad0(piVar13), iVar8 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar3 + -4));
    FUN_10c3d900(piVar13);
  }
  return;
}



/* ===== FUN_1130f590 @ 1130f590  size=341 ===== */
// calls: CPlayer::GetHuntRankOrCount, CCombatNPCLevelInfo::FindInfoByKey
// strings:
//   "CCombatNPCLevelInfo"

/* [RE-AUTO c0]
   calls: CCombatNPCLevelInfo::GetManagers
   strings:
     ""CCombatNPCLevelInfo"" */

void __fastcall FUN_1130f590(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  float *pfVar5;
  float local_c;
  int local_8;
  
  local_8 = FUN_11419510();
  pfVar5 = (float *)(local_8 + 0x1c);
  if (*(int *)(local_8 + 0x1c) == 0) {
    pfVar5 = &local_c;
    local_c = 1.4013e-45;
  }
  FUN_113b5030(pfVar5,0,0);
  iVar2 = CPlayer__GetHuntRankOrCount();
  iVar3 = CCombatNPCLevelInfo__FindInfoByKey(0,"CCombatNPCLevelInfo",0);
  if (((iVar2 != -1) &&
      (((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)))) &&
     ((iVar2 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar2 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + (iVar2 % *(int *)(iVar3 + 0x28)) * 4), iVar2 != 0)
       ) {
      puVar4 = &DAT_11d9d32b;
      if (*(undefined1 **)(local_8 + 0x14) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(local_8 + 0x14);
      }
      (**(code **)(*param_1 + 0xac))(puVar4);
      iVar3 = local_8;
      local_c = (float)(int)((float)*(int *)(iVar2 + 0x14) * *(float *)(local_8 + 0x20));
      FUN_113b5110(&local_c,0,0);
      local_c = (float)*(int *)(iVar2 + 0x18) * *(float *)(iVar3 + 0x24);
      FUN_1138ce20(&local_c,0,0);
      local_c = (float)(int)((float)*(int *)(iVar2 + 0x1c) * *(float *)(iVar3 + 0x28));
      FUN_11380be0(&local_c,0,0);
      local_c = (float)*(int *)(iVar2 + 0x20) * *(float *)(iVar3 + 0x2c);
      FUN_1138cee0(&local_c,0,0);
    }
  }
  return;
}



/* ===== FUN_1130f850 @ 1130f850  size=78 ===== */
// calls: CCombatNPCLevelInfo::FindInfoByKey
// strings:
//   "CCombatNPCLevelInfo"

/* [RE-AUTO c0]
   calls: CCombatNPCLevelInfo::GetManagers
   strings:
     ""CCombatNPCLevelInfo"" */

undefined4 FUN_1130f850(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CCombatNPCLevelInfo__FindInfoByKey(0,"CCombatNPCLevelInfo",0);
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



/* ===== FUN_11419510 @ 11419510  size=136 ===== */
// calls: CCombatNPCInfo::FindInfoByKey
// strings:
//   "CCombatNPCInfo"

/* [RE-AUTO c0]
   calls: CCombatNPCInfo::GetManagers
   strings:
     ""CCombatNPCInfo"" */

undefined * FUN_11419510(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1025b060();
  iVar4 = CCombatNPCInfo__FindInfoByKey(0,"CCombatNPCInfo",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) && (*(int *)(iVar4 + 0x28) != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / *(int *)(iVar4 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (puVar2 = *(undefined **)(iVar1 + (iVar3 % *(int *)(iVar4 + 0x28)) * 4),
       puVar2 != (undefined *)0x0)) {
      return puVar2;
    }
  }
  if ((DAT_1218fe20 & 1) == 0) {
    DAT_1218fe20 = DAT_1218fe20 | 1;
    FUN_11418540();
    FUN_11a8911f(&LAB_11c9caf0);
  }
  return &DAT_1218fd50;
}



/* ===== FUN_114195a0 @ 114195a0  size=78 ===== */
// calls: CCombatNPCInfo::FindInfoByKey
// strings:
//   "CCombatNPCInfo"

/* [RE-AUTO c0]
   calls: CCombatNPCInfo::GetManagers
   strings:
     ""CCombatNPCInfo"" */

undefined4 FUN_114195a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CCombatNPCInfo__FindInfoByKey(0,"CCombatNPCInfo",0);
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



/* ===== FUN_114195f0 @ 114195f0  size=150 ===== */
// calls: CCombatNPCInfo::FindInfoByKey, CEquipInfo::FindByItemIdString
// strings:
//   "CCombatNPCInfo"

/* [RE-AUTO c0]
   calls: CCombatNPCInfo::GetManagers
   strings:
     ""CCombatNPCInfo"" */

undefined4 __fastcall FUN_114195f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x2e08) != -1) {
LAB_1141966e:
    return *(undefined4 *)(param_1 + 0x2e08);
  }
  iVar2 = FUN_1025b060();
  iVar3 = CCombatNPCInfo__FindInfoByKey(0,"CCombatNPCInfo",0);
  if (((iVar2 != -1) &&
      (((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)))) &&
     ((iVar2 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar2 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + (iVar2 % *(int *)(iVar3 + 0x28)) * 4), iVar2 != 0)
       ) {
      piVar4 = (int *)CEquipInfo__FindByItemIdString(*(undefined4 *)(iVar2 + 0x4c));
      if (piVar4 != (int *)0x0) {
        uVar5 = (**(code **)(*piVar4 + 0x18))();
        *(undefined4 *)(param_1 + 0x2e08) = uVar5;
        goto LAB_1141966e;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2e08) = 0;
  return 0;
}



/* ===== FUN_11419690 @ 11419690  size=120 ===== */
// calls: _snprintf, CPet::SetName
// strings:
//   "CombatNpc_%x"

/* [RE-AUTO c0]
   calls: _snprintf
   strings:
     ""CombatNpc_%x"" */

void __thiscall FUN_11419690(int param_1,undefined4 param_2)

{
  char cVar1;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_11398eb0(param_2);
  if (cVar1 != '\0') {
    _snprintf(local_108,0x100,"CombatNpc_%x",*(undefined4 *)(param_1 + 4));
    CPet__SetName(local_108);
    FUN_11a89daa();
    return;
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1142b3d0 @ 1142b3d0  size=426 ===== */
// calls: CDamageInfo::GetManager, memset
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers, memset
   strings:
     ""CDamageInfo"" */

void FUN_1142b3d0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined1 local_110 [264];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_11c = param_2;
  local_118 = param_3;
  local_114 = param_4;
  iVar3 = CDamageInfo__GetManager(0,"CDamageInfo",0);
  if ((param_5 != -1) &&
     (((param_5 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
      (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)))) {
    param_5 = param_5 - *(int *)(iVar3 + 0x30);
    if ((param_5 < 0) || (*(int *)(iVar3 + 0x24) <= param_5)) {
LAB_1142b44f:
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (param_5 / iVar1) * 4);
      if (iVar3 == 0) goto LAB_1142b44f;
      iVar3 = *(int *)(iVar3 + (param_5 % iVar1) * 4);
    }
    if (iVar3 != 0) goto LAB_1142b493;
  }
  iVar3 = CDamageInfo__GetManager(0,"CDamageInfo",0);
  if (((*(int *)(iVar3 + 0x30) == 0) && (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)) &&
     (0 < *(int *)(iVar3 + 0x24))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (int)(0 / (longlong)iVar1) * 4);
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + (int)(0 % (longlong)iVar1) * 4);
      goto LAB_1142b493;
    }
  }
  iVar3 = 0;
LAB_1142b493:
  iVar1 = local_118;
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  FUN_1142fe70(local_118,local_114);
  local_118 = FUN_1142fd90();
  FUN_1142fe70(local_11c,0);
  local_114 = FUN_1142fc50();
  memset(local_110,0,0x108);
  iVar2 = local_118;
  FUN_1142b1a0(param_1,local_114,local_118,iVar3,0xffffffff,0,&local_128,local_110);
  if (local_11c == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_11c + 4);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 4);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  FUN_1142fe70(iVar2);
  FUN_1142fe50();
  FUN_1142fe70(local_114);
  FUN_1142fe30();
  FUN_11a89daa();
  return;
}



/* ===== FUN_1142ba90 @ 1142ba90  size=52 ===== */
// calls: CDamageDampingInfo::FindInfoByKey
// strings:
//   "CDamageDampingInfo"

/* [RE-AUTO c0]
   calls: CDamageDampingInfo::GetManagers
   strings:
     ""CDamageDampingInfo"" */

undefined4 FUN_1142ba90(int param_1)

{
  int iVar1;
  
  iVar1 = CDamageDampingInfo__FindInfoByKey(0,"CDamageDampingInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1142c620 @ 1142c620  size=289 ===== */
// calls: CDamageDampingInfo::FindInfoByKey
// strings:
//   "CDamageDampingInfo"

/* [RE-AUTO c0]
   calls: CDamageDampingInfo::GetManagers
   strings:
     ""CDamageDampingInfo"" */

undefined4 FUN_1142c620(float *param_1,float *param_2,float *param_3,float *param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  if (*param_3 == 0.0) {
    return 0;
  }
  piVar1 = (int *)CDamageDampingInfo__FindInfoByKey(0,"CDamageDampingInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (iVar2 == 0) {
    return 0;
  }
  fVar4 = (*param_1 + *param_2) / (*param_3 * DAT_11de9990);
  if (fVar4 == 0.0) {
    return 0;
  }
  iVar2 = CDamageDampingInfo__FindInfoByKey(0,"CDamageDampingInfo",0);
  uVar3 = *(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14);
  if (param_5 == '\x01') {
    if (4 < (int)(uVar3 & 0xfffffffc)) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 4);
      goto LAB_1142c6c5;
    }
  }
  else if (0 < (int)(uVar3 & 0xfffffffc)) {
    iVar2 = **(int **)(iVar2 + 0x14);
    goto LAB_1142c6c5;
  }
  iVar2 = 0;
LAB_1142c6c5:
  if (iVar2 == 0) {
    return 0;
  }
  if (*(float *)(iVar2 + 0x14) < fVar4) {
    if (fVar4 < *(float *)(iVar2 + 0x18) || fVar4 == *(float *)(iVar2 + 0x18)) {
      *param_4 = (*(float *)(iVar2 + 0x20) * fVar4 * fVar4 * fVar4 +
                  *(float *)(iVar2 + 0x24) * fVar4 * fVar4 + *(float *)(iVar2 + 0x28) * fVar4 +
                 *(float *)(iVar2 + 0x2c)) / fVar4;
      return 1;
    }
    *param_4 = *(float *)(iVar2 + 0x1c) / fVar4;
    return 1;
  }
  *param_4 = 1.0;
  return 1;
}



/* ===== FUN_11482a60 @ 11482a60  size=179 ===== */
// strings:
//   "[Security]Movement error code 2 pos = (%f, %f, %f)"

/* [RE-AUTO c0]
   strings:
     ""[Security]Movement error code 2 pos = (%f, %f, %f)"" */

uint __thiscall
FUN_11482a60(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_114822c0(param_2,param_3,param_4,0);
  if (cVar1 == '\0') {
    uVar2 = FUN_114821a0(param_2,param_3,param_4,0);
    return uVar2 & 0xffffff00;
  }
  FUN_11481740(param_1,"[Security]Movement error code 2 pos = (%f, %f, %f)",(double)*param_4,
               (double)param_4[1],(double)param_4[2]);
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  if (*(int *)(param_1 + 0x9c) <= *(int *)(param_1 + 0xa0)) {
    uVar2 = FUN_114811e0(param_5,2);
    return uVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x9c) >> 8),1);
}



/* ===== FUN_11482b30 @ 11482b30  size=465 ===== */
// calls: libm_sse2_sqrt_precise
// strings:
//   "[MovementChecker]Movement error code 1 speed = (%f, %f, %f)(%f)"
//   "[Security]Movement error code 2 pos = (%f, %f, %f)"

/* [RE-AUTO c0]
   calls: libm_sse2_sqrt_precise
   strings:
     ""[MovementChecker]Movement error code 1 speed = (%f, %f, %f)(%f)""
     ""[Security]Movement error code 2 pos = (%f, %f, %f)"" */

undefined1 __thiscall
FUN_11482b30(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined1 uVar2;
  double dVar3;
  undefined1 uStack_65;
  
  cVar1 = FUN_11482690(param_5);
  if (cVar1 == '\0') {
    dVar3 = (double)(*param_5 * *param_5 + param_5[1] * param_5[1] + param_5[2] * param_5[2]);
    libm_sse2_sqrt_precise();
    cVar1 = FUN_114822c0(param_2,param_3,param_4,(float)dVar3);
    if (cVar1 == '\0') {
      dVar3 = (double)(*param_5 * *param_5 + param_5[1] * param_5[1] + param_5[2] * param_5[2]);
      libm_sse2_sqrt_precise();
      FUN_114821a0(param_2,param_3,param_4,(float)dVar3);
      return uStack_65;
    }
    FUN_11481740(param_1,"[Security]Movement error code 2 pos = (%f, %f, %f)",(double)*param_4,
                 (double)param_4[1],(double)param_4[2]);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    if (*(int *)(param_1 + 0x9c) <= *(int *)(param_1 + 0xa0)) {
      uVar2 = FUN_114811e0(param_6,2);
      return uVar2;
    }
  }
  else {
    dVar3 = (double)(*param_5 * *param_5 + param_5[1] * param_5[1] + param_5[2] * param_5[2]);
    libm_sse2_sqrt_precise();
    FUN_11481740(param_1,"[MovementChecker]Movement error code 1 speed = (%f, %f, %f)(%f)",
                 (double)*param_5,(double)param_5[1],(double)param_5[2],(double)(float)dVar3);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    if (*(int *)(param_1 + 0x9c) <= *(int *)(param_1 + 0xa0)) {
      uVar2 = FUN_114811e0(param_6,1);
      return uVar2;
    }
  }
  return 1;
}



/* ===== FUN_11482d20 @ 11482d20  size=178 ===== */
// strings:
//   "[Security]Movement error code 2 pos = (%f, %f, %f)"

/* [RE-AUTO c0]
   strings:
     ""[Security]Movement error code 2 pos = (%f, %f, %f)"" */

undefined1 __thiscall
FUN_11482d20(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  cVar1 = FUN_114822c0(param_2,param_3,param_4,0);
  if (cVar1 != '\0') {
    FUN_11481740(param_1,"[Security]Movement error code 2 pos = (%f, %f, %f)",(double)*param_4,
                 (double)param_4[1],(double)param_4[2]);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0x9c)) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_114811e0(param_5,2);
    }
  }
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24)) {
    uVar3 = FUN_11481b00();
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return uVar2;
}



/* ===== FUN_11483990 @ 11483990  size=345 ===== */
// strings:
//   "SpDeviation"
//   "RageDeviation"
//   "StaminaDeviation"
//   "[Security]PlayerAttr error code %d, subtype 1"
//   "[Security]PlayerAttr error code %d, subtype 2"

/* [RE-AUTO c0]
   strings:
     ""SpDeviation""
     ""RageDeviation""
     ""StaminaDeviation""
     ""[Security]PlayerAttr error code %d, subtype 1""
     ""[Security]PlayerAttr error code %d, subtype 2"" */

uint __thiscall FUN_11483990(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined1 auStack_30 [16];
  undefined1 *local_20;
  undefined1 *local_1c;
  int *piStack_18;
  int local_8;
  
  local_8 = 0;
  if (param_3 == 1) {
    piStack_18 = &local_8;
    local_20 = auStack_30;
    local_1c = auStack_30;
    FUN_100b62c0("StaminaDeviation","");
    FUN_11479100();
    cVar1 = FUN_1147cea0();
    uVar2 = FUN_10268440();
    uVar3 = (uint)extraout_ST0_00;
  }
  else if (param_3 == 2) {
    piStack_18 = &local_8;
    local_20 = auStack_30;
    local_1c = auStack_30;
    FUN_100b62c0("RageDeviation","");
    FUN_11479100();
    cVar1 = FUN_1147cea0();
    uVar2 = FUN_11399610(*(undefined4 *)(param_5 + 8));
    uVar3 = (uint)extraout_ST0;
  }
  else {
    uVar2 = param_3 - 3U;
    if (param_3 - 3U != 0) goto LAB_11483ade;
    piStack_18 = &local_8;
    local_20 = auStack_30;
    local_1c = auStack_30;
    FUN_100b62c0("SpDeviation","");
    FUN_11479100();
    cVar1 = FUN_1147cea0();
    uVar2 = FUN_1025b060();
    uVar3 = uVar2;
  }
  if ((cVar1 != '\0') && ((int)uVar3 < param_2)) {
    if ((int)(local_8 + uVar3) < param_2) {
      FUN_11481740(param_1,"[Security]PlayerAttr error code %d, subtype 1",param_3);
      *(undefined2 *)(param_4 + 4) = 1;
      uVar2 = FUN_114811e0(param_4,param_3);
      return uVar2;
    }
    FUN_11481740(param_1,"[Security]PlayerAttr error code %d, subtype 2",param_3);
    *(undefined2 *)(param_4 + 4) = 2;
    uVar2 = param_4;
  }
LAB_11483ade:
  return uVar2 & 0xffffff00;
}



/* ===== FUN_11484eb0 @ 11484eb0  size=2990 ===== */
// calls: memset, _snprintf, memcpy
// strings:
//   "%sPlayerFsmValidationWE%02d.xml"
//   "State"
//   "defaultTime"
//   "maxFiremode"
//   "maxLaunch"
//   "Transitions"
//   "Transition"
//   "nextState"
//   "fastestTime"
//   "PrevStateFix"
//   "prevStateName"
//   "fixedTime"

/* [RE-AUTO c0]
   calls: memset, _snprintf, memcpy
   strings:
     ""%sPlayerFsmValidationWE%02d.xml""
     ""State""
     ""defaultTime""
     ""maxFiremode""
     ""maxLaunch""
     ""Transitions""
     ""Transition""
     ""nextState""
     ""fastestTime""
     ""PrevStateFix"" */

void FUN_11484eb0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined1 ***_Dst;
  undefined1 *_Dst_00;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *in_stack_00000018;
  undefined1 auStack_2c8 [16];
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b4;
  undefined4 *puStack_2b0;
  undefined4 uStack_2ac;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a4;
  int iStack_2a0;
  undefined1 local_268 [12];
  float local_25c;
  int local_258;
  int local_254;
  int local_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 *puStack_244;
  undefined4 *puStack_240;
  int local_23c;
  undefined1 local_238;
  float local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined1 local_228 [16];
  undefined1 *local_218;
  undefined1 *local_214;
  double local_210;
  undefined1 **local_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 *puStack_1fc;
  undefined4 *puStack_1f8;
  int local_1f4;
  undefined1 local_1f0;
  int local_1ec;
  undefined1 local_1e5;
  undefined1 local_1e4 [16];
  undefined1 *local_1d4;
  undefined1 *local_1d0;
  undefined1 local_1cc [16];
  undefined1 *local_1bc;
  undefined1 *local_1b8;
  undefined1 local_1b4 [16];
  undefined1 *local_1a4;
  undefined1 *local_1a0;
  undefined1 **local_19c [2];
  int local_194;
  undefined1 ***local_18c;
  undefined1 ***local_188;
  float local_184;
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 *local_170;
  undefined1 *local_16c;
  undefined1 *local_168;
  undefined1 *local_164;
  undefined1 **local_160;
  undefined1 **local_15c;
  int local_158;
  undefined1 ***local_154;
  undefined1 ***local_150;
  int local_14c;
  undefined4 local_148;
  undefined1 local_144 [8];
  undefined1 local_13c [12];
  undefined1 *local_130;
  undefined1 *local_12c;
  undefined1 *local_128;
  undefined1 **local_124;
  undefined1 **local_120;
  int local_11c;
  undefined1 ***local_118;
  undefined1 ***local_114;
  undefined1 ***local_110;
  float local_10c;
  char local_108;
  undefined1 local_107 [255];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_108 = '\0';
  memset(local_107,0,0xff);
  local_258 = 0;
  do {
    iVar3 = local_258;
    _snprintf(&local_108,0xff,PTR_s__sPlayerFsmValidationWE_02d_xml_11dfa638);
    iStack_2a0 = 0x11484f1c;
    iVar2 = FUN_100f68b0();
    if ((iVar2 == 0) || (iVar2 = FUN_100f3cb0(), iVar2 == 0)) break;
    local_23c = 0;
    puStack_244 = &local_24c;
    local_24c = 0;
    local_238 = local_1e5;
    local_1d4 = local_1e4;
    local_1a4 = local_1b4;
    local_1bc = local_1cc;
    puStack_1fc = &local_204;
    uStack_248 = 0;
    local_234 = 0.0;
    local_230 = 0;
    local_22c = 0;
    local_1e4[0] = 0;
    local_1b4[0] = 0;
    local_1cc[0] = 0;
    local_208 = (undefined1 **)0x0;
    local_204 = 0;
    uStack_200 = 0;
    local_1f4 = 0;
    local_1f0 = local_1e5;
    local_210 = 0.0;
    puStack_240 = puStack_244;
    puStack_1f8 = puStack_1fc;
    local_1d0 = local_1d4;
    local_1b8 = local_1bc;
    local_1a0 = local_1a4;
    local_250 = FUN_100f3ce0();
    while (local_250 != 0) {
      cVar1 = FUN_100f6ea0();
      if (cVar1 != '\0') {
        local_234 = 0.0;
        if (local_23c != 0) {
          FUN_11486050();
          puStack_244 = &local_24c;
          uStack_248 = 0;
          local_23c = 0;
          puStack_240 = puStack_244;
        }
        cVar1 = FUN_100f6f30();
        if (cVar1 == '\0') {
          local_234 = 0.0;
        }
        else {
          local_234 = (float)local_210;
        }
        cVar1 = FUN_100f6ef0();
        if (cVar1 == '\0') {
          local_230 = 0;
        }
        iStack_2a0 = 0x11485129;
        cVar1 = FUN_100f6ef0();
        if (cVar1 == '\0') {
          local_22c = 1;
        }
        iVar3 = FUN_100f3ce0();
        if ((iVar3 != 0) && (local_1ec = FUN_100f3ce0(), local_1ec != 0)) {
          do {
            cVar1 = FUN_100f6ea0();
            if (cVar1 != '\0') {
              local_208 = (undefined1 **)0x0;
              if (local_1f4 != 0) {
                FUN_10a92510();
                puStack_1fc = &local_204;
                uStack_200 = 0;
                local_1f4 = 0;
                puStack_1f8 = puStack_1fc;
              }
              cVar1 = FUN_100f6f30();
              if (cVar1 == '\0') {
                uVar6 = 0;
                uVar7 = 0;
                local_210 = 0.0;
              }
              else {
                uVar6 = SUB84(local_210,0);
                uVar7 = (undefined4)((ulonglong)local_210 >> 0x20);
              }
              local_208 = (undefined1 **)(float)(double)CONCAT44(uVar7,uVar6);
              local_254 = FUN_100f3ce0();
              while (local_254 != 0) {
                cVar1 = FUN_100f6ea0();
                if (cVar1 != '\0') {
                  cVar1 = FUN_100f6f30();
                  if (cVar1 == '\0') {
                    uVar6 = 0;
                    uVar7 = 0;
                    local_210 = 0.0;
                  }
                  else {
                    uVar6 = SUB84(local_210,0);
                    uVar7 = (undefined4)((ulonglong)local_210 >> 0x20);
                  }
                  local_218 = local_228;
                  local_25c = (float)(double)CONCAT44(uVar7,uVar6);
                  if ((int)local_1bc - (int)local_1b8 == -1) goto LAB_11485b2e;
                  local_214 = local_218;
                  if (0x10 < ((int)local_1bc - (int)local_1b8) + 1U) {
                    /* WARNING: Subroutine does not return */
                    FUN_10c3d580();
                  }
                  if (local_1bc != local_1b8) {
                    sVar5 = (int)local_1bc - (int)local_1b8;
                    pvVar4 = memcpy(local_218,local_1b8,sVar5);
                    local_218 = (undefined1 *)(sVar5 + (int)pvVar4);
                  }
                  _Dst = &local_124;
                  *local_218 = 0;
                  local_114 = _Dst;
                  local_110 = _Dst;
                  if ((int)local_218 - (int)local_214 == -1) {
                    /* WARNING: Subroutine does not return */
                    FUN_100b73e0();
                  }
                  if (0x10 < ((int)local_218 - (int)local_214) + 1U) {
                    /* WARNING: Subroutine does not return */
                    FUN_10c3d580();
                  }
                  if (local_218 != local_214) {
                    sVar5 = (int)local_218 - (int)local_214;
                    pvVar4 = memcpy(_Dst,local_214,sVar5);
                    _Dst = (undefined1 ***)(sVar5 + (int)pvVar4);
                  }
                  local_114 = _Dst;
                  *(undefined1 *)_Dst = 0;
                  local_10c = local_25c;
                  if ((local_214 != local_228) && (local_214 != (undefined1 *)0x0)) {
                    FUN_10c3d5d0();
                  }
                  local_18c = local_19c;
                  local_188 = local_18c;
                  if ((int)local_114 - (int)local_110 == -1) {
                    /* WARNING: Subroutine does not return */
                    FUN_100b73e0();
                  }
                  if (0x10 < ((int)local_114 - (int)local_110) + 1U) {
                    /* WARNING: Subroutine does not return */
                    FUN_10c3d580();
                  }
                  if (local_114 != local_110) {
                    sVar5 = (int)local_114 - (int)local_110;
                    pvVar4 = memcpy(local_18c,local_110,sVar5);
                    local_18c = (undefined1 ***)(sVar5 + (int)pvVar4);
                  }
                  *(undefined1 *)local_18c = 0;
                  local_184 = local_10c;
                  FUN_10a92f90();
                  if ((local_188 != local_19c) && (local_188 != (undefined1 ***)0x0)) {
                    FUN_10c3d5d0();
                  }
                  if ((local_110 != &local_124) && (local_110 != (undefined1 ***)0x0)) {
                    FUN_10c3d5d0();
                  }
                }
                local_254 = FUN_100f3d50();
              }
              local_19c[0] = local_208;
              FUN_11484140();
              local_218 = local_228;
              if ((int)local_1a4 - (int)local_1a0 == -1) {
LAB_11485b2e:
                local_218 = local_228;
                local_214 = local_218;
                    /* WARNING: Subroutine does not return */
                FUN_100b73e0();
              }
              local_214 = local_218;
              if (0x10 < ((int)local_1a4 - (int)local_1a0) + 1U) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580();
              }
              if (local_1a4 != local_1a0) {
                sVar5 = (int)local_1a4 - (int)local_1a0;
                pvVar4 = memcpy(local_218,local_1a0,sVar5);
                local_218 = (undefined1 *)(sVar5 + (int)pvVar4);
              }
              _Dst_00 = local_13c;
              *local_218 = 0;
              local_12c = _Dst_00;
              local_128 = _Dst_00;
              if ((int)local_218 - (int)local_214 == -1) {
                    /* WARNING: Subroutine does not return */
                FUN_100b73e0();
              }
              if (0x10 < ((int)local_218 - (int)local_214) + 1U) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580();
              }
              if (local_218 != local_214) {
                sVar5 = (int)local_218 - (int)local_214;
                pvVar4 = memcpy(_Dst_00,local_214,sVar5);
                _Dst_00 = (undefined1 *)(sVar5 + (int)pvVar4);
              }
              local_12c = _Dst_00;
              *_Dst_00 = 0;
              local_124 = local_19c[0];
              FUN_11484140();
              if ((local_214 != local_228) && (local_214 != (undefined1 *)0x0)) {
                FUN_10c3d5d0();
              }
              iVar3 = local_194;
              if (local_188 != (undefined1 ***)0x0) {
                while (iVar3 != 0) {
                  FUN_10a92510();
                  iVar2 = *(int *)(iVar3 + 8);
                  if ((*(int *)(iVar3 + 0x24) != iVar3 + 0x10) && (*(int *)(iVar3 + 0x24) != 0)) {
                    FUN_10c3d5d0();
                  }
                  FUN_10c3d5d0();
                  iVar3 = iVar2;
                }
              }
              local_168 = local_178;
              local_164 = local_168;
              if ((int)local_12c - (int)local_128 == -1) {
                    /* WARNING: Subroutine does not return */
                FUN_100b73e0();
              }
              if (0x10 < ((int)local_12c - (int)local_128) + 1U) {
                    /* WARNING: Subroutine does not return */
                FUN_10c3d580();
              }
              if (local_12c != local_128) {
                sVar5 = (int)local_12c - (int)local_128;
                iStack_2a0 = 0x114856c8;
                pvVar4 = memcpy(local_168,local_128,sVar5);
                local_168 = (undefined1 *)(sVar5 + (int)pvVar4);
              }
              *local_168 = 0;
              local_160 = local_124;
              FUN_11484140();
              iStack_2a0 = 0x11485712;
              FUN_114867d0();
              iVar3 = local_158;
              if (local_14c != 0) {
                while (iVar3 != 0) {
                  FUN_10a92510();
                  iVar2 = *(int *)(iVar3 + 8);
                  if ((*(int *)(iVar3 + 0x24) != iVar3 + 0x10) && (*(int *)(iVar3 + 0x24) != 0)) {
                    FUN_10c3d5d0();
                  }
                  FUN_10c3d5d0();
                  iVar3 = iVar2;
                }
                local_154 = &local_15c;
                local_158 = 0;
                local_14c = 0;
                local_150 = local_154;
              }
              if ((local_164 != local_178) && (local_164 != (undefined1 *)0x0)) {
                FUN_10c3d5d0();
              }
              iVar3 = local_11c;
              if (local_110 != (undefined1 ***)0x0) {
                while (iVar3 != 0) {
                  FUN_10a92510();
                  iVar2 = *(int *)(iVar3 + 8);
                  if ((*(int *)(iVar3 + 0x24) != iVar3 + 0x10) && (*(int *)(iVar3 + 0x24) != 0)) {
                    FUN_10c3d5d0();
                  }
                  FUN_10c3d5d0();
                  iVar3 = iVar2;
                }
                local_118 = &local_120;
                local_11c = 0;
                local_110 = (undefined1 ***)0x0;
                local_114 = local_118;
              }
              if ((local_128 != local_13c) && (local_128 != (undefined1 *)0x0)) {
                FUN_10c3d5d0();
              }
            }
            local_1ec = FUN_100f3d50();
          } while (local_1ec != 0);
          local_1ec = 0;
        }
        puStack_2b0 = &local_24c;
        puStack_2b4 = (undefined1 *)0x11485878;
        FUN_114841f0();
        puStack_2b8 = auStack_2c8;
        puStack_2b4 = auStack_2c8;
        FUN_100b62c0(local_1d0,local_1d4);
        iVar2 = FUN_11484090(local_144);
        local_170 = local_180;
        iStack_2a0 = 0x114858e3;
        local_16c = local_170;
        FUN_100b62c0();
        iStack_2a0 = iVar2 + 0x18;
        puStack_2a4 = (undefined1 *)0x114858f2;
        FUN_114841f0();
        iVar3 = local_258;
        local_150 = *(undefined1 ****)(iVar2 + 0x30);
        local_14c = *(int *)(iVar2 + 0x34);
        local_148 = *(undefined4 *)(iVar2 + 0x38);
        puStack_2a4 = local_180;
        puStack_2a8 = local_268;
        uStack_2ac = 0x11485939;
        FUN_11486950();
        if (local_158 != 0) {
          FUN_11486050();
          local_160 = &local_168;
          local_164 = (undefined1 *)0x0;
          local_158 = 0;
          local_15c = local_160;
        }
        if ((local_16c != local_180) && (local_16c != (undefined1 *)0x0)) {
          FUN_10c3d5d0();
        }
        if (local_11c != 0) {
          FUN_11486050();
          local_124 = &local_12c;
          local_128 = (undefined1 *)0x0;
          local_11c = 0;
          local_120 = local_124;
        }
        if ((local_130 != local_144) && (local_130 != (undefined1 *)0x0)) {
          FUN_10c3d5d0();
        }
      }
      local_250 = FUN_100f3d50();
    }
    if (local_1f4 != 0) {
      FUN_10a92510();
      puStack_1fc = &local_204;
      uStack_200 = 0;
      local_1f4 = 0;
      puStack_1f8 = puStack_1fc;
    }
    if ((local_1b8 != local_1cc) && (local_1b8 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
    if ((local_1a0 != local_1b4) && (local_1a0 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
    if ((local_1d0 != local_1e4) && (local_1d0 != (undefined1 *)0x0)) {
      FUN_10c3d5d0();
    }
    if (local_23c != 0) {
      FUN_11486050();
    }
    local_258 = iVar3 + 1;
  } while (local_258 < 0xd);
  if ((in_stack_00000018 != &stack0x00000004) && (in_stack_00000018 != (undefined1 *)0x0)) {
    FUN_10c3d5d0();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11614340 @ 11614340  size=559 ===== */
// strings:
//   "DisorderLimit"
//   "[Security]SyncTime error code 1 %I64i --> %I64i(%d) disorder = %d"
//   "SpeedLimit"
//   "[Security]SyncTime error code 2 %I64i --> %I64i(%d)"

/* [RE-AUTO c0]
   strings:
     ""DisorderLimit""
     ""[Security]SyncTime error code 1 %I64i --> %I64i(%d) disorder = %d""
     ""SpeedLimit""
     ""[Security]SyncTime error code 2 %I64i --> %I64i(%d)"" */

uint __thiscall FUN_11614340(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  uint *puStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  undefined1 auStack_34 [16];
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint *puStack_1c;
  uint local_c;
  uint local_8;
  
  iVar1 = param_2;
  local_c = 0;
  puStack_1c = (uint *)0x1161435c;
  iVar3 = FUN_11483630();
  puStack_1c = (uint *)0x11614363;
  iVar4 = FUN_11483620();
  if (iVar3 == iVar4) {
    puStack_40 = *(uint **)(param_1 + 0x1c);
    if (*(int **)((int)puStack_40 + 0xc) != (int *)0x0) {
      puStack_1c = (uint *)0x11614383;
      uVar6 = (**(code **)(**(int **)((int)puStack_40 + 0xc) + 0xb4))();
      param_2 = (int)((ulonglong)uVar6 >> 0x20);
      uVar5 = (uint)uVar6;
      if ((*(int *)(param_1 + 0x24) < *(int *)(iVar1 + 0xc)) ||
         ((*(int *)(param_1 + 0x24) <= *(int *)(iVar1 + 0xc) &&
          (*(uint *)(param_1 + 0x20) <= *(uint *)(iVar1 + 8))))) {
        puStack_1c = &local_8;
        local_8 = 0;
        puStack_24 = auStack_34;
        puStack_20 = auStack_34;
        pcStack_38 = "";
        pcStack_3c = "SpeedLimit";
        puStack_40 = (uint *)0x1161444e;
        FUN_100b62c0();
        puStack_40 = (uint *)0x11614455;
        FUN_11479100();
        puStack_40 = (uint *)0x1161445c;
        cVar2 = FUN_1147cea0();
        if (cVar2 != '\0') {
          iVar3 = ((int)local_8 >> 0x1f) + param_2 + (uint)CARRY4(local_8,uVar5);
          if ((iVar3 <= *(int *)(iVar1 + 0xc)) &&
             ((iVar3 < *(int *)(iVar1 + 0xc) || (local_8 + uVar5 < *(uint *)(iVar1 + 8))))) {
            puStack_40 = &local_c;
            local_c = 0;
            puStack_48 = (undefined1 *)&pcStack_58;
            puStack_44 = (undefined1 *)&pcStack_58;
            FUN_100b62c0(&DAT_11d34118,&DAT_11d3411f);
            FUN_11479100();
            cVar2 = FUN_1147cea0();
            if (cVar2 != '\0') {
              iVar3 = (param_2 - ((int)local_c >> 0x1f)) - (uint)(uVar5 < local_c);
              if ((*(int *)(param_1 + 0x2c) <= iVar3) &&
                 ((*(int *)(param_1 + 0x2c) < iVar3 || (*(uint *)(param_1 + 0x28) < uVar5 - local_c)
                  ))) {
                *(uint *)(param_1 + 0x28) = uVar5;
                *(int *)(param_1 + 0x2c) = param_2;
              }
            }
            FUN_11481740(param_1,"[Security]SyncTime error code 2 %I64i --> %I64i(%d)",uVar5,param_2
                         ,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                         *(int *)(iVar1 + 8) - uVar5);
            uVar5 = FUN_114811e0(param_3,2);
            return uVar5;
          }
        }
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 8);
        uVar5 = *(uint *)(iVar1 + 0xc);
        *(uint *)(param_1 + 0x24) = uVar5;
        return uVar5 & 0xffffff00;
      }
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + (*(int *)(param_1 + 0x20) - *(int *)(iVar1 + 8));
      puStack_1c = (uint *)&param_2;
      puStack_24 = auStack_34;
      puStack_20 = auStack_34;
      param_2 = 0;
      pcStack_38 = "";
      pcStack_3c = "DisorderLimit";
      puStack_40 = (uint *)0x116143d0;
      FUN_100b62c0();
      puStack_40 = (uint *)0x116143d7;
      FUN_11479100();
      puStack_40 = (uint *)0x116143de;
      puStack_40 = (uint *)FUN_1147cea0();
      if (((char)puStack_40 != '\0') &&
         (puStack_40 = *(uint **)(param_1 + 0x30), param_2 < (int)puStack_40)) {
        puStack_44 = (undefined1 *)(*(int *)(iVar1 + 8) - *(int *)(param_1 + 0x20));
        puStack_48 = *(undefined1 **)(iVar1 + 0xc);
        uStack_4c = *(undefined4 *)(iVar1 + 8);
        uStack_50 = *(undefined4 *)(param_1 + 0x24);
        uStack_54 = *(undefined4 *)(param_1 + 0x20);
        pcStack_58 = "[Security]SyncTime error code 1 %I64i --> %I64i(%d) disorder = %d";
        FUN_11481740(param_1);
        puStack_40 = (uint *)0x1;
        puStack_44 = (undefined1 *)param_3;
        puStack_48 = (undefined1 *)0x11614420;
        uVar5 = FUN_114811e0();
        return uVar5;
      }
    }
  }
  else {
    puStack_1c = (uint *)0x1161452b;
    uVar5 = FUN_11483630();
    puStack_1c = (uint *)0x11614532;
    puStack_40 = (uint *)FUN_114835d0();
    if ((uint *)uVar5 != puStack_40) {
      puStack_1c = (uint *)0x1161453d;
      uVar5 = FUN_11483630();
      puStack_1c = (uint *)0x11614544;
      puStack_40 = (uint *)FUN_11483450();
      if ((uint *)uVar5 != puStack_40) goto LAB_11614564;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x80000000;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  }
LAB_11614564:
  return (uint)puStack_40 & 0xffffff00;
}



/* ===== FUN_116657c0 @ 116657c0  size=169 ===== */
// calls: CDamageInfo::GetManager
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo"" */

undefined4 FUN_116657c0(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)FUN_116689a0(param_1);
  iVar5 = (**(code **)(*piVar4 + 0xa8))();
  if (iVar5 != 0) {
    return 0;
  }
  cVar2 = FUN_11397c30(0x1e);
  iVar5 = *(int *)(param_2 + 0xc);
  cVar3 = '\0';
  iVar6 = CDamageInfo__GetManager(0,"CDamageInfo",0);
  if ((iVar5 != -1) &&
     ((((iVar5 != 0 || (*(int *)(iVar6 + 0x30) == 0)) && (*(int *)(iVar6 + 0x28) != 0)) &&
      ((iVar5 = iVar5 - *(int *)(iVar6 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar6 + 0x24)))))))
  {
    iVar1 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar5 / *(int *)(iVar6 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar5 % *(int *)(iVar6 + 0x28)) * 4) != 0)) {
      param_1 = 0x2f;
      cVar3 = FUN_116e5220(&param_1);
    }
  }
  if ((cVar2 != '\0') && (cVar3 == '\0')) {
    return 1;
  }
  return 0;
}



/* ===== FUN_116878f0 @ 116878f0  size=9457 ===== */
// calls: memset, atof
// strings:
//   u"MonsterID"
//   u"InheritFrom"
//   u"MonsterType"
//   u"SpawnAppear"
//   u"LootBone"
//   u"LootOffset"
//   u"LootRotation"
//   u"LootSize"
//   u"Race"
//   u"ChangeAreaType"
//   "GoDown"
//   u"CatchCamera"
//   u"CatchCameraPoint"
//   u"CaptureHPPercent"
//   u"BodySize"
//   u"InterestPointType"
//   u"EmotionAngryTime"
//   u"AngryDamagePeakValue"
//   u"EmotionAngryAnimSpeed"
//   u"SkillSpeed"

/* [RE-AUTO c0]
   calls: memset, atof
   strings:
     "u"MonsterID""
     "u"InheritFrom""
     "u"MonsterType""
     "u"SpawnAppear""
     "u"LootBone""
     "u"LootOffset""
     "u"LootRotation""
     "u"LootSize""
     "u"Race""
     "u"ChangeAreaType"" */

void __thiscall FUN_116878f0(int param_1,int *param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  float10 fVar9;
  double dVar10;
  int local_4f4;
  int local_4f0;
  undefined4 local_4ec;
  undefined1 local_4e5;
  uint local_4e4;
  undefined1 local_4e0 [16];
  undefined1 *local_4d0;
  undefined1 *local_4cc;
  char local_4c8 [16];
  char *local_4b8;
  char *local_4b4;
  wchar_t local_4b0 [2];
  wchar_t awStack_4ac [2];
  uint uStack_4a8;
  wchar_t awStack_4a4 [2];
  undefined8 local_4a0;
  wchar_t local_498 [4];
  wchar_t *local_490;
  wchar_t *local_48c;
  char local_488 [128];
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123889c8 & 1) == 0) {
    DAT_123889c8 = DAT_123889c8 | 1;
    FUN_100f67b0(L"MonsterID");
  }
  if ((DAT_123889c8 & 2) == 0) {
    DAT_123889c8 = DAT_123889c8 | 2;
    iVar3 = FUN_100e1cb0(DAT_123889c4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123889cc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123889c4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123889cc);
    *(undefined4 *)(param_1 + 0x14) = uVar7;
  }
  if ((DAT_123889c8 & 4) == 0) {
    DAT_123889c8 = DAT_123889c8 | 4;
    FUN_100f67b0(L"InheritFrom");
  }
  if ((DAT_123889c8 & 8) == 0) {
    DAT_123889c8 = DAT_123889c8 | 8;
    iVar3 = FUN_100e1cb0(DAT_123889dc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123889e0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123889dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_123889e0);
    *(undefined4 *)(param_1 + 0x18) = uVar7;
  }
  if ((DAT_123889c8 & 0x10) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x10;
    FUN_100f67b0(L"MonsterType");
  }
  if ((DAT_123889c8 & 0x20) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x20;
    iVar3 = FUN_100e1cb0(DAT_123889f0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_123889f4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_123889f0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_123889f4);
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
    else if (iVar3 == 2) {
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
    else if (iVar3 == 5) {
      *(undefined4 *)(param_1 + 0x20) = 5;
    }
    else if (iVar3 == 6) {
      *(undefined4 *)(param_1 + 0x20) = 6;
    }
  }
  if ((DAT_123889c8 & 0x40) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x40;
    FUN_100f67b0(L"SpawnAppear");
  }
  if (-1 < (char)DAT_123889c8) {
    DAT_123889c8 = DAT_123889c8 | 0x80;
    iVar3 = FUN_100e1cb0(DAT_12388a04);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388a08);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388a04);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    if (DAT_12388a18 == 0) {
      DAT_12388a18 = 0x3f;
    }
    if ((DAT_123889c8 & 0x100) == 0) {
      DAT_123889c8 = DAT_123889c8 | 0x100;
      DAT_12388a2c = &DAT_12388a1c;
      DAT_12388a30 = &DAT_12388a1c;
      DAT_12388a1c = 0;
      FUN_11a8911f(&LAB_11ca6e00);
    }
    if (DAT_12388a30 == DAT_12388a2c) {
      local_488[0] = '\0';
      memset(local_488 + 1,0,0x7f);
      uVar4 = 4;
      do {
        FUN_100ea370(local_488,&DAT_11d24f44,*(undefined4 *)(&UNK_11d38a48 + uVar4));
        pcVar6 = local_488;
        do {
          pcVar8 = pcVar6;
          pcVar6 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
        FUN_100d9260(local_488,pcVar8);
        uVar4 = uVar4 + 4;
      } while (uVar4 < 0x1c);
    }
    local_490 = (wchar_t *)&local_4a0;
    local_4a0 = local_4a0 & 0xffffffffffffff00;
    local_48c = local_490;
    (**(code **)(*param_2 + 0x24))(&local_4a0,&DAT_12388a08);
    puVar1 = DAT_12388a30;
    iVar3 = FUN_100e1c50(DAT_12388a04);
    FUN_1167a240(param_1 + 0x6c,local_48c,DAT_12388a18,10,*(undefined4 *)(iVar3 + 0x14),puVar1);
    if ((local_48c != (wchar_t *)&local_4a0) && (local_48c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_48c);
    }
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 1;
  }
  if ((DAT_123889c8 & 0x200) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x200;
    DAT_12388a34 = -1;
    local_48c = local_4b0;
    local_490 = (wchar_t *)&local_4a0;
    awStack_4ac[0] = u_LootBone_11d38a64[2];
    awStack_4ac[1] = u_LootBone_11d38a64[3];
    local_4b0[0] = u_LootBone_11d38a64[0];
    local_4b0[1] = u_LootBone_11d38a64[1];
    uStack_4a8._0_2_ = u_LootBone_11d38a64[4];
    uStack_4a8._2_2_ = u_LootBone_11d38a64[5];
    awStack_4a4[0] = u_LootBone_11d38a64[6];
    awStack_4a4[1] = u_LootBone_11d38a64[7];
    local_4a0 = local_4a0 & 0xffffffffffff0000;
    iVar3 = FUN_100e1bf0(local_4b0);
    if (iVar3 == -1) {
      iVar3 = FUN_100e1c30(local_4b0);
    }
    if (iVar3 != DAT_12388a34) {
      DAT_12388a34 = iVar3;
    }
    if ((local_48c != local_4b0) && (local_48c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_48c);
    }
  }
  if ((DAT_123889c8 & 0x400) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x400;
    iVar3 = FUN_100e1cb0(DAT_12388a34);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388a38);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388a34);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x93c,&DAT_12388a38);
  }
  local_4d0 = local_4e0;
  local_4e0[0] = 0;
  local_4f4 = 0;
  local_4f0 = 0;
  local_4ec = 0;
  local_4cc = local_4d0;
  if ((DAT_123889c8 & 0x800) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x800;
    DAT_12388a48 = -1;
    local_48c = local_4b0;
    local_490 = (wchar_t *)((int)&local_4a0 + 4);
    awStack_4ac[0] = u_LootOffset_11d38a78[2];
    awStack_4ac[1] = u_LootOffset_11d38a78[3];
    local_4b0[0] = u_LootOffset_11d38a78[0];
    local_4b0[1] = u_LootOffset_11d38a78[1];
    uStack_4a8._0_2_ = u_LootOffset_11d38a78[4];
    uStack_4a8._2_2_ = u_LootOffset_11d38a78[5];
    awStack_4a4[0] = u_LootOffset_11d38a78[6];
    awStack_4a4[1] = u_LootOffset_11d38a78[7];
    local_4a0._0_6_ = (uint6)(uint)u_LootOffset_11d38a78._16_4_;
    iVar3 = FUN_100e1bf0(local_4b0);
    if (iVar3 == -1) {
      iVar3 = FUN_100e1c30(local_4b0);
    }
    if (iVar3 != DAT_12388a48) {
      DAT_12388a48 = iVar3;
    }
    if ((local_48c != local_4b0) && (local_48c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_48c);
    }
  }
  if ((DAT_123889c8 & 0x1000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x1000;
    iVar3 = FUN_100e1cb0(DAT_12388a48);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388a4c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388a48);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_4e0,&DAT_12388a4c);
  }
  iVar3 = FUN_100e4b30(local_4e0,&local_4f4,0x2c);
  if (iVar3 == 3) {
    dVar10 = atof(*(char **)(local_4f4 + 0x14));
    *(float *)(param_1 + 0x954) = (float)dVar10;
    dVar10 = atof(*(char **)(local_4f4 + 0x2c));
    *(float *)(param_1 + 0x958) = (float)dVar10;
    dVar10 = atof(*(char **)(local_4f4 + 0x44));
    *(float *)(param_1 + 0x95c) = (float)dVar10;
  }
  if (local_4f4 != local_4f0) {
    FUN_100e2440(local_4f4,local_4f0,&local_4e5);
  }
  if ((DAT_123889c8 & 0x2000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x2000;
    DAT_12388a5c = -1;
    local_48c = local_4b0;
    local_490 = local_498;
    awStack_4ac[0] = u_LootRotation_11d38a90[2];
    awStack_4ac[1] = u_LootRotation_11d38a90[3];
    local_4b0[0] = u_LootRotation_11d38a90[0];
    local_4b0[1] = u_LootRotation_11d38a90[1];
    uStack_4a8._0_2_ = u_LootRotation_11d38a90[4];
    uStack_4a8._2_2_ = u_LootRotation_11d38a90[5];
    awStack_4a4[0] = u_LootRotation_11d38a90[6];
    awStack_4a4[1] = u_LootRotation_11d38a90[7];
    local_4a0._0_2_ = u_LootRotation_11d38a90[8];
    local_4a0._2_2_ = u_LootRotation_11d38a90[9];
    local_4a0._4_2_ = u_LootRotation_11d38a90[10];
    local_4a0._6_2_ = u_LootRotation_11d38a90[0xb];
    local_498[0] = L'\0';
    iVar3 = FUN_100e1bf0(local_4b0);
    if (iVar3 == -1) {
      iVar3 = FUN_100e1c30(local_4b0);
    }
    if (iVar3 != DAT_12388a5c) {
      DAT_12388a5c = iVar3;
    }
    if ((local_48c != local_4b0) && (local_48c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_48c);
    }
  }
  if ((DAT_123889c8 & 0x4000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x4000;
    iVar3 = FUN_100e1cb0(DAT_12388a5c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388a60);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388a5c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388a60);
    *(float *)(param_1 + 0x960) = (float)fVar9;
  }
  if ((DAT_123889c8 & 0x8000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x8000;
    DAT_12388a70 = -1;
    local_48c = local_4b0;
    local_490 = (wchar_t *)&local_4a0;
    awStack_4ac[0] = u_LootSize_11d38aac[2];
    awStack_4ac[1] = u_LootSize_11d38aac[3];
    local_4b0[0] = u_LootSize_11d38aac[0];
    local_4b0[1] = u_LootSize_11d38aac[1];
    uStack_4a8._0_2_ = u_LootSize_11d38aac[4];
    uStack_4a8._2_2_ = u_LootSize_11d38aac[5];
    awStack_4a4[0] = u_LootSize_11d38aac[6];
    awStack_4a4[1] = u_LootSize_11d38aac[7];
    local_4a0 = local_4a0 & 0xffffffffffff0000;
    iVar3 = FUN_100e1bf0(local_4b0);
    if (iVar3 == -1) {
      iVar3 = FUN_100e1c30(local_4b0);
    }
    if (iVar3 != DAT_12388a70) {
      DAT_12388a70 = iVar3;
    }
    if ((local_48c != local_4b0) && (local_48c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_48c);
    }
  }
  if ((DAT_123889c8 & 0x10000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x10000;
    iVar3 = FUN_100e1cb0(DAT_12388a70);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388a74);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388a70);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388a74);
    *(float *)(param_1 + 0x938) = (float)fVar9;
  }
  if ((DAT_123889c8 & 0x20000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x20000;
    DAT_12388a84 = 0xffffffff;
    local_490 = local_4b0;
    local_48c = local_490;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x22);
  }
  if ((DAT_123889c8 & 0x40000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x40000;
    iVar3 = FUN_100e1cb0(DAT_12388a84);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388a88);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388a84);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x120,&DAT_12388a88);
  }
  if ((DAT_123889c8 & 0x80000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x80000;
    local_48c = local_4b0;
    DAT_12388a98 = -1;
    local_490 = (wchar_t *)&uStack_4a8;
    local_4b0[0] = u_Race_11d38ae4[0];
    local_4b0[1] = u_Race_11d38ae4[1];
    awStack_4ac[0] = u_Race_11d38ae4[2];
    awStack_4ac[1] = u_Race_11d38ae4[3];
    uStack_4a8 = uStack_4a8 & 0xffff0000;
    iVar3 = FUN_100e1bf0(local_4b0);
    if (iVar3 == -1) {
      iVar3 = FUN_100e1c30(local_4b0);
    }
    if (iVar3 != DAT_12388a98) {
      DAT_12388a98 = iVar3;
    }
    if ((local_48c != local_4b0) && (local_48c != (wchar_t *)0x0)) {
      FUN_10c3d5d0(local_48c);
    }
  }
  if ((DAT_123889c8 & 0x100000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x100000;
    iVar3 = FUN_100e1cb0(DAT_12388a98);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388a9c);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    local_4e4 = 0;
    cVar2 = (**(code **)(*param_2 + 0x2c))(&DAT_12388a9c,&local_4e4);
    uVar4 = 0;
    if (cVar2 != '\0') {
      uVar4 = local_4e4;
    }
    *(uint *)(param_1 + 0x70) = uVar4;
  }
  local_4b8 = local_4c8;
  local_4c8[0] = '\0';
  local_4b4 = local_4b8;
  if ((DAT_123889c8 & 0x200000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x200000;
    FUN_100f67b0(L"ChangeAreaType");
  }
  if ((DAT_123889c8 & 0x400000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x400000;
    iVar3 = FUN_100e1cb0(DAT_12388aac);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388ab0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388aac);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_4c8,&DAT_12388ab0);
  }
  local_490 = (wchar_t *)&local_4a0;
  pcVar6 = local_4b4;
  do {
    pcVar8 = pcVar6;
    pcVar6 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  local_48c = local_490;
  FUN_100b62c0(local_4b4,pcVar8);
  uVar4 = FUN_100e4b30(&local_4a0,&local_4f4,0x7c);
  local_4e4 = uVar4;
  if ((local_48c != (wchar_t *)&local_4a0) && (local_48c != (wchar_t *)0x0)) {
    FUN_10c3d5d0(local_48c);
  }
  if (0 < (int)uVar4) {
    iVar3 = 0;
    uVar4 = local_4e4;
    do {
      iVar5 = FUN_100ec310(*(undefined4 *)(iVar3 + 0x14 + local_4f4),&DAT_11cfaf54);
      if (iVar5 == 0) {
        *(uint *)(param_1 + 0x964) = *(uint *)(param_1 + 0x964) | 1;
      }
      else {
        iVar5 = FUN_100ec310(*(undefined4 *)(iVar3 + 0x14 + local_4f4),&DAT_11cbb914);
        if (iVar5 == 0) {
          *(uint *)(param_1 + 0x964) = *(uint *)(param_1 + 0x964) | 2;
        }
        else {
          iVar5 = FUN_100ec310(*(undefined4 *)(iVar3 + 0x14 + local_4f4),&DAT_11cbb8ac);
          if (iVar5 == 0) {
            *(uint *)(param_1 + 0x964) = *(uint *)(param_1 + 0x964) | 4;
          }
          else {
            iVar5 = FUN_100ec310(*(undefined4 *)(iVar3 + 0x14 + local_4f4),"GoDown");
            if (iVar5 == 0) {
              *(uint *)(param_1 + 0x964) = *(uint *)(param_1 + 0x964) | 8;
            }
          }
        }
      }
      iVar3 = iVar3 + 0x18;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if ((DAT_123889c8 & 0x800000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x800000;
    FUN_100f67b0(L"CatchCamera");
  }
  if ((DAT_123889c8 & 0x1000000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x1000000;
    iVar3 = FUN_100e1cb0(DAT_12388ac0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388ac4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388ac0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x108,&DAT_12388ac4);
  }
  if ((DAT_123889c8 & 0x2000000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x2000000;
    FUN_100f67b0(L"CatchCameraPoint");
  }
  if ((DAT_123889c8 & 0x4000000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x4000000;
    iVar3 = FUN_100e1cb0(DAT_12388ad4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388ad8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388ad4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(param_1 + 0x138,&DAT_12388ad8);
  }
  if ((DAT_123889c8 & 0x8000000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x8000000;
    FUN_100f67b0(L"CaptureHPPercent");
  }
  if ((DAT_123889c8 & 0x10000000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x10000000;
    iVar3 = FUN_100e1cb0(DAT_12388ae8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388aec);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388ae8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_12388aec);
    *(undefined4 *)(param_1 + 0x968) = uVar7;
  }
  if ((DAT_123889c8 & 0x20000000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x20000000;
    FUN_100f67b0(L"BodySize");
  }
  if ((DAT_123889c8 & 0x40000000) == 0) {
    DAT_123889c8 = DAT_123889c8 | 0x40000000;
    iVar3 = FUN_100e1cb0(DAT_12388afc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388b00);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388afc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_12388b00);
    *(undefined4 *)(param_1 + 0x96c) = uVar7;
  }
  FUN_100d83d0(&DAT_11d9d32b,&DAT_11d9d32b);
  if (-1 < (int)DAT_123889c8) {
    DAT_123889c8 = DAT_123889c8 | 0x80000000;
    FUN_100f67b0(L"InterestPointType");
  }
  if ((DAT_12388b24 & 1) == 0) {
    DAT_12388b24 = DAT_12388b24 | 1;
    iVar3 = FUN_100e1cb0(DAT_12388b10);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388b14);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388b10);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_4c8,&DAT_12388b14);
  }
  cVar2 = FUN_100fd0c0(local_4c8,&DAT_11d9d32b);
  if (cVar2 == '\0') {
    local_4e4 = 0;
    iVar3 = FUN_1184a050(&local_4e4);
    uVar4 = 0;
    if (local_4e4 != 0) {
      do {
        if (iVar3 == 0) break;
        pcVar6 = *(char **)(iVar3 + uVar4 * 8);
        pcVar8 = (char *)0x0;
        if (pcVar6 != (char *)0x0) {
          cVar2 = *pcVar6;
          while (cVar2 != '\0') {
            pcVar6 = pcVar6 + 1;
            if (cVar2 == '_') {
              pcVar8 = pcVar6;
            }
            cVar2 = *pcVar6;
          }
        }
        iVar5 = FUN_100ec320(local_4b4,pcVar8);
        if (iVar5 == 0) {
          *(uint *)(param_1 + 0x974) = uVar4;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_4e4);
    }
  }
  if ((DAT_12388b24 & 2) == 0) {
    DAT_12388b24 = DAT_12388b24 | 2;
    FUN_100f67b0(L"EmotionAngryTime");
  }
  if ((DAT_12388b24 & 4) == 0) {
    DAT_12388b24 = DAT_12388b24 | 4;
    iVar3 = FUN_100e1cb0(DAT_12388b28);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388b2c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388b28);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388b2c);
    *(float *)(param_1 + 0xa50) = (float)fVar9;
  }
  if ((DAT_12388b24 & 8) == 0) {
    DAT_12388b24 = DAT_12388b24 | 8;
    FUN_100f67b0(L"AngryDamagePeakValue");
  }
  if ((DAT_12388b24 & 0x10) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x10;
    iVar3 = FUN_100e1cb0(DAT_12388b3c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388b40);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388b3c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388b40);
    *(float *)(param_1 + 0xa54) = (float)fVar9;
  }
  if ((DAT_12388b24 & 0x20) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x20;
    FUN_100f67b0(L"EmotionAngryAnimSpeed");
  }
  if ((DAT_12388b24 & 0x40) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x40;
    iVar3 = FUN_100e1cb0(DAT_12388b50);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388b54);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388b50);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388b54);
    *(float *)(param_1 + 0xa58) = (float)fVar9;
  }
  if (-1 < (char)DAT_12388b24) {
    DAT_12388b24 = DAT_12388b24 | 0x80;
    FUN_100f67b0(L"SkillSpeed");
  }
  if ((DAT_12388b24 & 0x100) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x100;
    iVar3 = FUN_100e1cb0(DAT_12388b64);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388b68);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388b64);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388b68);
    *(float *)(param_1 + 0xa5c) = (float)fVar9;
  }
  if ((DAT_12388b24 & 0x200) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x200;
    FUN_100f67b0(L"RegionMaxTime");
  }
  if ((DAT_12388b24 & 0x400) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x400;
    iVar3 = FUN_100e1cb0(DAT_12388b78);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388b7c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388b78);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388b7c);
    *(float *)(param_1 + 0xa60) = (float)fVar9;
  }
  if ((DAT_12388b24 & 0x800) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x800;
    FUN_100f67b0(L"RegionMinTime");
  }
  if ((DAT_12388b24 & 0x1000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x1000;
    iVar3 = FUN_100e1cb0(DAT_12388b8c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388b90);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388b8c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388b90);
    *(float *)(param_1 + 0xa64) = (float)fVar9;
  }
  if ((DAT_12388b24 & 0x2000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x2000;
    FUN_1024f010("DistBodySize");
  }
  if ((DAT_12388b24 & 0x4000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x4000;
    iVar3 = FUN_100e1cb0(DAT_12388ba0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388ba4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388ba0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388ba4);
    *(float *)(param_1 + 0x930) = (float)fVar9;
  }
  if ((DAT_12388b24 & 0x8000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x8000;
    FUN_1024f010(&DAT_11cc0694);
  }
  if ((DAT_12388b24 & 0x10000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x10000;
    iVar3 = FUN_100e1cb0(DAT_12388bb4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388bb8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388bb4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388bb8);
    *(float *)(param_1 + 0x934) = (float)fVar9;
  }
  if ((DAT_12388b24 & 0x20000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x20000;
    FUN_1024f010("PreLoadBTOnServer");
  }
  if ((DAT_12388b24 & 0x40000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x40000;
    iVar3 = FUN_100e1cb0(DAT_12388bc8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388bcc);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388bc8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_12388bcc);
    *(undefined4 *)(param_1 + 0x970) = uVar7;
  }
  if ((DAT_12388b24 & 0x80000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x80000;
    FUN_1024f010("NeedShowEvEDmg");
  }
  if ((DAT_12388b24 & 0x100000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x100000;
    iVar3 = FUN_100e1cb0(DAT_12388bdc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388be0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388bdc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12388be0);
    *(bool *)(param_1 + 0xa4c) = iVar3 != 0;
  }
  if ((DAT_12388b24 & 0x200000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x200000;
    FUN_1024f010("NeedHidePVEDmg");
  }
  if ((DAT_12388b24 & 0x400000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x400000;
    iVar3 = FUN_100e1cb0(DAT_12388bf0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388bf4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388bf0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12388bf4);
    *(bool *)(param_1 + 0xa4d) = iVar3 != 0;
  }
  if ((DAT_12388b24 & 0x800000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x800000;
    FUN_1024f010("UseCombatNPCAtkModify");
  }
  if ((DAT_12388b24 & 0x1000000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x1000000;
    iVar3 = FUN_100e1cb0(DAT_12388c04);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388c08);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388c04);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12388c08);
    *(bool *)(param_1 + 0xa4e) = iVar3 != 0;
  }
  if ((DAT_12388b24 & 0x2000000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x2000000;
    FUN_1024f010("EnableLemonSystem");
  }
  if ((DAT_12388b24 & 0x4000000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x4000000;
    iVar3 = FUN_100e1cb0(DAT_12388c18);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388c1c);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388c18);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))(&DAT_12388c1c);
    *(bool *)(param_1 + 0xa4) = iVar3 != 0;
  }
  if ((DAT_12388b24 & 0x8000000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x8000000;
    FUN_1024f010("MinTag");
  }
  if ((DAT_12388b24 & 0x10000000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x10000000;
    iVar3 = FUN_100e1cb0(DAT_12388c2c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388c30);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388c2c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_12388c30);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
  }
  if ((DAT_12388b24 & 0x20000000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x20000000;
    FUN_1024f010("MaxTag");
  }
  if ((DAT_12388b24 & 0x40000000) == 0) {
    DAT_12388b24 = DAT_12388b24 | 0x40000000;
    iVar3 = FUN_100e1cb0(DAT_12388c40);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388c44);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388c40);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_12388c44);
    *(undefined4 *)(param_1 + 0xa8) = uVar7;
  }
  if (-1 < (int)DAT_12388b24) {
    DAT_12388b24 = DAT_12388b24 | 0x80000000;
    FUN_1024f010("EnterLemonMinHP");
  }
  if ((DAT_12388c68 & 1) == 0) {
    DAT_12388c68 = DAT_12388c68 | 1;
    iVar3 = FUN_100e1cb0(DAT_12388c54);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388c58);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388c54);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388c58);
    *(float *)(param_1 + 0xb4) = (float)fVar9;
  }
  if ((DAT_12388c68 & 2) == 0) {
    DAT_12388c68 = DAT_12388c68 | 2;
    FUN_1024f010("EnterLemonMaxHP");
  }
  if ((DAT_12388c68 & 4) == 0) {
    DAT_12388c68 = DAT_12388c68 | 4;
    iVar3 = FUN_100e1cb0(DAT_12388c6c);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388c70);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388c6c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388c70);
    *(float *)(param_1 + 0xb0) = (float)fVar9;
  }
  if ((DAT_12388c68 & 8) == 0) {
    DAT_12388c68 = DAT_12388c68 | 8;
    FUN_1024f010("LemonTime");
  }
  if ((DAT_12388c68 & 0x10) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x10;
    iVar3 = FUN_100e1cb0(DAT_12388c80);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388c84);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388c80);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_12388c84);
    *(undefined4 *)(param_1 + 0xc0) = uVar7;
  }
  if ((DAT_12388c68 & 0x20) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x20;
    FUN_1024f010("LeaveLemonMinHP");
  }
  if ((DAT_12388c68 & 0x40) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x40;
    iVar3 = FUN_100e1cb0(DAT_12388c94);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388c98);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388c94);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388c98);
    *(float *)(param_1 + 0xbc) = (float)fVar9;
  }
  if (-1 < (char)DAT_12388c68) {
    DAT_12388c68 = DAT_12388c68 | 0x80;
    FUN_1024f010("LeaveLemonMaxHP");
  }
  if ((DAT_12388c68 & 0x100) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x100;
    iVar3 = FUN_100e1cb0(DAT_12388ca8);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388cac);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388ca8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388cac);
    *(float *)(param_1 + 0xb8) = (float)fVar9;
  }
  if ((DAT_12388c68 & 0x200) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x200;
    FUN_1024f010("MaxPower");
  }
  if ((DAT_12388c68 & 0x400) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x400;
    iVar3 = FUN_100e1cb0(DAT_12388cbc);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388cc0);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388cbc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388cc0);
    *(float *)(param_1 + 0xd0) = (float)fVar9;
  }
  if ((DAT_12388c68 & 0x800) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x800;
    FUN_1024f010("PowerRecoverySpeed");
  }
  if ((DAT_12388c68 & 0x1000) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x1000;
    iVar3 = FUN_100e1cb0(DAT_12388cd0);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388cd4);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388cd0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar9 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_12388cd4);
    *(float *)(param_1 + 0xd4) = (float)fVar9;
  }
  if ((DAT_12388c68 & 0x2000) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x2000;
    FUN_100f67b0(L"Icon");
  }
  if ((DAT_12388c68 & 0x4000) == 0) {
    DAT_12388c68 = DAT_12388c68 | 0x4000;
    iVar3 = FUN_100e1cb0(DAT_12388ce4);
    FUN_10a30020(*(undefined4 *)(iVar3 + 0x24));
  }
  cVar2 = (**(code **)(*param_2 + 0x10))(&DAT_12388ce8);
  if (cVar2 == '\0') {
    local_408 = cVar2;
    memset(local_407,0,0x3ff);
    iVar3 = FUN_100e1c50(DAT_12388ce4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar3 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar7 = (**(code **)(*param_2 + 0x20))(&DAT_12388ce8);
    *(undefined4 *)(param_1 + 0xa48) = uVar7;
  }
  FUN_11684060(param_2,param_3);
  if ((local_4b4 != local_4c8) && (local_4b4 != (char *)0x0)) {
    FUN_10c3d5d0(local_4b4);
  }
  FUN_100e4590(local_4f0,local_4f4,0,&local_4e5);
  if (local_4f4 != 0) {
    FUN_10c3d5d0(local_4f4);
  }
  if ((local_4cc != local_4e0) && (local_4cc != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_4cc);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_116e5410 @ 116e5410  size=14846 ===== */
// calls: memset, atof, memcpy
// strings:
//   u"AttackName"
//   u"AttackInfo"
//   u"Type"
//   u"DamageNumberM"
//   u"PiyoM"
//   u"StaminaM"
//   u"Damage_LevelM"
//   u"Damage_Level_NumberM"
//   u"Damage_PowerM"
//   u"Damage_Dir_useM"
//   u"Damage_DirM"
//   u"Fire_AtkM"
//   u"Water_AtkM"
//   u"Dragon_AtkM"
//   u"Electric_AtkM"
//   u"Ice_AtkM"
//   u"CutM"
//   u"Cut_ValueM"
//   u"HanmmerM"
//   u"Hammer_ValueM"
// <decompile failed/virtualized>

/* ===== FUN_116eeb20 @ 116eeb20  size=4416 ===== */
// calls: memset, memcpy, atoi
// strings:
//   u"Timer"
//   u"TriggerableFx"
//   u"TriggerableFxScale"
//   u"ReflectChance"
//   u"Distance"
//   u"DistanceExecTimes"
//   u"DmgRangeID"
//   u"DefaultExplosionParam"
//   u"DefaultSpawnParam"
//   u"DefaultAttackName"

/* [RE-AUTO c0]
   calls: memset, memcpy, atoi
   strings:
     "u"Timer""
     "u"TriggerableFx""
     "u"TriggerableFxScale""
     "u"ReflectChance""
     "u"Distance""
     "u"DistanceExecTimes""
     "u"DmgRangeID""
     "u"DefaultExplosionParam""
     "u"DefaultSpawnParam""
     "u"DefaultAttackName"" */

void __thiscall FUN_116eeb20(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char *_Src;
  int *piVar2;
  bool bVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  size_t _Size;
  int *piVar14;
  int *piVar15;
  float10 fVar16;
  undefined *puVar17;
  undefined8 local_674;
  int *local_668;
  int *local_664;
  undefined4 local_660;
  undefined1 *local_65c;
  char *local_658;
  undefined1 *local_654;
  int local_650;
  int local_64c;
  undefined4 local_648;
  int local_644;
  int local_640;
  void *local_63c;
  undefined1 *local_638;
  undefined1 local_631;
  undefined1 local_630 [16];
  undefined1 *local_620;
  undefined1 *local_61c;
  undefined1 local_618 [16];
  undefined1 *local_608;
  undefined1 *local_604;
  undefined2 local_600 [16];
  undefined2 *local_5e0;
  undefined2 *local_5dc;
  undefined1 local_5d8 [16];
  undefined1 *local_5c8;
  undefined1 *local_5c4;
  undefined1 *local_5c0;
  wchar_t awStack_5bc [2];
  wchar_t awStack_5b8 [2];
  wchar_t awStack_5b4 [2];
  undefined1 *local_5b0 [4];
  undefined1 **local_5a0;
  undefined1 **local_59c;
  undefined4 local_598;
  undefined1 local_594 [196];
  undefined4 local_4d0;
  undefined1 local_4cc [196];
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_644 = param_1;
  if ((DAT_1238e5a0 & 1) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 1;
    FUN_100f67b0(L"Timer");
  }
  if ((DAT_1238e5a0 & 2) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 2;
    iVar6 = FUN_100e1cb0(DAT_1238e59c);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e5a4);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_1238e59c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar16 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e5a4);
    local_674 = (double)fVar16;
  }
  uVar10 = DAT_1238e5a0;
  local_608 = local_618;
  local_618[0] = 0;
  local_650 = 0;
  local_64c = 0;
  *(float *)(param_1 + 0xfc) = (float)local_674;
  local_648 = 0;
  local_604 = local_608;
  if ((uVar10 & 4) == 0) {
    DAT_1238e5a0 = uVar10 | 4;
    FUN_100f67b0(L"TriggerableFx");
    uVar10 = DAT_1238e5a0;
  }
  if ((uVar10 & 8) == 0) {
    DAT_1238e5a0 = uVar10 | 8;
    iVar6 = FUN_100e1cb0(DAT_1238e5b4);
    FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e5b8);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar6 = FUN_100e1c50(DAT_1238e5b4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_618,&DAT_1238e5b8);
  }
  local_658 = (char *)FUN_100e4b30(local_618,&local_650,0x3b);
  local_640 = 0;
  iVar6 = param_1;
  if (0 < (int)local_658) {
    local_638 = (undefined1 *)0x0;
    do {
      puVar1 = *(undefined1 **)(param_1 + 0x28c);
      puVar7 = local_638 + local_650;
      if (puVar1 == *(undefined1 **)(param_1 + 0x290)) {
        if ((puVar7 < *(undefined1 **)(param_1 + 0x288)) || (puVar1 <= puVar7)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_5a0 = local_5b0;
          pvVar9 = *(void **)(puVar7 + 0x10);
          local_63c = *(void **)(puVar7 + 0x14);
          local_654 = (undefined1 *)((int)pvVar9 - (int)local_63c);
          local_65c = local_654 + 1;
          if (local_65c == (undefined1 *)0x0) goto LAB_116f0637;
          if ((undefined1 *)0x10 < local_654 + 1) {
            local_59c = local_5a0;
            local_5a0 = (undefined1 **)FUN_100b6d60(local_654 + 1,&local_65c);
            local_5b0[0] = local_65c + (int)local_5a0;
          }
          local_59c = local_5a0;
          if (pvVar9 != local_63c) {
            pvVar9 = memcpy(local_5a0,local_63c,(size_t)local_654);
            local_5a0 = (undefined1 **)((int)pvVar9 + (int)local_654);
          }
          *(undefined1 *)local_5a0 = 0;
          FUN_100e2fc0(puVar1,local_5b0,&local_631,1,1);
          if ((local_59c != local_5b0) && (local_59c != (undefined1 **)0x0)) {
            FUN_10c3d5d0(local_59c);
          }
        }
        else {
          FUN_100e2fc0(puVar1,puVar7,&local_631,1,1);
        }
      }
      else {
        if (puVar1 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar1 + 0x10) = puVar1;
          *(undefined1 **)(puVar1 + 0x14) = puVar1;
          FUN_100b62c0(*(undefined4 *)(puVar7 + 0x14),*(undefined4 *)(puVar7 + 0x10));
        }
        *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 0x18;
      }
      local_640 = local_640 + 1;
      local_638 = local_638 + 0x18;
      iVar6 = local_644;
    } while (local_640 < (int)local_658);
  }
  iVar12 = *(int *)(iVar6 + 0x28c) - *(int *)(iVar6 + 0x288);
  iVar8 = iVar12 >> 0x1f;
  if (iVar12 / 0x18 + iVar8 != iVar8) {
    if (local_650 != local_64c) {
      FUN_100e2440(local_650,local_64c,&local_631);
    }
    if ((DAT_1238e5a0 & 0x10) == 0) {
      DAT_1238e5a0 = DAT_1238e5a0 | 0x10;
      FUN_100f67b0(L"TriggerableFxScale");
    }
    if ((DAT_1238e5a0 & 0x20) == 0) {
      DAT_1238e5a0 = DAT_1238e5a0 | 0x20;
      iVar8 = FUN_100e1cb0(DAT_1238e5c8);
      FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
    }
    cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e5cc);
    if (cVar5 == '\0') {
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      iVar8 = FUN_100e1c50(DAT_1238e5c8);
      FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar8 + 0x14));
      FUN_100ee330(&local_408,1);
    }
    else {
      (**(code **)(*param_2 + 0x24))(local_618,&DAT_1238e5cc);
    }
    iVar8 = FUN_100e4b30(local_618,&local_650,0x3b);
    local_674 = (double)CONCAT44(iVar8,(undefined4)local_674);
    local_640 = 0;
    if (0 < iVar8) {
      local_63c = (void *)0x0;
      do {
        local_5c8 = local_5d8;
        _Src = *(char **)(local_650 + 0x14 + (int)local_63c);
        pcVar4 = _Src;
        do {
          local_658 = pcVar4;
          pcVar4 = local_658 + 1;
        } while (*local_658 != '\0');
        _Size = (int)local_658 - (int)_Src;
        local_5c4 = local_5c8;
        if (_Size == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_100b73e0();
        }
        if (0x10 < _Size + 1) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(_Size + 1);
        }
        if (local_658 != _Src) {
          pvVar9 = memcpy(local_5c8,_Src,_Size);
          local_5c8 = (undefined1 *)(_Size + (int)pvVar9);
        }
        iVar6 = local_644;
        *local_5c8 = 0;
        puVar1 = *(undefined1 **)(local_644 + 0x298);
        if (puVar1 == *(undefined1 **)(local_644 + 0x29c)) {
          if ((local_5d8 < *(undefined1 **)(local_644 + 0x294)) || (puVar1 <= local_5d8)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_5a0 = local_5b0;
            local_65c = local_5c4;
            local_654 = local_5c8 + (1 - (int)local_5c4);
            local_638 = local_5c8;
            if (local_654 == (undefined1 *)0x0) {
LAB_116f0637:
              local_5a0 = local_5b0;
              local_59c = local_5a0;
                    /* WARNING: Subroutine does not return */
              FUN_100b73e0();
            }
            local_59c = local_5a0;
            if ((undefined1 *)0x10 < local_654) {
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(local_654);
            }
            if (local_5c8 != local_5c4) {
              local_638 = local_5c8 + -(int)local_5c4;
              pvVar9 = memcpy(local_5a0,local_5c4,(size_t)local_638);
              local_5a0 = (undefined1 **)((int)pvVar9 + (int)local_638);
            }
            *(undefined1 *)local_5a0 = 0;
            FUN_100e2fc0(puVar1,local_5b0,&local_631,1,1);
            if ((local_59c != local_5b0) && (local_59c != (undefined1 **)0x0)) {
              FUN_10c3d5d0(local_59c);
            }
          }
          else {
            FUN_100e2fc0(puVar1,local_5d8,&local_631,1,1);
          }
        }
        else {
          if (puVar1 != (undefined1 *)0x0) {
            *(undefined1 **)(puVar1 + 0x10) = puVar1;
            *(undefined1 **)(puVar1 + 0x14) = puVar1;
            local_638 = local_5c8;
            local_658 = (char *)(((int)local_5c8 - (int)local_5c4) + 1);
            if ((int)local_5c8 - (int)local_5c4 == -1) {
                    /* WARNING: Subroutine does not return */
              FUN_100b73e0();
            }
            if (&DAT_00000010 < local_658) {
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(local_658);
            }
            puVar7 = *(undefined1 **)(puVar1 + 0x14);
            if (local_5c8 != local_5c4) {
              local_638 = local_5c8 + -(int)local_5c4;
              pvVar9 = memcpy(puVar7,local_5c4,(size_t)local_638);
              puVar7 = (undefined1 *)((int)pvVar9 + (int)local_638);
            }
            *(undefined1 **)(puVar1 + 0x10) = puVar7;
            *puVar7 = 0;
          }
          *(int *)(iVar6 + 0x298) = *(int *)(iVar6 + 0x298) + 0x18;
        }
        if ((local_5c4 != local_5d8) && (local_5c4 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_5c4);
        }
        local_640 = local_640 + 1;
        local_63c = (void *)((int)local_63c + 0x18);
        iVar6 = local_644;
      } while (local_640 < iVar8);
    }
  }
  if (local_650 != local_64c) {
    FUN_100e2440(local_650,local_64c,&local_631);
  }
  if ((DAT_1238e5a0 & 0x40) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x40;
    DAT_1238e5dc = 0xffffffff;
    local_5a0 = &local_5c0;
    local_59c = local_5a0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x24);
  }
  if (-1 < (char)DAT_1238e5a0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x80;
    iVar8 = FUN_100e1cb0(DAT_1238e5dc);
    FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e5e0);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar8 = FUN_100e1c50(DAT_1238e5dc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar8 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_618,&DAT_1238e5e0);
  }
  iVar8 = FUN_100e4b30(local_618,&local_650,0x3b);
  if (iVar8 == 2) {
    iVar8 = atoi(*(char **)(local_650 + 0x14));
    *(int *)(iVar6 + 0x18c) = iVar8;
    iVar8 = atoi(*(char **)(local_650 + 0x2c));
    *(int *)(iVar6 + 400) = iVar8;
  }
  if ((DAT_1238e5a0 & 0x100) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x100;
    DAT_1238e5f0 = -1;
    local_59c = &local_5c0;
    pvVar9 = memcpy(local_59c,L"ReflectChance",0x1a);
    local_5a0 = (undefined1 **)((int)pvVar9 + 0x1a);
    *(undefined2 *)local_5a0 = 0;
    iVar8 = FUN_100e1bf0(&local_5c0);
    if (iVar8 == -1) {
      iVar8 = FUN_100e1c30(&local_5c0);
    }
    if (iVar8 != DAT_1238e5f0) {
      DAT_1238e5f0 = iVar8;
    }
    if ((local_59c != &local_5c0) && (local_59c != (undefined1 **)0x0)) {
      FUN_10c3d5d0(local_59c);
    }
  }
  if ((DAT_1238e5a0 & 0x200) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x200;
    iVar8 = FUN_100e1cb0(DAT_1238e5f0);
    FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e5f4);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar8 = FUN_100e1c50(DAT_1238e5f0);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar8 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar16 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e5f4);
    *(float *)(iVar6 + 0x194) = (float)fVar16;
  }
  if ((DAT_1238e5a0 & 0x400) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x400;
    DAT_1238e604 = -1;
    local_59c = &local_5c0;
    local_5a0 = local_5b0;
    local_5c0 = (undefined1 *)u_Distance_11d420e0._0_4_;
    awStack_5bc[0] = u_Distance_11d420e0[2];
    awStack_5bc[1] = u_Distance_11d420e0[3];
    awStack_5b8[0] = u_Distance_11d420e0[4];
    awStack_5b8[1] = u_Distance_11d420e0[5];
    awStack_5b4[0] = u_Distance_11d420e0[6];
    awStack_5b4[1] = u_Distance_11d420e0[7];
    local_5b0[0] = (undefined1 *)((uint)local_5b0[0] & 0xffff0000);
    iVar8 = FUN_100e1bf0(&local_5c0);
    if (iVar8 == -1) {
      iVar8 = FUN_100e1c30(&local_5c0);
    }
    if (iVar8 != DAT_1238e604) {
      DAT_1238e604 = iVar8;
    }
    if ((local_59c != &local_5c0) && (local_59c != (undefined1 **)0x0)) {
      FUN_10c3d5d0(local_59c);
    }
  }
  if ((DAT_1238e5a0 & 0x800) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x800;
    iVar8 = FUN_100e1cb0(DAT_1238e604);
    FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e608);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar8 = FUN_100e1c50(DAT_1238e604);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar8 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    fVar16 = (float10)(**(code **)(*param_2 + 0x30))(&DAT_1238e608);
    local_674 = (double)fVar16;
  }
  uVar10 = DAT_1238e5a0;
  *(float *)(iVar6 + 0x100) = (float)local_674;
  if ((uVar10 & 0x1000) == 0) {
    DAT_1238e5a0 = uVar10 | 0x1000;
    FUN_100f67b0(L"DistanceExecTimes");
    uVar10 = DAT_1238e5a0;
  }
  if ((uVar10 & 0x2000) == 0) {
    DAT_1238e5a0 = uVar10 | 0x2000;
    iVar8 = FUN_100e1cb0(DAT_1238e618);
    FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e61c);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar8 = FUN_100e1c50(DAT_1238e618);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar8 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar11 = (**(code **)(*param_2 + 0x20))(&DAT_1238e61c);
    *(undefined4 *)(iVar6 + 0x21c) = uVar11;
  }
  local_620 = local_630;
  local_630[0] = 0;
  local_61c = local_620;
  if ((DAT_1238e5a0 & 0x4000) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x4000;
    FUN_100f67b0(L"DmgRangeID");
  }
  if ((DAT_1238e5a0 & 0x8000) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x8000;
    iVar8 = FUN_100e1cb0(DAT_1238e62c);
    FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e630);
  if (cVar5 == '\0') {
    *(undefined4 *)(iVar6 + 0x20c) = 1;
  }
  else {
    local_63c = (void *)0x1;
    cVar5 = (**(code **)(*param_2 + 0x2c))(&DAT_1238e630,&local_63c);
    pvVar9 = (void *)0x1;
    if (cVar5 != '\0') {
      pvVar9 = local_63c;
    }
    *(void **)(iVar6 + 0x20c) = pvVar9;
  }
  if ((DAT_1238e5a0 & 0x10000) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x10000;
    FUN_100f67b0(L"DefaultExplosionParam");
  }
  if ((DAT_1238e5a0 & 0x20000) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x20000;
    iVar8 = FUN_100e1cb0(DAT_1238e640);
    FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e644);
  if (cVar5 == '\0') {
    *(undefined4 *)(iVar6 + 0x260) = 0xffffffff;
  }
  else {
    local_63c = (void *)0xffffffff;
    cVar5 = (**(code **)(*param_2 + 0x2c))(&DAT_1238e644,&local_63c);
    pvVar9 = (void *)0xffffffff;
    if (cVar5 != '\0') {
      pvVar9 = local_63c;
    }
    *(void **)(iVar6 + 0x260) = pvVar9;
  }
  if ((DAT_1238e5a0 & 0x40000) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x40000;
    FUN_100f67b0(L"DefaultSpawnParam");
  }
  if ((DAT_1238e5a0 & 0x80000) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x80000;
    iVar8 = FUN_100e1cb0(DAT_1238e654);
    FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e658);
  if (cVar5 == '\0') {
    *(undefined4 *)(iVar6 + 0x25c) = 0xffffffff;
  }
  else {
    local_63c = (void *)0xffffffff;
    cVar5 = (**(code **)(*param_2 + 0x2c))(&DAT_1238e658,&local_63c);
    pvVar9 = (void *)0xffffffff;
    if (cVar5 != '\0') {
      pvVar9 = local_63c;
    }
    *(void **)(iVar6 + 0x25c) = pvVar9;
  }
  if ((DAT_1238e5a0 & 0x100000) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x100000;
    FUN_100f67b0(L"DefaultAttackName");
  }
  if ((DAT_1238e5a0 & 0x200000) == 0) {
    DAT_1238e5a0 = DAT_1238e5a0 | 0x200000;
    iVar8 = FUN_100e1cb0(DAT_1238e668);
    FUN_10a30020(*(undefined4 *)(iVar8 + 0x24));
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e66c);
  if (cVar5 == '\0') {
    local_408 = cVar5;
    memset(local_407,0,0x3ff);
    iVar8 = FUN_100e1c50(DAT_1238e668);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar8 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_630,&DAT_1238e66c);
  }
  iVar8 = *(int *)(iVar6 + 0x214);
  if (iVar8 == *(int *)(iVar6 + 0x218)) {
    FUN_100e2390(iVar8,local_630,&local_631,1,1);
  }
  else {
    if (iVar8 != 0) {
      *(int *)(iVar8 + 0x10) = iVar8;
      *(int *)(iVar8 + 0x14) = iVar8;
      FUN_100b62c0(local_61c,local_620);
    }
    *(int *)(iVar6 + 0x214) = *(int *)(iVar6 + 0x214) + 0x18;
  }
  local_5e0 = local_600;
  local_600[0] = 0;
  local_668 = (int *)0x0;
  local_664 = (int *)0x0;
  local_660 = 0;
  local_644 = 0;
  local_5dc = local_5e0;
  do {
    if (local_5dc != local_5e0) {
      *local_5dc = 0;
      local_5e0 = local_5dc;
    }
    switch(local_644) {
    case 0:
      if ((DAT_1238e5a0 & 0x400000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x400000;
        FUN_100f67b0(L"OnTime");
      }
      if ((DAT_1238e5a0 & 0x800000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x800000;
        iVar6 = FUN_100e1cb0(DAT_1238e67c);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e680);
      if (cVar5 == '\0') {
        local_408 = cVar5;
        memset(local_407,0,0x3ff);
        uVar11 = DAT_1238e67c;
        break;
      }
      puVar17 = &DAT_1238e680;
LAB_116f043e:
      (**(code **)(*param_2 + 0x28))(local_600,puVar17);
      goto LAB_116f044c;
    case 1:
      if ((DAT_1238e5a0 & 0x1000000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x1000000;
        FUN_100f67b0(L"OnDistance");
      }
      if ((DAT_1238e5a0 & 0x2000000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x2000000;
        iVar6 = FUN_100e1cb0(DAT_1238e690);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e694);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e694;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e690;
      break;
    case 2:
      if ((DAT_1238e5a0 & 0x4000000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x4000000;
        FUN_100f67b0(L"Terrian");
      }
      if ((DAT_1238e5a0 & 0x8000000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x8000000;
        iVar6 = FUN_100e1cb0(DAT_1238e6a4);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e6a8);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e6a8;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e6a4;
      break;
    case 3:
      if ((DAT_1238e5a0 & 0x10000000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x10000000;
        FUN_100f67b0(L"Ocean");
      }
      if ((DAT_1238e5a0 & 0x20000000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x20000000;
        iVar6 = FUN_100e1cb0(DAT_1238e6b8);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e6bc);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e6bc;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e6b8;
      break;
    case 4:
      if ((DAT_1238e5a0 & 0x40000000) == 0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x40000000;
        FUN_100f67b0(L"UnpenetrableWall");
      }
      if (-1 < (int)DAT_1238e5a0) {
        DAT_1238e5a0 = DAT_1238e5a0 | 0x80000000;
        iVar6 = FUN_100e1cb0(DAT_1238e6cc);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e6d0);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e6d0;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e6cc;
      break;
    case 5:
      if ((DAT_1238e6e4 & 1) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 1;
        FUN_100f67b0(L"PenetrableWall");
      }
      if ((DAT_1238e6e4 & 2) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 2;
        iVar6 = FUN_100e1cb0(DAT_1238e6e0);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e6e8);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e6e8;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e6e0;
      break;
    case 6:
      if ((DAT_1238e6e4 & 0x10) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x10;
        FUN_100f67b0(L"UnpenetrableObject");
      }
      if ((DAT_1238e6e4 & 0x20) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x20;
        iVar6 = FUN_100e1cb0(DAT_1238e70c);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e710);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e710;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e70c;
      break;
    case 7:
      if ((DAT_1238e6e4 & 0x40) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x40;
        FUN_100f67b0(L"PenetrableObject");
      }
      if (-1 < (char)DAT_1238e6e4) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x80;
        iVar6 = FUN_100e1cb0(DAT_1238e720);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e724);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e724;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e720;
      break;
    case 8:
      if ((DAT_1238e6e4 & 4) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 4;
        FUN_100f67b0(L"ReboundSurface");
      }
      if ((DAT_1238e6e4 & 8) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 8;
        iVar6 = FUN_100e1cb0(DAT_1238e6f8);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e6fc);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e6fc;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e6f8;
      break;
    case 9:
      if ((DAT_1238e6e4 & 0x100) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x100;
        FUN_100f67b0(L"FriendHuman");
      }
      if ((DAT_1238e6e4 & 0x200) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x200;
        iVar6 = FUN_100e1cb0(DAT_1238e734);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e738);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e738;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e734;
      break;
    case 10:
      if ((DAT_1238e6e4 & 0x400) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x400;
        FUN_100f67b0(L"NeutralHuman");
      }
      if ((DAT_1238e6e4 & 0x800) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x800;
        iVar6 = FUN_100e1cb0(DAT_1238e748);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e74c);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e74c;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e748;
      break;
    case 0xb:
      if ((DAT_1238e6e4 & 0x1000) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x1000;
        FUN_100f67b0(L"HostileHuman");
      }
      if ((DAT_1238e6e4 & 0x2000) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x2000;
        iVar6 = FUN_100e1cb0(DAT_1238e75c);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e760);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e760;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e75c;
      break;
    case 0xc:
      if ((DAT_1238e6e4 & 0x4000) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x4000;
        FUN_100f67b0(L"FriendMonster");
      }
      if ((DAT_1238e6e4 & 0x8000) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x8000;
        iVar6 = FUN_100e1cb0(DAT_1238e770);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e774);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e774;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e770;
      break;
    case 0xd:
      if ((DAT_1238e6e4 & 0x10000) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x10000;
        FUN_100f67b0(L"NeutralMonster");
      }
      if ((DAT_1238e6e4 & 0x20000) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x20000;
        iVar6 = FUN_100e1cb0(DAT_1238e784);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e788);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e788;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e784;
      break;
    case 0xe:
      if ((DAT_1238e6e4 & 0x40000) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x40000;
        FUN_100f67b0(L"HostileMonster");
      }
      if ((DAT_1238e6e4 & 0x80000) == 0) {
        DAT_1238e6e4 = DAT_1238e6e4 | 0x80000;
        iVar6 = FUN_100e1cb0(DAT_1238e798);
        FUN_10a30020(*(undefined4 *)(iVar6 + 0x24));
      }
      cVar5 = (**(code **)(*param_2 + 0x10))(&DAT_1238e79c);
      if (cVar5 != '\0') {
        puVar17 = &DAT_1238e79c;
        goto LAB_116f043e;
      }
      local_408 = cVar5;
      memset(local_407,0,0x3ff);
      uVar11 = DAT_1238e798;
      break;
    default:
      goto LAB_116f044c;
    }
    iVar6 = FUN_100e1c50(uVar11);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar6 + 0x14));
    FUN_100ee330(&local_408,1);
LAB_116f044c:
    if (local_668 != local_664) {
      FUN_100e2650(local_668,local_664,&local_631);
    }
    iVar8 = FUN_100e4d10(local_600,&local_668,0x2c);
    local_598 = 0;
    memset(local_594,0,0xc4);
    local_4d0 = 0;
    memset(local_4cc,0,0xc4);
    iVar6 = local_644;
    if ((0 < iVar8) && (piVar14 = local_668, local_668 != local_664)) {
      do {
        cVar5 = FUN_116ee040(piVar14,&local_4d0,100,&local_598,100);
        puVar13 = &local_598;
        if (cVar5 == '\0') {
          puVar13 = (undefined4 *)0x0;
        }
        FUN_116ed8c0(iVar6,&local_4d0,puVar13);
        piVar14 = piVar14 + 10;
      } while (piVar14 != local_664);
    }
    piVar14 = local_668;
    local_644 = local_644 + 1;
    if (0xe < local_644) {
      if (local_664 != local_668) {
        piVar15 = local_664 + -1;
        do {
          piVar2 = (int *)*piVar15;
          if ((piVar2 != piVar15 + -9) && (piVar2 != (int *)0x0)) {
            FUN_10c3d5d0(piVar2);
          }
          piVar2 = piVar15 + -9;
          piVar15 = piVar15 + -10;
        } while (piVar2 != piVar14);
      }
      if (local_668 != (int *)0x0) {
        FUN_10c3d5d0(local_668);
      }
      if ((local_5dc != local_600) && (local_5dc != (undefined2 *)0x0)) {
        FUN_10c3d5d0(local_5dc);
      }
      if ((local_61c != local_630) && (local_61c != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_61c);
      }
      FUN_100e4590(local_64c,local_650,0,&local_631);
      if (local_650 != 0) {
        FUN_10c3d5d0(local_650);
      }
      if ((local_604 != local_618) && (local_604 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_604);
      }
      FUN_11a89daa();
      return;
    }
  } while( true );
}



/* ===== FUN_118c0a60 @ 118c0a60  size=52 ===== */
// calls: CDamageInfo::GetManager
// strings:
//   "CDamageInfo"

/* [RE-AUTO c0]
   calls: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo"" */

undefined4 FUN_118c0a60(int param_1)

{
  int iVar1;
  
  iVar1 = CDamageInfo__GetManager(0,"CDamageInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_119dff50 @ 119dff50  size=2837 ===== */
// calls: memset, memcpy
// strings:
//   u"Name"
//   u"Type"
//   "Normal"
//   u"Radius"
//   u"OffsetY"
//   u"OffsetZ"
//   u"AttackName"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: memset, memcpy
   strings:
     "u"Name""
     "u"Type""
     ""Normal""
     "u"Radius""
     "u"OffsetY""
     "u"OffsetZ""
     "u"AttackName"" */

void __thiscall FUN_119dff50(float param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  size_t _Size;
  float fVar11;
  float fVar12;
  int local_470;
  undefined1 local_461;
  float local_460;
  undefined8 local_45c;
  float local_454;
  float local_450;
  int local_44c [4];
  int *local_43c;
  int *local_438;
  int local_434;
  float local_430;
  float fStack_42c;
  float fStack_428;
  undefined1 auStack_424 [4];
  wchar_t local_420 [2];
  undefined2 local_41c [6];
  wchar_t *local_410;
  float *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a4068 & 1) == 0) {
    DAT_123a4068 = DAT_123a4068 | 1;
    FUN_100f67b0(L"Name");
  }
  if ((DAT_123a4068 & 2) == 0) {
    DAT_123a4068 = DAT_123a4068 | 2;
    iVar4 = FUN_100e1cb0(DAT_123a4064);
    FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
  }
  cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_123a406c);
  if (cVar3 == '\0') {
    local_408 = cVar3;
    memset(local_407,0,0x3ff);
    iVar4 = FUN_100e1c50(DAT_123a4064);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar4 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))((int)param_1 + 0x14,&DAT_123a406c);
  }
  if ((DAT_123a4068 & 4) == 0) {
    DAT_123a4068 = DAT_123a4068 | 4;
    FUN_100f67b0(&DAT_11d38d6c);
  }
  if ((DAT_123a4068 & 8) == 0) {
    DAT_123a4068 = DAT_123a4068 | 8;
    iVar4 = FUN_100e1cb0(DAT_123a407c);
    FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
  }
  cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_123a4080);
  if (cVar3 == '\0') {
    local_408 = cVar3;
    memset(local_407,0,0x3ff);
    iVar4 = FUN_100e1c50(DAT_123a407c);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar4 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar5 = (**(code **)(*param_2 + 0x20))(&DAT_123a4080);
    *(undefined4 *)((int)param_1 + 0x10) = uVar5;
  }
  local_44c[0]._0_1_ = 0;
  local_470 = -1;
  local_43c = local_44c;
  local_438 = local_43c;
  if ((DAT_123a4068 & 0x10) == 0) {
    DAT_123a4068 = DAT_123a4068 | 0x10;
    FUN_100f67b0(L"Type");
  }
  if ((DAT_123a4068 & 0x20) == 0) {
    DAT_123a4068 = DAT_123a4068 | 0x20;
    iVar4 = FUN_100e1cb0(DAT_123a4090);
    FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
  }
  cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_123a4094);
  if (cVar3 == '\0') {
    local_408 = cVar3;
    memset(local_407,0,0x3ff);
    iVar4 = FUN_100e1c50(DAT_123a4090);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar4 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    (**(code **)(*param_2 + 0x24))(local_44c,&DAT_123a4094);
  }
  piVar9 = (int *)&DAT_11d6ad60;
  local_454 = (float)((int)local_43c - (int)local_438);
  local_450 = 0.0;
  do {
    piVar7 = piVar9;
    do {
      iVar4 = *piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
    } while ((char)iVar4 != '\0');
    uVar8 = (int)piVar7 - (int)((int)piVar9 + 1);
    piVar7 = piVar9;
    piVar2 = local_438;
    if (local_454 == (float)uVar8) {
      while (uVar1 = uVar8 - 4, 3 < uVar8) {
        if (*piVar2 != *piVar7) goto LAB_119e0216;
        piVar7 = piVar7 + 1;
        piVar2 = piVar2 + 1;
        uVar8 = uVar1;
      }
      if (uVar1 != 0xfffffffc) {
LAB_119e0216:
        if (((char)*piVar2 != (char)*piVar7) ||
           ((uVar1 != 0xfffffffd &&
            ((*(char *)((int)piVar2 + 1) != *(char *)((int)piVar7 + 1) ||
             ((uVar1 != 0xfffffffe &&
              ((*(char *)((int)piVar2 + 2) != *(char *)((int)piVar7 + 2) ||
               ((uVar1 != 0xffffffff && (*(char *)((int)piVar2 + 3) != *(char *)((int)piVar7 + 3))))
               ))))))))) goto LAB_119e0266;
      }
      local_470 = (int)local_450 + -1;
    }
LAB_119e0266:
    local_450 = (float)((int)local_450 + 1);
    piVar9 = piVar9 + 5;
    if (0x11d6adaf < (int)piVar9) {
      if ((DAT_123a4068 & 0x40) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x40;
        local_40c = &local_430;
        fStack_428 = (float)u_Radius_11d41c48._8_4_;
        local_410 = (wchar_t *)auStack_424;
        DAT_123a40a4 = -1;
        local_430._0_2_ = u_Radius_11d41c48[0];
        local_430._2_2_ = u_Radius_11d41c48[1];
        fStack_42c._0_2_ = u_Radius_11d41c48[2];
        fStack_42c._2_2_ = u_Radius_11d41c48[3];
        auStack_424 = (undefined1  [4])((uint)auStack_424 & 0xffff0000);
        iVar4 = FUN_100e1bf0(&local_430);
        if (iVar4 == -1) {
          iVar4 = FUN_100e1c30(&local_430);
        }
        if (iVar4 != DAT_123a40a4) {
          DAT_123a40a4 = iVar4;
        }
        if ((local_40c != &local_430) && (local_40c != (float *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
      }
      if (-1 < (char)DAT_123a4068) {
        DAT_123a4068 = DAT_123a4068 | 0x80;
        iVar4 = FUN_100e1cb0(DAT_123a40a4);
        FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
      }
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_123a40a8);
      fVar11 = param_1;
      if (cVar3 != '\0') {
        local_45c = 0.0;
        cVar3 = (**(code **)(*param_2 + 0x34))(&DAT_123a40a8,&local_45c);
        if (cVar3 == '\0') {
          fVar11 = 0.0;
        }
        else {
          fVar11 = (float)local_45c;
        }
      }
      local_454 = fVar11;
      if ((DAT_123a4068 & 0x100) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x100;
        local_40c = &local_430;
        fStack_428 = (float)DAT_11d6ac8c;
        local_410 = (wchar_t *)((int)auStack_424 + 2);
        DAT_123a40b8 = -1;
        local_430._0_2_ = _DAT_11d6ac84;
        local_430._2_2_ = _UNK_11d6ac86;
        fStack_42c._0_2_ = _UNK_11d6ac88;
        fStack_42c._2_2_ = _UNK_11d6ac8a;
        auStack_424._2_2_ = 0;
        auStack_424._0_2_ = DAT_11d6ac90;
        iVar4 = FUN_100e1bf0(&local_430);
        if (iVar4 == -1) {
          iVar4 = FUN_100e1c30(&local_430);
        }
        if (iVar4 != DAT_123a40b8) {
          DAT_123a40b8 = iVar4;
        }
        if ((local_40c != &local_430) && (local_40c != (float *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
      }
      if ((DAT_123a4068 & 0x200) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x200;
        iVar4 = FUN_100e1cb0(DAT_123a40b8);
        FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
      }
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_123a40bc);
      if (cVar3 != '\0') {
        local_45c = 0.0;
        cVar3 = (**(code **)(*param_2 + 0x34))(&DAT_123a40bc,&local_45c);
        if (cVar3 == '\0') {
          local_460 = 0.0;
        }
        else {
          local_460 = (float)local_45c;
        }
      }
      local_450 = local_460;
      if ((DAT_123a4068 & 0x400) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x400;
        local_40c = &local_430;
        fStack_428 = (float)u_OffsetY_11d6ac94._8_4_;
        local_410 = (wchar_t *)((int)auStack_424 + 2);
        DAT_123a40cc = -1;
        local_430._0_2_ = u_OffsetY_11d6ac94[0];
        local_430._2_2_ = u_OffsetY_11d6ac94[1];
        fStack_42c._0_2_ = u_OffsetY_11d6ac94[2];
        fStack_42c._2_2_ = u_OffsetY_11d6ac94[3];
        auStack_424._2_2_ = 0;
        auStack_424._0_2_ = u_OffsetY_11d6ac94[6];
        iVar4 = FUN_100e1bf0(&local_430);
        if (iVar4 == -1) {
          iVar4 = FUN_100e1c30(&local_430);
        }
        if (iVar4 != DAT_123a40cc) {
          DAT_123a40cc = iVar4;
        }
        if ((local_40c != &local_430) && (local_40c != (float *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
      }
      if ((DAT_123a4068 & 0x800) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x800;
        iVar4 = FUN_100e1cb0(DAT_123a40cc);
        FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
      }
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_123a40d0);
      if (cVar3 == '\0') {
        fVar11 = (float)local_45c;
      }
      else {
        local_45c = 0.0;
        cVar3 = (**(code **)(*param_2 + 0x34))(&DAT_123a40d0,&local_45c);
        if (cVar3 == '\0') {
          fVar11 = 0.0;
        }
        else {
          fVar11 = (float)local_45c;
        }
      }
      if ((DAT_123a4068 & 0x1000) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x1000;
        local_40c = &local_430;
        fStack_428 = (float)u_OffsetZ_11d6aca4._8_4_;
        local_410 = (wchar_t *)((int)auStack_424 + 2);
        DAT_123a40e0 = -1;
        local_430._0_2_ = u_OffsetZ_11d6aca4[0];
        local_430._2_2_ = u_OffsetZ_11d6aca4[1];
        fStack_42c._0_2_ = u_OffsetZ_11d6aca4[2];
        fStack_42c._2_2_ = u_OffsetZ_11d6aca4[3];
        auStack_424._2_2_ = 0;
        auStack_424._0_2_ = u_OffsetZ_11d6aca4[6];
        iVar4 = FUN_100e1bf0(&local_430);
        if (iVar4 == -1) {
          iVar4 = FUN_100e1c30(&local_430);
        }
        if (iVar4 != DAT_123a40e0) {
          DAT_123a40e0 = iVar4;
        }
        if ((local_40c != &local_430) && (local_40c != (float *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
      }
      if ((DAT_123a4068 & 0x2000) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x2000;
        iVar4 = FUN_100e1cb0(DAT_123a40e0);
        FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
      }
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_123a40e4);
      if (cVar3 == '\0') {
        fVar12 = local_45c._4_4_;
      }
      else {
        local_45c = 0.0;
        cVar3 = (**(code **)(*param_2 + 0x34))(&DAT_123a40e4,&local_45c);
        if (cVar3 == '\0') {
          fVar12 = 0.0;
        }
        else {
          fVar12 = (float)local_45c;
        }
      }
      local_45c = (double)CONCAT44(fVar12,(float)local_45c);
      if ((DAT_123a4068 & 0x4000) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x4000;
        DAT_123a40f4 = -1;
        local_40c = &local_430;
        local_420[0] = u_AttackName_11d412ac[8];
        local_420[1] = u_AttackName_11d412ac[9];
        local_410 = local_41c;
        fStack_42c._0_2_ = u_AttackName_11d412ac[2];
        fStack_42c._2_2_ = u_AttackName_11d412ac[3];
        local_430._0_2_ = u_AttackName_11d412ac[0];
        local_430._2_2_ = u_AttackName_11d412ac[1];
        fStack_428 = (float)u_AttackName_11d412ac._8_4_;
        auStack_424._0_2_ = u_AttackName_11d412ac[6];
        auStack_424._2_2_ = u_AttackName_11d412ac[7];
        local_41c[0] = 0;
        iVar4 = FUN_100e1bf0(&local_430);
        if (iVar4 == -1) {
          iVar4 = FUN_100e1c30(&local_430);
        }
        if (iVar4 != DAT_123a40f4) {
          DAT_123a40f4 = iVar4;
        }
        if ((local_40c != &local_430) && (local_40c != (float *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
      }
      if ((DAT_123a4068 & 0x8000) == 0) {
        DAT_123a4068 = DAT_123a4068 | 0x8000;
        iVar4 = FUN_100e1cb0(DAT_123a40f4);
        FUN_10a30020(*(undefined4 *)(iVar4 + 0x24));
      }
      cVar3 = (**(code **)(*param_2 + 0x10))(&DAT_123a40f8);
      if (cVar3 == '\0') {
        local_408 = cVar3;
        memset(local_407,0,0x3ff);
        iVar4 = FUN_100e1c50(DAT_123a40f4);
        FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar4 + 0x14));
        FUN_100ee330(&local_408,1);
      }
      else {
        (**(code **)(*param_2 + 0x24))(local_44c,&DAT_123a40f8);
      }
      pcVar10 = (char *)((int)local_43c + (1 - (int)local_438));
      local_430 = local_454;
      local_430 = local_454;
      fStack_42c = local_450;
      local_434 = local_470;
      local_410 = local_420;
      auStack_424 = (undefined1  [4])local_45c._4_4_;
      fStack_428 = fVar11;
      local_40c = (float *)local_410;
      if (pcVar10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_100b73e0();
      }
      if (pcVar10 < &DAT_00000011) {
        if (local_43c != local_438) {
          _Size = (int)local_43c - (int)local_438;
          pvVar6 = memcpy(local_410,local_438,_Size);
          local_410 = (wchar_t *)(_Size + (int)pvVar6);
        }
        *(undefined1 *)local_410 = 0;
        piVar9 = *(int **)((int)param_1 + 0x30);
        if (piVar9 == *(int **)((int)param_1 + 0x34)) {
          FUN_119e0bf0(piVar9,&local_434,&local_461,1,1);
        }
        else {
          if (piVar9 != (int *)0x0) {
            *piVar9 = local_434;
            piVar9[1] = (int)local_430;
            piVar9[2] = (int)fStack_42c;
            piVar9[3] = (int)fStack_428;
            piVar9[4] = (int)auStack_424;
            piVar9[9] = (int)(piVar9 + 5);
            piVar9[10] = (int)(piVar9 + 5);
            FUN_100b62c0(local_40c,local_410);
          }
          *(int *)((int)param_1 + 0x30) = *(int *)((int)param_1 + 0x30) + 0x2c;
        }
        if ((local_40c != (float *)local_420) && (local_40c != (float *)0x0)) {
          FUN_10c3d5d0(local_40c);
        }
        if ((local_438 != local_44c) && (local_438 != (int *)0x0)) {
          FUN_10c3d5d0(local_438);
        }
        FUN_11a89daa();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(pcVar10);
    }
  } while( true );
}



