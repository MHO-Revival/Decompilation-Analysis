// ===== class CCommerceInfo  (3 recovered methods) =====

/* --- CCommerceInfo::GetManagers @ 109f59e0 --- */
// [RE-AUTO c3]
// id: CCommerceInfo::GetManagers
// strings:
//   ""CCommerceInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommerceInfo::GetManagers
   strings:
     ""CCommerceInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCommerceInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c923c & 1) == 0) {
    DAT_123c923c = DAT_123c923c | 1;
    _DAT_123c9254 = &DAT_123c9244;
    DAT_123c9258 = &DAT_123c9244;
    DAT_123c9244 = 0;
    FUN_100d83d0("CCommerceInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7d7e0);
  }
  return DAT_123c9240;
}



/* --- CCommerceInfo::GetManagers_11174830 @ 11174830 --- */
// [RE-AUTO c3]
// id: CCommerceInfo::GetManagers
// strings:
//   ""CCommerceInfo::GetManagers""
//   ""CCommerceInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommerceInfo::GetManagers
   strings:
     ""CCommerceInfo::GetManagers""
     ""CCommerceInfo"" */

void __thiscall CCommerceInfo__GetManagers_11174830(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 != 0) {
    local_18 = *(uint *)(iVar2 + 0x1dc);
    iVar7 = 0;
    local_10 = iVar2;
    while( true ) {
      local_c = &PTR_FUN_11de5760;
      local_14 = iVar7;
      if ((DAT_123c923c & 1) == 0) {
        DAT_123c923c = DAT_123c923c | 1;
        FUN_102500e0("CCommerceInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7d7e0);
      }
      piVar3 = (int *)*DAT_123c9240;
      if ((piVar3 == (int *)0x0) &&
         (piVar3 = (int *)FUN_11679e10(&local_c,"CCommerceInfo",0), piVar3 == (int *)0x0)) {
        if ((DAT_123c92a8 & 1) == 0) {
          DAT_123c92b0 = 0;
          DAT_123c92c0 = 0;
          DAT_123c92c4 = 0;
          _DAT_123c92c8 = 0;
          DAT_123c92cc = 0;
          DAT_123c92a8 = DAT_123c92a8 | 1;
          DAT_123c92ac = &PTR_FUN_11de57b4;
          DAT_123c92d0 = _DAT_11de9ae0;
          DAT_123c92d4 = _UNK_11de9ae4;
          uRam123c92d8 = _UNK_11de9ae8;
          DAT_123c92dc = _UNK_11de9aec;
          DAT_123c92e0 = 1;
          DAT_123c92b4 = piVar3;
          _DAT_123c92b8 = piVar3;
          _DAT_123c92bc = piVar3;
          FUN_11a8911f(&LAB_11c96f10);
        }
        piVar3 = (int *)&DAT_123c92ac;
      }
      local_c = &PTR_FUN_11da54a8;
      iVar4 = (**(code **)(*piVar3 + 0x28))();
      if (iVar4 <= iVar7) break;
      local_c = &PTR_FUN_11de5760;
      if ((DAT_123c923c & 1) == 0) {
        DAT_123c923c = DAT_123c923c | 1;
        FUN_102500e0("CCommerceInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7d7e0);
      }
      puVar5 = (undefined4 *)*DAT_123c9240;
      if ((puVar5 == (undefined4 *)0x0) &&
         (puVar5 = (undefined4 *)FUN_11679e10(&local_c,"CCommerceInfo",0),
         puVar5 == (undefined4 *)0x0)) {
        if ((DAT_123c92a8 & 1) == 0) {
          DAT_123c92a8 = DAT_123c92a8 | 1;
          FUN_109fb670();
          FUN_11a8911f(&LAB_11c96f10);
        }
        puVar5 = &DAT_123c92ac;
      }
      local_c = &PTR_FUN_11da54a8;
      if (((iVar7 < 0) || ((int)(puVar5[6] - puVar5[5]) >> 2 <= iVar7)) ||
         (piVar3 = *(int **)(puVar5[5] + iVar7 * 4), local_1c = piVar3, piVar3 == (int *)0x0)) {
LAB_11174abe:
        iVar7 = iVar7 + 1;
      }
      else {
        local_28 = (**(code **)(*piVar3 + 0x18))();
        bVar1 = (**(code **)(*piVar3 + 0x18))();
        iVar7 = *(int *)(iVar2 + 0x1f0);
        local_20 = 0;
        uStack_24 = CONCAT31(uStack_24._1_3_,(local_18 & 1 << (bVar1 & 0x1f)) != 0);
        iVar6 = *(int *)(iVar2 + 500) - iVar7;
        uVar8 = 0;
        iVar4 = iVar6 >> 0x1f;
        if (iVar6 / 0xc + iVar4 != iVar4) {
          iVar4 = 0;
          do {
            iVar6 = (**(code **)(*local_1c + 0x18))();
            iVar2 = local_10;
            if (*(int *)(iVar4 + iVar7) == iVar6) {
              local_20 = *(undefined4 *)(*(int *)(local_10 + 0x1f0) + 4 + uVar8 * 0xc);
              break;
            }
            uVar8 = uVar8 + 1;
            iVar4 = iVar4 + 0xc;
            iVar7 = *(int *)(local_10 + 0x1f0);
          } while (uVar8 < (uint)((*(int *)(local_10 + 500) - iVar7) / 0xc));
        }
        puVar5 = *(undefined4 **)(param_2 + 4);
        if (puVar5 == *(undefined4 **)(param_2 + 8)) {
          FUN_111786b0(puVar5,&local_28,&local_5,1,1);
          iVar7 = local_14;
          goto LAB_11174abe;
        }
        *puVar5 = local_28;
        puVar5[1] = uStack_24;
        puVar5[2] = local_20;
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 0xc;
        iVar7 = local_14 + 1;
      }
    }
  }
  return;
}



/* --- CCommerceInfo::GetManagers_114a7780 @ 114a7780 --- */
// [RE-AUTO c3]
// id: CCommerceInfo::GetManagers
// strings:
//   ""CCommerceInfo::GetManagers""
//   ""CCommerceInfo""

/* [RE-AUTO c3]
   id: CCommerceInfo::GetManagers
   strings:
     ""CCommerceInfo::GetManagers""
     ""CCommerceInfo"" */

int __thiscall CCommerceInfo__GetManagers_114a7780(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int local_24 [4];
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  iVar6 = *(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e4);
  piVar1 = (int *)(param_1 + 0x1e4);
  uVar7 = 0;
  iVar2 = iVar6 >> 0x1f;
  if (iVar6 / 0x18 + iVar2 != iVar2) {
    piVar8 = (int *)*piVar1;
    do {
      if (*piVar8 == param_2) {
        return *piVar1 + uVar7 * 0x18;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 6;
    } while (uVar7 < (uint)((*(int *)(param_1 + 0x1e8) - *piVar1) / 0x18));
  }
  if (param_3 != '\0') {
    _param_3 = &PTR_FUN_11de5760;
    local_c = param_1;
    if ((DAT_123c923c & 1) == 0) {
      DAT_123c923c = DAT_123c923c | 1;
      FUN_102500e0("CCommerceInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7d7e0);
    }
    puVar5 = (undefined4 *)*DAT_123c9240;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)FUN_11679e10(&param_3,"CCommerceInfo",0);
      if (puVar5 == (undefined4 *)0x0) {
        if ((DAT_123c92a8 & 1) == 0) {
          DAT_123c92a8 = DAT_123c92a8 | 1;
          FUN_109fb670();
          FUN_11a8911f(&LAB_11c9e580);
        }
        puVar5 = &DAT_123c92ac;
      }
    }
    _param_3 = &PTR_FUN_11da54a8;
    if (((param_2 != -1) &&
        (((param_2 != 0 || (puVar5[0xc] == 0)) && (iVar2 = puVar5[10], iVar2 != 0)))) &&
       ((iVar6 = param_2 - puVar5[0xc], -1 < iVar6 && (iVar6 < (int)puVar5[9])))) {
      iVar3 = *(int *)(puVar5[8] + (iVar6 / iVar2) * 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + (iVar6 % iVar2) * 4) != 0)) {
        local_24[0] = param_2;
        local_24[3] = local_24[3] & 0xffffff00;
        local_24[2] = 0;
        local_14 = *(undefined4 *)(local_c + 8);
        uStack_10 = *(undefined4 *)(local_c + 0xc);
        uVar4 = *(undefined8 *)(local_c + 8);
        piVar8 = *(int **)(param_1 + 0x1e8);
        local_24[1] = 0;
        if (piVar8 == *(int **)(param_1 + 0x1ec)) {
          FUN_114acb10(piVar8,local_24,&stack0x0000000b,1,1);
        }
        else {
          if (piVar8 != (int *)0x0) {
            *piVar8 = param_2;
            piVar8[1] = 0;
            piVar8[2] = 0;
            piVar8[3] = local_24[3];
            *(undefined8 *)(piVar8 + 4) = uVar4;
          }
          *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 0x18;
        }
        return *piVar1 + ((*(int *)(param_1 + 0x1e8) - *piVar1) / 0x18) * 0x18 + -0x18;
      }
    }
  }
  return 0;
}



