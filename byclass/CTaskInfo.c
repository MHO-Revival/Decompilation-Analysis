// ===== class CTaskInfo  (17 recovered methods) =====

/* --- CTaskInfo::GetManagers @ 104d8c80 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CTaskInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be168 & 1) == 0) {
    DAT_123be168 = DAT_123be168 | 1;
    _DAT_123be180 = &DAT_123be170;
    DAT_123be184 = &DAT_123be170;
    DAT_123be170 = 0;
    FUN_100d83d0("CTaskInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6eb70);
  }
  return DAT_123be16c;
}



/* --- CTaskInfo::GetManagers_111eda20 @ 111eda20 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// calls: CTaskLibInfo::GetManagers
// strings:
//   ""CTaskLibInfo""
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""

/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   calls: CTaskLibInfo::GetManagers
   strings:
     ""CTaskLibInfo""
     ""CTaskInfo::GetManagers""
     ""CTaskInfo"" */

void __thiscall
CTaskInfo__GetManagers_111eda20
          (int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
          undefined **param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  
  iVar2 = CTaskLibInfo__GetManagers(0,"CTaskLibInfo",0);
  if (((param_3 != -1) &&
      (((param_3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)))) &&
     ((iVar3 = param_3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar3 % iVar1) * 4) != 0)) {
      iVar2 = FUN_114ec720(param_3);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0x1c);
      }
      FUN_114e49e0(param_2,param_5,param_6);
      FUN_114e48e0();
      piVar5 = (int *)*param_4;
      if (piVar5 != (int *)param_4[1]) {
        do {
          iVar2 = *piVar5;
          param_6 = &PTR_FUN_11dbdda0;
          if ((DAT_123be168 & 1) == 0) {
            DAT_123be168 = DAT_123be168 | 1;
            FUN_102500e0("CTaskInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6eb70);
          }
          puVar4 = (undefined *)*DAT_123be16c;
          if ((puVar4 == (undefined *)0x0) &&
             (puVar4 = (undefined *)FUN_11679e10(&param_6,"CTaskInfo",0), puVar4 == (undefined *)0x0
             )) {
            if ((DAT_123bdf44 & 1) == 0) {
              DAT_123bdf44 = DAT_123bdf44 | 1;
              FUN_104f0310();
              FUN_11a8911f(&LAB_11c97570);
            }
            puVar4 = &DAT_123bdf0c;
          }
          param_6 = &PTR_FUN_11da54a8;
          if ((iVar2 != -1) &&
             ((((iVar2 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
               (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)) &&
              ((iVar2 = iVar2 - *(int *)(puVar4 + 0x30), -1 < iVar2 &&
               (iVar2 < *(int *)(puVar4 + 0x24))))))) {
            iVar3 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar2 / iVar1) * 4);
            if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + (iVar2 % iVar1) * 4), iVar2 != 0)) {
              FUN_114e4860(iVar2);
            }
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 != (int *)param_4[1]);
      }
      (**(code **)(**(int **)(param_1 + 0x78) + 0x3c))(param_3);
    }
  }
  return;
}



/* --- CTaskInfo::GetManagers_111edca0 @ 111edca0 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo::GetManagers""
     ""CTaskInfo"" */

void __thiscall
CTaskInfo__GetManagers_111edca0
          (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_1c [8];
  int local_14;
  int local_10;
  undefined **local_c;
  int local_8;
  
  local_8 = param_1;
  FUN_111eee60();
  FUN_10a14650();
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  piVar6 = (int *)*param_2;
  if (piVar6 != (int *)param_2[1]) {
    do {
      iVar1 = *piVar6;
      local_c = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar4 = (undefined *)*DAT_123be16c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CTaskInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123bdf44 & 1) == 0) {
          DAT_123bdf10 = 0;
          DAT_123bdf20 = 0;
          DAT_123bdf24 = 0;
          _DAT_123bdf28 = 0;
          DAT_123bdf2c = 0;
          DAT_123bdf44 = DAT_123bdf44 | 1;
          _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
          DAT_123bdf30 = _DAT_11de9ae0;
          DAT_123bdf34 = _UNK_11de9ae4;
          uRam123bdf38 = _UNK_11de9ae8;
          DAT_123bdf3c = _UNK_11de9aec;
          DAT_123bdf40 = 1;
          DAT_123bdf14 = puVar4;
          _DAT_123bdf18 = puVar4;
          _DAT_123bdf1c = puVar4;
          FUN_11a8911f(&LAB_11c97570);
        }
        puVar4 = &DAT_123bdf0c;
      }
      param_1 = local_8;
      local_c = &PTR_FUN_11da54a8;
      if (((iVar1 != -1) &&
          (((iVar1 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar2 = *(int *)(puVar4 + 0x28), iVar2 != 0)))) &&
         ((iVar5 = iVar1 - *(int *)(puVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar3 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar2) * 4);
        if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + (iVar5 % iVar2) * 4), iVar2 != 0)) {
          local_14 = iVar1;
          local_10 = iVar2;
          FUN_111ef110(local_1c,&local_14);
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)param_2[1]);
  }
  *(undefined4 *)(param_1 + 0xc0) = param_3;
  *(undefined4 *)(param_1 + 200) = param_4;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = param_5;
  FUN_114ed6a0();
  return;
}



/* --- CTaskInfo::GetManagers_11214530 @ 11214530 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo::GetManagers""
     ""CTaskInfo"" */

