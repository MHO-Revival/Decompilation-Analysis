// ===== class CCommodityLibInfo  (8 recovered methods) =====

/* --- CCommodityLibInfo::GetManagers @ 104d9030 --- */
// [RE-AUTO c3]
// id: CCommodityLibInfo::GetManagers
// strings:
//   ""CCommodityLibInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityLibInfo::GetManagers
   strings:
     ""CCommodityLibInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCommodityLibInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be144 & 1) == 0) {
    DAT_123be144 = DAT_123be144 | 1;
    _DAT_123be13c = &DAT_123be12c;
    DAT_123be140 = &DAT_123be12c;
    DAT_123be12c = 0;
    FUN_100d83d0("CCommodityLibInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6ebd0);
  }
  return DAT_123be128;
}



/* --- CCommodityLibInfo::GetManagers_114b83c0 @ 114b83c0 --- */
// [RE-AUTO c3]
// id: CCommodityLibInfo::GetManagers
// strings:
//   ""CCommodityLibInfo::GetManagers""
//   ""CCommodityLibInfo""
//   ""CCommodityGroupInfo::GetManagers""
//   ""CCommodityGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityLibInfo::GetManagers
   strings:
     ""CCommodityLibInfo::GetManagers""
     ""CCommodityLibInfo""
     ""CCommodityGroupInfo::GetManagers""
     ""CCommodityGroupInfo"" */

void __thiscall CCommodityLibInfo__GetManagers_114b83c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_10;
  undefined **local_c;
  undefined4 local_8;
  
  local_10 = 0x14;
  piVar6 = &local_10;
  if (*param_2 < 0x14) {
    piVar6 = param_2;
  }
  local_8 = param_1;
  local_10 = *piVar6;
  if (0 < local_10) {
    piVar6 = param_2 + 1;
    do {
      iVar4 = piVar6[1];
      local_c = &PTR_FUN_11dbdd80;
      if ((DAT_123be144 & 1) == 0) {
        DAT_123be144 = DAT_123be144 | 1;
        FUN_102500e0("CCommodityLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ebd0);
      }
      puVar3 = (undefined *)*DAT_123be128;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CCommodityLibInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123bde90 & 1) == 0) {
          DAT_123bde5c = 0;
          DAT_123bde6c = 0;
          DAT_123bde70 = 0;
          _DAT_123bde74 = 0;
          DAT_123bde78 = 0;
          DAT_123bde90 = DAT_123bde90 | 1;
          _DAT_123bde58 = &PTR_FUN_11dbde1c;
          DAT_123bde7c = _DAT_11de9ae0;
          DAT_123bde80 = _UNK_11de9ae4;
          uRam123bde84 = _UNK_11de9ae8;
          DAT_123bde88 = _UNK_11de9aec;
          DAT_123bde8c = 1;
          DAT_123bde60 = puVar3;
          _DAT_123bde64 = puVar3;
          _DAT_123bde68 = puVar3;
          FUN_11a8911f(&LAB_11c9e910);
        }
        puVar3 = &DAT_123bde58;
      }
      local_c = &PTR_FUN_11da54a8;
      if (((iVar4 != -1) &&
          (((iVar4 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar5 = *(int *)(puVar3 + 0x28), iVar5 != 0)))) &&
         ((iVar4 = iVar4 - *(int *)(puVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar3 + 0x24)))
         )) {
        iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar5) * 4);
        if ((iVar1 != 0) &&
           ((*(int *)(iVar1 + (iVar4 % iVar5) * 4) != 0 && (iVar4 = FUN_11720a10(), iVar4 != 0)))) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x58);
        }
      }
      piVar6 = (int *)((int)piVar6 + 0x212);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  local_10 = 0x80;
  piVar6 = &local_10;
  if (param_2[0x1568] < 0x80) {
    piVar6 = param_2 + 0x1568;
  }
  local_10 = *piVar6;
  if (0 < local_10) {
    iVar4 = (int)param_2 + 0x55aa;
    do {
      iVar5 = (int)*(short *)(iVar4 + -6);
      local_c = &PTR_FUN_11dceff0;
      if ((DAT_123c7478 & 1) == 0) {
        DAT_123c7478 = DAT_123c7478 | 1;
        FUN_102500e0("CCommodityGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72580);
      }
      puVar3 = (undefined *)*DAT_123c747c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CCommodityGroupInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123c74a0 & 1) == 0) {
          DAT_123c74a8 = 0;
          DAT_123c74b8 = 0;
          DAT_123c74bc = 0;
          _DAT_123c74c0 = 0;
          DAT_123c74c4 = 0;
          DAT_123c74a0 = DAT_123c74a0 | 1;
          _DAT_123c74a4 = &PTR_FUN_11dceff8;
          DAT_123c74c8 = _DAT_11de9ae0;
          DAT_123c74cc = _UNK_11de9ae4;
          uRam123c74d0 = _UNK_11de9ae8;
          DAT_123c74d4 = _UNK_11de9aec;
          DAT_123c74d8 = 1;
          DAT_123c74ac = puVar3;
          _DAT_123c74b0 = puVar3;
          _DAT_123c74b4 = puVar3;
          FUN_11a8911f(&LAB_11c9e8b0);
        }
        puVar3 = &DAT_123c74a4;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)) &&
          ((iVar5 = iVar5 - *(int *)(puVar3 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar3 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar5 % iVar1) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x28);
        }
      }
      iVar4 = iVar4 + 0xe;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    local_10 = 0;
  }
  FUN_114b87c0(param_2);
  return;
}



