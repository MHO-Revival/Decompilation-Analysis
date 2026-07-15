// ===== class CEquipFoundQualityInfo  (3 recovered methods) =====

/* --- CEquipFoundQualityInfo::GetManagers @ 118337a0 --- */
// [RE-AUTO c3]
// id: CEquipFoundQualityInfo::GetManagers
// strings:
//   ""CEquipFoundQualityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundQualityInfo::GetManagers
   strings:
     ""CEquipFoundQualityInfo::GetManagers"" */

undefined4 * CEquipFoundQualityInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4e90c;
  if (param_3 == 0) {
    if ((DAT_123979b4 & 1) == 0) {
      DAT_123979b4 = DAT_123979b4 | 1;
      FUN_102500e0("CEquipFoundQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbe0);
    }
    if ((undefined4 *)*DAT_12397998 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_12397998;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_12397aec & 1) == 0) {
      DAT_12397aec = DAT_12397aec | 1;
      FUN_118342d0();
      FUN_11a8911f(&LAB_11cacac0);
    }
    puVar1 = &DAT_12397ab4;
  }
  return puVar1;
}



/* --- CEquipFoundQualityInfo::GetManagers_11836140 @ 11836140 --- */
// [RE-AUTO c3]
// id: CEquipFoundQualityInfo::GetManagers
// strings:
//   ""CEquipFoundQualityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CEquipFoundQualityInfo::GetManagers
   strings:
     ""CEquipFoundQualityInfo::GetManagers"" */

undefined4 CEquipFoundQualityInfo__GetManagers_11836140(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123979b4 & 1) == 0) {
      DAT_123979b4 = DAT_123979b4 | 1;
      FUN_102500e0("CEquipFoundQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbe0);
    }
    return *DAT_12397998;
  }
  return 0;
}



/* --- CEquipFoundQualityInfo::GetManagers_11836800 @ 11836800 --- */
// [RE-AUTO c3]
// id: CEquipFoundQualityInfo::GetManagers
// strings:
//   ""CEquipFoundQualityInfo::GetManagers""
//   ""CEquipFoundQualityInfo""
//   ""CEquipFoundInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CEquipFoundInfo""

/* WARNING: Removing unreachable block (ram,0x11836f1d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipFoundQualityInfo::GetManagers
   strings:
     ""CEquipFoundQualityInfo::GetManagers""
     ""CEquipFoundQualityInfo""
     ""CEquipFoundInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CEquipFoundInfo"" */

