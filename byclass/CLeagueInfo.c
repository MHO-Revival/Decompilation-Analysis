// ===== class CLeagueInfo  (5 recovered methods) =====

/* --- CLeagueInfo::GetManagers @ 104d9210 --- */
// [RE-AUTO c3]
// id: CLeagueInfo::GetManagers
// strings:
//   ""CLeagueInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueInfo::GetManagers
   strings:
     ""CLeagueInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLeagueInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be124 & 1) == 0) {
    DAT_123be124 = DAT_123be124 | 1;
    _DAT_123be11c = &DAT_123be10c;
    DAT_123be120 = &DAT_123be10c;
    DAT_123be10c = 0;
    FUN_100d83d0("CLeagueInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6ec00);
  }
  return DAT_123be108;
}



/* --- CLeagueInfo::GetManagers_112fcec0 @ 112fcec0 --- */
// [RE-AUTO c3]
// id: CLeagueInfo::GetManagers
// strings:
//   ""CLeagueInfo""
//   ""CLeagueInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueInfo::GetManagers
   strings:
     ""CLeagueInfo""
     ""CLeagueInfo::GetManagers"" */

void CLeagueInfo__GetManagers_112fcec0(undefined **param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8;
  
  piVar4 = (int *)FUN_104eec00(0,"CLeagueInfo",0);
  local_8 = (**(code **)(*piVar4 + 0x28))();
  iVar2 = (int)param_1;
  iVar6 = 0;
  if (0 < local_8) {
    do {
      param_1 = &PTR_FUN_11dbdd78;
      if ((DAT_123be124 & 1) == 0) {
        DAT_123be124 = DAT_123be124 | 1;
        FUN_102500e0("CLeagueInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ec00);
      }
      puVar5 = (undefined4 *)*DAT_123be108;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&param_1,"CLeagueInfo",0), puVar5 == (undefined4 *)0x0
         )) {
        if ((DAT_123bde54 & 1) == 0) {
          DAT_123bde20 = 0;
          DAT_123bde30 = 0;
          DAT_123bde34 = 0;
          _DAT_123bde38 = 0;
          DAT_123bde3c = 0;
          DAT_123bde54 = DAT_123bde54 | 1;
          DAT_123bde24 = 0;
          _DAT_123bde28 = 0;
          _DAT_123bde2c = 0;
          DAT_123bde1c = &PTR_FUN_11dbddd0;
          DAT_123bde40 = _DAT_11de9ae0;
          DAT_123bde44 = _UNK_11de9ae4;
          uRam123bde48 = _UNK_11de9ae8;
          DAT_123bde4c = _UNK_11de9aec;
          DAT_123bde50 = 1;
          FUN_11a8911f(&LAB_11c9a8f0);
        }
        puVar5 = &DAT_123bde1c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar6) && (iVar6 < (int)(puVar5[6] - puVar5[5]) >> 2)) &&
         (iVar1 = *(int *)(puVar5[5] + iVar6 * 4), iVar1 != 0)) {
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        FUN_100e5570();
        FUN_100e5570();
        cVar3 = FUN_112fccf0(iVar1,&local_20);
        if (cVar3 != '\0') {
          puVar5 = *(undefined4 **)(iVar2 + 4);
          if (puVar5 == *(undefined4 **)(iVar2 + 8)) {
            FUN_112fe370(puVar5,&local_20,(int)&param_1 + 3,1,1);
          }
          else {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = local_20;
              puVar5[1] = local_1c;
              puVar5[2] = local_18;
              puVar5[3] = local_14;
              FUN_100e5580(local_10);
              FUN_100e5580(local_c);
            }
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 0x18;
          }
        }
        FUN_100e5670();
        FUN_100e5670();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_8);
  }
  return;
}



/* --- CLeagueInfo::GetManagers_112fd290 @ 112fd290 --- */
// [RE-AUTO c3]
// id: CLeagueInfo::GetManagers
// strings:
//   ""CLeagueInfo""
//   ""CLeagueInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueInfo::GetManagers
   strings:
     ""CLeagueInfo""
     ""CLeagueInfo::GetManagers"" */

