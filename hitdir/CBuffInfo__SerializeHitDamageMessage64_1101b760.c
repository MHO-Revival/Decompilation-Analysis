
/* [RE-R1]
   id: CBuffInfo::GetManagers
   calls: ceil, _ltoa_s
   strings:
     ""HitDir""
     ""attackerType""
     ""HitPos""
     ""attackerNetID""
     ""Damage""
     ""AttackAttr""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""%I64u""
     ""buffFlag"" */

void __thiscall
CBuffInfo__SerializeHitDamageMessage64
          (int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  int local_d0 [32];
  int local_50 [8];
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined **local_18;
  int local_14;
  int *local_10;
  undefined8 uStack_c;
  
  local_2c = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  ppuVar4 = (undefined **)(**(code **)(*piVar3 + 0xc))(*param_3);
  if (ppuVar4 != (undefined **)0x0) {
    piVar3 = (int *)*param_2;
    local_30 = piVar3;
    local_18 = ppuVar4;
    (**(code **)(*piVar3 + 0x30))();
    piVar1 = *(int **)(param_1 + 0xc);
    puVar5 = (undefined8 *)(**(code **)(*(int *)ppuVar4[3] + 0x94))();
    pfVar6 = (float *)(**(code **)(*piVar1 + 0x94))();
    local_10 = (int *)*puVar5;
    uStack_c._0_4_ = (float)((ulonglong)*puVar5 >> 0x20);
    local_10 = (int *)(*pfVar6 - (float)local_10);
    uStack_c._0_4_ = pfVar6[1] - (float)uStack_c;
    uStack_c._4_4_ = pfVar6[2] - *(float *)(puVar5 + 1);
    local_14 = 9;
    (**(code **)(*piVar3 + 0x18))("HitDir",&local_14,1);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_14 = 5;
    local_10 = (int *)FUN_1101bd20(local_18);
    (**(code **)(*piVar3 + 0x18))("attackerType",&local_14,1);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)param_3[0x14];
    uStack_c._0_4_ = (float)param_3[0x15];
    uStack_c._4_4_ = (float)param_3[0x16];
    local_14 = 9;
    (**(code **)(*piVar3 + 0x18))("HitPos",&local_14,1);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_14 = 3;
    local_10 = (int *)(**(code **)(**(int **)m_pThis_exref + 700))(*param_3);
    (**(code **)(*piVar3 + 0x18))("attackerNetID",&local_14,1);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))();
    }
    if (param_4 != (float *)0x0) {
      uStack_c = (double)*param_4;
      dVar15 = ceil(uStack_c);
      local_28 = 4;
      uStack_c = (double)(param_4[1] + DAT_11de9890 + param_4[2] + param_4[3] + param_4[4] +
                         param_4[5]);
      dVar16 = ceil(uStack_c);
      uStack_c._0_4_ = SUB84(dVar16,0);
      uStack_c._4_4_ = (float)((ulonglong)dVar16 >> 0x20);
      local_24 = (int *)(float)((int)dVar16 + (int)dVar15);
      (**(code **)(*piVar3 + 0x18))("Damage",&local_28,1);
      if (local_28 == 6) {
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 0xc))();
        }
      }
      else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
      }
      local_28 = 4;
      iVar7 = HitDescriptor__ComputeAttackAttrMask();
      local_24 = (int *)(float)iVar7;
      (**(code **)(*piVar3 + 0x18))("AttackAttr",&local_28,1);
      if (local_28 == 6) {
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 0xc))();
        }
      }
      else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))();
      }
    }
    pfVar6 = param_4 + 0x25;
    param_2 = (undefined4 *)0xa;
    uStack_c._0_4_ = 0.0;
    uStack_c._4_4_ = 0.0;
    uVar13 = (uint)uStack_c._4_4_;
    uVar14 = (uint)(float)uStack_c;
    do {
      if (*pfVar6 != 0.0) {
        FUN_11316910();
        local_18 = &PTR_FUN_11dbea04;
        fVar2 = *pfVar6;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton();
          FUN_11a8911f(&LAB_11c6f220);
        }
        puVar8 = (undefined *)*DAT_123be35c;
        if ((puVar8 == (undefined *)0x0) &&
           (puVar8 = (undefined *)CInfoManager__FindByName(&local_18,"CBuffInfo",0),
           puVar8 == (undefined *)0x0)) {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f();
          }
          puVar8 = &DAT_123be2d0;
        }
        local_18 = &PTR_FUN_11da54a8;
        if ((fVar2 != -NAN) &&
           ((((fVar2 != 0.0 || (*(int *)(puVar8 + 0x30) == 0)) && (*(int *)(puVar8 + 0x28) != 0)) &&
            ((iVar7 = (int)fVar2 - *(int *)(puVar8 + 0x30), -1 < iVar7 &&
             (iVar7 < *(int *)(puVar8 + 0x24))))))) {
          iVar9 = iVar7 / *(int *)(puVar8 + 0x28);
          if ((*(int *)(*(int *)(puVar8 + 0x20) + iVar9 * 4) != 0) &&
             (local_2c = *(int *)(*(int *)(*(int *)(puVar8 + 0x20) + iVar9 * 4) +
                                 (iVar7 % *(int *)(puVar8 + 0x28)) * 4), local_2c != 0)) {
            iVar7 = 0;
            do {
              uVar10 = FUN_116a7480();
              uVar11 = 1 << (uVar10 & 0x1f);
              uVar12 = 0;
              if (0x1f < uVar10) {
                uVar12 = uVar11;
              }
              uVar11 = uVar11 ^ uVar12;
              if (0x3f < uVar10) {
                uVar12 = uVar11;
              }
              iVar7 = iVar7 + 1;
              uVar14 = uVar14 | uVar11;
              uVar13 = uVar13 | uVar12;
            } while (iVar7 < 2);
          }
        }
      }
      pfVar6 = pfVar6 + 1;
      param_2 = (undefined4 *)((int)param_2 + -1);
    } while (param_2 != (undefined4 *)0x0);
    FUN_1098b870(local_d0,"%I64u",uVar14,uVar13);
    piVar3 = local_30;
    local_24 = local_d0;
    local_28 = 5;
    (**(code **)(*local_30 + 0x18))("buffFlag",&local_28,1);
    if (local_28 == 6) {
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xc))();
      }
    }
    else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
    }
    uVar13 = 0;
    fVar2 = param_4[0x1a];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      uVar13 = 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x1c];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      uVar13 = uVar13 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x1e];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      uVar13 = uVar13 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x20];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      uVar13 = uVar13 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    _ltoa_s(uVar13,(char *)local_50,0x1f,10);
    local_28 = 5;
    local_24 = local_50;
    (**(code **)(*piVar3 + 0x18))("spAttackFlag",&local_28,1);
    if (local_28 == 6) {
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xc))();
        (**(code **)(*piVar3 + 0x34))();
        return;
      }
    }
    else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
    }
    (**(code **)(*piVar3 + 0x34))();
  }
  return;
}

