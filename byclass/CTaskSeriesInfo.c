// ===== class CTaskSeriesInfo  (7 recovered methods) =====

/* --- CTaskSeriesInfo::GetManagers @ 117c0970 --- */
// [RE-AUTO c3]
// id: CTaskSeriesInfo::GetManagers
// strings:
//   ""CTaskSeriesInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskSeriesInfo::GetManagers
   strings:
     ""CTaskSeriesInfo::GetManagers"" */

undefined * CTaskSeriesInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d49354;
  if (param_3 == 0) {
    if ((DAT_12392be8 & 1) == 0) {
      DAT_12392be8 = DAT_12392be8 | 1;
      FUN_102500e0("CTaskSeriesInfo::GetManagers");
      FUN_11a8911f(&LAB_11caa790);
    }
    if ((undefined *)*DAT_12392bcc != (undefined *)0x0) {
      return (undefined *)*DAT_12392bcc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12392c2c & 1) == 0) {
      DAT_12392c2c = DAT_12392c2c | 1;
      FUN_117c0c50();
      FUN_11a8911f(&LAB_11caa730);
    }
    puVar1 = &DAT_12392bf4;
  }
  return puVar1;
}



/* --- CTaskSeriesInfo::GetManagers_117c1690 @ 117c1690 --- */
// [RE-AUTO c3]
// id: CTaskSeriesInfo::GetManagers
// strings:
//   ""CTaskSeriesInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskSeriesInfo::GetManagers
   strings:
     ""CTaskSeriesInfo::GetManagers"" */

undefined4 CTaskSeriesInfo__GetManagers_117c1690(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12392be8 & 1) == 0) {
      DAT_12392be8 = DAT_12392be8 | 1;
      FUN_102500e0("CTaskSeriesInfo::GetManagers");
      FUN_11a8911f(&LAB_11caa790);
    }
    return *DAT_12392bcc;
  }
  return 0;
}



/* --- CTaskSeriesInfo::GetManagers_118a87d0 @ 118a87d0 --- */
// [RE-AUTO c3]
// id: CTaskSeriesInfo::GetManagers
// strings:
//   ""CTaskSeriesInfo::GetManagers""
//   ""CTaskSeriesInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskSeriesInfo::GetManagers
   strings:
     ""CTaskSeriesInfo::GetManagers""
     ""CTaskSeriesInfo"" */

undefined4 __thiscall
CTaskSeriesInfo__GetManagers_118a87d0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_8;
  
  piVar6 = *(int **)(*(int *)(param_1 + 0x2c) + 0x2c);
  if (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x30)) {
    do {
      iVar5 = *piVar6;
      local_8 = &PTR_FUN_11d49354;
      if ((DAT_12392be8 & 1) == 0) {
        DAT_12392be8 = DAT_12392be8 | 1;
        FUN_102500e0("CTaskSeriesInfo::GetManagers");
        FUN_11a8911f(&LAB_11caa790);
      }
      puVar4 = (undefined *)*DAT_12392bcc;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskSeriesInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12392c2c & 1) == 0) {
          DAT_12392bf8 = 0;
          DAT_12392c08 = 0;
          DAT_12392c0c = 0;
          _DAT_12392c10 = 0;
          DAT_12392c14 = 0;
          DAT_12392c2c = DAT_12392c2c | 1;
          _DAT_12392bf4 = &PTR_FUN_11d4938c;
          DAT_12392c18 = _DAT_11de9ae0;
          DAT_12392c1c = _UNK_11de9ae4;
          uRam12392c20 = _UNK_11de9ae8;
          DAT_12392c24 = _UNK_11de9aec;
          DAT_12392c28 = 1;
          DAT_12392bfc = puVar4;
          _DAT_12392c00 = puVar4;
          _DAT_12392c04 = puVar4;
          FUN_11a8911f(&LAB_11caf0f0);
        }
        puVar4 = &DAT_12392bf4;
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
            (cVar3 = FUN_119d88b0(param_2), cVar3 != '\0')))) {
          *param_3 = iVar5;
          return 1;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x30));
  }
  *param_3 = 0;
  return 0;
}



