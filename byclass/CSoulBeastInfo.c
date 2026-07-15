// ===== class CSoulBeastInfo  (3 recovered methods) =====

/* --- CSoulBeastInfo::GetManagers @ 10520350 --- */
// [RE-AUTO c3]
// id: CSoulBeastInfo::GetManagers
// strings:
//   ""CSoulBeastInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulBeastInfo::GetManagers
   strings:
     ""CSoulBeastInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSoulBeastInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7220 & 1) == 0) {
    DAT_123c7220 = DAT_123c7220 | 1;
    _DAT_123c7238 = &DAT_123c7228;
    DAT_123c723c = &DAT_123c7228;
    DAT_123c7228 = 0;
    FUN_100d83d0("CSoulBeastInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fa00);
  }
  return DAT_123c7224;
}



/* --- CSoulBeastInfo::GetManagers_11413e40 @ 11413e40 --- */
// [RE-AUTO c3]
// id: CSoulBeastInfo::GetManagers
// strings:
//   ""CSoulBeastInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CSoulBeastInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulBeastInfo::GetManagers
   strings:
     ""CSoulBeastInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CSoulBeastInfo"" */

void __thiscall CSoulBeastInfo__GetManagers_11413e40(int param_1,undefined **param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_20 [16];
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)(param_1 + 0x34);
  local_8 = param_1;
  FUN_10462c40();
  local_10 = param_1 + 0x4c;
  FUN_10462c40();
  puVar1 = param_2;
  iVar4 = 0;
  *(undefined **)(param_1 + 0x24) = param_2[1];
  *(undefined **)(param_1 + 0x20) = *param_2;
  *(undefined **)(param_1 + 0x2c) = param_2[3];
  *(undefined **)(param_1 + 0x28) = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)param_2 + 0x3d2);
  if (*(char *)(param_2 + 4) != '\0') {
    iVar3 = (int)param_2 + 0x11;
    do {
      FUN_10467580(local_20,iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)*(byte *)(puVar1 + 4));
  }
  iVar4 = 0;
  if (*(char *)((int)puVar1 + 0xb1) != '\0') {
    iVar3 = (int)puVar1 + 0xb2;
    do {
      FUN_10467580(local_20,iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)*(byte *)((int)puVar1 + 0xb1));
  }
  local_10 = 0;
  *(undefined4 *)(local_8 + 0x8c) = *(undefined4 *)((int)puVar1 + 0xbf5a);
  if (0 < *(int *)((int)puVar1 + 0x3d6)) {
    local_c = (int *)((int)puVar1 + 0x3da);
    do {
      iVar4 = *local_c;
      param_2 = &PTR_FUN_11dc0154;
      if ((DAT_123c7220 & 1) == 0) {
        DAT_123c7220 = DAT_123c7220 | 1;
        _DAT_123c7238 = &DAT_123c7228;
        DAT_123c723c = &DAT_123c7228;
        DAT_123c7228 = 0;
        FUN_100d9260("CSoulBeastInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123c7224 = (undefined4 *)FUN_100dfd90(DAT_123c723c);
        if (DAT_123c7224 == (undefined4 *)0x0) {
          DAT_123c7224 = (undefined4 *)FUN_100dde50(4);
          *DAT_123c7224 = 0;
          FUN_100dfdc0(DAT_123c723c,DAT_123c7224);
        }
        FUN_11a8911f(&LAB_11c6fa00);
      }
      puVar2 = (undefined4 *)*DAT_123c7224;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_11679e10(&param_2,"CSoulBeastInfo",0);
        if (puVar2 == (undefined4 *)0x0) {
          if ((DAT_123c7298 & 1) == 0) {
            DAT_123c72a0 = 0;
            DAT_123c72b0 = 0;
            DAT_123c72b4 = 0;
            _DAT_123c72b8 = 0;
            DAT_123c72bc = 0;
            DAT_123c7298 = DAT_123c7298 | 1;
            DAT_123c729c = &PTR_FUN_11dc0240;
            DAT_123c72c0 = _DAT_11de9ae0;
            DAT_123c72c4 = _UNK_11de9ae4;
            uRam123c72c8 = _UNK_11de9ae8;
            DAT_123c72cc = _UNK_11de9aec;
            DAT_123c72d0 = 1;
            DAT_123c72a4 = puVar2;
            _DAT_123c72a8 = puVar2;
            _DAT_123c72ac = puVar2;
            FUN_11a8911f(&LAB_11c9c5e0);
          }
          puVar2 = &DAT_123c729c;
        }
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((iVar4 != -1) && (((iVar4 != 0 || (puVar2[0xc] == 0)) && (puVar2[10] != 0)))) &&
         ((iVar4 = iVar4 - puVar2[0xc], -1 < iVar4 && (iVar4 < (int)puVar2[9])))) {
        iVar3 = *(int *)(puVar2[8] + (iVar4 / (int)puVar2[10]) * 4);
        if ((iVar3 != 0) && (*(int *)(iVar3 + (iVar4 % (int)puVar2[10]) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x1c0);
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 0xc;
    } while (local_10 < *(int *)((int)puVar1 + 0x3d6));
  }
  return;
}



/* --- CSoulBeastInfo::GetManagers_119bf530 @ 119bf530 --- */
// [RE-AUTO c3]
// id: CSoulBeastInfo::GetManagers
// strings:
//   ""CSoulBeastInfo""
//   ""CSoulBeastInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSoulBeastInfo::GetManagers
   strings:
     ""CSoulBeastInfo""
     ""CSoulBeastInfo::GetManagers"" */

void CSoulBeastInfo__GetManagers_119bf530(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10529690(0,"CSoulBeastInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dc0154;
      if ((DAT_123c7220 & 1) == 0) {
        DAT_123c7220 = DAT_123c7220 | 1;
        FUN_102500e0("CSoulBeastInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fa00);
      }
      if (((*DAT_123c7224 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSoulBeastInfo",0), iVar3 == 0))
         && ((DAT_123c7298 & 1) == 0)) {
        DAT_123c72a0 = 0;
        DAT_123c72b0 = 0;
        DAT_123c72b4 = 0;
        _DAT_123c72b8 = 0;
        DAT_123c72bc = 0;
        DAT_123c7298 = DAT_123c7298 | 1;
        DAT_123c729c = &PTR_FUN_11dc0240;
        DAT_123c72c0 = _DAT_11de9ae0;
        DAT_123c72c4 = _UNK_11de9ae4;
        uRam123c72c8 = _UNK_11de9ae8;
        DAT_123c72cc = _UNK_11de9aec;
        DAT_123c72d0 = 1;
        DAT_123c72a4 = iVar3;
        _DAT_123c72a8 = iVar3;
        _DAT_123c72ac = iVar3;
        FUN_11a8911f(&LAB_11cb47d0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_116ebb60();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



