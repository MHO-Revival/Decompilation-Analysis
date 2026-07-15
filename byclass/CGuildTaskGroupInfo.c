// ===== class CGuildTaskGroupInfo  (5 recovered methods) =====

/* --- CGuildTaskGroupInfo::GetManagers @ 111ef650 --- */
// [RE-AUTO c3]
// id: CGuildTaskGroupInfo::GetManagers
// strings:
//   ""CGuildTaskGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTaskGroupInfo::GetManagers
   strings:
     ""CGuildTaskGroupInfo::GetManagers"" */

undefined * CGuildTaskGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d17c58;
  if (param_3 == 0) {
    if ((DAT_1203f460 & 1) == 0) {
      DAT_1203f460 = DAT_1203f460 | 1;
      FUN_102500e0("CGuildTaskGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97840);
    }
    if ((undefined *)*DAT_1203f444 != (undefined *)0x0) {
      return (undefined *)*DAT_1203f444;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203f538 & 1) == 0) {
      DAT_1203f538 = DAT_1203f538 | 1;
      FUN_111effc0();
      FUN_11a8911f(&LAB_11c97720);
    }
    puVar1 = &DAT_1203f500;
  }
  return puVar1;
}



/* --- CGuildTaskGroupInfo::GetManagers_111f3100 @ 111f3100 --- */
// [RE-AUTO c3]
// id: CGuildTaskGroupInfo::GetManagers
// strings:
//   ""CGuildTaskGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTaskGroupInfo::GetManagers
   strings:
     ""CGuildTaskGroupInfo::GetManagers"" */

undefined4 CGuildTaskGroupInfo__GetManagers_111f3100(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f460 & 1) == 0) {
      DAT_1203f460 = DAT_1203f460 | 1;
      FUN_102500e0("CGuildTaskGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c97840);
    }
    return *DAT_1203f444;
  }
  return 0;
}



/* --- CGuildTaskGroupInfo::GetManagers_117d6960 @ 117d6960 --- */
// [RE-AUTO c3]
// id: CGuildTaskGroupInfo::GetManagers
// strings:
//   ""CGuildTaskGroupInfo::GetManagers""
//   ""CGuildTaskGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTaskGroupInfo::GetManagers
   strings:
     ""CGuildTaskGroupInfo::GetManagers""
     ""CGuildTaskGroupInfo"" */

undefined4 __thiscall
CGuildTaskGroupInfo__GetManagers_117d6960(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_8;
  
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar5 = *piVar6;
      local_8 = &PTR_FUN_11d17c58;
      if ((DAT_1203f460 & 1) == 0) {
        DAT_1203f460 = DAT_1203f460 | 1;
        FUN_102500e0("CGuildTaskGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97840);
      }
      puVar4 = (undefined *)*DAT_1203f444;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CGuildTaskGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_1203f538 & 1) == 0) {
          DAT_1203f504 = 0;
          DAT_1203f514 = 0;
          DAT_1203f518 = 0;
          _DAT_1203f51c = 0;
          DAT_1203f520 = 0;
          DAT_1203f538 = DAT_1203f538 | 1;
          _DAT_1203f500 = &PTR_FUN_11d17c98;
          DAT_1203f524 = _DAT_11de9ae0;
          DAT_1203f528 = _UNK_11de9ae4;
          uRam1203f52c = _UNK_11de9ae8;
          DAT_1203f530 = _UNK_11de9aec;
          DAT_1203f534 = 1;
          DAT_1203f508 = puVar4;
          _DAT_1203f50c = puVar4;
          _DAT_1203f510 = puVar4;
          FUN_11a8911f(&LAB_11caae80);
        }
        puVar4 = &DAT_1203f500;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)) &&
          ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar4 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0 &&
            (cVar3 = FUN_118a8e70(param_2), cVar3 != '\0')))) {
          *param_3 = iVar5;
          return 1;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0x1c));
  }
  *param_3 = 0;
  return 0;
}



/* --- CGuildTaskGroupInfo::GetManagers_117d6dc0 @ 117d6dc0 --- */
// [RE-AUTO c3]
// id: CGuildTaskGroupInfo::GetManagers
// strings:
//   ""CGuildTaskGroupInfo::GetManagers""
//   ""CGuildTaskGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTaskGroupInfo::GetManagers
   strings:
     ""CGuildTaskGroupInfo::GetManagers""
     ""CGuildTaskGroupInfo"" */

