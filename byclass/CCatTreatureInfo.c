// ===== class CCatTreatureInfo  (3 recovered methods) =====

/* --- CCatTreatureInfo::GetManagers @ 109836b0 --- */
// [RE-AUTO c3]
// id: CCatTreatureInfo::GetManagers
// strings:
//   ""CCatTreatureInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCatTreatureInfo::GetManagers
   strings:
     ""CCatTreatureInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCatTreatureInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8840 & 1) == 0) {
    DAT_123c8840 = DAT_123c8840 | 1;
    _DAT_123c8858 = &DAT_123c8848;
    DAT_123c885c = &DAT_123c8848;
    DAT_123c8848 = 0;
    FUN_100d83d0("CCatTreatureInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7a510);
  }
  return DAT_123c8844;
}



/* --- CCatTreatureInfo::GetManagers_112e1e80 @ 112e1e80 --- */
// [RE-AUTO c3]
// id: CCatTreatureInfo::GetManagers
// calls: free
// strings:
//   ""CCatTreatureInfo""
//   ""CCatTreatureInfo::GetManagers""

/* WARNING: Removing unreachable block (ram,0x112e21e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCatTreatureInfo::GetManagers
   calls: free
   strings:
     ""CCatTreatureInfo""
     ""CCatTreatureInfo::GetManagers"" */

void __fastcall CCatTreatureInfo__GetManagers_112e1e80(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined4 *local_38;
  void *local_28;
  undefined4 local_20;
  void *local_1c;
  int local_18;
  int local_14;
  undefined **local_10;
  int local_c;
  undefined1 local_5;
  
  puVar7 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  piVar2 = (int *)FUN_10984c90(0,"CCatTreatureInfo",0);
  local_18 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < local_18) {
    do {
      local_10 = &PTR_FUN_11ddf550;
      if ((DAT_123c8840 & 1) == 0) {
        DAT_123c8840 = DAT_123c8840 | 1;
        FUN_102500e0("CCatTreatureInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7a510);
      }
      puVar3 = (undefined *)*DAT_123c8844;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_10,"CCatTreatureInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123c8868 & 1) == 0) {
          DAT_123c8870 = 0;
          DAT_123c8880 = 0;
          DAT_123c8884 = 0;
          _DAT_123c8888 = 0;
          DAT_123c888c = 0;
          DAT_123c8868 = DAT_123c8868 | 1;
          _DAT_123c886c = &PTR_FUN_11ddf56c;
          DAT_123c8890 = _DAT_11de9ae0;
          DAT_123c8894 = _UNK_11de9ae4;
          uRam123c8898 = _UNK_11de9ae8;
          DAT_123c889c = _UNK_11de9aec;
          DAT_123c88a0 = 1;
          DAT_123c8874 = puVar3;
          _DAT_123c8878 = puVar3;
          _DAT_123c887c = puVar3;
          FUN_11a8911f(&LAB_11c9a110);
        }
        puVar3 = &DAT_123c886c;
      }
      local_10 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
         (iVar4 = *(int *)(*(int *)(puVar3 + 0x14) + iVar5 * 4), iVar4 != 0)) {
        local_20 = *(undefined4 *)(iVar4 + 0x1c);
        local_1c = *(void **)(iVar4 + 0x10);
        if (puVar7 == (undefined4 *)0x0) {
          FUN_112e2480(0,&local_20,&local_5,1,1);
          puVar7 = local_38;
        }
        else {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = local_20;
            puVar7[1] = local_1c;
          }
          local_38 = puVar7 + 2;
          puVar7 = local_38;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_18);
  }
  ppuVar6 = (undefined **)((int)puVar7 >> 3);
  local_10 = ppuVar6;
  FUN_112e23b0();
  if (local_28 == (void *)0x0) {
    if ((int)ppuVar6 < 0xf) {
      FUN_112e0ec0(0,puVar7,0);
    }
    else {
      iVar4 = (int)ppuVar6 - ((int)puVar7 >> 0x1f) >> 1;
      iVar5 = iVar4 * 8;
      FUN_112e0e50(0,iVar5);
      FUN_112e0e50(iVar5,puVar7,FUN_112e25f0);
      FUN_112e1490(0,iVar5,puVar7,iVar5 >> 3,(int)(puVar7 + iVar4 * -2) >> 3,FUN_112e25f0);
      ppuVar6 = local_10;
    }
  }
  else {
    iVar4 = ((int)ppuVar6 + 1) / 2;
    iVar5 = iVar4 * 8;
    local_c = iVar5;
    if ((int)ppuVar6 < iVar4) {
      FUN_112e1830(0,iVar5,local_28,ppuVar6);
      FUN_112e1830(local_c,puVar7,local_28,ppuVar6,FUN_112e25f0);
    }
    else {
      local_14 = 7;
      local_18 = iVar5 >> 3;
      local_1c = (void *)((int)local_28 + local_18 * 8);
      FUN_112e0bb0(0,iVar5,7,FUN_112e25f0);
      if (7 < local_18) {
        iVar4 = 7;
        do {
          FUN_112e12e0(0,iVar5,local_28,iVar4,FUN_112e25f0);
          iVar4 = local_14;
          FUN_112e12e0(local_28,local_1c,0,local_14 * 2,FUN_112e25f0);
          iVar4 = iVar4 * 4;
          iVar5 = local_c;
          puVar7 = local_38;
          local_14 = iVar4;
        } while (iVar4 < local_18);
      }
      local_18 = (int)puVar7 - iVar5 >> 3;
      local_1c = (void *)((int)local_28 + local_18 * 8);
      FUN_112e0bb0(local_c,puVar7,7,FUN_112e25f0);
      if (7 < local_18) {
        iVar5 = 7;
        do {
          FUN_112e12e0(local_c,puVar7,local_28,iVar5,FUN_112e25f0);
          FUN_112e12e0(local_28,local_1c,local_c,iVar5 * 2,FUN_112e25f0);
          iVar5 = iVar5 * 4;
        } while (iVar5 < local_18);
      }
    }
    FUN_112e1070(0,local_c,puVar7,local_c >> 3,(int)puVar7 - local_c >> 3,local_28,ppuVar6,
                 FUN_112e25f0);
    ppuVar6 = local_10;
  }
  free(local_28);
  if (0 < (int)ppuVar6) {
    puVar7 = (undefined4 *)&DAT_00000004;
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x60);
      if (puVar1 == *(undefined4 **)(param_1 + 100)) {
        FUN_10463c40(puVar1,puVar7,&local_5,1,1);
      }
      else {
        *puVar1 = *puVar7;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 4;
      }
      puVar7 = puVar7 + 2;
      local_10 = (undefined **)((int)local_10 + -1);
    } while (local_10 != (undefined **)0x0);
  }
  return;
}



