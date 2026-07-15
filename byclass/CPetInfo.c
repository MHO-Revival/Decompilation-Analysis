// ===== class CPetInfo  (3 recovered methods) =====

/* --- CPetInfo::GetManagers @ 1052bec0 --- */
// [RE-AUTO c3]
// id: CPetInfo::GetManagers
// strings:
//   ""CPetInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetInfo::GetManagers
   strings:
     ""CPetInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CPetInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be964 & 1) == 0) {
    DAT_123be964 = DAT_123be964 | 1;
    _DAT_123be95c = &DAT_123be94c;
    DAT_123be960 = &DAT_123be94c;
    DAT_123be94c = 0;
    FUN_100d83d0("CPetInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6fde0);
  }
  return DAT_123be948;
}



/* --- CPetInfo::GetManagers_11583920 @ 11583920 --- */
// [RE-AUTO c3]
// id: CPetInfo::GetManagers
// calls: __alloca_probe
// strings:
//   ""CPetInfo::GetManagers""
//   ""CPetInfo""

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetInfo::GetManagers
   calls: __alloca_probe
   strings:
     ""CPetInfo::GetManagers""
     ""CPetInfo"" */

void __thiscall
CPetInfo__GetManagers_11583920(int *param_1,undefined4 param_2,int param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 local_3c84;
  int local_3c80;
  undefined **local_3c7c;
  int local_3c77;
  char local_3c73;
  undefined4 local_3c71 [18];
  char local_3c28 [15238];
  char local_a2;
  short local_a1;
  undefined1 local_9f [70];
  short local_59;
  undefined1 local_57 [70];
  char local_11;
  char local_10;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar3 = (**(code **)(*param_1 + 0x4c))();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*param_1 + 0x4c))();
    *(undefined4 *)(iVar3 + 0x1ed4) = 0;
  }
  FUN_1158cf60();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_101a6400();
  local_3c84 = 0;
  iVar3 = FUN_101a6df0(param_2,param_3,&local_3c84);
  if ((iVar3 == 0) || (param_3 < 1)) {
    param_1[7] = local_3c77;
    FUN_1158d2e0(local_9f,(int)local_a1);
    FUN_1158d300(local_57,(int)local_59);
    iVar4 = FUN_116a6a70();
    iVar3 = (int)local_a2;
    if ((int)local_a2 < *(int *)(iVar4 + 0x38)) {
      iVar3 = *(int *)(iVar4 + 0x38);
    }
    FUN_1158d320(iVar3);
    if (local_3c73 < '\r') {
      iVar4 = (int)local_3c73;
      bVar1 = false;
      iVar3 = 0;
      if (0 < iVar4) {
        pcVar5 = local_3c28;
        do {
          if (*(int *)(pcVar5 + 0x15) != 0) {
            bVar1 = true;
          }
          if (*pcVar5 == '\x01') {
            cVar2 = pcVar5[-0x4a];
            goto LAB_11583a62;
          }
          iVar3 = iVar3 + 1;
          pcVar5 = pcVar5 + 0x4fc;
        } while (iVar3 < iVar4);
        cVar2 = -1;
LAB_11583a62:
        if (bVar1) {
          local_11 = cVar2;
        }
      }
      param_1[0x21] = (int)local_10;
      local_3c80 = 0;
      if (0 < iVar4) {
        puVar7 = local_3c71;
        do {
          iVar3 = puVar7[1];
          local_3c7c = &PTR_FUN_11dc0b30;
          if ((DAT_123be964 & 1) == 0) {
            DAT_123be964 = DAT_123be964 | 1;
            FUN_102500e0("CPetInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6fde0);
          }
          puVar6 = (undefined *)*DAT_123be948;
          if ((puVar6 == (undefined *)0x0) &&
             (puVar6 = (undefined *)FUN_11679e10(&local_3c7c,"CPetInfo",0),
             puVar6 == (undefined *)0x0)) {
            if ((DAT_123be7b4 & 1) == 0) {
              DAT_123be780 = 0;
              DAT_123be790 = 0;
              DAT_123be794 = 0;
              _DAT_123be798 = 0;
              DAT_123be79c = 0;
              DAT_123be7b4 = DAT_123be7b4 | 1;
              _DAT_123be77c = &PTR_FUN_11dc0d08;
              DAT_123be7a0 = _DAT_11de9ae0;
              DAT_123be7a4 = _UNK_11de9ae4;
              uRam123be7a8 = _UNK_11de9ae8;
              DAT_123be7ac = _UNK_11de9aec;
              DAT_123be7b0 = 1;
              DAT_123be784 = puVar6;
              _DAT_123be788 = puVar6;
              _DAT_123be78c = puVar6;
              FUN_11a8911f(&LAB_11ca2d40);
            }
            puVar6 = &DAT_123be77c;
          }
          local_3c7c = &PTR_FUN_11da54a8;
          if ((iVar3 != -1) &&
             ((((iVar3 != 0 || (*(int *)(puVar6 + 0x30) == 0)) && (*(int *)(puVar6 + 0x28) != 0)) &&
              ((iVar3 = iVar3 - *(int *)(puVar6 + 0x30), -1 < iVar3 &&
               (iVar3 < *(int *)(puVar6 + 0x24))))))) {
            iVar4 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar3 / *(int *)(puVar6 + 0x28)) * 4);
            if ((iVar4 != 0) &&
               ((iVar3 = *(int *)(iVar4 + (iVar3 % *(int *)(puVar6 + 0x28)) * 4), iVar3 != 0 &&
                (iVar4 = FUN_1158cea0(iVar3,param_1,(int)*(char *)((int)puVar7 + -1),*puVar7),
                iVar4 != 0)))) {
              FUN_11567d30(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)((int)puVar7 + 0x34e),
                           *(undefined4 *)((int)puVar7 + 0x352));
              FUN_11584970((int)puVar7 + -1,iVar4);
              FUN_11567c90(puVar7 + 2);
              FUN_100e5d80(puVar7 + 10);
              *(int *)(iVar4 + 0x40) = (int)*(char *)((int)puVar7 + 0x49);
              *(bool *)(iVar4 + 0x44) = local_11 == *(char *)((int)puVar7 + -1);
              FUN_11567bd0(*(undefined4 *)((int)puVar7 + 0x4a),1);
              FUN_11567ae0(*(undefined4 *)((int)puVar7 + 0x4e));
              FUN_11567c00((int)*(short *)((int)puVar7 + 0x52));
              FUN_11567d60((int)*(short *)(puVar7 + 0x15));
              FUN_11567ec0(*(undefined4 *)((int)puVar7 + 0x487));
              FUN_11567f30((int)*(short *)((int)puVar7 + 0x56));
              FUN_115680d0((int)*(short *)(puVar7 + 0x16));
              FUN_11568030(*(undefined4 *)((int)puVar7 + 0x5a),1);
              FUN_11567b50(*(undefined4 *)((int)puVar7 + 0x5e),1);
              *(bool *)(iVar4 + 0x38) = *(char *)((int)puVar7 + 0x62) != '\0';
              *(uint *)(iVar4 + 0x68) = (uint)*(byte *)((int)puVar7 + 0x38e);
              *(undefined4 *)(iVar4 + 0x6c) = *(undefined4 *)((int)puVar7 + 0x34e);
              *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)((int)puVar7 + 0x352);
              *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)((int)puVar7 + 0x356);
              *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)((int)puVar7 + 0x35a);
              *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)((int)puVar7 + 0x37e);
              if (param_4 == '\0') {
                FUN_11568fe0((int)puVar7 + 0x341);
              }
              else {
                FUN_11569040();
              }
              CPetSkillInfo__GetManagers_11588cc0((int)puVar7 + 0x38f);
              FUN_11588fb0((int)puVar7 + 0x48b);
              FUN_11588f00((int)puVar7 + 0x65,*(undefined2 *)((int)puVar7 + 99));
              FUN_11569ca0((int)puVar7 + 0x2dd,*(undefined2 *)((int)puVar7 + 0x2db));
              *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)((int)puVar7 + 0x4eb);
              *(undefined4 *)(iVar4 + 0x84) = *(undefined4 *)((int)puVar7 + 0x4ef);
              FUN_115679a0();
            }
          }
          puVar7 = puVar7 + 0x13f;
          local_3c80 = local_3c80 + 1;
        } while (local_3c80 < local_3c73);
      }
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}



