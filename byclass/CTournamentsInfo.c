// ===== class CTournamentsInfo  (4 recovered methods) =====

/* --- CTournamentsInfo::GetManagers @ 11975f30 --- */
// [RE-AUTO c3]
// id: CTournamentsInfo::GetManagers
// strings:
//   ""CTournamentsInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTournamentsInfo::GetManagers
   strings:
     ""CTournamentsInfo::GetManagers"" */

undefined * CTournamentsInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d64394;
  if (param_3 == 0) {
    if ((DAT_123a1240 & 1) == 0) {
      DAT_123a1240 = DAT_123a1240 | 1;
      FUN_102500e0("CTournamentsInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3450);
    }
    if ((undefined *)*DAT_123a1224 != (undefined *)0x0) {
      return (undefined *)*DAT_123a1224;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a1304 & 1) == 0) {
      DAT_123a1304 = DAT_123a1304 | 1;
      FUN_11976580();
      FUN_11a8911f(&LAB_11cb33c0);
    }
    puVar1 = &DAT_123a12cc;
  }
  return puVar1;
}



/* --- CTournamentsInfo::GetManagers_11977770 @ 11977770 --- */
// [RE-AUTO c3]
// id: CTournamentsInfo::GetManagers
// strings:
//   ""CTournamentsInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTournamentsInfo::GetManagers
   strings:
     ""CTournamentsInfo::GetManagers"" */

undefined4 CTournamentsInfo__GetManagers_11977770(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a1240 & 1) == 0) {
      DAT_123a1240 = DAT_123a1240 | 1;
      FUN_102500e0("CTournamentsInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3450);
    }
    return *DAT_123a1224;
  }
  return 0;
}



/* --- CTournamentsInfo::GetManagers_11977c50 @ 11977c50 --- */
// [RE-AUTO c3]
// id: CTournamentsInfo::GetManagers
// calls: CTournamentsInfo::GetManagers
// strings:
//   ""CTournamentsInfo""
//   ""CTournamentsInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTournamentsInfo::GetManagers
   calls: CTournamentsInfo::GetManagers
   strings:
     ""CTournamentsInfo""
     ""CTournamentsInfo::GetManagers"" */

void CTournamentsInfo__GetManagers_11977c50(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined **local_70;
  undefined **local_6c [25];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)CTournamentsInfo__GetManagers(0,"CTournamentsInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      local_6c[0] = &PTR_FUN_11d64394;
      if ((DAT_123a1240 & 1) == 0) {
        DAT_123a1240 = DAT_123a1240 | 1;
        FUN_102500e0("CTournamentsInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb3450);
      }
      if (((*DAT_123a1224 == 0) && (iVar3 = FUN_11679e10(local_6c,"CTournamentsInfo",0), iVar3 == 0)
          ) && ((DAT_123a1304 & 1) == 0)) {
        DAT_123a12d0 = 0;
        DAT_123a12e0 = 0;
        DAT_123a12e4 = 0;
        _DAT_123a12e8 = 0;
        uRam123a12ec = 0;
        DAT_123a1304 = DAT_123a1304 | 1;
        _DAT_123a12cc = &PTR_FUN_11d643d0;
        _DAT_123a12f0 = _DAT_11de9ae0;
        uRam123a12f4 = _UNK_11de9ae4;
        uRam123a12f8 = _UNK_11de9ae8;
        uRam123a12fc = _UNK_11de9aec;
        DAT_123a1300 = 1;
        DAT_123a12d4 = iVar3;
        _DAT_123a12d8 = iVar3;
        _DAT_123a12dc = iVar3;
        FUN_11a8911f(&LAB_11cb33c0);
      }
      local_6c[0] = &PTR_FUN_11da54a8;
      FUN_11a4ce70();
      iVar3 = iVar7 + 1;
      if ((0 < iVar3) && (iVar3 < iVar2)) {
        local_6c[0] = &PTR_FUN_11d64394;
        if ((DAT_123a1240 & 1) == 0) {
          DAT_123a1240 = DAT_123a1240 | 1;
          FUN_102500e0("CTournamentsInfo::GetManagers");
          FUN_11a8911f(&LAB_11cb3450);
        }
        puVar4 = (undefined *)*DAT_123a1224;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(local_6c,"CTournamentsInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_123a1304 & 1) == 0) {
            DAT_123a1304 = DAT_123a1304 | 1;
            FUN_11976580();
            FUN_11a8911f(&LAB_11cb33c0);
          }
          puVar4 = &DAT_123a12cc;
        }
        local_6c[0] = &PTR_FUN_11da54a8;
        if ((iVar7 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar7)) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(puVar4 + 0x14) + iVar7 * 4);
        }
        local_70 = &PTR_FUN_11d64394;
        if ((DAT_123a1240 & 1) == 0) {
          DAT_123a1240 = DAT_123a1240 | 1;
          FUN_102500e0("CTournamentsInfo::GetManagers");
          FUN_11a8911f(&LAB_11cb3450);
        }
        puVar4 = (undefined *)*DAT_123a1224;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_70,"CTournamentsInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_123a1304 & 1) == 0) {
            DAT_123a1304 = DAT_123a1304 | 1;
            FUN_11976580();
            FUN_11a8911f(&LAB_11cb33c0);
          }
          puVar4 = &DAT_123a12cc;
        }
        local_70 = &PTR_FUN_11da54a8;
        if (iVar3 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2) {
          iVar7 = *(int *)(*(int *)(puVar4 + 0x14) + 4 + iVar7 * 4);
        }
        else {
          iVar7 = 0;
        }
        if ((iVar6 != 0) && (iVar7 != 0)) {
          uVar5 = FUN_10a19950(iVar6 + 0x2c);
          FUN_10a19950(iVar7 + 0x14,uVar5);
          FUN_10a1a330();
        }
      }
      iVar7 = iVar3;
    } while (iVar3 < iVar2);
  }
  FUN_11a89daa();
  return;
}



