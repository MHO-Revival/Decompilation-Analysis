
// ===== BT-event sender: FUN_10a4b570@10a4b570 =====

/* [RE-AUTO c0]
   strings:
     ""GameCommonEvent"" */

void __thiscall FUN_10a4b570(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_3 == 2) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x60))();
    local_20 = (**(code **)(*piVar1 + 0x18))("GameCommonEvent");
    local_14 = param_4;
    local_c = *(undefined4 *)(param_1 + 4);
    local_18 = &local_c;
    local_1c = 0x4ffff;
    local_10 = 0;
    local_8 = 2;
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x144))(*(undefined4 *)(param_1 + 4));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))(&local_20);
    }
  }
  return;
}


// ===== BT-event sender: FUN_10a57480@10a57480 =====

/* [RE-AUTO c0]
   calls: atof, strstr, _stricmp, memset, strcpy_s
   strings:
     ""animationevent""
     ""camerashake""
     ""soundswitch""
     ""lswordflash""
     ""ghostlevel01""
     ""ghostlevel02""
     ""swordflashghostlevel02""
     ""swordflash""
     ""rswordflash""
     ""swordflashghostlevel01"" */

void __thiscall FUN_10a57480(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  float fVar15;
  double dVar16;
  char *pcVar17;
  char local_138;
  undefined1 local_137 [107];
  undefined1 local_cc [8];
  undefined4 uStack_c4;
  undefined1 local_c0 [12];
  undefined8 local_b4;
  float local_ac;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  int *local_74;
  int *local_70;
  undefined1 local_68 [8];
  float local_60;
  undefined1 local_59;
  int *local_58;
  int *local_54;
  undefined8 local_50;
  undefined4 *local_48;
  char *local_44;
  float local_40 [3];
  char *pcStack_34;
  undefined4 local_30;
  int *local_20;
  int *local_1c;
  int *local_18;
  char *local_14;
  
  uVar8 = param_3[6];
  iVar5 = *param_1;
  local_1c = param_1;
  dVar16 = atof((char *)param_3[7]);
  local_44 = (char *)(float)dVar16;
  (**(code **)(iVar5 + 0x120))("animationevent",local_44,uVar8);
  if ((char *)param_3[6] == (char *)0x0) {
    return;
  }
  pcVar4 = strstr((char *)param_3[6],"st_");
  if ((pcVar4 != (char *)0x0) && (pcVar4 == (char *)param_3[6])) {
    FUN_10a59420(param_2,param_3);
    return;
  }
  iVar5 = _stricmp((char *)param_3[6],"camerashake");
  if (iVar5 == 0) {
    piVar6 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
    piVar7 = (int *)(**(code **)(*piVar6 + 0x78))();
    piVar6 = local_1c;
    local_58 = (int *)(**(code **)(*piVar7 + 0x28))(local_1c[2],0);
    local_40[0] = 0.0;
    local_40[1] = 0.0;
    local_40[2] = 0.0;
    pcStack_34 = (char *)0x0;
    if (local_58 == (int *)0x0) {
      cVar3 = (**(code **)(*piVar6 + 0x1c4))();
      if (cVar3 == '\0') {
        iVar5 = **(int **)(DAT_1202e818 + 0x50);
        uVar8 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
        local_18 = (int *)(**(code **)(iVar5 + 0x2c))(uVar8);
        if (local_18 != (int *)0x0) {
          piVar6 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
          piVar6 = (int *)(**(code **)(*piVar6 + 0x78))();
          iVar5 = *piVar6;
          uVar8 = (**(code **)(*local_18 + 4))(0);
          local_58 = (int *)(**(code **)(iVar5 + 0x28))(uVar8);
          piVar6 = (int *)local_1c[3];
          puVar9 = (undefined8 *)(**(code **)(*local_18 + 200))(local_68);
          local_50 = *puVar9;
          local_48 = *(undefined4 **)(puVar9 + 1);
          pfVar10 = (float *)(**(code **)(*piVar6 + 200))(local_cc);
          local_40[0] = SQRT((*pfVar10 - (float)(undefined4 *)local_50) *
                             (*pfVar10 - (float)(undefined4 *)local_50) +
                             (pfVar10[1] - (float)local_50._4_4_) *
                             (pfVar10[1] - (float)local_50._4_4_) +
                             (pfVar10[2] - (float)local_48) * (pfVar10[2] - (float)local_48));
          local_40[1] = 0.0;
          local_40[2] = 0.0;
          pcStack_34 = (char *)0x0;
        }
        piVar6 = (int *)(**(code **)(*local_1c + 800))();
        if ((((piVar6 == (int *)0x0) || (iVar5 = (**(code **)(*piVar6 + 0xa8))(), iVar5 != 1)) ||
            (cVar3 = FUN_113a32e0(), cVar3 != '\0')) && (local_58 != (int *)0x0)) goto LAB_10a5768d;
      }
    }
    else {
LAB_10a5768d:
      piVar6 = local_58;
      piVar7 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      piVar7 = (int *)(**(code **)(*piVar7 + 0x78))();
      piVar7 = (int *)(**(code **)(*piVar7 + 0x1c))();
      if (piVar6 == piVar7) {
        local_54 = DAT_11cbf080;
        local_18 = DAT_11de9a20;
        FUN_10a6ffb0();
        local_88 = 1;
        local_138 = '\0';
        memset(local_137,0,99);
        local_44 = &local_138;
        local_50 = 0;
        local_48 = (undefined4 *)0x0;
        local_14 = local_44;
        FUN_10a81d00(&local_44);
        strcpy_s(&local_138,100,(char *)param_3[7]);
        puVar13 = local_50._4_4_;
        if (local_138 != '\0') {
          pcVar4 = &local_138;
          local_44 = (char *)0x0;
          do {
            pcVar17 = local_44;
            if (99 < (int)local_44) break;
            local_44 = pcVar17;
            if (*pcVar4 == ',') {
              *pcVar4 = '\0';
              local_20 = (int *)(pcVar4 + 1);
              if (puVar13 == local_48) {
                FUN_108716d0(puVar13,&local_20,&local_59,1,1);
                pcVar4 = local_14;
                puVar13 = local_50._4_4_;
              }
              else {
                *puVar13 = pcVar4 + 1;
                local_50 = CONCAT44(puVar13 + 1,(undefined4 *)local_50);
                local_44 = pcVar17;
                puVar13 = puVar13 + 1;
              }
            }
            pcVar4 = pcVar4 + 1;
            local_14 = pcVar4;
            local_44 = local_44 + 1;
          } while (*pcVar4 != '\0');
        }
        puVar2 = (undefined4 *)local_50;
        pcVar4 = (char *)((int)puVar13 - (int)(undefined4 *)local_50 >> 2);
        if (pcVar4 == (char *)0x0) {
          local_60 = 1.0;
          fStack_84 = DAT_11de9918;
          local_80 = DAT_11de9918;
          local_7c = 0x417000003f800000;
          local_74 = (int *)0x3eaaa64c;
          local_70 = (int *)0x3d889a02;
        }
        else {
          local_14 = (char *)0x0;
          if (pcVar4 != (char *)0x0) {
            do {
              switch(local_14) {
              case (char *)0x0:
                cVar3 = *(char *)*puVar2;
                if ((cVar3 == 'v') || (cVar3 == 'V')) {
                  local_60 = 1.0;
                  fStack_84 = 0.0;
                  local_80 = 0.0;
                  local_7c = CONCAT44(local_7c._4_4_,0x3f800000);
                }
                else if ((cVar3 == 'h') || (cVar3 == 'H')) {
                  uStack_c4 = 0;
                  fStack_84 = DAT_11de9918;
                  local_80 = 0.0;
                  local_7c = (ulonglong)(uint)local_7c._4_4_ << 0x20;
                }
                break;
              case (char *)0x1:
                dVar16 = atof((char *)puVar2[1]);
                local_20 = (int *)(float)dVar16;
                if ((float)local_20 != DAT_11de9890) {
                  local_7c = CONCAT44(local_20,(float)local_7c);
                }
                break;
              case (char *)0x2:
                dVar16 = atof((char *)puVar2[2]);
                local_20 = (int *)(float)dVar16;
                if ((float)local_20 != DAT_11de9890) {
                  local_74 = local_20;
                }
                break;
              case (char *)0x3:
                dVar16 = atof((char *)puVar2[3]);
                local_20 = (int *)(float)dVar16;
                if ((float)local_20 != DAT_11de9890) {
                  local_70 = local_20;
                }
                break;
              case (char *)0x4:
                dVar16 = atof((char *)puVar2[4]);
                local_20 = (int *)(float)dVar16;
                if ((float)local_20 == 0.0) {
                  local_54 = DAT_11cbf080;
                }
                else {
                  local_54 = local_20;
                  if ((float)local_20 < 0.0) {
                    local_54 = (int *)0x0;
                  }
                }
                break;
              case (char *)0x5:
                dVar16 = atof((char *)puVar2[5]);
                local_20 = (int *)(float)dVar16;
                local_18 = local_20;
                if ((float)local_20 == DAT_11de9890) {
                  local_18 = DAT_11de9a20;
                }
              }
              local_14 = local_14 + 1;
            } while (local_14 < pcVar4);
          }
        }
        local_94 = (undefined1 *)0x58;
        if (local_40[0] < (float)local_18) {
          fVar15 = local_7c._4_4_ - local_7c._4_4_ * (float)local_54 * local_40[0];
          local_ac = (float)local_7c * fVar15;
          local_7c = CONCAT44(fVar15,(float)local_7c);
          local_b4 = CONCAT44(local_80 * fVar15,fStack_84 * fVar15);
          local_60 = local_ac;
          (**(code **)(*local_58 + 0x20))(local_c0);
        }
        if ((undefined4 *)local_50 != (undefined4 *)0x0) {
          FUN_10c3d5d0((undefined4 *)local_50);
        }
      }
    }
  }
  pcVar4 = strstr((char *)param_3[6],"MHFC");
  piVar6 = local_1c;
  if (pcVar4 != (char *)0x0) {
    pcVar4 = (char *)param_3[6];
    local_98 = &DAT_1201fc98;
    local_94 = &DAT_1201fc98;
    local_90 = &DAT_1201fc98;
    local_8c = &DAT_1201fc98;
    local_70 = (int *)&DAT_1201fc98;
    if (pcVar4 == (char *)0x0) {
      iVar5 = 0;
    }
    else {
      pcVar17 = pcVar4;
      do {
        cVar3 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar3 != '\0');
      iVar5 = (int)pcVar17 - (int)(pcVar4 + 1);
    }
    FUN_1083ab70(pcVar4,iVar5);
    local_9c = *param_3;
    pcVar4 = (char *)param_3[7];
    if (pcVar4 == (char *)0x0) {
      iVar5 = 0;
    }
    else {
      pcVar17 = pcVar4;
      do {
        cVar3 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar3 != '\0');
      iVar5 = (int)pcVar17 - (int)(pcVar4 + 1);
    }
    FUN_1083ab70(pcVar4,iVar5);
    pcVar4 = (char *)param_3[8];
    if (pcVar4 == (char *)0x0) {
      iVar5 = 0;
    }
    else {
      pcVar17 = pcVar4;
      do {
        cVar3 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar3 != '\0');
      iVar5 = (int)pcVar17 - (int)(pcVar4 + 1);
    }
    FUN_1083ab70(pcVar4,iVar5);
    local_80 = (float)param_3[0xb];
    local_88 = (undefined4)*(undefined8 *)(param_3 + 9);
    fStack_84 = (float)((ulonglong)*(undefined8 *)(param_3 + 9) >> 0x20);
    local_7c = *(longlong *)(param_3 + 0xc);
    local_74 = (int *)param_3[0xe];
    FUN_1083ab70(&DAT_11cbdf24,4);
    piVar6 = local_1c;
    (**(code **)(*local_1c + 0xd4))(&local_9c);
    FUN_10a71be0();
  }
  pbVar11 = (byte *)param_3[6];
  pcVar4 = "soundswitch";
  do {
    bVar1 = *pbVar11;
    bVar14 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10a57b46:
      uVar12 = -(uint)bVar14 | 1;
      goto LAB_10a57b4b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar11[1];
    bVar14 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10a57b46;
    pbVar11 = pbVar11 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  uVar12 = 0;
LAB_10a57b4b:
  if (uVar12 == 0) {
    (**(code **)(*piVar6 + 0x540))(param_2,param_3);
  }
  iVar5 = _stricmp((char *)param_3[6],"lswordflash");
  if (iVar5 == 0) {
    piVar6 = (int *)(**(code **)(*piVar6 + 400))();
    iVar5 = *DAT_1201ff00;
    uVar8 = (**(code **)(*piVar6 + 0xe4))();
    local_18 = (int *)(**(code **)(iVar5 + 0x54))(uVar8);
    piVar7 = local_1c;
    if (local_18 == (int *)0x0) goto LAB_10a57d4c;
    pcVar17 = "ghostlevel01";
    pcVar4 = (char *)(**(code **)(*local_1c + 0x448))();
    iVar5 = _stricmp(pcVar4,pcVar17);
    if (iVar5 != 0) {
      pcVar17 = "ghostlevel02";
      pcVar4 = (char *)(**(code **)(*piVar7 + 0x448))();
      iVar5 = _stricmp(pcVar4,pcVar17);
      local_40[0] = 4.25995e-43;
      local_40[1] = 4.59176e-40;
      local_40[2] = (float)param_3[7];
      local_30 = 0;
      if (iVar5 == 0) {
        pcStack_34 = "swordflashghostlevel02";
        (**(code **)(*local_18 + 0x40))();
      }
      else {
        pcStack_34 = "swordflash";
        (**(code **)(*local_18 + 0x40))(local_40);
      }
      goto LAB_10a57d4c;
    }
  }
  else {
    iVar5 = _stricmp((char *)param_3[6],"rswordflash");
    piVar7 = local_1c;
    if (iVar5 != 0) goto LAB_10a57d4c;
    piVar6 = (int *)(**(code **)(*piVar6 + 400))();
    iVar5 = *DAT_1201ff00;
    uVar8 = (**(code **)(*piVar6 + 0xe4))();
    piVar6 = (int *)(**(code **)(iVar5 + 0x54))(uVar8);
    piVar7 = local_1c;
    if ((piVar6 == (int *)0x0) ||
       (local_18 = (int *)(**(code **)(*piVar6 + 0x100))(), piVar7 = local_1c,
       local_18 == (int *)0x0)) goto LAB_10a57d4c;
    pcVar17 = "ghostlevel01";
    pcVar4 = (char *)(**(code **)(*local_1c + 0x448))();
    iVar5 = _stricmp(pcVar4,pcVar17);
    if (iVar5 != 0) {
      pcVar17 = "ghostlevel02";
      pcVar4 = (char *)(**(code **)(*piVar7 + 0x448))();
      iVar5 = _stricmp(pcVar4,pcVar17);
      local_40[0] = 4.25995e-43;
      local_40[1] = 4.59176e-40;
      local_40[2] = (float)param_3[7];
      local_30 = 0;
      if (iVar5 == 0) {
        pcStack_34 = "swordflashghostlevel02";
        (**(code **)(*local_18 + 0x40))();
      }
      else {
        pcStack_34 = "swordflash";
        (**(code **)(*local_18 + 0x40))(local_40);
      }
      goto LAB_10a57d4c;
    }
  }
  local_40[2] = (float)param_3[7];
  local_40[0] = 4.25995e-43;
  local_40[1] = 4.59176e-40;
  local_30 = 0;
  pcStack_34 = "swordflashghostlevel01";
  (**(code **)(*local_18 + 0x40))(local_40);
LAB_10a57d4c:
  pbVar11 = (byte *)param_3[6];
  pcVar4 = "lmeleeground";
  do {
    bVar1 = *pbVar11;
    bVar14 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10a57d74:
      uVar12 = -(uint)bVar14 | 1;
      goto LAB_10a57d79;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar11[1];
    bVar14 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10a57d74;
    pbVar11 = pbVar11 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  uVar12 = 0;
LAB_10a57d79:
  if (uVar12 == 0) {
    FUN_10a585b0(param_2,param_3,1,0);
  }
  pbVar11 = (byte *)param_3[6];
  pcVar4 = "rmeleeground";
  do {
    bVar1 = *pbVar11;
    bVar14 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10a57db3:
      uVar12 = -(uint)bVar14 | 1;
      goto LAB_10a57db8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar11[1];
    bVar14 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10a57db3;
    pbVar11 = pbVar11 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  uVar12 = 0;
LAB_10a57db8:
  if (uVar12 == 0) {
    FUN_10a585b0(param_2,param_3,0,0);
  }
  pbVar11 = (byte *)param_3[6];
  pcVar4 = "PostProcessEffectEvent";
  do {
    bVar1 = *pbVar11;
    bVar14 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10a57df1:
      uVar12 = -(uint)bVar14 | 1;
      goto LAB_10a57df6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar11[1];
    bVar14 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10a57df1;
    pbVar11 = pbVar11 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  uVar12 = 0;
LAB_10a57df6:
  if (uVar12 == 0) {
    FUN_10a594c0(param_2,param_3);
  }
  pbVar11 = (byte *)param_3[6];
  pcVar4 = "WindEffectEvent";
  do {
    bVar1 = *pbVar11;
    bVar14 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10a57e30:
      uVar12 = -(uint)bVar14 | 1;
      goto LAB_10a57e35;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar11[1];
    bVar14 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10a57e30;
    pbVar11 = pbVar11 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  uVar12 = 0;
LAB_10a57e35:
  if (uVar12 == 0) {
    FUN_10a59980(param_2,param_3);
  }
  (**(code **)(*piVar7 + 0x544))(param_2,param_3);
  return;
}


// ===== BT-event sender: Weapon::DispatchOnChgFireMode@10a5ab60 =====

/* [RE-R1]
   strings:
     ""OnChgFireMode"" */

void __thiscall Weapon__DispatchOnChgFireMode(int param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  local_18 = 0x11d;
  local_14 = 0x4ffff;
  local_8 = 0;
  local_c = "OnChgFireMode";
  local_10 = param_2;
  (**(code **)(**(int **)(param_1 + 4) + 0x24))(&local_18);
  return;
}


// ===== BT-event sender: FUN_10ab8710@10ab8710 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10ab8710(int param_1,int param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = *(undefined4 *)(param_1 + 0x14);
  local_14 = 0x4ffff;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x10) + 0x24) + 4) + 0x24))
            (&local_18);
  return;
}


// ===== BT-event sender: FUN_10ab8cf0@10ab8cf0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10ab8cf0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar4 = *(int **)(*(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x10) + 0x24) + 4);
  local_18 = *(undefined4 *)(param_1 + 0x18);
  local_14 = 0x4ffff;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  uVar1 = FUN_11317f30();
  CInfoRecord__GetModelString(&DAT_11d9d32b);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 0) {
    local_8 = *(undefined4 *)(param_1 + 0x20);
LAB_10ab8db4:
    local_c = uVar1;
    local_10 = FUN_11317f30();
    puVar3 = &local_18;
  }
  else {
    if (iVar2 == 1) {
      local_8 = *(undefined4 *)(param_1 + 0x24);
      goto LAB_10ab8db4;
    }
    if (iVar2 != 2) goto LAB_10ab8dd0;
    local_c = FUN_11317f30();
    local_10 = param_3;
    local_8 = *(undefined4 *)(param_1 + 0x28);
    (**(code **)(*piVar4 + 0x24))(&local_18);
    local_2c = 0x12a;
    local_28 = 0x4ffff;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_20 = FUN_11317f30();
    puVar3 = &local_2c;
    local_1c = *(undefined4 *)(param_1 + 0x2c);
  }
  (**(code **)(*piVar4 + 0x24))(puVar3);
LAB_10ab8dd0:
  piVar4 = (int *)(param_2 + -0xc);
  if (-1 < *piVar4) {
    iVar2 = FUN_10c3dad0(piVar4);
    if (iVar2 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
      FUN_10c3d900(piVar4);
    }
  }
  return;
}


// ===== BT-event sender: FUN_10ab8e10@10ab8e10 =====

/* [RE-AUTO c0]
   strings:
     ""OnEnter"" */

void __thiscall FUN_10ab8e10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  undefined2 *local_18;
  undefined2 local_14 [2];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_2 + 0x10) + 0x24) + 4);
  local_28 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  local_24 = 0x4ffff;
  local_20 = 0;
  local_1c = (char *)0x0;
  local_18 = (undefined2 *)0x0;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    local_1c = "OnEnter";
  }
  else if (iVar2 == 2) {
    iVar2 = *(int *)(param_1 + 0x28);
    local_1c = "OnEnter";
    local_14[0] = *(undefined2 *)(iVar2 + 0xc);
    local_18 = local_14;
    local_10 = *(undefined4 *)(iVar2 + 0x18);
    local_c = *(undefined4 *)(iVar2 + 0x10);
    local_8 = *(undefined4 *)(iVar2 + 0x14);
    local_20 = FUN_11317f30();
    (**(code **)(*piVar1 + 0x24))(&local_28);
    return;
  }
  (**(code **)(*piVar1 + 0x24))(&local_28);
  return;
}


// ===== BT-event sender: FUN_10ab8ee0@10ab8ee0 =====

/* [RE-AUTO c0]
   strings:
     ""OnLeave"" */

void __thiscall FUN_10ab8ee0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_2 + 0x10) + 0x24) + 4);
  local_18 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  local_14 = 0x4ffff;
  local_10 = 0;
  local_c = (char *)0x0;
  local_8 = 0;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    local_c = "OnLeave";
  }
  else if (iVar2 == 2) {
    local_c = "OnLeave";
    local_10 = FUN_11317f30();
    (**(code **)(*piVar1 + 0x24))(&local_18);
    return;
  }
  (**(code **)(*piVar1 + 0x24))(&local_18);
  return;
}


// ===== BT-event sender: FUN_10ab8f70@10ab8f70 =====

/* [RE-AUTO c0]
   strings:
     ""OnAnimStart"" */

void __thiscall FUN_10ab8f70(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 *local_14;
  char *local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x10) + 0x24);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != (int *)0x0)) {
    local_1c = *(undefined4 *)(param_1 + 0x18);
    local_18 = 0x4ffff;
    local_14 = (undefined2 *)0x0;
    local_10 = (char *)0x0;
    local_c = 0;
    if ((*(int *)(param_1 + 0x1c) == 2) && (piVar3 = (int *)FUN_11078430(), piVar3 != (int *)0x0)) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
      uVar4 = FUN_11317f30();
      CInfoRecord__GetModelString(uVar4);
      local_8 = (**(code **)(*piVar3 + 0x14))(param_2);
      FUN_104f6f60();
      local_10 = "OnAnimStart";
      local_6 = 0;
      local_14 = &local_8;
      (**(code **)(*piVar2 + 0x24))(&local_1c);
    }
  }
  return;
}


// ===== BT-event sender: FUN_10ab9030@10ab9030 =====

/* [RE-AUTO c0]
   strings:
     ""OnAnimEnd"" */

void __thiscall FUN_10ab9030(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x10) + 0x24);
  if ((iVar2 != 0) && (piVar1 = *(int **)(iVar2 + 4), piVar1 != (int *)0x0)) {
    local_18 = *(undefined4 *)(param_1 + 0x18);
    local_14 = 0x4ffff;
    local_10 = 0;
    local_c = (char *)0x0;
    local_8 = 0;
    if (*(int *)(param_1 + 0x1c) == 2) {
      iVar2 = FUN_11078430();
      if (iVar2 != 0) {
        local_c = "OnAnimEnd";
        (**(code **)(*piVar1 + 0x24))(&local_18);
      }
    }
  }
  return;
}


// ===== BT-event sender: FUN_10ab9190@10ab9190 =====

/* [RE-AUTO c0]
   strings:
     ""GameCommonEvent""
     ""camerashake"" */

void __thiscall FUN_10ab9190(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_e4 [3];
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  char *local_cc;
  undefined4 local_c8;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  float local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 **local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined8 local_18;
  float local_10;
  int local_c;
  float local_8;
  
  iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x10) + 0x24);
  if ((iVar5 != 0) && (piVar6 = *(int **)(iVar5 + 4), piVar6 != (int *)0x0)) {
    local_c = param_1 + 0x10;
    local_84 = 0x124;
    local_80 = 0x4ffff;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_78 = FUN_11317f30();
    (**(code **)(*piVar6 + 0x24))(&local_84);
    if ((DAT_1202e818[0x34] != 0) && (*(int *)(DAT_1202e818[0x34] + 0x90) != 0)) {
      cVar3 = FUN_11316b80("GameCommonEvent");
      if (cVar3 == '\0') {
        cVar3 = FUN_11316b80("camerashake");
        if (cVar3 != '\0') {
          iVar5 = *(int *)(*(int *)(param_2 + 0x14) + 0x10);
          uVar8 = FUN_11078430();
          FUN_10aba420();
          local_d4 = 0xffffffff;
          (**(code **)(*(int *)*DAT_1202e818 + 0x298))();
          local_cc = "camerashake";
          local_d0 = FUN_10a76aa0("camerashake");
          uVar9 = FUN_11317f30();
          CInfoRecord__GetModelString(uVar9);
          local_d8 = local_8;
          FUN_104f6f60();
          local_e4[0] = *(undefined4 *)(param_1 + 8);
          local_c8 = FUN_11317f30();
          FUN_10aba4f0();
          local_60 = local_e4;
          local_64 = 0x2c;
          iVar5 = *(int *)(iVar5 + 0x24);
          local_5c = uVar8;
          if ((iVar5 != 0) && (piVar6 = *(int **)(iVar5 + 0xc), piVar6 != (int *)0x0)) {
            (**(code **)(*piVar6 + 0x110))(&local_64);
          }
        }
      }
      else {
        if ((DAT_120211c4 & 1) == 0) {
          DAT_120211c4 = DAT_120211c4 | 1;
          FUN_113168d0(&DAT_11d9d32b);
        }
        if (*(int *)(param_1 + 0x14) != DAT_120211c0) {
          local_5c = 0x124;
          local_58 = 0x4ffff;
          local_54 = (undefined4 *)0x0;
          local_50 = 0;
          local_4c = (undefined4 **)0x0;
          local_50 = FUN_11317f30();
          local_8c = (**(code **)(**(int **)(iVar5 + 0xc) + 4))();
          local_54 = &local_8c;
          local_88 = 2;
          puVar4 = (undefined8 *)(**(code **)(**(int **)(iVar5 + 0xc) + 0x94))();
          uVar1 = *puVar4;
          local_68 = *(float *)(puVar4 + 1);
          uVar2 = *(undefined8 *)(param_1 + 0x24);
          local_70._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
          local_48 = *(float *)(param_1 + 0x28) + local_70._4_4_;
          local_10 = *(float *)(param_1 + 0x2c);
          local_8 = *(float *)(param_1 + 0x2c) + local_68;
          local_40 = local_68 - local_10;
          local_70._0_4_ = (float)uVar1;
          local_18._0_4_ = (float)uVar2;
          local_3c = (float)local_70 - (float)local_18;
          local_38 = *(float *)(param_1 + 0x24) + (float)local_70;
          local_18._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          local_44 = local_70._4_4_ - local_18._4_4_;
          local_70 = uVar1;
          local_18 = uVar2;
          (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x90) + 0x8c))(&local_34);
          cVar3 = FUN_113a58c0();
          while (cVar3 == '\0') {
            iVar5 = (**(code **)(local_34 + 0xc))();
            piVar6 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x2c))
                                      (*(undefined4 *)(iVar5 + 8));
            uVar1 = local_18;
            if (piVar6 != (int *)0x0) {
              puVar4 = (undefined8 *)(**(code **)(*piVar6 + 0x94))();
              uVar1 = *puVar4;
              local_10 = *(float *)(puVar4 + 1);
              local_18._0_4_ = (float)uVar1;
              if ((((local_3c < (float)local_18) && ((float)local_18 < local_38)) &&
                  (local_18._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_44 < local_18._4_4_))
                 && (((local_18._4_4_ < local_48 && (local_40 < local_10)) && (local_10 < local_8)))
                 ) {
                local_18 = uVar1;
                piVar7 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
                iVar5 = *piVar7;
                uVar8 = (**(code **)(*piVar6 + 4))();
                piVar6 = (int *)(**(code **)(iVar5 + 0x144))(uVar8);
                uVar1 = local_18;
                if (piVar6 != (int *)0x0) {
                  (**(code **)(*piVar6 + 0x24))(&local_5c);
                  uVar1 = local_18;
                }
              }
            }
            local_18 = uVar1;
            FUN_113a58d0();
            cVar3 = FUN_113a58c0();
          }
          iVar5 = (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x90) + 0x9c))(local_20,7);
          local_30 = *(undefined4 *)(iVar5 + 4);
          local_2c = *(undefined4 *)(iVar5 + 8);
          local_28 = *(undefined4 *)(iVar5 + 0xc);
          local_24 = *(undefined4 *)(iVar5 + 0x10);
          FUN_113a5790();
          cVar3 = FUN_113a58c0();
          while (cVar3 == '\0') {
            iVar5 = (**(code **)(local_34 + 0xc))();
            piVar6 = (int *)(**(code **)(*(int *)DAT_1202e818[0x14] + 0x2c))
                                      (*(undefined4 *)(iVar5 + 8));
            uVar1 = local_18;
            if (piVar6 != (int *)0x0) {
              puVar4 = (undefined8 *)(**(code **)(*piVar6 + 0x94))();
              uVar1 = *puVar4;
              local_10 = *(float *)(puVar4 + 1);
              local_18._0_4_ = (float)uVar1;
              if (((local_3c < (float)local_18) && ((float)local_18 < local_38)) &&
                 ((local_18._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_44 < local_18._4_4_ &&
                  (((local_18._4_4_ < local_48 && (local_40 < local_10)) && (local_10 < local_8)))))
                 ) {
                local_18 = uVar1;
                piVar7 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
                iVar5 = *piVar7;
                uVar8 = (**(code **)(*piVar6 + 4))();
                piVar6 = (int *)(**(code **)(iVar5 + 0x144))(uVar8);
                uVar1 = local_18;
                if (piVar6 != (int *)0x0) {
                  (**(code **)(*piVar6 + 0x24))(&local_5c);
                  uVar1 = local_18;
                }
              }
            }
            local_18 = uVar1;
            FUN_113a58d0();
            cVar3 = FUN_113a58c0();
          }
          FUN_113a5790();
        }
      }
      iVar5 = param_2;
      if ((*(byte *)(*(int *)(param_2 + 0x14) + 0x116) & 2) != 0) {
        uVar8 = FUN_11317f30((int)&param_2 + 3);
        FUN_100b5f70(uVar8);
        iVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar5 + 0x14) + 0x10) + 0x24) + 800))();
        (**(code **)(**(int **)(iVar5 + 0x14) + 0x30))(&local_60,0,0);
        if ((local_4c != &local_60) && (local_4c != (undefined4 **)0x0)) {
          FUN_10c3d5d0(local_4c);
        }
      }
    }
  }
  return;
}