/* --- CCommodityLibInfo::GetManagers_11720ad0 @ 11720ad0 --- */
// [RE-AUTO c3]
// id: CCommodityLibInfo::GetManagers
// strings:
//   ""CCommodityLibInfo""
//   ""CCommodityLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityLibInfo::GetManagers
   strings:
     ""CCommodityLibInfo""
     ""CCommodityLibInfo::GetManagers"" */

undefined4 * CCommodityLibInfo__GetManagers_11720ad0(undefined **param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int local_8;
  
  puVar1 = param_1;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  piVar2 = (int *)FUN_104eeaa0(0,"CCommodityLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dbdd80;
      if ((DAT_123be144 & 1) == 0) {
        DAT_123be144 = DAT_123be144 | 1;
        FUN_102500e0("CCommodityLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ebd0);
      }
      puVar4 = (undefined *)*DAT_123be128;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CCommodityLibInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bde90 & 1) == 0) {
          DAT_123bde5c = 0;
          DAT_123bde6c = 0;
          DAT_123bde70 = 0;
          _DAT_123bde74 = 0;
          DAT_123bde78 = 0;
          DAT_123bde90 = DAT_123bde90 | 1;
          _DAT_123bde58 = &PTR_FUN_11dbde1c;
          DAT_123bde7c = _DAT_11de9ae0;
          DAT_123bde80 = _UNK_11de9ae4;
          uRam123bde84 = _UNK_11de9ae8;
          DAT_123bde88 = _UNK_11de9aec;
          DAT_123bde8c = 1;
          DAT_123bde60 = puVar4;
          _DAT_123bde64 = puVar4;
          _DAT_123bde68 = puVar4;
          FUN_11a8911f(&LAB_11ca8af0);
        }
        puVar4 = &DAT_123bde58;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar5)) {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4);
      }
      if ((local_8 != 0) && (*(int *)(local_8 + 0x20) == 2)) {
        piVar2 = (int *)puVar1[1];
        if (piVar2 == (int *)puVar1[2]) {
          FUN_11721ea0(piVar2,&local_8,(int)&param_1 + 3,1,1);
        }
        else {
          *piVar2 = local_8;
          puVar1[1] = puVar1[1] + 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return puVar1;
}



/* --- CCommodityLibInfo::GetManagers_11720c50 @ 11720c50 --- */
// [RE-AUTO c3]
// id: CCommodityLibInfo::GetManagers
// strings:
//   ""CCommodityLibInfo""
//   ""CCommodityLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityLibInfo::GetManagers
   strings:
     ""CCommodityLibInfo""
     ""CCommodityLibInfo::GetManagers"" */

int CCommodityLibInfo__GetManagers_11720c50(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  piVar2 = (int *)FUN_104eeaa0(0,"CCommodityLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dbdd80;
      if ((DAT_123be144 & 1) == 0) {
        DAT_123be144 = DAT_123be144 | 1;
        FUN_102500e0("CCommodityLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ebd0);
      }
      puVar4 = (undefined *)*DAT_123be128;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CCommodityLibInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bde90 & 1) == 0) {
          DAT_123bde5c = 0;
          DAT_123bde6c = 0;
          DAT_123bde70 = 0;
          _DAT_123bde74 = 0;
          DAT_123bde78 = 0;
          DAT_123bde90 = DAT_123bde90 | 1;
          _DAT_123bde58 = &PTR_FUN_11dbde1c;
          DAT_123bde7c = _DAT_11de9ae0;
          DAT_123bde80 = _UNK_11de9ae4;
          uRam123bde84 = _UNK_11de9ae8;
          DAT_123bde88 = _UNK_11de9aec;
          DAT_123bde8c = 1;
          DAT_123bde60 = puVar4;
          _DAT_123bde64 = puVar4;
          _DAT_123bde68 = puVar4;
          FUN_11a8911f(&LAB_11ca8af0);
        }
        puVar4 = &DAT_123bde58;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x20) == 1)) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CCommodityLibInfo::GetManagers_11720d80 @ 11720d80 --- */
