/* ===== CMonster::SpawnParticleEffect @ 10da0520  size=88 ===== */
// strings:
//   "CMonster::SpawnParticleEffect"

/* [RE-AUTO c3]
   id: CMonster::SpawnParticleEffect
   strings:
     ""CMonster::SpawnParticleEffect"" */

void CMonster__SpawnParticleEffect(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_34 [48];
  
  iVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                    (param_1,"CMonster::SpawnParticleEffect",1,1);
  if (iVar1 != 0) {
    uVar2 = FUN_10b01ff0(local_34,param_2,param_3,0x3f800000,0,0);
    FUN_10a7b9f0(1,uVar2);
  }
  return;
}



/* ===== FUN_10db7120 @ 10db7120  size=542 ===== */
// strings:
//   "MonsterAim"

/* [RE-AUTO c0]
   strings:
     ""MonsterAim"" */

uint __thiscall
FUN_10db7120(int param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint in_EAX;
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_30 [12];
  float local_24;
  undefined8 local_20;
  float local_18;
  ulonglong local_14;
  float local_c;
  float local_8;
  
  if ((*(char *)(param_1 + 0x21b0) != '\0') &&
     (in_EAX = *(uint *)(param_1 + 0x21a4), in_EAX != *(uint *)(param_1 + 0x21a8))) {
    local_20 = *(undefined8 *)(*(int *)(param_1 + 0x21a8) + -0xc);
    local_18 = *(float *)(*(int *)(param_1 + 0x21a8) + -4);
    if (*(int *)(param_1 + 0x21a8) != *(int *)(param_1 + 0x21a4)) {
      *(int *)(param_1 + 0x21a8) = *(int *)(param_1 + 0x21a8) + -0xc;
    }
    if (*(int *)(*(int *)(DAT_1202e818 + 0x7c) + 0xabc) != 0) {
      piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x194))();
      (**(code **)(*piVar1 + 4))("MonsterAim",1);
      (**(code **)(*piVar1 + 8))(&local_20,0x3f800000,0x3f800000,0,0,0x3f800000,&DAT_40400000);
    }
    local_14 = (ulonglong)(uint)((float)local_20 - param_2);
    local_c = local_20._4_4_ - param_3;
    local_8 = local_18 - param_4;
    puVar2 = (uint *)(**(code **)(**(int **)(param_1 + 0xc) + 0xd0))(local_30);
    fVar9 = (float)(puVar2[1] ^ DAT_11de9c90);
    fVar8 = (float)(puVar2[2] ^ DAT_11de9c90);
    fVar4 = (float)puVar2[3];
    fVar10 = (float)(*puVar2 ^ DAT_11de9c90);
    fVar7 = (fVar9 * local_8 - fVar8 * local_c) + fVar4 * (float)local_14;
    fVar6 = (fVar8 * (float)local_14 - fVar10 * local_8) + fVar4 * local_c;
    fVar5 = (fVar10 * local_c - fVar9 * (float)local_14) + fVar4 * local_8;
    fVar4 = fVar9 * fVar5 - fVar8 * fVar6;
    fVar4 = (float)local_14 + fVar4 + fVar4;
    local_14 = CONCAT44((int)(local_14 >> 0x20),fVar4);
    fVar5 = fVar8 * fVar7 - fVar10 * fVar5;
    local_24 = fVar10 * fVar6 - fVar9 * fVar7;
    local_24 = local_24 + local_8 + local_24;
    uVar3 = FUN_10dba840(CONCAT44(fVar5 + local_c + fVar5,fVar4),local_24,param_5,param_6);
    return uVar3;
  }
  return in_EAX & 0xffffff00;
}



/* ===== FUN_10dbb900 @ 10dbb900  size=3903 ===== */
// calls: CInfoRecord::GetModelString, SetCustomShaderColor, CreateScar, SetMorphWeight, CreateAttachmentSlot, AttachmentObject, AttachmentEffect
// strings:
//   "PropertyCustom"
//   ".colorCustom"
//   ".SkinDecalSetting.DecalList"
//   "Texture"
//   "Normal"
//   "Dirscale"
//   "Upscale"
//   ".HideAttachment.AttachmentList"
//   "Attachment"
//   ".Morph.MorphList"
//   "Weight"
//   ".AttachmentSetting"
//   "AttachmentList"
//   "AName"
//   "Rotation"
//   "Position"
//   "BName"
//   "Binding"
//   "ObjectAttachment"
//   "Offset"

/* [RE-AUTO c0]
   calls: SetCustomShaderColor, CreateScar, SetMorphWeight, CreateAttachmentSlot, AttachmentObject,
   AttachmentEffect
   strings:
     ""PropertyCustom""
     "".colorCustom""
     "".SkinDecalSetting.DecalList""
     ""Texture""
     ""Normal""
     ""Dirscale""
     ""Upscale""
     "".HideAttachment.AttachmentList""
     ""Attachment""
     "".Morph.MorphList"" */

undefined4 __thiscall FUN_10dbb900(int param_1,float param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  bool bVar9;
  Quat_tpl<float> local_2dc [16];
  undefined1 local_2cc [8];
  int local_2c4;
  int *local_2c0;
  undefined1 local_2a0 [8];
  int local_298;
  int *local_294;
  undefined1 local_274 [8];
  int local_26c;
  int *local_268;
  undefined1 local_248 [8];
  int local_240;
  int *local_23c;
  undefined1 local_21c [8];
  int local_214;
  int *local_210;
  undefined1 local_1f0 [8];
  int local_1e8;
  int *local_1e4;
  undefined1 local_1c4 [8];
  int local_1bc;
  int *local_1b8;
  Vec3_tpl<float> local_198 [12];
  Vec3_tpl<float> local_18c [12];
  Vec3_tpl<float> local_180 [12];
  Vec3_tpl<float> local_174 [12];
  Vec3_tpl<float> local_168 [12];
  Vec3_tpl<float> local_15c [12];
  Vec3_tpl<float> local_150 [12];
  Vec3_tpl<float> local_144 [12];
  Vec3_tpl<float> local_138 [12];
  undefined1 local_12c [16];
  undefined1 local_11c [4];
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  undefined1 local_100 [8];
  undefined1 local_f8 [4];
  undefined1 local_f4 [8];
  undefined1 local_ec [4];
  int local_e8;
  float local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  int local_c4 [2];
  int local_bc;
  int local_b8;
  undefined1 local_b4 [8];
  undefined1 local_ac [4];
  float local_a8;
  undefined4 local_a4;
  int local_a0;
  CryStringT<char> local_9c [4];
  undefined4 local_98;
  float local_94;
  int local_90;
  CryStringT<char> local_8c [4];
  int *local_88;
  CryStringT<char> local_84 [4];
  CryStringT<char> local_80 [4];
  int local_7c;
  CryStringT<char> local_78 [4];
  CryStringT<char> local_74 [4];
  float local_70;
  CryStringT<char> local_6c [4];
  int local_68;
  undefined4 local_64;
  CryStringT<char> local_60 [4];
  CryStringT<char> local_5c [4];
  int local_58;
  int local_54;
  int *local_50;
  undefined1 local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  char local_d;
  int *local_c;
  char local_5;
  
  piVar8 = (int *)0x0;
  local_c = (int *)0x0;
  local_a0 = param_1;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
  if ((((piVar2 == (int *)0x0) || (local_38 = (**(code **)(*piVar2 + 0x38))(), local_38 == 0)) ||
      (local_54 = param_1, local_50 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x1b8))(0),
      local_54 == 0)) || (local_50 == (int *)0x0)) {
    return 0;
  }
  local_4c = 1;
  local_5 = param_2 == 0.0;
  local_d = param_2 == 0.0;
  param_2 = (float)((uint)param_2 & 0xffffff);
  if ((bool)local_5) {
    piVar8 = (int *)0x3;
    local_c = (int *)0x3;
    uVar3 = CInfoRecord__GetModelString("PropertyCustom",".HasCustomColor");
    puVar4 = (undefined4 *)FUN_10a4b980(local_ac,uVar3);
    cVar1 = FUN_10dbe280(*puVar4,(int)&param_2 + 3);
    if (cVar1 == '\0') goto LAB_10dbb9ce;
    bVar9 = param_2._3_1_ == '\0';
    param_2 = (float)CONCAT13(1,param_2._0_3_);
    if (bVar9) goto LAB_10dbb9ce;
  }
  else {
LAB_10dbb9ce:
    param_2 = (float)((uint)param_2 & 0xffffff);
  }
  if (((uint)piVar8 & 2) != 0) {
    piVar8 = (int *)((uint)piVar8 & 0xfffffffd);
    local_c = piVar8;
    FUN_104f6f60();
  }
  if (((uint)piVar8 & 1) != 0) {
    local_c = (int *)((uint)piVar8 & 0xfffffffe);
    FUN_104f6f60();
  }
  piVar2 = (int *)0x0;
  if (param_2._3_1_ != '\0') {
    local_48 = (int *)0x0;
    uVar3 = CInfoRecord__GetModelString("PropertyCustom",".colorCustom");
    puVar4 = (undefined4 *)FUN_10a4b980(local_b4,uVar3);
    cVar1 = FUN_10dbe1d0(*puVar4,&local_48);
    FUN_104f6f60();
    FUN_104f6f60();
    if (cVar1 != '\0') {
      FUN_10dbecd0(local_138);
      CMonsterCustomSettingHelper::SetCustomShaderColor
                ((CMonsterCustomSettingHelper *)&local_54,local_138);
    }
    piVar2 = local_c;
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 0xc))();
      piVar2 = local_c;
    }
  }
  local_18 = (int *)0x0;
  if (local_5 != '\0') {
    piVar2 = (int *)((uint)piVar2 | 0xc);
    uVar3 = CInfoRecord__GetModelString("PropertyCustom",".SkinDecalSetting.DecalList");
    puVar4 = (undefined4 *)FUN_10a4b980(local_ec,uVar3);
    cVar1 = FUN_10a68ea0(*puVar4,&local_18);
    param_2 = (float)CONCAT13(1,param_2._0_3_);
    if (cVar1 != '\0') goto LAB_10dbbad9;
  }
  param_2 = (float)((uint)param_2 & 0xffffff);