void __thiscall CTaskInfo__GetManagers_11214530(int *param_1,undefined **param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined **ppuVar7;
  int local_10;
  undefined1 local_5;
  
  (**(code **)(*param_1 + 0x28))();
  ppuVar3 = param_2;
  local_10 = 0;
  param_1[0x2f] = (int)*param_2;
  if (0 < (int)param_2[1]) {
    ppuVar7 = param_2 + 0x82;
    do {
      puVar1 = ppuVar7[-0x80];
      param_2 = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar4 = (undefined *)*DAT_123be16c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_2,"CTaskInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123bdf44 & 1) == 0) {
          DAT_123bdf10 = 0;
          DAT_123bdf20 = 0;
          DAT_123bdf24 = 0;
          _DAT_123bdf28 = 0;
          DAT_123bdf2c = 0;
          DAT_123bdf44 = DAT_123bdf44 | 1;
          _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
          DAT_123bdf30 = _DAT_11de9ae0;
          DAT_123bdf34 = _UNK_11de9ae4;
          uRam123bdf38 = _UNK_11de9ae8;
          DAT_123bdf3c = _UNK_11de9aec;
          DAT_123bdf40 = 1;
          DAT_123bdf14 = puVar4;
          _DAT_123bdf18 = puVar4;
          _DAT_123bdf1c = puVar4;
          FUN_11a8911f(&LAB_11c980e0);
        }
        puVar4 = &DAT_123bdf0c;
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((puVar1 != (undefined *)0xffffffff) &&
          (((puVar1 != (undefined *)0x0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (*(int *)(puVar4 + 0x28) != 0)))) &&
         ((iVar6 = (int)puVar1 - *(int *)(puVar4 + 0x30), -1 < iVar6 &&
          (iVar6 < *(int *)(puVar4 + 0x24))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar6 / *(int *)(puVar4 + 0x28)) * 4);
        if ((iVar2 != 0) &&
           (iVar6 = *(int *)(iVar2 + (iVar6 % *(int *)(puVar4 + 0x28)) * 4), iVar6 != 0)) {
          FUN_1152d430(iVar6,*ppuVar7);
        }
      }
      ppuVar7 = ppuVar7 + 1;
      local_10 = local_10 + 1;
    } while (local_10 < (int)ppuVar3[1]);
  }
  iVar6 = 0;
  if (0 < (int)ppuVar3[0x102]) {
    ppuVar7 = ppuVar3 + 0x103;
    do {
      FUN_1152d3f0(*ppuVar7);
      ppuVar7 = ppuVar7 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)ppuVar3[0x102]);
  }
  iVar6 = FUN_111e0a50();
  if (iVar6 != 0) {
    piVar5 = (int *)FUN_111e0a50();
    (**(code **)(*piVar5 + 4))(700,&local_5);
  }
  return;
}



/* --- CTaskInfo::GetManagers_11214e00 @ 11214e00 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// calls: memmove
// strings:
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""

/* WARNING: Removing unreachable block (ram,0x11214e22) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   calls: memmove
   strings:
     ""CTaskInfo::GetManagers""
     ""CTaskInfo"" */

void __thiscall CTaskInfo__GetManagers_11214e00(int *param_1,undefined **param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined **ppuVar7;
  int local_10;
  undefined1 local_5;
  
  (**(code **)(*param_1 + 0x54))();
  ppuVar3 = param_2;
  if (param_1[0x14] != param_1[0x15]) {
    param_1[0x15] = param_1[0x14];
  }
  local_10 = 0;
  param_1[0x17] = (int)*param_2;
  if (0 < (int)param_2[1]) {
    ppuVar7 = param_2 + 7;
    do {
      puVar1 = ppuVar7[-5];
      param_2 = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar4 = (undefined *)*DAT_123be16c;
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)FUN_11679e10(&param_2,"CTaskInfo",0);
        if (puVar4 == (undefined *)0x0) {
          if ((DAT_123bdf44 & 1) == 0) {
            DAT_123bdf10 = 0;
            DAT_123bdf20 = 0;
            DAT_123bdf24 = 0;
            _DAT_123bdf28 = 0;
            DAT_123bdf2c = 0;
            DAT_123bdf44 = DAT_123bdf44 | 1;
            _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
            DAT_123bdf30 = _DAT_11de9ae0;
            DAT_123bdf34 = _UNK_11de9ae4;
            uRam123bdf38 = _UNK_11de9ae8;
            DAT_123bdf3c = _UNK_11de9aec;
            DAT_123bdf40 = 1;
            DAT_123bdf14 = puVar4;
            _DAT_123bdf18 = puVar4;
            _DAT_123bdf1c = puVar4;
            FUN_11a8911f(&LAB_11c98140);
          }
          puVar4 = &DAT_123bdf0c;
        }
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((puVar1 != (undefined *)0xffffffff) &&
          (((puVar1 != (undefined *)0x0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (*(int *)(puVar4 + 0x28) != 0)))) &&
         ((iVar6 = (int)puVar1 - *(int *)(puVar4 + 0x30), -1 < iVar6 &&
          (iVar6 < *(int *)(puVar4 + 0x24))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar6 / *(int *)(puVar4 + 0x28)) * 4);
        if ((iVar2 != 0) &&
           (iVar6 = *(int *)(iVar2 + (iVar6 % *(int *)(puVar4 + 0x28)) * 4), iVar6 != 0)) {
          FUN_11530d30(iVar6,*ppuVar7);
        }
      }
      ppuVar7 = ppuVar7 + 1;
      local_10 = local_10 + 1;
    } while (local_10 < (int)ppuVar3[1]);
  }
  iVar6 = 0;
  if (0 < (int)ppuVar3[0xc]) {
    ppuVar7 = ppuVar3 + 0xd;
    do {
      FUN_11530cf0(*ppuVar7);
      iVar6 = iVar6 + 1;
      ppuVar7 = ppuVar7 + 1;
    } while (iVar6 < (int)ppuVar3[0xc]);
  }
  iVar6 = FUN_111e0a50();
  if (iVar6 != 0) {
    piVar5 = (int *)FUN_111e0a50();
    (**(code **)(*piVar5 + 4))(0x27b,&local_5);
  }
  return;
}



/* --- CTaskInfo::GetManagers_114e7a90 @ 114e7a90 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo::GetManagers""
     ""CTaskInfo"" */

