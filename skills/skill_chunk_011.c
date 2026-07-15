/* ===== FUN_11522770 @ 11522770  size=52 ===== */
// calls: CEquipHiddenSkillCondOpenInfo::GetInfoManager
// strings:
//   "CEquipHiddenSkillCondOpenInfo"

/* [RE-AUTO c0]
   calls: CEquipHiddenSkillCondOpenInfo::GetManagers
   strings:
     ""CEquipHiddenSkillCondOpenInfo"" */

undefined4 FUN_11522770(int param_1)

{
  int iVar1;
  
  iVar1 = CEquipHiddenSkillCondOpenInfo__GetInfoManager(0,"CEquipHiddenSkillCondOpenInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11522920 @ 11522920  size=90 ===== */
// calls: ComputeSuitSkillLevel
// strings:
//   "CEquipPassiveSkillGroupInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipPassiveSkillGroupInfo"" */

undefined4 FUN_11522920(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_1051c290(0,"CEquipPassiveSkillGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
      uVar3 = ComputeSuitSkillLevel(param_2);
      return uVar3;
    }
  }
  return 0;
}



/* ===== FUN_1154c960 @ 1154c960  size=52 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

undefined4 FUN_1154c960(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10500130(0,"CBuffInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1154de30 @ 1154de30  size=52 ===== */
// strings:
//   "CPetMonsterSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetMonsterSkillInfo"" */

undefined4 FUN_1154de30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10971ed0(0,"CPetMonsterSkillInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_1154de90 @ 1154de90  size=52 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo"" */

undefined4 FUN_1154de90(int param_1)

{
  int iVar1;
  
  iVar1 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11572f60 @ 11572f60  size=480 ===== */
// strings:
//   "CEquipSuitSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipSuitSkillInfo"" */

void __thiscall FUN_11572f60(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [4];
  undefined1 local_14;
  int local_10;
  uint local_c;
  undefined1 local_5;
  
  iVar2 = FUN_109a7b00(0,"CEquipSuitSkillInfo",0);
  iVar5 = param_2;
  if (param_3 == -1) {
    return;
  }
  if ((param_3 == 0) && (*(int *)(iVar2 + 0x30) != 0)) {
    return;
  }
  iVar6 = *(int *)(iVar2 + 0x28);
  if (iVar6 == 0) {
    return;
  }
  iVar3 = param_3 - *(int *)(iVar2 + 0x30);
  if (iVar3 < 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x24) <= iVar3) {
    return;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar6) * 4);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(uint *)(iVar2 + (iVar3 % iVar6) * 4);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = param_1;
  if (*(int *)(param_1 + 4) == 0) {
LAB_1157303e:
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_2c = param_2;
    local_24[3] = param_3;
    local_14 = 0;
    local_c = uVar1;
    FUN_11573450(0,local_24 + 3,&local_5,1,1);
    iVar2 = FUN_11759f80();
    iVar2 = *(int *)(iVar2 + 0x30) + *(int *)(local_c + 0x38);
    local_28 = iVar2;
    piVar4 = (int *)FUN_11570e20(&param_2);
    *piVar4 = local_2c;
    piVar4[1] = iVar2;
    FUN_115717e0(local_24);
    local_34 = param_3;
    if (local_24[0] != 0) {
      FUN_10c3d5d0(local_24[0]);
      local_34 = param_3;
    }
  }
  else {
    do {
      if (*(int *)(iVar2 + 0x10) < param_2) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar6 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    if (((iVar6 == param_1) || (param_2 < *(int *)(iVar6 + 0x10))) || (iVar6 == -0x14))
    goto LAB_1157303e;
    local_c = uVar1 & 0xffffff00;
    *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + *(int *)(uVar1 + 0x38);
    local_10 = param_3;
    piVar4 = *(int **)(iVar6 + 0x20);
    local_34 = param_3;
    if (piVar4 == *(int **)(iVar6 + 0x24)) {
      FUN_11573450(piVar4,&local_10,(int)&param_3 + 3,1,1);
    }
    else {
      *piVar4 = param_3;
      piVar4[1] = local_c;
      *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 8;
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      if (*(int *)(iVar2 + 0x10) < iVar5) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar6 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    if (((iVar6 != param_1) && (*(int *)(iVar6 + 0x10) <= iVar5)) && (iVar6 != -0x14)) {
      local_30 = *(int *)(iVar6 + 0x20) - *(int *)(iVar6 + 0x1c) >> 3;
      goto LAB_115730f0;
    }
  }
  local_30 = 0;
LAB_115730f0:
  local_3c = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  local_48 = 0x183a;
  local_44 = 0xffffffff;
  local_40 = 0xffffffff;
  local_38 = iVar5;
  iVar5 = FUN_113f3640();
  (**(code **)(**(int **)(iVar5 + 0x4c) + 0x14))(&local_48);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x1c) + 0x14))(&local_48);
  return;
}



/* ===== FUN_1157a0c0 @ 1157a0c0  size=352 ===== */
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CNewSkillInfo"" */

void FUN_1157a0c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  undefined1 local_1d;
  int local_1c [6];
  
  local_1c[5] = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  iVar2 = FUN_107d4610(0,"CNewSkillInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar5 = *(int *)(iVar2 + 0x28), iVar5 != 0)))) &&
     ((iVar3 = param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar5) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar5) * 4), iVar2 != 0)) {
      iVar5 = *(int *)(iVar2 + 0x40);
      iVar3 = 0;
      iVar6 = *(int *)(local_24 + 4 + iVar5 * 0xc) - *(int *)(local_24 + iVar5 * 0xc) >> 2;
      if (0 < iVar6) {
        piVar4 = *(int **)(local_24 + iVar5 * 0xc);
        do {
          if (*piVar4 == param_1) goto LAB_1157a20f;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < iVar6);
      }
      FUN_11744050();
      iVar5 = FUN_11744050();
      if (iVar6 < *(int *)(iVar5 + 0x40)) {
        iVar5 = local_24 + *(int *)(iVar2 + 0x40) * 0xc;
        piVar4 = *(int **)(iVar5 + 4);
        if (piVar4 == *(int **)(iVar5 + 8)) {
          FUN_10463c40(piVar4,&local_28,&local_1d,1,1);
        }
        else {
          *piVar4 = param_1;
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 4;
        }
        local_1c[0] = 0;
        local_1c[1] = 0;
        local_1c[2] = 0;
        local_1c[3] = 0;
        local_1c[4] = 0;
        FUN_1182d280(local_1c);
        piVar4 = local_1c;
        iVar5 = 5;
        do {
          if (*piVar4 != 0) {
            iVar3 = local_24 + (*(int *)(iVar2 + 0x40) + 0xd) * 0xc;
            piVar1 = *(int **)(iVar3 + 4);
            if (piVar1 == *(int **)(iVar3 + 8)) {
              FUN_10463c40(piVar1,piVar4,&local_1d,1,1);
            }
            else {
              *piVar1 = *piVar4;
              *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 4;
            }
          }
          piVar4 = piVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
LAB_1157a20f:
  FUN_11a89daa();
  return;
}



/* ===== FUN_1157a380 @ 1157a380  size=113 ===== */
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

void __thiscall FUN_1157a380(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_1087e7d0(0,"CTalentInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / iVar1) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (param_2 % iVar1) * 4), iVar2 != 0)) {
      *(undefined4 *)
       (param_1 + 0x2d8 +
       ((*(int *)(iVar2 + 0x44) * 3 + *(int *)(iVar2 + 0x4c)) * 3 + *(int *)(iVar2 + 0x50)) * 4) =
           param_3;
    }
  }
  return;
}



/* ===== FUN_1157a470 @ 1157a470  size=152 ===== */
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CNewSkillInfo"" */

undefined4 __thiscall FUN_1157a470(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar3 = FUN_107d4610(0,"CNewSkillInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar3 + 0x28), iVar2 != 0)))) &&
     ((iVar4 = param_2 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar2) * 4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + (iVar4 % iVar2) * 4), iVar3 != 0)) {
      iVar3 = *(int *)(iVar3 + 0x40);
      uVar6 = 0;
      if (*(int *)(param_1 + 4 + iVar3 * 0xc) - *(int *)(param_1 + iVar3 * 0xc) >> 2 != 0) {
        piVar5 = *(int **)(param_1 + iVar3 * 0xc);
        piVar1 = (int *)(param_1 + iVar3 * 0xc);
        do {
          if (*piVar5 == param_2) {
            return 1;
          }
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar6 < (uint)(piVar1[1] - *piVar1 >> 2));
      }
      return 0;
    }
  }
  return 1;
}



/* ===== FUN_1157a720 @ 1157a720  size=113 ===== */
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

undefined4 __thiscall FUN_1157a720(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_1087e7d0(0,"CTalentInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
      (param_2 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      return *(undefined4 *)
              (param_1 + 0x2d8 +
              ((*(int *)(iVar2 + 0x44) * 3 + *(int *)(iVar2 + 0x4c)) * 3 + *(int *)(iVar2 + 0x50)) *
              4);
    }
  }
  return 0;
}



/* ===== FUN_1157a850 @ 1157a850  size=126 ===== */
// strings:
//   "CTalentInfo"

/* [RE-AUTO c0]
   strings:
     ""CTalentInfo"" */

uint __thiscall FUN_1157a850(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_1087e7d0(0,"CTalentInfo",0);
  piVar3 = piVar2;
  if (((param_2 != -1) && (((param_2 != 0 || (piVar2[0xc] == 0)) && (piVar2[10] != 0)))) &&
     ((piVar3 = (int *)(param_2 - piVar2[0xc]), -1 < (int)piVar3 && ((int)piVar3 < piVar2[9])))) {
    iVar4 = (int)piVar3 % piVar2[10];
    iVar1 = *(int *)(piVar2[8] + ((int)piVar3 / piVar2[10]) * 4);
    piVar3 = (int *)0x0;
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + iVar4 * 4), piVar3 = (int *)0x0, iVar1 != 0)) {
      iVar4 = 0;
      piVar3 = (int *)(*(int *)(iVar1 + 0x44) * 0x20 + 0x138 + param_1);
      do {
        if (*piVar3 == param_2) {
          return CONCAT31((int3)((uint)piVar3 >> 8),1);
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < 8);
    }
  }
  return (uint)piVar3 & 0xffffff00;
}



/* ===== FUN_1157a8d0 @ 1157a8d0  size=410 ===== */
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CNewSkillInfo"" */

