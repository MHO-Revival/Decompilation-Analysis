// ===== class CEquipFoundOpenCostInfo  (4 recovered methods) =====

/* --- CEquipFoundOpenCostInfo::GetManagers @ 11833700 --- */
// [RE-AUTO c3]
// id: CEquipFoundOpenCostInfo::GetManagers
// strings:
//   ""CEquipFoundOpenCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundOpenCostInfo::GetManagers
   strings:
     ""CEquipFoundOpenCostInfo::GetManagers"" */

undefined4 * CEquipFoundOpenCostInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4e99c;
  if (param_3 == 0) {
    if ((DAT_123979d4 & 1) == 0) {
      DAT_123979d4 = DAT_123979d4 | 1;
      FUN_102500e0("CEquipFoundOpenCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbb0);
    }
    if ((undefined4 *)*DAT_123979b8 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_123979b8;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_12397b28 & 1) == 0) {
      DAT_12397b28 = DAT_12397b28 | 1;
      FUN_11834270();
      FUN_11a8911f(&LAB_11caca60);
    }
    puVar1 = &DAT_12397af0;
  }
  return puVar1;
}



/* --- CEquipFoundOpenCostInfo::GetManagers_118360f0 @ 118360f0 --- */
// [RE-AUTO c3]
// id: CEquipFoundOpenCostInfo::GetManagers
// strings:
//   ""CEquipFoundOpenCostInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundOpenCostInfo::GetManagers
   strings:
     ""CEquipFoundOpenCostInfo::GetManagers"" */

undefined4 CEquipFoundOpenCostInfo__GetManagers_118360f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123979d4 & 1) == 0) {
      DAT_123979d4 = DAT_123979d4 | 1;
      FUN_102500e0("CEquipFoundOpenCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbb0);
    }
    return *DAT_123979b8;
  }
  return 0;
}



/* --- CEquipFoundOpenCostInfo::GetManagers_11836410 @ 11836410 --- */
// [RE-AUTO c3]
// id: CEquipFoundOpenCostInfo::GetManagers
// strings:
//   ""CEquipFoundOpenCostInfo::GetManagers""
//   ""CEquipFoundOpenCostInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipFoundOpenCostInfo::GetManagers
   strings:
     ""CEquipFoundOpenCostInfo::GetManagers""
     ""CEquipFoundOpenCostInfo"" */

undefined4 CEquipFoundOpenCostInfo__GetManagers_11836410(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  iVar3 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11d4e99c;
    if ((DAT_123979d4 & 1) == 0) {
      DAT_123979d4 = DAT_123979d4 | 1;
      FUN_102500e0("CEquipFoundOpenCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbb0);
    }
    piVar1 = (int *)*DAT_123979b8;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CEquipFoundOpenCostInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_12397b28 & 1) == 0) {
          DAT_12397af4 = 0;
          DAT_12397b04 = 0;
          DAT_12397b08 = 0;
          _DAT_12397b0c = 0;
          uRam12397b10 = 0;
          DAT_12397b28 = DAT_12397b28 | 1;
          DAT_12397af0 = &PTR_FUN_11d4e9e4;
          _DAT_12397b14 = _DAT_11de9ae0;
          uRam12397b18 = _UNK_11de9ae4;
          uRam12397b1c = _UNK_11de9ae8;
          uRam12397b20 = _UNK_11de9aec;
          DAT_12397b24 = 1;
          DAT_12397af8 = piVar1;
          _DAT_12397afc = piVar1;
          _DAT_12397b00 = piVar1;
          FUN_11a8911f(&LAB_11caca60);
        }
        piVar1 = (int *)&DAT_12397af0;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 <= iVar3) break;
    local_8 = &PTR_FUN_11d4e99c;
    if ((DAT_123979d4 & 1) == 0) {
      DAT_123979d4 = DAT_123979d4 | 1;
      FUN_102500e0("CEquipFoundOpenCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbb0);
    }
    piVar1 = (int *)*DAT_123979b8;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CEquipFoundOpenCostInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_12397b28 & 1) == 0) {
          DAT_12397af4 = 0;
          DAT_12397b04 = 0;
          DAT_12397b08 = 0;
          _DAT_12397b0c = 0;
          uRam12397b10 = 0;
          DAT_12397b28 = DAT_12397b28 | 1;
          DAT_12397af0 = &PTR_FUN_11d4e9e4;
          _DAT_12397b14 = _DAT_11de9ae0;
          uRam12397b18 = _UNK_11de9ae4;
          uRam12397b1c = _UNK_11de9ae8;
          uRam12397b20 = _UNK_11de9aec;
          DAT_12397b24 = 1;
          DAT_12397af8 = piVar1;
          _DAT_12397afc = piVar1;
          _DAT_12397b00 = piVar1;
          FUN_11a8911f(&LAB_11caca60);
        }
        piVar1 = (int *)&DAT_12397af0;
      }
    }
    if ((((-1 < iVar3) && (iVar3 < piVar1[6] - piVar1[5] >> 2)) &&
        (iVar2 = *(int *)(piVar1[5] + iVar3 * 4), iVar2 != 0)) &&
       (((*(int *)(iVar2 + 0x14) == param_1 && (*(int *)(iVar2 + 0x18) <= param_2)) &&
        (param_2 <= *(int *)(iVar2 + 0x1c))))) {
      return *(undefined4 *)(iVar2 + 0x24);
    }
    iVar3 = iVar3 + 1;
  }
  return 0xffffffff;
}