/* --- CTaskSeriesInfo::GetManagers_118a8980 @ 118a8970 --- */
// [RE-AUTO c0]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __fastcall CTaskSeriesInfo__GetManagers_118a8980(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **ppuStack_c;
  undefined1 uStack_5;
  
  piVar6 = *(int **)(*(int *)(param_1 + 0x2c) + 0x2c);
  if (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x30)) {
    do {
      iVar5 = *piVar6;
      ppuStack_c = &PTR_FUN_11d49354;
      if ((DAT_12392be8 & 1) == 0) {
        DAT_12392be8 = DAT_12392be8 | 1;
        FUN_102500e0("CTaskSeriesInfo::GetManagers");
        FUN_11a8911f(&LAB_11caa790);
      }
      puVar4 = (undefined *)*DAT_12392bcc;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&ppuStack_c,"CTaskSeriesInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12392c2c & 1) == 0) {
          DAT_12392bf8 = 0;
          DAT_12392c08 = 0;
          DAT_12392c0c = 0;
          _DAT_12392c10 = 0;
          DAT_12392c14 = 0;
          DAT_12392c2c = DAT_12392c2c | 1;
          _DAT_12392bf4 = &PTR_FUN_11d4938c;
          DAT_12392c18 = _DAT_11de9ae0;
          DAT_12392c1c = _UNK_11de9ae4;
          uRam12392c20 = _UNK_11de9ae8;
          DAT_12392c24 = _UNK_11de9aec;
          DAT_12392c28 = 1;
          DAT_12392bfc = puVar4;
          _DAT_12392c00 = puVar4;
          _DAT_12392c04 = puVar4;
          FUN_11a8911f(&LAB_11caf0f0);
        }
        puVar4 = &DAT_12392bf4;
      }
      if ((iVar5 != -1) &&
         (((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
          (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)))) {
        iVar5 = iVar5 - *(int *)(puVar4 + 0x30);
        if ((iVar5 < 0) || (*(int *)(puVar4 + 0x24) <= iVar5)) {
LAB_118a8a9e:
          ppuStack_c = (undefined **)0x0;
        }
        else {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if (iVar2 == 0) goto LAB_118a8a9e;
          ppuStack_c = *(undefined ***)(iVar2 + (iVar5 % iVar1) * 4);
        }
        if (ppuStack_c != (undefined **)0x0) {
          piVar3 = *(int **)(param_1 + 0x34);
          if (piVar3 == *(int **)(param_1 + 0x38)) {
            FUN_118a8c10(piVar3,&ppuStack_c,&uStack_5,1,1);
          }
          else {
            *piVar3 = (int)ppuStack_c;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x30));
  }
  return;
}



/* --- CTaskSeriesInfo::GetManagers_118a8980 @ 118a8980 --- */
// [RE-AUTO c3]
// id: CTaskSeriesInfo::GetManagers
// strings:
//   ""CTaskSeriesInfo::GetManagers""
//   ""CTaskSeriesInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskSeriesInfo::GetManagers
   strings:
     ""CTaskSeriesInfo::GetManagers""
     ""CTaskSeriesInfo"" */

