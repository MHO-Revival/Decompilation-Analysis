// ===== class CDamageInfo  (4 recovered methods) =====

/* --- CDamageInfo::GetManagers @ 10ab9ee0 --- */
// [RE-AUTO c3]
// id: CDamageInfo::GetManagers
// strings:
//   ""CDamageInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo::GetManagers"" */

undefined4 * CDamageInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11cc16bc;
  if (param_3 == 0) {
    if ((DAT_120211bc & 1) == 0) {
      DAT_120211bc = DAT_120211bc | 1;
      FUN_102500e0("CDamageInfo::GetManagers");
      FUN_11a8911f(&LAB_11c80350);
    }
    if ((undefined4 *)*DAT_120211a0 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_120211a0;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_12021208 & 1) == 0) {
      DAT_12021208 = DAT_12021208 | 1;
      FUN_10aba1b0();
      FUN_11a8911f(&LAB_11c802f0);
    }
    puVar1 = &DAT_120211d0;
  }
  return puVar1;
}



/* --- CDamageInfo::GetManagers_10abab30 @ 10abab30 --- */
// [RE-AUTO c3]
// id: CDamageInfo::GetManagers
// strings:
//   ""CDamageInfo::GetManagers""

/* [RE-AUTO c3]
   id: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo::GetManagers"" */

undefined4 CDamageInfo__GetManagers_10abab30(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_120211bc & 1) == 0) {
      DAT_120211bc = DAT_120211bc | 1;
      FUN_102500e0("CDamageInfo::GetManagers");
      FUN_11a8911f(&LAB_11c80350);
    }
    return *DAT_120211a0;
  }
  return 0;
}



/* --- CDamageInfo::GetManagers_118c0c10 @ 118c0c10 --- */
// [RE-AUTO c3]
// id: CDamageInfo::GetManagers
// strings:
//   ""CDamageInfo::GetManagers""
//   ""CDamageInfo""
//   ""CProjectileInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CProjectileInfo""

/* WARNING: Removing unreachable block (ram,0x118c111a) */
/* WARNING: Removing unreachable block (ram,0x118c1120) */
/* WARNING: Removing unreachable block (ram,0x118c112e) */
/* WARNING: Removing unreachable block (ram,0x118c1132) */
/* WARNING: Removing unreachable block (ram,0x118c113b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo::GetManagers""
     ""CDamageInfo""
     ""CProjectileInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CProjectileInfo"" */

