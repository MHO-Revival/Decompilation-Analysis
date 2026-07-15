// ===== class CVipCutOffInfo  (2 recovered methods) =====

/* --- CVipCutOffInfo::GetManagers @ 104d8e40 --- */
// [RE-AUTO c3]
// id: CVipCutOffInfo::GetManagers
// strings:
//   ""CVipCutOffInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CVipCutOffInfo::GetManagers
   strings:
     ""CVipCutOffInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CVipCutOffInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be164 & 1) == 0) {
    DAT_123be164 = DAT_123be164 | 1;
    _DAT_123be15c = &DAT_123be14c;
    DAT_123be160 = &DAT_123be14c;
    DAT_123be14c = 0;
    FUN_100d83d0("CVipCutOffInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6eba0);
  }
  return DAT_123be148;
}



/* --- CVipCutOffInfo::GetManagers_1159a060 @ 1159a060 --- */
// [RE-AUTO c3]
// id: CVipCutOffInfo::GetManagers
// strings:
//   ""CVipCutOffInfo::GetManagers""
//   ""CVipCutOffInfo""

/* [RE-AUTO c3]
   id: CVipCutOffInfo::GetManagers
   strings:
     ""CVipCutOffInfo::GetManagers""
     ""CVipCutOffInfo"" */

int CVipCutOffInfo__GetManagers_1159a060(undefined **param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar2 = param_1;
  iVar3 = FUN_1159a3c0(param_1);
  if (iVar3 == 0) {
    return 1;
  }
  iVar3 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11dbdd88;
    if ((DAT_123be164 & 1) == 0) {
      DAT_123be164 = DAT_123be164 | 1;
      FUN_102500e0("CVipCutOffInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6eba0);
    }
    piVar4 = (int *)*DAT_123be148;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_11679e10(&param_1,"CVipCutOffInfo",0);
      if (piVar4 == (int *)0x0) {
        if ((DAT_123bdecc & 1) == 0) {
          DAT_123bdecc = DAT_123bdecc | 1;
          FUN_104f0370();
          FUN_11a8911f(&LAB_11ca3580);
        }
        piVar4 = &DAT_123bde94;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar5 = (**(code **)(*piVar4 + 0x28))();
    if (iVar5 <= iVar3) break;
    param_1 = &PTR_FUN_11dbdd88;
    if ((DAT_123be164 & 1) == 0) {
      DAT_123be164 = DAT_123be164 | 1;
      FUN_102500e0("CVipCutOffInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6eba0);
    }
    puVar6 = (undefined4 *)*DAT_123be148;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)FUN_11679e10(&param_1,"CVipCutOffInfo",0);
      if (puVar6 == (undefined4 *)0x0) {
        if ((DAT_123bdecc & 1) == 0) {
          DAT_123bdecc = DAT_123bdecc | 1;
          FUN_104f0370();
          FUN_11a8911f(&LAB_11ca3580);
        }
        puVar6 = &DAT_123bde94;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if ((iVar3 != -1) &&
       ((((iVar3 != 0 || (puVar6[0xc] == 0)) && (iVar5 = puVar6[10], iVar5 != 0)) &&
        ((iVar7 = iVar3 - puVar6[0xc], -1 < iVar7 && (iVar7 < (int)puVar6[9])))))) {
      iVar1 = *(int *)(puVar6[8] + (iVar7 / iVar5) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar7 % iVar5) * 4) != 0)) {
        iVar5 = FUN_1174a3b0(uVar2);
        if ((iVar5 != 0) && (*(int *)(iVar5 + 4) != 0)) {
          return iVar3;
        }
      }
    }
    iVar3 = iVar3 + 1;
  }
  return 1;
}



