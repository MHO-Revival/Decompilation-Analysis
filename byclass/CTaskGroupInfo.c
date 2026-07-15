// ===== class CTaskGroupInfo  (7 recovered methods) =====

/* --- CTaskGroupInfo::GetManagers @ 11745800 --- */
// [RE-AUTO c3]
// id: CTaskGroupInfo::GetManagers
// strings:
//   ""CTaskGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskGroupInfo::GetManagers
   strings:
     ""CTaskGroupInfo::GetManagers"" */

undefined * CTaskGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d458e8;
  if (param_3 == 0) {
    if ((DAT_12390e68 & 1) == 0) {
      DAT_12390e68 = DAT_12390e68 | 1;
      FUN_102500e0("CTaskGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca97e0);
    }
    if ((undefined *)*DAT_12390e4c != (undefined *)0x0) {
      return (undefined *)*DAT_12390e4c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12390eac & 1) == 0) {
      DAT_12390eac = DAT_12390eac | 1;
      FUN_11745ad0();
      FUN_11a8911f(&LAB_11ca9720);
    }
    puVar1 = &DAT_12390e74;
  }
  return puVar1;
}



/* --- CTaskGroupInfo::GetManagers_117460f0 @ 117460f0 --- */
// [RE-AUTO c3]
// id: CTaskGroupInfo::GetManagers
// strings:
//   ""CTaskGroupInfo::GetManagers""
//   ""CTaskGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskGroupInfo::GetManagers
   strings:
     ""CTaskGroupInfo::GetManagers""
     ""CTaskGroupInfo"" */

undefined4 __thiscall
CTaskGroupInfo__GetManagers_117460f0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_8;
  
  piVar6 = *(int **)(*(int *)(param_1 + 0x2c) + 0x3c);
  if (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x40)) {
    do {
      iVar5 = *piVar6;
      local_8 = &PTR_FUN_11d458e8;
      if ((DAT_12390e68 & 1) == 0) {
        DAT_12390e68 = DAT_12390e68 | 1;
        FUN_102500e0("CTaskGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca97e0);
      }
      puVar4 = (undefined *)*DAT_12390e4c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12390eac & 1) == 0) {
          DAT_12390e78 = 0;
          DAT_12390e88 = 0;
          DAT_12390e8c = 0;
          _DAT_12390e90 = 0;
          DAT_12390e94 = 0;
          DAT_12390eac = DAT_12390eac | 1;
          _DAT_12390e74 = &PTR_FUN_11d4590c;
          DAT_12390e98 = _DAT_11de9ae0;
          DAT_12390e9c = _UNK_11de9ae4;
          uRam12390ea0 = _UNK_11de9ae8;
          DAT_12390ea4 = _UNK_11de9aec;
          DAT_12390ea8 = 1;
          DAT_12390e7c = puVar4;
          _DAT_12390e80 = puVar4;
          _DAT_12390e84 = puVar4;
          FUN_11a8911f(&LAB_11ca9720);
        }
        puVar4 = &DAT_12390e74;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)) &&
          ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar4 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0 &&
            (cVar3 = FUN_11722800(param_2), cVar3 != '\0')))) {
          *param_3 = iVar5;
          return 1;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x40));
  }
  *param_3 = 0;
  return 0;
}



/* --- CTaskGroupInfo::GetManagers_11746b90 @ 11746b90 --- */
// [RE-AUTO c3]
// id: CTaskGroupInfo::GetManagers
// strings:
//   ""CTaskGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskGroupInfo::GetManagers
   strings:
     ""CTaskGroupInfo::GetManagers"" */

undefined4 CTaskGroupInfo__GetManagers_11746b90(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12390e68 & 1) == 0) {
      DAT_12390e68 = DAT_12390e68 | 1;
      FUN_102500e0("CTaskGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca97e0);
    }
    return *DAT_12390e4c;
  }
  return 0;
}