void CLeagueInfo__GetManagers_112fd290(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  undefined **local_8;
  
  piVar3 = (int *)FUN_104eec00(0,"CLeagueInfo",0);
  local_10 = (**(code **)(*piVar3 + 0x28))();
  iVar1 = param_1;
  iVar5 = 0;
  if (0 < local_10) {
    do {
      local_8 = &PTR_FUN_11dbdd78;
      if ((DAT_123be124 & 1) == 0) {
        DAT_123be124 = DAT_123be124 | 1;
        FUN_102500e0("CLeagueInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ec00);
      }
      puVar4 = (undefined4 *)*DAT_123be108;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_8,"CLeagueInfo",0), puVar4 == (undefined4 *)0x0
         )) {
        if ((DAT_123bde54 & 1) == 0) {
          DAT_123bde20 = 0;
          DAT_123bde30 = 0;
          DAT_123bde34 = 0;
          _DAT_123bde38 = 0;
          DAT_123bde3c = 0;
          DAT_123bde54 = DAT_123bde54 | 1;
          DAT_123bde1c = &PTR_FUN_11dbddd0;
          DAT_123bde40 = _DAT_11de9ae0;
          DAT_123bde44 = _UNK_11de9ae4;
          uRam123bde48 = _UNK_11de9ae8;
          DAT_123bde4c = _UNK_11de9aec;
          DAT_123bde50 = 1;
          DAT_123bde24 = puVar4;
          _DAT_123bde28 = puVar4;
          _DAT_123bde2c = puVar4;
          FUN_11a8911f(&LAB_11c9a8f0);
        }
        puVar4 = &DAT_123bde1c;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (local_c = *(int *)(puVar4[5] + iVar5 * 4), local_c != 0)) {
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        FUN_100e5570();
        FUN_100e5570();
        cVar2 = FUN_112fd0d0(local_c,&local_28);
        if (cVar2 != '\0') {
          puVar4 = *(undefined4 **)(iVar1 + 4);
          if (puVar4 == *(undefined4 **)(iVar1 + 8)) {
            FUN_112fe370(puVar4,&local_28,(int)&param_1 + 3,1,1);
          }
          else {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = local_28;
              puVar4[1] = local_24;
              puVar4[2] = local_20;
              puVar4[3] = local_1c;
              FUN_100e5580(local_18);
              FUN_100e5580(local_14);
            }
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x18;
          }
        }
        cVar2 = FUN_112fccf0(local_c,&local_28);
        if (cVar2 != '\0') {
          puVar4 = *(undefined4 **)(iVar1 + 4);
          if (puVar4 == *(undefined4 **)(iVar1 + 8)) {
            FUN_112fe370(puVar4,&local_28,(int)&param_1 + 3,1,1);
          }
          else {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = local_28;
              puVar4[1] = local_24;
              puVar4[2] = local_20;
              puVar4[3] = local_1c;
              FUN_100e5580(local_18);
              FUN_100e5580(local_14);
            }
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 0x18;
          }
        }
        FUN_100e5670();
        FUN_100e5670();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_10);
  }
  return;
}



/* --- CLeagueInfo::GetManagers_115b77c0 @ 115b77c0 --- */
// [RE-AUTO c3]
// id: CLeagueInfo::GetManagers
// strings:
//   ""CLeagueInfo::GetManagers""
//   ""CLeagueInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueInfo::GetManagers
   strings:
     ""CLeagueInfo::GetManagers""
     ""CLeagueInfo"" */

