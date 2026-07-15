// ===== class CVehicleAmmoInfo  (4 recovered methods) =====

/* --- CVehicleAmmoInfo::GetManagers @ 11062e20 --- */
// [RE-AUTO c3]
// id: CVehicleAmmoInfo::GetManagers
// strings:
//   ""CVehicleAmmoInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVehicleAmmoInfo::GetManagers
   strings:
     ""CVehicleAmmoInfo::GetManagers"" */

undefined * CVehicleAmmoInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d0cb04;
  if (param_3 == 0) {
    if ((DAT_1203e544 & 1) == 0) {
      DAT_1203e544 = DAT_1203e544 | 1;
      FUN_102500e0("CVehicleAmmoInfo::GetManagers");
      FUN_11a8911f(&LAB_11c94970);
    }
    if ((undefined *)*DAT_1203e528 != (undefined *)0x0) {
      return (undefined *)*DAT_1203e528;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203e588 & 1) == 0) {
      DAT_1203e588 = DAT_1203e588 | 1;
      FUN_11063360();
      FUN_11a8911f(&LAB_11c94910);
    }
    puVar1 = &DAT_1203e550;
  }
  return puVar1;
}



/* --- CVehicleAmmoInfo::GetManagers_11063cb0 @ 11063cb0 --- */
// [RE-AUTO c3]
// id: CVehicleAmmoInfo::GetManagers
// strings:
//   ""CVehicleAmmoInfo::GetManagers""

/* [RE-AUTO c3]
   id: CVehicleAmmoInfo::GetManagers
   strings:
     ""CVehicleAmmoInfo::GetManagers"" */

undefined4 CVehicleAmmoInfo__GetManagers_11063cb0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203e544 & 1) == 0) {
      DAT_1203e544 = DAT_1203e544 | 1;
      FUN_102500e0("CVehicleAmmoInfo::GetManagers");
      FUN_11a8911f(&LAB_11c94970);
    }
    return *DAT_1203e528;
  }
  return 0;
}



/* --- CVehicleAmmoInfo::GetManagers_1156ede0 @ 1156ede0 --- */
// [RE-AUTO c3]
// id: CVehicleAmmoInfo::GetManagers
// strings:
//   ""CVehicleAmmoInfo::GetManagers""
//   ""CVehicleAmmoInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CVehicleAmmoInfo::GetManagers
   strings:
     ""CVehicleAmmoInfo::GetManagers""
     ""CVehicleAmmoInfo"" */

undefined4 __thiscall CVehicleAmmoInfo__GetManagers_1156ede0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  undefined **local_8;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar7 = *(int **)(param_1 + 4);
  do {
    if (piVar7 == piVar1) {
      return 0;
    }
    piVar2 = (int *)*piVar7;
    if (((piVar2[1] == -1) && ((char)piVar2[3] == '\0')) || (0 < piVar2[1])) {
      iVar6 = *piVar2;
      local_8 = &PTR_FUN_11d0cb04;
      if ((DAT_1203e544 & 1) == 0) {
        DAT_1203e544 = DAT_1203e544 | 1;
        FUN_102500e0("CVehicleAmmoInfo::GetManagers");
        FUN_11a8911f(&LAB_11c94970);
      }
      puVar5 = (undefined *)*DAT_1203e528;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&local_8,"CVehicleAmmoInfo",0),
         puVar5 == (undefined *)0x0)) {
        if ((DAT_1203e588 & 1) == 0) {
          DAT_1203e554 = 0;
          DAT_1203e564 = 0;
          uRam1203e568 = 0;
          _DAT_1203e56c = 0;
          DAT_1203e570 = 0;
          DAT_1203e588 = DAT_1203e588 | 1;
          _DAT_1203e550 = &PTR_FUN_11d0cb40;
          DAT_1203e574 = _DAT_11de9ae0;
          DAT_1203e578 = _UNK_11de9ae4;
          uRam1203e57c = _UNK_11de9ae8;
          DAT_1203e580 = _UNK_11de9aec;
          DAT_1203e584 = 1;
          DAT_1203e558 = puVar5;
          _DAT_1203e55c = puVar5;
          _DAT_1203e560 = puVar5;
          FUN_11a8911f(&LAB_11ca2590);
        }
        puVar5 = &DAT_1203e550;
      }
      if ((((iVar6 != -1) && ((iVar6 != 0 || (*(int *)(puVar5 + 0x30) == 0)))) &&
          (iVar3 = *(int *)(puVar5 + 0x28), iVar3 != 0)) &&
         ((iVar6 = iVar6 - *(int *)(puVar5 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(puVar5 + 0x24)))
         )) {
        iVar4 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / iVar3) * 4);
        if ((iVar4 != 0) &&
           ((iVar6 = *(int *)(iVar4 + (iVar6 % iVar3) * 4), iVar6 != 0 &&
            (param_2 == *(int *)(iVar6 + 0x88))))) {
          return *(undefined4 *)*piVar7;
        }
      }
    }
    piVar7 = piVar7 + 1;
  } while( true );
}



