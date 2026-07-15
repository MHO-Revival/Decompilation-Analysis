// ===== class CStarLightStoneInfo  (3 recovered methods) =====

/* --- CStarLightStoneInfo::GetManagers @ 1098bad0 --- */
// [RE-AUTO c3]
// id: CStarLightStoneInfo::GetManagers
// strings:
//   ""CStarLightStoneInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CStarLightStoneInfo::GetManagers
   strings:
     ""CStarLightStoneInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CStarLightStoneInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c88c4 & 1) == 0) {
    DAT_123c88c4 = DAT_123c88c4 | 1;
    _DAT_123c88dc = &DAT_123c88cc;
    DAT_123c88e0 = &DAT_123c88cc;
    DAT_123c88cc = 0;
    FUN_100d83d0("CStarLightStoneInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7a890);
  }
  return DAT_123c88c8;
}



/* --- CStarLightStoneInfo::GetManagers_115a4e80 @ 115a4e80 --- */
// [RE-AUTO c3]
// id: CStarLightStoneInfo::GetManagers
// strings:
//   ""CStarLightStoneInfo::GetManagers""
//   ""CStarLightStoneInfo""

/* [RE-AUTO c3]
   id: CStarLightStoneInfo::GetManagers
   strings:
     ""CStarLightStoneInfo::GetManagers""
     ""CStarLightStoneInfo"" */

void __thiscall CStarLightStoneInfo__GetManagers_115a4e80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined **local_c;
  int local_8;
  
  iVar3 = CStarStoneSlotInfo__GetManagers_115a6180();
  iVar8 = 0;
  if (0 < iVar3) {
    piVar7 = (int *)(param_1 + 0x4c);
    local_8 = iVar3;
    do {
      if ((piVar7[-1] != 0) && (*piVar7 != 0)) {
        local_c = &PTR_FUN_11de0308;
        if ((DAT_123c88c4 & 1) == 0) {
          DAT_123c88c4 = DAT_123c88c4 | 1;
          FUN_102500e0("CStarLightStoneInfo::GetManagers");
          FUN_11a8911f(&LAB_11c7a890);
        }
        puVar4 = (undefined *)*DAT_123c88c8;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_c,"CStarLightStoneInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_123c8930 & 1) == 0) {
            DAT_123c8930 = DAT_123c8930 | 1;
            FUN_1098f920();
            FUN_11a8911f(&LAB_11ca3830);
          }
          puVar4 = &DAT_123c8934;
        }
        local_c = &PTR_FUN_11da54a8;
        iVar3 = local_8;
        if ((iVar8 != -2) &&
           ((((iVar8 != -1 || (*(int *)(puVar4 + 0x30) == 0)) &&
             (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)) &&
            ((iVar5 = (iVar8 - *(int *)(puVar4 + 0x30)) + 1, -1 < iVar5 &&
             (iVar5 < *(int *)(puVar4 + 0x24))))))) {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if ((iVar2 != 0) &&
             (((*(int *)(iVar2 + (iVar5 % iVar1) * 4) != 0 &&
               (piVar6 = (int *)FUN_117490d0(piVar7[-1]), iVar3 = local_8, piVar6 != (int *)0x0)) &&
              (*piVar6 == param_2)))) {
            (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x10) + 0x44))(0,piVar6[2],0,1,0x21);
            *piVar7 = *piVar7 + -1;
            iVar3 = local_8;
          }
        }
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 3;
    } while (iVar8 < iVar3);
  }
  return;
}



/* --- CStarLightStoneInfo::GetManagers_115a63c0 @ 115a63c0 --- */
// [RE-AUTO c3]
// id: CStarLightStoneInfo::GetManagers
// strings:
//   ""CStarLightStoneInfo::GetManagers""
//   ""CStarLightStoneInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CStarLightStoneInfo::GetManagers
   strings:
     ""CStarLightStoneInfo::GetManagers""
     ""CStarLightStoneInfo"" */

undefined4 CStarLightStoneInfo__GetManagers_115a63c0(int param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined **local_8;
  
  iVar1 = param_1;
  *param_2 = -1;
  iVar8 = 1;
  do {
    local_8 = &PTR_FUN_11de0308;
    if ((DAT_123c88c4 & 1) == 0) {
      DAT_123c88c4 = DAT_123c88c4 | 1;
      FUN_102500e0("CStarLightStoneInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7a890);
    }
    puVar2 = (undefined *)*DAT_123c88c8;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)FUN_11679e10(&local_8,"CStarLightStoneInfo",0);
      if (puVar2 == (undefined *)0x0) {
        if ((DAT_123c8930 & 1) == 0) {
          DAT_123c8938 = 0;
          DAT_123c8948 = 0;
          uRam123c894c = 0;
          _DAT_123c8950 = 0;
          DAT_123c8954 = 0;
          DAT_123c8930 = DAT_123c8930 | 1;
          _DAT_123c8934 = &PTR_FUN_11de0310;
          DAT_123c8958 = _DAT_11de9ae0;
          DAT_123c895c = _UNK_11de9ae4;
          uRam123c8960 = _UNK_11de9ae8;
          DAT_123c8964 = _UNK_11de9aec;
          DAT_123c8968 = 1;
          DAT_123c893c = puVar2;
          _DAT_123c8940 = puVar2;
          _DAT_123c8944 = puVar2;
          FUN_11a8911f(&LAB_11ca3830);
        }
        puVar2 = &DAT_123c8934;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((iVar8 != -1) &&
        (((iVar8 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
         (iVar5 = *(int *)(puVar2 + 0x28), iVar5 != 0)))) &&
       ((iVar3 = iVar8 - *(int *)(puVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar2 + 0x24)))))
    {
      iVar4 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar3 / iVar5) * 4);
      if ((iVar4 != 0) && (iVar5 = *(int *)(iVar4 + (iVar3 % iVar5) * 4), iVar5 != 0)) {
        iVar3 = iVar5 + 0x14;
        iVar4 = *(int *)(iVar5 + 0x18);
        iVar7 = iVar3;
        if (*(int *)(iVar5 + 0x18) != 0) {
          do {
            if (*(int *)(iVar4 + 0x10) < iVar1) {
              iVar5 = *(int *)(iVar4 + 0xc);
            }
            else {
              iVar5 = *(int *)(iVar4 + 8);
              iVar7 = iVar4;
            }
            iVar4 = iVar5;
          } while (iVar5 != 0);
          if (iVar7 == iVar3) goto LAB_115a6506;
          if (iVar1 < *(int *)(iVar7 + 0x10)) {
            iVar7 = iVar3;
          }
        }
        if (iVar7 != iVar3) {
          *param_2 = iVar8;
          uVar6 = FUN_115a3230(&param_1);
          return uVar6;
        }
      }
    }
LAB_115a6506:
    iVar8 = iVar8 + 1;
    if (4 < iVar8) {
      return 0;
    }
  } while( true );
}