void __thiscall FUN_1157a8d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_24;
  int local_1c [6];
  
  local_1c[5] = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_107d4610(0,"CNewSkillInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar3 = *(int *)(iVar2 + 0x28), iVar3 != 0)))) &&
     ((iVar5 = param_2 - *(int *)(iVar2 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar5 / iVar3) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar5 % iVar3) * 4), iVar2 != 0)) {
      iVar3 = 0;
      iVar5 = *(int *)(param_1 + 4 + *(int *)(iVar2 + 0x40) * 0xc) -
              *(int *)(param_1 + *(int *)(iVar2 + 0x40) * 0xc) >> 2;
      if (0 < iVar5) {
        do {
          piVar4 = (int *)(param_1 + *(int *)(iVar2 + 0x40) * 0xc);
          piVar1 = (int *)(*piVar4 + iVar3 * 4);
          if (*piVar1 == param_2) {
            *piVar1 = *(int *)(piVar4[1] + -4);
            piVar4 = (int *)(param_1 + *(int *)(iVar2 + 0x40) * 0xc);
            if (piVar4[1] != *piVar4) {
              piVar4[1] = piVar4[1] + -4;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar5);
      }
      local_1c[0] = 0;
      local_1c[1] = 0;
      local_1c[2] = 0;
      local_1c[3] = 0;
      local_1c[4] = 0;
      FUN_1182d280(local_1c);
      piVar4 = local_1c;
      local_24 = 5;
      do {
        if (*piVar4 != 0) {
          iVar3 = *(int *)(iVar2 + 0x40) + 0xd;
          iVar5 = 0;
          iVar3 = *(int *)(param_1 + 4 + iVar3 * 0xc) - *(int *)(param_1 + iVar3 * 0xc) >> 2;
          if (0 < iVar3) {
            do {
              piVar1 = (int *)(*(int *)(param_1 + 0x9c + *(int *)(iVar2 + 0x40) * 0xc) + iVar5 * 4);
              if (*piVar1 == *piVar4) {
                *piVar1 = *(int *)(*(int *)(param_1 + 0xa0 + *(int *)(iVar2 + 0x40) * 0xc) + -4);
                piVar1 = (int *)(param_1 + (*(int *)(iVar2 + 0x40) + 0xd) * 0xc);
                if (piVar1[1] != *piVar1) {
                  piVar1[1] = piVar1[1] + -4;
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
          }
        }
        piVar4 = piVar4 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_1157b670 @ 1157b670  size=480 ===== */
// calls: CTalentActiveInfo::GetManager
// strings:
//   "CTalentActiveInfo"

/* [RE-AUTO c0]
   calls: CTalentActiveInfo::GetManagers
   strings:
     ""CTalentActiveInfo"" */

undefined4 * __thiscall FUN_1157b670(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_11d2ddb4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[2] = param_3;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_11744050();
  piVar1 = (int *)CTalentActiveInfo__GetManager(0,"CTalentActiveInfo",0);
  (**(code **)(*piVar1 + 0x28))();
  FUN_11744050();
  FUN_1157d4f0();
  return param_1;
}



/* ===== FUN_1157bc20 @ 1157bc20  size=331 ===== */
// strings:
//   "CSkillSystem_CanChooseSkill"

/* [RE-AUTO c0]
   strings:
     ""CSkillSystem_CanChooseSkill"" */

undefined4 __thiscall FUN_1157bc20(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *local_8;
  
  local_8 = param_1;
  FUN_1154dd30(param_1[1]);
  FUN_1154e040();
  local_8 = (int *)0x0;
  piVar3 = (int *)(**(code **)(*param_1 + 0x90))(param_2,&local_8);
  if (piVar3 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar4 = (**(code **)(*piVar3 + 0x3c))();
  if (iVar4 == 2) {
    (**(code **)(*(int *)param_1[1] + 0xa8))();
    iVar4 = (**(code **)(*(int *)param_1[1] + 0xa8))();
    if (iVar4 != 0) {
      return 0xfffffffe;
    }
    piVar1 = (int *)param_1[1];
    piVar5 = (int *)FUN_11398e60();
    if (piVar5 == (int *)0x0) {
      if (DAT_11dfa7d0 == -1) {
        DAT_11dfa7d0 = 10;
      }
      else if (DAT_11dfa7d0 < 1) {
        return 0xfffffffd;
      }
      DAT_11dfa7d0 = DAT_11dfa7d0 + -1;
      goto LAB_1157bd12;
    }
    if (piVar1[0xb4f] != 0) {
      cVar2 = (**(code **)(*piVar1 + 0x2f4))();
      goto LAB_1157bd50;
    }
  }
  else {
    if (iVar4 != 3) {
      return 0;
    }
    (**(code **)(*(int *)param_1[1] + 0xa8))();
    iVar4 = (**(code **)(*(int *)param_1[1] + 0xa8))();
    if (iVar4 != 0) {
      return 0xfffffffe;
    }
    piVar5 = (int *)FUN_11398e60();
    if (piVar5 == (int *)0x0) {
      if (DAT_11dfa7d4 == -1) {
        DAT_11dfa7d4 = 9;
      }
      else {
        if (DAT_11dfa7d4 < 1) {
          return 0xfffffffd;
        }
        DAT_11dfa7d4 = DAT_11dfa7d4 + -1;
      }
LAB_1157bd12:
      FUN_100b3cd0("CSkillSystem_CanChooseSkill");
      return 0xfffffffd;
    }
  }
  cVar2 = (**(code **)(*piVar5 + 0x11c))(piVar3[0x13]);
LAB_1157bd50:
  if (cVar2 != '\0') {
    return 0;
  }
  return 0xfffffffc;
}



/* ===== FUN_1157c3f0 @ 1157c3f0  size=144 ===== */
// strings:
//   "CNewSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CNewSkillInfo"" */

undefined4 __thiscall FUN_1157c3f0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_107d4610(0,"CNewSkillInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)))) &&
     ((iVar4 = param_2 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + (iVar4 % *(int *)(iVar3 + 0x28)) * 4), iVar3 != 0)
       ) {
      if (*(int *)(iVar3 + 0x44) == -1) {
        cVar2 = FUN_1157a470(param_2);
        if (cVar2 != '\0') {
          return 1;
        }
      }
      else {
        (**(code **)(*param_1 + 0x8c))(*(undefined4 *)(iVar3 + 0x40),*(int *)(iVar3 + 0x44));
        iVar3 = FUN_1141c9e0();
        if (iVar3 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_1157e310 @ 1157e310  size=521 ===== */
// strings:
//   "CPetMonsterSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetMonsterSkillInfo"" */

undefined4 __fastcall FUN_1157e310(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar5 = param_1[0x2a];
  if (iVar5 == 0) {
    return 0xffffffff;
  }
  iVar3 = FUN_10971ed0(0,"CPetMonsterSkillInfo",0);
  if (((iVar5 == -1) ||
      (((iVar5 == 0 && (*(int *)(iVar3 + 0x30) != 0)) ||
       (iVar1 = *(int *)(iVar3 + 0x28), iVar1 == 0)))) ||
     ((iVar5 = iVar5 - *(int *)(iVar3 + 0x30), iVar5 < 0 || (*(int *)(iVar3 + 0x24) <= iVar5)))) {
    return 0xffffffff;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar5 / iVar1) * 4);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar5 = *(int *)(iVar3 + (iVar5 % iVar1) * 4);
  if (iVar5 != 0) {
    cVar2 = FUN_1157d5a0();
    if (cVar2 != '\0') {
      return 0xffffffff;
    }
    iVar3 = (**(code **)(*param_1 + 0x48))();
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x38))();
    }
    param_1[7] = iVar5;
    if (param_1[0x23] != 0) {
      if (param_1[0x23] == *(int *)(iVar5 + 0x14)) {
        param_1[10] = param_1[0x18];
        param_1[9] = param_1[0x17];
        param_1[0x10] = param_1[0x1e];
        param_1[0xf] = param_1[0x1d];
        param_1[0xc] = param_1[0x1a];
        param_1[0xb] = param_1[0x19];
        param_1[0x12] = param_1[0x20];
        param_1[0x11] = param_1[0x1f];
        param_1[0xe] = param_1[0x1c];
        param_1[0xd] = param_1[0x1b];
        param_1[0x14] = param_1[0x22];
        param_1[0x13] = param_1[0x21];
      }
      else {
        piVar4 = param_1 + 0x1d;
        iVar5 = 3;
        do {
          if ((*piVar4 != 0) || (piVar4[1] != 0)) {
            FUN_1154dd30(param_1[1]);
            FUN_1154e040();
            (*(code *)piVar4[1])();
          }
          piVar4 = piVar4 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_1157cfa0();
    }
    FUN_11634640();
    FUN_1157d280(0);
    piVar4 = (int *)param_1[7];
    local_18 = param_1[1];
    local_24 = 0x6a6;
    local_20 = 0xffffffff;
    local_1c = 0xffffffff;
    local_14 = (**(code **)(*piVar4 + 0x18))();
    local_10 = piVar4[5];
    local_c = piVar4[6];
    local_8 = 0;
    piVar4 = (int *)FUN_1157c090();
    (**(code **)(*piVar4 + 0x14))(&local_24);
    piVar4 = (int *)FUN_1157c060();
    (**(code **)(*piVar4 + 0x14))(&local_24);
    (**(code **)(*param_1 + 0x98))();
    iVar5 = (**(code **)(*(int *)param_1[7] + 0x3c))();
    if (((iVar5 == 4) && (iVar5 = (**(code **)(*(int *)param_1[7] + 0x3c))(), iVar5 == 5)) &&
       (iVar5 = (**(code **)(*(int *)param_1[7] + 0x3c))(), iVar5 == 6)) {
      return 0;
    }
    piVar4 = (int *)(**(code **)(*param_1 + 4))();
    (**(code **)(*piVar4 + 0x14))();
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_1157e5f0 @ 1157e5f0  size=301 ===== */
// strings:
//   "CPetMonsterSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetMonsterSkillInfo"" */

int __thiscall FUN_1157e5f0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = 0;
  iVar3 = FUN_1182e200(param_2,0);
  iVar4 = FUN_10971ed0(0,"CPetMonsterSkillInfo",0);
  if ((iVar3 != -1) &&
     ((((iVar3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
      ((iVar3 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar4 + 0x24)))))))
  {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + (iVar3 % iVar1) * 4), iVar3 != 0)) {
      cVar2 = FUN_1157d650(iVar3);
      if (cVar2 != '\0') {
        return 0;
      }
      cVar2 = (**(code **)(*param_1 + 0x58))(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      iVar4 = *(int *)(iVar3 + 0x4e8) - *(int *)(iVar3 + 0x4e4) >> 2;
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) {
          *param_3 = 2;
          return 0;
        }
        iVar1 = *(int *)(*(int *)(iVar3 + 0x4e4) + iVar4 * 4);
        iVar5 = FUN_1157a660(*(undefined4 *)(iVar1 + 0x14));
      } while (((*(int *)(iVar5 + 4) < *(int *)(iVar1 + 0x18) >> 1) ||
               (*(char *)(iVar1 + 0x2e) != '\0')) || (cVar2 = FUN_1157e800(iVar1), cVar2 == '\0'));
      return iVar1;
    }
  }
  *param_3 = 1;
  return 0;
}



/* ===== FUN_1157e880 @ 1157e880  size=97 ===== */
// strings:
//   "CPetMonsterSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetMonsterSkillInfo"" */

undefined4 FUN_1157e880(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1182e200(param_1,param_2);
  iVar3 = FUN_10971ed0(0,"CPetMonsterSkillInfo",0);
  if (((iVar2 != -1) &&
      (((iVar2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)))) &&
     ((iVar2 = iVar2 - *(int *)(iVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar3 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar2 / *(int *)(iVar3 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (iVar2 % *(int *)(iVar3 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_1157f2f0 @ 1157f2f0  size=125 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo"" */

int __thiscall FUN_1157f2f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar2 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar2 + 0x24))))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_2 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       ((iVar2 = *(int *)(iVar1 + (param_2 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0 &&
        (*(int *)(param_1 + 8) != 0)))) {
      iVar2 = FUN_1154bc80(*(undefined4 *)(iVar2 + 0x10));
      return iVar2 / 1000;
    }
  }
  return 0;
}



/* ===== FUN_1157f370 @ 1157f370  size=99 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo"" */

undefined4 FUN_1157f370(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      uVar3 = FUN_115803e0(iVar2);
      return uVar3;
    }
  }
  return 0;
}



/* ===== FUN_1157f470 @ 1157f470  size=78 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo"" */

undefined4 FUN_1157f470(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_1157f8c0 @ 1157f8c0  size=954 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager, CInfoManager::GetByName
// strings:
//   "CPetSkillConditionInfo"
//   "CPetSkillInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo""
     ""CPetSkillInfo"" */

undefined4 __thiscall FUN_1157f8c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined **local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x1ed4);
  if ((puVar1 != (undefined4 *)0x0) && (iVar3 = (**(code **)(*(int *)*puVar1 + 0x54))(), iVar3 != 0)
     ) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x1ed4);
    if (puVar1 == (undefined4 *)0x0) {
      (**(code **)(_DAT_00000000 + 0x28))(param_2);
    }
    else {
      piVar4 = (int *)(**(code **)(*(int *)*puVar1 + 0x54))();
      (**(code **)(*piVar4 + 0x28))(param_2);
    }
  }
  iVar3 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar6 = *(int *)(iVar3 + 0x28), iVar6 != 0)) &&
      ((iVar5 = param_2 - *(int *)(iVar3 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar3 + 0x24))))))
     ) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar5 / iVar6) * 4);
    if ((((iVar3 != 0) &&
         ((local_10 = *(int *)(iVar3 + (iVar5 % iVar6) * 4), local_10 != 0 &&
          ((iVar3 = CInfoManager__GetByName(0,"CPetSkillInfo",0), param_2 != 0 ||
           (*(int *)(iVar3 + 0x30) == 0)))))) && (iVar6 = *(int *)(iVar3 + 0x28), iVar6 != 0)) &&
       ((iVar5 = param_2 - *(int *)(iVar3 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar3 + 0x24)))))
    {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar5 / iVar6) * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + (iVar5 % iVar6) * 4), iVar3 != 0)) {
        (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x10) + 0x44))
                  (*(undefined4 *)(*(int *)(param_1 + 4) + 4),*(undefined4 *)(iVar3 + 0xbc),0,1,0xc)
        ;
        iVar6 = FUN_113f0e50();
        if (iVar6 != 0) {
          iVar6 = FUN_113f0e50();
          (**(code **)(**(int **)(iVar6 + 0x10) + 0x44))
                    (*(undefined4 *)(*(int *)(param_1 + 4) + 4),*(undefined4 *)(iVar3 + 0xc0),0,1,
                     0xc);
        }
        local_18 = 7;
        uVar8 = 0;
        local_1c = &PTR_FUN_11d2df18;
        local_14 = param_1;
        if (*(int *)(iVar3 + 0xe0) - *(int *)(iVar3 + 0xdc) >> 2 != 0) {
          do {
            local_8 = (int *)FUN_11430af0(*(undefined4 *)(*(int *)(iVar3 + 0xdc) + uVar8 * 4));
            if ((local_8 != (int *)0x0) && (iVar6 = FUN_113f0e50(), iVar6 != 0)) {
              uVar7 = FUN_113f0e50();
              cVar2 = (**(code **)(*local_8 + 0xc))(uVar7,0);
              if (cVar2 != '\0') {
                uVar7 = FUN_113f0e50();
                (**(code **)(*local_8 + 0x10))(uVar7,&local_1c);
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)(*(int *)(iVar3 + 0xe0) - *(int *)(iVar3 + 0xdc) >> 2));
        }
        local_c = 0;
        if (*(int *)(iVar3 + 0x128) - *(int *)(iVar3 + 0x124) >> 2 != 0) {
          do {
            local_8 = (int *)FUN_11430af0(*(undefined4 *)(*(int *)(iVar3 + 0x124) + local_c * 4));
            if ((((local_8 != (int *)0x0) &&
                 (iVar6 = *(int *)(*(int *)(param_1 + 4) + 0xc), iVar6 != 0)) &&
                (piVar4 = *(int **)(iVar6 + 0x90), piVar4 != (int *)0x0)) &&
               ((piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(*(undefined4 *)(param_1 + 0x8c)),
                piVar4 != (int *)0x0 && (iVar6 = (**(code **)(*piVar4 + 0xa8))(), iVar6 == 1)))) {
              iVar6 = *(int *)(*(int *)(param_1 + 4) + 0xc);
              if (iVar6 == 0) {
                piVar4 = (int *)0x0;
              }
              else {
                piVar4 = *(int **)(iVar6 + 0x90);
                if (piVar4 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                else {
                  piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(*(undefined4 *)(param_1 + 0x8c));
                  if ((piVar4 != (int *)0x0) &&
                     (iVar6 = (**(code **)(*piVar4 + 0xa8))(), iVar6 != 1)) {
                    piVar4 = (int *)0x0;
                  }
                }
              }
              cVar2 = (**(code **)(*local_8 + 0xc))(piVar4,0);
              if (cVar2 != '\0') {
                iVar6 = *(int *)(*(int *)(param_1 + 4) + 0xc);
                if (iVar6 == 0) {
                  piVar4 = (int *)0x0;
                }
                else {
                  piVar4 = *(int **)(iVar6 + 0x90);
                  if (piVar4 == (int *)0x0) {
                    piVar4 = (int *)0x0;
                  }
                  else {
                    piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(*(undefined4 *)(param_1 + 0x8c));
                    if ((piVar4 != (int *)0x0) &&
                       (iVar6 = (**(code **)(*piVar4 + 0xa8))(), iVar6 != 1)) {
                      piVar4 = (int *)0x0;
                    }
                  }
                }
                (**(code **)(*local_8 + 0x10))(piVar4,&local_1c);
              }
            }
            local_c = local_c + 1;
          } while (local_c < (uint)(*(int *)(iVar3 + 0x128) - *(int *)(iVar3 + 0x124) >> 2));
        }
        local_c = 0;
        if (*(int *)(iVar3 + 0x104) - *(int *)(iVar3 + 0x100) >> 2 != 0) {
          do {
            piVar4 = (int *)FUN_11430af0(*(undefined4 *)(*(int *)(iVar3 + 0x100) + local_c * 4));
            if ((piVar4 != (int *)0x0) &&
               (cVar2 = (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(param_1 + 4),0), cVar2 != '\0')
               ) {
              (**(code **)(*piVar4 + 0x10))(*(undefined4 *)(param_1 + 4),&local_1c);
            }
            local_c = local_c + 1;
          } while (local_c < (uint)(*(int *)(iVar3 + 0x104) - *(int *)(iVar3 + 0x100) >> 2));
        }
        if (*(int *)(param_1 + 0x84) != param_2) {
          FUN_11580310(local_10);
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_1157fc90 @ 1157fc90  size=146 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo"" */

undefined4 __thiscall FUN_1157fc90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar1 + 0x28), iVar2 != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar1 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar1 + 0x24))))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (param_2 / iVar2) * 4);
    if ((iVar1 != 0) &&
       ((iVar1 = *(int *)(iVar1 + (param_2 % iVar2) * 4), iVar1 != 0 &&
        (iVar2 = FUN_115803e0(iVar1), 0 < iVar2)))) {
      if ((*(int *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_1154bc80(*(undefined4 *)(iVar1 + 0x10)), 0 < iVar1 / 1000)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_1157fd30 @ 1157fd30  size=167 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo"" */

void __thiscall FUN_1157fd30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar3 = *(int *)(iVar1 + 0x28), iVar3 != 0)) &&
      ((iVar2 = param_2 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24))))))
     ) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar3) * 4);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + (iVar2 % iVar3) * 4), iVar1 != 0)) {
      local_8 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
      local_18 = 0x423;
      local_14 = 0xffffffff;
      local_10 = 0xffffffff;
      local_c = param_2;
      iVar3 = FUN_113f0e50();
      if ((iVar3 != 0) && (*(int **)(iVar3 + 0x1c) != (int *)0x0)) {
        (**(code **)(**(int **)(iVar3 + 0x1c) + 0x14))(&local_18);
      }
      FUN_11580310(iVar1);
      *(int *)(param_1 + 0x84) = param_2;
    }
  }
  return;
}



