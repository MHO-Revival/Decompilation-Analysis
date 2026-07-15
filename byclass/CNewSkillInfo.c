// ===== class CNewSkillInfo  (4 recovered methods) =====

/* --- CNewSkillInfo::GetManagers @ 107cd450 --- */
// [RE-AUTO c3]
// id: CNewSkillInfo::GetManagers
// strings:
//   ""CNewSkillInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNewSkillInfo::GetManagers
   strings:
     ""CNewSkillInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CNewSkillInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bec6c & 1) == 0) {
    DAT_123bec6c = DAT_123bec6c | 1;
    _DAT_123bec44 = &DAT_123bec34;
    DAT_123bec48 = &DAT_123bec34;
    DAT_123bec34 = 0;
    FUN_100d83d0("CNewSkillInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70750);
  }
  return DAT_123bec30;
}



/* --- CNewSkillInfo::GetManagers_112b3700 @ 112b3700 --- */
// [RE-AUTO c3]
// id: CNewSkillInfo::GetManagers
// strings:
//   ""CNewSkillInfo::GetManagers""
//   ""CNewSkillInfo""

/* [RE-AUTO c3]
   id: CNewSkillInfo::GetManagers
   strings:
     ""CNewSkillInfo::GetManagers""
     ""CNewSkillInfo"" */

undefined4 __thiscall
CNewSkillInfo__GetManagers_112b3700(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 local_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  int local_44;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_10 = param_1;
  local_18 = FUN_11679c30();
  if (local_18 == 0) {
    return 0;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x14) + 8))();
  local_14 = FUN_1141cd60(param_2);
  uVar6 = 0;
  do {
    iVar3 = FUN_1169ebe0(param_2,uVar6);
    if (iVar3 != 0) {
      local_c = &PTR_FUN_11dc8590;
      if ((DAT_123bec6c & 1) == 0) {
        DAT_123bec6c = DAT_123bec6c | 1;
        FUN_102500e0("CNewSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70750);
      }
      puVar4 = (undefined4 *)*DAT_123bec30;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_c,"CNewSkillInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123be988 & 1) == 0) {
          DAT_123be988 = DAT_123be988 | 1;
          FUN_107d58f0();
          FUN_11a8911f(&LAB_11c99a70);
        }
        puVar4 = &DAT_123be9c4;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((((iVar3 == -1) || (iVar1 = puVar4[10], iVar1 == 0)) ||
          (iVar3 = iVar3 - puVar4[0xc], iVar3 < 0)) || ((int)puVar4[9] <= iVar3)) {
        return 0xd5;
      }
      iVar2 = *(int *)(puVar4[8] + (iVar3 / iVar1) * 4);
      if (iVar2 == 0) {
        return 0xd5;
      }
      iVar3 = *(int *)(iVar2 + (iVar3 % iVar1) * 4);
      if (iVar3 == 0) {
        return 0xd5;
      }
      FUN_112efbb0();
      local_60 = *(undefined4 *)(iVar3 + 0x10);
      local_5c = *(undefined4 *)(iVar3 + 0x14);
      local_58 = *(undefined4 *)(iVar3 + 0x54);
      local_54 = param_2;
      local_44 = *(int *)(iVar3 + 0x44) + 1;
      local_4c = *(undefined4 *)(iVar3 + 0x48);
      puVar5 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar3 + 0x88) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(iVar3 + 0x88);
      }
      FUN_100e5d80(puVar5);
      FUN_100e5d80(*(undefined4 *)(iVar3 + 0xa0));
      puVar5 = &DAT_11d9d32b;
      if (*(undefined1 **)(iVar3 + 0xa4) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(iVar3 + 0xa4);
      }
      FUN_100e5d80(puVar5);
      (**(code **)(**(int **)(*(int *)(local_10 + 8) + 0x14) + 8))(param_2,uVar6);
      iVar3 = FUN_1141c9e0();
      if (iVar3 == 0) {
        local_1c = (uint)(local_14 == uVar6);
      }
      else {
        local_1c = 2;
      }
      iVar3 = *(int *)(param_3 + 0x14);
      if (iVar3 == *(int *)(param_3 + 0x18)) {
        FUN_112b51b0(iVar3,local_64,&local_5,1,1);
      }
      else {
        if (iVar3 != 0) {
          FUN_112b2a10(local_64);
        }
        *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 0x4c;
      }
      FUN_112f00a0();
    }
    uVar6 = uVar6 + 1;
    if (2 < uVar6) {
      return 0;
    }
  } while( true );
}



