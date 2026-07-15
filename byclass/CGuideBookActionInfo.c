// ===== class CGuideBookActionInfo  (3 recovered methods) =====

/* --- CGuideBookActionInfo::GetManagers @ 1146bc90 --- */
// [RE-AUTO c3]
// id: CGuideBookActionInfo::GetManagers
// strings:
//   ""CGuideBookActionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuideBookActionInfo::GetManagers
   strings:
     ""CGuideBookActionInfo::GetManagers"" */

undefined * CGuideBookActionInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d28e28;
  if (param_3 == 0) {
    if ((DAT_122de148 & 1) == 0) {
      DAT_122de148 = DAT_122de148 | 1;
      FUN_102500e0("CGuideBookActionInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e030);
    }
    if ((undefined *)*DAT_122de12c != (undefined *)0x0) {
      return (undefined *)*DAT_122de12c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122de1fc & 1) == 0) {
      DAT_122de1fc = DAT_122de1fc | 1;
      FUN_1146ca60();
      FUN_11a8911f(&LAB_11c9df40);
    }
    puVar1 = &DAT_122de1c4;
  }
  return puVar1;
}



/* --- CGuideBookActionInfo::GetManagers_1146e910 @ 1146e910 --- */
// [RE-AUTO c3]
// id: CGuideBookActionInfo::GetManagers
// strings:
//   ""CGuideBookActionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuideBookActionInfo::GetManagers
   strings:
     ""CGuideBookActionInfo::GetManagers"" */

undefined4 CGuideBookActionInfo__GetManagers_1146e910(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122de148 & 1) == 0) {
      DAT_122de148 = DAT_122de148 | 1;
      FUN_102500e0("CGuideBookActionInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9e030);
    }
    return *DAT_122de12c;
  }
  return 0;
}



/* --- CGuideBookActionInfo::GetManagers_1153a240 @ 1153a240 --- */
// [RE-AUTO c3]
// id: CGuideBookActionInfo::GetManagers
// strings:
//   ""CGuideBookActionInfo::GetManagers""
//   ""CGuideBookActionInfo""

/* [RE-AUTO c3]
   id: CGuideBookActionInfo::GetManagers
   strings:
     ""CGuideBookActionInfo::GetManagers""
     ""CGuideBookActionInfo"" */

undefined4 __thiscall
CGuideBookActionInfo__GetManagers_1153a240
          (int *param_1,int param_2,undefined **param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  
  param_1[4] = (int)param_3;
  *param_1 = *param_4;
  param_1[2] = param_4[1];
  param_1[5] = param_2;
  *(undefined1 *)((int)param_1 + 0xe) = 1;
  iVar4 = param_4[2];
  param_1[1] = 0;
  *(bool *)((int)param_1 + 0xf) = (char)iVar4 != '\0';
  FUN_11539ba0();
  FUN_1153a440();
  FUN_115bed10(0,0x500);
  FUN_115bee10(param_5 + 1,*param_5);
  piVar6 = (int *)param_1[6];
  if (piVar6 != (int *)param_1[7]) {
    do {
      if (*piVar6 != 0) {
        uVar3 = FUN_11611a10();
        uVar3 = FUN_1146e750(uVar3);
        cVar2 = FUN_115bedf0(uVar3);
        if (cVar2 != '\0') {
          iVar4 = FUN_11611a10();
          param_3 = &PTR_FUN_11d28e28;
          if ((DAT_122de148 & 1) == 0) {
            DAT_122de148 = DAT_122de148 | 1;
            FUN_102500e0("CGuideBookActionInfo::GetManagers");
            FUN_11a8911f(&LAB_11c9e030);
          }
          puVar5 = (undefined *)*DAT_122de12c;
          if ((puVar5 == (undefined *)0x0) &&
             (puVar5 = (undefined *)FUN_11679e10(&param_3,"CGuideBookActionInfo",0),
             puVar5 == (undefined *)0x0)) {
            if ((DAT_122de1fc & 1) == 0) {
              DAT_122de1fc = DAT_122de1fc | 1;
              FUN_1146ca60();
              FUN_11a8911f(&LAB_11ca14b0);
            }
            puVar5 = &DAT_122de1c4;
          }
          param_3 = &PTR_FUN_11da54a8;
          if ((iVar4 != -1) &&
             ((((iVar4 != 0 || (*(int *)(puVar5 + 0x30) == 0)) && (*(int *)(puVar5 + 0x28) != 0)) &&
              ((iVar4 = iVar4 - *(int *)(puVar5 + 0x30), -1 < iVar4 &&
               (iVar4 < *(int *)(puVar5 + 0x24))))))) {
            iVar1 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar4 / *(int *)(puVar5 + 0x28)) * 4);
            if ((iVar1 != 0) &&
               ((iVar4 = *(int *)(iVar1 + (iVar4 % *(int *)(puVar5 + 0x28)) * 4), iVar4 != 0 &&
                (*(int *)(iVar4 + 0x14) == *param_1)))) {
              uVar3 = FUN_11611a10();
              FUN_1153a7a0(uVar3);
            }
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)param_1[7]);
  }
  FUN_115bed60();
  return 1;
}



