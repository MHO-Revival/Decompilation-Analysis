// ===== class CEquipSuitSkillInfo  (5 recovered methods) =====

/* --- CEquipSuitSkillInfo::GetManagers @ 109a48b0 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillInfo::GetManagers
// strings:
//   ""CEquipSuitSkillInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitSkillInfo::GetManagers
   strings:
     ""CEquipSuitSkillInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipSuitSkillInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c8a34 & 1) == 0) {
    DAT_123c8a34 = DAT_123c8a34 | 1;
    _DAT_123c8a4c = &DAT_123c8a3c;
    DAT_123c8a50 = &DAT_123c8a3c;
    DAT_123c8a3c = 0;
    FUN_100d83d0("CEquipSuitSkillInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7b0e0);
  }
  return DAT_123c8a38;
}



/* --- CEquipSuitSkillInfo::GetManagers_11571a40 @ 11571a40 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillInfo::GetManagers
// strings:
//   ""CEquipSuitSkillGroupInfo""
//   ""CEquipSuitSkillInfo::GetManagers""
//   ""CEquipSuitSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitSkillInfo::GetManagers
   strings:
     ""CEquipSuitSkillGroupInfo""
     ""CEquipSuitSkillInfo::GetManagers""
     ""CEquipSuitSkillInfo"" */