/* --- CNewSkillInfo::GetManagers_1141e110 @ 1141e110 --- */
// [RE-AUTO c3]
// id: CNewSkillInfo::GetManagers
// strings:
//   ""CNewSkillInfo::GetManagers""
//   ""CNewSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNewSkillInfo::GetManagers
   strings:
     ""CNewSkillInfo::GetManagers""
     ""CNewSkillInfo"" */

void __thiscall
CNewSkillInfo__GetManagers_1141e110(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined **local_c;
  int local_8;
  
  iVar4 = FUN_11679c30();
  if (iVar4 != 0) {
    local_8 = 1;
    do {
      iVar8 = 0;
      iVar4 = local_8;
      while( true ) {
        piVar7 = *(int **)(*param_1 + 4);
        iVar5 = (**(code **)(*piVar7 + 0xa8))();
        if (iVar5 == 0) {
          piVar7 = (int *)piVar7[0xabd];
          if (piVar7 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (**(code **)(*piVar7 + 0x10))(iVar4);
          }
        }
        else {
          iVar5 = 0;
        }
        if (iVar5 == 0) {
          iVar5 = 3;
        }
        else if (iVar5 == 1) {
          iVar5 = 2;
        }
        else {
          iVar5 = 0;
        }
        if (iVar5 <= iVar8) break;
        iVar5 = FUN_1169ebe0(iVar4,iVar8);
        if (iVar5 != 0) {
          local_c = &PTR_FUN_11dc8590;
          if ((DAT_123bec6c & 1) == 0) {
            DAT_123bec6c = DAT_123bec6c | 1;
            FUN_102500e0("CNewSkillInfo::GetManagers");
            FUN_11a8911f(&LAB_11c70750);
          }
          puVar6 = (undefined4 *)*DAT_123bec30;
          if ((puVar6 == (undefined4 *)0x0) &&
             (puVar6 = (undefined4 *)FUN_11679e10(&local_c,"CNewSkillInfo",0),
             puVar6 == (undefined4 *)0x0)) {
            if ((DAT_123be988 & 1) == 0) {
              DAT_123be9c8 = 0;
              DAT_123be9d8 = 0;
              DAT_123be9dc = 0;
              _DAT_123be9e0 = 0;
              DAT_123be9e4 = 0;
              DAT_123be988 = DAT_123be988 | 1;
              DAT_123be9c4 = &PTR_FUN_11dc8668;
              DAT_123be9e8 = _DAT_11de9ae0;
              DAT_123be9ec = _UNK_11de9ae4;
              uRam123be9f0 = _UNK_11de9ae8;
              DAT_123be9f4 = _UNK_11de9aec;
              DAT_123be9f8 = 1;
              DAT_123be9cc = puVar6;
              _DAT_123be9d0 = puVar6;
              _DAT_123be9d4 = puVar6;
              FUN_11a8911f(&LAB_11c9cb60);
            }
            puVar6 = &DAT_123be9c4;
          }
          local_c = &PTR_FUN_11da54a8;
          if ((((iVar5 != -1) && (iVar1 = puVar6[10], iVar4 = local_8, iVar1 != 0)) &&
              (iVar5 = iVar5 - puVar6[0xc], -1 < iVar5)) && (iVar5 < (int)puVar6[9])) {
            iVar2 = *(int *)(puVar6[8] + (iVar5 / iVar1) * 4);
            if (((iVar2 != 0) && (iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0)) &&
               (cVar3 = FUN_1141dbb0(iVar5,param_2,param_3), iVar4 = local_8, cVar3 != '\0')) {
              piVar7 = (int *)(**(code **)(*(int *)*param_1 + 4))();
              (**(code **)(*piVar7 + 0x1c))
                        (*(undefined4 *)(iVar5 + 0x40),*(undefined4 *)(iVar5 + 0x14));
              piVar7 = (int *)(**(code **)(*(int *)*param_1 + 4))();
              (**(code **)(*piVar7 + 0x24))();
              return;
            }
          }
        }
        iVar8 = iVar8 + 1;
      }
      local_8 = iVar4 + 1;
    } while (local_8 < 0xd);
  }
  return;
}