LAB_10dbbad9:
  piVar8 = local_18;
  if (((uint)piVar2 & 8) != 0) {
    piVar2 = (int *)((uint)piVar2 & 0xfffffff7);
    FUN_104f6f60();
  }
  if (((uint)piVar2 & 4) != 0) {
    FUN_104f6f60();
  }
  if (param_2._3_1_ != '\0') {
    (**(code **)(*piVar8 + 0x48))(local_1c4);
    cVar1 = (**(code **)(*piVar8 + 0x4c))(local_1c4);
    while (cVar1 != '\0') {
      piVar2 = (int *)0x0;
      if ((local_1bc == 6) && (piVar2 = local_1b8, local_1b8 != (int *)0x0)) {
        (**(code **)(*local_1b8 + 8))();
      }
      cVar1 = FUN_10a68bb0("Texture",&local_e0);
      iVar5 = local_e0;
      if (((cVar1 != '\0') && (local_e0 != 0)) &&
         ((cVar1 = FUN_10a68c40(&DAT_11cc17c8,local_150), cVar1 != '\0' &&
          ((((cVar1 = FUN_10a68c40(&DAT_11cca8a0,local_198), cVar1 != '\0' &&
             (cVar1 = FUN_10a68c40("Normal",local_144), cVar1 != '\0')) &&
            (cVar1 = FUN_10a68a10("Dirscale",&local_c8), cVar1 != '\0')) &&
           (cVar1 = FUN_10a68a10("Upscale",&local_e4), cVar1 != '\0')))))) {
        CInfoRecord__GetModelString(iVar5);
        CMonsterCustomSettingHelper::CreateScar
                  ((CMonsterCustomSettingHelper *)&local_54,local_84,local_198,local_144,local_150,
                   local_e4,local_c8);
        FUN_104f6f60();
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
      cVar1 = (**(code **)(*piVar8 + 0x4c))(local_1c4);
    }
    (**(code **)(*piVar8 + 0x50))(local_1c4);
    FUN_10a720a0();
  }
  local_44 = (int *)0x0;
  uVar3 = CInfoRecord__GetModelString("PropertyCustom",".HideAttachment.AttachmentList");
  puVar4 = (undefined4 *)FUN_10a4b980(&local_d0,uVar3);
  local_5 = FUN_10a68ea0(*puVar4,&local_44);
  piVar2 = (int *)(local_d0 + -0xc);
  if ((-1 < *piVar2) && (iVar5 = FUN_10c3dad0(piVar2), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_d0 + -4));
    FUN_10c3d900(piVar2);
  }
  piVar2 = (int *)(local_e8 + -0xc);
  if ((-1 < *piVar2) && (iVar5 = FUN_10c3dad0(piVar2), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_e8 + -4));
    FUN_10c3d900(piVar2);
  }
  piVar2 = local_44;
  if (local_5 != '\0') {
    (**(code **)(*local_44 + 0x48))(local_2a0);
    cVar1 = (**(code **)(*piVar2 + 0x4c))(local_2a0);
    while (cVar1 != '\0') {
      piVar8 = (int *)0x0;
      if ((local_298 == 6) && (piVar8 = local_294, local_294 != (int *)0x0)) {
        (**(code **)(*local_294 + 8))();
      }
      cVar1 = FUN_10a68bb0("Attachment",&local_d8);
      iVar5 = local_d8;
      if (((cVar1 != '\0') && (local_d8 != 0)) && (local_50 != (int *)0x0)) {
        piVar6 = (int *)(**(code **)(*local_50 + 0x58))();
        piVar6 = (int *)(**(code **)(*piVar6 + 0x18))(iVar5);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x44))(1);
        }
      }
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      cVar1 = (**(code **)(*piVar2 + 0x4c))(local_2a0);
    }
    (**(code **)(*piVar2 + 0x50))(local_2a0);
    FUN_10a720a0();
  }
  local_3c = (int *)0x0;
  uVar3 = CInfoRecord__GetModelString("PropertyCustom",".Morph.MorphList");
  puVar4 = (undefined4 *)FUN_10a4b980(&local_b8,uVar3);
  local_5 = FUN_10a68ea0(*puVar4,&local_3c);
  piVar2 = (int *)(local_b8 + -0xc);
  if ((-1 < *piVar2) && (iVar5 = FUN_10c3dad0(piVar2), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_b8 + -4));
    FUN_10c3d900(piVar2);
  }
  piVar2 = (int *)(local_bc + -0xc);
  if ((-1 < *piVar2) && (iVar5 = FUN_10c3dad0(piVar2), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_bc + -4));
    FUN_10c3d900(piVar2);
  }
  piVar2 = local_3c;
  if (local_5 != '\0') {
    (**(code **)(*local_3c + 0x48))(local_248);
    cVar1 = (**(code **)(*piVar2 + 0x4c))(local_248);
    while (cVar1 != '\0') {
      piVar8 = (int *)0x0;
      if ((local_240 == 6) && (piVar8 = local_23c, local_23c != (int *)0x0)) {
        (**(code **)(*local_23c + 8))();
      }
      local_a8 = 0.0;
      cVar1 = FUN_10a68a10("Weight",&local_a8);
      if (cVar1 != '\0') {
        CMonsterCustomSettingHelper::SetMorphWeight
                  ((CMonsterCustomSettingHelper *)&local_54,local_a8);
      }
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      cVar1 = (**(code **)(*piVar2 + 0x4c))(local_248);
    }
    (**(code **)(*piVar2 + 0x50))(local_248);
    FUN_10a720a0();
  }
  local_c = (int *)0x0;
  uVar3 = CInfoRecord__GetModelString("PropertyCustom",".AttachmentSetting");
  puVar4 = (undefined4 *)FUN_10a4b980(local_c4,uVar3);
  local_5 = FUN_10a68ea0(*puVar4,&local_c);
  piVar2 = (int *)(local_c4[0] + -0xc);
  if ((-1 < *piVar2) && (iVar5 = FUN_10c3dad0(piVar2), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_c4[0] + -4));
    FUN_10c3d900(piVar2);
  }
  piVar2 = (int *)(local_cc + -0xc);
  if ((-1 < *piVar2) && (iVar5 = FUN_10c3dad0(piVar2), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_cc + -4));
    FUN_10c3d900(piVar2);
  }
  if (local_5 != '\0') {
    local_34 = (int *)0x0;
    cVar1 = FUN_10a68ce0("AttachmentList",&local_34);
    piVar2 = local_34;
    if (cVar1 != '\0') {
      (**(code **)(*local_34 + 0x48))(local_1f0);
      cVar1 = (**(code **)(*piVar2 + 0x4c))(local_1f0);
      while (cVar1 != '\0') {
        piVar8 = (int *)0x0;
        if ((local_1e8 == 6) && (piVar8 = local_1e4, local_1e4 != (int *)0x0)) {
          (**(code **)(*local_1e4 + 8))();
        }
        local_28 = 0;
        local_58 = 0;
        local_1c = (int *)0x0;
        local_a4 = 0;
        local_64 = 0;
        cVar1 = FUN_10a68bb0("AName",&local_28);
        if ((((cVar1 != '\0') && (local_28 != 0)) &&
            (cVar1 = FUN_10a68bb0(&DAT_11dbabc0,&local_58), iVar5 = local_58, cVar1 != '\0')) &&
           (local_58 != 0)) {
          cVar1 = FUN_10dbe120("Rotation",&local_1c);
          if (((cVar1 != '\0') && (cVar1 = FUN_10a68c40("Position",local_18c), cVar1 != '\0')) &&
             ((cVar1 = FUN_10a68bb0("BName",&local_a4), cVar1 != '\0' &&
              (cVar1 = FUN_10a68bb0("Binding",&local_64), cVar1 != '\0')))) {
            FUN_10dbec70(local_2dc);
            CInfoRecord__GetModelString(local_64);
            CInfoRecord__GetModelString(local_a4);
            CInfoRecord__GetModelString(iVar5);
            CInfoRecord__GetModelString(local_28);
            CMonsterCustomSettingHelper::CreateAttachmentSlot
                      ((CMonsterCustomSettingHelper *)&local_54,local_6c,local_8c,local_2dc,
                       local_18c,local_74,local_9c);
            FUN_104f6f60();
            FUN_104f6f60();
            FUN_104f6f60();
            FUN_104f6f60();
          }
          if (local_1c != (int *)0x0) {
            (**(code **)(*local_1c + 0xc))();
          }
        }
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))();
        }
        cVar1 = (**(code **)(*piVar2 + 0x4c))(local_1f0);
      }
      (**(code **)(*piVar2 + 0x50))(local_1f0);
      FUN_10a720a0();
    }
    local_2c = (int *)0x0;
    if ((local_d != '\0') &&
       (cVar1 = FUN_10a68ce0("ObjectAttachment",&local_2c), piVar2 = local_2c, cVar1 != '\0')) {
      (**(code **)(*local_2c + 0x48))(local_21c);
      cVar1 = (**(code **)(*piVar2 + 0x4c))(local_21c);
      while (cVar1 != '\0') {
        piVar8 = (int *)0x0;
        if ((local_214 == 6) && (piVar8 = local_210, local_210 != (int *)0x0)) {
          (**(code **)(*local_210 + 8))();
        }
        local_d4 = 0;
        local_30 = 0;
        local_7c = 0;
        local_94 = 1.0;
        cVar1 = FUN_10a68bb0(&DAT_11da7300,&local_d4);
        if ((((cVar1 != '\0') && (cVar1 = FUN_10a68bb0("Attachment",&local_30), cVar1 != '\0')) &&
            (local_30 != 0)) &&
           ((cVar1 = FUN_10a68bb0(&DAT_11dc84f0,&local_7c), iVar5 = local_7c, cVar1 != '\0' &&
            (local_7c != 0)))) {
          FUN_10a68900(&DAT_11dbabc0,local_f4);
          FUN_10a68c40("Offset",local_174);
          FUN_10a68c40("Rotation",local_15c);
          FUN_10a68a10("Scale",&local_94);
          CInfoRecord__GetModelString(iVar5);
          CInfoRecord__GetModelString(local_30);
          CMonsterCustomSettingHelper::AttachmentObject
                    ((CMonsterCustomSettingHelper *)&local_54,local_5c,local_15c,local_174,local_94,
                     local_60);
          FUN_104f6f60();
          FUN_104f6f60();
        }
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))();
        }
        cVar1 = (**(code **)(*piVar2 + 0x4c))(local_21c);
      }
      (**(code **)(*piVar2 + 0x50))(local_21c);
      FUN_10a720a0();
    }
    local_24 = (int *)0x0;
    cVar1 = FUN_10a68ce0("EffectAttachment",&local_24);
    piVar2 = local_24;
    if (cVar1 != '\0') {
      (**(code **)(*local_24 + 0x48))(local_274);
      cVar1 = (**(code **)(*piVar2 + 0x4c))(local_274);
      while (cVar1 != '\0') {
        piVar8 = (int *)0x0;
        if ((local_26c == 6) && (piVar8 = local_268, local_268 != (int *)0x0)) {
          (**(code **)(*local_268 + 8))();
        }
        local_dc = 0;
        local_40 = 0;
        local_68 = 0;
        local_70 = 1.0;
        cVar1 = FUN_10a68bb0(&DAT_11da7300,&local_dc);
        if ((((cVar1 != '\0') && (cVar1 = FUN_10a68bb0("Attachment",&local_40), cVar1 != '\0')) &&
            (local_40 != 0)) &&
           ((cVar1 = FUN_10a68bb0(&DAT_11dc84f0,&local_68), iVar5 = local_68, cVar1 != '\0' &&
            (local_68 != 0)))) {
          FUN_10a68900(&DAT_11dbabc0,local_f8);
          FUN_10a68c40("Offset",local_168);
          FUN_10a68c40(&DAT_11cc17c8,local_180);
          FUN_10a68a10("Scale",&local_70);
          if (*(int **)(local_a0 + 0xc) != (int *)0x0) {
            pfVar7 = (float *)(**(code **)(**(int **)(local_a0 + 0xc) + 0xbc))();
            param_2 = *pfVar7;
            CInfoRecord__GetModelString(iVar5);
            CInfoRecord__GetModelString(local_40);
            CMonsterCustomSettingHelper::AttachmentEffect
                      ((CMonsterCustomSettingHelper *)&local_54,local_78,local_180,local_168,
                       local_70,param_2,local_80);
            FUN_104f6f60();
            FUN_104f6f60();
          }
        }
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))();
        }
        cVar1 = (**(code **)(*piVar2 + 0x4c))(local_274);
      }
      (**(code **)(*piVar2 + 0x50))(local_274);
      FUN_10a720a0();
    }
    local_88 = (int *)0x0;
    cVar1 = FUN_10a68ce0("MonsterStateEffects",&local_88);
    piVar2 = local_88;
    if (cVar1 != '\0') {
      (**(code **)(*local_88 + 0x48))(local_2cc);
      cVar1 = (**(code **)(*piVar2 + 0x4c))(local_2cc);
      while (cVar1 != '\0') {
        piVar8 = (int *)0x0;
        if ((local_2c4 == 6) && (piVar8 = local_2c0, local_2c0 != (int *)0x0)) {
          (**(code **)(*local_2c0 + 8))();
        }
        local_98 = 0;
        local_20 = 0;
        local_90 = 0;
        local_14 = 0;
        cVar1 = FUN_10a68bb0(&DAT_11da7300,&local_98);
        if ((((cVar1 != '\0') && (cVar1 = FUN_10a68bb0("StateName",&local_14), cVar1 != '\0')) &&
            (local_14 != 0)) &&
           (((cVar1 = FUN_10a68bb0("Attachment",&local_20), cVar1 != '\0' && (local_20 != 0)) &&
            ((cVar1 = FUN_10a68bb0(&DAT_11dc84f0,&local_90), iVar5 = local_90, cVar1 != '\0' &&
             (local_90 != 0)))))) {
          FUN_10dbe920();
          FUN_10a68900(&DAT_11dbabc0,local_11c);
          FUN_10a68c40("Offset",local_118);
          FUN_10a68c40(&DAT_11cc17c8,local_10c);
          FUN_10a68a10("Scale",local_100);
          FUN_1083ac30(local_98);
          FUN_1083ac30(local_14);
          FUN_1083ac30(iVar5);
          FUN_1083ac30(local_20);
          FUN_10dbdf90(&local_14,local_12c);
          FUN_10dbea30();
          FUN_10dadef0();
        }
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))();
        }
        cVar1 = (**(code **)(*piVar2 + 0x4c))(local_2cc);
      }
      (**(code **)(*piVar2 + 0x50))(local_2cc);
      FUN_10a720a0();
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 0xc))();
    }
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0xc))();
    }
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 0xc))();
    }
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 0xc))();
  }
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 0xc))();
  }
  if (local_44 != (int *)0x0) {
    (**(code **)(*local_44 + 0xc))();
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 0xc))();
  }
  return 1;
}



/* ===== FUN_10e5a420 @ 10e5a420  size=1391 ===== */
// strings:
//   "enable"
//   "disable"
//   "triggerOnce"
//   "isSpawnerEntityID"
//   "isCollectPointNetID"
//   "isPet"
//   "isItemID"
//   "isBuffID"
//   "OnEvent"
//   "spawnerEntityID"
//   "collectPointNetID"
//   "playerNetID"
//   "petNetID"
//   "itemID"
//   "buffID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""disable""
     ""triggerOnce""
     ""isSpawnerEntityID""
     ""isCollectPointNetID""
     ""isPet""
     ""isItemID""
     ""isBuffID""
     ""OnEvent""
     ""spawnerEntityID"" */

void FUN_10e5a420(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_120376f8 & 1) == 0) {
    DAT_120376f8 = DAT_120376f8 | 1;
    _DAT_12037620 = "enable";
    _DAT_12037624 = 0;
    _DAT_12037628 = &DAT_11d9d32b;
    _DAT_1203762c = 0;
    _DAT_12037630 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12037634,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12037638 = "disable";
    _DAT_1203763c = 0;
    _DAT_12037640 = &DAT_11d9d32b;
    _DAT_12037644 = 0;
    _DAT_12037648 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203764c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12037660 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12037650 = "triggerOnce";
    _DAT_12037654 = 0;
    _DAT_12037658 = &DAT_11d9d32b;
    _DAT_1203765c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12037664,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    uStack_8 = 0xffffffff;
    _DAT_12037668 = "isSpawnerEntityID";
    _DAT_12037678 = &DAT_11df76c9;
    _DAT_1203766c = 0;
    _DAT_12037670 = &DAT_11d9d32b;
    _DAT_12037674 = 0;
    (*(code *)PTR_FUN_11df76d4)(&DAT_1203767c,&uStack_8);
    (*(code *)PTR_FUN_11df76cc)(&uStack_8);
    _DAT_12037690 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12037680 = "isCollectPointNetID";
    _DAT_12037684 = 0;
    _DAT_12037688 = &DAT_11d9d32b;
    _DAT_1203768c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12037694,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120376a8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12037698 = "isPet";
    _DAT_1203769c = 0;
    _DAT_120376a0 = &DAT_11d9d32b;
    _DAT_120376a4 = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_120376ac,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_120376b0 = "isItemID";
    _DAT_120376b4 = 0;
    _DAT_120376b8 = &DAT_11d9d32b;
    _DAT_120376bc = 0;
    _DAT_120376c0 = &DAT_11df7669;
    (*(code *)PTR_FUN_11df7674)(&DAT_120376c4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120376d8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120376c8 = "isBuffID";
    _DAT_120376cc = 0;
    _DAT_120376d0 = &DAT_11d9d32b;
    _DAT_120376d4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120376dc,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120376f0 = &DAT_11df7728;
    _DAT_120376e0 = 0;
    uRam120376e4 = 0;
    uRam120376e8 = 0;
    uRam120376ec = 0;
    FUN_11a8911f(&LAB_11c8e2c0);
  }
  if ((DAT_120376f8 & 2) == 0) {
    DAT_120376f8 = DAT_120376f8 | 2;
    _DAT_12037700 = "OnEvent";
    uRam12037704 = 0;
    _DAT_12037708 = &DAT_11d9d32b;
    uRam1203770c = 1;
    _DAT_12037710 = "spawnerEntityID";
    uRam12037714 = 0;
    puRam12037718 = &DAT_11d9d32b;
    uRam1203771c = 3;
    _DAT_12037720 = "collectPointNetID";
    uRam12037724 = 0;
    puRam12037728 = &DAT_11d9d32b;
    uRam1203772c = 1;
    _DAT_12037730 = "playerNetID";
    uRam12037734 = 0;
    puRam12037738 = &DAT_11d9d32b;
    uRam1203773c = 1;
    _DAT_12037740 = "petNetID";
    uRam12037744 = 0;
    puRam12037748 = &DAT_11d9d32b;
    uRam1203774c = 1;
    _DAT_12037750 = "itemID";
    uRam12037754 = 0;
    puRam12037758 = &DAT_11d9d32b;
    uRam1203775c = 1;
    _DAT_12037760 = "buffID";
    uRam12037764 = 0;
    puRam12037768 = &DAT_11d9d32b;
    uRam1203776c = 1;
    _DAT_12037770 = 0;
    uRam12037774 = 0;
    uRam12037778 = 0;
    uRam1203777c = 0;
  }
  *param_1 = &DAT_12037620;
  param_1[1] = &DAT_12037700;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e741a0 @ 10e741a0  size=1511 ===== */
// strings:
//   "enable"
//   "disable"
//   "triggerOnce"
//   "logicEntityNetID"
//   "isSpawnerEntityID"
//   "isCollectPointNetID"
//   "isPet"
//   "isItemID"
//   "isBuffID"
//   "OnEvent"
//   "spawnerEntityID"
//   "collectPointNetID"
//   "playerNetID"
//   "petNetID"
//   "itemID"
//   "buffID"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""disable""
     ""triggerOnce""
     ""logicEntityNetID""
     ""isSpawnerEntityID""
     ""isCollectPointNetID""
     ""isPet""
     ""isItemID""
     ""isBuffID""
     ""OnEvent"" */

void FUN_10e741a0(undefined4 *param_1)

{
  uint uStack_8;
  
  if ((DAT_120383e0 & 1) == 0) {
    DAT_120383e0 = DAT_120383e0 | 1;
    _DAT_120382f0 = "enable";
    _DAT_120382f4 = 0;
    _DAT_120382f8 = &DAT_11d9d32b;
    _DAT_120382fc = 0;
    _DAT_12038300 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12038304,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12038308 = "disable";
    _DAT_1203830c = 0;
    _DAT_12038310 = &DAT_11d9d32b;
    _DAT_12038314 = 0;
    _DAT_12038318 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203831c,&uStack_8);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    _DAT_12038330 = &DAT_11df7709;
    uStack_8 = uStack_8 & 0xffffff00;
    _DAT_12038320 = "triggerOnce";
    _DAT_12038324 = 0;
    _DAT_12038328 = &DAT_11d9d32b;
    _DAT_1203832c = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_12038334,&uStack_8);
    (*(code *)PTR_FUN_11df770c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12038348 = &DAT_11df7669;
    _DAT_12038338 = "logicEntityNetID";
    _DAT_1203833c = 0;
    _DAT_12038340 = &DAT_11d9d32b;
    _DAT_12038344 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203834c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_12038360 = &DAT_11df76c9;
    uStack_8 = 0xffffffff;
    _DAT_12038350 = "isSpawnerEntityID";
    _DAT_12038354 = 0;
    _DAT_12038358 = &DAT_11d9d32b;
    _DAT_1203835c = 0;
    (*(code *)PTR_FUN_11df76d4)(&DAT_12038364,&uStack_8);
    (*(code *)PTR_FUN_11df76cc)(&uStack_8);
    _DAT_12038378 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12038368 = "isCollectPointNetID";
    _DAT_1203836c = 0;
    _DAT_12038370 = &DAT_11d9d32b;
    _DAT_12038374 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203837c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    uStack_8 = 0;
    _DAT_12038380 = "isPet";
    _DAT_12038384 = 0;
    _DAT_12038388 = &DAT_11d9d32b;
    _DAT_1203838c = &DAT_11d9d32b;
    _DAT_12038390 = &DAT_11df7669;
    (*(code *)PTR_FUN_11df7674)(&DAT_12038394,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_120383a8 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_12038398 = "isItemID";
    _DAT_1203839c = 0;
    _DAT_120383a0 = &DAT_11d9d32b;
    _DAT_120383a4 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120383ac,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120383c0 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_120383b0 = "isBuffID";
    _DAT_120383b4 = 0;
    _DAT_120383b8 = &DAT_11d9d32b;
    _DAT_120383bc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_120383c4,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_120383d8 = &DAT_11df7728;
    _DAT_120383c8 = 0;
    uRam120383cc = 0;
    uRam120383d0 = 0;
    uRam120383d4 = 0;
    FUN_11a8911f(&LAB_11c8e830);
  }
  if ((DAT_120383e0 & 2) == 0) {
    DAT_120383e0 = DAT_120383e0 | 2;
    _DAT_120383e8 = "OnEvent";
    uRam120383ec = 0;
    _DAT_120383f0 = &DAT_11d9d32b;
    uRam120383f4 = 1;
    _DAT_120383f8 = "spawnerEntityID";
    uRam120383fc = 0;
    puRam12038400 = &DAT_11d9d32b;
    uRam12038404 = 3;
    _DAT_12038408 = "collectPointNetID";
    uRam1203840c = 0;
    puRam12038410 = &DAT_11d9d32b;
    uRam12038414 = 1;
    _DAT_12038418 = "playerNetID";
    uRam1203841c = 0;
    puRam12038420 = &DAT_11d9d32b;
    uRam12038424 = 1;
    _DAT_12038428 = "petNetID";
    uRam1203842c = 0;
    puRam12038430 = &DAT_11d9d32b;
    uRam12038434 = 1;
    _DAT_12038438 = "itemID";
    uRam1203843c = 0;
    puRam12038440 = &DAT_11d9d32b;
    uRam12038444 = 1;
    _DAT_12038448 = "buffID";
    uRam1203844c = 0;
    puRam12038450 = &DAT_11d9d32b;
    uRam12038454 = 1;
    _DAT_12038458 = 0;
    uRam1203845c = 0;
    uRam12038460 = 0;
    uRam12038464 = 0;
  }
  *param_1 = &DAT_120382f0;
  param_1[1] = &DAT_120383e8;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e97da0 @ 10e97da0  size=319 ===== */
// strings:
//   "DoSpawn"
//   "Spawned"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""DoSpawn""
     ""Spawned"" */

void FUN_10e97da0(undefined4 *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1203a2f0 & 1) == 0) {
    DAT_1203a2f0 = DAT_1203a2f0 | 1;
    _DAT_1203a0b0 = "DoSpawn";
    _DAT_1203a0b4 = 0;
    _DAT_1203a0b8 = &DAT_11d9d32b;
    _DAT_1203a0bc = 0;
    _DAT_1203a0c0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203a0c4,local_18,"DoSpawn",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(local_18);
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_1203a2f0 & 2) == 0) {
    DAT_1203a2f0 = DAT_1203a2f0 | 2;
    _DAT_1203a2f4 = "Spawned";
    uRam1203a2f8 = 0;
    puRam1203a2fc = &DAT_11d9d32b;
    uRam1203a300 = 1;
    _DAT_1203a304 = 0;
    uRam1203a308 = 0;
    uRam1203a30c = 0;
    uRam1203a310 = 0;
  }
  *param_1 = &DAT_1203a0b0;
  param_1[1] = &DAT_1203a2f4;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e989c0 @ 10e989c0  size=319 ===== */
