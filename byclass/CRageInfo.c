// ===== class CRageInfo  (2 recovered methods) =====

/* --- CRageInfo::GetManagers @ 107cd5c0 --- */
// [RE-AUTO c3]
// id: CRageInfo::GetManagers
// strings:
//   ""CRageInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CRageInfo::GetManagers
   strings:
     ""CRageInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CRageInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c734c & 1) == 0) {
    DAT_123c734c = DAT_123c734c | 1;
    _DAT_123c7364 = &DAT_123c7354;
    DAT_123c7368 = &DAT_123c7354;
    DAT_123c7354 = 0;
    FUN_100d83d0("CRageInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70780);
  }
  return DAT_123c7350;
}



/* --- CRageInfo::GetManagers_116603f0 @ 116603f0 --- */
// [RE-AUTO c3]
// id: CRageInfo::GetManagers
// strings:
//   ""CRageInfo::GetManagers""
//   ""CRageInfo""

/* [RE-AUTO c3]
   id: CRageInfo::GetManagers
   strings:
     ""CRageInfo::GetManagers""
     ""CRageInfo"" */

void __fastcall CRageInfo__GetManagers_116603f0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined **local_8;
  
  if ((((param_1[5] != 0) && (iVar9 = *(int *)(param_1[5] + 0x10), iVar9 != 0)) &&
      (iVar9 = *(int *)(iVar9 + 0x1c), iVar9 != 0)) && (*(int *)(iVar9 + 0x2af4) != 0)) {
    (**(code **)(**(int **)(iVar9 + 0x14) + 8))();
    piVar8 = (int *)param_1[0xb];
    while (piVar8 != param_1 + 9) {
      iVar9 = 0;
      while( true ) {
        local_8 = &PTR_FUN_11dc8598;
        if ((DAT_123c734c & 1) == 0) {
          DAT_123c734c = DAT_123c734c | 1;
          FUN_102500e0("CRageInfo::GetManagers");
          FUN_11a8911f(&LAB_11c70780);
        }
        piVar3 = (int *)*DAT_123c7350;
        if ((piVar3 == (int *)0x0) &&
           (piVar3 = (int *)FUN_11679e10(&local_8,"CRageInfo",0), piVar3 == (int *)0x0)) {
          if ((DAT_123c7374 & 1) == 0) {
            DAT_123c7374 = DAT_123c7374 | 1;
            FUN_107d5990();
            FUN_11a8911f(&LAB_11ca6a50);
          }
          piVar3 = &DAT_123c7378;
        }
        local_8 = &PTR_FUN_11da54a8;
        iVar4 = (**(code **)(*piVar3 + 0x28))();
        if (iVar4 <= iVar9) break;
        local_8 = &PTR_FUN_11dc8598;
        if ((DAT_123c734c & 1) == 0) {
          DAT_123c734c = DAT_123c734c | 1;
          FUN_102500e0("CRageInfo::GetManagers");
          FUN_11a8911f(&LAB_11c70780);
        }
        puVar5 = (undefined4 *)*DAT_123c7350;
        if ((puVar5 == (undefined4 *)0x0) &&
           (puVar5 = (undefined4 *)FUN_11679e10(&local_8,"CRageInfo",0), puVar5 == (undefined4 *)0x0
           )) {
          if ((DAT_123c7374 & 1) == 0) {
            DAT_123c7374 = DAT_123c7374 | 1;
            FUN_107d5990();
            FUN_11a8911f(&LAB_11ca6a50);
          }
          puVar5 = &DAT_123c7378;
        }
        local_8 = &PTR_FUN_11da54a8;
        if (((-1 < iVar9) && (iVar9 < (int)(puVar5[6] - puVar5[5]) >> 2)) &&
           (*(int *)(puVar5[5] + iVar9 * 4) != 0)) {
          iVar4 = piVar8[4];
          iVar6 = FUN_11719490();
          if (iVar6 == iVar4) {
            uVar7 = FUN_117194b0(iVar4);
            uVar7 = FUN_11518b30(uVar7);
            cVar2 = FUN_1141ca30(uVar7);
            if (cVar2 != '\0') {
              (**(code **)(*param_1 + 8))(1);
            }
          }
        }
        iVar9 = iVar9 + 1;
      }
      piVar3 = (int *)piVar8[3];
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)piVar8[1];
        if (piVar8 == (int *)piVar3[3]) {
          do {
            piVar8 = piVar3;
            piVar3 = (int *)piVar8[1];
          } while (piVar8 == (int *)piVar3[3]);
        }
        if ((int *)piVar8[3] != piVar3) {
          piVar8 = piVar3;
        }
      }
      else {
        for (piVar1 = (int *)piVar3[2]; piVar8 = piVar3, piVar1 != (int *)0x0;
            piVar1 = (int *)piVar1[2]) {
          piVar3 = piVar1;
        }
      }
    }
  }
  return;
}