void CDamageInfo__GetManagers_118c0c10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *local_28;
  int local_24;
  int local_20;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined **local_8;
  
  FUN_11316700();
  iVar7 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11cc16bc;
    if ((DAT_120211bc & 1) == 0) {
      DAT_120211bc = DAT_120211bc | 1;
      FUN_102500e0("CDamageInfo::GetManagers");
      FUN_11a8911f(&LAB_11c80350);
    }
    piVar3 = (int *)*DAT_120211a0;
    if ((piVar3 == (int *)0x0) &&
       (piVar3 = (int *)FUN_11679e10(&local_8,"CDamageInfo",0), piVar3 == (int *)0x0)) {
      if ((DAT_12021208 & 1) == 0) {
        DAT_120211d4 = 0;
        DAT_120211e4 = 0;
        DAT_120211e8 = 0;
        _DAT_120211ec = 0;
        uRam120211f0 = 0;
        DAT_12021208 = DAT_12021208 | 1;
        DAT_120211d0 = &PTR_FUN_11cc16ec;
        _DAT_120211f4 = _DAT_11de9ae0;
        uRam120211f8 = _UNK_11de9ae4;
        uRam120211fc = _UNK_11de9ae8;
        uRam12021200 = _UNK_11de9aec;
        DAT_12021204 = 1;
        DAT_120211d8 = piVar3;
        _DAT_120211dc = piVar3;
        _DAT_120211e0 = piVar3;
        FUN_11a8911f(&LAB_11cafbe0);
      }
      piVar3 = (int *)&DAT_120211d0;
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar4 = (**(code **)(*piVar3 + 0x28))();
    if (iVar4 <= iVar7) break;
    local_8 = &PTR_FUN_11cc16bc;
    if ((DAT_120211bc & 1) == 0) {
      DAT_120211bc = DAT_120211bc | 1;
      FUN_102500e0("CDamageInfo::GetManagers");
      FUN_11a8911f(&LAB_11c80350);
    }
    piVar3 = (int *)*DAT_120211a0;
    if ((piVar3 == (int *)0x0) &&
       (piVar3 = (int *)FUN_11679e10(&local_8,"CDamageInfo",0), piVar3 == (int *)0x0)) {
      if ((DAT_12021208 & 1) == 0) {
        DAT_120211d4 = 0;
        DAT_120211e4 = 0;
        DAT_120211e8 = 0;
        _DAT_120211ec = 0;
        uRam120211f0 = 0;
        DAT_12021208 = DAT_12021208 | 1;
        DAT_120211d0 = &PTR_FUN_11cc16ec;
        _DAT_120211f4 = _DAT_11de9ae0;
        uRam120211f8 = _UNK_11de9ae4;
        uRam120211fc = _UNK_11de9ae8;
        uRam12021200 = _UNK_11de9aec;
        DAT_12021204 = 1;
        DAT_120211d8 = piVar3;
        _DAT_120211dc = piVar3;
        _DAT_120211e0 = piVar3;
        FUN_11a8911f(&LAB_11cafbe0);
      }
      piVar3 = (int *)&DAT_120211d0;
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((-1 < iVar7) && (iVar7 < piVar3[6] - piVar3[5] >> 2)) &&
       (iVar4 = *(int *)(piVar3[5] + iVar7 * 4), iVar4 != 0)) {
      uVar5 = FUN_11a89150();
      if ((local_20 - local_24 >> 2) - 1U < uVar5) {
        uVar6 = FUN_10265f00(uVar5);
        FUN_11317bb0(uVar6);
      }
      FUN_113186d0(local_10,iVar4 + 0x14);
    }
    iVar7 = iVar7 + 1;
  }
  iVar7 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11ce0b94;
    if ((DAT_1202f624 & 1) == 0) {
      DAT_1202f624 = DAT_1202f624 | 1;
      _DAT_1202f61c = &DAT_1202f60c;
      DAT_1202f620 = &DAT_1202f60c;
      DAT_1202f60c = 0;
      FUN_100d9260("CProjectileInfo::GetManagers","");
      FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
      DAT_1202f608 = (undefined4 *)FUN_100dfd90(DAT_1202f620);
      if (DAT_1202f608 == (undefined4 *)0x0) {
        DAT_1202f608 = (undefined4 *)FUN_100dde50(4);
        *DAT_1202f608 = 0;
        FUN_100dfdc0(DAT_1202f620,DAT_1202f608);
      }
      FUN_11a8911f(&LAB_11c88430);
    }
    piVar3 = (int *)*DAT_1202f608;
    if ((piVar3 == (int *)0x0) &&
       (piVar3 = (int *)FUN_11679e10(&local_8,"CProjectileInfo",0), piVar3 == (int *)0x0)) {
      if ((DAT_1202f670 & 1) == 0) {
        DAT_1202f63c = 0;
        DAT_1202f64c = 0;
        DAT_1202f650 = 0;
        _DAT_1202f654 = 0;
        DAT_1202f658 = 0;
        DAT_1202f670 = DAT_1202f670 | 1;
        DAT_1202f638 = &PTR_FUN_11ce0bcc;
        DAT_1202f65c = _DAT_11de9ae0;
        DAT_1202f660 = _UNK_11de9ae4;
        uRam1202f664 = _UNK_11de9ae8;
        DAT_1202f668 = _UNK_11de9aec;
        DAT_1202f66c = 1;
        DAT_1202f640 = piVar3;
        _DAT_1202f644 = piVar3;
        _DAT_1202f648 = piVar3;
        FUN_11a8911f(&LAB_11cafc40);
      }
      piVar3 = (int *)&DAT_1202f638;
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar4 = (**(code **)(*piVar3 + 0x28))();
    if (iVar4 <= iVar7) break;
    local_8 = &PTR_FUN_11ce0b94;
    if ((DAT_1202f624 & 1) == 0) {
      DAT_1202f624 = DAT_1202f624 | 1;
      FUN_102500e0("CProjectileInfo::GetManagers");
      FUN_11a8911f(&LAB_11c88430);
    }
    piVar3 = (int *)*DAT_1202f608;
    if ((piVar3 == (int *)0x0) &&
       (piVar3 = (int *)FUN_11679e10(&local_8,"CProjectileInfo",0), piVar3 == (int *)0x0)) {
      if ((DAT_1202f670 & 1) == 0) {
        DAT_1202f63c = 0;
        DAT_1202f64c = 0;
        DAT_1202f650 = 0;
        _DAT_1202f654 = 0;
        DAT_1202f658 = 0;
        DAT_1202f670 = DAT_1202f670 | 1;
        DAT_1202f638 = &PTR_FUN_11ce0bcc;
        DAT_1202f65c = _DAT_11de9ae0;
        DAT_1202f660 = _UNK_11de9ae4;
        uRam1202f664 = _UNK_11de9ae8;
        DAT_1202f668 = _UNK_11de9aec;
        DAT_1202f66c = 1;
        DAT_1202f640 = piVar3;
        _DAT_1202f644 = piVar3;
        _DAT_1202f648 = piVar3;
        FUN_11a8911f(&LAB_11cafc40);
      }
      piVar3 = (int *)&DAT_1202f638;
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((((-1 < iVar7) && (iVar7 < piVar3[6] - piVar3[5] >> 2)) &&
        (iVar4 = *(int *)(piVar3[5] + iVar7 * 4), iVar4 != 0)) &&
       (iVar8 = *(int *)(iVar4 + 0x210), iVar8 != *(int *)(iVar4 + 0x214))) {
      do {
        if (*(int *)(iVar8 + 0x14) != *(int *)(iVar8 + 0x10)) {
          FUN_118c05b0(local_c,iVar8);
        }
        iVar8 = iVar8 + 0x18;
      } while (iVar8 != *(int *)(iVar4 + 0x214));
    }
    iVar7 = iVar7 + 1;
  }
  while (local_28 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*local_28;
    puVar2 = (undefined4 *)local_28[6];
    if ((puVar2 != local_28 + 1) && (puVar2 != (undefined4 *)0x0)) {
      FUN_10c3d5d0(puVar2);
    }
    FUN_10c3d5d0(local_28);
    local_28 = puVar1;
  }
  local_8 = (undefined **)0x0;
  FUN_10265dd0(local_20 - local_24 >> 2,&local_8);
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  return;
}



