// ===== class CAchieveLibInfo  (4 recovered methods) =====

/* --- CAchieveLibInfo::GetManagers @ 109e3cb0 --- */
// [RE-AUTO c3]
// id: CAchieveLibInfo::GetManagers
// strings:
//   ""CAchieveLibInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveLibInfo::GetManagers
   strings:
     ""CAchieveLibInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CAchieveLibInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c9048 & 1) == 0) {
    DAT_123c9048 = DAT_123c9048 | 1;
    _DAT_123c9060 = &DAT_123c9050;
    DAT_123c9064 = &DAT_123c9050;
    DAT_123c9050 = 0;
    FUN_100d83d0("CAchieveLibInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7cde0);
  }
  return DAT_123c904c;
}



/* --- CAchieveLibInfo::GetManagers_119c7e50 @ 119c7e50 --- */
// [RE-AUTO c3]
// id: CAchieveLibInfo::GetManagers
// strings:
//   ""CAchieveLibInfo""
//   ""CAchieveLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveLibInfo::GetManagers
   strings:
     ""CAchieveLibInfo""
     ""CAchieveLibInfo::GetManagers"" */

void CAchieveLibInfo__GetManagers_119c7e50(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109e6350(0,"CAchieveLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de4b10;
      if ((DAT_123c9048 & 1) == 0) {
        DAT_123c9048 = DAT_123c9048 | 1;
        FUN_102500e0("CAchieveLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7cde0);
      }
      if (((*DAT_123c904c == 0) && (iVar3 = FUN_11679e10(&local_8,"CAchieveLibInfo",0), iVar3 == 0))
         && ((DAT_123c90b4 & 1) == 0)) {
        DAT_123c90bc = 0;
        DAT_123c90cc = 0;
        DAT_123c90d0 = 0;
        _DAT_123c90d4 = 0;
        uRam123c90d8 = 0;
        DAT_123c90b4 = DAT_123c90b4 | 1;
        DAT_123c90b8 = &PTR_FUN_11de4b20;
        _DAT_123c90dc = _DAT_11de9ae0;
        uRam123c90e0 = _UNK_11de9ae4;
        uRam123c90e4 = _UNK_11de9ae8;
        uRam123c90e8 = _UNK_11de9aec;
        DAT_123c90ec = 1;
        DAT_123c90c0 = iVar3;
        _DAT_123c90c4 = iVar3;
        _DAT_123c90c8 = iVar3;
        FUN_11a8911f(&LAB_11cb4950);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a81640();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CAchieveLibInfo::GetManagers_119c7fa0 @ 119c7fa0 --- */
// [RE-AUTO c3]
// id: CAchieveLibInfo::GetManagers
// strings:
//   ""CAchieveLibInfo""
//   ""CAchieveLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveLibInfo::GetManagers
   strings:
     ""CAchieveLibInfo""
     ""CAchieveLibInfo::GetManagers"" */

void CAchieveLibInfo__GetManagers_119c7fa0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_109e6350(0,"CAchieveLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11de4b10;
      if ((DAT_123c9048 & 1) == 0) {
        DAT_123c9048 = DAT_123c9048 | 1;
        FUN_102500e0("CAchieveLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7cde0);
      }
      if (((*DAT_123c904c == 0) && (iVar3 = FUN_11679e10(&local_8,"CAchieveLibInfo",0), iVar3 == 0))
         && ((DAT_123c90b4 & 1) == 0)) {
        DAT_123c90bc = 0;
        DAT_123c90cc = 0;
        DAT_123c90d0 = 0;
        _DAT_123c90d4 = 0;
        uRam123c90d8 = 0;
        DAT_123c90b4 = DAT_123c90b4 | 1;
        DAT_123c90b8 = &PTR_FUN_11de4b20;
        _DAT_123c90dc = _DAT_11de9ae0;
        uRam123c90e0 = _UNK_11de9ae4;
        uRam123c90e4 = _UNK_11de9ae8;
        uRam123c90e8 = _UNK_11de9aec;
        DAT_123c90ec = 1;
        DAT_123c90c0 = iVar3;
        _DAT_123c90c4 = iVar3;
        _DAT_123c90c8 = iVar3;
        FUN_11a8911f(&LAB_11cb4950);
      }
      local_8 = &PTR_FUN_11da54a8;
      CAchieveGroupInfo__GetManagers_11a814e0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_11a81870();
  return;
}



/* --- CAchieveLibInfo::GetManagers_11a82540 @ 11a82540 --- */
// [RE-AUTO c3]
// id: CAchieveLibInfo::GetManagers
// strings:
//   ""CAchieveLibInfo""
//   ""CAchieveLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CAchieveLibInfo::GetManagers
   strings:
     ""CAchieveLibInfo""
     ""CAchieveLibInfo::GetManagers"" */

void __fastcall CAchieveLibInfo__GetManagers_11a82540(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)FUN_109e6350(0,"CAchieveLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    while( true ) {
      local_8 = &PTR_FUN_11de4b10;
      if ((DAT_123c9048 & 1) == 0) {
        DAT_123c9048 = DAT_123c9048 | 1;
        FUN_102500e0("CAchieveLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7cde0);
      }
      puVar4 = (undefined4 *)*DAT_123c904c;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CAchieveLibInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123c90b4 & 1) == 0) {
          DAT_123c90bc = 0;
          DAT_123c90cc = 0;
          DAT_123c90d0 = 0;
          _DAT_123c90d4 = 0;
          uRam123c90d8 = 0;
          DAT_123c90b4 = DAT_123c90b4 | 1;
          DAT_123c90b8 = &PTR_FUN_11de4b20;
          _DAT_123c90dc = _DAT_11de9ae0;
          uRam123c90e0 = _UNK_11de9ae4;
          uRam123c90e4 = _UNK_11de9ae8;
          uRam123c90e8 = _UNK_11de9aec;
          DAT_123c90ec = 1;
          DAT_123c90c0 = puVar4;
          _DAT_123c90c4 = puVar4;
          _DAT_123c90c8 = puVar4;
          FUN_11a8911f(&LAB_11cb7bb0);
        }
        puVar4 = &DAT_123c90b8;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || ((int)(puVar4[6] - puVar4[5]) >> 2 <= iVar5)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(puVar4[5] + iVar5 * 4);
      }
      cVar1 = FUN_11a81340(param_1,param_1 + 0x34);
      if (cVar1 != '\0') break;
      iVar5 = iVar5 + 1;
      if (iVar3 <= iVar5) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x30) = uVar6;
  }
  return;
}



