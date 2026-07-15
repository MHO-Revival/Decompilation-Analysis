// ===== class CSculptureLibInfo  (5 recovered methods) =====

/* --- CSculptureLibInfo::GetManagers @ 1197f890 --- */
// [RE-AUTO c3]
// id: CSculptureLibInfo::GetManagers
// strings:
//   ""CSculptureLibInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSculptureLibInfo::GetManagers
   strings:
     ""CSculptureLibInfo::GetManagers"" */

undefined * CSculptureLibInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d64dc4;
  if (param_3 == 0) {
    if ((DAT_123a15c8 & 1) == 0) {
      DAT_123a15c8 = DAT_123a15c8 | 1;
      FUN_102500e0("CSculptureLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3780);
    }
    if ((undefined *)*DAT_123a15ac != (undefined *)0x0) {
      return (undefined *)*DAT_123a15ac;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_123a1664 & 1) == 0) {
      DAT_123a1664 = DAT_123a1664 | 1;
      FUN_1197fcb0();
      FUN_11a8911f(&LAB_11cb3720);
    }
    puVar1 = &DAT_123a162c;
  }
  return puVar1;
}



/* --- CSculptureLibInfo::GetManagers_119809c0 @ 119809c0 --- */
// [RE-AUTO c3]
// id: CSculptureLibInfo::GetManagers
// strings:
//   ""CSculptureLibInfo::GetManagers""

/* [RE-AUTO c3]
   id: CSculptureLibInfo::GetManagers
   strings:
     ""CSculptureLibInfo::GetManagers"" */

undefined4 CSculptureLibInfo__GetManagers_119809c0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_123a15c8 & 1) == 0) {
      DAT_123a15c8 = DAT_123a15c8 | 1;
      FUN_102500e0("CSculptureLibInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb3780);
    }
    return *DAT_123a15ac;
  }
  return 0;
}



/* --- CSculptureLibInfo::GetManagers_11980d60 @ 11980d60 --- */
// [RE-AUTO c3]
// id: CSculptureLibInfo::GetManagers
// calls: CSculptureLibInfo::GetManagers
// strings:
//   ""CSculptureLibInfo""
//   ""CSculptureLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureLibInfo::GetManagers
   calls: CSculptureLibInfo::GetManagers
   strings:
     ""CSculptureLibInfo""
     ""CSculptureLibInfo::GetManagers"" */

