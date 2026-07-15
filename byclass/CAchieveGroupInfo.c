// ===== class CAchieveGroupInfo  (5 recovered methods) =====

/* --- CAchieveGroupInfo::GetManagers @ 109e3ad0 --- */
// [RE-AUTO c3]
// id: CAchieveGroupInfo::GetManagers
// strings:
//   ""CAchieveGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveGroupInfo::GetManagers
   strings:
     ""CAchieveGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CAchieveGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c9028 & 1) == 0) {
    DAT_123c9028 = DAT_123c9028 | 1;
    _DAT_123c9040 = &DAT_123c9030;
    DAT_123c9044 = &DAT_123c9030;
    DAT_123c9030 = 0;
    FUN_100d83d0("CAchieveGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7cdb0);
  }
  return DAT_123c902c;
}



/* --- CAchieveGroupInfo::GetManagers_119c8840 @ 119c8840 --- */
// [RE-AUTO c3]
// id: CAchieveGroupInfo::GetManagers
// strings:
//   ""CAchieveGroupInfo""
//   ""CAchieveGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveGroupInfo::GetManagers
   strings:
     ""CAchieveGroupInfo""
     ""CAchieveGroupInfo::GetManagers"" */

void CAchieveGroupInfo__GetManagers_119c8840(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109e61f0(0,"CAchieveGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de4b18;
      if ((DAT_123c9028 & 1) == 0) {
        DAT_123c9028 = DAT_123c9028 | 1;
        FUN_102500e0("CAchieveGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7cdb0);
      }
      if (((*DAT_123c902c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CAchieveGroupInfo",0), iVar3 == 0)) &&
         ((DAT_123c9078 & 1) == 0)) {
        DAT_123c9080 = 0;
        DAT_123c9090 = 0;
        DAT_123c9094 = 0;
        _DAT_123c9098 = 0;
        DAT_123c909c = 0;
        DAT_123c9078 = DAT_123c9078 | 1;
        _DAT_123c907c = &PTR_FUN_11de4b6c;
        DAT_123c90a0 = _DAT_11de9ae0;
        DAT_123c90a4 = _UNK_11de9ae4;
        uRam123c90a8 = _UNK_11de9ae8;
        DAT_123c90ac = _UNK_11de9aec;
        DAT_123c90b0 = 1;
        DAT_123c9084 = iVar3;
        _DAT_123c9088 = iVar3;
        _DAT_123c908c = iVar3;
        FUN_11a8911f(&LAB_11cb49b0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a81c20();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAchieveGroupInfo::GetManagers_119c8990 @ 119c8990 --- */
// [RE-AUTO c3]
// id: CAchieveGroupInfo::GetManagers
// strings:
//   ""CAchieveGroupInfo""
//   ""CAchieveGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveGroupInfo::GetManagers
   strings:
     ""CAchieveGroupInfo""
     ""CAchieveGroupInfo::GetManagers"" */

void CAchieveGroupInfo__GetManagers_119c8990(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109e61f0(0,"CAchieveGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de4b18;
      if ((DAT_123c9028 & 1) == 0) {
        DAT_123c9028 = DAT_123c9028 | 1;
        FUN_102500e0("CAchieveGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7cdb0);
      }
      if (((*DAT_123c902c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CAchieveGroupInfo",0), iVar3 == 0)) &&
         ((DAT_123c9078 & 1) == 0)) {
        DAT_123c9080 = 0;
        DAT_123c9090 = 0;
        DAT_123c9094 = 0;
        _DAT_123c9098 = 0;
        DAT_123c909c = 0;
        DAT_123c9078 = DAT_123c9078 | 1;
        _DAT_123c907c = &PTR_FUN_11de4b6c;
        DAT_123c90a0 = _DAT_11de9ae0;
        DAT_123c90a4 = _UNK_11de9ae4;
        uRam123c90a8 = _UNK_11de9ae8;
        DAT_123c90ac = _UNK_11de9aec;
        DAT_123c90b0 = 1;
        DAT_123c9084 = iVar3;
        _DAT_123c9088 = iVar3;
        _DAT_123c908c = iVar3;
        FUN_11a8911f(&LAB_11cb49b0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CAchieveInfo__GetManagers_11a81ac0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAchieveGroupInfo::GetManagers_11a814e0 @ 11a814d0 --- */
// [RE-AUTO c0]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __fastcall CAchieveGroupInfo__GetManagers_11a814e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuStack_c;
  undefined1 uStack_5;
  
  piVar1 = (int *)FUN_109e61f0(0,"CAchieveGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      ppuStack_c = &PTR_FUN_11de4b18;
      if ((DAT_123c9028 & 1) == 0) {
        DAT_123c9028 = DAT_123c9028 | 1;
        FUN_102500e0("CAchieveGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7cdb0);
      }
      puVar3 = (undefined *)*DAT_123c902c;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&ppuStack_c,"CAchieveGroupInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123c9078 & 1) == 0) {
            DAT_123c9080 = 0;
            DAT_123c9090 = 0;
            DAT_123c9094 = 0;
            _DAT_123c9098 = 0;
            DAT_123c909c = 0;
            DAT_123c9078 = DAT_123c9078 | 1;
            _DAT_123c907c = &PTR_FUN_11de4b6c;
            DAT_123c90a0 = _DAT_11de9ae0;
            DAT_123c90a4 = _UNK_11de9ae4;
            uRam123c90a8 = _UNK_11de9ae8;
            DAT_123c90ac = _UNK_11de9aec;
            DAT_123c90b0 = 1;
            DAT_123c9084 = puVar3;
            _DAT_123c9088 = puVar3;
            _DAT_123c908c = puVar3;
            FUN_11a8911f(&LAB_11cb7af0);
          }
          puVar3 = &DAT_123c907c;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        ppuStack_c = (undefined **)0x0;
      }
      else {
        ppuStack_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((ppuStack_c != (undefined **)0x0) && (ppuStack_c[8] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x1c);
        if (piVar1 == *(int **)(param_1 + 0x20)) {
          FUN_119c8b20(piVar1,&ppuStack_c,&uStack_5,1,1);
        }
        else {
          *piVar1 = (int)ppuStack_c;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAchieveGroupInfo::GetManagers_11a814e0 @ 11a814e0 --- */
// [RE-AUTO c3]
// id: CAchieveGroupInfo::GetManagers
// strings:
//   ""CAchieveGroupInfo""
//   ""CAchieveGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveGroupInfo::GetManagers
   strings:
     ""CAchieveGroupInfo""
     ""CAchieveGroupInfo::GetManagers"" */

void __fastcall CAchieveGroupInfo__GetManagers_11a814e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_109e61f0(0,"CAchieveGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11de4b18;
      if ((DAT_123c9028 & 1) == 0) {
        DAT_123c9028 = DAT_123c9028 | 1;
        FUN_102500e0("CAchieveGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7cdb0);
      }
      puVar3 = (undefined *)*DAT_123c902c;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CAchieveGroupInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123c9078 & 1) == 0) {
            DAT_123c9080 = 0;
            DAT_123c9090 = 0;
            DAT_123c9094 = 0;
            _DAT_123c9098 = 0;
            DAT_123c909c = 0;
            DAT_123c9078 = DAT_123c9078 | 1;
            _DAT_123c907c = &PTR_FUN_11de4b6c;
            DAT_123c90a0 = _DAT_11de9ae0;
            DAT_123c90a4 = _UNK_11de9ae4;
            uRam123c90a8 = _UNK_11de9ae8;
            DAT_123c90ac = _UNK_11de9aec;
            DAT_123c90b0 = 1;
            DAT_123c9084 = puVar3;
            _DAT_123c9088 = puVar3;
            _DAT_123c908c = puVar3;
            FUN_11a8911f(&LAB_11cb7af0);
          }
          puVar3 = &DAT_123c907c;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) && (local_c[8] == *(undefined **)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x1c);
        if (piVar1 == *(int **)(param_1 + 0x20)) {
          FUN_119c8b20(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