int __fastcall CTaskInfo__GetManagers_114e7a90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  iVar1 = param_1 + 0xf0;
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0xf4)) {
    return iVar1;
  }
  iVar6 = FUN_117f86d0();
  local_10 = 0;
  iVar6 = *(int *)(iVar6 + 0x48);
  iVar7 = CTaskInfo__GetManagers_117c1580();
  if (iVar7 < 1) {
    return iVar1;
  }
  do {
    local_c = &PTR_FUN_11dbdda0;
    if ((DAT_123be168 & 1) == 0) {
      DAT_123be168 = DAT_123be168 | 1;
      FUN_102500e0("CTaskInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6eb70);
    }
    puVar8 = (undefined *)*DAT_123be16c;
    if ((puVar8 == (undefined *)0x0) &&
       (puVar8 = (undefined *)FUN_11679e10(&local_c,"CTaskInfo",0), puVar8 == (undefined *)0x0)) {
      if ((DAT_123bdf44 & 1) == 0) {
        DAT_123bdf10 = 0;
        DAT_123bdf20 = 0;
        DAT_123bdf24 = 0;
        _DAT_123bdf28 = 0;
        DAT_123bdf2c = 0;
        DAT_123bdf44 = DAT_123bdf44 | 1;
        _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
        DAT_123bdf30 = _DAT_11de9ae0;
        DAT_123bdf34 = _UNK_11de9ae4;
        uRam123bdf38 = _UNK_11de9ae8;
        DAT_123bdf3c = _UNK_11de9aec;
        DAT_123bdf40 = 1;
        DAT_123bdf14 = puVar8;
        _DAT_123bdf18 = puVar8;
        _DAT_123bdf1c = puVar8;
        FUN_11a8911f(&LAB_11c9fa90);
      }
      puVar8 = &DAT_123bdf0c;
    }
    if ((iVar6 == -1) ||
       (((iVar6 == 0 && (*(int *)(puVar8 + 0x30) != 0)) ||
        (iVar2 = *(int *)(puVar8 + 0x28), iVar2 == 0)))) {
      return iVar1;
    }
    iVar6 = iVar6 - *(int *)(puVar8 + 0x30);
    if ((iVar6 < 0) || (*(int *)(puVar8 + 0x24) <= iVar6)) {
LAB_114e7bd4:
      ppuVar9 = (undefined **)0x0;
    }
    else {
      iVar3 = *(int *)(*(int *)(puVar8 + 0x20) + (iVar6 / iVar2) * 4);
      if (iVar3 == 0) goto LAB_114e7bd4;
      ppuVar9 = *(undefined ***)(iVar3 + (iVar6 % iVar2) * 4);
    }
    if (ppuVar9 == (undefined **)0x0) {
      return iVar1;
    }
    local_c = ppuVar9;
    cVar5 = FUN_117c19b0();
    if (cVar5 == '\0') {
      return iVar1;
    }
    piVar4 = *(int **)(param_1 + 0xf4);
    if (piVar4 == *(int **)(param_1 + 0xf8)) {
      FUN_108cc3e0(piVar4,&local_c,&local_5,1,1);
    }
    else {
      *piVar4 = (int)ppuVar9;
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 4;
    }
    local_10 = local_10 + 1;
    iVar6 = *(int *)(ppuVar9[0xb] + 0x134);
    if (iVar7 <= local_10) {
      return iVar1;
    }
  } while( true );
}



/* --- CTaskInfo::GetManagers_114ed030 @ 114ed030 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo::GetManagers""
     ""CTaskInfo"" */

void __thiscall CTaskInfo__GetManagers_114ed030(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined **local_8;
  
  local_10 = param_1 + 0x90;
  if (*(short *)(param_2 + 0x158c) < 0x41) {
    local_c = (int)*(short *)(param_2 + 0x158c);
    if (local_c < 1) goto LAB_114ed19b;
  }
  else {
    local_c = 0x40;
  }
  psVar6 = (short *)(param_2 + 0x158e);
  local_14 = param_1;
  do {
    iVar5 = (int)*psVar6;
    local_8 = &PTR_FUN_11dbdda0;
    if ((DAT_123be168 & 1) == 0) {
      DAT_123be168 = DAT_123be168 | 1;
      FUN_102500e0("CTaskInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6eb70);
    }
    puVar3 = (undefined *)*DAT_123be16c;
    if ((puVar3 == (undefined *)0x0) &&
       (puVar3 = (undefined *)FUN_11679e10(&local_8,"CTaskInfo",0), puVar3 == (undefined *)0x0)) {
      if ((DAT_123bdf44 & 1) == 0) {
        DAT_123bdf10 = 0;
        DAT_123bdf20 = 0;
        DAT_123bdf24 = 0;
        _DAT_123bdf28 = 0;
        DAT_123bdf2c = 0;
        DAT_123bdf44 = DAT_123bdf44 | 1;
        _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
        DAT_123bdf30 = _DAT_11de9ae0;
        DAT_123bdf34 = _UNK_11de9ae4;
        uRam123bdf38 = _UNK_11de9ae8;
        DAT_123bdf3c = _UNK_11de9aec;
        DAT_123bdf40 = 1;
        DAT_123bdf14 = puVar3;
        _DAT_123bdf18 = puVar3;
        _DAT_123bdf1c = puVar3;
        FUN_11a8911f(&LAB_11c9faf0);
      }
      puVar3 = &DAT_123bdf0c;
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((iVar5 != -1) &&
        (((iVar5 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
         (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)))) &&
       ((iVar4 = iVar5 - *(int *)(puVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar3 + 0x24)))))
    {
      iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar1) * 4);
      if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + (iVar4 % iVar1) * 4), iVar1 != 0)) {
        local_1c = iVar5;
        local_18 = iVar1;
        FUN_111ef110(local_24,&local_1c);
      }
    }
    psVar6 = psVar6 + 1;
    local_c = local_c + -1;
    param_1 = local_14;
  } while (local_c != 0);
LAB_114ed19b:
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x160e);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x1612);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x1616);
  return;
}



/* --- CTaskInfo::GetManagers_1152f3e0 @ 1152f3e0 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo::GetManagers""
     ""CTaskInfo"" */

