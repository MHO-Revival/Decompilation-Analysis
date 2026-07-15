// ===== class CGuildTradeInstituteInfo  (5 recovered methods) =====

/* --- CGuildTradeInstituteInfo::GetManagers @ 1190ebd0 --- */
// [RE-AUTO c3]
// id: CGuildTradeInstituteInfo::GetManagers
// strings:
//   ""CGuildTradeInstituteInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTradeInstituteInfo::GetManagers
   strings:
     ""CGuildTradeInstituteInfo::GetManagers"" */

undefined4 *
CGuildTradeInstituteInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5e480;
  if (param_3 == 0) {
    if ((DAT_1239ec3c & 1) == 0) {
      DAT_1239ec3c = DAT_1239ec3c | 1;
      FUN_102500e0("CGuildTradeInstituteInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb15f0);
    }
    if ((undefined4 *)*DAT_1239ec20 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1239ec20;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1239ed1c & 1) == 0) {
      DAT_1239ed1c = DAT_1239ed1c | 1;
      FUN_1190f220();
      FUN_11a8911f(&LAB_11cb1560);
    }
    puVar1 = &DAT_1239ece4;
  }
  return puVar1;
}



/* --- CGuildTradeInstituteInfo::GetManagers_119104c0 @ 119104c0 --- */
// [RE-AUTO c3]
// id: CGuildTradeInstituteInfo::GetManagers
// strings:
//   ""CGuildTradeInstituteInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGuildTradeInstituteInfo::GetManagers
   strings:
     ""CGuildTradeInstituteInfo::GetManagers"" */

undefined4 CGuildTradeInstituteInfo__GetManagers_119104c0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239ec3c & 1) == 0) {
      DAT_1239ec3c = DAT_1239ec3c | 1;
      FUN_102500e0("CGuildTradeInstituteInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb15f0);
    }
    return *DAT_1239ec20;
  }
  return 0;
}



/* --- CGuildTradeInstituteInfo::GetManagers_11910a00 @ 11910a00 --- */
// [RE-AUTO c3]
// id: CGuildTradeInstituteInfo::GetManagers
// calls: CGuildTradeInstituteInfo::GetManagers
// strings:
//   ""CGuildTradeInstituteInfo""
//   ""CGuildTradeInstituteInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTradeInstituteInfo::GetManagers
   calls: CGuildTradeInstituteInfo::GetManagers
   strings:
     ""CGuildTradeInstituteInfo""
     ""CGuildTradeInstituteInfo::GetManagers"" */

