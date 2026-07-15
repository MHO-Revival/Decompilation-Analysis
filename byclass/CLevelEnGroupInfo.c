// ===== class CLevelEnGroupInfo  (5 recovered methods) =====

/* --- CLevelEnGroupInfo::GetManagers @ 104d84a0 --- */
// [RE-AUTO c3]
// id: CLevelEnGroupInfo::GetManagers
// strings:
//   ""CLevelEnGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnGroupInfo::GetManagers
   strings:
     ""CLevelEnGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CLevelEnGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be228 & 1) == 0) {
    DAT_123be228 = DAT_123be228 | 1;
    _DAT_123be21c = &DAT_123be20c;
    DAT_123be220 = &DAT_123be20c;
    DAT_123be20c = 0;
    FUN_100d83d0("CLevelEnGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6ea80);
  }
  return DAT_123be208;
}



/* --- CLevelEnGroupInfo::GetManagers_117e96b0 @ 117e96b0 --- */
// [RE-AUTO c3]
// id: CLevelEnGroupInfo::GetManagers
// strings:
//   ""CLevelEnGroupInfo::GetManagers""
//   ""CLevelEnGroupInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""
//   ""CLevelEnSubGroupInfo::GetManagers""
//   ""CLevelEnSubGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnGroupInfo::GetManagers
   strings:
     ""CLevelEnGroupInfo::GetManagers""
     ""CLevelEnGroupInfo""
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo""
     ""CLevelEnSubGroupInfo::GetManagers""
     ""CLevelEnSubGroupInfo"" */

void __fastcall CLevelEnGroupInfo__GetManagers_117e96b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbddc0;
  if ((DAT_123be228 & 1) == 0) {
    DAT_123be228 = DAT_123be228 | 1;
    FUN_102500e0("CLevelEnGroupInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6ea80);
  }
  if (((*DAT_123be208 == 0) && (iVar1 = FUN_11679e10(&local_8,"CLevelEnGroupInfo",0), iVar1 == 0))
     && ((DAT_123bdff8 & 1) == 0)) {
    DAT_123bdfc4 = 0;
    DAT_123bdfd4 = 0;
    DAT_123bdfd8 = 0;
    _DAT_123bdfdc = 0;
    DAT_123bdfe0 = 0;
    DAT_123bdff8 = DAT_123bdff8 | 1;
    DAT_123bdfc8 = 0;
    _DAT_123bdfcc = 0;
    _DAT_123bdfd0 = 0;
    DAT_123bdfc0 = &PTR_FUN_11dbdfe4;
    DAT_123bdfe4 = _DAT_11de9ae0;
    DAT_123bdfe8 = _UNK_11de9ae4;
    uRam123bdfec = _UNK_11de9ae8;
    DAT_123bdff0 = _UNK_11de9aec;
    DAT_123bdff4 = 1;
    FUN_11a8911f(&LAB_11cab460);
  }
  iVar3 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0x1c + iVar1 != iVar1) {
    iVar1 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x14);
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        _DAT_123bdbb4 = &DAT_123bdba4;
        DAT_123bdbb8 = &DAT_123bdba4;
        DAT_123bdba4 = 0;
        FUN_100d9260("CItemBaseInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
        if (DAT_123bdba0 == (int *)0x0) {
          DAT_123bdba0 = (int *)FUN_100dde50(4);
          *DAT_123bdba0 = 0;
          FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
        }
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar2 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar2 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cab400);
      }
      if (*(int *)(iVar3 + 0x18 + iVar1) != 0) {
        local_8 = &PTR_FUN_11dbddc8;
        if ((DAT_123be224 & 1) == 0) {
          DAT_123be224 = DAT_123be224 | 1;
          FUN_102500e0("CLevelEnSubGroupInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6ea50);
        }
        if (((*DAT_123be22c == 0) &&
            (iVar3 = FUN_11679e10(&local_8,"CLevelEnSubGroupInfo",0), iVar3 == 0)) &&
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
          FUN_11a8911f(&LAB_11cab4c0);
        }
      }
      iVar1 = iVar1 + 0x1c;
      local_c = local_c + 1;
    } while (local_c < (uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x1c));
  }
  return;
}



/* --- CLevelEnGroupInfo::GetManagers_118042c0 @ 118042c0 --- */
// [RE-AUTO c3]
// id: CLevelEnGroupInfo::GetManagers
// strings:
//   ""CLevelEnGroupInfo::GetManagers""
//   ""CLevelEnGroupInfo""
//   ""CLevelEnSubGroupInfo::GetManagers""
//   ""CLevelEnSubGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnGroupInfo::GetManagers
   strings:
     ""CLevelEnGroupInfo::GetManagers""
     ""CLevelEnGroupInfo""
     ""CLevelEnSubGroupInfo::GetManagers""
     ""CLevelEnSubGroupInfo"" */

