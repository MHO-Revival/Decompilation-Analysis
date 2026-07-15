// ===== class CGiftBagInfo  (6 recovered methods) =====

/* --- CGiftBagInfo::GetManagers @ 108fc460 --- */
// [RE-AUTO c3]
// id: CGiftBagInfo::GetManagers
// strings:
//   ""CGiftBagInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGiftBagInfo::GetManagers
   strings:
     ""CGiftBagInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CGiftBagInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bfd0c & 1) == 0) {
    DAT_123bfd0c = DAT_123bfd0c | 1;
    _DAT_123bfd04 = &DAT_123bfcf4;
    DAT_123bfd08 = &DAT_123bfcf4;
    DAT_123bfcf4 = 0;
    FUN_100d83d0("CGiftBagInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c76c70);
  }
  return DAT_123bfcf0;
}



/* --- CGiftBagInfo::GetManagers_117fad20 @ 117fad20 --- */
// [RE-AUTO c3]
// id: CGiftBagInfo::GetManagers
// calls: CGiftBagGroupInfo::GetManagers
// strings:
//   ""CGiftBagGroupInfo""
//   ""CGiftBagInfo""
//   ""CGiftBagInfo::GetManagers""

/* [RE-AUTO c3]
   id: CGiftBagInfo::GetManagers
   calls: CGiftBagGroupInfo::GetManagers
   strings:
     ""CGiftBagGroupInfo""
     ""CGiftBagInfo""
     ""CGiftBagInfo::GetManagers"" */

