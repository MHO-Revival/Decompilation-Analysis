
/* [RE-R1]
   calls: _strlwr
   strings:
     ""Sequence""
     ""DisablePhy""
     ""DisableColWithWall""
     ""EnableMoveSplineScale""
     ""IsLoop""
     ""Layer""
     ""SkillID""
     ""CatchUpDist""
     ""NextSequences""
     ""AnimationNode"" */

undefined1 __thiscall CSkillSequence__LoadFromXmlNode(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 uVar13;
  uint uVar14;
  int *piVar15;
  bool bVar16;
  char local_d0 [128];
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined1 local_24 [4];
  int *local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  undefined1 local_e;
  int *local_c;
  char local_5;
  
  local_20 = (int *)0x0;
  local_1c = param_1;
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x20))();
  pcVar12 = "Sequence";
  do {
    bVar3 = *pbVar5;
    bVar16 = bVar3 < (byte)*pcVar12;
    if (bVar3 != *pcVar12) {
LAB_11065db5:
      uVar6 = -(uint)bVar16 | 1;
      goto LAB_11065dba;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar5[1];
    bVar16 = bVar3 < (byte)pcVar12[1];
    if (bVar3 != pcVar12[1]) goto LAB_11065db5;
    pbVar5 = pbVar5 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar3 != 0);
  uVar6 = 0;
LAB_11065dba:
  if ((uVar6 != 0) || (iVar7 = (**(code **)(*param_2 + 0x7c))(&DAT_11da7300), iVar7 == 0)) {
    uVar13 = 0;
    goto LAB_11066d1d;
  }
  FUN_100ebf60(local_d0,0x80,iVar7);
  pcVar12 = _strlwr(local_d0);
  FUN_11316b10(pcVar12);
  (**(code **)(*param_2 + 0x70))(&DAT_11dbabc0,param_1 + 8);
  local_5 = '\0';
  (**(code **)(*param_2 + 0x50))("DisablePhy",&local_5);
  bVar3 = local_5 << 3;
  local_5 = '\0';
  *(byte *)(param_1 + 0x116) = *(byte *)(param_1 + 0x116) ^ (bVar3 ^ *(byte *)(param_1 + 0x116)) & 8
  ;
  (**(code **)(*param_2 + 0x50))("DisableColWithWall",&local_5);
  bVar3 = local_5 << 4;
  local_5 = '\0';
  *(byte *)(param_1 + 0x116) =
       *(byte *)(param_1 + 0x116) ^ (bVar3 ^ *(byte *)(param_1 + 0x116)) & 0x10;
  (**(code **)(*param_2 + 0x50))("EnableMoveSplineScale",&local_5);
  bVar3 = local_5 << 2;
  local_5 = '\0';
  *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) ^ (bVar3 ^ *(byte *)(param_1 + 0x117)) & 4
  ;
  (**(code **)(*param_2 + 0x50))("IsLoop",&local_5);
  *(byte *)(param_1 + 0x116) =
       *(byte *)(param_1 + 0x116) ^ (local_5 << 6 ^ *(byte *)(param_1 + 0x116)) & 0x40;
  cVar4 = (**(code **)(*param_2 + 0x70))("Layer",&local_14);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0x114) = (undefined1)local_14;
  }
  (**(code **)(*param_2 + 0x74))("SkillID",param_1 + 0x80);
  local_5 = '\0';
  (**(code **)(*param_2 + 0x50))("CatchUpDist",&local_5);
  *(byte *)(param_1 + 0x116) =
       *(byte *)(param_1 + 0x116) ^ (local_5 << 5 ^ *(byte *)(param_1 + 0x116)) & 0x20;
  (**(code **)(*param_2 + 0xac))(&local_50,"NextSequences");
  if (local_50 != (int *)0x0) {
    uVar6 = (**(code **)(*local_50 + 0xa0))();
    uVar14 = 0;
    if (uVar6 != 0) {
      do {
        (**(code **)(*local_50 + 0xa8))(&local_18,uVar14);
        iVar7 = (**(code **)(*local_18 + 0x7c))(&DAT_11da7300);
        if (iVar7 != 0) {
          FUN_100ebf60(local_d0,0x80,iVar7);
          pcVar12 = _strlwr(local_d0);
          FUN_113168d0(pcVar12);
          FUN_1106c030(local_24,&local_14);
        }
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 4))();
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar6);
    }
  }
  (**(code **)(*param_2 + 0xac))(&local_28,"AnimationNode");
  if (local_28 == (int *)0x0) {
LAB_110660e4:
    uVar13 = 0;
  }
  else {
    local_14 = (**(code **)(*local_28 + 0xa0))();
    local_e = 0;
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    uVar6 = 0;
    if (local_14 != 0) {
      do {
        (**(code **)(*local_28 + 0xa8))(&local_c,uVar6);
        if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x5c);
        }
        local_e = 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_14);
      goto LAB_110660e4;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    (**(code **)(*param_2 + 0xac))(&local_40,"SoundEvent");
    if ((local_40 != (int *)0x0) &&
       (local_18 = (int *)(**(code **)(*local_40 + 0xa0))(), local_18 != (int *)0x0)) {
      piVar15 = (int *)0x0;
      do {
        (**(code **)(*local_40 + 0xa8))(&local_c,piVar15);
        if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x60);
        }
        piVar15 = (int *)((int)piVar15 + 1);
      } while (piVar15 < local_18);
    }
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    (**(code **)(*param_2 + 0xac))(&local_48,"EffectEvent");
    if (local_48 != (int *)0x0) {
      local_18 = (int *)(**(code **)(*local_48 + 0xa0))();
      piVar15 = (int *)0x0;
      if (local_18 != (int *)0x0) {
        do {
          (**(code **)(*local_48 + 0xa8))(&local_c,piVar15);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x50);
          }
          piVar15 = (int *)((int)piVar15 + 1);
        } while (piVar15 < local_18);
      }
    }
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    (**(code **)(*param_2 + 0xac))(&local_38,"PhysicEvent");
    if (local_38 != (int *)0x0) {
      local_18 = (int *)(**(code **)(*local_38 + 0xa0))();
      piVar15 = (int *)0x0;
      if (local_18 != (int *)0x0) {
        do {
          (**(code **)(*local_38 + 0xa8))(&local_c,piVar15);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x30);
          }
          piVar15 = (int *)((int)piVar15 + 1);
        } while (piVar15 < local_18);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_4c,"TriggerEvent");
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if (local_4c != (int *)0x0) {
      local_2c = (int *)(**(code **)(*local_4c + 0xa0))();
      local_18 = (int *)0x0;
      if (local_2c != (int *)0x0) {
        do {
          (**(code **)(*local_4c + 0xa8))(&local_c,local_18);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x30);
          }
          local_18 = (int *)((int)local_18 + 1);
        } while (local_18 < local_2c);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_30,&DAT_11cc19cc);
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if (local_30 != (int *)0x0) {
      local_20 = (int *)(**(code **)(*local_30 + 0xa0))();
      local_18 = (int *)0x0;
      if (local_20 != (int *)0x0) {
        do {
          (**(code **)(*local_30 + 0xa8))(&local_c,local_18);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x20);
          }
          local_18 = (int *)((int)local_18 + 1);
        } while (local_18 < local_20);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_3c,"AttachmentEvent");
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if (local_3c != (int *)0x0) {
      local_20 = (int *)(**(code **)(*local_3c + 0xa0))();
      piVar15 = (int *)0x0;
      if (local_20 != (int *)0x0) {
        do {
          (**(code **)(*local_3c + 0xa8))(&local_c,piVar15);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x24);
          }
          piVar15 = (int *)((int)piVar15 + 1);
        } while (piVar15 < local_20);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_34,"SkillEvent");
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if (local_34 != (int *)0x0) {
      local_20 = (int *)(**(code **)(*local_34 + 0xa0))();
      piVar15 = (int *)0x0;
      if (local_20 != (int *)0x0) {
        do {
          (**(code **)(*local_34 + 0xa8))(&local_c,piVar15);
          if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10c3d580(0x1c);
          }
          piVar15 = (int *)((int)piVar15 + 1);
        } while (piVar15 < local_20);
      }
    }
    (**(code **)(*param_2 + 0xac))(&local_44,"SkillRotateEvent");
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0xc);
    }
    if ((local_44 != (int *)0x0) &&
       (local_20 = (int *)(**(code **)(*local_44 + 0xa0))(), local_20 != (int *)0x0)) {
      piVar15 = (int *)0x0;
      do {
        (**(code **)(*local_44 + 0xa8))(&local_c,piVar15);
        if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10c3d580(0x30);
        }
        piVar15 = (int *)((int)piVar15 + 1);
      } while (piVar15 < local_20);
    }
    piVar15 = *(int **)(param_1 + 0x38);
    if (piVar15 != (int *)0x0) {
      piVar1 = (int *)piVar15[1];
      piVar15 = (int *)*piVar15;
      local_18 = (int *)((uint)local_18 & 0xffffff00);
      local_2c = piVar1;
      if (piVar15 != piVar1) {
        iVar7 = 0;
        local_20 = (int *)((int)piVar1 - (int)piVar15 >> 2);
        for (piVar8 = local_20; piVar8 != (int *)0x1; piVar8 = (int *)((int)piVar8 >> 1)) {
          iVar7 = iVar7 + 1;
        }
        FUN_11069c20(piVar15,piVar1,0,iVar7 * 2,local_18);
        if ((int)local_20 < 0x11) {
          FUN_11069b80(piVar15,piVar1,0,local_18);
        }
        else {
          local_c = piVar15 + 0x10;
          FUN_11069b80(piVar15,local_c,0,local_18);
          if (local_c != piVar1) {
            do {
              iVar7 = *local_c;
              piVar15 = local_c;
              while( true ) {
                iVar2 = piVar15[-1];
                if (((iVar7 != 0) && (iVar2 != 0)) &&
                   (*(float *)(iVar2 + 4) < *(float *)(iVar7 + 4) ||
                    *(float *)(iVar2 + 4) == *(float *)(iVar7 + 4))) break;
                *piVar15 = iVar2;
                piVar15 = piVar15 + -1;
              }
              local_c = local_c + 1;
              *piVar15 = iVar7;
            } while (local_c != local_2c);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_10c3d580(0x30);
    }
    uVar9 = FUN_11317f30();
    uVar10 = FUN_11317f30();
    FUN_11070f80(uVar9,uVar10);
    puVar11 = (undefined4 *)FUN_11071600();
    if (puVar11 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x78) = *puVar11;
      *(undefined4 *)(param_1 + 0x7c) = puVar11[1];
    }
    uVar13 = 1;
    if (local_44 != (int *)0x0) {
      (**(code **)(*local_44 + 4))();
    }
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 4))();
    }
    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 4))();
    }
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 4))();
    }
    if (local_4c != (int *)0x0) {
      (**(code **)(*local_4c + 4))();
    }
    if (local_38 != (int *)0x0) {
      (**(code **)(*local_38 + 4))();
    }
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 4))();
    }
    if (local_40 != (int *)0x0) {
      (**(code **)(*local_40 + 4))();
    }
  }
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 4))();
  }
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 4))();
  }
LAB_11066d1d:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return uVar13;
}