// [RE-AUTO c3]
// id: CCommodityLibInfo::GetManagers
// strings:
//   ""CCommodityLibInfo""
//   ""CCommodityLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityLibInfo::GetManagers
   strings:
     ""CCommodityLibInfo""
     ""CCommodityLibInfo::GetManagers"" */

undefined4 * CCommodityLibInfo__GetManagers_11720d80(undefined **param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int local_8;
  
  puVar1 = param_1;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  piVar2 = (int *)FUN_104eeaa0(0,"CCommodityLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dbdd80;
      if ((DAT_123be144 & 1) == 0) {
        DAT_123be144 = DAT_123be144 | 1;
        FUN_102500e0("CCommodityLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ebd0);
      }
      puVar4 = (undefined *)*DAT_123be128;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CCommodityLibInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bde90 & 1) == 0) {
          DAT_123bde5c = 0;
          DAT_123bde6c = 0;
          DAT_123bde70 = 0;
          _DAT_123bde74 = 0;
          DAT_123bde78 = 0;
          DAT_123bde90 = DAT_123bde90 | 1;
          _DAT_123bde58 = &PTR_FUN_11dbde1c;
          DAT_123bde7c = _DAT_11de9ae0;
          DAT_123bde80 = _UNK_11de9ae4;
          uRam123bde84 = _UNK_11de9ae8;
          DAT_123bde88 = _UNK_11de9aec;
          DAT_123bde8c = 1;
          DAT_123bde60 = puVar4;
          _DAT_123bde64 = puVar4;
          _DAT_123bde68 = puVar4;
          FUN_11a8911f(&LAB_11ca8af0);
        }
        puVar4 = &DAT_123bde58;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((iVar5 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar5)) {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4);
      }
      if ((local_8 != 0) && (*(int *)(local_8 + 0x20) == 3)) {
        piVar2 = (int *)puVar1[1];
        if (piVar2 == (int *)puVar1[2]) {
          FUN_11721ea0(piVar2,&local_8,(int)&param_1 + 3,1,1);
        }
        else {
          *piVar2 = local_8;
          puVar1[1] = puVar1[1] + 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return puVar1;
}



/* --- CCommodityLibInfo::GetManagers_11722190 @ 11722190 --- */
// [RE-AUTO c3]
// id: CCommodityLibInfo::GetManagers
// strings:
//   ""CCommodityLibInfo""
//   ""CCommodityLibInfo::GetManagers""
//   ""CNpcSaleInfo::GetManagers""
//   ""CNpcSaleInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityLibInfo::GetManagers
   strings:
     ""CCommodityLibInfo""
     ""CCommodityLibInfo::GetManagers""
     ""CNpcSaleInfo::GetManagers""
     ""CNpcSaleInfo"" */

void CCommodityLibInfo__GetManagers_11722190(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int local_1c;
  undefined **local_c;
  undefined **local_8;
  
  piVar2 = (int *)FUN_104eeaa0(0,"CCommodityLibInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  local_1c = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dbdd80;
      if ((DAT_123be144 & 1) == 0) {
        DAT_123be144 = DAT_123be144 | 1;
        FUN_102500e0("CCommodityLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ebd0);
      }
      puVar4 = (undefined *)*DAT_123be128;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CCommodityLibInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123bde90 & 1) == 0) {
          DAT_123bde5c = 0;
          DAT_123bde6c = 0;
          DAT_123bde70 = 0;
          _DAT_123bde74 = 0;
          DAT_123bde78 = 0;
          DAT_123bde90 = DAT_123bde90 | 1;
          _DAT_123bde58 = &PTR_FUN_11dbde1c;
          DAT_123bde7c = _DAT_11de9ae0;
          DAT_123bde80 = _UNK_11de9ae4;
          uRam123bde84 = _UNK_11de9ae8;
          DAT_123bde88 = _UNK_11de9aec;
          DAT_123bde8c = 1;
          DAT_123bde60 = puVar4;
          _DAT_123bde64 = puVar4;
          _DAT_123bde68 = puVar4;
          FUN_11a8911f(&LAB_11ca8af0);
        }
        puVar4 = &DAT_123bde58;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((local_1c < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= local_1c)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(*(int *)(puVar4 + 0x14) + local_1c * 4);
      }
      iVar5 = (**(code **)(*piVar2 + 0x18))();
      local_c = &PTR_FUN_11dc0b18;
      if ((DAT_123be904 & 1) == 0) {
        DAT_123be904 = DAT_123be904 | 1;
        FUN_102500e0("CNpcSaleInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fe40);
      }
      puVar6 = (undefined4 *)*DAT_123be8e8;
      if ((puVar6 == (undefined4 *)0x0) &&
         (puVar6 = (undefined4 *)FUN_11679e10(&local_c,"CNpcSaleInfo",0),
         puVar6 == (undefined4 *)0x0)) {
        if ((DAT_123be6c4 & 1) == 0) {
          DAT_123be690 = 0;
          DAT_123be6a0 = 0;
          DAT_123be6a4 = 0;
          _DAT_123be6a8 = 0;
          DAT_123be6ac = 0;
          DAT_123be6c4 = DAT_123be6c4 | 1;
          DAT_123be68c = &PTR_FUN_11dc0c70;
          DAT_123be6b0 = _DAT_11de9ae0;
          DAT_123be6b4 = _UNK_11de9ae4;
          uRam123be6b8 = _UNK_11de9ae8;
          DAT_123be6bc = _UNK_11de9aec;
          DAT_123be6c0 = 1;
          DAT_123be694 = puVar6;
          _DAT_123be698 = puVar6;
          _DAT_123be69c = puVar6;
          FUN_11a8911f(&LAB_11ca8b50);
        }
        puVar6 = &DAT_123be68c;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (puVar6[0xc] == 0)) && (iVar8 = puVar6[10], iVar8 != 0)) &&
          ((iVar5 = iVar5 - puVar6[0xc], -1 < iVar5 && (iVar5 < (int)puVar6[9])))))) {
        iVar1 = *(int *)(puVar6[8] + (iVar5 / iVar8) * 4);
        if ((iVar1 != 0) &&
           ((*(int *)(iVar1 + (iVar5 % iVar8) * 4) != 0 && (iVar5 = piVar2[5], iVar5 != piVar2[6])))
           ) {
          do {
            piVar7 = (int *)FUN_117dfae0();
            piVar7 = (int *)*piVar7;
            iVar8 = FUN_117dfae0();
            if (piVar7 != *(int **)(iVar8 + 4)) {
              do {
                iVar8 = *piVar7;
                FUN_117da950(*(undefined4 *)(iVar8 + 0x14));
                FUN_117da950(*(undefined4 *)(iVar8 + 0x14));
                piVar7 = piVar7 + 1;
                iVar8 = FUN_117dfae0();
              } while (piVar7 != *(int **)(iVar8 + 4));
            }
            iVar5 = iVar5 + 4;
          } while (iVar5 != piVar2[6]);
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < iVar3);
  }
  return;
}