// strings:
//   "DoSpawn"
//   "Spawned"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""DoSpawn""
     ""Spawned"" */

void FUN_10e989c0(undefined4 *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1203a088 & 1) == 0) {
    DAT_1203a088 = DAT_1203a088 | 1;
    _DAT_12039fb0 = "DoSpawn";
    _DAT_12039fb4 = 0;
    _DAT_12039fb8 = &DAT_11d9d32b;
    _DAT_12039fbc = 0;
    _DAT_12039fc0 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12039fc4,local_18,"DoSpawn",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(local_18);
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_1203a088 & 2) == 0) {
    DAT_1203a088 = DAT_1203a088 | 2;
    _DAT_1203a08c = "Spawned";
    uRam1203a090 = 0;
    puRam1203a094 = &DAT_11d9d32b;
    uRam1203a098 = 1;
    _DAT_1203a09c = 0;
    uRam1203a0a0 = 0;
    uRam1203a0a4 = 0;
    uRam1203a0a8 = 0;
  }
  *param_1 = &DAT_12039fb0;
  param_1[1] = &DAT_1203a08c;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e98ed0 @ 10e98ed0  size=319 ===== */
// strings:
//   "DoSpawn"
//   "Spawned"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""DoSpawn""
     ""Spawned"" */

void FUN_10e98ed0(undefined4 *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_1203a420 & 1) == 0) {
    DAT_1203a420 = DAT_1203a420 | 1;
    _DAT_1203a318 = "DoSpawn";
    _DAT_1203a31c = 0;
    _DAT_1203a320 = &DAT_11d9d32b;
    _DAT_1203a324 = 0;
    _DAT_1203a328 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203a32c,local_18,"DoSpawn",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(local_18);
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_1203a420 & 2) == 0) {
    DAT_1203a420 = DAT_1203a420 | 2;
    _DAT_1203a424 = "Spawned";
    uRam1203a428 = 0;
    puRam1203a42c = &DAT_11d9d32b;
    uRam1203a430 = 1;
    _DAT_1203a434 = 0;
    uRam1203a438 = 0;
    uRam1203a43c = 0;
    uRam1203a440 = 0;
  }
  *param_1 = &DAT_1203a318;
  param_1[1] = &DAT_1203a424;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e994c0 @ 10e994c0  size=319 ===== */
// strings:
//   "DoSpawn"
//   "Spawned"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""DoSpawn""
     ""Spawned"" */

void FUN_10e994c0(undefined4 *param_1)

{
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_12039f88 & 1) == 0) {
    DAT_12039f88 = DAT_12039f88 | 1;
    _DAT_12039e98 = "DoSpawn";
    _DAT_12039e9c = 0;
    _DAT_12039ea0 = &DAT_11d9d32b;
    _DAT_12039ea4 = 0;
    _DAT_12039ea8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12039eac,local_18,"DoSpawn",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(local_18);
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_12039f88 & 2) == 0) {
    DAT_12039f88 = DAT_12039f88 | 2;
    _DAT_12039f8c = "Spawned";
    uRam12039f90 = 0;
    puRam12039f94 = &DAT_11d9d32b;
    uRam12039f98 = 1;
    _DAT_12039f9c = 0;
    uRam12039fa0 = 0;
    uRam12039fa4 = 0;
    uRam12039fa8 = 0;
  }
  *param_1 = &DAT_12039e98;
  param_1[1] = &DAT_12039f8c;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e99a40 @ 10e99a40  size=3733 ===== */
// strings:
//   "Enable"
//   "Disable"
//   "DoSpawn"
//   "regionSpawnPoints"
//   "AddRegionSpawnPoints"
//   "AddSpawnPoint"
//   "ClearSpawnPoints"
//   "mhoMonsterInfoId_monsterID"
//   "defaultMonsterWeight"
//   "monsterGroup"
//   "monsterList"
//   "mhoMonsterInfoId_AddMonster"
//   "AddMonsterGroup"
//   "AddMonsterList"
//   "ClearMonsters"
//   "spawnAmountMin"
//   "spawnAmountMax"
//   "firstSpawnDelay"
//   "respawnAmount"
//   "respawnDelayMin"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""Disable""
     ""DoSpawn""
     ""regionSpawnPoints""
     ""AddRegionSpawnPoints""
     ""AddSpawnPoint""
     ""ClearSpawnPoints""
     ""mhoMonsterInfoId_monsterID""
     ""defaultMonsterWeight""
     ""monsterGroup"" */

void FUN_10e99a40(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_230 [4];
  char *local_22c;
  undefined4 local_228;
  undefined1 *local_224;
  undefined4 local_220;
  undefined4 *local_21c;
  undefined1 local_218 [4];
  char *local_214;
  undefined4 local_210;
  undefined1 *local_20c;
  undefined4 local_208;
  undefined4 *local_204;
  undefined1 local_200 [4];
  char *local_1fc;
  undefined4 local_1f8;
  undefined1 *local_1f4;
  undefined4 local_1f0;
  undefined4 *local_1ec;
  undefined1 local_1e8 [4];
  char *local_1e4;
  undefined4 local_1e0;
  undefined1 *local_1dc;
  undefined1 *local_1d8;
  undefined *local_1d4;
  undefined4 local_1d0;
  char *local_1cc;
  undefined4 local_1c8;
  undefined1 *local_1c4;
  undefined1 *local_1c0;
  undefined *local_1bc;
  undefined4 local_1b8;
  char *local_1b4;
  undefined4 local_1b0;
  undefined1 *local_1ac;
  undefined4 local_1a8;
  undefined *local_1a4;
  undefined4 local_1a0;
  char *local_19c;
  undefined4 local_198;
  undefined1 *local_194;
  undefined1 *local_190;
  undefined *local_18c;
  undefined4 local_188;
  char *local_184;
  undefined4 local_180;
  undefined1 *local_17c;
  undefined4 local_178;
  undefined *local_174;
  undefined4 local_170;
  char *local_16c;
  undefined4 local_168;
  undefined1 *local_164;
  undefined4 local_160;
  undefined *local_15c;
  undefined4 local_158;
  char *local_154;
  undefined4 local_150;
  undefined1 *local_14c;
  undefined4 local_148;
  undefined *local_144;
  undefined4 local_140;
  char *local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  undefined4 local_130;
  undefined *local_12c;
  undefined4 local_128;
  char *local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  undefined1 *local_118;
  undefined *local_114;
  undefined4 local_110;
  char *local_10c;
  undefined4 local_108;
  undefined1 *local_104;
  undefined4 local_100;
  undefined *local_fc;
  undefined4 local_f8;
  char *local_f4;
  undefined4 local_f0;
  undefined1 *local_ec;
  undefined4 local_e8;
  undefined *local_e4;
  undefined4 local_e0;
  char *local_dc;
  undefined4 local_d8;
  undefined1 *local_d4;
  undefined1 *local_d0;
  undefined *local_cc;
  undefined4 local_c8;
  char *local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined *local_b4;
  undefined4 local_b0;
  char *local_ac;
  undefined4 local_a8;
  undefined1 *local_a4;
  undefined4 local_a0;
  undefined *local_9c;
  undefined4 local_98;
  char *local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined *local_84;
  undefined4 local_80;
  char *local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined *local_6c;
  undefined4 local_68;
  char *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined *local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined1 *puStack_8;
  
  if ((DAT_12039e70 & 1) == 0) {
    DAT_12039e70 = DAT_12039e70 | 1;
    local_1fc = "Enable";
    local_1f8 = 0;
    local_1f4 = &DAT_11d9d32b;
    local_1f0 = 0;
    local_1ec = &DAT_11df7728;
    _DAT_12039c18 = "Enable";
    _DAT_12039c1c = 0;
    _DAT_12039c20 = &DAT_11d9d32b;
    _DAT_12039c24 = 0;
    _DAT_12039c28 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12039c2c,local_1e8);
    (**(code **)(((uint)local_1ec & 0xfffffffc) + 4))(local_1e8);
    local_22c = "Disable";
    local_228 = 0;
    local_224 = &DAT_11d9d32b;
    local_220 = 0;
    local_21c = &DAT_11df7728;
    _DAT_12039c30 = "Disable";
    _DAT_12039c34 = 0;
    _DAT_12039c38 = &DAT_11d9d32b;
    _DAT_12039c3c = 0;
    _DAT_12039c40 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12039c44,local_218);
    (**(code **)(((uint)local_21c & 0xfffffffc) + 4))(local_218);
    local_13c = "DoSpawn";
    local_138 = 0;
    local_134 = &DAT_11d9d32b;
    local_12c = &DAT_11df7669;
    _DAT_12039c58 = &DAT_11df7669;
    local_130 = 0;
    local_128 = 0;
    _DAT_12039c48 = "DoSpawn";
    _DAT_12039c4c = 0;
    _DAT_12039c50 = &DAT_11d9d32b;
    _DAT_12039c54 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039c5c,&local_128);
    (**(code **)(((uint)local_12c & 0xfffffffc) + 4))(&local_128);
    local_7c = "regionSpawnPoints";
    local_78 = 0;
    local_74 = &DAT_11d9d32b;
    local_70 = 0;
    local_68 = 0xffffffff;
    _DAT_12039c60 = "regionSpawnPoints";
    local_6c = &DAT_11df7669;
    _DAT_12039c70 = &DAT_11df7669;
    _DAT_12039c64 = 0;
    _DAT_12039c68 = &DAT_11d9d32b;
    _DAT_12039c6c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039c74,&local_68);
    (**(code **)(((uint)local_6c & 0xfffffffc) + 4))(&local_68);
    local_16c = "AddRegionSpawnPoints";
    local_168 = 0;
    local_15c = &DAT_11df7669;
    _DAT_12039c88 = &DAT_11df7669;
    local_164 = &DAT_11d9d32b;
    local_160 = 0;
    local_158 = 0;
    _DAT_12039c78 = "AddRegionSpawnPoints";
    _DAT_12039c7c = 0;
    _DAT_12039c80 = &DAT_11d9d32b;
    _DAT_12039c84 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039c8c,&local_158);
    (**(code **)(((uint)local_15c & 0xfffffffc) + 4))(&local_158);
    local_ac = "AddSpawnPoint";
    local_a8 = 0;
    local_9c = &DAT_11df76c9;
    _DAT_12039ca0 = &DAT_11df76c9;
    local_a4 = &DAT_11d9d32b;
    local_a0 = 0;
    local_98 = 0;
    _DAT_12039c90 = "AddSpawnPoint";
    _DAT_12039c94 = 0;
    _DAT_12039c98 = &DAT_11d9d32b;
    _DAT_12039c9c = 0;
    (*(code *)PTR_FUN_11df76d4)(&DAT_12039ca4,&local_98);
    (**(code **)(((uint)local_9c & 0xfffffffc) + 4))(&local_98);
    local_214 = "ClearSpawnPoints";
    local_210 = 0;
    local_20c = &DAT_11d9d32b;
    local_208 = 0;
    local_204 = &DAT_11df7728;
    _DAT_12039ca8 = "ClearSpawnPoints";
    _DAT_12039cac = 0;
    _DAT_12039cb0 = &DAT_11d9d32b;
    _DAT_12039cb4 = 0;
    _DAT_12039cb8 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12039cbc,local_200);
    (**(code **)(((uint)local_204 & 0xfffffffc) + 4))(local_200);
    local_1b4 = "mhoMonsterInfoId_monsterID";
    local_1b0 = 0;
    local_1a4 = &DAT_11df7669;
    _DAT_12039cd0 = &DAT_11df7669;
    local_1ac = &DAT_11d9d32b;
    local_1a8 = 0;
    local_1a0 = 0xffffffff;
    _DAT_12039cc0 = "mhoMonsterInfoId_monsterID";
    _DAT_12039cc4 = 0;
    _DAT_12039cc8 = &DAT_11d9d32b;
    _DAT_12039ccc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039cd4,&local_1a0);
    (**(code **)(((uint)local_1a4 & 0xfffffffc) + 4))(&local_1a0);
    local_dc = "defaultMonsterWeight";
    local_d8 = 0;
    local_cc = &DAT_11df7669;
    _DAT_12039ce8 = &DAT_11df7669;
    local_d4 = &DAT_11d9d32b;
    local_d0 = &DAT_11d9d32b;
    local_c8 = 100;
    _DAT_12039cd8 = "defaultMonsterWeight";
    _DAT_12039cdc = 0;
    _DAT_12039ce0 = &DAT_11d9d32b;
    _DAT_12039ce4 = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039cec,&local_c8);
    (**(code **)(((uint)local_cc & 0xfffffffc) + 4))(&local_c8);
    local_19c = "monsterGroup";
    local_198 = 0;
    local_18c = &DAT_11df7669;
    _DAT_12039d00 = &DAT_11df7669;
    local_194 = &DAT_11d9d32b;
    local_190 = &DAT_11d9d32b;
    local_188 = 0xffffffff;
    _DAT_12039cf0 = "monsterGroup";
    _DAT_12039cf4 = 0;
    _DAT_12039cf8 = &DAT_11d9d32b;
    _DAT_12039cfc = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039d04,&local_188);
    (**(code **)(((uint)local_18c & 0xfffffffc) + 4))(&local_188);
    local_1c = "monsterList";
    local_18 = 0;
    local_14 = &DAT_11d9d32b;
    uStack_10 = 0;
    uStack_c = 0;
    puStack_8 = &DAT_1201fc98;
    if (-1 < DAT_1201fc8c) {
      FUN_10c3dab0(&DAT_1201fc8c);
    }
    uStack_c = uStack_c & 3 | 0x11df76e9;
    if (-1 < DAT_1201fc8c) {
      iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
      if (iVar1 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
      }
    }
    _DAT_12039d08 = local_1c;
    _DAT_12039d0c = local_18;
    _DAT_12039d10 = local_14;
    _DAT_12039d14 = uStack_10;
    _DAT_12039d18 = uStack_c;
    (**(code **)((uStack_c & 0xfffffffc) + 0xc))(&DAT_12039d1c,&puStack_8);
    (**(code **)((uStack_c & 0xfffffffc) + 4))(&puStack_8);
    local_10c = "mhoMonsterInfoId_AddMonster";
    local_108 = 0;
    local_fc = &DAT_11df7669;
    _DAT_12039d30 = &DAT_11df7669;
    local_104 = &DAT_11d9d32b;
    local_100 = 0;
    local_f8 = 0;
    _DAT_12039d20 = "mhoMonsterInfoId_AddMonster";
    _DAT_12039d24 = 0;
    _DAT_12039d28 = &DAT_11d9d32b;
    _DAT_12039d2c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039d34,&local_f8);
    (**(code **)(((uint)local_fc & 0xfffffffc) + 4))(&local_f8);
    local_1e4 = "AddMonsterGroup";
    local_1e0 = 0;
    local_1d4 = &DAT_11df7669;
    _DAT_12039d48 = &DAT_11df7669;
    local_1dc = &DAT_11d9d32b;
    local_1d8 = &DAT_11d9d32b;
    local_1d0 = 0;
    _DAT_12039d38 = "AddMonsterGroup";
    _DAT_12039d3c = 0;
    _DAT_12039d40 = &DAT_11d9d32b;
    _DAT_12039d44 = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039d4c,&local_1d0);
    (**(code **)(((uint)local_1d4 & 0xfffffffc) + 4))(&local_1d0);
    local_34 = "AddMonsterList";
    local_30 = 0;
    local_2c = &DAT_11d9d32b;
    local_28 = 0;
    local_24 = 0;
    local_20 = &DAT_1201fc98;
    if (-1 < DAT_1201fc8c) {
      FUN_10c3dab0(&DAT_1201fc8c);
    }
    local_24 = local_24 & 3 | 0x11df76e9;
    if (-1 < DAT_1201fc8c) {
      iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
      if (iVar1 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
      }
    }
    _DAT_12039d50 = local_34;
    _DAT_12039d54 = local_30;
    _DAT_12039d58 = local_2c;
    _DAT_12039d5c = local_28;
    _DAT_12039d60 = local_24;
    (**(code **)((local_24 & 0xfffffffc) + 0xc))(&DAT_12039d64,&local_20);
    (**(code **)((local_24 & 0xfffffffc) + 4))(&local_20);
    _DAT_12039d68 = "ClearMonsters";
    _DAT_12039d6c = 0;
    _DAT_12039d70 = &DAT_11d9d32b;
    _DAT_12039d74 = 0;
    _DAT_12039d78 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_12039d7c,local_230);
    (*(code *)PTR_FUN_11df772c)(local_230);
    local_4c = "spawnAmountMin";
    local_48 = 0;
    local_3c = &DAT_11df7669;
    _DAT_12039d90 = &DAT_11df7669;
    local_44 = &DAT_11d9d32b;
    local_40 = &DAT_11d9d32b;
    local_38 = 1;
    _DAT_12039d80 = "spawnAmountMin";
    _DAT_12039d84 = 0;
    _DAT_12039d88 = &DAT_11d9d32b;
    _DAT_12039d8c = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039d94,&local_38);
    (**(code **)(((uint)local_3c & 0xfffffffc) + 4))(&local_38);
    local_1cc = "spawnAmountMax";
    local_1c8 = 0;
    local_1c4 = &DAT_11d9d32b;
    local_1c0 = &DAT_11d9d32b;
    local_1b8 = 0xffffffff;
    local_1bc = &DAT_11df7669;
    _DAT_12039d98 = "spawnAmountMax";
    _DAT_12039d9c = 0;
    _DAT_12039da0 = &DAT_11d9d32b;
    _DAT_12039da4 = &DAT_11d9d32b;
    _DAT_12039da8 = &DAT_11df7669;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039dac,&local_1b8);
    (**(code **)(((uint)local_1bc & 0xfffffffc) + 4))(&local_1b8);
    local_64 = "firstSpawnDelay";
    local_60 = 0;
    local_54 = &DAT_11df7669;
    _DAT_12039dc0 = &DAT_11df7669;
    local_5c = &DAT_11d9d32b;
    local_58 = 0;
    local_50 = 0;
    _DAT_12039db0 = "firstSpawnDelay";
    _DAT_12039db4 = 0;
    _DAT_12039db8 = &DAT_11d9d32b;
    _DAT_12039dbc = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039dc4,&local_50);
    (**(code **)(((uint)local_54 & 0xfffffffc) + 4))(&local_50);
    local_94 = "respawnAmount";
    local_90 = 0;
    local_84 = &DAT_11df7669;
    _DAT_12039dd8 = &DAT_11df7669;
    local_8c = &DAT_11d9d32b;
    local_88 = &DAT_11d9d32b;
    local_80 = 0xffffffff;
    _DAT_12039dc8 = "respawnAmount";
    _DAT_12039dcc = 0;
    _DAT_12039dd0 = &DAT_11d9d32b;
    _DAT_12039dd4 = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039ddc,&local_80);
    (**(code **)(((uint)local_84 & 0xfffffffc) + 4))(&local_80);
    local_c4 = "respawnDelayMin";
    local_c0 = 0;
    local_b4 = &DAT_11df7669;
    _DAT_12039df0 = &DAT_11df7669;
    local_bc = &DAT_11d9d32b;
    local_b8 = 0;
    local_b0 = 0;
    _DAT_12039de0 = "respawnDelayMin";
    _DAT_12039de4 = 0;
    _DAT_12039de8 = &DAT_11d9d32b;
    _DAT_12039dec = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039df4,&local_b0);
    (**(code **)(((uint)local_b4 & 0xfffffffc) + 4))(&local_b0);
    local_f4 = "respawnDelayMax";
    local_f0 = 0;
    local_e4 = &DAT_11df7669;
    _DAT_12039e08 = &DAT_11df7669;
    local_ec = &DAT_11d9d32b;
    local_e8 = 0;
    local_e0 = 0;
    _DAT_12039df8 = "respawnDelayMax";
    _DAT_12039dfc = 0;
    _DAT_12039e00 = &DAT_11d9d32b;
    _DAT_12039e04 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039e0c,&local_e0);
    (**(code **)(((uint)local_e4 & 0xfffffffc) + 4))(&local_e0);
    local_124 = "scale";
    local_120 = 0;
    local_11c = &DAT_11d9d32b;
    local_114 = &DAT_11df7689;
    _DAT_12039e20 = &DAT_11df7689;
    local_118 = &DAT_11d9d32b;
    local_110 = 0;
    _DAT_12039e10 = "scale";
    _DAT_12039e14 = 0;
    _DAT_12039e18 = &DAT_11d9d32b;
    _DAT_12039e1c = &DAT_11d9d32b;
    (*(code *)PTR_FUN_11df7694)(&DAT_12039e24,&local_110);
    (**(code **)(((uint)local_114 & 0xfffffffc) + 4))(&local_110);
    local_154 = "StrengthID";
    local_144 = &DAT_11df7669;
    _DAT_12039e38 = &DAT_11df7669;
    local_150 = 0;
    local_14c = &DAT_11d9d32b;
    local_148 = 0;
    local_140 = 0;
    _DAT_12039e28 = "StrengthID";
    _DAT_12039e2c = 0;
    _DAT_12039e30 = &DAT_11d9d32b;
    _DAT_12039e34 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_12039e3c,&local_140);
    (**(code **)(((uint)local_144 & 0xfffffffc) + 4))(&local_140);
    local_184 = "StrengthRatio";
    local_174 = &DAT_11df7689;
    DAT_12039e50 = &DAT_11df7689;
    local_180 = 0;
    local_17c = &DAT_11d9d32b;
    local_178 = 0;
    local_170 = 0x3f800000;
    _DAT_12039e40 = "StrengthRatio";
    _DAT_12039e44 = 0;
    _DAT_12039e48 = &DAT_11d9d32b;
    _DAT_12039e4c = 0;
    (*(code *)PTR_FUN_11df7694)(&DAT_12039e54,&local_170);
    (**(code **)(((uint)local_174 & 0xfffffffc) + 4))(&local_170);
    DAT_12039e68 = &DAT_11df7728;
    _DAT_12039e58 = 0;
    uRam12039e5c = 0;
    uRam12039e60 = 0;
    uRam12039e64 = 0;
    FUN_11a8911f(&LAB_11c8fb30);
  }
  if ((DAT_12039e70 & 2) == 0) {
    DAT_12039e70 = DAT_12039e70 | 2;
    _DAT_12039e74 = "Spawned";
    uRam12039e78 = 0;
    puRam12039e7c = &DAT_11d9d32b;
    _DAT_12039e80 = 1;
    _DAT_12039e84 = 0;
    uRam12039e88 = 0;
    uRam12039e8c = 0;
    uRam12039e90 = 0;
  }
  *param_1 = &DAT_12039c18;
  param_1[1] = &DAT_12039e74;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10e9ad80 @ 10e9ad80  size=78 ===== */
