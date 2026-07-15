// ===== class CFactionInfo  (3 recovered methods) =====

/* --- CFactionInfo::GetManagers @ 115cf010 --- */
// [RE-AUTO c3]
// id: CFactionInfo::GetManagers
// strings:
//   ""CFactionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFactionInfo::GetManagers
   strings:
     ""CFactionInfo::GetManagers"" */

undefined * CFactionInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d30f1c;
  if (param_3 == 0) {
    if ((DAT_122df88c & 1) == 0) {
      DAT_122df88c = DAT_122df88c | 1;
      FUN_102500e0("CFactionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4610);
    }
    if ((undefined *)*DAT_122df870 != (undefined *)0x0) {
      return (undefined *)*DAT_122df870;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df8d0 & 1) == 0) {
      DAT_122df8d0 = DAT_122df8d0 | 1;
      FUN_115cf3a0();
      FUN_11a8911f(&LAB_11ca45b0);
    }
    puVar1 = &DAT_122df898;
  }
  return puVar1;
}



/* --- CFactionInfo::GetManagers_115d0380 @ 115d0380 --- */
// [RE-AUTO c3]
// id: CFactionInfo::GetManagers
// strings:
//   ""CFactionInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFactionInfo::GetManagers
   strings:
     ""CFactionInfo::GetManagers"" */

undefined4 CFactionInfo__GetManagers_115d0380(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df88c & 1) == 0) {
      DAT_122df88c = DAT_122df88c | 1;
      FUN_102500e0("CFactionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4610);
    }
    return *DAT_122df870;
  }
  return 0;
}



/* --- CFactionInfo::GetManagers_115d0530 @ 115d0530 --- */
// [RE-AUTO c3]
// id: CFactionInfo::GetManagers
// strings:
//   ""CFactionInfo::GetManagers""
//   ""CFactionInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFactionInfo::GetManagers
   strings:
     ""CFactionInfo::GetManagers""
     ""CFactionInfo"" */

undefined4 * __fastcall CFactionInfo__GetManagers_115d0530(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined **local_8;
  
  iVar6 = 1;
  do {
    (**(code **)(*param_1 + 0x14))(iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xb);
  iVar6 = 1;
  do {
    local_8 = &PTR_FUN_11d30f1c;
    if ((DAT_122df88c & 1) == 0) {
      DAT_122df88c = DAT_122df88c | 1;
      FUN_102500e0("CFactionInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca4610);
    }
    puVar2 = (undefined4 *)*DAT_122df870;
    puVar3 = DAT_122df870;
    if ((puVar2 == (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)FUN_11679e10(&local_8,"CFactionInfo",0), puVar3 = puVar2,
       puVar2 == (undefined4 *)0x0)) {
      puVar3 = DAT_122df8d0;
      if (((uint)DAT_122df8d0 & 1) == 0) {
        DAT_122df89c = 0;
        DAT_122df8ac = 0;
        uRam122df8b0 = 0;
        _DAT_122df8b4 = 0;
        DAT_122df8b8 = 0;
        DAT_122df8d0 = (undefined4 *)((uint)DAT_122df8d0 | 1);
        _DAT_122df898 = &PTR_FUN_11d30f50;
        DAT_122df8bc = _DAT_11de9ae0;
        DAT_122df8c0 = _UNK_11de9ae4;
        uRam122df8c4 = _UNK_11de9ae8;
        DAT_122df8c8 = _UNK_11de9aec;
        DAT_122df8cc = 1;
        DAT_122df8a0 = puVar2;
        _DAT_122df8a4 = puVar2;
        _DAT_122df8a8 = puVar2;
        puVar3 = (undefined4 *)FUN_11a8911f(&LAB_11ca45b0);
      }
      puVar2 = (undefined4 *)&DAT_122df898;
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((iVar6 != -1) && (((iVar6 != 0 || (puVar2[0xc] == 0)) && (iVar1 = puVar2[10], iVar1 != 0)))
        ) && ((puVar3 = (undefined4 *)(iVar6 - puVar2[0xc]), -1 < (int)puVar3 &&
              ((int)puVar3 < (int)puVar2[9])))) {
      iVar5 = (int)puVar3 % iVar1;
      iVar1 = *(int *)(puVar2[8] + ((int)puVar3 / iVar1) * 4);
      puVar3 = (undefined4 *)0x0;
      if ((iVar1 != 0) &&
         (puVar3 = *(undefined4 **)(iVar1 + iVar5 * 4), iVar1 = iVar6, puVar3 != (undefined4 *)0x0))
      {
        for (; iVar1 < 0xb; iVar1 = iVar1 + 1) {
          uVar4 = FUN_1184aa80(iVar1);
          (**(code **)(*param_1 + 0x18))(iVar6,iVar1,uVar4);
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xb);
  return puVar3;
}