/* --- CTaskGroupInfo::GetManagers_117472a0 @ 11747290 --- */
// [RE-AUTO c0]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __fastcall CTaskGroupInfo__GetManagers_117472a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **ppuStack_c;
  undefined1 uStack_5;
  
  piVar6 = *(int **)(*(int *)(param_1 + 0x2c) + 0x3c);
  if (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x40)) {
    do {
      iVar5 = *piVar6;
      ppuStack_c = &PTR_FUN_11d458e8;
      if ((DAT_12390e68 & 1) == 0) {
        DAT_12390e68 = DAT_12390e68 | 1;
        FUN_102500e0("CTaskGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca97e0);
      }
      puVar4 = (undefined *)*DAT_12390e4c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&ppuStack_c,"CTaskGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12390eac & 1) == 0) {
          DAT_12390e78 = 0;
          DAT_12390e88 = 0;
          DAT_12390e8c = 0;
          _DAT_12390e90 = 0;
          DAT_12390e94 = 0;
          DAT_12390eac = DAT_12390eac | 1;
          _DAT_12390e74 = &PTR_FUN_11d4590c;
          DAT_12390e98 = _DAT_11de9ae0;
          DAT_12390e9c = _UNK_11de9ae4;
          uRam12390ea0 = _UNK_11de9ae8;
          DAT_12390ea4 = _UNK_11de9aec;
          DAT_12390ea8 = 1;
          DAT_12390e7c = puVar4;
          _DAT_12390e80 = puVar4;
          _DAT_12390e84 = puVar4;
          FUN_11a8911f(&LAB_11ca9720);
        }
        puVar4 = &DAT_12390e74;
      }
      if ((iVar5 != -1) &&
         (((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
          (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)))) {
        iVar5 = iVar5 - *(int *)(puVar4 + 0x30);
        if ((iVar5 < 0) || (*(int *)(puVar4 + 0x24) <= iVar5)) {
LAB_117473be:
          ppuStack_c = (undefined **)0x0;
        }
        else {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if (iVar2 == 0) goto LAB_117473be;
          ppuStack_c = *(undefined ***)(iVar2 + (iVar5 % iVar1) * 4);
        }
        if (ppuStack_c != (undefined **)0x0) {
          piVar3 = *(int **)(param_1 + 0x34);
          if (piVar3 == *(int **)(param_1 + 0x38)) {
            FUN_117476e0(piVar3,&ppuStack_c,&uStack_5,1,1);
          }
          else {
            *piVar3 = (int)ppuStack_c;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x40));
  }
  return;
}



/* --- CTaskGroupInfo::GetManagers_117472a0 @ 117472a0 --- */
// [RE-AUTO c3]
// id: CTaskGroupInfo::GetManagers
// strings:
//   ""CTaskGroupInfo::GetManagers""
//   ""CTaskGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskGroupInfo::GetManagers
   strings:
     ""CTaskGroupInfo::GetManagers""
     ""CTaskGroupInfo"" */

void __fastcall CTaskGroupInfo__GetManagers_117472a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_c;
  undefined1 local_5;
  
  piVar6 = *(int **)(*(int *)(param_1 + 0x2c) + 0x3c);
  if (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x40)) {
    do {
      iVar5 = *piVar6;
      local_c = &PTR_FUN_11d458e8;
      if ((DAT_12390e68 & 1) == 0) {
        DAT_12390e68 = DAT_12390e68 | 1;
        FUN_102500e0("CTaskGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca97e0);
      }
      puVar4 = (undefined *)*DAT_12390e4c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CTaskGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12390eac & 1) == 0) {
          DAT_12390e78 = 0;
          DAT_12390e88 = 0;
          DAT_12390e8c = 0;
          _DAT_12390e90 = 0;
          DAT_12390e94 = 0;
          DAT_12390eac = DAT_12390eac | 1;
          _DAT_12390e74 = &PTR_FUN_11d4590c;
          DAT_12390e98 = _DAT_11de9ae0;
          DAT_12390e9c = _UNK_11de9ae4;
          uRam12390ea0 = _UNK_11de9ae8;
          DAT_12390ea4 = _UNK_11de9aec;
          DAT_12390ea8 = 1;
          DAT_12390e7c = puVar4;
          _DAT_12390e80 = puVar4;
          _DAT_12390e84 = puVar4;
          FUN_11a8911f(&LAB_11ca9720);
        }
        puVar4 = &DAT_12390e74;
      }
      if ((iVar5 != -1) &&
         (((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
          (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)))) {
        iVar5 = iVar5 - *(int *)(puVar4 + 0x30);
        if ((iVar5 < 0) || (*(int *)(puVar4 + 0x24) <= iVar5)) {
LAB_117473be:
          local_c = (undefined **)0x0;
        }
        else {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if (iVar2 == 0) goto LAB_117473be;
          local_c = *(undefined ***)(iVar2 + (iVar5 % iVar1) * 4);
        }
        if (local_c != (undefined **)0x0) {
          piVar3 = *(int **)(param_1 + 0x34);
          if (piVar3 == *(int **)(param_1 + 0x38)) {
            FUN_117476e0(piVar3,&local_c,&local_5,1,1);
          }
          else {
            *piVar3 = (int)local_c;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x40));
  }
  return;
}



