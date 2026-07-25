// CAvatarInfo::UpdateLocalPlayerAppearance @ 10af7200
// ramp offsets referenced: [468, 472, 548]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-R1]
   id: CAvatarInfo::GetManagers
   calls: memcpy
   strings:
     ""CAvatarInfo::GetManagers""
     ""CAvatarInfo""
     ""eye_left""
     ""eye_right""
     ""Co_0001c_anim"" */

undefined4 __thiscall
CAvatarInfo__UpdateLocalPlayerAppearance(int *param_1,int param_2,char param_3)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  size_t _Size;
  bool bVar15;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  char local_7c [8];
  int local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  char local_34 [9];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined **local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  uint local_10;
  char *local_c;
  char local_5;
  
  local_34[0] = '\0';
  local_34[1] = '\0';
  local_34[2] = '\0';
  local_34[3] = '\0';
  local_34[4] = '\0';
  local_34[5] = '\0';
  local_34[6] = '\0';
  local_34[7] = '\0';
  local_7c[0] = '\0';
  local_7c[1] = '\0';
  local_7c[2] = '\0';
  local_7c[3] = '\0';
  local_7c[4] = '\0';
  local_7c[5] = '\0';
  local_7c[6] = '\0';
  local_7c[7] = '\0';
  bVar15 = (char)param_1[0xb4] == '\0';
  if (bVar15) {
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  local_10 = (uint)bVar15;
  cVar3 = *(char *)(param_2 + 0x6c);
  iVar13 = param_1[0x68];
  *(char *)(param_1 + 0x68) = cVar3;
  if ((char)iVar13 != cVar3) {
    local_10 = 1;
  }
  iVar13 = 0;
  do {
    local_c = *(char **)(param_2 + iVar13 * 0xc);
    if (local_c != (char *)0xffffffff) {
      if (local_c == (char *)0x0) {
        if (param_1[iVar13 * 3 + 0x4d] != 0) {
          param_1[iVar13 * 3 + 0x4d] = 0;
          param_1[iVar13 * 3 + 0x4f] = -1;
          param_1[iVar13 * 3 + 0x4e] = -1;
          local_34[iVar13] = '\x01';
          if (iVar13 == 1) {
            local_34[6] = 1;
            FUN_1083ab70(&DAT_11d9d32b,0);
          }
          if (*(char *)(iVar13 + 0x224 + (int)param_1) != '\0') {
            *(undefined1 *)(iVar13 + 0x224 + (int)param_1) = 0;
            FUN_1083ab70(&DAT_11d9d32b,0);
            local_10 = CONCAT31(local_10._1_3_,1);
          }
        }
      }
      else {
        local_24 = &PTR_FUN_11dc0b20;
        if ((DAT_123be984 & 1) == 0) {
          DAT_123be984 = DAT_123be984 | 1;
          StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CAvatarInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6fd80);
        }
        puVar4 = (undefined *)*DAT_123be968;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)CInfoManager__FindByName(&local_24,"CAvatarInfo",0),
           puVar4 == (undefined *)0x0)) {
          if ((DAT_123be73c & 1) == 0) {
            DAT_123be73c = DAT_123be73c | 1;
            FUN_1053c940();
            FUN_11a8911f(&LAB_11c80c30);
          }
          puVar4 = &DAT_123be704;
        }
        local_24 = &PTR_FUN_11da54a8;
        if (((local_c != (char *)0xffffffff) &&
            (((local_c != (char *)0x0 || (*(int *)(puVar4 + 0x30) == 0)) &&
             (*(int *)(puVar4 + 0x28) != 0)))) &&
           ((iVar5 = (int)local_c - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
            (iVar5 < *(int *)(puVar4 + 0x24))))) {
          local_c = (char *)(iVar5 % *(int *)(puVar4 + 0x28));
          iVar5 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / *(int *)(puVar4 + 0x28)) * 4);
          if ((iVar5 != 0) && (local_74[3] = *(int *)(iVar5 + (int)local_c * 4), local_74[3] != 0))
          {
            if (param_1[iVar13 * 3 + 0x4d] != *(int *)(param_2 + iVar13 * 0xc)) {
              local_34[iVar13] = '\x01';
            }
            if ((param_1[iVar13 * 3 + 0x4e] != *(int *)(param_2 + 4 + iVar13 * 0xc)) ||
               (param_1[iVar13 * 3 + 0x4f] != *(int *)(param_2 + 8 + iVar13 * 0xc))) {
              local_7c[iVar13] = '\x01';
            }
            if ((local_34[iVar13] != '\0') || (local_7c[iVar13] != '\0')) {
              piVar11 = (int *)(param_2 + iVar13 * 0xc);
              iVar5 = piVar11[1];
              param_1[iVar13 * 3 + 0x4d] = *piVar11;
              (param_1 + iVar13 * 3 + 0x4d)[1] = iVar5;
              param_1[iVar13 * 3 + 0x4f] = *(int *)(param_2 + 8 + iVar13 * 0xc);
            }
            if (iVar13 == 1) {
              pcVar1 = *(char **)(local_74[3] + 0x2c);
              local_34[6] = 1;
              if (pcVar1 == (char *)0x0) {
                iVar5 = 0;
              }
              else {
                local_c = pcVar1 + 1;
                pcVar14 = pcVar1;
                do {
                  cVar3 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar3 != '\0');
                iVar5 = (int)pcVar14 - (int)local_c;
              }
              FUN_1083ab70(pcVar1,iVar5);
            }
            if (local_34[iVar13] != '\0') {
              FUN_10a79cc0(&local_44,*(undefined4 *)(local_74[3] + 0x2c),&DAT_11cbc0f0);
              iVar5 = local_44;
              cVar3 = (**(code **)(**(int **)(DAT_1202e818 + 100) + 0x100))(local_44);
              if (cVar3 == '\0') {
                if (*(char *)(iVar13 + 0x224 + (int)param_1) != '\0') {
                  *(undefined1 *)(iVar13 + 0x224 + (int)param_1) = 0;
                  FUN_1083ac30(&DAT_11d9d32b);
                  goto LAB_10af74db;
                }
              }
              else {
                *(undefined1 *)(iVar13 + 0x224 + (int)param_1) = 1;
                FUN_10a72410(&local_44);
LAB_10af74db:
                local_10 = CONCAT31(local_10._1_3_,1);
              }
              piVar11 = (int *)(iVar5 + -0xc);
              if ((-1 < *piVar11) && (iVar6 = FUN_10c3dad0(piVar11), iVar6 < 1)) {
                DAT_123be268 = DAT_123be268 - (*(int *)(iVar5 + -4) + 0xd);
                FUN_10c3d900(piVar11);
              }
            }
          }
        }
      }
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 8);
  local_5 = '\0';
  if ((*(int *)(param_2 + 0x70) != -1) &&
     ((param_1[0x69] != *(int *)(param_2 + 0x70) || ((char)param_1[0xb1] != '\0')))) {
    *(undefined1 *)(param_1 + 0xb1) = 0;
    param_1[0x69] = *(int *)(param_2 + 0x70);
    local_5 = '\x01';
    param_1[0x6a] = *(int *)(param_2 + 0x74);
  }
  piVar11 = (int *)0x0;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  if ((char)local_10 != '\0') {
    iVar13 = 0;
    piVar9 = param_1 + 0x8b;
    do {
      if (*(char *)((int)param_1 + iVar13 + 0x224) != '\0') {
        if (piVar11 == local_18) {
          local_25 = 0;
          local_11 = 0;
          FUN_10af2cd0(piVar11,piVar9,&local_11,1,1);
          piVar11 = local_1c;
        }
        else {
          local_2a = 0;
          local_26 = 0;
          piVar12 = (int *)0x0;
          if (piVar11 != (int *)0x0) {
            if (-1 < *(int *)(*piVar9 + -0xc)) {
              *local_1c = *piVar9;
              FUN_10c3dab0(*piVar11 + -0xc);
              local_1c = local_1c + 1;
              piVar11 = local_1c;
              goto LAB_10af75e1;
            }
            *local_1c = (int)&DAT_1201fc98;
            piVar12 = local_1c;
          }
          local_1c = piVar12 + 1;
          piVar11 = local_1c;
        }
      }
LAB_10af75e1:
      iVar13 = iVar13 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar13 < 8);
    if ((int)piVar11 - local_20 >> 2 == 0) {
      (**(code **)(*(int *)param_1[0x14] + 0x1d4))(0,param_1[0x2c],1);
    }
    else {
      pcVar1 = (char *)param_1[0x2c];
      local_c = &DAT_1201fc98;
      if (pcVar1 != (char *)0x0) {
        pcVar14 = pcVar1;
        do {
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        _Size = (int)pcVar14 - (int)(pcVar1 + 1);
        if (_Size != 0) {
          puVar7 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
          DAT_123be268 = DAT_123be268 + _Size + 0xd;
          *puVar7 = 1;
          local_c = (char *)(puVar7 + 3);
          puVar7[1] = _Size;
          puVar7[2] = _Size;
          local_c[_Size] = '\0';
          if (local_c != pcVar1) {
            memcpy(local_c,pcVar1,_Size);
          }
        }
      }
      (**(code **)(*(int *)param_1[0x14] + 0x1d8))(0,&local_c,&local_20,1);
      pcVar1 = local_c;
      piVar11 = (int *)(local_c + -0xc);
      if ((-1 < *piVar11) && (iVar13 = FUN_10c3dad0(piVar11), iVar13 < 1)) {
        DAT_123be268 = DAT_123be268 - (*(int *)(pcVar1 + -4) + 0xd);
        FUN_10c3d900(piVar11);
      }
    }
    FUN_10af62d0();
  }
  piVar11 = (int *)(**(code **)(*(int *)param_1[0x14] + 0x1b8))(0);
  if (piVar11 == (int *)0x0) goto LAB_10af7b70;
  iVar13 = *piVar11;
  uVar8 = (**(code **)(iVar13 + 0xc0))();
  (**(code **)(iVar13 + 0xbc))(uVar8 | 0x10);
  (**(code **)(*piVar11 + 0x1c4))(1);
  if (param_3 != '\0') {
    iVar13 = 0;
    do {
      CAvatarInfo__ClearSlotAttachment(piVar11,iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 8);
  }
  if ((char)local_10 == '\0') {
    iVar13 = 0;
    do {
      if ((local_34[iVar13] != '\0') || (local_7c[iVar13] != '\0')) {
        FUN_10af6810(piVar11,iVar13);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 8);
  }
  else {
    piVar9 = (int *)(**(code **)(*piVar11 + 0x58))();
    piVar9 = (int *)(**(code **)(*piVar9 + 0x18))("eye_left");
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x2c))(param_1 + 0x1c);
      (**(code **)(*piVar9 + 0x40))();
    }
    piVar9 = (int *)(**(code **)(*piVar11 + 0x58))();
    piVar9 = (int *)(**(code **)(*piVar9 + 0x18))("eye_right");
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x2c))(param_1 + 0x23);
      (**(code **)(*piVar9 + 0x40))();
    }
    CAvatarInfo__BindSkinAttachments(piVar11,param_1 + 0x94);
    iVar13 = 0;
    do {
      FUN_10af6810(piVar11,iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 8);
  }
  bVar15 = true;
  piVar9 = param_1 + 0x32;
  iVar13 = 1;
  do {
    if (piVar9[0x1e] != *piVar9) {
      bVar2 = false;
      bVar15 = false;
      goto LAB_10af77fa;
    }
    iVar13 = iVar13 + 1;
    piVar9 = piVar9 + 3;
  } while (iVar13 < 6);
  bVar2 = true;
