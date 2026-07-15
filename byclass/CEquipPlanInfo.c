// ===== class CEquipPlanInfo  (2 recovered methods) =====

/* --- CEquipPlanInfo::GetManagers @ 108d18e0 --- */
// [RE-AUTO c3]
// id: CEquipPlanInfo::GetManagers
// strings:
//   ""CEquipPlanInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipPlanInfo::GetManagers
   strings:
     ""CEquipPlanInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipPlanInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7cf4 & 1) == 0) {
    DAT_123c7cf4 = DAT_123c7cf4 | 1;
    _DAT_123c7d0c = &DAT_123c7cfc;
    DAT_123c7d10 = &DAT_123c7cfc;
    DAT_123c7cfc = 0;
    FUN_100d83d0("CEquipPlanInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c75c10);
  }
  return DAT_123c7cf8;
}



/* --- CEquipPlanInfo::GetManagers_11592ce0 @ 11592ce0 --- */
// [RE-AUTO c3]
// id: CEquipPlanInfo::GetManagers
// calls: memcpy, memset
// strings:
//   ""CEquipPlanInfo::GetManagers""
//   ""CEquipPlanInfo""
//   ""mh_sharemem_addrinfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipPlanInfo::GetManagers
   calls: memcpy, memset
   strings:
     ""CEquipPlanInfo::GetManagers""
     ""CEquipPlanInfo""
     ""mh_sharemem_addrinfo"" */

