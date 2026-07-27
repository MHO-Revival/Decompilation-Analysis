
// ===== FUN_10273ab0@10273ab0 =====

/* [RE-AUTO c0] */

undefined4 __fastcall FUN_10273ab0(undefined2 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1 = param_1 + 0x12;
  iVar2 = 0x10;
  do {
    param_1[-0x11] = 0;
    *(undefined1 *)(param_1 + -0x10) = 0;
    if ((ushort)param_1[-0x11] < 7) {
                    /* WARNING: Could not recover jumptable at 0x10273ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&PTR_LAB_10273b10)[(ushort)param_1[-0x11]])();
      return uVar1;
    }
    param_1 = param_1 + 0x51;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


// ===== FUN_10273ba0@10273ba0 =====

/* [RE-AUTO c0] */

int __thiscall FUN_10273ba0(short *param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar2 = TdrBuf_PutU16_BE(*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (0x10 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_102736d0(param_2,param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ===== FUN_10273c90@10273c90 =====

/* [RE-AUTO c0] */

int __thiscall FUN_10273c90(short *param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  if ((param_3 == 0) || (1 < param_3)) {
    param_3 = 1;
  }
  else if (param_3 == 0) {
    return -9;
  }
  iVar2 = TdrBuf_GetU16_BE(param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (0x10 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = FUN_102737d0(param_2,param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ===== TdrDebugFormat_VarsList16@10273da0 =====

/* WARNING: Removing unreachable block (ram,0x10273e1f) */
/* [RE-R1]
   src: TdrBufUtil.cpp
   calls: _wassert
   strings:
     ""[nCount]""
     ""[astVars]""
     "u"D:\\MHFC\\OpRelease\\Code\\Common\\Protocols\\PacketCode\\TdrBufUtil.cpp""
     "u"NULL != variable""
     ""%s[%u]%c"" */

int __thiscall
TdrDebugFormat_VarsList16(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = TdrText_FieldScalar(param_2,param_3,param_4,"[nCount]",&DAT_11d9e0b4,(int)*param_1);
  if (iVar2 == 0) {
    sVar1 = *param_1;
    if (sVar1 < 0) {
      return -6;
    }
    if (0x10 < sVar1) {
      return -7;
    }
    sVar3 = 0;
    if (0 < sVar1) {
      do {
        iVar2 = TdrText_WriteIndent(param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_1010c010(param_2,"%s[%u]%c","[astVars]",(int)sVar3,(int)(char)param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = param_3;
        if (-1 < param_3) {
          iVar2 = param_3 + 1;
        }
        iVar2 = FUN_10273930(param_2,iVar2,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 < *param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ===== FUN_10b044b0@10b044b0 =====

/* [RE-AUTO c0]
   calls: strncpy, memcpy
   strings:
     ""String""
     ""Float"" */

void __thiscall FUN_10b044b0(int param_1,short *param_2)

{
  short *psVar1;
  char *pcVar2;
  size_t sVar3;
  char cVar4;
  void *pvVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  short *psVar10;
  undefined4 uVar11;
  char local_60 [16];
  char *local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  char *local_24;
  char *local_20;
  undefined1 local_1c [4];
  char *local_18;
  int local_14;
  size_t local_10;
  undefined4 local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14 = FUN_100b4ca0(*(undefined4 *)(param_1 + 0x14));
    *(int *)(param_1 + 0x1c) = local_14;
    if (local_14 != 0) {
      local_28 = *(int *)(local_14 + 0xb4) - *(int *)(local_14 + 0xb0) >> 2;
      CInfoRecord__GetModelString(&DAT_11cc35f8);
      pcVar2 = local_18;
      psVar1 = param_2;
      iVar8 = (int)*param_2;
      *param_2 = *param_2 + 1;
      param_2[iVar8 * 0x51 + 1] = 0;
      local_34 = iVar8;
      strncpy((char *)(param_2 + iVar8 * 0x51 + 2),local_18,8);
      *(uint *)(psVar1 + iVar8 * 0x51 + 0x12) = local_28;
      *psVar1 = *psVar1 + (short)local_28;
      local_18 = (char *)0x0;
      if (local_28 != 0) {
        iVar8 = local_14 + 0x60;
        local_8 = iVar8;
        do {
          if (local_18 < (uint)(*(int *)(iVar8 + 0x54) - *(int *)(iVar8 + 0x50) >> 2)) {
            local_2c = *(undefined4 *)(*(int *)(iVar8 + 0x50) + (int)local_18 * 4);
            puVar6 = &local_2c;
          }
          else {
            puVar6 = (undefined4 *)FUN_113168d0(&DAT_11d9d32b);
          }
          local_30 = *puVar6;
          local_20 = (char *)FUN_11316bf0();
          local_50 = local_60;
          pcVar7 = local_20;
          do {
            local_24 = pcVar7;
            pcVar7 = local_24 + 1;
          } while (*local_24 != '\0');
          local_10 = (int)local_24 - (int)local_20;
          local_4c = local_50;
          if (local_10 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_100b73e0();
          }
          if (0x10 < local_10 + 1) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(local_10 + 1);
          }
          if (local_24 != local_20) {
            pvVar5 = memcpy(local_50,local_20,local_10);
            local_50 = (char *)((int)pvVar5 + local_10);
          }
          local_10 = (int)local_18 + local_34 + 1;
          *local_50 = '\0';
          FUN_11316810(local_60);
          iVar8 = local_8;
          cVar4 = FUN_1046dc90(local_38,&param_2);
          if (cVar4 != '\0') {
            psVar10 = param_2;
            puVar6 = (undefined4 *)FUN_1046deb0();
            local_c = *puVar6;
            cVar4 = FUN_11316b80("String");
            if (cVar4 == '\0') {
              cVar4 = FUN_11316b80(&DAT_11dbaa7c);
              psVar10 = param_2;
              if (cVar4 == '\0') {
                cVar4 = FUN_11316b80(&DAT_11dbab04);
                if (cVar4 == '\0') {
                  cVar4 = FUN_11316b80("Float");
                  if (cVar4 != '\0') {
                    local_24 = (char *)0x0;
                    FUN_10264630(param_2,&local_24);
                    sVar3 = local_10;
                    psVar1[local_10 * 0x51 + 1] = 4;
                    strncpy((char *)(psVar1 + local_10 * 0x51 + 2),local_4c,0x20);
                    *(char **)(psVar1 + sVar3 * 0x51 + 0x12) = local_24;
                    iVar8 = local_8;
                  }
                }
                else {
                  local_20 = (char *)0x0;
                  FUN_102646b0(param_2,&local_20);
                  sVar3 = local_10;
                  psVar1[local_10 * 0x51 + 1] = 0;
                  strncpy((char *)(psVar1 + local_10 * 0x51 + 2),local_4c,0x20);
                  *(char **)(psVar1 + sVar3 * 0x51 + 0x12) = local_20;
                  iVar8 = local_8;
                }
              }
              else {
                if ((param_2 != (short *)0xffffffff) && (param_2 < (short *)0xf4240)) {
                  if (param_2 < (short *)(*(int *)(local_14 + 0x6c) - *(int *)(local_14 + 0x68) >> 2
                                         )) {
                    cVar4 = FUN_10a49100(&local_48);
                    if (cVar4 != '\0') goto LAB_10b04714;
                    uVar11 = *(undefined4 *)(local_14 + 0x74);
                  }
                  else {
                    uVar11 = *(undefined4 *)(local_14 + 0x74);
                  }
                  FUN_1046a6d0(0,psVar10,uVar11);
                }
LAB_10b04714:
                sVar3 = local_10;
                psVar1[local_10 * 0x51 + 1] = 3;
                strncpy((char *)(psVar1 + local_10 * 0x51 + 2),local_4c,0x20);
                *(undefined4 *)(psVar1 + sVar3 * 0x51 + 0x12) = local_48;
                *(undefined4 *)(psVar1 + sVar3 * 0x51 + 0x12 + 2) = uStack_44;
                *(undefined4 *)(psVar1 + sVar3 * 0x51 + 0x16) = local_40;
                iVar8 = local_8;
              }
            }
            else {
              FUN_11316910();
              FUN_10497060(param_2,local_1c);
              sVar3 = local_10;
              psVar1[local_10 * 0x51 + 1] = 2;
              strncpy((char *)(psVar1 + local_10 * 0x51 + 2),local_4c,0x20);
              pcVar7 = (char *)FUN_11317f30(0x80);
              strncpy((char *)(psVar1 + sVar3 * 0x51 + 0x12),pcVar7,(size_t)psVar10);
              iVar8 = local_8;
            }
          }
          if ((local_4c != local_60) && (local_4c != (char *)0x0)) {
            FUN_10c3d5d0(local_4c);
          }
          local_18 = (char *)((int)local_18 + 1);
        } while (local_18 < local_28);
      }
      piVar9 = (int *)(pcVar2 + -0xc);
      if ((-1 < *piVar9) && (iVar8 = FUN_10c3dad0(piVar9), iVar8 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar2 + -4));
        FUN_10c3d900(piVar9);
      }
    }
  }
  return;
}


// ===== FUN_10b24130@10b24130 =====

/* [RE-AUTO c0]
   calls: strncpy, memcpy
   strings:
     ""String""
     ""Float"" */

void __thiscall FUN_10b24130(int param_1,short *param_2)

{
  short *psVar1;
  char *pcVar2;
  size_t sVar3;
  char cVar4;
  void *pvVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  short *psVar10;
  undefined4 uVar11;
  char local_60 [16];
  char *local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  char *local_24;
  char *local_20;
  undefined1 local_1c [4];
  char *local_18;
  int local_14;
  size_t local_10;
  undefined4 local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14 = FUN_100b4ca0(*(undefined4 *)(param_1 + 0x14));
    *(int *)(param_1 + 0x1c) = local_14;
    if (local_14 != 0) {
      local_28 = *(int *)(local_14 + 0xb4) - *(int *)(local_14 + 0xb0) >> 2;
      CInfoRecord__GetModelString(&DAT_11cc35f8);
      pcVar2 = local_18;
      psVar1 = param_2;
      iVar8 = (int)*param_2;
      *param_2 = *param_2 + 1;
      param_2[iVar8 * 0x51 + 1] = 0;
      local_34 = iVar8;
      strncpy((char *)(param_2 + iVar8 * 0x51 + 2),local_18,8);
      *(uint *)(psVar1 + iVar8 * 0x51 + 0x12) = local_28;
      *psVar1 = *psVar1 + (short)local_28;
      local_18 = (char *)0x0;
      if (local_28 != 0) {
        iVar8 = local_14 + 0x60;
        local_8 = iVar8;
        do {
          if (local_18 < (uint)(*(int *)(iVar8 + 0x54) - *(int *)(iVar8 + 0x50) >> 2)) {
            local_2c = *(undefined4 *)(*(int *)(iVar8 + 0x50) + (int)local_18 * 4);
            puVar6 = &local_2c;
          }
          else {
            puVar6 = (undefined4 *)FUN_113168d0(&DAT_11d9d32b);
          }
          local_30 = *puVar6;
          local_20 = (char *)FUN_11316bf0();
          local_50 = local_60;
          pcVar7 = local_20;
          do {
            local_24 = pcVar7;
            pcVar7 = local_24 + 1;
          } while (*local_24 != '\0');
          local_10 = (int)local_24 - (int)local_20;
          local_4c = local_50;
          if (local_10 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_100b73e0();
          }
          if (0x10 < local_10 + 1) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(local_10 + 1);
          }
          if (local_24 != local_20) {
            pvVar5 = memcpy(local_50,local_20,local_10);
            local_50 = (char *)((int)pvVar5 + local_10);
          }
          local_10 = (int)local_18 + local_34 + 1;
          *local_50 = '\0';
          FUN_11316810(local_60);
          iVar8 = local_8;
          cVar4 = FUN_1046dc90(local_38,&param_2);
          if (cVar4 != '\0') {
            psVar10 = param_2;
            puVar6 = (undefined4 *)FUN_1046deb0();
            local_c = *puVar6;
            cVar4 = FUN_11316b80("String");
            if (cVar4 == '\0') {
              cVar4 = FUN_11316b80(&DAT_11dbaa7c);
              psVar10 = param_2;
              if (cVar4 == '\0') {
                cVar4 = FUN_11316b80(&DAT_11dbab04);
                if (cVar4 == '\0') {
                  cVar4 = FUN_11316b80("Float");
                  if (cVar4 != '\0') {
                    local_24 = (char *)0x0;
                    FUN_10264630(param_2,&local_24);
                    sVar3 = local_10;
                    psVar1[local_10 * 0x51 + 1] = 4;
                    strncpy((char *)(psVar1 + local_10 * 0x51 + 2),local_4c,0x20);
                    *(char **)(psVar1 + sVar3 * 0x51 + 0x12) = local_24;
                    iVar8 = local_8;
                  }
                }
                else {
                  local_20 = (char *)0x0;
                  FUN_102646b0(param_2,&local_20);
                  sVar3 = local_10;
                  psVar1[local_10 * 0x51 + 1] = 0;
                  strncpy((char *)(psVar1 + local_10 * 0x51 + 2),local_4c,0x20);
                  *(char **)(psVar1 + sVar3 * 0x51 + 0x12) = local_20;
                  iVar8 = local_8;
                }
              }
              else {
                if ((param_2 != (short *)0xffffffff) && (param_2 < (short *)0xf4240)) {
                  if (param_2 < (short *)(*(int *)(local_14 + 0x6c) - *(int *)(local_14 + 0x68) >> 2
                                         )) {
                    cVar4 = FUN_10a49100(&local_48);
                    if (cVar4 != '\0') goto LAB_10b24394;
                    uVar11 = *(undefined4 *)(local_14 + 0x74);
                  }
                  else {
                    uVar11 = *(undefined4 *)(local_14 + 0x74);
                  }
                  FUN_1046a6d0(0,psVar10,uVar11);
                }
LAB_10b24394:
                sVar3 = local_10;
                psVar1[local_10 * 0x51 + 1] = 3;
                strncpy((char *)(psVar1 + local_10 * 0x51 + 2),local_4c,0x20);
                *(undefined4 *)(psVar1 + sVar3 * 0x51 + 0x12) = local_48;
                *(undefined4 *)(psVar1 + sVar3 * 0x51 + 0x12 + 2) = uStack_44;
                *(undefined4 *)(psVar1 + sVar3 * 0x51 + 0x16) = local_40;
                iVar8 = local_8;
              }
            }
            else {
              FUN_11316910();
              FUN_10497060(param_2,local_1c);
              sVar3 = local_10;
              psVar1[local_10 * 0x51 + 1] = 2;
              strncpy((char *)(psVar1 + local_10 * 0x51 + 2),local_4c,0x20);
              pcVar7 = (char *)FUN_11317f30(0x80);
              strncpy((char *)(psVar1 + sVar3 * 0x51 + 0x12),pcVar7,(size_t)psVar10);
              iVar8 = local_8;
            }
          }
          if ((local_4c != local_60) && (local_4c != (char *)0x0)) {
            FUN_10c3d5d0(local_4c);
          }
          local_18 = (char *)((int)local_18 + 1);
        } while (local_18 < local_28);
      }
      piVar9 = (int *)(pcVar2 + -0xc);
      if ((-1 < *piVar9) && (iVar8 = FUN_10c3dad0(piVar9), iVar8 < 1)) {
        DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(pcVar2 + -4));
        FUN_10c3d900(piVar9);
      }
    }
  }
  return;
}


// ===== FUN_10be8380@10be8380 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject"" */

undefined4 __thiscall FUN_10be8380(int *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_2 != (undefined2 *)0x0) && (param_3 == 0xa22)) {
    *param_2 = 0;
    iVar1 = **(int **)m_pThis_exref;
    uVar2 = (**(code **)(*param_1 + 0x18))();
    piVar3 = (int *)(**(code **)(iVar1 + 0x144))(uVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x18))("BTCtrlObject");
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xd8))(param_2);
      }
    }
    piVar3 = (int *)(**(code **)(param_1[1] + 4))();
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x1b8))(0);
      if (piVar3 != (int *)0x0) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x58))();
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x4c))(param_2);
        }
      }
    }
    return 0xa22;
  }
  return 0xffffffff;
}