// ===== BT-event sender: FUN_10b05000@10b05000 =====

/* [RE-AUTO c0]
   strings:
     ""EnterEntityID""
     ""EnterEntity""
     ""LeaveEntityID""
     ""LeaveEntity"" */

void __thiscall FUN_10b05000(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  char *local_14;
  undefined4 local_10;
  int local_c [2];
  
  local_20 = 0x124;
  local_1c = 0x4ffff;
  local_18 = (int *)0x0;
  local_14 = (char *)0x0;
  local_10 = 0;
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x70))("LeaveEntityID",param_3);
    local_14 = "LeaveEntity";
  }
  else {
    (**(code **)(*param_1 + 0x70))("EnterEntityID");
    local_14 = "EnterEntity";
  }
  local_c[0] = param_1[2];
  local_18 = local_c;
  local_c[1] = 2;
  (**(code **)(*(int *)param_1[1] + 0x24))(&local_20);
  return;
}


// ===== BT-event sender: CombatEntity::BuildGameOnHitEvent_Melee@10b255c0 =====

/* [RE-R1]
   calls: libm_sse2_acos_precise
   strings:
     ""GameOnHit"" */

void __thiscall CombatEntity__BuildGameOnHitEvent_Melee(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  float *pfVar8;
  float10 fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_200 [16];
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  undefined8 local_1a4;
  float local_19c;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  float local_184;
  undefined8 local_180;
  float local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  uint local_130;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_cc;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  ulonglong local_50;
  undefined1 local_48 [4];
  undefined8 local_44;
  uint local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float *local_10;
  float local_c;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 0xc);
  if (local_8 == (int *)0x0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x118) + -8) == 0) {
    return;
  }
  uVar7 = *(undefined4 *)(param_1 + 8);
  local_38 = 0;
  uVar4 = (**(code **)(*param_2 + 4))(0,0,0xffffffff,0xffffffff,0);
  FUN_10b27660(uVar7,uVar4);
  local_cc = CONCAT44((int)local_38,(int)local_38);
  local_3c = 0;
  local_c4 = 0;
  puVar5 = (undefined8 *)(**(code **)(*local_8 + 0xd8))();
  local_50 = *puVar5;
  local_3c = *(uint *)(puVar5 + 1);
  local_44._0_4_ = (float)local_50;
  local_44._4_4_ = (float)(local_50 >> 0x20);
  local_c = (float)((uint)local_44._4_4_ ^ DAT_11de9c90);
  local_10 = (float *)((uint)(float)local_44 ^ DAT_11de9c90);
  local_24 = (float)(local_3c ^ DAT_11de9c90);
  local_b4 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_1ec = 0;
  fVar11 = local_c * local_c + (float)local_10 * (float)local_10 + local_24 * local_24 +
           DAT_11de98a0;
  auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  local_b8 = auVar14._0_4_;
  local_b8 = (DAT_11de9938 - local_b8 * fVar11 * local_b8 * DAT_11de98e8) * local_b8;
  _local_c0 = CONCAT44(local_c * local_b8,(float)local_10 * local_b8);
  local_b8 = local_24 * local_b8;
  local_1f0 = 0;
  local_44 = local_50;
  local_8 = (int *)local_24;
  local_1e8 = FUN_10b27fd0(*(undefined4 *)(param_1 + 0x118));
  local_a4 = *(undefined4 *)(param_1 + 0x104);
  local_ec = 0;
  local_e8 = 0;
  fVar11 = (float)local_44 * (float)local_44 + local_44._4_4_ * local_44._4_4_ + (float)local_38;
  if (fVar11 <= DAT_11cbf070) {
    local_198 = DAT_1201fd04;
    local_190 = DAT_1201fd0c;
  }
  else {
    auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar14._0_4_;
    local_198._4_4_ = (float)(local_50 >> 0x20);
    fVar12 = (DAT_11de9938 - fVar12 * fVar11 * fVar12 * DAT_11de98e8) * fVar12;
    local_190 = fVar12 * (float)local_38;
    local_198 = CONCAT44(local_198._4_4_ * fVar12,(float)local_44 * fVar12);
  }
  local_1e4 = local_1e8;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar6 = (int *)(**(code **)(*piVar6 + 0x68))();
  iVar2 = *piVar6;
  uVar7 = (**(code **)(*param_2 + 4))();
  (**(code **)(iVar2 + 0xc))(uVar7);
  fVar11 = local_c * local_c + (float)local_10 * (float)local_10 + (float)local_8 * (float)local_8;
  if (fVar11 <= DAT_11cbf070) {
    local_18c = DAT_1201fd04;
    local_184 = DAT_1201fd0c;
  }
  else {
    auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar14._0_4_;
    fVar12 = (DAT_11de9938 - fVar12 * fVar11 * fVar12 * DAT_11de98e8) * fVar12;
    local_184 = (float)local_8 * fVar12;
    local_18c = CONCAT44(local_c * fVar12,(float)local_10 * fVar12);
  }
  local_1a8 = 0.0;
  local_1b0 = CONCAT44((int)local_38,(int)local_38);
  local_24 = 1.0;
  local_16c = 0x3f800000;
  local_174 = CONCAT44(DAT_11de9918,DAT_11de9918);
  pfVar8 = (float *)(**(code **)(*param_2 + 0xbc))();
  fVar11 = DAT_11de9918;
  if (*pfVar8 != (float)local_38) {
    pfVar8 = (float *)(**(code **)(*param_2 + 0xbc))();
    fVar11 = DAT_11de9918 / *pfVar8;
  }
  local_8 = (int *)fVar11;
  pfVar8 = (float *)(**(code **)(*param_2 + 0xd0))(local_48);
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 200))(&local_2c);
  local_18 = pfVar8[3];
  fVar11 = *pfVar8;
  fVar12 = pfVar8[1];
  uVar1 = *puVar5;
  fVar13 = pfVar8[2];
  local_1c = (float)((uint)fVar11 ^ DAT_11de9c90);
  local_68 = *(uint *)(puVar5 + 1);
  local_70._0_4_ = (uint)uVar1;
  local_70._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  fVar15 = (float)((uint)local_70 ^ DAT_11de9c90);
  fVar18 = (float)(local_70._4_4_ ^ DAT_11de9c90);
  local_14 = (float)((uint)fVar12 ^ DAT_11de9c90);
  fVar19 = (float)(local_68 ^ DAT_11de9c90);
  local_10 = (float *)((uint)fVar13 ^ DAT_11de9c90);
  fVar17 = (fVar13 * fVar18 - fVar12 * fVar19) + local_18 * fVar15;
  fVar16 = (fVar11 * fVar19 - fVar13 * fVar15) + local_18 * fVar18;
  fVar11 = (fVar12 * fVar15 - fVar11 * fVar18) + local_18 * fVar19;
  local_c = fVar13 * fVar16 - pfVar8[1] * fVar11;
  local_c = fVar15 + local_c + local_c;
  fVar11 = *pfVar8 * fVar11 - fVar13 * fVar17;
  fVar16 = pfVar8[1] * fVar17 - *pfVar8 * fVar16;
  fVar17 = (local_1a8 * local_14 - local_1b0._4_4_ * (float)local_10) + local_18 * (float)local_1b0;
  fVar15 = ((float)local_1b0 * (float)local_10 - local_1a8 * local_1c) + local_18 * local_1b0._4_4_;
  fVar13 = (local_1b0._4_4_ * local_1c - (float)local_1b0 * local_14) + local_18 * local_1a8;
  fVar12 = local_14 * fVar13 - (float)local_10 * fVar15;
  fVar12 = (float)local_1b0 + fVar12 + local_c + fVar12;
  local_50 = (ulonglong)(uint)fVar12;
  fVar13 = (float)local_10 * fVar17 - local_1c * fVar13;
  fVar15 = local_1c * fVar15 - local_14 * fVar17;
  local_19c = (fVar15 + local_1a8 + fVar16 + fVar19 + fVar16 + fVar15) * (float)local_8;
  local_1a4 = CONCAT44((fVar13 + local_1b0._4_4_ + fVar11 + fVar18 + fVar11 + fVar13) *
                       (float)local_8,fVar12 * (float)local_8);
  fVar15 = (local_14 * local_184 - (float)local_10 * local_18c._4_4_) + local_18 * (float)local_18c;
  fVar13 = ((float)local_10 * (float)local_18c - local_1c * local_184) + local_18 * local_18c._4_4_;
  fVar12 = (local_1c * local_18c._4_4_ - local_14 * (float)local_18c) + local_18 * local_184;
  fVar11 = local_14 * fVar12 - (float)local_10 * fVar13;
  fVar11 = (float)local_18c + fVar11 + fVar11;
  fVar12 = (float)local_10 * fVar15 - local_1c * fVar12;
  local_178 = local_1c * fVar13 - local_14 * fVar15;
  fVar12 = fVar12 + local_18c._4_4_ + fVar12;
  fVar13 = (float)local_38;
  local_180 = CONCAT44(fVar12,fVar11);
  local_178 = local_178 + local_184 + local_178;
  fVar16 = fVar11 - local_178 * fVar13;
  fVar15 = local_178 * fVar13 - fVar12;
  local_8 = (int *)(fVar12 * fVar13);
  local_20 = (float)local_8 - fVar11 * fVar13;
  fVar12 = fVar15 * fVar15 + fVar16 * fVar16 + local_20 * local_20;
  local_70 = uVar1;
  if (DAT_11cbf070 < fVar12) {
    auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar17 = auVar14._0_4_;
    fVar17 = (DAT_11de9938 - fVar17 * fVar12 * fVar17 * DAT_11de98e8) * fVar17;
    local_14 = fVar17 * fVar15;
    local_1c = fVar17 * fVar16;
    local_18 = fVar17 * local_20;
    if (DAT_11cbf074 <= DAT_11de9918 / fVar17) {
      dVar10 = (double)(fVar11 * fVar13 + (float)local_8 + local_178);
      local_24 = local_178;
      libm_sse2_acos_precise();
      local_8 = (int *)((int)&local_38 + 4);
      local_10 = &local_c;
      local_20 = (float)dVar10 * DAT_11de98e8;
      fVar3 = (float10)fcos((float10)local_20);
      fVar9 = (float10)fsin((float10)local_20);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_38._4_4_ = (float)fVar3;
      local_c = (float)fVar9;
      local_30 = local_14 * local_c;
      local_2c = local_1c * local_c;
      local_28 = local_18 * local_c;
      local_24 = local_38._4_4_;
      FUN_10abc150(&local_30);
      local_24 = (float)local_3c;
      local_138 = local_44;
      goto LAB_10b25edf;
    }
  }
  local_138 = CONCAT44(fVar13,fVar13);
  local_24 = 0.0;
LAB_10b25edf:
  local_130 = (uint)local_24;
  local_148 = 0x43fa0000;
  local_150 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_160 = 0x43fa0000;
  local_24 = 500.0;
  local_13c = 0x43fa0000;
  local_168 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_144 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1b8 = 0xffffffff;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar6 = (int *)(**(code **)(*piVar6 + 0x60))();
  local_64 = (**(code **)(*piVar6 + 0x18))("GameOnHit");
  local_58 = local_200;
  local_60 = 0x4ffff;
  local_5c = 0;
  local_54 = 0;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  iVar2 = *piVar6;
  uVar7 = (**(code **)(*param_2 + 4))();
  piVar6 = (int *)(**(code **)(iVar2 + 0x144))(uVar7);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x24))(&local_64);
  }
  return;
}


// ===== BT-event sender: FUN_10ba4b10@10ba4b10 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10ba4b10(int param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_a8 [19];
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_2c = 0x12d;
  local_28 = 0x4ffff;
  local_20 = 0;
  local_1c = 0;
  local_24 = param_2;
  (**(code **)(**(int **)(*(int *)(param_1 + 0xd8) + 4) + 0x24))(&local_2c);
  piVar2 = *(int **)(param_2 + 5);
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x2c))();
    if (iVar1 == 2) {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x28))(2);
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        iVar1 = *piVar3;
        uVar4 = (**(code **)(*piVar2 + 4))();
        piVar2 = (int *)(**(code **)(iVar1 + 0x144))(uVar4);
        if (piVar2 != (int *)0x0) {
          local_54 = *(undefined4 *)(param_2 + 1);
          local_5c = *param_2;
          local_c = local_a8;
          local_18 = 0x134;
          local_14 = 0x4ffff;
          local_10 = 0;
          local_8 = 0;
          local_a8[0] = 4;
          (**(code **)(*piVar2 + 0x24))(&local_18);
        }
      }
    }
  }
  return;
}


// ===== BT-event sender: BuffArea::BuildGameOnHitEvent@10bc94c0 =====

/* [RE-R1]
   calls: libm_sse2_acos_precise
   strings:
     ""BuffArea""
     ""GameOnHit"" */

void __thiscall BuffArea__BuildGameOnHitEvent(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  float10 fVar2;
  int *piVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int *piVar6;
  float10 fVar7;
  int **ppiVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_1f0 [16];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  float local_18c;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  float local_174;
  undefined8 local_170;
  float local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  float local_120;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_bc;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined8 local_30;
  float local_28;
  int **local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  int *local_c;
  int *local_8;
  
  local_24 = (int **)param_1;
  local_8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                             (*(undefined4 *)(param_1 + 0x44));
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                            (*(undefined4 *)(param_2 + 8));
  if (local_8 == (int *)0x0) {
    return;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_30 = 0;
  FUN_10b27660(*(undefined4 *)((int)local_24 + 0x44),*(undefined4 *)(param_2 + 8),0,0,0xffffffff,
               0xffffffff,0);
  local_c = (int *)0x0;
  local_bc = CONCAT44((int)local_30,(int)local_30);
  local_b4 = 0;
  puVar4 = (undefined8 *)(**(code **)(*piVar3 + 0x94))();
  pfVar5 = (float *)(**(code **)(*local_8 + 0x94))();
  local_14 = (float)*puVar4;
  fStack_10 = (float)((ulonglong)*puVar4 >> 0x20);
  local_1c = *pfVar5 - local_14;
  local_18 = pfVar5[1] - fStack_10;
  local_c = (int *)(pfVar5[2] - *(float *)(puVar4 + 1));
  local_a4 = 0;
  local_9c = 0;
  local_a0 = 0;
  fVar10 = local_18 * local_18 + local_1c * local_1c + (float)local_c * (float)local_c +
           DAT_11de98a0;
  auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  local_a8 = auVar13._0_4_;
  local_a8 = (DAT_11de9938 - local_a8 * fVar10 * local_a8 * DAT_11de98e8) * local_a8;
  _local_b0 = CONCAT44(local_18 * local_a8,local_1c * local_a8);
  local_a8 = (float)local_c * local_a8;
  local_8 = local_c;
  local_1dc = FUN_10b27fd0(param_3);
  local_1e0 = FUN_10b27fd0("BuffArea");
  local_c = (int *)((uint)local_8 ^ DAT_11de9c90);
  local_1c = (float)((uint)local_1c ^ DAT_11de9c90);
  local_18 = (float)((uint)local_18 ^ DAT_11de9c90);
  local_1d8 = 0;
  local_1d4 = 0;
  local_dc = 0;
  local_d8 = 0;
  fVar10 = local_18 * local_18 + local_1c * local_1c + (float)local_30;
  if (fVar10 <= DAT_11cbf070) {
    local_188 = DAT_1201fd04;
    local_180 = DAT_1201fd0c;
  }
  else {
    auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar11 = auVar13._0_4_;
    fVar11 = (DAT_11de9938 - fVar11 * fVar10 * fVar11 * DAT_11de98e8) * fVar11;
    local_180 = fVar11 * (float)local_30;
    local_188 = CONCAT44(local_18 * fVar11,local_1c * fVar11);
  }
  local_8 = local_c;
  piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar6 = (int *)(**(code **)(*piVar6 + 0x68))();
  (**(code **)(*piVar6 + 0xc))(*(undefined4 *)(param_2 + 8));
  fVar10 = local_18 * local_18 + local_1c * local_1c + (float)local_8 * (float)local_8;
  if (fVar10 <= DAT_11cbf070) {
    local_17c = DAT_1201fd04;
    local_174 = DAT_1201fd0c;
  }
  else {
    auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar11 = auVar13._0_4_;
    fVar11 = (DAT_11de9938 - fVar11 * fVar10 * fVar11 * DAT_11de98e8) * fVar11;
    local_174 = (float)local_8 * fVar11;
    local_17c = CONCAT44(local_18 * fVar11,local_1c * fVar11);
  }
  local_1a0 = CONCAT44((int)local_30,(int)local_30);
  local_198 = 0.0;
  local_164 = CONCAT44(DAT_11de9918,DAT_11de9918);
  local_c = (int *)0x3f800000;
  local_15c = 0x3f800000;
  pfVar5 = (float *)(**(code **)(*piVar3 + 0xbc))();
  ppiVar8 = DAT_11de9918;
  if (*pfVar5 != (float)local_30) {
    pfVar5 = (float *)(**(code **)(*piVar3 + 0xbc))();
    ppiVar8 = (int **)((float)DAT_11de9918 / *pfVar5);
  }
  local_24 = ppiVar8;
  pfVar5 = (float *)(**(code **)(*piVar3 + 0xd0))(&local_40);
  puVar4 = (undefined8 *)(**(code **)(*piVar3 + 200))(&local_14);
  fVar10 = pfVar5[3];
  fVar11 = *pfVar5;
  fVar12 = pfVar5[1];
  uVar1 = *puVar4;
  fVar16 = pfVar5[2];
  local_20 = (float)((uint)fVar11 ^ DAT_11de9c90);
  local_58 = *(uint *)(puVar4 + 1);
  local_60._0_4_ = (uint)uVar1;
  local_60._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  fVar14 = (float)((uint)local_60 ^ DAT_11de9c90);
  fVar18 = (float)(local_60._4_4_ ^ DAT_11de9c90);
  local_18 = (float)((uint)fVar12 ^ DAT_11de9c90);
  fVar19 = (float)(local_58 ^ DAT_11de9c90);
  local_8 = (int *)((uint)fVar16 ^ DAT_11de9c90);
  fVar17 = (fVar16 * fVar18 - fVar12 * fVar19) + fVar10 * fVar14;
  fVar15 = (fVar11 * fVar19 - fVar16 * fVar14) + fVar10 * fVar18;
  fVar11 = (fVar12 * fVar14 - fVar11 * fVar18) + fVar10 * fVar19;
  local_1c = fVar16 * fVar15 - pfVar5[1] * fVar11;
  local_1c = fVar14 + local_1c + local_1c;
  fVar11 = *pfVar5 * fVar11 - fVar16 * fVar17;
  fVar14 = pfVar5[1] * fVar17 - *pfVar5 * fVar15;
  fVar15 = (local_198 * local_18 - local_1a0._4_4_ * (float)local_8) + fVar10 * (float)local_1a0;
  fVar16 = ((float)local_1a0 * (float)local_8 - local_198 * local_20) + fVar10 * local_1a0._4_4_;
  fVar12 = (local_1a0._4_4_ * local_20 - (float)local_1a0 * local_18) + fVar10 * local_198;
  fStack_10 = local_18 * fVar12 - (float)local_8 * fVar16;
  fStack_10 = (float)local_1a0 + fStack_10 + local_1c + fStack_10;
  fVar12 = (float)local_8 * fVar15 - local_20 * fVar12;
  fVar16 = local_20 * fVar16 - local_18 * fVar15;
  local_18c = (fVar16 + local_198 + fVar14 + fVar19 + fVar14 + fVar16) * (float)local_24;
  local_194 = CONCAT44((fVar12 + local_1a0._4_4_ + fVar11 + fVar18 + fVar11 + fVar12) *
                       (float)local_24,fStack_10 * (float)local_24);
  fVar16 = (local_18 * local_174 - (float)local_8 * local_17c._4_4_) + fVar10 * (float)local_17c;
  fVar12 = ((float)local_8 * (float)local_17c - local_20 * local_174) + fVar10 * local_17c._4_4_;
  fVar11 = (local_20 * local_17c._4_4_ - local_18 * (float)local_17c) + fVar10 * local_174;
  fVar10 = local_18 * fVar11 - (float)local_8 * fVar12;
  fVar10 = (float)local_17c + fVar10 + fVar10;
  local_28 = (float)local_8 * fVar16 - local_20 * fVar11;
  local_168 = local_20 * fVar12 - local_18 * fVar16;
  local_28 = local_28 + local_17c._4_4_ + local_28;
  fVar16 = (float)local_30;
  local_170 = CONCAT44(local_28,fVar10);
  local_168 = local_168 + local_174 + local_168;
  fVar15 = fVar10 - local_168 * fVar16;
  fVar14 = local_168 * fVar16 - local_28;
  local_28 = local_28 * fVar16;
  fVar11 = local_28 - fVar10 * fVar16;
  fVar12 = fVar14 * fVar14 + fVar15 * fVar15 + fVar11 * fVar11;
  local_60 = uVar1;
  if (DAT_11cbf070 < fVar12) {
    auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar17 = auVar13._0_4_;
    fVar17 = (DAT_11de9938 - fVar17 * fVar12 * fVar17 * DAT_11de98e8) * fVar17;
    local_1c = fVar17 * fVar14;
    local_18 = fVar17 * fVar15;
    local_20 = fVar17 * fVar11;
    if (DAT_11cbf074 <= (float)DAT_11de9918 / fVar17) {
      dVar9 = (double)(fVar10 * fVar16 + local_28 + local_168);
      local_c = (int *)local_168;
      libm_sse2_acos_precise();
      local_28 = (float)((int)&local_30 + 4);
      local_24 = &local_8;
      fVar2 = (float10)fcos((float10)((float)dVar9 * DAT_11de98e8));
      fVar7 = (float10)fsin((float10)((float)dVar9 * DAT_11de98e8));
                    /* WARNING: Ignoring partial resolution of indirect */
      local_30._4_4_ = (float)fVar2;
      local_8 = (int *)(float)fVar7;
      local_40 = local_1c * (float)local_8;
      local_3c = local_18 * (float)local_8;
      local_38 = local_20 * (float)local_8;
      local_34 = local_30._4_4_;
      FUN_10abc150(&local_40);
      local_128 = CONCAT44(fStack_10,local_14);
      goto LAB_10bc9e29;
    }
  }
  local_128 = CONCAT44(fVar16,fVar16);
  local_c = (int *)0x0;
LAB_10bc9e29:
  local_120 = (float)local_c;
  local_138 = 0x43fa0000;
  local_140 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_150 = 0x43fa0000;
  local_c = (int *)0x43fa0000;
  local_12c = 0x43fa0000;
  local_158 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_134 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1a8 = 0xffffffff;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
  local_54 = (**(code **)(*piVar3 + 0x18))("GameOnHit");
  local_48 = local_1f0;
  local_50 = 0x4ffff;
  local_4c = 0;
  local_44 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x144))(*(undefined4 *)(param_2 + 8));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x24))(&local_54);
  }
  return;
}


// ===== BT-event sender: FUN_10bdd370@10bdd370 =====

/* [RE-AUTO c0] */

void FUN_10bdd370(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_1c = 0x112;
  local_18 = 0x4ffff;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x48))();
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  cVar2 = (**(code **)(*piVar3 + 0xc))();
  while (cVar2 == '\0') {
    local_8 = (int *)(**(code **)(*piVar3 + 0x10))();
    if (local_8 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x68))();
      iVar1 = *piVar4;
      uVar5 = (**(code **)(*local_8 + 4))();
      piVar4 = (int *)(**(code **)(iVar1 + 0xc))(uVar5);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x40))(&local_1c);
      }
    }
    cVar2 = (**(code **)(*piVar3 + 0xc))();
  }
  (**(code **)(*piVar3 + 8))();
  return;
}


// ===== BT-event sender: FUN_10bdffc0@10bdffc0 =====

/* [RE-AUTO c0]
   strings:
     ""GameCommonEvent"" */

void FUN_10bdffc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)(*param_1 + 8))(1);
  iVar2 = (**(code **)(*param_1 + 8))(2);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x38))(iVar1);
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 4))();
      piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
      local_20 = (**(code **)(*piVar3 + 0x18))("GameCommonEvent");
      local_18 = &local_c;
      local_1c = 0x4ffff;
      local_10 = 0;
      local_8 = 2;
      local_14 = iVar2;
      local_c = uVar4;
      piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x144))(uVar4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x24))(&local_20);
      }
    }
  }
  return;
}


// ===== BT-event sender: FUN_10be2090@10be2090 =====

/* [RE-AUTO c0] */

void __thiscall
FUN_10be2090(int *param_1,int param_2,int param_3,char *param_4,undefined4 param_5,
            undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_1a4;
  undefined4 local_1a0;
  undefined4 local_198;
  uint local_18c;
  uint local_188;
  undefined4 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_54;
  undefined4 local_4c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  FUN_10bb4150();
  if (param_4 != (char *)0x0) {
    local_18c = 0x4e67c6a7;
    cVar1 = *param_4;
    while (cVar1 != '\0') {
      param_4 = param_4 + 1;
      local_18c = local_18c ^ local_18c * 0x20 + (local_18c >> 2) + (int)cVar1;
      cVar1 = *param_4;
    }
    local_188 = local_18c;
    if (((param_2 != 0) &&
        (iVar2 = (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x90) + 0x7c))(param_2), iVar2 != 0))
       && (*(int *)(iVar2 + 8) != -1)) {
      piVar3 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0xd8))();
      (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(iVar2 + 8));
      local_1a4 = *(int *)(iVar2 + 8);
      iVar2 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
      local_54 = iVar2 == local_1a4;
    }
    if (((param_3 != 0) &&
        (iVar2 = (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x90) + 0x7c))(param_3), iVar2 != 0))
       && (*(int *)(iVar2 + 8) != -1)) {
      piVar3 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0xd8))();
      (**(code **)(*piVar3 + 0x2c))(*(undefined4 *)(iVar2 + 8));
      local_198 = *(undefined4 *)(iVar2 + 8);
    }
    piVar3 = (int *)(**(code **)(*param_1 + 4))();
    local_1a0 = (**(code **)(*piVar3 + 4))();
    local_15c = param_5;
    local_4c = 1;
    local_18 = 0x125;
    local_14c = *(undefined4 *)(param_6 + 1);
    local_154 = *param_6;
    local_14 = 0x4ffff;
    local_134 = *(undefined4 *)(param_7 + 1);
    local_13c = *param_7;
    local_c = &local_1a4;
    local_10 = 0;
    local_8 = 0;
    local_1c = local_134;
    piVar3 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x144))(local_1a0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x24))(&local_18);
    }
  }
  return;
}


// ===== BT-event sender: FUN_10be8f40@10be8f40 =====

/* [RE-AUTO c0] */

void __thiscall
FUN_10be8f40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_18 = 0x11e;
  local_14 = 0x4ffff;
  local_8 = (undefined1 *)0x0;
  local_10 = 0;
  local_c = param_3;
  local_48[0] = 0;
  FUN_11316910();
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0xffffffff;
  FUN_11316910();
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_11316b10(param_2);
  FUN_11316b10(param_4);
  local_24 = param_5;
  local_8 = local_48;
  piVar1 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x144))(*(undefined4 *)(param_1 + 0x44));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(&local_18);
  }
  return;
}