/* ===== FUN_11580040 @ 11580040  size=192 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo"" */

bool FUN_11580040(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
  if ((param_1 != -1) &&
     ((((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar3 = *(int *)(iVar2 + 0x28), iVar3 != 0)) &&
      ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
       (param_1 < *(int *)(iVar2 + 0x24))))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / iVar3) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (param_1 % iVar3) * 4), iVar2 != 0)) {
      iVar3 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
      if ((((param_2 != -1) && ((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)))) &&
          (*(int *)(iVar3 + 0x28) != 0)) &&
         ((param_2 = param_2 - *(int *)(iVar3 + 0x30), -1 < param_2 &&
          (param_2 < *(int *)(iVar3 + 0x24))))) {
        iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (param_2 / *(int *)(iVar3 + 0x28)) * 4);
        if ((iVar1 != 0) &&
           (iVar3 = *(int *)(iVar1 + (param_2 % *(int *)(iVar3 + 0x28)) * 4), iVar3 != 0)) {
          iVar2 = *(int *)(iVar2 + 0x18);
          iVar3 = *(int *)(iVar3 + 0x18);
          if (iVar2 != iVar3) {
            return iVar3 < iVar2;
          }
        }
      }
      return true;
    }
  }
  return false;
}



/* ===== FUN_11580190 @ 11580190  size=212 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

void __thiscall FUN_11580190(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x10);
  local_c = &local_8;
  local_20 = _DAT_11d2df20;
  uStack_1c = _UNK_11d2df24;
  uStack_18 = _UNK_11d2df28;
  uStack_14 = _UNK_11d2df2c;
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  local_10 = iVar4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(&local_20);
  }
  iVar3 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if (((iVar4 != -1) &&
      (((iVar4 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar3 + 0x28), iVar2 != 0)))) &&
     ((iVar4 = iVar4 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar2) * 4);
    if ((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + (iVar4 % iVar2) * 4), iVar4 != 0)) {
      local_28 = *(undefined4 *)(iVar4 + 0x24);
      local_24 = &local_8;
      local_38 = _DAT_11d2df30;
      uStack_34 = _UNK_11d2df34;
      uStack_30 = _UNK_11d2df38;
      uStack_2c = _UNK_11d2df3c;
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(&local_38);
      }
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1154bee0(*(undefined4 *)(param_2 + 0x10),local_8,0);
  }
  return;
}



/* ===== FUN_11580310 @ 11580310  size=194 ===== */
// calls: CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillConditionInfo"" */

void __thiscall FUN_11580310(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = (**(code **)(*param_2 + 0x18))();
  iVar6 = param_1 + 0x6c;
  iVar3 = *(int *)(param_1 + 0x70);
  iVar5 = iVar6;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      if (*(uint *)(iVar3 + 0x10) < uVar1) {
        iVar4 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar4 = *(int *)(iVar3 + 8);
        iVar5 = iVar3;
      }
      iVar3 = iVar4;
    } while (iVar4 != 0);
    if ((iVar5 != iVar6) && (uVar1 < *(uint *)(iVar5 + 0x10))) {
      iVar5 = iVar6;
    }
  }
  piVar2 = (int *)0x0;
  if (iVar5 != iVar6) {
    iVar6 = *(int *)(iVar5 + 0x14);
    iVar3 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
    if (((iVar6 != -1) &&
        (((iVar6 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
         (iVar5 = *(int *)(iVar3 + 0x28), iVar5 != 0)))) &&
       ((iVar6 = iVar6 - *(int *)(iVar3 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar3 + 0x24))))) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar6 / iVar5) * 4);
      if (iVar3 != 0) {
        piVar2 = *(int **)(iVar3 + (iVar6 % iVar5) * 4);
        goto LAB_115803a4;
      }
    }
    piVar2 = (int *)0x0;
  }
LAB_115803a4:
  if (piVar2 != (int *)0x0) {
    param_2 = piVar2;
  }
  FUN_115806f0(param_2);
  FUN_11580490(param_2);
  FUN_11580190(param_2);
  FUN_11580540(param_2);
  return;
}



/* ===== FUN_11580540 @ 11580540  size=286 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

void __thiscall FUN_11580540(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_20 = _DAT_11d2df20;
  uStack_1c = _UNK_11d2df24;
  uStack_18 = _UNK_11d2df28;
  uStack_14 = _UNK_11d2df2c;
  local_8 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x10);
  local_c = &local_8;
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  local_10 = iVar4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(&local_20);
  }
  iVar2 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if (((iVar4 != -1) &&
      (((iVar4 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar4 = iVar4 - *(int *)(iVar2 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar2 + 0x24))))) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar4 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + (iVar4 % *(int *)(iVar2 + 0x28)) * 4), iVar4 != 0)
       ) {
      local_28 = *(undefined4 *)(iVar4 + 0x24);
      local_24 = &local_8;
      local_38 = _DAT_11d2df30;
      uStack_34 = _UNK_11d2df34;
      uStack_30 = _UNK_11d2df38;
      uStack_2c = _UNK_11d2df3c;
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))(&local_38);
      }
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = *(int *)(param_2 + 0x24);
    iVar2 = *(int *)(param_2 + 0x20);
    FUN_100ee470();
    iVar3 = FUN_100ee450();
    iVar4 = local_8 + (iVar2 - (int)((double)iVar3 * _DAT_11de9a60 * (double)(iVar4 - iVar2)));
    FUN_1154bda0(*(int *)(param_2 + 0x10) * 100);
    FUN_1154bee0(*(int *)(param_2 + 0x10) * 100,iVar4,0);
  }
  return;
}



/* ===== FUN_115823a0 @ 115823a0  size=593 ===== */
// calls: CPetSkillInfo::CollectSkillIdsByCategory, CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

void __fastcall FUN_115823a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar2 = (**(code **)(*(int *)param_1[1] + 0xa8))();
  if ((iVar2 == 0) && ((char)param_1[6] == '\0')) {
    *(undefined1 *)(param_1 + 6) = 1;
    FUN_11635b70();
    cVar1 = (**(code **)(*param_1 + 0x78))();
    if (cVar1 == '\0') {
      FUN_1158d1e0();
      iVar2 = FUN_1158d1e0();
      if (iVar2 == 0) {
        iVar2 = FUN_116a6a70();
        iVar2 = FUN_1052bf70(*(undefined4 *)(iVar2 + 0xa4));
        if (iVar2 == 0) {
          return;
        }
        (**(code **)(*(int *)param_1[2] + 0x1c))(iVar2,0,0);
        return;
      }
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1[3] + 0x34)) {
      do {
        iVar3 = FUN_1158d020(iVar2);
        if ((iVar3 != 0) && (FUN_11566dd0(), *(int *)(iVar3 + 0x40) == 1)) {
          (**(code **)(*param_1 + 0x4c))();
          iVar4 = (**(code **)(*param_1 + 0x4c))();
          if (iVar4 == 0) {
            (**(code **)(*(int *)param_1[2] + 0x1c))(*(undefined4 *)(iVar3 + 0x1c),iVar3,0);
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1[3] + 0x34));
    }
    if ((*(int **)(param_1[1] + 0xc) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)(param_1[1] + 0xc) + 0x168))(), cVar1 != '\0')) {
      iVar2 = (**(code **)(*param_1 + 0x4c))();
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x4c))();
        iVar2 = FUN_113ef3e0();
        if (iVar2 != 0) {
          (**(code **)(*param_1 + 0x4c))();
          iVar2 = FUN_113ef3e0();
          param_1[0x21] = *(int *)(iVar2 + 0x24);
          return;
        }
      }
      if (0 < *(int *)(param_1[3] + 0x34)) {
        iVar2 = 0;
        while ((local_8 = FUN_1158d020(iVar2), local_8 == 0 || (*(char *)(local_8 + 0x44) == '\0')))
        {
          iVar2 = iVar2 + 1;
          if (*(int *)(param_1[3] + 0x34) <= iVar2) {
            return;
          }
        }
        local_14 = 0;
        local_10 = 0;
        local_c = 0;
        CPetSkillInfo__CollectSkillIdsByCategory(8,&local_14);
        uVar5 = 0;
        iVar2 = local_14;
        if (local_10 - local_14 >> 2 != 0) {
          do {
            iVar3 = *(int *)(iVar2 + uVar5 * 4);
            if (iVar3 != 0) {
              iVar2 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
              if (((iVar3 == -1) ||
                  (((iVar3 == 0 && (*(int *)(iVar2 + 0x30) != 0)) || (*(int *)(iVar2 + 0x28) == 0)))
                  ) || ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), iVar3 < 0 ||
                        (*(int *)(iVar2 + 0x24) <= iVar3)))) {
LAB_1158258f:
                iVar3 = 0;
              }
              else {
                iVar4 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
                if (iVar4 == 0) goto LAB_1158258f;
                iVar3 = *(int *)(iVar4 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4);
              }
              iVar2 = local_14;
              if (*(int *)(iVar3 + 0x5c) != 4) {
                (**(code **)(**(int **)(param_1[1] + 0x10) + 0x44))
                          (0,*(undefined4 *)(iVar3 + 0xb8),0,1,0xc);
                iVar2 = local_14;
              }
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)(local_10 - iVar2 >> 2));
        }
        param_1[0x21] = *(int *)(local_8 + 0x24);
        (**(code **)(*(int *)param_1[2] + 0x1c))(*(undefined4 *)(local_8 + 0x1c),local_8,1);
        if (local_14 != 0) {
          FUN_10c3d5d0(local_14);
        }
      }
    }
  }
  return;
}



/* ===== FUN_11582f70 @ 11582f70  size=455 ===== */
// calls: CInfoManager::GetByName, CPetSkillConditionInfo::GetInfoManager
// strings:
//   "CPetSkillInfo"
//   "CPetSkillConditionInfo"

/* [RE-AUTO c0]
   calls: CPetSkillConditionInfo::GetManagers
   strings:
     ""CPetSkillInfo""
     ""CPetSkillConditionInfo"" */

