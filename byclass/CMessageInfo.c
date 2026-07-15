// ===== class CMessageInfo  (3 recovered methods) =====

/* --- CMessageInfo::GetManagers @ 1024f650 --- */
// [RE-AUTO c3]
// id: CMessageInfo::GetManagers
// strings:
//   ""CMessageInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMessageInfo::GetManagers
   strings:
     ""CMessageInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMessageInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bda14 & 1) == 0) {
    DAT_123bda14 = DAT_123bda14 | 1;
    _DAT_123bdb74 = &DAT_123bdb64;
    DAT_123bdb78 = &DAT_123bdb64;
    DAT_123bdb64 = 0;
    FUN_100d83d0("CMessageInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6e3f0);
  }
  return DAT_123bdb60;
}



/* --- CMessageInfo::GetManagers_11263af0 @ 11263af0 --- */
// [RE-AUTO c3]
// id: CMessageInfo::GetManagers
// calls: puts, exit, memcpy
// strings:
//   ""out of memory\n""
//   ""CMessageInfo::GetManagers""
//   ""CMessageInfo""

/* [RE-AUTO c3]
   id: CMessageInfo::GetManagers
   calls: puts, exit, memcpy
   strings:
     ""out of memory\n""
     ""CMessageInfo::GetManagers""
     ""CMessageInfo"" */

void CMessageInfo__GetManagers_11263af0(int *param_1)

