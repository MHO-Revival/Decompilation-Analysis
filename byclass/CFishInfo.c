// ===== class CFishInfo  (3 recovered methods) =====

/* --- CFishInfo::GetManagers @ 10bcb210 --- */
// [RE-AUTO c3]
// id: CFishInfo::GetManagers
// calls: rand
// strings:
//   ""CFishInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CFishInfo""
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""
//   ""fish.pro""
//   ""TargetPos""
//   ""ShowStart""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CFishInfo::GetManagers
   calls: rand
   strings:
     ""CFishInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CFishInfo""
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo""
     ""fish.pro""
     ""TargetPos""
     ""ShowStart"" */

void __fastcall CFishInfo__GetManagers(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  float10 fVar4;
  bool bVar5;
  float *pfVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined4 uVar14;
  int **ppiVar15;
  int **ppiVar16;
  int ****ppppiVar17;
  float10 fVar18;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  float local_88;
  int *local_84;
  undefined4 local_80;
  undefined8 local_7c;
  float local_74;
  undefined4 local_70;
  undefined1 local_6c [12];
  undefined1 *local_60;
  undefined4 *local_5c;
  float local_58;
  float local_54;
  int local_50;
  float *local_4c;
  float *local_48;
  int local_44;
  int ***local_40 [3];
  undefined8 local_34;
  float local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  int **local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_18 = 0;
  piVar9 = (int *)(**(code **)(*(int *)(param_1 + 4) + 4))();
  if (piVar9 != (int *)0x0) {
    puVar10 = (undefined8 *)(**(code **)(**(int **)(param_1 + 0x40) + 0x28))();
    local_34 = *puVar10;
    local_74 = *(float *)(puVar10 + 1);
    local_2c = local_74;
    local_1c = (int *)local_74;
    for (iVar11 = (**(code **)(*piVar9 + 0x21c))(); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x40)) {
      piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                                (*(undefined4 *)(iVar11 + 0x20));
      if (piVar9 != (int *)0x0) {
        puVar10 = (undefined8 *)(**(code **)(*piVar9 + 0x94))();
        local_34 = *puVar10;
        local_2c = *(float *)(puVar10 + 1);
        local_1c = (int *)local_2c;
        break;
      }
    }
    local_88 = (float)local_1c - DAT_11cbbbd4;
    iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 0x1ac);
    if (iVar11 != 0) {
      local_90 = local_34;
      FUN_116d2630(iVar11 + 0x68);
      piVar9 = (int *)0x0;
      local_24 = 0;
      local_20 = (int *)0x0;
      local_1c = (int *)0x0;
      ppppiVar17 = (int ****)local_40[0];
      if ((int ****)local_40[0] != local_40) {
        do {
          local_10 = (int **)ppppiVar17[2];
          if (local_20 == piVar9) {
            FUN_10b30980(local_20,&local_10,&local_5,1,1);
            piVar9 = local_1c;
          }
          else {
            *local_20 = (int)local_10;
            local_20 = local_20 + 1;
          }
          ppppiVar17 = (int ****)*ppppiVar17;
        } while (ppppiVar17 != local_40);
      }
      local_48 = &local_58;
      ppiVar16 = (int **)((int)local_20 - local_24 >> 2);
      local_44 = param_1 + 0x5c;
      local_4c = &local_54;
      local_10 = (int **)0x1;
      do {
        ppiVar15 = local_10;
        rand();
        iVar11 = rand();
        local_14 = (int *)((float)(iVar11 % 0x168) * DAT_11de98c0);
        if (ppiVar16 <= ppiVar15) {
          ppiVar15 = (int **)((int)ppiVar15 - (int)ppiVar16);
        }
        local_5c = &local_70;
        local_c = &PTR_FUN_11ccf738;
        local_60 = local_6c;
        local_70 = DAT_11ccf87c;
        local_6c[0] = 0;
        iVar11 = *(int *)(local_24 + (int)ppiVar15 * 4);
        if ((DAT_120287cc & 1) == 0) {
          DAT_120287cc = DAT_120287cc | 1;
          _DAT_120287c4 = &DAT_120287b4;
          DAT_120287c8 = &DAT_120287b4;
          DAT_120287b4 = 0;
          FUN_100d9260("CFishInfo::GetManagers","");
          FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
          DAT_120287b0 = (undefined4 *)FUN_100dfd90(DAT_120287c8);
          if (DAT_120287b0 == (undefined4 *)0x0) {
            DAT_120287b0 = (undefined4 *)FUN_100dde50(4);
            *DAT_120287b0 = 0;
            FUN_100dfdc0(DAT_120287c8,DAT_120287b0);
          }
          FUN_11a8911f(&LAB_11c85770);
        }
        puVar12 = (undefined *)*DAT_120287b0;
        if ((puVar12 == (undefined *)0x0) &&
           (puVar12 = (undefined *)FUN_11679e10(&local_c,"CFishInfo",0), puVar12 == (undefined *)0x0
           )) {
          if ((DAT_12028810 & 1) == 0) {
            DAT_120287dc = 0;
            DAT_120287ec = 0;
            uRam120287f0 = 0;
            _DAT_120287f4 = 0;
            DAT_120287f8 = 0;
            DAT_12028810 = DAT_12028810 | 1;
            _DAT_120287d8 = &PTR_FUN_11ccf764;
            DAT_120287fc = _DAT_11de9ae0;
            DAT_12028800 = _UNK_11de9ae4;
            uRam12028804 = _UNK_11de9ae8;
            DAT_12028808 = _UNK_11de9aec;
            DAT_1202880c = 1;
            DAT_120287e0 = puVar12;
            _DAT_120287e4 = puVar12;
            _DAT_120287e8 = puVar12;
            FUN_11a8911f(&LAB_11c856b0);
          }
          puVar12 = &DAT_120287d8;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar11 != -1) &&
           ((((iVar11 != 0 || (*(int *)(puVar12 + 0x30) == 0)) &&
             (iVar1 = *(int *)(puVar12 + 0x28), iVar1 != 0)) &&
            ((iVar11 = iVar11 - *(int *)(puVar12 + 0x30), -1 < iVar11 &&
             (iVar11 < *(int *)(puVar12 + 0x24))))))) {
          iVar2 = *(int *)(*(int *)(puVar12 + 0x20) + (iVar11 / iVar1) * 4);
          if ((iVar2 != 0) && (iVar11 = *(int *)(iVar2 + (iVar11 % iVar1) * 4), iVar11 != 0)) {
            iVar11 = *(int *)(iVar11 + 0x38);
            local_c = &PTR_FUN_11dc8ee8;
            if ((DAT_123bee5c & 1) == 0) {
              DAT_123bee5c = DAT_123bee5c | 1;
              FUN_102500e0("CMonsterInfo::GetManagers");
              FUN_11a8911f(&LAB_11c70e30);
            }
            pppuVar13 = (undefined ***)*DAT_123bee60;
            if ((pppuVar13 == (undefined ***)0x0) &&
               (pppuVar13 = (undefined ***)FUN_11679e10(&local_c,"CMonsterInfo",0),
               pppuVar13 == (undefined ***)0x0)) {
              if ((DAT_123bedd4 & 1) == 0) {
                DAT_123beddc = 0;
                DAT_123bedec = 0;
                DAT_123bedf0 = 0;
                _DAT_123bedf4 = 0;
                DAT_123bedf8 = 0;
                DAT_123bedd4 = DAT_123bedd4 | 1;
                DAT_123bedd8 = &PTR_FUN_11dc8ef0;
                DAT_123bedfc = _DAT_11de9ae0;
                DAT_123bee00 = _UNK_11de9ae4;
                uRam123bee04 = _UNK_11de9ae8;
                DAT_123bee08 = _UNK_11de9aec;
                DAT_123bee0c = 1;
                DAT_123bede0 = pppuVar13;
                _DAT_123bede4 = pppuVar13;
                _DAT_123bede8 = pppuVar13;
                FUN_11a8911f(&LAB_11c85710);
              }
              pppuVar13 = &DAT_123bedd8;
            }
            local_c = &PTR_FUN_11da54a8;
            if (((iVar11 != -1) &&
                (((iVar11 != 0 || (pppuVar13[0xc] == (undefined **)0x0)) &&
                 (ppuVar3 = pppuVar13[10], ppuVar3 != (undefined **)0x0)))) &&
               ((iVar11 = iVar11 - (int)pppuVar13[0xc], -1 < iVar11 && (iVar11 < (int)pppuVar13[9]))
               )) {
              if ((pppuVar13[8][iVar11 / (int)ppuVar3] != (undefined *)0x0) &&
                 ((iVar11 = *(int *)(pppuVar13[8][iVar11 / (int)ppuVar3] +
                                    (iVar11 % (int)ppuVar3) * 4), iVar11 != 0 &&
                  ((undefined4 *)(iVar11 + 0x54) != &local_70)))) {
                FUN_100d83d0(*(undefined4 *)(iVar11 + 0x68),*(undefined4 *)(iVar11 + 100));
              }
            }
          }
        }
        piVar9 = (int *)FUN_10ba9b00();
        pfVar6 = local_4c;
        local_14 = (int *)((float)local_14 * DAT_11de98e8);
        fVar4 = (float10)fcos((float10)(float)local_14);
        fVar18 = (float10)fsin((float10)(float)local_14);
        *local_48 = (float)fVar4;
        *pfVar6 = (float)fVar18;
        local_94 = local_58;
        local_a0 = 0;
        local_9c = 0;
        local_98 = local_54;
        piVar9 = (int *)(**(code **)(*piVar9 + 400))(local_5c,"fish.pro",&local_90,&local_a0);
        local_14 = piVar9;
        if ((piVar9 != (int *)0x0) &&
           (iVar11 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))(), iVar11 != 0)) {
          uVar14 = (**(code **)(*piVar9 + 4))();
          iVar11 = FUN_104753a0(uVar14);
          if (iVar11 != 0) {
            uVar14 = FUN_113168d0("TargetPos",&local_28);
            cVar8 = FUN_1046dc90(uVar14);
            uVar7 = local_28;
            if (((cVar8 != '\0') && (local_28 != 0xffffffff)) &&
               (FUN_1046ee70(local_28), uVar7 < 1000000)) {
              if (uVar7 < (uint)(*(int *)(iVar11 + 0x6c) - *(int *)(iVar11 + 0x68) >> 2)) {
                local_74 = local_2c;
                local_7c = local_34;
                cVar8 = FUN_10a49670(&local_7c);
                if (cVar8 != '\0') goto LAB_10bcb795;
              }
              FUN_1046a6d0(1,uVar7,*(undefined4 *)(iVar11 + 0x74));
            }
LAB_10bcb795:
            uVar14 = FUN_113168d0("ShowStart",&local_28);
            cVar8 = FUN_1046dc90(uVar14);
            uVar7 = local_28;
            if ((cVar8 != '\0') && (local_28 != 0xffffffff)) {
              FUN_1046ee70(local_28);
              if (uVar7 < 1000000) {
                if (uVar7 < (uint)(*(int *)(iVar11 + 0x6c) - *(int *)(iVar11 + 0x68) >> 2)) {
                  local_5 = 1;
                  cVar8 = FUN_1025f6f0(&local_5);
                  if (cVar8 != '\0') goto LAB_10bcb810;
                }
                FUN_1046a6d0(1,uVar7,*(undefined4 *)(iVar11 + 0x74));
              }
              else {
                FUN_1025b520(uVar7 - 1000000,1);
              }
            }
          }
        }
