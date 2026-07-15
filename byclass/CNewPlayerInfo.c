// ===== class CNewPlayerInfo  (4 recovered methods) =====

/* --- CNewPlayerInfo::GetManagers @ 118f6de0 --- */
// [RE-AUTO c3]
// id: CNewPlayerInfo::GetManagers
// strings:
//   ""CNewPlayerInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNewPlayerInfo::GetManagers
   strings:
     ""CNewPlayerInfo::GetManagers"" */

undefined4 * CNewPlayerInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5c6a4;
  if (param_3 == 0) {
    if ((DAT_1239e310 & 1) == 0) {
      DAT_1239e310 = DAT_1239e310 | 1;
      FUN_102500e0("CNewPlayerInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0b70);
    }
    if ((undefined4 *)*DAT_1239e2f4 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1239e2f4;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1239e3d4 & 1) == 0) {
      DAT_1239e3d4 = DAT_1239e3d4 | 1;
      FUN_118f7360();
      FUN_11a8911f(&LAB_11cb0b10);
    }
    puVar1 = &DAT_1239e39c;
  }
  return puVar1;
}



/* --- CNewPlayerInfo::GetManagers_118f8330 @ 118f8330 --- */
// [RE-AUTO c3]
// id: CNewPlayerInfo::GetManagers
// strings:
//   ""CNewPlayerInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNewPlayerInfo::GetManagers
   strings:
     ""CNewPlayerInfo::GetManagers"" */

undefined4 CNewPlayerInfo__GetManagers_118f8330(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239e310 & 1) == 0) {
      DAT_1239e310 = DAT_1239e310 | 1;
      FUN_102500e0("CNewPlayerInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0b70);
    }
    return *DAT_1239e2f4;
  }
  return 0;
}



/* --- CNewPlayerInfo::GetManagers_118f8770 @ 118f8770 --- */
// [RE-AUTO c3]
// id: CNewPlayerInfo::GetManagers
// strings:
//   ""CNewPlayerInfo::GetManagers""
//   ""CNewPlayerInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNewPlayerInfo::GetManagers
   strings:
     ""CNewPlayerInfo::GetManagers""
     ""CNewPlayerInfo"" */