{
  int iVar1;
  undefined ***pppuVar2;
  int *piVar3;
  undefined ****ppppuVar4;
  char cVar5;
  size_t _Size;
  void *pvVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *_Src;
  int iVar10;
  undefined ***pppuStack_50;
  char *pcStack_4c;
  int *piStack_48;
  undefined1 local_38 [4];
  size_t local_34;
  int *local_30;
  undefined4 local_29;
  undefined **local_24;
  int local_20 [3];
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  local_14 = (int *)0x0;
  uVar8 = 0;
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  if ((char)param_1[4] != '\0') {
    puVar9 = (undefined4 *)((int)param_1 + 0x11);
    do {
      piVar3 = local_10;
      cVar5 = *(char *)(puVar9 + 1);
      if (cVar5 == '\x01') {
        piStack_48 = (int *)*puVar9;
        pcStack_4c = *(char **)((int)puVar9 + 5);
        pppuStack_50 = (undefined ***)0x11263b35;
        local_24 = (undefined **)FUN_1024e8a0();
      }
      else if (cVar5 == '\x02') {
        piStack_48 = (int *)*puVar9;
        pcStack_4c = *(char **)((int)puVar9 + 9);
        pppuStack_50 = *(undefined ****)((int)puVar9 + 5);
        local_24 = (undefined **)FUN_1024ed30();
      }
      else if (cVar5 == '\x03') {
        piStack_48 = (int *)*puVar9;
        pppuStack_50 = *(undefined ****)((int)puVar9 + 5);
        pcStack_4c = (char *)0x2;
        local_24 = (undefined **)FUN_1024e830();
      }
      else {
        _Src = local_14;
        if (cVar5 != '\x04') goto LAB_11263da7;
        piStack_48 = (int *)*puVar9;
        pcStack_4c = (char *)((int)puVar9 + 5);
        pppuStack_50 = (undefined ***)0x11263b7d;
        local_24 = (undefined **)FUN_1024e9b0();
      }
      _Src = local_14;
      if (local_24 == (undefined **)0x0) goto LAB_11263da7;
      if (piVar3 == local_c) {
        piStack_48 = (int *)0x1;
        pcStack_4c = (char *)0x1;
        pppuStack_50 = (undefined ***)&local_29;
        FUN_10899eb0(piVar3,&local_24);
      }
      else {
        *piVar3 = (int)local_24;
        local_10 = piVar3 + 1;
      }
      uVar8 = uVar8 + 1;
      puVar9 = (undefined4 *)((int)puVar9 + 0x45);
    } while (uVar8 < *(byte *)(local_30 + 4));
  }
  piVar3 = local_10;
  _Src = local_14;
  piStack_48 = (int *)0x11263bd0;
  FUN_100e5570();
  local_24 = (undefined **)&pppuStack_50;
  _Size = (int)piVar3 - (int)_Src;
  uVar8 = (int)_Size >> 2;
  pppuStack_50 = (undefined ***)0x0;
  pcStack_4c = (char *)0x0;
  piStack_48 = (int *)0x0;
  local_34 = _Size;
  if (0x3fffffff < uVar8) {
    local_24 = (undefined **)&pppuStack_50;
    puts("out of memory\n");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (uVar8 != 0) {
    local_24 = (undefined **)&pppuStack_50;
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar8 << 2);
  }
  puVar7 = (undefined *)0x0;
  pppuStack_50 = (undefined ***)0x0;
  pcStack_4c = (char *)0x0;
  piStack_48 = (int *)0x0;
  ppppuVar4 = &pppuStack_50;
  if (piVar3 != _Src) {
    pvVar6 = memcpy((void *)0x0,_Src,_Size);
    puVar7 = (undefined *)(_Size + (int)pvVar6);
    ppppuVar4 = (undefined ****)local_24;
  }
  local_24 = (undefined **)ppppuVar4;
  piVar3 = local_30;
  local_24[1] = puVar7;
  cVar5 = FUN_1024edc0((int)&local_29 + 1,local_38,*piVar3);
  if (cVar5 != '\0') {
    iVar10 = *piVar3;
    local_24 = &PTR_FUN_11da53ac;
    if ((DAT_123bda14 & 1) == 0) {
      DAT_123bda14 = DAT_123bda14 | 1;
      piStack_48 = (int *)0x11da5294;
      pcStack_4c = (char *)0x11263caa;
      FUN_102500e0();
      pcStack_4c = &LAB_11c6e3f0;
      pppuStack_50 = (undefined ***)0x11263cb4;
      FUN_11a8911f();
    }
    piStack_48 = (int *)*DAT_123bdb60;
    if (piStack_48 == (int *)0x0) {
      pppuStack_50 = &local_24;
      pcStack_4c = "CMessageInfo";
      piStack_48 = (int *)FUN_11679e10();
      if (piStack_48 == (int *)0x0) {
        if ((DAT_123bda8c & 1) == 0) {
          DAT_123bda8c = DAT_123bda8c | 1;
          piStack_48 = (int *)0x11263cf5;
          FUN_10253080();
          piStack_48 = (int *)&LAB_11c98d10;
          pcStack_4c = (char *)0x11263cff;
          FUN_11a8911f();
        }
        piStack_48 = (int *)&DAT_123bda54;
      }
    }
    local_24 = &PTR_FUN_11da54a8;
    if ((iVar10 != -1) &&
       ((((iVar10 != 0 || (*(int *)((int)piStack_48 + 0x30) == 0)) &&
         (*(int *)((int)piStack_48 + 0x28) != 0)) &&
        ((iVar10 = iVar10 - *(int *)((int)piStack_48 + 0x30), -1 < iVar10 &&
         (iVar10 < *(int *)((int)piStack_48 + 0x24))))))) {
      iVar1 = *(int *)(*(int *)((int)piStack_48 + 0x20) +
                      (iVar10 / *(int *)((int)piStack_48 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         (pppuVar2 = *(undefined ****)(iVar1 + (iVar10 % *(int *)((int)piStack_48 + 0x28)) * 4),
         pppuVar2 != (undefined ***)0x0)) {
        piStack_48 = local_20;
        if (*(int *)((int)piVar3 + 0x16a) == 0) {
          pcStack_4c = (char *)0x11263d7c;
          iVar10 = FUN_100e5a30();
          pcStack_4c = *(char **)(iVar10 + 0x14);
          pppuStack_50 = pppuVar2;
          thunk_FUN_1112f700();
        }
        else {
          pcStack_4c = (char *)0x11263d5c;
          iVar10 = FUN_100e5a30();
          pcStack_4c = *(char **)((int)piVar3 + 0x16a);
          pppuStack_50 = (undefined ***)((int)piVar3 + 0x16e);
          FUN_1112f320(pppuVar2,*(undefined4 *)(iVar10 + 0x14));
        }
        if ((local_c != local_20) && (local_c != (int *)0x0)) {
          piStack_48 = local_c;
          pcStack_4c = (char *)0x11263d9c;
          FUN_10c3d5d0();
        }
      }
    }
  }
  piStack_48 = (int *)0x11263da7;
  FUN_100e5670();
LAB_11263da7:
  if (_Src != (int *)0x0) {
    pcStack_4c = (char *)0x11263db1;
    piStack_48 = _Src;
    FUN_10c3d5d0();
  }
  FUN_11a89daa();
  return;
}



/* --- CMessageInfo::GetManagers_118e12a0 @ 118e12a0 --- */
// [RE-AUTO c3]
// id: CMessageInfo::GetManagers
// strings:
//   ""CMessageInfo""
//   ""CMessageInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMessageInfo::GetManagers
   strings:
     ""CMessageInfo""
     ""CMessageInfo::GetManagers"" */

void CMessageInfo__GetManagers_118e12a0(undefined **param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  
  piVar3 = (int *)FUN_10252850(0,"CMessageInfo",0);
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  uVar2 = param_1;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      param_1 = &PTR_FUN_11da53ac;
      if ((DAT_123bda14 & 1) == 0) {
        DAT_123bda14 = DAT_123bda14 | 1;
        FUN_102500e0("CMessageInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e3f0);
      }
      puVar5 = (undefined *)*DAT_123bdb60;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&param_1,"CMessageInfo",0), puVar5 == (undefined *)0x0)
         ) {
        if ((DAT_123bda8c & 1) == 0) {
          DAT_123bda58 = 0;
          DAT_123bda68 = 0;
          DAT_123bda6c = 0;
          _DAT_123bda70 = 0;
          DAT_123bda74 = 0;
          DAT_123bda8c = DAT_123bda8c | 1;
          _DAT_123bda54 = &PTR_FUN_11da5408;
          DAT_123bda78 = _DAT_11de9ae0;
          DAT_123bda7c = _UNK_11de9ae4;
          uRam123bda80 = _UNK_11de9ae8;
          DAT_123bda84 = _UNK_11de9aec;
          DAT_123bda88 = 1;
          DAT_123bda5c = puVar5;
          _DAT_123bda60 = puVar5;
          _DAT_123bda64 = puVar5;
          FUN_11a8911f(&LAB_11cb0390);
        }
        puVar5 = &DAT_123bda54;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar6) && (iVar6 < *(int *)(puVar5 + 0x18) - *(int *)(puVar5 + 0x14) >> 2)) &&
         (iVar1 = *(int *)(*(int *)(puVar5 + 0x14) + iVar6 * 4), iVar1 != 0)) {
        CMessageColorInfo__GetManagers_118e1b70(iVar1,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}