// calls: CLevelSpawnBatchInfo::FindInfoByKey
// strings:
//   "CLevelSpawnBatchInfo"

/* [RE-AUTO c0]
   calls: CLevelSpawnBatchInfo::GetManagers
   strings:
     ""CLevelSpawnBatchInfo"" */

undefined4 FUN_10e9ad80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CLevelSpawnBatchInfo__FindInfoByKey(0,"CLevelSpawnBatchInfo",0);
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



/* ===== FUN_10e9b010 @ 10e9b010  size=78 ===== */
// calls: CSpawnMonsterGroupInfo::GetInfoManager
// strings:
//   "CSpawnMonsterGroupInfo"

/* [RE-AUTO c0]
   calls: CSpawnMonsterGroupInfo::GetManagers
   strings:
     ""CSpawnMonsterGroupInfo"" */

undefined4 FUN_10e9b010(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CSpawnMonsterGroupInfo__GetInfoManager(0,"CSpawnMonsterGroupInfo",0);
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



/* ===== FUN_10e9e840 @ 10e9e840  size=745 ===== */
// strings:
//   "Enable"
//   "Disable"
//   "Faction"
//   "SpawnSupply"
//   "Supplier"
//   "Monster ID"
//   "OnEmpty"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Enable""
     ""Disable""
     ""Faction""
     ""SpawnSupply""
     ""Supplier""
     ""Monster ID""
     ""OnEmpty"" */

void FUN_10e9e840(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_1203a688 & 1) == 0) {
    DAT_1203a688 = DAT_1203a688 | 1;
    _DAT_1203a620 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203a610 = "Enable";
    _DAT_1203a614 = 0;
    _DAT_1203a618 = &DAT_11d9d32b;
    _DAT_1203a61c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203a624,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_1203a638 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203a628 = "Disable";
    _DAT_1203a62c = 0;
    _DAT_1203a630 = &DAT_11d9d32b;
    _DAT_1203a634 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203a63c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    _DAT_1203a650 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203a640 = "Faction";
    _DAT_1203a644 = 0;
    _DAT_1203a648 = &DAT_11d9d32b;
    _DAT_1203a64c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203a654,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203a668 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203a658 = "SpawnSupply";
    _DAT_1203a65c = 0;
    _DAT_1203a660 = &DAT_11d9d32b;
    _DAT_1203a664 = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203a66c,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203a680 = &DAT_11df7728;
    _DAT_1203a670 = 0;
    uRam1203a674 = 0;
    uRam1203a678 = 0;
    uRam1203a67c = 0;
    FUN_11a8911f(&LAB_11c8fc90);
  }
  *param_1 = &DAT_1203a610;
  if ((DAT_1203a688 & 2) == 0) {
    DAT_1203a688 = DAT_1203a688 | 2;
    _DAT_1203a690 = "Supplier";
    uRam1203a694 = 0;
    _DAT_1203a698 = &DAT_11d9d32b;
    uRam1203a69c = 1;
    _DAT_1203a6a0 = "Monster ID";
    uRam1203a6a4 = 0;
    puRam1203a6a8 = &DAT_11d9d32b;
    uRam1203a6ac = 1;
    _DAT_1203a6b0 = "OnEmpty";
    uRam1203a6b4 = 0;
    puRam1203a6b8 = &DAT_11d9d32b;
    uRam1203a6bc = 6;
    _DAT_1203a6c0 = 0;
    uRam1203a6c4 = 0;
    uRam1203a6c8 = 0;
    uRam1203a6cc = 0;
  }
  param_1[1] = &DAT_1203a690;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff02f | 0x20;
  return;
}



/* ===== FUN_10ea1ab0 @ 10ea1ab0  size=1284 ===== */
// strings:
//   "modelGroupID"
//   "moduleType"
//   "useItemID"
//   "useItemNum"
//   "targetMonsterID"
//   "killMonsterCount"
//   "monsterPartName"
//   "monsterBreakLev"
//   "monsterStateAbnormal"
//   "spawnGroupID"
//   "msgID"
//   "targMsgID"
//   "monsterBuff1"
//   "monsterBuff2"
//   "monsterBuff3"
//   "logic"
//   "targetMonsterID2"
//   "killTargetMonsterCount2"
//   "monsterPartName2"
//   "monsterBreakLev2"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""modelGroupID""
     ""moduleType""
     ""useItemID""
     ""useItemNum""
     ""targetMonsterID""
     ""killMonsterCount""
     ""monsterPartName""
     ""monsterBreakLev""
     ""monsterStateAbnormal""
     ""spawnGroupID"" */

void FUN_10ea1ab0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_1203a8a0 & 1) == 0) {
    DAT_1203a8a0 = DAT_1203a8a0 | 1;
    DAT_1203a880 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203a870 = "modelGroupID";
    _DAT_1203a874 = 0;
    _DAT_1203a878 = &DAT_11d9d32b;
    _DAT_1203a87c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203a884,&uStack_8,"modelGroupID",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203a898 = &DAT_11df7728;
    _DAT_1203a888 = 0;
    uRam1203a88c = 0;
    uRam1203a890 = 0;
    uRam1203a894 = 0;
    FUN_11a8911f(&LAB_11c8ffc0);
  }
  if ((DAT_1203a8a0 & 2) == 0) {
    DAT_1203a8a0 = DAT_1203a8a0 | 2;
    _DAT_1203a8a8 = "moduleType";
    uRam1203a8ac = 0;
    _DAT_1203a8b0 = &DAT_11d9d32b;
    uRam1203a8b4 = 1;
    _DAT_1203a8b8 = "useItemID";
    uRam1203a8bc = 0;
    puRam1203a8c0 = &DAT_11d9d32b;
    uRam1203a8c4 = 1;
    _DAT_1203a8c8 = "useItemNum";
    uRam1203a8cc = 0;
    puRam1203a8d0 = &DAT_11d9d32b;
    uRam1203a8d4 = 1;
    _DAT_1203a8d8 = "targetMonsterID";
    uRam1203a8dc = 0;
    puRam1203a8e0 = &DAT_11d9d32b;
    uRam1203a8e4 = 1;
    _DAT_1203a8e8 = "killMonsterCount";
    uRam1203a8ec = 0;
    puRam1203a8f0 = &DAT_11d9d32b;
    uRam1203a8f4 = 1;
    _DAT_1203a8f8 = "monsterPartName";
    uRam1203a8fc = 0;
    puRam1203a900 = &DAT_11d9d32b;
    uRam1203a904 = 5;
    _DAT_1203a908 = "monsterBreakLev";
    uRam1203a90c = 0;
    puRam1203a910 = &DAT_11d9d32b;
    uRam1203a914 = 1;
    _DAT_1203a918 = "monsterStateAbnormal";
    uRam1203a91c = 0;
    puRam1203a920 = &DAT_11d9d32b;
    uRam1203a924 = 1;
    _DAT_1203a928 = "spawnGroupID";
    uRam1203a92c = 0;
    puRam1203a930 = &DAT_11d9d32b;
    uRam1203a934 = 1;
    _DAT_1203a938 = "msgID";
    uRam1203a93c = 0;
    puRam1203a940 = &DAT_11d9d32b;
    uRam1203a944 = 1;
    _DAT_1203a948 = "targMsgID";
    uRam1203a94c = 0;
    puRam1203a950 = &DAT_11d9d32b;
    uRam1203a954 = 1;
    _DAT_1203a958 = "monsterBuff1";
    uRam1203a95c = 0;
    puRam1203a960 = &DAT_11d9d32b;
    uRam1203a964 = 1;
    _DAT_1203a968 = "monsterBuff2";
    uRam1203a96c = 0;
    puRam1203a970 = &DAT_11d9d32b;
    uRam1203a974 = 1;
    _DAT_1203a978 = "monsterBuff3";
    uRam1203a97c = 0;
    puRam1203a980 = &DAT_11d9d32b;
    uRam1203a984 = 1;
    _DAT_1203a988 = "logic";
    uRam1203a98c = 0;
    puRam1203a990 = &DAT_11d9d32b;
    uRam1203a994 = 1;
    _DAT_1203a998 = "targetMonsterID2";
    uRam1203a99c = 0;
    puRam1203a9a0 = &DAT_11d9d32b;
    uRam1203a9a4 = 1;
    _DAT_1203a9a8 = "killTargetMonsterCount2";
    uRam1203a9ac = 0;
    puRam1203a9b0 = &DAT_11d9d32b;
    uRam1203a9b4 = 1;
    _DAT_1203a9b8 = "monsterPartName2";
    uRam1203a9bc = 0;
    puRam1203a9c0 = &DAT_11d9d32b;
    uRam1203a9c4 = 5;
    _DAT_1203a9c8 = "monsterBreakLev2";
    uRam1203a9cc = 0;
    puRam1203a9d0 = &DAT_11d9d32b;
    uRam1203a9d4 = 1;
    _DAT_1203a9d8 = "targMsgID2";
    uRam1203a9dc = 0;
    puRam1203a9e0 = &DAT_11d9d32b;
    uRam1203a9e4 = 1;
    _DAT_1203a9e8 = "wrongHitCheck";
    uRam1203a9ec = 0;
    puRam1203a9f0 = &DAT_11d9d32b;
    uRam1203a9f4 = 1;
    _DAT_1203a9f8 = "time1";
    uRam1203a9fc = 0;
    puRam1203aa00 = &DAT_11d9d32b;
    uRam1203aa04 = 1;
    _DAT_1203aa08 = "time2";
    uRam1203aa0c = 0;
    puRam1203aa10 = &DAT_11d9d32b;
    uRam1203aa14 = 1;
    _DAT_1203aa18 = "time3";
    uRam1203aa1c = 0;
    puRam1203aa20 = &DAT_11d9d32b;
    uRam1203aa24 = 1;
    _DAT_1203aa28 = "alertMsgID";
    uRam1203aa2c = 0;
    puRam1203aa30 = &DAT_11d9d32b;
    uRam1203aa34 = 1;
    _DAT_1203aa38 = 0;
    uRam1203aa3c = 0;
    uRam1203aa40 = 0;
    uRam1203aa44 = 0;
  }
  *param_1 = &DAT_1203a870;
  param_1[1] = &DAT_1203a8a8;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10ea1fc0 @ 10ea1fc0  size=1242 ===== */