// ===== FUN_10be8430@10be8430 =====

/* [RE-AUTO c0]
   strings:
     ""BTCtrlObject""
     ""Attach"" */

undefined4 __thiscall FUN_10be8430(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uStack_c;
  int local_8;
  
  if ((param_2 == 0) || (param_3 != 0xa22)) {
    return 0xffffffff;
  }
  iVar9 = 0;
  piVar2 = (int *)(**(code **)(**(int **)m_pThis_exref + 0x144))(*(undefined4 *)(param_1 + 0x44));
  if ((piVar2 != (int *)0x0) &&
     (piVar2 = (int *)(**(code **)(*piVar2 + 0x18))("BTCtrlObject"), piVar2 != (int *)0x0)) {
    pbVar6 = &DAT_11cc35f8;
    pbVar5 = (byte *)(param_2 + 4);
    do {
      bVar1 = *pbVar5;
      bVar12 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10be84b1:
        uVar3 = -(uint)bVar12 | 1;
        goto LAB_10be84b6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar12 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10be84b1;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_10be84b6:
    if (uVar3 == 0) {
      iVar8 = *(int *)(param_2 + 0x24);
      iVar9 = 1;
      if (iVar8 != 0) {
        iVar9 = iVar8 + 1;
        puVar11 = (undefined4 *)(param_2 + 0xc6);
        do {
          CInfoRecord__GetModelString(puVar11 + -8);
          switch(*(undefined2 *)((int)puVar11 + -0x22)) {
          case 0:
            (**(code **)(*piVar2 + 0x70))(local_8,*puVar11);
            break;
          case 2:
            FUN_113168d0(puVar11);
            (**(code **)(*piVar2 + 0x78))(local_8,uStack_c);
            break;
          case 3:
            (**(code **)(*piVar2 + 0x7c))(local_8,*puVar11,puVar11[1],puVar11[2]);
            break;
          case 4:
            (**(code **)(*piVar2 + 0x74))(local_8,*puVar11);
          }
          piVar10 = (int *)(local_8 + -0xc);
          if ((-1 < *piVar10) && (iVar4 = FUN_10c3dad0(piVar10), iVar4 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(local_8 + -4));
            FUN_10c3d900(piVar10);
          }
          puVar11 = (undefined4 *)((int)puVar11 + 0xa2);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 4) + 4))();
  if (((piVar2 != (int *)0x0) &&
      (piVar2 = (int *)(**(code **)(*piVar2 + 0x1b8))(0), piVar2 != (int *)0x0)) &&
     (piVar2 = (int *)(**(code **)(*piVar2 + 0x58))(), piVar2 != (int *)0x0)) {
    iVar9 = iVar9 * 0xa2;
    pcVar7 = "Attach";
    pbVar5 = (byte *)(param_2 + 4 + iVar9);
    do {
      bVar1 = *pbVar5;
      bVar12 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10be85f2:
        uVar3 = -(uint)bVar12 | 1;
        goto LAB_10be85f7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar12 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10be85f2;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_10be85f7:
    if (uVar3 == 0) {
      (**(code **)(*piVar2 + 0x50))
                (*(undefined4 *)(iVar9 + 0x24 + param_2),*(undefined4 *)(iVar9 + 0x28 + param_2));
    }
  }
  return 0;
}


// ===== FUN_10d034b0@10d034b0 =====

/* [RE-AUTO c0] */

void FUN_10d034b0(int *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined2 *local_28;
  undefined2 *local_24;
  int local_20;
  uint uStack_1c;
  undefined4 local_18;
  undefined1 auStack_10 [4];
  int local_c;
  char local_5;
  
  iVar7 = param_1[1] - *param_1 >> 2;
  if (*param_1 != param_1[1]) {
    local_5 = '\0';
    local_20 = iVar7;
    FUN_11316910();
    FUN_100e49c0();
    local_24 = local_28;
    *local_28 = 0x295;
    uVar2 = FUN_11317f30();
    FUN_100ebf60(local_28 + 10,0x20,uVar2);
    iVar5 = 0;
    *(undefined1 *)(local_28 + 0x1a) = 0;
    iVar6 = 0;
    *(uint *)(local_28 + 8) = param_2;
    local_c = 0;
    if (0 < iVar7) {
      puVar8 = (uint *)((int)local_28 + 0x59);
      do {
        local_28 = local_24;
        if (0xf < iVar5) break;
        iVar7 = *(int *)(*param_1 + iVar6 * 4);
        if (*(char *)(iVar7 + 9) == '\0') goto LAB_10d036bd;
        local_18 = *(undefined4 *)(iVar7 + 4);
        uVar2 = FUN_11317f30();
        FUN_100ebf60(puVar8 + -8,0x20,uVar2);
        iVar3 = FUN_10cf1c50();
        iVar5 = local_c;
        if (iVar3 == 0) goto LAB_10d036bd;
        switch(*(undefined4 *)(iVar3 + 0xc)) {
        case 0:
          FUN_10d037a0(&uStack_38);
          uVar1 = 3;
          *puVar8 = uStack_38;
          puVar8[1] = uStack_34;
          puVar8[2] = uStack_30;
          break;
        case 1:
          FUN_11316910();
          FUN_10d037d0(auStack_10);
          uVar2 = FUN_11317f30();
          FUN_104ef1c0(puVar8,uVar2);
          uVar1 = 2;
          break;
        case 2:
          param_2 = 0;
          FUN_10d03770(&param_2);
          uVar1 = 4;
          *puVar8 = param_2;
          break;
        case 3:
          param_2 = param_2 & 0xffffff;
          FUN_10d03800((int)&param_2 + 3);
          uVar4 = (uint)(param_2._3_1_ != '\0');
          goto LAB_10d03689;
        case 4:
        case 6:
          param_2 = 0;
          FUN_10d03740(&param_2);
          uStack_1c = param_2;
          iVar5 = (**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))(param_2);
          if (iVar5 == 0) {
            *puVar8 = param_2;
            uVar1 = 0;
          }
          else {
            uVar4 = (**(code **)(**(int **)m_pThis_exref + 700))(uStack_1c);
            *puVar8 = uVar4;
            uVar1 = 0;
          }
          break;
        case 5:
          param_2 = 0;
          FUN_10d03710(&param_2);
          uVar4 = param_2;
LAB_10d03689:
          *puVar8 = uVar4;
          uVar1 = 1;
          break;
        default:
          goto LAB_10d03694;
        }
        *(undefined2 *)((int)puVar8 + -0x22) = uVar1;
LAB_10d03694:
        puVar8 = (uint *)((int)puVar8 + 0xa2);
        iVar5 = local_c + 1;
        *(undefined1 *)(iVar7 + 9) = 0;
        local_c = iVar5;
        if (local_5 == '\0') {
          local_5 = '\x01';
        }
LAB_10d036bd:
        iVar6 = iVar6 + 1;
        local_28 = local_24;
      } while (iVar6 < local_20);
    }
    *(short *)((int)local_28 + 0x35) = (short)iVar5;
    if (0 < iVar5) {
      (**(code **)(**(int **)m_pThis_exref + 0x254))(local_28);
    }
    FUN_100e4a80();
  }
  return;
}


// ===== FUN_1101b060@1101b060 =====

/* [RE-AUTO c0]
   calls: strcpy_s, memset */

void __fastcall FUN_1101b060(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined2 *local_18;
  int local_10;
  uint local_c;
  
  iVar4 = 0;
  FUN_100e49c0();
  *local_18 = 0x294;
  uVar2 = (**(code **)(**(int **)m_pThis_exref + 700))(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(local_18 + 8) = uVar2;
  iVar3 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0xa8 + iVar1 != iVar1) {
    local_10 = 0;
    do {
      pcVar5 = (char *)(*(int *)(param_1 + 0x14) + local_10);
      if (*pcVar5 != '\0') {
        strcpy_s((char *)(local_18 + iVar4 * 0x51 + 0xc),0x20,pcVar5 + 1);
        switch(*(undefined4 *)(pcVar5 + 0x24)) {
        case 2:
          local_18[iVar4 * 0x51 + 0xb] = 5;
          *(char *)(local_18 + iVar4 * 0x51 + 0x1c) = pcVar5[0x28];
          break;
        default:
          goto LAB_1101b178;
        case 4:
          local_18[iVar4 * 0x51 + 0xb] = 4;
          *(undefined4 *)(local_18 + iVar4 * 0x51 + 0x1c) = *(undefined4 *)(pcVar5 + 0x28);
          break;
        case 5:
          local_18[iVar4 * 0x51 + 0xb] = 2;
          strcpy_s((char *)(local_18 + iVar4 * 0x51 + 0x1c),0x80,pcVar5 + 0x28);
          break;
        case 9:
          local_18[iVar4 * 0x51 + 0xb] = 3;
          *(undefined4 *)(local_18 + iVar4 * 0x51 + 0x1c) = *(undefined4 *)(pcVar5 + 0x28);
          *(undefined4 *)(local_18 + iVar4 * 0x51 + 0x1e) = *(undefined4 *)(pcVar5 + 0x2c);
          *(undefined4 *)(local_18 + iVar4 * 0x51 + 0x20) = *(undefined4 *)(pcVar5 + 0x30);
        }
        iVar4 = iVar4 + 1;
LAB_1101b178:
        if (0xf < iVar4) {
          local_18[10] = 0x10;
          (**(code **)(**(int **)m_pThis_exref + 0x254))(local_18);
          iVar4 = 0;
          memset(local_18,0,0xa6d9e);
        }
      }
      local_10 = local_10 + 0xa8;
      local_c = local_c + 1;
    } while (local_c < (uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0xa8));
    if (0 < iVar4) {
      local_18[10] = (short)iVar4;
      (**(code **)(**(int **)m_pThis_exref + 0x254))(local_18);
    }
  }
  FUN_100e4a80();
  return;
}


// ===== FUN_11289aa0@11289aa0 =====

/* [RE-AUTO c0]
   calls: strncpy */

void __thiscall FUN_11289aa0(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_115430c0(param_2);
  pcVar6 = (char *)(param_2 + 300);
  pcVar4 = pcVar6;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_100d83d0(pcVar6,pcVar6 + ((int)pcVar4 - (param_2 + 0x12d)));
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xe2);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xe6);
  *(int *)(param_1 + 0xe0) = (int)*(short *)(param_2 + 0x12a);
  iVar5 = (int)*(short *)(param_2 + 0x14c);
  local_c = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_10bc8c40(iVar5,&local_2c);
  pcVar6 = (char *)(param_2 + 0xea);
  pcVar4 = pcVar6;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_100d83d0(pcVar6,pcVar6 + ((int)pcVar4 - (param_2 + 0xeb)));
  (**(code **)(**(int **)(param_1 + 0x10) + 4))(param_2 + 0xb70,*(undefined2 *)(param_2 + 0xb6e));
  if (0 < iVar5) {
    pcVar6 = (char *)(param_2 + 0x170);
    do {
      strncpy((char *)((int)&local_2c + 2),pcVar6 + -0x20,0x10);
      switch(*(undefined2 *)(pcVar6 + -0x22)) {
      case 0:
        uVar3 = 0;
        goto code_r0x11289c11;
      case 1:
        uVar3 = 1;
        goto code_r0x11289c11;
      case 2:
        local_2c = CONCAT22(local_2c._2_2_,2);
        strncpy((char *)&uStack_18,pcVar6,0x10);
        break;
      case 3:
        uStack_18 = *(undefined4 *)pcVar6;
        uStack_14 = *(undefined4 *)(pcVar6 + 4);
        local_2c = CONCAT22(local_2c._2_2_,3);
        uStack_10 = *(undefined4 *)(pcVar6 + 8);
        break;
      case 4:
        uStack_18 = *(undefined4 *)pcVar6;
        local_2c = CONCAT22(local_2c._2_2_,4);
        break;
      case 5:
        uVar3 = 5;
code_r0x11289c11:
        local_2c = CONCAT22(local_2c._2_2_,uVar3);
        uStack_18 = *(undefined4 *)pcVar6;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x198);
      if (puVar2 == *(undefined4 **)(param_1 + 0x19c)) {
        FUN_10bc88a0(puVar2,&local_2c,&local_2d,1,1);
      }
      else {
        *puVar2 = local_2c;
        puVar2[1] = uStack_28;
        puVar2[2] = uStack_24;
        puVar2[3] = uStack_20;
        puVar2[4] = local_1c;
        puVar2[5] = uStack_18;
        puVar2[6] = uStack_14;
        puVar2[7] = uStack_10;
        puVar2[8] = local_c;
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 0x24;
      }
      pcVar6 = pcVar6 + 0xa2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_11a89daa();
  return;
}


// ===== FUN_1128c4e0@1128c4e0 =====

/* [RE-AUTO c0]
   calls: strncpy */

void __thiscall FUN_1128c4e0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *_Source;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar4 = (int)*(short *)(param_2 + 4);
  if (0 < iVar4) {
    _Source = (char *)(param_2 + 0x28);
    do {
      strncpy((char *)((int)&local_ac + 2),_Source + -0x20,0x20);
      switch(*(undefined2 *)(_Source + -0x22)) {
      case 2:
        local_ac._0_2_ = 1;
        strncpy((char *)&uStack_88,_Source,0x80);
        goto LAB_1128c5ba;
      case 3:
        local_ac._0_2_ = 3;
        uStack_88 = *(undefined4 *)_Source;
        uStack_84 = *(undefined4 *)(_Source + 4);
        uStack_80 = *(undefined4 *)(_Source + 8);
        break;
      case 4:
        local_ac._0_2_ = 0;
        uStack_88 = *(undefined4 *)_Source;
        break;
      case 5:
        local_ac._0_2_ = 2;
        uStack_88 = CONCAT31(uStack_88._1_3_,*_Source != '\0');
        break;
      default:
        goto LAB_1128c5ba;
      }
LAB_1128c5ba:
      puVar5 = (undefined4 *)param_1[0x65];
      if (puVar5 == (undefined4 *)param_1[0x66]) {
        FUN_1128cd40(puVar5,&local_ac,&local_ad,1,1);
      }
      else {
        puVar3 = &local_ac;
        for (iVar2 = 0x29; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        param_1[0x65] = param_1[0x65] + 0xa4;
      }
      _Source = _Source + 0xa2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0xd8))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb0))();
  }
  FUN_11a89daa();
  return;
}


