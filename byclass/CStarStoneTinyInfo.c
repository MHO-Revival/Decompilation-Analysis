// ===== class CStarStoneTinyInfo  (3 recovered methods) =====

/* --- CStarStoneTinyInfo::GetManagers @ 115a3570 --- */
// [RE-AUTO c3]
// id: CStarStoneTinyInfo::GetManagers
// strings:
//   ""CStarStoneTinyInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStarStoneTinyInfo::GetManagers
   strings:
     ""CStarStoneTinyInfo::GetManagers"" */

undefined * CStarStoneTinyInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2f9d0;
  if (param_3 == 0) {
    if ((DAT_122df3b4 & 1) == 0) {
      DAT_122df3b4 = DAT_122df3b4 | 1;
      FUN_102500e0("CStarStoneTinyInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a70);
    }
    if ((undefined *)*DAT_122df398 != (undefined *)0x0) {
      return (undefined *)*DAT_122df398;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df448 & 1) == 0) {
      DAT_122df448 = DAT_122df448 | 1;
      FUN_115a3fe0();
      FUN_11a8911f(&LAB_11ca39b0);
    }
    puVar1 = &DAT_122df410;
  }
  return puVar1;
}



/* --- CStarStoneTinyInfo::GetManagers_115a5cb0 @ 115a5cb0 --- */
// [RE-AUTO c3]
// id: CStarStoneTinyInfo::GetManagers
// strings:
//   ""CStarStoneTinyInfo::GetManagers""

/* [RE-AUTO c3]
   id: CStarStoneTinyInfo::GetManagers
   strings:
     ""CStarStoneTinyInfo::GetManagers"" */

undefined4 CStarStoneTinyInfo__GetManagers_115a5cb0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df3b4 & 1) == 0) {
      DAT_122df3b4 = DAT_122df3b4 | 1;
      FUN_102500e0("CStarStoneTinyInfo::GetManagers");
      FUN_11a8911f(&LAB_11ca3a70);
    }
    return *DAT_122df398;
  }
  return 0;
}



/* --- CStarStoneTinyInfo::GetManagers_115a6900 @ 115a6900 --- */
// [RE-AUTO c3]
// id: CStarStoneTinyInfo::GetManagers
// strings:
//   ""CStarStoneTinyInfo::GetManagers""
//   ""CStarStoneTinyInfo""

/* [RE-AUTO c3]
   id: CStarStoneTinyInfo::GetManagers
   strings:
     ""CStarStoneTinyInfo::GetManagers""
     ""CStarStoneTinyInfo"" */

undefined4
CStarStoneTinyInfo__GetManagers_115a6900
          (undefined **param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  
  puVar4 = param_2;
  if (((*(int *)((int)param_1 + 0x34) == 1) && (*(int *)((int)param_1 + 0x38) == 8)) &&
     (*(int *)((int)param_1 + 0x3c) == 0x16)) {
    iVar6 = *(int *)((int)param_1 + 0x164);
    uVar3 = (*(int *)((int)param_1 + 0x168) - iVar6) / 0x114;
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        if (*(int *)(iVar6 + 4) == 0xbdb) {
          param_1 = &PTR_FUN_11d2f9d0;
          *param_2 = *(undefined4 *)(iVar6 + 0xf8);
          iVar6 = *(int *)(iVar6 + 0xfc);
          if ((DAT_122df3b4 & 1) == 0) {
            DAT_122df3b4 = DAT_122df3b4 | 1;
            FUN_102500e0("CStarStoneTinyInfo::GetManagers");
            FUN_11a8911f(&LAB_11ca3a70);
          }
          puVar5 = (undefined *)*DAT_122df398;
          if ((puVar5 == (undefined *)0x0) &&
             (puVar5 = (undefined *)FUN_11679e10(&param_1,"CStarStoneTinyInfo",0),
             puVar5 == (undefined *)0x0)) {
            if ((DAT_122df448 & 1) == 0) {
              DAT_122df448 = DAT_122df448 | 1;
              FUN_115a3fe0();
              FUN_11a8911f(&LAB_11ca39b0);
            }
            puVar5 = &DAT_122df410;
          }
          if ((((iVar6 != -1) && ((iVar6 != 0 || (*(int *)(puVar5 + 0x30) == 0)))) &&
              (iVar1 = *(int *)(puVar5 + 0x28), iVar1 != 0)) &&
             ((iVar6 = iVar6 - *(int *)(puVar5 + 0x30), -1 < iVar6 &&
              (iVar6 < *(int *)(puVar5 + 0x24))))) {
            iVar2 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / iVar1) * 4);
            if ((iVar2 != 0) && (iVar6 = *(int *)(iVar2 + (iVar6 % iVar1) * 4), iVar6 != 0)) {
              *param_4 = *(undefined4 *)(iVar6 + 0x28);
              switch(*puVar4) {
              case 0:
                *param_3 = *(undefined4 *)(iVar6 + 0x18);
                return 1;
              case 1:
                *param_3 = *(undefined4 *)(iVar6 + 0x14);
                return 1;
              case 2:
                *param_3 = *(undefined4 *)(iVar6 + 0x1c);
                return 1;
              case 3:
                *param_3 = *(undefined4 *)(iVar6 + 0x20);
                return 1;
              case 4:
                *param_3 = *(undefined4 *)(iVar6 + 0x24);
                return 1;
              }
            }
          }
          return 0;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x114;
      } while (uVar7 < uVar3);
    }
    return 0;
  }
  return 0;
}