LAB_10bcb810:
        ppiVar15 = local_10;
        iVar1 = *(int *)(local_44 + 4);
        iVar11 = local_44;
        while (iVar2 = iVar1, iVar2 != 0) {
          if (*(int *)(iVar2 + 0x10) < (int)local_10) {
            iVar1 = *(int *)(iVar2 + 0xc);
          }
          else {
            iVar1 = *(int *)(iVar2 + 8);
            iVar11 = iVar2;
          }
        }
        if ((iVar11 == local_44) ||
           (local_18 = local_18 | 1, (int)local_10 < *(int *)(iVar11 + 0x10))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((local_18 & 1) != 0) {
          local_18 = local_18 & 0xfffffffe;
        }
        if (bVar5) {
          local_84 = (int *)local_10;
          local_80 = 0;
          FUN_10bcf710(&local_50,iVar11,&local_84);
          iVar11 = local_50;
        }
        *(int **)(iVar11 + 0x14) = local_14;
        if ((local_5c != &local_70) && (local_5c != (undefined4 *)0x0)) {
          FUN_10c3d5d0(local_5c);
        }
        local_10 = (int **)((int)ppiVar15 + 1);
      } while ((int)local_10 < 6);
      if (local_24 != 0) {
        FUN_10c3d5d0(local_24);
      }
      if ((int ****)local_40[0] != local_40) {
        do {
          ppppiVar17 = (int ****)*local_40[0];
          FUN_10c3d5d0(local_40[0]);
          local_40[0] = (int ***)ppppiVar17;
        } while (ppppiVar17 != local_40);
      }
    }
  }
  return;
}



