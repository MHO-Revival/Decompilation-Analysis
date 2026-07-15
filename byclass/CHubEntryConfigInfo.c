// ===== class CHubEntryConfigInfo  (2 recovered methods) =====

/* --- CHubEntryConfigInfo::GetManagers @ 107ca2b0 --- */
// [RE-AUTO c3]
// id: CHubEntryConfigInfo::GetManagers
// strings:
//   ""CHubEntryConfigInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubEntryConfigInfo::GetManagers
   strings:
     ""CHubEntryConfigInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CHubEntryConfigInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bed94 & 1) == 0) {
    DAT_123bed94 = DAT_123bed94 | 1;
    _DAT_123bedc8 = &DAT_123bedb8;
    DAT_123bedcc = &DAT_123bedb8;
    DAT_123bedb8 = 0;
    FUN_100d83d0("CHubEntryConfigInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70520);
  }
  return DAT_123bedb4;
}



/* --- CHubEntryConfigInfo::GetManagers_11710040 @ 11710040 --- */
// [RE-AUTO c3]
// id: CHubEntryConfigInfo::GetManagers
// strings:
//   ""CHubEntryConfigInfo::GetManagers""
//   ""CHubEntryConfigInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHubEntryConfigInfo::GetManagers
   strings:
     ""CHubEntryConfigInfo::GetManagers""
     ""CHubEntryConfigInfo"" */

undefined4 __thiscall CHubEntryConfigInfo__GetManagers_11710040(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_c;
  int local_8;
  
  iVar5 = *(int *)(param_1 + 0x80);
  param_1 = param_1 + 0x78;
  local_8 = param_1;
  if (iVar5 != param_1) {
    do {
      iVar6 = *(int *)(iVar5 + 0x74);
      local_c = &PTR_FUN_11dc85a8;
      if ((DAT_123bed94 & 1) == 0) {
        DAT_123bed94 = DAT_123bed94 | 1;
        FUN_102500e0("CHubEntryConfigInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70520);
      }
      puVar4 = (undefined4 *)*DAT_123bedb4;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_c,"CHubEntryConfigInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123beba4 & 1) == 0) {
          DAT_123bebac = 0;
          DAT_123bebbc = 0;
          DAT_123bebc0 = 0;
          _DAT_123bebc4 = 0;
          DAT_123bebc8 = 0;
          DAT_123beba4 = DAT_123beba4 | 1;
          DAT_123beba8 = &PTR_FUN_11dc88c8;
          DAT_123bebcc = _DAT_11de9ae0;
          DAT_123bebd0 = _UNK_11de9ae4;
          uRam123bebd4 = _UNK_11de9ae8;
          DAT_123bebd8 = _UNK_11de9aec;
          DAT_123bebdc = 1;
          DAT_123bebb0 = puVar4;
          _DAT_123bebb4 = puVar4;
          _DAT_123bebb8 = puVar4;
          FUN_11a8911f(&LAB_11ca8720);
        }
        puVar4 = &DAT_123beba8;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar6 != -1) &&
         ((((iVar6 != 0 || (puVar4[0xc] == 0)) &&
           (iVar1 = puVar4[10], param_1 = local_8, iVar1 != 0)) &&
          ((iVar6 = iVar6 - puVar4[0xc], -1 < iVar6 && (iVar6 < (int)puVar4[9])))))) {
        iVar2 = *(int *)(puVar4[8] + (iVar6 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((*(int *)(iVar2 + (iVar6 % iVar1) * 4) != 0 &&
            (cVar3 = FUN_11711940(param_2), param_1 = local_8, cVar3 != '\0')))) {
          return 1;
        }
      }
      iVar6 = *(int *)(iVar5 + 0xc);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar5 + 4);
        if (iVar5 == *(int *)(iVar6 + 0xc)) {
          do {
            iVar5 = iVar6;
            iVar6 = *(int *)(iVar5 + 4);
          } while (iVar5 == *(int *)(iVar6 + 0xc));
        }
        if (*(int *)(iVar5 + 0xc) != iVar6) {
          iVar5 = iVar6;
        }
      }
      else {
        for (iVar1 = *(int *)(iVar6 + 8); iVar5 = iVar6, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          iVar6 = iVar1;
        }
      }
    } while (iVar5 != param_1);
  }
  return 0;
}



