// ===== class CActivityInfo  (9 recovered methods) =====

/* --- CActivityInfo::GetManagers @ 107d7b80 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// strings:
//   ""CActivityInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   strings:
     ""CActivityInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CActivityInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bee98 & 1) == 0) {
    DAT_123bee98 = DAT_123bee98 | 1;
    _DAT_123bee90 = &DAT_123bee80;
    DAT_123bee94 = &DAT_123bee80;
    DAT_123bee80 = 0;
    FUN_100d83d0("CActivityInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70e00);
  }
  return DAT_123bee7c;
}



/* --- CActivityInfo::GetManagers_111ff920 @ 111ff920 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// strings:
//   ""CActivityInfo::GetManagers""
//   ""CActivityInfo""
//   ""CActivityLevelEntrustInfo::GetManagers""
//   ""CActivityLevelEntrustInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   strings:
     ""CActivityInfo::GetManagers""
     ""CActivityInfo""
     ""CActivityLevelEntrustInfo::GetManagers""
     ""CActivityLevelEntrustInfo"" */

void CActivityInfo__GetManagers_111ff920(byte *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar5 = 0;
  if (*param_1 != 0) {
    pbVar4 = param_1 + 1;
    do {
      iVar6 = *(int *)pbVar4;
      local_8 = &PTR_FUN_11dc8ee0;
      if ((DAT_123bee98 & 1) == 0) {
        DAT_123bee98 = DAT_123bee98 | 1;
        FUN_102500e0("CActivityInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e00);
      }
      puVar3 = (undefined4 *)*DAT_123bee7c;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CActivityInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123bee10 & 1) == 0) {
          DAT_123bee18 = 0;
          DAT_123bee28 = 0;
          DAT_123bee2c = 0;
          _DAT_123bee30 = 0;
          DAT_123bee34 = 0;
          DAT_123bee10 = DAT_123bee10 | 1;
          DAT_123bee14 = &PTR_FUN_11dc8f3c;
          DAT_123bee38 = _DAT_11de9ae0;
          DAT_123bee3c = _UNK_11de9ae4;
          uRam123bee40 = _UNK_11de9ae8;
          DAT_123bee44 = _UNK_11de9aec;
          DAT_123bee48 = 1;
          DAT_123bee1c = puVar3;
          _DAT_123bee20 = puVar3;
          _DAT_123bee24 = puVar3;
          FUN_11a8911f(&LAB_11c97960);
        }
        puVar3 = &DAT_123bee14;
      }
      if ((iVar6 != -1) &&
         ((((iVar6 != 0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)) &&
          ((iVar6 = iVar6 - puVar3[0xc], -1 < iVar6 && (iVar6 < (int)puVar3[9])))))) {
        iVar2 = *(int *)(puVar3[8] + (iVar6 / iVar1) * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar6 % iVar1) * 4) != 0)) {
          local_8 = &PTR_FUN_11d1838c;
          if ((DAT_1203f60c & 1) == 0) {
            DAT_1203f60c = DAT_1203f60c | 1;
            FUN_102500e0("CActivityLevelEntrustInfo::GetManagers");
            FUN_11a8911f(&LAB_11c97a80);
          }
          if (((*DAT_1203f5f0 == 0) &&
              (iVar6 = FUN_11679e10(&local_8,"CActivityLevelEntrustInfo",0), iVar6 == 0)) &&
             ((DAT_1203f67c & 1) == 0)) {
            DAT_1203f67c = DAT_1203f67c | 1;
            FUN_111fdf20();
            FUN_11a8911f(&LAB_11c979c0);
          }
        }
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 5;
    } while (iVar5 < (int)(uint)*param_1);
  }
  return;
}



/* --- CActivityInfo::GetManagers_112def00 @ 112def00 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// strings:
//   ""CActivityInfo::GetManagers""
//   ""CActivityInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   strings:
     ""CActivityInfo::GetManagers""
     ""CActivityInfo"" */