/* --- CEquipFoundOpenCostInfo::GetManagers_11836600 @ 11836600 --- */
// [RE-AUTO c3]
// id: CEquipFoundOpenCostInfo::GetManagers
// strings:
//   ""CEquipFoundOpenCostInfo::GetManagers""
//   ""CEquipFoundOpenCostInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipFoundOpenCostInfo::GetManagers
   strings:
     ""CEquipFoundOpenCostInfo::GetManagers""
     ""CEquipFoundOpenCostInfo"" */

undefined4 CEquipFoundOpenCostInfo__GetManagers_11836600(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  iVar3 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11d4e99c;
    if ((DAT_123979d4 & 1) == 0) {
      DAT_123979d4 = DAT_123979d4 | 1;
      FUN_102500e0("CEquipFoundOpenCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbb0);
    }
    piVar1 = (int *)*DAT_123979b8;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CEquipFoundOpenCostInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_12397b28 & 1) == 0) {
          DAT_12397af4 = 0;
          DAT_12397b04 = 0;
          DAT_12397b08 = 0;
          _DAT_12397b0c = 0;
          uRam12397b10 = 0;
          DAT_12397b28 = DAT_12397b28 | 1;
          DAT_12397af0 = &PTR_FUN_11d4e9e4;
          _DAT_12397b14 = _DAT_11de9ae0;
          uRam12397b18 = _UNK_11de9ae4;
          uRam12397b1c = _UNK_11de9ae8;
          uRam12397b20 = _UNK_11de9aec;
          DAT_12397b24 = 1;
          DAT_12397af8 = piVar1;
          _DAT_12397afc = piVar1;
          _DAT_12397b00 = piVar1;
          FUN_11a8911f(&LAB_11caca60);
        }
        piVar1 = (int *)&DAT_12397af0;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 <= iVar3) break;
    local_8 = &PTR_FUN_11d4e99c;
    if ((DAT_123979d4 & 1) == 0) {
      DAT_123979d4 = DAT_123979d4 | 1;
      FUN_102500e0("CEquipFoundOpenCostInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbb0);
    }
    piVar1 = (int *)*DAT_123979b8;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CEquipFoundOpenCostInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_12397b28 & 1) == 0) {
          DAT_12397af4 = 0;
          DAT_12397b04 = 0;
          DAT_12397b08 = 0;
          _DAT_12397b0c = 0;
          uRam12397b10 = 0;
          DAT_12397b28 = DAT_12397b28 | 1;
          DAT_12397af0 = &PTR_FUN_11d4e9e4;
          _DAT_12397b14 = _DAT_11de9ae0;
          uRam12397b18 = _UNK_11de9ae4;
          uRam12397b1c = _UNK_11de9ae8;
          uRam12397b20 = _UNK_11de9aec;
          DAT_12397b24 = 1;
          DAT_12397af8 = piVar1;
          _DAT_12397afc = piVar1;
          _DAT_12397b00 = piVar1;
          FUN_11a8911f(&LAB_11caca60);
        }
        piVar1 = (int *)&DAT_12397af0;
      }
    }
    if ((((-1 < iVar3) && (iVar3 < piVar1[6] - piVar1[5] >> 2)) &&
        (iVar2 = *(int *)(piVar1[5] + iVar3 * 4), iVar2 != 0)) &&
       (((*(int *)(iVar2 + 0x14) == param_1 && (*(int *)(iVar2 + 0x18) <= param_2)) &&
        (param_2 <= *(int *)(iVar2 + 0x1c))))) {
      return *(undefined4 *)(iVar2 + 0x20);
    }
    iVar3 = iVar3 + 1;
  }
  return 0xffffffff;
}