// ===== FUN_1128c740@1128c740 =====

/* [RE-AUTO c0]
   calls: memset, strncpy */

void __thiscall FUN_1128c740(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  undefined1 local_b9;
  int local_b8;
  undefined4 local_b4;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  char local_10;
  char local_f;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_b8 = param_1;
  FUN_115430c0(param_2);
  pcVar4 = (char *)(param_2 + 300);
  pcVar3 = pcVar4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_100d83d0(pcVar4,pcVar4 + ((int)pcVar3 - (param_2 + 0x12d)));
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xe2);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xe6);
  *(int *)(param_1 + 0xe0) = (int)*(short *)(param_2 + 0x12a);
  iVar6 = (int)*(short *)(param_2 + 0x14c);
  local_c0 = iVar6;
  memset(&local_b4,0,0xa4);
  param_1 = param_1 + 400;
  FUN_1128d120(iVar6,&local_b4);
  pcVar4 = (char *)(param_2 + 0xea);
  local_c4 = param_2 + 0xeb;
  pcVar3 = pcVar4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_100d83d0(pcVar4,pcVar4 + ((int)pcVar3 - local_c4));
  (**(code **)(**(int **)(local_b8 + 0x10) + 4))(param_2 + 0xb70,*(undefined2 *)(param_2 + 0xb6e));
  FUN_1015f890();
  local_c8 = 0;
  iVar2 = FUN_1015fa80(param_2 + 0x7e,*(undefined4 *)(param_2 + 0x7a),&local_c8);
  if ((iVar2 == 0) || (*(int *)(param_2 + 0x7a) < 1)) {
    *(bool *)(local_b8 + 0x1a0) = local_f != '\0';
    *(bool *)(local_b8 + 0x1a1) = local_10 != '\0';
  }
  if (0 < iVar6) {
    pcVar4 = (char *)(param_2 + 0x170);
    do {
      strncpy((char *)((int)&local_b4 + 2),pcVar4 + -0x20,0x20);
      switch(*(undefined2 *)(pcVar4 + -0x22)) {
      case 2:
        local_b4._0_2_ = 1;
        strncpy((char *)&uStack_90,pcVar4,0x80);
        goto LAB_1128c944;
      case 3:
        local_b4._0_2_ = 3;
        uStack_90 = *(undefined4 *)pcVar4;
        uStack_8c = *(undefined4 *)(pcVar4 + 4);
        uStack_88 = *(undefined4 *)(pcVar4 + 8);
        break;
      case 4:
        local_b4._0_2_ = 0;
        uStack_90 = *(undefined4 *)pcVar4;
        break;
      case 5:
        local_b4._0_2_ = 2;
        uStack_90 = CONCAT31(uStack_90._1_3_,*pcVar4 != '\0');
        break;
      default:
        goto LAB_1128c944;
      }
LAB_1128c944:
      puVar7 = *(undefined4 **)(param_1 + 4);
      if (puVar7 == *(undefined4 **)(param_1 + 8)) {
        FUN_1128cd40(puVar7,&local_b4,&local_b9,1,1);
      }
      else {
        puVar5 = &local_b4;
        for (iVar6 = 0x29; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        param_1 = local_b8 + 400;
        *(int *)(local_b8 + 0x194) = *(int *)(local_b8 + 0x194) + 0xa4;
        iVar6 = local_c0;
      }
      pcVar4 = pcVar4 + 0xa2;
      iVar6 = iVar6 + -1;
      local_c0 = iVar6;
    } while (iVar6 != 0);
  }
  FUN_11a89daa();
  return;
}


