// ===== class CTalentActiveInfo  (6 recovered methods) =====

/* --- CTalentActiveInfo::GetManagers @ 112b1b90 --- */
// [RE-AUTO c3]
// id: CTalentActiveInfo::GetManagers
// strings:
//   ""CTalentActiveInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo::GetManagers"" */

undefined4 * CTalentActiveInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1e1ac;
  if (param_3 == 0) {
    if ((DAT_120408fc & 1) == 0) {
      DAT_120408fc = DAT_120408fc | 1;
      FUN_102500e0("CTalentActiveInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99b90);
    }
    if ((undefined4 *)*DAT_120408e0 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_120408e0;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_12040940 & 1) == 0) {
      DAT_12040940 = DAT_12040940 | 1;
      FUN_112b2830();
      FUN_11a8911f(&LAB_11c99ad0);
    }
    puVar1 = &DAT_12040908;
  }
  return puVar1;
}



/* --- CTalentActiveInfo::GetManagers_112b2ef0 @ 112b2ef0 --- */
// [RE-AUTO c3]
// id: CTalentActiveInfo::GetManagers
// strings:
//   ""CTalentInfo""
//   ""CTalentActiveInfo::GetManagers""
//   ""CTalentActiveInfo""

/* [RE-AUTO c3]
   id: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentInfo""
     ""CTalentActiveInfo::GetManagers""
     ""CTalentActiveInfo"" */

int CTalentActiveInfo__GetManagers_112b2ef0(undefined **param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_1087e7d0(0,"CTalentInfo",0);
  iVar5 = (int)param_1;
  if ((param_1 != (undefined **)0xffffffff) &&
     ((((param_1 != (undefined **)0x0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar6 = *(int *)(iVar2 + 0x28), iVar6 != 0)) &&
      ((iVar3 = (int)param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 &&
       (iVar3 < *(int *)(iVar2 + 0x24))))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar6) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar6) * 4), iVar2 != 0)) {
      iVar6 = 0;
      while( true ) {
        param_1 = &PTR_FUN_11d1e1ac;
        if ((DAT_120408fc & 1) == 0) {
          DAT_120408fc = DAT_120408fc | 1;
          FUN_102500e0("CTalentActiveInfo::GetManagers");
          FUN_11a8911f(&LAB_11c99b90);
        }
        piVar4 = (int *)*DAT_120408e0;
        if ((piVar4 == (int *)0x0) &&
           (piVar4 = (int *)FUN_11679e10(&param_1,"CTalentActiveInfo",0), piVar4 == (int *)0x0)) {
          if ((DAT_12040940 & 1) == 0) {
            DAT_12040940 = DAT_12040940 | 1;
            FUN_112b2830();
            FUN_11a8911f(&LAB_11c99ad0);
          }
          piVar4 = &DAT_12040908;
        }
        param_1 = &PTR_FUN_11da54a8;
        iVar3 = (**(code **)(*piVar4 + 0x28))();
        if (iVar3 <= iVar6) {
          return 0xe8;
        }
        iVar3 = FUN_1157a6d0(*(undefined4 *)(iVar2 + 0x44),iVar6);
        if (iVar3 == 0) break;
        iVar6 = iVar6 + 1;
      }
      if (iVar6 == -1) {
        return 0xe8;
      }
      (**(code **)(**(int **)(*(int *)(local_8 + 8) + 0x14) + 8))();
      iVar2 = FUN_1141d5e0(iVar5,iVar6);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_10 = iVar5;
      local_c = iVar6;
      cVar1 = FUN_111de5d0(&local_10);
      iVar5 = 0;
      if (cVar1 == '\0') {
        iVar5 = 0xcb;
      }
      return iVar5;
    }
  }
  return 0xd2;
}



/* --- CTalentActiveInfo::GetManagers_112b31f0 @ 112b31f0 --- */
// [RE-AUTO c3]
// id: CTalentActiveInfo::GetManagers
// calls: CTalentActiveInfo::GetManagers
// strings:
//   ""CTalentActiveInfo""
//   ""CTalentActiveInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTalentActiveInfo::GetManagers
   calls: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo""
     ""CTalentActiveInfo::GetManagers"" */

