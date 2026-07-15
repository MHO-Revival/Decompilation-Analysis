// ===== class CGuildSkillInfo  (4 recovered methods) =====

/* --- CGuildSkillInfo::GetManagers @ 10919f10 --- */
// [RE-AUTO c3]
// id: CGuildSkillInfo::GetManagers
// strings:
//   ""CGuildSkillInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildSkillInfo::GetManagers
   strings:
     ""CGuildSkillInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CGuildSkillInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c822c & 1) == 0) {
    DAT_123c822c = DAT_123c822c | 1;
    _DAT_123c8244 = &DAT_123c8234;
    DAT_123c8248 = &DAT_123c8234;
    DAT_123c8234 = 0;
    FUN_100d83d0("CGuildSkillInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c776d0);
  }
  return DAT_123c8230;
}



/* --- CGuildSkillInfo::GetManagers_114a81e0 @ 114a81e0 --- */
// [RE-AUTO c3]
// id: CGuildSkillInfo::GetManagers
// calls: CGuildBuildingLevelUpInfo::GetManagers_1145ec70
// strings:
//   ""CGuildSkillInfo""
//   ""CGuildSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildSkillInfo::GetManagers
   calls: CGuildBuildingLevelUpInfo::GetManagers_1145ec70
   strings:
     ""CGuildSkillInfo""
     ""CGuildSkillInfo::GetManagers"" */

