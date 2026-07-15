// ===== class CAbnormalStatePriorityInfo  (3 recovered methods) =====

/* --- CAbnormalStatePriorityInfo::GetManagers @ 117caf80 --- */
// [RE-AUTO c3]
// id: CAbnormalStatePriorityInfo::GetManagers
// strings:
//   ""CAbnormalStatePriorityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAbnormalStatePriorityInfo::GetManagers
   strings:
     ""CAbnormalStatePriorityInfo::GetManagers"" */

undefined *
CAbnormalStatePriorityInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d4983c;
  if (param_3 == 0) {
    if ((DAT_12393604 & 1) == 0) {
      DAT_12393604 = DAT_12393604 | 1;
      FUN_102500e0("CAbnormalStatePriorityInfo::GetManagers");
      FUN_11a8911f(&LAB_11caaa10);
    }
    if ((undefined *)*DAT_123935e8 != (undefined *)0x0) {
      return (undefined *)*DAT_123935e8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12393688 & 1) == 0) {
      DAT_12393688 = DAT_12393688 | 1;
      FUN_117cb1f0();
      FUN_11a8911f(&LAB_11caa9b0);
    }
    puVar1 = &DAT_12393650;
  }
  return puVar1;
}



/* --- CAbnormalStatePriorityInfo::GetManagers_117cb690 @ 117cb690 --- */
// [RE-AUTO c3]
// id: CAbnormalStatePriorityInfo::GetManagers
// strings:
//   ""CAbnormalStatePriorityInfo::GetManagers""
//   ""CAbnormalStatePriorityInfo""

/* [RE-AUTO c3]
   id: CAbnormalStatePriorityInfo::GetManagers
   strings:
     ""CAbnormalStatePriorityInfo::GetManagers""
     ""CAbnormalStatePriorityInfo"" */

void CAbnormalStatePriorityInfo__GetManagers_117cb690
               (uint param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined **local_c;
  uint local_8;
  
  *param_3 = 0;
  *param_4 = 0;
  if (0 < param_2) {
    param_1 = param_1 + 0x80000;
  }
  iVar6 = 1;
  uVar5 = 2;
  local_8 = param_1;
  do {
    if ((param_1 & uVar5) != 0) {
      local_c = &PTR_FUN_11d4983c;
      if ((DAT_12393604 & 1) == 0) {
        DAT_12393604 = DAT_12393604 | 1;
        FUN_102500e0("CAbnormalStatePriorityInfo::GetManagers");
        FUN_11a8911f(&LAB_11caaa10);
      }
      puVar2 = (undefined *)*DAT_123935e8;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&local_c,"CAbnormalStatePriorityInfo",0),
         puVar2 == (undefined *)0x0)) {
        if ((DAT_12393688 & 1) == 0) {
          DAT_12393688 = DAT_12393688 | 1;
          FUN_117cb1f0();
          FUN_11a8911f(&LAB_11caa9b0);
        }
        puVar2 = &DAT_12393650;
      }
      local_c = &PTR_FUN_11da54a8;
      param_1 = local_8;
      if (((iVar6 != -1) &&
          (((iVar6 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
           (iVar4 = *(int *)(puVar2 + 0x28), iVar4 != 0)))) &&
         ((iVar3 = iVar6 - *(int *)(puVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar2 + 0x24)))
         )) {
        iVar1 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar3 / iVar4) * 4);
        if ((iVar1 != 0) && (iVar4 = *(int *)(iVar1 + (iVar3 % iVar4) * 4), iVar4 != 0)) {
          if (*(int *)(iVar4 + 0x14) != 0) {
            iVar3 = FUN_117cbae0(*param_3,iVar6);
            *param_3 = iVar3;
          }
          param_1 = local_8;
          if (*(int *)(iVar4 + 0x18) != 0) {
            iVar4 = FUN_117cbae0(*param_4,iVar6);
            *param_4 = iVar4;
            param_1 = local_8;
          }
        }
      }
    }
    iVar6 = iVar6 + 1;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  } while (iVar6 < 0x15);
  if (*param_3 == 0x13) {
    *param_3 = param_2 + 0x13;
  }
  if (*param_4 == 0x13) {
    *param_4 = param_2 + 0x13;
  }
  return;
}



/* --- CAbnormalStatePriorityInfo::GetManagers_117cb940 @ 117cb940 --- */
// [RE-AUTO c3]
// id: CAbnormalStatePriorityInfo::GetManagers
// strings:
//   ""CAbnormalStatePriorityInfo::GetManagers""

/* [RE-AUTO c3]
   id: CAbnormalStatePriorityInfo::GetManagers
   strings:
     ""CAbnormalStatePriorityInfo::GetManagers"" */

undefined4 CAbnormalStatePriorityInfo__GetManagers_117cb940(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_12393604 & 1) == 0) {
      DAT_12393604 = DAT_12393604 | 1;
      FUN_102500e0("CAbnormalStatePriorityInfo::GetManagers");
      FUN_11a8911f(&LAB_11caaa10);
    }
    return *DAT_123935e8;
  }
  return 0;
}