void __fastcall CGuildTaskGroupInfo__GetManagers_117d6dc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_c;
  undefined1 local_5;
  
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != *(int **)(param_1 + 0x1c)) {
    do {
      iVar5 = *piVar6;
      local_c = &PTR_FUN_11d17c58;
      if ((DAT_1203f460 & 1) == 0) {
        DAT_1203f460 = DAT_1203f460 | 1;
        FUN_102500e0("CGuildTaskGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97840);
      }
      puVar4 = (undefined *)*DAT_1203f444;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CGuildTaskGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_1203f538 & 1) == 0) {
          DAT_1203f504 = 0;
          DAT_1203f514 = 0;
          DAT_1203f518 = 0;
          _DAT_1203f51c = 0;
          DAT_1203f520 = 0;
          DAT_1203f538 = DAT_1203f538 | 1;
          _DAT_1203f500 = &PTR_FUN_11d17c98;
          DAT_1203f524 = _DAT_11de9ae0;
          DAT_1203f528 = _UNK_11de9ae4;
          uRam1203f52c = _UNK_11de9ae8;
          DAT_1203f530 = _UNK_11de9aec;
          DAT_1203f534 = 1;
          DAT_1203f508 = puVar4;
          _DAT_1203f50c = puVar4;
          _DAT_1203f510 = puVar4;
          FUN_11a8911f(&LAB_11caae80);
        }
        puVar4 = &DAT_1203f500;
      }
      if ((iVar5 != -1) &&
         (((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
          (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)))) {
        iVar5 = iVar5 - *(int *)(puVar4 + 0x30);
        if ((iVar5 < 0) || (*(int *)(puVar4 + 0x24) <= iVar5)) {
LAB_117d6ede:
          local_c = (undefined **)0x0;
        }
        else {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if (iVar2 == 0) goto LAB_117d6ede;
          local_c = *(undefined ***)(iVar2 + (iVar5 % iVar1) * 4);
        }
        if (local_c != (undefined **)0x0) {
          piVar3 = *(int **)(param_1 + 0x44);
          if (piVar3 == *(int **)(param_1 + 0x48)) {
            FUN_117d7950(piVar3,&local_c,&local_5,1,1);
          }
          else {
            *piVar3 = (int)local_c;
            *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0x1c));
  }
  return;
}



/* --- CGuildTaskGroupInfo::GetManagers_1190c520 @ 1190c520 --- */
// [RE-AUTO c3]
// id: CGuildTaskGroupInfo::GetManagers
// calls: CGuildTaskGroupInfo::GetManagers, CGuildTaskInfo::GetManagers_118a9020
// strings:
//   ""CGuildTaskGroupInfo""
//   ""CGuildTaskGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTaskGroupInfo::GetManagers
   calls: CGuildTaskGroupInfo::GetManagers, CGuildTaskInfo::GetManagers_118a9020
   strings:
     ""CGuildTaskGroupInfo""
     ""CGuildTaskGroupInfo::GetManagers"" */

void CGuildTaskGroupInfo__GetManagers_1190c520(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CGuildTaskGroupInfo__GetManagers(0,"CGuildTaskGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d17c58;
      if ((DAT_1203f460 & 1) == 0) {
        DAT_1203f460 = DAT_1203f460 | 1;
        FUN_102500e0("CGuildTaskGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c97840);
      }
      if (((*DAT_1203f444 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildTaskGroupInfo",0), iVar3 == 0)) &&
         ((DAT_1203f538 & 1) == 0)) {
        DAT_1203f504 = 0;
        DAT_1203f514 = 0;
        DAT_1203f518 = 0;
        _DAT_1203f51c = 0;
        DAT_1203f520 = 0;
        DAT_1203f538 = DAT_1203f538 | 1;
        _DAT_1203f500 = &PTR_FUN_11d17c98;
        DAT_1203f524 = _DAT_11de9ae0;
        DAT_1203f528 = _UNK_11de9ae4;
        uRam1203f52c = _UNK_11de9ae8;
        DAT_1203f530 = _UNK_11de9aec;
        DAT_1203f534 = 1;
        DAT_1203f508 = iVar3;
        _DAT_1203f50c = iVar3;
        _DAT_1203f510 = iVar3;
        FUN_11a8911f(&LAB_11cb12f0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CGuildTaskInfo__GetManagers_118a9020();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