undefined4 __thiscall
CEquipSuitSkillInfo__GetManagers_11571a40(int param_1,int param_2,int *param_3,undefined **param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 local_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  int local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int local_14;
  undefined1 local_10;
  uint local_c;
  int local_8;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x18) + 0xc);
  local_8 = param_1;
  if ((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*piVar3 + 0x168))(), cVar1 != '\0')) {
    return 1;
  }
  local_2c = 0;
  puStack_34 = &local_3c;
  local_3c = 0;
  local_28 = param_2._3_1_;
  puStack_1c = &local_24;
  puStack_38 = (undefined4 *)0x0;
  local_24 = 0;
  puStack_20 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = param_2._3_1_;
  puStack_30 = puStack_34;
  puStack_18 = puStack_1c;
  iVar2 = FUN_109a7c60(0,"CEquipSuitSkillGroupInfo",0);
  if (((param_2 == -1) ||
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (param_1 = local_8, param_2 != 0)))) &&
     (iVar2 = *(int *)(param_1 + 4), iVar4 = param_1, iVar2 != 0)) {
    do {
      if (*(int *)(iVar2 + 0x10) < param_2) {
        iVar9 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar9 = *(int *)(iVar2 + 8);
        iVar4 = iVar2;
      }
      iVar2 = iVar9;
    } while (iVar9 != 0);
    if (((iVar4 != param_1) && (*(int *)(iVar4 + 0x10) <= param_2)) &&
       (local_c = iVar4 + 0x14, local_c != 0)) {
      if (*(int *)(iVar4 + 0x18) == 0) {
        if (param_4 == (undefined **)0x0) {
          uVar11 = 9;
          goto LAB_11571f2e;
        }
        iVar2 = FUN_11759f80();
        iVar2 = FUN_113fa150(*(undefined4 *)(iVar2 + 0x34),0xffffffff);
        if (iVar2 == 0) {
          uVar11 = 8;
          goto LAB_11571f2e;
        }
      }
      else if (param_4 != (undefined **)0x0) {
        uVar11 = 10;
        goto LAB_11571f2e;
      }
      piVar3 = (int *)FUN_118243b0();
      iVar2 = *piVar3;
      iVar4 = FUN_118243b0();
      if (iVar2 != *(int *)(iVar4 + 4)) {
        do {
          puVar5 = (undefined4 *)FUN_104ef0a0(iVar2);
          puVar6 = (undefined4 *)(iVar2 + 8);
          iVar2 = iVar2 + 0x1c;
          *puVar5 = *puVar6;
          iVar4 = FUN_118243b0();
        } while (iVar2 != *(int *)(iVar4 + 4));
      }
      uVar10 = 0;
      if (*(int *)(local_c + 0xc) - *(int *)(local_c + 8) >> 3 != 0) {
        do {
          param_4 = &PTR_FUN_11de1868;
          iVar2 = *(int *)(*(int *)(local_c + 8) + uVar10 * 8);
          if ((DAT_123c8a34 & 1) == 0) {
            DAT_123c8a34 = DAT_123c8a34 | 1;
            FUN_102500e0("CEquipSuitSkillInfo::GetManagers");
            FUN_11a8911f(&LAB_11c7b0e0);
          }
          puVar6 = (undefined4 *)*DAT_123c8a38;
          if ((puVar6 == (undefined4 *)0x0) &&
             (puVar6 = (undefined4 *)FUN_11679e10(&param_4,"CEquipSuitSkillInfo",0),
             puVar6 == (undefined4 *)0x0)) {
            if ((DAT_123c8a9c & 1) == 0) {
              DAT_123c8a9c = DAT_123c8a9c | 1;
              FUN_109a7fe0();
              FUN_11a8911f(&LAB_11ca26b0);
            }
            puVar6 = &DAT_123c8aa0;
          }
          param_4 = &PTR_FUN_11da54a8;
          if ((iVar2 != -1) &&
             ((((iVar2 != 0 || (puVar6[0xc] == 0)) && (iVar4 = puVar6[10], iVar4 != 0)) &&
              ((iVar2 = iVar2 - puVar6[0xc], -1 < iVar2 && (iVar2 < (int)puVar6[9])))))) {
            iVar9 = *(int *)(puVar6[8] + (iVar2 / iVar4) * 4);
            if ((iVar9 != 0) && (iVar2 = *(int *)(iVar9 + (iVar2 % iVar4) * 4), iVar2 != 0)) {
              puVar6 = &local_24;
              if (puStack_20 != (undefined4 *)0x0) {
                iVar4 = *(int *)(iVar2 + 0x1c);
                puVar5 = puStack_20;
                do {
                  if ((int)puVar5[4] < iVar4) {
                    puVar8 = (undefined4 *)puVar5[3];
                  }
                  else {
                    puVar8 = (undefined4 *)puVar5[2];
                    puVar6 = puVar5;
                  }
                  puVar5 = puVar8;
                } while (puVar8 != (undefined4 *)0x0);
                if ((puVar6 != &local_24) && ((int)puVar6[4] <= iVar4)) {
                  puVar6[5] = puVar6[5] + *(int *)(iVar2 + 0x24);
                  goto LAB_11571cfc;
                }
              }
              puVar6 = (undefined4 *)FUN_104ef0a0((int *)(iVar2 + 0x1c));
              *puVar6 = *(undefined4 *)(iVar2 + 0x24);
            }
          }
LAB_11571cfc:
          uVar10 = uVar10 + 1;
        } while (uVar10 < (uint)(*(int *)(local_c + 0xc) - *(int *)(local_c + 8) >> 3));
      }
      local_c = 0;
      iVar2 = *param_3;
      if (param_3[1] - iVar2 >> 2 != 0) {
        do {
          iVar2 = *(int *)(iVar2 + local_c * 4);
          iVar4 = *(int *)(local_8 + 4);
          iVar9 = local_8;
          if (iVar4 == 0) {
LAB_11571d8a:
            uVar11 = 0xc;
            goto LAB_11571f2e;
          }
          do {
            if (*(int *)(iVar4 + 0x10) < param_2) {
              iVar7 = *(int *)(iVar4 + 0xc);
            }
            else {
              iVar7 = *(int *)(iVar4 + 8);
              iVar9 = iVar4;
            }
            iVar4 = iVar7;
          } while (iVar7 != 0);
          if ((((iVar9 == local_8) || (param_2 < *(int *)(iVar9 + 0x10))) || (iVar9 == -0x14)) ||
             (uVar10 = 0, *(int *)(iVar9 + 0x20) - *(int *)(iVar9 + 0x1c) >> 3 == 0))
          goto LAB_11571d8a;
          piVar3 = *(int **)(iVar9 + 0x1c);
          while (*piVar3 != iVar2) {
            uVar10 = uVar10 + 1;
            piVar3 = piVar3 + 2;
            if ((uint)(*(int *)(iVar9 + 0x20) - *(int *)(iVar9 + 0x1c) >> 3) <= uVar10)
            goto LAB_11571d8a;
          }
          param_4 = &PTR_FUN_11de1868;
          if ((DAT_123c8a34 & 1) == 0) {
            DAT_123c8a34 = DAT_123c8a34 | 1;
            FUN_102500e0("CEquipSuitSkillInfo::GetManagers");
            FUN_11a8911f(&LAB_11c7b0e0);
          }
          puVar6 = (undefined4 *)*DAT_123c8a38;
          if ((puVar6 == (undefined4 *)0x0) &&
             (puVar6 = (undefined4 *)FUN_11679e10(&param_4,"CEquipSuitSkillInfo",0),
             puVar6 == (undefined4 *)0x0)) {
            if ((DAT_123c8a9c & 1) == 0) {
              DAT_123c8aa4 = 0;
              DAT_123c8ab4 = 0;
              DAT_123c8ab8 = 0;
              _DAT_123c8abc = 0;
              DAT_123c8ac0 = 0;
              DAT_123c8a9c = DAT_123c8a9c | 1;
              DAT_123c8aa0 = &PTR_FUN_11de18bc;
              DAT_123c8ac4 = _DAT_11de9ae0;
              DAT_123c8ac8 = _UNK_11de9ae4;
              uRam123c8acc = _UNK_11de9ae8;
              DAT_123c8ad0 = _UNK_11de9aec;
              DAT_123c8ad4 = 1;
              DAT_123c8aa8 = puVar6;
              _DAT_123c8aac = puVar6;
              _DAT_123c8ab0 = puVar6;
              FUN_11a8911f(&LAB_11ca26b0);
            }
            puVar6 = &DAT_123c8aa0;
          }
          param_4 = &PTR_FUN_11da54a8;
          if ((((iVar2 == -1) || ((iVar2 == 0 && (puVar6[0xc] != 0)))) ||
              (iVar4 = puVar6[10], iVar4 == 0)) ||
             ((iVar2 = iVar2 - puVar6[0xc], iVar2 < 0 || ((int)puVar6[9] <= iVar2)))) {
LAB_11571f22:
            uVar11 = 0xd;
            goto LAB_11571f2e;
          }
          iVar9 = *(int *)(puVar6[8] + (iVar2 / iVar4) * 4);
          if ((iVar9 == 0) || (iVar2 = *(int *)(iVar9 + (iVar2 % iVar4) * 4), iVar2 == 0))
          goto LAB_11571f22;
          piVar3 = (int *)(iVar2 + 0x1c);
          iVar4 = 0;
          puVar6 = &local_3c;
          if (puStack_38 != (undefined4 *)0x0) {
            puVar5 = puStack_38;
            do {
              if ((int)puVar5[4] < *piVar3) {
                puVar8 = (undefined4 *)puVar5[3];
              }
              else {
                puVar8 = (undefined4 *)puVar5[2];
                puVar6 = puVar5;
              }
              puVar5 = puVar8;
            } while (puVar8 != (undefined4 *)0x0);
            if ((puVar6 != &local_3c) && ((int)puVar6[4] <= *piVar3)) {
              iVar4 = puVar6[5];
            }
          }
          iVar9 = CEquipSuitSkillInfo__GetManagers_11572670(param_2,*piVar3);
          iVar2 = *(int *)(iVar2 + 0x20);
          if (iVar9 - iVar4 < iVar2) {
            uVar11 = 0xe;
            goto LAB_11571f2e;
          }
          piVar3 = (int *)FUN_104ef0a0(piVar3);
          local_c = local_c + 1;
          *piVar3 = iVar4 + iVar2;
          iVar2 = *param_3;
        } while (local_c < (uint)(param_3[1] - iVar2 >> 2));
      }
      uVar11 = 0;
      goto LAB_11571f2e;
    }
  }
  uVar11 = 0xb;