undefined4 __thiscall
CTalentActiveInfo__GetManagers_112b31f0(int param_1,undefined4 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 local_38 [4];
  uint local_34;
  undefined4 local_30;
  int local_24;
  undefined4 local_14;
  int local_c;
  int local_8;
  
  ppuVar4 = param_3;
  puVar1 = param_3[1];
  local_8 = param_1;
  if (*param_3 != puVar1) {
    ppuVar5 = (undefined **)FUN_112b1e50(puVar1,puVar1,*param_3,(int)&param_3 + 3,0);
    ppuVar2 = (undefined **)ppuVar4[1];
    param_3 = ppuVar5;
    for (; ppuVar5 != ppuVar2; ppuVar5 = ppuVar5 + 0xb) {
      (**(code **)*ppuVar5)(0);
    }
    ppuVar4[1] = (undefined *)param_3;
  }
  iVar6 = FUN_11679c30();
  if (iVar6 == 0) {
    return 0xc9;
  }
  piVar7 = (int *)CTalentActiveInfo__GetManagers(0,"CTalentActiveInfo",0);
  local_c = (**(code **)(*piVar7 + 0x28))();
  iVar6 = 0;
  if (0 < local_c) {
    do {
      FUN_112efd00();
      iVar8 = FUN_1157a6d0(param_2,iVar6);
      param_3 = &PTR_FUN_11d1e1ac;
      if ((DAT_120408fc & 1) == 0) {
        DAT_120408fc = DAT_120408fc | 1;
        FUN_102500e0("CTalentActiveInfo::GetManagers");
        FUN_11a8911f(&LAB_11c99b90);
      }
      puVar9 = (undefined4 *)*DAT_120408e0;
      if ((puVar9 == (undefined4 *)0x0) &&
         (puVar9 = (undefined4 *)FUN_11679e10(&param_3,"CTalentActiveInfo",0),
         puVar9 == (undefined4 *)0x0)) {
        if ((DAT_12040940 & 1) == 0) {
          DAT_12040940 = DAT_12040940 | 1;
          FUN_112b2830();
          FUN_11a8911f(&LAB_11c99ad0);
        }
        puVar9 = &DAT_12040908;
      }
      param_3 = &PTR_FUN_11da54a8;
      if (((-1 < iVar6) && (iVar6 < (int)(puVar9[6] - puVar9[5]) >> 2)) &&
         (iVar3 = *(int *)(puVar9[5] + iVar6 * 4), iVar3 != 0)) {
        local_14 = *(undefined4 *)(iVar3 + 0x14);
        puVar10 = &DAT_11d9d32b;
        if (*(undefined1 **)(iVar3 + 0x18) != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)(iVar3 + 0x18);
        }
        FUN_100e5d80(puVar10);
      }
      local_24 = iVar6;
      if (iVar8 == 0) {
        (**(code **)(**(int **)(*(int *)(local_8 + 8) + 0x14) + 8))();
        iVar8 = FUN_1141d020(iVar6);
        local_34 = (uint)(iVar8 == 0);
      }
      else {
        local_34 = 2;
        local_30 = FUN_1157a720(iVar8);
        FUN_112b59d0(iVar8,local_38);
      }
      puVar1 = ppuVar4[1];
      if (puVar1 == ppuVar4[2]) {
        FUN_112b5370(puVar1,local_38,(int)&param_3 + 3,1,1);
      }
      else {
        if (puVar1 != (undefined *)0x0) {
          FUN_112b2af0(local_38);
        }
        ppuVar4[1] = ppuVar4[1] + 0x2c;
      }
      FUN_112f0140();
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_c);
  }
  return 0;
}



/* --- CTalentActiveInfo::GetManagers_112b3500 @ 112b3500 --- */
// [RE-AUTO c3]
// id: CTalentActiveInfo::GetManagers
// strings:
//   ""CTalentActiveInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo::GetManagers"" */

undefined4 CTalentActiveInfo__GetManagers_112b3500(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_120408fc & 1) == 0) {
      DAT_120408fc = DAT_120408fc | 1;
      FUN_102500e0("CTalentActiveInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99b90);
    }
    return *DAT_120408e0;
  }
  return 0;
}



/* --- CTalentActiveInfo::GetManagers_1141e540 @ 1141e540 --- */
// [RE-AUTO c3]
// id: CTalentActiveInfo::GetManagers
// calls: CTalentActiveInfo::GetManagers
// strings:
//   ""CTalentActiveInfo""
//   ""CTalentActiveInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTalentActiveInfo::GetManagers
   calls: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo""
     ""CTalentActiveInfo::GetManagers"" */