void __thiscall FUN_11582f70(int *param_1,undefined1 *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  undefined1 local_30 [36];
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar5 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if ((param_3 != -1) &&
     ((((param_3 != 0 || (*(int *)(iVar5 + 0x30) == 0)) && (*(int *)(iVar5 + 0x28) != 0)) &&
      ((iVar6 = param_3 - *(int *)(iVar5 + 0x30), -1 < iVar6 && (iVar6 < *(int *)(iVar5 + 0x24))))))
     ) {
    iVar7 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar6 / *(int *)(iVar5 + 0x28)) * 4);
    if ((iVar7 != 0) && (iVar5 = *(int *)(iVar7 + (iVar6 % *(int *)(iVar5 + 0x28)) * 4), iVar5 != 0)
       ) {
      iVar6 = CPetSkillConditionInfo__GetInfoManager(0,"CPetSkillConditionInfo",0);
      if (((param_3 != 0) || (*(int *)(iVar6 + 0x30) == 0)) &&
         ((*(int *)(iVar6 + 0x28) != 0 &&
          ((iVar7 = param_3 - *(int *)(iVar6 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(iVar6 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(iVar6 + 0x20) + (iVar7 / *(int *)(iVar6 + 0x28)) * 4);
        if ((iVar2 != 0) &&
           (iVar6 = *(int *)(iVar2 + (iVar7 % *(int *)(iVar6 + 0x28)) * 4), iVar6 != 0)) {
          iVar7 = FUN_100e5c10(local_30);
          psVar3 = *(short **)(iVar7 + 0x24);
          psVar9 = psVar3;
          do {
            sVar1 = *psVar9;
            psVar9 = psVar9 + 1;
          } while (sVar1 != 0);
          FUN_100e61d0(psVar3,psVar3 + ((int)psVar9 - (int)(psVar3 + 1) >> 1));
          if ((local_c != local_30) && (local_c != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_c);
          }
          *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(iVar5 + 0x10);
          *param_2 = 1;
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar6 + 0x1c);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar6 + 0x28);
          if (*(int **)(param_1[1] + 0xc) != (int *)0x0) {
            cVar4 = (**(code **)(**(int **)(param_1[1] + 0xc) + 0x168))();
            if (cVar4 != '\0') {
              iVar5 = (**(code **)(*param_1 + 0x4c))();
              if (iVar5 != 0) {
                (**(code **)(*param_1 + 0x4c))();
                iVar5 = FUN_113ef9a0();
                if (iVar5 != 0) {
                  (**(code **)(*param_1 + 0x4c))(param_3);
                  FUN_113ef9a0();
                  uVar8 = FUN_1157f370();
                  *(undefined4 *)(param_2 + 4) = uVar8;
                }
              }
            }
          }
          FUN_11a89daa();
          return;
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_11583140 @ 11583140  size=110 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

undefined4 FUN_11583140(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_11679c30();
  if (iVar2 != 0) {
    iVar2 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
    if (((param_1 != -1) &&
        (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
       ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
        (param_1 < *(int *)(iVar2 + 0x24))))) {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         (iVar2 = *(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
        uVar3 = FUN_1169ea20(*(undefined4 *)(iVar2 + 0x24));
        return uVar3;
      }
    }
  }
  return 0;
}



/* ===== FUN_11583f10 @ 11583f10  size=136 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

undefined4 __thiscall FUN_11583f10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if (((param_3 != -1) &&
      (((param_3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)))) &&
     ((iVar3 = param_3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar1) * 4), iVar2 != 0)) {
      FUN_11566bd0(*(undefined4 *)(iVar2 + 100));
      (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(undefined4 *)(param_2 + 0x28),param_3);
      uVar4 = FUN_115871c0(param_3);
      return uVar4;
    }
  }
  return 0x7598;
}



/* ===== FUN_11584070 @ 11584070  size=178 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

int FUN_11584070(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if (((param_2 != -1) &&
      (((param_2 != 0 || (*(int *)(iVar1 + 0x30) == 0)) &&
       (iVar3 = *(int *)(iVar1 + 0x28), iVar3 != 0)))) &&
     ((iVar2 = param_2 - *(int *)(iVar1 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(iVar1 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + (iVar2 / iVar3) * 4);
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + (iVar2 % iVar3) * 4), iVar1 != 0)) {
      iVar3 = FUN_115877f0(*(undefined4 *)(iVar1 + 0x58),param_3);
      if (0 < iVar3) {
        FUN_11583f10(param_1,iVar3);
      }
      FUN_11568140(*(undefined4 *)(iVar1 + 100));
      iVar1 = FUN_11587270(param_2,param_3);
      if (iVar1 == 0) {
        FUN_11588c60(param_2);
      }
      return iVar1;
    }
  }
  return 0x7598;
}



/* ===== FUN_11584d90 @ 11584d90  size=93 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

uint FUN_11584d90(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if (((param_1 != 0xffffffff) &&
      (((param_1 != 0 || (*(int *)(iVar1 + 0x30) == 0)) && (*(int *)(iVar1 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar1 + 0x30), -1 < (int)param_1 &&
      ((int)param_1 < *(int *)(iVar1 + 0x24))))) {
    iVar2 = (int)param_1 % *(int *)(iVar1 + 0x28);
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + ((int)param_1 / *(int *)(iVar1 + 0x28)) * 4);
    param_1 = 0;
    if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + iVar2 * 4), param_1 = 0, iVar1 != 0)) {
      return CONCAT31((int3)((uint)iVar1 >> 8),5 < *(int *)(iVar1 + 0x58));
    }
  }
  return param_1 & 0xffffff00;
}



/* ===== FUN_11584f30 @ 11584f30  size=384 ===== */
// calls: CInfoManager::GetByName, CPetSkillInfo::HasEqualOrHigherLevelInList, CPetSkillInfo::CollectSkillIdsByCategory
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

int FUN_11584f30(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_1158d040(param_1,param_2);
  if (iVar2 == 0) {
    return 0x7597;
  }
  iVar2 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if ((param_3 != -1) &&
     ((((param_3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar4 = *(int *)(iVar2 + 0x28), iVar4 != 0)) &&
      ((iVar3 = param_3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
     ) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar4) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar4) * 4), iVar2 != 0)) {
      cVar1 = FUN_11588430(param_3);
      if ((cVar1 != '\0') ||
         (cVar1 = CPetSkillInfo__HasEqualOrHigherLevelInList(param_3), cVar1 != '\0')) {
        return 0x75d0;
      }
      local_10 = FUN_11586df0(iVar2);
      if (local_10 != 0) {
        return local_10;
      }
      if (*(int *)(iVar2 + 0x14) < 2) {
        return 0;
      }
      local_c = local_10;
      local_8 = local_10;
      CPetSkillInfo__CollectSkillIdsByCategory(*(undefined4 *)(iVar2 + 0x58),&local_10);
      uVar5 = 0;
      if (local_c - local_10 >> 2 != 0) {
        do {
          iVar4 = FUN_1050ef40(*(undefined4 *)(local_10 + uVar5 * 4));
          if (iVar4 == 0) {
            iVar2 = 0x7598;
            goto LAB_11585065;
          }
          if ((*(int *)(iVar2 + 0x24) == *(int *)(iVar4 + 0x24)) &&
             (*(int *)(iVar2 + 0x14) == *(int *)(iVar4 + 0x14) + 1)) {
            if (local_10 == 0) {
              return 0;
            }
            FUN_10c3d5d0(local_10);
            return 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)(local_c - local_10 >> 2));
      }
      iVar2 = 0x75c3;
LAB_11585065:
      if (local_10 != 0) {
        FUN_10c3d5d0(local_10);
      }
      return iVar2;
    }
  }
  return 0x7598;
}



/* ===== CPetFarmSkill::GetManagers @ 11585710  size=146 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CPetFarmSkill::GetManagers"

/* [RE-AUTO c3]
   id: CPetFarmSkill::GetManagers
   strings:
     ""CPetFarmSkill::GetManagers"" */

undefined * CPetFarmSkill__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d2e13c;
  if (param_3 == 0) {
    if ((DAT_122df244 & 1) == 0) {
      DAT_122df244 = DAT_122df244 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CPetFarmSkill::GetManagers");
      FUN_11a8911f(&LAB_11ca3010);
    }
    if ((undefined *)*DAT_122df228 != (undefined *)0x0) {
      return (undefined *)*DAT_122df228;
    }
  }
  puVar1 = (undefined *)CInfoManager__FindByName(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_122df290 & 1) == 0) {
      DAT_122df290 = DAT_122df290 | 1;
      FUN_11585f80();
      FUN_11a8911f(&LAB_11ca2f50);
    }
    puVar1 = &DAT_122df258;
  }
  return puVar1;
}



/* ===== FUN_115871c0 @ 115871c0  size=168 ===== */
// calls: CInfoManager::GetByName, memmove
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   calls: memmove
   strings:
     ""CPetSkillInfo"" */

undefined4 __thiscall FUN_115871c0(int param_1,int param_2)

{
  int *_Src;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *_Dst;
  
  iVar3 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)) &&
      ((iVar4 = param_2 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))))
     ) {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + (iVar4 % *(int *)(iVar3 + 0x28)) * 4), iVar3 != 0)
       ) {
      FUN_11589550(iVar3);
      _Dst = *(int **)(param_1 + 4);
      piVar2 = *(int **)(param_1 + 8);
      while( true ) {
        if (_Dst == piVar2) {
          return 0x75d8;
        }
        if (*_Dst == param_2) break;
        _Dst = _Dst + 3;
      }
      _Src = _Dst + 3;
      if ((_Src != piVar2) && ((int)piVar2 - (int)_Src != 0)) {
        memmove(_Dst,_Src,(int)piVar2 - (int)_Src);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0xc;
      return 0;
    }
  }
  return 0x7598;
}



/* ===== FUN_11587270 @ 11587270  size=343 ===== */
// calls: CInfoManager::GetByName, CPetSkillInfo::CountActiveSkillsInList
// strings:
//   "CPetSkillInfo"
//   "CPetSkill_EquipOn"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo""
     ""CPetSkill_EquipOn"" */

undefined4 __thiscall FUN_11587270(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar2 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if ((param_2 == -1) ||
     ((((param_2 == 0 && (*(int *)(iVar2 + 0x30) != 0)) ||
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 == 0)) ||
      ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), iVar3 < 0 || (*(int *)(iVar2 + 0x24) <= iVar3)))))
     ) {
    return 0x7598;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
  if (iVar2 == 0) {
    return 0x7598;
  }
  iVar2 = *(int *)(iVar2 + (iVar3 % iVar1) * 4);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x54) == '\x01') {
      CPetSkillInfo__CountActiveSkillsInList();
      iVar1 = *(int *)(*param_1 + 0x20);
      if ((*(int *)(iVar1 + 0x48) < 1) ||
         (iVar3 = CPetSkillInfo__CountActiveSkillsInList(), *(int *)(iVar1 + 0x48) <= iVar3)) {
        return 0x7611;
      }
    }
    local_8 = *(int *)(iVar2 + 0x58);
    if (5 < local_8) {
      piVar4 = (int *)param_1[1];
      while( true ) {
        if (piVar4 == (int *)param_1[2]) {
          local_c = param_3;
          local_10 = param_2;
          FUN_1158cba0(&local_10);
          if (0 < *(int *)(iVar2 + 0x94)) {
            FUN_1158ac80(*(undefined4 *)(iVar2 + 0x24));
          }
          FUN_11589640(iVar2);
          return 0;
        }
        if (*piVar4 == param_2) break;
        piVar4 = piVar4 + 3;
      }
      return 0x75d0;
    }
    if (DAT_11dfa7d8 == -1) {
      DAT_11dfa7d8 = 10;
    }
    else if (DAT_11dfa7d8 < 1) {
      return 0x760c;
    }
    DAT_11dfa7d8 = DAT_11dfa7d8 + -1;
    FUN_100b3cd0("CPetSkill_EquipOn");
    return 0x760c;
  }
  return 0x7598;
}



/* ===== CPetFarmSkill::GetManagers_115873d0 @ 115873d0  size=462 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton, CInfoManager::FindByName
// strings:
//   "CPetFarmSkill::GetManagers"
//   "CPetFarmSkill"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPetFarmSkill::GetManagers
   strings:
     ""CPetFarmSkill::GetManagers""
     ""CPetFarmSkill"" */

undefined4 __thiscall CPetFarmSkill__GetManagers_115873d0(int *param_1,undefined **param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = param_2;
  if (*(int *)(*(int *)(*param_1 + 0x1c) + 0x1c) == 1) {
    piVar6 = (int *)param_1[1];
    if (piVar6 != (int *)param_1[2]) {
      do {
        iVar5 = *piVar6;
        param_2 = &PTR_FUN_11d2e13c;
        if ((DAT_122df244 & 1) == 0) {
          DAT_122df244 = DAT_122df244 | 1;
          StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CPetFarmSkill::GetManagers");
          FUN_11a8911f();
        }
        puVar4 = (undefined *)*DAT_122df228;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)CInfoManager__FindByName(&param_2,"CPetFarmSkill",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_122df290 & 1) == 0) {
            DAT_122df290 = DAT_122df290 | 1;
            FUN_11585f80();
            FUN_11a8911f(&LAB_11ca2f50);
          }
          puVar4 = &DAT_122df258;
        }
        param_2 = &PTR_FUN_11da54a8;
        if ((iVar5 != -1) &&
           ((((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) && (*(int *)(puVar4 + 0x28) != 0)) &&
            ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
             (iVar5 < *(int *)(puVar4 + 0x24))))))) {
          iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / *(int *)(puVar4 + 0x28)) * 4);
          if ((iVar1 != 0) &&
             ((iVar5 = *(int *)(iVar1 + (iVar5 % *(int *)(puVar4 + 0x28)) * 4), iVar5 != 0 &&
              (cVar3 = FUN_1158ad60(*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5],
                                    puVar2[6],puVar2[7],*(undefined8 *)(puVar2 + 8),iVar5),
              cVar3 != '\0')))) {
            puVar2[2] = puVar2[2] + *(int *)(iVar5 + 0x1c);
            puVar2[3] = ((*(int *)(iVar5 + 0x20) + 100) / 100) * puVar2[3];
            puVar2[4] = ((100 - *(int *)(iVar5 + 0x24)) / 100) * puVar2[4];
            puVar2[5] = puVar2[5] - *(int *)(iVar5 + 0x28);
            puVar2[7] = ((*(int *)(iVar5 + 0x2c) + 100) / 100) * puVar2[7];
            puVar2[6] = puVar2[6] + *(int *)(iVar5 + 0x30);
            _DAT_122df248 = _DAT_122df248 + 1;
          }
        }
        piVar6 = piVar6 + 3;
      } while (piVar6 != (int *)param_1[2]);
    }
    return 0;
  }
  return 0x759a;
}



/* ===== CPetFarmSkill::GetManagers_11587970 @ 11587970  size=72 ===== */
// calls: StcMbrNameSvr_CInfoManager::RegisterAndGetSingleton
// strings:
//   "CPetFarmSkill::GetManagers"

/* [RE-AUTO c3]
   id: CPetFarmSkill::GetManagers
   strings:
     ""CPetFarmSkill::GetManagers"" */

undefined4 CPetFarmSkill__GetManagers_11587970(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_122df244 & 1) == 0) {
      DAT_122df244 = DAT_122df244 | 1;
      StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CPetFarmSkill::GetManagers");
      FUN_11a8911f(&LAB_11ca3010);
    }
    return *DAT_122df228;
  }
  return 0;
}



/* ===== FUN_11587f60 @ 11587f60  size=78 ===== */
// calls: CPetFarmSkill::GetManagers
// strings:
//   "CPetFarmSkill"

/* [RE-AUTO c0]
   calls: CPetFarmSkill::GetManagers
   strings:
     ""CPetFarmSkill"" */

undefined4 FUN_11587f60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CPetFarmSkill__GetManagers(0,"CPetFarmSkill",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11587fb0 @ 11587fb0  size=52 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

undefined4 FUN_11587fb0(int param_1)

{
  int iVar1;
  
  iVar1 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11587ff0 @ 11587ff0  size=154 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

void __thiscall FUN_11587ff0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_4;
  puVar2 = param_3;
  *param_3 = 0;
  *param_4 = 0;
  iVar3 = CInfoManager__GetByName(0,"CPetSkillInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)) &&
      ((param_2 = param_2 - *(int *)(iVar3 + 0x30), -1 < param_2 &&
       (param_2 < *(int *)(iVar3 + 0x24))))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (param_2 / iVar1) * 4);
    if ((iVar3 != 0) &&
       ((iVar3 = *(int *)(iVar3 + (param_2 % iVar1) * 4), iVar3 != 0 &&
        (*(int *)(iVar3 + 0x94) != 0)))) {
      *piVar4 = *(int *)(iVar3 + 0x94);
      piVar4 = (int *)FUN_107e00f0(&param_3,iVar3 + 0x24);
      if (*piVar4 != param_1 + 0x1c) {
        *puVar2 = *(undefined4 *)(*piVar4 + 0x14);
      }
    }
  }
  return;
}



/* ===== FUN_11588660 @ 11588660  size=142 ===== */
// calls: CInfoManager::GetByName
// strings:
//   "CPetSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CPetSkillInfo"" */

uint __thiscall FUN_11588660(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  do {
    if (piVar3 == *(int **)(param_1 + 8)) {
LAB_1158867f:
      return (uint)piVar3 & 0xffffff00;
    }
    if (*piVar3 == param_2) {
      piVar3 = (int *)CInfoManager__GetByName(0,"CPetSkillInfo",0);
      if (((param_2 != -1) && (((param_2 != 0 || (piVar3[0xc] == 0)) && (piVar3[10] != 0)))) &&
         ((param_2 = param_2 - piVar3[0xc], -1 < param_2 && (param_2 < piVar3[9])))) {
        piVar1 = piVar3 + 10;
        iVar2 = *(int *)(piVar3[8] + (param_2 / *piVar1) * 4);
        piVar3 = (int *)0x0;
        if (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + (param_2 % *piVar1) * 4);
          piVar3 = (int *)0x0;
          if (iVar2 != 0) {
            if (*(int *)(iVar2 + 0x94) == 0) {
              return CONCAT31((int3)((uint)iVar2 >> 8),1);
            }
            uVar4 = FUN_1158add0(iVar2);
            return uVar4;
          }
        }
      }
      goto LAB_1158867f;
    }
    piVar3 = piVar3 + 3;
  } while( true );
}



/* ===== FUN_115af1a0 @ 115af1a0  size=271 ===== */
// calls: sprintf
// strings:
//   "BuffArea%d"

/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""BuffArea%d"" */