/* --- CPetInfo::GetManagers_11925f60 @ 11925f60 --- */
// [RE-AUTO c3]
// id: CPetInfo::GetManagers
// strings:
//   ""CPetInfo""
//   ""CPetInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetInfo::GetManagers
   strings:
     ""CPetInfo""
     ""CPetInfo::GetManagers"" */

void CPetInfo__GetManagers_11925f60(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_1053ab40(0,"CPetInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dc0b30;
      if ((DAT_123be964 & 1) == 0) {
        DAT_123be964 = DAT_123be964 | 1;
        FUN_102500e0("CPetInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6fde0);
      }
      puVar4 = (undefined *)*DAT_123be948;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123be7b4 & 1) == 0) {
          DAT_123be780 = 0;
          DAT_123be790 = 0;
          DAT_123be794 = 0;
          _DAT_123be798 = 0;
          DAT_123be79c = 0;
          DAT_123be7b4 = DAT_123be7b4 | 1;
          _DAT_123be77c = &PTR_FUN_11dc0d08;
          DAT_123be7a0 = _DAT_11de9ae0;
          DAT_123be7a4 = _UNK_11de9ae4;
          uRam123be7a8 = _UNK_11de9ae8;
          DAT_123be7ac = _UNK_11de9aec;
          DAT_123be7b0 = 1;
          DAT_123be784 = puVar4;
          _DAT_123be788 = puVar4;
          _DAT_123be78c = puVar4;
          FUN_11a8911f(&LAB_11cb1c20);
        }
        puVar4 = &DAT_123be77c;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11755610(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