// strings:
//   "enable"
//   "spawnGroupID"
//   "monsterID"
//   "monsterCount"
//   "spawnRegionID"
//   "delay"
//   "respawnAmount"
//   "respawnDelay"
//   "scale"
//   "monsterID2"
//   "monsterCount2"
//   "spawnRegionID2"
//   "delay2"
//   "respawnAmount2"
//   "respawnDelay2"
//   "scale2"
//   "monsterID3"
//   "monsterCount3"
//   "spawnRegionID3"
//   "delay3"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""enable""
     ""spawnGroupID""
     ""monsterID""
     ""monsterCount""
     ""spawnRegionID""
     ""delay""
     ""respawnAmount""
     ""respawnDelay""
     ""scale""
     ""monsterID2"" */

void FUN_10ea1fc0(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  if ((DAT_1203ab60 & 1) == 0) {
    DAT_1203ab60 = DAT_1203ab60 | 1;
    _DAT_1203ab18 = "enable";
    _DAT_1203ab1c = 0;
    _DAT_1203ab20 = &DAT_11d9d32b;
    _DAT_1203ab24 = 0;
    _DAT_1203ab28 = &DAT_11df7728;
    (*(code *)PTR_FUN_11df7734)(&DAT_1203ab2c,&uStack_8,"enable",0,&DAT_11d9d32b,0);
    (*(code *)PTR_FUN_11df772c)(&uStack_8);
    DAT_1203ab40 = &DAT_11df7669;
    uStack_8 = 0;
    _DAT_1203ab30 = "spawnGroupID";
    _DAT_1203ab34 = 0;
    _DAT_1203ab38 = &DAT_11d9d32b;
    _DAT_1203ab3c = 0;
    (*(code *)PTR_FUN_11df7674)(&DAT_1203ab44,&uStack_8);
    (*(code *)PTR_FUN_11df766c)(&uStack_8);
    DAT_1203ab58 = &DAT_11df7728;
    _DAT_1203ab48 = 0;
    uRam1203ab4c = 0;
    uRam1203ab50 = 0;
    uRam1203ab54 = 0;
    FUN_11a8911f(&LAB_11c8fff0);
  }
  if ((DAT_1203ab60 & 2) == 0) {
    DAT_1203ab60 = DAT_1203ab60 | 2;
    _DAT_1203ab68 = "monsterID";
    uRam1203ab6c = 0;
    _DAT_1203ab70 = &DAT_11d9d32b;
    uRam1203ab74 = 1;
    _DAT_1203ab78 = "monsterCount";
    uRam1203ab7c = 0;
    puRam1203ab80 = &DAT_11d9d32b;
    uRam1203ab84 = 1;
    _DAT_1203ab88 = "spawnRegionID";
    uRam1203ab8c = 0;
    puRam1203ab90 = &DAT_11d9d32b;
    uRam1203ab94 = 1;
    _DAT_1203ab98 = "delay";
    uRam1203ab9c = 0;
    puRam1203aba0 = &DAT_11d9d32b;
    uRam1203aba4 = 1;
    _DAT_1203aba8 = "respawnAmount";
    uRam1203abac = 0;
    puRam1203abb0 = &DAT_11d9d32b;
    uRam1203abb4 = 1;
    _DAT_1203abb8 = "respawnDelay";
    uRam1203abbc = 0;
    puRam1203abc0 = &DAT_11d9d32b;
    uRam1203abc4 = 1;
    _DAT_1203abc8 = "scale";
    uRam1203abcc = 0;
    puRam1203abd0 = &DAT_11d9d32b;
    uRam1203abd4 = 2;
    _DAT_1203abd8 = "monsterID2";
    uRam1203abdc = 0;
    puRam1203abe0 = &DAT_11d9d32b;
    uRam1203abe4 = 1;
    _DAT_1203abe8 = "monsterCount2";
    uRam1203abec = 0;
    puRam1203abf0 = &DAT_11d9d32b;
    uRam1203abf4 = 1;
    _DAT_1203abf8 = "spawnRegionID2";
    uRam1203abfc = 0;
    puRam1203ac00 = &DAT_11d9d32b;
    uRam1203ac04 = 1;
    _DAT_1203ac08 = "delay2";
    uRam1203ac0c = 0;
    puRam1203ac10 = &DAT_11d9d32b;
    uRam1203ac14 = 1;
    _DAT_1203ac18 = "respawnAmount2";
    uRam1203ac1c = 0;
    puRam1203ac20 = &DAT_11d9d32b;
    uRam1203ac24 = 1;
    _DAT_1203ac28 = "respawnDelay2";
    uRam1203ac2c = 0;
    puRam1203ac30 = &DAT_11d9d32b;
    uRam1203ac34 = 1;
    _DAT_1203ac38 = "scale2";
    uRam1203ac3c = 0;
    puRam1203ac40 = &DAT_11d9d32b;
    uRam1203ac44 = 2;
    _DAT_1203ac48 = "monsterID3";
    uRam1203ac4c = 0;
    puRam1203ac50 = &DAT_11d9d32b;
    uRam1203ac54 = 1;
    _DAT_1203ac58 = "monsterCount3";
    uRam1203ac5c = 0;
    puRam1203ac60 = &DAT_11d9d32b;
    uRam1203ac64 = 1;
    _DAT_1203ac68 = "spawnRegionID3";
    uRam1203ac6c = 0;
    puRam1203ac70 = &DAT_11d9d32b;
    uRam1203ac74 = 1;
    _DAT_1203ac78 = "delay3";
    uRam1203ac7c = 0;
    puRam1203ac80 = &DAT_11d9d32b;
    uRam1203ac84 = 1;
    _DAT_1203ac88 = "respawnAmount3";
    uRam1203ac8c = 0;
    puRam1203ac90 = &DAT_11d9d32b;
    uRam1203ac94 = 1;
    _DAT_1203ac98 = "respawnDelay3";
    uRam1203ac9c = 0;
    puRam1203aca0 = &DAT_11d9d32b;
    uRam1203aca4 = 1;
    _DAT_1203aca8 = "scale3";
    uRam1203acac = 0;
    puRam1203acb0 = &DAT_11d9d32b;
    uRam1203acb4 = 2;
    _DAT_1203acb8 = 0;
    uRam1203acbc = 0;
    uRam1203acc0 = 0;
    uRam1203acc4 = 0;
  }
  *param_1 = &DAT_1203ab18;
  param_1[1] = &DAT_1203ab68;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x10;
  return;
}



/* ===== FUN_10eb7360 @ 10eb7360  size=492 ===== */
// strings:
//   "archeType"
//   "Success"
//   "SpawnEntityID"
//   "Failed"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""archeType""
     ""Success""
     ""SpawnEntityID""
     ""Failed"" */

void FUN_10eb7360(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puStack_8;
  
  if ((DAT_1203c0a8 & 1) == 0) {
    DAT_1203c0a8 = DAT_1203c0a8 | 1;
    puStack_8 = &DAT_1201fc98;
    if (-1 < DAT_1201fc8c) {
      FUN_10c3dab0(&DAT_1201fc8c);
    }
    if (-1 < DAT_1201fc8c) {
      iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
      if (iVar1 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
      }
    }
    _DAT_1203c030 = "archeType";
    _DAT_1203c034 = &DAT_11d9d32b;
    _DAT_1203c038 = &DAT_11d9d32b;
    _DAT_1203c03c = 0;
    _DAT_1203c040 = 0x11df76e9;
    (*(code *)PTR_FUN_11df76f4)(&DAT_1203c044,&puStack_8);
    (*(code *)PTR_FUN_11df76ec)(&puStack_8);
    puStack_8 = (undefined1 *)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0xc);
  }
  if ((DAT_1203c0a8 & 2) == 0) {
    DAT_1203c0a8 = DAT_1203c0a8 | 2;
    _DAT_1203c0b0 = "Success";
    uRam1203c0b4 = 0;
    puRam1203c0b8 = &DAT_11d9d32b;
    uRam1203c0bc = 6;
    _DAT_1203c0c0 = "SpawnEntityID";
    uRam1203c0c4 = 0;
    puRam1203c0c8 = &DAT_11d9d32b;
    uRam1203c0cc = 3;
    _DAT_1203c0d0 = "Failed";
    uRam1203c0d4 = 0;
    puRam1203c0d8 = &DAT_11d9d32b;
    uRam1203c0dc = 6;
    _DAT_1203c0e0 = 0;
    uRam1203c0e4 = 0;
    uRam1203c0e8 = 0;
    uRam1203c0ec = 0;
  }
  *param_1 = &DAT_1203c030;
  param_1[1] = &DAT_1203c0b0;
  param_1[3] = &DAT_11d9d32b;
  param_1[2] = param_1[2] & 0xfffff01f | 0x11;
  return;
}



/* ===== CPlayer::SpawnParticleEffect @ 10ec8f70  size=88 ===== */
// strings:
//   "CPlayer::SpawnParticleEffect"

/* [RE-AUTO c3]
   id: CPlayer::SpawnParticleEffect
   strings:
     ""CPlayer::SpawnParticleEffect"" */

void CPlayer__SpawnParticleEffect(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_34 [48];
  
  iVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                    (param_1,"CPlayer::SpawnParticleEffect",1,1);
  if (iVar1 != 0) {
    uVar2 = FUN_10b01ff0(local_34,param_2,param_3,0x3f800000,0,0);
    FUN_10a7b9f0(1,uVar2);
  }
  return;
}



/* ===== FUN_10efa380 @ 10efa380  size=248 ===== */
// strings:
//   "perfectDodgeGeometry"
//   "effect"
//   "Particle.SpawnEffect"
//   "Bip01 Spine"

/* [RE-AUTO c0]
   strings:
     ""perfectDodgeGeometry""
     ""effect""
     ""Particle.SpawnEffect""
     ""Bip01 Spine"" */

void __fastcall FUN_10efa380(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(*piVar3 + 0x38))();
  }
  local_8 = (int *)0x0;
  if (iVar4 != 0) {
    cVar2 = FUN_10a68ce0("perfectDodgeGeometry",&local_8);
    piVar3 = local_8;
    if (cVar2 != '\0') {
      local_8 = (int *)0x0;
      cVar2 = FUN_10a68a90("effect",&local_8);
      piVar1 = local_8;
      if (((cVar2 != '\0') && (local_8 != (int *)0x0)) &&
         (iVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                            (local_8,"Particle.SpawnEffect",1,1), iVar4 != 0)) {
        local_14 = 0;
        local_10 = 0;
        local_c = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0x3f800000;
        (**(code **)(**(int **)(param_1 + 0xc) + 0x1e8))
                  (piVar1,"Bip01 Spine",&local_20,&local_14,0x3f800000,0,1,1,0,0);
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
  }
  return;
}



/* ===== CPlayer::SpawnParticleEffect_10f10670 @ 10f10670  size=88 ===== */
// strings:
//   "CPlayer::SpawnParticleEffect"

/* [RE-AUTO c3]
   id: CPlayer::SpawnParticleEffect
   strings:
     ""CPlayer::SpawnParticleEffect"" */

void CPlayer__SpawnParticleEffect_10f10670(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_34 [48];
  
  iVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                    (param_1,"CPlayer::SpawnParticleEffect",1,1);
  if (iVar1 != 0) {
    uVar2 = FUN_10b01ff0(local_34,param_2,param_3,0x3f800000,0,0);
    FUN_10a7b9f0(1,uVar2);
  }
  return;
}



/* ===== FUN_10f9ac10 @ 10f9ac10  size=201 ===== */
// strings:
//   "Particle.SpawnEffect"

/* [RE-AUTO c0]
   strings:
     ""Particle.SpawnEffect"" */

void FUN_10f9ac10(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xa0) != 0)) && (param_1 != (int *)0x0)) &&
     ((FUN_10f9ab90(param_5,param_2), param_3 != 0 &&
      (puVar2 = *(undefined4 **)(param_3 + 0x3c), puVar2 != *(undefined4 **)(param_3 + 0x40))))) {
    puVar3 = puVar2 + 7;
    do {
      iVar1 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                        (*puVar2,"Particle.SpawnEffect",1,1);
      if (iVar1 != 0) {
        local_10 = puVar3[-2];
        local_c = puVar3[-1];
        local_8 = *puVar3;
        (**(code **)(*param_1 + 0x1e8))
                  (*puVar2,puVar3[-6],puVar3 + -5,&local_10,0x3f800000,0,1,1,0,0);
      }
      puVar2 = puVar2 + 0xc;
      puVar3 = puVar3 + 0xc;
    } while (puVar2 != *(undefined4 **)(param_3 + 0x40));
  }
  return;
}



/* ===== FUN_10f9ace0 @ 10f9ace0  size=287 ===== */
// strings:
//   "Particle.SpawnEffect"

/* [RE-AUTO c0]
   strings:
     ""Particle.SpawnEffect"" */

void FUN_10f9ace0(float *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float local_10;
  float local_c;
  float local_8;
  
  piVar2 = (int *)param_1;
  (**(code **)((int)*param_1 + 0x88))();
  if ((-1 < (int)param_2) && (param_2 < (uint)((int)param_1[0x82] - (int)param_1[0x81] >> 7))) {
    pfVar4 = (float *)(param_2 * 0x80 + (int)param_1[0x81]);
    piVar1 = *(int **)(*(int *)((int)param_1[6] + 0x100) + 0xc);
    param_1 = (float *)0x0;
    if (0 < (int)param_2) {
      param_1 = pfVar4 + -0x20;
    }
    if (pfVar4 != (float *)0x0) {
      if (DAT_11de9890 < *pfVar4) {
        iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                          (pfVar4[3],"Particle.SpawnEffect",1,1);
        if (iVar3 != 0) {
          local_10 = pfVar4[8];
          local_c = pfVar4[9];
          local_8 = pfVar4[10];
          (**(code **)(*piVar1 + 0x1e8))
                    (pfVar4[3],pfVar4[4],pfVar4 + 5,&local_10,0x3f800000,0,1,1,0,0);
        }
        FUN_10f9ac10(piVar1,piVar2,pfVar4,piVar2 + 0x85,param_1);
        piVar2[0x84] = param_2;
        return;
      }
      FUN_10f9ab90(param_1,piVar2);
    }
  }
  piVar2[0x84] = param_2;
  return;
}