void __thiscall
FUN_115af1a0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,char *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 8))
                              (*(undefined4 *)(param_1 + 0xc),5,param_6,0xffffffff);
    if (piVar2 != (int *)0x0) {
      if (param_2 == (char *)0x0) {
        sprintf(local_6c,"BuffArea%d",piVar2[1]);
        param_2 = local_6c;
      }
      if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
        piVar2[0x38] = 4;
        (**(code **)(*piVar2 + 0xac))(param_2);
        pcVar1 = param_5;
        do {
          pcVar3 = pcVar1;
          pcVar1 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        FUN_100d83d0(param_5,pcVar3);
        FUN_11414fc0(piVar2,param_3);
        FUN_11414fe0(piVar2,param_4);
        if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
          FUN_11414fa0(piVar2,param_2);
        }
      }
      (**(code **)(*piVar2 + 0xcc))(param_7,param_8);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(piVar2);
      FUN_11a89daa();
      return;
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_115b7cf0 @ 115b7cf0  size=284 ===== */
// calls: ComputeSuitSkillLevel, memmove
// strings:
//   "CEquipPassiveSkillGroupInfo"

/* [RE-AUTO c0]
   calls: memmove
   strings:
     ""CEquipPassiveSkillGroupInfo"" */

void __thiscall FUN_115b7cf0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  int *piVar4;
  int local_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int local_8;
  
  iVar2 = FUN_1051c290(0,"CEquipPassiveSkillGroupInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)) &&
      ((iVar3 = param_2 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
     ) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar3 % iVar1) * 4) != 0)) {
      iStack_14 = ComputeSuitSkillLevel(param_3);
      local_8 = param_4;
      iStack_c = param_5;
      piVar4 = *(int **)(param_1 + 0x48);
      uStack_10 = uStack_10 & 0xffffff00;
      local_18 = param_2;
      for (; piVar4 != *(int **)(param_1 + 0x4c); piVar4 = piVar4 + 5) {
        if (*piVar4 == param_2) {
          if (*(int *)(iStack_14 + 0x24) < *(int *)(piVar4[1] + 0x24)) {
            return;
          }
          _Src = piVar4 + 5;
          if ((_Src != *(int **)(param_1 + 0x4c)) &&
             (_Size = (int)*(int **)(param_1 + 0x4c) - (int)_Src, _Size != 0)) {
            memmove(piVar4,_Src,_Size);
          }
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x14;
          break;
        }
      }
      piVar4 = *(int **)(param_1 + 0x4c);
      if (piVar4 != *(int **)(param_1 + 0x50)) {
        if (piVar4 != (int *)0x0) {
          *piVar4 = local_18;
          piVar4[1] = iStack_14;
          piVar4[2] = uStack_10;
          piVar4[3] = iStack_c;
          piVar4[4] = param_4;
        }
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x14;
        return;
      }
      FUN_11303f30(piVar4,&local_18,(int)&param_4 + 3,1,1);
    }
  }
  return;
}



/* ===== CRageSkillSystem::CRageSkillSystem @ 115bc720  size=568 ===== */
// strings:
//   "CRageInfo"
//   "CRageSkillSystem::CRageSkillSystem"

/* [RE-AUTO c3]
   id: CRageSkillSystem::CRageSkillSystem
   strings:
     ""CRageInfo""
     ""CRageSkillSystem::CRageSkillSystem"" */

undefined4 * __thiscall
CRageSkillSystem__CRageSkillSystem(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined1 local_1c [12];
  undefined **local_10;
  undefined8 local_c;
  
  *param_1 = &PTR_FUN_11d30630;
  param_1[1] = param_4;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_100e6e50(param_2[7]);
  uVar3 = (**(code **)(*param_2 + 0x17c))();
  param_1[0xb] = uVar3;
  puVar1 = param_1 + 0xc;
  *puVar1 = puVar1;
  param_1[0xd] = puVar1;
  local_c = 0.0;
  param_1[0xe] = 0xffffffff;
  iVar4 = FUN_107d4770(0,"CRageInfo",0);
  if ((param_3 != -1) &&
     ((((param_3 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar2 = *(int *)(iVar4 + 0x28), iVar2 != 0)) &&
      ((param_3 = param_3 - *(int *)(iVar4 + 0x30), -1 < param_3 &&
       (param_3 < *(int *)(iVar4 + 0x24))))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (param_3 / iVar2) * 4);
    if (iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + (param_3 % iVar2) * 4);
      goto LAB_115bc7d2;
    }
  }
  iVar4 = 0;
LAB_115bc7d2:
  param_1[4] = iVar4;
  if (iVar4 != 0) {
    uVar3 = FUN_11719490();
    param_1[3] = uVar3;
    iVar4 = (**(code **)(*(int *)param_1[2] + 0x4fc))();
    if (iVar4 != 0) {
      fVar5 = (float10)FUN_117193e0();
      local_c = (double)fVar5;
      if (DAT_11de98f8 < local_c) {
        local_10 = &PTR_FUN_11d30658;
        local_c = (double)CONCAT44(param_1,FUN_115bcc40);
        FUN_100e6f40(local_1c,0xc25,0xffffffff,0xffffffff,&local_10,0xffffffff,1);
        FUN_1026aa70(local_1c);
      }
      fVar5 = (float10)FUN_117193f0();
      local_c = (double)fVar5;
      if (DAT_11de98f8 < local_c) {
        local_10 = &PTR_FUN_11d30658;
        local_c = (double)CONCAT44(param_1,FUN_115bccc0);
        FUN_100e6f40(local_1c,0x42b,0xffffffff,0xffffffff,&local_10,0xffffffff,1);
        FUN_1026aa70(local_1c);
      }
      fVar5 = (float10)FUN_117194a0();
      local_c = (double)fVar5;
      if ((DAT_11de98f8 < local_c) && (param_1[0xb] != 0)) {
        uVar3 = FUN_100ea610("CRageSkillSystem::CRageSkillSystem",1000,0,param_1,FUN_115bceb0,0);
        param_1[0xe] = uVar3;
      }
      fVar5 = (float10)FUN_117194c0();
      local_c = (double)fVar5;
      if ((DAT_11de98f8 < local_c) ||
         (fVar5 = (float10)FUN_11719470(), DAT_11de98f8 < (double)fVar5)) {
        local_10 = &PTR_FUN_11d30658;
        local_c = (double)CONCAT44(param_1,FUN_115bcd60);
        FUN_100e6f40(local_1c,0x42a,0xffffffff,0xffffffff,&local_10,0xffffffff,1);
        FUN_1026aa70(local_1c);
      }
    }
  }
  return param_1;
}



/* ===== FUN_115d60b0 @ 115d60b0  size=211 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void FUN_115d60b0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_34;
  undefined1 local_30 [40];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if ((param_1 != -1) &&
     ((((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
       (param_1 < *(int *)(iVar2 + 0x24))))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (iVar2 = *(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4), iVar2 != 0)) {
      if (*(int *)(iVar2 + 0xe8) == 1) {
        FUN_11a89daa();
        return;
      }
      local_34 = 10;
      FUN_116a72b0(&local_34,local_30);
      if ((local_34 == 0) && (*(int *)(iVar2 + 0xf0) == 0)) {
        FUN_11a89daa();
        return;
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_115d6540 @ 115d6540  size=207 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void FUN_115d6540(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_19c;
  int local_198 [100];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if ((param_1 != -1) &&
     ((((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)) &&
      ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
       (param_1 < *(int *)(iVar2 + 0x24))))))) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / iVar1) * 4);
    if ((iVar2 != 0) &&
       ((iVar2 = *(int *)(iVar2 + (param_1 % iVar1) * 4), iVar2 != 0 &&
        (*(int *)(iVar2 + 0xe8) != 1)))) {
      local_19c = 100;
      FUN_116a7380(&local_19c,local_198);
      iVar2 = 0;
      if (0 < local_19c) {
        do {
          FUN_115d66b0(local_198[iVar2] + 0x4c,param_2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_19c);
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_115e3e20 @ 115e3e20  size=214 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

undefined4 __thiscall FUN_115e3e20(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar3 = FUN_10500130(0,"CBuffInfo",0);
  if ((iVar5 != -1) &&
     ((((iVar5 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)) &&
      ((iVar5 = iVar5 - *(int *)(iVar3 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar3 + 0x24)))))))
  {
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar5 / *(int *)(iVar3 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       (((*(int *)(iVar1 + (iVar5 % *(int *)(iVar3 + 0x28)) * 4) != 0 &&
         (iVar5 = FUN_116a7300(0x42f), piVar2 = param_2, iVar5 != 0)) &&
        (iVar5 = (**(code **)(*param_2 + 0xa8))(), iVar5 == 0)))) {
      iVar5 = piVar2[0xb47];
      if (iVar5 != 0) {
        param_2 = (int *)0x3;
        iVar3 = FUN_113f95f0(0,&param_2);
        if (iVar3 != 0) {
          uVar4 = FUN_11669730();
          iVar3 = FUN_113f9970(uVar4);
          if (iVar3 != 0) {
            return 1;
          }
          *(undefined4 *)(iVar5 + 0x170) = 0x3f5;
          *(undefined4 *)(iVar5 + 0x174) = 0;
        }
      }
      return 0;
    }
  }
  return 1;
}



/* ===== FUN_115e3f00 @ 115e3f00  size=136 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

undefined4 __thiscall FUN_115e3f00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = FUN_10500130(0,"CBuffInfo",0);
  if ((iVar3 != -1) &&
     ((((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)) &&
      ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24)))))))
  {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) &&
       ((iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar3 != 0 &&
        (*(int *)(iVar3 + 0x4c) == 0x27)))) {
      (**(code **)(**(int **)(param_2 + 0x10) + 0x58))(0x27,1);
    }
  }
  (**(code **)(**(int **)(param_2 + 0x10) + 0x44))
            (0,*(undefined4 *)(param_1 + 4),0,*(undefined1 *)(param_1 + 8),0x2c);
  return 1;
}



/* ===== FUN_115e50f0 @ 115e50f0  size=200 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

bool __thiscall FUN_115e50f0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar2 = (**(code **)(*param_1 + 0xc))(param_2,param_3);
  if (cVar2 != '\0') {
    iVar4 = param_1[1];
    iVar3 = FUN_10500130(0,"CBuffInfo",0);
    if ((iVar4 != -1) &&
       ((((iVar4 != 0 || (*(int *)(iVar3 + 0x30) == 0)) && (*(int *)(iVar3 + 0x28) != 0)) &&
        ((iVar4 = iVar4 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))))
       ) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / *(int *)(iVar3 + 0x28)) * 4);
      if ((iVar1 != 0) &&
         ((iVar4 = *(int *)(iVar1 + (iVar4 % *(int *)(iVar3 + 0x28)) * 4), iVar4 != 0 &&
          (*(int *)(iVar4 + 0x424) != -1)))) {
        local_c = *(undefined4 *)(param_2 + 4);
        local_14 = 2;
        local_18 = &PTR_FUN_11cd72a0;
        local_10 = 0;
        local_8 = 0;
        iVar4 = (**(code **)(**(int **)(param_2 + 0x10) + 0x44))(0,param_1[1],&local_18,1,0x2c);
        return 0 < iVar4;
      }
    }
  }
  return false;
}



/* ===== FUN_115e9bf0 @ 115e9bf0  size=163 ===== */
// strings:
//   "CBuffInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

