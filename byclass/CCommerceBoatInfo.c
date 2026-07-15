// ===== class CCommerceBoatInfo  (2 recovered methods) =====

/* --- CCommerceBoatInfo::GetManagers @ 109f5830 --- */
// [RE-AUTO c3]
// id: CCommerceBoatInfo::GetManagers
// strings:
//   ""CCommerceBoatInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommerceBoatInfo::GetManagers
   strings:
     ""CCommerceBoatInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCommerceBoatInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c921c & 1) == 0) {
    DAT_123c921c = DAT_123c921c | 1;
    _DAT_123c9234 = &DAT_123c9224;
    DAT_123c9238 = &DAT_123c9224;
    DAT_123c9224 = 0;
    FUN_100d83d0("CCommerceBoatInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7d7b0);
  }
  return DAT_123c9220;
}



/* --- CCommerceBoatInfo::GetManagers_11174eb0 @ 11174eb0 --- */
// [RE-AUTO c3]
// id: CCommerceBoatInfo::GetManagers
// strings:
//   ""CCommerceBoatInfo::GetManagers""
//   ""CCommerceBoatInfo""

/* [RE-AUTO c3]
   id: CCommerceBoatInfo::GetManagers
   strings:
     ""CCommerceBoatInfo::GetManagers""
     ""CCommerceBoatInfo"" */

void __thiscall CCommerceBoatInfo__GetManagers_11174eb0(int *param_1,undefined **param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint extraout_EDX;
  int *local_8;
  
  local_8 = param_1;
  FUN_100ed750();
  if (((extraout_EDX & 0x40000000) != 0) &&
     (iVar2 = (**(code **)(*param_1 + 0xc))(), iVar1 = (int)param_2, iVar2 != 0)) {
    iVar2 = 0;
    while( true ) {
      param_2 = &PTR_FUN_11de5758;
      if ((DAT_123c921c & 1) == 0) {
        DAT_123c921c = DAT_123c921c | 1;
        FUN_102500e0("CCommerceBoatInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7d7b0);
      }
      piVar3 = (int *)*DAT_123c9220;
      if ((piVar3 == (int *)0x0) &&
         (piVar3 = (int *)FUN_11679e10(&param_2,"CCommerceBoatInfo",0), piVar3 == (int *)0x0)) {
        if ((DAT_123c926c & 1) == 0) {
          DAT_123c926c = DAT_123c926c | 1;
          FUN_109fb5c0();
          FUN_11a8911f(&LAB_11c96eb0);
        }
        piVar3 = &DAT_123c9270;
      }
      param_2 = &PTR_FUN_11da54a8;
      iVar4 = (**(code **)(*piVar3 + 0x28))();
      if (iVar4 <= iVar2) break;
      param_2 = &PTR_FUN_11de5758;
      if ((DAT_123c921c & 1) == 0) {
        DAT_123c921c = DAT_123c921c | 1;
        FUN_102500e0("CCommerceBoatInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7d7b0);
      }
      puVar5 = (undefined4 *)*DAT_123c9220;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&param_2,"CCommerceBoatInfo",0),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_123c926c & 1) == 0) {
          DAT_123c926c = DAT_123c926c | 1;
          FUN_109fb5c0();
          FUN_11a8911f(&LAB_11c96eb0);
        }
        puVar5 = &DAT_123c9270;
      }
      param_2 = &PTR_FUN_11da54a8;
      if ((iVar2 < 0) || ((int)(puVar5[6] - puVar5[5]) >> 2 <= iVar2)) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = *(int **)(puVar5[5] + iVar2 * 4);
      }
      if (local_8 == (int *)0x0) {
LAB_1117504c:
        iVar2 = iVar2 + 1;
      }
      else {
        puVar5 = *(undefined4 **)(iVar1 + 4);
        if (puVar5 == *(undefined4 **)(iVar1 + 8)) {
          FUN_11178350(puVar5,&local_8,(int)&param_2 + 3,1,1);
          goto LAB_1117504c;
        }
        *puVar5 = local_8;
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 4;
        iVar2 = iVar2 + 1;
      }
    }
  }
  return;
}