/* --- CNewSkillInfo::GetManagers_118d8b60 @ 118d8b60 --- */
// [RE-AUTO c3]
// id: CNewSkillInfo::GetManagers
// strings:
//   ""CNewSkillInfo::GetManagers""
//   ""CNewSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNewSkillInfo::GetManagers
   strings:
     ""CNewSkillInfo::GetManagers""
     ""CNewSkillInfo"" */

void CNewSkillInfo__GetManagers_118d8b60(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  FUN_11744050();
  FUN_11744050();
  local_8 = &PTR_FUN_11dc8590;
  if ((DAT_123bec6c & 1) == 0) {
    DAT_123bec6c = DAT_123bec6c | 1;
    FUN_102500e0("CNewSkillInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70750);
  }
  piVar2 = (int *)*DAT_123bec30;
  if ((piVar2 == (int *)0x0) &&
     (piVar2 = (int *)FUN_11679e10(&local_8,"CNewSkillInfo",0), piVar2 == (int *)0x0)) {
    if ((DAT_123be988 & 1) == 0) {
      DAT_123be9c8 = 0;
      DAT_123be9d8 = 0;
      DAT_123be9dc = 0;
      _DAT_123be9e0 = 0;
      DAT_123be9e4 = 0;
      DAT_123be988 = DAT_123be988 | 1;
      DAT_123be9c4 = &PTR_FUN_11dc8668;
      DAT_123be9e8 = _DAT_11de9ae0;
      DAT_123be9ec = _UNK_11de9ae4;
      uRam123be9f0 = _UNK_11de9ae8;
      DAT_123be9f4 = _UNK_11de9aec;
      DAT_123be9f8 = 1;
      DAT_123be9cc = piVar2;
      _DAT_123be9d0 = piVar2;
      _DAT_123be9d4 = piVar2;
      FUN_11a8911f(&LAB_11cb0180);
    }
    piVar2 = (int *)&DAT_123be9c4;
  }
  local_8 = &PTR_FUN_11da54a8;
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dc8590;
      if ((DAT_123bec6c & 1) == 0) {
        DAT_123bec6c = DAT_123bec6c | 1;
        FUN_102500e0("CNewSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70750);
      }
      piVar2 = (int *)*DAT_123bec30;
      if ((piVar2 == (int *)0x0) &&
         (piVar2 = (int *)FUN_11679e10(&param_1,"CNewSkillInfo",0), piVar2 == (int *)0x0)) {
        if ((DAT_123be988 & 1) == 0) {
          DAT_123be9c8 = 0;
          DAT_123be9d8 = 0;
          DAT_123be9dc = 0;
          _DAT_123be9e0 = 0;
          DAT_123be9e4 = 0;
          DAT_123be988 = DAT_123be988 | 1;
          DAT_123be9c4 = &PTR_FUN_11dc8668;
          DAT_123be9e8 = _DAT_11de9ae0;
          DAT_123be9ec = _UNK_11de9ae4;
          uRam123be9f0 = _UNK_11de9ae8;
          DAT_123be9f4 = _UNK_11de9aec;
          DAT_123be9f8 = 1;
          DAT_123be9cc = piVar2;
          _DAT_123be9d0 = piVar2;
          _DAT_123be9d4 = piVar2;
          FUN_11a8911f(&LAB_11cb0180);
        }
        piVar2 = (int *)&DAT_123be9c4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
         (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
        FUN_1182dcd0(uVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}