void __thiscall CLeagueInfo__GetManagers_115b77c0(int *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined **local_3c;
  undefined1 local_38 [48];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_3c = &PTR_FUN_11dbdd78;
  if ((DAT_123be124 & 1) == 0) {
    DAT_123be124 = DAT_123be124 | 1;
    FUN_102500e0("CLeagueInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6ec00);
  }
  puVar2 = (undefined4 *)*DAT_123be108;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_11679e10(&local_3c,"CLeagueInfo",0);
    if (puVar2 == (undefined4 *)0x0) {
      if ((DAT_123bde54 & 1) == 0) {
        DAT_123bde20 = 0;
        DAT_123bde30 = 0;
        DAT_123bde34 = 0;
        _DAT_123bde38 = 0;
        DAT_123bde3c = 0;
        DAT_123bde54 = DAT_123bde54 | 1;
        DAT_123bde1c = &PTR_FUN_11dbddd0;
        DAT_123bde40 = _DAT_11de9ae0;
        DAT_123bde44 = _UNK_11de9ae4;
        uRam123bde48 = _UNK_11de9ae8;
        DAT_123bde4c = _UNK_11de9aec;
        DAT_123bde50 = 1;
        DAT_123bde24 = puVar2;
        _DAT_123bde28 = puVar2;
        _DAT_123bde2c = puVar2;
        FUN_11a8911f(&LAB_11ca3bc0);
      }
      puVar2 = &DAT_123bde1c;
    }
  }
  local_3c = &PTR_FUN_11da54a8;
  iVar4 = puVar2[10];
  if (((iVar4 == 0) || (iVar3 = 4 - puVar2[0xc], iVar3 < 0)) || ((int)puVar2[9] <= iVar3)) {
LAB_115b795b:
    if (param_2 == '\0') goto LAB_115b7968;
  }
  else {
    iVar1 = *(int *)(puVar2[8] + (iVar3 / iVar4) * 4);
    if ((iVar1 == 0) || (*(int *)(iVar1 + (iVar3 % iVar4) * 4) == 0)) goto LAB_115b795b;
    FUN_10a19f00(local_38);
    iVar4 = FUN_11842650(local_38);
    if ((iVar4 == 0) || (param_1[2] == *(int *)(iVar4 + 0x18))) goto LAB_115b795b;
    param_1[2] = *(int *)(iVar4 + 0x18);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    local_3c = (undefined **)0x5dc;
    FUN_1138c790(&local_3c,0,0);
  }
  (**(code **)(*param_1 + 4))();
LAB_115b7968:
  FUN_11a89daa();
  return;
}



/* --- CLeagueInfo::GetManagers_119a1290 @ 119a1290 --- */
// [RE-AUTO c3]
// id: CLeagueInfo::GetManagers
// calls: CLeagueSchedule::GetManagers_11842f20
// strings:
//   ""CLeagueInfo""
//   ""CLeagueInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLeagueInfo::GetManagers
   calls: CLeagueSchedule::GetManagers_11842f20
   strings:
     ""CLeagueInfo""
     ""CLeagueInfo::GetManagers"" */

void CLeagueInfo__GetManagers_119a1290(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_104eec00(0,"CLeagueInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dbdd78;
      if ((DAT_123be124 & 1) == 0) {
        DAT_123be124 = DAT_123be124 | 1;
        FUN_102500e0("CLeagueInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ec00);
      }
      puVar4 = (undefined4 *)*DAT_123be108;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CLeagueInfo",0), puVar4 == (undefined4 *)0x0
         )) {
        if ((DAT_123bde54 & 1) == 0) {
          DAT_123bde20 = 0;
          DAT_123bde30 = 0;
          DAT_123bde34 = 0;
          _DAT_123bde38 = 0;
          DAT_123bde3c = 0;
          DAT_123bde54 = DAT_123bde54 | 1;
          DAT_123bde1c = &PTR_FUN_11dbddd0;
          DAT_123bde40 = _DAT_11de9ae0;
          DAT_123bde44 = _UNK_11de9ae4;
          uRam123bde48 = _UNK_11de9ae8;
          DAT_123bde4c = _UNK_11de9aec;
          DAT_123bde50 = 1;
          DAT_123bde24 = puVar4;
          _DAT_123bde28 = puVar4;
          _DAT_123bde2c = puVar4;
          FUN_11a8911f(&LAB_11cb3d80);
        }
        puVar4 = &DAT_123bde1c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        CLeagueSchedule__GetManagers_11842f20(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