/* --- CVehicleAmmoInfo::GetManagers_1156f350 @ 1156f350 --- */
// [RE-AUTO c3]
// id: CVehicleAmmoInfo::GetManagers
// strings:
//   ""CVehicleAmmoInfo::GetManagers""
//   ""CVehicleAmmoInfo""

/* WARNING: Removing unreachable block (ram,0x1156f4b6) */
/* WARNING: Removing unreachable block (ram,0x1156f4be) */
/* WARNING: Removing unreachable block (ram,0x1156f4cd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CVehicleAmmoInfo::GetManagers
   strings:
     ""CVehicleAmmoInfo::GetManagers""
     ""CVehicleAmmoInfo"" */

void __thiscall
CVehicleAmmoInfo__GetManagers_1156f350(int param_1,int param_2,int param_3,undefined **param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  do {
    if (piVar4 == *(int **)(param_1 + 8)) {
LAB_1156f38c:
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x10);
    }
    piVar1 = (int *)*piVar4;
    if (*piVar1 == param_2) {
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_2;
        piVar1[1] = 0;
        piVar1[2] = param_3;
        *(undefined1 *)(piVar1 + 3) = param_4._0_1_;
        param_4 = &PTR_FUN_11d0cb04;
        if ((DAT_1203e544 & 1) == 0) {
          DAT_1203e544 = DAT_1203e544 | 1;
          FUN_102500e0("CVehicleAmmoInfo::GetManagers");
          FUN_11a8911f(&LAB_11c94970);
        }
        puVar3 = (undefined *)*DAT_1203e528;
        if ((puVar3 == (undefined *)0x0) &&
           (puVar3 = (undefined *)FUN_11679e10(&param_4,"CVehicleAmmoInfo",0),
           puVar3 == (undefined *)0x0)) {
          if ((DAT_1203e588 & 1) == 0) {
            DAT_1203e554 = 0;
            DAT_1203e564 = 0;
            uRam1203e568 = 0;
            _DAT_1203e56c = 0;
            DAT_1203e570 = 0;
            DAT_1203e588 = DAT_1203e588 | 1;
            _DAT_1203e550 = &PTR_FUN_11d0cb40;
            DAT_1203e574 = _DAT_11de9ae0;
            DAT_1203e578 = _UNK_11de9ae4;
            uRam1203e57c = _UNK_11de9ae8;
            DAT_1203e580 = _UNK_11de9aec;
            DAT_1203e584 = 1;
            DAT_1203e558 = puVar3;
            _DAT_1203e55c = puVar3;
            _DAT_1203e560 = puVar3;
            FUN_11a8911f(&LAB_11ca2590);
          }
          puVar3 = &DAT_1203e550;
        }
        if (((param_2 != -1) &&
            (((param_2 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0))))
           && ((param_2 = param_2 - *(int *)(puVar3 + 0x30), -1 < param_2 &&
               (param_2 < *(int *)(puVar3 + 0x24))))) {
          iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (param_2 / *(int *)(puVar3 + 0x28)) * 4);
          if ((iVar2 != 0) &&
             (iVar2 = *(int *)(iVar2 + (param_2 % *(int *)(puVar3 + 0x28)) * 4), iVar2 != 0)) {
            piVar1[1] = *(int *)(iVar2 + 0x58);
          }
        }
        return;
      }
      goto LAB_1156f38c;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}



