// ===== class CLevelIDGroupInfo  (4 recovered methods) =====

/* --- CLevelIDGroupInfo::GetManagers @ 1173def0 --- */
// [RE-AUTO c3]
// id: CLevelIDGroupInfo::GetManagers
// strings:
//   ""CLevelIDGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelIDGroupInfo::GetManagers
   strings:
     ""CLevelIDGroupInfo::GetManagers"" */

undefined4 * CLevelIDGroupInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d44e20;
  if (param_3 == 0) {
    if ((DAT_1239078c & 1) == 0) {
      DAT_1239078c = DAT_1239078c | 1;
      FUN_102500e0("CLevelIDGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9550);
    }
    if ((undefined4 *)*DAT_12390770 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_12390770;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_123908b0 & 1) == 0) {
      DAT_123908b0 = DAT_123908b0 | 1;
      FUN_1173e240();
      FUN_11a8911f(&LAB_11ca94f0);
    }
    puVar1 = &DAT_12390878;
  }
  return puVar1;
}



/* --- CLevelIDGroupInfo::GetManagers_1173ebe0 @ 1173ebe0 --- */
// [RE-AUTO c3]
// id: CLevelIDGroupInfo::GetManagers
// strings:
//   ""CLevelIDGroupInfo::GetManagers""

/* [RE-AUTO c3]
   id: CLevelIDGroupInfo::GetManagers
   strings:
     ""CLevelIDGroupInfo::GetManagers"" */

undefined4 CLevelIDGroupInfo__GetManagers_1173ebe0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239078c & 1) == 0) {
      DAT_1239078c = DAT_1239078c | 1;
      FUN_102500e0("CLevelIDGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9550);
    }
    return *DAT_12390770;
  }
  return 0;
}



/* --- CLevelIDGroupInfo::GetManagers_118f1610 @ 118f1610 --- */
// [RE-AUTO c3]
// id: CLevelIDGroupInfo::GetManagers
// strings:
//   ""CLevelIDGroupInfo::GetManagers""
//   ""CLevelIDGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelIDGroupInfo::GetManagers
   strings:
     ""CLevelIDGroupInfo::GetManagers""
     ""CLevelIDGroupInfo"" */

void CLevelIDGroupInfo__GetManagers_118f1610(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  iVar4 = 0;
  while( true ) {
    param_1 = &PTR_FUN_11d44e20;
    if ((DAT_1239078c & 1) == 0) {
      DAT_1239078c = DAT_1239078c | 1;
      FUN_102500e0("CLevelIDGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9550);
    }
    piVar2 = (int *)*DAT_12390770;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CLevelIDGroupInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123908b0 & 1) == 0) {
          DAT_1239087c = 0;
          DAT_1239088c = 0;
          DAT_12390890 = 0;
          _DAT_12390894 = 0;
          uRam12390898 = 0;
          DAT_123908b0 = DAT_123908b0 | 1;
          DAT_12390878 = &PTR_FUN_11d44e5c;
          _DAT_1239089c = _DAT_11de9ae0;
          uRam123908a0 = _UNK_11de9ae4;
          uRam123908a4 = _UNK_11de9ae8;
          uRam123908a8 = _UNK_11de9aec;
          DAT_123908ac = 1;
          DAT_12390880 = piVar2;
          _DAT_12390884 = piVar2;
          _DAT_12390888 = piVar2;
          FUN_11a8911f(&LAB_11cb0870);
        }
        piVar2 = (int *)&DAT_12390878;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) break;
    param_1 = &PTR_FUN_11d44e20;
    if ((DAT_1239078c & 1) == 0) {
      DAT_1239078c = DAT_1239078c | 1;
      FUN_102500e0("CLevelIDGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca9550);
    }
    piVar2 = (int *)*DAT_12390770;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CLevelIDGroupInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123908b0 & 1) == 0) {
          DAT_1239087c = 0;
          DAT_1239088c = 0;
          DAT_12390890 = 0;
          _DAT_12390894 = 0;
          uRam12390898 = 0;
          DAT_123908b0 = DAT_123908b0 | 1;
          DAT_12390878 = &PTR_FUN_11d44e5c;
          _DAT_1239089c = _DAT_11de9ae0;
          uRam123908a0 = _UNK_11de9ae4;
          uRam123908a4 = _UNK_11de9ae8;
          uRam123908a8 = _UNK_11de9aec;
          DAT_123908ac = 1;
          DAT_12390880 = piVar2;
          _DAT_12390884 = piVar2;
          _DAT_12390888 = piVar2;
          FUN_11a8911f(&LAB_11cb0870);
        }
        piVar2 = (int *)&DAT_12390878;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if ((iVar4 < 0) || (piVar2[6] - piVar2[5] >> 2 <= iVar4)) {
      CLevelIDGroupInfo__GetManagers_119f5090(uVar1);
      iVar4 = iVar4 + 1;
    }
    else {
      CLevelIDGroupInfo__GetManagers_119f5090(uVar1);
      iVar4 = iVar4 + 1;
    }
  }
  return;
}