// ===== FUN_1129f8b0@1129f8b0 =====

/* [RE-AUTO c0] */

void __thiscall FUN_1129f8b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  iVar2 = FUN_11248970();
  if ((iVar2 != 0) && (iVar2 = FUN_11248970(), *(int *)(iVar2 + 0x90) != 0)) {
    iVar2 = FUN_11248970();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x90) + 0xb4))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x90) + 0xb4))();
      iVar2 = *(int *)(iVar2 + 4);
      goto LAB_1129f904;
    }
  }
  iVar2 = 0;
LAB_1129f904:
  if (iVar2 == *(int *)((int)param_4 + 0x42eb)) {
    iVar2 = param_1 + 8;
    piVar3 = (int *)FUN_111e09f0();
    local_20 = (**(code **)(*piVar3 + 0x14))(*param_4);
    if (local_20 == 0) {
      local_1c = *(int *)((int)param_4 + 0x42ef) == 1;
      local_18 = local_20;
      local_20 = FUN_111e0990();
      local_18 = *(undefined4 *)((int)param_4 + 0x42f3);
      piVar3 = (int *)FUN_111e09f0();
      local_44 = *param_4;
      local_38 = &local_20;
      local_3c = *(undefined4 *)(param_1 + 0xc);
      local_48 = 1;
      local_40 = 1;
      local_30 = 0;
      local_28 = 0xffffffff;
      piVar3 = (int *)(**(code **)(*piVar3 + 0xc))(&local_48);
      if (piVar3 != (int *)0x0) {
        iVar4 = FUN_107d7df0(*(undefined4 *)((int)param_4 + 6));
        if (iVar4 == 0) {
          iVar4 = FUN_116812d0();
        }
        FUN_113a3da0(iVar4);
        FUN_113a6f80(piVar3[3]);
        FUN_113a3720(param_4);
        iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(piVar3);
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_111e09f0();
          (**(code **)(*piVar5 + 0x1c))(piVar3[1],0);
          return;
        }
        iVar4 = FUN_11442f40();
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_11442f40();
          (**(code **)(*piVar5 + 0x10c))((int)param_4 + 0x92,0xa22);
          piVar5 = (int *)FUN_11442f40();
          (**(code **)(*piVar5 + 0x114))((int)param_4 + 0xab5);
        }
        iVar4 = piVar3[1];
        iVar6 = FUN_111e0990();
        *(int *)(iVar6 + 0x2d88) = iVar4;
        piVar5 = (int *)FUN_111e0990();
        (**(code **)(*piVar5 + 0x41c))();
        cVar1 = (**(code **)(*piVar3 + 0x1c4))();
        if (cVar1 != '\0') {
          if (piVar3 + -2 != (int *)0x0) {
            iVar2 = (**(code **)(piVar3[-2] + 0x14))();
          }
          local_8 = 1;
          local_c = iVar2;
          FUN_11290a20(&local_c);
          local_14 = *param_4;
          local_10 = 1;
          FUN_112908e0(&local_14);
        }
      }
    }
  }
  return;
}


