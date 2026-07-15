// ===== class CSpeakInfo  (4 recovered methods) =====

/* --- CSpeakInfo::GetManagers @ 10895810 --- */
// [RE-AUTO c3]
// id: CSpeakInfo::GetManagers
// strings:
//   ""CSpeakInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpeakInfo::GetManagers
   strings:
     ""CSpeakInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CSpeakInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bf96c & 1) == 0) {
    DAT_123bf96c = DAT_123bf96c | 1;
    _DAT_123bf984 = &DAT_123bf974;
    DAT_123bf988 = &DAT_123bf974;
    DAT_123bf974 = 0;
    FUN_100d83d0("CSpeakInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c746f0);
  }
  return DAT_123bf970;
}



/* --- CSpeakInfo::GetManagers_115b9090 @ 115b9090 --- */
// [RE-AUTO c3]
// id: CSpeakInfo::GetManagers
// calls: memcpy
// strings:
//   ""CSpeakInfo::GetManagers""
//   ""CSpeakInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpeakInfo::GetManagers
   calls: memcpy
   strings:
     ""CSpeakInfo::GetManagers""
     ""CSpeakInfo"" */

void __thiscall CSpeakInfo__GetManagers_115b9090(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  size_t _Size;
  undefined **_Src;
  undefined1 local_50 [24];
  int local_38;
  int local_34;
  int *local_30;
  undefined **local_2c;
  char local_25;
  uint local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar8 = *param_2;
  piVar9 = param_2;
  local_38 = param_1;
  if (iVar8 < 0x29) {
    if (0 < iVar8) goto LAB_115b90c2;
  }
  else {
    iVar8 = 0x28;
LAB_115b90c2:
    do {
      piVar1 = (int *)piVar9[1];
      local_2c = &PTR_FUN_11dd3158;
      local_30 = piVar1;
      if ((DAT_123bf96c & 1) == 0) {
        DAT_123bf96c = DAT_123bf96c | 1;
        FUN_102500e0("CSpeakInfo::GetManagers");
        FUN_11a8911f(&LAB_11c746f0);
      }
      puVar5 = (undefined *)*DAT_123bf970;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&local_2c,"CSpeakInfo",0), puVar5 == (undefined *)0x0))
      {
        if ((DAT_123bf928 & 1) == 0) {
          DAT_123bf930 = 0;
          DAT_123bf940 = 0;
          DAT_123bf944 = 0;
          _DAT_123bf948 = 0;
          DAT_123bf94c = 0;
          DAT_123bf928 = DAT_123bf928 | 1;
          _DAT_123bf92c = &PTR_FUN_11dd3160;
          DAT_123bf950 = _DAT_11de9ae0;
          DAT_123bf954 = _UNK_11de9ae4;
          uRam123bf958 = _UNK_11de9ae8;
          DAT_123bf95c = _UNK_11de9aec;
          DAT_123bf960 = 1;
          DAT_123bf934 = puVar5;
          _DAT_123bf938 = puVar5;
          _DAT_123bf93c = puVar5;
          FUN_11a8911f(&LAB_11ca3ce0);
        }
        puVar5 = &DAT_123bf92c;
      }
      local_2c = &PTR_FUN_11da54a8;
      if ((piVar1 != (int *)0xffffffff) &&
         ((((piVar1 != (int *)0x0 || (*(int *)(puVar5 + 0x30) == 0)) &&
           (*(int *)(puVar5 + 0x28) != 0)) &&
          ((iVar6 = (int)piVar1 - *(int *)(puVar5 + 0x30), -1 < iVar6 &&
           (iVar6 < *(int *)(puVar5 + 0x24))))))) {
        iVar2 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / *(int *)(puVar5 + 0x28)) * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar6 % *(int *)(puVar5 + 0x28)) * 4) != 0)) {
          piVar3 = *(int **)(local_38 + 0x14);
          if (piVar3 == *(int **)(local_38 + 0x18)) {
            FUN_10463c40(piVar3,&local_30,&local_25,1,1);
          }
          else {
            *piVar3 = (int)piVar1;
            *(int *)(local_38 + 0x14) = *(int *)(local_38 + 0x14) + 4;
          }
        }
      }
      iVar8 = iVar8 + -1;
      piVar9 = piVar9 + 1;
    } while (iVar8 != 0);
  }
  local_34 = param_2[0x29];
  if (local_34 < 0x15) {
    if (0 < local_34) goto LAB_115b9217;
  }
  else {
    local_34 = 0x14;
LAB_115b9217:
    local_30 = param_2 + 0x2f;
    piVar9 = param_2 + 0x43;
    do {
      iVar8 = *local_30;
      local_25 = (char)*piVar9;
      if (local_25 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_10c3d580(0xc);
      }
      local_2c = &PTR_FUN_11dd3158;
      if ((DAT_123bf96c & 1) == 0) {
        DAT_123bf96c = DAT_123bf96c | 1;
        FUN_102500e0("CSpeakInfo::GetManagers");
        FUN_11a8911f(&LAB_11c746f0);
      }
      puVar5 = (undefined *)*DAT_123bf970;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&local_2c,"CSpeakInfo",0), puVar5 == (undefined *)0x0))
      {
        if ((DAT_123bf928 & 1) == 0) {
          DAT_123bf930 = 0;
          DAT_123bf940 = 0;
          DAT_123bf944 = 0;
          _DAT_123bf948 = 0;
          DAT_123bf94c = 0;
          DAT_123bf928 = DAT_123bf928 | 1;
          _DAT_123bf92c = &PTR_FUN_11dd3160;
          DAT_123bf950 = _DAT_11de9ae0;
          DAT_123bf954 = _UNK_11de9ae4;
          uRam123bf958 = _UNK_11de9ae8;
          DAT_123bf95c = _UNK_11de9aec;
          DAT_123bf960 = 1;
          DAT_123bf934 = puVar5;
          _DAT_123bf938 = puVar5;
          _DAT_123bf93c = puVar5;
          FUN_11a8911f(&LAB_11ca3ce0);
        }
        puVar5 = &DAT_123bf92c;
      }
      local_2c = &PTR_FUN_11da54a8;
      if (((iVar8 != -1) &&
          (((iVar8 != 0 || (*(int *)(puVar5 + 0x30) == 0)) && (*(int *)(puVar5 + 0x28) != 0)))) &&
         ((iVar8 = iVar8 - *(int *)(puVar5 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(puVar5 + 0x24)))
         )) {
        iVar6 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar8 / *(int *)(puVar5 + 0x28)) * 4);
        if ((iVar6 != 0) && (*(int *)(iVar6 + (iVar8 % *(int *)(puVar5 + 0x28)) * 4) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0xc);
        }
      }
      piVar9 = (int *)((int)piVar9 + 1);
      local_30 = local_30 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  local_34 = param_2[0x48];
  local_30 = (int *)0x0;
  if (local_34 < 0xb) {
    if (local_34 < 1) goto LAB_115b94b0;
  }
  else {
    local_34 = 10;
  }
  _Src = (undefined **)((int)param_2 + 0x12e);
  do {
    local_24 = (uint)*(byte *)((int)param_2 + (int)(local_30 + 0x49));
    local_10 = local_20;
    ppuVar4 = _Src;
    do {
      local_2c = ppuVar4;
      ppuVar4 = (undefined **)((int)local_2c + 1);
    } while (*(char *)local_2c != '\0');
    _Size = (int)local_2c - (int)_Src;
    local_c = local_10;
    if (_Size == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_100b73e0();
    }
    if (0x10 < _Size + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(_Size + 1);
    }
    if (local_2c != _Src) {
      pvVar7 = memcpy(local_10,_Src,_Size);
      local_10 = (undefined1 *)(_Size + (int)pvVar7);
    }
    *local_10 = 0;
    FUN_10489eb0(local_50,&local_24);
    if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
      FUN_10c3d5d0(local_c);
    }
    _Src = _Src + 6;
    local_30 = (int *)((int)local_30 + 1);
  } while ((int)local_30 < local_34);