void __thiscall CTaskInfo__GetManagers_1152f3e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((int)param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x60) = (uint)*(byte *)((int)param_2 + 0x16);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)((int)param_2 + 0x17);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((int)param_2 + 0x1b);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((int)param_2 + 0x1f);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)((int)param_2 + 0x20b);
  local_10 = param_1;
  FUN_115bed10(0,0x3c);
  FUN_115bee10(param_2 + 2,param_2[1]);
  iVar10 = 0;
  do {
    cVar3 = FUN_115bedf0(iVar10);
    if (cVar3 != '\0') {
      iVar4 = *(int *)(param_1 + 0x18);
      iVar11 = param_1 + 0x14;
      iVar7 = iVar11;
      if (iVar4 != 0) {
        do {
          if (*(int *)(iVar4 + 0x10) < iVar10) {
            iVar5 = *(int *)(iVar4 + 0xc);
          }
          else {
            iVar5 = *(int *)(iVar4 + 8);
            iVar7 = iVar4;
          }
          iVar4 = iVar5;
        } while (iVar5 != 0);
        if (iVar7 == iVar11) goto LAB_1152f48f;
        if (iVar10 < *(int *)(iVar7 + 0x10)) {
          iVar7 = iVar11;
        }
      }
      if ((iVar7 != iVar11) && (*(int *)(iVar7 + 0x14) != 0)) {
        *(undefined4 *)(*(int *)(iVar7 + 0x14) + 4) = 1;
      }
    }
LAB_1152f48f:
    iVar10 = iVar10 + 1;
    if (0x3b < iVar10) {
      local_14 = 0;
      if (0 < *(int *)((int)param_2 + 0x23)) {
        puVar8 = (undefined4 *)((int)param_2 + 0x4f);
        do {
          iVar10 = puVar8[-10];
          local_c = &PTR_FUN_11dbdda0;
          if ((DAT_123be168 & 1) == 0) {
            DAT_123be168 = DAT_123be168 | 1;
            FUN_102500e0("CTaskInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6eb70);
          }
          puVar6 = (undefined *)*DAT_123be16c;
          if ((puVar6 == (undefined *)0x0) &&
             (puVar6 = (undefined *)FUN_11679e10(&local_c,"CTaskInfo",0), puVar6 == (undefined *)0x0
             )) {
            if ((DAT_123bdf44 & 1) == 0) {
              DAT_123bdf10 = 0;
              DAT_123bdf20 = 0;
              DAT_123bdf24 = 0;
              _DAT_123bdf28 = 0;
              DAT_123bdf2c = 0;
              DAT_123bdf44 = DAT_123bdf44 | 1;
              _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
              DAT_123bdf30 = _DAT_11de9ae0;
              DAT_123bdf34 = _UNK_11de9ae4;
              uRam123bdf38 = _UNK_11de9ae8;
              DAT_123bdf3c = _UNK_11de9aec;
              DAT_123bdf40 = 1;
              DAT_123bdf14 = puVar6;
              _DAT_123bdf18 = puVar6;
              _DAT_123bdf1c = puVar6;
              FUN_11a8911f(&LAB_11ca0f40);
            }
            puVar6 = &DAT_123bdf0c;
          }
          local_c = &PTR_FUN_11da54a8;
          if (((iVar10 != -1) &&
              (((iVar10 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
               (iVar11 = *(int *)(puVar6 + 0x28), iVar11 != 0)))) &&
             ((iVar10 = iVar10 - *(int *)(puVar6 + 0x30), -1 < iVar10 &&
              (iVar10 < *(int *)(puVar6 + 0x24))))) {
            iVar4 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar10 / iVar11) * 4);
            if ((iVar4 != 0) &&
               (piVar9 = *(int **)(iVar4 + (iVar10 % iVar11) * 4), piVar9 != (int *)0x0)) {
              uVar1 = *puVar8;
              local_1c = (**(code **)(*piVar9 + 0x18))();
              local_18 = piVar9;
              FUN_111ef110(local_2c,&local_1c);
              local_24 = (**(code **)(*piVar9 + 0x18))();
              local_20 = uVar1;
              FUN_10465520(local_34,&local_24);
            }
          }
          puVar8 = puVar8 + 1;
          local_14 = local_14 + 1;
        } while (local_14 < *(int *)((int)param_2 + 0x23));
      }
      iVar10 = local_10;
      iVar11 = 0;
      if (0 < *(int *)((int)param_2 + 0x77)) {
        piVar9 = (int *)((int)param_2 + 0x7b);
        do {
          piVar2 = *(int **)(iVar10 + 0xb0);
          local_14 = *piVar9;
          if (piVar2 == *(int **)(iVar10 + 0xb4)) {
            FUN_10463c40(piVar2,&local_14,&local_5,1,1);
          }
          else {
            *piVar2 = local_14;
            *(int *)(iVar10 + 0xb0) = *(int *)(iVar10 + 0xb0) + 4;
          }
          iVar11 = iVar11 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar11 < *(int *)((int)param_2 + 0x77));
      }
      FUN_115bed60();
      return;
    }
  } while( true );
}



/* --- CTaskInfo::GetManagers_115320d0 @ 115320d0 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// calls: memmove
// strings:
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""

/* WARNING: Removing unreachable block (ram,0x115320f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   calls: memmove
   strings:
     ""CTaskInfo::GetManagers""
     ""CTaskInfo"" */