void CSculptureLibInfo__GetManagers_11980d60(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CSculptureLibInfo__GetManagers(0,"CSculptureLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d64dc4;
      if ((DAT_123a15c8 & 1) == 0) {
        DAT_123a15c8 = DAT_123a15c8 | 1;
        FUN_102500e0("CSculptureLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb3780);
      }
      if (((*DAT_123a15ac == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CSculptureLibInfo",0), iVar3 == 0)) &&
         ((DAT_123a1664 & 1) == 0)) {
        DAT_123a1630 = 0;
        DAT_123a1640 = 0;
        DAT_123a1644 = 0;
        _DAT_123a1648 = 0;
        uRam123a164c = 0;
        DAT_123a1664 = DAT_123a1664 | 1;
        _DAT_123a162c = &PTR_FUN_11d64e00;
        _DAT_123a1650 = _DAT_11de9ae0;
        uRam123a1654 = _UNK_11de9ae4;
        uRam123a1658 = _UNK_11de9ae8;
        uRam123a165c = _UNK_11de9aec;
        DAT_123a1660 = 1;
        DAT_123a1634 = iVar3;
        _DAT_123a1638 = iVar3;
        _DAT_123a163c = iVar3;
        FUN_11a8911f(&LAB_11cb3720);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_11a53a80();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSculptureLibInfo::GetManagers_11981030 @ 11981030 --- */
// [RE-AUTO c3]
// id: CSculptureLibInfo::GetManagers
// calls: CSculptureLibInfo::GetManagers
// strings:
//   ""CSculptureLibInfo""
//   ""CSculptureLibInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureLibInfo::GetManagers
   calls: CSculptureLibInfo::GetManagers
   strings:
     ""CSculptureLibInfo""
     ""CSculptureLibInfo::GetManagers"" */

void CSculptureLibInfo__GetManagers_11981030(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)CSculptureLibInfo__GetManagers(0,"CSculptureLibInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11d64dc4;
      if ((DAT_123a15c8 & 1) == 0) {
        DAT_123a15c8 = DAT_123a15c8 | 1;
        FUN_102500e0("CSculptureLibInfo::GetManagers");
        FUN_11a8911f(&LAB_11cb3780);
      }
      if (((*DAT_123a15ac == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CSculptureLibInfo",0), iVar3 == 0)) &&
         ((DAT_123a1664 & 1) == 0)) {
        DAT_123a1630 = 0;
        DAT_123a1640 = 0;
        DAT_123a1644 = 0;
        _DAT_123a1648 = 0;
        uRam123a164c = 0;
        DAT_123a1664 = DAT_123a1664 | 1;
        _DAT_123a162c = &PTR_FUN_11d64e00;
        _DAT_123a1650 = _DAT_11de9ae0;
        uRam123a1654 = _UNK_11de9ae4;
        uRam123a1658 = _UNK_11de9ae8;
        uRam123a165c = _UNK_11de9aec;
        DAT_123a1660 = 1;
        DAT_123a1634 = iVar3;
        _DAT_123a1638 = iVar3;
        _DAT_123a163c = iVar3;
        FUN_11a8911f(&LAB_11cb3720);
      }
      local_8 = &PTR_FUN_11da54a8;
      CSculptureInfo__GetManagers_11a53910();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSculptureLibInfo::GetManagers_11a540b0 @ 11a540b0 --- */
// [RE-AUTO c3]
// id: CSculptureLibInfo::GetManagers
// strings:
//   ""CSculptureLibInfo::GetManagers""
//   ""CSculptureLibInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSculptureLibInfo::GetManagers
   strings:
     ""CSculptureLibInfo::GetManagers""
     ""CSculptureLibInfo""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

undefined4 * __fastcall CSculptureLibInfo__GetManagers_11a540b0(int param_1)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d64dc4;
  if ((DAT_123a15c8 & 1) == 0) {
    DAT_123a15c8 = DAT_123a15c8 | 1;
    FUN_102500e0("CSculptureLibInfo::GetManagers");
    FUN_11a8911f(&LAB_11cb3780);
  }
  puVar1 = (undefined4 *)*DAT_123a15ac;
  if ((puVar1 == (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)FUN_11679e10(&local_8,"CSculptureLibInfo",0),
     puVar1 == (undefined4 *)0x0)) {
    if ((DAT_123a1664 & 1) == 0) {
      DAT_123a1630 = 0;
      DAT_123a1640 = 0;
      DAT_123a1644 = 0;
      _DAT_123a1648 = 0;
      uRam123a164c = 0;
      DAT_123a1664 = DAT_123a1664 | 1;
      DAT_123a1634 = 0;
      _DAT_123a1638 = 0;
      _DAT_123a163c = 0;
      _DAT_123a162c = &PTR_FUN_11d64e00;
      _DAT_123a1650 = _DAT_11de9ae0;
      uRam123a1654 = _UNK_11de9ae4;
      uRam123a1658 = _UNK_11de9ae8;
      uRam123a165c = _UNK_11de9aec;
      DAT_123a1660 = 1;
      FUN_11a8911f(&LAB_11cb7210);
    }
    puVar1 = (undefined4 *)&DAT_123a162c;
  }
  if (0 < *(int *)(param_1 + 0x58)) {
    local_8 = &PTR_FUN_11da5518;
    if ((DAT_123bdbfc & 1) == 0) {
      DAT_123bdbfc = DAT_123bdbfc | 1;
      FUN_102500e0("CItemBaseInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6e610);
    }
    puVar1 = (undefined4 *)*DAT_123bdba0;
    if ((puVar1 == (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0), puVar1 == (undefined4 *)0x0
       )) {
      if ((DAT_123bdc00 & 1) == 0) {
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
        FUN_11a8911f(&LAB_11cb71b0);
      }
      puVar1 = &DAT_123bdbc0;
    }
  }
  return puVar1;
}



