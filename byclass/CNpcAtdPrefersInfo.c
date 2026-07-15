// ===== class CNpcAtdPrefersInfo  (5 recovered methods) =====

/* --- CNpcAtdPrefersInfo::GetManagers @ 104d8980 --- */
// [RE-AUTO c3]
// id: CNpcAtdPrefersInfo::GetManagers
// strings:
//   ""CNpcAtdPrefersInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdPrefersInfo::GetManagers
   strings:
     ""CNpcAtdPrefersInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CNpcAtdPrefersInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be1a8 & 1) == 0) {
    DAT_123be1a8 = DAT_123be1a8 | 1;
    _DAT_123be1dc = &DAT_123be1cc;
    DAT_123be1e0 = &DAT_123be1cc;
    DAT_123be1cc = 0;
    FUN_100d83d0("CNpcAtdPrefersInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6eb10);
  }
  return DAT_123be1c8;
}



/* --- CNpcAtdPrefersInfo::GetManagers_1150a770 @ 1150a770 --- */
// [RE-AUTO c3]
// id: CNpcAtdPrefersInfo::GetManagers
// strings:
//   ""CNpcAtdPrefersInfo""
//   ""CNpcAtdPrefersInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdPrefersInfo::GetManagers
   strings:
     ""CNpcAtdPrefersInfo""
     ""CNpcAtdPrefersInfo::GetManagers"" */

void CNpcAtdPrefersInfo__GetManagers_1150a770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_14;
  int local_10;
  int local_c;
  undefined **local_8;
  
  piVar3 = (int *)FUN_104ee520(0,"CNpcAtdPrefersInfo",0);
  local_14 = (**(code **)(*piVar3 + 0x28))();
  local_c = 0;
  if (0 < local_14) {
    do {
      iVar5 = local_c;
      local_8 = &PTR_FUN_11dbdd98;
      if ((DAT_123be1a8 & 1) == 0) {
        DAT_123be1a8 = DAT_123be1a8 | 1;
        FUN_102500e0("CNpcAtdPrefersInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb10);
      }
      puVar4 = (undefined *)*DAT_123be1c8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CNpcAtdPrefersInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bdfbc & 1) == 0) {
          DAT_123bdf88 = 0;
          DAT_123bdf98 = 0;
          DAT_123bdf9c = 0;
          _DAT_123bdfa0 = 0;
          DAT_123bdfa4 = 0;
          DAT_123bdfbc = DAT_123bdfbc | 1;
          _DAT_123bdf84 = &PTR_FUN_11dbdf00;
          DAT_123bdfa8 = _DAT_11de9ae0;
          DAT_123bdfac = _UNK_11de9ae4;
          uRam123bdfb0 = _UNK_11de9ae8;
          DAT_123bdfb4 = _UNK_11de9aec;
          DAT_123bdfb8 = 1;
          DAT_123bdf8c = puVar4;
          _DAT_123bdf90 = puVar4;
          _DAT_123bdf94 = puVar4;
          FUN_11a8911f(&LAB_11ca0080);
        }
        puVar4 = &DAT_123bdf84;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) {
        FUN_117323e0(&local_20,param_1);
        iVar2 = local_10;
        puVar6 = local_20;
        if (local_20 != local_1c) {
          do {
            if ((puVar6[2] == param_2) &&
               ((**(code **)(**(int **)(iVar2 + 0x54) + 0x1c))
                          (*(undefined4 *)(iVar1 + 0x10),*puVar6), param_1 - 3U < 2)) {
              FUN_11509050(*(undefined4 *)(iVar1 + 0x10),*puVar6);
            }
            puVar6 = puVar6 + 4;
            iVar5 = local_c;
          } while (puVar6 != local_1c);
        }
        if (local_20 != (undefined4 *)0x0) {
          FUN_10c3d5d0(local_20);
        }
      }
      local_c = iVar5 + 1;
    } while (local_c < local_14);
  }
  return;
}



/* --- CNpcAtdPrefersInfo::GetManagers_11732650 @ 11732650 --- */
// [RE-AUTO c3]
// id: CNpcAtdPrefersInfo::GetManagers
// strings:
//   ""CNpcAtdPrefersInfo""
//   ""CNpcAtdPrefersInfo::GetManagers""
//   ""CNpcAtdInfo::GetManagers""
//   ""CNpcAtdInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdPrefersInfo::GetManagers
   strings:
     ""CNpcAtdPrefersInfo""
     ""CNpcAtdPrefersInfo::GetManagers""
     ""CNpcAtdInfo::GetManagers""
     ""CNpcAtdInfo"" */