/* ===== FUN_10f9b480 @ 10f9b480  size=407 ===== */
// strings:
//   "Particle.SpawnEffect"
//   "mh_sharemem_addrinfo"

/* [RE-AUTO c0]
   strings:
     ""Particle.SpawnEffect""
     ""mh_sharemem_addrinfo"" */

void FUN_10f9b480(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined1 *puVar11;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  iVar6 = param_1;
  uVar2 = FUN_10f8be20();
  if ((-1 < (int)uVar2) &&
     (uVar2 < (uint)(*(int *)(param_1 + 0x1f8) - *(int *)(param_1 + 500) >> 7))) {
    local_8 = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0xc);
    local_c = uVar2 * 0x80;
    iVar9 = *(int *)(param_1 + 500) + local_c;
    FUN_10f9ab90(iVar9,param_1);
    param_1 = 0;
    if (0 < (int)uVar2) {
      param_1 = *(int *)(iVar6 + 500) + local_c + -0x80;
    }
    iVar3 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                      (*(undefined4 *)(iVar9 + 0xc),"Particle.SpawnEffect",1,1);
    if (iVar3 != 0) {
      local_18 = *(undefined4 *)(iVar9 + 0x20);
      local_14 = *(undefined4 *)(iVar9 + 0x24);
      local_10 = *(undefined4 *)(iVar9 + 0x28);
      (**(code **)(*local_8 + 0x1e8))
                (*(undefined4 *)(iVar9 + 0xc),*(undefined4 *)(iVar9 + 0x10),iVar9 + 0x14,&local_18,
                 0x3f800000,0,1,1,0,0);
    }
    FUN_10f9ac10(local_8,iVar6,iVar9,iVar6 + 0x200,param_1);
    pbVar4 = *(byte **)(iVar9 + 0x7c);
    pbVar7 = &DAT_11d9d32b;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_10f9b5a2:
        uVar5 = -(uint)bVar10 | 1;
        goto LAB_10f9b5a7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_10f9b5a2;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10f9b5a7:
    if (uVar5 != 0) {
      if (*(int *)(*(int *)(iVar9 + 0x7c) + -0xc) < 0) {
        puVar11 = &DAT_1201fc98;
      }
      else {
        puVar11 = *(undefined1 **)(iVar9 + 0x7c);
        FUN_10c3dab0(puVar11 + -0xc,puVar11);
      }
      FUN_10f570a0(puVar11);
    }
  }
  *(uint *)(iVar6 + 0x210) = uVar2;
  piVar8 = (int *)(param_2 + -0xc);
  if (-1 < *piVar8) {
    iVar6 = FUN_10c3dad0(piVar8);
    if (iVar6 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
      FUN_10c3d900(piVar8);
    }
  }
  return;
}



/* ===== FUN_11004740 @ 11004740  size=485 ===== */
// strings:
//   "Parent"
//   "FileName"
//   "/Scripts/AI/BehaviorTree/"

/* [RE-AUTO c0]
   strings:
     ""Parent""
     ""FileName""
     ""/Scripts/AI/BehaviorTree/"" */

void FUN_11004740(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_228;
  undefined1 *local_224;
  undefined1 local_220 [512];
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar5 = param_1;
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    (**(code **)(*piVar1 + 0x3c))(piVar5);
    piVar1 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x40))(&local_20,piVar5,0);
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)();
    }
    piVar1 = (int *)*piVar1;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 4))();
    }
    if (piVar1 != (int *)0x0) {
      local_14 = &DAT_1201fc98;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_18 = 0;
      piVar2 = piVar5;
      do {
        iVar3 = *piVar2;
        piVar2 = (int *)((int)piVar2 + 1);
      } while ((char)iVar3 != '\0');
      FUN_1083ab70(piVar5,(int)piVar2 - (int)((int)piVar5 + 1));
      FUN_11006250(&local_18);
      (**(code **)(*piVar1 + 0xac))(&param_1,"Parent");
      if (param_1 != (int *)0x0) {
        iVar3 = (**(code **)(*param_1 + 0x7c))("FileName");
        if (iVar3 != 0) {
          uVar4 = FUN_10478770();
          FUN_10a6c4c0(uVar4);
          FUN_10adf180("/Scripts/AI/BehaviorTree/");
          FUN_10adf180(iVar3);
          piVar5 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
          (**(code **)(*piVar5 + 0x3c))(local_224);
          piVar5 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
          piVar5 = (int *)(**(code **)(*piVar5 + 0x40))(&local_1c,local_224,0);
          if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar5)();
          }
          piVar5 = (int *)*piVar5;
          if (local_1c != (int *)0x0) {
            (**(code **)(*local_1c + 4))();
          }
          if (piVar5 != (int *)0x0) {
            local_18 = 0;
            FUN_1083ac30(local_224);
            FUN_11006250(&local_18);
            (**(code **)(*piVar5 + 4))();
          }
          if (local_224 != local_220) {
            DAT_1202015c = DAT_1202015c + (-1 - local_228);
            FUN_10c3d900(local_224);
          }
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 4))();
        }
      }
      FUN_10ae8310();
      (**(code **)(*piVar1 + 4))();
    }
  }
  return;
}



/* ===== FUN_1101b290 @ 1101b290  size=917 ===== */
// calls: CBuffInfo::SerializeHitDamageMessage64, ceil, HitDescriptor::ComputeAttackAttrMask
// strings:
//   "MHOnDamage"
//   "BehaviorTreeBase"
//   "DamageEvent"
//   "EventName"
//   "AttackDir"
//   "HitDamage"
//   "HitPoint"
//   "AttackerID"
//   "AttackAttr"

/* [RE-AUTO c0]
   calls: ceil
   strings:
     ""MHOnDamage""
     ""BehaviorTreeBase""
     ""DamageEvent""
     ""EventName""
     ""AttackDir""
     ""HitDamage""
     ""HitPoint""
     ""AttackerID""
     ""AttackAttr"" */

void __thiscall FUN_1101b290(int param_1,undefined4 *param_2,float *param_3)

{
  float *pfVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined4 uVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  float local_18;
  float fStack_14;
  int *local_c;
  int *local_8;
  
  pfVar1 = param_3;
  pfVar7 = (float *)0x0;
  if (param_3[0x1a] == 1.4013e-45) {
    pfVar7 = param_3 + 0x1a;
  }
  if (param_3[0x1c] == 1.4013e-45) {
    pfVar7 = param_3 + 0x1c;
  }
  if (param_3[0x1e] == 1.4013e-45) {
    pfVar7 = param_3 + 0x1e;
  }
  if (param_3[0x20] == 1.4013e-45) {
    pfVar7 = param_3 + 0x20;
  }
  if ((((param_2[3] != 0) &&
       (piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2[3]),
       piVar3 != (int *)0x0)) &&
      (piVar3 = (int *)(**(code **)(*piVar3 + 0x288))(), piVar3 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar3 + 0xa8))(), iVar4 == 2)) {
    if (pfVar7 == (float *)0x0) {
      pfVar1[0x1b] = (float)((uint)pfVar1[0x1b] | 8);
      pfVar7 = pfVar1 + 0x1a;
    }
    else {
      pfVar7[1] = (float)((uint)pfVar7[1] | 8);
    }
  }
  if (pfVar7 == (float *)0x0) {
    pfVar1[0x1b] = 1.4013e-45;
    pfVar7 = pfVar1 + 0x1a;
  }
  if ((*(uint *)(param_1 + 0x30) & (uint)pfVar7[1]) != 0) {
    iVar4 = FUN_10ba9b00();
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x2d4) != 0)) {
      *(undefined4 **)(*(int *)(iVar4 + 0x2d4) + 0xe8) = param_2;
      FUN_10dc0e00(pfVar1);
    }
    piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
    iVar4 = (**(code **)(*piVar3 + 0xc))(*param_2);
    if (iVar4 != 0) {
      FUN_1101a1f0((undefined4 *)(param_1 + 100),param_2,pfVar1);
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x70))(5,*(undefined4 *)(param_1 + 100),0);
      }
      param_3 = (float *)0x0;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
      if (piVar3 == (int *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x38))();
        local_8 = piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))();
          cVar2 = FUN_10a68b10("MHOnDamage",&param_3);
          if (cVar2 != '\0') {
            CBuffInfo__SerializeHitDamageMessage64(param_1 + 0x68,param_2,pfVar1);
            local_c = piVar3;
            piVar3 = (int *)(**(code **)(*piVar3 + 4))();
            iVar5 = (**(code **)(*piVar3 + 0x40))(param_3);
            if (iVar5 != 0) {
              FUN_10a69900(piVar3,&local_c,param_1 + 0x68);
              (**(code **)(*piVar3 + 0x44))();
            }
          }
        }
      }
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))("BehaviorTreeBase");
      param_3 = (float *)piVar3;
      if (piVar3 != (int *)0x0) {
        FUN_113168d0("DamageEvent");
        (**(code **)(*piVar3 + 0x78))("EventName",local_c);
        piVar3 = *(int **)(param_1 + 0xc);
        puVar6 = (undefined8 *)(**(code **)(**(int **)(iVar4 + 0xc) + 0x94))();
        pfVar7 = (float *)(**(code **)(*piVar3 + 0x94))();
        piVar3 = (int *)param_3;
        local_18 = (float)*puVar6;
        fStack_14 = (float)((ulonglong)*puVar6 >> 0x20);
        (**(code **)((int)*param_3 + 0x7c))
                  ("AttackDir",CONCAT44(pfVar7[1] - fStack_14,*pfVar7 - local_18),
                   pfVar7[2] - *(float *)(puVar6 + 1));
        dVar10 = ceil((double)*pfVar1);
        iVar4 = *piVar3;
        dVar11 = ceil((double)(pfVar1[1] + DAT_11de9890 + pfVar1[2] + pfVar1[3] + pfVar1[4] +
                              pfVar1[5]));
        piVar3 = (int *)param_3;
        (**(code **)(iVar4 + 0x6c))("HitDamage",(int)dVar11 + (int)dVar10);
        (**(code **)(*piVar3 + 0x7c))("HitPoint",*(undefined8 *)(param_2 + 0x14),param_2[0x16]);
        (**(code **)(*piVar3 + 0x70))("AttackerID",*param_2);
        iVar4 = *piVar3;
        uVar8 = HitDescriptor__ComputeAttackAttrMask();
        (**(code **)(iVar4 + 0x6c))("AttackAttr",uVar8);
        if (piVar3[10] != 0) {
          piVar9 = (int *)FUN_100b4ca0(piVar3[9]);
          piVar3[0xb] = (int)piVar9;
          if (piVar9 != (int *)0x0) {
            FUN_104b57b0(0);
            (**(code **)(*piVar9 + 4))(1);
            FUN_104b5770();
          }
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 0xc))();
      }
    }
    return;
  }
  *pfVar1 = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  pfVar1[4] = 0.0;
  pfVar1[5] = 0.0;
  return;
}



/* ===== FUN_11035fb0 @ 11035fb0  size=1739 ===== */
// strings:
//   "TestFunc"
//   "SetBTBlackBoardValueBool"
//   "KeyName,BoolValue"
//   "SetBTBlackBoardValueEntityID"
//   "KeyName,EntityIDValue"
//   "SetBTBlackBoardValueFloat"
//   "KeyName,FloatValue"
//   "SetBTBlackBoardValueString"
//   "KeyName,StringValue"
//   "SetBTBlackBoardValueVec3"
//   "KeyName,Vec3Value"
//   "SetBTBlackBoardValueUint"
//   "KeyName,Uint"
//   "GetBTBlackBoardValueBool"
//   "KeyName"
//   "GetBTBlackBoardValueEntityID"
//   "GetBTBlackBoardValueFloat"
//   "GetBTBlackBoardValueString"
//   "GetBTBlackBoardValueVec3"
//   "LoadEventBehaviorTree"

/* [RE-AUTO c0]
   strings:
     ""TestFunc""
     ""SetBTBlackBoardValueBool""
     ""KeyName,BoolValue""
     ""SetBTBlackBoardValueEntityID""
     ""KeyName,EntityIDValue""
     ""SetBTBlackBoardValueFloat""
     ""KeyName,FloatValue""
     ""SetBTBlackBoardValueString""
     ""KeyName,StringValue""
     ""SetBTBlackBoardValueVec3"" */

undefined4 * __thiscall FUN_11035fb0(undefined4 *param_1,int *param_2)

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
  undefined4 uStack_10;
  undefined4 *puStack_c;
  code *pcStack_8;
  
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11d0a268;
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
  local_14 = (code *)&LAB_11037c95;
  pcStack_8 = FUN_11037e60;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "TestFunc";
    local_34 = (code *)&LAB_11037c95;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11037e60;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110369a0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueBool";
    local_3c = "KeyName,BoolValue";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110367e0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueEntityID";
    local_3c = "KeyName,EntityIDValue";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11036870;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueFloat";
    local_3c = "KeyName,FloatValue";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11036a30;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueString";
    local_3c = "KeyName,StringValue";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11036900;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueVec3";
    local_3c = "KeyName,Vec3Value";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11036ad0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueUint";
    local_3c = "KeyName,Uint";
    local_20 = FUN_11037d80;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11037020;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueBool";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11036d60;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueEntityID";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11036e50;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueFloat";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11037100;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueString";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11036f30;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueVec3";
    local_3c = "KeyName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110371f0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadEventBehaviorTree";
    local_3c = "FileName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11037380;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadBehaviorTree";
    local_3c = "FileName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11037510;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadBlackboard";
    local_3c = "FileName";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110376a0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ClearAllTrees";
    local_3c = "";
    local_20 = FUN_11037d00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110376f0;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "InitBehaviorTrees";
    local_3c = "paramsTable";
    local_20 = FUN_11037de0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11036b30;
    local_34 = (code *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueStringString";
    local_3c = "Name,Value";
    local_20 = FUN_11037d20;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = FUN_110377d0;
  pcStack_8 = FUN_11037e60;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "ExecuteEventTree";
    local_34 = FUN_110377d0;
    uStack_30 = uStack_10;
    pcStack_28 = FUN_11037e60;
    local_38 = puVar1;
    puStack_2c = param_1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  return param_1;
}