/* --- CDamageInfo::GetManagers_118c2a90 @ 118c2a90 --- */
// [RE-AUTO c3]
// id: CDamageInfo::GetManagers
// strings:
//   ""CDamageInfo::GetManagers""
//   ""CDamageInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CDamageInfo::GetManagers
   strings:
     ""CDamageInfo::GetManagers""
     ""CDamageInfo"" */

void CDamageInfo__GetManagers_118c2a90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  _DAT_1238dba0 = 0;
  iVar3 = 0;
  DAT_1238dba4 = 1;
  while( true ) {
    local_8 = &PTR_FUN_11cc16bc;
    if ((DAT_120211bc & 1) == 0) {
      DAT_120211bc = DAT_120211bc | 1;
      FUN_102500e0("CDamageInfo::GetManagers");
      FUN_11a8911f(&LAB_11c80350);
    }
    piVar1 = (int *)*DAT_120211a0;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CDamageInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_12021208 & 1) == 0) {
          DAT_120211d4 = 0;
          DAT_120211e4 = 0;
          DAT_120211e8 = 0;
          _DAT_120211ec = 0;
          uRam120211f0 = 0;
          DAT_12021208 = DAT_12021208 | 1;
          DAT_120211d0 = &PTR_FUN_11cc16ec;
          _DAT_120211f4 = _DAT_11de9ae0;
          uRam120211f8 = _UNK_11de9ae4;
          uRam120211fc = _UNK_11de9ae8;
          uRam12021200 = _UNK_11de9aec;
          DAT_12021204 = 1;
          DAT_120211d8 = piVar1;
          _DAT_120211dc = piVar1;
          _DAT_120211e0 = piVar1;
          FUN_11a8911f(&LAB_11cafca0);
        }
        piVar1 = (int *)&DAT_120211d0;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar2 = (**(code **)(*piVar1 + 0x28))();
    if (iVar2 <= iVar3) break;
    local_8 = &PTR_FUN_11cc16bc;
    if ((DAT_120211bc & 1) == 0) {
      DAT_120211bc = DAT_120211bc | 1;
      FUN_102500e0("CDamageInfo::GetManagers");
      FUN_11a8911f(&LAB_11c80350);
    }
    piVar1 = (int *)*DAT_120211a0;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_11679e10(&local_8,"CDamageInfo",0);
      if (piVar1 == (int *)0x0) {
        if ((DAT_12021208 & 1) == 0) {
          DAT_120211d4 = 0;
          DAT_120211e4 = 0;
          DAT_120211e8 = 0;
          _DAT_120211ec = 0;
          uRam120211f0 = 0;
          DAT_12021208 = DAT_12021208 | 1;
          DAT_120211d0 = &PTR_FUN_11cc16ec;
          _DAT_120211f4 = _DAT_11de9ae0;
          uRam120211f8 = _UNK_11de9ae4;
          uRam120211fc = _UNK_11de9ae8;
          uRam12021200 = _UNK_11de9aec;
          DAT_12021204 = 1;
          DAT_120211d8 = piVar1;
          _DAT_120211dc = piVar1;
          _DAT_120211e0 = piVar1;
          FUN_11a8911f(&LAB_11cafca0);
        }
        piVar1 = (int *)&DAT_120211d0;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    if (((-1 < iVar3) && (iVar3 < piVar1[6] - piVar1[5] >> 2)) &&
       (*(int *)(piVar1[5] + iVar3 * 4) != 0)) {
      FUN_116e8ff0();
    }
    iVar3 = iVar3 + 1;
  }
  return;
}



