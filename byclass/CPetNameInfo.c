// ===== class CPetNameInfo  (4 recovered methods) =====

/* --- CPetNameInfo::GetManagers @ 1174f890 --- */
// [RE-AUTO c3]
// id: CPetNameInfo::GetManagers
// strings:
//   ""CPetNameInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetNameInfo::GetManagers
   strings:
     ""CPetNameInfo::GetManagers"" */

undefined * CPetNameInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d46390;
  if (param_3 == 0) {
    if ((DAT_123916e4 & 1) == 0) {
      DAT_123916e4 = DAT_123916e4 | 1;
      FUN_102500e0("CPetNameInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d30);
    }
    if ((undefined *)*DAT_123916c8 != (undefined *)0x0) {
      return (undefined *)*DAT_123916c8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12391a20 & 1) == 0) {
      DAT_12391a20 = DAT_12391a20 | 1;
      FUN_11750670();
      FUN_11a8911f(&LAB_11ca9ac0);
    }
    puVar1 = &DAT_123919e8;
  }
  return puVar1;
}



/* --- CPetNameInfo::GetManagers_11752310 @ 11752310 --- */
// [RE-AUTO c3]
// id: CPetNameInfo::GetManagers
// calls: CPetNameInfo::GetManagers
// strings:
//   ""CPetNameInfo""
//   ""CPetNameInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetNameInfo::GetManagers
   calls: CPetNameInfo::GetManagers
   strings:
     ""CPetNameInfo""
     ""CPetNameInfo::GetManagers"" */

void CPetNameInfo__GetManagers_11752310(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_18 = 0;
  local_14 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  piVar2 = (int *)CPetNameInfo__GetManagers(0,"CPetNameInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      local_c = &PTR_FUN_11d46390;
      if ((DAT_123916e4 & 1) == 0) {
        DAT_123916e4 = DAT_123916e4 | 1;
        FUN_102500e0("CPetNameInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9d30);
      }
      puVar4 = (undefined *)*DAT_123916c8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CPetNameInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_12391a20 & 1) == 0) {
          DAT_123919ec = 0;
          DAT_123919fc = 0;
          DAT_12391a00 = 0;
          _DAT_12391a04 = 0;
          uRam12391a08 = 0;
          DAT_12391a20 = DAT_12391a20 | 1;
          _DAT_123919e8 = &PTR_FUN_11d463c4;
          _DAT_12391a0c = _DAT_11de9ae0;
          uRam12391a10 = _UNK_11de9ae4;
          uRam12391a14 = _UNK_11de9ae8;
          uRam12391a18 = _UNK_11de9aec;
          DAT_12391a1c = 1;
          DAT_123919f0 = puVar4;
          _DAT_123919f4 = puVar4;
          _DAT_123919f8 = puVar4;
          FUN_11a8911f(&LAB_11ca9ac0);
        }
        puVar4 = &DAT_123919e8;
      }
      if ((iVar7 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar7)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(puVar4 + 0x14) + iVar7 * 4);
      }
      local_c = *(undefined ***)(iVar5 + 0x14);
      if (local_14 == local_10) {
        FUN_10463c40(local_14,&local_c,&local_5,1,1);
      }
      else {
        *local_14 = local_c;
        local_14 = local_14 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  iVar3 = FUN_10a1cee0(&local_18);
  if (iVar3 != -1) {
    local_c = &PTR_FUN_11d46390;
    if ((DAT_123916e4 & 1) == 0) {
      DAT_123916e4 = DAT_123916e4 | 1;
      FUN_102500e0("CPetNameInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d30);
    }
    puVar4 = (undefined *)*DAT_123916c8;
    if ((puVar4 == (undefined *)0x0) &&
       (puVar4 = (undefined *)FUN_11679e10(&local_c,"CPetNameInfo",0), puVar4 == (undefined *)0x0))
    {
      if ((DAT_12391a20 & 1) == 0) {
        DAT_12391a20 = DAT_12391a20 | 1;
        FUN_11750670();
        FUN_11a8911f(&LAB_11ca9ac0);
      }
      puVar4 = &DAT_123919e8;
    }
    local_c = &PTR_FUN_11da54a8;
    if (((-1 < iVar3) && (iVar3 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
       (iVar3 = *(int *)(*(int *)(puVar4 + 0x14) + iVar3 * 4), iVar3 != 0)) {
      puVar1 = *(undefined1 **)(iVar3 + 0x18);
      puVar6 = &DAT_11d9d32b;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      FUN_100e5d80(puVar6);
    }
  }
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  return;
}



/* --- CPetNameInfo::GetManagers_117536b0 @ 117536b0 --- */
// [RE-AUTO c3]
// id: CPetNameInfo::GetManagers
// strings:
//   ""CPetNameInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetNameInfo::GetManagers
   strings:
     ""CPetNameInfo::GetManagers"" */

undefined4 CPetNameInfo__GetManagers_117536b0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123916e4 & 1) == 0) {
      DAT_123916e4 = DAT_123916e4 | 1;
      FUN_102500e0("CPetNameInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9d30);
    }
    return *DAT_123916c8;
  }
  return 0;
}



/* --- CPetNameInfo::GetManagers_1192c370 @ 1192c370 --- */
// [RE-AUTO c3]
// id: CPetNameInfo::GetManagers
// calls: CPetNameInfo::GetManagers
// strings:
//   ""CPetNameInfo""
//   ""CPetNameInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetNameInfo::GetManagers
   calls: CPetNameInfo::GetManagers
   strings:
     ""CPetNameInfo""
     ""CPetNameInfo::GetManagers"" */

void CPetNameInfo__GetManagers_1192c370(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CPetNameInfo__GetManagers(0,"CPetNameInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d46390;
      if ((DAT_123916e4 & 1) == 0) {
        DAT_123916e4 = DAT_123916e4 | 1;
        FUN_102500e0("CPetNameInfo::GetManagers");
        FUN_11a8911f(&LAB_11ca9d30);
      }
      puVar4 = (undefined *)*DAT_123916c8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetNameInfo",0), puVar4 == (undefined *)0x0)
         ) {
        if ((DAT_12391a20 & 1) == 0) {
          DAT_123919ec = 0;
          DAT_123919fc = 0;
          DAT_12391a00 = 0;
          _DAT_12391a04 = 0;
          uRam12391a08 = 0;
          DAT_12391a20 = DAT_12391a20 | 1;
          _DAT_123919e8 = &PTR_FUN_11d463c4;
          _DAT_12391a0c = _DAT_11de9ae0;
          uRam12391a10 = _UNK_11de9ae4;
          uRam12391a14 = _UNK_11de9ae8;
          uRam12391a18 = _UNK_11de9aec;
          DAT_12391a1c = 1;
          DAT_123919f0 = puVar4;
          _DAT_123919f4 = puVar4;
          _DAT_123919f8 = puVar4;
          FUN_11a8911f(&LAB_11cb1fe0);
        }
        puVar4 = &DAT_123919e8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a1b130(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