void __thiscall FUN_115e9bf0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar4 = **(int **)(param_2 + 0xc);
  if (iVar4 == 0) {
    return;
  }
  iVar3 = FUN_10500130(0,"CBuffInfo",0);
  if (iVar4 == -1) {
    return;
  }
  if ((iVar4 == 0) && (*(int *)(iVar3 + 0x30) != 0)) {
    return;
  }
  if (*(int *)(iVar3 + 0x28) == 0) {
    return;
  }
  iVar4 = iVar4 - *(int *)(iVar3 + 0x30);
  if (iVar4 < 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x24) <= iVar4) {
    return;
  }
  iVar1 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / *(int *)(iVar3 + 0x28)) * 4);
  if (iVar1 == 0) {
    return;
  }
  iVar4 = *(int *)(iVar1 + (iVar4 % *(int *)(iVar3 + 0x28)) * 4);
  if (iVar4 == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    if (*(int *)(iVar4 + 0x420) == 0) {
      cVar2 = FUN_116a77b0();
      break;
    }
    goto LAB_115e9d23;
  default:
    goto LAB_115e9d78;
  case 10:
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    cVar2 = *(int *)(iVar4 + 0x420) == *(int *)(param_1 + 0xc);
    break;
  case 0xb:
    cVar2 = **(int **)(param_2 + 0xc) == *(int *)(param_1 + 0xc);
    break;
  case 0xc:
    cVar2 = FUN_116a7820(*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xd:
    cVar2 = FUN_116a78d0(*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xf:
    if (*(int *)(iVar4 + 0x428) == -1) {
      return;
    }
    if (*(int *)(param_2 + 0x10) == 0) {
      return;
    }
    fVar5 = (float10)FUN_113dbde0();
    iVar4 = rand();
    cVar2 = (float)(iVar4 % 100) <= (float)fVar5;
  }
  if (cVar2 != '\0') {
LAB_115e9d23:
    uStack_1c = _DAT_11d26040;
    uStack_18 = _UNK_11d26044;
    uStack_14 = _UNK_11d26048;
    iStack_10 = _UNK_11d2604c;
    uStack_c = 0;
    uStack_8 = 0;
    FUN_1142f470(1,**(undefined4 **)(param_2 + 0xc));
    if ((int *)*param_3 != (int *)0x0) {
      (**(code **)(*(int *)*param_3 + 0x14))(&uStack_1c);
    }
    **(undefined4 **)(param_2 + 0xc) = 0;
    if (iStack_10 != 0) {
      FUN_10c3d5d0(iStack_10);
    }
  }
LAB_115e9d78:
  return;
}



/* ===== FUN_115ef4f0 @ 115ef4f0  size=206 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

undefined4 __thiscall FUN_115ef4f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = FUN_10500130(0,"CBuffInfo",0);
  if ((iVar5 == -1) ||
     ((((iVar5 == 0 && (*(int *)(iVar4 + 0x30) != 0)) || (*(int *)(iVar4 + 0x28) == 0)) ||
      ((iVar5 = iVar5 - *(int *)(iVar4 + 0x30), iVar5 < 0 || (*(int *)(iVar4 + 0x24) <= iVar5))))))
  {
    return 0xffffffff;
  }
  iVar1 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / *(int *)(iVar4 + 0x28)) * 4);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar5 = *(int *)(iVar1 + (iVar5 % *(int *)(iVar4 + 0x28)) * 4);
  if (iVar5 != 0) {
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 == 0x7dc) {
      cVar3 = *(int *)(iVar5 + 0x10) == *(int *)(param_1 + 0x10);
    }
    else if (iVar4 == 0x7dd) {
      cVar3 = FUN_116a78d0(*(undefined4 *)(param_1 + 0x10));
    }
    else {
      if (iVar4 != 0x7de) {
        return 0;
      }
      cVar3 = FUN_116a7820(*(undefined4 *)(param_1 + 0x10));
    }
    if (cVar3 != '\0') {
      piVar2 = *(int **)(param_2 + 0xc);
      if (((*piVar2 != 1) && (*piVar2 != 0)) &&
         (FUN_115e8570(piVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc)),
         *piVar2 < 1)) {
        *piVar2 = 1;
      }
    }
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_116126f0 @ 116126f0  size=293 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

int __thiscall FUN_116126f0(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_10500130(0,"CBuffInfo",0);
  piVar3 = param_3;
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar4 + 0x30) == 0)) &&
       (iVar6 = *(int *)(iVar4 + 0x28), iVar6 != 0)) &&
      ((iVar5 = param_2 - *(int *)(iVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(iVar4 + 0x24))))))
     ) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar6) * 4);
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + (iVar5 % iVar6) * 4), iVar4 != 0)) {
      uVar1 = *(uint *)(iVar4 + 0x44);
      param_1 = param_1 + 4;
      if (uVar1 < 2) {
        param_1 = param_1 + uVar1 * 0x18;
      }
      iVar4 = *(int *)(param_1 + 8);
      while (iVar4 != param_1) {
        if ((*(char *)(*(int *)(iVar4 + 0x14) + 0x3c) == '\0') &&
           (iVar6 = FUN_1141bd30(), iVar6 == param_2)) {
          puVar2 = (undefined4 *)piVar3[1];
          if (puVar2 == (undefined4 *)piVar3[2]) {
            FUN_11475c40(puVar2,(undefined4 *)(iVar4 + 0x14),(int)&param_3 + 3,1,1);
          }
          else {
            *puVar2 = *(undefined4 *)(iVar4 + 0x14);
            piVar3[1] = piVar3[1] + 4;
          }
        }
        iVar6 = *(int *)(iVar4 + 0xc);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar4 + 4);
          if (iVar4 == *(int *)(iVar6 + 0xc)) {
            do {
              iVar4 = iVar6;
              iVar6 = *(int *)(iVar4 + 4);
            } while (iVar4 == *(int *)(iVar6 + 0xc));
          }
          if (*(int *)(iVar4 + 0xc) != iVar6) {
            iVar4 = iVar6;
          }
        }
        else {
          for (iVar5 = *(int *)(iVar6 + 8); iVar4 = iVar6, iVar5 != 0; iVar5 = *(int *)(iVar5 + 8))
          {
            iVar6 = iVar5;
          }
        }
      }
      return piVar3[1] - *piVar3 >> 2;
    }
  }
  return 0;
}



/* ===== FUN_11612820 @ 11612820  size=251 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

int __thiscall FUN_11612820(int param_1,int param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_10500130(0,"CBuffInfo",0);
  if ((param_2 != -1) &&
     ((((param_2 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar5 = *(int *)(iVar3 + 0x28), iVar5 != 0)) &&
      ((iVar4 = param_2 - *(int *)(iVar3 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar3 + 0x24))))))
     ) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar4 / iVar5) * 4);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + (iVar4 % iVar5) * 4), iVar3 != 0)) {
      uVar1 = *(uint *)(iVar3 + 0x44);
      if (uVar1 < 2) {
        param_1 = param_1 + uVar1 * 0x18;
      }
      iVar3 = *(int *)(param_1 + 0xc);
      while (iVar3 != param_1 + 4) {
        iVar5 = *(int *)(iVar3 + 0x14);
        if (((*(char *)(iVar5 + 0x3c) == '\0') &&
            ((param_3 == '\0' || (cVar2 = FUN_1141bec0(), cVar2 != '\0')))) &&
           (iVar4 = FUN_1141bd30(), iVar4 == param_2)) {
          return iVar5;
        }
        iVar5 = *(int *)(iVar3 + 0xc);
        if (iVar5 == 0) {
          iVar5 = *(int *)(iVar3 + 4);
          if (iVar3 == *(int *)(iVar5 + 0xc)) {
            do {
              iVar3 = iVar5;
              iVar5 = *(int *)(iVar3 + 4);
            } while (iVar3 == *(int *)(iVar5 + 0xc));
          }
          if (*(int *)(iVar3 + 0xc) != iVar5) {
            iVar3 = iVar5;
          }
        }
        else {
          for (iVar4 = *(int *)(iVar5 + 8); iVar3 = iVar5, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8))
          {
            iVar5 = iVar4;
          }
        }
      }
    }
  }
  return 0;
}



/* ===== CBuffGarbageSystem::SetDel @ 116139e0  size=74 ===== */
// strings:
//   "CBuffGarbageSystem::SetDel"

/* [RE-AUTO c3]
   id: CBuffGarbageSystem::SetDel
   strings:
     ""CBuffGarbageSystem::SetDel"" */

void __thiscall CBuffGarbageSystem__SetDel(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((*(char *)(param_2 + 0x3c) == '\0') &&
      (*(undefined1 *)(param_2 + 0x3c) = 1, *(int *)(param_1 + 4) == -1)) &&
     (*(char *)(param_1 + 8) == '\0')) {
    uVar1 = FUN_100ea610("CBuffGarbageSystem::SetDel",1,1,param_1,FUN_11613a30,0);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}



/* ===== SkillSysChecker::_RegisterTimer @ 11615040  size=77 ===== */
// strings:
//   "SkillSysChecker::_RegisterTimer"

/* [RE-AUTO c3]
   id: SkillSysChecker::_RegisterTimer
   strings:
     ""SkillSysChecker::_RegisterTimer"" */

undefined4 __fastcall SkillSysChecker___RegisterTimer(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1141bd30();
  FUN_116151a0(uVar1);
  if (*(int *)(param_1 + 0x4c) == -1) {
    uVar1 = FUN_100ea610("SkillSysChecker::_RegisterTimer",1000,0,param_1,FUN_11615090,0);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
  }
  return 0;
}



/* ===== FUN_116151a0 @ 116151a0  size=189 ===== */
// strings:
//   "BuffCheckDeviation"

/* [RE-AUTO c0]
   strings:
     ""BuffCheckDeviation"" */

void __thiscall FUN_116151a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [16];
  undefined1 *local_38;
  undefined1 *local_34;
  uint *puStack_30;
  int local_20 [2];
  longlong local_18;
  undefined1 local_10 [8];
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 0x38);
  iVar1 = param_1 + 0x34;
  iVar4 = iVar1;
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 + 0x10) < param_2) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
        iVar4 = iVar2;
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    if (iVar4 == iVar1) goto LAB_116151e1;
    if (param_2 < *(int *)(iVar4 + 0x10)) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 != iVar1) {
    return;
  }
LAB_116151e1:
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0) {
    puStack_30 = &local_8;
    local_8 = 1000;
    local_38 = auStack_48;
    local_34 = auStack_48;
    FUN_100b62c0("BuffCheckDeviation","");
    FUN_11479100();
    FUN_1147cea0();
    local_18 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 0xb4))();
    local_18 = local_18 + (int)local_8;
    local_20[0] = param_2;
    FUN_11615550(local_10,local_20);
  }
  return;
}



/* ===== SkillSysChecker::_RegisterTimer_116152a0 @ 116152a0  size=53 ===== */
// strings:
//   "SkillSysChecker::_RegisterTimer"

/* [RE-AUTO c3]
   id: SkillSysChecker::_RegisterTimer
   strings:
     ""SkillSysChecker::_RegisterTimer"" */

undefined4 __fastcall SkillSysChecker___RegisterTimer_116152a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4c) == -1) {
    uVar1 = FUN_100ea610("SkillSysChecker::_RegisterTimer",1000,0,param_1,FUN_11615090,0);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}



/* ===== CSkillSystem::_CheckRage @ 11635240  size=295 ===== */
// calls: CLogicPlayer::IsRagePowerEnough
// strings:
//   "CSkillSystem::_CheckRage skill[%d] rage not enough"
//   "CSkillSystem::_CheckRage skill[%d] is angryskill but no ragecost"

/* [RE-AUTO c3]
   id: CSkillSystem::_CheckRage
   calls: CLogicPlayer::IsRagePowerEnough
   strings:
     ""CSkillSystem::_CheckRage skill[%d] rage not enough""
     ""CSkillSystem::_CheckRage skill[%d] is angryskill but no ragecost"" */

void CSkillSystem___CheckRage(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_70 [8];
  undefined1 local_68 [20];
  undefined1 *local_54;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  local_48[0] = 0;
  cVar2 = FUN_117194d0(uVar1);
  if (cVar2 != '\x01') {
    FUN_11a89daa();
    return;
  }
  iVar3 = FUN_11719420(*(undefined4 *)(param_1 + 0x14));
  if (iVar3 != 0) {
    cVar2 = CLogicPlayer__IsRagePowerEnough(uVar1,iVar3);
    if (cVar2 == '\x01') {
      piVar4 = (int *)FUN_11348ac0(local_70,1);
      iVar3 = *piVar4;
      if ((local_54 != local_68) && (local_54 != (undefined1 *)0x0)) {
        FUN_10c3d5d0(local_54);
      }
      if (iVar3 == 1) {
        FUN_11a89daa();
        return;
      }
    }
    else {
      *param_3 = 2;
      FUN_1083ded0(local_48,"CSkillSystem::_CheckRage skill[%d] rage not enough",uVar1);
      FUN_1139c980(local_48);
    }
    FUN_11a89daa();
    return;
  }
  FUN_1083ded0(local_48,"CSkillSystem::_CheckRage skill[%d] is angryskill but no ragecost",uVar1);
  FUN_1139c980(local_48);
  FUN_11a89daa();
  return;
}



/* ===== FUN_11638ac0 @ 11638ac0  size=158 ===== */
// calls: memmove, CEquipRandPassiveSkillGroupInfo::GetInfoManager, CEquipRandPassiveSkillSubGroupInfo::RollRandomPassiveSkills_Variant, CEquipRandPassiveSkillSubGroupInfo::RollRandomPassiveSkills
// strings:
//   "CEquipRandPassiveSkillGroupInfo"

/* WARNING: Removing unreachable block (ram,0x11638ad7) */
/* [RE-AUTO c0]
   calls: memmove, CEquipRandPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillGroupInfo"" */

void FUN_11638ac0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  iVar3 = *(int *)(param_1 + 0x20c);
  iVar2 = CEquipRandPassiveSkillGroupInfo__GetInfoManager(0,"CEquipRandPassiveSkillGroupInfo",0);
  if (((iVar3 != -1) &&
      (((iVar3 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((iVar3 = iVar3 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + (iVar3 % *(int *)(iVar2 + 0x28)) * 4), iVar3 != 0)
       ) {
      if (*(int *)(iVar3 + 0x3c) == 1) {
        CEquipRandPassiveSkillSubGroupInfo__RollRandomPassiveSkills(iVar3,param_2);
      }
      else if (*(int *)(iVar3 + 0x3c) == 2) {
        CEquipRandPassiveSkillSubGroupInfo__RollRandomPassiveSkills_Variant(iVar3,param_2);
        return;
      }
    }
  }
  return;
}



/* ===== FUN_11638b60 @ 11638b60  size=100 ===== */
// calls: CEquipRandPassiveSkillActivateGroupInfo::GetInfoMgrByName
// strings:
//   "CEquipRandPassiveSkillActivateGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipRandPassiveSkillActivateGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateGroupInfo"" */

undefined4 FUN_11638b60(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = CEquipRandPassiveSkillActivateGroupInfo__GetInfoMgrByName
                    (0,"CEquipRandPassiveSkillActivateGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4) != 0)) {
      puVar3 = (undefined4 *)FUN_11866860();
      if (puVar3 != (undefined4 *)0x0) {
        *param_2 = *puVar3;
        return 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_11638bd0 @ 11638bd0  size=193 ===== */
// calls: CEquipRandPassiveSkillSubGroupInfo::GetInfoMgr
// strings:
//   "CEquipRandPassiveSkillSubGroupInfo"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: CEquipRandPassiveSkillSubGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillSubGroupInfo"" */

int FUN_11638bd0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = CEquipRandPassiveSkillSubGroupInfo__GetInfoMgr(0,"CEquipRandPassiveSkillSubGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar3 + 0x28), iVar1 != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar3 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar3 + 0x24))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (param_1 / iVar1) * 4);
    if ((iVar3 != 0) && (*(int *)(iVar3 + (param_1 % iVar1) * 4) != 0)) {
      iVar3 = FUN_11865190(param_2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar3 + 0x18);
      iVar2 = *(int *)(iVar3 + 0x14);
      FUN_100ee470();
      iVar4 = FUN_100ee450();
      param_3 = param_3 + (iVar2 - (int)((double)iVar4 * _DAT_11de9a60 *
                                        (double)((iVar1 - iVar2) + 1)));
      if (*(int *)(iVar3 + 0x20) < param_3) {
        param_3 = *(int *)(iVar3 + 0x20);
      }
      if (param_3 < *(int *)(iVar3 + 0x1c)) {
        param_3 = *(int *)(iVar3 + 0x1c);
      }
      return param_3;
    }
  }
  return 0;
}



/* ===== FUN_11639a40 @ 11639a40  size=78 ===== */
// calls: CEquipRandPassiveSkillActivateGroupInfo::GetInfoMgrByName
// strings:
//   "CEquipRandPassiveSkillActivateGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipRandPassiveSkillActivateGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillActivateGroupInfo"" */

undefined4 FUN_11639a40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipRandPassiveSkillActivateGroupInfo__GetInfoMgrByName
                    (0,"CEquipRandPassiveSkillActivateGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11639a90 @ 11639a90  size=78 ===== */
// calls: CEquipRandPassiveSkillGroupInfo::GetInfoManager
// strings:
//   "CEquipRandPassiveSkillGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipRandPassiveSkillGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillGroupInfo"" */

undefined4 FUN_11639a90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipRandPassiveSkillGroupInfo__GetInfoManager(0,"CEquipRandPassiveSkillGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_11639ae0 @ 11639ae0  size=78 ===== */
// calls: CEquipRandPassiveSkillSubGroupInfo::GetInfoMgr
// strings:
//   "CEquipRandPassiveSkillSubGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipRandPassiveSkillSubGroupInfo::GetManagers
   strings:
     ""CEquipRandPassiveSkillSubGroupInfo"" */

undefined4 FUN_11639ae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = CEquipRandPassiveSkillSubGroupInfo__GetInfoMgr(0,"CEquipRandPassiveSkillSubGroupInfo",0);
  if (((param_1 != -1) &&
      (((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) && (*(int *)(iVar2 + 0x28) != 0)))) &&
     ((param_1 = param_1 - *(int *)(iVar2 + 0x30), -1 < param_1 &&
      (param_1 < *(int *)(iVar2 + 0x24))))) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x20) + (param_1 / *(int *)(iVar2 + 0x28)) * 4);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + (param_1 % *(int *)(iVar2 + 0x28)) * 4);
    }
  }
  return 0;
}



