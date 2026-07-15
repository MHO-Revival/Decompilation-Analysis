// ===== class CSystemUnlockInfo  (2 recovered methods) =====

/* --- CSystemUnlockInfo::GetManagers @ 1083ea70 --- */
// [RE-AUTO c3]
// id: CSystemUnlockInfo::GetManagers
// strings:
//   ""CSystemUnlockInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSystemUnlockInfo::GetManagers
   strings:
     ""CSystemUnlockInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSystemUnlockInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf454 & 1) == 0) {
    DAT_123bf454 = DAT_123bf454 | 1;
    _DAT_123bf44c = &DAT_123bf43c;
    DAT_123bf450 = &DAT_123bf43c;
    DAT_123bf43c = 0;
    FUN_100d83d0("CSystemUnlockInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c725b0);
  }
  return DAT_123bf438;
}



/* --- CSystemUnlockInfo::GetManagers_115a99a0 @ 115a99a0 --- */
// [RE-AUTO c3]
// id: CSystemUnlockInfo::GetManagers
// strings:
//   ""CSystemUnlockInfo""
//   ""CSystemUnlockInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSystemUnlockInfo::GetManagers
   strings:
     ""CSystemUnlockInfo""
     ""CSystemUnlockInfo::GetManagers"" */

uint * __fastcall CSystemUnlockInfo__GetManagers_115a99a0(uint *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined **local_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  piVar2 = (int *)FUN_10848210(0,"CSystemUnlockInfo",0);
  (**(code **)(*piVar2 + 0x28))();
  local_8 = &PTR_FUN_11dcefdc;
  if ((DAT_123bf454 & 1) == 0) {
    DAT_123bf454 = DAT_123bf454 | 1;
    FUN_102500e0("CSystemUnlockInfo::GetManagers");
    FUN_11a8911f(&LAB_11c725b0);
  }
  piVar2 = (int *)*DAT_123bf438;
  if ((piVar2 == (int *)0x0) &&
     (piVar2 = (int *)FUN_11679e10(&local_8,"CSystemUnlockInfo",0), piVar2 == (int *)0x0)) {
    if ((DAT_123bf3b0 & 1) == 0) {
      DAT_123bf3bc = 0;
      DAT_123bf3cc = 0;
      uRam123bf3d0 = 0;
      _DAT_123bf3d4 = 0;
      DAT_123bf3d8 = 0;
      DAT_123bf3b0 = DAT_123bf3b0 | 1;
      DAT_123bf3b8 = &PTR_FUN_11dcf044;
      DAT_123bf3dc = _DAT_11de9ae0;
      DAT_123bf3e0 = _UNK_11de9ae4;
      uRam123bf3e4 = _UNK_11de9ae8;
      DAT_123bf3e8 = _UNK_11de9aec;
      DAT_123bf3ec = 1;
      DAT_123bf3c0 = piVar2;
      _DAT_123bf3c4 = piVar2;
      _DAT_123bf3c8 = piVar2;
      FUN_11a8911f(&LAB_11ca3aa0);
    }
    piVar2 = (int *)&DAT_123bf3b8;
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  piVar2 = (int *)FUN_10848210(0,"CSystemUnlockInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 1;
  if (0 < iVar3) {
    uVar6 = 2;
    do {
      local_8 = &PTR_FUN_11dcefdc;
      if ((DAT_123bf454 & 1) == 0) {
        DAT_123bf454 = DAT_123bf454 | 1;
        FUN_102500e0("CSystemUnlockInfo::GetManagers");
        FUN_11a8911f(&LAB_11c725b0);
      }
      piVar2 = (int *)*DAT_123bf438;
      if ((piVar2 == (int *)0x0) &&
         (piVar2 = (int *)FUN_11679e10(&local_8,"CSystemUnlockInfo",0), piVar2 == (int *)0x0)) {
        if ((DAT_123bf3b0 & 1) == 0) {
          DAT_123bf3bc = 0;
          DAT_123bf3cc = 0;
          uRam123bf3d0 = 0;
          _DAT_123bf3d4 = 0;
          DAT_123bf3d8 = 0;
          DAT_123bf3b0 = DAT_123bf3b0 | 1;
          DAT_123bf3b8 = &PTR_FUN_11dcf044;
          DAT_123bf3dc = _DAT_11de9ae0;
          DAT_123bf3e0 = _UNK_11de9ae4;
          uRam123bf3e4 = _UNK_11de9ae8;
          DAT_123bf3e8 = _UNK_11de9aec;
          DAT_123bf3ec = 1;
          DAT_123bf3c0 = piVar2;
          _DAT_123bf3c4 = piVar2;
          _DAT_123bf3c8 = piVar2;
          FUN_11a8911f(&LAB_11ca3aa0);
        }
        piVar2 = (int *)&DAT_123bf3b8;
      }
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (piVar2[0xc] == 0)) && (piVar2[10] != 0)) &&
          ((iVar4 = iVar5 - piVar2[0xc], -1 < iVar4 && (iVar4 < piVar2[9])))))) {
        iVar1 = *(int *)(piVar2[8] + (iVar4 / piVar2[10]) * 4);
        if ((iVar1 != 0) &&
           ((iVar4 = *(int *)(iVar1 + (iVar4 % piVar2[10]) * 4), iVar4 != 0 &&
            (*(char *)(iVar4 + 0x24) != '\0')))) {
          if (iVar5 < 0x20) {
            *param_1 = *param_1 | uVar6 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
          }
          else {
            param_1[1] = param_1[1] | 1 << ((char)iVar5 - 0x20U & 0x1f);
          }
        }
      }
      iVar5 = iVar5 + 1;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    } while (iVar5 <= iVar3);
  }
  return param_1;
}



