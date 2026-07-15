// ===== class CGiftBagGroupInfo  (4 recovered methods) =====

/* --- CGiftBagGroupInfo::GetManagers @ 11510bc0 --- */
// [RE-AUTO c3]
// id: CGiftBagGroupInfo::GetManagers
// strings:
//   ""CGiftBagGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo::GetManagers"" */

undefined4 * CGiftBagGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2bd3c;
  if (param_3 == 0) {
    if ((DAT_122de87c & 1) == 0) {
      DAT_122de87c = DAT_122de87c | 1;
      FUN_102500e0("CGiftBagGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0350);
    }
    if ((undefined4 *)*DAT_122de860 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_122de860;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_122de8c0 & 1) == 0) {
      DAT_122de8c0 = DAT_122de8c0 | 1;
      FUN_11510e30();
      FUN_11a8911f(&LAB_11ca0290);
    }
    puVar1 = &DAT_122de888;
  }
  return puVar1;
}



/* --- CGiftBagGroupInfo::GetManagers_11511580 @ 11511580 --- */
// [RE-AUTO c3]
// id: CGiftBagGroupInfo::GetManagers
// strings:
//   ""CGiftBagGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo::GetManagers"" */

undefined4 CGiftBagGroupInfo__GetManagers_11511580(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de87c & 1) == 0) {
      DAT_122de87c = DAT_122de87c | 1;
      FUN_102500e0("CGiftBagGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca0350);
    }
    return *DAT_122de860;
  }
  return 0;
}



/* --- CGiftBagGroupInfo::GetManagers_11945b60 @ 11945b60 --- */
// [RE-AUTO c3]
// id: CGiftBagGroupInfo::GetManagers
// calls: CGiftBagGroupInfo::GetManagers
// strings:
//   ""CGiftBagGroupInfo""
//   ""CGiftBagGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGiftBagGroupInfo::GetManagers
   calls: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo""
     ""CGiftBagGroupInfo::GetManagers"" */

void CGiftBagGroupInfo__GetManagers_11945b60(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGiftBagGroupInfo__GetManagers(0,"CGiftBagGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2bd3c;
      if ((DAT_122de87c & 1) == 0) {
        DAT_122de87c = DAT_122de87c | 1;
        FUN_102500e0("CGiftBagGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca0350);
      }
      if (((*DAT_122de860 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGiftBagGroupInfo",0), iVar3 == 0)) &&
         ((DAT_122de8c0 & 1) == 0)) {
        DAT_122de88c = 0;
        DAT_122de89c = 0;
        DAT_122de8a0 = 0;
        _DAT_122de8a4 = 0;
        uRam122de8a8 = 0;
        DAT_122de8c0 = DAT_122de8c0 | 1;
        DAT_122de888 = &PTR_FUN_11d2bd78;
        _DAT_122de8ac = _DAT_11de9ae0;
        uRam122de8b0 = _UNK_11de9ae4;
        uRam122de8b4 = _UNK_11de9ae8;
        uRam122de8b8 = _UNK_11de9aec;
        DAT_122de8bc = 1;
        DAT_122de890 = iVar3;
        _DAT_122de894 = iVar3;
        _DAT_122de898 = iVar3;
        FUN_11a8911f(&LAB_11cb2640);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a33e30();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGiftBagGroupInfo::GetManagers_11945e00 @ 11945e00 --- */
// [RE-AUTO c3]
// id: CGiftBagGroupInfo::GetManagers
// calls: CGiftBagGroupInfo::GetManagers
// strings:
//   ""CGiftBagGroupInfo""
//   ""CGiftBagGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGiftBagGroupInfo::GetManagers
   calls: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo""
     ""CGiftBagGroupInfo::GetManagers"" */

void CGiftBagGroupInfo__GetManagers_11945e00(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGiftBagGroupInfo__GetManagers(0,"CGiftBagGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d2bd3c;
      if ((DAT_122de87c & 1) == 0) {
        DAT_122de87c = DAT_122de87c | 1;
        FUN_102500e0("CGiftBagGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca0350);
      }
      if (((*DAT_122de860 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGiftBagGroupInfo",0), iVar3 == 0)) &&
         ((DAT_122de8c0 & 1) == 0)) {
        DAT_122de88c = 0;
        DAT_122de89c = 0;
        DAT_122de8a0 = 0;
        _DAT_122de8a4 = 0;
        uRam122de8a8 = 0;
        DAT_122de8c0 = DAT_122de8c0 | 1;
        DAT_122de888 = &PTR_FUN_11d2bd78;
        _DAT_122de8ac = _DAT_11de9ae0;
        uRam122de8b0 = _UNK_11de9ae4;
        uRam122de8b4 = _UNK_11de9ae8;
        uRam122de8b8 = _UNK_11de9aec;
        DAT_122de8bc = 1;
        DAT_122de890 = iVar3;
        _DAT_122de894 = iVar3;
        _DAT_122de898 = iVar3;
        FUN_11a8911f(&LAB_11cb2640);
      }
      local_8 = &PTR_FUN_11da54a8;
      CGiftBagInfo__GetManagers_11a33cd0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



