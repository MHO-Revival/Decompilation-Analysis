// ===== class CTournamentsAwardInfo  (3 recovered methods) =====

/* --- CTournamentsAwardInfo::GetManagers @ 11975e90 --- */
// [RE-AUTO c3]
// id: CTournamentsAwardInfo::GetManagers
// strings:
//   ""CTournamentsAwardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTournamentsAwardInfo::GetManagers
   strings:
     ""CTournamentsAwardInfo::GetManagers"" */

undefined * CTournamentsAwardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d6441c;
  if (param_3 == 0) {
    if ((DAT_123a1260 & 1) == 0) {
      DAT_123a1260 = DAT_123a1260 | 1;
      FUN_102500e0("CTournamentsAwardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3420);
    }
    if ((undefined *)*DAT_123a1244 != (undefined *)0x0) {
      return (undefined *)*DAT_123a1244;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a1340 & 1) == 0) {
      DAT_123a1340 = DAT_123a1340 | 1;
      FUN_119764b0();
      FUN_11a8911f(&LAB_11cb3360);
    }
    puVar1 = &DAT_123a1308;
  }
  return puVar1;
}



/* --- CTournamentsAwardInfo::GetManagers_11977720 @ 11977720 --- */
// [RE-AUTO c3]
// id: CTournamentsAwardInfo::GetManagers
// strings:
//   ""CTournamentsAwardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTournamentsAwardInfo::GetManagers
   strings:
     ""CTournamentsAwardInfo::GetManagers"" */

undefined4 CTournamentsAwardInfo__GetManagers_11977720(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a1260 & 1) == 0) {
      DAT_123a1260 = DAT_123a1260 | 1;
      FUN_102500e0("CTournamentsAwardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3420);
    }
    return *DAT_123a1244;
  }
  return 0;
}



/* --- CTournamentsAwardInfo::GetManagers_11977f20 @ 11977f20 --- */
// [RE-AUTO c3]
// id: CTournamentsAwardInfo::GetManagers
// calls: CTournamentsAwardInfo::GetManagers
// strings:
//   ""CTournamentsAwardInfo""
//   ""CTournamentsAwardInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTournamentsAwardInfo::GetManagers
   calls: CTournamentsAwardInfo::GetManagers
   strings:
     ""CTournamentsAwardInfo""
     ""CTournamentsAwardInfo::GetManagers"" */

void CTournamentsAwardInfo__GetManagers_11977f20(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)CTournamentsAwardInfo__GetManagers(0,"CTournamentsAwardInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d6441c;
      if ((DAT_123a1260 & 1) == 0) {
        DAT_123a1260 = DAT_123a1260 | 1;
        FUN_102500e0("CTournamentsAwardInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb3420);
      }
      if (((*DAT_123a1244 == 0) &&
          (iVar4 = FUN_11679e10(&param_1,"CTournamentsAwardInfo",0), iVar4 == 0)) &&
         ((DAT_123a1340 & 1) == 0)) {
        DAT_123a130c = 0;
        DAT_123a131c = 0;
        DAT_123a1320 = 0;
        _DAT_123a1324 = 0;
        uRam123a1328 = 0;
        DAT_123a1340 = DAT_123a1340 | 1;
        _DAT_123a1308 = &PTR_FUN_11d64460;
        _DAT_123a132c = _DAT_11de9ae0;
        uRam123a1330 = _UNK_11de9ae4;
        uRam123a1334 = _UNK_11de9ae8;
        uRam123a1338 = _UNK_11de9aec;
        DAT_123a133c = 1;
        DAT_123a1310 = iVar4;
        _DAT_123a1314 = iVar4;
        _DAT_123a1318 = iVar4;
        FUN_11a8911f(&LAB_11cb3360);
      }
      param_1 = &PTR_FUN_11da54a8;
      CTournamentsInfo__GetManagers_11a4f360(uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



