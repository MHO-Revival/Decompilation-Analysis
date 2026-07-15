// ===== class CSupplyPlanInfo  (2 recovered methods) =====

/* --- CSupplyPlanInfo::GetManagers @ 108a2e30 --- */
// [RE-AUTO c3]
// id: CSupplyPlanInfo::GetManagers
// strings:
//   ""CSupplyPlanInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSupplyPlanInfo::GetManagers
   strings:
     ""CSupplyPlanInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSupplyPlanInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c78ec & 1) == 0) {
    DAT_123c78ec = DAT_123c78ec | 1;
    _DAT_123c7904 = &DAT_123c78f4;
    DAT_123c7908 = &DAT_123c78f4;
    DAT_123c78f4 = 0;
    FUN_100d83d0("CSupplyPlanInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c74d40);
  }
  return DAT_123c78f0;
}



/* --- CSupplyPlanInfo::GetManagers_11546430 @ 11546430 --- */
// [RE-AUTO c3]
// id: CSupplyPlanInfo::GetManagers
// calls: strncpy
// strings:
//   ""CSupplyPlanInfo::GetManagers""
//   ""CSupplyPlanInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSupplyPlanInfo::GetManagers
   calls: strncpy
   strings:
     ""CSupplyPlanInfo::GetManagers""
     ""CSupplyPlanInfo"" */