void CActivityInfo__GetManagers_112def00(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_28;
  undefined **local_24;
  undefined1 local_20 [20];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  pbVar3 = param_1;
  if (*param_1 != 0) {
    do {
      iVar7 = *(int *)(pbVar3 + 1);
      local_24 = &PTR_FUN_11dc8ee0;
      if ((DAT_123bee98 & 1) == 0) {
        DAT_123bee98 = DAT_123bee98 | 1;
        FUN_102500e0("CActivityInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e00);
      }
      puVar4 = (undefined4 *)*DAT_123bee7c;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_24,"CActivityInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bee10 & 1) == 0) {
          DAT_123bee18 = 0;
          DAT_123bee28 = 0;
          DAT_123bee2c = 0;
          _DAT_123bee30 = 0;
          DAT_123bee34 = 0;
          DAT_123bee10 = DAT_123bee10 | 1;
          DAT_123bee14 = &PTR_FUN_11dc8f3c;
          DAT_123bee38 = _DAT_11de9ae0;
          DAT_123bee3c = _UNK_11de9ae4;
          uRam123bee40 = _UNK_11de9ae8;
          DAT_123bee44 = _UNK_11de9aec;
          DAT_123bee48 = 1;
          DAT_123bee1c = puVar4;
          _DAT_123bee20 = puVar4;
          _DAT_123bee24 = puVar4;
          FUN_11a8911f(&LAB_11c99fe0);
        }
        puVar4 = &DAT_123bee14;
      }
      local_24 = &PTR_FUN_11da54a8;
      if ((iVar7 != -1) &&
         ((((iVar7 != 0 || (puVar4[0xc] == 0)) && (iVar1 = puVar4[10], iVar1 != 0)) &&
          ((iVar5 = iVar7 - puVar4[0xc], -1 < iVar5 && (iVar5 < (int)puVar4[9])))))) {
        iVar2 = *(int *)(puVar4[8] + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((iVar1 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar1 != 0 &&
            (uVar6 = (uint)pbVar3[5], *(uint *)(iVar1 + 0x10) != uVar6)))) {
          *(uint *)(iVar1 + 0x10) = uVar6;
          if ((uVar6 == 2) && (0 < *(int *)(iVar1 + 0x3c))) {
            iVar7 = FUN_1090ba80(iVar7);
            if (iVar7 == 0) {
              FUN_1112ef90(*(undefined4 *)(iVar1 + 0x3c));
            }
            else {
              uVar8 = FUN_117284e0();
              iVar7 = FUN_107d7930(uVar8);
              if (iVar7 != 0) {
                iVar7 = FUN_100e5a30(local_20);
                uVar8 = *(undefined4 *)(iVar1 + 0x3c);
                uVar9 = FUN_1024e9b0(*(undefined4 *)(iVar7 + 0x14),0x2a);
                FUN_1112f070(uVar8,uVar9);
                if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(local_c);
                }
              }
            }
          }
          if ((*(int *)(iVar1 + 0x10) == 3) && (0 < *(int *)(iVar1 + 0x40))) {
            FUN_1112ef90(*(int *)(iVar1 + 0x40));
          }
        }
      }
      local_28 = local_28 + 1;
      pbVar3 = pbVar3 + 5;
    } while (local_28 < (int)(uint)*param_1);
  }
  FUN_11a89daa();
  return;
}



/* --- CActivityInfo::GetManagers_1130b930 @ 1130b930 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// strings:
//   ""CActivityInfo::GetManagers""
//   ""CActivityInfo""

/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   strings:
     ""CActivityInfo::GetManagers""
     ""CActivityInfo"" */

uint CActivityInfo__GetManagers_1130b930(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined **local_8;
  
  piVar6 = (int *)param_1[0x90];
  if (piVar6 == (int *)param_1[0x91]) {
    return CONCAT31((int3)((uint)piVar6 >> 8),1);
  }
  piVar4 = piVar6;
  if (piVar6 != (int *)param_1[0x91]) {
    do {
      iVar5 = *piVar6;
      local_8 = &PTR_FUN_11dc8ee0;
      if ((DAT_123bee98 & 1) == 0) {
        DAT_123bee98 = DAT_123bee98 | 1;
        FUN_102500e0("CActivityInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e00);
      }
      puVar3 = (undefined4 *)*DAT_123bee7c;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CActivityInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123bee10 & 1) == 0) {
          DAT_123bee10 = DAT_123bee10 | 1;
          FUN_107e0590();
          FUN_11a8911f(&LAB_11c9ad70);
        }
        puVar3 = &DAT_123bee14;
      }
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)) &&
          ((iVar5 = iVar5 - puVar3[0xc], -1 < iVar5 && (iVar5 < (int)puVar3[9])))))) {
        iVar2 = *(int *)(puVar3[8] + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0 &&
            (*(int *)(iVar5 + 0x10) == 2)))) {
          return CONCAT31((int3)((uint)iVar5 >> 8),1);
        }
      }
      piVar6 = piVar6 + 1;
      piVar4 = param_1;
    } while (piVar6 != (int *)param_1[0x91]);
  }
  return (uint)piVar4 & 0xffffff00;
}