// ===== BT-event sender: FUN_10be9010@10be9010 =====

/* [RE-AUTO c0]
   strings:
     ""OnLeave""
     ""OnEnter"" */

void __thiscall FUN_10be9010(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined1 *local_8;
  
  local_18 = 0x11e;
  local_14 = 0x4ffff;
  local_10 = 0;
  local_c = (char *)0x0;
  local_8 = (undefined1 *)0x0;
  local_48[0] = 0;
  FUN_11316910();
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0xffffffff;
  FUN_11316910();
  local_24 = param_4;
  local_8 = local_48;
  local_10 = param_3;
  local_c = "OnEnter";
  if (param_2 == '\0') {
    local_c = "OnLeave";
  }
  local_20 = 0;
  local_1c = 0;
  piVar1 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x144))(*(undefined4 *)(param_1 + 0x44));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(&local_18);
  }
  return;
}


// ===== BT-event sender: FUN_10bf3110@10bf3110 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10bf3110(int param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    local_10 = &local_8;
    local_8 = 1;
    local_1c = 0x12f;
    local_18 = 0x4ffff;
    local_14 = 0;
    local_c = 0;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + 4) + 0x24))(&local_1c);
  }
  return 0;
}


// ===== BT-event sender: FUN_10c20ad0@10c20ad0 =====

/* [RE-AUTO c0] */

void FUN_10c20ad0(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  uVar1 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
  piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(uVar1);
  if (piVar2 != (int *)0x0) {
    local_c = &stack0x00000004;
    local_18 = 0x137;
    local_8 = &stack0x00000008;
    local_14 = 0x4ffff;
    local_10 = 0;
    (**(code **)(*piVar2 + 0x24))(&local_18);
  }
  return;
}


// ===== BT-event sender: FUN_10c20c60@10c20c60 =====

/* [RE-AUTO c0]
   calls: CBuffInfo::GetManagers_10c09270 */

void FUN_10c20c60(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  float local_58;
  undefined4 local_38;
  char local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  int *local_c;
  char local_6;
  char local_5;
  
  if (*(int *)(param_3 + 0x3c) < 4) {
    CBuffInfo__AddBuffEffectsForHit(param_1,param_3,param_4,param_5);
  }
  FUN_10ba9b00(*param_1);
  piVar5 = (int *)FUN_10c007c0();
  FUN_10ba9b00(param_1[1]);
  piVar6 = (int *)FUN_10c007c0();
  if ((piVar6 != (int *)0x0) && (cVar4 = (**(code **)(*piVar6 + 0xf4))(), cVar4 != '\0')) {
    return;
  }
  if (piVar5 == (int *)0x0) {
    param_4._3_1_ = '\0';
  }
  else {
    param_4._3_1_ = (**(code **)(*piVar5 + 0x1c4))();
  }
  if (piVar6 == (int *)0x0) {
    param_5._3_1_ = '\0';
  }
  else {
    param_5._3_1_ = (**(code **)(*piVar6 + 0x1c4))();
  }
  if (param_4._3_1_ == '\0') {
LAB_10c20d18:
    local_6 = '\0';
  }
  else {
    cVar4 = (**(code **)(*piVar5 + 0x228))();
    local_6 = '\x01';
    if (cVar4 == '\0') goto LAB_10c20d18;
  }
  if (param_5._3_1_ == '\0') {
LAB_10c20d36:
    local_5 = '\0';
  }
  else {
    cVar4 = (**(code **)(*piVar6 + 0x228))();
    local_5 = '\x01';
    if (cVar4 == '\0') goto LAB_10c20d36;
  }
  piVar7 = (int *)(**(code **)(*(int *)*DAT_1202e818 + 0xd8))();
  local_c = (int *)(**(code **)(*piVar7 + 0x2c))(param_1[3]);
  bVar2 = false;
  bVar3 = false;
  if (local_c != (int *)0x0) {
    iVar8 = (**(code **)(*local_c + 0x288))();
    if (iVar8 != 0) {
      piVar7 = (int *)(**(code **)(*local_c + 0x288))();
      iVar8 = (**(code **)(*piVar7 + 0xa8))();
      if (((iVar8 == 0xc) || (iVar8 == 7)) || (iVar8 == 5)) {
        bVar2 = true;
        bVar3 = true;
        goto LAB_10c20d9e;
      }
    }
    bVar2 = false;
  }
LAB_10c20d9e:
  if (piVar6 == (int *)0x0) {
    (**(code **)(*(int *)DAT_1202e818[0x14] + 0x2c))(param_1[1]);
    piVar5 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
    piVar5 = (int *)(**(code **)(*piVar5 + 0x144))(param_1[1]);
    if (piVar5 != (int *)0x0) {
      local_24 = 0x126;
      local_20 = 0x4ffff;
      local_1c = 0;
      local_18 = param_1;
      local_14 = param_3;
      (**(code **)(*piVar5 + 0x24))(&local_24);
    }
  }
  else {
    if (((local_6 != '\0') && (param_5._3_1_ != '\0')) && ((!bVar2 && (piVar5 != piVar6)))) {
      FUN_10bab970(param_1,param_3);
    }
    if ((local_5 != '\0') && (((param_4._3_1_ == '\0' || (piVar6 == piVar5)) || (bVar3)))) {
      iVar8 = (**(code **)(*piVar6 + 800))();
      piVar7 = *(int **)(iVar8 + 0x10);
      iVar8 = (**(code **)(*piVar7 + 100))();
      if (iVar8 != 0) {
        (**(code **)(*piVar7 + 100))(param_3);
        FUN_10fd2f7c();
      }
      piVar7 = (int *)(**(code **)(*piVar6 + 800))();
      (**(code **)(*piVar7 + 0x5c))(param_3);
      (**(code **)(*piVar6 + 700))(param_3);
    }
    if ((*(char *)((int)DAT_1202e818 + 0x209) == '\0') &&
       (cVar4 = (**(code **)(*piVar6 + 0x6e4))(), cVar4 == '\0')) {
      return;
    }
    cVar4 = (**(code **)(*piVar6 + 0x1c4))();
    if (cVar4 == '\0') {
      piVar5 = (int *)(**(code **)(*piVar6 + 800))();
      (**(code **)(*piVar5 + 0x5c))(param_3);
      FUN_10c38b70(param_1,param_3);
      local_38 = *param_1;
      local_6c = 0x8a7;
      local_68 = 0xffffffff;
      local_64 = 0xffffffff;
      local_28 = 0;
      FUN_10bd00a0(param_1,local_60);
      iVar8 = FUN_10a12600();
      local_58 = (float)iVar8;
      (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x98) + 0x14))(&local_6c);
      return;
    }
    if (local_5 == '\0') {
      iVar8 = (**(code **)(*piVar6 + 800))();
      piVar7 = *(int **)(iVar8 + 0x10);
      iVar8 = (**(code **)(*piVar7 + 100))();
      if (iVar8 != 0) {
        (**(code **)(*piVar7 + 100))(param_3);
        FUN_10fd2f7c();
      }
      piVar7 = (int *)(**(code **)(*piVar6 + 800))();
      (**(code **)(*piVar7 + 0x5c))(param_3);
      (**(code **)(*piVar6 + 700))(param_3);
    }
    if ((piVar5 != (int *)0x0) && (local_28 = (**(code **)(*piVar5 + 0x1c4))(), local_28 == '\0')) {
      local_6c = 0x8a6;
      local_68 = 0xffffffff;
      local_38 = *param_1;
      local_64 = 0xffffffff;
      FUN_10bd00a0(param_1,local_60);
      iVar8 = FUN_10a12600();
      local_58 = (float)iVar8;
      (**(code **)(**(int **)(DAT_1202e818[0x34] + 0x98) + 0x14))(&local_6c);
      uVar1 = param_1[1];
      local_18 = (undefined4 *)(**(code **)(*piVar5 + 800))();
      local_24 = 0x70e;
      local_20 = 0xffffffff;
      local_1c = 0xffffffff;
      local_14 = uVar1;
      iVar8 = (**(code **)(*piVar5 + 800))();
      (**(code **)(**(int **)(iVar8 + 0x1c) + 0x14))(&local_24);
      return;
    }
  }
  return;
}


// ===== BT-event sender: FUN_10c214b0@10c214b0 =====

/* [RE-AUTO c0]
   strings:
     ""mat_default""
     ""bloodsplash"" */

void FUN_10c214b0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int *param_6)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_a0 [12];
  undefined8 local_94;
  undefined4 local_8c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined1 *local_5c;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  undefined8 local_44;
  float local_3c;
  float local_38;
  float local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  float *local_18;
  int *local_14;
  float local_10;
  int *local_c;
  float local_8;
  
  piVar8 = param_6;
  if ((param_6 != (int *)0x0) &&
     (((cVar3 = (**(code **)(*param_6 + 0x1c4))(), cVar3 != '\0' ||
       (cVar3 = (**(code **)(*piVar8 + 0x1c8))(), cVar3 != '\0')) &&
      (cVar3 = FUN_10c25450(), piVar2 = param_1, cVar3 == '\0')))) {
    local_4c = 0;
    local_10 = 0.0;
    piVar4 = (int *)FUN_10c007c0(param_1[1]);
    local_30 = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*(int *)piVar4[3] + 0x1b8))(0);
      if ((((char)piVar4[0x535] != '\0') &&
          (cVar3 = (**(code **)(*piVar4 + 0x1d4))(), cVar3 != '\0')) &&
         (iVar5 = (**(code **)(*piVar4 + 800))(), iVar5 != 0)) {
        piVar6 = (int *)(**(code **)(*piVar4 + 800))();
        iVar5 = (**(code **)(*piVar6 + 0xa8))();
        if (iVar5 == 1) {
          (**(code **)(*piVar4 + 800))();
          iVar5 = param_2;
          local_2c = FUN_11429e60(*(undefined4 *)(param_2 + 0x88));
          if (local_2c != 0) {
            local_3c = (float)piVar2[0x31];
            local_44 = *(undefined8 *)(piVar2 + 0x2f);
            local_50 = (float)piVar2[0x28];
            local_18 = (float *)piVar2[0x2e];
            local_58 = *(longlong *)(piVar2 + 0x26);
            local_20 = *(longlong *)(piVar2 + 0x2c);
            (**(code **)(*DAT_120286c8 + 0x16c))(piVar2[4]);
            iVar7 = FUN_10ce37b0();
            if (((iVar7 != 0) && (DAT_11cc1fa4 <= *(float *)(iVar7 + 0x230))) &&
               ((DAT_11cc1fa4 <= *(float *)(iVar7 + 0x228) &&
                (DAT_11cc1fa4 <= *(float *)(iVar7 + 0x22c))))) {
              fVar12 = DAT_11de9918 / *(float *)(iVar7 + 0x230);
              uVar1 = (uint)local_8 >> 8;
              local_8 = (float)((uint)local_8 & 0xffffff00);
              fVar16 = (float)local_44 * fVar12;
              fVar17 = local_44._4_4_ * fVar12;
              fVar12 = local_3c * fVar12;
              fVar13 = DAT_11de9918 / *(float *)(iVar7 + 0x228);
              param_1 = (int *)(local_50 * fVar13);
              fVar15 = (float)local_58 * fVar13;
              fVar13 = local_58._4_4_ * fVar13;
              local_38 = DAT_11de9918 / *(float *)(iVar7 + 0x22c);
              local_34 = local_20._4_4_ * local_38;
              local_c = (int *)((float)local_20 * local_38);
              local_38 = (float)local_18 * local_38;
              piVar4 = local_c;
              if (*(int *)(DAT_120286b8 + 0x25c) == 1) {
                local_8 = (float)CONCAT31((int3)uVar1,1);
                if (DAT_11cc1fa4 < *(float *)(DAT_120286b8 + 0x260)) {
                  fVar14 = DAT_11de9918 / *(float *)(DAT_120286b8 + 0x260);
                  param_1 = (int *)((float)param_1 * fVar14);
                  fVar16 = fVar16 * fVar14;
                  local_34 = local_34 * fVar14;
                  fVar17 = fVar17 * fVar14;
                  local_38 = local_38 * fVar14;
                  fVar12 = fVar12 * fVar14;
                  fVar15 = fVar15 * fVar14;
                  fVar13 = fVar13 * fVar14;
                  piVar4 = (int *)((float)local_c * fVar14);
                }
              }
              FUN_11426150(local_8,iVar5,piVar2[0x29],piVar2[0x2a],piVar2[0x2b],fVar16,fVar17,fVar12
                           ,fVar15,fVar13,param_1,piVar4,local_34,local_38,
                           *(undefined4 *)(iVar7 + 0x234));
            }
          }
        }
      }
      local_2c = FUN_10c083a0(piVar2[4],piVar2[5],piVar2[7]);
      if (((((local_2c != 0) &&
            (piVar4 = (int *)(local_2c + 0x60), FUN_10c243a0(&param_1,piVar2 + 8), piVar8 = param_6,
            piVar6 = param_1, param_1 != piVar4)) &&
           (cVar3 = (**(code **)(*param_6 + 0x228))(), cVar3 != '\0')) &&
          ((cVar3 = FUN_10c25450(), piVar4 = local_30, cVar3 == '\0' &&
           (cVar3 = (**(code **)(*local_30 + 0x1d4))(), piVar8 = param_6, cVar3 != '\0')))) &&
         (iVar5 = (**(code **)(*piVar4 + 800))(), piVar8 = param_6, iVar5 != 0)) {
        piVar8 = (int *)(**(code **)(*piVar4 + 800))();
        iVar5 = (**(code **)(*piVar8 + 0xa8))();
        piVar8 = param_6;
        if (iVar5 != 8) {
          piVar8 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
          local_c = (int *)(**(code **)(*piVar8 + 0x144))(*piVar2);
          FUN_10c248a0(piVar6 + 7);
          cVar3 = FUN_10c239c0(piVar2,param_2,&local_44);
          if (cVar3 != '\0') {
            local_10 = (float)local_4c;
            for (iVar5 = (int)(float)local_44; (float)iVar5 != local_44._4_4_; iVar5 = iVar5 + 8) {
              local_10 = local_10 + *(float *)(iVar5 + 4);
            }
            local_8 = local_10;
            fVar11 = (float10)FUN_10c23b90(piVar2,param_2);
            param_1 = (int *)(float)fVar11;
            if ((float)param_1 != (float)local_4c) {
              local_18 = &local_8;
              local_28 = 0x136;
              local_24 = 0x4ffff;
              local_20 = ZEXT48(&param_1) << 0x20;
              (**(code **)(*local_c + 0x24))(&local_28);
            }
            fStack_60 = 4.16186e-43;
            local_5c = (undefined1 *)0x4ffff;
            local_58 = ZEXT48(&local_44) << 0x20;
            local_50 = 0.0;
            (**(code **)(*local_c + 0x24))(&fStack_60);
          }
          if ((float)piVar6[0xe] != (float)local_4c) {
            (**(code **)(*local_14 + 0x168))(piVar6[0xe],piVar6[0xd]);
          }
          cVar3 = (**(code **)(*piVar4 + 0x1d4))();
          if (((cVar3 != '\0') &&
              (pcVar9 = (char *)FUN_10d96bc0(piVar2[0x12]), pcVar9 != (char *)0x0)) &&
             ((*pcVar9 != '\0' &&
              (piVar8 = (int *)(**(code **)(*(int *)piVar4[3] + 0x1b8))(0), piVar8 != (int *)0x0))))
          {
            local_5c = (undefined1 *)piVar2[0x2b];
            uStack_64 = (undefined4)*(undefined8 *)(piVar2 + 0x29);
            fStack_60 = (float)((ulonglong)*(undefined8 *)(piVar2 + 0x29) >> 0x20);
            local_58 = *(longlong *)(piVar2 + 0x2f);
            local_50 = (float)piVar2[0x31];
            local_78 = *(float *)(pcVar9 + 4) * *(float *)(local_2c + 0x4c);
            local_74 = *(float *)(local_2c + 0x50) * *(float *)(pcVar9 + 8);
            local_68 = *(float *)(local_2c + 0x54) * *(float *)(pcVar9 + 0x14);
            local_6c = *(float *)(local_2c + 0x5c) * *(float *)(pcVar9 + 0x10);
            local_70 = *(float *)(local_2c + 0x58) * *(float *)(pcVar9 + 0xc);
            (**(code **)(*piVar8 + 0x40))(&local_78);
          }
          piVar8 = param_6;
          if ((float)local_44 != 0.0) {
            FUN_10c3d5d0((float)local_44);
            piVar8 = param_6;
          }
        }
      }
    }
    iVar5 = FUN_116db560();
    if (*(float *)(iVar5 + 0x30) <= *(float *)(param_2 + 100)) {
      local_30 = (int *)(uint)(*(int *)(param_2 + 0x34) == 2);
      if ((piVar8[0x56d] != 10) && (piVar8[0x56d] != 5)) {
        piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x6c))();
        param_1 = (int *)(**(code **)(*piVar4 + 0x54))(piVar2[2]);
        if (param_1 != (int *)0x0) {
          CInfoRecord__GetModelString("mat_default");
          if (((*(int *)(DAT_1202e818 + 0x34) != 0) &&
              (piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x298))(),
              piVar4 != (int *)0x0)) && (iVar5 = (**(code **)(*piVar4 + 0x50))(), iVar5 != 0)) {
            piVar4 = (int *)(**(code **)(*piVar4 + 0x50))();
            piVar4 = (int *)(**(code **)(*piVar4 + 8))(piVar2[0x53],0);
            if (piVar4 != (int *)0x0) {
              uVar10 = (**(code **)(*piVar4 + 0xc))();
              FUN_1083ac30(uVar10);
              FUN_10a793e0();
            }
          }
          piVar4 = param_1;
          FUN_111043f0(param_6,local_10);
          fStack_60 = (float)piVar2[0x52];
          local_5c = &DAT_1201fc98;
          local_58 = CONCAT44(local_58._4_4_,&DAT_1201fc98);
          local_68 = (float)*(undefined8 *)(piVar2 + 0x50);
          uStack_64 = (undefined4)((ulonglong)*(undefined8 *)(piVar2 + 0x50) >> 0x20);
          FUN_10a72410(&param_6);
          local_58 = CONCAT44(local_30,(float)local_58);
          local_50 = local_10;
          local_28 = 0x130;
          local_24 = 0x4ffff;
          local_18 = (float *)0x0;
          local_20 = CONCAT44("bloodsplash",&local_74);
          (**(code **)(*piVar4 + 0x40))(&local_28);
          FUN_10c249e0();
          FUN_104f6f60();
        }
      }
    }
    cVar3 = (**(code **)(*piVar8 + 0x228))();
    if ((cVar3 != '\0') && (piVar2[3] != 0)) {
      (**(code **)(*DAT_120286c8 + 0x168))(piVar2[3]);
      iVar5 = FUN_1111b530();
      if ((iVar5 != 0) && (cVar3 = FUN_10d800c0(), cVar3 != '\0')) {
        (**(code **)(*(int *)local_14[0x11] + 0x1d0))();
        cVar3 = FUN_10c25230(piVar2 + 0x14);
        if (cVar3 != '\0') {
          piVar4 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
          piVar4 = (int *)(**(code **)(*piVar4 + 0x78))();
          piVar8 = (int *)(**(code **)(*piVar4 + 0x28))(piVar8[2],0);
          FUN_10a6ffb0();
          uStack_64 = (undefined4)local_4c;
          fStack_60 = DAT_11de9918;
          local_5c = (undefined1 *)0x0;
          local_94 = CONCAT44(DAT_11cd7e88,uStack_64);
          local_18 = (float *)0x0;
          local_68 = 1.4013e-45;
          local_58 = 0x3eaa7efa41700000;
          local_50 = -0.0333;
          local_8c = 0;
          local_74 = 4.90454e-44;
          (**(code **)(*piVar8 + 0x20))(local_a0);
        }
      }
    }
    CProjectileEffect__SpawnShootBloodEffect(local_10,piVar2,param_3,param_2,param_4,param_5);
  }
  return;
}


// ===== BT-event sender: FUN_10c25ff0@10c25ff0 =====

/* [RE-AUTO c0] */

void FUN_10c25ff0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_198 [6];
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_48;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  piVar4 = local_198;
  for (iVar3 = 0x60; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x68))();
  iVar3 = (**(code **)(*piVar1 + 0xc))(param_1[1]);
  if (iVar3 != 0) {
    if (param_2 != 0) {
      local_180 = FUN_10b27fd0(param_2);
      local_17c = local_180;
    }
    iVar2 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
    local_48 = iVar2 == local_198[0];
    local_c = local_198;
    local_18 = 0x125;
    local_14 = 0x4ffff;
    local_10 = 0;
    local_8 = 0;
    if (*(int **)(iVar3 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 4) + 0x24))(&local_18);
    }
  }
  return;
}


// ===== BT-event sender: MeleeAttack::QueryTargetsAndEmitGameOnHit@10c26e50 =====

/* [RE-R1]
   strings:
     ""GameOnHit"" */

int MeleeAttack__QueryTargetsAndEmitGameOnHit(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined4 local_514 [100];
  int local_384 [100];
  int local_1f4;
  undefined4 local_1f0 [2];
  int local_1e8;
  undefined4 local_1dc;
  undefined4 local_1ac;
  undefined8 local_1a4;
  float local_19c;
  undefined8 local_18c;
  float local_184;
  undefined8 local_180;
  uint local_178;
  undefined1 local_a4;
  undefined1 local_74 [20];
  uint local_60;
  float local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  float local_24;
  undefined4 local_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int local_10;
  char local_c;
  int *local_8;
  
  piVar3 = param_1;
  iVar5 = (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  if (iVar5 != 0) {
    piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    iVar5 = (**(code **)(*piVar6 + 0x60))();
    if (iVar5 != 0) {
      param_1[0xc] = (int)local_384;
      param_1[0xd] = (int)local_514;
      param_1[0xb] = 100;
      piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(*param_1);
      if ((((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 0x288))(), iVar5 != 0)) &&
          (DAT_11de9890 < (float)param_1[7])) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) {
        iVar5 = (**(code **)(*piVar6 + 0x288))(param_1[4],param_1[5],param_1[6],param_1[7]);
        FUN_10c2c080(*(undefined4 *)(iVar5 + 4));
        (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(local_4c);
      }
      local_8 = (int *)(**(code **)(*local_8 + 0x364))(param_1);
      if ((*(char *)((int)param_1 + 0x26) == '\0') ||
         (piVar6 = param_1 + 10, param_1._3_1_ = '\x01', *piVar6 < 1)) {
        param_1._3_1_ = '\0';
      }
      puStack_18 = &local_20;
      local_10 = 0;
      local_20 = 0;
      iStack_1c = 0;
      local_c = param_1._3_1_;
      if (0 < (int)local_8) {
        puStack_14 = puStack_18;
        FUN_10bb4150();
        iVar5 = 0;
        if (0 < piVar3[0xb]) {
          do {
            if (((int *)local_384[iVar5] == (int *)0x0) ||
               ((piVar6 = (int *)(**(code **)(*(int *)local_384[iVar5] + 0x288))(),
                piVar6 != (int *)0x0 && (cVar4 = (**(code **)(*piVar6 + 0x9c))(), cVar4 != '\0'))))
            break;
            local_1f4 = *piVar3;
            local_1e8 = piVar3[1];
            local_1f0[0] = (**(code **)(*(int *)local_384[iVar5] + 4))();
            if (param_1._3_1_ == '\0') {
LAB_10c2705b:
              if (*(char *)((int)piVar3 + 0x26) == '\0') {
                local_1ac = 0xffffffff;
              }
              else {
                local_1ac = local_514[iVar5];
              }
              puVar8 = (undefined8 *)(**(code **)(*(int *)local_384[iVar5] + 200))(local_74);
              uVar1 = *puVar8;
              uVar2 = *(undefined8 *)(piVar3 + 4);
              local_1a4._0_4_ = (float)uVar1;
              local_19c = *(float *)(puVar8 + 1);
              local_1a4._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_2c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
              local_1a4._4_4_ = local_1a4._4_4_ - local_2c._4_4_;
              local_2c._0_4_ = (float)uVar2;
              local_1a4._0_4_ = (float)local_1a4 - (float)local_2c;
              local_24 = (float)piVar3[6];
              local_54 = local_19c - local_24;
              fVar11 = local_1a4._4_4_ * local_1a4._4_4_ + (float)local_1a4 * (float)local_1a4 +
                       local_54 * local_54 + DAT_11de98a0;
              auVar10 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
              fVar12 = auVar10._0_4_;
              fVar12 = (DAT_11de9938 - fVar12 * fVar11 * fVar12 * DAT_11de98e8) * fVar12;
              local_184 = local_54 * fVar12;
              local_18c = CONCAT44(local_1a4._4_4_ * fVar12,(float)local_1a4 * fVar12);
              local_178 = (uint)local_184 ^ DAT_11de9c90;
              local_180 = CONCAT44((uint)(local_1a4._4_4_ * fVar12) ^ DAT_11de9c90,
                                   (uint)((float)local_1a4 * fVar12) ^ DAT_11de9c90);
              local_1a4 = uVar1;
              local_60 = local_178;
              local_2c = uVar2;
              local_1dc = FUN_10b27fd0(piVar3[0xe]);
              iVar9 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
              local_a4 = iVar9 == local_1f4;
              piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar6 = (int *)(**(code **)(*piVar6 + 0x60))();
              local_40 = (**(code **)(*piVar6 + 0x18))("GameOnHit");
              local_34 = &local_1f4;
              local_3c = 0x4ffff;
              local_38 = 0;
              local_30 = 0;
              piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar6 = (int *)(**(code **)(*piVar6 + 0x144))(local_1f0[0]);
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 0x24))(&local_40);
              }
            }
            else {
              piVar6 = (int *)FUN_10c2b2e0(local_50,local_1f0);
              if ((undefined4 *)*piVar6 == &local_20) {
                puVar7 = (undefined4 *)FUN_10c2a980(local_1f0);
                *puVar7 = 1;
                goto LAB_10c2705b;
              }
              piVar6 = (int *)FUN_10c2a980(local_1f0);
              if (*piVar6 < piVar3[10]) {
                piVar6 = (int *)FUN_10c2a980(local_1f0);
                *piVar6 = *piVar6 + 1;
                goto LAB_10c2705b;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < piVar3[0xb]);
        }
        iVar5 = iStack_1c;
        if (local_10 != 0) {
          while (iVar5 != 0) {
            FUN_10c1ac80(*(undefined4 *)(iVar5 + 0xc));
            iVar9 = *(int *)(iVar5 + 8);
            FUN_10c3d5d0(iVar5);
            iVar5 = iVar9;
          }
        }
      }
      return (int)local_8;
    }
  }
  return 0;
}


// ===== BT-event sender: FUN_10c5d980@10c5d980 =====

/* WARNING: Removing unreachable block (ram,0x10c5da82) */
/* [RE-AUTO c0]
   calls: memmove */

undefined4 __thiscall FUN_10c5d980(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 local_388 [240];
  undefined1 *local_298;
  undefined1 *local_294;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined *local_14;
  undefined4 local_10;
  int local_c [2];
  
  param_1[1] = param_2;
  param_1[3] = *(int *)(param_2 + 0xc);
  param_1[2] = *(int *)(param_2 + 4);
  (**(code **)(*DAT_120286c8 + 0x150))(param_1);
  FUN_10c61f30();
  piVar1 = (int *)(**(code **)(*DAT_120286c8 + 0x74))();
  (**(code **)(*piVar1 + 0x1c))(param_1[2],param_1);
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_1[2]);
  FUN_10c5ea60();
  local_298 = &DAT_1201fc98;
  local_294 = &DAT_1201fc98;
  FUN_10c5ed70();
  FUN_10a49e10();
  local_2c = 0;
  local_30 = 5;
  local_28 = 0;
  local_24 = 0;
  (**(code **)(*piVar1 + 0x144))(local_388);
  FUN_10c5ebf0();
  (**(code **)(*param_1 + 0x74))();
  puVar2 = (undefined4 *)param_1[10];
  if (puVar2 != (undefined4 *)param_1[0xb]) {
    do {
      FUN_10c3d5d0(*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)param_1[0xb]);
  }
  if (param_1[10] != param_1[0xb]) {
    param_1[0xb] = param_1[10];
  }
  local_c[0] = param_1[2];
  local_18 = local_c;
  local_20 = 0x124;
  local_1c = 0x4ffff;
  local_10 = 0;
  local_14 = &DAT_11cc3628;
  local_c[1] = 2;
  (**(code **)(*(int *)param_1[1] + 0x24))(&local_20);
  return 1;
}


// ===== BT-event sender: CTrigger::NotifyBTNewComers_All@10c5dcb0 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""NewComerID""
     ""NewCome"" */