LAB_11571f2e:
  puVar6 = puStack_20;
  if (local_14 != 0) {
    while (puVar6 != (undefined4 *)0x0) {
      FUN_10463900(puVar6[3]);
      puVar5 = (undefined4 *)puVar6[2];
      FUN_10c3d5d0(puVar6);
      puVar6 = puVar5;
    }
    puStack_1c = &local_24;
    puStack_20 = (undefined4 *)0x0;
    local_14 = 0;
    puStack_18 = puStack_1c;
  }
  puVar6 = puStack_38;
  if (local_2c != 0) {
    while (puVar6 != (undefined4 *)0x0) {
      FUN_10463900(puVar6[3]);
      puVar5 = (undefined4 *)puVar6[2];
      FUN_10c3d5d0(puVar6);
      puVar6 = puVar5;
    }
  }
  return uVar11;
}



/* --- CEquipSuitSkillInfo::GetManagers_115723b0 @ 115723b0 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillInfo::GetManagers
// strings:
//   ""CEquipSuitSkillInfo::GetManagers""
//   ""CEquipSuitSkillInfo""
//   ""CEquipPassiveSkillGroupInfo""

/* [RE-AUTO c3]
   id: CEquipSuitSkillInfo::GetManagers
   strings:
     ""CEquipSuitSkillInfo::GetManagers""
     ""CEquipSuitSkillInfo""
     ""CEquipPassiveSkillGroupInfo"" */