// ===== CMonsterInfo::SpawnMonstersFromList@112a2e10 =====

/* [RE-R1]
   id: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo"" */

void __thiscall
CMonsterInfo__SpawnMonstersFromList(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined **local_c;
  int local_8;
  
  local_8 = param_1;
  FUN_1128e900();
  local_14 = 0;
  if (*param_4 < 1) {
    return;
  }
  local_10 = param_1 + 8;
  piVar6 = param_4 + 1;
  do {
    piVar2 = (int *)FUN_111e09f0();
    iVar3 = (**(code **)(*piVar2 + 0x14))(*piVar6);
    if (iVar3 == 0) {
      piVar2 = (int *)FUN_111e09f0();
      iVar3 = (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0xc),1,*piVar6,0xffffffff);
      param_1 = local_8;
      local_18 = iVar3;
      if (iVar3 != 0) {
        iVar4 = FUN_1140dd10();
        if ((iVar4 == 0x13) && (iVar4 = FUN_1140dd10(), iVar4 == 0x14)) {
          local_20 = *piVar6;
          local_1c = 0;
          iVar4 = GetClientMessageChannel();
          if (iVar4 != 0) {
            piVar2 = (int *)GetClientMessageChannel();
            (**(code **)(*piVar2 + 4))(0x1e4,&local_20);
          }
        }
        iVar4 = *(int *)((int)piVar6 + 6);
        local_c = &PTR_FUN_11dc8ee8;
        if ((DAT_123bee5c & 1) == 0) {
          DAT_123bee5c = DAT_123bee5c | 1;
          StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CMonsterInfo::GetManagers");
          FUN_11a8911f(&LAB_11c70e30);
        }
        puVar5 = (undefined4 *)*DAT_123bee60;
        if ((puVar5 == (undefined4 *)0x0) &&
           (puVar5 = (undefined4 *)CInfoManager__FindByName(&local_c,"CMonsterInfo",0),
           puVar5 == (undefined4 *)0x0)) {
          if ((DAT_123bedd4 & 1) == 0) {
            DAT_123bedd4 = DAT_123bedd4 | 1;
            CMonsterInfo__InitInfoManager();
            FUN_11a8911f(&LAB_11c99700);
          }
          puVar5 = &DAT_123bedd8;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar4 == -1) ||
           ((((iVar4 == 0 && (puVar5[0xc] != 0)) || (puVar5[10] == 0)) ||
            ((iVar4 = iVar4 - puVar5[0xc], iVar4 < 0 || ((int)puVar5[9] <= iVar4)))))) {
LAB_112a2f89:
          iVar4 = FUN_116812d0();
        }
        else {
          iVar1 = *(int *)(puVar5[8] + (iVar4 / (int)puVar5[10]) * 4);
          if ((iVar1 == 0) || (iVar4 = *(int *)(iVar1 + (iVar4 % (int)puVar5[10]) * 4), iVar4 == 0))
          goto LAB_112a2f89;
        }
        FUN_113a3da0(iVar4);
        FUN_113a6f80(*(undefined4 *)(iVar3 + 0xc));
        FUN_113a3720(piVar6);
        iVar4 = (**(code **)(**(int **)(local_8 + 0xc) + 0x18))(iVar3);
        if (iVar4 != 0) {
          piVar6 = (int *)FUN_111e09f0();
          (**(code **)(*piVar6 + 0x1c))(*(undefined4 *)(iVar3 + 4),0);
          return;
        }
        local_c = *(undefined ***)(iVar3 + 0x18);
        if ((local_c != (undefined **)0x0) && (iVar3 = 0, 0 < *(int *)((int)piVar6 + 0x1a39))) {
          puVar5 = (undefined4 *)((int)piVar6 + 0x1a3d);
          do {
            (**(code **)(*local_c + 0x3c))(*puVar5);
            puVar5 = puVar5 + 2;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)piVar6 + 0x1a39));
        }
        iVar3 = FUN_11442f40();
        param_1 = local_8;
        if (iVar3 != 0) {
          piVar2 = (int *)FUN_11442f40();
          (**(code **)(*piVar2 + 0x10c))((int)piVar6 + 0x92,0xa22);
          piVar2 = (int *)FUN_11442f40();
          (**(code **)(*piVar2 + 0x114))((int)piVar6 + 0xab5);
          param_1 = local_8;
        }
      }
    }
    piVar6 = (int *)((int)piVar6 + 0x42eb);
    local_14 = local_14 + 1;
    if (*param_4 <= local_14) {
      return;
    }
  } while( true );
}