void __fastcall CTrigger__NotifyBTNewComers_All(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  char *local_2c;
  undefined4 local_28;
  int local_24 [5];
  int local_10;
  undefined4 local_c;
  char local_5;
  
  (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x8c))(local_24);
  cVar1 = FUN_113a58c0();
  while (cVar1 == '\0') {
    iVar2 = (**(code **)(local_24[0] + 0xc))();
    uVar5 = *(undefined4 *)(iVar2 + 8);
    iVar2 = (**(code **)(*param_1 + 0x68))(uVar5);
    local_5 = iVar2 != -1;
    piVar3 = (int *)(**(code **)(local_24[0] + 0xc))();
    iVar2 = (**(code **)(*piVar3 + 0x88))();
    if ((((param_1[8] == iVar2) && (local_5 == '\0')) &&
        (piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(uVar5),
        piVar3 != (int *)0x0)) &&
       (piVar4 = (int *)(**(code **)(*(int *)param_1[1] + 0x18))("BehaviorTreeBase"),
       piVar4 != (int *)0x0)) {
      uVar5 = (**(code **)(*piVar3 + 4))();
      (**(code **)(*piVar4 + 0x70))("NewComerID",uVar5);
      local_10 = param_1[2];
      local_30 = &local_10;
      local_38 = 0x124;
      local_34 = 0x4ffff;
      local_28 = 0;
      local_2c = "NewCome";
      local_c = 2;
      (**(code **)(*(int *)param_1[1] + 0x24))(&local_38);
    }
    FUN_113a58d0();
    cVar1 = FUN_113a58c0();
  }
  FUN_113a5790();
  return;
}


// ===== BT-event sender: CTrigger::NotifyBTNewComer_Single@10c5e3d0 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""NewComerID""
     ""NewCome"" */

void __thiscall CTrigger__NotifyBTNewComer_Single(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  char *local_14;
  undefined4 local_10;
  int local_c [2];
  
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x7c))(param_2);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x68))();
    if (iVar1 == -1) {
      piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x18))("BehaviorTreeBase");
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x70))("NewComerID",param_2);
        local_c[0] = param_1[2];
        local_18 = local_c;
        local_20 = 0x124;
        local_1c = 0x4ffff;
        local_10 = 0;
        local_14 = "NewCome";
        local_c[1] = 2;
        (**(code **)(*(int *)param_1[1] + 0x24))(&local_20);
        return;
      }
    }
  }
  return;
}


// ===== BT-event sender: FUN_10c67770@10c67770 =====

/* [RE-AUTO c0]
   strings:
     ""TargetInfo"" */

void __thiscall FUN_10c67770(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 != 0) {
    FUN_10cdc020(DAT_1202f450 + 0x54,0,0,0x2180033,0xbf800000);
  }
  if (*(char *)(DAT_1202e818 + 0x16c) != '\0') {
    for (pbVar2 = (byte *)(**(code **)(**(int **)(param_1 + 0xc) + 0x21c))(); pbVar2 != (byte *)0x0;
        pbVar2 = *(byte **)(pbVar2 + 0x40)) {
      pcVar7 = "TargetInfo";
      pbVar3 = pbVar2;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_10c677f7:
          uVar4 = -(uint)bVar8 | 1;
          goto LAB_10c677fc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_10c677f7;
        pbVar3 = pbVar3 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_10c677fc:
      if (uVar4 == 0) {
        piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
        piVar5 = (int *)(**(code **)(*piVar5 + 0x6c))();
        iVar6 = (**(code **)(*piVar5 + 0x54))(*(undefined4 *)(pbVar2 + 0x20));
        if (iVar6 != 0) {
          local_14 = 0x4ffff;
          local_c = 0;
          local_8 = 0;
          local_10 = param_2;
          local_18 = 0x11a - (uint)(param_2 != 0);
          (**(code **)(**(int **)(iVar6 + 4) + 0x24))(&local_18);
        }
      }
    }
  }
  if ((*(char *)(DAT_1202e818 + 0x208) != '\0') &&
     (iVar6 = (**(code **)(*DAT_1202f45c + 0x1a0))(), iVar6 != 0)) {
    piVar5 = (int *)(**(code **)(*DAT_1202f45c + 0x1a0))();
    (**(code **)(*piVar5 + 0x1c))(0x19,0);
  }
  return;
}


// ===== BT-event sender: FUN_10d52010@10d52010 =====

/* [RE-AUTO c0] */

void __fastcall FUN_10d52010(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_214 [320];
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  undefined8 local_48;
  int local_40;
  undefined8 local_3c;
  int local_34;
  undefined8 local_30;
  int local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  piVar3 = *(int **)(param_1 + 0xe4);
  if (piVar3 != (int *)(param_1 + 0xe4)) {
    do {
      if (*(char *)(param_1 + 0xd4) == '\0') break;
      piVar1 = piVar3 + 2;
      FUN_10d54320(piVar3 + 0x18);
      FUN_123f1348(local_214,piVar1);
      CGameRules__RegisterGameHitListeners(local_214,piVar1);
      piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(piVar3[0x14]);
      if (piVar2 != (int *)0x0) {
        local_90 = piVar3[0x1a];
        iStack_8c = piVar3[0x1b];
        iStack_88 = piVar3[0x1c];
        iStack_84 = piVar3[0x1d];
        local_70 = piVar3[0x22];
        local_40 = piVar3[4];
        local_80 = piVar3[0x1e];
        iStack_7c = piVar3[0x1f];
        iStack_78 = piVar3[0x20];
        iStack_74 = piVar3[0x21];
        local_34 = piVar3[7];
        local_28 = piVar3[10];
        local_48 = *(undefined8 *)piVar1;
        local_3c = *(undefined8 *)(piVar3 + 5);
        local_1c = local_cc;
        local_c = &local_94;
        local_30 = *(undefined8 *)(piVar3 + 8);
        local_18 = 0x134;
        local_14 = 0x4ffff;
        local_10 = 0;
        local_8 = 0;
        local_94 = 0x1e;
        local_24 = local_d4;
        (**(code **)(*piVar2 + 0x24))(&local_18);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)(param_1 + 0xe4));
  }
  FUN_10d59780();
  return;
}


// ===== BT-event sender: CGameRules::RegisterGameHitListeners@10d53a60 =====

/* [RE-R1]
   strings:
     ""GameOnHit""
     ""GameHit"" */

void CGameRules__RegisterGameHitListeners(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x144))(param_1[1]);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(*param_1);
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
      local_18 = (**(code **)(*piVar3 + 0x18))("GameOnHit");
      local_14 = 0x4ffff;
      local_10 = 0;
      local_8 = 0;
      local_c = param_1;
      (**(code **)(*piVar1 + 0x24))(&local_18);
      piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x60))();
      local_2c = (**(code **)(*piVar1 + 0x18))("GameHit");
      local_28 = 0x4ffff;
      local_24 = 0;
      local_1c = 0;
      local_20 = param_1;
      (**(code **)(*piVar2 + 0x24))(&local_2c);
      FUN_10ba9b00();
      iVar4 = FUN_10c007c0(param_1[1]);
      if (iVar4 != 0) {
        FUN_10d53b90(param_1,*(undefined4 *)(param_2 + 0x58));
        FUN_10d53fe0(param_1,param_2 + 0xd8);
      }
    }
  }
  return;
}


// ===== BT-event sender: FUN_10d53b90@10d53b90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __thiscall FUN_10d53b90(int param_1,int param_2,float param_3)

{
  ushort uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_74;
  undefined4 local_6c;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined4 local_44;
  undefined8 local_3c;
  ulonglong local_34;
  float local_2c;
  float local_28;
  int *local_24;
  int *local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  char local_7;
  char local_6;
  char local_5;
  
  piVar3 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x3c))();
  local_24 = (int *)(**(code **)(*piVar3 + 0x144))(*(undefined4 *)(param_2 + 4));
  if (local_24 == (int *)0x0) {
    return;
  }
  FUN_10ba9b00();
  piVar3 = (int *)FUN_10c007c0(*(undefined4 *)(param_2 + 4));
  if (piVar3 == (int *)0x0) {
    return;
  }
  local_6 = (**(code **)(**(int **)(param_1 + 0xdc) + 0x1c4))();
  local_c = (float)((uint)local_c & 0xffffff00);
  local_20 = (int *)(**(code **)(**(int **)(param_1 + 0xdc) + 800))();
  iVar4 = (**(code **)(*local_20 + 0xa8))();
  if (iVar4 == 1) {
    cVar2 = (**(code **)(*local_20 + 0x1c4))();
    local_c = (float)((uint)local_c & 0xff);
    if (cVar2 != '\0') {
      local_c = 1.4013e-45;
    }
  }
  local_7 = (**(code **)(*piVar3 + 0x1c4))();
  if ((local_6 == '\0') ||
     (cVar2 = (**(code **)(**(int **)(param_1 + 0xdc) + 0x228))(), cVar2 == '\0')) {
    local_5 = '\0';
    if (local_c._0_1_ != '\0') goto LAB_10d53c73;
  }
  else {
LAB_10d53c73:
    local_5 = '\x01';
  }
  if (local_7 == '\0') {
LAB_10d53c95:
    local_6 = '\0';
  }
  else {
    FUN_10f19240(2);
    cVar2 = FUN_1139ab00();
    local_6 = '\x01';
    if (cVar2 == '\0') goto LAB_10d53c95;
  }
  cVar2 = (**(code **)(*piVar3 + 0x1c8))();
  if (local_5 == '\0') {
    return;
  }
  if (cVar2 != '\0') {
    return;
  }
  if (local_6 != '\0') {
    return;
  }
  param_3 = (float)FUN_10d54320(&param_3);
  local_54 = 300;
  local_50 = 0x4ffff;
  local_4c = 0;
  local_48 = (undefined8 *)0x0;
  local_44 = 0;
  pfVar5 = (float *)(**(code **)(*(int *)*DAT_1202e818 + 0x1d0))();
  local_2c = *pfVar5;
  local_28 = pfVar5[4];
  local_20 = (int *)pfVar5[8];
  if (*(char *)((int)param_3 + 0xbc) != '\0') {
    local_48 = (undefined8 *)((int)param_3 + 0x9c);
    goto LAB_10d53fc0;
  }
  local_10 = 0;
  local_3c = 0;
  local_34 = (ulonglong)*(uint *)(param_1 + 0xf0);
  param_3 = *(float *)(param_1 + 0xf4);
  local_c = *(float *)(param_1 + 0xf8);
  cVar2 = FUN_1142f090(*(undefined4 *)(param_2 + 0x120),&local_10);
  if (cVar2 != '\0') {
    FUN_1142b9d0();
    uVar6 = FUN_1142bc20(local_10);
    if (*(int *)(param_1 + 0x104) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x104) + 4);
    }
    local_14 = 0.0;
    local_18 = 0.0;
    local_1c = 0.0;
    if ((iVar4 != 0) && (cVar2 = FUN_11104710(uVar6,&local_14,&local_18,&local_1c), cVar2 != '\0'))
    {
      local_34 = CONCAT44((int)(local_34 >> 0x20),(float)local_34 - local_14);
      param_3 = param_3 - local_18;
      local_c = local_c - local_1c;
    }
  }
  FUN_10d560b0();
  fVar12 = (float)local_3c;
  local_58 = param_3;
  if (local_c != fVar12) {
    local_5c = param_3 / local_c;
  }
  uVar1 = *(ushort *)(param_1 + 0xec);
  fVar13 = *(float *)(param_2 + 0x144) * local_28 + *(float *)(param_2 + 0x140) * local_2c +
           *(float *)(param_2 + 0x148) * (float)local_20;
  fVar14 = *(float *)(param_2 + 0x140) - local_2c * fVar13;
  fVar16 = *(float *)(param_2 + 0x148) - (float)local_20 * fVar13;
  fVar15 = *(float *)(param_2 + 0x144) - local_28 * fVar13;
  fVar9 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16 + DAT_11de98a0;
  auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  fVar10 = auVar11._0_4_;
  fVar10 = (DAT_11de9938 - fVar10 * fVar9 * fVar10 * DAT_11de98e8) * fVar10;
  uVar7 = (uint)local_34;
  if (uVar1 < 0x401) {
    if (uVar1 == 0x400) {
      uVar8 = local_34;
      if (fVar13 < fVar12) {
        uVar8 = (ulonglong)(uVar7 ^ DAT_11de9c90);
      }
      local_3c = local_3c & 0xffffffff;
      fVar9 = (float)uVar8;
LAB_10d53fb2:
      local_74 = CONCAT44(fVar9,fVar12);
    }
    else {
      if (uVar1 == 0x100) goto LAB_10d53faa;
      if (uVar1 != 0x200) goto LAB_10d53fbd;
      if (pfVar5[5] * fVar15 * fVar10 + pfVar5[1] * fVar14 * fVar10 + pfVar5[9] * fVar16 * fVar10 <
          fVar12) {
        uVar7 = uVar7 ^ DAT_11de9c90;
      }
      local_74 = CONCAT44(fVar12,uVar7);
      local_3c = local_3c & 0xffffffff;
    }
    local_6c = local_3c._4_4_;
  }
  else if (uVar1 == 0x800) {
    uVar7 = uVar7 ^ DAT_11de9c90;
LAB_10d53faa:
    local_3c = CONCAT44(uVar7,fVar12);
    fVar9 = fVar12;
    goto LAB_10d53fb2;
  }
LAB_10d53fbd:
  local_48 = &local_74;
LAB_10d53fc0:
  (**(code **)(*local_24 + 0x24))(&local_54);
  return;
}


// ===== BT-event sender: FUN_10d53fe0@10d53fe0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_10d53fe0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  local_c = param_1;
  piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  local_10 = (int *)(**(code **)(*piVar5 + 0x144))(*(undefined4 *)(param_2 + 4));
  piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  iVar8 = *piVar5;
  uVar6 = (**(code **)(**(int **)(param_1 + 0xe0) + 4))();
  local_14 = (int *)(**(code **)(iVar8 + 0x144))(uVar6);
  if (local_10 == (int *)0x0) {
    return;
  }
  if (local_14 == (int *)0x0) {
    return;
  }
  FUN_10ba9b00();
  piVar5 = (int *)FUN_10c007c0(*(undefined4 *)(param_2 + 4));
  if (piVar5 == (int *)0x0) {
    return;
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0xdc) + 0x1c4))();
  bVar2 = false;
  piVar7 = (int *)(**(code **)(**(int **)(local_c + 0xdc) + 800))();
  iVar8 = (**(code **)(*piVar7 + 0xa8))();
  if (iVar8 == 1) {
    cVar4 = (**(code **)(*piVar7 + 0x1c4))();
    bVar2 = false;
    if (cVar4 != '\0') {
      bVar2 = true;
    }
  }
  local_5 = (**(code **)(*piVar5 + 0x1c4))();
  if (((cVar3 != '\0') &&
      (cVar3 = (**(code **)(**(int **)(local_c + 0xdc) + 0x228))(), cVar3 != '\0')) || (bVar2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (local_5 != '\0') {
    FUN_10f19240(2);
    cVar3 = FUN_1139ab00();
    if (cVar3 != '\0') {
      bVar1 = true;
      goto LAB_10d54111;
    }
  }
  bVar1 = false;
LAB_10d54111:
  cVar3 = (**(code **)(*piVar5 + 0x1c8))();
  if (((bVar2) && (cVar3 == '\0')) && (!bVar1)) {
    local_28 = 0x129;
    local_24 = 0x4ffff;
    local_1c = param_3 + 0xc;
    local_20 = 0;
    local_18 = 0;
    (**(code **)(*local_10 + 0x24))(&local_28);
    local_1c = param_3;
    (**(code **)(*local_14 + 0x24))(&local_28);
  }
  return;
}


// ===== BT-event sender: CProximityTrigger::FireBTEnterEvent@10d604a0 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""EnterEntityID""
     ""EnterEntity"" */

void __thiscall CProximityTrigger__FireBTEnterEvent(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))("BehaviorTreeBase");
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))("EnterEntityID",param_2);
    local_c = *(undefined4 *)(param_1 + 8);
    local_18 = &local_c;
    local_20 = 0x124;
    local_1c = 0x4ffff;
    local_10 = 0;
    local_14 = "EnterEntity";
    local_8 = 2;
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(&local_20);
  }
  return;
}


// ===== BT-event sender: CProximityTrigger::FireBTLeaveEvent@10d60510 =====

/* [RE-R1]
   strings:
     ""BehaviorTreeBase""
     ""LeaveEntityID""
     ""LeaveEntity"" */

void __thiscall CProximityTrigger__FireBTLeaveEvent(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))("BehaviorTreeBase");
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))("LeaveEntityID",param_2);
    local_c = *(undefined4 *)(param_1 + 8);
    local_18 = &local_c;
    local_20 = 0x124;
    local_1c = 0x4ffff;
    local_10 = 0;
    local_14 = "LeaveEntity";
    local_8 = 2;
    (**(code **)(**(int **)(param_1 + 4) + 0x24))(&local_20);
  }
  return;
}


// ===== BT-event sender: CMelee::ComputeHitDirectionAndEmitGameOnHit@10d607a0 =====

/* [RE-R1]
   calls: libm_sse2_acos_precise
   strings:
     ""GameOnHit"" */

undefined4 __thiscall CMelee__ComputeHitDirectionAndEmitGameOnHit(int param_1,int *param_2)

{
  float10 fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  float10 fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_214;
  uint uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  float local_1a4;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  float local_18c;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  uint local_138;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_d4;
  undefined4 local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  float *local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined8 local_4c;
  float local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined8 local_38;
  uint local_30;
  undefined8 local_2c;
  float local_24;
  float *local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_40 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x288))();
  piVar10 = param_2;
  iVar4 = (**(code **)(*param_2 + 0xa8))();
  if ((iVar4 != 2) || (piVar3 == (int *)0x0)) {
    return 0xffffffff;
  }
  iVar4 = (**(code **)(*piVar3 + 0x88))();
  iVar5 = (**(code **)(*piVar10 + 0x88))();
  if (iVar5 != iVar4) {
    return 0xffffffff;
  }
  FUN_113f2660();
  puVar6 = (undefined4 *)(**(code **)(*piVar10 + 0x28))();
  iVar4 = local_40;
  local_6c = *puVar6;
  local_68 = puVar6[1];
  local_64 = puVar6[2];
  cVar2 = FUN_10d60650(&local_6c,0,&param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  param_2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(piVar10[2]);
  FUN_10bb4150();
  iVar5 = FUN_113f25b0();
  if (iVar5 == 0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar5 = FUN_113f25b0();
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(*(undefined4 *)(iVar5 + 8));
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  local_208 = (**(code **)(*piVar3 + 4))();
  local_204 = *(undefined4 *)(iVar4 + 8);
  local_1fc = (**(code **)(*param_2 + 4))();
  local_30 = 0;
  local_cc = 0;
  local_200 = 0;
  local_d4 = 0;
  local_2c = 0;
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0xd8))();
  local_4c = *puVar7;
  param_2 = *(int **)(puVar7 + 1);
  local_38._0_4_ = (float)local_4c;
  local_38._4_4_ = (float)((ulonglong)local_4c >> 0x20);
  local_8 = (float)((uint)local_38._4_4_ ^ DAT_11de9c90);
  local_24 = (float)((uint)(float)local_38 ^ DAT_11de9c90);
  local_20 = (float *)((uint)param_2 ^ DAT_11de9c90);
  local_bc = 0;
  local_c = 1.0;
  fVar14 = local_8 * local_8 + local_24 * local_24 + (float)local_20 * (float)local_20 +
           DAT_11de98a0;
  auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  local_c0 = auVar17._0_4_;
  local_c0 = (DAT_11de9938 - local_c0 * fVar14 * local_c0 * DAT_11de98e8) * local_c0;
  _local_c8 = CONCAT44(local_8 * local_c0,local_24 * local_c0);
  local_c0 = (float)local_20 * local_c0;
  local_17c = CONCAT44((int)local_2c,(int)local_2c);
  local_174 = 0x3f800000;
  local_38 = local_4c;
  local_30 = (uint)param_2;
  local_ac = (**(code **)(piVar10[0x28] + 4))();
  local_a8 = (**(code **)(*(int *)piVar10[3] + 0xb4))();
  local_b8 = 0;
  local_1f4 = 0;
  local_1f8 = 0;
  iVar8 = FUN_113f2660();
  iVar11 = *(int *)(iVar8 + 0x214) - *(int *)(iVar8 + 0x210);
  iVar5 = iVar11 >> 0x1f;
  if (iVar11 / 0x18 + iVar5 != iVar5) {
    local_1f0 = FUN_10b27fd0(*(undefined4 *)(*(int *)(iVar8 + 0x210) + 0x14));
  }
  local_f4 = 0;
  local_f0 = 0;
  fVar15 = (float)local_2c;
  fVar14 = local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38 + fVar15;
  if (fVar14 <= DAT_11cbf070) {
    local_1a0 = DAT_1201fd04;
    local_198 = DAT_1201fd0c;
  }
  else {
    auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar16 = auVar17._0_4_;
    local_1a0._4_4_ = (float)((ulonglong)local_4c >> 0x20);
    fVar16 = (DAT_11de9938 - fVar16 * fVar14 * fVar16 * DAT_11de98e8) * fVar16;
    local_198 = fVar16 * fVar15;
    local_1a0 = CONCAT44(local_1a0._4_4_ * fVar16,(float)local_38 * fVar16);
  }
  fVar14 = local_8 * local_8 + local_24 * local_24 + (float)local_20 * (float)local_20;
  if (fVar14 <= DAT_11cbf070) {
    local_194 = DAT_1201fd04;
    local_18c = DAT_1201fd0c;
  }
  else {
    auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar16 = auVar17._0_4_;
    fVar16 = (DAT_11de9938 - fVar16 * fVar14 * fVar16 * DAT_11de98e8) * fVar16;
    local_18c = (float)local_20 * fVar16;
    local_194 = CONCAT44(local_8 * fVar16,local_24 * fVar16);
  }
  local_1b8 = CONCAT44(fVar15,fVar15);
  local_1b0 = 0;
  local_17c = CONCAT44(DAT_11de9918,DAT_11de9918);
  local_c = 1.0;
  local_174 = 0x3f800000;
  local_1ec = local_1f0;
  pfVar9 = (float *)(**(code **)(**(int **)(iVar4 + 0xc) + 0xbc))();
  fVar14 = DAT_11de9918;
  if (*pfVar9 != (float)local_2c) {
    pfVar9 = (float *)(**(code **)(**(int **)(iVar4 + 0xc) + 0xbc))();
    fVar14 = DAT_11de9918 / *pfVar9;
  }
  piVar10 = *(int **)(iVar4 + 0xc);
  local_24 = fVar14;
  pfVar9 = (float *)(**(code **)(*piVar10 + 0xd0))(local_3c);
  puVar7 = (undefined8 *)(**(code **)(*piVar10 + 200))(&local_14);
  fVar14 = pfVar9[2];
  param_2 = (int *)pfVar9[3];
  local_88 = (float *)((uint)*pfVar9 ^ DAT_11de9c90);
  local_84 = (float)((uint)pfVar9[1] ^ DAT_11de9c90);
  local_80 = (float)((uint)fVar14 ^ DAT_11de9c90);
  local_214 = (uint)*puVar7;
  fVar22 = (float)(local_214 ^ DAT_11de9c90);
  uStack_210 = (uint)((ulonglong)*puVar7 >> 0x20);
  fVar20 = (float)(uStack_210 ^ DAT_11de9c90);
  fVar21 = (float)(*(uint *)(puVar7 + 1) ^ DAT_11de9c90);
  fVar19 = (fVar14 * fVar20 - pfVar9[1] * fVar21) + (float)param_2 * fVar22;
  fVar18 = (*pfVar9 * fVar21 - fVar14 * fVar22) + (float)param_2 * fVar20;
  fVar16 = (pfVar9[1] * fVar22 - *pfVar9 * fVar20) + (float)param_2 * fVar21;
  fVar15 = fVar14 * fVar18 - pfVar9[1] * fVar16;
  fVar14 = *pfVar9 * fVar16 - pfVar9[2] * fVar19;
  local_70 = pfVar9[1] * fVar19 - *pfVar9 * fVar18;
  local_78 = CONCAT44(fVar14 + fVar20 + fVar14,fVar22 + fVar15 + fVar15);
  local_70 = local_70 + fVar21 + local_70;
  local_7c = (float)param_2;
  local_20 = local_88;
  local_1c = local_80;
  local_c = local_70;
  local_8 = local_84;
  pfVar9 = (float *)FUN_10b26770(&local_14,&local_88,&local_1b8);
  local_1a4 = pfVar9[2] * local_24;
  local_1ac = CONCAT44(pfVar9[1] * local_24,*pfVar9 * local_24);
  fVar18 = (local_8 * local_18c - local_1c * local_194._4_4_) + (float)param_2 * (float)local_194;
  fVar16 = (local_1c * (float)local_194 - (float)local_20 * local_18c) +
           (float)param_2 * local_194._4_4_;
  fVar15 = ((float)local_20 * local_194._4_4_ - local_8 * (float)local_194) +
           (float)param_2 * local_18c;
  fVar14 = local_8 * fVar15 - local_1c * fVar16;
  fVar14 = (float)local_194 + fVar14 + fVar14;
  fVar15 = local_1c * fVar18 - (float)local_20 * fVar15;
  fVar15 = fVar15 + local_194._4_4_ + fVar15;
  local_180 = (float)local_20 * fVar16 - local_8 * fVar18;
  local_188 = CONCAT44(fVar15,fVar14);
  local_180 = local_180 + local_18c + local_180;
  fVar16 = (float)local_2c;
  local_1c = fVar14 - local_180 * fVar16;
  fVar19 = local_180 * fVar16 - fVar15;
  param_2 = (int *)(fVar15 * fVar16 - fVar14 * fVar16);
  fVar18 = fVar19 * fVar19 + local_1c * local_1c + (float)param_2 * (float)param_2;
  if (DAT_11cbf070 < fVar18) {
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar20 = auVar17._0_4_;
    fVar20 = (DAT_11de9938 - fVar20 * fVar18 * fVar20 * DAT_11de98e8) * fVar20;
    local_8 = fVar20 * fVar19;
    local_44 = fVar20 * local_1c;
    local_4c = CONCAT44(fVar20 * (float)param_2,(undefined4)local_4c);
    if (DAT_11cbf074 <= DAT_11de9918 / fVar20) {
      dVar13 = (double)(fVar14 * fVar16 + fVar15 * fVar16 + local_180);
      local_c = local_180;
      libm_sse2_acos_precise();
      local_1c = (float)((int)&local_2c + 4);
      local_20 = &local_24;
      param_2 = (int *)((float)dVar13 * DAT_11de98e8);
      fVar1 = (float10)fcos((float10)(float)param_2);
      fVar12 = (float10)fsin((float10)(float)param_2);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_2c._4_4_ = (float)fVar1;
      local_24 = (float)fVar12;
      local_18 = local_8 * local_24;
      local_14 = local_44 * local_24;
      local_10 = local_4c._4_4_ * local_24;
      local_c = local_2c._4_4_;
      FUN_10abc150(&local_18);
      local_c = (float)local_30;
      local_140 = local_38;
      goto LAB_10d6111a;
    }
  }
  local_c = 0.0;
  local_140 = CONCAT44(fVar16,fVar16);
LAB_10d6111a:
  local_138 = (uint)local_c;
  local_150 = 0x43fa0000;
  local_158 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_168 = 0x43fa0000;
  local_c = 500.0;
  local_144 = 0x43fa0000;
  local_170 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_14c = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1c0 = 0xffffffff;
  piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar10 = (int *)(**(code **)(*piVar10 + 0x60))();
  local_60 = (**(code **)(*piVar10 + 0x18))("GameOnHit");
  local_54 = &local_208;
  local_5c = 0x4ffff;
  local_58 = 0;
  local_50 = 0;
  (**(code **)(**(int **)(local_40 + 4) + 0x24))(&local_60);
  return 0;
}


// ===== BT-event sender: CProjectile::DoExplosionAreaDamage@10d7d4e0 =====

/* [RE-R1]
   strings:
     ""CProjectileExplosionInfo""
     ""g_EnableMonsterPartBasedAttack""
     ""ProjectileExplode""
     ""PrimitiveWorldIntersection(Game)""
     ""GameOnHit"" */

