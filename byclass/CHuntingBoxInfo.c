// ===== class CHuntingBoxInfo  (3 recovered methods) =====

/* --- CHuntingBoxInfo::GetManagers @ 108f2c00 --- */
// [RE-AUTO c3]
// id: CHuntingBoxInfo::GetManagers
// strings:
//   ""CHuntingBoxInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHuntingBoxInfo::GetManagers
   strings:
     ""CHuntingBoxInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHuntingBoxInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfca8 & 1) == 0) {
    DAT_123bfca8 = DAT_123bfca8 | 1;
    _DAT_123bfca0 = &DAT_123bfc90;
    DAT_123bfca4 = &DAT_123bfc90;
    DAT_123bfc90 = 0;
    FUN_100d83d0("CHuntingBoxInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c76760);
  }
  return DAT_123bfc8c;
}



/* --- CHuntingBoxInfo::GetManagers_118f1e90 @ 118f1e90 --- */
// [RE-AUTO c3]
// id: CHuntingBoxInfo::GetManagers
// strings:
//   ""CHuntingBoxInfo::GetManagers""
//   ""CHuntingBoxInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHuntingBoxInfo::GetManagers
   strings:
     ""CHuntingBoxInfo::GetManagers""
     ""CHuntingBoxInfo"" */

void CHuntingBoxInfo__GetManagers_118f1e90(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11dd7750;
    if ((DAT_123bfca8 & 1) == 0) {
      DAT_123bfca8 = DAT_123bfca8 | 1;
      FUN_102500e0("CHuntingBoxInfo::GetManagers");
      FUN_11a8911f(&LAB_11c76760);
    }
    piVar2 = (int *)*DAT_123bfc8c;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CHuntingBoxInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123bfbbc & 1) == 0) {
          DAT_123bfbc4 = 0;
          DAT_123bfbd4 = 0;
          DAT_123bfbd8 = 0;
          _DAT_123bfbdc = 0;
          DAT_123bfbe0 = 0;
          DAT_123bfbbc = DAT_123bfbbc | 1;
          DAT_123bfbc0 = &PTR_FUN_11dd77f0;
          DAT_123bfbe4 = _DAT_11de9ae0;
          DAT_123bfbe8 = _UNK_11de9ae4;
          uRam123bfbec = _UNK_11de9ae8;
          DAT_123bfbf0 = _UNK_11de9aec;
          DAT_123bfbf4 = 1;
          DAT_123bfbc8 = piVar2;
          _DAT_123bfbcc = piVar2;
          _DAT_123bfbd0 = piVar2;
          FUN_11a8911f(&LAB_11cb08d0);
        }
        piVar2 = (int *)&DAT_123bfbc0;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11dd7750;
    if ((DAT_123bfca8 & 1) == 0) {
      DAT_123bfca8 = DAT_123bfca8 | 1;
      FUN_102500e0("CHuntingBoxInfo::GetManagers");
      FUN_11a8911f(&LAB_11c76760);
    }
    piVar2 = (int *)*DAT_123bfc8c;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CHuntingBoxInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123bfbbc & 1) == 0) {
          DAT_123bfbc4 = 0;
          DAT_123bfbd4 = 0;
          DAT_123bfbd8 = 0;
          _DAT_123bfbdc = 0;
          DAT_123bfbe0 = 0;
          DAT_123bfbbc = DAT_123bfbbc | 1;
          DAT_123bfbc0 = &PTR_FUN_11dd77f0;
          DAT_123bfbe4 = _DAT_11de9ae0;
          DAT_123bfbe8 = _UNK_11de9ae4;
          uRam123bfbec = _UNK_11de9ae8;
          DAT_123bfbf0 = _UNK_11de9aec;
          DAT_123bfbf4 = 1;
          DAT_123bfbc8 = piVar2;
          _DAT_123bfbcc = piVar2;
          _DAT_123bfbd0 = piVar2;
          FUN_11a8911f(&LAB_11cb08d0);
        }
        piVar2 = (int *)&DAT_123bfbc0;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CEquipInfo__GetManagers_119f5dc0(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



/* --- CHuntingBoxInfo::GetManagers_119f6d40 @ 119f6d40 --- */
// [RE-AUTO c3]
// id: CHuntingBoxInfo::GetManagers
// strings:
//   ""CHuntingBoxInfo::GetManagers""
//   ""CHuntingBoxInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHuntingBoxInfo::GetManagers
   strings:
     ""CHuntingBoxInfo::GetManagers""
     ""CHuntingBoxInfo"" */

void __fastcall CHuntingBoxInfo__GetManagers_119f6d40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) & 0xfffffffcU)) {
    do {
      local_8 = &PTR_FUN_11dd7750;
      if ((DAT_123bfca8 & 1) == 0) {
        DAT_123bfca8 = DAT_123bfca8 | 1;
        FUN_102500e0("CHuntingBoxInfo::GetManagers");
        FUN_11a8911f(&LAB_11c76760);
      }
      if (((*DAT_123bfc8c == 0) && (iVar1 = FUN_11679e10(&local_8,"CHuntingBoxInfo",0), iVar1 == 0))
         && ((DAT_123bfbbc & 1) == 0)) {
        DAT_123bfbc4 = 0;
        DAT_123bfbd4 = 0;
        DAT_123bfbd8 = 0;
        _DAT_123bfbdc = 0;
        DAT_123bfbe0 = 0;
        DAT_123bfbbc = DAT_123bfbbc | 1;
        DAT_123bfbc8 = 0;
        _DAT_123bfbcc = 0;
        _DAT_123bfbd0 = 0;
        DAT_123bfbc0 = &PTR_FUN_11dd77f0;
        DAT_123bfbe4 = _DAT_11de9ae0;
        DAT_123bfbe8 = _UNK_11de9ae4;
        uRam123bfbec = _UNK_11de9ae8;
        DAT_123bfbf0 = _UNK_11de9aec;
        DAT_123bfbf4 = 1;
        FUN_11a8911f(&LAB_11cb5640);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2);
  }
  return;
}



