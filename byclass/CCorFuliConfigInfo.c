// ===== class CCorFuliConfigInfo  (3 recovered methods) =====

/* --- CCorFuliConfigInfo::GetManagers @ 11546c40 --- */
// [RE-AUTO c3]
// id: CCorFuliConfigInfo::GetManagers
// strings:
//   ""CCorFuliConfigInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCorFuliConfigInfo::GetManagers
   strings:
     ""CCorFuliConfigInfo::GetManagers"" */

undefined * CCorFuliConfigInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2d26c;
  if (param_3 == 0) {
    if ((DAT_122deed8 & 1) == 0) {
      DAT_122deed8 = DAT_122deed8 | 1;
      FUN_102500e0("CCorFuliConfigInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1cf0);
    }
    if ((undefined *)*DAT_122deebc != (undefined *)0x0) {
      return (undefined *)*DAT_122deebc;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122defa8 & 1) == 0) {
      DAT_122defa8 = DAT_122defa8 | 1;
      FUN_115473c0();
      FUN_11a8911f(&LAB_11ca1a50);
    }
    puVar1 = &DAT_122def70;
  }
  return puVar1;
}



/* --- CCorFuliConfigInfo::GetManagers_115489a0 @ 115489a0 --- */
// [RE-AUTO c3]
// id: CCorFuliConfigInfo::GetManagers
// calls: CVIPServiceInfo::GetManagers
// strings:
//   ""CVIPServiceInfo""
//   ""CCorFuliConfigInfo::GetManagers""
//   ""CCorFuliConfigInfo""

/* [RE-AUTO c3]
   id: CCorFuliConfigInfo::GetManagers
   calls: CVIPServiceInfo::GetManagers
   strings:
     ""CVIPServiceInfo""
     ""CCorFuliConfigInfo::GetManagers""
     ""CCorFuliConfigInfo"" */

int CCorFuliConfigInfo__GetManagers_115489a0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined **local_10 [2];
  int local_8;
  
  cVar2 = FUN_11549be0();
  if ((cVar2 == '\0') || (cVar2 = FUN_11549be0(), cVar2 == '\0')) goto LAB_11548a43;
  iVar3 = CVIPServiceInfo__GetManagers(0,"CVIPServiceInfo",0);
  iVar8 = *(int *)(iVar3 + 0x28);
  if ((iVar8 == 0) ||
     ((iVar4 = 0x16 - *(int *)(iVar3 + 0x30), iVar4 < 0 || (*(int *)(iVar3 + 0x24) <= iVar4)))) {
LAB_11548a00:
    iVar8 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar8) * 4);
    if (iVar3 == 0) goto LAB_11548a00;
    iVar8 = *(int *)(iVar3 + (iVar4 % iVar8) * 4);
  }
  iVar3 = FUN_1025b060();
  if ((iVar8 != 0) && (*(int *)(iVar8 + 0x1c) <= iVar3)) {
    iVar8 = *(int *)(iVar8 + 0x18);
    if (iVar8 == 1) {
      cVar2 = FUN_104f37a0();
    }
    else if (iVar8 == 2) {
      cVar2 = FUN_11355b70();
    }
    else {
      if (iVar8 != 3) goto LAB_11548a43;
      cVar2 = FUN_11355c30();
    }
    if (cVar2 != '\0') {
      uVar7 = FUN_1025b060();
      iVar8 = FUN_1081f2f0(uVar7);
      if (iVar8 != 0) {
        return *(int *)(iVar8 + 0x38);
      }
      return 0;
    }
  }
LAB_11548a43:
  local_8 = 0;
  iVar8 = 1;
  do {
    iVar4 = 1 << ((byte)iVar8 & 0x1f);
    iVar3 = FUN_115493d0();
    if (iVar3 != 0 || iVar4 != 0) {
      local_10[0] = &PTR_FUN_11d2d26c;
      if ((DAT_122deed8 & 1) == 0) {
        DAT_122deed8 = DAT_122deed8 | 1;
        FUN_102500e0("CCorFuliConfigInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca1cf0);
      }
      puVar5 = (undefined *)*DAT_122deebc;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(local_10,"CCorFuliConfigInfo",0),
         puVar5 == (undefined *)0x0)) {
        if ((DAT_122defa8 & 1) == 0) {
          DAT_122defa8 = DAT_122defa8 | 1;
          FUN_115473c0();
          FUN_11a8911f(&LAB_11ca1a50);
        }
        puVar5 = &DAT_122def70;
      }
      local_10[0] = &PTR_FUN_11da54a8;
      if ((iVar8 != -1) &&
         ((((iVar8 != 0 || (*(int *)(puVar5 + 0x30) == 0)) &&
           (iVar3 = *(int *)(puVar5 + 0x28), iVar3 != 0)) &&
          ((iVar6 = iVar8 - *(int *)(puVar5 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(puVar5 + 0x24))
           ))))) {
        iVar1 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / iVar3) * 4);
        if ((iVar1 != 0) &&
           ((iVar3 = *(int *)(iVar1 + (iVar6 % iVar3) * 4), iVar3 != 0 &&
            (local_8 < *(int *)(iVar3 + 0x14))))) {
          *param_1 = iVar4;
          local_8 = *(int *)(iVar3 + 0x14);
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xe);
  return local_8;
}



/* --- CCorFuliConfigInfo::GetManagers_115490a0 @ 115490a0 --- */
// [RE-AUTO c3]
// id: CCorFuliConfigInfo::GetManagers
// strings:
//   ""CCorFuliConfigInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCorFuliConfigInfo::GetManagers
   strings:
     ""CCorFuliConfigInfo::GetManagers"" */

undefined4 CCorFuliConfigInfo__GetManagers_115490a0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122deed8 & 1) == 0) {
      DAT_122deed8 = DAT_122deed8 | 1;
      FUN_102500e0("CCorFuliConfigInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca1cf0);
    }
    return *DAT_122deebc;
  }
  return 0;
}