void __fastcall CTaskSeriesInfo__GetManagers_118a8980(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_c;
  undefined1 local_5;
  
  piVar6 = *(int **)(*(int *)(param_1 + 0x2c) + 0x2c);
  if (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x30)) {
    do {
      iVar5 = *piVar6;
      local_c = &PTR_FUN_11d49354;
      if ((DAT_12392be8 & 1) == 0) {
        DAT_12392be8 = DAT_12392be8 | 1;
        FUN_102500e0("CTaskSeriesInfo::GetManagers");
        FUN_11a8911f(&LAB_11caa790);
      }
      puVar4 = (undefined *)*DAT_12392bcc;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CTaskSeriesInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_12392c2c & 1) == 0) {
          DAT_12392bf8 = 0;
          DAT_12392c08 = 0;
          DAT_12392c0c = 0;
          _DAT_12392c10 = 0;
          DAT_12392c14 = 0;
          DAT_12392c2c = DAT_12392c2c | 1;
          _DAT_12392bf4 = &PTR_FUN_11d4938c;
          DAT_12392c18 = _DAT_11de9ae0;
          DAT_12392c1c = _UNK_11de9ae4;
          uRam12392c20 = _UNK_11de9ae8;
          DAT_12392c24 = _UNK_11de9aec;
          DAT_12392c28 = 1;
          DAT_12392bfc = puVar4;
          _DAT_12392c00 = puVar4;
          _DAT_12392c04 = puVar4;
          FUN_11a8911f(&LAB_11caf0f0);
        }
        puVar4 = &DAT_12392bf4;
      }
      if ((iVar5 != -1) &&
         (((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
          (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)))) {
        iVar5 = iVar5 - *(int *)(puVar4 + 0x30);
        if ((iVar5 < 0) || (*(int *)(puVar4 + 0x24) <= iVar5)) {
LAB_118a8a9e:
          local_c = (undefined **)0x0;
        }
        else {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if (iVar2 == 0) goto LAB_118a8a9e;
          local_c = *(undefined ***)(iVar2 + (iVar5 % iVar1) * 4);
        }
        if (local_c != (undefined **)0x0) {
          piVar3 = *(int **)(param_1 + 0x34);
          if (piVar3 == *(int **)(param_1 + 0x38)) {
            FUN_118a8c10(piVar3,&local_c,&local_5,1,1);
          }
          else {
            *piVar3 = (int)local_c;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(*(int *)(param_1 + 0x2c) + 0x30));
  }
  return;
}



/* --- CTaskSeriesInfo::GetManagers_11905100 @ 11905100 --- */
// [RE-AUTO c3]
// id: CTaskSeriesInfo::GetManagers
// calls: CTaskSeriesInfo::GetManagers
// strings:
//   ""CTaskSeriesInfo""
//   ""CTaskSeriesInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskSeriesInfo::GetManagers
   calls: CTaskSeriesInfo::GetManagers
   strings:
     ""CTaskSeriesInfo""
     ""CTaskSeriesInfo::GetManagers"" */

void CTaskSeriesInfo__GetManagers_11905100(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CTaskSeriesInfo__GetManagers(0,"CTaskSeriesInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d49354;
      if ((DAT_12392be8 & 1) == 0) {
        DAT_12392be8 = DAT_12392be8 | 1;
        FUN_102500e0("CTaskSeriesInfo::GetManagers");
        FUN_11a8911f(&LAB_11caa790);
      }
      if (((*DAT_12392bcc == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskSeriesInfo",0), iVar3 == 0))
         && ((DAT_12392c2c & 1) == 0)) {
        DAT_12392bf8 = 0;
        DAT_12392c08 = 0;
        DAT_12392c0c = 0;
        _DAT_12392c10 = 0;
        DAT_12392c14 = 0;
        DAT_12392c2c = DAT_12392c2c | 1;
        _DAT_12392bf4 = &PTR_FUN_11d4938c;
        DAT_12392c18 = _DAT_11de9ae0;
        DAT_12392c1c = _UNK_11de9ae4;
        uRam12392c20 = _UNK_11de9ae8;
        DAT_12392c24 = _UNK_11de9aec;
        DAT_12392c28 = 1;
        DAT_12392bfc = iVar3;
        _DAT_12392c00 = iVar3;
        _DAT_12392c04 = iVar3;
        FUN_11a8911f(&LAB_11cb0e70);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_119d8c40();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskSeriesInfo::GetManagers_11905250 @ 11905250 --- */
// [RE-AUTO c3]
// id: CTaskSeriesInfo::GetManagers
// calls: CTaskSeriesInfo::GetManagers
// strings:
//   ""CTaskSeriesInfo""
//   ""CTaskSeriesInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskSeriesInfo::GetManagers
   calls: CTaskSeriesInfo::GetManagers
   strings:
     ""CTaskSeriesInfo""
     ""CTaskSeriesInfo::GetManagers"" */

void CTaskSeriesInfo__GetManagers_11905250(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)CTaskSeriesInfo__GetManagers(0,"CTaskSeriesInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d49354;
      if ((DAT_12392be8 & 1) == 0) {
        DAT_12392be8 = DAT_12392be8 | 1;
        FUN_102500e0("CTaskSeriesInfo::GetManagers");
        FUN_11a8911f(&LAB_11caa790);
      }
      if (((*DAT_12392bcc == 0) && (iVar4 = FUN_11679e10(&param_1,"CTaskSeriesInfo",0), iVar4 == 0))
         && ((DAT_12392c2c & 1) == 0)) {
        DAT_12392bf8 = 0;
        DAT_12392c08 = 0;
        DAT_12392c0c = 0;
        _DAT_12392c10 = 0;
        DAT_12392c14 = 0;
        DAT_12392c2c = DAT_12392c2c | 1;
        _DAT_12392bf4 = &PTR_FUN_11d4938c;
        DAT_12392c18 = _DAT_11de9ae0;
        DAT_12392c1c = _UNK_11de9ae4;
        uRam12392c20 = _UNK_11de9ae8;
        DAT_12392c24 = _UNK_11de9aec;
        DAT_12392c28 = 1;
        DAT_12392bfc = iVar4;
        _DAT_12392c00 = iVar4;
        _DAT_12392c04 = iVar4;
        FUN_11a8911f(&LAB_11cb0e70);
      }
      param_1 = &PTR_FUN_11da54a8;
      FUN_119d8a40(uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