void __thiscall CTaskInfo__GetManagers_115320d0(undefined *param_1,undefined **param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined **local_10;
  undefined *local_c;
  undefined **local_8;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x50);
  }
  local_14 = param_1 + 0x50;
  local_c = param_1;
  FUN_111eee60();
  local_18 = param_1 + 0x60;
  FUN_10462c40();
  ppuVar3 = param_2;
  local_10 = (undefined **)0x0;
  *(undefined **)(param_1 + 0x5c) = *param_2;
  *(undefined **)(param_1 + 0x78) = param_2[0x11c];
  param_1[0x7c] = param_2[0x11d] != (undefined *)0x0;
  puVar6 = param_1 + 0x50;
  if (0 < (int)param_2[1]) {
    local_8 = param_2 + 7;
    do {
      puVar6 = local_8[-5];
      param_2 = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar4 = (undefined *)*DAT_123be16c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_2,"CTaskInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123bdf44 & 1) == 0) {
          DAT_123bdf10 = 0;
          DAT_123bdf20 = 0;
          DAT_123bdf24 = 0;
          _DAT_123bdf28 = 0;
          DAT_123bdf2c = 0;
          DAT_123bdf44 = DAT_123bdf44 | 1;
          _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
          DAT_123bdf30 = _DAT_11de9ae0;
          DAT_123bdf34 = _UNK_11de9ae4;
          uRam123bdf38 = _UNK_11de9ae8;
          DAT_123bdf3c = _UNK_11de9aec;
          DAT_123bdf40 = 1;
          DAT_123bdf14 = puVar4;
          _DAT_123bdf18 = puVar4;
          _DAT_123bdf1c = puVar4;
          FUN_11a8911f(&LAB_11ca10c0);
        }
        puVar4 = &DAT_123bdf0c;
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((puVar6 != (undefined *)0xffffffff) &&
          (((puVar6 != (undefined *)0x0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (*(int *)(puVar4 + 0x28) != 0)))) &&
         ((iVar5 = (int)puVar6 - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
          (iVar5 < *(int *)(puVar4 + 0x24))))) {
        iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / *(int *)(puVar4 + 0x28)) * 4);
        if ((iVar1 != 0) &&
           (piVar2 = *(int **)(iVar1 + (iVar5 % *(int *)(puVar4 + 0x28)) * 4), piVar2 != (int *)0x0)
           ) {
          local_c = *local_8;
          local_20 = (**(code **)(*piVar2 + 0x18))();
          local_1c = piVar2;
          FUN_111ef110(local_30,&local_20);
          local_28 = (**(code **)(*piVar2 + 0x18))();
          local_24 = local_c;
          FUN_11532d80(local_38,&local_28);
        }
      }
      local_10 = (undefined **)((int)local_10 + 1);
      local_8 = local_8 + 1;
      puVar6 = local_14;
    } while ((int)local_10 < (int)ppuVar3[1]);
  }
  iVar5 = 0;
  if (0 < (int)ppuVar3[0xc]) {
    local_10 = ppuVar3 + 0xd;
    do {
      local_14 = *local_10;
      piVar2 = *(int **)(puVar6 + 4);
      if (piVar2 == *(int **)(puVar6 + 8)) {
        FUN_10463c40(piVar2,&local_14,(int)&param_2 + 3,1,1);
      }
      else {
        *piVar2 = (int)local_14;
        *(int *)(puVar6 + 4) = *(int *)(puVar6 + 4) + 4;
      }
      iVar5 = iVar5 + 1;
      local_10 = local_10 + 1;
    } while (iVar5 < (int)ppuVar3[0xc]);
  }
  iVar5 = 0;
  if (0 < (int)ppuVar3[0x21]) {
    ppuVar7 = ppuVar3 + 0x22;
    do {
      FUN_10467580(local_38,ppuVar7);
      iVar5 = iVar5 + 1;
      ppuVar7 = ppuVar7 + 1;
    } while (iVar5 < (int)ppuVar3[0x21]);
  }
  return;
}



/* --- CTaskInfo::GetManagers_1168f7d0 @ 1168f7d0 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo""
//   ""CTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo""
     ""CTaskInfo::GetManagers"" */

