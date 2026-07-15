// ===== class CLevelEntrustNpcInfo  (3 recovered methods) =====

/* --- CLevelEntrustNpcInfo::GetManagers @ 104d81c0 --- */
// [RE-AUTO c3]
// id: CLevelEntrustNpcInfo::GetManagers
// strings:
//   ""CLevelEntrustNpcInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEntrustNpcInfo::GetManagers
   strings:
     ""CLevelEntrustNpcInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelEntrustNpcInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be264 & 1) == 0) {
    DAT_123be264 = DAT_123be264 | 1;
    _DAT_123be25c = &DAT_123be24c;
    DAT_123be260 = &DAT_123be24c;
    DAT_123be24c = 0;
    FUN_100d83d0("CLevelEntrustNpcInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6ea20);
  }
  return DAT_123be248;
}



/* --- CLevelEntrustNpcInfo::GetManagers_1173f7c0 @ 1173f7c0 --- */
// [RE-AUTO c3]
// id: CLevelEntrustNpcInfo::GetManagers
// calls: CLevelIDGroupInfo::GetManagers
// strings:
//   ""CLevelIDGroupInfo""
//   ""CLevelEntrustNpcInfo""
//   ""CLevelEntrustNpcInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelEntrustNpcInfo::GetManagers
   calls: CLevelIDGroupInfo::GetManagers
   strings:
     ""CLevelIDGroupInfo""
     ""CLevelEntrustNpcInfo""
     ""CLevelEntrustNpcInfo::GetManagers"" */

void __fastcall CLevelEntrustNpcInfo__GetManagers_1173f7c0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined **local_8;
  
  iVar7 = *(int *)(param_1 + 0x10);
  iVar3 = CLevelIDGroupInfo__GetManagers(0,"CLevelIDGroupInfo",0);
  if ((iVar7 != -1) &&
     ((((iVar7 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)) &&
      ((iVar7 = iVar7 - *(int *)(iVar3 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(iVar3 + 0x24)))))))
  {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar7 / iVar1) * 4);
    if ((iVar3 != 0) && (iVar7 = *(int *)(iVar3 + (iVar7 % iVar1) * 4), iVar7 != 0)) {
      FUN_10463d60(iVar7 + 0x14);
      FUN_1173e670(iVar7 + 0x20);
      iVar3 = 0;
      piVar4 = (int *)FUN_104ede40(0,"CLevelEntrustNpcInfo",0);
      iVar7 = (**(code **)(*piVar4 + 0x28))();
      if (0 < iVar7) {
        while( true ) {
          local_8 = &PTR_FUN_11dbddb8;
          if ((DAT_123be264 & 1) == 0) {
            DAT_123be264 = DAT_123be264 | 1;
            FUN_102500e0("CLevelEntrustNpcInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6ea20);
          }
          puVar5 = (undefined4 *)*DAT_123be248;
          if ((puVar5 == (undefined4 *)0x0) &&
             (puVar5 = (undefined4 *)FUN_11679e10(&local_8,"CLevelEntrustNpcInfo",0),
             puVar5 == (undefined4 *)0x0)) {
            if ((DAT_123be070 & 1) == 0) {
              DAT_123be070 = DAT_123be070 | 1;
              FUN_104efe70();
              FUN_11a8911f(&LAB_11ca9490);
            }
            puVar5 = &DAT_123be038;
          }
          local_8 = &PTR_FUN_11da54a8;
          if ((iVar3 < 0) || ((int)(puVar5[6] - puVar5[5]) >> 2 <= iVar3)) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = *(int **)(puVar5[5] + iVar3 * 4);
          }
          cVar2 = FUN_118a6520(*(undefined4 *)(param_1 + 0x10));
          if (cVar2 != '\0') break;
          iVar3 = iVar3 + 1;
          if (iVar7 <= iVar3) {
            FUN_117e74d0();
            return;
          }
        }
        uVar6 = (**(code **)(*piVar4 + 0x18))();
        *(undefined4 *)(param_1 + 0x98) = uVar6;
      }
      FUN_117e74d0();
    }
  }
  return;
}



/* --- CLevelEntrustNpcInfo::GetManagers_118f2f30 @ 118f2f30 --- */
// [RE-AUTO c3]
// id: CLevelEntrustNpcInfo::GetManagers
// strings:
//   ""CLevelEntrustNpcInfo::GetManagers""
//   ""CLevelEntrustNpcInfo""
//   ""CLevelEnSubGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CLevelEnSubGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEntrustNpcInfo::GetManagers
   strings:
     ""CLevelEntrustNpcInfo::GetManagers""
     ""CLevelEntrustNpcInfo""
     ""CLevelEnSubGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CLevelEnSubGroupInfo"" */

