/* ===== FUN_10eb3390 @ 10eb3390  size=433 ===== */
// strings:
//   "Skill_Name"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""Skill_Name"" */

void FUN_10eb3390(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_20 [4];
  char *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  uint local_c;
  undefined1 *local_8;
  
  if ((DAT_1203bc48 & 1) == 0) {
    DAT_1203bc48 = DAT_1203bc48 | 1;
    local_1c = "Skill_Name";
    local_18 = &DAT_11d9d32b;
    local_14 = &DAT_11d9d32b;
    local_10 = 0;
    local_c = 0;
    local_8 = &DAT_1201fc98;
    if (-1 < DAT_1201fc8c) {
      FUN_10c3dab0(&DAT_1201fc8c);
    }
    local_c = local_c & 3 | 0x11df76e9;
    if (-1 < DAT_1201fc8c) {
      iVar1 = FUN_10c3dad0(&DAT_1201fc8c);
      if (iVar1 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
        FUN_10c3d900(&DAT_1201fc8c);
      }
    }
    _DAT_1203bc00 = local_1c;
    _DAT_1203bc04 = local_18;
    _DAT_1203bc08 = local_14;
    _DAT_1203bc0c = local_10;
    _DAT_1203bc10 = local_c;
    (**(code **)((local_c & 0xfffffffc) + 0xc))(&DAT_1203bc14,&local_8);
    (**(code **)((local_c & 0xfffffffc) + 4))(&local_8);
    DAT_1203bc28 = &DAT_11df7709;
    local_20[0] = 0;
    _DAT_1203bc18 = &DAT_11cf63a4;
    _DAT_1203bc1c = &DAT_11d9d32b;
    _DAT_1203bc20 = &DAT_11d9d32b;
    _DAT_1203bc24 = 0;
    (*(code *)PTR_FUN_11df7714)(&DAT_1203bc2c,local_20);
    (*(code *)PTR_FUN_11df770c)(local_20);
    DAT_1203bc40 = &DAT_11df7728;
    _DAT_1203bc30 = 0;
    uRam1203bc34 = 0;
    uRam1203bc38 = 0;
    uRam1203bc3c = 0;
    FUN_11a8911f(&LAB_11c90940);
  }
  param_1[3] = &DAT_11d9d32b;
  *param_1 = &DAT_1203bc00;
  param_1[1] = &DAT_11cf63ac;
  param_1[2] = param_1[2] & 0xfffff01f | 0x11;
  return;
}



/* ===== FUN_10ef4f80 @ 10ef4f80  size=1711 ===== */
// strings:
//   "weapon_item_attachment"
//   "melee_arrow_item"
//   "melee_arrow_secrect"
//   "bow_rage01_A"
//   "bow_rage01_B"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""weapon_item_attachment""
     ""melee_arrow_item""
     ""melee_arrow_secrect""
     ""bow_rage01_A""
     ""bow_rage01_B"" */

void __thiscall FUN_10ef4f80(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  char *pcVar8;
  int iStack_28;
  int local_24;
  int local_20;
  uint local_1c;
  float local_18;
  float fStack_14;
  float local_10;
  ulonglong local_c;
  
  piVar1 = param_2;
  if (DAT_1202e818 != 0) {
    iVar4 = *param_2;
    if ((iVar4 == 0xc) || (iVar4 == 0xd)) {
      if (*(int **)(DAT_1202e818 + 4) != (int *)0x0) {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x70))();
        if ((*piVar1 == 0xc) && (piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0x28))();
        }
        else if ((*piVar1 == 0xd) && (piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0x2c))();
        }
      }
    }
    else if (iVar4 == 0x26) {
      if (((*(int **)(DAT_1202e818 + 4) != (int *)0x0) &&
          (piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x70))(), *piVar1 == 0x26))
         && (piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x28))();
      }
    }
    else if (iVar4 == 0x27) {
      if (((*(int **)(DAT_1202e818 + 4) != (int *)0x0) &&
          (piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x70))(), *piVar1 == 0x27))
         && (piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x2c))();
      }
      iVar4 = (**(code **)(*param_1 + 800))();
      if (iVar4 != 0) {
        param_2 = (int *)&DAT_0000001f;
        (**(code **)(*param_1 + 800))();
        iVar4 = FUN_113995e0(&param_2);
        if (iVar4 == 0) {
          pcVar8 = "weapon_item_attachment";
          FUN_10a64020();
          FUN_10a64020(0,"melee_arrow_item",iVar4,pcVar8);
          FUN_10a64020(0,"melee_arrow_secrect");
          FUN_10a64020(0,"bow_rage01_A");
          FUN_10a64020(0,"bow_rage01_B");
        }
      }
    }
    else if (iVar4 == 1) {
      iVar4 = param_2[1];
      if (iVar4 == 0x39) {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3f8))();
        piVar3 = (int *)(**(code **)(*piVar3 + 4))(0);
        iStack_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        (**(code **)(*piVar3 + 0x1c))(&iStack_28,*(undefined4 *)(DAT_120286b8 + 0x454),1,0);
        FUN_10ffbc70(1);
        (**(code **)(*(int *)param_1[3] + 0x114))
                  (0x3b,(int)((*(float *)(DAT_120286b8 + 0x450) - *(float *)(DAT_120286b8 + 0x454))
                             * DAT_11de9a44));
      }
      else if (iVar4 == 0x3a) {
        FUN_10ffbc70(0);
        FUN_10f1c080();
      }
      else if (iVar4 == 0x3b) {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3f8))();
        piVar3 = (int *)(**(code **)(*piVar3 + 4))(0);
        iStack_28 = _DAT_11cbf0e0;
        local_24 = _UNK_11cbf0e4;
        local_20 = _UNK_11cbf0e8;
        local_1c = _UNK_11cbf0ec;
        (**(code **)(*piVar3 + 0x20))(&iStack_28,*(undefined4 *)(DAT_120286b8 + 0x454),0,1,0);
      }
    }
    else if (iVar4 == 0) {
      if (*(char *)(DAT_1202e818 + 0x16d) != '\0') {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        param_2 = (int *)(**(code **)(*piVar3 + 0x124))();
        if (((param_2 != (int *)0x0) && (cVar2 = (**(code **)(*param_2 + 0x1a4))(), cVar2 == '\x03')
            ) && (iVar4 = param_1[2], iVar5 = (**(code **)(*param_2 + 0x4c8))(), iVar5 == iVar4)) {
          FUN_10f0abf0();
        }
      }
      param_2 = (int *)piVar1[1];
      if ((((uint)param_2 & 4) != 0) && (((uint)param_2 & 0x1002000) == 0)) {
        *(bool *)(param_1 + 0x33) = ((uint)param_2 & 0x1c000) != 0;
        piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0xb4))();
        iStack_28 = *piVar3;
        local_24 = piVar3[1];
        local_20 = piVar3[2];
        local_1c = piVar3[3];
        if ((param_1[0x4d9] == 0) || ((*(byte *)(param_1 + 0x4da) & 1) == 0)) {
          param_1[0x4dc] = local_24;
          param_1[0x4dd] = local_20;
          param_1[0x4de] = local_1c;
          param_1[0x4db] = iStack_28;
          param_1[0x4df] = iStack_28;
          param_1[0x4e0] = param_1[0x4dc];
          param_1[0x4e1] = param_1[0x4dd];
          param_1[0x4e2] = param_1[0x4de];
          param_1[0x591] = iStack_28;
          param_1[0x592] = local_24;
          param_1[0x593] = local_20;
          param_1[0x594] = local_1c;
          cVar2 = (**(code **)(*param_1 + 0x1b0))();
          if (cVar2 != '\0') {
            param_1[0x589] = param_1[0x591];
            param_1[0x58a] = param_1[0x592];
            param_1[0x58b] = param_1[0x593];
            param_1[0x58c] = param_1[0x594];
            param_1[0x58d] = param_1[0x591];
            param_1[0x58e] = param_1[0x58a];
            param_1[0x58f] = param_1[0x58b];
            param_1[0x590] = param_1[0x58c];
          }
        }
      }
      if ((*(char *)((int)param_1 + 0x1c9a) != '\0') && (((uint)param_2 & 0x10000) == 0)) {
        (**(code **)(*(int *)param_1[3] + 0x90))();
      }
      puVar6 = (undefined8 *)(**(code **)(*(int *)param_1[3] + 0x94))();
      *(undefined8 *)(param_1 + 0x5d5) = *puVar6;
      param_1[0x5d7] = *(int *)(puVar6 + 1);
      (**(code **)(*(int *)param_1[3] + 200))(&local_18);
      if (DAT_11cbf0b4 <
          ((float)param_1[0x8df] - local_18) * ((float)param_1[0x8df] - local_18) +
          ((float)param_1[0x8e0] - fStack_14) * ((float)param_1[0x8e0] - fStack_14) +
          ((float)param_1[0x8e1] - local_10) * ((float)param_1[0x8e1] - local_10)) {
        *(ulonglong *)(param_1 + 0x8df) = CONCAT44(fStack_14,local_18);
        param_1[0x8e1] = (int)local_10;
        cVar2 = (**(code **)(*param_1 + 0x228))();
        if (cVar2 == '\0') {
          if ((*(int *)(DAT_1202e818 + 0xd0) != 0) &&
             (iVar4 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))(),
             iVar4 != 0)) {
            piVar3 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))()
            ;
            piVar3 = (int *)(**(code **)(*piVar3 + 0x3a4))();
            if ((piVar3 != (int *)0x0) &&
               (((char)piVar3[0x32] != '\0' && (iVar4 = (**(code **)(*param_1 + 800))(), iVar4 != 0)
                ))) {
              iVar4 = (**(code **)(*param_1 + 800))();
              piVar3 = (int *)(**(code **)(*piVar3 + 0xc0))(*(undefined4 *)(iVar4 + 4));
              if ((piVar3 != (int *)0x0) && (DAT_12025178 != 0)) {
                puVar7 = (uint *)(**(code **)(*piVar3 + 0x60))();
                local_c = (ulonglong)*puVar7;
                param_2 = (int *)puVar7[1];
                local_1c = puVar7[2];
                iVar4 = (**(code **)(*param_1 + 800))();
                FUN_10b640b0(*(undefined4 *)(iVar4 + 4),CONCAT44(param_2,(int)local_c),local_1c);
              }
            }
          }
        }
        else if (DAT_12025178 != 0) {
          FUN_10b63ff0(param_1[2]);
        }
      }
    }
    else if (iVar4 == 0x1e) {
      if ((param_1[0x798] != 0) && (iVar4 = FUN_10fd05d0(), iVar4 != 0)) {
        FUN_10fd7160();
      }
      if ((int *)param_1[0x714] != (int *)0x0) {
        cVar2 = (**(code **)(*(int *)param_1[0x714] + 0x60))();
        if (cVar2 != '\0') {
          (**(code **)(*(int *)param_1[0x714] + 100))();
        }
        (**(code **)(*(int *)param_1[0x714] + 4))();
      }
      if (((int *)param_1[0x714] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)param_1[0x714] + 0x60))(), cVar2 != '\0')) {
        (**(code **)(*(int *)param_1[0x714] + 0x5c))(0);
        (**(code **)(**(int **)(DAT_1202e818 + 0xbc) + 0xd0))();
      }
      piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(0);
      if ((piVar3 != (int *)0x0) && (cVar2 = (**(code **)(*piVar3 + 100))(), cVar2 != '\0')) {
        (**(code **)(*param_1 + 0x738))();
      }
    }
    FUN_10a50340(piVar1);
    if (*piVar1 == 0x24) {
      local_24 = 0;
      iStack_28 = _UNK_11ce8eec;
      local_1c = 0;
      local_20 = 0;
      (**(code **)(*param_1 + 0x44))();
    }
  }
  return;
}



/* ===== FUN_10f0f750 @ 10f0f750  size=392 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "VEHICLE_STATE"
//   "weapon_item_attachment"
//   "melee_arrow_item"
//   "melee_arrow_secrect"
//   "bow_rage01_A"
//   "bow_rage01_B"

/* [RE-AUTO c0]
   strings:
     ""VEHICLE_STATE""
     ""weapon_item_attachment""
     ""melee_arrow_item""
     ""melee_arrow_secrect""
     ""bow_rage01_A""
     ""bow_rage01_B"" */

void __fastcall FUN_10f0f750(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  if (*(char *)((int)DAT_1202e818 + 0x209) != '\0') {
    if (DAT_1202e818[1] == 0) {
      return;
    }
    if (*(char *)((int)DAT_1202e818 + 0x20a) == '\0') {
      return;
    }
  }
  (**(code **)(*(int *)param_1[3] + 300))(0);
  piVar2 = (int *)(**(code **)(*param_1 + 800))();
  CInfoRecord__GetModelString("VEHICLE_STATE");
  cVar1 = (**(code **)(*param_1 + 0x830))(&local_c);
  local_5 = cVar1 == '\0';
  piVar4 = (int *)(local_c + -0xc);
  if ((-1 < *piVar4) && (iVar3 = FUN_10c3dad0(piVar4), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_c + -4));
    FUN_10c3d900(piVar4);
  }
  if (local_5 != '\0') {
    if (piVar2 == (int *)0x0) goto LAB_10f0f8c5;
    local_10 = 0x1f;
    iVar3 = FUN_113995e0(&local_10);
    if (iVar3 == 0) {
      FUN_10a64020(0,"weapon_item_attachment");
      FUN_10a64020(0,"melee_arrow_item");
      FUN_10a64020(0,"melee_arrow_secrect");
      FUN_10a64020(0,"bow_rage01_A");
      FUN_10a64020(0,"bow_rage01_B");
    }
  }
  if ((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x280))(), cVar1 != '\0')) {
    (**(code **)(*piVar2 + 0x2c0))(4,0,0);
    local_14 = FUN_1025b060();
    local_20 = 0x6e;
    local_1c = 0xffffffff;
    local_18 = 0xffffffff;
    (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x98) + 0x14))(&local_20);
  }
LAB_10f0f8c5:
  (**(code **)(*(int *)*DAT_1202e818 + 0x68))();
  return;
}



/* ===== FUN_10f16c10 @ 10f16c10  size=784 ===== */
// strings:
//   "weapon_item_attachment"
//   "melee_arrow_item"
//   "melee_arrow_secrect"
//   "bow_rage01_A"
//   "bow_rage01_B"

/* [RE-AUTO c0]
   strings:
     ""weapon_item_attachment""
     ""melee_arrow_item""
     ""melee_arrow_secrect""
     ""bow_rage01_A""
     ""bow_rage01_B"" */

void __fastcall FUN_10f16c10(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  
  *(undefined1 *)((int)param_1 + 0x159d) = 0;
  if ((int *)param_1[3] == (int *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*(int *)param_1[3] + 0x1b8))(0);
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)(**(code **)(*param_1 + 400))();
  iVar2 = (**(code **)(*piVar3 + 0xbc))(0);
  if ((iVar2 != 0) && (iVar2 = FUN_11111ec0(param_1[0x56d] + 0x1e), iVar2 != 0)) {
    local_c = 0;
    cVar1 = FUN_10a67670((undefined4 *)(iVar2 + 4),&DAT_11d9d32b);
    if (cVar1 != '\0') {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
      local_c = (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(iVar2 + 4));
    }
    local_10 = 0;
    cVar1 = FUN_10a67670((undefined4 *)(iVar2 + 8),&DAT_11d9d32b);
    if (cVar1 != '\0') {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x20))();
      local_10 = (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(iVar2 + 8));
    }
    if (local_c != 0) {
      if (local_10 == 0) {
        iVar2 = (**(code **)(*piVar3 + 0xc0))(local_c,0);
        if (iVar2 == 0) goto LAB_10f16e01;
      }
      else {
        iVar2 = (**(code **)(*piVar3 + 0xc0))();
        if (iVar2 != 0) {
          uVar5 = (**(code **)(*piVar3 + 0xc0))(local_c,0);
          piVar4 = (int *)FUN_10a4e370(uVar5);
          iVar2 = *piVar4;
          uVar5 = (**(code **)(*piVar3 + 0xc0))(local_10,0);
          (**(code **)(iVar2 + 0x110))(uVar5);
        }
        iVar2 = (**(code **)(*piVar3 + 0xc0))(local_10,0);
        if (iVar2 != 0) {
          uVar5 = (**(code **)(*piVar3 + 0xc0))(local_10,0);
          piVar4 = (int *)FUN_10a4e370(uVar5);
          iVar2 = *piVar4;
          uVar5 = (**(code **)(*piVar3 + 0xc0))(local_c,0);
          (**(code **)(iVar2 + 0x10c))(uVar5);
        }
      }
      uVar5 = (**(code **)(*piVar3 + 0xc0))(local_c,0);
      FUN_10a4e370(uVar5);
      iVar2 = *DAT_1202f458;
      uVar5 = (**(code **)(*piVar3 + 0xc0))(local_c,0,1);
      (**(code **)(iVar2 + 0x90))(param_1,uVar5);
      (**(code **)(*param_1 + 0x184))(1,1);
    }
  }
LAB_10f16e01:
  iVar2 = (**(code **)(*param_1 + 800))();
  if (iVar2 == 0) {
    return;
  }
  if (*(int **)(DAT_1202e818 + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))();
  }
  switch(param_1[0x56d]) {
  case 1:
    iVar2 = *param_1;
    iVar7 = FUN_11351190();
    (**(code **)(iVar2 + 0x584))((float)iVar7);
    iVar2 = *param_1;
    iVar7 = FUN_11351470();
    break;
  default:
    goto LAB_10f16f4f;
  case 3:
    iVar2 = *param_1;
    iVar7 = FUN_11351250();
    (**(code **)(iVar2 + 0x584))((float)iVar7);
    iVar2 = *param_1;
    iVar7 = FUN_11351530();
    break;
  case 4:
    iVar2 = *param_1;
    iVar7 = FUN_11350fd0();
    (**(code **)(iVar2 + 0x584))((float)iVar7);
    iVar2 = *param_1;
    iVar7 = FUN_113512b0();
    break;
  case 5:
    iVar2 = *param_1;
    iVar7 = FUN_113511d0();
    (**(code **)(iVar2 + 0x584))((float)iVar7);
    iVar2 = *param_1;
    iVar7 = FUN_113514b0();
    break;
  case 9:
    iVar2 = *param_1;
    iVar7 = FUN_11351210();
    (**(code **)(iVar2 + 0x584))((float)iVar7);
    iVar2 = *param_1;
    iVar7 = FUN_113514f0();
  }
  (**(code **)(iVar2 + 0x588))((float)iVar7);
LAB_10f16f4f:
  piVar3 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
  if ((piVar3 != (int *)0x0) &&
     (piVar3 = (int *)(**(code **)(*piVar3 + 0x58))(), piVar3 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar3 + 0x24))();
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        piVar4 = (int *)(**(code **)(*piVar3 + 0x1c))(iVar7);
        if ((piVar4 != (int *)0x0) && (iVar6 = (**(code **)(*piVar4 + 0x18))(), iVar6 != 2)) {
          (**(code **)(*piVar4 + 0x44))(0);
          (**(code **)(*piVar4 + 0x4c))(0);
          (**(code **)(*piVar4 + 0x54))(0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
    FUN_10a64020(0,"weapon_item_attachment");
    FUN_10a64020(0,"melee_arrow_item");
    FUN_10a64020(0,"melee_arrow_secrect");
    FUN_10a64020(0,"bow_rage01_A");
    FUN_10a64020(0,"bow_rage01_B");
    FUN_10f7f340(param_1[3]);
    FUN_10f96b10(param_1[3]);
  }
  return;
}



/* ===== FUN_10f1a850 @ 10f1a850  size=315 ===== */
// strings:
//   "PVPExtraBuffTime"

/* [RE-AUTO c0]
   strings:
     ""PVPExtraBuffTime"" */

void __thiscall FUN_10f1a850(int param_1,int param_2)