undefined4 * __thiscall CGuildSkillInfo__GetManagers_114a81e0(int param_1,undefined **param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  
  puVar3 = param_2;
  *param_2 = (undefined *)0x0;
  param_2[1] = (undefined *)0x0;
  param_2[2] = (undefined *)0x0;
  uVar5 = (uint)*(byte *)(param_1 + 0x224);
  uVar10 = uVar5 + 1;
  if (uVar5 + 1 < uVar5) {
    uVar10 = uVar5;
  }
  uVar5 = CGuildBuildingLevelUpInfo__GetManagers_1145ec70(5);
  if ((int)uVar5 < (int)uVar10) {
    uVar10 = uVar5;
  }
  piVar6 = (int *)FUN_1091e560(0,"CGuildSkillInfo",0);
  iVar7 = (**(code **)(*piVar6 + 0x28))();
  iVar11 = 0;
  if (0 < iVar7) {
    do {
      param_2 = &PTR_FUN_11dd9db8;
      if ((DAT_123c822c & 1) == 0) {
        DAT_123c822c = DAT_123c822c | 1;
        FUN_102500e0("CGuildSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c776d0);
      }
      puVar8 = (undefined4 *)*DAT_123c8230;
      if ((puVar8 == (undefined4 *)0x0) &&
         (puVar8 = (undefined4 *)FUN_11679e10(&param_2,"CGuildSkillInfo",0),
         puVar8 == (undefined4 *)0x0)) {
        if ((DAT_123c8254 & 1) == 0) {
          DAT_123c825c = 0;
          DAT_123c826c = 0;
          DAT_123c8270 = 0;
          _DAT_123c8274 = 0;
          uRam123c8278 = 0;
          DAT_123c8254 = DAT_123c8254 | 1;
          DAT_123c8260 = 0;
          _DAT_123c8264 = 0;
          _DAT_123c8268 = 0;
          DAT_123c8258 = &PTR_FUN_11dd9dd4;
          _DAT_123c827c = _DAT_11de9ae0;
          uRam123c8280 = _UNK_11de9ae4;
          uRam123c8284 = _UNK_11de9ae8;
          uRam123c8288 = _UNK_11de9aec;
          DAT_123c828c = 1;
          FUN_11a8911f(&LAB_11c9e640);
        }
        puVar8 = &DAT_123c8258;
      }
      if ((((-1 < iVar11) && (iVar11 < (int)(puVar8[6] - puVar8[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar8[5] + iVar11 * 4), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x24) <= (int)uVar10)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x18);
        param_2 = *(undefined ***)(iVar1 + 0x14);
        cVar4 = FUN_114a6c00(param_2,uVar2);
        if (cVar4 != '\0') {
          puVar9 = (undefined4 *)FUN_1149d9f0(param_2,uVar2);
          puVar8 = (undefined4 *)puVar3[1];
          if (puVar8 == (undefined4 *)puVar3[2]) {
            FUN_114acc50(puVar8,puVar9,(int)&param_2 + 3,1,1);
          }
          else {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar9;
              puVar8[1] = puVar9[1];
            }
            puVar3[1] = puVar3[1] + 8;
          }
          FUN_1149da10();
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar7);
  }
  return puVar3;
}



/* --- CGuildSkillInfo::GetManagers_11964fc0 @ 11964fc0 --- */
// [RE-AUTO c3]
// id: CGuildSkillInfo::GetManagers
// strings:
//   ""CGuildSkillInfo""
//   ""CGuildSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildSkillInfo::GetManagers
   strings:
     ""CGuildSkillInfo""
     ""CGuildSkillInfo::GetManagers"" */

void CGuildSkillInfo__GetManagers_11964fc0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1091e560(0,"CGuildSkillInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd9db8;
      if ((DAT_123c822c & 1) == 0) {
        DAT_123c822c = DAT_123c822c | 1;
        FUN_102500e0("CGuildSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c776d0);
      }
      if (((*DAT_123c8230 == 0) && (iVar3 = FUN_11679e10(&local_8,"CGuildSkillInfo",0), iVar3 == 0))
         && ((DAT_123c8254 & 1) == 0)) {
        DAT_123c825c = 0;
        DAT_123c826c = 0;
        DAT_123c8270 = 0;
        _DAT_123c8274 = 0;
        uRam123c8278 = 0;
        DAT_123c8254 = DAT_123c8254 | 1;
        DAT_123c8258 = &PTR_FUN_11dd9dd4;
        _DAT_123c827c = _DAT_11de9ae0;
        uRam123c8280 = _UNK_11de9ae4;
        uRam123c8284 = _UNK_11de9ae8;
        uRam123c8288 = _UNK_11de9aec;
        DAT_123c828c = 1;
        DAT_123c8260 = iVar3;
        _DAT_123c8264 = iVar3;
        _DAT_123c8268 = iVar3;
        FUN_11a8911f(&LAB_11cb2c10);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a44a80();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGuildSkillInfo::GetManagers_11965110 @ 11965110 --- */
// [RE-AUTO c3]
// id: CGuildSkillInfo::GetManagers
// strings:
//   ""CGuildSkillInfo""
//   ""CGuildSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildSkillInfo::GetManagers
   strings:
     ""CGuildSkillInfo""
     ""CGuildSkillInfo::GetManagers"" */

void CGuildSkillInfo__GetManagers_11965110(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1091e560(0,"CGuildSkillInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd9db8;
      if ((DAT_123c822c & 1) == 0) {
        DAT_123c822c = DAT_123c822c | 1;
        FUN_102500e0("CGuildSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c776d0);
      }
      if (((*DAT_123c8230 == 0) && (iVar3 = FUN_11679e10(&local_8,"CGuildSkillInfo",0), iVar3 == 0))
         && ((DAT_123c8254 & 1) == 0)) {
        DAT_123c825c = 0;
        DAT_123c826c = 0;
        DAT_123c8270 = 0;
        _DAT_123c8274 = 0;
        uRam123c8278 = 0;
        DAT_123c8254 = DAT_123c8254 | 1;
        DAT_123c8258 = &PTR_FUN_11dd9dd4;
        _DAT_123c827c = _DAT_11de9ae0;
        uRam123c8280 = _UNK_11de9ae4;
        uRam123c8284 = _UNK_11de9ae8;
        uRam123c8288 = _UNK_11de9aec;
        DAT_123c828c = 1;
        DAT_123c8260 = iVar3;
        _DAT_123c8264 = iVar3;
        _DAT_123c8268 = iVar3;
        FUN_11a8911f(&LAB_11cb2c10);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a44a70();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



