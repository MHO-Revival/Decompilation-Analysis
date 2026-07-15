// ===== class CGuildMatchAgainstInfo  (3 recovered methods) =====

/* --- CGuildMatchAgainstInfo::GetManagers @ 1196dff0 --- */
// [RE-AUTO c3]
// id: CGuildMatchAgainstInfo::GetManagers
// strings:
//   ""CGuildMatchAgainstInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildMatchAgainstInfo::GetManagers
   strings:
     ""CGuildMatchAgainstInfo::GetManagers"" */

undefined4 * CGuildMatchAgainstInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d63de8;
  if (param_3 == 0) {
    if ((DAT_123a0f24 & 1) == 0) {
      DAT_123a0f24 = DAT_123a0f24 | 1;
      FUN_102500e0("CGuildMatchAgainstInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2f40);
    }
    if ((undefined4 *)*DAT_123a0f08 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_123a0f08;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_123a0f94 & 1) == 0) {
      DAT_123a0f94 = DAT_123a0f94 | 1;
      FUN_1196e300();
      FUN_11a8911f(&LAB_11cb2ee0);
    }
    puVar1 = &DAT_123a0f5c;
  }
  return puVar1;
}



/* --- CGuildMatchAgainstInfo::GetManagers_1196eba0 @ 1196eba0 --- */
// [RE-AUTO c3]
// id: CGuildMatchAgainstInfo::GetManagers
// strings:
//   ""CGuildMatchAgainstInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildMatchAgainstInfo::GetManagers
   strings:
     ""CGuildMatchAgainstInfo::GetManagers"" */

undefined4 CGuildMatchAgainstInfo__GetManagers_1196eba0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a0f24 & 1) == 0) {
      DAT_123a0f24 = DAT_123a0f24 | 1;
      FUN_102500e0("CGuildMatchAgainstInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2f40);
    }
    return *DAT_123a0f08;
  }
  return 0;
}



/* --- CGuildMatchAgainstInfo::GetManagers_1196edc0 @ 1196edc0 --- */
// [RE-AUTO c3]
// id: CGuildMatchAgainstInfo::GetManagers
// strings:
//   ""CGuildMatchAgainstInfo::GetManagers""
//   ""CGuildMatchAgainstInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildMatchAgainstInfo::GetManagers
   strings:
     ""CGuildMatchAgainstInfo::GetManagers""
     ""CGuildMatchAgainstInfo"" */

void CGuildMatchAgainstInfo__GetManagers_1196edc0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d63de8;
    if ((DAT_123a0f24 & 1) == 0) {
      DAT_123a0f24 = DAT_123a0f24 | 1;
      FUN_102500e0("CGuildMatchAgainstInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2f40);
    }
    piVar2 = (int *)*DAT_123a0f08;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CGuildMatchAgainstInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123a0f94 & 1) == 0) {
          DAT_123a0f60 = 0;
          DAT_123a0f70 = 0;
          DAT_123a0f74 = 0;
          _DAT_123a0f78 = 0;
          uRam123a0f7c = 0;
          DAT_123a0f94 = DAT_123a0f94 | 1;
          DAT_123a0f5c = &PTR_FUN_11d63e2c;
          _DAT_123a0f80 = _DAT_11de9ae0;
          uRam123a0f84 = _UNK_11de9ae4;
          uRam123a0f88 = _UNK_11de9ae8;
          uRam123a0f8c = _UNK_11de9aec;
          DAT_123a0f90 = 1;
          DAT_123a0f64 = piVar2;
          _DAT_123a0f68 = piVar2;
          _DAT_123a0f6c = piVar2;
          FUN_11a8911f(&LAB_11cb2ee0);
        }
        piVar2 = (int *)&DAT_123a0f5c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d63de8;
    if ((DAT_123a0f24 & 1) == 0) {
      DAT_123a0f24 = DAT_123a0f24 | 1;
      FUN_102500e0("CGuildMatchAgainstInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb2f40);
    }
    piVar2 = (int *)*DAT_123a0f08;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CGuildMatchAgainstInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123a0f94 & 1) == 0) {
          DAT_123a0f60 = 0;
          DAT_123a0f70 = 0;
          DAT_123a0f74 = 0;
          _DAT_123a0f78 = 0;
          uRam123a0f7c = 0;
          DAT_123a0f94 = DAT_123a0f94 | 1;
          DAT_123a0f5c = &PTR_FUN_11d63e2c;
          _DAT_123a0f80 = _DAT_11de9ae0;
          uRam123a0f84 = _UNK_11de9ae4;
          uRam123a0f88 = _UNK_11de9ae8;
          uRam123a0f8c = _UNK_11de9aec;
          DAT_123a0f90 = 1;
          DAT_123a0f64 = piVar2;
          _DAT_123a0f68 = piVar2;
          _DAT_123a0f6c = piVar2;
          FUN_11a8911f(&LAB_11cb2ee0);
        }
        piVar2 = (int *)&DAT_123a0f5c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      FUN_11a4b7f0(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



