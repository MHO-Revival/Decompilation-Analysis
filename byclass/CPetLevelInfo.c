// ===== class CPetLevelInfo  (6 recovered methods) =====

/* --- CPetLevelInfo::GetManagers @ 112f0b00 --- */
// [RE-AUTO c3]
// id: CPetLevelInfo::GetManagers
// strings:
//   ""CPetLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetLevelInfo::GetManagers
   strings:
     ""CPetLevelInfo::GetManagers"" */

undefined * CPetLevelInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d216f0;
  if (param_3 == 0) {
    if ((DAT_12040b48 & 1) == 0) {
      DAT_12040b48 = DAT_12040b48 | 1;
      FUN_102500e0("CPetLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9a800);
    }
    if ((undefined *)*DAT_12040b2c != (undefined *)0x0) {
      return (undefined *)*DAT_12040b2c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040c08 & 1) == 0) {
      DAT_12040c08 = DAT_12040c08 | 1;
      FUN_112f3c80();
      FUN_11a8911f(&LAB_11c9a650);
    }
    puVar1 = &DAT_12040bd0;
  }
  return puVar1;
}



/* --- CPetLevelInfo::GetManagers_112f6080 @ 112f6080 --- */
// [RE-AUTO c3]
// id: CPetLevelInfo::GetManagers
// strings:
//   ""CPetLevelInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetLevelInfo::GetManagers
   strings:
     ""CPetLevelInfo::GetManagers"" */

undefined4 CPetLevelInfo__GetManagers_112f6080(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040b48 & 1) == 0) {
      DAT_12040b48 = DAT_12040b48 | 1;
      FUN_102500e0("CPetLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c9a800);
    }
    return *DAT_12040b2c;
  }
  return 0;
}



/* --- CPetLevelInfo::GetManagers_11566a30 @ 11566a30 --- */
// [RE-AUTO c3]
// id: CPetLevelInfo::GetManagers
// strings:
//   ""CPetLevelInfo::GetManagers""
//   ""CPetLevelInfo""

/* [RE-AUTO c3]
   id: CPetLevelInfo::GetManagers
   strings:
     ""CPetLevelInfo::GetManagers""
     ""CPetLevelInfo"" */

void __thiscall CPetLevelInfo__GetManagers_11566a30(int param_1,undefined **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  iVar7 = (int)param_2;
  if (0 < (int)param_2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x44);
    iVar5 = FUN_1134b7d0();
    iVar2 = *(int *)(param_1 + 0x48);
    if ((iVar2 <= iVar1) && (iVar2 <= iVar5)) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar7;
      do {
        iVar7 = *(int *)(param_1 + 0x48);
        param_2 = &PTR_FUN_11d216f0;
        if ((DAT_12040b48 & 1) == 0) {
          DAT_12040b48 = DAT_12040b48 | 1;
          FUN_102500e0("CPetLevelInfo::GetManagers");
          FUN_11a8911f(&LAB_11c9a800);
        }
        puVar6 = (undefined *)*DAT_12040b2c;
        if ((puVar6 == (undefined *)0x0) &&
           (puVar6 = (undefined *)FUN_11679e10(&param_2,"CPetLevelInfo",0),
           puVar6 == (undefined *)0x0)) {
          if ((DAT_12040c08 & 1) == 0) {
            DAT_12040c08 = DAT_12040c08 | 1;
            FUN_112f3c80();
            FUN_11a8911f(&LAB_11ca2280);
          }
          puVar6 = &DAT_12040bd0;
        }
        param_2 = &PTR_FUN_11da54a8;
        if (iVar7 == -1) {
          return;
        }
        if ((iVar7 == 0) && (*(int *)(puVar6 + 0x30) != 0)) {
          return;
        }
        iVar3 = *(int *)(puVar6 + 0x28);
        if (iVar3 == 0) {
          return;
        }
        iVar7 = iVar7 - *(int *)(puVar6 + 0x30);
        if (iVar7 < 0) {
          return;
        }
        if (*(int *)(puVar6 + 0x24) <= iVar7) {
          return;
        }
        iVar4 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar3) * 4);
        if (iVar4 == 0) {
          return;
        }
        iVar7 = *(int *)(iVar4 + (iVar7 % iVar3) * 4);
        if (iVar7 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x4c) < *(int *)(iVar7 + 0x14)) goto LAB_11566b79;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(iVar7 + 0x14);
        if (iVar1 < *(int *)(param_1 + 0x48)) {
          *(int *)(param_1 + 0x48) = iVar1;
          goto LAB_11566b72;
        }
      } while (*(int *)(param_1 + 0x48) <= iVar5);
      *(int *)(param_1 + 0x48) = iVar5;
LAB_11566b72:
      *(int *)(param_1 + 0x4c) = *(int *)(iVar7 + 0x14) + -1;
LAB_11566b79:
      if (*(int *)(param_1 + 0x48) != iVar2) {
        CPetLevelInfo__GetManagers_11568360(iVar2,0);
      }
    }
  }
  return;
}