void __thiscall
CEquipSuitSkillInfo__GetManagers_115723b0(int param_1,undefined **param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  iVar2 = param_3;
  iVar5 = *(int *)(param_1 + 4);
  iVar7 = param_1;
  if (iVar5 != 0) {
    do {
      if (*(int *)(iVar5 + 0x10) < (int)param_2) {
        iVar4 = *(int *)(iVar5 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar5 + 8);
        iVar7 = iVar5;
      }
      iVar5 = iVar4;
    } while (iVar4 != 0);
    if ((((iVar7 != param_1) && (*(int *)(iVar7 + 0x10) <= (int)param_2)) &&
        (local_c = iVar7 + 0x14, local_c != 0)) &&
       (local_8 = 0, *(int *)(iVar7 + 0x20) - *(int *)(iVar7 + 0x1c) >> 3 != 0)) {
      do {
        uVar6 = local_8;
        if (*(char *)(*(int *)(local_c + 8) + 4 + local_8 * 8) != '\0') {
          iVar5 = *(int *)(*(int *)(local_c + 8) + local_8 * 8);
          param_2 = &PTR_FUN_11de1868;
          if ((DAT_123c8a34 & 1) == 0) {
            DAT_123c8a34 = DAT_123c8a34 | 1;
            FUN_102500e0("CEquipSuitSkillInfo::GetManagers");
            FUN_11a8911f(&LAB_11c7b0e0);
          }
          puVar3 = (undefined4 *)*DAT_123c8a38;
          if ((puVar3 == (undefined4 *)0x0) &&
             (puVar3 = (undefined4 *)FUN_11679e10(&param_2,"CEquipSuitSkillInfo",0),
             puVar3 == (undefined4 *)0x0)) {
            if ((DAT_123c8a9c & 1) == 0) {
              DAT_123c8a9c = DAT_123c8a9c | 1;
              FUN_109a7fe0();
              FUN_11a8911f(&LAB_11ca26b0);
            }
            puVar3 = &DAT_123c8aa0;
          }
          param_2 = &PTR_FUN_11da54a8;
          if (((iVar5 == -1) || ((iVar5 == 0 && (puVar3[0xc] != 0)))) ||
             ((iVar7 = puVar3[10], uVar6 = local_8, iVar7 == 0 ||
              ((iVar5 = iVar5 - puVar3[0xc], iVar5 < 0 || ((int)puVar3[9] <= iVar5)))))) {
LAB_115724f4:
            iVar5 = 0;
          }
          else {
            iVar4 = *(int *)(puVar3[8] + (iVar5 / iVar7) * 4);
            if (iVar4 == 0) goto LAB_115724f4;
            iVar5 = *(int *)(iVar4 + (iVar5 % iVar7) * 4);
          }
          if (iVar5 != 0) {
            iVar7 = *(int *)(iVar5 + 0x28);
            local_20 = 0;
            uStack_1c = 0;
            local_10 = 2;
            uStack_18 = uStack_18 & 0xffffff00;
            iVar4 = FUN_1051c290(0,"CEquipPassiveSkillGroupInfo",0);
            uVar6 = local_8;
            if ((iVar7 != -1) &&
               ((((iVar7 != 0 || (*(int *)(iVar4 + 0x30) == 0)) && (*(int *)(iVar4 + 0x28) != 0)) &&
                ((iVar7 = iVar7 - *(int *)(iVar4 + 0x30), -1 < iVar7 &&
                 (iVar7 < *(int *)(iVar4 + 0x24))))))) {
              iVar1 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar7 / *(int *)(iVar4 + 0x28)) * 4);
              if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar7 % *(int *)(iVar4 + 0x28)) * 4) != 0)) {
                uStack_1c = FUN_118005a0(*(undefined4 *)(iVar5 + 0x30));
                local_20 = *(undefined4 *)(iVar5 + 0x28);
                puVar3 = *(undefined4 **)(iVar2 + 4);
                if (puVar3 == *(undefined4 **)(iVar2 + 8)) {
                  FUN_11303f30(puVar3,&local_20,(int)&param_2 + 3,1,1);
                  uVar6 = local_8;
                }
                else {
                  if (puVar3 != (undefined4 *)0x0) {
                    *puVar3 = local_20;
                    puVar3[1] = uStack_1c;
                    puVar3[2] = uStack_18;
                    puVar3[3] = uStack_14;
                    puVar3[4] = 2;
                  }
                  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 0x14;
                  uVar6 = local_8;
                }
              }
            }
          }
        }
        local_8 = uVar6 + 1;
      } while (local_8 < (uint)(*(int *)(local_c + 0xc) - *(int *)(local_c + 8) >> 3));
    }
  }
  return;
}