/* --- CActivityInfo::GetManagers_113b23a0 @ 113b23a0 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// calls: CActivityLevelEntrustInfo::GetManagers
// strings:
//   ""CExplimitInfo""
//   ""CActivityInfo::GetManagers""
//   ""CActivityInfo""
//   ""CActivityLevelEntrustInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   calls: CActivityLevelEntrustInfo::GetManagers
   strings:
     ""CExplimitInfo""
     ""CActivityInfo::GetManagers""
     ""CActivityInfo""
     ""CActivityLevelEntrustInfo"" */

int CActivityInfo__GetManagers_113b23a0(undefined **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar8 = 0;
  local_8 = 0;
  iVar2 = FUN_108dea50(0,"CExplimitInfo",0);
  if ((param_1 != (undefined **)0xffffffff) &&
     ((((param_1 != (undefined **)0x0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar7 = *(int *)(iVar2 + 0x28), iVar7 != 0)) &&
      ((iVar3 = (int)param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 &&
       (iVar3 < *(int *)(iVar2 + 0x24))))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar7) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar7) * 4), iVar2 != 0)) {
      iVar7 = 0;
      do {
        while( true ) {
          param_1 = &PTR_FUN_11dc8ee0;
          if ((DAT_123bee98 & 1) == 0) {
            DAT_123bee98 = DAT_123bee98 | 1;
            FUN_102500e0("CActivityInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70e00);
          }
          piVar4 = (int *)*DAT_123bee7c;
          if ((piVar4 == (int *)0x0) &&
             (piVar4 = (int *)FUN_11679e10(&param_1,"CActivityInfo",0), piVar4 == (int *)0x0)) {
            if ((DAT_123bee10 & 1) == 0) {
              DAT_123bee18 = 0;
              DAT_123bee28 = 0;
              DAT_123bee2c = 0;
              _DAT_123bee30 = 0;
              DAT_123bee34 = 0;
              DAT_123bee10 = DAT_123bee10 | 1;
              DAT_123bee14 = &PTR_FUN_11dc8f3c;
              DAT_123bee38 = _DAT_11de9ae0;
              DAT_123bee3c = _UNK_11de9ae4;
              uRam123bee40 = _UNK_11de9ae8;
              DAT_123bee44 = _UNK_11de9aec;
              DAT_123bee48 = 1;
              DAT_123bee1c = piVar4;
              _DAT_123bee20 = piVar4;
              _DAT_123bee24 = piVar4;
              FUN_11a8911f(&LAB_11c9bbb0);
            }
            piVar4 = (int *)&DAT_123bee14;
          }
          param_1 = &PTR_FUN_11da54a8;
          iVar3 = (**(code **)(*piVar4 + 0x28))();
          if (iVar3 <= iVar7) {
            return iVar8;
          }
          param_1 = &PTR_FUN_11dc8ee0;
          if ((DAT_123bee98 & 1) == 0) {
            DAT_123bee98 = DAT_123bee98 | 1;
            FUN_102500e0("CActivityInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70e00);
          }
          puVar5 = (undefined4 *)*DAT_123bee7c;
          if ((puVar5 == (undefined4 *)0x0) &&
             (puVar5 = (undefined4 *)FUN_11679e10(&param_1,"CActivityInfo",0),
             puVar5 == (undefined4 *)0x0)) {
            if ((DAT_123bee10 & 1) == 0) {
              DAT_123bee10 = DAT_123bee10 | 1;
              FUN_107e0590();
              FUN_11a8911f(&LAB_11c9bbb0);
            }
            puVar5 = &DAT_123bee14;
          }
          param_1 = &PTR_FUN_11da54a8;
          if (((iVar7 != -1) &&
              (((iVar7 != 0 || (puVar5[0xc] == 0)) && (iVar3 = puVar5[10], iVar3 != 0)))) &&
             ((iVar6 = iVar7 - puVar5[0xc], -1 < iVar6 && (iVar6 < (int)puVar5[9])))) break;
LAB_113b2639:
          iVar7 = iVar7 + 1;
        }
        iVar1 = *(int *)(puVar5[8] + (iVar6 / iVar3) * 4);
        if ((iVar1 == 0) ||
           ((iVar3 = *(int *)(iVar1 + (iVar6 % iVar3) * 4), iVar3 == 0 ||
            (*(int *)(iVar3 + 0x10) != 2)))) goto LAB_113b2639;
        iVar3 = *(int *)(iVar3 + 0x14);
        iVar6 = CActivityLevelEntrustInfo__GetManagers(0,"CActivityLevelEntrustInfo",0);
        iVar8 = local_8;
        if (((iVar3 == -1) ||
            (((iVar3 == 0 && (*(int *)(iVar6 + 0x30) != 0)) ||
             (iVar1 = *(int *)(iVar6 + 0x28), iVar1 == 0)))) ||
           ((iVar3 = iVar3 - *(int *)(iVar6 + 0x30), iVar3 < 0 || (*(int *)(iVar6 + 0x24) <= iVar3))
           )) goto LAB_113b2639;
        iVar6 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar3 / iVar1) * 4);
        if ((iVar6 == 0) ||
           ((iVar3 = *(int *)(iVar6 + (iVar3 % iVar1) * 4), iVar3 == 0 ||
            (iVar3 = *(int *)(iVar3 + 0x24), iVar3 == 0)))) goto LAB_113b2639;
        iVar8 = local_8 + (iVar3 + -1) * *(int *)(iVar2 + 0x18);
        iVar7 = iVar7 + 1;
        local_8 = iVar8;
      } while( true );
    }
  }
  return 0;
}