/* --- CFishInfo::GetManagers_10bcd070 @ 10bcd070 --- */
// [RE-AUTO c3]
// id: CFishInfo::GetManagers
// strings:
//   ""CFishInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFishInfo::GetManagers
   strings:
     ""CFishInfo::GetManagers"" */

undefined * CFishInfo__GetManagers_10bcd070(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ccf738;
  if (param_3 == 0) {
    if ((DAT_120287cc & 1) == 0) {
      DAT_120287cc = DAT_120287cc | 1;
      FUN_102500e0("CFishInfo::GetManagers");
      FUN_11a8911f(&LAB_11c85770);
    }
    if ((undefined *)*DAT_120287b0 != (undefined *)0x0) {
      return (undefined *)*DAT_120287b0;
    }
  }
  puVar1 = (undefined *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_12028810 & 1) == 0) {
      DAT_12028810 = DAT_12028810 | 1;
      FUN_10bcd3a0();
      FUN_11a8911f(&LAB_11c856b0);
    }
    puVar1 = &DAT_120287d8;
  }
  return puVar1;
}



/* --- CFishInfo::GetManagers_10bce5f0 @ 10bce5f0 --- */
// [RE-AUTO c3]
// id: CFishInfo::GetManagers
// strings:
//   ""CFishInfo::GetManagers""

/* [RE-AUTO c3]
   id: CFishInfo::GetManagers
   strings:
     ""CFishInfo::GetManagers"" */

undefined4 CFishInfo__GetManagers_10bce5f0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_120287cc & 1) == 0) {
      DAT_120287cc = DAT_120287cc | 1;
      FUN_102500e0("CFishInfo::GetManagers");
      FUN_11a8911f(&LAB_11c85770);
    }
    return *DAT_120287b0;
  }
  return 0;
}



