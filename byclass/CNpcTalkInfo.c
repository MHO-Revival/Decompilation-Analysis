// ===== class CNpcTalkInfo  (3 recovered methods) =====

/* --- CNpcTalkInfo::GetManagers @ 118da990 --- */
// [RE-AUTO c3]
// id: CNpcTalkInfo::GetManagers
// strings:
//   ""CNpcTalkInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNpcTalkInfo::GetManagers
   strings:
     ""CNpcTalkInfo::GetManagers"" */

undefined4 * CNpcTalkInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d5ae24;
  if (param_3 == 0) {
    if ((DAT_1239d96c & 1) == 0) {
      DAT_1239d96c = DAT_1239d96c | 1;
      FUN_102500e0("CNpcTalkInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb02a0);
    }
    if ((undefined4 *)*DAT_1239d950 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1239d950;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1239d9dc & 1) == 0) {
      DAT_1239d9dc = DAT_1239d9dc | 1;
      FUN_118daca0();
      FUN_11a8911f(&LAB_11cb0240);
    }
    puVar1 = &DAT_1239d9a4;
  }
  return puVar1;
}



/* --- CNpcTalkInfo::GetManagers_118db4e0 @ 118db4e0 --- */
// [RE-AUTO c3]
// id: CNpcTalkInfo::GetManagers
// strings:
//   ""CNpcTalkInfo::GetManagers""

/* [RE-AUTO c3]
   id: CNpcTalkInfo::GetManagers
   strings:
     ""CNpcTalkInfo::GetManagers"" */

undefined4 CNpcTalkInfo__GetManagers_118db4e0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1239d96c & 1) == 0) {
      DAT_1239d96c = DAT_1239d96c | 1;
      FUN_102500e0("CNpcTalkInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb02a0);
    }
    return *DAT_1239d950;
  }
  return 0;
}



/* --- CNpcTalkInfo::GetManagers_118db760 @ 118db760 --- */
// [RE-AUTO c3]
// id: CNpcTalkInfo::GetManagers
// strings:
//   ""CNpcTalkInfo::GetManagers""
//   ""CNpcTalkInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CNpcTalkInfo::GetManagers
   strings:
     ""CNpcTalkInfo::GetManagers""
     ""CNpcTalkInfo"" */

void CNpcTalkInfo__GetManagers_118db760(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  iVar3 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11d5ae24;
    if ((DAT_1239d96c & 1) == 0) {
      DAT_1239d96c = DAT_1239d96c | 1;
      FUN_102500e0("CNpcTalkInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb02a0);
    }
    piVar1 = (int *)*DAT_1239d950;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CNpcTalkInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_1239d9dc & 1) == 0) {
          DAT_1239d9a8 = 0;
          DAT_1239d9b8 = 0;
          DAT_1239d9bc = 0;
          _DAT_1239d9c0 = 0;
          uRam1239d9c4 = 0;
          DAT_1239d9dc = DAT_1239d9dc | 1;
          DAT_1239d9a4 = &PTR_FUN_11d5ae48;
          _DAT_1239d9c8 = _DAT_11de9ae0;
          uRam1239d9cc = _UNK_11de9ae4;
          uRam1239d9d0 = _UNK_11de9ae8;
          uRam1239d9d4 = _UNK_11de9aec;
          DAT_1239d9d8 = 1;
          DAT_1239d9ac = piVar1;
          _DAT_1239d9b0 = piVar1;
          _DAT_1239d9b4 = piVar1;
          FUN_11a8911f(&LAB_11cb0240);
        }
        piVar1 = (int *)&DAT_1239d9a4;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 <= iVar3) break;
    local_8 = &PTR_FUN_11d5ae24;
    if ((DAT_1239d96c & 1) == 0) {
      DAT_1239d96c = DAT_1239d96c | 1;
      FUN_102500e0("CNpcTalkInfo::GetManagers");
      FUN_11a8911f(&LAB_11cb02a0);
    }
    piVar1 = (int *)*DAT_1239d950;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CNpcTalkInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_1239d9dc & 1) == 0) {
          DAT_1239d9a8 = 0;
          DAT_1239d9b8 = 0;
          DAT_1239d9bc = 0;
          _DAT_1239d9c0 = 0;
          uRam1239d9c4 = 0;
          DAT_1239d9dc = DAT_1239d9dc | 1;
          DAT_1239d9a4 = &PTR_FUN_11d5ae48;
          _DAT_1239d9c8 = _DAT_11de9ae0;
          uRam1239d9cc = _UNK_11de9ae4;
          uRam1239d9d0 = _UNK_11de9ae8;
          uRam1239d9d4 = _UNK_11de9aec;
          DAT_1239d9d8 = 1;
          DAT_1239d9ac = piVar1;
          _DAT_1239d9b0 = piVar1;
          _DAT_1239d9b4 = piVar1;
          FUN_11a8911f(&LAB_11cb0240);
        }
        piVar1 = (int *)&DAT_1239d9a4;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((iVar3 < 0) || (piVar1[6] - piVar1[5] >> 2 <= iVar3)) {
      FUN_117257a0();
      iVar3 = iVar3 + 1;
    }
    else {
      FUN_117257a0();
      iVar3 = iVar3 + 1;
    }
  }
  return;
}