void CGuildTradeInstituteInfo__GetManagers_11910a00(undefined **param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)CGuildTradeInstituteInfo__GetManagers(0,"CGuildTradeInstituteInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  ppuVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d5e480;
      if ((DAT_1239ec3c & 1) == 0) {
        DAT_1239ec3c = DAT_1239ec3c | 1;
        FUN_102500e0("CGuildTradeInstituteInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb15f0);
      }
      puVar4 = (undefined4 *)*DAT_1239ec20;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CGuildTradeInstituteInfo",0),
         puVar4 == (undefined4 *)0x0)) {
        if ((DAT_1239ed1c & 1) == 0) {
          DAT_1239ece8 = 0;
          DAT_1239ecf8 = 0;
          DAT_1239ecfc = 0;
          _DAT_1239ed00 = 0;
          uRam1239ed04 = 0;
          DAT_1239ed1c = DAT_1239ed1c | 1;
          DAT_1239ece4 = &PTR_FUN_11d5e4cc;
          _DAT_1239ed08 = _DAT_11de9ae0;
          uRam1239ed0c = _UNK_11de9ae4;
          uRam1239ed10 = _UNK_11de9ae8;
          uRam1239ed14 = _UNK_11de9aec;
          DAT_1239ed18 = 1;
          DAT_1239ecec = puVar4;
          _DAT_1239ecf0 = puVar4;
          _DAT_1239ecf4 = puVar4;
          FUN_11a8911f(&LAB_11cb1560);
        }
        puVar4 = &DAT_1239ece4;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
         (*(int *)(puVar4[5] + iVar5 * 4) != 0)) {
        CGuildRandCommodityInfo__GetManagers_11a06580(ppuVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  CGuildTradeInstituteInfo__GetManagers_11a068b0();
  return;
}



/* --- CGuildTradeInstituteInfo::GetManagers_11a06250 @ 11a06250 --- */
// [RE-AUTO c3]
// id: CGuildTradeInstituteInfo::GetManagers
// calls: CGuildTradeInstituteInfo::GetManagers
// strings:
//   ""CGuildTradeInstituteInfo""
//   ""CGuildTradeInstituteInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTradeInstituteInfo::GetManagers
   calls: CGuildTradeInstituteInfo::GetManagers
   strings:
     ""CGuildTradeInstituteInfo""
     ""CGuildTradeInstituteInfo::GetManagers"" */

int CGuildTradeInstituteInfo__GetManagers_11a06250(int param_1,undefined **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_8;
  
  piVar2 = (int *)CGuildTradeInstituteInfo__GetManagers(0,"CGuildTradeInstituteInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar1 = (int)param_2;
  iVar5 = 0;
  if (iVar3 < 1) {
    return (int)param_2;
  }
  do {
    param_2 = &PTR_FUN_11d5e480;
    if ((DAT_1239ec3c & 1) == 0) {
      DAT_1239ec3c = DAT_1239ec3c | 1;
      FUN_102500e0("CGuildTradeInstituteInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb15f0);
    }
    puVar4 = (undefined4 *)*DAT_1239ec20;
    if ((puVar4 == (undefined4 *)0x0) &&
       (puVar4 = (undefined4 *)FUN_11679e10(&param_2,"CGuildTradeInstituteInfo",0),
       puVar4 == (undefined4 *)0x0)) {
      if ((DAT_1239ed1c & 1) == 0) {
        DAT_1239ece8 = 0;
        DAT_1239ecf8 = 0;
        DAT_1239ecfc = 0;
        _DAT_1239ed00 = 0;
        uRam1239ed04 = 0;
        DAT_1239ed1c = DAT_1239ed1c | 1;
        DAT_1239ece4 = &PTR_FUN_11d5e4cc;
        _DAT_1239ed08 = _DAT_11de9ae0;
        uRam1239ed0c = _UNK_11de9ae4;
        uRam1239ed10 = _UNK_11de9ae8;
        uRam1239ed14 = _UNK_11de9aec;
        DAT_1239ed18 = 1;
        DAT_1239ecec = puVar4;
        _DAT_1239ecf0 = puVar4;
        _DAT_1239ecf4 = puVar4;
        FUN_11a8911f(&LAB_11cb5bc0);
      }
      puVar4 = &DAT_1239ece4;
    }
    param_2 = &PTR_FUN_11da54a8;
    if ((iVar5 < 0) || ((int)(puVar4[6] - puVar4[5]) >> 2 <= iVar5)) {
      local_8 = 0;
    }
    else {
      local_8 = *(int *)(puVar4[5] + iVar5 * 4);
    }
    if ((local_8 != 0) && (*(int *)(local_8 + 0x10) <= param_1)) {
      piVar2 = *(int **)(iVar1 + 4);
      if (piVar2 == *(int **)(iVar1 + 8)) {
        FUN_11910f30(piVar2,&local_8,(int)&param_2 + 3,1,1);
      }
      else {
        *piVar2 = local_8;
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 4;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar3);
  return iVar1;
}



/* --- CGuildTradeInstituteInfo::GetManagers_11a068b0 @ 11a068b0 --- */
// [RE-AUTO c3]
// id: CGuildTradeInstituteInfo::GetManagers
// calls: CGuildTradeInstituteInfo::GetManagers
// strings:
//   ""CGuildTradeInstituteInfo""
//   ""CGuildTradeInstituteInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGuildTradeInstituteInfo::GetManagers
   calls: CGuildTradeInstituteInfo::GetManagers
   strings:
     ""CGuildTradeInstituteInfo""
     ""CGuildTradeInstituteInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void CGuildTradeInstituteInfo__GetManagers_11a068b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  piVar1 = (int *)CGuildTradeInstituteInfo__GetManagers(0,"CGuildTradeInstituteInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d5e480;
      if ((DAT_1239ec3c & 1) == 0) {
        DAT_1239ec3c = DAT_1239ec3c | 1;
        FUN_102500e0("CGuildTradeInstituteInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb15f0);
      }
      if (((*DAT_1239ec20 == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CGuildTradeInstituteInfo",0), iVar3 == 0)) &&
         ((DAT_1239ed1c & 1) == 0)) {
        DAT_1239ece8 = 0;
        DAT_1239ecf8 = 0;
        DAT_1239ecfc = 0;
        _DAT_1239ed00 = 0;
        uRam1239ed04 = 0;
        DAT_1239ed1c = DAT_1239ed1c | 1;
        DAT_1239ecec = (int *)0x0;
        _DAT_1239ecf0 = (int *)0x0;
        _DAT_1239ecf4 = (int *)0x0;
        DAT_1239ece4 = &PTR_FUN_11d5e4cc;
        _DAT_1239ed08 = _DAT_11de9ae0;
        uRam1239ed0c = _UNK_11de9ae4;
        uRam1239ed10 = _UNK_11de9ae8;
        uRam1239ed14 = _UNK_11de9aec;
        DAT_1239ed18 = 1;
        FUN_11a8911f(&LAB_11cb5bc0);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_8 = &PTR_FUN_11d5e480;
  if ((DAT_1239ec3c & 1) == 0) {
    DAT_1239ec3c = DAT_1239ec3c | 1;
    _DAT_1239ec34 = &DAT_1239ec24;
    DAT_1239ec38 = &DAT_1239ec24;
    DAT_1239ec24 = 0;
    FUN_100d9260("CGuildTradeInstituteInfo::GetManagers","");
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    DAT_1239ec20 = (int *)FUN_100dfd90(DAT_1239ec38);
    if (DAT_1239ec20 == (int *)0x0) {
      DAT_1239ec20 = (int *)FUN_100dde50(4);
      *DAT_1239ec20 = 0;
      FUN_100dfdc0(DAT_1239ec38,DAT_1239ec20);
    }
    FUN_11a8911f(&LAB_11cb15f0);
  }
  piVar1 = (int *)*DAT_1239ec20;
  if ((piVar1 == (int *)0x0) &&
     (piVar1 = (int *)FUN_11679e10(&local_8,"CGuildTradeInstituteInfo",0), piVar1 == (int *)0x0)) {
    if ((DAT_1239ed1c & 1) == 0) {
      DAT_1239ece8 = 0;
      DAT_1239ecf8 = 0;
      DAT_1239ecfc = 0;
      _DAT_1239ed00 = 0;
      uRam1239ed04 = 0;
      DAT_1239ed1c = DAT_1239ed1c | 1;
      DAT_1239ece4 = &PTR_FUN_11d5e4cc;
      _DAT_1239ed08 = _DAT_11de9ae0;
      uRam1239ed0c = _UNK_11de9ae4;
      uRam1239ed10 = _UNK_11de9ae8;
      uRam1239ed14 = _UNK_11de9aec;
      DAT_1239ed18 = 1;
      DAT_1239ecec = piVar1;
      _DAT_1239ecf0 = piVar1;
      _DAT_1239ecf4 = piVar1;
      FUN_11a8911f(&LAB_11cb5bc0);
    }
    piVar1 = (int *)&DAT_1239ece4;
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar1 + 0x28))();
  return;
}