undefined4 __thiscall CProjectile__DoExplosionAreaDamage(int param_1,float param_2,int *param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  float fVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  float10 fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 local_19c [98];
  undefined2 local_13a;
  undefined1 local_138;
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [20];
  float local_d0;
  float local_c4;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  float local_a8;
  float local_a4 [7];
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  int *local_74;
  undefined4 local_70;
  undefined8 local_6c;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  int local_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((-1 < (int)param_2) &&
       (local_8 = param_1,
       iVar4 = CProjectileExplosionInfo__FindInfoByKey(0,"CProjectileExplosionInfo",0),
       param_2 != -NAN)) && ((param_2 != 0.0 || (*(int *)(iVar4 + 0x30) == 0)))) &&
     (((iVar9 = *(int *)(iVar4 + 0x28), iVar9 != 0 &&
       (iVar13 = (int)param_2 - *(int *)(iVar4 + 0x30), -1 < iVar13)) &&
      (iVar13 < *(int *)(iVar4 + 0x24))))) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x20) + (iVar13 / iVar9) * 4);
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + (iVar13 % iVar9) * 4), iVar4 != 0)) {
      local_74 = *(int **)(iVar4 + 0x30);
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 0;
      piVar7 = *(int **)(iVar4 + 0x2c);
      if (piVar7 != local_74) {
        do {
          param_2 = (float)piVar7[1];
          local_14 = piVar7;
          if (*(int **)(param_1 + 0xc) != (int *)0x0) {
            pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0xc) + 0xbc))();
            param_2 = *pfVar5 * param_2;
          }
          if (*param_3 < 3) {
            puVar10 = (undefined8 *)(**(code **)(**(int **)(param_1 + 0xc) + 200))(local_f0);
            local_2c = *puVar10;
            local_24 = *(float *)(puVar10 + 1);
          }
          else {
            local_2c = *(undefined8 *)(param_3 + 1);
            local_24 = (float)param_3[3];
            local_c4 = local_24;
          }
          if (*piVar7 == 0) {
            local_10 = 0;
            iVar4 = **(int **)(DAT_1202e818 + 0x50);
            uVar6 = FUN_10fff630();
            piVar7 = (int *)(**(code **)(iVar4 + 0x2c))(uVar6);
            if (piVar7 != (int *)0x0) {
              iVar4 = (**(code **)(*piVar7 + 0x16c))();
              if (iVar4 != 0) {
                local_a4[0] = (float)(**(code **)(*piVar7 + 0x16c))();
                local_10 = 1;
              }
              piVar7 = (int *)(**(code **)(*piVar7 + 0x1b8))(0);
              if ((piVar7 != (int *)0x0) &&
                 (piVar7 = (int *)(**(code **)(*piVar7 + 0x50))(), piVar7 != (int *)0x0)) {
                fVar8 = (float)(**(code **)(*piVar7 + 0x90))();
                local_a4[local_10] = fVar8;
                local_10 = local_10 + 1;
              }
            }
            FUN_10a706b0();
            local_13a = 0x100;
            local_138 = 1;
            local_c = 0xa10;
            piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar7 = (int *)(**(code **)(*piVar7 + 0x68))();
            piVar7 = (int *)(**(code **)(*piVar7 + 0xc))(*(undefined4 *)(param_1 + 0x40));
            if (piVar7 != (int *)0x0) {
              cVar2 = (**(code **)(*piVar7 + 0x1c4))();
              if (((cVar2 == '\0') || (cVar2 = (**(code **)(*piVar7 + 0x1cc))(), cVar2 != '\0')) &&
                 (cVar2 = (**(code **)(*piVar7 + 0x1c8))(), cVar2 == '\0')) {
                if ((DAT_120309d4 & 1) == 0) {
                  DAT_120309d4 = DAT_120309d4 | 1;
                  DAT_120309d0 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x2c) + 0x54))
                                                  ("g_EnableMonsterPartBasedAttack");
                }
                if (DAT_120309d0 != (int *)0x0) {
                  iVar4 = (**(code **)(*DAT_120309d0 + 8))();
                  local_c = 0xa18;
                  if (iVar4 != 0) goto LAB_10d7d77e;
                }
                local_c = 0xf10;
              }
              else {
                local_c = 0xa18;
              }
            }
LAB_10d7d77e:
            piVar7 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
            piVar7 = (int *)(**(code **)(*piVar7 + 0x194))();
            if ((piVar7 != (int *)0x0) && (0 < *(int *)(DAT_120286b8 + 0x8b4))) {
              (**(code **)(*piVar7 + 4))("ProjectileExplode",0);
              (**(code **)(*piVar7 + 8))
                        (&local_2c,param_2,0x3f800000,0x3f4ccccd,0x3f4ccccd,0x3f000000,0x3f000000);
            }
            iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x288))();
            if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
              local_70 = (float)local_2c;
              local_5c = local_2c._4_4_;
              local_60 = local_24;
              iVar9 = FUN_113f25b0();
              local_44 = *(float *)(iVar9 + 4);
              local_40 = local_70;
              local_3c = local_5c;
              local_38 = local_60;
              local_50 = 1.66755e-43;
              local_4c = 0xffffffffffffffff;
              local_34 = param_2;
              (**(code **)(**(int **)(*(int *)(iVar4 + 0xc) + 0x98) + 0x14))(&local_50);
            }
            local_ac = local_24;
            local_b4 = local_2c;
            local_a8 = param_2;
            local_a4[3] = 0.0;
            local_a4[4] = 0.0;
            local_a4[5] = 0.0;
            fVar14 = (float10)FUN_10a797c0(4,&local_b4,local_a4 + 3,0x11d,&local_30,0,0,0x4000,
                                           local_c,local_19c,0,0,local_a4,local_10,1,0,
                                           "PrimitiveWorldIntersection(Game)");
            local_10 = (int)fVar14;
            if ((local_30 != 0) && (0 < local_10)) {
              local_c = 0;
              do {
                piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x40) + 0x54))
                                          (*(undefined4 *)(local_c + 0x3c + local_30));
                if ((piVar7 != (int *)0x0) && (iVar4 = (**(code **)(*piVar7 + 0x2c))(), iVar4 == 2))
                {
                  piVar7 = (int *)(**(code **)(*piVar7 + 0x28))(2);
                  param_1 = local_8;
                  if (piVar7 != (int *)0x0) {
                    bVar3 = false;
                    fVar8 = local_20;
                    if (local_20 != local_1c) {
                      do {
                        iVar4 = (**(code **)(*piVar7 + 4))();
                        if (*(int *)((int)fVar8 + 4) == iVar4) {
                          bVar3 = true;
                          goto LAB_10d7d9b5;
                        }
                        fVar8 = (float)((int)fVar8 + 0x180);
                      } while (fVar8 != local_1c);
                      bVar3 = false;
                    }
LAB_10d7d9b5:
                    fVar8 = local_1c;
                    param_1 = local_8;
                    if (!bVar3) {
                      uVar6 = FUN_10bb4150();
                      uVar6 = FUN_10d863b0(fVar8,uVar6);
                      puVar10 = (undefined8 *)
                                (**(code **)(**(int **)(local_8 + 0xc) + 200))(local_e4);
                      pfVar5 = (float *)(**(code **)(*piVar7 + 200))(local_fc);
                      param_1 = local_8;
                      uVar1 = *puVar10;
                      local_78 = *(undefined4 *)(puVar10 + 1);
                      local_80._0_4_ = (float)uVar1;
                      local_80._0_4_ = *pfVar5 - (float)local_80;
                      local_80._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                      local_80._4_4_ = pfVar5[1] - local_80._4_4_;
                      fVar8 = local_80._4_4_ * local_80._4_4_ + (float)local_80 * (float)local_80 +
                              0.0;
                      if (fVar8 <= DAT_11cbf070) {
                        local_6c = DAT_1201fd04;
                        local_64 = DAT_1201fd0c;
                      }
                      else {
                        auVar15 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
                        fVar16 = auVar15._0_4_;
                        fVar16 = (DAT_11de9938 - fVar16 * fVar8 * fVar16 * DAT_11de98e8) * fVar16;
                        local_64 = fVar16 * 0.0;
                        local_6c = CONCAT44(local_80._4_4_ * fVar16,(float)local_80 * fVar16);
                      }
                      local_80 = uVar1;
                      FUN_10d7c730(uVar6,piVar7,local_14[10],local_30 + local_c + 8,&local_6c,
                                   *(undefined4 *)(local_c + 0x40 + local_30),0);
                    }
                  }
                }
                local_c = local_c + 0x78;
                local_10 = local_10 + -1;
              } while (local_10 != 0);
            }
          }
          else {
            local_b8 = local_24 + param_2;
            local_34 = 0.0;
            local_d0 = local_24 - param_2;
            local_38 = 0.0;
            local_3c = 0;
            local_40 = 0;
            local_4c = CONCAT44(local_2c._4_4_ + param_2,(float)local_2c + param_2);
            local_58 = CONCAT44(local_2c._4_4_ - param_2,(float)local_2c - param_2);
            local_50 = local_d0;
            local_44 = local_b8;
            (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x50))(&local_58);
            FUN_10ba9b00();
            param_2 = 0.0;
            if (0 < (int)local_34) {
              do {
                if (*(int *)((int)local_38 + (int)param_2 * 4) == 0) break;
                piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
                piVar7 = (int *)(**(code **)(*piVar7 + 0x68))();
                iVar4 = *piVar7;
                uVar6 = (**(code **)(**(int **)((int)local_38 + (int)param_2 * 4) + 4))();
                piVar7 = (int *)(**(code **)(iVar4 + 0xc))(uVar6);
                if (piVar7 == (int *)0x0) goto LAB_10d7dc94;
                param_1 = local_8;
                if ((int *)piVar7[3] != (int *)0x0) {
                  iVar4 = (**(code **)(*(int *)piVar7[3] + 0x288))();
                  param_1 = local_8;
                  if (iVar4 != 0) {
                    piVar11 = (int *)(**(code **)(**(int **)(local_8 + 0xc) + 0x288))();
                    cVar2 = (**(code **)(*piVar11 + 0x50))(iVar4);
                    param_1 = local_8;
                    if (cVar2 != '\0') {
                      if (*local_14 == 1) {
                        iVar4 = *piVar7;
                        uVar6 = (**(code **)(**(int **)(local_8 + 0xc) + 200))(local_114);
                        cVar2 = (**(code **)(iVar4 + 0xcc))(uVar6);
                        param_1 = local_8;
                        if (cVar2 == '\0') goto LAB_10d7dd6e;
                      }
                      if (*local_14 == 2) {
                        iVar4 = *piVar7;
                        uVar6 = (**(code **)(**(int **)(local_8 + 0xc) + 200))(local_108);
                        cVar2 = (**(code **)(iVar4 + 0xd0))(uVar6);
                        param_1 = local_8;
                        if (cVar2 == '\0') goto LAB_10d7dd6e;
                      }
LAB_10d7dc94:
                      fVar8 = local_1c;
                      uVar6 = FUN_10bb4150();
                      uVar6 = FUN_10d863b0(fVar8,uVar6);
                      pfVar5 = (float *)(**(code **)(**(int **)(local_8 + 0xc) + 0xb4))();
                      fVar8 = pfVar5[1];
                      fVar16 = pfVar5[3];
                      local_a4[6] = (*pfVar5 * fVar8 - pfVar5[2] * fVar16) * DAT_11de9990;
                      iVar4 = local_14[10];
                      local_84 = (fVar16 * *pfVar5 + pfVar5[2] * fVar8) * DAT_11de9990;
                      local_88 = (fVar16 * fVar16 + fVar8 * fVar8) * DAT_11de9990 - DAT_11de9918;
                      uVar12 = (**(code **)(**(int **)((int)local_38 + (int)param_2 * 4) + 0x94))
                                         (local_a4 + 6,0xffffffff,0);
                      param_1 = local_8;
                      FUN_10d7c730(uVar6,*(undefined4 *)((int)local_38 + (int)param_2 * 4),iVar4,
                                   uVar12);
                    }
                  }
                }
LAB_10d7dd6e:
                param_2 = (float)((int)param_2 + 1);
              } while ((int)param_2 < (int)local_34);
            }
          }
          fVar8 = local_20;
          if (local_20 != local_1c) {
            do {
              piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar7 = (int *)(**(code **)(*piVar7 + 0x60))();
              local_44 = (float)(**(code **)(*piVar7 + 0x18))("GameOnHit");
              local_40 = 0x4ffff;
              local_3c = 0;
              local_34 = 0.0;
              local_38 = fVar8;
              piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              piVar7 = (int *)(**(code **)(*piVar7 + 0x144))(*(undefined4 *)((int)fVar8 + 4));
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 0x24))(&local_44);
              }
              fVar8 = (float)((int)fVar8 + 0x180);
              param_1 = local_8;
            } while (fVar8 != local_1c);
          }
          piVar7 = local_14 + 0xb;
        } while (piVar7 != local_74);
        if (local_20 != 0.0) {
          local_14 = piVar7;
          FUN_10c3d5d0(local_20);
        }
      }
      return 1;
    }
  }
  return 0;
}


// ===== BT-event sender: FUN_10db5fb0@10db5fb0 =====

/* [RE-AUTO c0]
   calls: strstr
   strings:
     ""EnterTrigger""
     ""InTrigger""
     ""InTriggerID""
     ""InTriggerType""
     ""LeaveTrigger""
     ""EventParam""
     ""EventSenderID"" */

void __thiscall FUN_10db5fb0(int param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  bool bVar11;
  char *in_stack_ffffff28;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_4c;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [4];
  
  piVar2 = param_2;
  FUN_113168d0(param_2[3]);
  local_c = 0xffffffff;
  if (*piVar2 != 0x124) {
    FUN_10d9be80(piVar2);
    return;
  }
  if ((((*(int *)(param_1 + 0x1ccc) == 0) || (*(int *)(param_1 + 0x1cc8) == 0)) ||
      (iVar4 = FUN_100b4ca0(*(int *)(param_1 + 0x1cc8)), iVar4 == 0)) &&
     ((iVar4 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0xe0))(), iVar4 != 0 &&
      (iVar4 = FUN_104753a0(*(undefined4 *)(param_1 + 8)), iVar4 != 0)))) {
    puVar5 = (undefined4 *)FUN_104a70c0(local_24);
    *(undefined4 *)(param_1 + 0x1cc8) = *puVar5;
    *(undefined4 *)(param_1 + 0x1ccc) = puVar5[1];
    *(undefined4 *)(param_1 + 0x1cd0) = puVar5[2];
  }
  pcVar10 = "EnterTrigger";
  pbVar6 = (byte *)FUN_11317f30();
  do {
    bVar1 = *pbVar6;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_10db6087:
      uVar7 = -(uint)bVar11 | 1;
      goto LAB_10db608c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_10db6087;
    pbVar6 = pbVar6 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  uVar7 = 0;
LAB_10db608c:
  if ((uVar7 == 0) && (piVar2[2] != 0)) {
    if (*(int *)(param_1 + 0x1ccc) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1cc8) == 0) {
      return;
    }
    iVar4 = FUN_100b4ca0(*(int *)(param_1 + 0x1cc8));
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1cdc) == 0) {
      return;
    }
    uVar8 = FUN_113168d0("InTrigger",&local_10);
    cVar3 = FUN_1046dc90(uVar8);
    if (cVar3 == '\0') {
      return;
    }
    param_2 = (int *)CONCAT13(1,param_2._0_3_);
    FUN_1025be30(local_10,(int)&param_2 + 3);
    uVar8 = FUN_113168d0("InTriggerID",&local_10);
    cVar3 = FUN_1046dc90(uVar8);
    if (cVar3 == '\0') {
      return;
    }
    param_2 = *(int **)piVar2[2];
    FUN_1025bc30(local_10,&param_2);
    FUN_113168d0(piVar2[4]);
    uVar8 = FUN_113168d0("InTriggerType",&local_10);
    cVar3 = FUN_1046dc90(uVar8);
    if (cVar3 == '\0') {
      return;
    }
    FUN_1025bc60(local_10,&local_14);
  }
  else {
    pcVar10 = "LeaveTrigger";
    pbVar6 = (byte *)FUN_11317f30();
    do {
      bVar1 = *pbVar6;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10db61d0:
        uVar7 = -(uint)bVar11 | 1;
        goto LAB_10db61d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10db61d0;
      pbVar6 = pbVar6 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_10db61d5:
    if ((uVar7 == 0) && (piVar2[2] != 0)) {
      if (*(int *)(param_1 + 0x1ccc) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1cc8) == 0) {
        return;
      }
      iVar4 = FUN_100b4ca0(*(int *)(param_1 + 0x1cc8));
      if (iVar4 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1cdc) == 0) {
        return;
      }
      uVar8 = FUN_113168d0("InTrigger",&local_14);
      cVar3 = FUN_1046dc90(uVar8);
      if (cVar3 == '\0') {
        return;
      }
      param_2 = (int *)((uint)param_2 & 0xffffff);
      FUN_1025be30(local_14,(int)&param_2 + 3);
    }
    else {
      pcVar10 = (char *)FUN_11317f30(&DAT_11ce973c);
      pcVar10 = strstr(pcVar10,in_stack_ffffff28);
      if (pcVar10 != (char *)0x0) {
        if (*(int *)(param_1 + 0x1ccc) == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x1cc8) == 0) {
          return;
        }
        iVar4 = FUN_100b4ca0(*(int *)(param_1 + 0x1cc8));
        if (iVar4 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x1cdc) == 0) {
          return;
        }
        uVar8 = FUN_113168d0("TargetID",&local_c);
        cVar3 = FUN_1046dc90(uVar8);
        if (cVar3 == '\0') {
          return;
        }
        param_2 = (int *)0x0;
        FUN_102646b0(local_c,&param_2);
        piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        piVar9 = (int *)(**(code **)(*piVar9 + 0x144))(param_2);
        if (piVar9 != (int *)0x0) {
          local_38 = 0x124;
          local_34 = 0x4ffff;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          puVar5 = (undefined4 *)FUN_11318be0(local_18,4,DAT_11d22758);
          FUN_11316b50(*puVar5);
          local_2c = FUN_11317f30();
          (**(code **)(*piVar9 + 0x24))(&local_38);
        }
      }
    }
  }
  if ((((*(int *)(param_1 + 0x1ccc) != 0) && (*(int *)(param_1 + 0x1cc8) != 0)) &&
      (iVar4 = FUN_100b4ca0(*(int *)(param_1 + 0x1cc8)), iVar4 != 0)) &&
     (*(int *)(param_1 + 0x1cdc) != 0)) {
    local_4c = *(undefined4 *)(param_1 + 8);
    local_80 = 0x8aa;
    local_7c = 0xffffffff;
    local_78 = 0xffffffff;
    local_3c = 0;
    uVar8 = FUN_113168d0("EventParam",&local_c);
    cVar3 = FUN_1046dc90(uVar8);
    if (cVar3 != '\0') {
      FUN_1025bc60(local_c,local_8);
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        param_2 = *(int **)piVar2[2];
        uVar8 = FUN_113168d0("EventSenderID",&local_c);
        cVar3 = FUN_1046dc90(uVar8);
        if (cVar3 == '\0') {
          return;
        }
        FUN_1025bc30(local_c,&param_2);
      }
      (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(&local_80);
    }
  }
  return;
}


// ===== BT-event sender: FUN_10db79b0@10db79b0 =====

/* [RE-AUTO c0]
   strings:
     ""Eaten"" */

void __thiscall FUN_10db79b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x144))(param_2);
  if (piVar1 != (int *)0x0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_18 = &local_c;
    local_20 = 0x124;
    local_1c = 0x4ffff;
    local_10 = 0;
    local_8 = 2;
    local_14 = "Eaten";
    (**(code **)(*piVar1 + 0x24))(&local_20);
  }
  return;
}


// ===== BT-event sender: FUN_10f15e70@10f15e70 =====

/* [RE-AUTO c0]
   strings:
     ""swordflash"" */

void __fastcall FUN_10f15e70(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  char *local_c;
  undefined4 local_8;
  
  piVar2 = (int *)(**(code **)(*param_1 + 400))();
  iVar1 = *DAT_1201ff00;
  uVar3 = (**(code **)(*piVar2 + 0xe4))();
  piVar2 = (int *)(**(code **)(iVar1 + 0x54))(uVar3);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_1 + 400))();
    iVar1 = *DAT_1201ff00;
    uVar3 = (**(code **)(*piVar2 + 0xe8))();
    piVar2 = (int *)(**(code **)(iVar1 + 0x54))(uVar3);
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  local_18 = 0x130;
  local_14 = 0x4ffff;
  local_8 = 0;
  local_c = "swordflash";
  local_10 = &DAT_11cbde00;
  (**(code **)(*piVar2 + 0x40))(&local_18);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x100))();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x40))(&local_18);
  }
  return;
}


// ===== BT-event sender: CActor::EmitGameOnHitFromLocalHit@10f19670 =====

/* [RE-R1]
   strings:
     ""GameOnHit"" */

void __thiscall CActor__EmitGameOnHitFromLocalHit(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_184;
  undefined8 local_134;
  uint local_12c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  uint local_c;
  int *local_8;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if ((piVar3 != (int *)0x0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) {
    local_8 = piVar3;
    FUN_10bb4150();
    iVar1 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x7c))(param_2);
    if (iVar1 == 0) {
      local_19c = (**(code **)(*piVar3 + 4))();
    }
    else {
      local_19c = *(undefined4 *)(iVar1 + 8);
    }
    local_198 = (**(code **)(*piVar3 + 4))();
    puVar2 = (uint *)(**(code **)(*piVar3 + 0xd8))();
    local_12c = puVar2[2] ^ DAT_11de9c90;
    local_134 = CONCAT44(puVar2[1] ^ DAT_11de9c90,*puVar2 ^ DAT_11de9c90);
    local_c = local_12c;
    iVar1 = CDamageInfo__GetRecordById(param_3);
    if (iVar1 != 0) {
      local_184 = FUN_10b27fd0(*(undefined4 *)(iVar1 + 0x28));
    }
    piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    iVar1 = *piVar3;
    uVar4 = (**(code **)(*local_8 + 4))();
    piVar3 = (int *)(**(code **)(iVar1 + 0x144))(uVar4);
    if (piVar3 != (int *)0x0) {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x60))();
      local_1c = (**(code **)(*piVar5 + 0x18))("GameOnHit");
      local_10 = &local_19c;
      local_18 = 0x4ffff;
      local_14 = 0;
      local_c = 0;
      (**(code **)(*piVar3 + 0x24))(&local_1c);
    }
  }
  return;
}


// ===== BT-event sender: FUN_10f58fc0@10f58fc0 =====

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""OnLeave"" */

void __thiscall FUN_10f58fc0(char *param_1,undefined1 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  size_t _Size;
  undefined1 *puVar9;
  undefined1 local_84 [92];
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  char *local_14;
  undefined4 local_10;
  char *local_c;
  char *local_8;
  
  puVar3 = *(undefined4 **)(param_1 + 0xc4);
  local_c = param_1;
  if (puVar3 != *(undefined4 **)(param_1 + 200)) {
    do {
      if (*(int *)(param_2 + -0xc) < 0) {
        puVar9 = &DAT_1201fc98;
      }
      else {
        puVar9 = param_2;
        FUN_10c3dab0(param_2 + -0xc,param_2);
      }
      (*(code *)*puVar3)(param_1,puVar9);
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)(param_1 + 200));
  }
  local_24 = param_1 + 0x124;
  pcVar7 = *(char **)(param_1 + 0x128);
  local_8 = local_24;
  if (*(char **)(param_1 + 0x128) != (char *)0x0) {
    do {
      if (*(int *)(pcVar7 + 0x10) < 9) {
        pcVar8 = *(char **)(pcVar7 + 0xc);
      }
      else {
        pcVar8 = *(char **)(pcVar7 + 8);
        local_8 = pcVar7;
      }
      pcVar7 = pcVar8;
    } while (pcVar8 != (char *)0x0);
    if ((local_8 != local_24) && (9 < *(int *)(local_8 + 0x10))) {
      local_8 = local_24;
    }
  }
  if ((local_8 != local_24) &&
     (piVar5 = *(int **)(local_8 + 0x14), piVar5 != *(int **)(local_8 + 0x18))) {
    do {
      puVar3 = (undefined4 *)piVar5[3];
      cVar2 = '\x01';
      if (puVar3 != (undefined4 *)piVar5[4]) {
        do {
          if ((code *)*puVar3 != (code *)0x0) {
            cVar2 = (*(code *)*puVar3)(param_1,local_28,puVar3[1],0);
          }
          if (cVar2 == '\0') goto LAB_10f590f1;
          puVar3 = puVar3 + 2;
        } while (puVar3 != (undefined4 *)piVar5[4]);
      }
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)piVar5[1]) {
        do {
          pcVar1 = (code *)*puVar3;
          if (pcVar1 != (code *)0x0) {
            if (*(int *)(param_2 + -0xc) < 0) {
              puVar9 = &DAT_1201fc98;
            }
            else {
              puVar9 = param_2;
              FUN_10c3dab0(param_2 + -0xc,param_2);
            }
            (*pcVar1)(local_c,puVar9);
          }
          puVar3 = puVar3 + 2;
          param_1 = local_c;
        } while (puVar3 != (undefined4 *)piVar5[1]);
      }
LAB_10f590f1:
      piVar5 = piVar5 + 6;
    } while (piVar5 != *(int **)(local_8 + 0x18));
  }
  local_8 = *(char **)(param_1 + 0xd0);
  if (local_8 != (char *)*(undefined4 **)(param_1 + 0xd4)) {
    do {
      local_c = *(char **)((int)local_8 + 4);
      pcVar7 = &DAT_1201fc98;
      if (local_c == (char *)0x0) {
        local_c = &DAT_1203cce8;
      }
      pcVar8 = local_c;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      _Size = (int)pcVar8 - (int)(local_c + 1);
      if (_Size != 0) {
        puVar3 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
        DAT_123be268 = DAT_123be268 + _Size + 0xd;
        *puVar3 = 1;
        pcVar7 = (char *)(puVar3 + 3);
        puVar3[1] = _Size;
        puVar3[2] = _Size;
        pcVar7[_Size] = '\0';
        if (pcVar7 != local_c) {
          memcpy(pcVar7,local_c,_Size);
        }
      }
      piVar5 = (int *)(pcVar7 + -0xc);
      if (*(int *)(pcVar7 + -0xc) < 0) {
        pcVar8 = &DAT_1201fc98;
      }
      else {
        pcVar8 = pcVar7;
        FUN_10c3dab0(piVar5,pcVar7);
      }
      if (*(int *)(param_2 + -0xc) < 0) {
        puVar9 = &DAT_1201fc98;
      }
      else {
        puVar9 = param_2;
        FUN_10c3dab0(param_2 + -0xc,param_2,pcVar8);
      }
      pcVar8 = local_8;
      (**(code **)local_8)(param_1,puVar9);
      if ((-1 < *piVar5) && (iVar4 = FUN_10c3dad0(piVar5), iVar4 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar7 + -4));
        FUN_10c3d900(piVar5);
      }
      local_8 = (char *)((int)pcVar8 + 8);
    } while (local_8 != (char *)*(undefined4 **)(param_1 + 0xd4));
  }
  puVar9 = *(undefined1 **)(param_1 + 0x84);
  puVar6 = &DAT_1203cce8;
  if (puVar9 != (undefined1 *)0x0) {
    puVar6 = puVar9;
  }
  if (puVar6 != &DAT_11d9d32b) {
    local_20 = 0x11d;
    local_1c = 0x4ffff;
    local_18 = &DAT_1203cce8;
    if (puVar9 != (undefined1 *)0x0) {
      local_18 = puVar9;
    }
    local_10 = 0;
    local_14 = "OnLeave";
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 4) + 0x24))(&local_20);
  }
  FUN_10f19970(&DAT_11cbc650);
  if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (*(int *)(param_1 + 0x18) != 0)) &&
      ((piVar5 = *(int **)(*(int *)(param_1 + 0x18) + 0x100), piVar5 != (int *)0x0 &&
       (piVar5 = (int *)(**(code **)(*piVar5 + 800))(), piVar5 != (int *)0x0)))) &&
     (iVar4 = (**(code **)(*piVar5 + 0xa8))(), iVar4 == 0)) {
    FUN_113f2bf0();
    puVar9 = &DAT_1203cce8;
    if (*(undefined1 **)(param_1 + 0x50) != (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_1 + 0x50);
    }
    FUN_113f3280(&DAT_11d9d32b,puVar9,0);
    FUN_113f33c0(piVar5[1]);
    FUN_113f33e0(param_2);
    (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x98) + 0x14))(local_84);
    FUN_113f2de0();
  }
  piVar5 = (int *)(param_2 + -0xc);
  if ((-1 < *piVar5) && (iVar4 = FUN_10c3dad0(piVar5), iVar4 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
    FUN_10c3d900(piVar5);
  }
  return;
}


// ===== BT-event sender: FUN_10f5a5d0@10f5a5d0 =====

/* [RE-AUTO c0]
   strings:
     ""OnEnter"" */

void __thiscall FUN_10f5a5d0(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  char *local_c;
  undefined4 local_8;
  
  if (param_2 != 0) {
    cVar2 = FUN_100fd0c0(param_2 + 8,&DAT_11d9d32b);
    if (cVar2 == '\0') {
      puVar3 = *(undefined4 **)(param_2 + 0x1c);
    }
    else {
      puVar3 = &DAT_11dcfad0;
    }
    puVar3 = (undefined4 *)FUN_10f56fa0(puVar3);
    puVar1 = (undefined1 *)*puVar3;
    *(undefined1 **)(param_1 + 0x84) = puVar1;
    local_10 = &DAT_1203cce8;
    if (puVar1 != (undefined1 *)0x0) {
      local_10 = puVar1;
    }
    local_18 = 0x11d;
    local_14 = 0x4ffff;
    local_8 = 0;
    local_c = "OnEnter";
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 4) + 0x24))(&local_18);
  }
  return;
}