/* --- CActivityInfo::GetManagers_113b2660 @ 113b2660 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// calls: CActivityLevelEntrustInfo::GetManagers
// strings:
//   ""CExplimitInfo""
//   ""CActivityInfo::GetManagers""
//   ""CActivityInfo""
//   ""CActivityLevelEntrustInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   calls: CActivityLevelEntrustInfo::GetManagers
   strings:
     ""CExplimitInfo""
     ""CActivityInfo::GetManagers""
     ""CActivityInfo""
     ""CActivityLevelEntrustInfo"" */

int CActivityInfo__GetManagers_113b2660(undefined **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar8 = 0;
  local_8 = 0;
  iVar2 = FUN_108dea50(0,"CExplimitInfo",0);
  if ((param_1 != (undefined **)0xffffffff) &&
     ((((param_1 != (undefined **)0x0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar7 = *(int *)(iVar2 + 0x28), iVar7 != 0)) &&
      ((iVar3 = (int)param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 &&
       (iVar3 < *(int *)(iVar2 + 0x24))))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar7) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar7) * 4), iVar2 != 0)) {
      iVar7 = 0;
      do {
        while( true ) {
          param_1 = &PTR_FUN_11dc8ee0;
          if ((DAT_123bee98 & 1) == 0) {
            DAT_123bee98 = DAT_123bee98 | 1;
            FUN_102500e0("CActivityInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70e00);
          }
          piVar4 = (int *)*DAT_123bee7c;
          if ((piVar4 == (int *)0x0) &&
             (piVar4 = (int *)FUN_11679e10(&param_1,"CActivityInfo",0), piVar4 == (int *)0x0)) {
            if ((DAT_123bee10 & 1) == 0) {
              DAT_123bee18 = 0;
              DAT_123bee28 = 0;
              DAT_123bee2c = 0;
              _DAT_123bee30 = 0;
              DAT_123bee34 = 0;
              DAT_123bee10 = DAT_123bee10 | 1;
              DAT_123bee14 = &PTR_FUN_11dc8f3c;
              DAT_123bee38 = _DAT_11de9ae0;
              DAT_123bee3c = _UNK_11de9ae4;
              uRam123bee40 = _UNK_11de9ae8;
              DAT_123bee44 = _UNK_11de9aec;
              DAT_123bee48 = 1;
              DAT_123bee1c = piVar4;
              _DAT_123bee20 = piVar4;
              _DAT_123bee24 = piVar4;
              FUN_11a8911f(&LAB_11c9bbb0);
            }
            piVar4 = (int *)&DAT_123bee14;
          }
          param_1 = &PTR_FUN_11da54a8;
          iVar3 = (**(code **)(*piVar4 + 0x28))();
          if (iVar3 <= iVar7) {
            return iVar8;
          }
          param_1 = &PTR_FUN_11dc8ee0;
          if ((DAT_123bee98 & 1) == 0) {
            DAT_123bee98 = DAT_123bee98 | 1;
            FUN_102500e0("CActivityInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70e00);
          }
          puVar5 = (undefined4 *)*DAT_123bee7c;
          if ((puVar5 == (undefined4 *)0x0) &&
             (puVar5 = (undefined4 *)FUN_11679e10(&param_1,"CActivityInfo",0),
             puVar5 == (undefined4 *)0x0)) {
            if ((DAT_123bee10 & 1) == 0) {
              DAT_123bee10 = DAT_123bee10 | 1;
              FUN_107e0590();
              FUN_11a8911f(&LAB_11c9bbb0);
            }
            puVar5 = &DAT_123bee14;
          }
          param_1 = &PTR_FUN_11da54a8;
          if (((iVar7 != -1) &&
              (((iVar7 != 0 || (puVar5[0xc] == 0)) && (iVar3 = puVar5[10], iVar3 != 0)))) &&
             ((iVar6 = iVar7 - puVar5[0xc], -1 < iVar6 && (iVar6 < (int)puVar5[9])))) break;
LAB_113b28f9:
          iVar7 = iVar7 + 1;
        }
        iVar1 = *(int *)(puVar5[8] + (iVar6 / iVar3) * 4);
        if ((iVar1 == 0) ||
           ((iVar3 = *(int *)(iVar1 + (iVar6 % iVar3) * 4), iVar3 == 0 ||
            (*(int *)(iVar3 + 0x10) != 2)))) goto LAB_113b28f9;
        iVar3 = *(int *)(iVar3 + 0x14);
        iVar6 = CActivityLevelEntrustInfo__GetManagers(0,"CActivityLevelEntrustInfo",0);
        iVar8 = local_8;
        if (((iVar3 == -1) ||
            (((iVar3 == 0 && (*(int *)(iVar6 + 0x30) != 0)) ||
             (iVar1 = *(int *)(iVar6 + 0x28), iVar1 == 0)))) ||
           ((iVar3 = iVar3 - *(int *)(iVar6 + 0x30), iVar3 < 0 || (*(int *)(iVar6 + 0x24) <= iVar3))
           )) goto LAB_113b28f9;
        iVar6 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar3 / iVar1) * 4);
        if ((iVar6 == 0) ||
           ((iVar3 = *(int *)(iVar6 + (iVar3 % iVar1) * 4), iVar3 == 0 ||
            (iVar3 = *(int *)(iVar3 + 0x24), iVar3 == 0)))) goto LAB_113b28f9;
        iVar8 = local_8 + (iVar3 + -1) * *(int *)(iVar2 + 0x14);
        iVar7 = iVar7 + 1;
        local_8 = iVar8;
      } while( true );
    }
  }
  return 0;
}



