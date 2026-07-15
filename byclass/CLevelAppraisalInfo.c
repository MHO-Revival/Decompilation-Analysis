// ===== class CLevelAppraisalInfo  (3 recovered methods) =====

/* --- CLevelAppraisalInfo::GetManagers @ 116ab810 --- */
// [RE-AUTO c3]
// id: CLevelAppraisalInfo::GetManagers
// strings:
//   ""CLevelAppraisalInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelAppraisalInfo::GetManagers
   strings:
     ""CLevelAppraisalInfo::GetManagers"" */

undefined4 * CLevelAppraisalInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d3dee4;
  if (param_3 == 0) {
    if ((DAT_1238ad34 & 1) == 0) {
      DAT_1238ad34 = DAT_1238ad34 | 1;
      FUN_102500e0("CLevelAppraisalInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7800);
    }
    if ((undefined4 *)*DAT_1238ad18 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1238ad18;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1238b370 & 1) == 0) {
      DAT_1238b370 = DAT_1238b370 | 1;
      FUN_116ac650();
      FUN_11a8911f(&LAB_11ca74d0);
    }
    puVar1 = &DAT_1238b338;
  }
  return puVar1;
}



/* --- CLevelAppraisalInfo::GetManagers_116ae890 @ 116ae890 --- */
// [RE-AUTO c3]
// id: CLevelAppraisalInfo::GetManagers
// strings:
//   ""CLevelAppraisalInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelAppraisalInfo::GetManagers
   strings:
     ""CLevelAppraisalInfo::GetManagers"" */

undefined4 CLevelAppraisalInfo__GetManagers_116ae890(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1238ad34 & 1) == 0) {
      DAT_1238ad34 = DAT_1238ad34 | 1;
      FUN_102500e0("CLevelAppraisalInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7800);
    }
    return *DAT_1238ad18;
  }
  return 0;
}



/* --- CLevelAppraisalInfo::GetManagers_118ce090 @ 118ce090 --- */
// [RE-AUTO c3]
// id: CLevelAppraisalInfo::GetManagers
// strings:
//   ""CLevelAppraisalInfo::GetManagers""
//   ""CLevelAppraisalInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelAppraisalInfo::GetManagers
   strings:
     ""CLevelAppraisalInfo::GetManagers""
     ""CLevelAppraisalInfo"" */

void CLevelAppraisalInfo__GetManagers_118ce090(undefined **param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d3dee4;
  if ((DAT_1238ad34 & 1) == 0) {
    DAT_1238ad34 = DAT_1238ad34 | 1;
    FUN_102500e0("CLevelAppraisalInfo::GetManagers");
    FUN_11a8911f(&LAB_11ca7800);
  }
  if (*DAT_1238ad18 == 0) {
    iVar2 = FUN_11679e10(&local_8,"CLevelAppraisalInfo",0);
    if ((iVar2 == 0) && ((DAT_1238b370 & 1) == 0)) {
      DAT_1238b33c = 0;
      DAT_1238b34c = 0;
      DAT_1238b350 = 0;
      _DAT_1238b354 = 0;
      uRam1238b358 = 0;
      DAT_1238b370 = DAT_1238b370 | 1;
      DAT_1238b340 = (int *)0x0;
      _DAT_1238b344 = (int *)0x0;
      _DAT_1238b348 = (int *)0x0;
      DAT_1238b338 = &PTR_FUN_11d3df24;
      _DAT_1238b35c = _DAT_11de9ae0;
      uRam1238b360 = _UNK_11de9ae4;
      uRam1238b364 = _UNK_11de9ae8;
      uRam1238b368 = _UNK_11de9aec;
      DAT_1238b36c = 1;
      FUN_11a8911f(&LAB_11cafe50);
    }
  }
  uVar1 = param_1;
  iVar2 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d3dee4;
    if ((DAT_1238ad34 & 1) == 0) {
      DAT_1238ad34 = DAT_1238ad34 | 1;
      FUN_102500e0("CLevelAppraisalInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7800);
    }
    piVar3 = (int *)*DAT_1238ad18;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_11679e10(&param_1,"CLevelAppraisalInfo",0);
      if (piVar3 == (int *)0x0) {
        if ((DAT_1238b370 & 1) == 0) {
          DAT_1238b33c = 0;
          DAT_1238b34c = 0;
          DAT_1238b350 = 0;
          _DAT_1238b354 = 0;
          uRam1238b358 = 0;
          DAT_1238b370 = DAT_1238b370 | 1;
          DAT_1238b338 = &PTR_FUN_11d3df24;
          _DAT_1238b35c = _DAT_11de9ae0;
          uRam1238b360 = _UNK_11de9ae4;
          uRam1238b364 = _UNK_11de9ae8;
          uRam1238b368 = _UNK_11de9aec;
          DAT_1238b36c = 1;
          DAT_1238b340 = piVar3;
          _DAT_1238b344 = piVar3;
          _DAT_1238b348 = piVar3;
          FUN_11a8911f(&LAB_11cafe50);
        }
        piVar3 = (int *)&DAT_1238b338;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar4 = (**(code **)(*piVar3 + 0x28))();
    if (iVar4 <= iVar2) break;
    param_1 = &PTR_FUN_11d3dee4;
    if ((DAT_1238ad34 & 1) == 0) {
      DAT_1238ad34 = DAT_1238ad34 | 1;
      FUN_102500e0("CLevelAppraisalInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca7800);
    }
    piVar3 = (int *)*DAT_1238ad18;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_11679e10(&param_1,"CLevelAppraisalInfo",0);
      if (piVar3 == (int *)0x0) {
        if ((DAT_1238b370 & 1) == 0) {
          DAT_1238b33c = 0;
          DAT_1238b34c = 0;
          DAT_1238b350 = 0;
          _DAT_1238b354 = 0;
          uRam1238b358 = 0;
          DAT_1238b370 = DAT_1238b370 | 1;
          DAT_1238b338 = &PTR_FUN_11d3df24;
          _DAT_1238b35c = _DAT_11de9ae0;
          uRam1238b360 = _UNK_11de9ae4;
          uRam1238b364 = _UNK_11de9ae8;
          uRam1238b368 = _UNK_11de9aec;
          DAT_1238b36c = 1;
          DAT_1238b340 = piVar3;
          _DAT_1238b344 = piVar3;
          _DAT_1238b348 = piVar3;
          FUN_11a8911f(&LAB_11cafe50);
        }
        piVar3 = (int *)&DAT_1238b338;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar2) && (iVar2 < piVar3[6] - piVar3[5] >> 2)) &&
       (*(int *)(piVar3[5] + iVar2 * 4) != 0)) {
      FUN_1175c4c0(uVar1);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}