// ===== BT-event sender: FUN_10f6a5c0@10f6a5c0 =====

/* [RE-AUTO c0] */

void __fastcall FUN_10f6a5c0(int *param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_10 = &local_8;
  local_8 = 0;
  local_c = &stack0x00000004;
  local_1c = 0x12f;
  local_18 = 0x4ffff;
  local_14 = param_1;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x100) + 4) + 0x24))(&local_1c);
  return;
}


// ===== BT-event sender: FUN_10f9c810@10f9c810 =====

/* [RE-AUTO c0] */

void FUN_10f9c810(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((((DAT_1202e818 != 0) && (*(char *)(DAT_1202e818 + 0x209) != '\0')) &&
      (*(int *)(DAT_1202e818 + 0xd0) != 0)) && (*(int *)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) != 0)
     ) {
    local_14 = param_2;
    local_20 = 0x124;
    local_1c = 0x4ffff;
    local_18 = (undefined4 *)0x0;
    local_10 = 0;
    local_c = (**(code **)(**(int **)(param_1 + 0xc) + 4))();
    local_18 = &local_c;
    local_8 = 0;
    FUN_10f9c720(&local_20);
  }
  piVar2 = (int *)(param_2 + -0xc);
  if (-1 < *piVar2) {
    iVar1 = FUN_10c3dad0(piVar2);
    if (iVar1 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_2 + -4));
      FUN_10c3d900(piVar2);
    }
  }
  return;
}


// ===== BT-event sender: FUN_10fad240@10fad240 =====

/* [RE-AUTO c0]
   strings:
     ""OnEnter"" */

void FUN_10fad240(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  iVar4 = param_1;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
     (iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x100), iVar5 != 0)) {
    FUN_10f19240(0x1d);
    cVar1 = FUN_11397c30();
    if ((cVar1 != '\0') && (iVar2 = FUN_10f19240(), iVar2 != 0)) {
      if (*(int *)(iVar5 + 4) != 0) {
        param_1 = 0x24;
        cVar1 = FUN_10f5c510(&param_1,1);
        if (cVar1 == '\x01') {
          uVar3 = FUN_116cd730(*(undefined4 *)(iVar4 + 0x230),0);
          iVar4 = CSkillInfo__FindBySkillId(uVar3);
          if (iVar4 != 0) {
            local_10 = *(undefined4 *)(iVar4 + 0xd4);
            local_18 = 0x11d;
            local_14 = 0x4ffff;
            local_8 = 0;
            local_c = "OnEnter";
            (**(code **)(**(int **)(iVar5 + 4) + 0x24))(&local_18);
            FUN_10ef9830(0);
          }
        }
      }
      FUN_10f19240(0x1d);
      FUN_1139d6a0();
    }
  }
  iVar4 = param_2;
  piVar6 = (int *)(param_2 + -0xc);
  if ((-1 < *piVar6) && (iVar5 = FUN_10c3dad0(piVar6), iVar5 < 1)) {
    DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar4 + -4));
    FUN_10c3d900(piVar6);
  }
  return;
}


// ===== BT-event sender: CPlayerRage03::OnThrowAnimEvent@10fef700 =====

/* [RE-R1]
   calls: rand
   strings:
     ""RandomRight""
     ""RandomLeft""
     ""BombRight""
     ""BombLeft""
     ""Rage03EndEnter""
     ""Rage03EndLeave""
     ""NORMAL_IDLE""
     ""OnEnter""
     ""Throw""
     ""OnLeave"" */

void CPlayerRage03__OnThrowAnimEvent(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  undefined *puVar11;
  bool bVar12;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  char *local_c;
  undefined4 local_8;
  
  if (param_1 == 0) {
    return;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0x100);
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*piVar2 + 0x790))();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_10f19240();
  if (iVar4 == 0) {
    return;
  }
  cVar3 = (**(code **)(*piVar2 + 0x228))();
  if (cVar3 == '\0') {
    return;
  }
  piVar5 = (int *)(**(code **)(*piVar2 + 0x10c))();
  uVar6 = (**(code **)(*piVar5 + 0x8c))();
  cVar3 = FUN_10f59630(uVar6);
  if (cVar3 == '\0') {
    return;
  }
  pcVar10 = "RandomRight";
  pbVar7 = *(byte **)(param_2 + 0xc);
  pbVar8 = pbVar7;
  do {
    bVar1 = *pbVar8;
    bVar12 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_10fef7b0:
      uVar9 = -(uint)bVar12 | 1;
      goto LAB_10fef7b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar12 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_10fef7b0;
    pbVar8 = pbVar8 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  uVar9 = 0;
LAB_10fef7b5:
  if (uVar9 != 0) {
    pcVar10 = "RandomLeft";
    pbVar8 = pbVar7;
    do {
      bVar1 = *pbVar8;
      bVar12 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_10fef7e4:
        uVar9 = -(uint)bVar12 | 1;
        goto LAB_10fef7e9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar12 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_10fef7e4;
      pbVar8 = pbVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_10fef7e9:
    if (uVar9 != 0) {
      pcVar10 = "BombRight";
      pbVar8 = pbVar7;
      do {
        bVar1 = *pbVar8;
        bVar12 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_10fef818:
          uVar9 = -(uint)bVar12 | 1;
          goto LAB_10fef81d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar12 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_10fef818;
        pbVar8 = pbVar8 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_10fef81d:
      puVar11 = PTR_s_Throw_FlashGrenade_11d05a9b_1_11df9a50;
      if (uVar9 != 0) {
        pcVar10 = "BombLeft";
        pbVar8 = pbVar7;
        do {
          bVar1 = *pbVar8;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_10fef850:
            uVar9 = -(uint)bVar12 | 1;
            goto LAB_10fef855;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_10fef850;
          pbVar8 = pbVar8 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar9 = 0;
LAB_10fef855:
        if (uVar9 != 0) {
          pcVar10 = "Rage03EndEnter";
          pbVar8 = pbVar7;
          do {
            bVar1 = *pbVar8;
            bVar12 = bVar1 < (byte)*pcVar10;
            if (bVar1 != *pcVar10) {
LAB_10fef884:
              uVar9 = -(uint)bVar12 | 1;
              goto LAB_10fef889;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar12 = bVar1 < (byte)pcVar10[1];
            if (bVar1 != pcVar10[1]) goto LAB_10fef884;
            pbVar8 = pbVar8 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar1 != 0);
          uVar9 = 0;
LAB_10fef889:
          if (uVar9 == 0) {
            *(undefined1 *)(param_1 + 0x1f8) = 0;
            return;
          }
          pcVar10 = "Rage03EndLeave";
          do {
            bVar1 = *pbVar7;
            bVar12 = bVar1 < (byte)*pcVar10;
            if (bVar1 != *pcVar10) {
LAB_10fef8c0:
              uVar9 = -(uint)bVar12 | 1;
              goto LAB_10fef8c5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar12 = bVar1 < (byte)pcVar10[1];
            if (bVar1 != pcVar10[1]) goto LAB_10fef8c0;
            pbVar7 = pbVar7 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar1 != 0);
          uVar9 = 0;
LAB_10fef8c5:
          if (uVar9 != 0) {
            return;
          }
          CInfoRecord__GetModelString("NORMAL_IDLE",pcVar10,0,1,0,0);
          FUN_10f59ff0();
          return;
        }
      }
      goto LAB_10fef90b;
    }
  }
  uVar9 = rand();
  puVar11 = (&PTR_s_Throw_FlashGrenade_11d05a9b_1_11df9a50)[uVar9 % 0xd];
LAB_10fef90b:
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  local_18 = 0x11d;
  local_14 = 0x4ffff;
  local_8 = 0;
  local_c = "OnEnter";
  local_10 = puVar11;
  (**(code **)(*(int *)piVar2[1] + 0x24))(&local_18);
  local_2c = 0x11d;
  local_28 = 0x4ffff;
  local_24 = 0;
  local_1c = 0;
  local_20 = "Throw";
  (**(code **)(*(int *)piVar2[1] + 0x24))(&local_2c);
  local_40 = 0x11d;
  local_3c = 0x4ffff;
  local_30 = 0;
  local_34 = "OnLeave";
  local_38 = puVar11;
  (**(code **)(*(int *)piVar2[1] + 0x24))(&local_40);
  return;
}


// ===== BT-event sender: FUN_11001c80@11001c80 =====

/* [RE-AUTO c0] */

undefined1 __thiscall FUN_11001c80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_158;
  undefined4 local_80;
  undefined1 local_50;
  undefined4 local_44;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined1 local_5;
  
  local_5 = 0;
  piVar2 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x68))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))(param_4);
  piVar3 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x68))();
  local_c = (int *)(**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x18c));
  iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x288))();
  piVar3 = (int *)0x0;
  if ((((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) &&
      (piVar3 = (int *)(**(code **)(**(int **)(*(int *)(iVar4 + 0xc) + 0x90) + 0x7c))
                                 (*(undefined4 *)(iVar4 + 4)), piVar3 != (int *)0x0)) &&
     (puVar5 = (undefined1 *)(**(code **)(*piVar3 + 0xa8))(), puVar5 != &DAT_0000000c)) {
    piVar3 = (int *)0x0;
  }
  if (piVar2 == (int *)0x0) {
    return local_5;
  }
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    if (local_c == (int *)0x0) {
      return local_5;
    }
    cVar1 = (**(code **)(*local_c + 0x228))();
    if (cVar1 == '\0') {
      return local_5;
    }
    cVar1 = (**(code **)(*piVar2 + 0x1c4))();
    if (cVar1 == '\0') {
      return local_5;
    }
  }
  FUN_10bb4150();
  local_1a0 = *(int *)(param_1 + 0x198);
  if (local_1a0 == -1) {
    local_1a0 = *(int *)(param_1 + 0x18c);
  }
  local_19c = param_4;
  local_194 = *(undefined4 *)(param_1 + 8);
  local_198 = 0;
  if (piVar3 == (int *)0x0) {
    local_44 = 0xffffffff;
  }
  else {
    local_44 = (**(code **)(piVar3[0x28] + 4))();
  }
  local_158 = *(undefined4 *)(param_1 + 0x194);
  local_80 = 0xffffffff;
  if (param_2 != 0) {
    local_188 = FUN_10b27fd0(param_2);
    local_184 = local_188;
  }
  iVar4 = (**(code **)(**(int **)m_pThis_exref + 0x2a8))();
  local_50 = iVar4 == local_1a0;
  local_14 = &local_1a0;
  local_20 = 0x125;
  local_1c = 0x4ffff;
  local_18 = 0;
  local_10 = 0;
  if ((int *)piVar2[1] == (int *)0x0) {
    return local_5;
  }
  (**(code **)(*(int *)piVar2[1] + 0x24))(&local_20);
  return 1;
}


// ===== BT-event sender: CMeleeCollision::SweepAndReportGameOnHit@11006ea0 =====

/* WARNING: Removing unreachable block (ram,0x11006f93) */
/* [RE-R1]
   calls: memmove
   strings:
     ""PrimitiveWorldIntersection(Game)""
     ""GameOnHit"" */

void __thiscall CMeleeCollision__SweepAndReportGameOnHit(int *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int *******pppppppiVar3;
  char cVar4;
  int *piVar5;
  undefined8 *puVar6;
  float *pfVar7;
  int ******ppppppiVar8;
  int *piVar9;
  undefined4 uVar10;
  int *******pppppppiVar11;
  int iVar12;
  float10 fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_460 [98];
  undefined2 local_3fe;
  undefined1 local_3fc;
  undefined1 local_3d8 [4];
  undefined4 local_3d4;
  int local_3cc;
  undefined4 local_38c;
  undefined8 local_370;
  int *local_368;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined1 local_258 [4];
  undefined4 local_254;
  int local_24c;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  float local_200;
  undefined8 local_1fc;
  float local_1f4;
  undefined8 local_1f0;
  int *local_1e8;
  undefined8 local_1e4;
  uint local_1dc;
  undefined8 local_1d8;
  float local_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_d8 [8];
  float local_d0;
  uint local_cc;
  int *****local_c8;
  int *****pppppiStack_c4;
  int *****local_c0;
  undefined1 local_bc [12];
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int ******local_94;
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88;
  int *local_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  float local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  int ******ppppppiStack_54;
  int *piStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  char local_41;
  int ******local_40;
  int ******local_3c;
  undefined8 local_38;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int ******local_20;
  int ******local_1c;
  int *local_18;
  float local_14;
  char local_d;
  float local_c;
  float local_8;
  
  local_18 = param_1;
  FUN_10ffc760(param_2,param_3);
  local_64 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_1[0x10]);
  if (local_64 == (int *)0x0) {
    return;
  }
  local_88 = FUN_10ba9b00();
  local_84 = (int *)FUN_10c007c0(param_1[0x10]);
  local_41 = (**(code **)(*local_84 + 0x1c4))();
  (**(code **)(*(int *)param_1[3] + 200))(&local_ac);
  param_3 = *(uint *)(param_1[7] + 0x30);
  local_b0 = 0.0;
  FUN_10a706b0();
  local_d0 = local_a4;
  local_2c = param_1 + 0x38;
  local_3fe = 0x101;
  local_3fc = 1;
  local_cc = param_3;
  if (param_1[0x38] != param_1[0x39]) {
    param_1[0x39] = param_1[0x38];
  }
  piVar5 = param_1 + 0x35;
  param_2 = param_1[0x36] - *piVar5 >> 2;
  piVar9 = param_1;
  if (0 < (int)param_2) {
    iVar12 = 0;
    do {
      local_28 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x40) + 0x54))
                                  (*(undefined4 *)(*piVar5 + iVar12 * 4));
      if (local_28 == (int *)0x0) {
        *(undefined4 *)(*piVar5 + iVar12 * 4) = *(undefined4 *)(*piVar5 + -4 + param_2 * 4);
        if (param_1[0x36] != *piVar5) {
          param_1[0x36] = param_1[0x36] + -4;
        }
        param_2 = param_2 - 1;
        iVar12 = iVar12 + -1;
      }
      else {
        puVar2 = (undefined4 *)local_2c[1];
        if (puVar2 == (undefined4 *)local_2c[2]) {
          FUN_108716d0(puVar2,&local_28,(int)&param_3 + 3,1,1);
        }
        else {
          *puVar2 = local_28;
          local_2c[1] = local_2c[1] + 4;
        }
      }
      iVar12 = iVar12 + 1;
      piVar9 = local_18;
    } while (iVar12 < (int)param_2);
  }
  if (param_2 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *local_2c;
  }
  uVar10 = 0x208;
  if (*(char *)(*(int *)(piVar9[7] + 0xb4) + 0x18) != '\0') {
    uVar10 = 0xa08;
  }
  local_38 = 0;
  local_30 = (int *)0x0;
  fVar13 = (float10)FUN_10a797c0(4,local_d8,&local_38,0x1c,&local_b0,0,0,0,uVar10,local_460,0,0,
                                 iVar12,param_2,1,0,"PrimitiveWorldIntersection(Game)");
  local_40 = (int ******)&local_40;
  puStack_4c = (undefined1 *)0x0;
  piStack_48 = (int *)0x0;
  local_20 = (int ******)&local_20;
  local_c = (float)fVar13;
  iVar12 = (int)fVar13;
  local_8 = local_b0;
  param_3 = param_3 & 0xffffff;
  param_2 = param_2 & 0xffffff;
  local_14 = 0.0;
  fVar15 = local_b0;
  local_3c = local_40;
  local_1c = local_20;
  if (0 < iVar12) {
    do {
      fVar16 = local_14;
      if (fVar15 != 0.0) {
        local_6c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x40) + 0x54))
                                    (*(undefined4 *)((int)fVar15 + 0x3c));
        if (((local_6c != (int *)0x0) &&
            (piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x5c))(local_6c),
            fVar16 = local_14, local_24 = piVar5, piVar5 != (int *)0x0)) && (piVar5 != local_64)) {
          local_68 = (int *)(**(code **)(*local_64 + 0x288))();
          local_28 = (int *)(**(code **)(*piVar5 + 0x288))();
          if (((*(int *)(DAT_1202e818 + 0xd0) == 0) ||
              (iVar12 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))(), iVar12 != 1)) ||
             ((local_28 == (int *)0x0 ||
              ((local_68 == (int *)0x0 ||
               (cVar4 = (**(code **)(*local_68 + 0x50))(local_28), fVar16 = local_14, cVar4 != '\0')
               ))))) {
            uVar10 = (**(code **)(*piVar5 + 4))();
            local_28 = (int *)FUN_10c007c0(uVar10);
            if (local_28 == (int *)0x0) {
              uVar10 = (**(code **)(*piVar5 + 4))(local_18[0x12],0,0xffffffff,0xffffffff,0);
              FUN_10b27660(local_18[0x10],uVar10);
              local_3cc = local_18[2];
              puVar2 = *(undefined4 **)(local_18[7] + 0xb4);
              local_2c4 = *puVar2;
              local_2c0 = puVar2[5];
              local_38c = puVar2[4];
              local_3d4 = (**(code **)(*piVar5 + 4))();
              puVar6 = (undefined8 *)(**(code **)(*local_64 + 200))(&local_7c);
              pfVar7 = (float *)(**(code **)(*local_24 + 200))(local_bc);
              uVar1 = *puVar6;
              local_30 = *(int **)(puVar6 + 1);
              local_38._0_4_ = (float)uVar1;
              local_38._0_4_ = *pfVar7 - (float)local_38;
              local_38._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_38._4_4_ = pfVar7[1] - local_38._4_4_;
              fVar15 = local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38 + 0.0;
              if (fVar15 <= DAT_11cbf070) {
                piStack_50 = (int *)DAT_1201fd04;
                puStack_4c = (undefined1 *)((ulonglong)DAT_1201fd04 >> 0x20);
                local_368 = DAT_1201fd0c;
                local_370 = DAT_1201fd04;
              }
              else {
                auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
                fVar16 = auVar14._0_4_;
                fVar16 = (DAT_11de9938 - fVar16 * fVar15 * fVar16 * DAT_11de98e8) * fVar16;
                piStack_50 = (int *)(fVar16 * (float)local_38);
                puStack_4c = (undefined1 *)(fVar16 * local_38._4_4_);
                piStack_48 = (int *)(fVar16 * 0.0);
                local_368 = piStack_48;
                local_370 = CONCAT44(puStack_4c,piStack_50);
              }
              local_38 = uVar1;
                    /* WARNING: Subroutine does not return */
              FUN_10c3d580(0x188);
            }
            cVar4 = (**(code **)(*local_28 + 0x2a4))(*(undefined4 *)((int)fVar15 + 0x40));
            param_2 = CONCAT13(cVar4 == '\0',(undefined3)param_2);
            cVar4 = (**(code **)(*local_28 + 0xf4))();
            fVar16 = local_14;
            if (cVar4 == '\0') {
              uVar10 = (**(code **)(*piVar5 + 4))(local_18[0x12],0,0xffffffff,0xffffffff,0);
              piVar5 = local_18;
              FUN_10b27660(local_18[0x10],uVar10);
              local_24c = piVar5[2];
              local_208 = *(undefined8 *)((int)fVar15 + 8);
              local_1dc = *(uint *)((int)fVar15 + 0x1c) ^ DAT_11de9c90;
              puVar2 = *(undefined4 **)(piVar5[7] + 0xb4);
              local_1e4 = CONCAT44(*(uint *)((int)fVar15 + 0x18) ^ DAT_11de9c90,
                                   *(uint *)((int)fVar15 + 0x14) ^ DAT_11de9c90);
              local_144 = *puVar2;
              local_140 = puVar2[5];
              local_20c = puVar2[4];
              local_210 = *(undefined4 *)((int)fVar15 + 0x40);
              local_200 = *(float *)((int)fVar15 + 0x10);
              local_74 = (float)local_1dc;
              puVar6 = (undefined8 *)(**(code **)(*local_64 + 200))(local_bc);
              pfVar7 = (float *)(**(code **)(*local_24 + 200))(&local_7c);
              uVar1 = *puVar6;
              local_30 = *(int **)(puVar6 + 1);
              local_38._0_4_ = (float)uVar1;
              local_38._0_4_ = *pfVar7 - (float)local_38;
              local_38._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_38._4_4_ = pfVar7[1] - local_38._4_4_;
              fVar16 = local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38 + 0.0;
              if (fVar16 <= DAT_11cbf070) {
                piStack_48 = DAT_1201fd0c;
                piStack_50 = (int *)DAT_1201fd04;
                puStack_4c = (undefined1 *)((ulonglong)DAT_1201fd04 >> 0x20);
                local_1f0 = DAT_1201fd04;
              }
              else {
                auVar14 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
                fVar17 = auVar14._0_4_;
                fVar17 = (DAT_11de9938 - fVar17 * fVar16 * fVar17 * DAT_11de98e8) * fVar17;
                piStack_50 = (int *)(fVar17 * (float)local_38);
                puStack_4c = (undefined1 *)(fVar17 * local_38._4_4_);
                piStack_48 = (int *)(fVar17 * 0.0);
                local_1f0 = CONCAT44(puStack_4c,piStack_50);
              }
              local_1e8 = piStack_48;
              local_80 = (float)puStack_4c;
              local_6c = piStack_48;
              local_68 = piStack_50;
              local_38 = uVar1;
              puVar6 = (undefined8 *)(**(code **)(*local_24 + 200))(local_bc);
              pfVar7 = (float *)(**(code **)(*local_24 + 0xd0))(&local_9c);
              piVar5 = local_24;
              local_2c = (int *)pfVar7[3];
              fVar16 = pfVar7[1];
              fVar17 = pfVar7[2];
              piStack_50 = (int *)*puVar6;
              puStack_4c = (undefined1 *)((ulonglong)*puVar6 >> 0x20);
              local_14 = (float)((uint)*pfVar7 ^ DAT_11de9c90);
              fVar19 = (float)((uint)puStack_4c ^ DAT_11de9c90);
              fVar21 = (float)(*(uint *)(puVar6 + 1) ^ DAT_11de9c90);
              local_8 = (float)((uint)fVar16 ^ DAT_11de9c90);
              local_c = (float)((uint)fVar17 ^ DAT_11de9c90);
              fVar18 = (float)((uint)piStack_50 ^ DAT_11de9c90);
              fVar20 = (fVar17 * fVar19 - fVar16 * fVar21) + (float)local_2c * fVar18;
              fVar17 = (*pfVar7 * fVar21 - fVar17 * fVar18) + (float)local_2c * fVar19;
              fVar16 = (fVar16 * fVar18 - *pfVar7 * fVar19) + (float)local_2c * fVar21;
              local_70 = fVar17 * pfVar7[2] - fVar16 * pfVar7[1];
              local_70 = local_70 + fVar18 + local_70;
              fVar16 = fVar16 * *pfVar7 - fVar20 * pfVar7[2];
              local_8c = (int *)(fVar16 + fVar19 + fVar16);
              fVar16 = fVar20 * pfVar7[1] - fVar17 * *pfVar7;
              piStack_48 = (int *)(fVar16 + fVar21 + fVar16);
              pfVar7 = (float *)(**(code **)(*local_24 + 0xbc))();
              piVar9 = DAT_11de9918;
              if (*pfVar7 != 0.0) {
                pfVar7 = (float *)(**(code **)(*piVar5 + 0xbc))();
                piVar9 = (int *)((float)DAT_11de9918 / *pfVar7);
              }
              fVar19 = (local_200 * local_8 - local_208._4_4_ * local_c) +
                       (float)local_2c * (float)local_208;
              fVar18 = ((float)local_208 * local_c - local_200 * local_14) +
                       (float)local_2c * local_208._4_4_;
              fVar16 = (local_208._4_4_ * local_14 - (float)local_208 * local_8) +
                       (float)local_2c * local_200;
              fVar17 = fVar16 * local_8 - fVar18 * local_c;
              fVar16 = fVar19 * local_c - fVar16 * local_14;
              fVar18 = fVar18 * local_14 - fVar19 * local_8;
              local_1fc = CONCAT44((fVar16 + local_208._4_4_ + (float)local_8c + fVar16) *
                                   (float)piVar9,
                                   (fVar17 + (float)local_208 + local_70 + fVar17) * (float)piVar9);
              local_1f4 = (fVar18 + local_200 + (float)piStack_48 + fVar18) * (float)piVar9;
              fVar19 = (local_8 * (float)local_6c - local_c * local_80) +
                       (float)local_2c * (float)local_68;
              fVar18 = (local_c * (float)local_68 - local_14 * (float)local_6c) +
                       (float)local_2c * local_80;
              fVar16 = (local_14 * local_80 - local_8 * (float)local_68) +
                       (float)local_2c * (float)local_6c;
              fVar17 = fVar16 * local_8 - fVar18 * local_c;
              fVar16 = fVar19 * local_c - fVar16 * local_14;
              local_1d0 = fVar18 * local_14 - fVar19 * local_8;
              local_1d0 = local_1d0 + (float)local_6c + local_1d0;
              local_1d8 = CONCAT44(fVar16 + local_80 + fVar16,fVar17 + (float)local_68 + fVar17);
              local_1cc = *(undefined4 *)((int)fVar15 + 0x20);
              uStack_1c8 = *(undefined4 *)((int)fVar15 + 0x24);
              local_1c4 = *(undefined4 *)((int)fVar15 + 0x28);
              local_74 = local_1d0;
              local_24 = piVar9;
              piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
              iVar12 = (**(code **)(*piVar5 + 0x144))(local_254);
              piVar5 = local_28;
              if (*(char *)(DAT_1202e818 + 0x209) != '\0') {
                if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_10c3d580(0x188);
                }
                break;
              }
              local_d = (**(code **)(*local_28 + 0x1c4))();
              if (iVar12 == 0) break;
              if (local_41 == '\0') {
                if (((*(int *)(DAT_120286b8 + 0x54c) != 0) ||
                    (cVar4 = (**(code **)(*piVar5 + 0x1c4))(), cVar4 == '\0')) ||
                   (cVar4 = (**(code **)(*piVar5 + 0x228))(), cVar4 == '\0')) break;
              }
              else {
                cVar4 = (**(code **)(*local_84 + 0x228))();
                if ((cVar4 == '\0') &&
                   (((local_d == '\0' || (cVar4 = (**(code **)(*piVar5 + 0x228))(), cVar4 == '\0'))
                    || (*(int *)(DAT_120286b8 + 0x54c) != 0)))) break;
              }
              FUN_11009150(local_258);
              break;
            }
          }
        }
        iVar12 = (int)local_c;
        fVar15 = (float)((int)fVar15 + 0x78);
        local_8 = fVar15;
      }
      local_14 = (float)((int)fVar16 + 1);
    } while ((int)local_14 < iVar12);
  }
  pppppppiVar11 = (int *******)local_40;
  if ((int *******)local_40 != &local_40) {
    do {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x60))();
      local_a0 = (**(code **)(*piVar5 + 0x18))("GameOnHit");
      pppppppiVar3 = pppppppiVar11 + 2;
      local_9c = 0x4ffff;
      local_98 = 0;
      local_90 = 0;
      local_94 = (int ******)pppppppiVar3;
      ppppppiVar8 = (int ******)(**(code **)(**(int **)m_pThis_exref + 0x2a8))();
      local_5c = 0;
      uStack_58 = 0;
      piStack_50 = (int *)0x0;
      piStack_48 = (int *)0x0;
      *(bool *)(pppppppiVar11 + 0x56) = ppppppiVar8 == *pppppppiVar3;
      puStack_4c = (undefined1 *)0x0;
      local_60 = 0x2a;
      ppppppiStack_54 = (int ******)pppppppiVar3;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x144))(pppppppiVar11[3]);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x24))(&local_a0);
        (**(code **)(*(int *)piVar5[3] + 0x110))(&local_60);
      }
      piVar5 = (int *)FUN_10c007c0(pppppppiVar11[3]);
      cVar4 = (**(code **)(*piVar5 + 0x2a4))(pppppppiVar11[0x14]);
      if (cVar4 == '\0') {
        local_c8 = (int *****)pppppppiVar11[0x16];
        pppppiStack_c4 = (int *****)pppppppiVar11[0x17];
        local_c0 = (int *****)pppppppiVar11[0x18];
        param_3 = CONCAT13(1,(undefined3)param_3);
      }
      pppppppiVar11 = (int *******)*pppppppiVar11;
    } while (pppppppiVar11 != &local_40);
  }
  pppppppiVar11 = (int *******)local_20;
  if ((int *******)local_20 != &local_20) {
    do {
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x60))();
      local_a0 = (**(code **)(*piVar5 + 0x18))("GameOnHit");
      local_94 = (int ******)(pppppppiVar11 + 2);
      local_9c = 0x4ffff;
      local_98 = 0;
      local_90 = 0;
      piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x144))(pppppppiVar11[3]);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x24))(&local_a0);
      }
      pppppppiVar11 = (int *******)*pppppppiVar11;
    } while (pppppppiVar11 != &local_20);
  }
  piVar5 = local_18;
  if (param_3._3_1_ == '\0') {
    cVar4 = '\0';
    if (param_2._3_1_ != '\0') {
      iVar12 = *local_18;
      local_38 = 0;
      local_30 = (int *)0x0;
      piStack_50 = (int *)0x0;
      puStack_4c = &DAT_3f800000;
      piStack_48 = (int *)0x0;
      uVar10 = (**(code **)(*(int *)local_18[3] + 200))(local_bc,1,&piStack_50,&local_38,0);
      (**(code **)(iVar12 + 0x9c))(1,1,uVar10);
      cVar4 = param_3._3_1_;
    }
    if (((DAT_11de98c4 <
          (float)(double)((ulonglong)(double)((float)piVar5[0x31] - local_ac) & DAT_11de9c70)) ||
        (DAT_11de98c4 <
         (float)(double)((ulonglong)(double)((float)piVar5[0x32] - fStack_a8) & DAT_11de9c70))) ||
       (DAT_11de98c4 <
        (float)(double)((ulonglong)(double)((float)piVar5[0x33] - local_a4) & DAT_11de9c70)))
    goto LAB_1100803a;
    piVar5[0x34] = piVar5[0x34] + 1;
    if (3 < piVar5[0x34]) {
      local_38 = 0;
      local_30 = (int *)0x0;
      piStack_50 = (int *)0x0;
      puStack_4c = &DAT_3f800000;
      piStack_48 = (int *)0x0;
      (**(code **)(*piVar5 + 0x9c))(1,1,&local_ac,1,&piStack_50,&local_38,0);
      cVar4 = '\x01';
      piVar5[0x34] = 0;
    }
    *(ulonglong *)(piVar5 + 0x31) = CONCAT44(fStack_a8,local_ac);
    piVar5[0x33] = (int)local_a4;
    if (cVar4 == '\0') goto LAB_1100803a;
  }
  local_70 = (float)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x58))
                              (&local_c8,&DAT_40400000,&param_2,0x1e);
  param_3 = 0;
  if (0 < (int)local_70) {
    do {
      piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x5c))
                                (*(undefined4 *)(param_2 + param_3 * 4));
      local_8c = piVar9;
      if (piVar9 != (int *)0x0) {
        piStack_48 = (int *)(**(code **)(*local_64 + 0x288))();
        local_84 = (int *)(**(code **)(*piVar9 + 0x288))();
        if ((((*(int *)(DAT_1202e818 + 0xd0) == 0) ||
             (iVar12 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))(), iVar12 != 1)) ||
            (local_84 == (int *)0x0)) ||
           ((piStack_48 == (int *)0x0 ||
            (cVar4 = (**(code **)(*piStack_48 + 0x50))(local_84), cVar4 != '\0')))) {
          uVar10 = (**(code **)(*piVar9 + 4))();
          iVar12 = FUN_10c007c0(uVar10);
          if (iVar12 == 0) {
            uVar10 = (**(code **)(*piVar9 + 4))(piVar5[0x12],0,0xffffffff,0xffffffff,0);
            FUN_10b27660(piVar5[0x10],uVar10);
            iVar12 = piVar5[7];
            local_3cc = piVar5[2];
            local_2c4 = **(undefined4 **)(iVar12 + 0xb4);
            local_2c0 = *(undefined4 *)(*(int *)(iVar12 + 0xb4) + 0x14);
            local_38c = *(undefined4 *)(*(int *)(iVar12 + 0xb4) + 0x10);
            puVar6 = (undefined8 *)(**(code **)(*local_64 + 200))(local_bc);
            pfVar7 = (float *)(**(code **)(*local_8c + 200))(&local_98);
            uVar1 = *puVar6;
            local_74 = *(float *)(puVar6 + 1);
            local_7c._0_4_ = (float)uVar1;
            local_7c._0_4_ = *pfVar7 - (float)local_7c;
            local_7c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_7c._4_4_ = pfVar7[1] - local_7c._4_4_;
            fVar15 = local_7c._4_4_ * local_7c._4_4_ + (float)local_7c * (float)local_7c + 0.0;
            if (fVar15 <= DAT_11cbf070) {
              local_38 = DAT_1201fd04;
              local_368 = DAT_1201fd0c;
            }
            else {
              auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
              fVar16 = auVar14._0_4_;
              fVar16 = (DAT_11de9938 - fVar16 * fVar15 * fVar16 * DAT_11de98e8) * fVar16;
              local_30 = (int *)(fVar16 * 0.0);
              local_38 = CONCAT44(local_7c._4_4_ * fVar16,(float)local_7c * fVar16);
              local_368 = local_30;
            }
            local_370 = local_38;
            local_7c = uVar1;
            piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar9 = (int *)(**(code **)(*piVar9 + 0x60))();
            uStack_58 = (**(code **)(*piVar9 + 0x18))("GameOnHit");
            puStack_4c = local_3d8;
            ppppppiStack_54 = (int ******)0x4ffff;
            piStack_50 = (int *)0x0;
            piStack_48 = (int *)0x0;
            piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar9 = (int *)(**(code **)(*piVar9 + 0x144))(local_3d4);
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 0x24))(&uStack_58);
            }
          }
        }
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < (int)local_70);
  }
