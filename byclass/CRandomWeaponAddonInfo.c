// ===== class CRandomWeaponAddonInfo  (4 recovered methods) =====

/* --- CRandomWeaponAddonInfo::GetManagers @ 11870d30 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAddonInfo::GetManagers
// strings:
//   ""CRandomWeaponAddonInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponAddonInfo::GetManagers
   strings:
     ""CRandomWeaponAddonInfo::GetManagers"" */

undefined * CRandomWeaponAddonInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d535f8;
  if (param_3 == 0) {
    if ((DAT_123997a8 & 1) == 0) {
      DAT_123997a8 = DAT_123997a8 | 1;
      FUN_102500e0("CRandomWeaponAddonInfo::GetManagers");
      FUN_11a8911f(&LAB_11cae490);
    }
    if ((undefined *)*DAT_1239978c != (undefined *)0x0) {
      return (undefined *)*DAT_1239978c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12399b90 & 1) == 0) {
      DAT_12399b90 = DAT_12399b90 | 1;
      FUN_118731d0();
      FUN_11a8911f(&LAB_11cae350);
    }
    puVar1 = &DAT_12399b58;
  }
  return puVar1;
}



/* --- CRandomWeaponAddonInfo::GetManagers_11874fb0 @ 11874fb0 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAddonInfo::GetManagers
// strings:
//   ""CRandomWeaponAddonInfo::GetManagers""

/* [RE-AUTO c3]
   id: CRandomWeaponAddonInfo::GetManagers
   strings:
     ""CRandomWeaponAddonInfo::GetManagers"" */

undefined4 CRandomWeaponAddonInfo__GetManagers_11874fb0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123997a8 & 1) == 0) {
      DAT_123997a8 = DAT_123997a8 | 1;
      FUN_102500e0("CRandomWeaponAddonInfo::GetManagers");
      FUN_11a8911f(&LAB_11cae490);
    }
    return *DAT_1239978c;
  }
  return 0;
}



/* --- CRandomWeaponAddonInfo::GetManagers_11875b90 @ 11875b90 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAddonInfo::GetManagers
// strings:
//   ""CRandomWeaponAddonInfo::GetManagers""
//   ""CRandomWeaponAddonInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRandomWeaponAddonInfo::GetManagers
   strings:
     ""CRandomWeaponAddonInfo::GetManagers""
     ""CRandomWeaponAddonInfo"" */