/* --- CActivityInfo::GetManagers_11513600 @ 11513600 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// strings:
//   ""CActivityInfo""
//   ""CActivityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   strings:
     ""CActivityInfo""
     ""CActivityInfo::GetManagers"" */

void CActivityInfo__GetManagers_11513600(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  piVar1 = (int *)FUN_107dfbd0(0,"CActivityInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dc8ee0;
      if ((DAT_123bee98 & 1) == 0) {
        DAT_123bee98 = DAT_123bee98 | 1;
        FUN_102500e0("CActivityInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e00);
      }
      if (((*DAT_123bee7c == 0) && (iVar3 = FUN_11679e10(&local_8,"CActivityInfo",0), iVar3 == 0))
         && ((DAT_123bee10 & 1) == 0)) {
        DAT_123bee18 = 0;
        DAT_123bee28 = 0;
        DAT_123bee2c = 0;
        _DAT_123bee30 = 0;
        DAT_123bee34 = 0;
        DAT_123bee10 = DAT_123bee10 | 1;
        DAT_123bee1c = 0;
        _DAT_123bee20 = 0;
        _DAT_123bee24 = 0;
        DAT_123bee14 = &PTR_FUN_11dc8f3c;
        DAT_123bee38 = _DAT_11de9ae0;
        DAT_123bee3c = _UNK_11de9ae4;
        uRam123bee40 = _UNK_11de9ae8;
        DAT_123bee44 = _UNK_11de9aec;
        DAT_123bee48 = 1;
        FUN_11a8911f(&LAB_11ca0380);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



/* --- CActivityInfo::GetManagers_117286e0 @ 117286e0 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// strings:
//   ""CActivityInfo::GetManagers""
//   ""CActivityInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   strings:
     ""CActivityInfo::GetManagers""
     ""CActivityInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

undefined4 * CActivityInfo__GetManagers_117286e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc8ee0;
  if ((DAT_123bee98 & 1) == 0) {
    DAT_123bee98 = DAT_123bee98 | 1;
    FUN_102500e0("CActivityInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70e00);
  }
  if (((*DAT_123bee7c == 0) && (iVar1 = FUN_11679e10(&local_8,"CActivityInfo",0), iVar1 == 0)) &&
     ((DAT_123bee10 & 1) == 0)) {
    DAT_123bee18 = 0;
    DAT_123bee28 = 0;
    DAT_123bee2c = 0;
    _DAT_123bee30 = 0;
    DAT_123bee34 = 0;
    DAT_123bee10 = DAT_123bee10 | 1;
    DAT_123bee1c = 0;
    _DAT_123bee20 = 0;
    _DAT_123bee24 = 0;
    DAT_123bee14 = &PTR_FUN_11dc8f3c;
    DAT_123bee38 = _DAT_11de9ae0;
    DAT_123bee3c = _UNK_11de9ae4;
    uRam123bee40 = _UNK_11de9ae8;
    DAT_123bee44 = _UNK_11de9aec;
    DAT_123bee48 = 1;
    FUN_11a8911f(&LAB_11ca8d30);
  }
  local_8 = &PTR_FUN_11dc893c;
  if ((DAT_123bec98 & 1) == 0) {
    DAT_123bec98 = DAT_123bec98 | 1;
    FUN_102500e0("CMHLevelInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70cf0);
  }
  puVar2 = (undefined4 *)*DAT_123bec7c;
  if ((puVar2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0), puVar2 == (undefined4 *)0x0))
  {
    if ((DAT_123bec74 & 1) == 0) {
      DAT_123beca0 = 0;
      DAT_123becb0 = 0;
      DAT_123becb4 = 0;
      _DAT_123becb8 = 0;
      DAT_123becbc = 0;
      DAT_123bec74 = DAT_123bec74 | 1;
      DAT_123beca4 = 0;
      _DAT_123beca8 = 0;
      _DAT_123becac = 0;
      DAT_123bec9c = &PTR_FUN_11dc8960;
      DAT_123becc0 = _DAT_11de9ae0;
      DAT_123becc4 = _UNK_11de9ae4;
      uRam123becc8 = _UNK_11de9ae8;
      DAT_123beccc = _UNK_11de9aec;
      DAT_123becd0 = 1;
      FUN_11a8911f(&LAB_11ca8d90);
    }
    puVar2 = &DAT_123bec9c;
  }
  return puVar2;
}



/* --- CActivityInfo::GetManagers_1194a100 @ 1194a100 --- */
// [RE-AUTO c3]
// id: CActivityInfo::GetManagers
// strings:
//   ""CActivityInfo""
//   ""CActivityInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CActivityInfo::GetManagers
   strings:
     ""CActivityInfo""
     ""CActivityInfo::GetManagers"" */

void CActivityInfo__GetManagers_1194a100(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_107dfbd0(0,"CActivityInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dc8ee0;
      if ((DAT_123bee98 & 1) == 0) {
        DAT_123bee98 = DAT_123bee98 | 1;
        FUN_102500e0("CActivityInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e00);
      }
      puVar4 = (undefined4 *)*DAT_123bee7c;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CActivityInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bee10 & 1) == 0) {
          DAT_123bee18 = 0;
          DAT_123bee28 = 0;
          DAT_123bee2c = 0;
          _DAT_123bee30 = 0;
          DAT_123bee34 = 0;
          DAT_123bee10 = DAT_123bee10 | 1;
          DAT_123bee14 = &PTR_FUN_11dc8f3c;
          DAT_123bee38 = _DAT_11de9ae0;
          DAT_123bee3c = _UNK_11de9ae4;
          uRam123bee40 = _UNK_11de9ae8;
          DAT_123bee44 = _UNK_11de9aec;
          DAT_123bee48 = 1;
          DAT_123bee1c = puVar4;
          _DAT_123bee20 = puVar4;
          _DAT_123bee24 = puVar4;
          FUN_11a8911f(&LAB_11cb2760);
        }
        puVar4 = &DAT_123bee14;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        FUN_11862240(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



