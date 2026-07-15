/* ===== FUN_11008410 @ 11008410  size=1187 ===== */
// strings:
//   "GameOnHit"

/* [RE-AUTO c0]
   strings:
     ""GameOnHit"" */

void __thiscall FUN_11008410(int *param_1,int *param_2)

{
  int ******ppppppiVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *****pppppiVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int ******ppppppiVar14;
  undefined1 local_23c [4];
  undefined4 local_238;
  int local_230;
  undefined4 local_1f0;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_bc [12];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *****local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int local_30;
  undefined1 local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int local_18;
  undefined1 local_14;
  int *local_10;
  int *****local_c;
  int *****local_8;
  
  if (*param_2 == 1) {
    local_10 = param_1;
    if (param_2[1] == 0x110) {
      if (*(char *)(param_1[7] + 0x1d) != '\0') {
        (**(code **)(*param_1 + 0x90))();
        return;
      }
      piVar6 = (int *)FUN_10ba9b00();
      puStack_38 = &local_40;
      local_40 = 0;
      param_2._3_1_ = (undefined1)((uint)piVar6 >> 0x18);
      local_2c = param_2._3_1_;
      iStack_3c = 0;
      local_30 = 0;
      puStack_34 = puStack_38;
      piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar7 = (int *)(**(code **)(*piVar7 + 0x68))();
      (**(code **)(*piVar7 + 0x14))(&local_40);
      puVar12 = puStack_38;
      if (puStack_38 != &local_40) {
        do {
          piVar7 = (int *)puVar12[4];
          if ((piVar7 != (int *)0x0) && (cVar4 = (**(code **)(*piVar7 + 0x1c4))(), cVar4 == '\0')) {
            iVar9 = *piVar7;
            uVar8 = (**(code **)(*(int *)param_1[3] + 200))(local_98);
            cVar4 = (**(code **)(iVar9 + 0xcc))(uVar8);
            param_1 = local_10;
            if (cVar4 != '\0') {
              FUN_10b27660(local_10[0x10],0,local_10[0x12],0,0xffffffff,0xffffffff,0);
              iVar9 = param_1[7];
              local_230 = param_1[2];
              local_128 = **(undefined4 **)(iVar9 + 0xb4);
              local_124 = *(undefined4 *)(*(int *)(iVar9 + 0xb4) + 0x14);
              local_1f0 = *(undefined4 *)(*(int *)(iVar9 + 0xb4) + 0x10);
              local_238 = (**(code **)(*(int *)piVar7[3] + 4))();
              (**(code **)(*piVar6 + 0x31c))(local_23c,0,1);
              break;
            }
          }
          puVar10 = (undefined4 *)puVar12[3];
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)puVar12[1];
            if (puVar12 == (undefined4 *)puVar10[3]) {
              do {
                puVar12 = puVar10;
                puVar10 = (undefined4 *)puVar12[1];
              } while (puVar12 == (undefined4 *)puVar10[3]);
            }
            if ((undefined4 *)puVar12[3] != puVar10) {
              puVar12 = puVar10;
            }
          }
          else {
            for (puVar3 = (undefined4 *)puVar10[2]; puVar12 = puVar10, puVar3 != (undefined4 *)0x0;
                puVar3 = (undefined4 *)puVar3[2]) {
              puVar10 = puVar3;
            }
          }
        } while (puVar12 != &local_40);
      }
      if ((*(int **)(DAT_1202e818 + 0xd0) == (int *)0x0) ||
         (iVar9 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))(), iVar9 != 1)) {
        puVar12 = &local_74;
        local_74 = 0;
        puVar10 = &local_8c;
        local_70 = 0;
        local_6c = 0;
        puVar13 = local_b0;
        local_8c = 0;
        local_88 = 0x3f800000;
        local_84 = 0;
        uVar8 = 1;
      }
      else {
        local_18 = 0;
        puStack_20 = &local_28;
        local_28 = 0;
        local_48 = 0;
        local_14 = param_2._3_1_;
        local_c = (int *****)&local_c;
        iStack_24 = 0;
        puStack_1c = puStack_20;
        local_8 = local_c;
        piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        piVar6 = (int *)(**(code **)(*piVar6 + 0x68))();
        (**(code **)(*piVar6 + 0x14))(&local_28);
        puVar12 = puStack_20;
        if (puStack_20 != &local_28) {
          do {
            piVar6 = (int *)puVar12[4];
            if ((piVar6 != (int *)0x0) && (cVar4 = (**(code **)(*piVar6 + 0x1c4))(), cVar4 != '\0'))
            {
              iVar9 = *piVar6;
              uVar8 = (**(code **)(*(int *)param_1[3] + 200))(local_bc);
              (**(code **)(iVar9 + 0xcc))(uVar8);
              param_1 = local_10;
            }
            puVar10 = (undefined4 *)puVar12[3];
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)puVar12[1];
              if (puVar12 == (undefined4 *)puVar10[3]) {
                do {
                  puVar12 = puVar10;
                  puVar10 = (undefined4 *)puVar12[1];
                } while (puVar12 == (undefined4 *)puVar10[3]);
              }
              if ((undefined4 *)puVar12[3] != puVar10) {
                puVar12 = puVar10;
              }
            }
            else {
              for (puVar3 = (undefined4 *)puVar10[2]; puVar12 = puVar10, puVar3 != (undefined4 *)0x0
                  ; puVar3 = (undefined4 *)puVar3[2]) {
                puVar10 = puVar3;
              }
            }
          } while (puVar12 != &local_28);
        }
        ppppppiVar14 = (int ******)local_c;
        if ((int ******)local_c != &local_c) {
          do {
            piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar6 = (int *)(**(code **)(*piVar6 + 0x60))();
            local_5c = (**(code **)(*piVar6 + 0x18))("GameOnHit");
            local_58 = 0x4ffff;
            local_54 = 0;
            local_4c = 0;
            local_50 = (int *****)(ppppppiVar14 + 2);
            pppppiVar11 = (int *****)(**(code **)(**(int **)m_pThis_exref + 0x2a8))();
            *(bool *)(ppppppiVar14 + 0x56) = pppppiVar11 == ppppppiVar14[2];
            piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar6 = (int *)(**(code **)(*piVar6 + 0x144))(ppppppiVar14[3]);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x24))(&local_5c);
            }
            ppppppiVar14 = (int ******)*ppppppiVar14;
          } while (ppppppiVar14 != &local_c);
        }
        ppppppiVar14 = (int ******)local_c;
        if ((int ******)local_c != &local_c) {
          do {
            ppppppiVar1 = (int ******)*ppppppiVar14;
            FUN_10c3d5d0(ppppppiVar14);
            ppppppiVar14 = ppppppiVar1;
          } while (ppppppiVar1 != &local_c);
        }
        local_c = (int *****)&local_c;
        local_8 = local_c;
        iVar9 = iStack_24;
        if (local_18 != 0) {
          while (iVar9 != 0) {
            FUN_11008e10(*(undefined4 *)(iVar9 + 0xc));
            iVar2 = *(int *)(iVar9 + 8);
            FUN_10c3d5d0(iVar9);
            iVar9 = iVar2;
          }
        }
        puVar12 = &local_80;
        puVar10 = &local_68;
        local_80 = 0;
        local_7c = 0;
        puVar13 = local_a4;
        local_78 = 0;
        local_68 = 0;
        local_64 = 0x3f800000;
        local_60 = 0;
        uVar8 = 0;
        param_1 = local_10;
      }
      iVar9 = *param_1;
      uVar8 = (**(code **)(*(int *)param_1[3] + 200))(puVar13,uVar8,puVar10,puVar12,0);
      (**(code **)(iVar9 + 0x9c))(1,0,uVar8);
      iVar9 = iStack_3c;
      if (local_30 != 0) {
        while (iVar9 != 0) {
          FUN_11008e10(*(undefined4 *)(iVar9 + 0xc));
          iVar2 = *(int *)(iVar9 + 8);
          FUN_10c3d5d0(iVar9);
          iVar9 = iVar2;
        }
      }
    }
    else if (param_2[1] == 0x111) {
      iVar9 = *(int *)param_1[3];
      uVar5 = (**(code **)(iVar9 + 0x1b0))(0);
      (**(code **)(iVar9 + 0x1ac))(0,uVar5 | 1);
      return;
    }
  }
  return;
}



/* ===== FUN_11010ab0 @ 11010ab0  size=171 ===== */
// strings:
//   "MHOnHitResult"

/* [RE-AUTO c0]
   strings:
     ""MHOnHitResult"" */

undefined4 __thiscall FUN_11010ab0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  (**(code **)(*DAT_120286c8 + 0x154))(param_1);
  FUN_1101f970();
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x38))();
    if (iVar2 != 0) {
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))();
      }
      FUN_10a68b10(PTR_s_MHOnHit_11d07ebb_1_11df9b90,param_1 + 0x2c);
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x38))();
      }
      FUN_10a68b10(PTR_s_MHOnHitResult_11df9b94,param_1 + 0x30);
    }
  }
  return 1;
}



/* ===== FUN_11011110 @ 11011110  size=215 ===== */
// strings:
//   "MHOnHitResult"

