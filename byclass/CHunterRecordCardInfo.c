// ===== class CHunterRecordCardInfo  (2 recovered methods) =====

/* --- CHunterRecordCardInfo::GetManagers @ 108ba7d0 --- */
// [RE-AUTO c3]
// id: CHunterRecordCardInfo::GetManagers
// strings:
//   ""CHunterRecordCardInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterRecordCardInfo::GetManagers
   strings:
     ""CHunterRecordCardInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHunterRecordCardInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7abc & 1) == 0) {
    DAT_123c7abc = DAT_123c7abc | 1;
    _DAT_123c7ad4 = &DAT_123c7ac4;
    DAT_123c7ad8 = &DAT_123c7ac4;
    DAT_123c7ac4 = 0;
    FUN_100d83d0("CHunterRecordCardInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c75360);
  }
  return DAT_123c7ac0;
}



/* --- CHunterRecordCardInfo::GetManagers_114e0150 @ 114e0150 --- */
// [RE-AUTO c3]
// id: CHunterRecordCardInfo::GetManagers
// strings:
//   ""CHunterRecordCardInfo""
//   ""CHunterRecordCardInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHunterRecordCardInfo::GetManagers
   strings:
     ""CHunterRecordCardInfo""
     ""CHunterRecordCardInfo::GetManagers"" */

void __fastcall CHunterRecordCardInfo__GetManagers_114e0150(undefined4 param_1)

{
  undefined *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined **local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  undefined **local_8;
  
  local_c = param_1;
  piVar3 = (int *)FUN_108c6620(0,"CHunterRecordCardInfo",0);
  local_14 = (**(code **)(*piVar3 + 0x28))();
  local_10 = 0;
  if (local_14 != 0) {
    do {
      uVar9 = local_10;
      local_8 = &PTR_FUN_11dd58d8;
      if ((DAT_123c7abc & 1) == 0) {
        DAT_123c7abc = DAT_123c7abc | 1;
        FUN_102500e0("CHunterRecordCardInfo::GetManagers");
        FUN_11a8911f(&LAB_11c75360);
      }
      puVar4 = (undefined4 *)*DAT_123c7ac0;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CHunterRecordCardInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123c7c00 & 1) == 0) {
          DAT_123c7c08 = 0;
          DAT_123c7c18 = 0;
          DAT_123c7c1c = 0;
          _DAT_123c7c20 = 0;
          DAT_123c7c24 = 0;
          DAT_123c7c00 = DAT_123c7c00 | 1;
          DAT_123c7c04 = &PTR_FUN_11dd5a64;
          DAT_123c7c28 = _DAT_11de9ae0;
          DAT_123c7c2c = _UNK_11de9ae4;
          uRam123c7c30 = _UNK_11de9ae8;
          DAT_123c7c34 = _UNK_11de9aec;
          DAT_123c7c38 = 1;
          DAT_123c7c0c = puVar4;
          _DAT_123c7c10 = puVar4;
          _DAT_123c7c14 = puVar4;
          FUN_11a8911f(&LAB_11c9f7f0);
        }
        puVar4 = &DAT_123c7c04;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < (int)uVar9) && ((int)uVar9 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
          (piVar3 = *(int **)(puVar4[5] + uVar9 * 4), piVar3 != (int *)0x0)) &&
         ((char)piVar3[6] != '\0')) {
        uVar5 = (**(code **)(*piVar3 + 0x18))();
        ppuVar6 = (undefined **)FUN_114e2ef0(param_1,uVar5);
        if (ppuVar6 != (undefined **)0x0) {
          puVar1 = ppuVar6[2];
          local_8 = ppuVar6;
          while (puVar1 != (undefined *)0x0) {
            puVar8 = (undefined *)0x0;
            if (puVar1 != (undefined *)0x0) {
              do {
                piVar3 = (int *)FUN_114e29d0(puVar8);
                if ((piVar3 != (int *)0x0) &&
                   (cVar2 = (**(code **)(*piVar3 + 0x1c))(), cVar2 != '\0')) {
                  iVar7 = FUN_114dc920(piVar3 + 9);
                  piVar3[10] = iVar7;
                }
                puVar8 = puVar8 + 1;
                ppuVar6 = local_8;
              } while (puVar8 < puVar1);
            }
            cVar2 = (**(code **)(*ppuVar6 + 0x10))();
            uVar9 = local_10;
            if (cVar2 == '\0') break;
            FUN_1161c950();
            uVar9 = local_10;
            puVar1 = ppuVar6[2];
          }
          param_1 = local_c;
          local_1c = ppuVar6[1];
          local_18 = ppuVar6;
          FUN_114e2380(local_24,&local_1c);
        }
      }
      local_10 = uVar9 + 1;
    } while (local_10 < local_14);
  }
  return;
}