void __fastcall CLevelEnGroupInfo__GetManagers_118042c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dbddc0;
  if ((DAT_123be228 & 1) == 0) {
    DAT_123be228 = DAT_123be228 | 1;
    FUN_102500e0("CLevelEnGroupInfo::GetManagers");
    FUN_11a8911f(&LAB_11c6ea80);
  }
  piVar2 = (int *)*DAT_123be208;
  if ((piVar2 == (int *)0x0) &&
     (piVar2 = (int *)FUN_11679e10(&local_8,"CLevelEnGroupInfo",0), piVar2 == (int *)0x0)) {
    if ((DAT_123bdff8 & 1) == 0) {
      DAT_123bdfc4 = 0;
      DAT_123bdfd4 = 0;
      DAT_123bdfd8 = 0;
      _DAT_123bdfdc = 0;
      DAT_123bdfe0 = 0;
      DAT_123bdff8 = DAT_123bdff8 | 1;
      DAT_123bdfc0 = &PTR_FUN_11dbdfe4;
      DAT_123bdfe4 = _DAT_11de9ae0;
      DAT_123bdfe8 = _UNK_11de9ae4;
      uRam123bdfec = _UNK_11de9ae8;
      DAT_123bdff0 = _UNK_11de9aec;
      DAT_123bdff4 = 1;
      DAT_123bdfc8 = piVar2;
      _DAT_123bdfcc = piVar2;
      _DAT_123bdfd0 = piVar2;
      FUN_11a8911f(&LAB_11cabaf0);
    }
    piVar2 = (int *)&DAT_123bdfc0;
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  iVar4 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) & 0xfffffffcU)) {
    do {
      local_8 = &PTR_FUN_11dbddc8;
      iVar5 = *(int *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
      if ((DAT_123be224 & 1) == 0) {
        DAT_123be224 = DAT_123be224 | 1;
        FUN_102500e0("CLevelEnSubGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6ea50);
      }
      puVar3 = (undefined *)*DAT_123be22c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CLevelEnSubGroupInfo",0),
         puVar3 == (undefined *)0x0)) {
        if ((DAT_123be0ac & 1) == 0) {
          DAT_123be078 = 0;
          DAT_123be088 = 0;
          DAT_123be08c = 0;
          _DAT_123be090 = 0;
          DAT_123be094 = 0;
          DAT_123be0ac = DAT_123be0ac | 1;
          _DAT_123be074 = &PTR_FUN_11dbe07c;
          DAT_123be098 = _DAT_11de9ae0;
          DAT_123be09c = _UNK_11de9ae4;
          uRam123be0a0 = _UNK_11de9ae8;
          DAT_123be0a4 = _UNK_11de9aec;
          DAT_123be0a8 = 1;
          DAT_123be07c = puVar3;
          _DAT_123be080 = puVar3;
          _DAT_123be084 = puVar3;
          FUN_11a8911f(&LAB_11cabb50);
        }
        puVar3 = &DAT_123be074;
      }
      if (((iVar5 != -1) &&
          (((iVar5 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)))) &&
         ((iVar5 = iVar5 - *(int *)(puVar3 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar3 + 0x24)))
         )) {
        iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar5 / *(int *)(puVar3 + 0x28)) * 4);
        if ((iVar1 != 0) &&
           (iVar5 = *(int *)(iVar1 + (iVar5 % *(int *)(puVar3 + 0x28)) * 4), iVar5 != 0)) {
          *(undefined4 *)(iVar5 + 0x94) = *(undefined4 *)(param_1 + 0x10);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2);
  }
  return;
}



/* --- CLevelEnGroupInfo::GetManagers_118ef910 @ 118ef910 --- */
// [RE-AUTO c3]
// id: CLevelEnGroupInfo::GetManagers
// calls: CLevelEnGroupInfo::GetManagers_118042c0
// strings:
//   ""CLevelEnGroupInfo::GetManagers""
//   ""CLevelEnGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnGroupInfo::GetManagers
   calls: CLevelEnGroupInfo::GetManagers_118042c0
   strings:
     ""CLevelEnGroupInfo::GetManagers""
     ""CLevelEnGroupInfo"" */