/* [RE-AUTO c0]
   strings:
     ""MHOnHitResult"" */

void __thiscall FUN_11011110(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 3) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(*(undefined4 *)(param_1 + 0x2c));
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(*(undefined4 *)(param_1 + 0x30));
  }
  else if (((*param_2 == 5) &&
           (piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2),
           piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar1 + 0x38))(), iVar2 != 0)) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x38))();
    }
    FUN_10a68b10(PTR_s_MHOnHit_11d07ebb_1_11df9b90,param_1 + 0x2c);
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
    if (piVar1 == (int *)0x0) {
      FUN_10a68b10(PTR_s_MHOnHitResult_11df9b94,param_1 + 0x30);
      return;
    }
    (**(code **)(*piVar1 + 0x38))();
    FUN_10a68b10(PTR_s_MHOnHitResult_11df9b94,param_1 + 0x30);
    return;
  }
  return;
}



/* ===== FUN_11014af0 @ 11014af0  size=2540 ===== */
// calls: libm_sse2_acos_precise
// strings:
//   "GameOnHit"

/* [RE-AUTO c0]
   calls: libm_sse2_acos_precise
   strings:
     ""GameOnHit"" */

void __thiscall FUN_11014af0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  float10 fVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  ulonglong *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1bc;
  undefined8 local_1b4;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  ulonglong local_13c;
  float local_134;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_74;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined8 local_54;
  int *local_4c;
  undefined8 local_44;
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined1 local_30 [4];
  undefined8 local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  piVar10 = *(int **)(param_1 + 0xc);
  local_20 = (float)param_1;
  piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2);
  if (piVar10 == (int *)0x0) {
    return;
  }
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_4c = piVar5;
  piVar6 = (int *)(**(code **)(*piVar5 + 0x288))();
  if ((piVar6 != (int *)0x0) && (cVar4 = (**(code **)(*piVar6 + 0x9c))(), cVar4 != '\0')) {
    return;
  }
  FUN_10bb4150();
  local_204 = (**(code **)(*piVar10 + 4))();
  local_1f8 = (**(code **)(*piVar10 + 4))();
  local_200 = param_2;
  local_24 = 0.0;
  local_c8 = 0;
  local_d0 = 0;
  local_54 = 0;
  if (*(char *)((int)local_20 + 0x40) == '\0') {
    puVar9 = (undefined8 *)(**(code **)(*piVar10 + 200))(&local_18);
    pfVar8 = (float *)(**(code **)(*piVar5 + 200))(local_3c);
    local_2c._0_4_ = (float)*puVar9;
    local_2c._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
    local_24 = pfVar8[2] - *(float *)(puVar9 + 1);
    local_2c = CONCAT44(pfVar8[1] - local_2c._4_4_,*pfVar8 - (float)local_2c);
  }
  else {
    puVar7 = (ulonglong *)(**(code **)(*piVar10 + 0xd8))();
    local_2c = *puVar7;
    local_24 = *(float *)(puVar7 + 1);
  }
  local_44 = local_2c & 0xffffffff;
  fVar18 = (float)((uint)local_2c._4_4_ ^ DAT_11de9c90);
  fVar22 = (float)((uint)(float)local_2c ^ DAT_11de9c90);
  local_10 = (float)((uint)local_24 ^ DAT_11de9c90);
  local_b8 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_1f0 = 0;
  local_1f4 = 0;
  fVar19 = fVar18 * fVar18 + fVar22 * fVar22 + local_10 * local_10 + DAT_11de98a0;
  auVar17 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
  fVar16 = auVar17._0_4_;
  fVar16 = (DAT_11de9938 - fVar16 * fVar19 * fVar16 * DAT_11de98e8) * fVar16;
  local_bc = local_10 * fVar16;
  _local_c4 = CONCAT44(fVar18 * fVar16,fVar22 * fVar16);
  local_38 = local_2c;
  local_1ec = FUN_10b27fd0(param_3);
  fVar18 = (float)local_44;
  local_a8 = param_4;
  local_f0 = 0;
  local_ec = 0;
  fVar19 = (float)local_54;
  fVar16 = local_2c._4_4_ * local_2c._4_4_ + fVar18 * fVar18 + fVar19;
  if (fVar16 <= DAT_11cbf070) {
    local_19c = DAT_1201fd04;
    uVar1 = local_19c;
    local_19c._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
    local_19c._0_4_ = (float)DAT_1201fd04;
    local_194 = DAT_1201fd0c;
    fVar16 = local_19c._4_4_;
    fVar18 = (float)local_19c;
    local_19c = uVar1;
  }
  else {
    auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar22 = auVar17._0_4_;
    local_19c._4_4_ = (float)(local_38 >> 0x20);
    fVar22 = (DAT_11de9938 - fVar22 * fVar16 * fVar22 * DAT_11de98e8) * fVar22;
    fVar16 = local_19c._4_4_ * fVar22;
    local_19c = CONCAT44(fVar16,fVar18 * fVar22);
    local_194 = fVar22 * fVar19;
    fVar18 = fVar18 * fVar22;
  }
  local_190 = CONCAT44((uint)fVar16 ^ DAT_11de9c90,(uint)fVar18 ^ DAT_11de9c90);
  local_188 = (float)((uint)local_194 ^ DAT_11de9c90);
  local_1b4 = CONCAT44(fVar19,fVar19);
  local_1ac = 0.0;
  local_178 = CONCAT44(DAT_11de9918,DAT_11de9918);
  local_10 = 1.0;
  local_170 = 0x3f800000;
  local_1e8 = local_1ec;
  pfVar8 = (float *)(**(code **)(*piVar5 + 0xbc))();
  fVar16 = DAT_11de9918;
  if (*pfVar8 != (float)local_54) {
    pfVar8 = (float *)(**(code **)(*piVar5 + 0xbc))();
    fVar16 = DAT_11de9918 / *pfVar8;
  }
  local_20 = fVar16;
  pfVar8 = (float *)(**(code **)(*piVar5 + 0xd0))(local_30);
  puVar9 = (undefined8 *)(**(code **)(*piVar5 + 200))(&local_18);
  fVar16 = pfVar8[3];
  fVar18 = *pfVar8;
  fVar19 = pfVar8[1];
  uVar1 = *puVar9;
  fVar22 = pfVar8[2];
  fVar13 = (float)((uint)fVar18 ^ DAT_11de9c90);
  local_6c = *(uint *)(puVar9 + 1);
  local_74._0_4_ = (uint)uVar1;
  local_74._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  fVar20 = (float)((uint)local_74 ^ DAT_11de9c90);
  fVar24 = (float)(local_74._4_4_ ^ DAT_11de9c90);
  fVar14 = (float)((uint)fVar19 ^ DAT_11de9c90);
  fVar25 = (float)(local_6c ^ DAT_11de9c90);
  local_8 = (float)((uint)fVar22 ^ DAT_11de9c90);
  fVar23 = (fVar22 * fVar24 - fVar19 * fVar25) + fVar16 * fVar20;
  fVar21 = (fVar18 * fVar25 - fVar22 * fVar20) + fVar16 * fVar24;
  fVar18 = (fVar19 * fVar20 - fVar18 * fVar24) + fVar16 * fVar25;
  local_c = fVar22 * fVar21 - pfVar8[1] * fVar18;
  local_c = fVar20 + local_c + local_c;
  fVar18 = *pfVar8 * fVar18 - fVar22 * fVar23;
  fVar19 = pfVar8[1] * fVar23 - *pfVar8 * fVar21;
  fVar19 = fVar19 + fVar25 + fVar19;
  fVar21 = (local_1ac * fVar14 - local_1b4._4_4_ * local_8) + fVar16 * (float)local_1b4;
  fVar20 = ((float)local_1b4 * local_8 - local_1ac * fVar13) + fVar16 * local_1b4._4_4_;
  fVar22 = (local_1b4._4_4_ * fVar13 - (float)local_1b4 * fVar14) + fVar16 * local_1ac;
  local_38._0_4_ = fVar14 * fVar22 - local_8 * fVar20;
  local_38._0_4_ = (float)local_1b4 + (float)local_38 + local_c + (float)local_38;
  local_38._4_4_ = 0.0;
  fVar22 = local_8 * fVar21 - fVar13 * fVar22;
  fVar20 = fVar13 * fVar20 - fVar14 * fVar21;
  local_1a0 = (fVar20 + local_1ac + fVar19 + fVar20) * local_20;
  local_1a8 = CONCAT44((fVar22 + local_1b4._4_4_ + fVar18 + fVar24 + fVar18 + fVar22) * local_20,
                       (float)local_38 * local_20);
  fVar21 = (local_188 * fVar14 - local_190._4_4_ * local_8) + fVar16 * (float)local_190;
  fVar22 = ((float)local_190 * local_8 - local_188 * fVar13) + fVar16 * local_190._4_4_;
  fVar18 = (local_190._4_4_ * fVar13 - (float)local_190 * fVar14) + fVar16 * local_188;
  fVar16 = fVar14 * fVar18 - local_8 * fVar22;
  fVar16 = (float)local_190 + fVar16 + fVar16;
  fVar20 = local_8 * fVar21 - fVar13 * fVar18;
  local_17c = fVar13 * fVar22 - fVar14 * fVar21;
  fVar20 = fVar20 + local_190._4_4_ + fVar20;
  local_184 = CONCAT44(fVar20,fVar16);
  local_17c = local_17c + local_188 + local_17c;
  fVar13 = (float)local_54;
  fVar22 = fVar16 - local_17c * fVar13;
  fVar21 = local_17c * fVar13 - fVar20;
  fVar18 = fVar20 * fVar13 - fVar16 * fVar13;
  fVar14 = fVar21 * fVar21 + fVar22 * fVar22 + fVar18 * fVar18;
  local_74 = uVar1;
  local_44._4_4_ = fVar19;
  if (DAT_11cbf070 < fVar14) {
    auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar19 = auVar17._0_4_;
    fVar19 = (DAT_11de9938 - fVar19 * fVar14 * fVar19 * DAT_11de98e8) * fVar19;
    local_20 = fVar19 * fVar21;
    local_8 = fVar19 * fVar22;
    local_c = fVar19 * fVar18;
    if (DAT_11cbf074 <= DAT_11de9918 / fVar19) {
      dVar15 = (double)(fVar16 * fVar13 + fVar20 * fVar13 + local_17c);
      local_10 = local_17c;
      libm_sse2_acos_precise();
      fVar3 = (float10)fcos((float10)((float)dVar15 * DAT_11de98e8));
      fVar12 = (float10)fsin((float10)((float)dVar15 * DAT_11de98e8));
      local_10 = (float)fVar3;
      local_44._4_4_ = (float)fVar12;
      local_1c = local_20 * local_44._4_4_;
      local_18 = local_8 * local_44._4_4_;
      local_14 = local_c * local_44._4_4_;
      local_38._4_4_ = local_10;
      FUN_10abc150(&local_1c);
      local_10 = local_24;
      local_13c = local_2c;
      goto LAB_110153da;
    }
  }
  local_10 = 0.0;
  local_13c = CONCAT44(fVar13,fVar13);