void CNewPlayerInfo__GetManagers_118f8770(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d5c6a4;
    if ((DAT_1239e310 & 1) == 0) {
      DAT_1239e310 = DAT_1239e310 | 1;
      FUN_102500e0("CNewPlayerInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0b70);
    }
    piVar2 = (int *)*DAT_1239e2f4;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CNewPlayerInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1239e3d4 & 1) == 0) {
          DAT_1239e3a0 = 0;
          DAT_1239e3b0 = 0;
          DAT_1239e3b4 = 0;
          _DAT_1239e3b8 = 0;
          uRam1239e3bc = 0;
          DAT_1239e3d4 = DAT_1239e3d4 | 1;
          DAT_1239e39c = &PTR_FUN_11d5c6d8;
          _DAT_1239e3c0 = _DAT_11de9ae0;
          uRam1239e3c4 = _UNK_11de9ae4;
          uRam1239e3c8 = _UNK_11de9ae8;
          uRam1239e3cc = _UNK_11de9aec;
          DAT_1239e3d0 = 1;
          DAT_1239e3a4 = piVar2;
          _DAT_1239e3a8 = piVar2;
          _DAT_1239e3ac = piVar2;
          FUN_11a8911f(&LAB_11cb0b10);
        }
        piVar2 = (int *)&DAT_1239e39c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d5c6a4;
    if ((DAT_1239e310 & 1) == 0) {
      DAT_1239e310 = DAT_1239e310 | 1;
      FUN_102500e0("CNewPlayerInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0b70);
    }
    piVar2 = (int *)*DAT_1239e2f4;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CNewPlayerInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1239e3d4 & 1) == 0) {
          DAT_1239e3a0 = 0;
          DAT_1239e3b0 = 0;
          DAT_1239e3b4 = 0;
          _DAT_1239e3b8 = 0;
          uRam1239e3bc = 0;
          DAT_1239e3d4 = DAT_1239e3d4 | 1;
          DAT_1239e39c = &PTR_FUN_11d5c6d8;
          _DAT_1239e3c0 = _DAT_11de9ae0;
          uRam1239e3c4 = _UNK_11de9ae4;
          uRam1239e3c8 = _UNK_11de9ae8;
          uRam1239e3cc = _UNK_11de9aec;
          DAT_1239e3d0 = 1;
          DAT_1239e3a4 = piVar2;
          _DAT_1239e3a8 = piVar2;
          _DAT_1239e3ac = piVar2;
          FUN_11a8911f(&LAB_11cb0b10);
        }
        piVar2 = (int *)&DAT_1239e39c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      FUN_119fad30(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



/* --- CNewPlayerInfo::GetManagers_118f8950 @ 118f8950 --- */
// [RE-AUTO c3]
// id: CNewPlayerInfo::GetManagers
// strings:
//   ""CNewPlayerInfo::GetManagers""
//   ""CNewPlayerInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNewPlayerInfo::GetManagers
   strings:
     ""CNewPlayerInfo::GetManagers""
     ""CNewPlayerInfo"" */

void CNewPlayerInfo__GetManagers_118f8950(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d5c6a4;
    if ((DAT_1239e310 & 1) == 0) {
      DAT_1239e310 = DAT_1239e310 | 1;
      FUN_102500e0("CNewPlayerInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0b70);
    }
    piVar2 = (int *)*DAT_1239e2f4;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CNewPlayerInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1239e3d4 & 1) == 0) {
          DAT_1239e3a0 = 0;
          DAT_1239e3b0 = 0;
          DAT_1239e3b4 = 0;
          _DAT_1239e3b8 = 0;
          uRam1239e3bc = 0;
          DAT_1239e3d4 = DAT_1239e3d4 | 1;
          DAT_1239e39c = &PTR_FUN_11d5c6d8;
          _DAT_1239e3c0 = _DAT_11de9ae0;
          uRam1239e3c4 = _UNK_11de9ae4;
          uRam1239e3c8 = _UNK_11de9ae8;
          uRam1239e3cc = _UNK_11de9aec;
          DAT_1239e3d0 = 1;
          DAT_1239e3a4 = piVar2;
          _DAT_1239e3a8 = piVar2;
          _DAT_1239e3ac = piVar2;
          FUN_11a8911f(&LAB_11cb0b10);
        }
        piVar2 = (int *)&DAT_1239e39c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d5c6a4;
    if ((DAT_1239e310 & 1) == 0) {
      DAT_1239e310 = DAT_1239e310 | 1;
      FUN_102500e0("CNewPlayerInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb0b70);
    }
    piVar2 = (int *)*DAT_1239e2f4;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CNewPlayerInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1239e3d4 & 1) == 0) {
          DAT_1239e3a0 = 0;
          DAT_1239e3b0 = 0;
          DAT_1239e3b4 = 0;
          _DAT_1239e3b8 = 0;
          uRam1239e3bc = 0;
          DAT_1239e3d4 = DAT_1239e3d4 | 1;
          DAT_1239e39c = &PTR_FUN_11d5c6d8;
          _DAT_1239e3c0 = _DAT_11de9ae0;
          uRam1239e3c4 = _UNK_11de9ae4;
          uRam1239e3c8 = _UNK_11de9ae8;
          uRam1239e3cc = _UNK_11de9aec;
          DAT_1239e3d0 = 1;
          DAT_1239e3a4 = piVar2;
          _DAT_1239e3a8 = piVar2;
          _DAT_1239e3ac = piVar2;
          FUN_11a8911f(&LAB_11cb0b10);
        }
        piVar2 = (int *)&DAT_1239e39c;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (*(int *)(piVar2[5] + iVar4 * 4) != 0)) {
      FUN_119fad30(uVar1);
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