/* --- CPetLevelInfo::GetManagers_11566e10 @ 11566e10 --- */
// [RE-AUTO c3]
// id: CPetLevelInfo::GetManagers
// strings:
//   ""CPetLevelInfo::GetManagers""
//   ""CPetLevelInfo""

/* [RE-AUTO c3]
   id: CPetLevelInfo::GetManagers
   strings:
     ""CPetLevelInfo::GetManagers""
     ""CPetLevelInfo"" */

int CPetLevelInfo__GetManagers_11566e10(undefined **param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = CPetStarInfo__GetManagers_1174c410
                    (*(undefined4 *)((int)param_1 + 0x24),*(undefined4 *)((int)param_1 + 0xa0),
                     *(undefined4 *)((int)param_1 + 0xa4));
  uVar2 = param_2;
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_1174c0f0(param_2);
  iVar4 = FUN_1174c0a0(uVar2);
  iVar9 = 1;
  iVar8 = 0;
  if (1 < param_3) {
    while( true ) {
      param_1 = &PTR_FUN_11d216f0;
      if ((DAT_12040b48 & 1) == 0) {
        DAT_12040b48 = DAT_12040b48 | 1;
        FUN_102500e0("CPetLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9a800);
      }
      puVar5 = (undefined *)*DAT_12040b2c;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&param_1,"CPetLevelInfo",0), puVar5 == (undefined *)0x0
         )) {
        if ((DAT_12040c08 & 1) == 0) {
          DAT_12040c08 = DAT_12040c08 | 1;
          FUN_112f3c80();
          FUN_11a8911f(&LAB_11ca2280);
        }
        puVar5 = &DAT_12040bd0;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((iVar9 == -1) ||
          (((iVar9 == 0 && (*(int *)(puVar5 + 0x30) != 0)) ||
           (iVar7 = *(int *)(puVar5 + 0x28), iVar7 == 0)))) ||
         ((iVar6 = iVar9 - *(int *)(puVar5 + 0x30), iVar6 < 0 || (*(int *)(puVar5 + 0x24) <= iVar6))
         )) break;
      iVar1 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / iVar7) * 4);
      if ((iVar1 == 0) || (*(int *)(iVar1 + (iVar6 % iVar7) * 4) == 0)) break;
      iVar7 = FUN_1181dd60(param_2);
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + (iVar7 * iVar4) / 100;
      if (param_3 <= iVar9) break;
    }
  }
  return iVar8 + iVar3;
}



/* --- CPetLevelInfo::GetManagers_11568360 @ 11568360 --- */
// [RE-AUTO c3]
// id: CPetLevelInfo::GetManagers
// calls: CAttributeInfo::GetManagers
// strings:
//   ""CPetLevelInfo::GetManagers""
//   ""CPetLevelInfo""
//   ""CAttributeInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetLevelInfo::GetManagers
   calls: CAttributeInfo::GetManagers
   strings:
     ""CPetLevelInfo::GetManagers""
     ""CPetLevelInfo""
     ""CAttributeInfo"" */