LAB_110153da:
  local_134 = local_10;
  local_14c = 0x43fa0000;
  local_154 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_164 = 0x43fa0000;
  local_10 = 500.0;
  local_140 = 0x43fa0000;
  local_16c = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_148 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1bc = 0xffffffff;
  piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar10 = (int *)(**(code **)(*piVar10 + 0x60))();
  local_68 = (**(code **)(*piVar10 + 0x18))("GameOnHit");
  local_5c = &local_204;
  local_64 = 0x4ffff;
  local_60 = 0;
  local_58 = 0;
  piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  iVar2 = *piVar10;
  uVar11 = (**(code **)(*local_4c + 4))();
  piVar10 = (int *)(**(code **)(iVar2 + 0x144))(uVar11);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0x24))(&local_68);
  }
  return;
}



/* ===== FUN_11017ff0 @ 11017ff0  size=2510 ===== */
// calls: libm_sse2_acos_precise
// strings:
//   "GameOnHit"

/* [RE-AUTO c0]
   calls: libm_sse2_acos_precise
   strings:
     ""GameOnHit"" */

void __thiscall FUN_11017ff0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  float10 fVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 uVar10;
  float10 fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1bc;
  undefined8 local_1b4;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  float local_134;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  int local_a8;
  undefined8 local_74;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int *local_44;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [8];
  float local_10;
  float local_c;
  float local_8;
  
  piVar9 = *(int **)(param_1 + 0xc);
  local_8 = (float)param_1;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2);
  if (piVar9 == (int *)0x0) {
    return;
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_44 = piVar4;
  piVar5 = (int *)(**(code **)(*piVar4 + 0x288))();
  if ((piVar5 != (int *)0x0) && (cVar3 = (**(code **)(*piVar5 + 0x9c))(), cVar3 != '\0')) {
    return;
  }
  FUN_10bb4150();
  piVar5 = (int *)FUN_11018a00();
  if (piVar5 == (int *)0x0) {
    iVar6 = *piVar9;
  }
  else {
    iVar6 = *piVar5;
  }
  local_204 = (**(code **)(iVar6 + 4))();
  local_1f8 = (**(code **)(*piVar9 + 4))();
  local_200 = param_2;
  local_24 = 0.0;
  local_c8 = 0;
  local_d0 = 0;
  local_40 = 0;
  puVar7 = (undefined8 *)(**(code **)(*piVar9 + 200))(local_18);
  pfVar8 = (float *)(**(code **)(*piVar4 + 200))(&local_50);
  uVar1 = *puVar7;
  local_2c._0_4_ = (float)uVar1;
  local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar16 = pfVar8[1] - local_2c._4_4_;
  local_10 = pfVar8[2] - *(float *)(puVar7 + 1);
  local_38 = (ulonglong)(uint)(*pfVar8 - (float)local_2c);
  fVar21 = (float)((uint)(*pfVar8 - (float)local_2c) ^ DAT_11de9c90);
  fVar17 = (float)((uint)fVar16 ^ DAT_11de9c90);
  local_b8 = 0;
  local_24 = (float)((uint)local_10 ^ DAT_11de9c90);
  fVar18 = fVar17 * fVar17 + fVar21 * fVar21 + local_24 * local_24 + DAT_11de98a0;
  auVar15 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
  fVar14 = auVar15._0_4_;
  fVar14 = (DAT_11de9938 - fVar14 * fVar18 * fVar14 * DAT_11de98e8) * fVar14;
  local_bc = local_24 * fVar14;
  _local_c4 = CONCAT44(fVar17 * fVar14,fVar21 * fVar14);
  local_b0 = 0;
  local_b4 = 0;
  local_1f0 = 0;
  local_1f4 = 0;
  local_2c = uVar1;
  local_1ec = FUN_10b27fd0(param_3);
  local_1e8 = local_1ec;
  if (param_4 == -1) {
    param_4 = FUN_110189c0();
  }
  fVar14 = (float)local_38;
  local_f0 = 0;
  local_ec = 0;
  fVar18 = (float)local_40;
  fVar17 = fVar14 * fVar14 + fVar16 * fVar16 + fVar18;
  if (fVar17 <= DAT_11cbf070) {
    local_19c = DAT_1201fd04;
    uVar1 = local_19c;
    local_19c._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
    local_19c._0_4_ = (float)DAT_1201fd04;
    local_194 = DAT_1201fd0c;
    fVar16 = local_19c._4_4_;
    fVar14 = (float)local_19c;
    local_19c = uVar1;
  }
  else {
    auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar21 = auVar15._0_4_;
    fVar21 = (DAT_11de9938 - fVar21 * fVar17 * fVar21 * DAT_11de98e8) * fVar21;
    local_19c = CONCAT44(fVar16 * fVar21,fVar14 * fVar21);
    local_194 = fVar21 * fVar18;
    fVar16 = fVar16 * fVar21;
    fVar14 = fVar14 * fVar21;
  }
  local_190 = CONCAT44((uint)fVar16 ^ DAT_11de9c90,(uint)fVar14 ^ DAT_11de9c90);
  local_188 = (float)((uint)local_194 ^ DAT_11de9c90);
  local_1b4 = CONCAT44(fVar18,fVar18);
  local_1ac = 0.0;
  local_178 = CONCAT44(DAT_11de9918,DAT_11de9918);
  local_10 = 1.0;
  local_170 = 0x3f800000;
  local_a8 = param_4;
  pfVar8 = (float *)(**(code **)(*piVar4 + 0xbc))();
  local_20 = DAT_11de9918;
  if (*pfVar8 != (float)local_40) {
    pfVar8 = (float *)(**(code **)(*piVar4 + 0xbc))();
    local_20 = DAT_11de9918 / *pfVar8;
  }
  pfVar8 = (float *)(**(code **)(*piVar4 + 0xd0))(local_1c);
  puVar7 = (undefined8 *)(**(code **)(*piVar4 + 200))(&local_50);
  fVar14 = pfVar8[3];
  fVar16 = *pfVar8;
  fVar17 = pfVar8[1];
  uVar1 = *puVar7;
  fVar18 = pfVar8[2];
  fVar21 = (float)((uint)fVar16 ^ DAT_11de9c90);
  local_6c = *(uint *)(puVar7 + 1);
  local_74._0_4_ = (uint)uVar1;
  local_74._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  fVar19 = (float)((uint)local_74 ^ DAT_11de9c90);
  fVar23 = (float)(local_74._4_4_ ^ DAT_11de9c90);
  fVar12 = (float)((uint)fVar17 ^ DAT_11de9c90);
  fVar24 = (float)(local_6c ^ DAT_11de9c90);
  local_8 = (float)((uint)fVar18 ^ DAT_11de9c90);
  fVar22 = (fVar18 * fVar23 - fVar17 * fVar24) + fVar14 * fVar19;
  fVar20 = (fVar16 * fVar24 - fVar18 * fVar19) + fVar14 * fVar23;
  fVar16 = (fVar17 * fVar19 - fVar16 * fVar23) + fVar14 * fVar24;
  local_c = fVar18 * fVar20 - pfVar8[1] * fVar16;
  local_c = fVar19 + local_c + local_c;
  fVar16 = *pfVar8 * fVar16 - fVar18 * fVar22;
  local_30 = pfVar8[1] * fVar22 - *pfVar8 * fVar20;
  local_30 = local_30 + fVar24 + local_30;
  fVar19 = (local_1ac * fVar12 - local_1b4._4_4_ * local_8) + fVar14 * (float)local_1b4;
  fVar18 = ((float)local_1b4 * local_8 - local_1ac * fVar21) + fVar14 * local_1b4._4_4_;
  fVar17 = (local_1b4._4_4_ * fVar21 - (float)local_1b4 * fVar12) + fVar14 * local_1ac;
  local_38._0_4_ = fVar12 * fVar17 - local_8 * fVar18;
  local_38._0_4_ = (float)local_1b4 + (float)local_38 + local_c + (float)local_38;
  local_38._4_4_ = 0.0;
  fVar17 = local_8 * fVar19 - fVar21 * fVar17;
  fVar18 = fVar21 * fVar18 - fVar12 * fVar19;
  local_1a0 = (fVar18 + local_1ac + local_30 + fVar18) * local_20;
  local_1a8 = CONCAT44((fVar17 + local_1b4._4_4_ + fVar16 + fVar23 + fVar16 + fVar17) * local_20,
                       (float)local_38 * local_20);
  fVar19 = (local_188 * fVar12 - local_190._4_4_ * local_8) + fVar14 * (float)local_190;
  fVar17 = ((float)local_190 * local_8 - local_188 * fVar21) + fVar14 * local_190._4_4_;
  fVar16 = (local_190._4_4_ * fVar21 - (float)local_190 * fVar12) + fVar14 * local_188;
  fVar14 = fVar12 * fVar16 - local_8 * fVar17;
  fVar14 = (float)local_190 + fVar14 + fVar14;
  fVar18 = local_8 * fVar19 - fVar21 * fVar16;
  local_17c = fVar21 * fVar17 - fVar12 * fVar19;
  fVar18 = fVar18 + local_190._4_4_ + fVar18;
  local_184 = CONCAT44(fVar18,fVar14);
  local_17c = local_17c + local_188 + local_17c;
  fVar21 = (float)local_40;
  fVar17 = fVar14 - local_17c * fVar21;
  fVar19 = local_17c * fVar21 - fVar18;
  fVar16 = fVar18 * fVar21 - fVar14 * fVar21;
  fVar12 = fVar19 * fVar19 + fVar17 * fVar17 + fVar16 * fVar16;
  local_74 = uVar1;
  if (DAT_11cbf070 < fVar12) {
    auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar20 = auVar15._0_4_;
    fVar20 = (DAT_11de9938 - fVar20 * fVar12 * fVar20 * DAT_11de98e8) * fVar20;
    local_20 = fVar20 * fVar19;
    local_8 = fVar20 * fVar17;
    local_c = fVar20 * fVar16;
    if (DAT_11cbf074 <= DAT_11de9918 / fVar20) {
      dVar13 = (double)(fVar14 * fVar21 + fVar18 * fVar21 + local_17c);
      local_10 = local_17c;
      libm_sse2_acos_precise();
      fVar2 = (float10)fcos((float10)((float)dVar13 * DAT_11de98e8));
      fVar11 = (float10)fsin((float10)((float)dVar13 * DAT_11de98e8));
      local_48 = (float)fVar2;
      local_30 = (float)fVar11;
      local_54 = local_20 * local_30;
      local_50 = local_8 * local_30;
      local_4c = local_c * local_30;
      local_38._4_4_ = local_48;
      FUN_10abc150(&local_54);
      local_10 = local_24;
      local_13c = local_2c;
      goto LAB_110188bc;
    }
  }
  local_10 = 0.0;
  local_13c = CONCAT44(fVar21,fVar21);
LAB_110188bc:
  local_134 = local_10;
  local_14c = 0x43fa0000;
  local_154 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_164 = 0x43fa0000;
  local_10 = 500.0;
  local_140 = 0x43fa0000;
  local_16c = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_148 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1bc = 0xffffffff;
  piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar9 = (int *)(**(code **)(*piVar9 + 0x60))();
  local_68 = (**(code **)(*piVar9 + 0x18))("GameOnHit");
  local_5c = &local_204;
  local_64 = 0x4ffff;
  local_60 = 0;
  local_58 = 0;
  piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  iVar6 = *piVar9;
  uVar10 = (**(code **)(*local_44 + 4))();
  piVar9 = (int *)(**(code **)(iVar6 + 0x144))(uVar10);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0x24))(&local_68);
  }
  return;
}



