// ===== class CMartRankInfo  (4 recovered methods) =====

/* --- CMartRankInfo::GetManagers @ 112d43e0 --- */
// [RE-AUTO c3]
// id: CMartRankInfo::GetManagers
// strings:
//   ""CMartRankInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMartRankInfo::GetManagers
   strings:
     ""CMartRankInfo::GetManagers"" */

undefined * CMartRankInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d1ee94;
  if (param_3 == 0) {
    if ((DAT_12040a48 & 1) == 0) {
      DAT_12040a48 = DAT_12040a48 | 1;
      FUN_102500e0("CMartRankInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99ef0);
    }
    if ((undefined *)*DAT_12040a2c != (undefined *)0x0) {
      return (undefined *)*DAT_12040a2c;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12040a8c & 1) == 0) {
      DAT_12040a8c = DAT_12040a8c | 1;
      FUN_112d5a70();
      FUN_11a8911f(&LAB_11c99e90);
    }
    puVar1 = &DAT_12040a54;
  }
  return puVar1;
}



/* --- CMartRankInfo::GetManagers_112d6980 @ 112d6980 --- */
// [RE-AUTO c3]
// id: CMartRankInfo::GetManagers
// strings:
//   ""CMartRankInfo::GetManagers""

/* [RE-AUTO c3]
   id: CMartRankInfo::GetManagers
   strings:
     ""CMartRankInfo::GetManagers"" */

undefined4 CMartRankInfo__GetManagers_112d6980(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12040a48 & 1) == 0) {
      DAT_12040a48 = DAT_12040a48 | 1;
      FUN_102500e0("CMartRankInfo::GetManagers");
      FUN_11a8911f(&LAB_11c99ef0);
    }
    return *DAT_12040a2c;
  }
  return 0;
}



/* --- CMartRankInfo::GetManagers_112d73f0 @ 112d73f0 --- */
// [RE-AUTO c3]
// id: CMartRankInfo::GetManagers
// calls: memmove
// strings:
//   ""CMartRankInfo::GetManagers""
//   ""CMartRankInfo""

/* WARNING: Removing unreachable block (ram,0x112d7410) */
/* [RE-AUTO c3]
   id: CMartRankInfo::GetManagers
   calls: memmove
   strings:
     ""CMartRankInfo::GetManagers""
     ""CMartRankInfo"" */

void __thiscall CMartRankInfo__GetManagers_112d73f0(int param_1,undefined **param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  piVar4 = (int *)param_2;
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x28);
  local_8 = param_1;
  if (puVar8 == *(undefined4 **)(param_1 + 0x2c)) {
    iVar9 = 1;
    do {
      param_2 = &PTR_FUN_11d1ee94;
      if ((DAT_12040a48 & 1) == 0) {
        DAT_12040a48 = DAT_12040a48 | 1;
        FUN_102500e0("CMartRankInfo::GetManagers");
        FUN_11a8911f(&LAB_11c99ef0);
      }
      puVar6 = (undefined *)*DAT_12040a2c;
      if (puVar6 == (undefined *)0x0) {
        puVar6 = (undefined *)FUN_11679e10(&param_2,"CMartRankInfo",0);
        if (puVar6 == (undefined *)0x0) {
          if ((DAT_12040a8c & 1) == 0) {
            DAT_12040a8c = DAT_12040a8c | 1;
            FUN_112d5a70();
            FUN_11a8911f(&LAB_11c99e90);
          }
          puVar6 = &DAT_12040a54;
        }
      }
      param_2 = &PTR_FUN_11da54a8;
      if (((iVar9 != -1) &&
          (((iVar9 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
           (iVar2 = *(int *)(puVar6 + 0x28), iVar2 != 0)))) &&
         ((iVar7 = iVar9 - *(int *)(puVar6 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(puVar6 + 0x24)))
         )) {
        iVar3 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar2) * 4);
        if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + (iVar7 % iVar2) * 4), iVar2 != 0)) {
          uVar5 = (**(code **)(**(int **)(local_8 + 0x18) + 0x1b4))(*(undefined4 *)(iVar2 + 0x14));
          FUN_11550f40(uVar5);
          local_c = FUN_11550d40();
          if (local_c != 0) {
            piVar1 = (int *)piVar4[1];
            if (piVar1 == (int *)piVar4[2]) {
              FUN_112d7ca0(piVar1,&local_c,(int)&param_2 + 3,1,1);
            }
            else {
              *piVar1 = local_c;
              piVar4[1] = piVar4[1] + 4;
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
  }
  else if (puVar8 != *(undefined4 **)(param_1 + 0x2c)) {
    do {
      uVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0x1b4))(*puVar8);
      FUN_11550f40(uVar5);
      local_8 = FUN_11550d40();
      if (local_8 != 0) {
        piVar1 = (int *)piVar4[1];
        if (piVar1 == (int *)piVar4[2]) {
          FUN_112d7ca0(piVar1,&local_8,(int)&param_2 + 3,1,1);
        }
        else {
          *piVar1 = local_8;
          piVar4[1] = piVar4[1] + 4;
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != *(undefined4 **)(param_1 + 0x2c));
    return;
  }
  return;
}



/* --- CMartRankInfo::GetManagers_11974270 @ 11974270 --- */
// [RE-AUTO c3]
// id: CMartRankInfo::GetManagers
// calls: CMartRankInfo::GetManagers
// strings:
//   ""CMartRankInfo""
//   ""CMartRankInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMartRankInfo::GetManagers
   calls: CMartRankInfo::GetManagers
   strings:
     ""CMartRankInfo""
     ""CMartRankInfo::GetManagers"" */

void CMartRankInfo__GetManagers_11974270(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)CMartRankInfo__GetManagers(0,"CMartRankInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11d1ee94;
      if ((DAT_12040a48 & 1) == 0) {
        DAT_12040a48 = DAT_12040a48 | 1;
        FUN_102500e0("CMartRankInfo::GetManagers");
        FUN_11a8911f(&LAB_11c99ef0);
      }
      puVar4 = (undefined *)*DAT_12040a2c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CMartRankInfo",0), puVar4 == (undefined *)0x0
         )) {
        if ((DAT_12040a8c & 1) == 0) {
          DAT_12040a58 = 0;
          DAT_12040a68 = 0;
          DAT_12040a6c = 0;
          _DAT_12040a70 = 0;
          DAT_12040a74 = 0;
          DAT_12040a8c = DAT_12040a8c | 1;
          _DAT_12040a54 = &PTR_FUN_11d1eec8;
          DAT_12040a78 = _DAT_11de9ae0;
          DAT_12040a7c = _UNK_11de9ae4;
          uRam12040a80 = _UNK_11de9ae8;
          DAT_12040a84 = _UNK_11de9aec;
          DAT_12040a88 = 1;
          DAT_12040a5c = puVar4;
          _DAT_12040a60 = puVar4;
          _DAT_12040a64 = puVar4;
          FUN_11a8911f(&LAB_11cb3180);
        }
        puVar4 = &DAT_12040a54;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a4cba0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