void CLevelEntrustNpcInfo__GetManagers_118f2f30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined **local_c;
  undefined **local_8;
  
  iVar4 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11dbddb8;
    if ((DAT_123be264 & 1) == 0) {
      DAT_123be264 = DAT_123be264 | 1;
      FUN_102500e0("CLevelEntrustNpcInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6ea20);
    }
    piVar1 = (int *)*DAT_123be248;
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)FUN_11679e10(&local_8,"CLevelEntrustNpcInfo",0), piVar1 == (int *)0x0)) {
      if ((DAT_123be070 & 1) == 0) {
        DAT_123be03c = 0;
        DAT_123be04c = 0;
        DAT_123be050 = 0;
        _DAT_123be054 = 0;
        DAT_123be058 = 0;
        DAT_123be070 = DAT_123be070 | 1;
        DAT_123be038 = &PTR_FUN_11dbe0c8;
        DAT_123be05c = _DAT_11de9ae0;
        DAT_123be060 = _UNK_11de9ae4;
        uRam123be064 = _UNK_11de9ae8;
        DAT_123be068 = _UNK_11de9aec;
        DAT_123be06c = 1;
        DAT_123be040 = piVar1;
        _DAT_123be044 = piVar1;
        _DAT_123be048 = piVar1;
        FUN_11a8911f(&LAB_11cb09f0);
      }
      piVar1 = (int *)&DAT_123be038;
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 <= iVar4) break;
    local_8 = &PTR_FUN_11dbddb8;
    if ((DAT_123be264 & 1) == 0) {
      DAT_123be264 = DAT_123be264 | 1;
      FUN_102500e0("CLevelEntrustNpcInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6ea20);
    }
    piVar1 = (int *)*DAT_123be248;
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)FUN_11679e10(&local_8,"CLevelEntrustNpcInfo",0), piVar1 == (int *)0x0)) {
      if ((DAT_123be070 & 1) == 0) {
        DAT_123be03c = 0;
        DAT_123be04c = 0;
        DAT_123be050 = 0;
        _DAT_123be054 = 0;
        DAT_123be058 = 0;
        DAT_123be070 = DAT_123be070 | 1;
        DAT_123be038 = &PTR_FUN_11dbe0c8;
        DAT_123be05c = _DAT_11de9ae0;
        DAT_123be060 = _UNK_11de9ae4;
        uRam123be064 = _UNK_11de9ae8;
        DAT_123be068 = _UNK_11de9aec;
        DAT_123be06c = 1;
        DAT_123be040 = piVar1;
        _DAT_123be044 = piVar1;
        _DAT_123be048 = piVar1;
        FUN_11a8911f(&LAB_11cb09f0);
      }
      piVar1 = (int *)&DAT_123be038;
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((iVar4 < 0) || (piVar1[6] - piVar1[5] >> 2 <= iVar4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[5] + iVar4 * 4);
    }
    uVar5 = 0;
    if (*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2 != 0) {
      do {
        local_c = &PTR_FUN_11dbddc8;
        if ((DAT_123be224 & 1) == 0) {
          DAT_123be224 = DAT_123be224 | 1;
          _DAT_123be240 = &DAT_123be230;
          DAT_123be244 = &DAT_123be230;
          DAT_123be230 = 0;
          FUN_100d9260("CLevelEnSubGroupInfo::GetManagers","");
          FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
          DAT_123be22c = (int *)FUN_100dfd90(DAT_123be244);
          if (DAT_123be22c == (int *)0x0) {
            DAT_123be22c = (int *)FUN_100dde50(4);
            *DAT_123be22c = 0;
            FUN_100dfdc0(DAT_123be244,DAT_123be22c);
          }
          FUN_11a8911f(&LAB_11c6ea50);
        }
        if (((*DAT_123be22c == 0) &&
            (iVar3 = FUN_11679e10(&local_c,"CLevelEnSubGroupInfo",0), iVar3 == 0)) &&
           ((DAT_123be0ac & 1) == 0)) {
          DAT_123be078 = 0;
          DAT_123be088 = 0;
          DAT_123be08c = 0;
          _DAT_123be090 = 0;
          DAT_123be094 = 0;
          DAT_123be0ac = DAT_123be0ac | 1;
          DAT_123be07c = 0;
          _DAT_123be080 = 0;
          _DAT_123be084 = 0;
          _DAT_123be074 = &PTR_FUN_11dbe07c;
          DAT_123be098 = _DAT_11de9ae0;
          DAT_123be09c = _UNK_11de9ae4;
          uRam123be0a0 = _UNK_11de9ae8;
          DAT_123be0a4 = _UNK_11de9aec;
          DAT_123be0a8 = 1;
          FUN_11a8911f(&LAB_11cb0990);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2));
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