/* ===== FUN_110219a0 @ 110219a0  size=6743 ===== */
// strings:
//   "TestFunc"
//   "IsRaining"
//   "ClearPhysicsFlag"
//   "EnableAttackable"
//   "enable"
//   "SetReceiveAttackType"
//   "spAttackType"
//   "SetReceiveAttackFlag"
//   "flagTable"
//   "EnableAttackType"
//   "attackType"
//   "EnablePlayerWall"
//   "EnableMonsterWall"
//   "EnableCameraWall"
//   "AddGeometry"
//   "geometryInfo"
//   "EnableTerrain"
//   "EnableSpecialObject"
//   "SetPlayerCanAttack"
//   "SetMonsterCanAttack"

/* [RE-AUTO c0]
   strings:
     ""TestFunc""
     ""IsRaining""
     ""ClearPhysicsFlag""
     ""EnableAttackable""
     ""enable""
     ""SetReceiveAttackType""
     ""spAttackType""
     ""SetReceiveAttackFlag""
     ""flagTable""
     ""EnableAttackType"" */

undefined4 * __thiscall FUN_110219a0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char *local_40;
  char *local_3c;
  undefined4 *local_38;
  code *local_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  code *pcStack_28;
  undefined4 local_24;
  code *local_20;
  undefined4 **local_1c;
  undefined4 local_18;
  code *local_14;
  int *piStack_10;
  undefined4 *puStack_c;
  code *pcStack_8;
  
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11d089a0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  piVar2 = (int *)(**(code **)(*param_2 + 0x124))();
  uVar3 = (**(code **)(*piVar2 + 0x3c))();
  param_1[0x16] = uVar3;
  piVar2 = (int *)(**(code **)(*param_2 + 0xfc))();
  param_1[0x12] = piVar2;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x11] = piVar2;
  (**(code **)(*piVar2 + 8))();
  piVar2 = (int *)param_1[0x12];
  param_1[0x13] = 1;
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 0xc))();
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(0);
  param_1[0x14] = piVar2;
  (**(code **)(*piVar2 + 8))();
  local_14 = (code *)&LAB_110283b4;
  pcStack_8 = FUN_11028c50;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "TestFunc";
    local_34 = (code *)&LAB_110283b4;
    uStack_30 = piStack_10;
    pcStack_28 = FUN_11028c50;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = FUN_11023620;
  pcStack_8 = FUN_11028c50;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "IsRaining";
    local_34 = FUN_11023620;
    uStack_30 = piStack_10;
    pcStack_28 = FUN_11028c50;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023560;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ClearPhysicsFlag";
    local_3c = "";
    local_20 = FUN_11028420;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023710;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableAttackable";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110237b0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetReceiveAttackType";
    local_3c = "spAttackType";
    local_20 = FUN_11028440;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023800;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetReceiveAttackFlag";
    local_3c = "flagTable";
    local_20 = FUN_11028a80;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110239b0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableAttackType";
    local_3c = "attackType";
    local_20 = FUN_11028440;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023a00;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnablePlayerWall";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023aa0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableMonsterWall";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023b40;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableCameraWall";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023e60;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "AddGeometry";
    local_3c = "geometryInfo";
    local_20 = FUN_11028a80;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023be0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableTerrain";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023c80;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableSpecialObject";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023d70;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetPlayerCanAttack";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023d20;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetMonsterCanAttack";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023dc0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetNPCCanAttack";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11023e10;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetPetCanAttack";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024000;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetUseMaterialEffect";
    local_3c = "use";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024050;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetType";
    local_3c = "sType";
    local_20 = FUN_11028720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024670;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetNumProperty";
    local_3c = "name,number";
    local_20 = FUN_11028760;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110247f0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetVecProperty";
    local_3c = "name,vector";
    local_20 = FUN_110287e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110246f0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBoolProperty";
    local_3c = "name,bool";
    local_20 = FUN_110288c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024770;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetStringProperty";
    local_3c = "name,string";
    local_20 = FUN_110286c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024400;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "IsPropertyChanged";
    local_3c = "proName";
    local_20 = FUN_11028720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024f90;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetCircleTrigger";
    local_3c = "radius,height";
    local_20 = FUN_110285d0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11025090;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBuffType";
    local_3c = "sIDBuffID";
    local_20 = FUN_11028720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024980;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ClearLinks";
    local_3c = "";
    local_20 = FUN_11028420;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024a60;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SendGameCommonEvent";
    local_3c = "gameObjID,message";
    local_20 = FUN_11028520;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024b40;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SendMessageInRange";
    local_3c = "vBox,message";
    local_20 = FUN_11028a10;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110240a0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LogicHide";
    local_3c = "hide";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110268c0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnablePhysicsCollision";
    local_3c = "enable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024120;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "PlayAnimation";
    local_3c = "animationName,loop,keep";
    local_20 = FUN_11028850;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024180;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "PlayEffect";
    local_3c = "effect,offset,angle,scale";
    local_20 = FUN_110287c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110241f0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GotoScriptState";
    local_3c = "stateName";
    local_20 = FUN_11028720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024250;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetInteractingPlayerLogicEntityId";
    local_3c = "id";
    local_20 = FUN_110284e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110242a0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetInteractingPlayerLogicEntityId";
    local_3c = "";
    local_20 = FUN_11028420;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024350;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "DoEffect";
    local_3c = "playerId,effectId";
    local_20 = FUN_11028920;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110244d0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "MoveWater";
    local_3c = "targetHeight,speed";
    local_20 = FUN_110285d0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110245a0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetWaterMaterial";
    local_3c = "materialName";
    local_20 = FUN_11028720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024540;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetWaterLevel";
    local_3c = "height";
    local_20 = FUN_11028580;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024600;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetWaterFogParam";
    local_3c = "color,density";
    local_20 = FUN_110289a0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024890;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetDamageTag";
    local_3c = "sTag";
    local_20 = FUN_11028720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11025150;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetCommonInteractObjectInfo";
    local_3c = "animObjectType,interactName,interactStateName,playerStateName,moveTime,carryTrigger"
    ;
    local_20 = FUN_11028480;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110243b0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBuffAreaEnterDamage";
    local_3c = "sBuffAreaEnterDamage";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11024920;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetTrigger";
    local_3c = "vPos1, vPos2, bLocal";
    local_20 = FUN_11028980;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11025630;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetFaction";
    local_3c = "nFaction";
    local_20 = FUN_11028440;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11025300;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "MHExplode";
    local_3c = "radius, friendFire, attackName";
    local_20 = FUN_11028640;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = FUN_11025490;
  pcStack_8 = FUN_11028c50;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "MakeDamageTo";
    local_34 = FUN_11025490;
    uStack_30 = piStack_10;
    pcStack_28 = FUN_11028c50;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = FUN_11025680;
  pcStack_8 = FUN_11028c50;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetFaction";
    local_34 = FUN_11025680;
    uStack_30 = piStack_10;
    pcStack_28 = FUN_11028c50;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11025830;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ShootProjectile";
    local_3c = "paramTable";
    local_20 = FUN_11028a80;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11025f40;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadParticleSlot";
    local_3c = "slot,particle,offset,angle";
    local_20 = FUN_110284a0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110261c0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadParticleSlotRad";
    local_3c = "slot,particle,offset,rad";
    local_20 = FUN_110284c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = FUN_11026360;
  pcStack_8 = FUN_11028c50;
  puStack_c = param_1;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetOwnerScale";
    local_34 = FUN_11026360;
    uStack_30 = piStack_10;
    pcStack_28 = FUN_11028c50;
    local_38 = puVar1;
    puStack_2c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110265d0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetContinuousAttackInfo";
    local_3c = "paramtable";
    local_20 = FUN_11028a80;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11026790;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "StartAttack";
    local_3c = "bStart";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11025740;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "PlaySurfaceTypeFx";
    local_3c = "fxName";
    local_20 = FUN_11028720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11026510;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "MHHide";
    local_3c = "bHide,needSync";
    local_20 = FUN_11028b00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11026570;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "MHEnable";
    local_3c = "bEnable,needSync";
    local_20 = FUN_11028b00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110264c0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableTrigger";
    local_3c = "bEnable";
    local_20 = FUN_11028b60;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110267e0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "CreateModelModifier";
    local_3c = "paramTable";
    local_20 = FUN_11028a80;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_3f800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ObjAF_Normal_Short",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ObjAF_Shake_Gournd",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_41000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ObjAF_FlyObj",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ObjAF_Rush",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_41800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ObjAF_AttackDropTrap",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_42000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ObjAF_AttackParaTrap",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_42800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ObjAF_BreakBarrier",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)0x0;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("OAF_NormalShort",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_3f800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("OAF_ShakeGround",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("OAF_Rush",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40400000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("OAF_FlyObj",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("OAF_DropTrap",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40a00000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("OAF_ParaTrap",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40c00000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("OAF_BreakBarrier",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)0x0;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("SimpleAction_Enable",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_3f800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("SimpleAction_Disable",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("SimpleAction_Hide",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40400000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("SimpleAction_UnHide",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ScriptState_OnEvent",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (code *)0x4;
  piStack_10 = (int *)&DAT_40a00000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("ScriptState_OnDamage",&local_14);
  if (local_14 == (code *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
      return param_1;
    }
  }
  else if ((local_14 == (code *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  return param_1;
}



/* ===== FUN_110265d0 @ 110265d0  size=440 ===== */
// strings:
//   "MHContAttacker"
//   "bAttackPlayer"
//   "bAttackMonster"
//   "bAttackPet"
//   "fAttackDelta"
//   "fAttackTime"
//   "fRestTime"
//   "vAttackBox"
//   "vOffset"
//   "bMoveable"
//   "sAttackName"
//   "bUseHostile"
//   "bUseFixedDir"
//   "fLifeTime"

/* [RE-AUTO c0]
   strings:
     ""MHContAttacker""
     ""bAttackPlayer""
     ""bAttackMonster""
     ""bAttackPet""
     ""fAttackDelta""
     ""fAttackTime""
     ""fRestTime""
     ""vAttackBox""
     ""vOffset""
     ""bMoveable"" */

undefined4 __thiscall FUN_110265d0(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c;
  undefined1 local_b [3];
  undefined1 local_8 [4];
  
  piVar6 = param_2;
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("MHContAttacker");
      goto LAB_1102660a;
    }
  }
  piVar3 = (int *)0x0;
LAB_1102660a:
  (**(code **)(*param_3 + 0x30))();
  FUN_11015920();
  FUN_10a690f0("bAttackPlayer",&local_38);
  FUN_10a690f0("bAttackMonster",&local_37);
  FUN_10a690f0("bAttackPet",&local_36);
  FUN_10a68f50("fAttackDelta",local_34);
  FUN_10a68f50("fAttackTime",local_30);
  FUN_10a68f50("fRestTime",local_2c);
  FUN_10a69050("vAttackBox",local_24);
  FUN_10a69050("vOffset",local_18);
  FUN_10a690f0("bMoveable",local_b);
  param_2 = (int *)0x0;
  FUN_10a68fd0("sAttackName",&param_2);
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    pcVar4 = (char *)param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar4 - (int)((int)param_2 + 1);
  }
  FUN_1083ab70(param_2,iVar2);
  FUN_10a690f0("bUseHostile",&local_35);
  FUN_10a690f0("bUseFixedDir",&local_c);
  FUN_10a68f50("fLifeTime",local_8);
  (**(code **)(*param_3 + 0x34))();
  (**(code **)(*piVar3 + 0x6c))(&local_38);
  uVar5 = (**(code **)(*piVar6 + 0x2c))();
  piVar6 = (int *)(local_28 + -0xc);
  if (-1 < *piVar6) {
    iVar2 = FUN_10c3dad0(piVar6);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_28 + -4));
      FUN_10c3d900(piVar6);
    }
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  return uVar5;
}