{
  int ***pppiVar1;
  int *piVar2;
  int iVar3;
  int ***pppiVar4;
  int **local_18;
  int **local_14;
  undefined8 local_10;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = (ulonglong)(uint)local_10;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x38))();
    if (iVar3 != 0) {
      FUN_10a68a10("PVPExtraBuffTime",(int)&local_10 + 4);
      local_8 = local_10._4_4_;
    }
  }
  if (param_2 == -1) {
    param_2 = FUN_10a636e0();
  }
  local_10 = 0;
  local_18 = (int **)&local_18;
  local_14 = local_18;
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x94) + 0x34))
            (param_2,*(undefined4 *)(*(int *)(DAT_1202e818 + 0xd0) + 0x90),&local_18,0);
  FUN_10f1dba0(&local_18,0,local_8);
  pppiVar4 = (int ***)local_18;
  if ((int ***)local_18 != &local_18) {
    do {
      pppiVar1 = (int ***)*pppiVar4;
      FUN_10c3d5d0(pppiVar4);
      pppiVar4 = pppiVar1;
    } while (pppiVar1 != &local_18);
  }
  local_18 = (int **)&local_18;
  local_14 = local_18;
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x94) + 0x34))
            (param_2,*(undefined4 *)(*(int *)(DAT_1202e818 + 0xd0) + 0x90),&local_18,1);
  FUN_10f1dba0(&local_18,1,local_8);
  pppiVar4 = (int ***)local_18;
  if ((int ***)local_18 != &local_18) {
    do {
      pppiVar1 = (int ***)*pppiVar4;
      FUN_10c3d5d0(pppiVar4);
      pppiVar4 = pppiVar1;
    } while (pppiVar1 != &local_18);
  }
  return;
}



/* ===== FUN_10f1c150 @ 10f1c150  size=1151 ===== */
// calls: CInfoRecord::GetModelString, strstr, DecodeBuffIdList
// strings:
//   "NUS_null00"
//   "mh_sharemem_addrinfo"
//   "_enhanced"
//   "CBuffInfo"

/* [RE-AUTO c0]
   calls: strstr
   strings:
     ""NUS_null00""
     ""mh_sharemem_addrinfo""
     ""_enhanced""
     ""CBuffInfo"" */

void __thiscall FUN_10f1c150(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  char *pcVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 local_7c [10];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char *local_10;
  byte *local_c;
  byte *local_8;
  
  if (param_2 != 0) {
    local_1c = param_1;
    (**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x298))();
    local_8 = &DAT_1201fc98;
    if ((DAT_11dfa3c4 != 0) &&
       (((iVar7 = DAT_11dfa3c4 / 1000, iVar7 == 0x32 || (iVar7 == 0x34)) || (iVar7 == 0x36)))) {
      FUN_1083ac30("NUS_null00");
    }
    pbVar13 = &DAT_11d9d32b;
    pbVar5 = local_8;
    do {
      bVar1 = *pbVar5;
      bVar17 = bVar1 < *pbVar13;
      if (bVar1 != *pbVar13) {
LAB_10f1c1e0:
        uVar6 = -(uint)bVar17 | 1;
        goto LAB_10f1c1e5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar17 = bVar1 < pbVar13[1];
      if (bVar1 != pbVar13[1]) goto LAB_10f1c1e0;
      pbVar5 = pbVar5 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_10f1c1e5:
    iVar7 = *(int *)(param_1 + 0x15cc);
    local_c = (byte *)0x0;
    if (uVar6 != 0) {
      local_c = local_8;
    }
    local_18 = 0;
    if ((*(uint *)(iVar7 + -4) & 0x7fffffff) != 0) {
      do {
        iVar16 = local_18;
        iVar7 = (**(code **)(*DAT_1201ff00 + 0x54))(*(undefined4 *)(iVar7 + local_18 * 4));
        if (iVar7 != 0) {
          piVar3 = *(int **)(iVar7 + 0xc);
          if (piVar3 != (int *)0x0) {
            FUN_10f1fd40(piVar3,1 < param_2);
            piVar8 = (int *)(**(code **)(*piVar3 + 0x184))();
            if (piVar8 != (int *)0x0) {
              uVar9 = (**(code **)(*piVar8 + 0x18))();
              CInfoRecord__GetModelString(uVar9);
              pcVar14 = local_10;
              pcVar10 = strstr(local_10,"_enhanced");
              if ((pcVar10 == (char *)0x0) || ((int)pcVar10 - (int)pcVar14 == -1)) {
                FUN_10a4c990("_enhanced",9);
                pcVar14 = local_10;
              }
              piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x298))();
              iVar7 = (**(code **)(*piVar8 + 0x14))(pcVar14,1,0,0);
              if (iVar7 != 0) {
                (**(code **)(*piVar3 + 0x180))(iVar7);
              }
              piVar8 = (int *)(pcVar14 + -0xc);
              if ((-1 < *piVar8) && (iVar7 = FUN_10c3dad0(piVar8), iVar7 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar14 + -4));
                FUN_10c3d900(piVar8);
              }
            }
          }
          if ((*(int *)(local_1c + 0x15b4) != 6) && (iVar16 == 1)) break;
          iVar7 = FUN_10500130(0,"CBuffInfo",0);
          if ((param_3 == -1) ||
             ((((param_3 == 0 && (*(int *)(iVar7 + 0x30) != 0)) ||
               (iVar4 = *(int *)(iVar7 + 0x28), iVar4 == 0)) ||
              ((iVar11 = param_3 - *(int *)(iVar7 + 0x30), iVar11 < 0 ||
               (*(int *)(iVar7 + 0x24) <= iVar11)))))) {
LAB_10f1c351:
            iVar7 = 0;
          }
          else {
            if (*(int *)(*(int *)(iVar7 + 0x20) + (iVar11 / iVar4) * 4) == 0) goto LAB_10f1c351;
            iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + 0x20) + (iVar11 / iVar4) * 4) +
                            (iVar11 % iVar4) * 4);
          }
          if (iVar7 != 0) {
            iVar7 = DecodeBuffIdList(*(undefined4 *)(iVar7 + 0x3c8),local_7c,10);
            local_20 = iVar7;
            local_24 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x70))();
            local_14 = 0;
            if (0 < iVar7) {
              do {
                puVar12 = (undefined4 *)(**(code **)(*local_24 + 8))(local_7c[local_14]);
                if ((puVar12 != (undefined4 *)0x0) && (iVar7 = (**(code **)*puVar12)(), iVar7 == 7))
                {
                  puVar15 = (undefined4 *)0x0;
                  if (DAT_11dfa3c4 != 0) {
                    puVar15 = (undefined4 *)FUN_10b2de00(DAT_11dfa3c4,DAT_11dfa3c8);
                  }
                  iVar7 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                                    (puVar12[3],&DAT_11d9d32b,1,1);
                  pbVar5 = local_c;
                  if ((iVar7 != 0) && (piVar3 != (int *)0x0)) {
                    if (puVar15 == (undefined4 *)0x0) {
                      if (*(int *)(puVar12[4] + -8) != 0) {
                        local_48 = puVar12[9];
                        local_44 = puVar12[10];
                        local_40 = puVar12[0xb];
                        (**(code **)(*piVar3 + 0x1e8))
                                  (puVar12[3],puVar12[4],puVar12 + 6,&local_48,puVar12[0xc],
                                   *(undefined1 *)(puVar12 + 0xe),1,0,local_c,0);
                      }
                      iVar7 = puVar12[0x10];
                      if (*(int *)(iVar7 + -8) != 0) {
                        local_54 = puVar12[9];
                        uVar2 = *(undefined1 *)(puVar12 + 0xe);
                        local_50 = puVar12[10];
                        puVar19 = &local_54;
                        local_4c = puVar12[0xb];
                        uVar9 = puVar12[0xc];
                        uVar18 = puVar12[0xf];
                        goto LAB_10f1c557;
                      }
                    }
                    else {
                      if (*(int *)(puVar12[4] + -8) != 0) {
                        local_30 = puVar15[9];
                        local_2c = puVar15[10];
                        local_28 = puVar15[0xb];
                        (**(code **)(*piVar3 + 0x1e8))
                                  (puVar15[3],puVar15[4],puVar15 + 6,&local_30,puVar15[0xc],
                                   *(undefined1 *)(puVar15 + 0xe),1,0,local_c,0);
                      }
                      if (*(int *)(puVar12[0x10] + -8) != 0) {
                        local_3c = puVar15[9];
                        uVar2 = *(undefined1 *)(puVar15 + 0xe);
                        local_38 = puVar15[10];
                        puVar19 = &local_3c;
                        local_34 = puVar15[0xb];
                        uVar9 = puVar15[0xc];
                        iVar7 = puVar15[0x10];
                        uVar18 = puVar15[0xf];
                        pbVar5 = local_c;
                        puVar12 = puVar15;
LAB_10f1c557:
                        (**(code **)(*piVar3 + 0x1e8))
                                  (uVar18,iVar7,puVar12 + 6,puVar19,uVar9,uVar2,1,0,pbVar5,0);
                      }
                    }
                  }
                }
                local_14 = local_14 + 1;
                iVar16 = local_18;
              } while (local_14 < local_20);
            }
          }
        }
        local_18 = iVar16 + 1;
        iVar7 = *(int *)(local_1c + 0x15cc);
      } while (local_18 < (int)(*(uint *)(iVar7 + -4) & 0x7fffffff));
    }
    pbVar5 = local_8;
    pbVar13 = local_8 + -0xc;
    if ((-1 < *(int *)pbVar13) && (iVar7 = FUN_10c3dad0(pbVar13), iVar7 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar5 + -4));
      FUN_10c3d900(pbVar13);
    }
  }
  return;
}



/* ===== FUN_10f33380 @ 10f33380  size=193 ===== */
// calls: strncmp, atoi
// strings:
//   "MhItem_"
//   "MSkill_"

/* [RE-AUTO c0]
   calls: strncmp, atoi
   strings:
     ""MhItem_""
     ""MSkill_"" */

undefined4 FUN_10f33380(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *_Str1;
  char *local_c [2];
  
  iVar1 = FUN_10f19240();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_11399470();
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x1c8))();
      if ((piVar2 != (int *)0x0) && (param_3 == 1)) {
        local_c[0] = "MhItem_";
        local_c[1] = "MSkill_";
        _Str1 = "";
        if ((char *)*param_2 != (char *)0x0) {
          _Str1 = (char *)*param_2;
        }
        iVar1 = 0;
        do {
          iVar3 = (**(code **)(*piVar2 + 0x14))();
          if (iVar3 == iVar1) {
            iVar3 = strncmp(_Str1,local_c[iVar1],7);
            if (iVar3 == 0) {
              iVar1 = atoi(_Str1 + 7);
              (**(code **)(*piVar2 + 0xc))(iVar1);
              return 1;
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        return 1;
      }
      return 1;
    }
  }
  return 1;
}



/* ===== FUN_10f390b0 @ 10f390b0  size=1150 ===== */
// strings:
//   "holster"
//   "interact"
//   "defense"
//   "reload"
//   "dodge"
//   "crouch"
//   "creep"
//   "rage_1"
//   "rage_2"
//   "rage_3"
//   "rage_transmission"
//   "xi_switch_lb"
//   "xi_switch_rb"
//   "xi_switch_lt"
//   "xi_switch_rt"
//   "xi_switch_x"
//   "xi_switch_y"
//   "xi_switch_b"
//   "xi_switch_a"
//   "xi_switch_l3"

/* [RE-AUTO c0]
   strings:
     ""holster""
     ""interact""
     ""defense""
     ""reload""
     ""dodge""
     ""crouch""
     ""creep""
     ""rage_1""
     ""rage_2""
     ""rage_3"" */

void __fastcall FUN_10f390b0(int param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_2c [8];
  undefined1 *local_24;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined1 *local_8;
  
  piVar7 = (int *)(param_1 + 0x380);
  local_14 = param_1;
  local_c = piVar7;
  FUN_1083ab70(&DAT_11ccdbec,6);
  FUN_1083ab70(&DAT_11ccdbf4,6);
  FUN_1083ab70(&DAT_11cface8,6);
  FUN_1083ab70("holster",7);
  FUN_1083ab70("interact",8);
  FUN_1083ab70("defense",7);
  FUN_1083ab70("reload",6);
  FUN_1083ab70("dodge",5);
  FUN_1083ab70(&DAT_11dce978,4);
  FUN_1083ab70("crouch",6);
  FUN_1083ab70(&DAT_11dce988,4);
  FUN_1083ab70("creep",5);
  FUN_1083ab70("rage_1",6);
  FUN_1083ab70("rage_2",6);
  FUN_1083ab70("rage_3",6);
  FUN_1083ab70("rage_transmission",0x11);
  FUN_1083ab70("xi_switch_lb",0xc);
  FUN_1083ab70("xi_switch_rb",0xc);
  FUN_1083ab70("xi_switch_lt",0xc);
  FUN_1083ab70("xi_switch_rt",0xc);
  FUN_1083ab70("xi_switch_x",0xb);
  FUN_1083ab70("xi_switch_y",0xb);
  FUN_1083ab70("xi_switch_b",0xb);
  FUN_1083ab70("xi_switch_a",0xb);
  FUN_1083ab70("xi_switch_l3",0xc);
  FUN_1083ab70("xi_switch_r3",0xc);
  FUN_1083ab70("xi_switch_start",0xf);
  FUN_1083ab70("xi_switch_back",0xe);
  FUN_1083ab70("xi_switch_pad_up",0x10);
  FUN_1083ab70("xi_switch_pad_left",0x12);
  FUN_1083ab70("xi_switch_pad_down",0x12);
  FUN_1083ab70("xi_switch_pad_right",0x13);
  FUN_1083ab70("xi_switch_r3_up",0xf);
  FUN_1083ab70("xi_switch_r3_left",0x11);
  FUN_1083ab70("xi_switch_r3_down",0x11);
  FUN_1083ab70("xi_switch_r3_right",0x12);
  uVar1 = DAT_11cc06d8;
  iVar5 = 0x25;
  puVar3 = (undefined8 *)(param_1 + 0x250);
  do {
    puVar3[-0x4a] = uVar1;
    puVar3[-0x25] = uVar1;
    *puVar3 = uVar1;
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar5 != 0);
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  iVar5 = 0;
  local_10 = param_1 + 0x420;
  do {
    if (*(int *)(*piVar7 + -0xc) < 0) {
      puVar6 = &DAT_1201fc98;
      local_8 = &DAT_1201fc98;
    }
    else {
      puVar6 = (undefined1 *)*piVar7;
      local_8 = puVar6;
      FUN_10c3dab0(puVar6 + -0xc);
    }
    piVar7 = (int *)(puVar6 + -0xc);
    if (*piVar7 < 0) {
      local_24 = &DAT_1201fc98;
    }
    else {
      local_24 = local_8;
      FUN_10c3dab0(piVar7);
    }
    if (-1 < *piVar7) {
      iVar4 = FUN_10c3dad0(piVar7);
      if (iVar4 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar6 + -4));
        FUN_10c3d900(piVar7);
      }
    }
    puVar6 = local_24;
    piVar7 = (int *)(local_24 + -0xc);
    if (*piVar7 < 0) {
      local_1c = &DAT_1201fc98;
    }
    else {
      local_1c = local_24;
      FUN_10c3dab0(piVar7);
    }
    local_18 = iVar5;
    FUN_10f40c80(local_2c,&local_1c);
    puVar2 = local_1c;
    piVar8 = (int *)(local_1c + -0xc);
    if (-1 < *piVar8) {
      iVar4 = FUN_10c3dad0(piVar8);
      if (iVar4 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar2 + -4));
        FUN_10c3d900(piVar8);
      }
    }
    if (-1 < *piVar7) {
      iVar4 = FUN_10c3dad0(piVar7);
      if (iVar4 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar6 + -4));
        FUN_10c3d900(piVar7);
      }
    }
    iVar4 = local_14;
    iVar5 = iVar5 + 1;
    piVar7 = local_c + 1;
    local_c = piVar7;
  } while (iVar5 < 0x24);
  FUN_10f3a2b0();
  iVar5 = FUN_10f3c450(*(undefined4 *)(iVar4 + 0x3b0));
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0xde) == '\0')) {
    FUN_10f3bbc0(*(undefined4 *)(iVar4 + 0x3b0),*(undefined4 *)(iVar5 + 0xc));
  }
  iVar5 = FUN_10f3c450(*(undefined4 *)(iVar4 + 0x3b4));
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0xde) == '\0')) {
    FUN_10f3bbc0(*(undefined4 *)(iVar4 + 0x3b4),*(undefined4 *)(iVar5 + 0xc));
  }
  iVar5 = FUN_10f3c450(*(undefined4 *)(iVar4 + 0x3b8));
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0xde) == '\0')) {
    FUN_10f3bbc0(*(undefined4 *)(iVar4 + 0x3b8),*(undefined4 *)(iVar5 + 0xc));
  }
  return;
}



/* ===== FUN_10f3b700 @ 10f3b700  size=797 ===== */
// calls: sprintf, CInfoRecord::GetModelString
// strings:
//   "Libs\\common\\RageActionMap.xml"
//   "keyAction1"
//   "keyAction2"
//   "keyAction3"
//   "keyAction4"

/* WARNING: Removing unreachable block (ram,0x10f3b7cf) */
/* [RE-AUTO c0]
   calls: sprintf
   strings:
     ""Libs\\common\\RageActionMap.xml""
     ""keyAction1""
     ""keyAction2""
     ""keyAction3""
     ""keyAction4"" */

void FUN_10f3b700(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  char local_78 [48];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_10;
  undefined1 *local_c [2];
  
  sprintf(local_78,"Libs\\common\\RageActionMap.xml");
  CInfoRecord__GetModelString(local_78);
  if ((int *)DAT_1202e818[0x22] == (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0x1c4))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x40))(&local_38,local_18,0);
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)();
    }
  }
  else {
    piVar2 = (int *)(**(code **)(*(int *)DAT_1202e818[0x22] + 4))(&local_34,local_18,1,0xffffdd48);
    local_38 = local_34;
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)();
      local_38 = local_34;
    }
  }
  piVar2 = (int *)*piVar2;
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 4))();
  }
  local_40 = (**(code **)(*piVar2 + 0xa0))();
  local_30 = 0;
  if (0 < local_40) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0xa8))(&local_3c,0);
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)();
    }
    piVar2 = (int *)*piVar2;
    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 4))();
    }
    local_1c = 0xffffffff;
    local_20 = 0xffffffff;
    local_24 = 0xffffffff;
    local_28 = 0xffffffff;
    cVar1 = (**(code **)(*piVar2 + 0x80))(&DAT_11cd68d8);
    if (cVar1 == '\x01') {
      (**(code **)(*piVar2 + 0x74))(&DAT_11cd68d8,&local_1c);
    }
    local_c[0] = &DAT_1201fc98;
    local_10 = 0xffffffff;
    local_48 = 0;
    local_44 = 0;
    cVar1 = (**(code **)(*piVar2 + 0x80))("keyAction1");
    if (cVar1 == '\x01') {
      (**(code **)(*piVar2 + 0x48))("keyAction1",local_c);
      if (*(int *)(local_c[0] + -0xc) < 0) {
        puVar4 = &DAT_1201fc98;
      }
      else {
        puVar4 = local_c[0];
        FUN_10c3dab0(local_c[0] + -0xc,local_c[0],&local_10,&local_48);
      }
      FUN_10fbfde0(puVar4);
    }
    cVar1 = (**(code **)(*piVar2 + 0x80))("keyAction2");
    if (cVar1 == '\x01') {
      (**(code **)(*piVar2 + 0x48))("keyAction2",local_c);
      if (*(int *)(local_c[0] + -0xc) < 0) {
        puVar4 = &DAT_1201fc98;
      }
      else {
        puVar4 = local_c[0];
        FUN_10c3dab0(local_c[0] + -0xc,local_c[0],&local_10,&local_48);
      }
      FUN_10fbfde0(puVar4);
      local_20 = local_10;
    }
    cVar1 = (**(code **)(*piVar2 + 0x80))("keyAction3");
    if (cVar1 == '\x01') {
      (**(code **)(*piVar2 + 0x48))("keyAction3",local_c);
      if (*(int *)(local_c[0] + -0xc) < 0) {
        puVar4 = &DAT_1201fc98;
      }
      else {
        puVar4 = local_c[0];
        FUN_10c3dab0(local_c[0] + -0xc,local_c[0],&local_10,&local_48);
      }
      FUN_10fbfde0(puVar4);
      local_24 = local_10;
    }
    cVar1 = (**(code **)(*piVar2 + 0x80))("keyAction4");
    if (cVar1 == '\x01') {
      (**(code **)(*piVar2 + 0x48))("keyAction4",local_c);
      if (*(int *)(local_c[0] + -0xc) < 0) {
        puVar4 = &DAT_1201fc98;
      }
      else {
        puVar4 = local_c[0];
        FUN_10c3dab0(local_c[0] + -0xc,local_c[0],&local_10,&local_48);
      }
      FUN_10fbfde0(puVar4);
      local_28 = local_10;
    }
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(0x14);
  }
  (**(code **)(*piVar2 + 4))();
  piVar2 = (int *)(local_18 + -0xc);
  if ((-1 < *piVar2) && (iVar3 = FUN_10c3dad0(piVar2), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_18 + -4));
    FUN_10c3d900(piVar2);
  }
  return;
}