LAB_10af77fa:
  local_40 = 0;
  local_3c = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  local_48 = 0;
  if ((bVar2) && (FUN_10463d60(param_1 + 0x47), puVar7 = local_50, local_50 != local_4c)) {
    do {
      if (local_3c == local_38) {
        FUN_1053b850(local_3c,puVar7,&local_2b,1,1);
      }
      else {
        *local_3c = *puVar7;
        local_3c = local_3c + 1;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_4c);
  }
  iVar13 = *piVar11;
  uVar10 = (**(code **)(*(int *)param_1[0x14] + 0x48))(&local_40,0x3f800000);
  (**(code **)(iVar13 + 0x1e4))(uVar10);
  uVar8 = param_1[0xaf] & 3;
  if (uVar8 == 0) {
    piVar9 = (int *)(**(code **)(*piVar11 + 0x4c))();
    if (piVar9 != (int *)0x0) {
      local_c0 = _DAT_11cc2bf0;
      uStack_bc = _UNK_11cc2bf4;
      uStack_b8 = _UNK_11cc2bf8;
      uStack_b4 = _UNK_11cc2bfc;
      local_b0 = 0x3f800000;
      local_ac = 0;
      local_a8 = 0x3f800000;
      local_a0 = 0;
      local_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      local_a4 = 0x282;
      local_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      local_c4 = 0;
      piVar11 = (int *)(**(code **)(*piVar11 + 0x60))();
      iVar13 = (**(code **)(*piVar11 + 0x14))("Co_0001c_anim");
      if (-1 < iVar13) {
        (**(code **)(*piVar11 + 0x68))(iVar13);
        (**(code **)(*piVar9 + 0x28))("Co_0001c_anim",&local_c4);
      }
    }
  }
  else if (((char)local_10 != '\0') || (local_5 != '\0')) {
    FUN_10af70a0(1);
    if (param_1[0x69] != 0) {
      if (uVar8 == 1) {
        uVar10 = 1;
      }
      else {
        if (uVar8 != 2) goto LAB_10af7986;
        uVar10 = 0;
      }
      FUN_10af6a10(param_1[0x69],uVar10);
    }
LAB_10af7986:
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_74[0] = 0;
    local_74[1] = 0;
    local_74[2] = 0;
    local_60 = 2;
    FUN_10463c40(0,&local_60,&local_29,1,1);
    FUN_10b57d60(param_1[0x6a],local_74,&local_5c);
    cVar3 = FUN_10b57e50();
    if ((cVar3 == '\x01') && (iVar13 = local_5c, local_5c != local_58)) {
      do {
        FUN_116a5560();
        puVar7 = (undefined4 *)FUN_116a5550();
        iVar5 = param_1[0xb2];
        local_64 = *puVar7;
        if (iVar5 == 0) {
          FUN_10af7c70(local_64);
        }
        else {
          puVar7 = *(undefined4 **)(iVar5 + 0xcc);
          if (puVar7 == *(undefined4 **)(iVar5 + 0xd0)) {
            FUN_10463c40(puVar7,&local_64,&local_27,1,1);
          }
          else {
            *puVar7 = local_64;
            *(int *)(iVar5 + 0xcc) = *(int *)(iVar5 + 0xcc) + 4;
          }
        }
        iVar13 = iVar13 + 4;
      } while (iVar13 != local_58);
    }
    (**(code **)(*param_1 + 0xc))(param_1 + 1);
    if (local_74[0] != 0) {
      FUN_10c3d5d0(local_74[0]);
    }
    if (local_5c != 0) {
      FUN_10c3d5d0(local_5c);
    }
  }
  if ((bVar15) && ((param_1[0x48] - param_1[0x47] & 0xfffffffcU) != 0)) {
    if (((int *)param_1[0x14] != (int *)0x0) &&
       (iVar13 = (**(code **)(*(int *)param_1[0x14] + 0x1b8))(0), iVar13 != 0)) {
      FUN_10afe610(iVar13);
      uVar8 = 0;
      iVar5 = param_1[0x47];
      if (param_1[0x48] - iVar5 >> 2 != 0) {
        do {
          FUN_10afe4e0(iVar13,*(undefined4 *)(iVar5 + uVar8 * 4),0x3f800000);
          uVar8 = uVar8 + 1;
          iVar5 = param_1[0x47];
        } while (uVar8 < (uint)(param_1[0x48] - iVar5 >> 2));
      }
    }
  }
  else if (((int *)param_1[0x14] != (int *)0x0) &&
          (iVar13 = (**(code **)(*(int *)param_1[0x14] + 0x1b8))(0), iVar13 != 0)) {
    FUN_10afe610(iVar13);
  }
  if (local_50 != (undefined4 *)0x0) {
    FUN_10c3d5d0(local_50);
  }
  if (local_40 != 0) {
    FUN_10c3d5d0(local_40);
  }
LAB_10af7b70:
  if ((((char)local_10 != '\0') && (param_1[0x14] != 0)) &&
     (piVar11 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x34) + 0x3f4))(),
     piVar11 != (int *)0x0)) {
    (**(code **)(*piVar11 + 0x24))(param_1[0x14]);
  }
  CryStringVector__Free(local_1c,local_20,0,&local_28);
  if (local_20 != 0) {
    FUN_10c3d5d0(local_20);
  }
  return 1;
}