undefined4 CEquipFoundQualityInfo__GetManagers_11836800(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined4 *local_18;
  undefined **local_c;
  undefined1 local_5;
  
  iVar6 = 0;
  iVar3 = 0;
  while( true ) {
    local_c = &PTR_FUN_11d4e90c;
    if ((DAT_123979b4 & 1) == 0) {
      DAT_123979b4 = DAT_123979b4 | 1;
      FUN_102500e0("CEquipFoundQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbe0);
    }
    piVar1 = (int *)*DAT_12397998;
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)FUN_11679e10(&local_c,"CEquipFoundQualityInfo",0), piVar1 == (int *)0x0)) {
      if ((DAT_12397aec & 1) == 0) {
        DAT_12397ab8 = 0;
        DAT_12397ac8 = 0;
        DAT_12397acc = 0;
        _DAT_12397ad0 = 0;
        uRam12397ad4 = 0;
        DAT_12397aec = DAT_12397aec | 1;
        DAT_12397ab4 = &PTR_FUN_11d4e950;
        DAT_12397ad8_4 = _UNK_11de9ae4;
        _DAT_12397ad8 = _DAT_11de9ae0;
        uRam12397ae0 = _UNK_11de9ae8;
        uRam12397ae4 = _UNK_11de9aec;
        DAT_12397ae8 = 1;
        DAT_12397abc = piVar1;
        _DAT_12397ac0 = piVar1;
        _DAT_12397ac4 = piVar1;
        FUN_11a8911f(&LAB_11cacac0);
      }
      piVar1 = (int *)&DAT_12397ab4;
    }
    local_c = &PTR_FUN_11da54a8;
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 <= iVar3) break;
    local_c = &PTR_FUN_11d4e90c;
    if ((DAT_123979b4 & 1) == 0) {
      DAT_123979b4 = DAT_123979b4 | 1;
      FUN_102500e0("CEquipFoundQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbe0);
    }
    piVar1 = (int *)*DAT_12397998;
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)FUN_11679e10(&local_c,"CEquipFoundQualityInfo",0), piVar1 == (int *)0x0)) {
      if ((DAT_12397aec & 1) == 0) {
        DAT_12397ab8 = 0;
        DAT_12397ac8 = 0;
        DAT_12397acc = 0;
        _DAT_12397ad0 = 0;
        uRam12397ad4 = 0;
        DAT_12397aec = DAT_12397aec | 1;
        DAT_12397ab4 = &PTR_FUN_11d4e950;
        DAT_12397ad8_4 = _UNK_11de9ae4;
        _DAT_12397ad8 = _DAT_11de9ae0;
        uRam12397ae0 = _UNK_11de9ae8;
        uRam12397ae4 = _UNK_11de9aec;
        DAT_12397ae8 = 1;
        DAT_12397abc = piVar1;
        _DAT_12397ac0 = piVar1;
        _DAT_12397ac4 = piVar1;
        FUN_11a8911f(&LAB_11cacac0);
      }
      piVar1 = (int *)&DAT_12397ab4;
    }
    if (((-1 < iVar3) && (iVar3 < piVar1[6] - piVar1[5] >> 2)) &&
       (iVar2 = *(int *)(piVar1[5] + iVar3 * 4), iVar2 != 0)) {
      iVar6 = iVar6 + *(int *)(iVar2 + 0x14);
    }
    iVar3 = iVar3 + 1;
  }
  FUN_100ee470();
  iVar3 = FUN_100ee450();
  iVar7 = 0;
  iVar2 = 0;
  dVar8 = (double)iVar3 * _DAT_11de98f0;
  while( true ) {
    local_c = &PTR_FUN_11d4e90c;
    if ((DAT_123979b4 & 1) == 0) {
      DAT_123979b4 = DAT_123979b4 | 1;
      FUN_102500e0("CEquipFoundQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbe0);
    }
    piVar1 = (int *)*DAT_12397998;
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)FUN_11679e10(&local_c,"CEquipFoundQualityInfo",0), piVar1 == (int *)0x0)) {
      if ((DAT_12397aec & 1) == 0) {
        DAT_12397ab8 = 0;
        DAT_12397ac8 = 0;
        DAT_12397acc = 0;
        _DAT_12397ad0 = 0;
        uRam12397ad4 = 0;
        DAT_12397aec = DAT_12397aec | 1;
        DAT_12397ad8_4 = _UNK_11de9ae4;
        _DAT_12397ad8 = _DAT_11de9ae0;
        uRam12397ae0 = _UNK_11de9ae8;
        uRam12397ae4 = _UNK_11de9aec;
        DAT_12397ab4 = &PTR_FUN_11d4e950;
        DAT_12397ae8 = 1;
        DAT_12397abc = piVar1;
        _DAT_12397ac0 = piVar1;
        _DAT_12397ac4 = piVar1;
        FUN_11a8911f(&LAB_11cacac0);
      }
      piVar1 = (int *)&DAT_12397ab4;
    }
    local_c = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar1 + 0x28))();
    if (iVar3 <= iVar2) {
      return 0xffffffff;
    }
    local_c = &PTR_FUN_11d4e90c;
    if ((DAT_123979b4 & 1) == 0) {
      DAT_123979b4 = DAT_123979b4 | 1;
      FUN_102500e0("CEquipFoundQualityInfo::GetManagers");
      FUN_11a8911f(&LAB_11cacbe0);
    }
    piVar1 = (int *)*DAT_12397998;
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)FUN_11679e10(&local_c,"CEquipFoundQualityInfo",0), piVar1 == (int *)0x0)) {
      if ((DAT_12397aec & 1) == 0) {
        DAT_12397ab8 = 0;
        DAT_12397ac8 = 0;
        DAT_12397acc = 0;
        _DAT_12397ad0 = 0;
        uRam12397ad4 = 0;
        DAT_12397aec = DAT_12397aec | 1;
        DAT_12397ad8_4 = _UNK_11de9ae4;
        _DAT_12397ad8 = _DAT_11de9ae0;
        uRam12397ae0 = _UNK_11de9ae8;
        uRam12397ae4 = _UNK_11de9aec;
        DAT_12397ab4 = &PTR_FUN_11d4e950;
        DAT_12397ae8 = 1;
        DAT_12397abc = piVar1;
        _DAT_12397ac0 = piVar1;
        _DAT_12397ac4 = piVar1;
        FUN_11a8911f(&LAB_11cacac0);
      }
      piVar1 = (int *)&DAT_12397ab4;
    }
    if ((((-1 < iVar2) && (iVar2 < piVar1[6] - piVar1[5] >> 2)) &&
        (iVar3 = *(int *)(piVar1[5] + iVar2 * 4), iVar3 != 0)) &&
       (iVar7 = iVar7 + *(int *)(iVar3 + 0x14), (int)(dVar8 * (double)iVar6) < iVar7)) break;
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  puVar4 = (undefined4 *)0x0;
  iVar6 = 0;
  local_18 = (undefined4 *)0x0;
  do {
    while( true ) {
      local_c = &PTR_FUN_11dcef4c;
      if ((DAT_123bf3ac & 1) == 0) {
        DAT_123bf3ac = DAT_123bf3ac | 1;
        _DAT_123bf3a4 = &DAT_123bf394;
        DAT_123bf3a8 = &DAT_123bf394;
        DAT_123bf394 = 0;
        FUN_100d9260("CEquipFoundInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bf390 = (undefined4 *)FUN_100dfd90(DAT_123bf3a8);
        if (DAT_123bf390 == (undefined4 *)0x0) {
          DAT_123bf390 = (undefined4 *)FUN_100dde50(4);
          *DAT_123bf390 = 0;
          FUN_100dfdc0(DAT_123bf3a8,DAT_123bf390);
        }
        FUN_11a8911f(&LAB_11c72430);
      }
      piVar1 = (int *)*DAT_123bf390;
      if ((piVar1 == (int *)0x0) &&
         (piVar1 = (int *)FUN_11679e10(&local_c,"CEquipFoundInfo",0), piVar1 == (int *)0x0)) {
        if ((DAT_123bf34c & 1) == 0) {
          DAT_123bf354 = 0;
          DAT_123bf364 = 0;
          DAT_123bf368 = 0;
          _DAT_123bf36c = 0;
          DAT_123bf370 = 0;
          DAT_123bf34c = DAT_123bf34c | 1;
          unique0x10000399 = _UNK_11de9ae4;
          DAT_123bf374 = _DAT_11de9ae0;
          unique0x1000039d = _UNK_11de9ae8;
          unique0x100003a1 = _UNK_11de9aec;
          DAT_123bf350 = &PTR_FUN_11dcef60;
          DAT_123bf384 = 1;
          DAT_123bf358 = piVar1;
          _DAT_123bf35c = piVar1;
          _DAT_123bf360 = piVar1;
          FUN_11a8911f(&LAB_11cac9a0);
        }
        piVar1 = (int *)&DAT_123bf350;
      }
      local_c = &PTR_FUN_11da54a8;
      iVar2 = (**(code **)(*piVar1 + 0x28))();
      if (iVar2 <= iVar6) {
        if (puVar4 == (undefined4 *)0x0) {
          uVar5 = 0xffffffff;
        }
        else {
          FUN_100ee470();
          iVar3 = FUN_100ee450();
          uVar5 = *(undefined4 *)
                   ((int)((double)iVar3 * _DAT_11de98f0 * (double)((int)puVar4 >> 2)) * 4);
        }
        return uVar5;
      }
      local_c = &PTR_FUN_11dcef4c;
      if ((DAT_123bf3ac & 1) == 0) {
        DAT_123bf3ac = DAT_123bf3ac | 1;
        _DAT_123bf3a4 = &DAT_123bf394;
        DAT_123bf3a8 = &DAT_123bf394;
        DAT_123bf394 = 0;
        FUN_100d9260("CEquipFoundInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bf390 = (undefined4 *)FUN_100dfd90(DAT_123bf3a8);
        if (DAT_123bf390 == (undefined4 *)0x0) {
          DAT_123bf390 = (undefined4 *)FUN_100dde50(4);
          *DAT_123bf390 = 0;
          FUN_100dfdc0(DAT_123bf3a8,DAT_123bf390);
        }
        FUN_11a8911f(&LAB_11c72430);
      }
      piVar1 = (int *)*DAT_123bf390;
      if ((piVar1 == (int *)0x0) &&
         (piVar1 = (int *)FUN_11679e10(&local_c,"CEquipFoundInfo",0), piVar1 == (int *)0x0)) {
        if ((DAT_123bf34c & 1) == 0) {
          DAT_123bf354 = 0;
          DAT_123bf364 = 0;
          DAT_123bf368 = 0;
          _DAT_123bf36c = 0;
          DAT_123bf370 = 0;
          DAT_123bf34c = DAT_123bf34c | 1;
          unique0x100003bd = _UNK_11de9ae4;
          DAT_123bf374 = _DAT_11de9ae0;
          unique0x100003c1 = _UNK_11de9ae8;
          unique0x100003c5 = _UNK_11de9aec;
          DAT_123bf350 = &PTR_FUN_11dcef60;
          DAT_123bf384 = 1;
          DAT_123bf358 = piVar1;
          _DAT_123bf35c = piVar1;
          _DAT_123bf360 = piVar1;
          FUN_11a8911f(&LAB_11cac9a0);
        }
        piVar1 = (int *)&DAT_123bf350;
      }
      if ((((-1 < iVar6) && (iVar6 < piVar1[6] - piVar1[5] >> 2)) &&
          (iVar2 = *(int *)(piVar1[5] + iVar6 * 4), iVar2 != 0)) &&
         (((*(int *)(iVar2 + 0x14) == iVar3 && (*(int *)(iVar2 + 0x18) <= param_1)) &&
          (param_1 <= *(int *)(iVar2 + 0x1c))))) break;
LAB_11836ed3:
      iVar6 = iVar6 + 1;
    }
    local_c = *(undefined ***)(iVar2 + 0x10);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_10463c40(0,&local_c,&local_5,1,1);
      puVar4 = local_18;
      goto LAB_11836ed3;
    }
    *puVar4 = local_c;
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + 1;
    local_18 = puVar4;
  } while( true );
}