/* ===== FUN_1163a930 @ 1163a930  size=293 ===== */
// calls: CEquipRandPassiveSkillGroupInfo::GetInfoManager, CEquipRandPassiveSkillSubGroupInfo::SelectSubGroupForSkill
// strings:
//   "CEquipRandPassiveSkillGroupInfo"

/* [RE-AUTO c0]
   calls: CEquipRandPassiveSkillGroupInfo::GetManagers,
   CEquipRandPassiveSkillSubGroupInfo::GetManagers_11638930
   strings:
     ""CEquipRandPassiveSkillGroupInfo"" */

undefined4 FUN_1163a930(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  iVar2 = CEquipRandPassiveSkillGroupInfo__GetInfoManager(0,"CEquipRandPassiveSkillGroupInfo",0);
  if ((param_1 != -1) &&
     ((((param_1 != 0 || (*(int *)(iVar2 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)) &&
      ((iVar3 = param_1 - *(int *)(iVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(iVar2 + 0x24))))))
     ) {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x20) + (iVar3 / iVar1) * 4);
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + (iVar3 % iVar1) * 4), iVar2 != 0)) {
      local_10 = 0;
      puVar5 = (undefined4 *)0x0;
      local_c = (undefined4 *)0x0;
      local_8 = (undefined4 *)0x0;
      if (*(int *)(iVar2 + 0x3c) == 1) {
        puVar6 = *(undefined4 **)(iVar2 + 0x2c);
        if (puVar6 != *(undefined4 **)(iVar2 + 0x30)) {
          do {
            if (local_c == puVar5) {
              FUN_10463c40(local_c,(undefined4 *)*puVar6,(int)&param_1 + 3,1,1);
              puVar5 = local_8;
            }
            else {
              *local_c = *(undefined4 *)*puVar6;
              local_c = local_c + 1;
            }
            puVar6 = puVar6 + 1;
          } while (puVar6 != *(undefined4 **)(iVar2 + 0x30));
        }
      }
      else {
        if ((*(int *)(iVar2 + 0x3c) != 2) || (iVar2 = FUN_11868050(param_2), iVar2 == 0)) {
          return 0;
        }
        FUN_116367f0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),(int)&param_1 + 3);
      }
      iVar2 = local_10;
      uVar4 = CEquipRandPassiveSkillSubGroupInfo__SelectSubGroupForSkill(param_3,param_4,&local_10);
      if (iVar2 != 0) {
        FUN_10c3d5d0(iVar2);
      }
      return uVar4;
    }
  }
  return 0;
}



/* ===== CBuffEffectEOT::_AddTimer @ 1164a990  size=202 ===== */
// strings:
//   "CBuffEffectEOT::_AddTimer"

/* [RE-AUTO c3]
   id: CBuffEffectEOT::_AddTimer
   strings:
     ""CBuffEffectEOT::_AddTimer"" */

void __fastcall CBuffEffectEOT___AddTimer(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(int *)(param_1 + 0x14) == -1)) {
    iVar2 = FUN_100ea610("CBuffEffectEOT::_AddTimer",*(undefined4 *)(param_1 + 0x10),0,param_1,
                         FUN_1164ab00,0);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != -1) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      uVar3 = FUN_1141bc80();
      FUN_1154c9d0(uVar3);
      FUN_1154cbe0();
      cVar1 = FUN_116a77f0(*(undefined4 *)(param_1 + 8));
      if (cVar1 != '\0') {
        piVar4 = (int *)FUN_1141bc80();
        iVar2 = (**(code **)(*piVar4 + 0xa8))();
        if (iVar2 == 0) {
          piVar4 = (int *)FUN_1141bc80();
          (**(code **)(*piVar4 + 0x2ec))();
          uVar3 = FUN_1141bc80();
          FUN_1154c9d0(uVar3);
          FUN_1154cbe0();
          FUN_113599d0();
        }
      }
      if (*(int *)(param_1 + 0xc) == 1) {
        FUN_1164ab00(0,0);
      }
    }
  }
  return;
}



/* ===== CBuffEffectEOT::_AddTimer_1164aa60 @ 1164aa60  size=64 ===== */
// strings:
//   "CBuffEffectEOT::_AddTimer"

/* [RE-AUTO c3]
   id: CBuffEffectEOT::_AddTimer
   strings:
     ""CBuffEffectEOT::_AddTimer"" */

bool __fastcall CBuffEffectEOT___AddTimer_1164aa60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) != -1) {
    return false;
  }
  iVar1 = FUN_100ea610("CBuffEffectEOT::_AddTimer",*(undefined4 *)(param_1 + 0x10),0,param_1,
                       FUN_1164ab00,0);
  *(int *)(param_1 + 0x14) = iVar1;
  return iVar1 != -1;
}



/* ===== FUN_1165ffb0 @ 1165ffb0  size=257 ===== */
// strings:
//   "CEquipSuitSkillInfo"

/* [RE-AUTO c0]
   strings:
     ""CEquipSuitSkillInfo"" */

void __fastcall FUN_1165ffb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if (((param_1[5] != 0) && (iVar7 = *(int *)(param_1[5] + 0x10), iVar7 != 0)) &&
     (*(int *)(iVar7 + 0x1c) != 0)) {
    piVar6 = (int *)param_1[0xb];
    while (piVar6 != param_1 + 9) {
      iVar7 = piVar6[4];
      iVar4 = FUN_109a7b00(0,"CEquipSuitSkillInfo",0);
      if ((((iVar7 != -1) && ((iVar7 != 0 || (*(int *)(iVar4 + 0x30) == 0)))) &&
          (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
         ((iVar7 = iVar7 - *(int *)(iVar4 + 0x30), -1 < iVar7 && (iVar7 < *(int *)(iVar4 + 0x24)))))
      {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar7 / iVar1) * 4);
        if ((iVar4 != 0) &&
           ((iVar7 = *(int *)(iVar4 + (iVar7 % iVar1) * 4), iVar7 != 0 &&
            (cVar3 = FUN_11572a20(*(undefined4 *)(iVar7 + 0x18),*(undefined4 *)(iVar7 + 0x10)),
            cVar3 != '\0')))) {
          (**(code **)(*param_1 + 8))(1);
        }
      }
      piVar5 = (int *)piVar6[3];
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)piVar6[1];
        if (piVar6 == (int *)piVar5[3]) {
          do {
            piVar6 = piVar5;
            piVar5 = (int *)piVar6[1];
          } while (piVar6 == (int *)piVar5[3]);
        }
        if ((int *)piVar6[3] != piVar5) {
          piVar6 = piVar5;
        }
      }
      else {
        for (piVar2 = (int *)piVar5[2]; piVar6 = piVar5, piVar2 != (int *)0x0;
            piVar2 = (int *)piVar2[2]) {
          piVar5 = piVar2;
        }
      }
    }
  }
  return;
}



/* ===== FUN_11660630 @ 11660630  size=52 ===== */
// strings:
//   "CRageInfo"

/* [RE-AUTO c0]
   strings:
     ""CRageInfo"" */

undefined4 FUN_11660630(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_107d4770(0,"CRageInfo",0);
  if ((-1 < param_1) && (param_1 < *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x14) + param_1 * 4);
  }
  return 0;
}



/* ===== FUN_11660950 @ 11660950  size=148 ===== */
// strings:
//   "CBuffInfo"

/* [RE-AUTO c0]
   strings:
     ""CBuffInfo"" */

bool __thiscall FUN_11660950(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*param_2 == 0x1f8) || (*param_2 == 0x1f9)) {
    iVar3 = FUN_1141bd30();
    if (iVar3 != 0) {
      iVar4 = FUN_10500130(0,"CBuffInfo",0);
      if ((((iVar3 != -1) && (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) &&
          (iVar5 = iVar3 - *(int *)(iVar4 + 0x30), -1 < iVar5)) && (iVar5 < *(int *)(iVar4 + 0x24)))
      {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar5 / iVar1) * 4);
        if ((iVar4 != 0) && (*(int *)(iVar4 + (iVar5 % iVar1) * 4) != 0)) {
          uVar2 = 0;
          switch(*(int *)(param_1 + 8) + -3) {
          case 0:
          case 1:
            return iVar3 == *(int *)(param_1 + 0xc);
          case 2:
          case 3:
            uVar2 = FUN_116a78d0(*(undefined4 *)(param_1 + 0xc));
          }
          return (bool)uVar2;
        }
      }
      return false;
    }
  }
  return false;
}



/* ===== FUN_11681860 @ 11681860  size=10233 ===== */
// strings:
//   u"PoisonTol"
//   u"Poison"
//   u"PoisonAdd"
//   u"PoisonMax"
//   u"PoisonWeaken"
//   u"PoisonBuff"
//   u"PoisonDmg"
//   u"PoisonCount"
//   u"PoisonWeakenScale"
//   u"ParalysisTol"
//   u"Paralysis"
//   u"ParalysisAdd"
//   u"ParalysisMax"
//   u"ParalysisWeaken"
//   u"ParalysisBuff"
//   u"ParalysisCount"
//   u"ParalysisWeakenScale"
//   u"StunTol"
//   u"Stun"
//   u"StunAdd"

/* [RE-AUTO c0]
   strings:
     "u"PoisonTol""
     "u"Poison""
     "u"PoisonAdd""
     "u"PoisonMax""
     "u"PoisonWeaken""
     "u"PoisonBuff""
     "u"PoisonDmg""
     "u"PoisonCount""
     "u"PoisonWeakenScale""
     "u"ParalysisTol"" */