void CLevelEnGroupInfo__GetManagers_118ef910(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11dbddc0;
    if ((DAT_123be228 & 1) == 0) {
      DAT_123be228 = DAT_123be228 | 1;
      FUN_102500e0("CLevelEnGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6ea80);
    }
    piVar2 = (int *)*DAT_123be208;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CLevelEnGroupInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123bdff8 & 1) == 0) {
          DAT_123bdfc4 = 0;
          DAT_123bdfd4 = 0;
          DAT_123bdfd8 = 0;
          _DAT_123bdfdc = 0;
          DAT_123bdfe0 = 0;
          DAT_123bdff8 = DAT_123bdff8 | 1;
          DAT_123bdfc0 = &PTR_FUN_11dbdfe4;
          DAT_123bdfe4 = _DAT_11de9ae0;
          DAT_123bdfe8 = _UNK_11de9ae4;
          uRam123bdfec = _UNK_11de9ae8;
          DAT_123bdff0 = _UNK_11de9aec;
          DAT_123bdff4 = 1;
          DAT_123bdfc8 = piVar2;
          _DAT_123bdfcc = piVar2;
          _DAT_123bdfd0 = piVar2;
          FUN_11a8911f(&LAB_11cb07b0);
        }
        piVar2 = (int *)&DAT_123bdfc0;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11dbddc0;
    if ((DAT_123be228 & 1) == 0) {
      DAT_123be228 = DAT_123be228 | 1;
      FUN_102500e0("CLevelEnGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6ea80);
    }
    piVar2 = (int *)*DAT_123be208;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CLevelEnGroupInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123bdff8 & 1) == 0) {
          DAT_123bdfc4 = 0;
          DAT_123bdfd4 = 0;
          DAT_123bdfd8 = 0;
          _DAT_123bdfdc = 0;
          DAT_123bdfe0 = 0;
          DAT_123bdff8 = DAT_123bdff8 | 1;
          DAT_123bdfc0 = &PTR_FUN_11dbdfe4;
          DAT_123bdfe4 = _DAT_11de9ae0;
          DAT_123bdfe8 = _UNK_11de9ae4;
          uRam123bdfec = _UNK_11de9ae8;
          DAT_123bdff0 = _UNK_11de9aec;
          DAT_123bdff4 = 1;
          DAT_123bdfc8 = piVar2;
          _DAT_123bdfcc = piVar2;
          _DAT_123bdfd0 = piVar2;
          FUN_11a8911f(&LAB_11cb07b0);
        }
        piVar2 = (int *)&DAT_123bdfc0;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      CLevelEnGroupInfo__GetManagers_118042c0(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



/* --- CLevelEnGroupInfo::GetManagers_11a5de80 @ 11a5de80 --- */
// [RE-AUTO c3]
// id: CLevelEnGroupInfo::GetManagers
// strings:
//   ""CLevelEnGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CLevelEnGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelEnGroupInfo::GetManagers
   strings:
     ""CLevelEnGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CLevelEnGroupInfo"" */

void __fastcall CLevelEnGroupInfo__GetManagers_11a5de80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      local_8 = &PTR_FUN_11dbddc0;
      if ((DAT_123be228 & 1) == 0) {
        DAT_123be228 = DAT_123be228 | 1;
        _DAT_123be21c = &DAT_123be20c;
        DAT_123be220 = &DAT_123be20c;
        DAT_123be20c = 0;
        FUN_100d9260("CLevelEnGroupInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123be208 = (int *)FUN_100dfd90(DAT_123be220);
        if (DAT_123be208 == (int *)0x0) {
          DAT_123be208 = (int *)FUN_100dde50(4);
          *DAT_123be208 = 0;
          FUN_100dfdc0(DAT_123be220,DAT_123be208);
        }
        FUN_11a8911f(&LAB_11c6ea80);
      }
      if (((*DAT_123be208 == 0) &&
          (iVar1 = FUN_11679e10(&local_8,"CLevelEnGroupInfo",0), iVar1 == 0)) &&
         ((DAT_123bdff8 & 1) == 0)) {
        DAT_123bdfc4 = 0;
        DAT_123bdfd4 = 0;
        DAT_123bdfd8 = 0;
        _DAT_123bdfdc = 0;
        DAT_123bdfe0 = 0;
        DAT_123bdff8 = DAT_123bdff8 | 1;
        DAT_123bdfc8 = 0;
        _DAT_123bdfcc = 0;
        _DAT_123bdfd0 = 0;
        DAT_123bdfc0 = &PTR_FUN_11dbdfe4;
        DAT_123bdfe4 = _DAT_11de9ae0;
        DAT_123bdfe8 = _UNK_11de9ae4;
        uRam123bdfec = _UNK_11de9ae8;
        DAT_123bdff0 = _UNK_11de9aec;
        DAT_123bdff4 = 1;
        FUN_11a8911f(&LAB_11cb7370);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return;
}



