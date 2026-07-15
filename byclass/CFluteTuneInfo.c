// ===== class CFluteTuneInfo  (3 recovered methods) =====

/* --- CFluteTuneInfo::GetManagers @ 10972b50 --- */
// [RE-AUTO c3]
// id: CFluteTuneInfo::GetManagers
// strings:
//   ""CFluteTuneInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFluteTuneInfo::GetManagers
   strings:
     ""CFluteTuneInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CFluteTuneInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c87dc & 1) == 0) {
    DAT_123c87dc = DAT_123c87dc | 1;
    _DAT_123c87f4 = &DAT_123c87e4;
    DAT_123c87f8 = &DAT_123c87e4;
    DAT_123c87e4 = 0;
    FUN_100d83d0("CFluteTuneInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c79c50);
  }
  return DAT_123c87e0;
}



/* --- CFluteTuneInfo::GetManagers_117eada0 @ 117eada0 --- */
// [RE-AUTO c3]
// id: CFluteTuneInfo::GetManagers
// strings:
//   ""CFluteTuneInfo::GetManagers""
//   ""CFluteTuneInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFluteTuneInfo::GetManagers
   strings:
     ""CFluteTuneInfo::GetManagers""
     ""CFluteTuneInfo"" */

void __thiscall CFluteTuneInfo__GetManagers_117eada0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined *local_14;
  undefined *local_10;
  undefined **local_c;
  undefined1 local_5;
  
  piVar5 = *(int **)(param_1 + 0x24);
  if (piVar5 != *(int **)(param_1 + 0x28)) {
    do {
      iVar6 = *piVar5;
      local_c = &PTR_FUN_11dde2b8;
      if ((DAT_123c87dc & 1) == 0) {
        DAT_123c87dc = DAT_123c87dc | 1;
        FUN_102500e0("CFluteTuneInfo::GetManagers");
        FUN_11a8911f(&LAB_11c79c50);
      }
      puVar4 = (undefined *)*DAT_123c87e0;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CFluteTuneInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c8804 & 1) == 0) {
          DAT_123c880c = 0;
          DAT_123c881c = 0;
          DAT_123c8820 = 0;
          _DAT_123c8824 = 0;
          DAT_123c8828 = 0;
          DAT_123c8804 = DAT_123c8804 | 1;
          _DAT_123c8808 = &PTR_FUN_11dde2cc;
          DAT_123c882c = _DAT_11de9ae0;
          DAT_123c8830 = _UNK_11de9ae4;
          uRam123c8834 = _UNK_11de9ae8;
          DAT_123c8838 = _UNK_11de9aec;
          DAT_123c883c = 1;
          DAT_123c8810 = puVar4;
          _DAT_123c8814 = puVar4;
          _DAT_123c8818 = puVar4;
          FUN_11a8911f(&LAB_11cab560);
        }
        puVar4 = &DAT_123c8808;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar6 != -1) &&
         (((iVar6 != 0 || (*(int *)(puVar4 + 0x30) == 0)) && (*(int *)(puVar4 + 0x28) != 0)))) {
        iVar6 = iVar6 - *(int *)(puVar4 + 0x30);
        if ((iVar6 < 0) || (*(int *)(puVar4 + 0x24) <= iVar6)) {
LAB_117eaeca:
          ppuVar7 = (undefined **)0x0;
        }
        else {
          iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar6 / *(int *)(puVar4 + 0x28)) * 4);
          if (iVar1 == 0) goto LAB_117eaeca;
          ppuVar7 = *(undefined ***)(iVar1 + (iVar6 % *(int *)(puVar4 + 0x28)) * 4);
        }
        local_c = ppuVar7;
        if (ppuVar7 != (undefined **)0x0) {
          piVar2 = *(int **)(param_1 + 0x34);
          if (piVar2 == *(int **)(param_1 + 0x38)) {
            FUN_117eb450(piVar2,&local_c,&local_5,1,1);
          }
          else {
            *piVar2 = (int)ppuVar7;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
          local_14 = ppuVar7[6];
          puVar3 = *(undefined4 **)(param_1 + 0x40);
          local_10 = ppuVar7[7];
          if (puVar3 == *(undefined4 **)(param_1 + 0x44)) {
            FUN_10822da0(puVar3,&local_14,&local_5,1,1);
          }
          else {
            *puVar3 = local_14;
            puVar3[1] = local_10;
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 8;
          }
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *(int **)(param_1 + 0x28));
  }
  uVar8 = 0;
  if (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 2 != 0) {
    do {
      CFluteTuneInfo__GetManagers_117eada0(param_2);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 2));
  }
  return;
}



/* --- CFluteTuneInfo::GetManagers_118bfc00 @ 118bfc00 --- */
// [RE-AUTO c3]
// id: CFluteTuneInfo::GetManagers
// calls: CBuffInfo::GetManagers_117eb8e0
// strings:
//   ""CFluteTuneInfo""
//   ""CFluteTuneInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFluteTuneInfo::GetManagers
   calls: CBuffInfo::GetManagers_117eb8e0
   strings:
     ""CFluteTuneInfo""
     ""CFluteTuneInfo::GetManagers"" */

void CFluteTuneInfo__GetManagers_118bfc00(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_10973f60(0,"CFluteTuneInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dde2b8;
      if ((DAT_123c87dc & 1) == 0) {
        DAT_123c87dc = DAT_123c87dc | 1;
        FUN_102500e0("CFluteTuneInfo::GetManagers");
        FUN_11a8911f(&LAB_11c79c50);
      }
      puVar4 = (undefined *)*DAT_123c87e0;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CFluteTuneInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c8804 & 1) == 0) {
          DAT_123c880c = 0;
          DAT_123c881c = 0;
          DAT_123c8820 = 0;
          _DAT_123c8824 = 0;
          DAT_123c8828 = 0;
          DAT_123c8804 = DAT_123c8804 | 1;
          _DAT_123c8808 = &PTR_FUN_11dde2cc;
          DAT_123c882c = _DAT_11de9ae0;
          DAT_123c8830 = _UNK_11de9ae4;
          uRam123c8834 = _UNK_11de9ae8;
          DAT_123c8838 = _UNK_11de9aec;
          DAT_123c883c = 1;
          DAT_123c8810 = puVar4;
          _DAT_123c8814 = puVar4;
          _DAT_123c8818 = puVar4;
          FUN_11a8911f(&LAB_11cafb20);
        }
        puVar4 = &DAT_123c8808;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CBuffInfo__GetManagers_117eb8e0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