/* ===== FUN_10f678f0 @ 10f678f0  size=212 ===== */
// strings:
//   "tpeOnly"
//   "skillID"

/* [RE-AUTO c0]
   strings:
     ""tpeOnly""
     ""skillID"" */

void __thiscall FUN_10f678f0(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_2 != (int *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  FUN_10f6a4e0();
  pbVar2 = (byte *)(**(code **)(*param_2 + 0x7c))(&DAT_11dca14c);
  pbVar5 = &DAT_11cfb1a4;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_10f67942:
      uVar4 = -(uint)bVar6 | 1;
      goto LAB_10f67947;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_10f67942;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10f67947:
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  else {
    pbVar3 = &DAT_11ccdb2c;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_10f67980:
        uVar4 = -(uint)bVar6 | 1;
        goto LAB_10f67985;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_10f67980;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_10f67985:
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 3;
    }
  }
  (**(code **)(*param_2 + 0x50))("tpeOnly",param_1 + 0x2c);
  (**(code **)(*param_2 + 0x74))("skillID",param_1 + 0x28);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return;
}



/* ===== FUN_10f6bea0 @ 10f6bea0  size=715 ===== */
// calls: sscanf, atof
// strings:
//   "%[^ ]"
//   "%*s%s"
//   "EFFECT"
//   "Bip01 Spine"
//   "SKILLEFFECT"
//   "OnLeave"
//   "ANIMSPEED"

/* [RE-AUTO c0]
   calls: sscanf, atof
   strings:
     ""%[^ ]""
     ""%*s%s""
     ""EFFECT""
     ""Bip01 Spine""
     ""SKILLEFFECT""
     ""OnLeave""
     ""ANIMSPEED"" */

void FUN_10f6bea0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  char *_String;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  double dVar11;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined1 local_5;
  
  FUN_10f6c180(param_1,param_2);
  pbVar7 = *(byte **)(param_2 + 0xc);
  pbVar6 = pbVar7;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  pbVar3 = (byte *)FUN_10c3da60(pbVar6 + (1 - (int)(pbVar7 + 1)));
  sscanf((char *)pbVar7,"%[^ ]",pbVar3);
  pbVar6 = pbVar7;
  pbVar8 = pbVar3;
  do {
    bVar1 = *pbVar6;
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_10f6bf08:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_10f6bf0d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_10f6bf08;
    pbVar6 = pbVar6 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10f6bf0d:
  if (uVar4 == 0) {
    FUN_10c3da30(pbVar3);
    return;
  }
  pbVar6 = pbVar7;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  pbVar8 = pbVar3;
  do {
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0);
  _String = (char *)FUN_10c3da60(pbVar6 + (-((int)pbVar8 - (int)(pbVar3 + 1)) - (int)(pbVar7 + 1)) +
                                          1);
  local_c = _String;
  sscanf((char *)pbVar7,"%*s%s",_String);
  pcVar9 = "EFFECT";
  pbVar7 = pbVar3;
  do {
    bVar1 = *pbVar7;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_10f6bf82:
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_10f6bf87;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_10f6bf82;
    pbVar7 = pbVar7 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_10f6bf87:
  if (uVar4 == 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = (undefined1 *)0x0;
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0xc) + 0x1e8))
              (_String,"Bip01 Spine",&local_24,&local_18,0x3f800000,1,1,1,0,0);
  }
  else {
    pcVar9 = "SKILLEFFECT";
    pbVar7 = pbVar3;
    do {
      bVar1 = *pbVar7;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_10f6c018:
        uVar4 = -(uint)bVar10 | 1;
        goto LAB_10f6c01d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_10f6c018;
      pbVar7 = pbVar7 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_10f6c01d:
    if (uVar4 == 0) {
      iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 800))();
      _String = local_c;
      if ((iVar5 != 0) &&
         (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 0x228))(),
         _String = local_c, cVar2 != '\0')) {
        FUN_100b5f70(local_c,&local_5);
        iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x100) + 800))();
        (**(code **)(**(int **)(iVar5 + 0x14) + 0x30))(local_30,0,0);
        _String = local_c;
        if ((local_1c != local_30) && (local_1c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(local_1c);
          _String = local_c;
        }
      }
    }
    else {
      pcVar9 = "ANIMSPEED";
      pbVar7 = pbVar3;
      do {
        bVar1 = *pbVar7;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_10f6c107:
          uVar4 = -(uint)bVar10 | 1;
          goto LAB_10f6c10c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar10 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_10f6c107;
        pbVar7 = pbVar7 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_10f6c10c:
      if (uVar4 == 0) {
        dVar11 = atof(_String);
        local_c = (char *)(float)dVar11;
        FUN_10fd9120((int)((float)local_c * DAT_11de9a30));
      }
    }
  }
  iVar5 = FUN_10fd9110();
  if (iVar5 != 100) {
    pbVar7 = *(byte **)(param_2 + 0xc);
    pcVar9 = "OnLeave";
    do {
      bVar1 = *pbVar7;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_10f6c13f:
        uVar4 = -(uint)bVar10 | 1;
        goto LAB_10f6c144;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_10f6c13f;
      pbVar7 = pbVar7 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_10f6c144:
    if (uVar4 == 0) {
      FUN_10fd9120(100);
    }
  }
  FUN_10c3da30(_String);
  FUN_10c3da30(pbVar3);
  return;
}



/* ===== FUN_10f781b0 @ 10f781b0  size=1007 ===== */
// strings:
//   "PLLocomotion"
//   "UnholsteredIdle"
//   "PLCombat"
//   "NoBullet"
//   "COMBAT_PL05_NOBULLET"
//   "ChangeBullet"
//   "COMBAT_PL05_CHANGEBULLET"
//   "PLCharging"
//   "RageAim"
//   "COMBAT_PL05_RAGE_PRESHOOT"
//   "RageRushLow"
//   "COMBAT_PL04_RAGERUSH_START"

/* [RE-AUTO c0]
   strings:
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLCombat""
     ""NoBullet""
     ""COMBAT_PL05_NOBULLET""
     ""ChangeBullet""
     ""COMBAT_PL05_CHANGEBULLET""
     ""PLCharging""
     ""RageAim""
     ""COMBAT_PL05_RAGE_PRESHOOT"" */

void __fastcall FUN_10f781b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *puVar5;
  undefined4 *extraout_ECX_02;
  int local_b8 [8];
  int local_98;
  int local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  int local_80 [8];
  int local_60;
  int local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  int local_48 [8];
  int local_28;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_5;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0x15b4);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + (iVar2 + 0x2f) * 0xc);
  iVar1 = param_1 + (iVar2 + 0x2f) * 0xc;
  iVar4 = *(int *)(iVar1 + 4);
  if (iVar3 != iVar4) {
    FUN_10f63c40(iVar3,iVar4,&local_5);
  }
  FUN_10fb2130(param_1 + 0x184);
  if (iVar2 == 4) {
    FUN_10f56e50();
    local_10 = FUN_10f73a40;
    FUN_10f574b0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("RageRushLow");
    FUN_10f573e0();
    if (local_18 == local_14) {
      FUN_10fb5990(local_18,&local_10,&local_5,1,1);
      puVar5 = extraout_ECX_02;
    }
    else {
      if (local_18 != (undefined4 *)0x0) {
        *local_18 = local_10;
        local_18[1] = local_c;
      }
      puVar5 = local_18 + 2;
      local_18 = puVar5;
    }
    FUN_10f56fa0("COMBAT_PL04_RAGERUSH_START",puVar5,local_48);
    FUN_10f593b0();
  }
  else {
    if (iVar2 != 5) goto LAB_10f78551;
    FUN_10f56e50();
    local_10 = FUN_10f73a40;
    FUN_10f574b0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0("NoBullet");
    FUN_10f573e0();
    if (local_18 == local_14) {
      FUN_10fb5990(local_18,&local_10,&local_5,1,1);
      puVar5 = extraout_ECX;
    }
    else {
      if (local_18 != (undefined4 *)0x0) {
        *local_18 = local_10;
        local_18[1] = local_c;
      }
      puVar5 = local_18 + 2;
      local_18 = puVar5;
    }
    FUN_10f56fa0("COMBAT_PL05_NOBULLET",puVar5,local_48);
    FUN_10f593b0();
    FUN_10f574b0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0("ChangeBullet");
    FUN_10f573e0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    if (local_88 == local_84) {
      FUN_10fb5990(local_88,&local_10,&local_5,1,1);
      puVar5 = extraout_ECX_00;
    }
    else {
      if (local_88 != (undefined4 *)0x0) {
        *local_88 = local_10;
        local_88[1] = local_c;
      }
      puVar5 = local_88 + 2;
      local_88 = puVar5;
    }
    FUN_10f56fa0("COMBAT_PL05_CHANGEBULLET",puVar5,local_b8);
    FUN_10f593b0();
    FUN_10f574b0();
    FUN_10f56fa0("PLCharging");
    FUN_10f56fa0("RageAim");
    FUN_10f573e0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    if (local_50 == local_4c) {
      FUN_10fb5990(local_50,&local_10,&local_5,1,1);
      puVar5 = extraout_ECX_01;
    }
    else {
      if (local_50 != (undefined4 *)0x0) {
        *local_50 = local_10;
        local_50[1] = local_c;
      }
      puVar5 = local_50 + 2;
      local_50 = puVar5;
    }
    FUN_10f56fa0("COMBAT_PL05_RAGE_PRESHOOT",puVar5,local_80);
    FUN_10f593b0();
    if (local_54 != 0) {
      FUN_10c3d5d0(local_54);
    }
    if (local_60 != 0) {
      FUN_10c3d5d0(local_60);
    }
    if (local_80[0] != 0) {
      FUN_10c3d5d0(local_80[0]);
    }
    if (local_8c != 0) {
      FUN_10c3d5d0(local_8c);
    }
    if (local_98 != 0) {
      FUN_10c3d5d0(local_98);
    }
    if (local_b8[0] != 0) {
      FUN_10c3d5d0(local_b8[0]);
    }
  }
  if (local_1c != 0) {
    FUN_10c3d5d0(local_1c);
  }
  if (local_28 != 0) {
    FUN_10c3d5d0(local_28);
  }
  if (local_48[0] != 0) {
    FUN_10c3d5d0(local_48[0]);
  }
LAB_10f78551:
  FUN_10fb2130(iVar1);
  puVar5 = *(undefined4 **)(param_1 + 0x110);
  local_c = FUN_10f74a60;
  if (puVar5 == *(undefined4 **)(param_1 + 0x114)) {
    FUN_108716d0(puVar5,&local_c,&local_5,1,1);
    return;
  }
  *puVar5 = FUN_10f74a60;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  return;
}



/* ===== FUN_10f79480 @ 10f79480  size=771 ===== */
// calls: _stricmp
// strings:
//   "moveforward"
//   "moveback"
//   "moveleft"
//   "moveright"
//   "rage_1"
//   "xi_switch_y"
//   "xi_switch_rb"
//   "xi_thumbr_down"
//   "xi_switch_lt"

/* [RE-AUTO c0]
   calls: _stricmp, LAB_12402b6b+1
   strings:
     ""moveforward""
     ""moveback""
     ""moveleft""
     ""moveright""
     ""rage_1""
     ""xi_switch_y""
     ""xi_switch_rb""
     ""xi_thumbr_down""
     ""xi_switch_lt"" */

void __thiscall FUN_10f79480(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined1 *local_228;
  undefined1 *local_20c;
  undefined4 local_34;
  undefined2 *local_8;
  
  if (*(short *)(param_1 + 0x1ac) != 1) goto LAB_10f7975c;
  if (param_3 == 2) {
    if (((param_2 != (char *)0x0) &&
        ((iVar2 = _stricmp(param_2,"moveforward"), iVar2 == 0 ||
         ((param_2 != (char *)0x0 &&
          ((iVar2 = _stricmp(param_2,"moveback"), iVar2 == 0 ||
           ((param_2 != (char *)0x0 && (iVar2 = _stricmp(param_2,"moveleft"), iVar2 == 0))))))))))
       || (cVar1 = FUN_10b73690("moveright"), cVar1 != '\0')) {
      if (((0.0 < (float)(double)((ulonglong)(double)*(float *)(param_1 + 0x154) & DAT_11de9c70)) ||
          (0.0 < (float)(double)((ulonglong)(double)*(float *)(param_1 + 0x158) & DAT_11de9c70))) ||
         (0.0 < (float)(double)((ulonglong)(double)*(float *)(param_1 + 0x15c) & DAT_11de9c70))) {
        *(undefined4 *)(param_1 + 0x15c) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined4 *)(param_1 + 0x154) = 0;
      }
      local_228 = &DAT_1201fc98;
      local_20c = &DAT_1201fc98;
      local_34 = 0;
      local_2dc = 0;
      local_2d8 = 0x800000;
      piVar3 = *(int **)(*(int *)(param_1 + 0x18) + 0x100);
      if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x198))(), iVar2 != 0)) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x198))();
        (**(code **)(*piVar3 + 4))(&local_2dc);
      }
      FUN_10ba1fc0();
    }
    goto LAB_10f7975c;
  }
  if (param_3 != 1) goto LAB_10f7975c;
  iVar2 = *(int *)(DAT_120286b8 + 0x9d4);
  if (iVar2 == 0) {
    if (param_2 == (char *)0x0) goto LAB_10f7975c;
    iVar2 = _stricmp(param_2,"melee1");
    if (iVar2 == 0) goto LAB_10f79734;
    if ((param_2 == (char *)0x0) || (iVar2 = _stricmp(param_2,"rage_1"), iVar2 != 0))
    goto LAB_10f7975c;
LAB_10f796b6:
    if ((*(int *)(*(int *)(param_1 + 0x18) + 0x100) != 0) &&
       ((iVar2 = FUN_10f19240(), iVar2 != 0 &&
        (iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x1c))(0x4c4b456), iVar2 != 0)))) {
      FUN_100e49c0();
      *local_8 = 0x404;
      uVar4 = FUN_1141bd30();
      *(undefined4 *)(local_8 + 8) = uVar4;
      *(undefined4 *)(local_8 + 10) = *(undefined4 *)(iVar2 + 8);
      piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      (**(code **)(*piVar3 + 0x254))(local_8);
      FUN_100e4a80();
    }
  }
  else {
    if (iVar2 == 2) {
      if ((param_2 == (char *)0x0) || (iVar2 = _stricmp(param_2,"xi_switch_y"), iVar2 != 0)) {
LAB_10f796a1:
        cVar1 = FUN_10b73690("xi_switch_lt");
        if (cVar1 == '\0') goto LAB_10f7975c;
        goto LAB_10f796b6;
      }
    }
    else {
      if (iVar2 == 1) {
        pcVar5 = "xi_switch_y";
      }
      else if (iVar2 == 3) {
        pcVar5 = "xi_switch_rb";
      }
      else {
        if (iVar2 != 4) goto LAB_10f7975c;
        pcVar5 = "xi_thumbr_down";
      }
      cVar1 = FUN_10b73690(pcVar5);
      if (cVar1 == '\0') goto LAB_10f796a1;
      if (cVar1 != '\x01') goto LAB_10f7975c;
    }
LAB_10f79734:
    if (*(char *)(param_1 + 0x238) == '\x01') {
      func_0x12402b6c(2,1,0);
      *(undefined4 *)(param_1 + 0x234) = 2;
      *(undefined1 *)(param_1 + 0x238) = 0;
    }
  }
LAB_10f7975c:
  if (param_2 != (char *)0x0) {
    *(int *)(param_2 + -0xc) = *(int *)(param_2 + -0xc) + -1;
    if (*(int *)(param_2 + -0xc) < 1) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x70) + 0xc))(param_2 + -0xc);
    }
  }
  return;
}



/* ===== FUN_10f7a080 @ 10f7a080  size=707 ===== */
// strings:
//   "PLLocomotion"
//   "UnholsteredIdle"
//   "PLCombat"
//   "NoBullet"
//   "COMBAT_PL05_NOBULLET"
//   "ChangeBullet"
//   "COMBAT_PL05_CHANGEBULLET"
//   "PLCharging"
//   "RageAim"
//   "COMBAT_PL05_RAGE_PRESHOOT"
//   "COMBAT_UNHOLSTER"

/* [RE-AUTO c0]
   strings:
     ""PLLocomotion""
     ""UnholsteredIdle""
     ""PLCombat""
     ""NoBullet""
     ""COMBAT_PL05_NOBULLET""
     ""ChangeBullet""
     ""COMBAT_PL05_CHANGEBULLET""
     ""PLCharging""
     ""RageAim""
     ""COMBAT_PL05_RAGE_PRESHOOT"" */

void __fastcall FUN_10f7a080(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined1 local_b8 [56];
  undefined1 local_80 [56];
  undefined1 local_48 [36];
  undefined4 *local_24;
  undefined4 *local_20;
  code *local_10;
  code *local_c;
  undefined1 local_5;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 0x15b4);
  if (0xb < iVar2 - 1U) {
    return;
  }
  iVar1 = iVar2 * 3 + 0x8c;
  iVar3 = *(int *)(param_1 + iVar1 * 4);
  iVar1 = param_1 + iVar1 * 4;
  iVar4 = *(int *)(iVar1 + 4);
  if (iVar3 != iVar4) {
    FUN_10f63c40(iVar3,iVar4,&local_5);
  }
  if (iVar2 == 1) {
    FUN_10f574b0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    local_c = FUN_10f6b660;
    if (local_24 == local_20) {
      FUN_108716d0(local_24,&local_c,&local_5,1,1);
      uVar6 = extraout_ECX_03;
    }
    else {
      *local_24 = FUN_10f6b660;
      local_24 = local_24 + 1;
      uVar6 = extraout_ECX_02;
    }
    FUN_10f56fa0("COMBAT_UNHOLSTER",uVar6,local_48);
    FUN_10f593b0();
  }
  else {
    if (iVar2 != 5) goto LAB_10f7a2f5;
    FUN_10f56e50();
    local_10 = FUN_10f73a40;
    FUN_10f574b0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0("NoBullet");
    FUN_10f573e0();
    FUN_10fb6bf0(&local_10);
    FUN_10f56fa0("COMBAT_PL05_NOBULLET",extraout_ECX,local_b8);
    FUN_10f593b0();
    FUN_10f574b0();
    FUN_10f56fa0("PLCombat");
    FUN_10f56fa0("ChangeBullet");
    FUN_10f573e0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10fb6bf0(&local_10);
    FUN_10f56fa0("COMBAT_PL05_CHANGEBULLET",extraout_ECX_00,local_80);
    FUN_10f593b0();
    FUN_10f574b0();
    FUN_10f56fa0("PLCharging");
    FUN_10f56fa0("RageAim");
    FUN_10f573e0();
    FUN_10f56fa0("PLLocomotion");
    FUN_10f56fa0("UnholsteredIdle");
    FUN_10f573e0();
    FUN_10fb6bf0(&local_10);
    FUN_10f56fa0("COMBAT_PL05_RAGE_PRESHOOT",extraout_ECX_01,local_48);
    FUN_10f593b0();
    FUN_10f61a80();
    FUN_10f61a80();
  }
  FUN_10f61a80();