/* ===== FUN_1102bc00 @ 1102bc00  size=7435 ===== */
// strings:
//   "DumpActorInfo"
//   "SetViewAngleOffset"
//   "GetViewAngleOffset"
//   "Revive"
//   "RagDollize"
//   "SetStats"
//   "SetParams"
//   "GetParams"
//   "GetHeadPos"
//   "GetHeadDir"
//   "PostPhysicalize"
//   "GetChannel"
//   "IsPlayer"
//   "IsMonster"
//   "IsPet"
//   "IsDead"
//   "IsLocalClient"
//   "LinkToEntity"
//   "GetLinkedVehicleId"
//   "LinkToVehicle"

/* [RE-AUTO c0]
   strings:
     ""DumpActorInfo""
     ""SetViewAngleOffset""
     ""GetViewAngleOffset""
     ""Revive""
     ""RagDollize""
     ""SetStats""
     ""SetParams""
     ""GetParams""
     ""GetHeadPos""
     ""GetHeadDir"" */

undefined4 * __thiscall FUN_1102bc00(undefined4 *param_1,code *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char *local_40;
  char *local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  code *pcStack_28;
  undefined4 local_24;
  code *local_20;
  undefined4 **local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  code *pcStack_8;
  
  piVar4 = (int *)param_2;
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11d094f0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  piVar2 = (int *)(**(code **)(*(int *)param_2 + 0x124))();
  uVar3 = (**(code **)(*piVar2 + 0x3c))();
  param_1[0x16] = uVar3;
  piVar4 = (int *)(**(code **)(*piVar4 + 0xfc))();
  param_1[0x12] = piVar4;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x30))(0);
  param_1[0x11] = piVar4;
  (**(code **)(*piVar4 + 8))();
  piVar4 = (int *)param_1[0x12];
  param_1[0x13] = 1;
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 0xc))();
  }
  piVar4 = (int *)(**(code **)(*piVar4 + 0x30))(0);
  param_1[0x14] = piVar4;
  (**(code **)(*piVar4 + 8))();
  local_14 = &LAB_11034c4d;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "DumpActorInfo";
    local_34 = &LAB_11034c4d;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034cd2;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "SetViewAngleOffset";
    local_34 = &LAB_11034cd2;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034d57;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetViewAngleOffset";
    local_34 = &LAB_11034d57;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034ddc;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "Revive";
    local_34 = &LAB_11034ddc;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e19;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "Kill";
    local_34 = &LAB_11034e19;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e1e;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "RagDollize";
    local_34 = &LAB_11034e1e;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e23;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "SetStats";
    local_34 = &LAB_11034e23;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e28;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "SetParams";
    local_34 = &LAB_11034e28;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e2d;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetParams";
    local_34 = &LAB_11034e2d;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e37;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetHeadPos";
    local_34 = &LAB_11034e37;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e32;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetHeadDir";
    local_34 = &LAB_11034e32;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e3c;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "PostPhysicalize";
    local_34 = &LAB_11034e3c;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e41;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetChannel";
    local_34 = &LAB_11034e41;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e46;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "IsPlayer";
    local_34 = &LAB_11034e46;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e50;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "IsMonster";
    local_34 = &LAB_11034e50;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e55;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "IsPet";
    local_34 = &LAB_11034e55;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e4b;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "IsDead";
    local_34 = &LAB_11034e4b;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e5a;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "IsLocalClient";
    local_34 = &LAB_11034e5a;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e6e;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "LinkToEntity";
    local_34 = &LAB_11034e6e;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034e5f;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetLinkedVehicleId";
    local_3c = "";
    local_20 = FUN_110352e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e64;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "LinkToVehicle";
    local_34 = &LAB_11034e64;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e69;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "LinkToVehicleRemotely";
    local_34 = &LAB_11034e69;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e73;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "IsGhostPit";
    local_34 = &LAB_11034e73;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e78;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "IsFlying";
    local_34 = &LAB_11034e78;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034e7d;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetAngles";
    local_3c = "vAngles";
    local_20 = FUN_11035830;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034e82;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetAngles";
    local_34 = &LAB_11034e82;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034e87;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "AddAngularImpulse";
    local_3c = "vAngular,deceleration,duration";
    local_20 = FUN_11035890;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034e8c;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetViewLimits";
    local_3c = "dir,rangeH,rangeV";
    local_20 = FUN_11035970;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034e94;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "PlayAction";
    local_3c = "action,extension";
    local_20 = FUN_11035540;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034e9c;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SimulateOnAction";
    local_3c = "action,mode,value";
    local_20 = FUN_11035640;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034ea4;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetMovementTarget";
    local_3c = "pos,target,up,speed";
    local_20 = FUN_110358d0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034eac;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "CameraShake";
    local_3c = "amount,duration,frequency,pos";
    local_20 = FUN_11035520;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034eb4;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetViewShake";
    local_3c = "shakeAngle, shakeShift, duration, frequency, randomness";
    local_20 = FUN_110358b0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034ebc;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "VectorToLocal";
    local_34 = &LAB_11034ebc;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034ec4;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableAspect";
    local_3c = "aspects, enable";
    local_20 = FUN_11035740;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034ecc;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetExtensionActivation";
    local_3c = "extension,bActivate";
    local_20 = FUN_11035740;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034ed4;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetExtensionParams";
    local_3c = "extension,params";
    local_20 = FUN_11035720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034edc;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetExtensionParams";
    local_3c = "extension,params";
    local_20 = FUN_11035720;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f64;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetMovementControlledByAnimation";
    local_3c = "enable";
    local_20 = FUN_11035ab0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034c8a;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableFade";
    local_3c = "enable";
    local_20 = FUN_11035ab0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034ee4;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetInventoryAmmo";
    local_3c = "ammo, amount";
    local_20 = FUN_110355e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034eec;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "AddInventoryAmmo";
    local_3c = "ammo, amount";
    local_20 = FUN_110355e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034ef4;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetInventoryAmmo";
    local_3c = "ammo";
    local_20 = FUN_110355a0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034efc;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetHealth";
    local_3c = "health";
    local_20 = FUN_110354d0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f3c;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "DamageInfo";
    local_3c = "shooterID, targetID, weaponID, damage, damageType";
    local_20 = FUN_110357a0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f04;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetMaxHealth";
    local_3c = "health";
    local_20 = FUN_110354d0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034f0c;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetHealth";
    local_34 = &LAB_11034f0c;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034f14;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetMaxHealth";
    local_34 = &LAB_11034f14;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034f1c;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetArmor";
    local_34 = &LAB_11034f1c;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034f24;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetMaxArmor";
    local_34 = &LAB_11034f24;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034f2c;
  pcStack_8 = FUN_11035f90;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetFrozenAmount";
    local_34 = &LAB_11034f2c;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f34;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "AddFrost";
    local_3c = "frost";
    local_20 = FUN_110354d0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f44;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetPhysicalizationProfile";
    local_3c = "profile";
    local_20 = FUN_110355a0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f4c;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetPhysicalizationProfile";
    local_3c = "";
    local_20 = FUN_110352e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034d17;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetClosestAttachment";
    local_3c = "characterSlot, testPos, maxDistance, suffix";
    local_20 = FUN_11035400;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034d1f;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "AttachVulnerabilityEffect";
    local_3c = "characterSlot, partid, hitPos, radius, effect, attachmentIdentifier";
    local_20 = FUN_11035340;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034d27;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ResetVulnerabilityEffects";
    local_3c = "characterSlot";
    local_20 = FUN_11035300;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034d2f;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetCloseColliderParts";
    local_3c = "characterSlot, hitPos, radius";
    local_20 = FUN_110353e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f54;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "QueueAnimationState";
    local_3c = "animationState";
    local_20 = FUN_110355a0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f5c;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ChangeAnimGraph";
    local_3c = "graph, layer";
    local_20 = FUN_110355e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f6c;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "CreateCodeEvent";
    local_3c = "params";
    local_20 = FUN_11035a10;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = &LAB_11034f74;
  pcStack_8 = FUN_11035f90;
  puStack_c = param_1;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "GetCurrentAnimationState";
    local_34 = &LAB_11034f74;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11035f90;
    local_38 = puVar1;
    puStack_2c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f7c;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetAnimationInput";
    local_3c = "name,value";
    local_20 = FUN_11035540;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034f84;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "TrackViewControlled";
    local_3c = "characterSlot";
    local_20 = FUN_11035300;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034c52;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetSpectatorMode";
    local_3c = "mode, target";
    local_20 = FUN_11035380;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034c5a;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetSpectatorMode";
    local_3c = "";
    local_20 = FUN_110352e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = (code *)&LAB_11034c62;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetSpectatorTarget";
    local_3c = "";
    local_20 = FUN_110352e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  param_2 = (code *)&LAB_11034c6a;
  FUN_11034920(&DAT_11d09d50,"hitPosX, hitPosY, hitPosZ",param_1,&param_2);
  param_2 = (code *)&LAB_11034c72;
  FUN_110348b0("LooseHelmet","hitDir, hitPos",param_1,&param_2);
  param_2 = (code *)&LAB_11034c7a;
  FUN_11033dc0("GoLimp",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034c82;
  FUN_11033dc0("StandUp",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034c92;
  FUN_11033e30("SharpenWeapon","increase",param_1,&param_2);
  param_2 = (code *)&LAB_11034c9a;
  FUN_11034300("DeleteBuff",&DAT_11d09d90,param_1,&param_2);
  param_2 = (code *)&LAB_11034ca2;
  FUN_11034300("HasBuff",&DAT_11d09d90,param_1,&param_2);
  param_2 = (code *)&LAB_11034caa;
  FUN_11033dc0("IsHolstered",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034dd4;
  FUN_110340d0("EnterInstanceUICallback","iInstance, bEnter,entityname",param_1,&param_2);
  param_2 = (code *)&LAB_11034cc2;
  FUN_11033dc0("BindWeapon",&DAT_11d9d32b,param_1,&param_2);
  param_2 = FUN_11030280;
  FUN_11034a00("SetForcedLookDir",&DAT_11cbc860,param_1,&param_2);
  param_2 = FUN_11030340;
  FUN_11033dc0("ClearForcedLookDir",&DAT_11d9d32b,param_1,&param_2);
  param_2 = FUN_11030390;
  FUN_11034610("SetForcedLookObjectId","objectId",param_1,&param_2);
  param_2 = FUN_110303e0;
  FUN_11033dc0("ClearForcedLookObjectId",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034cd7;
  FUN_11034300("CheckInventoryRestrictions","itemClassName",param_1,&param_2);
  param_2 = (code *)&LAB_11034cdf;
  FUN_11034ae0("CheckVirtualInventoryRestrictions","inventory, itemClassName",param_1,&param_2);
  param_2 = (code *)&LAB_11034ce7;
  FUN_11034b50("HolsterItem","holster",param_1,&param_2);
  param_2 = (code *)&LAB_11034cef;
  FUN_11034610("DropItem","itemId",param_1,&param_2);
  param_2 = (code *)&LAB_11034cf7;
  FUN_11034610("PickUpItem","itemId",param_1,&param_2);
  param_2 = (code *)&LAB_11034cff;
  FUN_11034300("SelectItemByName",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d07;
  FUN_11034610("SelectItem",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d0f;
  FUN_11033dc0("SelectLastItem",&DAT_11d9d32b,param_1,&param_2);
  local_14 = &LAB_11034cb2;
  pcStack_8 = FUN_11035f90;
  puStack_c = param_1;
  FUN_10c62a10("IsCrouch",&LAB_11034cb2,uStack_10,param_1,FUN_11035f90);
  local_14 = &LAB_11034cba;
  pcStack_8 = FUN_11035f90;
  puStack_c = param_1;
  FUN_10c62a10("IsUnDamagable",&LAB_11034cba,uStack_10,param_1,FUN_11035f90);
  param_2 = (code *)&LAB_11034d37;
  FUN_11033f10("CreateIKLimb","slot,limbName,rootBone,midBone,endBone,flags",param_1,&param_2);
  param_2 = (code *)&LAB_11034d3f;
  FUN_11033dc0("ResetScores",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d47;
  FUN_11034680("RenderScore",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d4f;
  FUN_11034920("SetSearchBeam",&DAT_11cbc860,param_1,&param_2);
  param_2 = (code *)&LAB_11034d5c;
  FUN_11033dc0("GetDefenceState",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d64;
  FUN_11033dc0("ResetUnbalanceState",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d6c;
  FUN_11033dc0("GetUnbalanceState",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d74;
  FUN_11033dc0("ResetPiyoState",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d7c;
  FUN_11033dc0("GetPiyoState",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034d84;
  FUN_11033e30("GetPartNameFromBoneIdx","boneindex",param_1,&param_2);
  param_2 = (code *)&LAB_11034d8c;
  FUN_11034300("GetHitPartData","partname",param_1,&param_2);
  param_2 = (code *)&LAB_11034d94;
  FUN_110344c0("SetHitPartData","partname, partdata",param_1,&param_2);
  param_2 = (code *)&LAB_11034d9c;
  FUN_11034300("ClearPartBreakValue","partname",param_1,&param_2);
  param_2 = (code *)&LAB_11034da4;
  FUN_11034450("AddPartBreakValue","partname, addpartbreak",param_1,&param_2);
  param_2 = (code *)&LAB_11034dac;
  FUN_11034300("ClearUnbalanceValue","partname",param_1,&param_2);
  param_2 = (code *)&LAB_11034db4;
  FUN_11034450("AddUnbalanceValue","partname, addunbalance",param_1,&param_2);
  param_2 = (code *)&LAB_11034dbc;
  FUN_11034300("ClearPiyoValue","partname",param_1,&param_2);
  param_2 = (code *)&LAB_11034dc4;
  FUN_11034450("AddPiyoValue","partname, addpiyo",param_1,&param_2);
  param_2 = (code *)&LAB_11034dcc;
  FUN_110341b0("CheckOnGround",&DAT_11d0a0fc,param_1,&param_2);
  param_2 = (code *)&LAB_11034e01;
  FUN_11034b50("EnableCollision","bEnable",param_1,&param_2);
  param_2 = (code *)&LAB_11034de1;
  FUN_11033dc0("ShowTaskUI",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034de9;
  FUN_11033dc0("ShowForgeUI",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034df1;
  FUN_11033dc0("DoneTask",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034df9;
  FUN_11034140("ShowFoundState",&DAT_11d0a148,param_1,&param_2);
  param_2 = (code *)&LAB_11034cca;
  FUN_11033dc0("GetTaskState",&DAT_11d9d32b,param_1,&param_2);
  param_2 = (code *)&LAB_11034e09;
  FUN_11033e30("SetAttachment","avatarid",param_1,&param_2);
  param_2 = (code *)&LAB_11034e11;
  FUN_11033e30("ResetAttachment","partid",param_1,&param_2);
  param_2 = (code *)0x65;
  FUN_10d1c9e0("ZEROG_AREA_ID",&param_2);
  FUN_10d1cc20("WHOLE_BODY_PART",0xca);
  param_2 = (code *)0x2;
  FUN_10d1c9e0("IKLIMB_LEFTHAND",&param_2);
  param_2 = (code *)0x1;
  FUN_10d1c9e0("IKLIMB_RIGHTHAND",&param_2);
  return param_1;
}



/* ===== FUN_110442b0 @ 110442b0  size=10005 ===== */
// strings:
//   "IsServer"
//   "IsClient"
//   "CanCheat"
//   "SpawnPlayer"
//   "channelId, name, className, pos, angles"
//   "ChangePlayerClass"
//   "channelId, className, pos, angles"
//   "RevivePlayer"
//   "playerId, pos, angles, teamId, clearInventory"
//   "RevivePlayerInVehicle"
//   "playerId, vehicleId, seatId, teamId, clearInventory"
//   "RenamePlayer"
//   "playerId, name"
//   "KillPlayer"
//   "playerId, dropItem, ragdoll, shooterId, weaponId, damage, hitJoint, headshot, melee, impulse, projectileId, [weaponClassId], [projectileClassId]"
//   "MovePlayer"
//   "playerId, pos, angles"
//   "GetPlayerByChannelId"
//   "channelId"
//   "GetChannelId"

/* [RE-AUTO c0]
   strings:
     ""IsServer""
     ""IsClient""
     ""CanCheat""
     ""SpawnPlayer""
     ""channelId, name, className, pos, angles""
     ""ChangePlayerClass""
     ""channelId, className, pos, angles""
     ""RevivePlayer""
     ""playerId, pos, angles, teamId, clearInventory""
     ""RevivePlayerInVehicle"" */

void __fastcall FUN_110442b0(int param_1)

{
  char *local_38;
  char *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  code *local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ec20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsServer";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ec60;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsClient";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ecf0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "CanCheat";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ed50;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SpawnPlayer";
    local_34 = "channelId, name, className, pos, angles";
    local_18 = FUN_1104b100;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ee00;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ChangePlayerClass";
    local_34 = "channelId, className, pos, angles";
    local_18 = FUN_1104b120;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ee80;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RevivePlayer";
    local_34 = "playerId, pos, angles, teamId, clearInventory";
    local_18 = FUN_1104b650;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ef10;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RevivePlayerInVehicle";
    local_34 = "playerId, vehicleId, seatId, teamId, clearInventory";
    local_18 = FUN_1104b3f0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ef70;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RenamePlayer";
    local_34 = "playerId, name";
    local_18 = FUN_1104b5d0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103efd0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "KillPlayer";
    local_34 = 
    "playerId, dropItem, ragdoll, shooterId, weaponId, damage, hitJoint, headshot, melee, impulse, projectileId, [weaponClassId], [projectileClassId]"
    ;
    local_18 = FUN_1104b670;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f120;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "MovePlayer";
    local_34 = "playerId, pos, angles";
    local_18 = FUN_1104b630;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f1a0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetPlayerByChannelId";
    local_34 = "channelId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f220;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetChannelId";
    local_34 = "playerId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f2c0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetPlayerCount";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f380;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpectatorCount";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f440;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetPlayers";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f580;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsPlayerInGame";
    local_34 = "playerId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f5e0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsProjectile";
    local_34 = "entityId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f660;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsSameTeam";
    local_34 = "entityId0, entityId1";
    local_18 = FUN_1104b380;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f710;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsNeutral";
    local_34 = "entityId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f7a0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AddSpawnLocation";
    local_34 = "entityId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f7e0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RemoveSpawnLocation";
    local_34 = "id";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f820;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpawnLocationCount";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f8c0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpawnLocationByIdx";
    local_34 = "idx";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fa20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpawnLocations";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103f910;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpawnLocation";
    local_34 = "playerId, teamId, ignoreTeam, includeNeutral";
    local_18 = FUN_1104b690;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fb70;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetFirstSpawnLocation";
    local_34 = "teamId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fbc0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AddSpawnGroup";
    local_34 = "groupId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fc00;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AddSpawnLocationToSpawnGroup";
    local_34 = "groupId, location";
    local_18 = FUN_1104b380;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fc40;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RemoveSpawnLocationFromSpawnGroup";
    local_34 = "groupId, location";
    local_18 = FUN_1104b380;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fc80;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RemoveSpawnGroup";
    local_34 = "groupId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fcc0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpawnLocationGroup";
    local_34 = "spawnId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fd10;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpawnGroups";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fec0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsSpawnGroup";
    local_34 = "entityId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ff20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetTeamDefaultSpawnGroup";
    local_34 = "teamId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ff70;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetTeamDefaultSpawnGroup";
    local_34 = "teamId, groupId";
    local_18 = FUN_1104b250;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103ffb0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetPlayerSpawnGroup";
    local_34 = "playerId, groupId";
    local_18 = FUN_1104b380;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1103fff0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AddSpectatorLocation";
    local_34 = "location";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040030;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RemoveSpectatorLocation";
    local_34 = "id";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040070;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpectatorLocationCount";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040110;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpectatorLocation";
    local_34 = "idx";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110401a0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetSpectatorLocations";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110402f0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetRandomSpectatorLocation";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040340;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetInterestingSpectatorLocation";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040390;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetNextSpectatorTarget";
    local_34 = "playerId, change";
    local_18 = FUN_1104b4c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110405f0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ChangeSpectatorMode";
    local_34 = "playerId, mode, targetId";
    local_18 = FUN_1104b4a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040650;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "CanChangeSpectatorMode";
    local_34 = "playerId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110406d0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AddMinimapEntity";
    local_34 = "entityId, type, lifetime";
    local_18 = FUN_1104b520;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040710;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RemoveMinimapEntity";
    local_34 = "entityId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040750;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetMinimap";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040780;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetPing";
    local_34 = "channelId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040800;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetEntities";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040830;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ServerExplosion";
    local_34 = 
    "shooterId, weaponId, dmg, pos, dir, radius, angle, press, holesize, [effect], [effectScale]";
    local_18 = FUN_1104b410;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040b90;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ServerHit";
    local_34 = 
    "targetId, shooterId, weaponId, dmg, radius, materialId, partId, typeId, [pos], [dir], [normal]"
    ;
    local_18 = FUN_1104b360;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040ca0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "CreateTeam";
    local_34 = "name";
    local_18 = FUN_1104b300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040d40;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RemoveTeam";
    local_34 = "teamId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040d80;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetTeamName";
    local_34 = "teamId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040dd0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetTeamId";
    local_34 = "teamName";
    local_18 = FUN_1104b300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040e20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetTeamCount";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040ec0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetTeamPlayerCount";
    local_34 = "teamId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11040f90;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetTeamChannelCount";
    local_34 = "teamId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041060;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetTeamPlayers";
    local_34 = "teamId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041210;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetTeam";
    local_34 = "teamId, playerId";
    local_18 = FUN_1104b250;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041250;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetTeam";
    local_34 = "playerId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110412f0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetChannelTeam";
    local_34 = "channelId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041390;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AddObjective";
    local_34 = "teamId, objective, status, entityId";
    local_18 = FUN_1104b1f0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110413d0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetObjectiveStatus";
    local_34 = "teamId, objective, status";
    local_18 = FUN_1104b180;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041410;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SetObjectiveEntity";
    local_34 = "teamId, objective, entityId";
    local_18 = FUN_1104b210;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041450;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RemoveObjective";
    local_34 = "teamId, objective";
    local_18 = FUN_1104b120;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041490;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetObjectives";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110414c0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "TextMessage";
    local_34 = "type, msg";
    local_18 = FUN_1104b120;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041760;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SendTextMessage";
    local_34 = "type, msg";
    local_18 = FUN_1104b120;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041a90;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "SendChatMessage";
    local_34 = "type, sourceId, targetId, msg";
    local_18 = FUN_1104b230;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041ad0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ForbiddenAreaWarning";
    local_34 = "active, timer, targetId";
    local_18 = FUN_1104b7b0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041b10;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetGameTime";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041b40;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetRemainingGameTime";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041bd0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsTimeLimited";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041c20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetRoundTime";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041c50;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetRemainingRoundTime";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041ce0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "IsRoundTimeLimited";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041d30;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetPreRoundTime";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041d60;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetRemainingPreRoundTime";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041df0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetReviveCycleTime";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041e20;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetRemainingReviveCycleTime";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041eb0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetGameStartTimer";
    local_34 = "time";
    local_18 = FUN_1104b2b0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041ef0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetRemainingStartTimer";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041f80;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "EndGame";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041fb0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "NextLevel";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11041fe0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RegisterHitMaterial";
    local_34 = "materialName";
    local_18 = FUN_1104b300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11042070;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetHitMaterialId";
    local_34 = "materialName";
    local_18 = FUN_1104b300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11042100;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetHitMaterialName";
    local_34 = "materialId";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110421a0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetHitMaterials";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110421d0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "RegisterHitType";
    local_34 = "type";
    local_18 = FUN_1104b300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11042260;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetHitTypeId";
    local_34 = "type";
    local_18 = FUN_1104b300;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110422f0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "GetHitType";
    local_34 = "id";
    local_18 = FUN_1104b0c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11042370;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ResetHitTypes";
    local_34 = "";
    local_18 = FUN_1104b0a0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110423a0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ForceScoreboard";
    local_34 = "force";
    local_18 = FUN_1104b770;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110423d0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "FreezeInput";
    local_34 = "freeze";
    local_18 = FUN_1104b770;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11042400;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ScheduleEntityRespawn";
    local_34 = "entityId, unique, timer";
    local_18 = FUN_1104b710;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11042440;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AbortEntityRespawn";
    local_34 = "entityId, destroyData";
    local_18 = FUN_1104b6b0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_11042480;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "ScheduleEntityRemoval";
    local_34 = "entityId, timer, visibility";
    local_18 = FUN_1104b5b0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_110424c0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "AbortEntityRemoval";
    local_34 = "entityId";
    local_18 = FUN_1104b450;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  local_8 = FUN_110424f0;
  FUN_11048df0("SetSynchedGlobalValue","key, value",param_1,&local_8);
  local_8 = (code *)&LAB_11042650;
  FUN_11048df0("GetSynchedGlobalValue",&DAT_11dce8fc,param_1,&local_8);
  local_8 = FUN_110427c0;
  FUN_110495d0("SetSynchedEntityValue","entityId, key, value",param_1,&local_8);
  local_8 = FUN_11042930;
  FUN_110495d0("GetSynchedEntityValue","entityId, key",param_1,&local_8);
  local_8 = FUN_11042a90;
  FUN_11048d80("ResetSynchedStorage",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042ae0;
  FUN_11048df0("ForceSynchedStorageSynch","channelId",param_1,&local_8);
  local_8 = FUN_11042b10;
  FUN_11048d80("IsDemoMode",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042bb0;
  FUN_11048d80("GetTimeLimit",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042c90;
  FUN_11048d80("GetPreRoundTime",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042c20;
  FUN_11048d80("GetRoundTime",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042d10;
  FUN_11048d80("GetRoundLimit",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042d90;
  FUN_11048d80("GetFragLimit",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042e10;
  FUN_11048d80("GetFragLead",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042e90;
  FUN_11048d80("GetFriendlyFireRatio",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042f00;
  FUN_11048d80("GetReviveTime",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11042f80;
  FUN_11048d80("GetMinPlayerLimit",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11043000;
  FUN_11048d80("GetMinTeamLimit",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11043080;
  FUN_11048d80("GetTeamLock",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11043100;
  FUN_110494f0("IsFrozen","entityId",param_1,&local_8);
  local_8 = FUN_110431a0;
  FUN_11049950("FreezeEntity","entityId, freeze, vapor",param_1,&local_8);
  local_8 = FUN_11043210;
  FUN_11049800("ShatterEntity","entityId, pos, impulse",param_1,&local_8);
  local_8 = FUN_11043250;
  FUN_11048d80("DebugCollisionDamage",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_110432d0;
  FUN_11048d80("DebugHits",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11043350;
  FUN_110494f0("SendHitIndicator","shooterId",param_1,&local_8);
  local_8 = FUN_11043400;
  FUN_11049250("SendDamageIndicator","shooterId",param_1,&local_8);
  local_8 = FUN_110434b0;
  FUN_110494f0("IsInvulnerable","playerId",param_1,&local_8);
  local_8 = FUN_11043500;
  FUN_110499c0("SetInvulnerability","playerId, invulnerable",param_1,&local_8);
  local_8 = FUN_11043550;
  FUN_11048df0("GameOver","localWinner",param_1,&local_8);
  local_8 = FUN_11043580;
  FUN_11048d80("EnteredGame",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_110435b0;
  FUN_110494f0("EndGameNear","entityId",param_1,&local_8);
  local_8 = FUN_110435e0;
  FUN_11049480("SPNotifyPlayerKill","targetId, weaponId, headShot",param_1,&local_8);
  local_8 = FUN_11043610;
  FUN_110496b0("ProcessEMPEffect","targetId, timeScale",param_1,&local_8);
  local_8 = FUN_110436d0;
  FUN_11048d80("PerformDeadHit",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11043730;
  FUN_11049aa0("SendDamageEvent","hitinfo, szAttackName, client",param_1,&local_8);
  local_8 = FUN_11043810;
  FUN_110495d0("SendBTEvent","targetId, eventId",param_1,&local_8);
  local_8 = FUN_11043870;
  FUN_11048df0("EnterInstance","InstanceId",param_1,&local_8);
  local_8 = FUN_110438d0;
  FUN_11049b10("SetPlayerLevelTrigger","triggerInfo, client",param_1,&local_8);
  local_8 = FUN_11043930;
  FUN_110494f0("GetFaction","entityId",param_1,&local_8);
  local_8 = FUN_11043a60;
  FUN_11049330("IsHostile","entityId, selfId",param_1,&local_8);
  local_8 = FUN_11043b20;
  FUN_11048d80("GetGameMode",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11043bb0;
  FUN_11048d80("IsPveFriendFire",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_110439e0;
  FUN_11048d80("GetCalMode",&DAT_11d9d32b,param_1,&local_8);
  local_8 = FUN_11043dc0;
  FUN_11049330("HitBorder","entityId, borderId",param_1,&local_8);
  local_8 = FUN_11043c40;
  FUN_11049b10("OnAreaTrigger","enter",param_1,&local_8);
  local_8 = FUN_11043d90;
  FUN_110495d0("ScriptAddBuff","entityId,buffID",param_1,&local_8);
  return;
}



