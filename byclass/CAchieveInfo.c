// ===== class CAchieveInfo  (5 recovered methods) =====

/* --- CAchieveInfo::GetManagers @ 108bad40 --- */
// [RE-AUTO c3]
// id: CAchieveInfo::GetManagers
// strings:
//   ""CAchieveInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveInfo::GetManagers
   strings:
     ""CAchieveInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CAchieveInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfb5c & 1) == 0) {
    DAT_123bfb5c = DAT_123bfb5c | 1;
    _DAT_123bfb54 = &DAT_123bfb44;
    DAT_123bfb58 = &DAT_123bfb44;
    DAT_123bfb44 = 0;
    FUN_100d83d0("CAchieveInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c753f0);
  }
  return DAT_123bfb40;
}



/* --- CAchieveInfo::GetManagers_119c9230 @ 119c9230 --- */
// [RE-AUTO c3]
// id: CAchieveInfo::GetManagers
// strings:
//   ""CAchieveInfo""
//   ""CAchieveInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveInfo::GetManagers
   strings:
     ""CAchieveInfo""
     ""CAchieveInfo::GetManagers"" */

void CAchieveInfo__GetManagers_119c9230(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108c6a40(0,"CAchieveInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd58c0;
      if ((DAT_123bfb5c & 1) == 0) {
        DAT_123bfb5c = DAT_123bfb5c | 1;
        FUN_102500e0("CAchieveInfo::GetManagers");
        FUN_11a8911f(&LAB_11c753f0);
      }
      if (((*DAT_123bfb40 == 0) && (iVar3 = FUN_11679e10(&local_8,"CAchieveInfo",0), iVar3 == 0)) &&
         ((DAT_123bfaf0 & 1) == 0)) {
        DAT_123bfabc = 0;
        DAT_123bfacc = 0;
        DAT_123bfad0 = 0;
        _DAT_123bfad4 = 0;
        DAT_123bfad8 = 0;
        DAT_123bfaf0 = DAT_123bfaf0 | 1;
        _DAT_123bfab8 = &PTR_FUN_11dd5934;
        DAT_123bfadc = _DAT_11de9ae0;
        DAT_123bfae0 = _UNK_11de9ae4;
        uRam123bfae4 = _UNK_11de9ae8;
        DAT_123bfae8 = _UNK_11de9aec;
        DAT_123bfaec = 1;
        DAT_123bfac0 = iVar3;
        _DAT_123bfac4 = iVar3;
        _DAT_123bfac8 = iVar3;
        FUN_11a8911f(&LAB_11cb4a10);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a82690();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAchieveInfo::GetManagers_119c9380 @ 119c9380 --- */
// [RE-AUTO c3]
// id: CAchieveInfo::GetManagers
// strings:
//   ""CAchieveInfo""
//   ""CAchieveInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveInfo::GetManagers
   strings:
     ""CAchieveInfo""
     ""CAchieveInfo::GetManagers"" */

void CAchieveInfo__GetManagers_119c9380(undefined **param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_108c6a40(0,"CAchieveInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  ppuVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd58c0;
      if ((DAT_123bfb5c & 1) == 0) {
        DAT_123bfb5c = DAT_123bfb5c | 1;
        FUN_102500e0("CAchieveInfo::GetManagers");
        FUN_11a8911f(&LAB_11c753f0);
      }
      if (((*DAT_123bfb40 == 0) && (iVar4 = FUN_11679e10(&param_1,"CAchieveInfo",0), iVar4 == 0)) &&
         ((DAT_123bfaf0 & 1) == 0)) {
        DAT_123bfabc = 0;
        DAT_123bfacc = 0;
        DAT_123bfad0 = 0;
        _DAT_123bfad4 = 0;
        DAT_123bfad8 = 0;
        DAT_123bfaf0 = DAT_123bfaf0 | 1;
        _DAT_123bfab8 = &PTR_FUN_11dd5934;
        DAT_123bfadc = _DAT_11de9ae0;
        DAT_123bfae0 = _UNK_11de9ae4;
        uRam123bfae4 = _UNK_11de9ae8;
        DAT_123bfae8 = _UNK_11de9aec;
        DAT_123bfaec = 1;
        DAT_123bfac0 = iVar4;
        _DAT_123bfac4 = iVar4;
        _DAT_123bfac8 = iVar4;
        FUN_11a8911f(&LAB_11cb4a10);
      }
      param_1 = &PTR_FUN_11da54a8;
      CItemBaseInfo__GetManagers_11a82370(ppuVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  FUN_11a82d00();
  return;
}



/* --- CAchieveInfo::GetManagers_11a81ac0 @ 11a81ab0 --- */
// [RE-AUTO c0]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __fastcall CAchieveInfo__GetManagers_11a81ac0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuStack_c;
  undefined1 uStack_5;
  
  piVar1 = (int *)FUN_108c6a40(0,"CAchieveInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      ppuStack_c = &PTR_FUN_11dd58c0;
      if ((DAT_123bfb5c & 1) == 0) {
        DAT_123bfb5c = DAT_123bfb5c | 1;
        FUN_102500e0("CAchieveInfo::GetManagers");
        FUN_11a8911f(&LAB_11c753f0);
      }
      puVar3 = (undefined *)*DAT_123bfb40;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&ppuStack_c,"CAchieveInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123bfaf0 & 1) == 0) {
            DAT_123bfabc = 0;
            DAT_123bfacc = 0;
            DAT_123bfad0 = 0;
            _DAT_123bfad4 = 0;
            DAT_123bfad8 = 0;
            DAT_123bfaf0 = DAT_123bfaf0 | 1;
            _DAT_123bfab8 = &PTR_FUN_11dd5934;
            DAT_123bfadc = _DAT_11de9ae0;
            DAT_123bfae0 = _UNK_11de9ae4;
            uRam123bfae4 = _UNK_11de9ae8;
            DAT_123bfae8 = _UNK_11de9aec;
            DAT_123bfaec = 1;
            DAT_123bfac0 = puVar3;
            _DAT_123bfac4 = puVar3;
            _DAT_123bfac8 = puVar3;
            FUN_11a8911f(&LAB_11cb7b50);
          }
          puVar3 = &DAT_123bfab8;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        ppuStack_c = (undefined **)0x0;
      }
      else {
        ppuStack_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((ppuStack_c != (undefined **)0x0) && (ppuStack_c[7] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x30);
        if (piVar1 == *(int **)(param_1 + 0x34)) {
          FUN_119c9510(piVar1,&ppuStack_c,&uStack_5,1,1);
        }
        else {
          *piVar1 = (int)ppuStack_c;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAchieveInfo::GetManagers_11a81ac0 @ 11a81ac0 --- */
// [RE-AUTO c3]
// id: CAchieveInfo::GetManagers
// strings:
//   ""CAchieveInfo""
//   ""CAchieveInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveInfo::GetManagers
   strings:
     ""CAchieveInfo""
     ""CAchieveInfo::GetManagers"" */

void __fastcall CAchieveInfo__GetManagers_11a81ac0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_108c6a40(0,"CAchieveInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11dd58c0;
      if ((DAT_123bfb5c & 1) == 0) {
        DAT_123bfb5c = DAT_123bfb5c | 1;
        FUN_102500e0("CAchieveInfo::GetManagers");
        FUN_11a8911f(&LAB_11c753f0);
      }
      puVar3 = (undefined *)*DAT_123bfb40;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CAchieveInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123bfaf0 & 1) == 0) {
            DAT_123bfabc = 0;
            DAT_123bfacc = 0;
            DAT_123bfad0 = 0;
            _DAT_123bfad4 = 0;
            DAT_123bfad8 = 0;
            DAT_123bfaf0 = DAT_123bfaf0 | 1;
            _DAT_123bfab8 = &PTR_FUN_11dd5934;
            DAT_123bfadc = _DAT_11de9ae0;
            DAT_123bfae0 = _UNK_11de9ae4;
            uRam123bfae4 = _UNK_11de9ae8;
            DAT_123bfae8 = _UNK_11de9aec;
            DAT_123bfaec = 1;
            DAT_123bfac0 = puVar3;
            _DAT_123bfac4 = puVar3;
            _DAT_123bfac8 = puVar3;
            FUN_11a8911f(&LAB_11cb7b50);
          }
          puVar3 = &DAT_123bfab8;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && (local_c[7] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x30);
        if (piVar1 == *(int **)(param_1 + 0x34)) {
          FUN_119c9510(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