LAB_10f7a2f5:
  FUN_10fb2130(iVar1);
  puVar5 = *(undefined4 **)(param_1 + 0x110);
  local_c = FUN_10f74a60;
  if (puVar5 == *(undefined4 **)(param_1 + 0x114)) {
    FUN_108716d0(puVar5,&local_c,&local_5,1,1);
    return;
  }
  *puVar5 = FUN_10f74a60;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
  return;
}



/* ===== FUN_10f7e370 @ 10f7e370  size=453 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "COMBAT_CHARGE"
//   "INVALID_STATE"
//   "PlayerChargeBuff"

/* [RE-AUTO c0]
   strings:
     ""COMBAT_CHARGE""
     ""INVALID_STATE""
     ""PlayerChargeBuff"" */

void __fastcall FUN_10f7e370(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int *extraout_ECX;
  int *piVar6;
  code *local_18;
  code *local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_c = 0x26;
  puVar1 = (undefined4 *)param_1[0x11];
  piVar6 = param_1 + 0x10;
  if (puVar1 == (undefined4 *)param_1[0x12]) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
    piVar6 = extraout_ECX;
  }
  else {
    *puVar1 = 0x26;
    param_1[0x11] = param_1[0x11] + 4;
  }
  CInfoRecord__GetModelString("COMBAT_CHARGE",piVar6);
  FUN_10f58340();
  FUN_10f57080("INVALID_STATE");
  FUN_1083ab70("INVALID_STATE",0xd);
  piVar3 = (int *)CInfoRecord__GetModelString("PlayerChargeBuff");
  piVar6 = param_1 + 0x85;
  if (*piVar6 != *piVar3) {
    if (*(int *)(*piVar6 + -0xc) < 0) {
      if (*(int *)(*piVar3 + -0xc) < 0) goto LAB_10f7e434;
    }
    else {
      if (*(int *)(*piVar3 + -0xc) < 0) {
        FUN_1083ac70();
        *piVar6 = *piVar3;
        goto LAB_10f7e434;
      }
      FUN_1083ac70();
    }
    iVar4 = *piVar3;
    *piVar6 = iVar4;
    FUN_10c3dab0(iVar4 + -0xc);
  }
LAB_10f7e434:
  piVar6 = (int *)(local_10 + -0xc);
  if ((-1 < *piVar6) && (iVar4 = FUN_10c3dad0(piVar6), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_10 + -4));
    FUN_10c3d900(piVar6);
  }
  local_14 = FUN_10f9aa60;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  puVar1 = (undefined4 *)param_1[0x2c];
  if (puVar1 == (undefined4 *)param_1[0x2d]) {
    FUN_108716d0(puVar1,&local_14,&local_6,1,1);
  }
  else {
    *puVar1 = FUN_10f9aa60;
    param_1[0x2c] = param_1[0x2c] + 4;
  }
  (**(code **)(*param_1 + 0x94))();
  puVar1 = (undefined4 *)param_1[0x32];
  local_18 = FUN_10f9aea0;
  if (puVar1 == (undefined4 *)param_1[0x33]) {
    FUN_108716d0(puVar1,&local_18,&local_7,1,1);
  }
  else {
    *puVar1 = FUN_10f9aea0;
    param_1[0x32] = param_1[0x32] + 4;
  }
  iVar4 = param_1[0x82];
  if (param_1[0x81] != iVar4) {
    pcVar5 = (code *)FUN_10fae3c0(iVar4,iVar4,param_1[0x81],&local_8,0);
    pcVar2 = (code *)param_1[0x82];
    local_18 = pcVar5;
    for (; pcVar5 != pcVar2; pcVar5 = pcVar5 + 0x80) {
      FUN_10f68cd0();
    }
    param_1[0x82] = (int)local_18;
  }
  *(undefined1 *)(param_1 + 0x86) = 1;
  return;
}



/* ===== FUN_10f87670 @ 10f87670  size=356 ===== */
// strings:
//   "BoostBuffID"

/* [RE-AUTO c0]
   strings:
     ""BoostBuffID"" */

undefined1 __thiscall FUN_10f87670(int param_1,int *param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  bool bVar11;
  int *local_c;
  char local_5;
  
  local_5 = '\0';
  iVar3 = (**(code **)(*param_2 + 0xa0))();
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      (**(code **)(*param_2 + 0xa8))(&local_c,iVar8);
      pcVar7 = "BoostBuffID";
      pbVar4 = (byte *)(**(code **)(*local_c + 0x20))();
      do {
        bVar1 = *pbVar4;
        bVar11 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10f876d5:
          uVar5 = -(uint)bVar11 | 1;
          goto LAB_10f876da;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar11 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10f876d5;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_10f876da:
      if (uVar5 == 0) {
        cVar2 = (**(code **)(*local_c + 0x80))(&DAT_11de661c);
        if (cVar2 != '\0') {
          (**(code **)(*local_c + 0x74))(&DAT_11de661c,param_1 + 0x224);
          local_5 = '\x01';
        }
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 4))();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
    if (local_5 != '\0') {
      if (*(int *)(param_3 + -0xc) < 0) {
        puVar9 = &DAT_1201fc98;
      }
      else {
        FUN_10c3dab0(param_3 + -0xc);
        puVar9 = param_3;
      }
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
        (**(code **)(*param_2 + 4))();
      }
      piVar10 = (int *)(puVar9 + -0xc);
      if (-1 < *piVar10) {
        iVar3 = FUN_10c3dad0(piVar10);
        if (iVar3 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar9 + -4));
          FUN_10c3d900(piVar10);
        }
      }
      uVar6 = 1;
      goto LAB_10f8778e;
    }
  }
  uVar6 = 0;
LAB_10f8778e:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  piVar10 = (int *)(param_3 + -0xc);
  if (-1 < *piVar10) {
    iVar3 = FUN_10c3dad0(piVar10);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_3 + -4));
      FUN_10c3d900(piVar10);
    }
  }
  return uVar6;
}



/* ===== FUN_10f8bc00 @ 10f8bc00  size=502 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "PlayerChargeBuff"
//   "PLLocomotion"
//   "StartFall"
//   "PLCharging"
//   "NORMAL_FALL"

/* [RE-AUTO c0]
   strings:
     ""PlayerChargeBuff""
     ""PLLocomotion""
     ""StartFall""
     ""PLCharging""
     ""NORMAL_FALL"" */

void __fastcall FUN_10f8bc00(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *piVar4;
  int local_50 [8];
  int local_30;
  int local_24;
  code *local_18;
  code *local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_c = 0x12;
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  if (puVar1 == *(undefined4 **)(param_1 + 0x48)) {
    FUN_10f64460(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = 0x12;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 4;
  }
  *(undefined2 *)(param_1 + 0x1ac) = 0;
  piVar2 = (int *)CInfoRecord__GetModelString("PlayerChargeBuff");
  piVar4 = (int *)(param_1 + 0x200);
  if (*piVar4 != *piVar2) {
    if (*(int *)(*piVar4 + -0xc) < 0) {
      if (*(int *)(*piVar2 + -0xc) < 0) goto LAB_10f8bc97;
    }
    else {
      if (*(int *)(*piVar2 + -0xc) < 0) {
        FUN_1083ac70();
        *piVar4 = *piVar2;
        goto LAB_10f8bc97;
      }
      FUN_1083ac70();
    }
    iVar3 = *piVar2;
    *piVar4 = iVar3;
    FUN_10c3dab0(iVar3 + -0xc);
  }
LAB_10f8bc97:
  piVar4 = (int *)(local_10 + -0xc);
  if ((-1 < *piVar4) && (iVar3 = FUN_10c3dad0(piVar4), iVar3 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_10 + -4));
    FUN_10c3d900(piVar4);
  }
  *(undefined1 *)(param_1 + 0x204) = *(undefined1 *)(param_1 + 0x1af);
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_14 = FUN_10f9b620;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_14,&local_6,1,1);
  }
  else {
    *puVar1 = FUN_10f9b620;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 200);
  local_18 = FUN_10f9b1e0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xcc)) {
    FUN_108716d0(puVar1,&local_18,&local_7,1,1);
  }
  else {
    *puVar1 = FUN_10f9b1e0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 4;
  }
  FUN_10f5bd40(6,FUN_10f9b100);
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("StartFall");
  FUN_10f573e0();
  FUN_10f56fa0("PLCharging");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_FALL",extraout_ECX,local_50);
  FUN_10f593b0();
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_30 != 0) {
    FUN_10c3d5d0(local_30);
  }
  if (local_50[0] != 0) {
    FUN_10c3d5d0(local_50[0]);
  }
  return;
}



/* ===== FUN_10f98c50 @ 10f98c50  size=177 ===== */
// strings:
//   "Energy_Ability_PC.PRJ.RagePassPRJ"

/* [RE-AUTO c0]
   strings:
     ""Energy_Ability_PC.PRJ.RagePassPRJ"" */

void __thiscall FUN_10f98c50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_38 [48];
  int local_8;
  
  iVar5 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x1e8);
  local_8 = param_1;
  do {
    uVar3 = *(undefined4 *)(param_2 + iVar5 * 4);
    puVar4[6] = uVar3;
    piVar1 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x7c))(uVar3);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0xa8))();
      if (iVar2 == 0) {
        iVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0xc))
                          ("Energy_Ability_PC.PRJ.RagePassPRJ",&DAT_11d9d32b,1,1);
        if (iVar2 != 0) {
          uVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(local_8 + 0x18) + 0x100) + 0xc) + 0x78))
                            (local_38,0,0,0);
          uVar3 = FUN_10b300f0(uVar3);
          *puVar4 = uVar3;
        }
        puVar4[3] = 0x3f800000;
      }
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar5 < 3);
  return;
}



/* ===== FUN_10f98d30 @ 10f98d30  size=323 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "RAGE_TRANSMISSION"
//   "RageTransmission"
//   "NORMAL_IDLE"
//   "PLLocomotion"
//   "HolsteredIdle"
//   "PLBaseAction"

/* [RE-AUTO c0]
   strings:
     ""RAGE_TRANSMISSION""
     ""RageTransmission""
     ""NORMAL_IDLE""
     ""PLLocomotion""
     ""HolsteredIdle""
     ""PLBaseAction"" */

void __fastcall FUN_10f98d30(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int local_44 [8];
  int local_24;
  int local_18;
  code *local_c;
  undefined1 local_5;
  
  CInfoRecord__GetModelString("RAGE_TRANSMISSION",param_1);
  FUN_10f58340();
  FUN_10f56fa0("RageTransmission");
  puVar1 = *(undefined4 **)(param_1 + 100);
  if (puVar1 == *(undefined4 **)(param_1 + 0x68)) {
    FUN_10f649a0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_c;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_c = FUN_10fac4b0;
  if (puVar1 == *(undefined4 **)(param_1 + 0xb4)) {
    FUN_108716d0(puVar1,&local_c,&local_5,1,1);
  }
  else {
    *puVar1 = FUN_10fac4b0;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 4;
  }
  FUN_10f57080("NORMAL_IDLE");
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_10f574b0();
  FUN_10f56fa0("PLLocomotion");
  FUN_10f56fa0("HolsteredIdle");
  FUN_10f573e0();
  FUN_10f56fa0("PLBaseAction");
  FUN_10f56fa0(&DAT_11ce5cac);
  FUN_10f573e0();
  FUN_10f56fa0("NORMAL_IDLE",extraout_ECX,local_44);
  FUN_10f593b0();
  if (local_18 != 0) {
    FUN_10c3d5d0(local_18);
  }
  if (local_24 != 0) {
    FUN_10c3d5d0(local_24);
  }
  if (local_44[0] != 0) {
    FUN_10c3d5d0(local_44[0]);
  }
  return;
}



/* ===== FUN_10f98e80 @ 10f98e80  size=390 ===== */
// strings:
//   "weapon_item_attachment"
//   "melee_arrow_item"
//   "melee_arrow_secrect"
//   "bow_rage01_A"
//   "bow_rage01_B"

/* [RE-AUTO c0]
   strings:
     ""weapon_item_attachment""
     ""melee_arrow_item""
     ""melee_arrow_secrect""
     ""bow_rage01_A""
     ""bow_rage01_B"" */

void FUN_10f98e80(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x790))();
    cVar1 = FUN_10fdbb90();
    if (cVar1 != '\0') {
      piVar2 = (int *)(**(code **)(*(int *)param_1[3] + 0x1b8))(0);
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)(**(code **)(*piVar2 + 0x58))();
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("weapon_item_attachment");
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar3 = (int *)(**(code **)(*piVar2 + 0x6c))();
      if (piVar3 == (int *)0x0) {
        return;
      }
      iVar4 = (**(code **)(*piVar3 + 0x2c))();
      if (iVar4 == 0) {
        return;
      }
      (**(code **)(*piVar2 + 0x44))(1);
      return;
    }
  }
  if (param_2 == 10) {
    (**(code **)(*param_1 + 0x790))();
    FUN_10fdbbf0();
    piVar2 = (int *)param_1[3];
    if ((((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*param_1 + 0x790))(), iVar4 != 0)) &&
        (piVar2 = (int *)(**(code **)(*piVar2 + 0x1b8))(0), piVar2 != (int *)0x0)) &&
       ((piVar2 = (int *)(**(code **)(*piVar2 + 0x58))(), piVar2 != (int *)0x0 &&
        (iVar4 = (**(code **)(*piVar2 + 0x18))("weapon_item_attachment"), iVar4 != 0)))) {
      param_1[0x8a3] = iVar4;
      FUN_10a64020(0,"weapon_item_attachment");
      iVar4 = (**(code **)(*piVar2 + 0x18))("melee_arrow_item");
      if (iVar4 != 0) {
        FUN_10a64020(0,"melee_arrow_item");
      }
      iVar4 = (**(code **)(*piVar2 + 0x18))("melee_arrow_secrect");
      if (iVar4 != 0) {
        FUN_10a64020(0,"melee_arrow_secrect");
      }
      iVar4 = (**(code **)(*piVar2 + 0x18))("bow_rage01_A");
      if (iVar4 != 0) {
        FUN_10a64020(0,"bow_rage01_A");
      }
      iVar4 = (**(code **)(*piVar2 + 0x18))("bow_rage01_B");
      if (iVar4 != 0) {
        FUN_10a64020(0,"bow_rage01_B");
      }
    }
  }
  return;
}



/* ===== FUN_10fb8630 @ 10fb8630  size=3409 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "State"
//   "class"
//   "parent"
//   "mh_sharemem_addrinfo"
//   "Charge"
//   "NormalCombo"
//   "InteractEmotion"
//   "HolsteredIdle"
//   "HolsteredRun"
//   "UnholsteredIdle"
//   "UnholsteredRun"
//   "Defense"
//   "DefenseSuccess"
//   "DefenseFailed"
//   "Standard"
//   "CollectRestart"
//   "Dodge"
//   "UseItem"
//   "ChargingIdle"
//   "ChargingRun"

/* [RE-AUTO c0]
   strings:
     ""State""
     ""class""
     ""parent""
     ""mh_sharemem_addrinfo""
     ""Charge""
     ""NormalCombo""
     ""InteractEmotion""
     ""HolsteredIdle""
     ""HolsteredRun""
     ""UnholsteredIdle"" */

int * __thiscall FUN_10fb8630(int param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *puVar12;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  char *pcVar13;
  int *piVar14;
  bool bVar15;
  undefined4 *local_2c;
  int local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar5 = (**(code **)(*param_3 + 0x20))();
  CInfoRecord__GetModelString(uVar5);
  pcVar13 = "State";
  pbVar9 = local_1c;
  do {
    bVar2 = *pbVar9;
    bVar15 = bVar2 < (byte)*pcVar13;
    if (bVar2 != *pcVar13) {
LAB_10fb8676:
      uVar10 = -(uint)bVar15 | 1;
      goto LAB_10fb867b;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar9[1];
    bVar15 = bVar2 < (byte)pcVar13[1];
    if (bVar2 != pcVar13[1]) goto LAB_10fb8676;
    pbVar9 = pbVar9 + 2;
    pcVar13 = pcVar13 + 2;
  } while (bVar2 != 0);
  uVar10 = 0;
LAB_10fb867b:
  if (uVar10 != 0) {
    iVar6 = *(int *)(local_1c + -0xc);
    *param_2 = 0;
    if ((-1 < iVar6) && (iVar6 = FUN_10c3dad0(local_1c + -0xc), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_1c + -4));
      FUN_10c3d900(local_1c + -0xc);
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    iVar6 = param_4;
    piVar14 = (int *)(param_4 + -0xc);
    if (*piVar14 < 0) {
      return param_2;
    }
    iVar7 = FUN_10c3dad0(piVar14);
    if (0 < iVar7) {
      return param_2;
    }
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar14);
    return param_2;
  }
  local_14 = &DAT_1201fc98;
  cVar4 = (**(code **)(*param_3 + 0x80))(&DAT_11dbac80);
  if (cVar4 == '\0') {
    bVar15 = -1 < DAT_1201fc8c;
    *param_2 = 0;
    if ((bVar15) && (iVar6 = FUN_10c3dad0(&DAT_1201fc8c), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - DAT_1201fc94);
      FUN_10c3d900(&DAT_1201fc8c);
    }
    pbVar9 = local_1c + -0xc;
    if ((-1 < *(int *)pbVar9) && (iVar6 = FUN_10c3dad0(pbVar9), iVar6 < 1)) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_1c + -4));
      FUN_10c3d900(pbVar9);
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))();
    }
    iVar6 = param_4;
    piVar14 = (int *)(param_4 + -0xc);
    if (*piVar14 < 0) {
      return param_2;
    }
    iVar7 = FUN_10c3dad0(piVar14);
    if (0 < iVar7) {
      return param_2;
    }
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
    FUN_10c3d900(piVar14);
    return param_2;
  }
  pcVar13 = (char *)(**(code **)(*param_3 + 0x7c))(&DAT_11dbac80);
  if (pcVar13 == (char *)0x0) {
    iVar6 = 0;
  }
  else {
    pcVar11 = pcVar13;
    do {
      cVar4 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar4 != '\0');
    iVar6 = (int)pcVar11 - (int)(pcVar13 + 1);
  }
  FUN_1083ab70(pcVar13,iVar6);
  iVar6 = *(int *)(param_1 + 0x1b0);
  piVar14 = (int *)(param_1 + 0x1ac);
  iVar7 = FUN_10fde580(*piVar14,iVar6,&local_14,&local_5);
  if (iVar7 != iVar6) {
    if ((*(int *)(param_1 + 0x1b0) - *piVar14 & 0xfffffffcU) == 4) {
      *param_2 = 0;
    }
    else {
      FUN_10a4bb60(&local_14,extraout_ECX);
      iVar6 = FUN_10fb8080();
      *param_2 = iVar6;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
      }
    }
    goto LAB_10fb985a;
  }
  local_c = (undefined4 *)0x0;
  local_10 = &DAT_1201fc98;
  cVar4 = (**(code **)(*param_3 + 0x80))("class");
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_3 + 0x80))("parent");
    if (cVar4 == '\0') goto LAB_10fb9849;
    uVar5 = (**(code **)(*param_3 + 0x7c))("parent");
    CInfoRecord__GetModelString(uVar5);
    pbVar9 = &DAT_11d9d32b;
    do {
      bVar2 = *local_20;
      bVar15 = bVar2 < *pbVar9;
      if (bVar2 != *pbVar9) {
LAB_10fb88f0:
        uVar10 = -(uint)bVar15 | 1;
        goto LAB_10fb88f5;
      }
      if (bVar2 == 0) break;
      bVar2 = local_20[1];
      bVar15 = bVar2 < pbVar9[1];
      if (bVar2 != pbVar9[1]) goto LAB_10fb88f0;
      local_20 = local_20 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar2 != 0);
    uVar10 = 0;
