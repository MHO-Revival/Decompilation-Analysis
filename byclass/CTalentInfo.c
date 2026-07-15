// ===== class CTalentInfo  (3 recovered methods) =====

/* --- CTalentInfo::GetManagers @ 10876500 --- */
// [RE-AUTO c3]
// id: CTalentInfo::GetManagers
// strings:
//   ""CTalentInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTalentInfo::GetManagers
   strings:
     ""CTalentInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTalentInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c77a0 & 1) == 0) {
    DAT_123c77a0 = DAT_123c77a0 | 1;
    _DAT_123c77b8 = &DAT_123c77a8;
    DAT_123c77bc = &DAT_123c77a8;
    DAT_123c77a8 = 0;
    FUN_100d83d0("CTalentInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c73c30);
  }
  return DAT_123c77a4;
}



/* --- CTalentInfo::GetManagers_1141cb40 @ 1141cb40 --- */
// [RE-AUTO c3]
// id: CTalentInfo::GetManagers
// strings:
//   ""CTalentInfo""
//   ""CTalentInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTalentInfo::GetManagers
   strings:
     ""CTalentInfo""
     ""CTalentInfo::GetManagers"" */

void __fastcall CTalentInfo__GetManagers_1141cb40(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined2 *local_18;
  undefined **local_8;
  
  FUN_100e49c0();
  *local_18 = 0xb12;
  piVar1 = (int *)FUN_1087e7d0(0,"CTalentInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar8 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd260c;
      if ((DAT_123c77a0 & 1) == 0) {
        DAT_123c77a0 = DAT_123c77a0 | 1;
        FUN_102500e0("CTalentInfo::GetManagers");
        FUN_11a8911f(&LAB_11c73c30);
      }
      puVar3 = (undefined4 *)*DAT_123c77a4;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CTalentInfo",0), puVar3 == (undefined4 *)0x0
         )) {
        if ((DAT_123c77f0 & 1) == 0) {
          DAT_123c77f8 = 0;
          DAT_123c7808 = 0;
          DAT_123c780c = 0;
          _DAT_123c7810 = 0;
          DAT_123c7814 = 0;
          DAT_123c77f0 = DAT_123c77f0 | 1;
          DAT_123c77fc = 0;
          _DAT_123c7800 = 0;
          _DAT_123c7804 = 0;
          DAT_123c77f4 = &PTR_FUN_11dd2670;
          DAT_123c7818 = _DAT_11de9ae0;
          DAT_123c781c = _UNK_11de9ae4;
          uRam123c7820 = _UNK_11de9ae8;
          DAT_123c7824 = _UNK_11de9aec;
          DAT_123c7828 = 1;
          FUN_11a8911f(&LAB_11c9cc20);
        }
        puVar3 = &DAT_123c77f4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar8) && (iVar8 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
         (piVar1 = *(int **)(puVar3[5] + iVar8 * 4), piVar1 != (int *)0x0)) {
        uVar4 = (**(code **)(*piVar1 + 0x18))();
        iVar5 = FUN_1141d640(uVar4);
        if (iVar5 == 0) {
          uVar4 = (**(code **)(*piVar1 + 0x18))();
          *(undefined4 *)(local_18 + 8) = uVar4;
          *(undefined4 *)(local_18 + 10) = 0;
          iVar5 = (**(code **)(**(int **)(*param_1 + 4) + 0xa8))();
          if (iVar5 == 0) {
            piVar1 = *(int **)(*param_1 + 4);
            iVar5 = (**(code **)(*piVar1 + 0xa8))();
            piVar6 = (int *)0x0;
            if (iVar5 == 0) {
              piVar6 = piVar1;
            }
            if (piVar6[3] != 0) {
              piVar1 = *(int **)(*param_1 + 4);
              iVar5 = (**(code **)(*piVar1 + 0xa8))();
              piVar6 = (int *)0x0;
              if (iVar5 == 0) {
                piVar6 = piVar1;
              }
              piVar1 = (int *)piVar6[3];
              piVar6 = *(int **)(*param_1 + 4);
              iVar5 = (**(code **)(*piVar6 + 0xa8))();
              piVar7 = (int *)0x0;
              if (iVar5 == 0) {
                piVar7 = piVar6;
              }
              (**(code **)(*piVar1 + 0x24))(local_18,piVar7[1]);
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  FUN_100e4a80();
  return;
}



/* --- CTalentInfo::GetManagers_118d8260 @ 118d8260 --- */
// [RE-AUTO c3]
// id: CTalentInfo::GetManagers
// calls: CItemBaseInfo::GetManagers_117436f0
// strings:
//   ""CTalentInfo""
//   ""CTalentInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTalentInfo::GetManagers
   calls: CItemBaseInfo::GetManagers_117436f0
   strings:
     ""CTalentInfo""
     ""CTalentInfo::GetManagers"" */

void CTalentInfo__GetManagers_118d8260(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_1087e7d0(0,"CTalentInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd260c;
      if ((DAT_123c77a0 & 1) == 0) {
        DAT_123c77a0 = DAT_123c77a0 | 1;
        FUN_102500e0("CTalentInfo::GetManagers");
        FUN_11a8911f(&LAB_11c73c30);
      }
      puVar4 = (undefined4 *)*DAT_123c77a4;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CTalentInfo",0), puVar4 == (undefined4 *)0x0
         )) {
        if ((DAT_123c77f0 & 1) == 0) {
          DAT_123c77f8 = 0;
          DAT_123c7808 = 0;
          DAT_123c780c = 0;
          _DAT_123c7810 = 0;
          DAT_123c7814 = 0;
          DAT_123c77f0 = DAT_123c77f0 | 1;
          DAT_123c77f4 = &PTR_FUN_11dd2670;
          DAT_123c7818 = _DAT_11de9ae0;
          DAT_123c781c = _UNK_11de9ae4;
          uRam123c7820 = _UNK_11de9ae8;
          DAT_123c7824 = _UNK_11de9aec;
          DAT_123c7828 = 1;
          DAT_123c77fc = puVar4;
          _DAT_123c7800 = puVar4;
          _DAT_123c7804 = puVar4;
          FUN_11a8911f(&LAB_11cb0120);
        }
        puVar4 = &DAT_123c77f4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        CItemBaseInfo__GetManagers_117436f0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