void __thiscall CEquipPlanInfo__GetManagers_11592ce0(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  void *pvVar8;
  uint *puVar9;
  char *pcVar10;
  int iVar11;
  size_t sVar12;
  undefined **ppuVar13;
  uint uVar14;
  char *_Src;
  uint local_338;
  uint *local_334;
  undefined1 local_32d;
  undefined **local_32c;
  uint local_328;
  undefined1 local_324 [16];
  undefined1 *local_314;
  undefined1 *local_310;
  undefined1 local_308 [720];
  undefined4 local_38;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  int local_28;
  undefined1 local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  puVar1 = param_1 + 3;
  local_334 = param_1;
  if (param_1[7] != 0) {
    FUN_11593a70(param_1[4]);
    param_1[5] = (uint)puVar1;
    param_1[4] = 0;
    param_1[6] = (uint)puVar1;
    param_1[7] = 0;
  }
  iVar11 = 0;
  if (*(char *)(param_2 + 1) != '\0') {
    ppuVar13 = (undefined **)(param_2 + 2);
    do {
      local_314 = local_324;
      local_324[0] = 0;
      puStack_30 = &local_38;
      local_38 = 0;
      iStack_34 = 0;
      local_28 = 0;
      local_24 = local_32d;
      local_32c = ppuVar13;
      local_310 = local_314;
      puStack_2c = puStack_30;
      FUN_11592b80(ppuVar13,local_334[1]);
      local_338 = local_328;
      FUN_115911d0(&local_338,&local_328);
      FUN_11591bc0();
      iVar3 = iStack_34;
      if (local_28 != 0) {
        while (iVar3 != 0) {
          FUN_108de890(*(undefined4 *)(iVar3 + 0xc));
          iVar2 = *(int *)(iVar3 + 8);
          FUN_10c3d5d0(iVar3);
          ppuVar13 = local_32c;
          iVar3 = iVar2;
        }
        puStack_30 = &local_38;
        iStack_34 = 0;
        local_28 = 0;
        puStack_2c = puStack_30;
      }
      if ((local_310 != local_324) && (local_310 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_310);
      }
      iVar11 = iVar11 + 1;
      ppuVar13 = ppuVar13 + 0xb8;
    } while (iVar11 < (int)(uint)*(byte *)(param_2 + 1));
  }
  uVar14 = 0;
  do {
    local_32c = &PTR_FUN_11dd6708;
    local_338 = uVar14;
    if ((DAT_123c7cf4 & 1) == 0) {
      DAT_123c7cf4 = DAT_123c7cf4 | 1;
      FUN_102500e0("CEquipPlanInfo::GetManagers");
      FUN_11a8911f(&LAB_11c75c10);
    }
    piVar5 = (int *)*DAT_123c7cf8;
    if ((piVar5 == (int *)0x0) &&
       (piVar5 = (int *)FUN_11679e10(&local_32c,"CEquipPlanInfo",0), piVar5 == (int *)0x0)) {
      if ((DAT_123c7dcc & 1) == 0) {
        DAT_123c7dd4 = 0;
        DAT_123c7de4 = 0;
        DAT_123c7de8 = 0;
        _DAT_123c7dec = 0;
        DAT_123c7df0 = 0;
        DAT_123c7dcc = DAT_123c7dcc | 1;
        DAT_123c7dd0 = &PTR_FUN_11dd67cc;
        DAT_123c7df4 = _DAT_11de9ae0;
        DAT_123c7df8 = _UNK_11de9ae4;
        uRam123c7dfc = _UNK_11de9ae8;
        DAT_123c7e00 = _UNK_11de9aec;
        DAT_123c7e04 = 1;
        DAT_123c7dd8 = piVar5;
        _DAT_123c7ddc = piVar5;
        _DAT_123c7de0 = piVar5;
        FUN_11a8911f(&LAB_11ca30a0);
      }
      piVar5 = (int *)&DAT_123c7dd0;
    }
    local_32c = &PTR_FUN_11da54a8;
    iVar11 = (**(code **)(*piVar5 + 0x28))();
    if (iVar11 <= (int)uVar14) {
      FUN_11a89daa();
      return;
    }
    local_32c = &PTR_FUN_11dd6708;
    if ((DAT_123c7cf4 & 1) == 0) {
      DAT_123c7cf4 = DAT_123c7cf4 | 1;
      FUN_102500e0("CEquipPlanInfo::GetManagers");
      FUN_11a8911f(&LAB_11c75c10);
    }
    piVar5 = (int *)*DAT_123c7cf8;
    if ((piVar5 == (int *)0x0) &&
       (piVar5 = (int *)FUN_11679e10(&local_32c,"CEquipPlanInfo",0), piVar5 == (int *)0x0)) {
      if ((DAT_123c7dcc & 1) == 0) {
        DAT_123c7dd4 = 0;
        DAT_123c7de4 = 0;
        DAT_123c7de8 = 0;
        _DAT_123c7dec = 0;
        DAT_123c7df0 = 0;
        DAT_123c7dcc = DAT_123c7dcc | 1;
        DAT_123c7dd0 = &PTR_FUN_11dd67cc;
        DAT_123c7df4 = _DAT_11de9ae0;
        DAT_123c7df8 = _UNK_11de9ae4;
        uRam123c7dfc = _UNK_11de9ae8;
        DAT_123c7e00 = _UNK_11de9aec;
        DAT_123c7e04 = 1;
        DAT_123c7dd8 = piVar5;
        _DAT_123c7ddc = piVar5;
        _DAT_123c7de0 = piVar5;
        FUN_11a8911f(&LAB_11ca30a0);
      }
      piVar5 = (int *)&DAT_123c7dd0;
    }
    local_32c = &PTR_FUN_11da54a8;
    if (((int)uVar14 < 0) || (piVar5[6] - piVar5[5] >> 2 <= (int)uVar14)) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(piVar5[5] + uVar14 * 4);
    }
    local_334 = (uint *)(iVar11 + 0x10);
    puVar9 = puVar1;
    if ((uint *)param_1[4] == (uint *)0x0) {
LAB_11593065:
      if (puVar9 == puVar1) goto LAB_1159306d;
    }
    else {
      puVar6 = (uint *)param_1[4];
      do {
        if (puVar6[4] < *local_334) {
          puVar7 = (uint *)puVar6[3];
        }
        else {
          puVar7 = (uint *)puVar6[2];
          puVar9 = puVar6;
        }
        puVar6 = puVar7;
      } while (puVar7 != (uint *)0x0);
      if (puVar9 != puVar1) {
        if (*local_334 < puVar9[4]) {
          puVar9 = puVar1;
        }
        goto LAB_11593065;
      }
LAB_1159306d:
      if (*(char *)(iVar11 + 0x18) != '\0') {
        _Src = "";
        if (*(char **)(iVar11 + 0x14) != (char *)0x0) {
          _Src = *(char **)(iVar11 + 0x14);
        }
        local_10 = local_20;
        pcVar4 = _Src;
        do {
          pcVar10 = pcVar4;
          pcVar4 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        sVar12 = (int)pcVar10 - (int)_Src;
        local_c = local_10;
        if (sVar12 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_100b73e0();
        }
        if (0x10 < sVar12 + 1) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(sVar12 + 1);
        }
        if (pcVar10 != _Src) {
          pvVar8 = memcpy(local_10,_Src,sVar12);
          local_10 = (undefined1 *)(sVar12 + (int)pvVar8);
        }
        *local_10 = 0;
        local_328 = *local_334;
        uVar14 = ((int)local_10 - (int)local_c) + 1;
        local_314 = local_324;
        local_310 = local_314;
        if ((int)local_10 - (int)local_c == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_100b73e0();
        }
        if (0x10 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(uVar14);
        }
        if (local_10 != local_c) {
          sVar12 = (int)local_10 - (int)local_c;
          pvVar8 = memcpy(local_314,local_c,sVar12);
          local_314 = (undefined1 *)(sVar12 + (int)pvVar8);
        }
        *local_314 = 0;
        local_24 = local_32d;
        local_38 = 0;
        iStack_34 = 0;
        local_28 = 0;
        puStack_30 = &local_38;
        puStack_2c = &local_38;
        memset(local_308,0,0x2d0);
        if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_c);
        }
        FUN_11591090(local_334,&local_328);
        FUN_11591bc0();
        iVar11 = iStack_34;
        if (local_28 != 0) {
          while (iVar11 != 0) {
            FUN_108de890(*(undefined4 *)(iVar11 + 0xc));
            iVar3 = *(int *)(iVar11 + 8);
            FUN_10c3d5d0(iVar11);
            iVar11 = iVar3;
          }
          puStack_30 = &local_38;
          iStack_34 = 0;
          local_28 = 0;
          puStack_2c = puStack_30;
        }
        if ((local_310 != local_324) && (local_310 != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_310);
        }
      }
    }
    uVar14 = local_338 + 1;
  } while( true );
}



