// ===== class CFluteWeaponInfo  (2 recovered methods) =====

/* --- CFluteWeaponInfo::GetManagers @ 108557d0 --- */
// [RE-AUTO c3]
// id: CFluteWeaponInfo::GetManagers
// strings:
//   ""CFluteWeaponInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFluteWeaponInfo::GetManagers
   strings:
     ""CFluteWeaponInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFluteWeaponInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf8a0 & 1) == 0) {
    DAT_123bf8a0 = DAT_123bf8a0 | 1;
    _DAT_123bf8b8 = &DAT_123bf8a8;
    DAT_123bf8bc = &DAT_123bf8a8;
    DAT_123bf8a8 = 0;
    FUN_100d83d0("CFluteWeaponInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72e30);
  }
  return DAT_123bf8a4;
}



/* --- CFluteWeaponInfo::GetManagers_118bdef0 @ 118bdef0 --- */
// [RE-AUTO c3]
// id: CFluteWeaponInfo::GetManagers
// calls: CFluteTuneInfo::GetManagers_117eada0
// strings:
//   ""CFluteWeaponInfo""
//   ""CFluteWeaponInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFluteWeaponInfo::GetManagers
   calls: CFluteTuneInfo::GetManagers_117eada0
   strings:
     ""CFluteWeaponInfo""
     ""CFluteWeaponInfo::GetManagers"" */

void CFluteWeaponInfo__GetManagers_118bdef0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_10870280(0,"CFluteWeaponInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd04f0;
      if ((DAT_123bf8a0 & 1) == 0) {
        DAT_123bf8a0 = DAT_123bf8a0 | 1;
        FUN_102500e0("CFluteWeaponInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72e30);
      }
      puVar4 = (undefined *)*DAT_123bf8a4;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CFluteWeaponInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bf6d0 & 1) == 0) {
          DAT_123bf6d8 = 0;
          DAT_123bf6e8 = 0;
          DAT_123bf6ec = 0;
          _DAT_123bf6f0 = 0;
          DAT_123bf6f4 = 0;
          DAT_123bf6d0 = DAT_123bf6d0 | 1;
          _DAT_123bf6d4 = &PTR_FUN_11dd0920;
          DAT_123bf6f8 = _DAT_11de9ae0;
          DAT_123bf6fc = _UNK_11de9ae4;
          uRam123bf700 = _UNK_11de9ae8;
          DAT_123bf704 = _UNK_11de9aec;
          DAT_123bf708 = 1;
          DAT_123bf6dc = puVar4;
          _DAT_123bf6e0 = puVar4;
          _DAT_123bf6e4 = puVar4;
          FUN_11a8911f(&LAB_11caf9d0);
        }
        puVar4 = &DAT_123bf6d4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CFluteTuneInfo__GetManagers_117eada0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