LAB_115b94b0:
  FUN_11a89daa();
  return;
}



/* --- CSpeakInfo::GetManagers_119084e0 @ 119084e0 --- */
// [RE-AUTO c3]
// id: CSpeakInfo::GetManagers
// strings:
//   ""CSpeakInfo""
//   ""CSpeakInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpeakInfo::GetManagers
   strings:
     ""CSpeakInfo""
     ""CSpeakInfo::GetManagers"" */

void CSpeakInfo__GetManagers_119084e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_10898150(0,"CSpeakInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dd3158;
      if ((DAT_123bf96c & 1) == 0) {
        DAT_123bf96c = DAT_123bf96c | 1;
        FUN_102500e0("CSpeakInfo::GetManagers");
        FUN_11a8911f(&LAB_11c746f0);
      }
      if (((*DAT_123bf970 == 0) && (iVar3 = FUN_11679e10(&local_8,"CSpeakInfo",0), iVar3 == 0)) &&
         ((DAT_123bf928 & 1) == 0)) {
        DAT_123bf930 = 0;
        DAT_123bf940 = 0;
        DAT_123bf944 = 0;
        _DAT_123bf948 = 0;
        DAT_123bf94c = 0;
        DAT_123bf928 = DAT_123bf928 | 1;
        _DAT_123bf92c = &PTR_FUN_11dd3160;
        DAT_123bf950 = _DAT_11de9ae0;
        DAT_123bf954 = _UNK_11de9ae4;
        uRam123bf958 = _UNK_11de9ae8;
        DAT_123bf95c = _UNK_11de9aec;
        DAT_123bf960 = 1;
        DAT_123bf934 = iVar3;
        _DAT_123bf938 = iVar3;
        _DAT_123bf93c = iVar3;
        FUN_11a8911f(&LAB_11cb10b0);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_1175a4a0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CSpeakInfo::GetManagers_11908630 @ 11908630 --- */
// [RE-AUTO c3]
// id: CSpeakInfo::GetManagers
// strings:
//   ""CSpeakInfo""
//   ""CSpeakInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CSpeakInfo::GetManagers
   strings:
     ""CSpeakInfo""
     ""CSpeakInfo::GetManagers"" */

void CSpeakInfo__GetManagers_11908630(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_10898150(0,"CSpeakInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dd3158;
      if ((DAT_123bf96c & 1) == 0) {
        DAT_123bf96c = DAT_123bf96c | 1;
        FUN_102500e0("CSpeakInfo::GetManagers");
        FUN_11a8911f(&LAB_11c746f0);
      }
      if (((*DAT_123bf970 == 0) && (iVar4 = FUN_11679e10(&param_1,"CSpeakInfo",0), iVar4 == 0)) &&
         ((DAT_123bf928 & 1) == 0)) {
        DAT_123bf930 = 0;
        DAT_123bf940 = 0;
        DAT_123bf944 = 0;
        _DAT_123bf948 = 0;
        DAT_123bf94c = 0;
        DAT_123bf928 = DAT_123bf928 | 1;
        _DAT_123bf92c = &PTR_FUN_11dd3160;
        DAT_123bf950 = _DAT_11de9ae0;
        DAT_123bf954 = _UNK_11de9ae4;
        uRam123bf958 = _UNK_11de9ae8;
        DAT_123bf95c = _UNK_11de9aec;
        DAT_123bf960 = 1;
        DAT_123bf934 = iVar4;
        _DAT_123bf938 = iVar4;
        _DAT_123bf93c = iVar4;
        FUN_11a8911f(&LAB_11cb10b0);
      }
      param_1 = &PTR_FUN_11da54a8;
      FUN_1175a490(uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



