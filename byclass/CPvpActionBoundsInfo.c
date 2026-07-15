// ===== class CPvpActionBoundsInfo  (3 recovered methods) =====

/* --- CPvpActionBoundsInfo::GetManagers @ 1194ed50 --- */
// [RE-AUTO c3]
// id: CPvpActionBoundsInfo::GetManagers
// strings:
//   ""CPvpActionBoundsInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPvpActionBoundsInfo::GetManagers
   strings:
     ""CPvpActionBoundsInfo::GetManagers"" */

undefined4 * CPvpActionBoundsInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d622d0;
  if (param_3 == 0) {
    if ((DAT_123a03b8 & 1) == 0) {
      DAT_123a03b8 = DAT_123a03b8 | 1;
      FUN_102500e0("CPvpActionBoundsInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2a60);
    }
    if ((undefined4 *)*DAT_123a039c != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_123a039c;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_123a04ac & 1) == 0) {
      DAT_123a04ac = DAT_123a04ac | 1;
      FUN_1194f2b0();
      FUN_11a8911f(&LAB_11cb29a0);
    }
    puVar1 = &DAT_123a0474;
  }
  return puVar1;
}



/* --- CPvpActionBoundsInfo::GetManagers_11950500 @ 11950500 --- */
// [RE-AUTO c3]
// id: CPvpActionBoundsInfo::GetManagers
// strings:
//   ""CPvpActionBoundsInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPvpActionBoundsInfo::GetManagers
   strings:
     ""CPvpActionBoundsInfo::GetManagers"" */

undefined4 CPvpActionBoundsInfo__GetManagers_11950500(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a03b8 & 1) == 0) {
      DAT_123a03b8 = DAT_123a03b8 | 1;
      FUN_102500e0("CPvpActionBoundsInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2a60);
    }
    return *DAT_123a039c;
  }
  return 0;
}



/* --- CPvpActionBoundsInfo::GetManagers_119508e0 @ 119508e0 --- */
// [RE-AUTO c3]
// id: CPvpActionBoundsInfo::GetManagers
// strings:
//   ""CPvpActionBoundsInfo::GetManagers""
//   ""CPvpActionBoundsInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPvpActionBoundsInfo::GetManagers
   strings:
     ""CPvpActionBoundsInfo::GetManagers""
     ""CPvpActionBoundsInfo"" */

void CPvpActionBoundsInfo__GetManagers_119508e0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d622d0;
    if ((DAT_123a03b8 & 1) == 0) {
      DAT_123a03b8 = DAT_123a03b8 | 1;
      FUN_102500e0("CPvpActionBoundsInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2a60);
    }
    piVar2 = (int *)*DAT_123a039c;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CPvpActionBoundsInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123a04ac & 1) == 0) {
          DAT_123a0478 = 0;
          DAT_123a0488 = 0;
          DAT_123a048c = 0;
          _DAT_123a0490 = 0;
          uRam123a0494 = 0;
          DAT_123a04ac = DAT_123a04ac | 1;
          DAT_123a0474 = &PTR_FUN_11d62314;
          _DAT_123a0498 = _DAT_11de9ae0;
          uRam123a049c = _UNK_11de9ae4;
          uRam123a04a0 = _UNK_11de9ae8;
          uRam123a04a4 = _UNK_11de9aec;
          DAT_123a04a8 = 1;
          DAT_123a047c = piVar2;
          _DAT_123a0480 = piVar2;
          _DAT_123a0484 = piVar2;
          FUN_11a8911f(&LAB_11cb29a0);
        }
        piVar2 = (int *)&DAT_123a0474;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d622d0;
    if ((DAT_123a03b8 & 1) == 0) {
      DAT_123a03b8 = DAT_123a03b8 | 1;
      FUN_102500e0("CPvpActionBoundsInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2a60);
    }
    piVar2 = (int *)*DAT_123a039c;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CPvpActionBoundsInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123a04ac & 1) == 0) {
          DAT_123a0478 = 0;
          DAT_123a0488 = 0;
          DAT_123a048c = 0;
          _DAT_123a0490 = 0;
          uRam123a0494 = 0;
          DAT_123a04ac = DAT_123a04ac | 1;
          DAT_123a0474 = &PTR_FUN_11d62314;
          _DAT_123a0498 = _DAT_11de9ae0;
          uRam123a049c = _UNK_11de9ae4;
          uRam123a04a0 = _UNK_11de9ae8;
          uRam123a04a4 = _UNK_11de9aec;
          DAT_123a04a8 = 1;
          DAT_123a047c = piVar2;
          _DAT_123a0480 = piVar2;
          _DAT_123a0484 = piVar2;
          FUN_11a8911f(&LAB_11cb29a0);
        }
        piVar2 = (int *)&DAT_123a0474;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CMonsterInfo__GetManagers_11a389b0(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