/* --- CCatTreatureInfo::GetManagers_1198ce90 @ 1198ce90 --- */
// [RE-AUTO c3]
// id: CCatTreatureInfo::GetManagers
// strings:
//   ""CCatTreatureInfo""
//   ""CCatTreatureInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCatTreatureInfo::GetManagers
   strings:
     ""CCatTreatureInfo""
     ""CCatTreatureInfo::GetManagers"" */

void CCatTreatureInfo__GetManagers_1198ce90(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_10984c90(0,"CCatTreatureInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11ddf550;
      if ((DAT_123c8840 & 1) == 0) {
        DAT_123c8840 = DAT_123c8840 | 1;
        FUN_102500e0("CCatTreatureInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7a510);
      }
      puVar4 = (undefined *)*DAT_123c8844;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CCatTreatureInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c8868 & 1) == 0) {
          DAT_123c8870 = 0;
          DAT_123c8880 = 0;
          DAT_123c8884 = 0;
          _DAT_123c8888 = 0;
          DAT_123c888c = 0;
          DAT_123c8868 = DAT_123c8868 | 1;
          _DAT_123c886c = &PTR_FUN_11ddf56c;
          DAT_123c8890 = _DAT_11de9ae0;
          DAT_123c8894 = _UNK_11de9ae4;
          uRam123c8898 = _UNK_11de9ae8;
          DAT_123c889c = _UNK_11de9aec;
          DAT_123c88a0 = 1;
          DAT_123c8874 = puVar4;
          _DAT_123c8878 = puVar4;
          _DAT_123c887c = puVar4;
          FUN_11a8911f(&LAB_11cb3960);
        }
        puVar4 = &DAT_123c886c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a5e3c0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