/* --- CTaskGroupInfo::GetManagers_11906270 @ 11906270 --- */
// [RE-AUTO c3]
// id: CTaskGroupInfo::GetManagers
// calls: CTaskGroupInfo::GetManagers
// strings:
//   ""CTaskGroupInfo""
//   ""CTaskGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskGroupInfo::GetManagers
   calls: CTaskGroupInfo::GetManagers
   strings:
     ""CTaskGroupInfo""
     ""CTaskGroupInfo::GetManagers"" */

void CTaskGroupInfo__GetManagers_11906270(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskGroupInfo__GetManagers(0,"CTaskGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d458e8;
      if ((DAT_12390e68 & 1) == 0) {
        DAT_12390e68 = DAT_12390e68 | 1;
        FUN_102500e0("CTaskGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca97e0);
      }
      if (((*DAT_12390e4c == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskGroupInfo",0), iVar3 == 0))
         && ((DAT_12390eac & 1) == 0)) {
        DAT_12390e78 = 0;
        DAT_12390e88 = 0;
        DAT_12390e8c = 0;
        _DAT_12390e90 = 0;
        DAT_12390e94 = 0;
        DAT_12390eac = DAT_12390eac | 1;
        _DAT_12390e74 = &PTR_FUN_11d4590c;
        DAT_12390e98 = _DAT_11de9ae0;
        DAT_12390e9c = _UNK_11de9ae4;
        uRam12390ea0 = _UNK_11de9ae8;
        DAT_12390ea4 = _UNK_11de9aec;
        DAT_12390ea8 = 1;
        DAT_12390e7c = iVar3;
        _DAT_12390e80 = iVar3;
        _DAT_12390e84 = iVar3;
        FUN_11a8911f(&LAB_11cb0f30);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11722e20();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskGroupInfo::GetManagers_119063c0 @ 119063c0 --- */
// [RE-AUTO c3]
// id: CTaskGroupInfo::GetManagers
// calls: CTaskGroupInfo::GetManagers, CTaskBountyLevelInfo::GetManagers_11722bc0
// strings:
//   ""CTaskGroupInfo""
//   ""CTaskGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskGroupInfo::GetManagers
   calls: CTaskGroupInfo::GetManagers, CTaskBountyLevelInfo::GetManagers_11722bc0
   strings:
     ""CTaskGroupInfo""
     ""CTaskGroupInfo::GetManagers"" */

void CTaskGroupInfo__GetManagers_119063c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskGroupInfo__GetManagers(0,"CTaskGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d458e8;
      if ((DAT_12390e68 & 1) == 0) {
        DAT_12390e68 = DAT_12390e68 | 1;
        FUN_102500e0("CTaskGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca97e0);
      }
      if (((*DAT_12390e4c == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskGroupInfo",0), iVar3 == 0))
         && ((DAT_12390eac & 1) == 0)) {
        DAT_12390e78 = 0;
        DAT_12390e88 = 0;
        DAT_12390e8c = 0;
        _DAT_12390e90 = 0;
        DAT_12390e94 = 0;
        DAT_12390eac = DAT_12390eac | 1;
        _DAT_12390e74 = &PTR_FUN_11d4590c;
        DAT_12390e98 = _DAT_11de9ae0;
        DAT_12390e9c = _UNK_11de9ae4;
        uRam12390ea0 = _UNK_11de9ae8;
        DAT_12390ea4 = _UNK_11de9aec;
        DAT_12390ea8 = 1;
        DAT_12390e7c = iVar3;
        _DAT_12390e80 = iVar3;
        _DAT_12390e84 = iVar3;
        FUN_11a8911f(&LAB_11cb0f30);
      }
      local_8 = &PTR_FUN_11da54a8;
      CTaskBountyLevelInfo__GetManagers_11722bc0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