/* --- CEquipSuitSkillInfo::GetManagers_11572670 @ 11572670 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillInfo::GetManagers
// strings:
//   ""CEquipSuitSkillGroupInfo""
//   ""CEquipSuitSkillInfo::GetManagers""
//   ""CEquipSuitSkillInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitSkillInfo::GetManagers
   strings:
     ""CEquipSuitSkillGroupInfo""
     ""CEquipSuitSkillInfo::GetManagers""
     ""CEquipSuitSkillInfo"" */

int __thiscall
CEquipSuitSkillInfo__GetManagers_11572670(int param_1,undefined **param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  iVar1 = FUN_109a7c60(0,"CEquipSuitSkillGroupInfo",0);
  iVar4 = (int)param_2;
  if ((param_2 != (undefined **)0xffffffff) &&
     ((((param_2 != (undefined **)0x0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar8 = *(int *)(iVar1 + 0x28), iVar8 != 0)) &&
      ((iVar2 = (int)param_2 - *(int *)(iVar1 + 0x30), -1 < iVar2 &&
       (iVar2 < *(int *)(iVar1 + 0x24))))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar8) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar2 % iVar8) * 4) != 0)) {
      iVar8 = 0;
      local_8 = 0;
      local_c = 0;
      piVar3 = (int *)FUN_118243b0();
      piVar3 = (int *)*piVar3;
      iVar1 = FUN_118243b0();
      if (piVar3 != *(int **)(iVar1 + 4)) {
        do {
          if (*piVar3 == param_3) {
            local_c = piVar3[3];
            iVar8 = iVar8 + piVar3[2];
          }
          piVar3 = piVar3 + 7;
          iVar4 = FUN_118243b0();
        } while (piVar3 != *(int **)(iVar4 + 4));
        local_8 = iVar8;
        iVar4 = (int)param_2;
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = param_1;
      if (iVar1 != 0) {
        do {
          if (*(int *)(iVar1 + 0x10) < iVar4) {
            iVar5 = *(int *)(iVar1 + 0xc);
          }
          else {
            iVar5 = *(int *)(iVar1 + 8);
            iVar2 = iVar1;
          }
          iVar1 = iVar5;
        } while (iVar5 != 0);
        if (((iVar2 != param_1) && (*(int *)(iVar2 + 0x10) <= iVar4)) && (iVar2 != -0x14)) {
          uVar7 = 0;
          if (*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 3 != 0) {
            do {
              param_2 = &PTR_FUN_11de1868;
              iVar4 = *(int *)(*(int *)(iVar2 + 0x1c) + uVar7 * 8);
              if ((DAT_123c8a34 & 1) == 0) {
                DAT_123c8a34 = DAT_123c8a34 | 1;
                FUN_102500e0("CEquipSuitSkillInfo::GetManagers");
                FUN_11a8911f(&LAB_11c7b0e0);
              }
              puVar6 = (undefined4 *)*DAT_123c8a38;
              if ((puVar6 == (undefined4 *)0x0) &&
                 (puVar6 = (undefined4 *)FUN_11679e10(&param_2,"CEquipSuitSkillInfo",0),
                 puVar6 == (undefined4 *)0x0)) {
                if ((DAT_123c8a9c & 1) == 0) {
                  DAT_123c8aa4 = 0;
                  DAT_123c8ab4 = 0;
                  DAT_123c8ab8 = 0;
                  _DAT_123c8abc = 0;
                  DAT_123c8ac0 = 0;
                  DAT_123c8a9c = DAT_123c8a9c | 1;
                  DAT_123c8aa0 = &PTR_FUN_11de18bc;
                  DAT_123c8ac4 = _DAT_11de9ae0;
                  DAT_123c8ac8 = _UNK_11de9ae4;
                  uRam123c8acc = _UNK_11de9ae8;
                  DAT_123c8ad0 = _UNK_11de9aec;
                  DAT_123c8ad4 = 1;
                  DAT_123c8aa8 = puVar6;
                  _DAT_123c8aac = puVar6;
                  _DAT_123c8ab0 = puVar6;
                  FUN_11a8911f(&LAB_11ca26b0);
                }
                puVar6 = &DAT_123c8aa0;
              }
              if (((iVar4 != -1) && (((iVar4 != 0 || (puVar6[0xc] == 0)) && (puVar6[10] != 0)))) &&
                 ((iVar4 = iVar4 - puVar6[0xc], -1 < iVar4 && (iVar4 < (int)puVar6[9])))) {
                iVar1 = *(int *)(puVar6[8] + (iVar4 / (int)puVar6[10]) * 4);
                if ((iVar1 != 0) &&
                   ((iVar4 = *(int *)(iVar1 + (iVar4 % (int)puVar6[10]) * 4), iVar4 != 0 &&
                    (*(int *)(iVar4 + 0x1c) == param_3)))) {
                  iVar8 = iVar8 + *(int *)(iVar4 + 0x24);
                }
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < (uint)(*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 3));
            local_8 = iVar8;
          }
          piVar3 = &local_c;
          if (iVar8 <= local_c) {
            piVar3 = &local_8;
          }
          return *piVar3;
        }
      }
      return iVar8;
    }
  }
  return 0;
}