LAB_10fb88f5:
    if (uVar10 != 0) {
      puVar12 = *(undefined4 **)(param_1 + 0x1b0);
      if (puVar12 == *(undefined4 **)(param_1 + 0x1b4)) {
        FUN_10af2cd0(puVar12,&local_14,&local_6,1,1);
        puVar12 = extraout_ECX_01;
      }
      else {
        if (puVar12 != (undefined4 *)0x0) {
          if (-1 < *(int *)(local_14 + -0xc)) {
            *puVar12 = local_14;
            FUN_10c3dab0(local_14 + -0xc);
            *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 4;
            puVar12 = extraout_ECX_00;
            goto LAB_10fb895a;
          }
          *puVar12 = &DAT_1201fc98;
        }
        *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 4;
      }
LAB_10fb895a:
      FUN_10a4bb60(&param_4,puVar12);
      FUN_10a4bb60(&local_20,extraout_ECX_02);
      if (param_3 != (int *)0x0) {
        (**(code **)*param_3)(param_3);
      }
      uVar5 = FUN_10fb9890(&local_2c);
      FUN_10fe47d0(uVar5);
      if (local_2c != (undefined4 *)0x0) {
        piVar1 = local_2c + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_2c)(1);
        }
      }
      iVar6 = *(int *)(param_1 + 0x1b0);
      iVar7 = FUN_10fde580(*piVar14,iVar6,&local_14,&local_7);
      uVar5 = extraout_ECX_03;
      if (iVar7 != iVar6) {
        FUN_10fed130(iVar7);
        uVar5 = extraout_ECX_04;
      }
      if (local_c != (undefined4 *)0x0) {
LAB_10fb89f9:
        FUN_104f6f60();
        FUN_10a4bb60(&local_14,extraout_ECX_05);
        FUN_10f58340();
        iVar6 = (**(code **)(*param_3 + 0xa0))();
        local_28 = 0;
        if (0 < iVar6) {
          do {
            (**(code **)(*param_3 + 0xa8))(&local_18,local_28);
            uVar5 = (**(code **)(*local_18 + 0x20))();
            CInfoRecord__GetModelString(uVar5);
            pbVar9 = local_24;
            pcVar13 = "Basics";
            pbVar8 = local_24;
            do {
              bVar2 = *pbVar8;
              bVar15 = bVar2 < (byte)*pcVar13;
              if (bVar2 != *pcVar13) {
LAB_10fb9610:
                uVar10 = -(uint)bVar15 | 1;
                goto LAB_10fb9615;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar8[1];
              bVar15 = bVar2 < (byte)pcVar13[1];
              if (bVar2 != pcVar13[1]) goto LAB_10fb9610;
              pbVar8 = pbVar8 + 2;
              pcVar13 = pcVar13 + 2;
            } while (bVar2 != 0);
            uVar10 = 0;
LAB_10fb9615:
            if (uVar10 == 0) {
              if (local_18 != (int *)0x0) {
                (**(code **)*local_18)(local_18,&param_4,&local_10);
              }
              FUN_10fb9dd0(local_c);
            }
            else {
              pcVar13 = "Extend";
              pbVar8 = local_24;
              do {
                bVar2 = *pbVar8;
                bVar15 = bVar2 < (byte)*pcVar13;
                if (bVar2 != *pcVar13) {
LAB_10fb9670:
                  uVar10 = -(uint)bVar15 | 1;
                  goto LAB_10fb9675;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar15 = bVar2 < (byte)pcVar13[1];
                if (bVar2 != pcVar13[1]) goto LAB_10fb9670;
                pbVar8 = pbVar8 + 2;
                pcVar13 = pcVar13 + 2;
              } while (bVar2 != 0);
              uVar10 = 0;
LAB_10fb9675:
              if (uVar10 == 0) {
                if (local_18 != (int *)0x0) {
                  (**(code **)*local_18)(local_18,&param_4,&local_10);
                }
                FUN_10fba900(local_c);
              }
              else {
                cVar4 = FUN_10a675d0(&local_24,"Transitions");
                if (cVar4 == '\0') {
                  cVar4 = FUN_10a675d0(&local_24,"DefenseSuperArmor");
                  if (cVar4 != '\0') {
                    if (local_18 != (int *)0x0) {
                      (**(code **)*local_18)(local_18,&param_4,&local_10);
                    }
                    FUN_10fbaba0(local_c);
                  }
                }
                else {
                  if (local_18 != (int *)0x0) {
                    (**(code **)*local_18)(local_18,&param_4,&local_10);
                  }
                  FUN_10fbab00(local_c);
                }
              }
            }
            pbVar8 = pbVar9 + -0xc;
            if ((-1 < *(int *)pbVar8) && (iVar7 = FUN_10c3dad0(pbVar8), iVar7 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar9 + -4));
              FUN_10c3d900(pbVar8);
            }
            if (local_18 != (int *)0x0) {
              (**(code **)(*local_18 + 4))();
            }
            local_28 = local_28 + 1;
          } while (local_28 < iVar6);
        }
        puVar3 = local_10;
        *param_2 = (int)local_c;
        if (local_c != (undefined4 *)0x0) {
          local_c[1] = local_c[1] + 1;
        }
        piVar14 = (int *)(local_10 + -0xc);
        if ((-1 < *piVar14) && (iVar6 = FUN_10c3dad0(piVar14), iVar6 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar3 + -4));
          FUN_10c3d900(piVar14);
        }
        if (local_c != (undefined4 *)0x0) {
          piVar14 = local_c + 1;
          *piVar14 = *piVar14 + -1;
          if (*piVar14 == 0) {
            (**(code **)*local_c)(1);
          }
        }
        puVar3 = local_14;
        piVar14 = (int *)(local_14 + -0xc);
        if ((-1 < *piVar14) && (iVar6 = FUN_10c3dad0(piVar14), iVar6 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar3 + -4));
          FUN_10c3d900(piVar14);
        }
        pbVar9 = local_1c + -0xc;
        if ((-1 < *(int *)pbVar9) && (iVar6 = FUN_10c3dad0(pbVar9), iVar6 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_1c + -4));
          FUN_10c3d900(pbVar9);
        }
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 4))();
        }
        iVar6 = param_4;
        piVar14 = (int *)(param_4 + -0xc);
        if ((-1 < *piVar14) && (iVar7 = FUN_10c3dad0(piVar14), iVar7 < 1)) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
          FUN_10c3d900(piVar14);
          return param_2;
        }
        return param_2;
      }
      FUN_10a4bb60(&local_14,uVar5);
      uVar5 = FUN_10fb8080();
      FUN_10fe4800(uVar5);
      if (local_c != (undefined4 *)0x0) goto LAB_10fb89f9;
    }
    *param_2 = 0;
    FUN_104f6f60();
  }
  else {
    uVar5 = (**(code **)(*param_3 + 0x7c))("class");
    FUN_1083ac30(uVar5);
    cVar4 = FUN_10a675d0(&local_10,"Charge");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x220);
    }
    cVar4 = FUN_10a675d0(&local_10,"NormalCombo");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x200);
    }
    cVar4 = FUN_10a675d0(&local_10,"InteractEmotion");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x200);
    }
    cVar4 = FUN_10a675d0(&local_10,"HolsteredIdle");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x2d0);
    }
    cVar4 = FUN_10a675d0(&local_10,"HolsteredRun");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x2d8);
    }
    cVar4 = FUN_10a675d0(&local_10,"UnholsteredIdle");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1f0);
    }
    cVar4 = FUN_10a675d0(&local_10,"UnholsteredRun");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1f8);
    }
    cVar4 = FUN_10a675d0(&local_10,"Defense");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e0);
    }
    cVar4 = FUN_10a675d0(&local_10,"DefenseSuccess");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1f8);
    }
    cVar4 = FUN_10a675d0(&local_10,"DefenseFailed");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1f8);
    }
    cVar4 = FUN_10a675d0(&local_10,"Standard");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"CollectRestart");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"Dodge");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x208);
    }
    cVar4 = FUN_10a675d0(&local_10,"UseItem");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1f0);
    }
    cVar4 = FUN_10a675d0(&local_10,"ChargingIdle");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x218);
    }
    cVar4 = FUN_10a675d0(&local_10,"ChargingRun");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x220);
    }
    cVar4 = FUN_10a675d0(&local_10,"ChargingSpinAttack");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x220);
    }
    cVar4 = FUN_10a675d0(&local_10,"GunAction");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x200);
    }
    cVar4 = FUN_10a675d0(&local_10,"WE05Reload");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x218);
    }
    cVar4 = FUN_10a675d0(&local_10,"WE05ReloadPerfect");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x218);
    }
    cVar4 = FUN_10a675d0(&local_10,"WE05Rage01Reload");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1f0);
    }
    cVar4 = FUN_10a675d0(&local_10,"WE05Rage01Aim");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1f0);
    }
    cVar4 = FUN_10a675d0(&local_10,"WE05Rage01Shoot");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x200);
    }
    cVar4 = FUN_10a675d0(&local_10,"WE09GunLanceRageAim");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x230);
    }
    cVar4 = FUN_10a675d0(&local_10,"Abnormal");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1d8);
    }
    cVar4 = FUN_10a675d0(&local_10,"Injury");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"InjuryFly");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(600);
    }
    cVar4 = FUN_10a675d0(&local_10,"InjuryRun");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x250);
    }
    cVar4 = FUN_10a675d0(&local_10,"SharpenWeapon");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1f0);
    }
    cVar4 = FUN_10a675d0(&local_10,"LanceRage02_charge");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x230);
    }
    cVar4 = FUN_10a675d0(&local_10,"SlashAxeDodge");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x208);
    }
    cVar4 = FUN_10a675d0(&local_10,"SlashAxeSwordRunningHolster");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x230);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel1Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel1Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel2Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel2Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel3Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel3Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel4Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel4Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel5Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel5Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel6Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel6Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel7Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel7Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel8Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel8Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x1e8);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel11Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(600);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel11Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(600);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel12Front");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(600);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLInjuryLevel12Back");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(600);
    }
    cVar4 = FUN_10a675d0(&local_10,"PLStateFly");
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x240);
    }
LAB_10fb9849:
    *param_2 = 0;
  }
  FUN_104f6f60();
LAB_10fb985a:
  FUN_104f6f60();
  FUN_104f6f60();
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))();
  }
  FUN_104f6f60();
  return param_2;
}



/* ===== FUN_10fb9dd0 @ 10fb9dd0  size=2851 ===== */
// calls: memcpy, CInfoRecord::GetModelString, atoi
// strings:
//   "EndAnims"
//   "EndAnim"
//   "Extensions"
//   "Extension"
//   "Callbacks"
//   "Property"
//   "Skill"
//   "NoEndLastStateSkills"
//   "NoEndLastStateSkill"
//   "CanRotation"
//   "Speed"
//   "StateType"
//   "value"
//   "Component"
//   "SpecialSelectAnim"
//   "NextHolsterStateName"

/* [RE-AUTO c0]
   calls: memcpy, atoi
   strings:
     ""EndAnims""
     ""EndAnim""
     ""Extensions""
     ""Extension""
     ""Callbacks""
     ""Property""
     ""Skill""
     ""NoEndLastStateSkills""
     ""NoEndLastStateSkill""
     ""CanRotation"" */