/* --- CLevelIDGroupInfo::GetManagers_119f5090 @ 119f5090 --- */
// [RE-AUTO c3]
// id: CLevelIDGroupInfo::GetManagers
// strings:
//   ""CLevelIDGroupInfo::GetManagers""
//   ""CLevelIDGroupInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CLevelIDGroupInfo::GetManagers
   strings:
     ""CLevelIDGroupInfo::GetManagers""
     ""CLevelIDGroupInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void __fastcall CLevelIDGroupInfo__GetManagers_119f5090(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d44e20;
  if ((DAT_1239078c & 1) == 0) {
    DAT_1239078c = DAT_1239078c | 1;
    FUN_102500e0("CLevelIDGroupInfo::GetManagers");
    FUN_11a8911f(&LAB_11ca9550);
  }
  piVar2 = (int *)*DAT_12390770;
  if ((piVar2 == (int *)0x0) &&
     (piVar2 = (int *)FUN_11679e10(&local_8,"CLevelIDGroupInfo",0), piVar2 == (int *)0x0)) {
    if ((DAT_123908b0 & 1) == 0) {
      DAT_1239087c = 0;
      DAT_1239088c = 0;
      DAT_12390890 = 0;
      _DAT_12390894 = 0;
      uRam12390898 = 0;
      DAT_123908b0 = DAT_123908b0 | 1;
      DAT_12390878 = &PTR_FUN_11d44e5c;
      _DAT_1239089c = _DAT_11de9ae0;
      uRam123908a0 = _UNK_11de9ae4;
      uRam123908a4 = _UNK_11de9ae8;
      uRam123908a8 = _UNK_11de9aec;
      DAT_123908ac = 1;
      DAT_12390880 = piVar2;
      _DAT_12390884 = piVar2;
      _DAT_12390888 = piVar2;
      FUN_11a8911f(&LAB_11cb5480);
    }
    piVar2 = (int *)&DAT_12390878;
  }
  local_8 = &PTR_FUN_11da54a8;
  (**(code **)(*piVar2 + 0x28))();
  uVar4 = 0;
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2 != 0) {
    do {
      local_8 = &PTR_FUN_11dc893c;
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + uVar4 * 4);
      if ((DAT_123bec98 & 1) == 0) {
        DAT_123bec98 = DAT_123bec98 | 1;
        FUN_102500e0("CMHLevelInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70cf0);
      }
      puVar3 = (undefined4 *)*DAT_123bec7c;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CMHLevelInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_123bec74 & 1) == 0) {
          DAT_123beca0 = 0;
          DAT_123becb0 = 0;
          DAT_123becb4 = 0;
          _DAT_123becb8 = 0;
          DAT_123becbc = 0;
          DAT_123bec74 = DAT_123bec74 | 1;
          DAT_123bec9c = &PTR_FUN_11dc8960;
          DAT_123becc0 = _DAT_11de9ae0;
          DAT_123becc4 = _UNK_11de9ae4;
          uRam123becc8 = _UNK_11de9ae8;
          DAT_123beccc = _UNK_11de9aec;
          DAT_123becd0 = 1;
          DAT_123beca4 = puVar3;
          _DAT_123beca8 = puVar3;
          _DAT_123becac = puVar3;
          FUN_11a8911f(&LAB_11cb54e0);
        }
        puVar3 = &DAT_123bec9c;
      }
      if (((iVar5 == -1) || (((iVar5 == 0 && (puVar3[0xc] != 0)) || (puVar3[10] == 0)))) ||
         ((iVar5 = iVar5 - puVar3[0xc], iVar5 < 0 || ((int)puVar3[9] <= iVar5)))) {
LAB_119f527f:
        iVar5 = 0;
      }
      else {
        iVar1 = *(int *)(puVar3[8] + (iVar5 / (int)puVar3[10]) * 4);
        if (iVar1 == 0) goto LAB_119f527f;
        iVar5 = *(int *)(iVar1 + (iVar5 % (int)puVar3[10]) * 4);
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar5 + 0x260) = *(undefined4 *)(param_1 + 0x10);
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2));
  }
  return;
}