void __fastcall CGiftBagInfo__GetManagers_117fad20(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined **local_8;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
  iVar1 = CGiftBagGroupInfo__GetManagers(0,"CGiftBagGroupInfo",0);
  if (((iVar6 != -1) &&
      (((iVar6 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar4 = *(int *)(iVar1 + 0x28), iVar4 != 0)))) &&
     ((iVar6 = iVar6 - *(int *)(iVar1 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar6 / iVar4) * 4);
    if ((iVar1 != 0) &&
       ((iVar6 = *(int *)(iVar1 + (iVar6 % iVar4) * 4), iVar6 != 0 &&
        (*(int *)(param_1 + 0x30) = iVar6, *(int *)(*(int *)(iVar6 + 0x2c) + 0x2c) == 1)))) {
      piVar2 = (int *)FUN_108ff4c0(0,"CGiftBagInfo",0);
      iVar6 = (**(code **)(*piVar2 + 0x28))();
      iVar1 = 0;
      if (0 < iVar6) {
        do {
          local_8 = &PTR_FUN_11dd82c0;
          if ((DAT_123bfd0c & 1) == 0) {
            DAT_123bfd0c = DAT_123bfd0c | 1;
            FUN_102500e0("CGiftBagInfo::GetManagers");
            FUN_11a8911f(&LAB_11c76c70);
          }
          puVar3 = (undefined4 *)*DAT_123bfcf0;
          if ((puVar3 == (undefined4 *)0x0) &&
             (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CGiftBagInfo",0),
             puVar3 == (undefined4 *)0x0)) {
            if ((DAT_123bfcac & 1) == 0) {
              DAT_123bfcac = DAT_123bfcac | 1;
              FUN_108ff900();
              FUN_11a8911f(&LAB_11cab980);
            }
            puVar3 = &DAT_123bfcb8;
          }
          local_8 = &PTR_FUN_11da54a8;
          if ((((-1 < iVar1) && (iVar1 < (int)(puVar3[6] - puVar3[5]) >> 2)) &&
              (iVar4 = *(int *)(puVar3[5] + iVar1 * 4), iVar4 != 0)) &&
             ((*(int *)(*(int *)(iVar4 + 0x2c) + 0x10) == 1 &&
              (iVar4 = FUN_117faa80(), *(int *)(param_1 + 0x34) < iVar4)))) {
            uVar5 = FUN_117faa80();
            *(undefined4 *)(param_1 + 0x34) = uVar5;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar6);
      }
    }
  }
  return;
}



/* --- CGiftBagInfo::GetManagers_11945a30 @ 11945a30 --- */
// [RE-AUTO c3]
// id: CGiftBagInfo::GetManagers
// strings:
//   ""CGiftBagInfo""
//   ""CGiftBagInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGiftBagInfo::GetManagers
   strings:
     ""CGiftBagInfo""
     ""CGiftBagInfo::GetManagers"" */

void CGiftBagInfo__GetManagers_11945a30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108ff4c0(0,"CGiftBagInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd82c0;
      if ((DAT_123bfd0c & 1) == 0) {
        DAT_123bfd0c = DAT_123bfd0c | 1;
        FUN_102500e0("CGiftBagInfo::GetManagers");
        FUN_11a8911f(&LAB_11c76c70);
      }
      if (((*DAT_123bfcf0 == 0) && (iVar3 = FUN_11679e10(&local_8,"CGiftBagInfo",0), iVar3 == 0)) &&
         ((DAT_123bfcac & 1) == 0)) {
        DAT_123bfcbc = 0;
        DAT_123bfccc = 0;
        DAT_123bfcd0 = 0;
        _DAT_123bfcd4 = 0;
        uRam123bfcd8 = 0;
        DAT_123bfcac = DAT_123bfcac | 1;
        DAT_123bfcb8 = &PTR_FUN_11dd8260;
        _DAT_123bfcdc = _DAT_11de9ae0;
        uRam123bfce0 = _UNK_11de9ae4;
        uRam123bfce4 = _UNK_11de9ae8;
        uRam123bfce8 = _UNK_11de9aec;
        DAT_123bfcec = 1;
        DAT_123bfcc0 = iVar3;
        _DAT_123bfcc4 = iVar3;
        _DAT_123bfcc8 = iVar3;
        FUN_11a8911f(&LAB_11cb26a0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_117faeb0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGiftBagInfo::GetManagers_11945cd0 @ 11945cd0 --- */
// [RE-AUTO c3]
// id: CGiftBagInfo::GetManagers
// calls: CGiftBagInfo::GetManagers_117fad20
// strings:
//   ""CGiftBagInfo""
//   ""CGiftBagInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGiftBagInfo::GetManagers
   calls: CGiftBagInfo::GetManagers_117fad20
   strings:
     ""CGiftBagInfo""
     ""CGiftBagInfo::GetManagers"" */

void CGiftBagInfo__GetManagers_11945cd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108ff4c0(0,"CGiftBagInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd82c0;
      if ((DAT_123bfd0c & 1) == 0) {
        DAT_123bfd0c = DAT_123bfd0c | 1;
        FUN_102500e0("CGiftBagInfo::GetManagers");
        FUN_11a8911f(&LAB_11c76c70);
      }
      if (((*DAT_123bfcf0 == 0) && (iVar3 = FUN_11679e10(&local_8,"CGiftBagInfo",0), iVar3 == 0)) &&
         ((DAT_123bfcac & 1) == 0)) {
        DAT_123bfcbc = 0;
        DAT_123bfccc = 0;
        DAT_123bfcd0 = 0;
        _DAT_123bfcd4 = 0;
        uRam123bfcd8 = 0;
        DAT_123bfcac = DAT_123bfcac | 1;
        DAT_123bfcb8 = &PTR_FUN_11dd8260;
        _DAT_123bfcdc = _DAT_11de9ae0;
        uRam123bfce0 = _UNK_11de9ae4;
        uRam123bfce4 = _UNK_11de9ae8;
        uRam123bfce8 = _UNK_11de9aec;
        DAT_123bfcec = 1;
        DAT_123bfcc0 = iVar3;
        _DAT_123bfcc4 = iVar3;
        _DAT_123bfcc8 = iVar3;
        FUN_11a8911f(&LAB_11cb26a0);
      }
      local_8 = &PTR_FUN_11da54a8;
      CGiftBagInfo__GetManagers_117fad20();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGiftBagInfo::GetManagers_11a33cd0 @ 11a33cc0 --- */
// [RE-AUTO c0]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __fastcall CGiftBagInfo__GetManagers_11a33cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **ppuStack_c;
  undefined1 uStack_5;
  
  piVar1 = (int *)FUN_108ff4c0(0,"CGiftBagInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      ppuStack_c = &PTR_FUN_11dd82c0;
      if ((DAT_123bfd0c & 1) == 0) {
        DAT_123bfd0c = DAT_123bfd0c | 1;
        FUN_102500e0("CGiftBagInfo::GetManagers");
        FUN_11a8911f(&LAB_11c76c70);
      }
      puVar3 = (undefined4 *)*DAT_123bfcf0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_11679e10(&ppuStack_c,"CGiftBagInfo",0);
        if (puVar3 == (undefined4 *)0x0) {
          if ((DAT_123bfcac & 1) == 0) {
            DAT_123bfcbc = 0;
            DAT_123bfccc = 0;
            DAT_123bfcd0 = 0;
            _DAT_123bfcd4 = 0;
            uRam123bfcd8 = 0;
            DAT_123bfcac = DAT_123bfcac | 1;
            DAT_123bfcb8 = &PTR_FUN_11dd8260;
            _DAT_123bfcdc = _DAT_11de9ae0;
            uRam123bfce0 = _UNK_11de9ae4;
            uRam123bfce4 = _UNK_11de9ae8;
            uRam123bfce8 = _UNK_11de9aec;
            DAT_123bfcec = 1;
            DAT_123bfcc0 = puVar3;
            _DAT_123bfcc4 = puVar3;
            _DAT_123bfcc8 = puVar3;
            FUN_11a8911f(&LAB_11cb6430);
          }
          puVar3 = &DAT_123bfcb8;
        }
      }
      if ((iVar4 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar4)) {
        ppuStack_c = (undefined **)0x0;
      }
      else {
        ppuStack_c = *(undefined ***)(puVar3[5] + iVar4 * 4);
      }
      if ((ppuStack_c != (undefined **)0x0) &&
         (*(int *)(ppuStack_c[0xb] + 0x10) == *(int *)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x34);
        if (piVar1 == *(int **)(param_1 + 0x38)) {
          FUN_11791ec0(piVar1,&ppuStack_c,&uStack_5,1,1);
        }
        else {
          *piVar1 = (int)ppuStack_c;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CGiftBagInfo::GetManagers_11a33cd0 @ 11a33cd0 --- */
// [RE-AUTO c3]
// id: CGiftBagInfo::GetManagers
// strings:
//   ""CGiftBagInfo""
//   ""CGiftBagInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CGiftBagInfo::GetManagers
   strings:
     ""CGiftBagInfo""
     ""CGiftBagInfo::GetManagers"" */

void __fastcall CGiftBagInfo__GetManagers_11a33cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined **local_c;
  undefined1 local_5;
  
  piVar1 = (int *)FUN_108ff4c0(0,"CGiftBagInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_c = &PTR_FUN_11dd82c0;
      if ((DAT_123bfd0c & 1) == 0) {
        DAT_123bfd0c = DAT_123bfd0c | 1;
        FUN_102500e0("CGiftBagInfo::GetManagers");
        FUN_11a8911f(&LAB_11c76c70);
      }
      puVar3 = (undefined4 *)*DAT_123bfcf0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_11679e10(&local_c,"CGiftBagInfo",0);
        if (puVar3 == (undefined4 *)0x0) {
          if ((DAT_123bfcac & 1) == 0) {
            DAT_123bfcbc = 0;
            DAT_123bfccc = 0;
            DAT_123bfcd0 = 0;
            _DAT_123bfcd4 = 0;
            uRam123bfcd8 = 0;
            DAT_123bfcac = DAT_123bfcac | 1;
            DAT_123bfcb8 = &PTR_FUN_11dd8260;
            _DAT_123bfcdc = _DAT_11de9ae0;
            uRam123bfce0 = _UNK_11de9ae4;
            uRam123bfce4 = _UNK_11de9ae8;
            uRam123bfce8 = _UNK_11de9aec;
            DAT_123bfcec = 1;
            DAT_123bfcc0 = puVar3;
            _DAT_123bfcc4 = puVar3;
            _DAT_123bfcc8 = puVar3;
            FUN_11a8911f(&LAB_11cb6430);
          }
          puVar3 = &DAT_123bfcb8;
        }
      }
      if ((iVar4 < 0) || ((int)(puVar3[6] - puVar3[5]) >> 2 <= iVar4)) {
        local_c = (undefined **)0x0;
      }
      else {
        local_c = *(undefined ***)(puVar3[5] + iVar4 * 4);
      }
      if ((local_c != (undefined **)0x0) &&
         (*(int *)(local_c[0xb] + 0x10) == *(int *)(param_1 + 0x10))) {
        piVar1 = *(int **)(param_1 + 0x34);
        if (piVar1 == *(int **)(param_1 + 0x38)) {
          FUN_11791ec0(piVar1,&local_c,&local_5,1,1);
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