undefined4 FUN_10fb9dd0(int *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 extraout_ECX;
  byte *pbVar13;
  size_t sVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;
  int local_64;
  char *local_60;
  byte *local_5c;
  byte *local_58;
  byte *local_54;
  int local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  byte *local_38;
  undefined4 local_34;
  int *local_30;
  byte *local_2c;
  int *local_28;
  byte *local_24;
  int *local_20 [2];
  byte *local_18;
  int *local_14;
  int *local_10;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  iVar5 = (**(code **)(*param_2 + 0xa0))();
  local_50 = 0;
  if (0 < iVar5) {
    do {
      (**(code **)(*param_2 + 0xa8))(&local_14);
      local_24 = (byte *)(**(code **)(*local_14 + 0x20))();
      pbVar16 = &DAT_1201fc98;
      local_2c = &DAT_1201fc98;
      if (local_24 != (byte *)0x0) {
        pbVar13 = local_24;
        do {
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar1 != 0);
        sVar14 = (int)pbVar13 - (int)(local_24 + 1);
        if (sVar14 != 0) {
          puVar6 = (undefined4 *)FUN_10c3d780();
          DAT_123be268 = DAT_123be268 + sVar14 + 0xd;
          *puVar6 = 1;
          pbVar16 = (byte *)(puVar6 + 3);
          puVar6[1] = sVar14;
          puVar6[2] = sVar14;
          pbVar16[sVar14] = 0;
          local_2c = pbVar16;
          if (pbVar16 != local_24) {
            memcpy(pbVar16,local_24,sVar14);
          }
        }
      }
      pcVar12 = "EndAnims";
      pbVar13 = pbVar16;
      do {
        bVar1 = *pbVar13;
        bVar17 = bVar1 < (byte)*pcVar12;
        if (bVar1 != *pcVar12) {
LAB_10fb9ea0:
          uVar7 = -(uint)bVar17 | 1;
          goto LAB_10fb9ea5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar13[1];
        bVar17 = bVar1 < (byte)pcVar12[1];
        if (bVar1 != pcVar12[1]) goto LAB_10fb9ea0;
        pbVar13 = pbVar13 + 2;
        pcVar12 = pcVar12 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_10fb9ea5:
      if (uVar7 == 0) {
        local_58 = (byte *)(**(code **)(*local_14 + 0xa0))();
        local_24 = (byte *)0x0;
        if (0 < (int)local_58) {
          do {
            (**(code **)(*local_14 + 0xa8))(local_20);
            local_54 = (byte *)(**(code **)(*local_20[0] + 0x20))();
            pbVar16 = &DAT_1201fc98;
            if (local_54 != (byte *)0x0) {
              pbVar13 = local_54;
              do {
                bVar1 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar1 != 0);
              sVar14 = (int)pbVar13 - (int)(local_54 + 1);
              if (sVar14 != 0) {
                puVar6 = (undefined4 *)FUN_10c3d780();
                DAT_123be268 = DAT_123be268 + sVar14 + 0xd;
                *puVar6 = 1;
                pbVar16 = (byte *)(puVar6 + 3);
                puVar6[1] = sVar14;
                puVar6[2] = sVar14;
                pbVar16[sVar14] = 0;
                if (pbVar16 != local_54) {
                  memcpy(pbVar16,local_54,sVar14);
                }
              }
            }
            pcVar12 = "EndAnim";
            pbVar13 = pbVar16;
            do {
              bVar1 = *pbVar13;
              bVar17 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_10fb9f70:
                uVar7 = -(uint)bVar17 | 1;
                goto LAB_10fb9f75;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar13[1];
              bVar17 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_10fb9f70;
              pbVar13 = pbVar13 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_10fb9f75:
            if ((uVar7 == 0) && (cVar3 = (**(code **)(*local_20[0] + 0x80))(), cVar3 != '\0')) {
              local_54 = (byte *)(**(code **)(*local_20[0] + 0x7c))();
              pbVar13 = &DAT_1201fc98;
              if (local_54 != (byte *)0x0) {
                pbVar15 = local_54;
                do {
                  bVar1 = *pbVar15;
                  pbVar15 = pbVar15 + 1;
                } while (bVar1 != 0);
                sVar14 = (int)pbVar15 - (int)(local_54 + 1);
                if (sVar14 != 0) {
                  puVar6 = (undefined4 *)FUN_10c3d780(sVar14 + 0xd);
                  DAT_123be268 = DAT_123be268 + sVar14 + 0xd;
                  *puVar6 = 1;
                  pbVar13 = (byte *)(puVar6 + 3);
                  puVar6[1] = sVar14;
                  puVar6[2] = sVar14;
                  pbVar13[sVar14] = 0;
                  if (pbVar13 != local_54) {
                    memcpy(pbVar13,local_54,sVar14);
                  }
                }
              }
              FUN_10f56fa0(pbVar13);
              puVar6 = (undefined4 *)param_1[0x19];
              if (puVar6 == (undefined4 *)param_1[0x1a]) {
                local_9 = 0;
                local_5 = 0;
                FUN_10f649a0(puVar6,&local_34,&local_5,1);
              }
              else {
                local_7 = 0;
                local_8 = 0;
                if (puVar6 != (undefined4 *)0x0) {
                  *puVar6 = local_34;
                }
                param_1[0x19] = param_1[0x19] + 4;
              }
              if ((-1 < *(int *)(pbVar13 + -0xc)) && (iVar8 = FUN_10c3dad0(), iVar8 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar13 + -4));
                FUN_10c3d900();
              }
            }
            if ((-1 < *(int *)(pbVar16 + -0xc)) && (iVar8 = FUN_10c3dad0(), iVar8 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar16 + -4));
              FUN_10c3d900();
            }
            if (local_20[0] != (int *)0x0) {
              (**(code **)(*local_20[0] + 4))();
            }
            local_24 = local_24 + 1;
            pbVar16 = local_2c;
          } while ((int)local_24 < (int)local_58);
        }
      }
      else {
        pcVar12 = "Extensions";
        pbVar13 = pbVar16;
        do {
          bVar1 = *pbVar13;
          bVar17 = bVar1 < (byte)*pcVar12;
          if (bVar1 != *pcVar12) {
LAB_10fba0e2:
            uVar7 = -(uint)bVar17 | 1;
            goto LAB_10fba0e7;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar13[1];
          bVar17 = bVar1 < (byte)pcVar12[1];
          if (bVar1 != pcVar12[1]) goto LAB_10fba0e2;
          pbVar13 = pbVar13 + 2;
          pcVar12 = pcVar12 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_10fba0e7:
        if (uVar7 == 0) {
          pbVar13 = (byte *)(**(code **)(*local_14 + 0xa0))();
          local_24 = (byte *)0x0;
          local_58 = pbVar13;
          if (0 < (int)pbVar13) {
            do {
              pbVar15 = local_24;
              (**(code **)(*local_14 + 0xa8))(&local_30);
              local_58 = (byte *)(**(code **)(*local_30 + 0x20))();
              pbVar16 = &DAT_1201fc98;
              if (local_58 != (byte *)0x0) {
                pbVar15 = local_58;
                do {
                  bVar1 = *pbVar15;
                  pbVar15 = pbVar15 + 1;
                } while (bVar1 != 0);
                sVar14 = (int)pbVar15 - (int)(local_58 + 1);
                pbVar15 = local_24;
                if (sVar14 != 0) {
                  puVar6 = (undefined4 *)FUN_10c3d780();
                  DAT_123be268 = DAT_123be268 + sVar14 + 0xd;
                  *puVar6 = 1;
                  pbVar16 = (byte *)(puVar6 + 3);
                  puVar6[1] = sVar14;
                  puVar6[2] = sVar14;
                  pbVar16[sVar14] = 0;
                  pbVar15 = local_24;
                  if (pbVar16 != local_58) {
                    memcpy(pbVar16,local_58,sVar14);
                    pbVar15 = local_24;
                  }
                }
              }
              pcVar12 = "Extension";
              pbVar9 = pbVar16;
              do {
                bVar1 = *pbVar9;
                bVar17 = bVar1 < (byte)*pcVar12;
                if (bVar1 != *pcVar12) {
LAB_10fba1b0:
                  uVar7 = -(uint)bVar17 | 1;
                  goto LAB_10fba1b5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar17 = bVar1 < (byte)pcVar12[1];
                if (bVar1 != pcVar12[1]) goto LAB_10fba1b0;
                pbVar9 = pbVar9 + 2;
                pcVar12 = pcVar12 + 2;
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_10fba1b5:
              if (uVar7 == 0) {
                iVar8 = (**(code **)(*local_30 + 0x7c))();
                if ((iVar8 != 0) && (local_5c = (byte *)FUN_10fd9890(), local_5c != (byte *)0x0)) {
                  piVar2 = (int *)param_1[0x53];
                  if (piVar2 == (int *)param_1[0x54]) {
                    local_6 = 0;
                    FUN_108716d0(piVar2,&local_5c,&local_6,1);
                  }
                  else {
                    *piVar2 = (int)local_5c;
                    param_1[0x53] = param_1[0x53] + 4;
                    local_a = 0;
                    local_b = 0;
                  }
                }
              }
              if ((-1 < *(int *)(pbVar16 + -0xc)) && (iVar8 = FUN_10c3dad0(), iVar8 < 1)) {
                DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar16 + -4));
                FUN_10c3d900();
              }
              if (local_30 != (int *)0x0) {
                (**(code **)(*local_30 + 4))();
              }
              local_24 = pbVar15 + 1;
              pbVar16 = local_2c;
            } while ((int)local_24 < (int)pbVar13);
          }
        }
        else {
          pcVar12 = "Callbacks";
          pbVar13 = pbVar16;
          do {
            bVar1 = *pbVar13;
            bVar17 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_10fba284:
              uVar7 = -(uint)bVar17 | 1;
              goto LAB_10fba289;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar13[1];
            bVar17 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_10fba284;
            pbVar13 = pbVar13 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_10fba289:
          if (uVar7 == 0) {
            if (-1 < *(int *)(*param_3 + -0xc)) {
              FUN_10c3dab0(*param_3 + -0xc);
            }
            if (local_14 != (int *)0x0) {
              (**(code **)*local_14)(local_14,param_1);
            }
            FUN_10fbec40();
          }
          else {
            pcVar12 = "Property";
            pbVar13 = pbVar16;
            do {
              bVar1 = *pbVar13;
              bVar17 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_10fba300:
                uVar7 = -(uint)bVar17 | 1;
                goto LAB_10fba305;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar13[1];
              bVar17 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_10fba300;
              pbVar13 = pbVar13 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_10fba305:
            if (uVar7 == 0) {
              local_54 = (byte *)(**(code **)(*local_14 + 0xa0))();
              local_24 = (byte *)0x0;
              if (0 < (int)local_54) {
                do {
                  pbVar16 = local_24;
                  (**(code **)(*local_14 + 0xa8))(&local_10);
                  uVar10 = (**(code **)(*local_10 + 0x20))();
                  CInfoRecord__GetModelString(uVar10);
                  pbVar13 = local_18;
                  pcVar12 = "Skill";
                  pbVar15 = local_18;
                  do {
                    bVar1 = *pbVar15;
                    bVar17 = bVar1 < (byte)*pcVar12;
                    if (bVar1 != *pcVar12) {
LAB_10fba373:
                      uVar7 = -(uint)bVar17 | 1;
                      goto LAB_10fba378;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar15[1];
                    bVar17 = bVar1 < (byte)pcVar12[1];
                    if (bVar1 != pcVar12[1]) goto LAB_10fba373;
                    pbVar15 = pbVar15 + 2;
                    pcVar12 = pcVar12 + 2;
                  } while (bVar1 != 0);
                  uVar7 = 0;
LAB_10fba378:
                  if (uVar7 == 0) {
                    cVar3 = (**(code **)(*local_10 + 0x80))(&DAT_11dbb0b4);
                    if (cVar3 != '\0') {
                      uVar10 = (**(code **)(*local_10 + 0x7c))();
                      CInfoRecord__GetModelString(uVar10);
                      iVar8 = atoi(local_60);
                      param_1[0x71] = iVar8;
                      FUN_10f19240(iVar8,0xffffffff);
                      FUN_11398240();
                      pbVar13 = local_18;
                      if ((-1 < *(int *)(local_60 + -0xc)) &&
                         (iVar8 = FUN_10c3dad0(), pbVar13 = local_18, iVar8 < 1)) {
                        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_60 + -4));
                        FUN_10c3d900();
                        pbVar13 = local_18;
                      }
                    }
                  }
                  else {
                    pcVar12 = "NoEndLastStateSkills";
                    pbVar15 = local_18;
                    do {
                      bVar1 = *pbVar15;
                      bVar17 = bVar1 < (byte)*pcVar12;
                      if (bVar1 != *pcVar12) {
LAB_10fba440:
                        uVar7 = -(uint)bVar17 | 1;
                        goto LAB_10fba445;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar15[1];
                      bVar17 = bVar1 < (byte)pcVar12[1];
                      if (bVar1 != pcVar12[1]) goto LAB_10fba440;
                      pbVar15 = pbVar15 + 2;
                      pcVar12 = pcVar12 + 2;
                    } while (bVar1 != 0);
                    uVar7 = 0;
LAB_10fba445:
                    if (uVar7 == 0) {
                      pbVar15 = (byte *)(**(code **)(*local_10 + 0xa0))();
                      iVar8 = 0;
                      pbVar16 = local_24;
                      local_58 = pbVar15;
                      if (0 < (int)pbVar15) {
                        do {
                          (**(code **)(*local_10 + 0xa8))(&local_28);
                          uVar10 = (**(code **)(*local_28 + 0x20))();
                          CInfoRecord__GetModelString(uVar10);
                          pcVar12 = "NoEndLastStateSkill";
                          pbVar16 = local_38;
                          do {
                            bVar1 = *pbVar16;
                            bVar17 = bVar1 < (byte)*pcVar12;
                            if (bVar1 != *pcVar12) {
LAB_10fba4b0:
                              uVar7 = -(uint)bVar17 | 1;
                              goto LAB_10fba4b5;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar16[1];
                            bVar17 = bVar1 < (byte)pcVar12[1];
                            if (bVar1 != pcVar12[1]) goto LAB_10fba4b0;
                            pbVar16 = pbVar16 + 2;
                            pcVar12 = pcVar12 + 2;
                          } while (bVar1 != 0);
                          uVar7 = 0;
LAB_10fba4b5:
                          if ((uVar7 == 0) &&
                             (cVar3 = (**(code **)(*local_28 + 0x80))(), cVar3 != '\0')) {
                            uVar10 = (**(code **)(*local_28 + 0x7c))();
                            CInfoRecord__GetModelString(uVar10);
                            FUN_10f5ca90(local_64);
                            if ((-1 < *(int *)(local_64 + -0xc)) &&
                               (iVar11 = FUN_10c3dad0(), iVar11 < 1)) {
                              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_64 + -4));
                              FUN_10c3d900();
                            }
                          }
                          pbVar16 = local_38;
                          if ((-1 < *(int *)(local_38 + -0xc)) &&
                             (iVar11 = FUN_10c3dad0(), iVar11 < 1)) {
                            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar16 + -4));
                            FUN_10c3d900();
                          }
                          if (local_28 != (int *)0x0) {
                            (**(code **)(*local_28 + 4))();
                          }
                          iVar8 = iVar8 + 1;
                          pbVar16 = local_24;
                          pbVar13 = local_18;
                        } while (iVar8 < (int)pbVar15);
                      }
                    }
                    else {
                      pcVar12 = "CanRotation";
                      pbVar15 = local_18;
                      do {
                        bVar1 = *pbVar15;
                        bVar17 = bVar1 < (byte)*pcVar12;
                        if (bVar1 != *pcVar12) {
LAB_10fba590:
                          uVar7 = -(uint)bVar17 | 1;
                          goto LAB_10fba595;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar15[1];
                        bVar17 = bVar1 < (byte)pcVar12[1];
                        if (bVar1 != pcVar12[1]) goto LAB_10fba590;
                        pbVar15 = pbVar15 + 2;
                        pcVar12 = pcVar12 + 2;
                      } while (bVar1 != 0);
                      uVar7 = 0;
LAB_10fba595:
                      if (uVar7 == 0) {
                        cVar3 = (**(code **)(*local_10 + 0x80))(&DAT_11cc4d9c);
                        if (cVar3 != '\0') {
                          uVar10 = (**(code **)(*local_10 + 0x7c))();
                          CInfoRecord__GetModelString(uVar10);
                          uVar4 = FUN_10a675d0(local_3c,&DAT_11d9e058);
                          *(undefined1 *)(param_1 + 3) = uVar4;
                          FUN_104f6f60();
                        }
                      }
                      else {
                        pcVar12 = "Speed";
                        pbVar15 = local_18;
                        do {
                          bVar1 = *pbVar15;
                          bVar17 = bVar1 < (byte)*pcVar12;
                          if (bVar1 != *pcVar12) {
LAB_10fba614:
                            uVar7 = -(uint)bVar17 | 1;
                            goto LAB_10fba619;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar15[1];
                          bVar17 = bVar1 < (byte)pcVar12[1];
                          if (bVar1 != pcVar12[1]) goto LAB_10fba614;
                          pbVar15 = pbVar15 + 2;
                          pcVar12 = pcVar12 + 2;
                        } while (bVar1 != 0);
                        uVar7 = 0;
LAB_10fba619:
                        if (uVar7 == 0) {
                          cVar3 = (**(code **)(*local_10 + 0x80))(&DAT_11dbac80);
                          if (cVar3 != '\0') {
                            uVar10 = (**(code **)(*local_10 + 0x7c))();
                            iVar8 = FUN_113b3380(uVar10);
                            param_1[0x75] = iVar8;
                          }
                        }
                        else {
                          cVar3 = FUN_10a675d0(&local_18,"StateType");
                          if (cVar3 == '\0') {
                            cVar3 = FUN_10a675d0(&local_18,"Component");
                            if (cVar3 == '\0') {
                              cVar3 = FUN_10a675d0(&local_18,"SpecialSelectAnim");
                              if (cVar3 == '\0') {
                                local_58 = (byte *)FUN_10fb6fa0(pbVar13);
                                if ((local_58 != (byte *)0xffffffff) &&
                                   (cVar3 = (**(code **)(*local_10 + 0x80))(), cVar3 != '\0')) {
                                  uVar10 = (**(code **)(*local_10 + 0x7c))();
                                  CInfoRecord__GetModelString(uVar10);
                                  iVar8 = *param_1;
                                  FUN_10a4bb60(local_48,extraout_ECX);
                                  (**(code **)(iVar8 + 0x38))(local_58);
                                  FUN_104f6f60();
                                  pbVar16 = local_24;
                                }
                              }
                              else {
                                cVar3 = (**(code **)(*local_10 + 0x80))(&DAT_11cf99e0);
                                if (cVar3 != '\0') {
                                  uVar10 = (**(code **)(*local_10 + 0x7c))();
                                  FUN_10f57080(uVar10);
                                }
                              }
                            }
                            else {
                              cVar3 = (**(code **)(*local_10 + 0x80))("value");
                              if (cVar3 != '\0') {
                                uVar10 = (**(code **)(*local_10 + 0x7c))();
                                CInfoRecord__GetModelString(uVar10);
                                if (local_10 != (int *)0x0) {
                                  (**(code **)*local_10)(local_10);
                                }
                                FUN_10f6a780(local_44);
                                FUN_104f6f60();
                              }
                            }
                          }
                          else {
                            cVar3 = (**(code **)(*local_10 + 0x80))("value");
                            if (cVar3 != '\0') {
                              uVar10 = (**(code **)(*local_10 + 0x7c))();
                              CInfoRecord__GetModelString(uVar10);
                              FUN_10fb6f40(local_40);
                              FUN_104f6f60();
                            }
                          }
                        }
                      }
                    }
                  }
                  if ((-1 < *(int *)(pbVar13 + -0xc)) && (iVar8 = FUN_10c3dad0(), iVar8 < 1)) {
                    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar13 + -4));
                    FUN_10c3d900();
                  }
                  if (local_10 != (int *)0x0) {
                    (**(code **)(*local_10 + 4))();
                  }
                  local_24 = pbVar16 + 1;
                  pbVar16 = local_2c;
                } while ((int)local_24 < (int)local_54);
              }
            }
            else {
              pcVar12 = "NextHolsterStateName";
              pbVar13 = pbVar16;
              do {
                bVar1 = *pbVar13;
                bVar17 = bVar1 < (byte)*pcVar12;
                if (bVar1 != *pcVar12) {
LAB_10fba848:
                  uVar7 = -(uint)bVar17 | 1;
                  goto LAB_10fba84d;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar13[1];
                bVar17 = bVar1 < (byte)pcVar12[1];
                if (bVar1 != pcVar12[1]) goto LAB_10fba848;
                pbVar13 = pbVar13 + 2;
                pcVar12 = pcVar12 + 2;
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_10fba84d:
              if ((uVar7 == 0) && (cVar3 = (**(code **)(*local_14 + 0x80))(), cVar3 != '\0')) {
                uVar10 = (**(code **)(*local_14 + 0x7c))();
                CInfoRecord__GetModelString(uVar10);
                FUN_10f5c3b0(local_4c);
                FUN_104f6f60();
              }
            }
          }
        }
      }
      if ((-1 < *(int *)(pbVar16 + -0xc)) && (iVar8 = FUN_10c3dad0(), iVar8 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar16 + -4));
        FUN_10c3d900();
      }
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 4))();
      }
      local_50 = local_50 + 1;
    } while (local_50 < iVar5);
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return 1;
}



/* ===== FUN_10fbad40 @ 10fbad40  size=794 ===== */
// calls: CInfoRecord::GetModelString
// strings:
//   "DefaultNextState"
//   "Charge"
//   "LanceRage02_charge"
//   "ChargingIdle"
//   "ChargingRun"
//   "ChargingSpinAttack"
//   "NormalCombo"
//   "GunAction"
//   "WE05Reload"
//   "InteractEmotion"
//   "Dodge"
//   "SlashAxeDodge"

/* [RE-AUTO c0]
   strings:
     ""DefaultNextState""
     ""Charge""
     ""LanceRage02_charge""
     ""ChargingIdle""
     ""ChargingRun""
     ""ChargingSpinAttack""
     ""NormalCombo""
     ""GunAction""
     ""WE05Reload""
     ""InteractEmotion"" */

undefined1 FUN_10fbad40(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 uVar9;
  int *piVar10;
  bool bVar11;
  byte *local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  uVar4 = (**(code **)(*param_2 + 0x20))();
  CInfoRecord__GetModelString(uVar4);
  pcVar8 = "DefaultNextState";
  pbVar5 = local_18;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_10fbad80:
      uVar6 = -(uint)bVar11 | 1;
      goto LAB_10fbad85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_10fbad80;
    pbVar5 = pbVar5 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  uVar6 = 0;
LAB_10fbad85:
  if (uVar6 == 0) {
    cVar3 = (**(code **)(*param_2 + 0x80))(&DAT_11dbac80);
    puVar2 = param_4;
    if (cVar3 == '\0') {
      uVar9 = 0;
      goto LAB_10fbae47;
    }
    pcVar8 = "Charge";
    pbVar5 = (byte *)*param_4;
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_10fbade0:
        uVar6 = -(uint)bVar11 | 1;
        goto LAB_10fbade5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_10fbade0;
      pbVar5 = pbVar5 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_10fbade5:
    if (uVar6 != 0) {
      cVar3 = FUN_10a675d0(param_4,"LanceRage02_charge");
      if (cVar3 == '\0') {
        cVar3 = FUN_10a675d0(puVar2,"ChargingIdle");
        if (cVar3 == '\0') {
          cVar3 = FUN_10a675d0(puVar2,"ChargingRun");
          if (cVar3 == '\0') {
            cVar3 = FUN_10a675d0(puVar2,"ChargingSpinAttack");
            if (cVar3 == '\0') {
              cVar3 = FUN_10a675d0(puVar2,"NormalCombo");
              if (cVar3 == '\0') {
                cVar3 = FUN_10a675d0(puVar2,"GunAction");
                if (cVar3 == '\0') {
                  cVar3 = FUN_10a675d0(puVar2,"WE05Reload");
                  if (cVar3 == '\0') {
                    cVar3 = FUN_10a675d0(puVar2,"InteractEmotion");
                    if (cVar3 == '\0') {
                      cVar3 = FUN_10a675d0(puVar2,"Dodge");
                      if (cVar3 == '\0') {
                        cVar3 = FUN_10a675d0(puVar2,"SlashAxeDodge");
                        if (cVar3 == '\0') {
                          uVar4 = (**(code **)(*param_2 + 0x7c))(&DAT_11dbac80);
                          FUN_10f57080(uVar4);
                          goto LAB_10fbae45;
                        }
                      }
                      uVar4 = (**(code **)(*param_2 + 0x7c))(&DAT_11dbac80);
                      FUN_1083ac30(uVar4);
                      goto LAB_10fbae45;
                    }
                  }
                }
              }
              uVar4 = (**(code **)(*param_2 + 0x7c))(&DAT_11dbac80);
              CInfoRecord__GetModelString(uVar4);
              FUN_10a72410(local_10);
            }
            else {
              uVar4 = (**(code **)(*param_2 + 0x7c))(&DAT_11dbac80);
              CInfoRecord__GetModelString(uVar4);
              FUN_10a72410(local_c);
            }
          }
          else {
            uVar4 = (**(code **)(*param_2 + 0x7c))(&DAT_11dbac80);
            CInfoRecord__GetModelString(uVar4);
            FUN_10a72410(local_8);
          }
        }
        else {
          uVar4 = (**(code **)(*param_2 + 0x7c))(&DAT_11dbac80);
          CInfoRecord__GetModelString(uVar4);
          FUN_10a72410(&param_4);
        }
        FUN_104f6f60();
        goto LAB_10fbae45;
      }
    }
    uVar4 = (**(code **)(*param_2 + 0x7c))(&DAT_11dbac80);
    CInfoRecord__GetModelString(uVar4);
    FUN_10a72410(&local_14);
    piVar10 = (int *)(local_14 + -0xc);
    if (-1 < *piVar10) {
      iVar7 = FUN_10c3dad0(piVar10);
      if (iVar7 < 1) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_14 + -4));
        FUN_10c3d900(piVar10);
      }
    }
  }
LAB_10fbae45:
  uVar9 = 1;
LAB_10fbae47:
  pbVar5 = local_18 + -0xc;
  if (-1 < *(int *)pbVar5) {
    iVar7 = FUN_10c3dad0(pbVar5);
    if (iVar7 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_18 + -4));
      FUN_10c3d900(pbVar5);
    }
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return uVar9;
}



/* ===== FUN_10fbb060 @ 10fbb060  size=6779 ===== */
// calls: CInfoRecord::GetModelString, atoi, memcpy
// strings:
//   "Transition"
//   "stateName"
//   "skillID"
//   "rotType"
//   "camera"
//   "normal"
//   "default"
//   "rotLimit"
//   "TransNoCheckHolster"
//   "c2Process"
//   "false"
//   "windowName"
//   "dodge"
//   "combo"
//   "immedodge"
//   "Conditions"
//   "OnTransitionCallbacks"
//   "OnTransition"
//   "function"
//   "HolsterItem"

/* [RE-AUTO c0]
   calls: atoi, memcpy
   strings:
     ""Transition""
     ""stateName""
     ""skillID""
     ""rotType""
     ""camera""
     ""normal""
     ""default""
     ""rotLimit""
     ""TransNoCheckHolster""
     ""c2Process"" */

