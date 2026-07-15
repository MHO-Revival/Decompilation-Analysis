// ===== class CThousandsLayerInfo  (2 recovered methods) =====

/* --- CThousandsLayerInfo::GetManagers @ 10e9f3d0 --- */
// [RE-AUTO c3]
// id: CThousandsLayerInfo::GetManagers
// strings:
//   ""CThousandsLayerInfo::GetManagers""

/* [RE-AUTO c3]
   id: CThousandsLayerInfo::GetManagers
   strings:
     ""CThousandsLayerInfo::GetManagers"" */

undefined * CThousandsLayerInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cf4f50;
  if (param_3 == 0) {
    if ((DAT_1203a704 & 1) == 0) {
      DAT_1203a704 = DAT_1203a704 | 1;
      FUN_102500e0("CThousandsLayerInfo::GetManagers");
      FUN_11a8911f(&LAB_11c90170);
    }
    if ((undefined *)*DAT_1203a6e8 != (undefined *)0x0) {
      return (undefined *)*DAT_1203a6e8;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_1203afa8 & 1) == 0) {
      DAT_1203afa8 = DAT_1203afa8 | 1;
      FUN_10e9fdd0();
      FUN_11a8911f(&LAB_11c8fe00);
    }
    puVar1 = &DAT_1203af70;
  }
  return puVar1;
}



/* --- CThousandsLayerInfo::GetManagers_10ea38b0 @ 10ea38b0 --- */
// [RE-AUTO c3]
// id: CThousandsLayerInfo::GetManagers
// strings:
//   ""CThousandsLayerInfo::GetManagers""

/* [RE-AUTO c3]
   id: CThousandsLayerInfo::GetManagers
   strings:
     ""CThousandsLayerInfo::GetManagers"" */

undefined4 CThousandsLayerInfo__GetManagers_10ea38b0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203a704 & 1) == 0) {
      DAT_1203a704 = DAT_1203a704 | 1;
      FUN_102500e0("CThousandsLayerInfo::GetManagers");
      FUN_11a8911f(&LAB_11c90170);
    }
    return *DAT_1203a6e8;
  }
  return 0;
}