LAB_1100803a:
  pppppppiVar11 = (int *******)local_20;
  if ((int *******)local_20 != &local_20) {
    do {
      pppppppiVar3 = (int *******)*pppppppiVar11;
      FUN_10c3d5d0(pppppppiVar11);
      pppppppiVar11 = pppppppiVar3;
    } while (pppppppiVar3 != &local_20);
  }
  local_20 = (int ******)&local_20;
  pppppppiVar11 = (int *******)local_40;
  local_1c = local_20;
  if ((int *******)local_40 != &local_40) {
    do {
      pppppppiVar3 = (int *******)*pppppppiVar11;
      FUN_10c3d5d0(pppppppiVar11);
      pppppppiVar11 = pppppppiVar3;
    } while (pppppppiVar3 != &local_40);
  }
  return;
}


// ===== BT-event sender: MHAttackable::HandleGameOnHitAnimEvent@11008410 =====

/* [RE-R1]
   strings:
     ""GameOnHit"" */

void __thiscall MHAttackable__HandleGameOnHitAnimEvent(int *param_1,int *param_2)

{
  int ******ppppppiVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *****pppppiVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int ******ppppppiVar14;
  undefined1 local_23c [4];
  undefined4 local_238;
  int local_230;
  undefined4 local_1f0;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_bc [12];
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *****local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int local_30;
  undefined1 local_2c;
  undefined4 local_28;
  int iStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int local_18;
  undefined1 local_14;
  int *local_10;
  int *****local_c;
  int *****local_8;
  
  if (*param_2 == 1) {
    local_10 = param_1;
    if (param_2[1] == 0x110) {
      if (*(char *)(param_1[7] + 0x1d) != '\0') {
        (**(code **)(*param_1 + 0x90))();
        return;
      }
      piVar6 = (int *)FUN_10ba9b00();
      puStack_38 = &local_40;
      local_40 = 0;
      param_2._3_1_ = (undefined1)((uint)piVar6 >> 0x18);
      local_2c = param_2._3_1_;
      iStack_3c = 0;
      local_30 = 0;
      puStack_34 = puStack_38;
      piVar7 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
      piVar7 = (int *)(**(code **)(*piVar7 + 0x68))();
      (**(code **)(*piVar7 + 0x14))(&local_40);
      puVar12 = puStack_38;
      if (puStack_38 != &local_40) {
        do {
          piVar7 = (int *)puVar12[4];
          if ((piVar7 != (int *)0x0) && (cVar4 = (**(code **)(*piVar7 + 0x1c4))(), cVar4 == '\0')) {
            iVar9 = *piVar7;
            uVar8 = (**(code **)(*(int *)param_1[3] + 200))(local_98);
            cVar4 = (**(code **)(iVar9 + 0xcc))(uVar8);
            param_1 = local_10;
            if (cVar4 != '\0') {
              FUN_10b27660(local_10[0x10],0,local_10[0x12],0,0xffffffff,0xffffffff,0);
              iVar9 = param_1[7];
              local_230 = param_1[2];
              local_128 = **(undefined4 **)(iVar9 + 0xb4);
              local_124 = *(undefined4 *)(*(int *)(iVar9 + 0xb4) + 0x14);
              local_1f0 = *(undefined4 *)(*(int *)(iVar9 + 0xb4) + 0x10);
              local_238 = (**(code **)(*(int *)piVar7[3] + 4))();
              (**(code **)(*piVar6 + 0x31c))(local_23c,0,1);
              break;
            }
          }
          puVar10 = (undefined4 *)puVar12[3];
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)puVar12[1];
            if (puVar12 == (undefined4 *)puVar10[3]) {
              do {
                puVar12 = puVar10;
                puVar10 = (undefined4 *)puVar12[1];
              } while (puVar12 == (undefined4 *)puVar10[3]);
            }
            if ((undefined4 *)puVar12[3] != puVar10) {
              puVar12 = puVar10;
            }
          }
          else {
            for (puVar3 = (undefined4 *)puVar10[2]; puVar12 = puVar10, puVar3 != (undefined4 *)0x0;
                puVar3 = (undefined4 *)puVar3[2]) {
              puVar10 = puVar3;
            }
          }
        } while (puVar12 != &local_40);
      }
      if ((*(int **)(DAT_1202e818 + 0xd0) == (int *)0x0) ||
         (iVar9 = (**(code **)(**(int **)(DAT_1202e818 + 0xd0) + 0x68))(), iVar9 != 1)) {
        puVar12 = &local_74;
        local_74 = 0;
        puVar10 = &local_8c;
        local_70 = 0;
        local_6c = 0;
        puVar13 = local_b0;
        local_8c = 0;
        local_88 = 0x3f800000;
        local_84 = 0;
        uVar8 = 1;
      }
      else {
        local_18 = 0;
        puStack_20 = &local_28;
        local_28 = 0;
        local_48 = 0;
        local_14 = param_2._3_1_;
        local_c = (int *****)&local_c;
        iStack_24 = 0;
        puStack_1c = puStack_20;
        local_8 = local_c;
        piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
        piVar6 = (int *)(**(code **)(*piVar6 + 0x68))();
        (**(code **)(*piVar6 + 0x14))(&local_28);
        puVar12 = puStack_20;
        if (puStack_20 != &local_28) {
          do {
            piVar6 = (int *)puVar12[4];
            if ((piVar6 != (int *)0x0) && (cVar4 = (**(code **)(*piVar6 + 0x1c4))(), cVar4 != '\0'))
            {
              iVar9 = *piVar6;
              uVar8 = (**(code **)(*(int *)param_1[3] + 200))(local_bc);
              (**(code **)(iVar9 + 0xcc))(uVar8);
              param_1 = local_10;
            }
            puVar10 = (undefined4 *)puVar12[3];
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)puVar12[1];
              if (puVar12 == (undefined4 *)puVar10[3]) {
                do {
                  puVar12 = puVar10;
                  puVar10 = (undefined4 *)puVar12[1];
                } while (puVar12 == (undefined4 *)puVar10[3]);
              }
              if ((undefined4 *)puVar12[3] != puVar10) {
                puVar12 = puVar10;
              }
            }
            else {
              for (puVar3 = (undefined4 *)puVar10[2]; puVar12 = puVar10, puVar3 != (undefined4 *)0x0
                  ; puVar3 = (undefined4 *)puVar3[2]) {
                puVar10 = puVar3;
              }
            }
          } while (puVar12 != &local_28);
        }
        ppppppiVar14 = (int ******)local_c;
        if ((int ******)local_c != &local_c) {
          do {
            piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar6 = (int *)(**(code **)(*piVar6 + 0x60))();
            local_5c = (**(code **)(*piVar6 + 0x18))("GameOnHit");
            local_58 = 0x4ffff;
            local_54 = 0;
            local_4c = 0;
            local_50 = (int *****)(ppppppiVar14 + 2);
            pppppiVar11 = (int *****)(**(code **)(**(int **)m_pThis_exref + 0x2a8))();
            *(bool *)(ppppppiVar14 + 0x56) = pppppiVar11 == ppppppiVar14[2];
            piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar6 = (int *)(**(code **)(*piVar6 + 0x144))(ppppppiVar14[3]);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x24))(&local_5c);
            }
            ppppppiVar14 = (int ******)*ppppppiVar14;
          } while (ppppppiVar14 != &local_c);
        }
        ppppppiVar14 = (int ******)local_c;
        if ((int ******)local_c != &local_c) {
          do {
            ppppppiVar1 = (int ******)*ppppppiVar14;
            FUN_10c3d5d0(ppppppiVar14);
            ppppppiVar14 = ppppppiVar1;
          } while (ppppppiVar1 != &local_c);
        }
        local_c = (int *****)&local_c;
        local_8 = local_c;
        iVar9 = iStack_24;
        if (local_18 != 0) {
          while (iVar9 != 0) {
            FUN_11008e10(*(undefined4 *)(iVar9 + 0xc));
            iVar2 = *(int *)(iVar9 + 8);
            FUN_10c3d5d0(iVar9);
            iVar9 = iVar2;
          }
        }
        puVar12 = &local_80;
        puVar10 = &local_68;
        local_80 = 0;
        local_7c = 0;
        puVar13 = local_a4;
        local_78 = 0;
        local_68 = 0;
        local_64 = 0x3f800000;
        local_60 = 0;
        uVar8 = 0;
        param_1 = local_10;
      }
      iVar9 = *param_1;
      uVar8 = (**(code **)(*(int *)param_1[3] + 200))(puVar13,uVar8,puVar10,puVar12,0);
      (**(code **)(iVar9 + 0x9c))(1,0,uVar8);
      iVar9 = iStack_3c;
      if (local_30 != 0) {
        while (iVar9 != 0) {
          FUN_11008e10(*(undefined4 *)(iVar9 + 0xc));
          iVar2 = *(int *)(iVar9 + 8);
          FUN_10c3d5d0(iVar9);
          iVar9 = iVar2;
        }
      }
    }
    else if (param_2[1] == 0x111) {
      iVar9 = *(int *)param_1[3];
      uVar5 = (**(code **)(iVar9 + 0x1b0))(0);
      (**(code **)(iVar9 + 0x1ac))(0,uVar5 | 1);
      return;
    }
  }
  return;
}


// ===== BT-event sender: MHCombat::BuildAndSendGameOnHit_Variant1@11014af0 =====

/* [RE-R1]
   calls: libm_sse2_acos_precise
   strings:
     ""GameOnHit"" */

void __thiscall
MHCombat__BuildAndSendGameOnHit_Variant1
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  float10 fVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  ulonglong *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1bc;
  undefined8 local_1b4;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  ulonglong local_13c;
  float local_134;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_74;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined8 local_54;
  int *local_4c;
  undefined8 local_44;
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined1 local_30 [4];
  undefined8 local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  piVar10 = *(int **)(param_1 + 0xc);
  local_20 = (float)param_1;
  piVar5 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2);
  if (piVar10 == (int *)0x0) {
    return;
  }
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_4c = piVar5;
  piVar6 = (int *)(**(code **)(*piVar5 + 0x288))();
  if ((piVar6 != (int *)0x0) && (cVar4 = (**(code **)(*piVar6 + 0x9c))(), cVar4 != '\0')) {
    return;
  }
  FUN_10bb4150();
  local_204 = (**(code **)(*piVar10 + 4))();
  local_1f8 = (**(code **)(*piVar10 + 4))();
  local_200 = param_2;
  local_24 = 0.0;
  local_c8 = 0;
  local_d0 = 0;
  local_54 = 0;
  if (*(char *)((int)local_20 + 0x40) == '\0') {
    puVar9 = (undefined8 *)(**(code **)(*piVar10 + 200))(&local_18);
    pfVar8 = (float *)(**(code **)(*piVar5 + 200))(local_3c);
    local_2c._0_4_ = (float)*puVar9;
    local_2c._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
    local_24 = pfVar8[2] - *(float *)(puVar9 + 1);
    local_2c = CONCAT44(pfVar8[1] - local_2c._4_4_,*pfVar8 - (float)local_2c);
  }
  else {
    puVar7 = (ulonglong *)(**(code **)(*piVar10 + 0xd8))();
    local_2c = *puVar7;
    local_24 = *(float *)(puVar7 + 1);
  }
  local_44 = local_2c & 0xffffffff;
  fVar18 = (float)((uint)local_2c._4_4_ ^ DAT_11de9c90);
  fVar22 = (float)((uint)(float)local_2c ^ DAT_11de9c90);
  local_10 = (float)((uint)local_24 ^ DAT_11de9c90);
  local_b8 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_1f0 = 0;
  local_1f4 = 0;
  fVar19 = fVar18 * fVar18 + fVar22 * fVar22 + local_10 * local_10 + DAT_11de98a0;
  auVar17 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
  fVar16 = auVar17._0_4_;
  fVar16 = (DAT_11de9938 - fVar16 * fVar19 * fVar16 * DAT_11de98e8) * fVar16;
  local_bc = local_10 * fVar16;
  _local_c4 = CONCAT44(fVar18 * fVar16,fVar22 * fVar16);
  local_38 = local_2c;
  local_1ec = FUN_10b27fd0(param_3);
  fVar18 = (float)local_44;
  local_a8 = param_4;
  local_f0 = 0;
  local_ec = 0;
  fVar19 = (float)local_54;
  fVar16 = local_2c._4_4_ * local_2c._4_4_ + fVar18 * fVar18 + fVar19;
  if (fVar16 <= DAT_11cbf070) {
    local_19c = DAT_1201fd04;
    uVar1 = local_19c;
    local_19c._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
    local_19c._0_4_ = (float)DAT_1201fd04;
    local_194 = DAT_1201fd0c;
    fVar16 = local_19c._4_4_;
    fVar18 = (float)local_19c;
    local_19c = uVar1;
  }
  else {
    auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar22 = auVar17._0_4_;
    local_19c._4_4_ = (float)(local_38 >> 0x20);
    fVar22 = (DAT_11de9938 - fVar22 * fVar16 * fVar22 * DAT_11de98e8) * fVar22;
    fVar16 = local_19c._4_4_ * fVar22;
    local_19c = CONCAT44(fVar16,fVar18 * fVar22);
    local_194 = fVar22 * fVar19;
    fVar18 = fVar18 * fVar22;
  }
  local_190 = CONCAT44((uint)fVar16 ^ DAT_11de9c90,(uint)fVar18 ^ DAT_11de9c90);
  local_188 = (float)((uint)local_194 ^ DAT_11de9c90);
  local_1b4 = CONCAT44(fVar19,fVar19);
  local_1ac = 0.0;
  local_178 = CONCAT44(DAT_11de9918,DAT_11de9918);
  local_10 = 1.0;
  local_170 = 0x3f800000;
  local_1e8 = local_1ec;
  pfVar8 = (float *)(**(code **)(*piVar5 + 0xbc))();
  fVar16 = DAT_11de9918;
  if (*pfVar8 != (float)local_54) {
    pfVar8 = (float *)(**(code **)(*piVar5 + 0xbc))();
    fVar16 = DAT_11de9918 / *pfVar8;
  }
  local_20 = fVar16;
  pfVar8 = (float *)(**(code **)(*piVar5 + 0xd0))(local_30);
  puVar9 = (undefined8 *)(**(code **)(*piVar5 + 200))(&local_18);
  fVar16 = pfVar8[3];
  fVar18 = *pfVar8;
  fVar19 = pfVar8[1];
  uVar1 = *puVar9;
  fVar22 = pfVar8[2];
  fVar13 = (float)((uint)fVar18 ^ DAT_11de9c90);
  local_6c = *(uint *)(puVar9 + 1);
  local_74._0_4_ = (uint)uVar1;
  local_74._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  fVar20 = (float)((uint)local_74 ^ DAT_11de9c90);
  fVar24 = (float)(local_74._4_4_ ^ DAT_11de9c90);
  fVar14 = (float)((uint)fVar19 ^ DAT_11de9c90);
  fVar25 = (float)(local_6c ^ DAT_11de9c90);
  local_8 = (float)((uint)fVar22 ^ DAT_11de9c90);
  fVar23 = (fVar22 * fVar24 - fVar19 * fVar25) + fVar16 * fVar20;
  fVar21 = (fVar18 * fVar25 - fVar22 * fVar20) + fVar16 * fVar24;
  fVar18 = (fVar19 * fVar20 - fVar18 * fVar24) + fVar16 * fVar25;
  local_c = fVar22 * fVar21 - pfVar8[1] * fVar18;
  local_c = fVar20 + local_c + local_c;
  fVar18 = *pfVar8 * fVar18 - fVar22 * fVar23;
  fVar19 = pfVar8[1] * fVar23 - *pfVar8 * fVar21;
  fVar19 = fVar19 + fVar25 + fVar19;
  fVar21 = (local_1ac * fVar14 - local_1b4._4_4_ * local_8) + fVar16 * (float)local_1b4;
  fVar20 = ((float)local_1b4 * local_8 - local_1ac * fVar13) + fVar16 * local_1b4._4_4_;
  fVar22 = (local_1b4._4_4_ * fVar13 - (float)local_1b4 * fVar14) + fVar16 * local_1ac;
  local_38._0_4_ = fVar14 * fVar22 - local_8 * fVar20;
  local_38._0_4_ = (float)local_1b4 + (float)local_38 + local_c + (float)local_38;
  local_38._4_4_ = 0.0;
  fVar22 = local_8 * fVar21 - fVar13 * fVar22;
  fVar20 = fVar13 * fVar20 - fVar14 * fVar21;
  local_1a0 = (fVar20 + local_1ac + fVar19 + fVar20) * local_20;
  local_1a8 = CONCAT44((fVar22 + local_1b4._4_4_ + fVar18 + fVar24 + fVar18 + fVar22) * local_20,
                       (float)local_38 * local_20);
  fVar21 = (local_188 * fVar14 - local_190._4_4_ * local_8) + fVar16 * (float)local_190;
  fVar22 = ((float)local_190 * local_8 - local_188 * fVar13) + fVar16 * local_190._4_4_;
  fVar18 = (local_190._4_4_ * fVar13 - (float)local_190 * fVar14) + fVar16 * local_188;
  fVar16 = fVar14 * fVar18 - local_8 * fVar22;
  fVar16 = (float)local_190 + fVar16 + fVar16;
  fVar20 = local_8 * fVar21 - fVar13 * fVar18;
  local_17c = fVar13 * fVar22 - fVar14 * fVar21;
  fVar20 = fVar20 + local_190._4_4_ + fVar20;
  local_184 = CONCAT44(fVar20,fVar16);
  local_17c = local_17c + local_188 + local_17c;
  fVar13 = (float)local_54;
  fVar22 = fVar16 - local_17c * fVar13;
  fVar21 = local_17c * fVar13 - fVar20;
  fVar18 = fVar20 * fVar13 - fVar16 * fVar13;
  fVar14 = fVar21 * fVar21 + fVar22 * fVar22 + fVar18 * fVar18;
  local_74 = uVar1;
  local_44._4_4_ = fVar19;
  if (DAT_11cbf070 < fVar14) {
    auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar19 = auVar17._0_4_;
    fVar19 = (DAT_11de9938 - fVar19 * fVar14 * fVar19 * DAT_11de98e8) * fVar19;
    local_20 = fVar19 * fVar21;
    local_8 = fVar19 * fVar22;
    local_c = fVar19 * fVar18;
    if (DAT_11cbf074 <= DAT_11de9918 / fVar19) {
      dVar15 = (double)(fVar16 * fVar13 + fVar20 * fVar13 + local_17c);
      local_10 = local_17c;
      libm_sse2_acos_precise();
      fVar3 = (float10)fcos((float10)((float)dVar15 * DAT_11de98e8));
      fVar12 = (float10)fsin((float10)((float)dVar15 * DAT_11de98e8));
      local_10 = (float)fVar3;
      local_44._4_4_ = (float)fVar12;
      local_1c = local_20 * local_44._4_4_;
      local_18 = local_8 * local_44._4_4_;
      local_14 = local_c * local_44._4_4_;
      local_38._4_4_ = local_10;
      FUN_10abc150(&local_1c);
      local_10 = local_24;
      local_13c = local_2c;
      goto LAB_110153da;
    }
  }
  local_10 = 0.0;
  local_13c = CONCAT44(fVar13,fVar13);
LAB_110153da:
  local_134 = local_10;
  local_14c = 0x43fa0000;
  local_154 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_164 = 0x43fa0000;
  local_10 = 500.0;
  local_140 = 0x43fa0000;
  local_16c = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_148 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1bc = 0xffffffff;
  piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar10 = (int *)(**(code **)(*piVar10 + 0x60))();
  local_68 = (**(code **)(*piVar10 + 0x18))("GameOnHit");
  local_5c = &local_204;
  local_64 = 0x4ffff;
  local_60 = 0;
  local_58 = 0;
  piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  iVar2 = *piVar10;
  uVar11 = (**(code **)(*local_4c + 4))();
  piVar10 = (int *)(**(code **)(iVar2 + 0x144))(uVar11);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0x24))(&local_68);
  }
  return;
}


// ===== BT-event sender: MHCombat::BuildAndSendGameOnHit_Variant2@11017ff0 =====

/* [RE-R1]
   calls: libm_sse2_acos_precise
   strings:
     ""GameOnHit"" */