undefined1 __thiscall FUN_10fbb060(int param_1,int param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined1 *puVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 uVar10;
  char *extraout_ECX_26;
  undefined1 uVar11;
  byte *pbVar12;
  size_t sVar13;
  byte *pbVar14;
  int iVar15;
  int *piVar16;
  bool bVar17;
  int *piStack_2a4;
  char *pcStack_2a0;
  char *pcStack_29c;
  byte *pbStack_298;
  undefined4 uStack_294;
  int local_274 [8];
  int local_254;
  int local_248;
  int local_23c [8];
  int local_21c;
  int local_210;
  undefined4 local_1f8;
  int local_1f4;
  int local_1cc;
  undefined4 local_1c8;
  int local_1ac;
  undefined4 local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_194;
  int local_190;
  int local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_15c;
  int local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_e0;
  char *local_cc;
  int *local_c8;
  char *local_c0;
  undefined1 *local_bc;
  byte *local_b8;
  int local_b0;
  int local_a4;
  undefined1 local_9b;
  undefined1 local_95;
  byte *local_94;
  undefined1 local_8d;
  undefined4 local_8c;
  char *local_7c;
  int *local_78;
  undefined4 local_70;
  byte *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_44;
  byte *local_3c;
  int *local_34;
  int local_2c;
  byte *local_28;
  int *local_20;
  byte *local_14;
  int local_10;
  char *local_c;
  int *local_8;
  
  local_70 = 0;
  uStack_294 = 0x10fbb080;
  local_10 = param_1;
  uStack_294 = (**(code **)(*param_3 + 0x20))();
  pbStack_298 = (byte *)0x10fbb08c;
  CInfoRecord__GetModelString();
  pcVar9 = "Transition";
  pbVar5 = local_b8;
  do {
    bVar2 = *pbVar5;
    bVar17 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_10fbb0b7:
      uVar6 = -(uint)bVar17 | 1;
      goto LAB_10fbb0bc;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar17 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_10fbb0b7;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  uVar6 = 0;
LAB_10fbb0bc:
  if (uVar6 == 0) {
    pbStack_298 = (byte *)0x11cc85cc;
    pcStack_29c = (char *)0x10fbb0d6;
    cVar4 = (**(code **)(*param_3 + 0x80))();
    if (cVar4 != '\0') {
      iVar15 = 0;
      pbStack_298 = (byte *)0x10fbb0eb;
      FUN_10f574b0();
      pbStack_298 = (byte *)0x11dd90dc;
      pcStack_29c = (char *)0x10fbb0fd;
      cVar4 = (**(code **)(*param_3 + 0x80))();
      if (cVar4 != '\0') {
        pcStack_29c = "";
        pcStack_2a0 = (char *)0x10fbb118;
        CInfoRecord__GetModelString();
        pcStack_2a0 = "skillID";
        piStack_2a4 = (int *)0x10fbb125;
        pcVar9 = (char *)(**(code **)(*param_3 + 0x7c))();
        if (pcVar9 == (char *)0x0) {
          piStack_2a4 = (int *)0x0;
        }
        else {
          pcVar1 = pcVar9 + 1;
          do {
            cVar4 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
          piStack_2a4 = (int *)(pcVar9 + -(int)pcVar1);
        }
        FUN_1083ab70();
        iVar15 = atoi(local_7c);
        if ((((*(int **)(param_1 + 0x100) != (int *)0x0) &&
             (cVar4 = (**(code **)(**(int **)(param_1 + 0x100) + 0x228))(), cVar4 != '\0')) &&
            (iVar7 = FUN_10f19240(), iVar7 != 0)) &&
           ((0 < iVar15 && (cVar4 = (**(code **)(**(int **)(iVar7 + 0x14) + 0x58))(), cVar4 == '\0')
            ))) {
          FUN_116cd660();
          cVar4 = FUN_116cdb80();
          if (cVar4 == '\0') {
            FUN_104f6f60();
LAB_10fbd6eb:
            if (local_210 != 0) {
              pbStack_298 = (byte *)local_210;
              pcStack_29c = (char *)0x10fbd6fb;
              FUN_10c3d5d0();
            }
            if (local_21c != 0) {
              pbStack_298 = (byte *)local_21c;
              pcStack_29c = (char *)0x10fbd70e;
              FUN_10c3d5d0();
            }
            if (local_23c[0] != 0) {
              pbStack_298 = (byte *)local_23c[0];
              pcStack_29c = (char *)0x10fbd721;
              FUN_10c3d5d0();
            }
            uVar11 = 0;
            goto LAB_10fbd7ef;
          }
        }
        FUN_104f6f60();
      }
      pcStack_29c = "stateName";
      pcStack_2a0 = (char *)0x10fbb1c0;
      pcStack_2a0 = (char *)(**(code **)(*param_3 + 0x7c))();
      piStack_2a4 = (int *)0x10fbb1c9;
      CInfoRecord__GetModelString();
      piStack_2a4 = local_23c;
      FUN_10f56e60();
      FUN_10f593b0();
      if ((0 < iVar15) && (iVar7 = FUN_10f59500(), iVar7 != 0)) {
        *(int *)(iVar7 + 0x14) = iVar15;
      }
      cVar4 = (**(code **)(*param_3 + 0x80))();
      if (cVar4 != '\0') {
        (**(code **)(*param_3 + 0x7c))();
        CInfoRecord__GetModelString();
        iVar15 = 0;
        cVar4 = FUN_10a67670();
        if (((cVar4 == '\0') || (cVar4 = FUN_10a67670(), cVar4 == '\0')) ||
           (cVar4 = FUN_10a67670(), cVar4 == '\0')) {
          cVar4 = (**(code **)(*param_3 + 0x80))();
          if (cVar4 != '\0') {
            (**(code **)(*param_3 + 0x7c))();
            CInfoRecord__GetModelString();
            iVar15 = atoi(local_c0);
            FUN_104f6f60();
          }
          FUN_10f574b0();
          cVar4 = FUN_10a675d0();
          if (cVar4 == '\0') {
            cVar4 = FUN_10a675d0();
            if (cVar4 == '\0') {
              cVar4 = FUN_10a675d0();
              if (cVar4 != '\0') {
                local_1f8 = 3;
              }
            }
            else {
              local_1f8 = 2;
            }
          }
          else {
            local_1f8 = 1;
          }
          local_1f4 = iVar15;
          iVar15 = FUN_10f59500();
          if (iVar15 == 0) {
            FUN_10f56fa0();
            FUN_10f593b0();
          }
          else {
            *(undefined4 *)(iVar15 + 0xc) = local_1f8;
            *(int *)(iVar15 + 0x10) = local_1f4;
          }
          FUN_10f61a80();
        }
        FUN_104f6f60();
      }
      CInfoRecord__GetModelString();
      cVar4 = (**(code **)(*param_3 + 0x80))();
      if (cVar4 != '\0') {
        pcVar9 = (char *)(**(code **)(*param_3 + 0x7c))();
        if (pcVar9 != (char *)0x0) {
          do {
            cVar4 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
        }
        FUN_1083ab70();
        FUN_10a793e0();
        iVar15 = FUN_10f59500();
        if ((iVar15 != 0) && (cVar4 = FUN_10a675d0(), cVar4 != '\0')) {
          *(undefined1 *)(iVar15 + 0x1c) = 0;
        }
      }
      CInfoRecord__GetModelString();
      cVar4 = (**(code **)(*param_3 + 0x80))();
      if (cVar4 != '\0') {
        pcVar9 = (char *)(**(code **)(*param_3 + 0x7c))();
        if (pcVar9 != (char *)0x0) {
          do {
            cVar4 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
        }
        FUN_1083ab70();
        FUN_10a793e0();
        iVar15 = FUN_10f59500();
        if ((iVar15 != 0) && (cVar4 = FUN_10a675d0(), cVar4 != '\0')) {
          *(undefined1 *)(iVar15 + 0x1d) = 0;
        }
      }
      CInfoRecord__GetModelString();
      cVar4 = (**(code **)(*param_3 + 0x80))();
      if (cVar4 != '\0') {
        pcVar9 = (char *)(**(code **)(*param_3 + 0x7c))();
        if (pcVar9 != (char *)0x0) {
          do {
            cVar4 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
        }
        FUN_1083ab70();
        FUN_10a793e0();
        iVar15 = FUN_10f59500();
        if (iVar15 != 0) {
          cVar4 = FUN_10a675d0();
          if (cVar4 == '\0') {
            cVar4 = FUN_10a675d0();
            if (cVar4 == '\0') {
              cVar4 = FUN_10a675d0();
              *(uint *)(iVar15 + 0x18) = -(uint)(cVar4 != '\0') & 3;
            }
            else {
              *(undefined4 *)(iVar15 + 0x18) = 1;
            }
          }
          else {
            *(undefined4 *)(iVar15 + 0x18) = 2;
          }
        }
      }
      local_c8 = (int *)0x0;
      bVar17 = false;
      cVar4 = FUN_10f5be70();
      if (cVar4 == '\0') {
LAB_10fbb5ae:
        FUN_10f5bd40();
      }
      else {
        puVar8 = (undefined4 *)*local_c8;
        if (puVar8 == (undefined4 *)local_c8[1]) goto LAB_10fbb5ae;
        do {
          for (piVar16 = (int *)*puVar8; piVar16 != (int *)puVar8[1]; piVar16 = piVar16 + 2) {
            if ((code *)*piVar16 == FUN_10f6c270) {
              bVar17 = true;
              break;
            }
          }
          puVar8 = puVar8 + 6;
        } while (puVar8 != (undefined4 *)local_c8[1]);
        if (!bVar17) goto LAB_10fbb5ae;
      }
      local_e0 = (**(code **)(*param_3 + 0xa0))();
      local_b0 = 0;
      if (0 < local_e0) {
        do {
          (**(code **)(*param_3 + 0xa8))();
          local_3c = (byte *)(**(code **)(*local_20 + 0x20))();
          pbVar5 = &DAT_1201fc98;
          local_94 = &DAT_1201fc98;
          if (local_3c != (byte *)0x0) {
            pbVar12 = local_3c;
            do {
              bVar2 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar2 != 0);
            sVar13 = (int)pbVar12 - (int)(local_3c + 1);
            if (sVar13 != 0) {
              puVar8 = (undefined4 *)FUN_10c3d780();
              DAT_123be268 = DAT_123be268 + sVar13 + 0xd;
              *puVar8 = 1;
              pbVar5 = (byte *)(puVar8 + 3);
              puVar8[1] = sVar13;
              puVar8[2] = sVar13;
              pbVar5[sVar13] = 0;
              local_94 = pbVar5;
              if (pbVar5 != local_3c) {
                memcpy(pbVar5,local_3c,sVar13);
              }
            }
          }
          pcVar9 = "Conditions";
          pbVar12 = pbVar5;
          do {
            bVar2 = *pbVar12;
            bVar17 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_10fbb680:
              uVar6 = -(uint)bVar17 | 1;
              goto LAB_10fbb685;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            bVar17 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_10fbb680;
            pbVar12 = pbVar12 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar6 = 0;
LAB_10fbb685:
          if (uVar6 == 0) {
            local_28 = (byte *)(**(code **)(*local_20 + 0xa0))();
            local_8c = 0;
            if (0 < (int)local_28) {
              local_5c = param_2 + 0x13c;
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580();
            }
          }
          else {
            pcVar9 = "OnTransitionCallbacks";
            pbVar12 = pbVar5;
            do {
              bVar2 = *pbVar12;
              bVar17 = bVar2 < (byte)*pcVar9;
              if (bVar2 != *pcVar9) {
LAB_10fbc448:
                uVar6 = -(uint)bVar17 | 1;
                goto LAB_10fbc44d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar12[1];
              bVar17 = bVar2 < (byte)pcVar9[1];
              if (bVar2 != pcVar9[1]) goto LAB_10fbc448;
              pbVar12 = pbVar12 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar2 != 0);
            uVar6 = 0;
LAB_10fbc44d:
            if (uVar6 == 0) {
              local_68 = (int *)(**(code **)(*local_20 + 0xa0))();
              local_28 = (byte *)0x0;
              if (0 < (int)local_68) {
                iVar15 = 0;
                do {
                  (**(code **)(*local_20 + 0xa8))();
                  local_28 = (byte *)(**(code **)(*local_8 + 0x20))();
                  pbVar5 = &DAT_1201fc98;
                  if (local_28 != (byte *)0x0) {
                    pbVar12 = local_28;
                    do {
                      bVar2 = *pbVar12;
                      pbVar12 = pbVar12 + 1;
                    } while (bVar2 != 0);
                    sVar13 = (int)pbVar12 - (int)(local_28 + 1);
                    if (sVar13 != 0) {
                      puVar8 = (undefined4 *)FUN_10c3d780();
                      DAT_123be268 = DAT_123be268 + sVar13 + 0xd;
                      *puVar8 = 1;
                      pbVar5 = (byte *)(puVar8 + 3);
                      puVar8[1] = sVar13;
                      puVar8[2] = sVar13;
                      pbVar5[sVar13] = 0;
                      if (pbVar5 != local_28) {
                        memcpy(pbVar5,local_28,sVar13);
                      }
                    }
                  }
                  pcVar9 = "OnTransition";
                  pbVar12 = pbVar5;
                  do {
                    bVar2 = *pbVar12;
                    bVar17 = bVar2 < (byte)*pcVar9;
                    if (bVar2 != *pcVar9) {
LAB_10fbc510:
                      uVar6 = -(uint)bVar17 | 1;
                      goto LAB_10fbc515;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar12[1];
                    bVar17 = bVar2 < (byte)pcVar9[1];
                    if (bVar2 != pcVar9[1]) goto LAB_10fbc510;
                    pbVar12 = pbVar12 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar2 != 0);
                  uVar6 = 0;
LAB_10fbc515:
                  if ((uVar6 == 0) && (cVar4 = (**(code **)(*local_8 + 0x80))(), cVar4 != '\0')) {
                    (**(code **)(*local_8 + 0x7c))();
                    CInfoRecord__GetModelString();
                    local_bc = &DAT_1201fc98;
                    if (-1 < *(int *)(*param_4 + -0xc)) {
                      FUN_10c3dab0(*param_4 + -0xc);
                    }
                    if (local_8 != (int *)0x0) {
                      (**(code **)*local_8)(local_8);
                    }
                    cVar4 = FUN_10fbd840();
                    if (cVar4 != '\0') {
                      pcVar9 = "HolsterItem";
                      pbVar12 = local_14;
                      do {
                        bVar2 = *pbVar12;
                        bVar17 = bVar2 < (byte)*pcVar9;
                        if (bVar2 != *pcVar9) {
LAB_10fbc5d5:
                          uVar6 = -(uint)bVar17 | 1;
                          goto LAB_10fbc5da;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar12[1];
                        bVar17 = bVar2 < (byte)pcVar9[1];
                        if (bVar2 != pcVar9[1]) goto LAB_10fbc5d5;
                        pbVar12 = pbVar12 + 2;
                        pcVar9 = pcVar9 + 2;
                      } while (bVar2 != 0);
                      uVar6 = 0;
LAB_10fbc5da:
                      if (uVar6 == 0) {
                        if (-1 < *(int *)(local_c + -0xc)) {
                          FUN_10c3dab0();
                        }
                        if (-1 < *(int *)(*param_4 + -0xc)) {
                          FUN_10c3dab0();
                        }
                        if (local_8 != (int *)0x0) {
                          (**(code **)*local_8)();
                        }
                        CInfoRecord__GetModelString("OnTransition");
                        FUN_10fc2fc0();
                      }
                      else {
                        pcVar9 = "SetValue";
                        pbVar12 = local_14;
                        do {
                          bVar2 = *pbVar12;
                          bVar17 = bVar2 < (byte)*pcVar9;
                          if (bVar2 != *pcVar9) {
LAB_10fbc687:
                            uVar6 = -(uint)bVar17 | 1;
                            goto LAB_10fbc68c;
                          }
                          if (bVar2 == 0) break;
                          bVar2 = pbVar12[1];
                          bVar17 = bVar2 < (byte)pcVar9[1];
                          if (bVar2 != pcVar9[1]) goto LAB_10fbc687;
                          pbVar12 = pbVar12 + 2;
                          pcVar9 = pcVar9 + 2;
                        } while (bVar2 != 0);
                        uVar6 = 0;
LAB_10fbc68c:
                        if (uVar6 == 0) {
                          if (-1 < *(int *)(local_c + -0xc)) {
                            FUN_10c3dab0();
                          }
                          if (-1 < *(int *)(*param_4 + -0xc)) {
                            FUN_10c3dab0();
                          }
                          if (local_8 != (int *)0x0) {
                            (**(code **)*local_8)();
                          }
                          if (*(int *)(pbVar5 + -0xc) < 0) {
                            FUN_10fc0540();
                          }
                          else {
                            FUN_10c3dab0(pbVar5 + -0xc);
                            FUN_10fc0540();
                          }
                        }
                        else {
                          pcVar9 = "SetFpsMode";
                          pbVar12 = local_14;
                          do {
                            bVar2 = *pbVar12;
                            bVar17 = bVar2 < (byte)*pcVar9;
                            if (bVar2 != *pcVar9) {
LAB_10fbc754:
                              uVar6 = -(uint)bVar17 | 1;
                              goto LAB_10fbc759;
                            }
                            if (bVar2 == 0) break;
                            bVar2 = pbVar12[1];
                            bVar17 = bVar2 < (byte)pcVar9[1];
                            if (bVar2 != pcVar9[1]) goto LAB_10fbc754;
                            pbVar12 = pbVar12 + 2;
                            pcVar9 = pcVar9 + 2;
                          } while (bVar2 != 0);
                          uVar6 = 0;
LAB_10fbc759:
                          if (uVar6 == 0) {
                            FUN_10a4bb60();
                            uVar10 = 0;
                            if (local_8 != (int *)0x0) {
                              (**(code **)*local_8)();
                              uVar10 = extraout_ECX;
                            }
                            CInfoRecord__GetModelString("OnTransition",uVar10);
                            FUN_10fc3b60();
                          }
                          else {
                            cVar4 = FUN_10a675d0();
                            if (cVar4 == '\0') {
                              cVar4 = FUN_10a675d0();
                              if (cVar4 == '\0') {
                                cVar4 = FUN_10a675d0();
                                if (cVar4 == '\0') {
                                  cVar4 = FUN_10a675d0();
                                  if (cVar4 == '\0') {
                                    cVar4 = FUN_10a675d0();
                                    if (cVar4 == '\0') {
                                      cVar4 = FUN_10a675d0();
                                      if (cVar4 == '\0') {
                                        cVar4 = FUN_10a675d0();
                                        if (cVar4 == '\0') {
                                          cVar4 = FUN_10a675d0();
                                          if (cVar4 == '\0') {
                                            cVar4 = FUN_10a675d0();
                                            if (cVar4 == '\0') {
                                              cVar4 = FUN_10a675d0();
                                              if (cVar4 == '\0') {
                                                cVar4 = FUN_10a675d0();
                                                if (cVar4 == '\0') {
                                                  cVar4 = FUN_10a675d0();
                                                  if (cVar4 == '\0') {
                                                    cVar4 = FUN_10a675d0();
                                                    if (cVar4 == '\0') {
                                                      cVar4 = FUN_10a675d0();
                                                      if (cVar4 == '\0') {
                                                        cVar4 = FUN_10a675d0();
                                                        if (cVar4 == '\0') {
                                                          cVar4 = FUN_10a675d0();
                                                          if (cVar4 == '\0') {
                                                            cVar4 = FUN_10a675d0();
                                                            if (cVar4 == '\0') {
                                                              cVar4 = FUN_10a675d0();
                                                              if (cVar4 == '\0') {
                                                                cVar4 = FUN_10a675d0();
                                                                if (cVar4 == '\0') {
                                                                  cVar4 = FUN_10a675d0();
                                                                  if (cVar4 == '\0') {
                                                                    cVar4 = FUN_10a675d0();
                                                                    if (cVar4 == '\0') {
                                                                      cVar4 = FUN_10a675d0();
                                                                      if (cVar4 == '\0') {
                                                                        cVar4 = FUN_10a675d0();
                                                                        if (cVar4 == '\0') {
                                                                          cVar4 = FUN_10a675d0();
                                                                          if (cVar4 == '\0') {
                                                                            cVar4 = FUN_10a675d0();
                                                                            if (cVar4 == '\0') {
                                                                              cVar4 = FUN_10a675d0()
                                                                              ;
                                                                              if (cVar4 != '\0') {
                                                                                FUN_10a4bb60();
                                                                                uVar10 = 0;
                                                                                if (local_8 !=
                                                                                    (int *)0x0) {
                                                                                  (**(code **)*
                                                  local_8)();
                                                  uVar10 = extraout_ECX_25;
                                                  }
                                                  CInfoRecord__GetModelString("OnTransition",uVar10)
                                                  ;
                                                  FUN_10fcfb20();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_24;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcf3c0();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_23;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcec60();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_22;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fce500();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_21;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcdda0();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_20;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcd640();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_19;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fccee0();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_18;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcc780();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_17;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcc020();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_16;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcb8c0();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_15;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcb160();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_14;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fcaa00();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_13;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fca2a0();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_12;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fc9b40();
                                                  }
                                                  }
                                                  else {
                                                    FUN_10a4bb60();
                                                    uVar10 = 0;
                                                    if (local_8 != (int *)0x0) {
                                                      (**(code **)*local_8)();
                                                      uVar10 = extraout_ECX_11;
                                                    }
                                                    CInfoRecord__GetModelString
                                                              ("OnTransition",uVar10);
                                                    FUN_10fc93e0();
                                                  }
                                                }
                                                else {
                                                  FUN_10a4bb60();
                                                  uVar10 = 0;
                                                  if (local_8 != (int *)0x0) {
                                                    (**(code **)*local_8)();
                                                    uVar10 = extraout_ECX_10;
                                                  }
                                                  CInfoRecord__GetModelString("OnTransition",uVar10)
                                                  ;
                                                  FUN_10fc8c80();
                                                }
                                              }
                                              else {
                                                FUN_10a4bb60();
                                                uVar10 = 0;
                                                if (local_8 != (int *)0x0) {
                                                  (**(code **)*local_8)();
                                                  uVar10 = extraout_ECX_09;
                                                }
                                                CInfoRecord__GetModelString("OnTransition",uVar10);
                                                FUN_10fc8520();
                                              }
                                            }
                                            else {
                                              FUN_10a4bb60();
                                              uVar10 = 0;
                                              if (local_8 != (int *)0x0) {
                                                (**(code **)*local_8)();
                                                uVar10 = extraout_ECX_08;
                                              }
                                              CInfoRecord__GetModelString("OnTransition",uVar10);
                                              FUN_10fc7dc0();
                                            }
                                          }
                                          else {
                                            FUN_10a4bb60();
                                            uVar10 = 0;
                                            if (local_8 != (int *)0x0) {
                                              (**(code **)*local_8)();
                                              uVar10 = extraout_ECX_07;
                                            }
                                            CInfoRecord__GetModelString("OnTransition",uVar10);
                                            FUN_10fc7660();
                                          }
                                        }
                                        else {
                                          FUN_10a4bb60();
                                          uVar10 = 0;
                                          if (local_8 != (int *)0x0) {
                                            (**(code **)*local_8)();
                                            uVar10 = extraout_ECX_06;
                                          }
                                          CInfoRecord__GetModelString("OnTransition",uVar10);
                                          FUN_10fc6f00();
                                        }
                                      }
                                      else {
                                        FUN_10a4bb60();
                                        uVar10 = 0;
                                        if (local_8 != (int *)0x0) {
                                          (**(code **)*local_8)();
                                          uVar10 = extraout_ECX_05;
                                        }
                                        CInfoRecord__GetModelString("OnTransition",uVar10);
                                        FUN_10fc67a0();
                                      }
                                    }
                                    else {
                                      FUN_10a4bb60();
                                      uVar10 = 0;
                                      if (local_8 != (int *)0x0) {
                                        (**(code **)*local_8)();
                                        uVar10 = extraout_ECX_04;
                                      }
                                      CInfoRecord__GetModelString("OnTransition",uVar10);
                                      FUN_10fc6040();
                                    }
                                  }
                                  else {
                                    FUN_10a4bb60();
                                    uVar10 = 0;
                                    if (local_8 != (int *)0x0) {
                                      (**(code **)*local_8)();
                                      uVar10 = extraout_ECX_03;
                                    }
                                    CInfoRecord__GetModelString("OnTransition",uVar10);
                                    FUN_10fc58e0();
                                  }
                                }
                                else {
                                  FUN_10a4bb60();
                                  uVar10 = 0;
                                  if (local_8 != (int *)0x0) {
                                    (**(code **)*local_8)();
                                    uVar10 = extraout_ECX_02;
                                  }
                                  CInfoRecord__GetModelString("OnTransition",uVar10);
                                  FUN_10fc5180();
                                }
                              }
                              else {
                                FUN_10a4bb60();
                                uVar10 = 0;
                                if (local_8 != (int *)0x0) {
                                  (**(code **)*local_8)();
                                  uVar10 = extraout_ECX_01;
                                }
                                CInfoRecord__GetModelString("OnTransition",uVar10);
                                FUN_10fc4a20();
                              }
                            }
                            else {
                              FUN_10a4bb60();
                              uVar10 = 0;
                              if (local_8 != (int *)0x0) {
                                (**(code **)*local_8)();
                                uVar10 = extraout_ECX_00;
                              }
                              CInfoRecord__GetModelString("OnTransition",uVar10);
                              FUN_10fc42c0();
                            }
                          }
                        }
                      }
                    }
                    puVar3 = local_bc;
                    if ((-1 < *(int *)(local_bc + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
                      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(puVar3 + -4));
                      FUN_10c3d900();
                    }
                    pbVar12 = local_14;
                    if ((-1 < *(int *)(local_14 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
                      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar12 + -4));
                      FUN_10c3d900();
                    }
                  }
                  if ((-1 < *(int *)(pbVar5 + -0xc)) && (iVar7 = FUN_10c3dad0(), iVar7 < 1)) {
                    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar5 + -4));
                    FUN_10c3d900();
                  }
                  if (local_8 != (int *)0x0) {
                    (**(code **)(*local_8 + 4))();
                  }
                  iVar15 = iVar15 + 1;
                  pbVar5 = local_94;
                } while (iVar15 < (int)local_68);
              }
            }
            else {
              pcVar9 = "AGInputs";
              pbVar12 = pbVar5;
              do {
                bVar2 = *pbVar12;
                bVar17 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_10fbd0d6:
                  uVar6 = -(uint)bVar17 | 1;
                  goto LAB_10fbd0db;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar12[1];
                bVar17 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_10fbd0d6;
                pbVar12 = pbVar12 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              uVar6 = 0;
LAB_10fbd0db:
              if (uVar6 == 0) {
                iVar15 = (**(code **)(*local_20 + 0xa0))();
                local_a4 = iVar15;
                FUN_10f574b0();
                local_3c = (byte *)&local_1cc;
                pbVar12 = (byte *)FUN_10f59500();
                local_6c = pbVar12;
                if ((pbVar12 != (byte *)0x0) &&
                   (local_3c = pbVar12, cVar4 = (**(code **)(*local_20 + 0x80))(), cVar4 != '\0')) {
                  FUN_10f57450();
                }
                local_44 = 0;
                if (0 < iVar15) {
                  do {
                    (**(code **)(*local_20 + 0xa8))();
                    local_28 = (byte *)(**(code **)(*local_34 + 0x20))();
                    pbVar12 = &DAT_1201fc98;
                    if (local_28 != (byte *)0x0) {
                      pbVar14 = local_28;
                      do {
                        bVar2 = *pbVar14;
                        pbVar14 = pbVar14 + 1;
                      } while (bVar2 != 0);
                      sVar13 = (int)pbVar14 - (int)(local_28 + 1);
                      if (sVar13 != 0) {
                        puVar8 = (undefined4 *)FUN_10c3d780();
                        DAT_123be268 = DAT_123be268 + sVar13 + 0xd;
                        *puVar8 = 1;
                        pbVar12 = (byte *)(puVar8 + 3);
                        puVar8[1] = sVar13;
                        puVar8[2] = sVar13;
                        pbVar12[sVar13] = 0;
                        if (pbVar12 != local_28) {
                          memcpy(pbVar12,local_28,sVar13);
                        }
                      }
                    }
                    pcVar9 = "AGInput";
                    pbVar14 = pbVar12;
                    do {
                      bVar2 = *pbVar14;
                      bVar17 = bVar2 < (byte)*pcVar9;
                      if (bVar2 != *pcVar9) {
LAB_10fbd1f0:
                        uVar6 = -(uint)bVar17 | 1;
                        goto LAB_10fbd1f5;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar14[1];
                      bVar17 = bVar2 < (byte)pcVar9[1];
                      if (bVar2 != pcVar9[1]) goto LAB_10fbd1f0;
                      pbVar14 = pbVar14 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar2 != 0);
                    uVar6 = 0;
LAB_10fbd1f5:
                    if ((uVar6 == 0) && (cVar4 = (**(code **)(*local_34 + 0x80))(), cVar4 != '\0'))
                    {
                      (**(code **)(*local_34 + 0x7c))();
                      CInfoRecord__GetModelString();
                      cVar4 = (**(code **)(*local_34 + 0x80))();
                      if (cVar4 == '\0') {
                        piVar16 = local_78 + -3;
                        if (-1 < *piVar16) {
                          pcStack_29c = (char *)0x10fbd56e;
                          pbStack_298 = (byte *)piVar16;
                          iVar15 = FUN_10c3dad0();
                          if (iVar15 < 1) {
                            DAT_123be268 = DAT_123be268 + (-0xd - local_78[-1]);
                            pcStack_29c = (char *)0x10fbd589;
                            pbStack_298 = (byte *)piVar16;
                            FUN_10c3d900();
                          }
                        }
                        pbVar14 = pbVar12 + -0xc;
                        if (-1 < *(int *)pbVar14) {
                          pcStack_29c = (char *)0x10fbd59a;
                          pbStack_298 = pbVar14;
                          iVar15 = FUN_10c3dad0();
                          if (iVar15 < 1) {
                            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar12 + -4));
                            pcStack_29c = (char *)0x10fbd5b7;
                            pbStack_298 = pbVar14;
                            FUN_10c3d900();
                          }
                        }
                        if (local_34 != (int *)0x0) {
                          pbStack_298 = (byte *)0x10fbd5cd;
                          (**(code **)(*local_34 + 4))();
                        }
                        if (local_1a0 != 0) {
                          pbStack_298 = (byte *)local_1a0;
                          pcStack_29c = (char *)0x10fbd5dd;
                          FUN_10c3d5d0();
                        }
                        if (local_1ac != 0) {
                          pbStack_298 = (byte *)local_1ac;
                          pcStack_29c = (char *)0x10fbd5f0;
                          FUN_10c3d5d0();
                        }
                        if (local_1cc != 0) {
                          pbStack_298 = (byte *)local_1cc;
                          pcStack_29c = (char *)0x10fbd603;
                          FUN_10c3d5d0();
                        }
                        pbVar12 = pbVar5 + -0xc;
                        if (-1 < *(int *)pbVar12) {
                          pcStack_29c = (char *)0x10fbd614;
                          pbStack_298 = pbVar12;
                          iVar15 = FUN_10c3dad0();
                          if (iVar15 < 1) {
                            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar5 + -4));
                            pcStack_29c = (char *)0x10fbd62c;
                            pbStack_298 = pbVar12;
                            FUN_10c3d900();
                          }
                        }
                        if (local_20 != (int *)0x0) {
                          pbStack_298 = (byte *)0x10fbd63b;
                          (**(code **)(*local_20 + 4))();
                        }
                        piVar16 = (int *)(local_2c + -0xc);
                        if (-1 < *piVar16) {
                          pcStack_29c = (char *)0x10fbd64c;
                          pbStack_298 = (byte *)piVar16;
                          iVar15 = FUN_10c3dad0();
                          if (iVar15 < 1) {
                            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_2c + -4));
                            pcStack_29c = (char *)0x10fbd664;
                            pbStack_298 = (byte *)piVar16;
                            FUN_10c3d900();
                          }
                        }
                        piVar16 = (int *)(local_64 + -0xc);
                        if (-1 < *piVar16) {
                          pcStack_29c = (char *)0x10fbd678;
                          pbStack_298 = (byte *)piVar16;
                          iVar15 = FUN_10c3dad0();
                          if (iVar15 < 1) {
                            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_64 + -4));
                            pcStack_29c = (char *)0x10fbd690;
                            pbStack_298 = (byte *)piVar16;
                            FUN_10c3d900();
                          }
                        }
                        piVar16 = (int *)(local_60 + -0xc);
                        if (-1 < *piVar16) {
                          pcStack_29c = (char *)0x10fbd6a4;
                          pbStack_298 = (byte *)piVar16;
                          iVar15 = FUN_10c3dad0();
                          if (iVar15 < 1) {
                            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_60 + -4));
                            pcStack_29c = (char *)0x10fbd6bc;
                            pbStack_298 = (byte *)piVar16;
                            FUN_10c3d900();
                          }
                        }
                        piVar16 = (int *)(local_c + -0xc);
                        if (-1 < *piVar16) {
                          pcStack_29c = (char *)0x10fbd6d0;
                          pbStack_298 = (byte *)piVar16;
                          iVar15 = FUN_10c3dad0();
                          if (iVar15 < 1) {
                            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_c + -4));
                            pcStack_29c = (char *)0x10fbd6e8;
                            pbStack_298 = (byte *)piVar16;
                            FUN_10c3d900();
                          }
                        }
                        goto LAB_10fbd6eb;
                      }
                      pbStack_298 = (byte *)0x11dbadac;
                      pcStack_29c = (char *)0x10fbd254;
                      pcStack_29c = (char *)(**(code **)(*local_34 + 0x7c))();
                      pcStack_2a0 = (char *)0x10fbd260;
                      CInfoRecord__GetModelString();
                      piStack_2a4 = (int *)(local_cc + -0xc);
                      local_68 = piStack_2a4;
                      if (*piStack_2a4 < 0) {
                        pcStack_2a0 = &DAT_1201fc98;
                      }
                      else {
                        pcStack_2a0 = local_cc;
                        FUN_10c3dab0();
                      }
                      if (local_78[-3] < 0) {
                        piStack_2a4 = (int *)&DAT_1201fc98;
                      }
                      else {
                        piStack_2a4 = local_78;
                        FUN_10c3dab0();
                      }
                      FUN_10fb0140();
                      local_28 = (byte *)&piStack_2a4;
                      FUN_10f56e60();
                      FUN_10f56e60();
                      FUN_10f573e0();
                      FUN_10fb1a30();
                      piVar16 = local_68;
                      if ((-1 < *local_68) && (iVar15 = FUN_10c3dad0(), iVar15 < 1)) {
                        DAT_123be268 = DAT_123be268 + (-0xd - piVar16[2]);
                        FUN_10c3d900();
                      }
                      FUN_104f6f60();
                    }
                    if ((-1 < *(int *)(pbVar12 + -0xc)) && (iVar15 = FUN_10c3dad0(), iVar15 < 1)) {
                      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar12 + -4));
                      FUN_10c3d900();
                    }
                    if (local_34 != (int *)0x0) {
                      (**(code **)(*local_34 + 4))();
                    }
                    local_44 = local_44 + 1;
                    pbVar12 = local_6c;
                  } while (local_44 < local_a4);
                }
                if (pbVar12 == (byte *)0x0) {
                  FUN_10f56e60();
                  FUN_10f593b0();
                }
                local_148 = local_1a0;
                local_160 = local_19c;
                local_188 = local_1a0;
                local_168 = local_19c;
                local_8d = 0;
                local_18c = local_1a0;
                local_170 = local_19c;
                if (local_1a0 != 0) {
                  FUN_10c3d5d0();
                }
                local_190 = local_1ac;
                local_17c = local_1a8;
                local_14c = local_1ac;
                local_154 = local_1a8;
                local_9b = 0;
                local_15c = local_1ac;
                local_164 = local_1a8;
                if (local_1ac != 0) {
                  FUN_10c3d5d0();
                }
                local_16c = local_1cc;
                local_180 = local_1c8;
                local_150 = local_1cc;
                local_194 = local_1c8;
                local_95 = 0;
                local_158 = local_1cc;
                local_184 = local_1c8;
                if (local_1cc != 0) {
                  FUN_10c3d5d0();
                }
              }
            }
          }
          if ((-1 < *(int *)(pbVar5 + -0xc)) && (iVar15 = FUN_10c3dad0(), iVar15 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pbVar5 + -4));
            FUN_10c3d900();
          }
          if (local_20 != (int *)0x0) {
            (**(code **)(*local_20 + 4))();
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < local_e0);
      }
      FUN_10f574b0();
      iVar15 = FUN_10f59500();
      if (iVar15 == 0) {
        pbStack_298 = (byte *)local_274;
        pcStack_2a0 = local_c;
        piStack_2a4 = (int *)0x10fbd4df;
        pcStack_29c = extraout_ECX_26;
        FUN_10f56fa0();
        piStack_2a4 = (int *)0x10fbd4e6;
        FUN_10f593b0();
      }
      if (local_248 != 0) {
        pbStack_298 = (byte *)local_248;
        pcStack_29c = (char *)0x10fbd4f6;
        FUN_10c3d5d0();
      }
      if (local_254 != 0) {
        pbStack_298 = (byte *)local_254;
        pcStack_29c = (char *)0x10fbd509;
        FUN_10c3d5d0();
      }
      if (local_274[0] != 0) {
        pbStack_298 = (byte *)local_274[0];
        pcStack_29c = (char *)0x10fbd51c;
        FUN_10c3d5d0();
      }
      piVar16 = (int *)(local_2c + -0xc);
      if (-1 < *piVar16) {
        pcStack_29c = (char *)0x10fbd534;
        pbStack_298 = (byte *)piVar16;
        iVar15 = FUN_10c3dad0();
        if (iVar15 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_2c + -4));
          pcStack_29c = (char *)0x10fbd555;
          pbStack_298 = (byte *)piVar16;
          FUN_10c3d900();
        }
      }
      piVar16 = (int *)(local_64 + -0xc);
      if (-1 < *piVar16) {
        pcStack_29c = (char *)0x10fbd741;
        pbStack_298 = (byte *)piVar16;
        iVar15 = FUN_10c3dad0();
        if (iVar15 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_64 + -4));
          pcStack_29c = (char *)0x10fbd759;
          pbStack_298 = (byte *)piVar16;
          FUN_10c3d900();
        }
      }
      piVar16 = (int *)(local_60 + -0xc);
      if (-1 < *piVar16) {
        pcStack_29c = (char *)0x10fbd76d;
        pbStack_298 = (byte *)piVar16;
        iVar15 = FUN_10c3dad0();
        if (iVar15 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_60 + -4));
          pcStack_29c = (char *)0x10fbd785;
          pbStack_298 = (byte *)piVar16;
          FUN_10c3d900();
        }
      }
      piVar16 = (int *)(local_c + -0xc);
      if (-1 < *piVar16) {
        pcStack_29c = (char *)0x10fbd799;
        pbStack_298 = (byte *)piVar16;
        iVar15 = FUN_10c3dad0();
        if (iVar15 < 1) {
          DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_c + -4));
          pcStack_29c = (char *)0x10fbd7b1;
          pbStack_298 = (byte *)piVar16;
          FUN_10c3d900();
        }
      }
      if (local_210 != 0) {
        pbStack_298 = (byte *)local_210;
        pcStack_29c = (char *)0x10fbd7c4;
        FUN_10c3d5d0();
      }
      if (local_21c != 0) {
        pbStack_298 = (byte *)local_21c;
        pcStack_29c = (char *)0x10fbd7d7;
        FUN_10c3d5d0();
      }
      if (local_23c[0] != 0) {
        pbStack_298 = (byte *)local_23c[0];
        pcStack_29c = (char *)0x10fbd7ea;
        FUN_10c3d5d0();
      }
    }
  }
  uVar11 = 1;
LAB_10fbd7ef:
  pbVar5 = local_b8 + -0xc;
  if (-1 < *(int *)pbVar5) {
    pcStack_29c = (char *)0x10fbd803;
    pbStack_298 = pbVar5;
    iVar15 = FUN_10c3dad0();
    if (iVar15 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_b8 + -4));
      pcStack_29c = (char *)0x10fbd81e;
      pbStack_298 = pbVar5;
      FUN_10c3d900();
    }
  }
  if (param_3 != (int *)0x0) {
    pbStack_298 = (byte *)0x10fbd82d;
    (**(code **)(*param_3 + 4))();
  }
  return uVar11;
}