/* ===== FUN_110367a0 @ 110367a0  size=62 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_110367a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_110367e0 @ 110367e0  size=142 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_110367e0(int param_1,int *param_2)

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
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
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



/* ===== FUN_11036870 @ 11036870  size=143 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_11036870(int param_1,int *param_2)

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
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
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



/* ===== FUN_11036900 @ 11036900  size=154 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_11036900(int param_1,int *param_2)

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
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
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



/* ===== FUN_110369a0 @ 110369a0  size=138 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_110369a0(int param_1,int *param_2)

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
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
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



/* ===== FUN_11036a30 @ 11036a30  size=147 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_11036a30(int param_1,int *param_2)

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
      (piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase"), piVar4 != (int *)0x0)) &&
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



/* ===== FUN_11036ad0 @ 11036ad0  size=84 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_11036ad0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if ((piVar2 != (int *)0x0) && (param_3 != 0)) {
        (**(code **)(*piVar2 + 0x70))(param_3,param_4);
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_11036b30 @ 11036b30  size=223 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_11036b30(int param_1,int *param_2,char *param_3)

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
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        FUN_11316810(local_2c);
        (**(code **)(*piVar3 + 0x98))(local_8,&param_3);
        FUN_1046dc90();
        (**(code **)(*piVar3 + 0x98))();
        FUN_1046e900(param_3);
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



/* ===== FUN_11036d60 @ 11036d60  size=228 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_11036d60(int param_1,int *param_2)

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
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_8 = (int *)0x0;
          (**(code **)(*piVar3 + 0x84))(param_2,&local_8);
          param_2 = local_8;
          uVar4 = FUN_110273e0(&param_2);
          goto LAB_11036e00;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_11036e00:
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



/* ===== FUN_11036e50 @ 11036e50  size=222 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_11036e50(int param_1,int *param_2)

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
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          local_8 = 0;
          (**(code **)(*piVar3 + 0x88))(param_2,&local_8);
          uVar4 = FUN_10d1c5b0(&local_8);
          goto LAB_11036eea;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_11036eea:
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



/* ===== FUN_11036f30 @ 11036f30  size=236 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_11036f30(int param_1,int *param_2)

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
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
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
          goto LAB_11036fd8;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_20);
LAB_11036fd8:
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



/* ===== FUN_11037020 @ 11037020  size=219 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_11037020(int param_1,int *param_2)

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
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          local_8 = 0;
          FUN_10c62470(1,&local_8);
          param_2 = (int *)((uint)param_2 & 0xffffff);
          (**(code **)(*piVar3 + 0x94))(local_8,(int)&param_2 + 3);
          uVar4 = FUN_10d1c620((int)&param_2 + 3);
          goto LAB_110370b7;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_110370b7:
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



/* ===== FUN_11037100 @ 11037100  size=239 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_11037100(int param_1,int *param_2)

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
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BehaviorTreeBase");
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x18))(1);
        if (iVar2 == 1) {
          param_2 = (int *)0x0;
          FUN_10c62470(1,&param_2);
          FUN_113168d0(&DAT_11d9d32b);
          (**(code **)(*piVar3 + 0x8c))(param_2,local_8);
          param_2 = (int *)FUN_11317f30();
          uVar4 = FUN_10a01710(&param_2);
          goto LAB_110371ab;
        }
      }
    }
  }
  uVar4 = (**(code **)(*piVar1 + 0x28))(&local_18);
LAB_110371ab:
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



/* ===== FUN_110371f0 @ 110371f0  size=388 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_110371f0(int param_1,int *param_2)

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
LAB_1103723c:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_1103723c;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase");
    if (piVar4 == (int *)0x0) goto LAB_1103723c;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_110372f2;
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
    cVar2 = FUN_11037820(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0xb4))(local_c);
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
LAB_110372f2:
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



/* ===== FUN_11037380 @ 11037380  size=388 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_11037380(int param_1,int *param_2)

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
LAB_110373cc:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_110373cc;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase");
    if (piVar4 == (int *)0x0) goto LAB_110373cc;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_11037482;
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
    cVar2 = FUN_11037820(&param_2,&local_c);
    puVar1 = local_c;
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 0x9c))(local_c);
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
LAB_11037482:
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



/* ===== FUN_11037510 @ 11037510  size=388 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

undefined4 __thiscall FUN_11037510(int param_1,int *param_2)

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
LAB_1103755c:
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3);
    if (piVar4 == (int *)0x0) goto LAB_1103755c;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x18))("BehaviorTreeBase");
    if (piVar4 == (int *)0x0) goto LAB_1103755c;
  }
  param_2 = (int *)&DAT_1201fc98;
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar7 + 0x18))(1);
    if (iVar3 != 1) {
      uVar5 = (**(code **)(*piVar7 + 0x28))(&local_20);
      goto LAB_11037612;
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
    cVar2 = FUN_11037820(&param_2,&local_c);
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
LAB_11037612:
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



/* ===== FUN_110376a0 @ 110376a0  size=73 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_110376a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (iVar1 != 0) {
        FUN_10b04fd0();
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_110376f0 @ 110376f0  size=224 ===== */
// strings:
//   "BehaviorTreeBase"
//   "file_BlackBoardFile"
//   "file_BTEventFileName"
//   "file_BTFileName1"
//   "file_BTFileName2"
//   "file_BTFileName3"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase""
     ""file_BlackBoardFile""
     ""file_BTEventFileName""
     ""file_BTFileName1""
     ""file_BTFileName2""
     ""file_BTFileName3"" */

undefined4 __thiscall FUN_110376f0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (iVar1 != 0) {
        (**(code **)(*param_3 + 0x30))();
        local_8 = 0;
        local_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0;
        FUN_10a68fd0("file_BlackBoardFile",&local_18);
        FUN_10a68fd0("file_BTEventFileName",&uStack_14);
        FUN_10a68fd0("file_BTFileName1",&uStack_10);
        FUN_10a68fd0("file_BTFileName2",&uStack_c);
        FUN_10a68fd0("file_BTFileName3",&local_8);
        (**(code **)(*param_3 + 0x34))();
        FUN_10b04dd0(&local_18);
      }
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  return uVar3;
}



/* ===== FUN_110377d0 @ 110377d0  size=76 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

void __thiscall FUN_110377d0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BehaviorTreeBase");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xbc))();
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}



/* ===== FUN_11037820 @ 11037820  size=121 ===== */
// calls: strncmp
// strings:
//   "scripts/ai/behaviortree"

/* [RE-AUTO c0]
   calls: strncmp
   strings:
     ""scripts/ai/behaviortree"" */

