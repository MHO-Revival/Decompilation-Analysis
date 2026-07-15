// ===== class CPetSkillInfo  (34 recovered methods) =====

/* --- CPetSkillInfo::GetManagers @ 1050eea0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CPetSkillInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be4d4 & 1) == 0) {
    DAT_123be4d4 = DAT_123be4d4 | 1;
    _DAT_123be4ec = &DAT_123be4dc;
    DAT_123be4f0 = &DAT_123be4dc;
    DAT_123be4dc = 0;
    FUN_100d83d0("CPetSkillInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6f6b0);
  }
  return DAT_123be4d8;
}



/* --- CPetSkillInfo::GetManagers_112f4fe0 @ 112f4fe0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

uint CPetSkillInfo__GetManagers_112f4fe0(undefined4 param_1,undefined **param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  
  FUN_112fb460(param_1,param_2);
  iVar2 = FUN_1158d040();
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_1051c550(0,"CPetSkillInfo",0);
  uVar5 = (uint)param_3;
  if ((param_3 != (int *)0xffffffff) &&
     ((((param_3 != (int *)0x0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar7 = *(int *)(iVar3 + 0x28), iVar7 != 0)) &&
      ((uVar4 = (int)param_3 - *(int *)(iVar3 + 0x30), uVar5 = uVar4, -1 < (int)uVar4 &&
       ((int)uVar4 < *(int *)(iVar3 + 0x24))))))) {
    uVar5 = (int)uVar4 / iVar7;
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + uVar5 * 4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + ((int)uVar4 % iVar7) * 4), iVar3 != 0)) {
      uVar4 = 0;
      param_3 = (int *)(*(int *)(iVar2 + 0xc) + 0x10);
      iVar7 = *param_3;
      uVar5 = 0;
      if (*(int *)(*(int *)(iVar2 + 0xc) + 0x14) - iVar7 >> 3 != 0) {
        do {
          iVar2 = *(int *)(iVar7 + uVar4 * 8);
          param_2 = &PTR_FUN_11dbffc0;
          if ((DAT_123be4d4 & 1) == 0) {
            DAT_123be4d4 = DAT_123be4d4 | 1;
            FUN_102500e0("CPetSkillInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6f6b0);
          }
          puVar6 = (undefined *)*DAT_123be4d8;
          if ((puVar6 == (undefined *)0x0) &&
             (puVar6 = (undefined *)FUN_11679e10(&param_2,"CPetSkillInfo",0),
             puVar6 == (undefined *)0x0)) {
            if ((DAT_123be404 & 1) == 0) {
              DAT_123be404 = DAT_123be404 | 1;
              FUN_1051d270();
              FUN_11a8911f(&LAB_11c9a6b0);
            }
            puVar6 = &DAT_123be408;
          }
          if (((iVar2 != -1) &&
              (((iVar2 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
               (iVar7 = *(int *)(puVar6 + 0x28), iVar7 != 0)))) &&
             ((iVar2 = iVar2 - *(int *)(puVar6 + 0x30), -1 < iVar2 &&
              (iVar2 < *(int *)(puVar6 + 0x24))))) {
            iVar1 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar2 / iVar7) * 4);
            if ((iVar1 != 0) &&
               (((iVar2 = *(int *)(iVar1 + (iVar2 % iVar7) * 4), iVar2 != 0 &&
                 (*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0x24))) &&
                (iVar7 = *(int *)(iVar3 + 0x14) + 1, *(int *)(iVar2 + 0x14) == iVar7)))) {
              return CONCAT31((int3)((uint)iVar7 >> 8),1);
            }
          }
          uVar4 = uVar4 + 1;
          iVar7 = *param_3;
          uVar5 = param_3[1] - iVar7 >> 3;
        } while (uVar4 < uVar5);
      }
    }
  }
  return uVar5 & 0xffffff00;
}



/* --- CPetSkillInfo::GetManagers_112f6b70 @ 112f6b70 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

undefined4 CPetSkillInfo__GetManagers_112f6b70(undefined4 param_1,undefined **param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 local_44 [8];
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  FUN_112fb460(param_1,param_2);
  iVar5 = FUN_1158d040();
  piVar3 = param_3;
  if (iVar5 != 0) {
    if (*param_3 != param_3[1]) {
      FUN_1051b310(*param_3,param_3[1],(int)&param_2 + 3);
    }
    local_8 = (int *)(*(int *)(iVar5 + 0xc) + 4);
    piVar9 = (int *)*local_8;
    if (piVar9 != *(int **)(*(int *)(iVar5 + 0xc) + 8)) {
      do {
        iVar1 = *piVar9;
        param_2 = &PTR_FUN_11dbffc0;
        if ((DAT_123be4d4 & 1) == 0) {
          DAT_123be4d4 = DAT_123be4d4 | 1;
          FUN_102500e0("CPetSkillInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f6b0);
        }
        puVar6 = (undefined *)*DAT_123be4d8;
        if ((puVar6 == (undefined *)0x0) &&
           (puVar6 = (undefined *)FUN_11679e10(&param_2,"CPetSkillInfo",0),
           puVar6 == (undefined *)0x0)) {
          if ((DAT_123be404 & 1) == 0) {
            DAT_123be404 = DAT_123be404 | 1;
            FUN_1051d270();
            FUN_11a8911f(&LAB_11c9a6b0);
          }
          puVar6 = &DAT_123be408;
        }
        param_2 = &PTR_FUN_11da54a8;
        if ((iVar1 != -1) &&
           ((((iVar1 != 0 || (*(int *)(puVar6 + 0x30) == 0)) && (*(int *)(puVar6 + 0x28) != 0)) &&
            ((iVar7 = iVar1 - *(int *)(puVar6 + 0x30), -1 < iVar7 &&
             (iVar7 < *(int *)(puVar6 + 0x24))))))) {
          iVar2 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / *(int *)(puVar6 + 0x28)) * 4);
          if ((iVar2 != 0) &&
             ((param_3 = *(int **)(iVar2 + (iVar7 % *(int *)(puVar6 + 0x28)) * 4),
              param_3 != (int *)0x0 && (iVar1 != *(int *)(iVar5 + 0x58))))) {
            FUN_100e5570();
            FUN_100e5570();
            FUN_100e5570();
            piVar4 = param_3;
            FUN_100e5d80(param_3[0x10]);
            puVar8 = &DAT_11d9d32b;
            if ((undefined1 *)piVar4[6] != (undefined1 *)0x0) {
              puVar8 = (undefined1 *)piVar4[6];
            }
            FUN_100e5d80(puVar8);
            local_3c = piVar4[5];
            local_38 = piVar4[4];
            local_34 = piVar4[0x16];
            local_28 = piVar4[0x25];
            local_14 = piVar4[0x1b];
            local_18 = piVar4[0x1c];
            local_24 = piVar4[0x19];
            puVar8 = &DAT_11d9d32b;
            if ((undefined1 *)piVar4[7] != (undefined1 *)0x0) {
              puVar8 = (undefined1 *)piVar4[7];
            }
            FUN_100e5d80(puVar8);
            local_1c = piVar4[0x1a];
            local_10 = piVar9[1];
            local_c = piVar4[0x16];
            FUN_11587ff0(piVar4[4],local_30,local_2c);
            iVar1 = piVar3[1];
            if (iVar1 == piVar3[2]) {
              FUN_1051bfd0(iVar1,local_44,(int)&param_2 + 3,1,1);
            }
            else {
              if (iVar1 != 0) {
                FUN_10517d60(local_44);
              }
              piVar3[1] = piVar3[1] + 0x3c;
            }
            FUN_100e5670();
            FUN_100e5670();
            FUN_100e5670();
          }
        }
        piVar9 = piVar9 + 3;
      } while (piVar9 != (int *)local_8[1]);
    }
    return 1;
  }
  return 0;
}



/* --- CPetSkillInfo::GetManagers_112f6dd0 @ 112f6dd0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

uint CPetSkillInfo__GetManagers_112f6dd0(undefined4 param_1,undefined **param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_112fb460(param_1,param_2);
  iVar3 = FUN_1158d040();
  iVar2 = param_3;
  uVar4 = 0;
  if ((iVar3 != 0) && (uVar4 = *(uint *)(iVar3 + 0x1c), *(int *)(uVar4 + 0x1c) == 1)) {
    iVar3 = *(int *)(iVar3 + 0xc);
    piVar7 = *(int **)(iVar3 + 4);
    if (piVar7 != *(int **)(iVar3 + 8)) {
      do {
        iVar6 = *piVar7;
        param_2 = &PTR_FUN_11dbffc0;
        if ((DAT_123be4d4 & 1) == 0) {
          DAT_123be4d4 = DAT_123be4d4 | 1;
          FUN_102500e0("CPetSkillInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f6b0);
        }
        puVar5 = (undefined *)*DAT_123be4d8;
        if ((puVar5 == (undefined *)0x0) &&
           (puVar5 = (undefined *)FUN_11679e10(&param_2,"CPetSkillInfo",0),
           puVar5 == (undefined *)0x0)) {
          if ((DAT_123be404 & 1) == 0) {
            DAT_123be404 = DAT_123be404 | 1;
            FUN_1051d270();
            FUN_11a8911f(&LAB_11c9a6b0);
          }
          puVar5 = &DAT_123be408;
        }
        param_2 = &PTR_FUN_11da54a8;
        if (((iVar6 != -1) &&
            (((iVar6 != 0 || (*(int *)(puVar5 + 0x30) == 0)) && (*(int *)(puVar5 + 0x28) != 0)))) &&
           ((iVar6 = iVar6 - *(int *)(puVar5 + 0x30), -1 < iVar6 &&
            (iVar6 < *(int *)(puVar5 + 0x24))))) {
          iVar1 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / *(int *)(puVar5 + 0x28)) * 4);
          if ((iVar1 != 0) &&
             (iVar6 = *(int *)(iVar1 + (iVar6 % *(int *)(puVar5 + 0x28)) * 4), iVar6 != 0)) {
            FUN_100e5570();
            local_14 = *(undefined4 *)(iVar6 + 0x14);
            local_10 = *(undefined4 *)(iVar6 + 0x10);
            local_c = *(undefined4 *)(iVar6 + 0x58);
            local_8 = *(undefined4 *)(iVar6 + 0x60);
            iVar6 = *(int *)(iVar2 + 4);
            if (iVar6 == *(int *)(iVar2 + 8)) {
              FUN_112f9360(iVar6,local_18,(int)&param_2 + 3,1,1);
            }
            else {
              if (iVar6 != 0) {
                FUN_100e5580(local_18);
                *(undefined4 *)(iVar6 + 4) = local_14;
                *(undefined4 *)(iVar6 + 8) = local_10;
                *(undefined4 *)(iVar6 + 0xc) = local_c;
                *(undefined4 *)(iVar6 + 0x10) = local_8;
              }
              *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 0x14;
            }
            FUN_100e5670();
          }
        }
        piVar7 = piVar7 + 3;
      } while (piVar7 != *(int **)(iVar3 + 8));
    }
    return CONCAT31((int3)((uint)(iVar3 + 4) >> 8),1);
  }
  return uVar4 & 0xffffff00;
}



/* --- CPetSkillInfo::GetManagers_112f73a0 @ 112f73a0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

undefined4
CPetSkillInfo__GetManagers_112f73a0
          (undefined4 param_1,undefined4 param_2,int param_3,undefined **param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = (int *)param_4;
  iVar2 = (int)param_4[1];
  if (*param_4 != (undefined *)iVar2) {
    iVar2 = FUN_112f15a0(iVar2,iVar2,*param_4,(int)&param_4 + 3,0);
    FUN_112f1be0(iVar2,piVar1[1],0,(int)&param_4 + 3);
    piVar1[1] = iVar2;
  }
  iVar2 = FUN_112fb460();
  local_c = (int *)(iVar2 + 0x38);
  local_8 = (int *)*local_c;
  if (local_8 != *(int **)(iVar2 + 0x3c)) {
    do {
      iVar2 = *local_8;
      param_4 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar3 = (undefined *)*DAT_123be4d8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&param_4,"CPetSkillInfo",0), puVar3 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar3;
          _DAT_123be414 = puVar3;
          _DAT_123be418 = puVar3;
          FUN_11a8911f(&LAB_11c9a6b0);
        }
        puVar3 = &DAT_123be408;
      }
      param_4 = &PTR_FUN_11da54a8;
      if ((iVar2 != -1) &&
         ((((iVar2 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar4 = *(int *)(puVar3 + 0x28), iVar4 != 0)) &&
          ((iVar2 = iVar2 - *(int *)(puVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(puVar3 + 0x24))
           ))))) {
        iVar6 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar2 / iVar4) * 4);
        if ((iVar6 != 0) &&
           ((iVar2 = *(int *)(iVar6 + (iVar2 % iVar4) * 4), iVar2 != 0 &&
            (*(int *)(iVar2 + 0x58) == param_3)))) {
          FUN_100e5570();
          FUN_100e5570();
          FUN_100e5570();
          puVar7 = &DAT_11d9d32b;
          if (*(undefined1 **)(iVar2 + 0x18) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(iVar2 + 0x18);
          }
          FUN_100e5d80(puVar7);
          FUN_100e5d80(*(undefined4 *)(iVar2 + 0x40));
          local_44 = *(undefined4 *)(iVar2 + 0x14);
          local_40 = *(undefined4 *)(iVar2 + 0x10);
          local_3c = *(undefined4 *)(iVar2 + 100);
          local_28 = *(undefined4 *)(iVar2 + 0x6c);
          local_2c = *(undefined4 *)(iVar2 + 0x70);
          local_30 = *(undefined4 *)(iVar2 + 0x68);
          puVar7 = &DAT_11d9d32b;
          if (*(undefined1 **)(iVar2 + 0x1c) != (undefined1 *)0x0) {
            puVar7 = *(undefined1 **)(iVar2 + 0x1c);
          }
          FUN_100e5d80(puVar7);
          if (*(int *)(iVar2 + 0x58) == 0) {
            local_24 = *(undefined4 *)(iVar2 + 0x5c);
          }
          else {
            local_24 = 0xffffffff;
          }
          iVar4 = *piVar1;
          iVar6 = 0;
          if (iVar4 == piVar1[1]) {
LAB_112f765a:
            FUN_100e5570();
            local_18 = 0;
            local_14 = 0;
            puVar7 = &DAT_11d9d32b;
            if (*(undefined1 **)(iVar2 + 0x28) != (undefined1 *)0x0) {
              puVar7 = *(undefined1 **)(iVar2 + 0x28);
            }
            local_10 = 0;
            FUN_100e5d80(puVar7);
            iVar4 = local_14;
            local_1c = *(undefined4 *)(iVar2 + 0x24);
            if (local_14 == local_10) {
              FUN_112f9660(local_14,local_4c,(int)&param_4 + 3,1,1);
            }
            else {
              if (local_14 != 0) {
                FUN_100e5580(local_4c);
                FUN_100e5580(local_48);
                *(undefined4 *)(iVar4 + 8) = local_44;
                *(undefined4 *)(iVar4 + 0xc) = local_40;
                *(undefined4 *)(iVar4 + 0x10) = local_3c;
                *(undefined1 *)(iVar4 + 0x14) = local_38;
                FUN_100e5580(local_34);
                *(undefined4 *)(iVar4 + 0x1c) = local_30;
                *(undefined4 *)(iVar4 + 0x20) = local_2c;
                *(undefined4 *)(iVar4 + 0x24) = local_28;
                *(undefined4 *)(iVar4 + 0x28) = local_24;
              }
              local_14 = local_14 + 0x2c;
            }
            iVar2 = piVar1[1];
            if (iVar2 == piVar1[2]) {
              FUN_112f94f0(iVar2,local_20,(int)&param_4 + 3,1,1);
            }
            else {
              if (iVar2 != 0) {
                FUN_100e5580(local_20);
                *(undefined4 *)(iVar2 + 4) = local_1c;
                FUN_112f4090((local_14 - local_18) / 0x2c,(int)&param_4 + 3);
                uVar5 = FUN_112f2aa0(local_18,local_14,*(undefined4 *)(iVar2 + 8),(int)&param_4 + 3,
                                     0);
                *(undefined4 *)(iVar2 + 0xc) = uVar5;
              }
              piVar1[1] = piVar1[1] + 0x14;
            }
            iVar2 = local_18;
            if (local_14 != local_18) {
              iVar4 = local_14 + -0x28;
              do {
                FUN_100e5670();
                FUN_100e5670();
                FUN_100e5670();
                iVar6 = iVar4 + -4;
                iVar4 = iVar4 + -0x2c;
              } while (iVar6 != iVar2);
            }
            if (local_18 != 0) {
              FUN_10c3d5d0(local_18);
            }
            FUN_100e5670();
          }
          else {
            do {
              if (*(int *)(iVar4 + 4) == *(int *)(iVar2 + 0x24)) {
                iVar6 = iVar4;
              }
              iVar4 = iVar4 + 0x14;
            } while (iVar4 != piVar1[1]);
            if (iVar6 == 0) goto LAB_112f765a;
            iVar2 = *(int *)(iVar6 + 0xc);
            if (iVar2 == *(int *)(iVar6 + 0x10)) {
              FUN_112f9660(iVar2,local_4c,(int)&param_4 + 3,1,1);
            }
            else {
              if (iVar2 != 0) {
                FUN_100e5580(local_4c);
                FUN_100e5580(local_48);
                *(undefined4 *)(iVar2 + 8) = local_44;
                *(undefined4 *)(iVar2 + 0xc) = local_40;
                *(undefined4 *)(iVar2 + 0x10) = local_3c;
                *(undefined1 *)(iVar2 + 0x14) = local_38;
                FUN_100e5580(local_34);
                *(undefined4 *)(iVar2 + 0x1c) = local_30;
                *(undefined4 *)(iVar2 + 0x20) = local_2c;
                *(undefined4 *)(iVar2 + 0x24) = local_28;
                *(undefined4 *)(iVar2 + 0x28) = local_24;
              }
              *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 0x2c;
            }
          }
          FUN_100e5670();
          FUN_100e5670();
          FUN_100e5670();
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 != (int *)local_c[1]);
  }
  return CONCAT31((int3)((uint)local_8 >> 8),1);
}



/* --- CPetSkillInfo::GetManagers_113ef7e0 @ 113ef7e0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void CPetSkillInfo__GetManagers_113ef7e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int local_3c;
  undefined1 local_35;
  undefined **local_34;
  int local_30 [11];
  
  local_30[10] = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_116a6a70();
  local_30[0] = 0;
  local_30[9] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  local_3c = FUN_100ec450(*(undefined4 *)(iVar3 + 0xc4),local_30,10);
  if (0 < local_3c) {
    piVar5 = local_30;
    do {
      iVar3 = *piVar5;
      if (iVar3 != 0) {
        local_34 = &PTR_FUN_11dbffc0;
        if ((DAT_123be4d4 & 1) == 0) {
          DAT_123be4d4 = DAT_123be4d4 | 1;
          FUN_102500e0("CPetSkillInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f6b0);
        }
        puVar4 = (undefined *)*DAT_123be4d8;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_34,"CPetSkillInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_123be404 & 1) == 0) {
            DAT_123be404 = DAT_123be404 | 1;
            FUN_1051d270();
            FUN_11a8911f(&LAB_11c9bfa0);
          }
          puVar4 = &DAT_123be408;
        }
        local_34 = &PTR_FUN_11da54a8;
        if ((iVar3 != -1) &&
           ((((iVar3 != 0 || (*(int *)(puVar4 + 0x30) == 0)) && (*(int *)(puVar4 + 0x28) != 0)) &&
            ((iVar3 = iVar3 - *(int *)(puVar4 + 0x30), -1 < iVar3 &&
             (iVar3 < *(int *)(puVar4 + 0x24))))))) {
          iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar3 / *(int *)(puVar4 + 0x28)) * 4);
          if ((iVar1 != 0) &&
             ((iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(puVar4 + 0x28)) * 4), iVar3 != 0 &&
              (*(int *)(iVar3 + 0x58) == 6)))) {
            piVar2 = *(int **)(param_1 + 4);
            if (piVar2 == *(int **)(param_1 + 8)) {
              FUN_10463c40(piVar2,piVar5,&local_35,1,1);
            }
            else {
              *piVar2 = *piVar5;
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
            }
          }
        }
      }
      piVar5 = piVar5 + 1;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  FUN_11a89daa();
  return;
}



/* --- CPetSkillInfo::GetManagers_113f0ca0 @ 113f0ca0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void __fastcall CPetSkillInfo__GetManagers_113f0ca0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_40 [16];
  undefined ***pppuStack_30;
  undefined ***pppuStack_2c;
  char *pcStack_28;
  char *pcStack_24;
  undefined **local_8;
  
  if (*(int *)(param_1 + 0x1ed4) != 0) {
    if (*(char *)(param_1 + 0x1f14) == '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1ed4) + 0xc);
      piVar7 = *(int **)(iVar1 + 4);
      if (piVar7 != *(int **)(iVar1 + 8)) {
        do {
          iVar6 = *piVar7;
          local_8 = &PTR_FUN_11dbffc0;
          if ((DAT_123be4d4 & 1) == 0) {
            DAT_123be4d4 = DAT_123be4d4 | 1;
            pcStack_24 = "CPetSkillInfo::GetManagers";
            pcStack_28 = (char *)0x113f0d18;
            FUN_102500e0();
            pcStack_28 = &LAB_11c6f6b0;
            pppuStack_2c = (undefined ***)0x113f0d22;
            FUN_11a8911f();
          }
          pcStack_24 = (char *)*DAT_123be4d8;
          if (pcStack_24 == (undefined *)0x0) {
            pppuStack_2c = &local_8;
            pcStack_28 = "CPetSkillInfo";
            pppuStack_30 = (undefined ***)0x113f0d3f;
            pcStack_24 = (char *)FUN_11679e10();
            if (pcStack_24 == (undefined *)0x0) {
              if ((DAT_123be404 & 1) == 0) {
                DAT_123be404 = DAT_123be404 | 1;
                pcStack_24 = (char *)0x113f0d63;
                FUN_1051d270();
                pcStack_24 = &LAB_11c9bfa0;
                pcStack_28 = (char *)0x113f0d6d;
                FUN_11a8911f();
              }
              pcStack_24 = &DAT_123be408;
            }
          }
          local_8 = &PTR_FUN_11da54a8;
          if (((iVar6 != -1) &&
              (((iVar6 != 0 || (*(int *)(pcStack_24 + 0x30) == 0)) &&
               (iVar2 = *(int *)(pcStack_24 + 0x28), iVar2 != 0)))) &&
             ((iVar5 = iVar6 - *(int *)(pcStack_24 + 0x30), -1 < iVar5 &&
              (iVar5 < *(int *)(pcStack_24 + 0x24))))) {
            iVar3 = *(int *)(*(int *)(pcStack_24 + 0x20) + (iVar5 / iVar2) * 4);
            if ((iVar3 != 0) && (iVar2 = *(int *)(iVar3 + (iVar5 % iVar2) * 4), iVar2 != 0)) {
              pcStack_28 = (char *)0x113f0dd1;
              pcStack_24 = (char *)iVar6;
              cVar4 = FUN_11588660();
              if (cVar4 != '\0') {
                pcStack_24 = *(char **)(iVar2 + 0xac);
                pcStack_28 = (char *)0x113f0de0;
                iVar6 = FUN_113ad880();
                if (iVar6 != -1) {
                  pppuStack_30 = (undefined ***)auStack_40;
                  auStack_40[0] = 0;
                  pcStack_28 = (char *)0x2;
                  pppuStack_2c = pppuStack_30;
                  FUN_113e5380(iVar6,0,(float)((double)*(int *)(iVar2 + 0xb0) / DAT_11de99b8));
                }
              }
            }
          }
          piVar7 = piVar7 + 3;
        } while (piVar7 != *(int **)(iVar1 + 8));
      }
    }
    return;
  }
  pcStack_24 = (char *)0x113f0cc2;
  CPetSkillInfo__GetManagers_113f0ff0();
  return;
}



/* --- CPetSkillInfo::GetManagers_113f0ff0 @ 113f0ff0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void __fastcall CPetSkillInfo__GetManagers_113f0ff0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined ***pppuStack_58;
  undefined ***pppuStack_54;
  int *piStack_50;
  char *pcStack_4c;
  int local_3c;
  undefined **local_38;
  int local_34;
  int local_30 [11];
  
  local_30[10] = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  pcStack_4c = (char *)0x113f100a;
  iVar2 = FUN_116a6a70();
  local_30[0] = 0;
  pcStack_4c = (char *)0xa;
  piStack_50 = local_30;
  local_30[9] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  pppuStack_54 = *(undefined ****)(iVar2 + 0xc4);
  pppuStack_58 = (undefined ***)0x113f1036;
  iVar2 = FUN_100ec450();
  local_3c = 0;
  local_34 = iVar2;
  if (0 < iVar2) {
    do {
      iVar6 = local_30[local_3c];
      if (iVar6 != 0) {
        local_38 = &PTR_FUN_11dbffc0;
        if ((DAT_123be4d4 & 1) == 0) {
          DAT_123be4d4 = DAT_123be4d4 | 1;
          pcStack_4c = "CPetSkillInfo::GetManagers";
          piStack_50 = (int *)0x113f1082;
          FUN_102500e0();
          piStack_50 = (int *)&LAB_11c6f6b0;
          pppuStack_54 = (undefined ***)0x113f108c;
          FUN_11a8911f();
        }
        pcVar3 = (char *)*DAT_123be4d8;
        if (pcVar3 == (char *)0x0) {
          pppuStack_54 = &local_38;
          piStack_50 = (int *)0x11dbf360;
          pppuStack_58 = (undefined ***)0x113f10a9;
          pcStack_4c = pcVar3;
          pcVar3 = (char *)FUN_11679e10();
          if (pcVar3 == (char *)0x0) {
            if ((DAT_123be404 & 1) == 0) {
              DAT_123be404 = DAT_123be404 | 1;
              pcStack_4c = (char *)0x113f10cd;
              FUN_1051d270();
              pcStack_4c = &LAB_11c9bfa0;
              piStack_50 = (int *)0x113f10d7;
              FUN_11a8911f();
            }
            pcVar3 = &DAT_123be408;
          }
        }
        local_38 = &PTR_FUN_11da54a8;
        if (((iVar6 != -1) &&
            (((iVar6 != 0 || (*(int *)(pcVar3 + 0x30) == 0)) &&
             (iVar5 = *(int *)(pcVar3 + 0x28), iVar2 = local_34, iVar5 != 0)))) &&
           ((iVar6 = iVar6 - *(int *)(pcVar3 + 0x30), -1 < iVar6 &&
            (iVar6 < *(int *)(pcVar3 + 0x24))))) {
          iVar1 = *(int *)(*(int *)(pcVar3 + 0x20) + (iVar6 / iVar5) * 4);
          if ((iVar1 != 0) && (iVar6 = *(int *)(iVar1 + (iVar6 % iVar5) * 4), iVar6 != 0)) {
            pcStack_4c = *(char **)(iVar6 + 0xac);
            piStack_50 = (int *)0x113f1142;
            iVar2 = FUN_113ad880();
            if (iVar2 != -1) {
              pppuStack_58 = (undefined ***)auStack_68;
              auStack_68[0] = 0;
              piStack_50 = (int *)0x2;
              pppuStack_54 = pppuStack_58;
              FUN_113e5380(iVar2,0,(float)((double)*(int *)(iVar6 + 0xb0) / DAT_11de99b8));
            }
            if (*(undefined ****)(iVar6 + 0xb4) != (undefined ***)0x0) {
              pcStack_4c = (char *)0xc;
              piStack_50 = (int *)0x1;
              pppuStack_54 = (undefined ***)0x0;
              uStack_5c = 0;
              uStack_60 = 0x113f11ac;
              pppuStack_58 = *(undefined ****)(iVar6 + 0xb4);
              (**(code **)(**(int **)(param_1 + 0x10) + 0x44))();
            }
            iVar2 = local_34;
            if (((*(int *)(iVar6 + 0xb8) != 0) &&
                (*(char **)(param_1 + 0x1ec4) != (char *)0xffffffff)) &&
               ((*(int *)(param_1 + 0xc) != 0 &&
                (piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 0x90), piVar4 != (int *)0x0)))) {
              piStack_50 = (int *)0x113f11db;
              pcStack_4c = *(char **)(param_1 + 0x1ec4);
              piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))();
              iVar2 = local_34;
              if (piVar4 != (int *)0x0) {
                pcStack_4c = (char *)0x113f11e9;
                iVar5 = (**(code **)(*piVar4 + 0xa8))();
                iVar2 = local_34;
                if (iVar5 == 0) {
                  pcStack_4c = *(char **)(param_1 + 0x1ec4);
                  if (((pcStack_4c == (char *)0xffffffff) || (*(int *)(param_1 + 0xc) == 0)) ||
                     (piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 0x90), piVar4 == (int *)0x0)) {
LAB_113f1223:
                    piVar4 = (int *)0x0;
                  }
                  else {
                    piStack_50 = (int *)0x113f120f;
                    piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))();
                    if (piVar4 == (int *)0x0) goto LAB_113f1223;
                    pcStack_4c = (char *)0x113f121f;
                    iVar2 = (**(code **)(*piVar4 + 0xa8))();
                    if (iVar2 != 0) goto LAB_113f1223;
                  }
                  pcStack_4c = (char *)0xc;
                  piStack_50 = (int *)0x1;
                  pppuStack_54 = (undefined ***)0x0;
                  pppuStack_58 = *(undefined ****)(iVar6 + 0xb8);
                  uStack_5c = 0;
                  uStack_60 = 0x113f123b;
                  (**(code **)(*(int *)piVar4[4] + 0x44))();
                  iVar2 = local_34;
                }
              }
            }
          }
        }
      }
      local_3c = local_3c + 1;
    } while (local_3c < iVar2);
  }
  FUN_11a89daa();
  return;
}



/* --- CPetSkillInfo::GetManagers_11582130 @ 11582130 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void __fastcall CPetSkillInfo__GetManagers_11582130(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined **local_c;
  int *local_8;
  
  local_8 = param_1;
  iVar2 = (**(code **)(*(int *)param_1[1] + 0xa8))();
  if (iVar2 == 0) {
    FUN_11635cc0();
    iVar2 = 0;
    if (0 < *(int *)(param_1[3] + 0x34)) {
      do {
        iVar3 = FUN_1158d020(iVar2);
        if (iVar3 != 0) {
          FUN_11566d80();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1[3] + 0x34));
    }
    iVar2 = (**(code **)(*param_1 + 0x4c))();
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x4c))(0);
      FUN_113efff0();
      iVar2 = *(int *)param_1[2];
      uVar4 = (**(code **)(*param_1 + 0x4c))();
      (**(code **)(iVar2 + 0x20))(uVar4);
      (**(code **)(*param_1 + 0x50))(0);
      *(undefined1 *)(param_1 + 6) = 0;
      return;
    }
    local_10 = 0;
    if (0 < *(int *)(param_1[3] + 0x34)) {
      do {
        iVar2 = local_10;
        iVar3 = FUN_1158d020(local_10);
        if ((iVar3 != 0) && (*(char *)(iVar3 + 0x44) != '\0')) {
          local_1c = 0;
          local_18 = 0;
          local_14 = 0;
          FUN_11587830(8,&local_1c);
          uVar6 = 0;
          if (local_18 - local_1c >> 2 != 0) {
            do {
              iVar2 = *(int *)(local_1c + uVar6 * 4);
              if (iVar2 != 0) {
                local_c = &PTR_FUN_11dbffc0;
                if ((DAT_123be4d4 & 1) == 0) {
                  DAT_123be4d4 = DAT_123be4d4 | 1;
                  FUN_102500e0("CPetSkillInfo::GetManagers");
                  FUN_11a8911f(&LAB_11c6f6b0);
                }
                puVar5 = (undefined *)*DAT_123be4d8;
                if ((puVar5 == (undefined *)0x0) &&
                   (puVar5 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0),
                   puVar5 == (undefined *)0x0)) {
                  if ((DAT_123be404 & 1) == 0) {
                    DAT_123be40c = 0;
                    DAT_123be41c = 0;
                    DAT_123be420 = 0;
                    _DAT_123be424 = 0;
                    DAT_123be428 = 0;
                    DAT_123be404 = DAT_123be404 | 1;
                    _DAT_123be408 = &PTR_FUN_11dbffd8;
                    DAT_123be42c = _DAT_11de9ae0;
                    DAT_123be430 = _UNK_11de9ae4;
                    uRam123be434 = _UNK_11de9ae8;
                    DAT_123be438 = _UNK_11de9aec;
                    DAT_123be43c = 1;
                    DAT_123be410 = puVar5;
                    _DAT_123be414 = puVar5;
                    _DAT_123be418 = puVar5;
                    FUN_11a8911f(&LAB_11ca2e60);
                  }
                  puVar5 = &DAT_123be408;
                }
                local_c = &PTR_FUN_11da54a8;
                if (((iVar2 == -1) ||
                    (((iVar2 == 0 && (*(int *)(puVar5 + 0x30) != 0)) ||
                     (iVar3 = *(int *)(puVar5 + 0x28), param_1 = local_8, iVar3 == 0)))) ||
                   ((iVar2 = iVar2 - *(int *)(puVar5 + 0x30), iVar2 < 0 ||
                    (*(int *)(puVar5 + 0x24) <= iVar2)))) {
LAB_11582336:
                  iVar2 = 0;
                }
                else {
                  iVar1 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar2 / iVar3) * 4);
                  if (iVar1 == 0) goto LAB_11582336;
                  iVar2 = *(int *)(iVar1 + (iVar2 % iVar3) * 4);
                }
                if (*(int *)(iVar2 + 0x5c) != 4) {
                  (**(code **)(**(int **)(param_1[1] + 0x10) + 0x4c))
                            (*(undefined4 *)(iVar2 + 0xb8),1);
                }
              }
              uVar6 = uVar6 + 1;
              iVar2 = local_10;
            } while (uVar6 < (uint)(local_18 - local_1c >> 2));
          }
          if (local_1c != 0) {
            FUN_10c3d5d0(local_1c);
          }
        }
        local_10 = iVar2 + 1;
      } while (local_10 < *(int *)(param_1[3] + 0x34));
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_11584a50 @ 11584a50 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void CPetSkillInfo__GetManagers_11584a50(short *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined **local_38;
  int local_34;
  int local_30 [11];
  
  local_30[10] = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[9] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  local_34 = 0;
  if (0 < *param_1) {
    do {
      iVar8 = (int)(short)local_34;
      local_38 = &PTR_FUN_11dbffc0;
      piVar4 = (int *)(param_1 + iVar8 * 6 + 1);
      iVar7 = *piVar4;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar5 = (undefined *)*DAT_123be4d8;
      if ((puVar5 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&local_38,"CPetSkillInfo",0),
         puVar5 == (undefined *)0x0)) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar5;
          _DAT_123be414 = puVar5;
          _DAT_123be418 = puVar5;
          FUN_11a8911f(&LAB_11ca2e60);
        }
        puVar5 = &DAT_123be408;
      }
      local_38 = &PTR_FUN_11da54a8;
      if ((iVar7 == -1) ||
         ((((iVar7 == 0 && (*(int *)(puVar5 + 0x30) != 0)) || (*(int *)(puVar5 + 0x28) == 0)) ||
          ((iVar7 = iVar7 - *(int *)(puVar5 + 0x30), iVar7 < 0 || (*(int *)(puVar5 + 0x24) <= iVar7)
           ))))) {
LAB_11584d23:
        if (0 < *param_1) {
          *(undefined4 *)(param_1 + iVar8 * 6 + 1) = *(undefined4 *)(param_1 + *param_1 * 6 + -5);
          *(undefined4 *)(param_1 + iVar8 * 6 + 3) = *(undefined4 *)(param_1 + *param_1 * 6 + -3);
          sVar1 = *param_1;
          (param_1 + sVar1 * 6 + -5)[0] = 0;
          (param_1 + sVar1 * 6 + -5)[1] = 0;
          sVar1 = *param_1;
          (param_1 + sVar1 * 6 + -3)[0] = 0;
          (param_1 + sVar1 * 6 + -3)[1] = 0;
          *param_1 = *param_1 + -1;
        }
      }
      else {
        iVar2 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar7 / *(int *)(puVar5 + 0x28)) * 4);
        if ((iVar2 == 0) ||
           ((iVar7 = *(int *)(iVar2 + (iVar7 % *(int *)(puVar5 + 0x28)) * 4), iVar7 == 0 ||
            (*(int *)(iVar7 + 0x58) < 6)))) goto LAB_11584d23;
        iVar7 = 0;
        if (0 < iVar8) {
          piVar6 = (int *)(param_1 + 1);
          do {
            if (*piVar4 == *piVar6) goto LAB_11584d23;
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 3;
          } while (iVar7 < iVar8);
        }
        local_38 = &PTR_FUN_11dbffc0;
        iVar7 = *piVar4;
        if ((DAT_123be4d4 & 1) == 0) {
          DAT_123be4d4 = DAT_123be4d4 | 1;
          FUN_102500e0("CPetSkillInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f6b0);
        }
        puVar5 = (undefined *)*DAT_123be4d8;
        if ((puVar5 == (undefined *)0x0) &&
           (puVar5 = (undefined *)FUN_11679e10(&local_38,"CPetSkillInfo",0),
           puVar5 == (undefined *)0x0)) {
          if ((DAT_123be404 & 1) == 0) {
            DAT_123be40c = 0;
            DAT_123be41c = 0;
            DAT_123be420 = 0;
            _DAT_123be424 = 0;
            DAT_123be428 = 0;
            DAT_123be404 = DAT_123be404 | 1;
            _DAT_123be408 = &PTR_FUN_11dbffd8;
            DAT_123be42c = _DAT_11de9ae0;
            DAT_123be430 = _UNK_11de9ae4;
            uRam123be434 = _UNK_11de9ae8;
            DAT_123be438 = _UNK_11de9aec;
            DAT_123be43c = 1;
            DAT_123be410 = puVar5;
            _DAT_123be414 = puVar5;
            _DAT_123be418 = puVar5;
            FUN_11a8911f(&LAB_11ca2e60);
          }
          puVar5 = &DAT_123be408;
        }
        local_38 = &PTR_FUN_11da54a8;
        if (((iVar7 == -1) ||
            (((iVar7 == 0 && (*(int *)(puVar5 + 0x30) != 0)) || (*(int *)(puVar5 + 0x28) == 0)))) ||
           ((iVar7 = iVar7 - *(int *)(puVar5 + 0x30), iVar7 < 0 ||
            (*(int *)(puVar5 + 0x24) <= iVar7)))) goto LAB_11584d23;
        iVar2 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar7 / *(int *)(puVar5 + 0x28)) * 4);
        if ((iVar2 == 0) ||
           ((iVar7 = *(int *)(iVar2 + (iVar7 % *(int *)(puVar5 + 0x28)) * 4), iVar7 == 0 ||
            (cVar3 = FUN_1174bf40(*(int *)(iVar7 + 0x58),local_30[*(int *)(iVar7 + 0x58)]),
            cVar3 == '\0')))) goto LAB_11584d23;
        piVar4[1] = local_30[*(int *)(iVar7 + 0x58)];
        local_30[*(int *)(iVar7 + 0x58)] = local_30[*(int *)(iVar7 + 0x58)] + 1;
        local_34 = local_34 + 1;
      }
    } while ((short)local_34 < *param_1);
  }
  FUN_11a89daa(param_2);
  return;
}



/* --- CPetSkillInfo::GetManagers_11586f40 @ 11586f40 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void __fastcall CPetSkillInfo__GetManagers_11586f40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined **local_8;
  
  piVar5 = *(int **)(param_1 + 4);
  if (piVar5 != *(int **)(param_1 + 8)) {
    do {
      iVar4 = *piVar5;
      local_8 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar3 = (undefined *)*DAT_123be4d8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar3 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar3;
          _DAT_123be414 = puVar3;
          _DAT_123be418 = puVar3;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar3 = &DAT_123be408;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((iVar4 != -1) &&
          (((iVar4 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)))) &&
         ((iVar4 = iVar4 - *(int *)(puVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar3 + 0x24)))
         )) {
        iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar4 = *(int *)(iVar2 + (iVar4 % iVar1) * 4), iVar4 != 0)) {
          FUN_11589550(iVar4);
        }
      }
      piVar5 = piVar5 + 3;
    } while (piVar5 != *(int **)(param_1 + 8));
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_11587080 @ 11587080 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void __fastcall CPetSkillInfo__GetManagers_11587080(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined **local_8;
  
  piVar5 = *(int **)(param_1 + 4);
  if (piVar5 != *(int **)(param_1 + 8)) {
    do {
      iVar4 = *piVar5;
      local_8 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar3 = (undefined *)*DAT_123be4d8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar3 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar3;
          _DAT_123be414 = puVar3;
          _DAT_123be418 = puVar3;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar3 = &DAT_123be408;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((iVar4 != -1) &&
          (((iVar4 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)))) &&
         ((iVar4 = iVar4 - *(int *)(puVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar3 + 0x24)))
         )) {
        iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar4 = *(int *)(iVar2 + (iVar4 % iVar1) * 4), iVar4 != 0)) {
          FUN_11589640(iVar4);
        }
      }
      piVar5 = piVar5 + 3;
    } while (piVar5 != *(int **)(param_1 + 8));
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_11588160 @ 11588160 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void __fastcall CPetSkillInfo__GetManagers_11588160(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined **local_8;
  
  piVar6 = (int *)param_1[1];
  if (piVar6 != (int *)param_1[2]) {
    do {
      iVar4 = *piVar6;
      local_8 = &PTR_FUN_11dbffc0;
      local_c = iVar4;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar3 = (undefined *)*DAT_123be4d8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar3 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar3;
          _DAT_123be414 = puVar3;
          _DAT_123be418 = puVar3;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar3 = &DAT_123be408;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar4 != -1) &&
         ((((iVar4 != 0 || (*(int *)(puVar3 + 0x30) == 0)) && (*(int *)(puVar3 + 0x28) != 0)) &&
          ((iVar4 = iVar4 - *(int *)(puVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar3 + 0x24))
           ))))) {
        iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / *(int *)(puVar3 + 0x28)) * 4);
        if ((iVar1 != 0) &&
           (((iVar4 = *(int *)(iVar1 + (iVar4 % *(int *)(puVar3 + 0x28)) * 4), iVar4 != 0 &&
             (cVar2 = FUN_1158acd0(*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x94)),
             cVar2 != '\0')) && (cVar2 = FUN_1158add0(iVar4), cVar2 != '\0')))) {
          FUN_11589640(iVar4);
          local_20 = local_c;
          local_28 = 0;
          local_24 = 0;
          local_1c = 0;
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          piVar5 = (int *)(**(code **)(**(int **)*param_1 + 0x54))();
          (**(code **)(*piVar5 + 100))
                    (8,*(undefined4 *)(*param_1 + 0x24),*(undefined4 *)(*param_1 + 0x28),&local_28);
        }
      }
      piVar6 = piVar6 + 3;
    } while (piVar6 != (int *)param_1[2]);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_11588460 @ 11588460 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

undefined4 __thiscall CPetSkillInfo__GetManagers_11588460(int param_1,undefined **param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int local_8;
  
  iVar3 = FUN_1051c550(0,"CPetSkillInfo",0);
  if ((param_2 != (undefined **)0xffffffff) &&
     ((((param_2 != (undefined **)0x0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar7 = *(int *)(iVar3 + 0x28), iVar7 != 0)) &&
      ((iVar4 = (int)param_2 - *(int *)(iVar3 + 0x30), -1 < iVar4 &&
       (iVar4 < *(int *)(iVar3 + 0x24))))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar7) * 4);
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + (iVar4 % iVar7) * 4);
      if (iVar3 != 0) {
        piVar5 = (int *)(iVar3 + 0x80);
        local_8 = 0;
        do {
          iVar3 = *piVar5;
          if ((iVar3 != 0) && (piVar8 = *(int **)(param_1 + 4), piVar8 != *(int **)(param_1 + 8))) {
            do {
              iVar7 = *piVar8;
              param_2 = &PTR_FUN_11dbffc0;
              if ((DAT_123be4d4 & 1) == 0) {
                DAT_123be4d4 = DAT_123be4d4 | 1;
                FUN_102500e0("CPetSkillInfo::GetManagers");
                FUN_11a8911f(&LAB_11c6f6b0);
              }
              puVar6 = (undefined *)*DAT_123be4d8;
              if ((puVar6 == (undefined *)0x0) &&
                 (puVar6 = (undefined *)FUN_11679e10(&param_2,"CPetSkillInfo",0),
                 puVar6 == (undefined *)0x0)) {
                if ((DAT_123be404 & 1) == 0) {
                  DAT_123be40c = 0;
                  DAT_123be41c = 0;
                  DAT_123be420 = 0;
                  _DAT_123be424 = 0;
                  DAT_123be428 = 0;
                  DAT_123be404 = DAT_123be404 | 1;
                  _DAT_123be408 = &PTR_FUN_11dbffd8;
                  DAT_123be42c = _DAT_11de9ae0;
                  DAT_123be430 = _UNK_11de9ae4;
                  uRam123be434 = _UNK_11de9ae8;
                  DAT_123be438 = _UNK_11de9aec;
                  DAT_123be43c = 1;
                  DAT_123be410 = puVar6;
                  _DAT_123be414 = puVar6;
                  _DAT_123be418 = puVar6;
                  FUN_11a8911f(&LAB_11ca2fb0);
                }
                puVar6 = &DAT_123be408;
              }
              param_2 = &PTR_FUN_11da54a8;
              if (((iVar7 != -1) &&
                  (((iVar7 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
                   (iVar4 = *(int *)(puVar6 + 0x28), iVar4 != 0)))) &&
                 ((iVar7 = iVar7 - *(int *)(puVar6 + 0x30), -1 < iVar7 &&
                  (iVar7 < *(int *)(puVar6 + 0x24))))) {
                iVar1 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar4) * 4);
                if ((iVar1 != 0) &&
                   ((*(int *)(iVar1 + (iVar7 % iVar4) * 4) != 0 &&
                    (cVar2 = FUN_117575f0(iVar3), cVar2 != '\0')))) {
                  return 1;
                }
              }
              piVar8 = piVar8 + 3;
            } while (piVar8 != *(int **)(param_1 + 8));
          }
          local_8 = local_8 + 1;
          piVar5 = piVar5 + 1;
          if (4 < local_8) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}



/* --- CPetSkillInfo::GetManagers_11588719 @ 11588719 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

uint CPetSkillInfo__GetManagers_11588719(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_EAX;
  undefined *puVar4;
  int unaff_EBP;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(in_EAX + 4);
  if (piVar6 != *(int **)(in_EAX + 8)) {
    do {
      uVar3 = DAT_123be4d4 & 1;
      iVar5 = *piVar6;
      *(undefined ***)(unaff_EBP + -4) = &PTR_FUN_11dbffc0;
      if (uVar3 == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(unaff_EBP + -4,"CPetSkillInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be404 = DAT_123be404 | 1;
          FUN_1051d270();
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar4 = &DAT_123be408;
      }
      *(undefined ***)(unaff_EBP + -4) = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)) &&
          ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar4 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0 &&
            (*(int *)(iVar5 + 0x24) == *(int *)(unaff_EBP + 8))))) {
          return CONCAT31((int3)((uint)iVar5 >> 8),1);
        }
      }
      in_EAX = *(uint *)(unaff_EBP + -8);
      piVar6 = piVar6 + 3;
    } while (piVar6 != *(int **)(in_EAX + 8));
  }
  return in_EAX & 0xffffff00;
}



/* --- CPetSkillInfo::GetManagers_11588820 @ 11588820 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

uint __thiscall CPetSkillInfo__GetManagers_11588820(uint param_1,undefined **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = FUN_1051c550(0,"CPetSkillInfo",0);
  if ((param_2 != (undefined **)0xffffffff) &&
     ((((param_2 != (undefined **)0x0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar6 = *(int *)(iVar3 + 0x28), iVar6 != 0)) &&
      ((uVar4 = (int)param_2 - *(int *)(iVar3 + 0x30), param_2 = (undefined **)uVar4,
       -1 < (int)uVar4 && ((int)uVar4 < *(int *)(iVar3 + 0x24))))))) {
    param_2 = (undefined **)((int)uVar4 / iVar6);
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (int)param_2 * 4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + ((int)uVar4 % iVar6) * 4), iVar3 != 0)) {
      piVar7 = *(int **)(param_1 + 4);
      if (piVar7 != *(int **)(param_1 + 8)) {
        do {
          iVar6 = *piVar7;
          param_2 = &PTR_FUN_11dbffc0;
          if ((DAT_123be4d4 & 1) == 0) {
            DAT_123be4d4 = DAT_123be4d4 | 1;
            FUN_102500e0("CPetSkillInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6f6b0);
          }
          puVar5 = (undefined *)*DAT_123be4d8;
          if ((puVar5 == (undefined *)0x0) &&
             (puVar5 = (undefined *)FUN_11679e10(&param_2,"CPetSkillInfo",0),
             puVar5 == (undefined *)0x0)) {
            if ((DAT_123be404 & 1) == 0) {
              DAT_123be404 = DAT_123be404 | 1;
              FUN_1051d270();
              FUN_11a8911f(&LAB_11ca2fb0);
            }
            puVar5 = &DAT_123be408;
          }
          if (((iVar6 != -1) &&
              (((iVar6 != 0 || (*(int *)(puVar5 + 0x30) == 0)) &&
               (iVar1 = *(int *)(puVar5 + 0x28), iVar1 != 0)))) &&
             ((iVar6 = iVar6 - *(int *)(puVar5 + 0x30), -1 < iVar6 &&
              (iVar6 < *(int *)(puVar5 + 0x24))))) {
            iVar2 = *(int *)(*(int *)(puVar5 + 0x20) + (iVar6 / iVar1) * 4);
            if ((iVar2 != 0) &&
               (((iVar6 = *(int *)(iVar2 + (iVar6 % iVar1) * 4), iVar6 != 0 &&
                 (*(int *)(iVar6 + 0x24) == *(int *)(iVar3 + 0x24))) &&
                (*(int *)(iVar3 + 0x14) <= *(int *)(iVar6 + 0x14))))) {
              return CONCAT31((int3)((uint)*(int *)(iVar6 + 0x14) >> 8),1);
            }
          }
          piVar7 = piVar7 + 3;
        } while (piVar7 != *(int **)(param_1 + 8));
      }
      return param_1 & 0xffffff00;
    }
  }
  return (uint)param_2 & 0xffffff00;
}



/* --- CPetSkillInfo::GetManagers_115889c0 @ 115889c0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

uint __thiscall CPetSkillInfo__GetManagers_115889c0(undefined *param_1,undefined **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = FUN_1051c550(0,"CPetSkillInfo",0);
  puVar5 = (undefined *)param_2;
  if ((param_2 != (undefined **)0xffffffff) &&
     ((((param_2 != (undefined **)0x0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar6 = *(int *)(iVar3 + 0x28), iVar6 != 0)) &&
      ((puVar4 = (undefined *)((int)param_2 + -*(int *)(iVar3 + 0x30)), puVar5 = puVar4,
       -1 < (int)puVar4 && ((int)puVar4 < *(int *)(iVar3 + 0x24))))))) {
    puVar5 = (undefined *)((int)puVar4 / iVar6);
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (int)puVar5 * 4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + ((int)puVar4 % iVar6) * 4), iVar3 != 0)) {
      piVar7 = *(int **)(param_1 + 4);
      if (piVar7 != *(int **)(param_1 + 8)) {
        while( true ) {
          iVar6 = *piVar7;
          param_2 = &PTR_FUN_11dbffc0;
          if ((DAT_123be4d4 & 1) == 0) {
            DAT_123be4d4 = DAT_123be4d4 | 1;
            FUN_102500e0("CPetSkillInfo::GetManagers");
            puVar5 = (undefined *)FUN_11a8911f(&LAB_11c6f6b0);
          }
          puVar4 = (undefined *)*DAT_123be4d8;
          if (((undefined *)*DAT_123be4d8 == (undefined *)0x0) &&
             (puVar5 = (undefined *)FUN_11679e10(&param_2,"CPetSkillInfo",0), puVar4 = puVar5,
             puVar5 == (undefined *)0x0)) {
            puVar5 = DAT_123be404;
            if (((uint)DAT_123be404 & 1) == 0) {
              DAT_123be404 = (undefined *)((uint)DAT_123be404 | 1);
              FUN_1051d270();
              puVar5 = (undefined *)FUN_11a8911f(&LAB_11ca2fb0);
            }
            puVar4 = &DAT_123be408;
          }
          if (((iVar6 == -1) ||
              (((iVar6 == 0 && (*(int *)(puVar4 + 0x30) != 0)) ||
               (iVar1 = *(int *)(puVar4 + 0x28), iVar1 == 0)))) ||
             ((iVar6 = iVar6 - *(int *)(puVar4 + 0x30), iVar6 < 0 ||
              (*(int *)(puVar4 + 0x24) <= iVar6)))) break;
          puVar5 = (undefined *)(iVar6 / iVar1);
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (int)puVar5 * 4);
          if ((iVar2 == 0) || (iVar6 = *(int *)(iVar2 + (iVar6 % iVar1) * 4), iVar6 == 0)) break;
          if ((*(int *)(iVar3 + 0x24) == *(int *)(iVar6 + 0x24)) &&
             (iVar6 = *(int *)(iVar6 + 0x14) + 1, *(int *)(iVar3 + 0x14) == iVar6)) {
            return CONCAT31((int3)((uint)iVar6 >> 8),1);
          }
          piVar7 = piVar7 + 3;
          puVar5 = param_1;
          if (piVar7 == *(int **)(param_1 + 8)) break;
        }
      }
      return (uint)puVar5 & 0xffffff00;
    }
  }
  return (uint)puVar5 & 0xffffff00;
}



/* --- CPetSkillInfo::GetManagers_11588cc0 @ 11588cc0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// calls: memmove
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Removing unreachable block (ram,0x11588ce5) */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   calls: memmove
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void __thiscall CPetSkillInfo__GetManagers_11588cc0(int *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  short sVar10;
  int *piVar11;
  int *piVar12;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int *local_1c;
  short *local_18;
  int local_14;
  undefined **local_10;
  int *local_c;
  undefined1 local_5;
  
  local_1c = (int *)0x0;
  if (param_1[1] != param_1[2]) {
    param_1[2] = param_1[1];
  }
  sVar10 = 0;
  piVar9 = param_1;
  local_c = param_1;
  if (0 < *param_2) {
    do {
      local_18 = param_2 + sVar10 * 6;
      iVar1 = *(int *)(local_18 + 1);
      if (iVar1 != *(int *)(*piVar9 + 0x58)) {
        local_10 = &PTR_FUN_11dbffc0;
        if ((DAT_123be4d4 & 1) == 0) {
          DAT_123be4d4 = DAT_123be4d4 | 1;
          FUN_102500e0("CPetSkillInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f6b0);
        }
        puVar6 = (undefined *)*DAT_123be4d8;
        if ((puVar6 == (undefined *)0x0) &&
           (puVar6 = (undefined *)FUN_11679e10(&local_10,"CPetSkillInfo",0),
           puVar6 == (undefined *)0x0)) {
          if ((DAT_123be404 & 1) == 0) {
            DAT_123be404 = DAT_123be404 | 1;
            FUN_1051d270();
            FUN_11a8911f(&LAB_11ca2fb0);
          }
          puVar6 = &DAT_123be408;
        }
        local_10 = &PTR_FUN_11da54a8;
        piVar9 = local_c;
        if ((iVar1 != -1) &&
           ((((iVar1 != 0 || (*(int *)(puVar6 + 0x30) == 0)) && (*(int *)(puVar6 + 0x28) != 0)) &&
            ((iVar7 = iVar1 - *(int *)(puVar6 + 0x30), -1 < iVar7 &&
             (iVar7 < *(int *)(puVar6 + 0x24))))))) {
          iVar2 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / *(int *)(puVar6 + 0x28)) * 4);
          if ((iVar2 != 0) &&
             (iVar7 = *(int *)(iVar2 + (iVar7 % *(int *)(puVar6 + 0x28)) * 4), iVar7 != 0)) {
            local_20 = *(undefined4 *)(iVar7 + 0x58);
            uStack_24 = *(undefined4 *)(local_18 + 3);
            puVar3 = (undefined8 *)param_1[2];
            local_28 = iVar1;
            if (puVar3 == (undefined8 *)param_1[3]) {
              FUN_1158b380(puVar3,&local_28,&local_5,1,1);
              piVar9 = local_c;
            }
            else {
              if (puVar3 != (undefined8 *)0x0) {
                *puVar3 = CONCAT44(uStack_24,iVar1);
                *(undefined4 *)(puVar3 + 1) = local_20;
              }
              param_1[2] = param_1[2] + 0xc;
            }
          }
        }
      }
      sVar10 = sVar10 + 1;
    } while (sVar10 < *param_2);
  }
  piVar9 = local_c;
  sVar10 = 0;
  if (0 < param_2[0x3d]) {
    piVar12 = local_c + 0x27;
    piVar11 = local_1c;
    do {
      iVar1 = sVar10 * 3 + 0x1f;
      local_14 = *(int *)(param_2 + iVar1 * 2);
      local_18 = param_2 + iVar1 * 2;
      piVar8 = piVar12;
      piVar4 = (int *)piVar9[0x28];
      while (piVar4 != (int *)0x0) {
        if (piVar4[4] < local_14) {
          piVar4 = (int *)piVar4[3];
        }
        else {
          piVar8 = piVar4;
          piVar4 = (int *)piVar4[2];
        }
      }
      if ((piVar8 == piVar12) || (piVar11 = (int *)((uint)piVar11 | 1), local_14 < piVar8[4])) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (((uint)piVar11 & 1) != 0) {
        piVar11 = (int *)0x0;
      }
      if (bVar5) {
        local_10 = (undefined **)0x0;
        FUN_1158c7e0(&local_1c,piVar8,&local_14);
        piVar8 = local_1c;
      }
      sVar10 = sVar10 + 1;
      piVar8[5] = *(int *)(local_18 + 2);
    } while (sVar10 < param_2[0x3d]);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_11589800 @ 11589800 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

void __thiscall
CPetSkillInfo__GetManagers_11589800(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined **local_c;
  int *local_8;
  
  local_8 = param_1;
  piVar5 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
  iVar6 = (**(code **)(*piVar5 + 0x28))();
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      local_c = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar7 = (undefined *)*DAT_123be4d8;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0), puVar7 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar7;
          _DAT_123be414 = puVar7;
          _DAT_123be418 = puVar7;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar7 = &DAT_123be408;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((((-1 < iVar8) && (iVar8 < *(int *)(puVar7 + 0x18) - *(int *)(puVar7 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar7 + 0x14) + iVar8 * 4), iVar1 != 0)) &&
         ((*(int *)(iVar1 + 0x44) == 0x12 || (*(int *)(iVar1 + 0x44) == *(int *)(*param_1 + 0x70))))
         ) {
        iVar2 = *(int *)(iVar1 + 0x70);
        iVar3 = *(int *)(*param_1 + 0x6c);
        if (iVar3 < 3) {
          if (iVar2 < 3) {
LAB_11589953:
            if ((*(int *)(iVar1 + 0x48) <= *(int *)(*param_1 + 0x48)) &&
               (*(char *)(iVar1 + 0x4c) != '\0')) {
              cVar4 = FUN_1174ca30(*(undefined4 *)(iVar1 + 0x10));
              param_1 = local_8;
              if ((cVar4 == '\0') &&
                 ((cVar4 = FUN_115892a0(iVar1,param_2), param_1 = local_8, cVar4 != '\0' &&
                  (cVar4 = FUN_11589340(iVar1,param_3), param_1 = local_8, cVar4 != '\0')))) {
                FUN_10461ba0(iVar1 + 0x10);
                param_1 = local_8;
              }
            }
          }
        }
        else if ((2 < iVar2) && (iVar2 <= iVar3)) goto LAB_11589953;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_115899c0 @ 115899c0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

void __thiscall
CPetSkillInfo__GetManagers_115899c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined **local_c;
  int *local_8;
  
  local_8 = param_1;
  piVar5 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
  iVar6 = (**(code **)(*piVar5 + 0x28))();
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      local_c = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar7 = (undefined *)*DAT_123be4d8;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0), puVar7 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar7;
          _DAT_123be414 = puVar7;
          _DAT_123be418 = puVar7;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar7 = &DAT_123be408;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((((-1 < iVar8) && (iVar8 < *(int *)(puVar7 + 0x18) - *(int *)(puVar7 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar7 + 0x14) + iVar8 * 4), iVar1 != 0)) &&
         ((*(int *)(iVar1 + 0x44) == 0x12 || (*(int *)(iVar1 + 0x44) == *(int *)(*param_1 + 0x70))))
         ) {
        iVar2 = *(int *)(iVar1 + 0x70);
        iVar3 = *(int *)(*param_1 + 0x6c);
        if (iVar3 < 3) {
          if (iVar2 < 3) {
LAB_11589b13:
            if ((*(int *)(iVar1 + 0x48) <= *(int *)(*param_1 + 0x48)) &&
               (*(char *)(iVar1 + 0x4c) != '\0')) {
              cVar4 = FUN_1174ca30(*(undefined4 *)(iVar1 + 0x10));
              param_1 = local_8;
              if ((cVar4 == '\0') &&
                 ((cVar4 = FUN_115892a0(iVar1,param_2), param_1 = local_8, cVar4 != '\0' &&
                  (cVar4 = FUN_115892e0(iVar1,param_3), param_1 = local_8, cVar4 != '\0')))) {
                FUN_10461ba0(iVar1 + 0x10);
                param_1 = local_8;
              }
            }
          }
        }
        else if ((2 < iVar2) && (iVar2 <= iVar3)) goto LAB_11589b13;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_11589b80 @ 11589b80 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

void __thiscall
CPetSkillInfo__GetManagers_11589b80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined **local_8;
  
  piVar5 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
  iVar6 = (**(code **)(*piVar5 + 0x28))();
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      local_8 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar7 = (undefined *)*DAT_123be4d8;
      if ((puVar7 == (undefined *)0x0) &&
         (puVar7 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar7 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar7;
          _DAT_123be414 = puVar7;
          _DAT_123be418 = puVar7;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar7 = &DAT_123be408;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((((-1 < iVar8) && (iVar8 < *(int *)(puVar7 + 0x18) - *(int *)(puVar7 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar7 + 0x14) + iVar8 * 4), iVar1 != 0)) &&
         ((*(int *)(iVar1 + 0x44) == 0x12 || (*(int *)(iVar1 + 0x44) == *(int *)(*param_1 + 0x70))))
         ) {
        iVar2 = *(int *)(iVar1 + 0x70);
        iVar3 = *(int *)(*param_1 + 0x6c);
        if (iVar3 < 3) {
          if (iVar2 < 3) {
LAB_11589cc3:
            if ((((*(int *)(iVar1 + 0x48) <= *(int *)(*param_1 + 0x48)) &&
                 (*(char *)(iVar1 + 0x4c) != '\0')) && (*(char *)(iVar1 + 0x4d) != '\0')) &&
               ((cVar4 = FUN_115892a0(iVar1,param_2), cVar4 != '\0' &&
                (cVar4 = FUN_11589390(iVar1,param_3), cVar4 != '\0')))) {
              FUN_10461ba0(iVar1 + 0x10);
            }
          }
        }
        else if ((2 < iVar2) && (iVar2 <= iVar3)) goto LAB_11589cc3;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_11589d20 @ 11589d20 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void CPetSkillInfo__GetManagers_11589d20(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  undefined **local_c;
  uint local_8;
  
  local_8 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  FUN_11587830(6,&local_4c);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  FUN_11587830(7,&local_40);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_11587830(8,&local_34);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_11587830(9,&local_28);
  uVar8 = 0;
  local_14 = local_48 - local_4c >> 2;
  if (local_14 != 0) {
    do {
      iVar9 = *(int *)(local_4c + uVar8 * 4);
      local_c = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0), puVar4 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar4;
          _DAT_123be414 = puVar4;
          _DAT_123be418 = puVar4;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar4 = &DAT_123be408;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar9 != -1) &&
         ((((iVar9 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar10 = *(int *)(puVar4 + 0x28), iVar10 != 0)) &&
          ((iVar9 = iVar9 - *(int *)(puVar4 + 0x30), -1 < iVar9 && (iVar9 < *(int *)(puVar4 + 0x24))
           ))))) {
        iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar9 / iVar10) * 4);
        if ((iVar1 != 0) && (iVar9 = *(int *)(iVar1 + (iVar9 % iVar10) * 4), iVar9 != 0)) {
          uVar5 = param_1;
          if (*(uint *)(param_1 + 4) != 0) {
            uVar6 = *(uint *)(param_1 + 4);
            do {
              if (*(int *)(uVar6 + 0x10) < *(int *)(iVar9 + 0x24)) {
                uVar7 = *(uint *)(uVar6 + 0xc);
              }
              else {
                uVar7 = *(uint *)(uVar6 + 8);
                uVar5 = uVar6;
              }
              uVar6 = uVar7;
            } while (uVar7 != 0);
          }
          if ((uVar5 == param_1) ||
             (local_8 = local_8 | 1, *(int *)(iVar9 + 0x24) < *(int *)(uVar5 + 0x10))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((local_8 & 1) != 0) {
            local_8 = local_8 & 0xfffffffe;
          }
          if (bVar3) {
            local_1c = *(undefined4 *)(iVar9 + 0x24);
            local_18 = 0;
            FUN_10464a20(&local_10,uVar5,&local_1c);
            uVar5 = local_10;
          }
          *(undefined4 *)(uVar5 + 0x14) = *(undefined4 *)(iVar9 + 0x14);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_14);
  }
  uVar8 = 0;
  local_10 = local_3c - local_40 >> 2;
  if (local_10 != 0) {
    do {
      iVar9 = *(int *)(local_40 + uVar8 * 4);
      local_c = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0), puVar4 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar4;
          _DAT_123be414 = puVar4;
          _DAT_123be418 = puVar4;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar4 = &DAT_123be408;
      }
      local_c = &PTR_FUN_11da54a8;
      if (((iVar9 != -1) &&
          (((iVar9 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar10 = *(int *)(puVar4 + 0x28), iVar10 != 0)))) &&
         ((iVar9 = iVar9 - *(int *)(puVar4 + 0x30), -1 < iVar9 && (iVar9 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar9 / iVar10) * 4);
        if ((iVar1 != 0) && (iVar9 = *(int *)(iVar1 + (iVar9 % iVar10) * 4), iVar9 != 0)) {
          uVar5 = param_1;
          if (*(uint *)(param_1 + 4) != 0) {
            uVar6 = *(uint *)(param_1 + 4);
            do {
              if (*(int *)(uVar6 + 0x10) < *(int *)(iVar9 + 0x24)) {
                uVar7 = *(uint *)(uVar6 + 0xc);
              }
              else {
                uVar7 = *(uint *)(uVar6 + 8);
                uVar5 = uVar6;
              }
              uVar6 = uVar7;
            } while (uVar7 != 0);
          }
          if ((uVar5 == param_1) ||
             (local_8 = local_8 | 2, *(int *)(iVar9 + 0x24) < *(int *)(uVar5 + 0x10))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((local_8 & 2) != 0) {
            local_8 = local_8 & 0xfffffffd;
          }
          if (bVar3) {
            local_1c = *(undefined4 *)(iVar9 + 0x24);
            local_18 = 0;
            FUN_10464a20(&local_14,uVar5,&local_1c);
            uVar5 = local_14;
          }
          *(undefined4 *)(uVar5 + 0x14) = *(undefined4 *)(iVar9 + 0x14);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_10);
  }
  uVar8 = 0;
  local_10 = local_30 - local_34 >> 2;
  if (local_10 != 0) {
    do {
      iVar9 = *(int *)(local_34 + uVar8 * 4);
      local_c = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        _DAT_123be4ec = &DAT_123be4dc;
        DAT_123be4f0 = &DAT_123be4dc;
        DAT_123be4dc = 0;
        FUN_100d9260("CPetSkillInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123be4d8 = (undefined4 *)FUN_100dfd90(DAT_123be4f0);
        if (DAT_123be4d8 == (undefined4 *)0x0) {
          DAT_123be4d8 = (undefined4 *)FUN_100dde50(4);
          *DAT_123be4d8 = 0;
          FUN_100dfdc0(DAT_123be4f0,DAT_123be4d8);
        }
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0), puVar4 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar4;
          _DAT_123be414 = puVar4;
          _DAT_123be418 = puVar4;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar4 = &DAT_123be408;
      }
      local_c = &PTR_FUN_11da54a8;
      if (((iVar9 != -1) &&
          (((iVar9 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar10 = *(int *)(puVar4 + 0x28), iVar10 != 0)))) &&
         ((iVar9 = iVar9 - *(int *)(puVar4 + 0x30), -1 < iVar9 && (iVar9 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar9 / iVar10) * 4);
        if ((iVar1 != 0) && (iVar9 = *(int *)(iVar1 + (iVar9 % iVar10) * 4), iVar9 != 0)) {
          uVar5 = param_1;
          if (*(uint *)(param_1 + 4) != 0) {
            uVar6 = *(uint *)(param_1 + 4);
            do {
              if (*(int *)(uVar6 + 0x10) < *(int *)(iVar9 + 0x24)) {
                uVar7 = *(uint *)(uVar6 + 0xc);
              }
              else {
                uVar7 = *(uint *)(uVar6 + 8);
                uVar5 = uVar6;
              }
              uVar6 = uVar7;
            } while (uVar7 != 0);
          }
          if ((uVar5 == param_1) ||
             (local_8 = local_8 | 4, *(int *)(iVar9 + 0x24) < *(int *)(uVar5 + 0x10))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((local_8 & 4) != 0) {
            local_8 = local_8 & 0xfffffffb;
          }
          if (bVar3) {
            local_1c = *(undefined4 *)(iVar9 + 0x24);
            local_18 = 0;
            FUN_10464a20(&local_14,uVar5,&local_1c);
            uVar5 = local_14;
          }
          *(undefined4 *)(uVar5 + 0x14) = *(undefined4 *)(iVar9 + 0x14);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_10);
  }
  uVar8 = 0;
  local_10 = local_24 - local_28 >> 2;
  iVar9 = local_28;
  if (local_10 != 0) {
    do {
      iVar10 = *(int *)(iVar9 + uVar8 * 4);
      local_c = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        _DAT_123be4ec = &DAT_123be4dc;
        DAT_123be4f0 = &DAT_123be4dc;
        DAT_123be4dc = 0;
        FUN_100d9260("CPetSkillInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123be4d8 = (undefined4 *)FUN_100dfd90(DAT_123be4f0);
        if (DAT_123be4d8 == (undefined4 *)0x0) {
          DAT_123be4d8 = (undefined4 *)FUN_100dde50(4);
          *DAT_123be4d8 = 0;
          FUN_100dfdc0(DAT_123be4f0,DAT_123be4d8);
        }
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0), puVar4 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar4;
          _DAT_123be414 = puVar4;
          _DAT_123be418 = puVar4;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar4 = &DAT_123be408;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((iVar10 != -1) &&
         ((((iVar10 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar9 = local_28, iVar1 != 0)) &&
          ((iVar10 = iVar10 - *(int *)(puVar4 + 0x30), -1 < iVar10 &&
           (iVar10 < *(int *)(puVar4 + 0x24))))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar10 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar10 = *(int *)(iVar2 + (iVar10 % iVar1) * 4), iVar10 != 0)) {
          uVar5 = param_1;
          if (*(uint *)(param_1 + 4) != 0) {
            uVar6 = *(uint *)(param_1 + 4);
            do {
              if (*(int *)(uVar6 + 0x10) < *(int *)(iVar10 + 0x24)) {
                uVar7 = *(uint *)(uVar6 + 0xc);
              }
              else {
                uVar7 = *(uint *)(uVar6 + 8);
                uVar5 = uVar6;
              }
              uVar6 = uVar7;
            } while (uVar7 != 0);
          }
          if ((uVar5 == param_1) ||
             (local_8 = local_8 | 8, *(int *)(iVar10 + 0x24) < *(int *)(uVar5 + 0x10))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((local_8 & 8) != 0) {
            local_8 = local_8 & 0xfffffff7;
          }
          if (bVar3) {
            local_1c = *(undefined4 *)(iVar10 + 0x24);
            local_18 = 0;
            FUN_10464a20(&local_14,uVar5,&local_1c);
            uVar5 = local_14;
          }
          *(undefined4 *)(uVar5 + 0x14) = *(undefined4 *)(iVar10 + 0x14);
          iVar9 = local_28;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_10);
  }
  if (iVar9 != 0) {
    FUN_10c3d5d0(iVar9);
  }
  if (local_34 != 0) {
    FUN_10c3d5d0(local_34);
  }
  if (local_40 != 0) {
    FUN_10c3d5d0(local_40);
  }
  if (local_4c != 0) {
    FUN_10c3d5d0(local_4c);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_1158a600 @ 1158a600 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void CPetSkillInfo__GetManagers_1158a600(undefined **param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_11587830(param_1,&local_24);
  uVar6 = 0;
  local_10 = local_20 - local_24 >> 2;
  iVar3 = local_24;
  if (local_10 != 0) {
    do {
      iVar7 = *(int *)(iVar3 + uVar6 * 4);
      param_1 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar2 = (undefined *)*DAT_123be4d8;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&param_1,"CPetSkillInfo",0), puVar2 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar2;
          _DAT_123be414 = puVar2;
          _DAT_123be418 = puVar2;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar2 = &DAT_123be408;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((iVar7 != -1) &&
         ((((iVar7 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
           (iVar4 = *(int *)(puVar2 + 0x28), iVar3 = local_24, iVar4 != 0)) &&
          ((iVar7 = iVar7 - *(int *)(puVar2 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(puVar2 + 0x24))
           ))))) {
        iVar5 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar7 / iVar4) * 4);
        if ((iVar5 != 0) && (iVar7 = *(int *)(iVar5 + (iVar7 % iVar4) * 4), iVar7 != 0)) {
          iVar3 = param_2;
          if (*(int *)(param_2 + 4) != 0) {
            iVar4 = *(int *)(param_2 + 4);
            do {
              if (*(int *)(iVar4 + 0x10) < *(int *)(iVar7 + 0x24)) {
                iVar5 = *(int *)(iVar4 + 0xc);
              }
              else {
                iVar5 = *(int *)(iVar4 + 8);
                iVar3 = iVar4;
              }
              iVar4 = iVar5;
            } while (iVar5 != 0);
          }
          if ((iVar3 == param_2) ||
             (local_8 = local_8 | 1, *(int *)(iVar7 + 0x24) < *(int *)(iVar3 + 0x10))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((local_8 & 1) != 0) {
            local_8 = local_8 & 0xfffffffe;
          }
          if (bVar1) {
            local_18 = *(undefined4 *)(iVar7 + 0x24);
            local_14 = 0;
            FUN_10464a20(&local_c,iVar3,&local_18);
            iVar3 = local_c;
          }
          *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar7 + 0x14);
          iVar3 = local_24;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_10);
  }
  if (iVar3 != 0) {
    FUN_10c3d5d0(iVar3);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_1158a800 @ 1158a800 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

int __fastcall CPetSkillInfo__GetManagers_1158a800(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined **local_c;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  piVar6 = (int *)param_1[1];
  if (piVar6 != (int *)param_1[2]) {
    do {
      iVar5 = *piVar6;
      if (iVar5 != *(int *)(*param_1 + 0x58)) {
        local_c = &PTR_FUN_11dbffc0;
        if ((DAT_123be4d4 & 1) == 0) {
          DAT_123be4d4 = DAT_123be4d4 | 1;
          FUN_102500e0("CPetSkillInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f6b0);
        }
        puVar3 = (undefined *)*DAT_123be4d8;
        if ((puVar3 == (undefined *)0x0) &&
           (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0),
           puVar3 == (undefined *)0x0)) {
          if ((DAT_123be404 & 1) == 0) {
            DAT_123be404 = DAT_123be404 | 1;
            FUN_1051d270();
            FUN_11a8911f(&LAB_11ca2fb0);
          }
          puVar3 = &DAT_123be408;
        }
        iVar4 = local_8;
        if ((iVar5 != -1) &&
           ((((iVar5 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
             (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)) &&
            ((iVar5 = iVar5 - *(int *)(puVar3 + 0x30), -1 < iVar5 &&
             (iVar5 < *(int *)(puVar3 + 0x24))))))) {
          iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar5 / iVar1) * 4);
          if ((iVar2 != 0) &&
             ((iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0 &&
              (*(char *)(iVar5 + 0x54) == '\x01')))) {
            local_8 = local_8 + 1;
            iVar4 = local_8;
          }
        }
      }
      piVar6 = piVar6 + 3;
    } while (piVar6 != (int *)param_1[2]);
  }
  return iVar4;
}



/* --- CPetSkillInfo::GetManagers_1158a920 @ 1158a920 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

int __thiscall CPetSkillInfo__GetManagers_1158a920(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined **local_c;
  int local_8;
  
  piVar5 = *(int **)(param_1 + 4);
  local_8 = 0;
  iVar4 = 0;
  if (piVar5 != *(int **)(param_1 + 8)) {
    do {
      iVar4 = *piVar5;
      local_c = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar3 = (undefined *)*DAT_123be4d8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CPetSkillInfo",0), puVar3 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar3;
          _DAT_123be414 = puVar3;
          _DAT_123be418 = puVar3;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar3 = &DAT_123be408;
      }
      if ((iVar4 != -1) &&
         ((((iVar4 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar3 + 0x28), iVar1 != 0)) &&
          ((iVar4 = iVar4 - *(int *)(puVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(puVar3 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((iVar4 = *(int *)(iVar2 + (iVar4 % iVar1) * 4), iVar4 != 0 &&
            (*(int *)(iVar4 + 0x58) == param_2)))) {
          local_8 = local_8 + 1;
        }
      }
      piVar5 = piVar5 + 3;
      iVar4 = local_8;
    } while (piVar5 != *(int **)(param_1 + 8));
  }
  return iVar4;
}



/* --- CPetSkillInfo::GetManagers_1158aab0 @ 1158aab0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

void __thiscall CPetSkillInfo__GetManagers_1158aab0(int param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  undefined **local_8;
  
  bVar6 = false;
  local_14 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
  local_c = 0;
  local_18 = param_1;
  if (local_14 != 0) {
    do {
      local_8 = &PTR_FUN_11dbffc0;
      iVar7 = *(int *)(*(int *)(local_18 + 0x10) + local_c * 8);
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar2 = (undefined *)*DAT_123be4d8;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar2 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar2;
          _DAT_123be414 = puVar2;
          _DAT_123be418 = puVar2;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar2 = &DAT_123be408;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar7 != -1) &&
         ((((iVar7 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
           (iVar3 = *(int *)(puVar2 + 0x28), iVar3 != 0)) &&
          ((iVar7 = iVar7 - *(int *)(puVar2 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(puVar2 + 0x24))
           ))))) {
        iVar4 = *(int *)(*(int *)(puVar2 + 0x20) + (iVar7 / iVar3) * 4);
        if ((iVar4 != 0) && (iVar7 = *(int *)(iVar4 + (iVar7 % iVar3) * 4), iVar7 != 0)) {
          iVar3 = param_2;
          if (*(int *)(param_2 + 4) != 0) {
            iVar4 = *(int *)(param_2 + 4);
            do {
              if (*(int *)(iVar4 + 0x10) < *(int *)(iVar7 + 0x24)) {
                iVar5 = *(int *)(iVar4 + 0xc);
              }
              else {
                iVar5 = *(int *)(iVar4 + 8);
                iVar3 = iVar4;
              }
              iVar4 = iVar5;
            } while (iVar5 != 0);
          }
          if ((iVar3 == param_2) || (bVar6 = true, *(int *)(iVar7 + 0x24) < *(int *)(iVar3 + 0x10)))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar6) {
            bVar6 = false;
          }
          if (bVar1) {
            local_20 = *(undefined4 *)(iVar7 + 0x24);
            local_1c = 0;
            FUN_10464a20(&local_10,iVar3,&local_20);
            iVar3 = local_10;
          }
          *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar7 + 0x14);
        }
      }
      local_c = local_c + 1;
    } while (local_c < local_14);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_1158b730 @ 1158b730 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// calls: _time64, _localtime64_s, GetCurrentDirectoryA, PathAppendA, CreateDirectoryA, fopen_s, fprintf_s, fclose
// strings:
//   ""PetSkill""
//   ""%s\\PetSkill_%02u-%02u-%u-%d.log""
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""
//   ""%d[%d] ""
//   ""\n total count %d[%d], rand %d ""
//   ""result %d[%d]\n""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   calls: _time64, _localtime64_s, GetCurrentDirectoryA, PathAppendA, CreateDirectoryA, fopen_s,
   fprintf_s, fclose
   strings:
     ""PetSkill""
     ""%s\\PetSkill_%02u-%02u-%u-%d.log""
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo""
     ""%d[%d] ""
     ""\n total count %d[%d], rand %d ""
     ""result %d[%d]\n"" */

void __thiscall
CPetSkillInfo__GetManagers_1158b730(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  __time64_t _Var3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_440;
  FILE *local_438;
  int local_434;
  int local_430;
  tm local_42c;
  CHAR local_408 [1024];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar6 = param_2[1] - *param_2 >> 2;
  local_430 = iVar6;
  if (iVar6 < 1) {
    FUN_11a89daa();
    return;
  }
  local_438 = (FILE *)0x0;
  if (*(char *)(*(int *)*param_1 + 0x8c) != '\0') {
    local_440 = _time64((__time64_t *)0x0);
    _localtime64_s(&local_42c,&local_440);
    GetCurrentDirectoryA(0x400,local_408);
    PathAppendA(local_408,"PetSkill");
    CreateDirectoryA(local_408,(LPSECURITY_ATTRIBUTES)0x0);
    DAT_122df24c = DAT_122df24c + 1;
    FUN_10d6a730(local_408,"%s\\PetSkill_%02u-%02u-%u-%d.log",local_408,local_42c.tm_hour,
                 local_42c.tm_min,local_42c.tm_sec,DAT_122df24c);
    fopen_s(&local_438,local_408,"wt");
  }
  iVar7 = 0;
  iVar8 = 0;
  local_434 = 0;
  if (0 < iVar6) {
    do {
      local_440._4_4_ = &PTR_FUN_11dbffc0;
      iVar7 = *(int *)(*param_2 + iVar8 * 4);
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10((int)&local_440 + 4,"CPetSkillInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be404 = DAT_123be404 | 1;
          FUN_1051d270();
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar4 = &DAT_123be408;
      }
      local_440._4_4_ = &PTR_FUN_11da54a8;
      if (iVar7 == -1) {
        iVar5 = 0;
      }
      else if ((iVar7 == 0) && (*(int *)(puVar4 + 0x30) != 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(puVar4 + 0x28);
        iVar6 = local_430;
        if (((iVar5 != 0) && (iVar7 = iVar7 - *(int *)(puVar4 + 0x30), -1 < iVar7)) &&
           (iVar7 < *(int *)(puVar4 + 0x24))) {
          iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar7 / iVar5) * 4);
          if (iVar1 != 0) {
            iVar5 = *(int *)(iVar1 + (iVar7 % iVar5) * 4);
            if (iVar5 != 0) {
              local_434 = local_434 + *(int *)(iVar5 + 0x50);
            }
            goto LAB_1158b95a;
          }
        }
        iVar5 = 0;
      }
LAB_1158b95a:
      iVar7 = local_434;
      if (local_438 != (FILE *)0x0) {
        fprintf_s(local_438,"%d[%d] ",*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x50));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  FUN_100ee470();
  iVar8 = FUN_100ee450();
  iVar6 = local_430;
  iVar8 = (int)((double)iVar8 * _DAT_11de98f0 * (double)(iVar7 + -1));
  if (local_438 != (FILE *)0x0) {
    fprintf_s(local_438,"\n total count %d[%d], rand %d ",local_430,iVar7,iVar8);
  }
  iVar7 = 0;
  _Var3 = local_440;
  if (0 < iVar6) {
    do {
      local_440._4_4_ = &PTR_FUN_11dbffc0;
      iVar6 = *(int *)(*param_2 + iVar7 * 4);
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10((int)&local_440 + 4,"CPetSkillInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          _DAT_123be42c = _DAT_11de9ae0;
          DAT_123be43c = 1;
          DAT_123be410 = puVar4;
          _DAT_123be414 = puVar4;
          _DAT_123be418 = puVar4;
          FUN_11a8911f(&LAB_11ca2fb0);
        }
        puVar4 = &DAT_123be408;
      }
      local_440._4_4_ = &PTR_FUN_11da54a8;
      _Var3 = CONCAT44(&PTR_FUN_11da54a8,(undefined4)local_440);
      if ((((iVar6 != -1) && ((iVar6 != 0 || (*(int *)(puVar4 + 0x30) == 0)))) &&
          (*(int *)(puVar4 + 0x28) != 0)) &&
         ((iVar6 = iVar6 - *(int *)(puVar4 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(puVar4 + 0x24)))
         )) {
        iVar5 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar6 / *(int *)(puVar4 + 0x28)) * 4);
        if ((iVar5 != 0) &&
           ((iVar6 = *(int *)(iVar5 + (iVar6 % *(int *)(puVar4 + 0x28)) * 4), iVar6 != 0 &&
            (iVar8 = iVar8 - *(int *)(iVar6 + 0x50), iVar8 < 1)))) {
          uVar2 = *(undefined4 *)(*param_2 + iVar7 * 4);
          *param_3 = uVar2;
          if (local_438 != (FILE *)0x0) {
            fprintf_s(local_438,"result %d[%d]\n",uVar2,*(undefined4 *)(iVar6 + 0x50));
            fclose(local_438);
          }
          FUN_11a89daa();
          return;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_430);
  }
  local_440 = _Var3;
  if (local_438 != (FILE *)0x0) {
    fclose(local_438);
  }
  FUN_11a89daa();
  return;
}



/* --- CPetSkillInfo::GetManagers_1174c8f0 @ 1174c8f0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo::GetManagers""
//   ""CPetSkillInfo""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo::GetManagers""
     ""CPetSkillInfo"" */

uint CPetSkillInfo__GetManagers_1174c8f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined **local_8;
  
  iVar3 = FUN_11679c30();
  if (iVar3 == 0) {
    return 0;
  }
  puVar4 = (undefined *)(*(int *)(iVar3 + 0x3b758) - *(int *)(iVar3 + 0x3b754) >> 2);
  iVar8 = 0;
  puVar5 = puVar4;
  if (0 < (int)puVar4) {
    do {
      puVar5 = *(undefined **)(iVar3 + 0x3b754);
      local_8 = &PTR_FUN_11dbffc0;
      iVar7 = *(int *)(puVar5 + iVar8 * 4);
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        puVar5 = (undefined *)FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar6 = (undefined *)*DAT_123be4d8;
      if (((undefined *)*DAT_123be4d8 == (undefined *)0x0) &&
         (puVar5 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar6 = puVar5,
         puVar5 == (undefined *)0x0)) {
        puVar5 = DAT_123be404;
        if (((uint)DAT_123be404 & 1) == 0) {
          DAT_123be404 = (undefined *)((uint)DAT_123be404 | 1);
          FUN_1051d270();
          puVar5 = (undefined *)FUN_11a8911f(&LAB_11ca9850);
        }
        puVar6 = &DAT_123be408;
      }
      if ((iVar7 != -1) &&
         ((((iVar7 != 0 || (*(int *)(puVar6 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar6 + 0x28), iVar1 != 0)) &&
          ((iVar7 = iVar7 - *(int *)(puVar6 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(puVar6 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar1) * 4);
        puVar5 = (undefined *)0x0;
        if ((iVar2 != 0) &&
           ((puVar5 = *(undefined **)(iVar2 + (iVar7 % iVar1) * 4), puVar5 != (undefined *)0x0 &&
            (*(int *)(puVar5 + 0x24) == param_1)))) {
          return CONCAT31((int3)((uint)puVar5 >> 8),1);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)puVar4);
  }
  return (uint)puVar5 & 0xffffff00;
}



/* --- CPetSkillInfo::GetManagers_11757340 @ 11757340 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

int CPetSkillInfo__GetManagers_11757340(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  piVar2 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar4 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar4;
          _DAT_123be414 = puVar4;
          _DAT_123be418 = puVar4;
          FUN_11a8911f(&LAB_11ca9e20);
        }
        puVar4 = &DAT_123be408;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x24) == param_1)) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CPetSkillInfo::GetManagers_11757470 @ 11757470 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

int CPetSkillInfo__GetManagers_11757470(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  piVar2 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar4 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar4;
          _DAT_123be414 = puVar4;
          _DAT_123be418 = puVar4;
          FUN_11a8911f(&LAB_11ca9e20);
        }
        puVar4 = &DAT_123be408;
      }
      if ((((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
          (iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4), iVar1 != 0)) &&
         ((*(int *)(iVar1 + 0x24) == param_1 && (*(int *)(iVar1 + 0x14) == param_2)))) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* --- CPetSkillInfo::GetManagers_117599f0 @ 117599f0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CBuffInfo""
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CBuffInfo""
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

void __fastcall CPetSkillInfo__GetManagers_117599f0(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined **local_8;
  
  local_8 = param_1;
  if (param_1[0x2d] != (undefined *)0x0) {
    FUN_10500130(0,"CBuffInfo",0);
  }
  if (param_1[0x2e] != (undefined *)0x0) {
    FUN_10500130(0,"CBuffInfo",0);
  }
  if (param_1[0x2f] != (undefined *)0x0) {
    FUN_10500130(0,"CBuffInfo",0);
  }
  if (param_1[0x30] != (undefined *)0x0) {
    FUN_10500130(0,"CBuffInfo",0);
  }
  piVar1 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      if (((*DAT_123be4d8 == 0) && (iVar3 = FUN_11679e10(&local_8,"CPetSkillInfo",0), iVar3 == 0))
         && ((DAT_123be404 & 1) == 0)) {
        DAT_123be40c = 0;
        DAT_123be41c = 0;
        DAT_123be420 = 0;
        _DAT_123be424 = 0;
        DAT_123be428 = 0;
        DAT_123be404 = DAT_123be404 | 1;
        DAT_123be410 = 0;
        _DAT_123be414 = 0;
        _DAT_123be418 = 0;
        _DAT_123be408 = &PTR_FUN_11dbffd8;
        DAT_123be42c = _DAT_11de9ae0;
        DAT_123be430 = _UNK_11de9ae4;
        uRam123be434 = _UNK_11de9ae8;
        DAT_123be438 = _UNK_11de9aec;
        DAT_123be43c = 1;
        FUN_11a8911f(&LAB_11ca9e20);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  CPetSkillInfo__GetManagers_11759b90(param_1 + 0x26,param_1[0x2f],1);
  CPetSkillInfo__GetManagers_11759b90(param_1 + 0x26,param_1[0x30],0);
  return;
}



/* --- CPetSkillInfo::GetManagers_11759b90 @ 11759b90 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CBuffInfo""
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CBuffInfo""
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

void CPetSkillInfo__GetManagers_11759b90(undefined4 param_1,undefined **param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if ((((param_2 != (undefined **)0x0) && (iVar2 = FUN_10500130(0,"CBuffInfo",0), iVar4 != -1)) &&
      (*(int *)(iVar2 + 0x28) != 0)) &&
     ((iVar4 = iVar4 - *(int *)(iVar2 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar4 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar4 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
      piVar3 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
      iVar4 = (**(code **)(*piVar3 + 0x28))();
      if (0 < iVar4) {
        do {
          param_2 = &PTR_FUN_11dbffc0;
          if ((DAT_123be4d4 & 1) == 0) {
            DAT_123be4d4 = DAT_123be4d4 | 1;
            FUN_102500e0("CPetSkillInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6f6b0);
          }
          if (((*DAT_123be4d8 == 0) &&
              (iVar2 = FUN_11679e10(&param_2,"CPetSkillInfo",0), iVar2 == 0)) &&
             ((DAT_123be404 & 1) == 0)) {
            DAT_123be404 = DAT_123be404 | 1;
            FUN_1051d270();
            FUN_11a8911f(&LAB_11ca9e20);
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_119275d0 @ 119275d0 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// calls: CPetSkillInfo::GetManagers_117599f0
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   calls: CPetSkillInfo::GetManagers_117599f0
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

void CPetSkillInfo__GetManagers_119275d0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar4 = (undefined *)*DAT_123be4d8;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPetSkillInfo",0), puVar4 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar4;
          _DAT_123be414 = puVar4;
          _DAT_123be418 = puVar4;
          FUN_11a8911f(&LAB_11cb1d40);
        }
        puVar4 = &DAT_123be408;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        CPetSkillInfo__GetManagers_117599f0(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* --- CPetSkillInfo::GetManagers_11927d40 @ 11927d40 --- */
// [RE-AUTO c3]
// id: CPetSkillInfo::GetManagers
// strings:
//   ""CPetSkillInfo""
//   ""CPetSkillInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetSkillInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillInfo::GetManagers"" */

void CPetSkillInfo__GetManagers_11927d40(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_1051c550(0,"CPetSkillInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dbffc0;
      if ((DAT_123be4d4 & 1) == 0) {
        DAT_123be4d4 = DAT_123be4d4 | 1;
        FUN_102500e0("CPetSkillInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f6b0);
      }
      puVar3 = (undefined *)*DAT_123be4d8;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_8,"CPetSkillInfo",0), puVar3 == (undefined *)0x0
         )) {
        if ((DAT_123be404 & 1) == 0) {
          DAT_123be40c = 0;
          DAT_123be41c = 0;
          DAT_123be420 = 0;
          _DAT_123be424 = 0;
          DAT_123be428 = 0;
          DAT_123be404 = DAT_123be404 | 1;
          _DAT_123be408 = &PTR_FUN_11dbffd8;
          DAT_123be42c = _DAT_11de9ae0;
          DAT_123be430 = _UNK_11de9ae4;
          uRam123be434 = _UNK_11de9ae8;
          DAT_123be438 = _UNK_11de9aec;
          DAT_123be43c = 1;
          DAT_123be410 = puVar3;
          _DAT_123be414 = puVar3;
          _DAT_123be418 = puVar3;
          FUN_11a8911f(&LAB_11cb1da0);
        }
        puVar3 = &DAT_123be408;
      }
    } while ((((-1 < iVar4) && (iVar4 < *(int *)(puVar3 + 0x18) - *(int *)(puVar3 + 0x14) >> 2)) &&
             (*(int *)(*(int *)(puVar3 + 0x14) + iVar4 * 4) != 0)) &&
            (iVar4 = iVar4 + 1, iVar4 < iVar2));
  }
  return;
}



