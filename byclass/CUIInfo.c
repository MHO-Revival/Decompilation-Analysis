// ===== class CUIInfo  (2 recovered methods) =====

/* --- CUIInfo::GetManagers @ 104d00e0 --- */
// [RE-AUTO c3]
// id: CUIInfo::GetManagers
// strings:
//   ""CUIInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CUIInfo::GetManagers
   strings:
     ""CUIInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CUIInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bde18 & 1) == 0) {
    DAT_123bde18 = DAT_123bde18 | 1;
    _DAT_123bde10 = &DAT_123bde00;
    DAT_123bde14 = &DAT_123bde00;
    DAT_123bde00 = 0;
    FUN_100d83d0("CUIInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6e8e0);
  }
  return DAT_123bddfc;
}



/* --- CUIInfo::GetManagers_10b69ee0 @ 10b69ee0 --- */
// [RE-AUTO c3]
// id: CUIInfo::GetManagers
// strings:
//   ""CUIInfo""
//   ""CUIInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CUIInfo::GetManagers
   strings:
     ""CUIInfo""
     ""CUIInfo::GetManagers"" */

undefined4 * __fastcall CUIInfo__GetManagers_10b69ee0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined **local_c;
  undefined1 local_5;
  
  param_1[1] = &PTR_LAB_11dbedbc;
  *param_1 = &PTR_FUN_11cc835c;
  param_1[1] = &PTR_LAB_11cc8370;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  piVar2 = (int *)FUN_104d4420(0,"CUIInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_c = &PTR_FUN_11dbd204;
      if ((DAT_123bde18 & 1) == 0) {
        DAT_123bde18 = DAT_123bde18 | 1;
        FUN_102500e0("CUIInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e8e0);
      }
      puVar4 = (undefined4 *)*DAT_123bddfc;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&local_c,"CUIInfo",0), puVar4 == (undefined4 *)0x0)) {
        if ((DAT_123bddb4 & 1) == 0) {
          DAT_123bddbc = 0;
          DAT_123bddcc = 0;
          DAT_123bddd0 = 0;
          _DAT_123bddd4 = 0;
          uRam123bddd8 = 0;
          DAT_123bddb4 = DAT_123bddb4 | 1;
          DAT_123bddb8 = &PTR_FUN_11dbd20c;
          _DAT_123bdddc = _DAT_11de9ae0;
          uRam123bdde0 = _UNK_11de9ae4;
          uRam123bdde4 = _UNK_11de9ae8;
          uRam123bdde8 = _UNK_11de9aec;
          DAT_123bddec = 1;
          DAT_123bddc0 = puVar4;
          _DAT_123bddc4 = puVar4;
          _DAT_123bddc8 = puVar4;
          FUN_11a8911f(&LAB_11c83c50);
        }
        puVar4 = &DAT_123bddb8;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((((-1 < iVar5) && (iVar5 < (int)(puVar4[6] - puVar4[5]) >> 2)) &&
          (iVar1 = *(int *)(puVar4[5] + iVar5 * 4), iVar1 != 0)) &&
         (*(char *)(iVar1 + 0x70) != '\0')) {
        puVar4 = (undefined4 *)param_1[3];
        if (puVar4 == (undefined4 *)param_1[4]) {
          FUN_10463c40(puVar4,(undefined4 *)(iVar1 + 0x10),&local_5,1,1);
        }
        else {
          *puVar4 = *(undefined4 *)(iVar1 + 0x10);
          param_1[3] = param_1[3] + 4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  puVar4 = (undefined4 *)param_1[3];
  local_c = (undefined **)0x1;
  if (puVar4 == (undefined4 *)param_1[4]) {
    FUN_10463c40(puVar4,&local_c,&local_5,1,1);
  }
  else {
    *puVar4 = 1;
    param_1[3] = param_1[3] + 4;
  }
  puVar4 = (undefined4 *)param_1[3];
  local_c = (undefined **)0x1b;
  if (puVar4 == (undefined4 *)param_1[4]) {
    FUN_10463c40(puVar4,&local_c,&local_5,1,1);
    return param_1;
  }
  *puVar4 = 0x1b;
  param_1[3] = param_1[3] + 4;
  return param_1;
}