void __thiscall CPetLevelInfo__GetManagers_11568360(int *param_1,undefined **param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  ppuVar6 = param_2;
  if ((int)param_2 < param_1[0x12]) {
    do {
      piVar2 = (int *)(**(code **)(*(int *)*param_1 + 0x54))();
      (**(code **)(*piVar2 + 0x58))(param_1);
      param_2 = &PTR_FUN_11d216f0;
      if ((DAT_12040b48 & 1) == 0) {
        DAT_12040b48 = DAT_12040b48 | 1;
        FUN_102500e0("CPetLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9a800);
      }
      puVar3 = (undefined *)*DAT_12040b2c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&param_2,"CPetLevelInfo",0), puVar3 == (undefined *)0x0
         )) {
        if ((DAT_12040c08 & 1) == 0) {
          DAT_12040bd4 = 0;
          DAT_12040be4 = 0;
          uRam12040be8 = 0;
          _DAT_12040bec = 0;
          DAT_12040bf0 = 0;
          DAT_12040c08 = DAT_12040c08 | 1;
          _DAT_12040bd0 = &PTR_FUN_11d21724;
          DAT_12040bf4 = _DAT_11de9ae0;
          DAT_12040bf8 = _UNK_11de9ae4;
          uRam12040bfc = _UNK_11de9ae8;
          DAT_12040c00 = _UNK_11de9aec;
          DAT_12040c04 = 1;
          DAT_12040bd8 = puVar3;
          _DAT_12040bdc = puVar3;
          _DAT_12040be0 = puVar3;
          FUN_11a8911f(&LAB_11ca2280);
        }
        puVar3 = &DAT_12040bd0;
      }
      if (ppuVar6 == (undefined **)0xffffffff) {
        return;
      }
      if ((ppuVar6 == (undefined **)0x0) && (*(int *)(puVar3 + 0x30) != 0)) {
        return;
      }
      iVar7 = *(int *)(puVar3 + 0x28);
      if (iVar7 == 0) {
        return;
      }
      iVar4 = (int)ppuVar6 - *(int *)(puVar3 + 0x30);
      if (iVar4 < 0) {
        return;
      }
      if (*(int *)(puVar3 + 0x24) <= iVar4) {
        return;
      }
      iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar7) * 4);
      if (iVar1 == 0) {
        return;
      }
      iVar7 = *(int *)(iVar1 + (iVar4 % iVar7) * 4);
      if (iVar7 == 0) {
        return;
      }
      *(float *)(param_1[3] + 0x94) =
           (float)(*(int *)(param_1[8] + 0x3c) * *(int *)(iVar7 + 0x18)) / DAT_11de9a30 +
           *(float *)(param_1[3] + 0x94);
      param_2 = &PTR_FUN_11dbac68;
      iVar7 = (*(int *)(param_1[8] + 0x40) * *(int *)(iVar7 + 0x1c)) / 100 + *(int *)param_1[4];
      iVar4 = CAttributeInfo__GetManagers();
      puVar5 = *(undefined4 **)(iVar4 + 8);
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&param_2,"CAttributeInfo",2),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_123bdda4 & 1) == 0) {
          DAT_123bdda4 = DAT_123bdda4 | 1;
          FUN_10472c80();
          FUN_11a8911f(&LAB_11ca21c0);
        }
        puVar5 = &DAT_123bdd64;
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((puVar5[10] != 0) && (iVar4 = 0x23 - puVar5[0xc], -1 < iVar4)) &&
         (iVar4 < (int)puVar5[9])) {
        iVar1 = *(int *)(puVar5[8] + (iVar4 / (int)puVar5[10]) * 4);
        if ((iVar1 != 0) && (iVar4 = *(int *)(iVar1 + (iVar4 % (int)puVar5[10]) * 4), iVar4 != 0)) {
          iVar1 = *(int *)(iVar4 + 0xf8);
          if ((iVar7 < iVar1) && (iVar1 != 0)) {
            iVar7 = iVar1;
          }
          iVar4 = *(int *)(iVar4 + 0xd0);
          if ((iVar4 != 0) && (iVar4 < iVar7)) {
            iVar7 = iVar4;
          }
          *(int *)param_1[4] = iVar7;
          FUN_11568810(0x23,*(undefined4 *)param_1[4],0);
        }
      }
      ppuVar6 = (undefined **)((int)ppuVar6 + 1);
    } while ((int)ppuVar6 < param_1[0x12]);
  }
  FUN_11568810(9,param_1[0x12],0);
  FUN_11568810(8,param_1[0x13],0);
  piVar2 = (int *)(**(code **)(*(int *)*param_1 + 0x4c))();
  if ((piVar2 != (int *)0x0) && ((int *)piVar2[0x7b5] == param_1)) {
    (**(code **)(*piVar2 + 0x19c))();
  }
  local_10 = *(undefined4 *)(*param_1 + 4);
  local_c = param_1[10];
  local_8 = param_1[0x12];
  local_1c = 0x40f;
  local_18 = 0xffffffff;
  local_14 = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x1c) + 0x14))(&local_1c);
  if (param_3 == '\0') {
    piVar2 = (int *)(**(code **)(*(int *)*param_1 + 0x54))();
    (**(code **)(*piVar2 + 100))(5,param_1[9],param_1[10],0);
  }
  return;
}



/* --- CPetLevelInfo::GetManagers_11926e80 @ 11926e80 --- */
// [RE-AUTO c3]
// id: CPetLevelInfo::GetManagers
// calls: CPetLevelInfo::GetManagers
// strings:
//   ""CPetLevelInfo""
//   ""CPetLevelInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetLevelInfo::GetManagers
   calls: CPetLevelInfo::GetManagers
   strings:
     ""CPetLevelInfo""
     ""CPetLevelInfo::GetManagers"" */

void CPetLevelInfo__GetManagers_11926e80(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  piVar1 = (int *)CPetLevelInfo__GetManagers(0,"CPetLevelInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d216f0;
      if ((DAT_12040b48 & 1) == 0) {
        DAT_12040b48 = DAT_12040b48 | 1;
        FUN_102500e0("CPetLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c9a800);
      }
      if (((*DAT_12040b2c == 0) && (iVar3 = FUN_11679e10(&local_8,"CPetLevelInfo",0), iVar3 == 0))
         && ((DAT_12040c08 & 1) == 0)) {
        DAT_12040bd4 = 0;
        DAT_12040be4 = 0;
        uRam12040be8 = 0;
        _DAT_12040bec = 0;
        DAT_12040bf0 = 0;
        DAT_12040c08 = DAT_12040c08 | 1;
        DAT_12040bd8 = 0;
        _DAT_12040bdc = 0;
        _DAT_12040be0 = 0;
        _DAT_12040bd0 = &PTR_FUN_11d21724;
        DAT_12040bf4 = _DAT_11de9ae0;
        DAT_12040bf8 = _UNK_11de9ae4;
        uRam12040bfc = _UNK_11de9ae8;
        DAT_12040c00 = _UNK_11de9aec;
        DAT_12040c04 = 1;
        FUN_11a8911f(&LAB_11cb1ce0);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



