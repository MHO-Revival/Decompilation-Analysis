// ===== class CGodLuckInfo  (2 recovered methods) =====

/* --- CGodLuckInfo::GetManagers @ 10907ce0 --- */
// [RE-AUTO c3]
// id: CGodLuckInfo::GetManagers
// strings:
//   ""CGodLuckInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGodLuckInfo::GetManagers
   strings:
     ""CGodLuckInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CGodLuckInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8164 & 1) == 0) {
    DAT_123c8164 = DAT_123c8164 | 1;
    _DAT_123c817c = &DAT_123c816c;
    DAT_123c8180 = &DAT_123c816c;
    DAT_123c816c = 0;
    FUN_100d83d0("CGodLuckInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c76ff0);
  }
  return DAT_123c8168;
}



/* --- CGodLuckInfo::GetManagers_11950ca0 @ 11950ca0 --- */
// [RE-AUTO c3]
// id: CGodLuckInfo::GetManagers
// strings:
//   ""CGodLuckInfo::GetManagers""
//   ""CGodLuckInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGodLuckInfo::GetManagers
   strings:
     ""CGodLuckInfo::GetManagers""
     ""CGodLuckInfo"" */

void CGodLuckInfo__GetManagers_11950ca0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11dd86b8;
    if ((DAT_123c8164 & 1) == 0) {
      DAT_123c8164 = DAT_123c8164 | 1;
      FUN_102500e0("CGodLuckInfo::GetManagers");
      FUN_11a8911f(&LAB_11c76ff0);
    }
    piVar2 = (int *)*DAT_123c8168;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CGodLuckInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123c818c & 1) == 0) {
          DAT_123c8194 = 0;
          DAT_123c81a4 = 0;
          DAT_123c81a8 = 0;
          _DAT_123c81ac = 0;
          DAT_123c81b0 = 0;
          DAT_123c818c = DAT_123c818c | 1;
          DAT_123c8190 = &PTR_FUN_11dd86c8;
          DAT_123c81b4 = _DAT_11de9ae0;
          DAT_123c81b8 = _UNK_11de9ae4;
          uRam123c81bc = _UNK_11de9ae8;
          DAT_123c81c0 = _UNK_11de9aec;
          DAT_123c81c4 = 1;
          DAT_123c8198 = piVar2;
          _DAT_123c819c = piVar2;
          _DAT_123c81a0 = piVar2;
          FUN_11a8911f(&LAB_11cb2940);
        }
        piVar2 = (int *)&DAT_123c8190;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11dd86b8;
    if ((DAT_123c8164 & 1) == 0) {
      DAT_123c8164 = DAT_123c8164 | 1;
      FUN_102500e0("CGodLuckInfo::GetManagers");
      FUN_11a8911f(&LAB_11c76ff0);
    }
    piVar2 = (int *)*DAT_123c8168;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CGodLuckInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123c818c & 1) == 0) {
          DAT_123c8194 = 0;
          DAT_123c81a4 = 0;
          DAT_123c81a8 = 0;
          _DAT_123c81ac = 0;
          DAT_123c81b0 = 0;
          DAT_123c818c = DAT_123c818c | 1;
          DAT_123c8190 = &PTR_FUN_11dd86c8;
          DAT_123c81b4 = _DAT_11de9ae0;
          DAT_123c81b8 = _UNK_11de9ae4;
          uRam123c81bc = _UNK_11de9ae8;
          DAT_123c81c0 = _UNK_11de9aec;
          DAT_123c81c4 = 1;
          DAT_123c8198 = piVar2;
          _DAT_123c819c = piVar2;
          _DAT_123c81a0 = piVar2;
          FUN_11a8911f(&LAB_11cb2940);
        }
        piVar2 = (int *)&DAT_123c8190;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      FUN_11a39d10(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