undefined4 FUN_11037820(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (0x17 < *(uint *)((char *)*param_1 + -8)) {
    iVar2 = strncmp((char *)*param_1,"scripts/ai/behaviortree",0x17);
    if (iVar2 == 0) {
      uVar3 = FUN_10a821e0(&param_1,0x18,0xffffffff);
      FUN_10a72410(uVar3);
      puVar1 = param_1;
      piVar4 = param_1 + -3;
      if (-1 < *piVar4) {
        iVar2 = FUN_10c3dad0(piVar4);
        if (iVar2 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - puVar1[-1]);
          FUN_10c3d900(piVar4);
        }
      }
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_110378a0 @ 110378a0  size=57 ===== */
// strings:
//   "BehaviorTreeBase"

/* [RE-AUTO c0]
   strings:
     ""BehaviorTreeBase"" */

int __thiscall FUN_110378a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (((iVar1 != 0) &&
      (piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1),
      piVar2 != (int *)0x0)) &&
     (iVar1 = (**(code **)(*piVar2 + 0x18))("BehaviorTreeBase"), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}



/* ===== FUN_11037e80 @ 11037e80  size=2890 ===== */
// strings:
//   "TestFunc"
//   "SetBTBlackBoardValueBool"
//   "KeyName,BoolValue"
//   "SetBTBlackBoardValueEntityID"
//   "KeyName,EntityIDValue"
//   "SetBTBlackBoardValueFloat"
//   "KeyName,FloatValue"
//   "SetBTBlackBoardValueString"
//   "KeyName,StringValue"
//   "SetBTBlackBoardValueVec3"
//   "KeyName,Vec3Value"
//   "GetBTBlackBoardValueBool"
//   "KeyName"
//   "GetBTBlackBoardValueEntityID"
//   "GetBTBlackBoardValueFloat"
//   "GetBTBlackBoardValueString"
//   "GetBTBlackBoardValueVec3"
//   "LoadEventBehaviorTree"
//   "FileName"
//   "LoadBehaviorTree"

/* [RE-AUTO c0]
   strings:
     ""TestFunc""
     ""SetBTBlackBoardValueBool""
     ""KeyName,BoolValue""
     ""SetBTBlackBoardValueEntityID""
     ""KeyName,EntityIDValue""
     ""SetBTBlackBoardValueFloat""
     ""KeyName,FloatValue""
     ""SetBTBlackBoardValueString""
     ""KeyName,StringValue""
     ""SetBTBlackBoardValueVec3"" */

undefined4 * __thiscall FUN_11037e80(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
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
  int *piStack_10;
  undefined4 *puStack_c;
  code *pcStack_8;
  
  puVar1 = param_1 + 1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)puVar1 = 0;
  *param_1 = &PTR_FUN_11d0a518;
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
  local_14 = &LAB_1103a854;
  pcStack_8 = FUN_1103aa40;
  puStack_c = param_1;
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_24 = param_1[0x13];
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (undefined4 **)0x0;
    local_18 = 0;
    local_40 = "TestFunc";
    local_34 = &LAB_1103a854;
    uStack_30 = piStack_10;
    pcStack_28 = FUN_1103aa40;
    local_38 = puVar1;
    puStack_2c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038cf0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueBool";
    local_3c = "KeyName,BoolValue";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038b30;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueEntityID";
    local_3c = "KeyName,EntityIDValue";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038bc0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueFloat";
    local_3c = "KeyName,FloatValue";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038d80;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueString";
    local_3c = "KeyName,StringValue";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038c50;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueVec3";
    local_3c = "KeyName,Vec3Value";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039370;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueBool";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110390b0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueEntityID";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110391a0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueFloat";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039450;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueString";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039280;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "GetBTBlackBoardValueVec3";
    local_3c = "KeyName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039540;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadEventBehaviorTree";
    local_3c = "FileName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110396d0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadBehaviorTree";
    local_3c = "FileName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039860;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LoadBlackboard";
    local_3c = "FileName";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_110399f0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "ClearPhysicsFlag";
    local_3c = "";
    local_20 = FUN_1103a8c0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039a80;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableAttackable";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039b60;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetReceiveAttackType";
    local_3c = "spAttackType";
    local_20 = FUN_1103a8e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039bf0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnablePlayerWall";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039cd0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableMonsterWall";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a0f0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "AddGeometry";
    local_3c = "geometryInfo";
    local_20 = FUN_1103a980;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039db0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableTerrain";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039e90;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "EnableSpecialObject";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11039f70;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "IgnoreHitCount";
    local_3c = "ignore";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a050;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetPlayerCanAttack";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a000;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetMonsterCanAttack";
    local_3c = "enable";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a2b0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetUseMaterialEffect";
    local_3c = "use";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a0a0;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetCanHitCount";
    local_3c = "enable";
    local_20 = FUN_1103a8e0;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_11038e20;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "SetBTBlackBoardValueStringString";
    local_3c = "Name,Value";
    local_20 = FUN_1103a920;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    local_1c = &puStack_c;
    local_24 = param_1[0x13];
    pcStack_8 = FUN_1103a380;
    local_34 = (undefined1 *)0x0;
    puStack_2c = (undefined4 *)0x0;
    local_40 = "LogicHide";
    local_3c = "hide";
    local_20 = FUN_1103aa00;
    local_18 = 8;
    local_38 = puVar1;
    puStack_c = param_1;
    (**(code **)(*(int *)param_1[0x11] + 100))(&local_40);
  }
  local_14 = (undefined1 *)0x4;
  piStack_10 = (int *)&DAT_3f800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("AF_Normal_Short",&local_14);
  if (local_14 == (undefined1 *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (undefined1 *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (undefined1 *)0x4;
  piStack_10 = (int *)&DAT_40000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("AF_Shake_Gournd",&local_14);
  if (local_14 == (undefined1 *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (undefined1 *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (undefined1 *)0x4;
  piStack_10 = (int *)&DAT_41000000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("AF_FlyObj",&local_14);
  if (local_14 == (undefined1 *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
    }
  }
  else if ((local_14 == (undefined1 *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  local_14 = (undefined1 *)0x4;
  piStack_10 = (int *)&DAT_40800000;
  (**(code **)(*(int *)param_1[0x12] + 0x70))("AF_Rush",&local_14);
  if (local_14 == (undefined1 *)0x6) {
    if (piStack_10 != (int *)0x0) {
      (**(code **)(*piStack_10 + 0xc))();
      return param_1;
    }
  }
  else if ((local_14 == (undefined1 *)0x7) && (piStack_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(piStack_10);
  }
  return param_1;
}



/* ===== FUN_1103a300 @ 1103a300  size=121 ===== */
// calls: strncmp
// strings:
//   "scripts/ai/behaviortree"

/* [RE-AUTO c0]
   calls: strncmp
   strings:
     ""scripts/ai/behaviortree"" */

undefined4 FUN_1103a300(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (0x17 < *(uint *)((char *)*param_1 + -8)) {
    iVar2 = strncmp((char *)*param_1,"scripts/ai/behaviortree",0x17);
    if (iVar2 == 0) {
      uVar3 = FUN_10a821e0(&param_1,0x18,0xffffffff);
      FUN_10a72410(uVar3);
      puVar1 = param_1;
      piVar4 = param_1 + -3;
      if (-1 < *piVar4) {
        iVar2 = FUN_10c3dad0(piVar4);
        if (iVar2 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - puVar1[-1]);
          FUN_10c3d900(piVar4);
        }
      }
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_11080ba0 @ 11080ba0  size=538 ===== */
// strings:
//   "SSharkParams"
//   "speedInertia"
//   "rollAmount"
//   "sprintMultiplier"
//   "sprintDuration"
//   "rotSpeed_min"
//   "rotSpeed_max"
//   "speed_min"
//   "accel"
//   "decel"
//   "minDistanceCircle"
//   "maxDistanceCircle"
//   "numCircles"
//   "minDistForUpdatingMoveTarget"
//   "meleeAnimation"
//   "meleeDistance"
//   "circlingTime"
//   "attackRollTime"
//   "attackRollAngle"
//   "headBoneName"

/* [RE-AUTO c0]
   strings:
     ""SSharkParams""
     ""speedInertia""
     ""rollAmount""
     ""sprintMultiplier""
     ""sprintDuration""
     ""rotSpeed_min""
     ""rotSpeed_max""
     ""speed_min""
     ""accel""
     ""decel"" */

void __thiscall FUN_11080ba0(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x14))("SSharkParams");
  (**(code **)(*param_2 + 0x70))("speedInertia",param_1 + 0x160,0);
  (**(code **)(*param_2 + 0x70))("rollAmount",param_1 + 0x164,0);
  (**(code **)(*param_2 + 0x70))("sprintMultiplier",param_1 + 0x170,0);
  (**(code **)(*param_2 + 0x70))("sprintDuration",param_1 + 0x174,0);
  (**(code **)(*param_2 + 0x70))("rotSpeed_min",param_1 + 0x180,0);
  (**(code **)(*param_2 + 0x70))("rotSpeed_max",param_1 + 0x184,0);
  (**(code **)(*param_2 + 0x70))("speed_min",param_1 + 0x188,0);
  (**(code **)(*param_2 + 0x70))("accel",param_1 + 0x178,0);
  (**(code **)(*param_2 + 0x70))("decel",param_1 + 0x17c,0);
  (**(code **)(*param_2 + 0x70))("minDistanceCircle",param_1 + 0x18c,0);
  (**(code **)(*param_2 + 0x70))("maxDistanceCircle",param_1 + 400,0);
  (**(code **)(*param_2 + 0x54))("numCircles",param_1 + 0x194,0);
  (**(code **)(*param_2 + 0x70))("minDistForUpdatingMoveTarget",param_1 + 0x198,0);
  FUN_10a7d250("meleeAnimation",param_1 + 0x19c,0);
  (**(code **)(*param_2 + 0x70))("meleeDistance",param_1 + 0x1a0,0);
  (**(code **)(*param_2 + 0x70))("circlingTime",param_1 + 0x1a4,0);
  (**(code **)(*param_2 + 0x70))("attackRollTime",param_1 + 0x1a8,0);
  (**(code **)(*param_2 + 0x70))("attackRollAngle",param_1 + 0x1ac,0);
  FUN_10a7d250("headBoneName",param_1 + 0x1b8,0);
  FUN_10a7d250("spineBoneName1",param_1 + 0x1bc,0);
  FUN_10a7d250("spineBoneName2",param_1 + 0x1c0,0);
  (**(code **)(*param_2 + 0x54))("escapeAnchorType",param_1 + 0x1b0,0);
  (**(code **)(*param_2 + 0x74))("bSpawned",param_1 + 0x1b4,0);
  (**(code **)(*param_2 + 0x1c))();
  return;
}



/* ===== FUN_11082790 @ 11082790  size=866 ===== */
// strings:
//   "targetId"
//   "selectTarget"
//   "spawned"
//   "goAway"
//   "speedInertia"
//   "sprintMultiplier"
//   "sprintDuration"
//   "rotSpeed_min"
//   "rotSpeed_max"
//   "minTurnRadius"
//   "speed_min"
//   "accel"
//   "decel"
//   "minDistanceCircle"
//   "maxDistanceCircle"
//   "circlingTime"
//   "numCircles"
//   "minDistForUpdatingMoveTarget"
//   "headBone"
//   "spineBone1"

/* [RE-AUTO c0]
   strings:
     ""targetId""
     ""selectTarget""
     ""spawned""
     ""goAway""
     ""speedInertia""
     ""sprintMultiplier""
     ""sprintDuration""
     ""rotSpeed_min""
     ""rotSpeed_max""
     ""minTurnRadius"" */

void __thiscall FUN_11082790(int param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int *local_8;
  
  local_8 = (int *)0x0;
  cVar3 = FUN_10b1f6d0("targetId",&local_8);
  if (cVar3 != '\0') {
    *(int **)(param_1 + 0x161c) = local_8;
    return;
  }
  cVar3 = FUN_10b1f6d0("selectTarget",&local_8);
  if (cVar3 != '\0') {
    *(int **)(param_1 + 0x161c) = local_8;
    *(undefined4 *)(param_1 + 0x15fc) = 0;
    *(undefined4 *)(param_1 + 0x16e0) = 0;
    *(undefined4 *)(param_1 + 0x16dc) = 0;
    *(undefined4 *)(param_1 + 0x16d8) = 0;
    *(undefined4 *)(param_1 + 0x1bd8) = 8;
    *(undefined4 *)(param_1 + 0x15ec) = 0;
    *(undefined4 *)(param_1 + 0x15e8) = 0;
    *(undefined4 *)(param_1 + 0x15e4) = 0;
    FUN_11088630();
    FUN_10a68da0("spawned",param_1 + 0x1b84);
    return;
  }
  cVar3 = FUN_10a68900("goAway",&local_8);
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x1bd8) = 6;
    *(undefined4 *)(param_1 + 0x15fc) = 0;
    *(undefined4 *)(param_1 + 0x15ec) = 0;
    *(undefined4 *)(param_1 + 0x15e8) = 0;
    *(undefined4 *)(param_1 + 0x15e4) = 0;
    return;
  }
  if ((char)param_3 != '\0') {
    uVar4 = FUN_11089610();
    FUN_11089880(uVar4);
    FUN_110897b0();
  }
  FUN_10a54e40(param_2,param_3);
  FUN_10a68a10("speedInertia",param_1 + 0x1b30);
  FUN_10a68a10("sprintMultiplier",param_1 + 0x1b40);
  FUN_10a68a10("sprintDuration",param_1 + 0x1b44);
  FUN_10a68a10("rotSpeed_min",param_1 + 0x1b50);
  FUN_10a68a10("rotSpeed_max",param_1 + 0x1b54);
  FUN_10a68a10("minTurnRadius",param_1 + 0x1b3c);
  FUN_10a68a10("speed_min",param_1 + 7000);
  FUN_10a68a10("accel",param_1 + 0x1b48);
  FUN_10a68a10("decel",param_1 + 0x1b4c);
  FUN_10a68a10("minDistanceCircle",param_1 + 0x1b5c);
  FUN_10a68a10("maxDistanceCircle",param_1 + 0x1b60);
  FUN_10a68a10("circlingTime",param_1 + 0x1b74);
  FUN_10a68900("numCircles",param_1 + 0x1b64);
  FUN_10a68a10("minDistForUpdatingMoveTarget",param_1 + 0x1b68);
  FUN_10a68bb0("headBone",&param_3);
  FUN_1083ac30(param_3);
  FUN_10a68bb0("spineBone1",&param_3);
  FUN_1083ac30(param_3);
  FUN_10a68bb0("spineBone2",&param_3);
  FUN_1083ac30(param_3);
  local_8 = (int *)0x0;
  cVar3 = FUN_10a68ce0("melee",&local_8);
  piVar2 = local_8;
  if (cVar3 != '\0') {
    FUN_10a68a10("radius",param_1 + 0x1b70);
    FUN_10a68bb0("animation",&param_3);
    FUN_1083ac30(param_3);
    FUN_10a68a10("rollTime",param_1 + 0x1b78);
    pfVar1 = (float *)(param_1 + 0x1b7c);
    FUN_10a68a10("rollAngle",pfVar1);
    *pfVar1 = *pfVar1 * DAT_11de98c0;
  }
  FUN_10a68900("escapeAnchorType",param_1 + 0x1b80);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}



/* ===== CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer @ 1129ddf0  size=1119 ===== */
// calls: __alloca_probe, memset, Sleep
// strings:
//   "[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Start"
//   "[ConnectBS] Connect BattleSvr %s  Uin[%u] Result[%d]"
//   "[ConnectBS] Send Verify Message! Uin[%u] "
//   "[ConnectBS] Send Verify Message Failed!"
//   "g_ConnBattleSvrTimeOut"
//   "[ConnectBS] Waiting battle server respond ( %-i s )."
//   "[ConnectBS] Send request init player ( %i )."
//   "Recv Client Request Player Init Msg!!"
//   "[ConnectBS] Connect BattleSvr Failed. CloseByTown return town"
//   "[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Initialize local player failed"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c3]
   id: CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer
   calls: __alloca_probe, memset, Sleep
   strings:
     ""[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Start""
     ""[ConnectBS] Connect BattleSvr %s  Uin[%u] Result[%d]""
     ""[ConnectBS] Send Verify Message! Uin[%u] ""
     ""[ConnectBS] Send Verify Message Failed!""
     ""g_ConnBattleSvrTimeOut""
     ""[ConnectBS] Waiting battle server respond ( %-i s ).""
     ""[ConnectBS] Send request init player ( %i ).""
     ""Recv Client Request Player Init Msg!!""
     ""[ConnectBS] Connect BattleSvr Failed. CloseByTown return town""
     ""[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Initialize local player failed"" */

void __fastcall CCliBattleGroundMgr__OnGameEvent_SpawnLocalPlayer(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iStack_aebe8;
  int iStack_aebe4;
  int iStack_aebe0;
  undefined1 uStack_aebd9;
  int *piStack_aebd8;
  undefined1 auStack_aebd4 [32300];
  undefined2 uStack_a6da8;
  undefined1 auStack_a6da6 [14];
  undefined4 uStack_a6d98;
  undefined4 uStack_a6d90;
  undefined4 uStack_a6d8c;
  undefined4 uStack_a6d88;
  undefined4 uStack_a6d84;
  undefined4 uStack_a6d80;
  undefined4 uStack_a6d7c;
  undefined4 uStack_a6d78;
  undefined4 uStack_a6d74;
  undefined4 uStack_a6d70;
  undefined4 uStack_a6d6c;
  undefined4 uStack_a6d68;
  undefined4 uStack_a6d64;
  
  piVar4 = (int *)FUN_111e0980();
  piStack_aebd8 = piVar4;
  if ((*(int *)(param_1 + 0xc) == 0) || (*(int *)(*(int *)(param_1 + 0xc) + 0x78) == 0))
  goto LAB_1129e23c;
  FUN_1045b620(piVar4,"[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Start");
  iVar5 = FUN_111e09b0();
  cVar3 = (**(code **)(**(int **)(iVar5 + 0x15c) + 0x20))();
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x849a4) == 2) {
      uVar6 = FUN_111e09d0();
      iVar5 = FUN_111e0a40();
      uVar1 = *(undefined4 *)(iVar5 + 8);
      piVar4 = (int *)FUN_111e0a60();
      iStack_aebe0 = (**(code **)(*piVar4 + 0x14))
                               (param_1 + 0x849a8,*(undefined4 *)(param_1 + 0x84da8),uVar1,3,100,
                                &DAT_11d9d32b);
      piVar4 = piStack_aebd8;
      FUN_1045b620(piStack_aebd8,"[ConnectBS] Connect BattleSvr %s  Uin[%u] Result[%d]",
                   param_1 + 0x849a8,*(undefined4 *)(param_1 + 0x84da8),iStack_aebe0);
      if (iStack_aebe0 == 0) {
        memset(auStack_a6da6,0,0xa6d9c);
        uStack_a6d98 = *(undefined4 *)(param_1 + 0x84da8);
        uStack_a6da8 = 0xd;
        uStack_a6d8c = *(undefined4 *)(param_1 + 0x84dac);
        uStack_a6d88 = *(undefined4 *)(param_1 + 0x84db0);
        puVar2 = *(undefined4 **)(param_1 + 0x84db4);
        uStack_a6d90 = 0;
        uStack_a6d64 = 1;
        uStack_a6d84 = *puVar2;
        uStack_a6d80 = puVar2[1];
        uStack_a6d7c = puVar2[2];
        uStack_a6d78 = puVar2[3];
        uStack_a6d74 = puVar2[4];
        uStack_a6d70 = puVar2[5];
        uStack_a6d6c = puVar2[6];
        uStack_a6d68 = puVar2[7];
        FUN_1045b620(piVar4,"[ConnectBS] Send Verify Message! Uin[%u] ",uStack_a6d98);
        piVar7 = (int *)FUN_111e0a60();
        iVar5 = (**(code **)(*piVar7 + 0x10))(&uStack_a6da8);
        if (iVar5 == 0) {
          iStack_aebe8 = 0;
          piVar4 = (int *)FUN_111e0980();
          iStack_aebe4 = (**(code **)(*piVar4 + 0x30))("g_ConnBattleSvrTimeOut",60000);
          *(undefined4 *)(param_1 + 0x84db8) = 0;
          iVar5 = 0;
          do {
            piVar4 = (int *)FUN_111e0a60();
            (**(code **)(*piVar4 + 0x34))(uVar6,1);
            Sleep(10);
            iVar5 = iVar5 + 10;
            iStack_aebe0 = iVar5 / 1000;
            if (((iVar5 == iStack_aebe0 * 1000) &&
                (FUN_1045b620(piStack_aebd8,"[ConnectBS] Waiting battle server respond ( %-i s ).",
                              iStack_aebe0), 1000 < iVar5)) && (iStack_aebe0 % 0x1e == 0)) {
              iStack_aebe8 = iStack_aebe8 + 1;
              FUN_1045b620(piStack_aebd8,"[ConnectBS] Send request init player ( %i ).",iStack_aebe8
                          );
              FUN_112a9aa0("Recv Client Request Player Init Msg!!",1);
            }
            piVar4 = (int *)FUN_111e0980();
            (**(code **)(*piVar4 + 0x2c))();
            if (iStack_aebe4 < iVar5) {
              iVar5 = iVar5 - iStack_aebe4;
              FUN_112a99f0(*(undefined4 *)(param_1 + 0x84da8),*(undefined4 *)(param_1 + 0x84dac));
            }
            if (*(int *)(param_1 + 0x84db8) == 2) {
              FUN_1045b620(piStack_aebd8,
                           "[ConnectBS] Connect BattleSvr Failed. CloseByTown return town");
              FUN_112a9d80();
            }
            piVar4 = piStack_aebd8;
          } while (*(int *)(param_1 + 0x84db8) == 0);
          goto LAB_1129e100;
        }
        FUN_1045b620(piVar4,"[ConnectBS] Send Verify Message Failed!");
      }
      FUN_1129a4b0(iStack_aebe0);
      FUN_112a9d80();
      FUN_112a99f0(*(undefined4 *)(param_1 + 0x84da8),*(undefined4 *)(param_1 + 0x84dac));
    }
  }
  else {
    FUN_111e09b0();
    FUN_1123f500();
  }
LAB_1129e100:
  iVar5 = FUN_111e0990();
  if (iVar5 == 0) {
    FUN_1045b620(piVar4,
                 "[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Initialize local player failed"
                );
    FUN_111e09f0();
    FUN_11a89daa();
    return;
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(iVar5);
  iVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))();
  if (iVar5 != 0) {
    iStack_aebe4 = 0;
    FUN_111c7b20(&iStack_aebe4);
  }
  piVar4 = (int *)FUN_111e0980();
  iVar5 = (**(code **)(*piVar4 + 0x6c))();
  if (iVar5 != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1000;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1000;
    piVar4 = (int *)FUN_111e09f0();
    piStack_aebd8 =
         (int *)(**(code **)(*piVar4 + 0x10))
                          (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18),0,0);
    if (piStack_aebd8 != (int *)0x0) {
      FUN_1129a550(param_1 + 0x14,auStack_aebd4);
      (**(code **)(*piStack_aebd8 + 0x2a0))(auStack_aebd4);
      (**(code **)(*piStack_aebd8 + 0x2a4))(param_1 + 0x14);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(piStack_aebd8);
    }
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x78) + 0x20) == 0x11) {
    FUN_112908a0(&uStack_aebd9);
    FUN_11a89daa();
    return;
  }
  cVar3 = FUN_1140e170();
  if ((cVar3 != '\0') || (0 < *(int *)(*(int *)(param_1 + 0xc) + 0xcc))) {
    FUN_112903d0(&uStack_aebd9);
  }
LAB_1129e23c:
  FUN_11a89daa();
  return;
}



/* ===== CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer_1129fae0 @ 1129fae0  size=824 ===== */
// calls: memcpy, CPlayer::GetHuntRankOrCount
// strings:
//   "[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Networksink Player Init Msg received!"

/* [RE-AUTO c3]
   id: CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer
   calls: memcpy
   strings:
     ""[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Networksink Player Init Msg received!"" */

void __thiscall
CCliBattleGroundMgr__OnGameEvent_SpawnLocalPlayer_1129fae0
          (int param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_1128e730(param_4);
  cVar1 = FUN_1128e050();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x109784) == '\0')) {
    pvVar2 = (void *)FUN_1128e460();
    param_4 = pvVar2;
    iVar3 = FUN_111e0980();
    if (iVar3 != 0) {
      FUN_1045b620(iVar3,
                   "[CCliBattleGroundMgr::OnGameEvent_SpawnLocalPlayer]Networksink Player Init Msg received!"
                  );
    }
    piVar4 = (int *)FUN_111e09f0();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x14))(*(undefined4 *)((int)pvVar2 + 4));
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_111e09f0();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x10))
                                (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)param_4 + 4),1,
                                 0);
    }
    if (((*(int **)(param_1 + 0xc) != (int *)0x0) &&
        (cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x160))(), cVar1 == '\0')) &&
       (*(char *)((int)piVar4 + 0x25) != '\0')) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(piVar4);
    }
    *(undefined1 *)(piVar4 + 9) = 0;
    (**(code **)(*piVar4 + 0x29c))(param_4);
    cVar1 = (**(code **)(*piVar4 + 0x280))();
    if (cVar1 != '\0') {
      FUN_111e09f0(piVar4[1]);
      FUN_11245c30();
    }
    piVar5 = (int *)FUN_111e0980();
    iVar3 = (**(code **)(*piVar5 + 0x6c))();
    if (iVar3 != 0) {
      memcpy((void *)(param_1 + 0x14),param_4,0x8498e);
    }
    FUN_111e09b0();
    iVar3 = FUN_111e09b0();
    if (*(int *)(iVar3 + 0xe0) != 0) {
      FUN_111e09b0();
      FUN_1126e850();
    }
    iVar3 = FUN_111e09b0();
    if (*(int *)(iVar3 + 0x94) != 0) {
      FUN_111e09b0();
      FUN_1115e890();
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x168))();
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x16c))(), cVar1 == '\0')) {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xb4);
      if (iVar3 == 0) {
        return;
      }
      iVar3 = *(int *)(iVar3 + 0x94);
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 0xc) = 1;
      }
      cVar1 = FUN_1140e1d0();
      if ((cVar1 != '\0') && (*(int *)((int)param_4 + 0x5e483) == 0)) {
        (**(code **)(*piVar4 + 0x31c))(1);
      }
      uVar6 = FUN_11398580();
      iVar3 = FUN_1144b340(uVar6);
      if (iVar3 == 0) {
        local_14 = 0;
        local_10 = 0;
        if (piVar4[0xb48] != 0) {
          FUN_11464510();
          iVar3 = FUN_11669250();
          local_14 = *(undefined4 *)(iVar3 + 0x3c);
          FUN_11464510();
          piVar5 = (int *)FUN_11669250();
          local_10 = (**(code **)(*piVar5 + 0x18))();
        }
        uVar6 = FUN_1025b060();
        puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0xb8))();
        iVar3 = piVar4[1];
        puVar9 = &DAT_11d9d32b;
        if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
          puVar9 = (undefined1 *)*puVar7;
        }
        uVar8 = (**(code **)(*piVar4 + 0x44))();
        uVar10 = (**(code **)(*piVar4 + 0xc0))(uVar6,uVar8);
        uVar6 = CPlayer__GetHuntRankOrCount(uVar10);
        uVar6 = FUN_11398580(iVar3,local_14,local_10,puVar9,uVar6);
        FUN_1144b760(uVar6);
        uVar6 = FUN_11398580();
        iVar3 = FUN_1144b340(uVar6);
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x48c) = *(int *)(iVar3 + 0x48c) + *(int *)((int)param_4 + 0x5f697);
        }
      }
      pvVar2 = param_4;
      iVar3 = FUN_114c2d90(piVar4[1]);
      if (iVar3 == 0) {
        FUN_114c2830(piVar4[1]);
      }
      if (*(int *)((int)pvVar2 + 0x5e483) != 0) {
        piVar4 = (int *)FUN_111e09b0();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))();
        (**(code **)(*piVar4 + 4))(0x17e,(int)&param_4 + 3);
      }
    }
    *(undefined1 *)(param_1 + 0x109784) = 1;
    *(undefined4 *)(param_1 + 0x84db8) = 1;
  }
  return;
}



