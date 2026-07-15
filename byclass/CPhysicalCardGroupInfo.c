// ===== class CPhysicalCardGroupInfo  (2 recovered methods) =====

/* --- CPhysicalCardGroupInfo::GetManagers @ 109c5ab0 --- */
// [RE-AUTO c3]
// id: CPhysicalCardGroupInfo::GetManagers
// strings:
//   ""CPhysicalCardGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPhysicalCardGroupInfo::GetManagers
   strings:
     ""CPhysicalCardGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CPhysicalCardGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c0748 & 1) == 0) {
    DAT_123c0748 = DAT_123c0748 | 1;
    _DAT_123c0760 = &DAT_123c0750;
    DAT_123c0764 = &DAT_123c0750;
    DAT_123c0750 = 0;
    FUN_100d83d0("CPhysicalCardGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7c260);
  }
  return DAT_123c074c;
}



/* --- CPhysicalCardGroupInfo::GetManagers_115374a0 @ 115374a0 --- */
// [RE-AUTO c3]
// id: CPhysicalCardGroupInfo::GetManagers
// strings:
//   ""CPhysicalCardGroupInfo::GetManagers""
//   ""CPhysicalCardGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPhysicalCardGroupInfo::GetManagers
   strings:
     ""CPhysicalCardGroupInfo::GetManagers""
     ""CPhysicalCardGroupInfo"" */

void __thiscall CPhysicalCardGroupInfo__GetManagers_115374a0(int param_1,undefined **param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_8;
  
  piVar3 = (int *)param_2;
  uVar8 = 0;
  local_8 = param_1;
  do {
    while( true ) {
      param_2 = &PTR_FUN_11de3564;
      if ((DAT_123c0748 & 1) == 0) {
        DAT_123c0748 = DAT_123c0748 | 1;
        FUN_102500e0("CPhysicalCardGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7c260);
      }
      piVar4 = (int *)*DAT_123c074c;
      if ((piVar4 == (int *)0x0) &&
         (piVar4 = (int *)FUN_11679e10(&param_2,"CPhysicalCardGroupInfo",0), piVar4 == (int *)0x0))
      {
        if ((DAT_123c06b4 & 1) == 0) {
          DAT_123c0680 = 0;
          DAT_123c0690 = 0;
          DAT_123c0694 = 0;
          _DAT_123c0698 = 0;
          DAT_123c069c = 0;
          DAT_123c06b4 = DAT_123c06b4 | 1;
          DAT_123c067c = &PTR_FUN_11de358c;
          DAT_123c06a0 = _DAT_11de9ae0;
          DAT_123c06a4 = _UNK_11de9ae4;
          uRam123c06a8 = _UNK_11de9ae8;
          DAT_123c06ac = _UNK_11de9aec;
          DAT_123c06b0 = 1;
          DAT_123c0684 = piVar4;
          _DAT_123c0688 = piVar4;
          _DAT_123c068c = piVar4;
          FUN_11a8911f(&LAB_11ca1450);
        }
        piVar4 = (int *)&DAT_123c067c;
      }
      param_2 = &PTR_FUN_11da54a8;
      uVar5 = (**(code **)(*piVar4 + 0x28))();
      if (uVar5 <= uVar8) {
        iVar1 = piVar3[1];
        iVar2 = *piVar3;
        if (iVar2 != iVar1) {
          iVar7 = 0;
          iVar9 = iVar1 - iVar2 >> 2;
          for (iVar6 = iVar9; iVar6 != 1; iVar6 = iVar6 >> 1) {
            iVar7 = iVar7 + 1;
          }
          FUN_11535a70(iVar2,iVar1,0,iVar7 * 2,FUN_11809c40);
          if (0x10 < iVar9) {
            FUN_115358e0(iVar2,iVar2 + 0x40,0,FUN_11809c40);
            FUN_11536330(iVar2 + 0x40,iVar1,0,FUN_11809c40);
            return;
          }
          FUN_115358e0(iVar2,iVar1,0,FUN_11809c40);
        }
        return;
      }
      param_2 = &PTR_FUN_11de3564;
      if ((DAT_123c0748 & 1) == 0) {
        DAT_123c0748 = DAT_123c0748 | 1;
        FUN_102500e0("CPhysicalCardGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7c260);
      }
      piVar4 = (int *)*DAT_123c074c;
      if ((piVar4 == (int *)0x0) &&
         (piVar4 = (int *)FUN_11679e10(&param_2,"CPhysicalCardGroupInfo",0), piVar4 == (int *)0x0))
      {
        if ((DAT_123c06b4 & 1) == 0) {
          DAT_123c0680 = 0;
          DAT_123c0690 = 0;
          DAT_123c0694 = 0;
          _DAT_123c0698 = 0;
          DAT_123c069c = 0;
          DAT_123c06b4 = DAT_123c06b4 | 1;
          DAT_123c067c = &PTR_FUN_11de358c;
          DAT_123c06a0 = _DAT_11de9ae0;
          DAT_123c06a4 = _UNK_11de9ae4;
          uRam123c06a8 = _UNK_11de9ae8;
          DAT_123c06ac = _UNK_11de9aec;
          DAT_123c06b0 = 1;
          DAT_123c0684 = piVar4;
          _DAT_123c0688 = piVar4;
          _DAT_123c068c = piVar4;
          FUN_11a8911f(&LAB_11ca1450);
        }
        piVar4 = (int *)&DAT_123c067c;
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((int)uVar8 < 0) || (piVar4[6] - piVar4[5] >> 2 <= (int)uVar8)) {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(piVar4[5] + uVar8 * 4);
      }
      if ((local_8 != 0) && (*(int *)(local_8 + 0x44) != 0)) break;
LAB_11537695:
      uVar8 = uVar8 + 1;
    }
    piVar4 = (int *)piVar3[1];
    if (piVar4 == (int *)piVar3[2]) {
      FUN_11537f90(piVar4,&local_8,(int)&param_2 + 3,1,1);
      goto LAB_11537695;
    }
    *piVar4 = local_8;
    piVar3[1] = piVar3[1] + 4;
    uVar8 = uVar8 + 1;
  } while( true );
}