void __fastcall CTaskInfo__GetManagers_1168f7d0(undefined *param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_c;
  undefined1 local_5;
  
  piVar2 = (int *)FUN_104ee8d0(0,"CTaskInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      local_c = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar4 = (undefined *)*DAT_123be16c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CTaskInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123bdf44 & 1) == 0) {
          DAT_123bdf10 = 0;
          DAT_123bdf20 = 0;
          DAT_123bdf24 = 0;
          _DAT_123bdf28 = 0;
          DAT_123bdf2c = 0;
          DAT_123bdf44 = DAT_123bdf44 | 1;
          _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
          DAT_123bdf30 = _DAT_11de9ae0;
          DAT_123bdf34 = _UNK_11de9ae4;
          uRam123bdf38 = _UNK_11de9ae8;
          DAT_123bdf3c = _UNK_11de9aec;
          DAT_123bdf40 = 1;
          DAT_123bdf14 = puVar4;
          _DAT_123bdf18 = puVar4;
          _DAT_123bdf1c = puVar4;
          FUN_11a8911f(&LAB_11ca7130);
        }
        puVar4 = &DAT_123bdf0c;
      }
      if ((iVar6 < 0) || (*(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2 <= iVar6)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(puVar4 + 0x14) + iVar6 * 4);
      }
      ppuVar1 = *(undefined ***)(iVar5 + 0x2c);
      local_c = ppuVar1;
      if (ppuVar1[0xc] == param_1) {
        iVar5 = *(int *)(param_1 + 0x74);
        if (iVar5 != 0) {
          piVar2 = *(int **)(iVar5 + 0x11c);
          if (piVar2 == *(int **)(iVar5 + 0x120)) {
            FUN_1141b1f0(piVar2,&local_c,&local_5,1,1);
          }
          else {
            *piVar2 = (int)ppuVar1;
            *(int *)(iVar5 + 0x11c) = *(int *)(iVar5 + 0x11c) + 4;
          }
          goto LAB_1168f920;
        }
      }
      else {
LAB_1168f920:
        if ((ppuVar1[0xd] == param_1) && (iVar5 = *(int *)(param_1 + 0x74), iVar5 != 0)) {
          piVar2 = *(int **)(iVar5 + 0x128);
          if (piVar2 == *(int **)(iVar5 + 300)) {
            FUN_1141b1f0(piVar2,&local_c,&local_5,1,1);
          }
          else {
            *piVar2 = (int)ppuVar1;
            *(int *)(iVar5 + 0x128) = *(int *)(iVar5 + 0x128) + 4;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



/* --- CTaskInfo::GetManagers_11722cc0 @ 11722cc0 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo""
//   ""CTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo""
     ""CTaskInfo::GetManagers"" */

void __fastcall CTaskInfo__GetManagers_11722cc0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_104ee8d0(0,"CTaskInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar3 = (undefined *)*DAT_123be16c;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_c,"CTaskInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123bdf44 & 1) == 0) {
            DAT_123bdf10 = 0;
            DAT_123bdf20 = 0;
            DAT_123bdf24 = 0;
            _DAT_123bdf28 = 0;
            DAT_123bdf2c = 0;
            DAT_123bdf44 = DAT_123bdf44 | 1;
            _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
            DAT_123bdf30 = _DAT_11de9ae0;
            DAT_123bdf34 = _UNK_11de9ae4;
            uRam123bdf38 = _UNK_11de9ae8;
            DAT_123bdf3c = _UNK_11de9aec;
            DAT_123bdf40 = 1;
            DAT_123bdf14 = puVar3;
            _DAT_123bdf18 = puVar3;
            _DAT_123bdf1c = puVar3;
            FUN_11a8911f(&LAB_11ca8c50);
          }
          puVar3 = &DAT_123bdf0c;
        }
      }
      if ((iVar4 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(*(int *)(puVar3 + 0x14) + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) &&
         (*(int *)(local_c[0xb] + 0xe0) == *(int *)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x34);
        if (piVar1 == *(int **)(param_1 + 0x38)) {
          FUN_108cc3e0(piVar1,&local_c,&local_5,1,1);
        }
        else {
          *piVar1 = (int)local_c;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskInfo::GetManagers_117c1580 @ 117c1580 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo""
//   ""CTaskInfo::GetManagers""

/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo""
     ""CTaskInfo::GetManagers"" */

int CTaskInfo__GetManagers_117c1580(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  if (DAT_12392bc8 == 0) {
    piVar2 = (int *)FUN_104ee8d0(0,"CTaskInfo",0);
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        local_8 = &PTR_FUN_11dbdda0;
        if ((DAT_123be168 & 1) == 0) {
          DAT_123be168 = DAT_123be168 | 1;
          FUN_102500e0("CTaskInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6eb70);
        }
        puVar4 = (undefined *)*DAT_123be16c;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_8,"CTaskInfo",0), puVar4 == (undefined *)0x0))
        {
          if ((DAT_123bdf44 & 1) == 0) {
            DAT_123bdf44 = DAT_123bdf44 | 1;
            FUN_104f0310();
            FUN_11a8911f(&LAB_11caa670);
          }
          puVar4 = &DAT_123bdf0c;
        }
        if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
            (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
           (*(int *)(*(int *)(iVar1 + 0x2c) + 0x10) == 1)) {
          DAT_12392bc8 = DAT_12392bc8 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  return DAT_12392bc8;
}



/* --- CTaskInfo::GetManagers_117c2cd0 @ 117c2cd0 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo""
//   ""CTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo""
     ""CTaskInfo::GetManagers"" */

void CTaskInfo__GetManagers_117c2cd0(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int local_2c [3];
  int local_20 [3];
  int *local_14;
  int local_10;
  undefined **local_c;
  int local_8;
  
  piVar3 = (int *)FUN_104ee8d0(0,"CTaskInfo",0);
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  local_8 = 0;
  local_10 = iVar4;
  if (0 < iVar4) {
    do {
      iVar9 = local_8;
      local_c = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar5 = (undefined *)*DAT_123be16c;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&local_c,"CTaskInfo",0), puVar5 == (undefined *)0x0)) {
        if ((DAT_123bdf44 & 1) == 0) {
          DAT_123bdf10 = 0;
          DAT_123bdf20 = 0;
          DAT_123bdf24 = 0;
          _DAT_123bdf28 = 0;
          DAT_123bdf2c = 0;
          DAT_123bdf44 = DAT_123bdf44 | 1;
          _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
          DAT_123bdf30 = _DAT_11de9ae0;
          DAT_123bdf34 = _UNK_11de9ae4;
          uRam123bdf38 = _UNK_11de9ae8;
          DAT_123bdf3c = _UNK_11de9aec;
          DAT_123bdf40 = 1;
          DAT_123bdf14 = puVar5;
          _DAT_123bdf18 = puVar5;
          _DAT_123bdf1c = puVar5;
          FUN_11a8911f(&LAB_11caa670);
        }
        puVar5 = &DAT_123bdf0c;
      }
      local_c = &PTR_FUN_11da54a8;
      if (((-1 < iVar9) && (iVar9 < *(int *)(puVar5 + 0x18) - *(int *)(puVar5 + 0x14) >> 2)) &&
         (piVar3 = *(int **)(*(int *)(puVar5 + 0x14) + iVar9 * 4), piVar3 != (int *)0x0)) {
        FUN_117c08c0(local_2c,piVar3[0xb] + 0x4c,0x1f);
        FUN_10804880(local_20,piVar3[0xb] + 0x4c,0x1e);
        if (local_20[0] != 0) {
          FUN_10c3d5d0(local_20[0]);
        }
        if (local_2c[0] != 0) {
          FUN_10c3d5d0(local_2c[0]);
        }
        if (*(int *)(piVar3[0xb] + 0x10) == 1) {
          DAT_12392bc8 = DAT_12392bc8 + 1;
          local_14 = (int *)(piVar3[0xb] + 0x20);
          piVar8 = (int *)*local_14;
          iVar9 = local_8;
          if (piVar8 != *(int **)(piVar3[0xb] + 0x24)) {
            do {
              piVar1 = (int *)*piVar8;
              iVar6 = (**(code **)(*piVar1 + 0x10))();
              iVar9 = local_8;
              iVar4 = local_10;
              if (iVar6 == 6) {
                if ((int *)piVar1[1] != (int *)piVar1[2]) {
                  iVar4 = piVar3[0xb];
                  uVar7 = (**(code **)(**(int **)(*(int *)piVar1[1] + 4) + 0x18))();
                  *(undefined4 *)(iVar4 + 0x134) = uVar7;
                  iVar9 = local_8;
                  iVar4 = local_10;
                }
                break;
              }
              piVar8 = piVar8 + 1;
            } while (piVar8 != (int *)local_14[1]);
          }
        }
        if ((piVar3[0xe] == 0) || (cVar2 = FUN_11747260(), cVar2 == '\0')) {
          (**(code **)(*piVar3 + 0x18))();
        }
      }
      local_8 = iVar9 + 1;
    } while (local_8 < iVar4);
  }
  return;
}



/* --- CTaskInfo::GetManagers_119037b0 @ 119037b0 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo""
//   ""CTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo""
     ""CTaskInfo::GetManagers"" */