/* --- CTournamentsInfo::GetManagers_11a4f360 @ 11a4f360 --- */
// [RE-AUTO c3]
// id: CTournamentsInfo::GetManagers
// strings:
//   ""CTournamentsInfo::GetManagers""
//   ""CTournamentsInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTournamentsInfo::GetManagers
   strings:
     ""CTournamentsInfo::GetManagers""
     ""CTournamentsInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

undefined * __fastcall CTournamentsInfo__GetManagers_11a4f360(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d64394;
  if ((DAT_123a1240 & 1) == 0) {
    DAT_123a1240 = DAT_123a1240 | 1;
    FUN_102500e0("CTournamentsInfo::GetManagers");
    FUN_11a8911f(&LAB_11cb3450);
  }
  puVar2 = (undefined *)*DAT_123a1224;
  if ((puVar2 == (undefined *)0x0) &&
     (puVar2 = (undefined *)FUN_11679e10(&local_8,"CTournamentsInfo",0), puVar2 == (undefined *)0x0)
     ) {
    if ((DAT_123a1304 & 1) == 0) {
      DAT_123a12d0 = 0;
      DAT_123a12e0 = 0;
      DAT_123a12e4 = 0;
      _DAT_123a12e8 = 0;
      uRam123a12ec = 0;
      DAT_123a1304 = DAT_123a1304 | 1;
      DAT_123a12d4 = 0;
      _DAT_123a12d8 = 0;
      _DAT_123a12dc = 0;
      _DAT_123a12cc = &PTR_FUN_11d643d0;
      _DAT_123a12f0 = _DAT_11de9ae0;
      uRam123a12f4 = _UNK_11de9ae4;
      uRam123a12f8 = _UNK_11de9ae8;
      uRam123a12fc = _UNK_11de9aec;
      DAT_123a1300 = 1;
      FUN_11a8911f(&LAB_11cb7010);
    }
    puVar2 = &DAT_123a12cc;
  }
  piVar4 = *(int **)(param_1 + 0x14);
  if (piVar4 != *(int **)(param_1 + 0x18)) {
    do {
      iVar1 = *piVar4;
      iVar5 = *(int *)(iVar1 + 8);
      if (iVar5 != *(int *)(iVar1 + 0xc)) {
        do {
          local_8 = &PTR_FUN_11da5518;
          if ((DAT_123bdbfc & 1) == 0) {
            DAT_123bdbfc = DAT_123bdbfc | 1;
            FUN_102500e0("CItemBaseInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6e610);
          }
          if (((*DAT_123bdba0 == 0) &&
              (iVar3 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar3 == 0)) &&
             ((DAT_123bdc00 & 1) == 0)) {
            DAT_123bdbc4 = 0;
            DAT_123bdbd4 = 0;
            DAT_123bdbd8 = 0;
            _DAT_123bdbdc = 0;
            DAT_123bdbe0 = 0;
            DAT_123bdc00 = DAT_123bdc00 | 1;
            DAT_123bdbc8 = 0;
            _DAT_123bdbcc = 0;
            _DAT_123bdbd0 = 0;
            DAT_123bdbc0 = &PTR_FUN_11da5520;
            DAT_123bdbe4 = _DAT_11de9ae0;
            DAT_123bdbe8 = _UNK_11de9ae4;
            uRam123bdbec = _UNK_11de9ae8;
            DAT_123bdbf0 = _UNK_11de9aec;
            DAT_123bdbf4 = 1;
            FUN_11a8911f(&LAB_11cb6fb0);
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 != *(int *)(iVar1 + 0xc));
      }
      piVar4 = piVar4 + 1;
      puVar2 = param_1;
    } while (piVar4 != *(int **)(param_1 + 0x18));
  }
  return puVar2;
}