void __thiscall CRandomWeaponAddonInfo__GetManagers_11875b90(undefined4 param_1,undefined **param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined *local_10;
  int local_c;
  int local_8;
  
  ppuVar3 = param_2;
  if (0 < (int)param_2[0xf]) {
    iVar7 = 0;
    local_10 = param_2[3] + (int)*param_2;
    local_c = param_1;
    if (0 < (int)param_2[0xf]) {
      do {
        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        uVar4 = FUN_11878460(local_10,&local_1c,ppuVar3);
        iVar2 = local_1c;
        if (local_1c == local_18) {
          if (local_1c != 0) {
            FUN_10c3d5d0(local_1c);
          }
          break;
        }
        FUN_11870b50(&local_34,uVar4,&local_1c);
        puVar1 = (undefined4 *)ppuVar3[0x11];
        if (puVar1 == (undefined4 *)ppuVar3[0x12]) {
          FUN_11878dd0(puVar1,&local_34,(int)&param_2 + 3,1,1);
        }
        else {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = local_34;
            puVar1[1] = uStack_30;
            puVar1[2] = uStack_2c;
            puVar1[3] = uStack_28;
            *(undefined8 *)(puVar1 + 4) = local_24;
          }
          ppuVar3[0x11] = ppuVar3[0x11] + 0x18;
        }
        if (iVar2 != 0) {
          FUN_10c3d5d0(iVar2);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)ppuVar3[0xf]);
    }
    local_10 = (undefined *)0x0;
    iVar7 = (int)ppuVar3[0x11] - (int)ppuVar3[0x10] >> 0x1f;
    if (((int)ppuVar3[0x11] - (int)ppuVar3[0x10]) / 0x18 + iVar7 != iVar7) {
      local_c = 0;
      do {
        puVar6 = ppuVar3[0x10];
        iVar7 = *(int *)(puVar6 + local_c);
        iVar2 = *(int *)(puVar6 + local_c + 0xc);
        local_8 = *(int *)(puVar6 + local_c + 8);
        FUN_100ee470();
        iVar5 = FUN_100ee450();
        param_2 = &PTR_FUN_11d535f8;
        local_8 = local_8 - (int)((double)iVar5 * _DAT_11de9a60 * (double)(iVar2 - local_8));
        if ((DAT_123997a8 & 1) == 0) {
          DAT_123997a8 = DAT_123997a8 | 1;
          FUN_102500e0("CRandomWeaponAddonInfo::GetManagers");
          FUN_11a8911f(&LAB_11cae490);
        }
        puVar6 = (undefined *)*DAT_1239978c;
        if ((puVar6 == (undefined *)0x0) &&
           (puVar6 = (undefined *)FUN_11679e10(&param_2,"CRandomWeaponAddonInfo",0),
           puVar6 == (undefined *)0x0)) {
          if ((DAT_12399b90 & 1) == 0) {
            DAT_12399b5c = 0;
            DAT_12399b6c = 0;
            DAT_12399b70 = 0;
            _DAT_12399b74 = 0;
            DAT_12399b78 = 0;
            DAT_12399b90 = DAT_12399b90 | 1;
            _DAT_12399b58 = &PTR_FUN_11d5366c;
            DAT_12399b7c = _DAT_11de9ae0;
            DAT_12399b80 = _UNK_11de9ae4;
            uRam12399b84 = _UNK_11de9ae8;
            DAT_12399b88 = _UNK_11de9aec;
            DAT_12399b8c = 1;
            DAT_12399b60 = puVar6;
            _DAT_12399b64 = puVar6;
            _DAT_12399b68 = puVar6;
            FUN_11a8911f(&LAB_11cae350);
          }
          puVar6 = &DAT_12399b58;
        }
        param_2 = &PTR_FUN_11da54a8;
        if (((iVar7 != -1) &&
            (((iVar7 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
             (iVar2 = *(int *)(puVar6 + 0x28), iVar2 != 0)))) &&
           ((iVar7 = iVar7 - *(int *)(puVar6 + 0x30), -1 < iVar7 &&
            (iVar7 < *(int *)(puVar6 + 0x24))))) {
          iVar5 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar2) * 4);
          if ((iVar5 != 0) && (*(int *)(iVar5 + (iVar7 % iVar2) * 4) != 0)) {
            FUN_11875a10(local_8,ppuVar3);
          }
        }
        local_c = local_c + 0x18;
        local_10 = (undefined *)((int)local_10 + 1);
      } while (local_10 < (uint)(((int)ppuVar3[0x11] - (int)ppuVar3[0x10]) / 0x18));
    }
  }
  return;
}



/* --- CRandomWeaponAddonInfo::GetManagers_119b7ee0 @ 119b7ee0 --- */
// [RE-AUTO c3]
// id: CRandomWeaponAddonInfo::GetManagers
// calls: CRandomWeaponAddonInfo::GetManagers
// strings:
//   ""CRandomWeaponAddonInfo""
//   ""CRandomWeaponAddonInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRandomWeaponAddonInfo::GetManagers
   calls: CRandomWeaponAddonInfo::GetManagers
   strings:
     ""CRandomWeaponAddonInfo""
     ""CRandomWeaponAddonInfo::GetManagers"" */

void CRandomWeaponAddonInfo__GetManagers_119b7ee0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CRandomWeaponAddonInfo__GetManagers(0,"CRandomWeaponAddonInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d535f8;
      if ((DAT_123997a8 & 1) == 0) {
        DAT_123997a8 = DAT_123997a8 | 1;
        FUN_102500e0("CRandomWeaponAddonInfo::GetManagers");
        FUN_11a8911f(&LAB_11cae490);
      }
      puVar4 = (undefined *)*DAT_1239978c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CRandomWeaponAddonInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12399b90 & 1) == 0) {
          DAT_12399b5c = 0;
          DAT_12399b6c = 0;
          DAT_12399b70 = 0;
          _DAT_12399b74 = 0;
          DAT_12399b78 = 0;
          DAT_12399b90 = DAT_12399b90 | 1;
          _DAT_12399b58 = &PTR_FUN_11d5366c;
          DAT_12399b7c = _DAT_11de9ae0;
          DAT_12399b80 = _UNK_11de9ae4;
          uRam12399b84 = _UNK_11de9ae8;
          DAT_12399b88 = _UNK_11de9aec;
          DAT_12399b8c = 1;
          DAT_12399b60 = puVar4;
          _DAT_12399b64 = puVar4;
          _DAT_12399b68 = puVar4;
          FUN_11a8911f(&LAB_11cb4440);
        }
        puVar4 = &DAT_12399b58;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_118781a0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