void __thiscall CSupplyPlanInfo__GetManagers_11546430(int param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined ***pppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *_Source;
  int iVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *local_19c;
  int local_198;
  undefined **local_194;
  undefined4 local_190;
  char local_18c [388];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_19c = param_2;
  *(uint *)(param_1 + 0x154) = (uint)*param_2;
  local_198 = param_1 + 0x13c;
  FUN_11403b60();
  local_194 = (undefined **)0x0;
  if (param_2[1] != 0) {
    param_2 = param_2 + 2;
    do {
      pbVar10 = param_2;
      puVar11 = &local_190;
      for (iVar6 = 0x62; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        puVar11 = puVar11 + 1;
      }
      puVar2 = (undefined4 *)FUN_112428f0(param_2);
      param_2 = param_2 + 0x188;
      puVar11 = &local_190;
      for (iVar6 = 0x62; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar2 = puVar2 + 1;
      }
      local_194 = (undefined **)((int)local_194 + 1);
    } while ((int)local_194 < (int)(uint)local_19c[1]);
  }
  iVar9 = 0;
  iVar6 = param_1 + 0x13c;
  do {
    local_194 = &PTR_FUN_11dd4478;
    if ((DAT_123c78ec & 1) == 0) {
      DAT_123c78ec = DAT_123c78ec | 1;
      FUN_102500e0("CSupplyPlanInfo::GetManagers");
      FUN_11a8911f(&LAB_11c74d40);
    }
    pppuVar3 = (undefined ***)*DAT_123c78f0;
    if ((pppuVar3 == (undefined ***)0x0) &&
       (pppuVar3 = (undefined ***)FUN_11679e10(&local_194,"CSupplyPlanInfo",0),
       pppuVar3 == (undefined ***)0x0)) {
      if ((DAT_123c7a20 & 1) == 0) {
        DAT_123c7a28 = 0;
        DAT_123c7a38 = 0;
        DAT_123c7a3c = 0;
        _DAT_123c7a40 = 0;
        DAT_123c7a44 = 0;
        DAT_123c7a20 = DAT_123c7a20 | 1;
        DAT_123c7a24 = &PTR_FUN_11dd4480;
        DAT_123c7a48 = _DAT_11de9ae0;
        DAT_123c7a4c = _UNK_11de9ae4;
        uRam123c7a50 = _UNK_11de9ae8;
        DAT_123c7a54 = _UNK_11de9aec;
        DAT_123c7a58 = 1;
        DAT_123c7a2c = (int *)pppuVar3;
        _DAT_123c7a30 = pppuVar3;
        _DAT_123c7a34 = pppuVar3;
        FUN_11a8911f(&LAB_11ca1990);
      }
      pppuVar3 = &DAT_123c7a24;
    }
    local_194 = &PTR_FUN_11da54a8;
    iVar4 = (*(code *)(*pppuVar3)[10])();
    if (iVar4 <= iVar9) {
      if (*(int *)(param_1 + 0x154) == 0) {
        *(undefined4 *)(param_1 + 0x154) = 1;
      }
      FUN_11a89daa();
      return;
    }
    local_194 = &PTR_FUN_11dd4478;
    if ((DAT_123c78ec & 1) == 0) {
      DAT_123c78ec = DAT_123c78ec | 1;
      FUN_102500e0("CSupplyPlanInfo::GetManagers");
      FUN_11a8911f(&LAB_11c74d40);
    }
    pppuVar3 = (undefined ***)*DAT_123c78f0;
    if ((pppuVar3 == (undefined ***)0x0) &&
       (pppuVar3 = (undefined ***)FUN_11679e10(&local_194,"CSupplyPlanInfo",0),
       pppuVar3 == (undefined ***)0x0)) {
      if ((DAT_123c7a20 & 1) == 0) {
        DAT_123c7a28 = 0;
        DAT_123c7a38 = 0;
        DAT_123c7a3c = 0;
        _DAT_123c7a40 = 0;
        DAT_123c7a44 = 0;
        DAT_123c7a20 = DAT_123c7a20 | 1;
        DAT_123c7a24 = &PTR_FUN_11dd4480;
        DAT_123c7a48 = _DAT_11de9ae0;
        DAT_123c7a4c = _UNK_11de9ae4;
        uRam123c7a50 = _UNK_11de9ae8;
        DAT_123c7a54 = _UNK_11de9aec;
        DAT_123c7a58 = 1;
        DAT_123c7a2c = (int *)pppuVar3;
        _DAT_123c7a30 = pppuVar3;
        _DAT_123c7a34 = pppuVar3;
        FUN_11a8911f(&LAB_11ca1990);
      }
      pppuVar3 = &DAT_123c7a24;
    }
    local_194 = &PTR_FUN_11da54a8;
    if ((((-1 < iVar9) && (iVar9 < (int)pppuVar3[6] - (int)pppuVar3[5] >> 2)) &&
        (piVar1 = (int *)pppuVar3[5][iVar9], piVar1 != (int *)0x0)) && ((char)piVar1[6] != '\0')) {
      iVar5 = (**(code **)(*piVar1 + 0x18))();
      iVar4 = *(int *)(iVar6 + 4);
      iVar8 = iVar6;
      if (*(int *)(iVar6 + 4) == 0) {
LAB_115466fd:
        if (iVar8 != iVar6) goto LAB_11546763;
      }
      else {
        do {
          if (*(int *)(iVar4 + 0x10) < iVar5) {
            iVar7 = *(int *)(iVar4 + 0xc);
          }
          else {
            iVar7 = *(int *)(iVar4 + 8);
            iVar8 = iVar4;
          }
          iVar4 = iVar7;
        } while (iVar7 != 0);
        if (iVar8 != iVar6) {
          if (iVar5 < *(int *)(iVar8 + 0x10)) {
            iVar8 = iVar6;
          }
          goto LAB_115466fd;
        }
      }
      FUN_101132b0();
      local_190 = (**(code **)(*piVar1 + 0x18))();
      _Source = "";
      if ((char *)piVar1[5] != (char *)0x0) {
        _Source = (char *)piVar1[5];
      }
      strncpy(local_18c,_Source,0x14);
      local_19c = (byte *)(**(code **)(*piVar1 + 0x18))();
      puVar2 = (undefined4 *)FUN_112428f0(&local_19c);
      puVar11 = &local_190;
      for (iVar6 = 0x62; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar2 = puVar2 + 1;
      }
    }
LAB_11546763:
    iVar9 = iVar9 + 1;
    iVar6 = local_198;
  } while( true );
}



