// ===== class CFinalGuildMatchRewardInfo  (3 recovered methods) =====

/* --- CFinalGuildMatchRewardInfo::GetManagers @ 1196f640 --- */
// [RE-AUTO c3]
// id: CFinalGuildMatchRewardInfo::GetManagers
// strings:
//   ""CFinalGuildMatchRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFinalGuildMatchRewardInfo::GetManagers
   strings:
     ""CFinalGuildMatchRewardInfo::GetManagers"" */

undefined4 *
CFinalGuildMatchRewardInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d63f14;
  if (param_3 == 0) {
    if ((DAT_123a0fd4 & 1) == 0) {
      DAT_123a0fd4 = DAT_123a0fd4 | 1;
      FUN_102500e0("CFinalGuildMatchRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3030);
    }
    if ((undefined4 *)*DAT_123a0fb8 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_123a0fb8;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_123a10b4 & 1) == 0) {
      DAT_123a10b4 = DAT_123a10b4 | 1;
      FUN_1196fc60();
      FUN_11a8911f(&LAB_11cb2f70);
    }
    puVar1 = &DAT_123a107c;
  }
  return puVar1;
}



/* --- CFinalGuildMatchRewardInfo::GetManagers_11970da0 @ 11970da0 --- */
// [RE-AUTO c3]
// id: CFinalGuildMatchRewardInfo::GetManagers
// strings:
//   ""CFinalGuildMatchRewardInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFinalGuildMatchRewardInfo::GetManagers
   strings:
     ""CFinalGuildMatchRewardInfo::GetManagers"" */

undefined4 CFinalGuildMatchRewardInfo__GetManagers_11970da0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a0fd4 & 1) == 0) {
      DAT_123a0fd4 = DAT_123a0fd4 | 1;
      FUN_102500e0("CFinalGuildMatchRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3030);
    }
    return *DAT_123a0fb8;
  }
  return 0;
}



/* --- CFinalGuildMatchRewardInfo::GetManagers_119713c0 @ 119713c0 --- */
// [RE-AUTO c3]
// id: CFinalGuildMatchRewardInfo::GetManagers
// strings:
//   ""CFinalGuildMatchRewardInfo::GetManagers""
//   ""CFinalGuildMatchRewardInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFinalGuildMatchRewardInfo::GetManagers
   strings:
     ""CFinalGuildMatchRewardInfo::GetManagers""
     ""CFinalGuildMatchRewardInfo"" */

void CFinalGuildMatchRewardInfo__GetManagers_119713c0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d63f14;
    if ((DAT_123a0fd4 & 1) == 0) {
      DAT_123a0fd4 = DAT_123a0fd4 | 1;
      FUN_102500e0("CFinalGuildMatchRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3030);
    }
    piVar2 = (int *)*DAT_123a0fb8;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CFinalGuildMatchRewardInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123a10b4 & 1) == 0) {
          DAT_123a1080 = 0;
          DAT_123a1090 = 0;
          DAT_123a1094 = 0;
          _DAT_123a1098 = 0;
          uRam123a109c = 0;
          DAT_123a10b4 = DAT_123a10b4 | 1;
          DAT_123a107c = &PTR_FUN_11d63fac;
          _DAT_123a10a0 = _DAT_11de9ae0;
          uRam123a10a4 = _UNK_11de9ae4;
          uRam123a10a8 = _UNK_11de9ae8;
          uRam123a10ac = _UNK_11de9aec;
          DAT_123a10b0 = 1;
          DAT_123a1084 = piVar2;
          _DAT_123a1088 = piVar2;
          _DAT_123a108c = piVar2;
          FUN_11a8911f(&LAB_11cb2f70);
        }
        piVar2 = (int *)&DAT_123a107c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d63f14;
    if ((DAT_123a0fd4 & 1) == 0) {
      DAT_123a0fd4 = DAT_123a0fd4 | 1;
      FUN_102500e0("CFinalGuildMatchRewardInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3030);
    }
    piVar2 = (int *)*DAT_123a0fb8;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CFinalGuildMatchRewardInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123a10b4 & 1) == 0) {
          DAT_123a1080 = 0;
          DAT_123a1090 = 0;
          DAT_123a1094 = 0;
          _DAT_123a1098 = 0;
          uRam123a109c = 0;
          DAT_123a10b4 = DAT_123a10b4 | 1;
          DAT_123a107c = &PTR_FUN_11d63fac;
          _DAT_123a10a0 = _DAT_11de9ae0;
          uRam123a10a4 = _UNK_11de9ae4;
          uRam123a10a8 = _UNK_11de9ae8;
          uRam123a10ac = _UNK_11de9aec;
          DAT_123a10b0 = 1;
          DAT_123a1084 = piVar2;
          _DAT_123a1088 = piVar2;
          _DAT_123a108c = piVar2;
          FUN_11a8911f(&LAB_11cb2f70);
        }
        piVar2 = (int *)&DAT_123a107c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CItemBaseInfo__GetManagers_11a4c3f0(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