void CTaskInfo__GetManagers_119037b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_104ee8d0(0,"CTaskInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      if (((*DAT_123be16c == 0) && (iVar3 = FUN_11679e10(&local_8,"CTaskInfo",0), iVar3 == 0)) &&
         ((DAT_123bdf44 & 1) == 0)) {
        DAT_123bdf10 = 0;
        DAT_123bdf20 = 0;
        DAT_123bdf24 = 0;
        _DAT_123bdf28 = 0;
        DAT_123bdf2c = 0;
        DAT_123bdf44 = DAT_123bdf44 | 1;
        _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
        DAT_123bdf30 = _DAT_11de9ae0;
        DAT_123bdf34 = _UNK_11de9ae4;
        uRam123bdf38 = _UNK_11de9ae8;
        DAT_123bdf3c = _UNK_11de9aec;
        DAT_123bdf40 = 1;
        DAT_123bdf14 = iVar3;
        _DAT_123bdf18 = iVar3;
        _DAT_123bdf1c = iVar3;
        FUN_11a8911f(&LAB_11cb0d50);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_117c2120();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CTaskInfo::GetManagers_11903900 @ 11903900 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// calls: CTaskInfo::GetManagers_117c2cd0
// strings:
//   ""CTaskInfo""
//   ""CTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   calls: CTaskInfo::GetManagers_117c2cd0
   strings:
     ""CTaskInfo""
     ""CTaskInfo::GetManagers"" */

void CTaskInfo__GetManagers_11903900(undefined **param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_104ee8d0(0,"CTaskInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  ppuVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      if (((*DAT_123be16c == 0) && (iVar4 = FUN_11679e10(&param_1,"CTaskInfo",0), iVar4 == 0)) &&
         ((DAT_123bdf44 & 1) == 0)) {
        DAT_123bdf10 = 0;
        DAT_123bdf20 = 0;
        DAT_123bdf24 = 0;
        _DAT_123bdf28 = 0;
        DAT_123bdf2c = 0;
        DAT_123bdf44 = DAT_123bdf44 | 1;
        _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
        DAT_123bdf30 = _DAT_11de9ae0;
        DAT_123bdf34 = _UNK_11de9ae4;
        uRam123bdf38 = _UNK_11de9ae8;
        DAT_123bdf3c = _UNK_11de9aec;
        DAT_123bdf40 = 1;
        DAT_123bdf14 = iVar4;
        _DAT_123bdf18 = iVar4;
        _DAT_123bdf1c = iVar4;
        FUN_11a8911f(&LAB_11cb0d50);
      }
      param_1 = &PTR_FUN_11da54a8;
      FUN_117c1a00(ppuVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  CTaskInfo__GetManagers_117c2cd0();
  return;
}



/* --- CTaskInfo::GetManagers_119d8a50 @ 119d8a50 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// strings:
//   ""CTaskInfo""
//   ""CTaskInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   strings:
     ""CTaskInfo""
     ""CTaskInfo::GetManagers"" */

void CTaskInfo__GetManagers_119d8a50(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined **local_10;
  int local_c;
  undefined4 *local_8;
  
  puVar5 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  piVar2 = (int *)FUN_104ee8d0(0,"CTaskInfo",0);
  local_1c = (**(code **)(*piVar2 + 0x28))();
  iVar8 = 0;
  if (0 < local_1c) {
    do {
      local_10 = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar3 = (undefined *)*DAT_123be16c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_10,"CTaskInfo",0), puVar3 == (undefined *)0x0))
      {
        if ((DAT_123bdf44 & 1) == 0) {
          DAT_123bdf10 = 0;
          DAT_123bdf20 = 0;
          DAT_123bdf24 = 0;
          _DAT_123bdf28 = 0;
          DAT_123bdf2c = 0;
          DAT_123bdf44 = DAT_123bdf44 | 1;
          _DAT_123bdf0c = &PTR_FUN_11dbdeb4;
          DAT_123bdf30 = _DAT_11de9ae0;
          DAT_123bdf34 = _UNK_11de9ae4;
          uRam123bdf38 = _UNK_11de9ae8;
          DAT_123bdf3c = _UNK_11de9aec;
          DAT_123bdf40 = 1;
          DAT_123bdf14 = puVar3;
          _DAT_123bdf18 = puVar3;
          _DAT_123bdf1c = puVar3;
          FUN_11a8911f(&LAB_11cb4e80);
        }
        puVar3 = &DAT_123bdf0c;
      }
      local_10 = &PTR_FUN_11da54a8;
      if ((iVar8 < 0) || (*(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2 <= iVar8)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(puVar3 + 0x14) + iVar8 * 4);
      }
      if (*(int *)(*(int *)(iVar6 + 0x2c) + 0x18) == *(int *)(local_c + 0x10)) {
        local_24 = local_8;
        if (puVar5 != local_8) {
          local_24 = puVar5;
        }
        iVar4 = FUN_119d88e0(iVar6,&local_28,param_1);
        puVar5 = local_28;
        if (local_18 < iVar4) {
          local_8 = local_24;
          local_18 = iVar4;
          local_14 = iVar6;
        }
        else {
          local_8 = local_24;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_1c);
    if (local_14 != 0) {
      local_24 = local_8;
      if (puVar5 != local_8) {
        local_24 = puVar5;
      }
      FUN_119d88e0(local_14,&local_28,param_1);
      puVar5 = local_28;
      puVar7 = local_24;
      while (puVar7 != puVar5) {
        puVar7 = puVar7 + -1;
        puVar1 = *(undefined4 **)(local_c + 0x34);
        if (puVar1 == *(undefined4 **)(local_c + 0x38)) {
          FUN_108cc3e0(puVar1,puVar7,(int)&param_1 + 3,1,1);
        }
        else {
          *puVar1 = *puVar7;
          *(int *)(local_c + 0x34) = *(int *)(local_c + 0x34) + 4;
        }
      }
    }
    if (puVar5 != (undefined4 *)0x0) {
      FUN_10c3d5d0(puVar5);
    }
  }
  return;
}



/* --- CTaskInfo::GetManagers_11a42f70 @ 11a42f70 --- */
// [RE-AUTO c3]
// id: CTaskInfo::GetManagers
// calls: CTutorialCounterInfo::GetManagers
// strings:
//   ""CTutorialCounterInfo""
//   ""CTaskInfo::GetManagers""
//   ""CTaskInfo""
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* [RE-AUTO c3]
   id: CTaskInfo::GetManagers
   calls: CTutorialCounterInfo::GetManagers
   strings:
     ""CTutorialCounterInfo""
     ""CTaskInfo::GetManagers""
     ""CTaskInfo""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

uint __fastcall CTaskInfo__GetManagers_11a42f70(undefined **param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  puVar2 = (undefined4 *)*param_1;
  if ((int)puVar2 < 0x2c3) {
    if ((int)puVar2 < 0x2bd) {
      local_8 = param_1;
      if ((int)puVar2 < 0x12e) {
        if (puVar2 != (undefined4 *)0x12d) {
          if (puVar2 < (undefined4 *)0x2) {
            return CONCAT31((int3)((uint)puVar2 >> 8),1);
          }
          goto LAB_11a43004;
        }
        puVar4 = param_1[1];
        puVar2 = (undefined4 *)CTutorialCounterInfo__GetManagers(0,"CTutorialCounterInfo",0);
        if (((puVar4 == (undefined *)0xffffffff) ||
            ((puVar4 == (undefined *)0x0 && (puVar2[0xc] != 0)))) ||
           ((iVar1 = puVar2[10], iVar1 == 0 ||
            ((iVar5 = (int)puVar4 - puVar2[0xc], iVar5 < 0 || ((int)puVar2[9] <= iVar5))))))
        goto LAB_11a43004;
        puVar2 = *(undefined4 **)(puVar2[8] + (iVar5 / iVar1) * 4);
        if ((puVar2 == (undefined4 *)0x0) || (puVar2[iVar5 % iVar1] == 0)) goto LAB_11a43004;
        goto LAB_11a42ff4;
      }
      if (puVar2 != (undefined4 *)0x12f) goto LAB_11a43004;
      puVar4 = param_1[1];
      puVar2 = (undefined4 *)CTutorialCounterInfo__GetManagers(0,"CTutorialCounterInfo",0);
      puVar3 = puVar2;
    }
    else {
      puVar4 = param_1[1];
      local_8 = &PTR_FUN_11dbdda0;
      if ((DAT_123be168 & 1) == 0) {
        DAT_123be168 = DAT_123be168 | 1;
        FUN_102500e0("CTaskInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6eb70);
      }
      puVar2 = DAT_123be16c;
      puVar3 = (undefined4 *)*DAT_123be16c;
      if (((undefined4 *)*DAT_123be16c == (undefined4 *)0x0) &&
         (puVar2 = (undefined4 *)FUN_11679e10(&local_8,"CTaskInfo",0), puVar3 = puVar2,
         puVar2 == (undefined4 *)0x0)) {
        puVar2 = DAT_123bdf44;
        if (((uint)DAT_123bdf44 & 1) == 0) {
          DAT_123bdf44 = (undefined4 *)((uint)DAT_123bdf44 | 1);
          FUN_104f0310();
          puVar2 = (undefined4 *)FUN_11a8911f(&LAB_11cb6930);
        }
        puVar3 = (undefined4 *)&DAT_123bdf0c;
      }
    }
    if ((puVar4 != (undefined *)0xffffffff) &&
       ((((puVar4 != (undefined *)0x0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)) &&
        ((iVar5 = (int)puVar4 - puVar3[0xc], -1 < iVar5 && (iVar5 < (int)puVar3[9])))))) {
      puVar3 = *(undefined4 **)(puVar3[8] + (iVar5 / iVar1) * 4);
      puVar2 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar2 = puVar3;
        if (puVar3[iVar5 % iVar1] == 0) {
          return (uint)puVar3 & 0xffffff00;
        }
        goto LAB_11a43222;
      }
    }
  }
  else {
    if (puVar2 == (undefined4 *)0x385) {
      puVar4 = param_1[1];
      local_8 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar2 = DAT_123be35c;
      puVar3 = (undefined4 *)*DAT_123be35c;
      if (((undefined4 *)*DAT_123be35c == (undefined4 *)0x0) &&
         (puVar2 = (undefined4 *)FUN_11679e10(&local_8,"CBuffInfo",0), puVar3 = puVar2,
         puVar2 == (undefined4 *)0x0)) {
        puVar2 = DAT_123be308;
        if (((uint)DAT_123be308 & 1) == 0) {
          DAT_123be308 = (undefined4 *)((uint)DAT_123be308 | 1);
          FUN_105005e0();
          puVar2 = (undefined4 *)FUN_11a8911f(&LAB_11cb67b0);
        }
        puVar3 = (undefined4 *)&DAT_123be2d0;
      }
      if (((puVar4 != (undefined *)0xffffffff) &&
          (((puVar4 != (undefined *)0x0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)))
          ) && ((iVar5 = (int)puVar4 - puVar3[0xc], -1 < iVar5 && (iVar5 < (int)puVar3[9])))) {
        puVar2 = *(undefined4 **)(puVar3[8] + (iVar5 / iVar1) * 4);
        if ((puVar2 == (undefined4 *)0x0) ||
           (((puVar2[iVar5 % iVar1] == 0 || (puVar2 = (undefined4 *)param_1[2], (int)puVar2 < 0)) ||
            (7 < (int)puVar2)))) goto LAB_11a43004;
        goto LAB_11a43222;
      }
      goto LAB_11a43004;
    }
    if (((puVar2 != (undefined4 *)0x4b1) || (puVar2 = (undefined4 *)param_1[1], (int)puVar2 < 1)) ||
       (0x198 < (int)puVar2)) goto LAB_11a43004;
LAB_11a42ff4:
    puVar2 = (undefined4 *)param_1[2];
    if ((-1 < (int)puVar2) && ((int)puVar2 < 8)) {
LAB_11a43222:
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  }
LAB_11a43004:
  return (uint)puVar2 & 0xffffff00;
}