undefined4 __thiscall FUN_11681860(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  local_8 = param_1;
  if ((DAT_12389990 & 1) == 0) {
    DAT_12389990 = DAT_12389990 | 1;
    FUN_100f67b0(L"PoisonTol");
  }
  if ((DAT_12389990 & 2) == 0) {
    DAT_12389990 = DAT_12389990 | 2;
    iVar2 = FUN_100e1cb0(DAT_1238998c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389994);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389994,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x218) = iVar2;
  }
  if ((DAT_12389990 & 4) == 0) {
    DAT_12389990 = DAT_12389990 | 4;
    FUN_100f67b0(L"Poison");
  }
  if ((DAT_12389990 & 8) == 0) {
    DAT_12389990 = DAT_12389990 | 8;
    iVar2 = FUN_100e1cb0(DAT_123899a4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899a8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899a8,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x21c) = iVar2;
  }
  if ((DAT_12389990 & 0x10) == 0) {
    DAT_12389990 = DAT_12389990 | 0x10;
    FUN_100f67b0(L"PoisonAdd");
  }
  if ((DAT_12389990 & 0x20) == 0) {
    DAT_12389990 = DAT_12389990 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123899b8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899bc);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899bc,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x220) = iVar2;
  }
  if ((DAT_12389990 & 0x40) == 0) {
    DAT_12389990 = DAT_12389990 | 0x40;
    FUN_100f67b0(L"PoisonMax");
  }
  if (-1 < (char)DAT_12389990) {
    DAT_12389990 = DAT_12389990 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123899cc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899d0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x224) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899d0,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x224) = iVar2;
  }
  if ((DAT_12389990 & 0x100) == 0) {
    DAT_12389990 = DAT_12389990 | 0x100;
    FUN_100f67b0(L"PoisonWeaken");
  }
  if ((DAT_12389990 & 0x200) == 0) {
    DAT_12389990 = DAT_12389990 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_123899e0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899e4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899e4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x228) = iVar2;
  }
  if ((DAT_12389990 & 0x400) == 0) {
    DAT_12389990 = DAT_12389990 | 0x400;
    FUN_100f67b0(L"PoisonBuff");
  }
  if ((DAT_12389990 & 0x800) == 0) {
    DAT_12389990 = DAT_12389990 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_123899f4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123899f8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_123899f8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x22c) = iVar2;
  }
  if ((DAT_12389990 & 0x1000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x1000;
    FUN_100f67b0(L"PoisonDmg");
  }
  if ((DAT_12389990 & 0x2000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12389a08);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a0c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a0c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x230) = iVar2;
  }
  if ((DAT_12389990 & 0x4000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x4000;
    FUN_100f67b0(L"PoisonCount");
  }
  if ((DAT_12389990 & 0x8000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12389a1c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a20);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a20,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x234) = iVar2;
  }
  if ((DAT_12389990 & 0x10000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x10000;
    FUN_100f67b0(L"PoisonWeakenScale");
  }
  if ((DAT_12389990 & 0x20000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12389a30);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a34);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a34,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x238) = iVar2;
  }
  if ((DAT_12389990 & 0x40000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x40000;
    FUN_100f67b0(L"ParalysisTol");
  }
  if ((DAT_12389990 & 0x80000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12389a44);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a48);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a48,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x23c) = iVar2;
  }
  if ((DAT_12389990 & 0x100000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x100000;
    FUN_100f67b0(L"Paralysis");
  }
  if ((DAT_12389990 & 0x200000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12389a58);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a5c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a5c,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x240) = iVar2;
  }
  if ((DAT_12389990 & 0x400000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x400000;
    FUN_100f67b0(L"ParalysisAdd");
  }
  if ((DAT_12389990 & 0x800000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12389a6c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a70);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a70,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x244) = iVar2;
  }
  if ((DAT_12389990 & 0x1000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x1000000;
    FUN_100f67b0(L"ParalysisMax");
  }
  if ((DAT_12389990 & 0x2000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12389a80);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a84);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a84,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x248) = iVar2;
  }
  if ((DAT_12389990 & 0x4000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x4000000;
    FUN_100f67b0(L"ParalysisWeaken");
  }
  if ((DAT_12389990 & 0x8000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12389a94);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389a98);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389a98,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x24c) = iVar2;
  }
  if ((DAT_12389990 & 0x10000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x10000000;
    FUN_100f67b0(L"ParalysisBuff");
  }
  if ((DAT_12389990 & 0x20000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12389aa8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389aac);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x250) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389aac,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x250) = iVar2;
  }
  if ((DAT_12389990 & 0x40000000) == 0) {
    DAT_12389990 = DAT_12389990 | 0x40000000;
    FUN_100f67b0(L"ParalysisCount");
  }
  if (-1 < (int)DAT_12389990) {
    DAT_12389990 = DAT_12389990 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12389abc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ac0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x254) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ac0,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x254) = iVar2;
  }
  if ((DAT_12389ad4 & 1) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 1;
    FUN_100f67b0(L"ParalysisWeakenScale");
  }
  if ((DAT_12389ad4 & 2) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 2;
    iVar2 = FUN_100e1cb0(DAT_12389ad0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ad8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 600) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ad8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 600) = iVar2;
  }
  if ((DAT_12389ad4 & 4) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 4;
    FUN_100f67b0(L"StunTol");
  }
  if ((DAT_12389ad4 & 8) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 8;
    iVar2 = FUN_100e1cb0(DAT_12389ae8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389aec);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389aec,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x25c) = iVar2;
  }
  if ((DAT_12389ad4 & 0x10) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x10;
    FUN_100f67b0(L"Stun");
  }
  if ((DAT_12389ad4 & 0x20) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12389afc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b00);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b00,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x260) = iVar2;
  }
  if ((DAT_12389ad4 & 0x40) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x40;
    FUN_100f67b0(L"StunAdd");
  }
  if (-1 < (char)DAT_12389ad4) {
    DAT_12389ad4 = DAT_12389ad4 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12389b10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b14);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b14,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x264) = iVar2;
  }
  if ((DAT_12389ad4 & 0x100) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x100;
    FUN_100f67b0(L"StunMax");
  }
  if ((DAT_12389ad4 & 0x200) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12389b24);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b28);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b28,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x268) = iVar2;
  }
  if ((DAT_12389ad4 & 0x400) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x400;
    FUN_100f67b0(L"StunWeaken");
  }
  if ((DAT_12389ad4 & 0x800) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12389b38);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b3c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x26c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b3c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x26c) = iVar2;
  }
  if ((DAT_12389ad4 & 0x1000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x1000;
    FUN_100f67b0(L"StunBuff");
  }
  if ((DAT_12389ad4 & 0x2000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12389b4c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b50);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b50,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x270) = iVar2;
  }
  if ((DAT_12389ad4 & 0x4000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x4000;
    FUN_100f67b0(L"StunCount");
  }
  if ((DAT_12389ad4 & 0x8000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12389b60);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b64);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b64,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x274) = iVar2;
  }
  if ((DAT_12389ad4 & 0x10000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x10000;
    FUN_100f67b0(L"StunWeakenScale");
  }
  if ((DAT_12389ad4 & 0x20000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12389b74);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b78);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x278) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b78,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x278) = iVar2;
  }
  if ((DAT_12389ad4 & 0x40000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x40000;
    FUN_100f67b0(L"SleepTol");
  }
  if ((DAT_12389ad4 & 0x80000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12389b88);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389b8c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389b8c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x27c) = iVar2;
  }
  if ((DAT_12389ad4 & 0x100000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x100000;
    FUN_100f67b0(L"Sleep");
  }
  if ((DAT_12389ad4 & 0x200000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12389b9c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ba0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ba0,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x280) = iVar2;
  }
  if ((DAT_12389ad4 & 0x400000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x400000;
    FUN_100f67b0(L"SleepAdd");
  }
  if ((DAT_12389ad4 & 0x800000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12389bb0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389bb4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x284) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389bb4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x284) = iVar2;
  }
  if ((DAT_12389ad4 & 0x1000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x1000000;
    FUN_100f67b0(L"SleepMax");
  }
  if ((DAT_12389ad4 & 0x2000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12389bc4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389bc8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389bc8,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x288) = iVar2;
  }
  if ((DAT_12389ad4 & 0x4000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x4000000;
    FUN_100f67b0(L"SleepWeaken");
  }
  if ((DAT_12389ad4 & 0x8000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12389bd8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389bdc);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x28c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389bdc,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x28c) = iVar2;
  }
  if ((DAT_12389ad4 & 0x10000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x10000000;
    FUN_100f67b0(L"SleepBuff");
  }
  if ((DAT_12389ad4 & 0x20000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12389bec);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389bf0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389bf0,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x290) = iVar2;
  }
  if ((DAT_12389ad4 & 0x40000000) == 0) {
    DAT_12389ad4 = DAT_12389ad4 | 0x40000000;
    FUN_100f67b0(L"SleepCount");
  }
  if (-1 < (int)DAT_12389ad4) {
    DAT_12389ad4 = DAT_12389ad4 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12389c00);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c04);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c04,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x294) = iVar2;
  }
  if ((DAT_12389c18 & 1) == 0) {
    DAT_12389c18 = DAT_12389c18 | 1;
    FUN_100f67b0(L"SleepWeakenScale");
  }
  if ((DAT_12389c18 & 2) == 0) {
    DAT_12389c18 = DAT_12389c18 | 2;
    iVar2 = FUN_100e1cb0(DAT_12389c14);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c1c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x298) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c1c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x298) = iVar2;
  }
  if ((DAT_12389c18 & 4) == 0) {
    DAT_12389c18 = DAT_12389c18 | 4;
    FUN_100f67b0(L"TrapTol");
  }
  if ((DAT_12389c18 & 8) == 0) {
    DAT_12389c18 = DAT_12389c18 | 8;
    iVar2 = FUN_100e1cb0(DAT_12389c2c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c30);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x29c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c30,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x29c) = iVar2;
  }
  if ((DAT_12389c18 & 0x10) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x10;
    FUN_100f67b0(L"TrapTimeLower");
  }
  if ((DAT_12389c18 & 0x20) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12389c40);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c44);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c44,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2a0) = iVar2;
  }
  if ((DAT_12389c18 & 0x40) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x40;
    FUN_100f67b0(L"TrapCount");
  }
  if (-1 < (char)DAT_12389c18) {
    DAT_12389c18 = DAT_12389c18 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12389c54);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c58);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2a4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c58,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2a4) = iVar2;
  }
  if ((DAT_12389c18 & 0x100) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x100;
    FUN_100f67b0(L"TrapWeakenScale");
  }
  if ((DAT_12389c18 & 0x200) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12389c68);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c6c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c6c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2a8) = iVar2;
  }
  if ((DAT_12389c18 & 0x400) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x400;
    FUN_100f67b0(L"ParaTrapTol");
  }
  if ((DAT_12389c18 & 0x800) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12389c7c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c80);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2ac) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c80,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2ac) = iVar2;
  }
  if ((DAT_12389c18 & 0x1000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x1000;
    FUN_100f67b0(L"ParaTrapTimeLower");
  }
  if ((DAT_12389c18 & 0x2000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12389c90);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389c94);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389c94,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2b0) = iVar2;
  }
  if ((DAT_12389c18 & 0x4000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x4000;
    FUN_100f67b0(L"ParaTrapCount");
  }
  if ((DAT_12389c18 & 0x8000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12389ca4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ca8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ca8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2b4) = iVar2;
  }
  if ((DAT_12389c18 & 0x10000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x10000;
    FUN_100f67b0(L"ParaTrapWeakenScale");
  }
  if ((DAT_12389c18 & 0x20000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12389cb8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389cbc);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389cbc,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2b8) = iVar2;
  }
  if ((DAT_12389c18 & 0x40000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x40000;
    FUN_100f67b0(L"AdvTrapTol");
  }
  if ((DAT_12389c18 & 0x80000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12389ccc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389cd0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 700) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389cd0,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 700) = iVar2;
  }
  if ((DAT_12389c18 & 0x100000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x100000;
    FUN_100f67b0(L"AdvTrapTimeLower");
  }
  if ((DAT_12389c18 & 0x200000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12389ce0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ce4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2c0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ce4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2c0) = iVar2;
  }
  if ((DAT_12389c18 & 0x400000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x400000;
    FUN_100f67b0(L"AdvTrapCount");
  }
  if ((DAT_12389c18 & 0x800000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12389cf4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389cf8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2c4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389cf8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2c4) = iVar2;
  }
  if ((DAT_12389c18 & 0x1000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x1000000;
    FUN_100f67b0(L"AdvTrapWeakenScale");
  }
  if ((DAT_12389c18 & 0x2000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12389d08);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d0c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d0c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2c8) = iVar2;
  }
  if ((DAT_12389c18 & 0x4000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x4000000;
    FUN_100f67b0(L"FlareTol");
  }
  if ((DAT_12389c18 & 0x8000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12389d1c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d20);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d20,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2cc) = iVar2;
  }
  if ((DAT_12389c18 & 0x10000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x10000000;
    FUN_100f67b0(L"FlareTimeLower");
  }
  if ((DAT_12389c18 & 0x20000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12389d30);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d34);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d34,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2d0) = iVar2;
  }
  if ((DAT_12389c18 & 0x40000000) == 0) {
    DAT_12389c18 = DAT_12389c18 | 0x40000000;
    FUN_100f67b0(L"FlareWeakenScale");
  }
  if (-1 < (int)DAT_12389c18) {
    DAT_12389c18 = DAT_12389c18 | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12389d44);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d48);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d48,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2d8) = iVar2;
  }
  if ((DAT_12389d5c & 1) == 0) {
    DAT_12389d5c = DAT_12389d5c | 1;
    FUN_100f67b0(L"FlareCount");
  }
  if ((DAT_12389d5c & 2) == 0) {
    DAT_12389d5c = DAT_12389d5c | 2;
    iVar2 = FUN_100e1cb0(DAT_12389d58);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d60);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d60,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2d4) = iVar2;
  }
  if ((DAT_12389d5c & 4) == 0) {
    DAT_12389d5c = DAT_12389d5c | 4;
    FUN_100f67b0(L"SonicTol");
  }
  if ((DAT_12389d5c & 8) == 0) {
    DAT_12389d5c = DAT_12389d5c | 8;
    iVar2 = FUN_100e1cb0(DAT_12389d70);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d74);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d74,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2dc) = iVar2;
  }
  if ((DAT_12389d5c & 0x10) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x10;
    FUN_100f67b0(L"SonicWeakenScale");
  }
  if ((DAT_12389d5c & 0x20) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12389d84);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d88);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d88,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2e0) = iVar2;
  }
  if ((DAT_12389d5c & 0x40) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x40;
    FUN_100f67b0(L"SonicTimeLower");
  }
  if (-1 < (char)DAT_12389d5c) {
    DAT_12389d5c = DAT_12389d5c | 0x80;
    iVar2 = FUN_100e1cb0(DAT_12389d98);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389d9c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389d9c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2e4) = iVar2;
  }
  if ((DAT_12389d5c & 0x100) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x100;
    FUN_100f67b0(L"FalldownTol");
  }
  if ((DAT_12389d5c & 0x200) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x200;
    iVar2 = FUN_100e1cb0(DAT_12389dac);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389db0);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2e8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389db0,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2e8) = iVar2;
  }
  if ((DAT_12389d5c & 0x400) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x400;
    FUN_100f67b0(L"FalldownWeakenScale");
  }
  if ((DAT_12389d5c & 0x800) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x800;
    iVar2 = FUN_100e1cb0(DAT_12389dc0);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389dc4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2ec) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389dc4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2ec) = iVar2;
  }
  if ((DAT_12389d5c & 0x1000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x1000;
    FUN_100f67b0(L"FalldownTimeLower");
  }
  if ((DAT_12389d5c & 0x2000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x2000;
    iVar2 = FUN_100e1cb0(DAT_12389dd4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389dd8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389dd8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2f0) = iVar2;
  }
  if ((DAT_12389d5c & 0x4000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x4000;
    FUN_100f67b0(L"AnesthesiaCount");
  }
  if ((DAT_12389d5c & 0x8000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x8000;
    iVar2 = FUN_100e1cb0(DAT_12389de8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389dec);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2f4) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389dec,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2f4) = iVar2;
  }
  if ((DAT_12389d5c & 0x10000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x10000;
    FUN_100f67b0(L"Anesthesia");
  }
  if ((DAT_12389d5c & 0x20000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x20000;
    iVar2 = FUN_100e1cb0(DAT_12389dfc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e00);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2f8) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e00,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2f8) = iVar2;
  }
  if ((DAT_12389d5c & 0x40000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x40000;
    FUN_100f67b0(L"AnesthesiaWeakenScale");
  }
  if ((DAT_12389d5c & 0x80000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x80000;
    iVar2 = FUN_100e1cb0(DAT_12389e10);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e14);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2fc) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e14,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x2fc) = iVar2;
  }
  if ((DAT_12389d5c & 0x100000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x100000;
    FUN_100f67b0(L"DynamiteTol");
  }
  if ((DAT_12389d5c & 0x200000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x200000;
    iVar2 = FUN_100e1cb0(DAT_12389e24);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e28);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x300) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e28,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x300) = iVar2;
  }
  if ((DAT_12389d5c & 0x400000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x400000;
    FUN_100f67b0(L"Dynamite");
  }
  if ((DAT_12389d5c & 0x800000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x800000;
    iVar2 = FUN_100e1cb0(DAT_12389e38);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e3c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e3c,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x304) = iVar2;
  }
  if ((DAT_12389d5c & 0x1000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x1000000;
    FUN_100f67b0(L"DynamiteAdd");
  }
  if ((DAT_12389d5c & 0x2000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x2000000;
    iVar2 = FUN_100e1cb0(DAT_12389e4c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e50);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e50,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x308) = iVar2;
  }
  if ((DAT_12389d5c & 0x4000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x4000000;
    FUN_100f67b0(L"DynamiteMax");
  }
  if ((DAT_12389d5c & 0x8000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x8000000;
    iVar2 = FUN_100e1cb0(DAT_12389e60);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e64);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
  }
  else {
    local_8 = -1;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e64,&local_8);
    iVar2 = -1;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x30c) = iVar2;
  }
  if ((DAT_12389d5c & 0x10000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x10000000;
    FUN_100f67b0(L"DynamiteWeaken");
  }
  if ((DAT_12389d5c & 0x20000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x20000000;
    iVar2 = FUN_100e1cb0(DAT_12389e74);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e78);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e78,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x310) = iVar2;
  }
  if ((DAT_12389d5c & 0x40000000) == 0) {
    DAT_12389d5c = DAT_12389d5c | 0x40000000;
    FUN_100f67b0(L"DynamiteBuff");
  }
  if (-1 < (int)DAT_12389d5c) {
    DAT_12389d5c = DAT_12389d5c | 0x80000000;
    iVar2 = FUN_100e1cb0(DAT_12389e88);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389e8c);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x314) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389e8c,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x314) = iVar2;
  }
  if ((DAT_12389ea0 & 1) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 1;
    FUN_100f67b0(L"DynamiteDmg");
  }
  if ((DAT_12389ea0 & 2) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 2;
    iVar2 = FUN_100e1cb0(DAT_12389e9c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ea4);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ea4,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x318) = iVar2;
  }
  if ((DAT_12389ea0 & 4) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 4;
    FUN_100f67b0(L"DynamiteCount");
  }
  if ((DAT_12389ea0 & 8) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 8;
    iVar2 = FUN_100e1cb0(DAT_12389eb4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389eb8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x31c) = 0;
  }
  else {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389eb8,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 0x31c) = iVar2;
  }
  if ((DAT_12389ea0 & 0x10) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 0x10;
    FUN_100f67b0(L"DynamiteWeakenScale");
  }
  if ((DAT_12389ea0 & 0x20) == 0) {
    DAT_12389ea0 = DAT_12389ea0 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_12389ec8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_12389ecc);
  if (cVar1 != '\0') {
    local_8 = 0;
    cVar1 = (**(code **)(*param_2 + 0x2c))(&DAT_12389ecc,&local_8);
    iVar2 = 0;
    if (cVar1 != '\0') {
      iVar2 = local_8;
    }
    *(int *)(param_1 + 800) = iVar2;
    FUN_11691370();
    return 1;
  }
  *(undefined4 *)(param_1 + 800) = 0;
  FUN_11691370();
  return 1;
}



