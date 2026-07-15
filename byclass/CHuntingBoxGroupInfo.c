// ===== class CHuntingBoxGroupInfo  (3 recovered methods) =====

/* --- CHuntingBoxGroupInfo::GetManagers @ 116ab770 --- */
// [RE-AUTO c3]
// id: CHuntingBoxGroupInfo::GetManagers
// strings:
//   ""CHuntingBoxGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CHuntingBoxGroupInfo::GetManagers
   strings:
     ""CHuntingBoxGroupInfo::GetManagers"" */

undefined4 * CHuntingBoxGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d3de24;
  if (param_3 == 0) {
    if ((DAT_1238ad14 & 1) == 0) {
      DAT_1238ad14 = DAT_1238ad14 | 1;
      FUN_102500e0("CHuntingBoxGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca77d0);
    }
    if ((undefined4 *)*DAT_1238acf8 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1238acf8;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1238b334 & 1) == 0) {
      DAT_1238b334 = DAT_1238b334 | 1;
      FUN_116ac5f0();
      FUN_11a8911f(&LAB_11ca7470);
    }
    puVar1 = &DAT_1238b2fc;
  }
  return puVar1;
}



/* --- CHuntingBoxGroupInfo::GetManagers_116ae840 @ 116ae840 --- */
// [RE-AUTO c3]
// id: CHuntingBoxGroupInfo::GetManagers
// strings:
//   ""CHuntingBoxGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CHuntingBoxGroupInfo::GetManagers
   strings:
     ""CHuntingBoxGroupInfo::GetManagers"" */

undefined4 CHuntingBoxGroupInfo__GetManagers_116ae840(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238ad14 & 1) == 0) {
      DAT_1238ad14 = DAT_1238ad14 | 1;
      FUN_102500e0("CHuntingBoxGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca77d0);
    }
    return *DAT_1238acf8;
  }
  return 0;
}



/* --- CHuntingBoxGroupInfo::GetManagers_118f2710 @ 118f2710 --- */
// [RE-AUTO c3]
// id: CHuntingBoxGroupInfo::GetManagers
// strings:
//   ""CHuntingBoxGroupInfo::GetManagers""
//   ""CHuntingBoxGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CHuntingBoxGroupInfo::GetManagers
   strings:
     ""CHuntingBoxGroupInfo::GetManagers""
     ""CHuntingBoxGroupInfo"" */

void CHuntingBoxGroupInfo__GetManagers_118f2710(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d3de24;
    if ((DAT_1238ad14 & 1) == 0) {
      DAT_1238ad14 = DAT_1238ad14 | 1;
      FUN_102500e0("CHuntingBoxGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca77d0);
    }
    piVar2 = (int *)*DAT_1238acf8;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CHuntingBoxGroupInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1238b334 & 1) == 0) {
          DAT_1238b300 = 0;
          DAT_1238b310 = 0;
          DAT_1238b314 = 0;
          _DAT_1238b318 = 0;
          uRam1238b31c = 0;
          DAT_1238b334 = DAT_1238b334 | 1;
          DAT_1238b2fc = &PTR_FUN_11d3de68;
          _DAT_1238b320 = _DAT_11de9ae0;
          uRam1238b324 = _UNK_11de9ae4;
          uRam1238b328 = _UNK_11de9ae8;
          uRam1238b32c = _UNK_11de9aec;
          DAT_1238b330 = 1;
          DAT_1238b304 = piVar2;
          _DAT_1238b308 = piVar2;
          _DAT_1238b30c = piVar2;
          FUN_11a8911f(&LAB_11cb0930);
        }
        piVar2 = (int *)&DAT_1238b2fc;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d3de24;
    if ((DAT_1238ad14 & 1) == 0) {
      DAT_1238ad14 = DAT_1238ad14 | 1;
      FUN_102500e0("CHuntingBoxGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca77d0);
    }
    piVar2 = (int *)*DAT_1238acf8;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CHuntingBoxGroupInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1238b334 & 1) == 0) {
          DAT_1238b300 = 0;
          DAT_1238b310 = 0;
          DAT_1238b314 = 0;
          _DAT_1238b318 = 0;
          uRam1238b31c = 0;
          DAT_1238b334 = DAT_1238b334 | 1;
          DAT_1238b2fc = &PTR_FUN_11d3de68;
          _DAT_1238b320 = _DAT_11de9ae0;
          uRam1238b324 = _UNK_11de9ae4;
          uRam1238b328 = _UNK_11de9ae8;
          uRam1238b32c = _UNK_11de9aec;
          DAT_1238b330 = 1;
          DAT_1238b304 = piVar2;
          _DAT_1238b308 = piVar2;
          _DAT_1238b30c = piVar2;
          FUN_11a8911f(&LAB_11cb0930);
        }
        piVar2 = (int *)&DAT_1238b2fc;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CHuntingBoxInfo__GetManagers_119f6d40(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



