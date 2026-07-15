// ===== class CCraftInfo  (2 recovered methods) =====

/* --- CCraftInfo::GetManagers @ 107ec1a0 --- */
// [RE-AUTO c3]
// id: CCraftInfo::GetManagers
// strings:
//   ""CCraftInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCraftInfo::GetManagers
   strings:
     ""CCraftInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCraftInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bef38 & 1) == 0) {
    DAT_123bef38 = DAT_123bef38 | 1;
    _DAT_123bef0c = &DAT_123beefc;
    DAT_123bef10 = &DAT_123beefc;
    DAT_123beefc = 0;
    FUN_100d83d0("CCraftInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c71270);
  }
  return DAT_123beef8;
}



/* --- CCraftInfo::GetManagers_1124fc00 @ 1124fc00 --- */
// [RE-AUTO c3]
// id: CCraftInfo::GetManagers
// strings:
//   ""CCraftInfo""
//   ""CCraftInfo::GetManagers""

/* [RE-AUTO c3]
   id: CCraftInfo::GetManagers
   strings:
     ""CCraftInfo""
     ""CCraftInfo::GetManagers"" */

void __fastcall CCraftInfo__GetManagers_1124fc00(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  undefined **local_8;
  
  piVar3 = (int *)FUN_111e09f0();
  local_c = (**(code **)(*piVar3 + 0x28))();
  if (local_c != 0) {
    piVar3 = (int *)FUN_108041a0(0,"CCraftInfo",0);
    local_10 = (**(code **)(*piVar3 + 0x28))();
    iVar7 = 0;
    if (0 < local_10) {
      do {
        local_8 = &PTR_FUN_11dcaec4;
        if ((DAT_123bef38 & 1) == 0) {
          DAT_123bef38 = DAT_123bef38 | 1;
          FUN_102500e0("CCraftInfo::GetManagers");
          FUN_11a8911f(&LAB_11c71270);
        }
        puVar4 = (undefined4 *)*DAT_123beef8;
        if ((puVar4 == (undefined4 *)0x0) &&
           (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CCraftInfo",0),
           puVar4 == (undefined4 *)0x0)) {
          if ((DAT_123bf0e0 & 1) == 0) {
            DAT_123bf0e0 = DAT_123bf0e0 | 1;
            FUN_10806120();
            FUN_11a8911f(&LAB_11c98a10);
          }
          puVar4 = &DAT_123bf070;
        }
        local_8 = &PTR_FUN_11da54a8;
        if (((-1 < iVar7) && (iVar7 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
           (iVar1 = *(int *)(puVar4[5] + iVar7 * 4), iVar1 != 0)) {
          if (*(int *)(iVar1 + 0x44) == 2) {
            local_8 = *(undefined ***)(iVar1 + 0x10);
            puVar5 = local_18;
          }
          else {
            if ((*(int *)(iVar1 + 0x44) != 1) ||
               (cVar2 = FUN_11250120(iVar1,local_c), cVar2 == '\0')) goto LAB_1124fd36;
            local_8 = *(undefined ***)(iVar1 + 0x10);
            puVar5 = local_20;
          }
          FUN_10467580(puVar5,&local_8);
        }
LAB_1124fd36:
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_10);
    }
    uVar6 = FUN_1025b060();
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    uVar6 = FUN_1134b7d0();
    *(undefined4 *)(param_1 + 0x20) = uVar6;
  }
  return;
}