void __thiscall CTalentActiveInfo__GetManagers_1141e540(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined **local_8;
  
  piVar4 = (int *)CTalentActiveInfo__GetManagers(0,"CTalentActiveInfo",0);
  iVar5 = (**(code **)(*piVar4 + 0x28))();
  iVar8 = 0;
  if (0 < iVar5) {
    do {
      local_8 = &PTR_FUN_11d1e1ac;
      if ((DAT_120408fc & 1) == 0) {
        DAT_120408fc = DAT_120408fc | 1;
        FUN_102500e0("CTalentActiveInfo::GetManagers");
        FUN_11a8911f(&LAB_11c99b90);
      }
      puVar6 = (undefined4 *)*DAT_120408e0;
      if ((puVar6 == (undefined4 *)0x0) &&
         (puVar6 = (undefined4 *)FUN_11679e10(&local_8,"CTalentActiveInfo",0),
         puVar6 == (undefined4 *)0x0)) {
        if ((DAT_12040940 & 1) == 0) {
          DAT_1204090c = 0;
          DAT_1204091c = 0;
          DAT_12040920 = 0;
          _DAT_12040924 = 0;
          DAT_12040928 = 0;
          DAT_12040940 = DAT_12040940 | 1;
          DAT_12040908 = &PTR_FUN_11d1e1e8;
          DAT_1204092c = _DAT_11de9ae0;
          DAT_12040930 = _UNK_11de9ae4;
          uRam12040934 = _UNK_11de9ae8;
          DAT_12040938 = _UNK_11de9aec;
          DAT_1204093c = 1;
          DAT_12040910 = puVar6;
          _DAT_12040914 = puVar6;
          _DAT_12040918 = puVar6;
          FUN_11a8911f(&LAB_11c9cbc0);
        }
        puVar6 = &DAT_12040908;
      }
      iVar1 = iVar8 + 1;
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar1 != -1) &&
         ((((iVar1 != 0 || (puVar6[0xc] == 0)) && (iVar2 = puVar6[10], iVar2 != 0)) &&
          ((iVar7 = (iVar8 - puVar6[0xc]) + 1, -1 < iVar7 && (iVar7 < (int)puVar6[9])))))) {
        iVar3 = *(int *)(puVar6[8] + (iVar7 / iVar2) * 4);
        if ((iVar3 != 0) &&
           ((iVar2 = *(int *)(iVar3 + (iVar7 % iVar2) * 4), iVar2 != 0 &&
            (*(int *)(iVar2 + 0x14) == param_2)))) {
          piVar4 = (int *)(**(code **)(*(int *)*param_1 + 4))();
          (**(code **)(*piVar4 + 0x28))(iVar8);
        }
      }
      iVar8 = iVar1;
    } while (iVar1 < iVar5);
  }
  return;
}



/* --- CTalentActiveInfo::GetManagers_118d9390 @ 118d9390 --- */
// [RE-AUTO c3]
// id: CTalentActiveInfo::GetManagers
// calls: CTalentActiveInfo::GetManagers
// strings:
//   ""CTalentActiveInfo""
//   ""CTalentActiveInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTalentActiveInfo::GetManagers
   calls: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo""
     ""CTalentActiveInfo::GetManagers"" */

void CTalentActiveInfo__GetManagers_118d9390(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  piVar1 = (int *)CTalentActiveInfo__GetManagers(0,"CTalentActiveInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d1e1ac;
      if ((DAT_120408fc & 1) == 0) {
        DAT_120408fc = DAT_120408fc | 1;
        FUN_102500e0("CTalentActiveInfo::GetManagers");
        FUN_11a8911f(&LAB_11c99b90);
      }
      if (((*DAT_120408e0 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CTalentActiveInfo",0), iVar3 == 0)) &&
         ((DAT_12040940 & 1) == 0)) {
        DAT_1204090c = 0;
        DAT_1204091c = 0;
        DAT_12040920 = 0;
        _DAT_12040924 = 0;
        DAT_12040928 = 0;
        DAT_12040940 = DAT_12040940 | 1;
        DAT_12040910 = 0;
        _DAT_12040914 = 0;
        _DAT_12040918 = 0;
        DAT_12040908 = &PTR_FUN_11d1e1e8;
        DAT_1204092c = _DAT_11de9ae0;
        DAT_12040930 = _UNK_11de9ae4;
        uRam12040934 = _UNK_11de9ae8;
        DAT_12040938 = _UNK_11de9aec;
        DAT_1204093c = 1;
        FUN_11a8911f(&LAB_11cb01e0);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