/* --- CEquipSuitSkillInfo::GetManagers_119adc70 @ 119adc70 --- */
// [RE-AUTO c3]
// id: CEquipSuitSkillInfo::GetManagers
// strings:
//   ""CEquipSuitSkillInfo::GetManagers""
//   ""CEquipSuitSkillInfo""
//   ""CEquipSuitSkillGroupInfo::GetManagers""
//   ""CEquipSuitSkillGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipSuitSkillInfo::GetManagers
   strings:
     ""CEquipSuitSkillInfo::GetManagers""
     ""CEquipSuitSkillInfo""
     ""CEquipSuitSkillGroupInfo::GetManagers""
     ""CEquipSuitSkillGroupInfo"" */

void CEquipSuitSkillInfo__GetManagers_119adc70(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_c;
  undefined **local_8;
  
  iVar6 = 0;
  while( true ) {
    local_8 = &PTR_FUN_11de1868;
    if ((DAT_123c8a34 & 1) == 0) {
      DAT_123c8a34 = DAT_123c8a34 | 1;
      FUN_102500e0("CEquipSuitSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7b0e0);
    }
    piVar2 = (int *)*DAT_123c8a38;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&local_8,"CEquipSuitSkillInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123c8a9c & 1) == 0) {
          DAT_123c8aa4 = 0;
          DAT_123c8ab4 = 0;
          DAT_123c8ab8 = 0;
          _DAT_123c8abc = 0;
          DAT_123c8ac0 = 0;
          DAT_123c8a9c = DAT_123c8a9c | 1;
          DAT_123c8aa0 = &PTR_FUN_11de18bc;
          DAT_123c8ac4 = _DAT_11de9ae0;
          DAT_123c8ac8 = _UNK_11de9ae4;
          uRam123c8acc = _UNK_11de9ae8;
          DAT_123c8ad0 = _UNK_11de9aec;
          DAT_123c8ad4 = 1;
          DAT_123c8aa8 = piVar2;
          _DAT_123c8aac = piVar2;
          _DAT_123c8ab0 = piVar2;
          FUN_11a8911f(&LAB_11cb4110);
        }
        piVar2 = (int *)&DAT_123c8aa0;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar6) break;
    local_8 = &PTR_FUN_11de1868;
    if ((DAT_123c8a34 & 1) == 0) {
      DAT_123c8a34 = DAT_123c8a34 | 1;
      FUN_102500e0("CEquipSuitSkillInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7b0e0);
    }
    piVar2 = (int *)*DAT_123c8a38;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&local_8,"CEquipSuitSkillInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_123c8a9c & 1) == 0) {
          DAT_123c8aa4 = 0;
          DAT_123c8ab4 = 0;
          DAT_123c8ab8 = 0;
          _DAT_123c8abc = 0;
          DAT_123c8ac0 = 0;
          DAT_123c8a9c = DAT_123c8a9c | 1;
          DAT_123c8aa0 = &PTR_FUN_11de18bc;
          DAT_123c8ac4 = _DAT_11de9ae0;
          DAT_123c8ac8 = _UNK_11de9ae4;
          uRam123c8acc = _UNK_11de9ae8;
          DAT_123c8ad0 = _UNK_11de9aec;
          DAT_123c8ad4 = 1;
          DAT_123c8aa8 = piVar2;
          _DAT_123c8aac = piVar2;
          _DAT_123c8ab0 = piVar2;
          FUN_11a8911f(&LAB_11cb4110);
        }
        piVar2 = (int *)&DAT_123c8aa0;
      }
    }
    local_8 = &PTR_FUN_11da54a8;
    if ((iVar6 < 0) || (piVar2[6] - piVar2[5] >> 2 <= iVar6)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar2[5] + iVar6 * 4);
    }
    iVar5 = *(int *)(iVar3 + 0x18);
    local_c = &PTR_FUN_11de1860;
    if ((DAT_123c8a54 & 1) == 0) {
      DAT_123c8a54 = DAT_123c8a54 | 1;
      FUN_102500e0("CEquipSuitSkillGroupInfo::GetManagers");
      FUN_11a8911f(&LAB_11c7b110);
    }
    puVar4 = (undefined *)*DAT_123c8a58;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)FUN_11679e10(&local_c,"CEquipSuitSkillGroupInfo",0);
      if (puVar4 == (undefined *)0x0) {
        if ((DAT_123c8ad8 & 1) == 0) {
          DAT_123c8ae0 = 0;
          DAT_123c8af0 = 0;
          uRam123c8af4 = 0;
          _DAT_123c8af8 = 0;
          DAT_123c8afc = 0;
          DAT_123c8ad8 = DAT_123c8ad8 | 1;
          _DAT_123c8adc = &PTR_FUN_11de1870;
          DAT_123c8b00 = _DAT_11de9ae0;
          DAT_123c8b04 = _UNK_11de9ae4;
          uRam123c8b08 = _UNK_11de9ae8;
          DAT_123c8b0c = _UNK_11de9aec;
          DAT_123c8b10 = 1;
          DAT_123c8ae4 = puVar4;
          _DAT_123c8ae8 = puVar4;
          _DAT_123c8aec = puVar4;
          FUN_11a8911f(&LAB_11cb40b0);
        }
        puVar4 = &DAT_123c8adc;
      }
    }
    local_c = &PTR_FUN_11da54a8;
    if (((iVar5 != -1) &&
        (((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) && (*(int *)(puVar4 + 0x28) != 0)))) &&
       ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar4 + 0x24)))))
    {
      iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / *(int *)(puVar4 + 0x28)) * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + (iVar5 % *(int *)(puVar4 + 0x28)) * 4) != 0)) {
        FUN_118227e0(*(undefined4 *)(iVar3 + 0x1c),iVar3);
      }
    }
    iVar6 = iVar6 + 1;
  }
  return;
}