void CNpcAtdPrefersInfo__GetManagers_11732650(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  piVar1 = (int *)FUN_104ee520(0,"CNpcAtdPrefersInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbdd98;
      if ((DAT_123be1a8 & 1) == 0) {
        DAT_123be1a8 = DAT_123be1a8 | 1;
        FUN_102500e0("CNpcAtdPrefersInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb10);
      }
      puVar3 = (undefined *)*DAT_123be1c8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CNpcAtdPrefersInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123bdfbc & 1) == 0) {
          DAT_123bdf88 = 0;
          DAT_123bdf98 = 0;
          DAT_123bdf9c = 0;
          _DAT_123bdfa0 = 0;
          DAT_123bdfa4 = 0;
          DAT_123bdfbc = DAT_123bdfbc | 1;
          _DAT_123bdf84 = &PTR_FUN_11dbdf00;
          DAT_123bdfa8 = _DAT_11de9ae0;
          DAT_123bdfac = _UNK_11de9ae4;
          uRam123bdfb0 = _UNK_11de9ae8;
          DAT_123bdfb4 = _UNK_11de9aec;
          DAT_123bdfb8 = 1;
          DAT_123bdf8c = puVar3;
          _DAT_123bdf90 = puVar3;
          _DAT_123bdf94 = puVar3;
          FUN_11a8911f(&LAB_11ca9090);
        }
        puVar3 = &DAT_123bdf84;
      }
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4) != 0)) {
        local_8 = &PTR_FUN_11dbddb0;
        if ((DAT_123be1e4 & 1) == 0) {
          DAT_123be1e4 = DAT_123be1e4 | 1;
          FUN_102500e0("CNpcAtdInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6eae0);
        }
        if (((*DAT_123be1ac == 0) && (iVar4 = FUN_11679e10(&local_8,"CNpcAtdInfo",0), iVar4 == 0))
           && ((DAT_123bdf80 & 1) == 0)) {
          DAT_123bdf80 = DAT_123bdf80 | 1;
          FUN_104f00f0();
          FUN_11a8911f(&LAB_11ca9030);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}



/* --- CNpcAtdPrefersInfo::GetManagers_11931e70 @ 11931e70 --- */
// [RE-AUTO c3]
// id: CNpcAtdPrefersInfo::GetManagers
// strings:
//   ""CNpcAtdPrefersInfo""
//   ""CNpcAtdPrefersInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdPrefersInfo::GetManagers
   strings:
     ""CNpcAtdPrefersInfo""
     ""CNpcAtdPrefersInfo::GetManagers"" */

void CNpcAtdPrefersInfo__GetManagers_11931e70(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_104ee520(0,"CNpcAtdPrefersInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbdd98;
      if ((DAT_123be1a8 & 1) == 0) {
        DAT_123be1a8 = DAT_123be1a8 | 1;
        FUN_102500e0("CNpcAtdPrefersInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb10);
      }
      puVar3 = (undefined *)*DAT_123be1c8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CNpcAtdPrefersInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123bdfbc & 1) == 0) {
          DAT_123bdf88 = 0;
          DAT_123bdf98 = 0;
          DAT_123bdf9c = 0;
          _DAT_123bdfa0 = 0;
          DAT_123bdfa4 = 0;
          DAT_123bdfbc = DAT_123bdfbc | 1;
          _DAT_123bdf84 = &PTR_FUN_11dbdf00;
          DAT_123bdfa8 = _DAT_11de9ae0;
          DAT_123bdfac = _UNK_11de9ae4;
          uRam123bdfb0 = _UNK_11de9ae8;
          DAT_123bdfb4 = _UNK_11de9aec;
          DAT_123bdfb8 = 1;
          DAT_123bdf8c = puVar3;
          _DAT_123bdf90 = puVar3;
          _DAT_123bdf94 = puVar3;
          FUN_11a8911f(&LAB_11cb2280);
        }
        puVar3 = &DAT_123bdf84;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar3 + 0x14) + iVar4 * 4) != 0)) {
        FUN_11732640();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CNpcAtdPrefersInfo::GetManagers_11a1d050 @ 11a1d050 --- */
// [RE-AUTO c3]
// id: CNpcAtdPrefersInfo::GetManagers
// strings:
//   ""CNpcAtdPrefersInfo""
//   ""CNpcAtdPrefersInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcAtdPrefersInfo::GetManagers
   strings:
     ""CNpcAtdPrefersInfo""
     ""CNpcAtdPrefersInfo::GetManagers"" */

void __fastcall CNpcAtdPrefersInfo__GetManagers_11a1d050(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  local_8 = param_1;
  piVar1 = (int *)FUN_104ee520(0,"CNpcAtdPrefersInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbdd98;
      if ((DAT_123be1a8 & 1) == 0) {
        DAT_123be1a8 = DAT_123be1a8 | 1;
        FUN_102500e0("CNpcAtdPrefersInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb10);
      }
      puVar3 = (undefined *)*DAT_123be1c8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CNpcAtdPrefersInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123bdfbc & 1) == 0) {
          DAT_123bdf88 = 0;
          DAT_123bdf98 = 0;
          DAT_123bdf9c = 0;
          _DAT_123bdfa0 = 0;
          DAT_123bdfa4 = 0;
          DAT_123bdfbc = DAT_123bdfbc | 1;
          _DAT_123bdf84 = &PTR_FUN_11dbdf00;
          DAT_123bdfa8 = _DAT_11de9ae0;
          DAT_123bdfac = _UNK_11de9ae4;
          uRam123bdfb0 = _UNK_11de9ae8;
          DAT_123bdfb4 = _UNK_11de9aec;
          DAT_123bdfb8 = 1;
          DAT_123bdf8c = puVar3;
          _DAT_123bdf90 = puVar3;
          _DAT_123bdf94 = puVar3;
          FUN_11a8911f(&LAB_11cb6370);
        }
        puVar3 = &DAT_123bdf84;
      }
      if ((((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
          (puVar3 = *(undefined **)(*(int *)(puVar3 + 0x14) + iVar4 * 4), puVar3 != (undefined *)0x0
          )) && (*(undefined **)(puVar3 + 0x10) == param_1[0xb])) {
        param_1[0x15] = puVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