/* --- CCommodityLibInfo::GetManagers_11909d80 @ 11909d80 --- */
// [RE-AUTO c3]
// id: CCommodityLibInfo::GetManagers
// strings:
//   ""CCommodityLibInfo""
//   ""CCommodityLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityLibInfo::GetManagers
   strings:
     ""CCommodityLibInfo""
     ""CCommodityLibInfo::GetManagers"" */

void CCommodityLibInfo__GetManagers_11909d80(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_104eeaa0(0,"CCommodityLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbdd80;
      if ((DAT_123be144 & 1) == 0) {
        DAT_123be144 = DAT_123be144 | 1;
        FUN_102500e0("CCommodityLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ebd0);
      }
      if (((*DAT_123be128 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CCommodityLibInfo",0), iVar3 == 0)) &&
         ((DAT_123bde90 & 1) == 0)) {
        DAT_123bde5c = 0;
        DAT_123bde6c = 0;
        DAT_123bde70 = 0;
        _DAT_123bde74 = 0;
        DAT_123bde78 = 0;
        DAT_123bde90 = DAT_123bde90 | 1;
        _DAT_123bde58 = &PTR_FUN_11dbde1c;
        DAT_123bde7c = _DAT_11de9ae0;
        DAT_123bde80 = _UNK_11de9ae4;
        uRam123bde84 = _UNK_11de9ae8;
        DAT_123bde88 = _UNK_11de9aec;
        DAT_123bde8c = 1;
        DAT_123bde60 = iVar3;
        _DAT_123bde64 = iVar3;
        _DAT_123bde68 = iVar3;
        FUN_11a8911f(&LAB_11cb11d0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11721190();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CCommodityLibInfo::GetManagers_11909ed0 @ 11909ed0 --- */
// [RE-AUTO c3]
// id: CCommodityLibInfo::GetManagers
// calls: CNpcSaleInfo::GetManagers_11720f30, CCommodityLibInfo::GetManagers_11722190
// strings:
//   ""CCommodityLibInfo""
//   ""CCommodityLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityLibInfo::GetManagers
   calls: CNpcSaleInfo::GetManagers_11720f30, CCommodityLibInfo::GetManagers_11722190
   strings:
     ""CCommodityLibInfo""
     ""CCommodityLibInfo::GetManagers"" */

void CCommodityLibInfo__GetManagers_11909ed0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_104eeaa0(0,"CCommodityLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbdd80;
      if ((DAT_123be144 & 1) == 0) {
        DAT_123be144 = DAT_123be144 | 1;
        FUN_102500e0("CCommodityLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ebd0);
      }
      if (((*DAT_123be128 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CCommodityLibInfo",0), iVar3 == 0)) &&
         ((DAT_123bde90 & 1) == 0)) {
        DAT_123bde5c = 0;
        DAT_123bde6c = 0;
        DAT_123bde70 = 0;
        _DAT_123bde74 = 0;
        DAT_123bde78 = 0;
        DAT_123bde90 = DAT_123bde90 | 1;
        _DAT_123bde58 = &PTR_FUN_11dbde1c;
        DAT_123bde7c = _DAT_11de9ae0;
        DAT_123bde80 = _UNK_11de9ae4;
        uRam123bde84 = _UNK_11de9ae8;
        DAT_123bde88 = _UNK_11de9aec;
        DAT_123bde8c = 1;
        DAT_123bde60 = iVar3;
        _DAT_123bde64 = iVar3;
        _DAT_123bde68 = iVar3;
        FUN_11a8911f(&LAB_11cb11d0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CNpcSaleInfo__GetManagers_11720f30();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  CCommodityLibInfo__GetManagers_11722190();
  return;
}