void __thiscall
MHCombat__BuildAndSendGameOnHit_Variant2(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  float10 fVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 uVar10;
  float10 fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1bc;
  undefined8 local_1b4;
  float local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  float local_134;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  int local_a8;
  undefined8 local_74;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int *local_44;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [8];
  float local_10;
  float local_c;
  float local_8;
  
  piVar9 = *(int **)(param_1 + 0xc);
  local_8 = (float)param_1;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2);
  if (piVar9 == (int *)0x0) {
    return;
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_44 = piVar4;
  piVar5 = (int *)(**(code **)(*piVar4 + 0x288))();
  if ((piVar5 != (int *)0x0) && (cVar3 = (**(code **)(*piVar5 + 0x9c))(), cVar3 != '\0')) {
    return;
  }
  FUN_10bb4150();
  piVar5 = (int *)FUN_11018a00();
  if (piVar5 == (int *)0x0) {
    iVar6 = *piVar9;
  }
  else {
    iVar6 = *piVar5;
  }
  local_204 = (**(code **)(iVar6 + 4))();
  local_1f8 = (**(code **)(*piVar9 + 4))();
  local_200 = param_2;
  local_24 = 0.0;
  local_c8 = 0;
  local_d0 = 0;
  local_40 = 0;
  puVar7 = (undefined8 *)(**(code **)(*piVar9 + 200))(local_18);
  pfVar8 = (float *)(**(code **)(*piVar4 + 200))(&local_50);
  uVar1 = *puVar7;
  local_2c._0_4_ = (float)uVar1;
  local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar16 = pfVar8[1] - local_2c._4_4_;
  local_10 = pfVar8[2] - *(float *)(puVar7 + 1);
  local_38 = (ulonglong)(uint)(*pfVar8 - (float)local_2c);
  fVar21 = (float)((uint)(*pfVar8 - (float)local_2c) ^ DAT_11de9c90);
  fVar17 = (float)((uint)fVar16 ^ DAT_11de9c90);
  local_b8 = 0;
  local_24 = (float)((uint)local_10 ^ DAT_11de9c90);
  fVar18 = fVar17 * fVar17 + fVar21 * fVar21 + local_24 * local_24 + DAT_11de98a0;
  auVar15 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
  fVar14 = auVar15._0_4_;
  fVar14 = (DAT_11de9938 - fVar14 * fVar18 * fVar14 * DAT_11de98e8) * fVar14;
  local_bc = local_24 * fVar14;
  _local_c4 = CONCAT44(fVar17 * fVar14,fVar21 * fVar14);
  local_b0 = 0;
  local_b4 = 0;
  local_1f0 = 0;
  local_1f4 = 0;
  local_2c = uVar1;
  local_1ec = FUN_10b27fd0(param_3);
  local_1e8 = local_1ec;
  if (param_4 == -1) {
    param_4 = FUN_110189c0();
  }
  fVar14 = (float)local_38;
  local_f0 = 0;
  local_ec = 0;
  fVar18 = (float)local_40;
  fVar17 = fVar14 * fVar14 + fVar16 * fVar16 + fVar18;
  if (fVar17 <= DAT_11cbf070) {
    local_19c = DAT_1201fd04;
    uVar1 = local_19c;
    local_19c._4_4_ = (float)((ulonglong)DAT_1201fd04 >> 0x20);
    local_19c._0_4_ = (float)DAT_1201fd04;
    local_194 = DAT_1201fd0c;
    fVar16 = local_19c._4_4_;
    fVar14 = (float)local_19c;
    local_19c = uVar1;
  }
  else {
    auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar21 = auVar15._0_4_;
    fVar21 = (DAT_11de9938 - fVar21 * fVar17 * fVar21 * DAT_11de98e8) * fVar21;
    local_19c = CONCAT44(fVar16 * fVar21,fVar14 * fVar21);
    local_194 = fVar21 * fVar18;
    fVar16 = fVar16 * fVar21;
    fVar14 = fVar14 * fVar21;
  }
  local_190 = CONCAT44((uint)fVar16 ^ DAT_11de9c90,(uint)fVar14 ^ DAT_11de9c90);
  local_188 = (float)((uint)local_194 ^ DAT_11de9c90);
  local_1b4 = CONCAT44(fVar18,fVar18);
  local_1ac = 0.0;
  local_178 = CONCAT44(DAT_11de9918,DAT_11de9918);
  local_10 = 1.0;
  local_170 = 0x3f800000;
  local_a8 = param_4;
  pfVar8 = (float *)(**(code **)(*piVar4 + 0xbc))();
  local_20 = DAT_11de9918;
  if (*pfVar8 != (float)local_40) {
    pfVar8 = (float *)(**(code **)(*piVar4 + 0xbc))();
    local_20 = DAT_11de9918 / *pfVar8;
  }
  pfVar8 = (float *)(**(code **)(*piVar4 + 0xd0))(local_1c);
  puVar7 = (undefined8 *)(**(code **)(*piVar4 + 200))(&local_50);
  fVar14 = pfVar8[3];
  fVar16 = *pfVar8;
  fVar17 = pfVar8[1];
  uVar1 = *puVar7;
  fVar18 = pfVar8[2];
  fVar21 = (float)((uint)fVar16 ^ DAT_11de9c90);
  local_6c = *(uint *)(puVar7 + 1);
  local_74._0_4_ = (uint)uVar1;
  local_74._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  fVar19 = (float)((uint)local_74 ^ DAT_11de9c90);
  fVar23 = (float)(local_74._4_4_ ^ DAT_11de9c90);
  fVar12 = (float)((uint)fVar17 ^ DAT_11de9c90);
  fVar24 = (float)(local_6c ^ DAT_11de9c90);
  local_8 = (float)((uint)fVar18 ^ DAT_11de9c90);
  fVar22 = (fVar18 * fVar23 - fVar17 * fVar24) + fVar14 * fVar19;
  fVar20 = (fVar16 * fVar24 - fVar18 * fVar19) + fVar14 * fVar23;
  fVar16 = (fVar17 * fVar19 - fVar16 * fVar23) + fVar14 * fVar24;
  local_c = fVar18 * fVar20 - pfVar8[1] * fVar16;
  local_c = fVar19 + local_c + local_c;
  fVar16 = *pfVar8 * fVar16 - fVar18 * fVar22;
  local_30 = pfVar8[1] * fVar22 - *pfVar8 * fVar20;
  local_30 = local_30 + fVar24 + local_30;
  fVar19 = (local_1ac * fVar12 - local_1b4._4_4_ * local_8) + fVar14 * (float)local_1b4;
  fVar18 = ((float)local_1b4 * local_8 - local_1ac * fVar21) + fVar14 * local_1b4._4_4_;
  fVar17 = (local_1b4._4_4_ * fVar21 - (float)local_1b4 * fVar12) + fVar14 * local_1ac;
  local_38._0_4_ = fVar12 * fVar17 - local_8 * fVar18;
  local_38._0_4_ = (float)local_1b4 + (float)local_38 + local_c + (float)local_38;
  local_38._4_4_ = 0.0;
  fVar17 = local_8 * fVar19 - fVar21 * fVar17;
  fVar18 = fVar21 * fVar18 - fVar12 * fVar19;
  local_1a0 = (fVar18 + local_1ac + local_30 + fVar18) * local_20;
  local_1a8 = CONCAT44((fVar17 + local_1b4._4_4_ + fVar16 + fVar23 + fVar16 + fVar17) * local_20,
                       (float)local_38 * local_20);
  fVar19 = (local_188 * fVar12 - local_190._4_4_ * local_8) + fVar14 * (float)local_190;
  fVar17 = ((float)local_190 * local_8 - local_188 * fVar21) + fVar14 * local_190._4_4_;
  fVar16 = (local_190._4_4_ * fVar21 - (float)local_190 * fVar12) + fVar14 * local_188;
  fVar14 = fVar12 * fVar16 - local_8 * fVar17;
  fVar14 = (float)local_190 + fVar14 + fVar14;
  fVar18 = local_8 * fVar19 - fVar21 * fVar16;
  local_17c = fVar21 * fVar17 - fVar12 * fVar19;
  fVar18 = fVar18 + local_190._4_4_ + fVar18;
  local_184 = CONCAT44(fVar18,fVar14);
  local_17c = local_17c + local_188 + local_17c;
  fVar21 = (float)local_40;
  fVar17 = fVar14 - local_17c * fVar21;
  fVar19 = local_17c * fVar21 - fVar18;
  fVar16 = fVar18 * fVar21 - fVar14 * fVar21;
  fVar12 = fVar19 * fVar19 + fVar17 * fVar17 + fVar16 * fVar16;
  local_74 = uVar1;
  if (DAT_11cbf070 < fVar12) {
    auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar20 = auVar15._0_4_;
    fVar20 = (DAT_11de9938 - fVar20 * fVar12 * fVar20 * DAT_11de98e8) * fVar20;
    local_20 = fVar20 * fVar19;
    local_8 = fVar20 * fVar17;
    local_c = fVar20 * fVar16;
    if (DAT_11cbf074 <= DAT_11de9918 / fVar20) {
      dVar13 = (double)(fVar14 * fVar21 + fVar18 * fVar21 + local_17c);
      local_10 = local_17c;
      libm_sse2_acos_precise();
      fVar2 = (float10)fcos((float10)((float)dVar13 * DAT_11de98e8));
      fVar11 = (float10)fsin((float10)((float)dVar13 * DAT_11de98e8));
      local_48 = (float)fVar2;
      local_30 = (float)fVar11;
      local_54 = local_20 * local_30;
      local_50 = local_8 * local_30;
      local_4c = local_c * local_30;
      local_38._4_4_ = local_48;
      FUN_10abc150(&local_54);
      local_10 = local_24;
      local_13c = local_2c;
      goto LAB_110188bc;
    }
  }
  local_10 = 0.0;
  local_13c = CONCAT44(fVar21,fVar21);
LAB_110188bc:
  local_134 = local_10;
  local_14c = 0x43fa0000;
  local_154 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_164 = 0x43fa0000;
  local_10 = 500.0;
  local_140 = 0x43fa0000;
  local_16c = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_148 = CONCAT44(DAT_11cc4cc0,DAT_11cc4cc0);
  local_1bc = 0xffffffff;
  piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar9 = (int *)(**(code **)(*piVar9 + 0x60))();
  local_68 = (**(code **)(*piVar9 + 0x18))("GameOnHit");
  local_5c = &local_204;
  local_64 = 0x4ffff;
  local_60 = 0;
  local_58 = 0;
  piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  iVar6 = *piVar9;
  uVar10 = (**(code **)(*local_44 + 4))();
  piVar9 = (int *)(**(code **)(iVar6 + 0x144))(uVar10);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0x24))(&local_68);
  }
  return;
}


// ===== BT-event sender: FUN_11019e00@11019e00 =====

/* [RE-AUTO c0]
   strings:
     ""GameCommonEvent"" */

void __thiscall FUN_11019e00(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cStack00000007;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  int *local_8;
  
  if (*(char *)(param_1 + 0x89) != param_2) {
    *(char *)(param_1 + 0x89) = param_2;
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x60))();
    (**(code **)(*piVar1 + 0x18))("GameCommonEvent");
    local_10 = &stack0x00000007;
    local_1c = 299;
    local_18 = 0x4ffff;
    local_14 = 0;
    local_c = 0;
    cStack00000007 = param_2;
    piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x144))(*(undefined4 *)(param_1 + 8));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))(&local_1c);
    }
    if (*(char *)(param_1 + 0x89) == '\0') {
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))(2);
      if (piVar1 == (int *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = (int *)(**(code **)(*piVar1 + 0x38))();
      }
      uVar3 = *(undefined4 *)(param_1 + 0x84);
    }
    else {
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x150))();
      if (piVar1 == (int *)0x0) {
        uVar3 = *(undefined4 *)(param_1 + 0x80);
        local_8 = (int *)0x0;
      }
      else {
        local_8 = (int *)(**(code **)(*piVar1 + 0x38))();
        uVar3 = *(undefined4 *)(param_1 + 0x80);
      }
    }
    piVar1 = (int *)(**(code **)(*local_8 + 4))();
    iVar2 = (**(code **)(*piVar1 + 0x40))(uVar3);
    if (iVar2 != 0) {
      FUN_10a69650(piVar1,&local_8);
      (**(code **)(*piVar1 + 0x44))();
    }
  }
  return;
}


// ===== BT-event sender: FUN_11024a60@11024a60 =====

/* [RE-AUTO c0]
   strings:
     ""SceneObject"" */

void __thiscall FUN_11024a60(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(DAT_1202e818 + 0x209) == '\0') {
    (**(code **)(*param_2 + 0x2c))();
    return;
  }
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 0x18))("SceneObject");
      if (iVar1 != 0) {
        local_c = *(undefined4 *)(iVar1 + 8);
        local_18 = &local_c;
        local_20 = 0x124;
        local_1c = 0x4ffff;
        local_10 = 0;
        local_8 = 2;
        local_14 = param_4;
        if ((DAT_1202e818 != 0) && (*(int **)(DAT_1202e818 + 4) != (int *)0x0)) {
          iVar1 = (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
          if (iVar1 != 0) {
            piVar2 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            piVar2 = (int *)(**(code **)(*piVar2 + 0x144))(param_3);
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 0x24))(&local_20);
            }
          }
        }
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== BT-event sender: FUN_11024b40@11024b40 =====

/* [RE-AUTO c0]
   strings:
     ""SceneObject"" */

void __thiscall
FUN_11024b40(int param_1,int *param_2,float param_3,float param_4,float param_5,int param_6)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined8 local_2c;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(char *)(DAT_1202e818 + 0x209) != '\0') {
    iVar3 = (**(code **)(*param_2 + 8))();
    if ((((iVar3 != 0) &&
         (piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x144))(iVar3),
         piVar4 != (int *)0x0)) &&
        (iVar3 = (**(code **)(*piVar4 + 0x18))("SceneObject"), iVar3 != 0)) && (param_6 != 0)) {
      local_20 = *(undefined4 *)(iVar3 + 8);
      local_50 = param_6;
      local_54 = &local_20;
      local_5c = 0x124;
      local_58 = 0x4ffff;
      local_4c = 0;
      local_1c = 2;
      puVar5 = (undefined8 *)(**(code **)(**(int **)(iVar3 + 0xc) + 0x94))();
      uVar1 = *puVar5;
      local_24 = *(float *)(puVar5 + 1);
      local_2c._0_4_ = (float)uVar1;
      fVar8 = (float)local_2c - param_3;
      local_8 = param_3 + (float)local_2c;
      local_14 = local_24 - param_5;
      local_18 = param_5 + local_24;
      local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_c = local_2c._4_4_ - param_4;
      local_10 = param_4 + local_2c._4_4_;
      local_2c = uVar1;
      (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x8c))(&local_48);
      cVar2 = FUN_113a58c0();
      while (cVar2 == '\0') {
        iVar3 = (**(code **)(local_48 + 0xc))();
        piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                                  (*(undefined4 *)(iVar3 + 8));
        uVar1 = local_2c;
        if (piVar4 != (int *)0x0) {
          puVar5 = (undefined8 *)(**(code **)(*piVar4 + 0x94))();
          uVar1 = *puVar5;
          local_24 = *(float *)(puVar5 + 1);
          local_2c._0_4_ = (float)uVar1;
          if ((((fVar8 < (float)local_2c) && ((float)local_2c < local_8)) &&
              ((local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_c < local_2c._4_4_ &&
               ((local_2c._4_4_ < local_10 && (local_14 < local_24)))))) && (local_24 < local_18)) {
            local_2c = uVar1;
            piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            iVar3 = *piVar6;
            uVar7 = (**(code **)(*piVar4 + 4))();
            piVar4 = (int *)(**(code **)(iVar3 + 0x144))(uVar7);
            uVar1 = local_2c;
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 0x24))(&local_5c);
              uVar1 = local_2c;
            }
          }
        }
        local_2c = uVar1;
        FUN_113a58d0();
        cVar2 = FUN_113a58c0();
      }
      iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x9c))(local_34,7);
      local_44 = *(undefined4 *)(iVar3 + 4);
      local_40 = *(undefined4 *)(iVar3 + 8);
      local_3c = *(undefined4 *)(iVar3 + 0xc);
      local_38 = *(undefined4 *)(iVar3 + 0x10);
      FUN_113a5790();
      cVar2 = FUN_113a58c0();
      while (cVar2 == '\0') {
        iVar3 = (**(code **)(local_48 + 0xc))();
        piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                                  (*(undefined4 *)(iVar3 + 8));
        uVar1 = local_2c;
        if (piVar4 != (int *)0x0) {
          puVar5 = (undefined8 *)(**(code **)(*piVar4 + 0x94))();
          uVar1 = *puVar5;
          local_24 = *(float *)(puVar5 + 1);
          local_2c._0_4_ = (float)uVar1;
          if (((((fVar8 < (float)local_2c) && ((float)local_2c < local_8)) &&
               (local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_c < local_2c._4_4_)) &&
              ((local_2c._4_4_ < local_10 && (local_14 < local_24)))) && (local_24 < local_18)) {
            local_2c = uVar1;
            piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            iVar3 = *piVar6;
            uVar7 = (**(code **)(*piVar4 + 4))();
            piVar4 = (int *)(**(code **)(iVar3 + 0x144))(uVar7);
            uVar1 = local_2c;
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 0x24))(&local_5c);
              uVar1 = local_2c;
            }
          }
        }
        local_2c = uVar1;
        FUN_113a58d0();
        cVar2 = FUN_113a58c0();
      }
      iVar3 = (**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0x9c))(local_34,0xc);
      local_44 = *(undefined4 *)(iVar3 + 4);
      local_40 = *(undefined4 *)(iVar3 + 8);
      local_3c = *(undefined4 *)(iVar3 + 0xc);
      local_38 = *(undefined4 *)(iVar3 + 0x10);
      FUN_113a5790();
      cVar2 = FUN_113a58c0();
      while (cVar2 == '\0') {
        iVar3 = (**(code **)(local_48 + 0xc))();
        piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                                  (*(undefined4 *)(iVar3 + 8));
        uVar1 = local_2c;
        if (piVar4 != (int *)0x0) {
          puVar5 = (undefined8 *)(**(code **)(*piVar4 + 0x94))();
          uVar1 = *puVar5;
          local_24 = *(float *)(puVar5 + 1);
          local_2c._0_4_ = (float)uVar1;
          if (((fVar8 < (float)local_2c) && ((float)local_2c < local_8)) &&
             ((local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_c < local_2c._4_4_ &&
              (((local_2c._4_4_ < local_10 && (local_14 < local_24)) && (local_24 < local_18)))))) {
            local_2c = uVar1;
            piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
            iVar3 = *piVar6;
            uVar7 = (**(code **)(*piVar4 + 4))();
            piVar4 = (int *)(**(code **)(iVar3 + 0x144))(uVar7);
            uVar1 = local_2c;
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 0x24))(&local_5c);
              uVar1 = local_2c;
            }
          }
        }
        local_2c = uVar1;
        FUN_113a58d0();
        cVar2 = FUN_113a58c0();
      }
      FUN_113a5790();
    }
    (**(code **)(*param_2 + 0x2c))();
    return;
  }
  (**(code **)(*param_2 + 0x2c))();
  return;
}


// ===== BT-event sender: FUN_1103d150@1103d150 =====

/* [RE-AUTO c0] */

void FUN_1103d150(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x150))(0xe);
    if (iVar2 != 0) {
      local_c = param_3;
      local_18 = 0xd;
      local_14 = 0x4ffff;
      local_10 = 0;
      local_8 = 0;
      (**(code **)(*(int *)(iVar2 + 4) + 0x24))(&local_18);
    }
  }
  (**(code **)(*param_1 + 0x2c))();
  return;
}


// ===== BT-event sender: FUN_11093e50@11093e50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0] */

void __thiscall FUN_11093e50(int *param_1,float param_2)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float *local_24;
  float local_20;
  float local_1c;
  int *local_18;
  float local_14;
  float local_10;
  float local_c;
  char local_5;
  
  local_14 = 0.0;
  local_18 = (int *)0x0;
  local_5 = (**(code **)(*(int *)param_1[4] + 0x114))();
  piVar3 = (int *)FUN_10cbb820();
  if ((((piVar3 == (int *)0x0) || ((int *)piVar3[3] == (int *)0x0)) ||
      (piVar4 = (int *)(**(code **)(*(int *)piVar3[3] + 0x134))(), piVar4 == (int *)0x0)) ||
     (sVar2 = (**(code **)(*piVar4 + 0x2c))(), sVar2 == 100)) {
    if ((float)param_1[0x37] <= 0.0) {
      param_1[0x1a] = param_1[0x35];
    }
    else {
      piVar4 = (int *)param_1[0x37];
      if ((char)param_1[5] == '\0') {
        piVar4 = local_18;
      }
      fVar8 = (float)param_1[0x25];
      if (local_5 != '\0') {
        fVar8 = fVar8 * DAT_11cded94;
      }
      fVar9 = (float)param_1[0x35];
      fVar8 = ((float)piVar4 - (((float)param_1[0x36] - fVar9) * param_2) / fVar8) *
              (float)param_1[0x1b] + (float)param_1[0x1a];
      param_1[0x1a] = (int)fVar8;
      if ((fVar9 <= fVar8) && (fVar9 = (float)param_1[0x1b] * (float)param_1[0x36], fVar8 < fVar9))
      {
        fVar9 = fVar8;
      }
      param_1[0x1a] = (int)fVar9;
    }
  }
  else {
    param_1[0x1a] = 0;
  }
  fVar7 = (float10)(**(code **)(*param_1 + 0x1a4))();
  local_10 = 0.0;
  local_c = (float)fVar7;
  if ((float)param_1[0x25] <= 0.0) {
    param_1[0x14] = 0;
  }
  else {
    if ((char)param_1[5] != '\0') {
      local_10 = (float)param_1[0x24];
      if (local_5 != '\0') {
        local_10 = local_10 * DAT_11cc3e78;
      }
      local_10 = local_10 * local_c;
      if ((piVar3 != (int *)0x0) &&
         (cVar1 = (**(code **)(*(int *)(param_1[4] + 0x34c) + 0x198))(), cVar1 != '\0')) {
        local_24 = &local_10;
        local_30 = 0x103;
        local_2c = 0x4ffff;
        local_28 = 0.0;
        local_20 = 0.0;
        (**(code **)(*piVar3 + 0x40))(&local_30);
      }
    }
    fVar8 = (float)param_1[0x25];
    if (local_5 != '\0') {
      fVar8 = fVar8 * DAT_11cded94;
    }
    fVar8 = (local_10 - (((float)param_1[0x23] * param_2) / fVar8) * local_c) + (float)param_1[0x14]
    ;
    param_1[0x14] = (int)fVar8;
    if (0.0 <= fVar8) {
      fVar9 = (float)param_1[0x1b] * (float)param_1[0x23];
      if (fVar9 <= fVar8) {
        fVar8 = fVar9;
      }
      param_1[0x14] = (int)fVar8;
    }
    else {
      param_1[0x14] = 0;
    }
  }
  if (((float)param_1[0x26] <= 0.0) && ((float)param_1[0x27] <= 0.0)) {
    (**(code **)(*param_1 + 0x1c8))(1);
    return;
  }
  local_c = 0.0;
  if ((char)param_1[5] != '\0') {
    iVar6 = param_1[0x15];
    iVar5 = param_1[0x2a] - param_1[0x29] >> 3;
    if ((-1 < iVar6) && (iVar6 < iVar5)) {
      local_14 = *(float *)(param_1[0x29] + iVar6 * 8);
      local_c = *(float *)(param_1[0x29] + 4 + iVar6 * 8);
      if (iVar6 + 1 < iVar5) {
        param_1[0x15] = iVar6 + 1;
      }
      else {
        iVar6 = 0;
        if (param_1[0x2f] < iVar5) {
          iVar6 = param_1[0x2f];
        }
        param_1[0x15] = iVar6;
      }
    }
  }
  local_18 = (int *)FUN_10cbb820();
  iVar6 = 0;
  cVar1 = (**(code **)(*(int *)param_1[4] + 0x11c))();
  if (cVar1 != '\0') {
    iVar6 = (**(code **)(*(int *)param_1[4] + 0x104))();
  }
  if ((local_18 != (int *)0x0) &&
     ((cVar1 = FUN_10ce7910(), cVar1 != '\0' ||
      ((iVar6 != 0 && (cVar1 = FUN_10ce7910(), cVar1 != '\0')))))) {
    if ((char)param_1[5] != '\0') {
      local_1c = (float)param_1[0x28];
      fVar8 = (float)((uint)local_1c ^ DAT_11de9c90);
      fVar7 = (float10)FUN_10c3f290();
      local_1c = (float)(fVar7 * (float10)(local_1c - fVar8) + (float10)fVar8);
      fVar7 = (float10)FUN_10c3f290();
      param_1[0x17] = (int)(local_1c + local_c);
      param_1[0x16] = (int)((float)fVar7 * (float)param_1[0x28] + local_14);
      FUN_10f3f740(&DAT_11df9844);
    }
    if (DAT_11cbf074 < (float)param_1[0x14]) {
      fVar8 = (float)param_1[0x14] / (float)param_1[0x23];
      local_24 = (float *)0x0;
      iVar6 = *local_18;
      local_28 = (float)param_1[0x16] * (float)param_1[0x26] * fVar8 * _DAT_11d06830 * DAT_11cbf07c
                 * DAT_11ceb0ac + (float)param_1[0x18] * DAT_11cbf090;
      local_20 = (float)param_1[0x27] * (float)param_1[0x17] * fVar8 * _DAT_11d06830 * DAT_11cbf07c
                 * DAT_11ceb0ac + (float)param_1[0x19] * DAT_11cbf090;
      param_1[0x18] = (int)local_28;
      param_1[0x19] = (int)local_20;
      (**(code **)(iVar6 + 0x4a8))(&local_28);
      (**(code **)(*(int *)param_1[4] + 0x70))(2);
      return;
    }
    (**(code **)(*param_1 + 0x1c8))(0);
  }
  return;
}


// ===== BT-event sender: FUN_11112c30@11112c30 =====

/* [RE-AUTO c0]
   calls: memcpy
   strings:
     ""Thrown"" */

void __thiscall
FUN_11112c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  size_t _Size;
  undefined4 *puVar10;
  char *pcVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_c = (undefined4 *)0x0;
  if (DAT_1203ef44 == '\0') {
    DAT_1203ef44 = 1;
    if (DAT_1203ef40 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    FUN_11114190(param_1 + 0xd0);
    puVar10 = (undefined4 *)*DAT_1203ef40;
    if (puVar10 != (undefined4 *)DAT_1203ef40[1]) {
      do {
        iVar7 = 0;
        if (param_1 != 0x34c) {
          iVar7 = param_1;
        }
        (**(code **)(*(int *)*puVar10 + 4))(iVar7,param_2,param_3,param_4,param_5,param_6,param_7);
        puVar10 = puVar10 + 1;
      } while (puVar10 != (undefined4 *)DAT_1203ef40[1]);
    }
    DAT_1203ef44 = '\0';
  }
  else {
    FUN_111140c0(*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2,&local_5);
    pvVar3 = *(void **)(param_1 + 0xd0);
    puVar10 = (undefined4 *)local_18;
    puVar4 = (undefined4 *)local_18;
    if (*(void **)(param_1 + 0xd4) != pvVar3) {
      _Size = (int)*(void **)(param_1 + 0xd4) - (int)pvVar3;
      pvVar3 = memcpy((undefined4 *)local_18,pvVar3,_Size);
      puVar4 = (undefined4 *)((int)pvVar3 + _Size);
    }
    local_c = puVar4;
    if (puVar10 != puVar4) {
      do {
        iVar7 = 0;
        if (param_1 != 0x34c) {
          iVar7 = param_1;
        }
        (**(code **)(*(int *)*puVar10 + 4))(iVar7,param_2,param_3,param_4,param_5,param_6,param_7);
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar4);
      puVar10 = (undefined4 *)local_18;
    }
    if (puVar10 != (undefined4 *)0x0) {
      FUN_10c3d5d0(puVar10);
    }
  }
  piVar5 = (int *)(**(code **)(*DAT_120286c8 + 0x3c))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x68))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0xc))(param_2);
  if (piVar5 != (int *)0x0) {
    local_2c = 0x102;
    local_28 = 0x4ffff;
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    (**(code **)(*piVar5 + 0x40))(&local_2c);
  }
  piVar6 = (int *)(**(code **)(*DAT_1202f45c + 0x124))();
  if ((((piVar5 != (int *)0x0) && (iVar7 = (**(code **)(*piVar5 + 0x1ec))(), iVar7 == 1)) &&
      (*(char *)(DAT_1202e818 + 0x16c) != '\0')) &&
     ((piVar5 == piVar6 && (iVar7 = (**(code **)(*(int *)piVar5[3] + 0x134))(), iVar7 != 0)))) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x4c) + 0x4c))(0xd,1,"OnEnableFire",iVar7,0);
  }
  if ((piVar6 != (int *)0x0) && (*(int **)(param_1 + 4) != (int *)0x0)) {
    pcVar11 = "Thrown";
    pbVar8 = (byte *)(**(code **)(**(int **)(param_1 + 4) + 0xd8))();
    do {
      bVar2 = *pbVar8;
      bVar12 = bVar2 < (byte)*pcVar11;
      if (bVar2 != *pcVar11) {
LAB_11112e70:
        uVar9 = -(uint)bVar12 | 1;
        goto LAB_11112e75;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar8[1];
      bVar12 = bVar2 < (byte)pcVar11[1];
      if (bVar2 != pcVar11[1]) goto LAB_11112e70;
      pbVar8 = pbVar8 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar2 != 0);
    uVar9 = 0;
LAB_11112e75:
    if (uVar9 != 0) {
      (**(code **)(*(int *)piVar6[3] + 200))(&local_24);
      uVar1 = *param_5;
      local_10 = *(float *)(param_5 + 1);
      local_18._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_18._0_4_ = (undefined4 *)uVar1;
      fVar15 = (local_20 - local_18._4_4_) * (local_20 - local_18._4_4_) +
               (local_24 - (float)(undefined4 *)local_18) *
               (local_24 - (float)(undefined4 *)local_18) +
               (local_1c - local_10) * (local_1c - local_10);
      if (fVar15 < DAT_11cd88e4) {
        local_18 = uVar1;
        if (*(char *)(DAT_1202e818 + 0x16d) != '\0') {
          FUN_10ba9b00();
        }
        if (*(char *)(param_1 + 0xf0) == '\0') {
          if ((DAT_120212a0 == 0) || (*(int *)(DAT_120212a0 + 8) == 0)) {
            fVar14 = 0.0;
          }
          else {
            fVar13 = (float10)FUN_10acef60();
            fVar14 = (float)fVar13;
          }
          if (((fVar15 < fVar14 * fVar14) && (DAT_120212a0 != 0)) &&
             (*(int *)(DAT_120212a0 + 8) != 0)) {
            FUN_10acee70(0x3f800000);
          }
        }
      }
    }
  }
  return;
}


// ===== BT-event sender: FUN_123eef39@123eef39 =====

/* [RE-AUTO c0]
   calls: LAB_123eef82+1 */

uint FUN_123eef39(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *in_EAX;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 extraout_EDX;
  int unaff_EBP;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar5;
  
  uVar4 = (**(code **)(*in_EAX + 0x18))();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  *(int *)(unaff_EBP + -0xc) = unaff_EBP + -0x1c8;
  iVar1 = **(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x14) = 0x4ffff;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -8) = 0;
  (**(code **)(iVar1 + 0x24))();
                    /* WARNING: Call to offcut address within same function */
  cVar2 = func_0x123eef83((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                          (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
                          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000,
                          (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                          (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
                          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
  if (in_OF == in_SF) {
    uVar3 = (uint)(byte)(cVar2 + 0x24);
  }
  else {
    FUN_10fe1d10();
                    /* WARNING: Call to offcut address within same function */
    uVar5 = func_0x123eef2f(extraout_EDX);
    uVar3 = (uint)uVar5;
    if (extraout_ECX == 1 || in_ZF != 0) {
                    /* WARNING: Could not recover jumptable at 0x123eef36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)((int)((ulonglong)uVar5 >> 0x20) + -0x184b7ea))();
      return uVar3;
    }
  }
  return uVar3;
}

