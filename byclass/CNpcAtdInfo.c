// ===== class CNpcAtdInfo  (3 recovered methods) =====

/* --- CNpcAtdInfo::GetManagers @ 104d8810 --- */
// [RE-AUTO c3]
// id: CNpcAtdInfo::GetManagers
// strings:
//   ""CNpcAtdInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdInfo::GetManagers
   strings:
     ""CNpcAtdInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CNpcAtdInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be1e4 & 1) == 0) {
    DAT_123be1e4 = DAT_123be1e4 | 1;
    _DAT_123be1c0 = &DAT_123be1b0;
    DAT_123be1c4 = &DAT_123be1b0;
    DAT_123be1b0 = 0;
    FUN_100d83d0("CNpcAtdInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6eae0);
  }
  return DAT_123be1ac;
}



/* --- CNpcAtdInfo::GetManagers_1172ecd0 @ 1172ecd0 --- */
// [RE-AUTO c3]
// id: CNpcAtdInfo::GetManagers
// strings:
//   ""CNpcAtdInfo""
//   ""CNpcAtdInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdInfo::GetManagers
   strings:
     ""CNpcAtdInfo""
     ""CNpcAtdInfo::GetManagers"" */

void __fastcall CNpcAtdInfo__GetManagers_1172ecd0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_c;
  undefined1 local_5;
  
  piVar2 = (int *)FUN_104ee3c0(0,"CNpcAtdInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_c = &PTR_FUN_11dbddb0;
      if ((DAT_123be1e4 & 1) == 0) {
        DAT_123be1e4 = DAT_123be1e4 | 1;
        FUN_102500e0("CNpcAtdInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eae0);
      }
      puVar4 = (undefined *)*DAT_123be1ac;
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)FUN_11679e10(&local_c,"CNpcAtdInfo",0);
        if (puVar4 == (undefined *)0x0) {
          if ((DAT_123bdf80 & 1) == 0) {
            DAT_123bdf4c = 0;
            DAT_123bdf5c = 0;
            DAT_123bdf60 = 0;
            _DAT_123bdf64 = 0;
            DAT_123bdf68 = 0;
            DAT_123bdf80 = DAT_123bdf80 | 1;
            DAT_123bdf50 = 0;
            _DAT_123bdf54 = 0;
            _DAT_123bdf58 = 0;
            _DAT_123bdf48 = &PTR_FUN_11dbdf98;
            DAT_123bdf6c = _DAT_11de9ae0;
            DAT_123bdf70 = _UNK_11de9ae4;
            uRam123bdf74 = _UNK_11de9ae8;
            DAT_123bdf78 = _UNK_11de9aec;
            DAT_123bdf7c = 1;
            FUN_11a8911f(&LAB_11ca8fd0);
          }
          puVar4 = &DAT_123bdf48;
        }
      }
      local_c = &PTR_FUN_11da54a8;
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (piVar2 = *(int **)(*(int *)(puVar4 + 0x14) + iVar5 * 4), piVar2 != (int *)0x0)) &&
         (piVar2[0xd] == *(int *)(param_1 + 0x14))) {
        local_c = (undefined **)(**(code **)(*piVar2 + 0x18))();
        puVar1 = *(undefined4 **)(param_1 + 0x28);
        if (puVar1 == *(undefined4 **)(param_1 + 0x2c)) {
          FUN_10463c40(puVar1,&local_c,&local_5,1,1);
        }
        else {
          *puVar1 = local_c;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* --- CNpcAtdInfo::GetManagers_119319a0 @ 119319a0 --- */
// [RE-AUTO c3]
// id: CNpcAtdInfo::GetManagers
// strings:
//   ""CNpcAtdInfo""
//   ""CNpcAtdInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdInfo::GetManagers
   strings:
     ""CNpcAtdInfo""
     ""CNpcAtdInfo::GetManagers"" */

void CNpcAtdInfo__GetManagers_119319a0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_104ee3c0(0,"CNpcAtdInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbddb0;
      if ((DAT_123be1e4 & 1) == 0) {
        DAT_123be1e4 = DAT_123be1e4 | 1;
        FUN_102500e0("CNpcAtdInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eae0);
      }
      puVar3 = (undefined *)*DAT_123be1ac;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CNpcAtdInfo",0), puVar3 == (undefined *)0x0))
      {
        if ((DAT_123bdf80 & 1) == 0) {
          DAT_123bdf4c = 0;
          DAT_123bdf5c = 0;
          DAT_123bdf60 = 0;
          _DAT_123bdf64 = 0;
          DAT_123bdf68 = 0;
          DAT_123bdf80 = DAT_123bdf80 | 1;
          _DAT_123bdf48 = &PTR_FUN_11dbdf98;
          DAT_123bdf6c = _DAT_11de9ae0;
          DAT_123bdf70 = _UNK_11de9ae4;
          uRam123bdf74 = _UNK_11de9ae8;
          DAT_123bdf78 = _UNK_11de9aec;
          DAT_123bdf7c = 1;
          DAT_123bdf50 = puVar3;
          _DAT_123bdf54 = puVar3;
          _DAT_123bdf58 = puVar3;
          FUN_11a8911f(&LAB_11cb21c0);
        }
        puVar3 = &DAT_123bdf48;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar3 + 0x14) + iVar4 * 4) != 0)) {
        CNpcAtdPrefersInfo__GetManagers_11a1d050();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



