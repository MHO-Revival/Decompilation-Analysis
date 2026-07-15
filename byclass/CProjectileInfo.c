// ===== class CProjectileInfo  (4 recovered methods) =====

/* --- CProjectileInfo::GetManagers @ 10cef470 --- */
// [RE-AUTO c3]
// id: CProjectileInfo::GetManagers
// strings:
//   ""CProjectileInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileInfo::GetManagers
   strings:
     ""CProjectileInfo::GetManagers"" */

undefined4 * CProjectileInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11ce0b94;
  if (param_3 == 0) {
    if ((DAT_1202f624 & 1) == 0) {
      DAT_1202f624 = DAT_1202f624 | 1;
      FUN_102500e0("CProjectileInfo::GetManagers");
      FUN_11a8911f(&LAB_11c88430);
    }
    if ((undefined4 *)*DAT_1202f608 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1202f608;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1202f670 & 1) == 0) {
      DAT_1202f670 = DAT_1202f670 | 1;
      FUN_10cefbd0();
      FUN_11a8911f(&LAB_11c883d0);
    }
    puVar1 = &DAT_1202f638;
  }
  return puVar1;
}



/* --- CProjectileInfo::GetManagers_10cf03d0 @ 10cf03d0 --- */
// [RE-AUTO c3]
// id: CProjectileInfo::GetManagers
// strings:
//   ""CProjectileInfo::GetManagers""

/* [RE-AUTO c3]
   id: CProjectileInfo::GetManagers
   strings:
     ""CProjectileInfo::GetManagers"" */

undefined4 CProjectileInfo__GetManagers_10cf03d0(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1202f624 & 1) == 0) {
      DAT_1202f624 = DAT_1202f624 | 1;
      FUN_102500e0("CProjectileInfo::GetManagers");
      FUN_11a8911f(&LAB_11c88430);
    }
    return *DAT_1202f608;
  }
  return 0;
}



/* --- CProjectileInfo::GetManagers_10dde4b0 @ 10dde4b0 --- */
// [RE-AUTO c3]
// id: CProjectileInfo::GetManagers
// calls: memcpy
// strings:
//   ""sfileModel""
//   ""AISetting""
//   ""sSkill""
//   ""sBlackBoardFile""
//   ""Scripts/AI/BehaviorTree/""
//   ""sequip_EquipmentPack""
//   ""HitPartSetting""
//   ""sHitPartInfo""
//   ""sPreloadFlyObjInfo""
//   ""CProjectileInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CProjectileInfo::GetManagers
   calls: memcpy
   strings:
     ""sfileModel""
     ""AISetting""
     ""sSkill""
     ""sBlackBoardFile""
     ""Scripts/AI/BehaviorTree/""
     ""sequip_EquipmentPack""
     ""HitPartSetting""
     ""sHitPartInfo""
     ""sPreloadFlyObjInfo""
     ""CProjectileInfo::GetManagers"" */

undefined4 __thiscall CProjectileInfo__GetManagers_10dde4b0(int param_1,char *param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint *puVar16;
  char *pcVar17;
  byte *pbVar18;
  size_t _Size;
  uint *_Dst;
  uint *puVar19;
  bool bVar20;
  int *local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined **local_20;
  undefined **local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  uint *local_c;
  undefined4 *local_8;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  local_10 = param_1;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x9c))();
  iVar5 = (**(code **)(*piVar4 + 8))(param_2);
  if (iVar5 == 0) {
    return 0;
  }
  pcVar17 = param_2;
  do {
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar1 != '\0');
  FUN_1083ab70(param_2,(int)pcVar17 - (int)(param_2 + 1));
  piVar4 = *(int **)(iVar5 + 0x1c);
  local_24 = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)*piVar4)();
  }
  pcVar17 = (char *)(**(code **)(*piVar4 + 0x7c))("sfileModel");
  if ((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) {
    if (param_3 == '\0') {
      FUN_110038f0(pcVar17);
    }
    else if ((*(int **)(DAT_1202e818 + 100) != (int *)0x0) &&
            (local_3c = (int *)(**(code **)(**(int **)(DAT_1202e818 + 100) + 0xc))(pcVar17,0,0,0,0),
            local_3c != (int *)0x0)) {
      (**(code **)(*local_3c + 4))();
      FUN_10b7f080(&local_3c);
    }
  }
  (**(code **)(*piVar4 + 0xac))(&local_18,"AISetting");
  if (local_18 != (int *)0x0) {
    iVar5 = (**(code **)(*local_18 + 0x7c))("sSkill");
    if (iVar5 != 0) {
      FUN_11070f80(iVar5);
      iVar5 = FUN_11071b90();
      if (iVar5 != 0) {
        FUN_110786f0(param_1 + 0x4c);
      }
    }
    pcVar17 = (char *)(**(code **)(*local_18 + 0x7c))("sBlackBoardFile");
    if ((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) {
      FUN_104f6c30("Scripts/AI/BehaviorTree/");
      FUN_10a4bfe0(param_2);
      FUN_10a4bfe0(&DAT_11d9dc6c);
      FUN_10a4bfe0(pcVar17);
      FUN_110038f0(local_14);
      FUN_104f6f60();
    }
    uVar6 = (**(code **)(*local_18 + 0x7c))("sequip_EquipmentPack");
    FUN_10ddeef0(uVar6);
  }
  (**(code **)(*piVar4 + 0xac))(&local_38,"HitPartSetting");
  if ((local_38 != (int *)0x0) &&
     (iVar5 = (**(code **)(*local_38 + 0x7c))("sHitPartInfo"), iVar5 != 0)) {
    FUN_11003730(0,iVar5);
  }
  if ((DAT_1202e170 & 1) == 0) {
    DAT_1202e170 = DAT_1202e170 | 1;
    DAT_1202e16c = &DAT_1202e168;
  }
  local_8 = DAT_1202e16c;
  uVar6 = (**(code **)(*piVar4 + 0x7c))("sPreloadFlyObjInfo");
  FUN_10de0560(uVar6,&local_8);
  puVar7 = local_8 + -1;
  local_30 = (int *)0x0;
  local_c = puVar7;
  if ((*puVar7 & 0x7fffffff) != 0) {
    do {
      local_1c = &PTR_FUN_11ce0b94;
      iVar5 = local_8[(int)local_30];
      if ((DAT_1202f624 & 1) == 0) {
        DAT_1202f624 = DAT_1202f624 | 1;
        FUN_102500e0("CProjectileInfo::GetManagers");
        FUN_11a8911f(&LAB_11c88430);
      }
      puVar8 = (undefined4 *)*DAT_1202f608;
      if ((puVar8 == (undefined4 *)0x0) &&
         (puVar8 = (undefined4 *)FUN_11679e10(&local_1c,"CProjectileInfo",0),
         puVar8 == (undefined4 *)0x0)) {
        if ((DAT_1202f670 & 1) == 0) {
          DAT_1202f670 = DAT_1202f670 | 1;
          FUN_10cefbd0();
          FUN_11a8911f(&LAB_11c8a510);
        }
        puVar8 = &DAT_1202f638;
      }
      local_1c = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (puVar8[0xc] == 0)) && (iVar3 = puVar8[10], iVar3 != 0)) &&
          ((iVar5 = iVar5 - puVar8[0xc], -1 < iVar5 && (iVar5 < (int)puVar8[9])))))) {
        iVar9 = *(int *)(puVar8[8] + (iVar5 / iVar3) * 4);
        if ((iVar9 != 0) && (iVar5 = *(int *)(iVar9 + (iVar5 % iVar3) * 4), iVar5 != 0)) {
          if (*(int *)(iVar5 + 0x134) != *(int *)(iVar5 + 0x130)) {
            FUN_104f6c30(*(int *)(iVar5 + 0x134));
            uVar6 = FUN_10bedf30(*(int *)(local_10 + 0x4c) +
                                 *(int *)(*(int *)(local_10 + 0x4c) + -4) * 4,1);
            FUN_10bee250(uVar6,1,&local_28);
            iVar3 = local_28;
            piVar4 = (int *)(local_28 + -0xc);
            if ((-1 < *piVar4) && (iVar9 = FUN_10c3dad0(piVar4), iVar9 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar3 + -4));
              FUN_10c3d900(piVar4);
            }
          }
          if (*(int *)(iVar5 + 0x168) != *(int *)(iVar5 + 0x164)) {
            FUN_104f6c30(*(int *)(iVar5 + 0x168));
            uVar6 = FUN_10bedf30(*(int *)(local_10 + 0x4c) +
                                 *(int *)(*(int *)(local_10 + 0x4c) + -4) * 4,1);
            FUN_10bee250(uVar6,1,&local_2c);
            iVar3 = local_2c;
            piVar4 = (int *)(local_2c + -0xc);
            if ((-1 < *piVar4) && (iVar9 = FUN_10c3dad0(piVar4), iVar9 < 1)) {
              DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar3 + -4));
              FUN_10c3d900(piVar4);
            }
          }
          if (*(int *)(iVar5 + 0x1c4) != *(int *)(iVar5 + 0x1c0)) {
            FUN_110038f0(*(int *)(iVar5 + 0x1c4));
          }
        }
      }
      local_30 = (int *)((int)local_30 + 1);
      piVar4 = local_24;
    } while ((int)local_30 < (int)(*puVar7 & 0x7fffffff));
  }
  if ((*(int **)(DAT_1202e818 + 4) != (int *)0x0) &&
     (iVar5 = (**(code **)(**(int **)(DAT_1202e818 + 4) + 0x70))(), iVar5 != 0)) {
    piVar10 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x70))();
    local_30 = piVar10;
    uVar6 = (**(code **)(*piVar4 + 0x7c))("spreloadeffects");
    uVar14 = *local_c;
    if ((int)uVar14 < 0) {
      if ((byte)local_c[uVar14 + 1] == 0) {
        uVar11 = *(uint *)((uint)(local_c + uVar14 + 2) & 0xfffffffc);
      }
      else {
        uVar11 = (uint)(byte)local_c[uVar14 + 1];
      }
      uVar14 = (uVar14 & 0x7fffffff) + uVar11;
    }
    if (uVar14 != 0) {
      FUN_10bee680(0,0,0);
    }
    FUN_10de0560(uVar6,&local_8);
    local_c = local_8 + -1;
    if ((local_8[-1] & 0x7fffffff) != 0) {
      iVar5 = 0;
      do {
        pbVar12 = (byte *)(**(code **)(*piVar10 + 0x1c))(local_8[iVar5]);
        pbVar18 = &DAT_11d9d32b;
        pbVar15 = pbVar12;
        do {
          bVar2 = *pbVar15;
          bVar20 = bVar2 < *pbVar18;
          if (bVar2 != *pbVar18) {
LAB_10dde990:
            uVar14 = -(uint)bVar20 | 1;
            goto LAB_10dde995;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar15[1];
          bVar20 = bVar2 < pbVar18[1];
          if (bVar2 != pbVar18[1]) goto LAB_10dde990;
          pbVar15 = pbVar15 + 2;
          pbVar18 = pbVar18 + 2;
        } while (bVar2 != 0);
        uVar14 = 0;
LAB_10dde995:
        if (uVar14 != 0) {
          FUN_104f6c30(pbVar12);
          uVar6 = FUN_10bedf30(*(int *)(local_10 + 0x4c) +
                               *(int *)(*(int *)(local_10 + 0x4c) + -4) * 4,1);
          FUN_10bee250(uVar6,1,&local_34);
          iVar3 = local_34;
          piVar4 = (int *)(local_34 + -0xc);
          if ((-1 < *piVar4) && (iVar9 = FUN_10c3dad0(piVar4), iVar9 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar3 + -4));
            FUN_10c3d900(piVar4);
          }
        }
        iVar5 = iVar5 + 1;
        piVar10 = local_30;
        piVar4 = local_24;
      } while (iVar5 < (int)(*local_c & 0x7fffffff));
    }
  }
  uVar14 = *local_c;
  if ((int)uVar14 < 0) {
    if ((byte)local_c[uVar14 + 1] == 0) {
      uVar11 = *(uint *)((uint)(local_c + (uVar14 & 0x7fffffff) + 2) & 0xfffffffc);
    }
    else {
      uVar11 = (uint)(byte)local_c[uVar14 + 1];
    }
    uVar14 = (uVar14 & 0x7fffffff) + uVar11;
  }
  if (uVar14 != 0) {
    FUN_10bee680(0,0,0);
  }
  uVar6 = (**(code **)(*piVar4 + 0x7c))("sPreloadMonsterInfo");
  FUN_10de0560(uVar6,&local_8);
  puVar7 = local_8 + -1;
  local_30 = (int *)0x0;
  if ((*puVar7 & 0x7fffffff) != 0) {
    do {
      local_20 = &PTR_FUN_11dc8ee8;
      iVar5 = local_8[(int)local_30];
      if ((DAT_123bee5c & 1) == 0) {
        DAT_123bee5c = DAT_123bee5c | 1;
        FUN_102500e0("CMonsterInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e30);
      }
      puVar8 = (undefined4 *)*DAT_123bee60;
      if ((puVar8 == (undefined4 *)0x0) &&
         (puVar8 = (undefined4 *)FUN_11679e10(&local_20,"CMonsterInfo",0),
         puVar8 == (undefined4 *)0x0)) {
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
          DAT_123bede0 = puVar8;
          _DAT_123bede4 = puVar8;
          _DAT_123bede8 = puVar8;
          FUN_11a8911f(&LAB_11c8a4b0);
        }
        puVar8 = &DAT_123bedd8;
      }
      local_20 = &PTR_FUN_11da54a8;
      if (((iVar5 != -1) &&
          (((iVar5 != 0 || (puVar8[0xc] == 0)) && (iVar3 = puVar8[10], iVar3 != 0)))) &&
         ((iVar5 = iVar5 - puVar8[0xc], -1 < iVar5 && (iVar5 < (int)puVar8[9])))) {
        iVar9 = *(int *)(puVar8[8] + (iVar5 / iVar3) * 4);
        if ((iVar9 != 0) &&
           ((iVar5 = *(int *)(iVar9 + (iVar5 % iVar3) * 4), iVar5 != 0 &&
            (pbVar15 = *(byte **)(iVar5 + 0x68), pbVar15 != (byte *)0x0)))) {
          iVar5 = 0;
          puVar8 = *(undefined4 **)(local_10 + 0x54);
          local_c = (uint *)(puVar8[-1] & 0x7fffffff);
          if (local_c != (uint *)0x0) {
            do {
              pbVar12 = (byte *)*puVar8;
              pbVar18 = pbVar15;
              do {
                bVar2 = *pbVar12;
                bVar20 = bVar2 < *pbVar18;
                if (bVar2 != *pbVar18) {
LAB_10ddebe7:
                  uVar14 = -(uint)bVar20 | 1;
                  goto LAB_10ddebec;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar12[1];
                bVar20 = bVar2 < pbVar18[1];
                if (bVar2 != pbVar18[1]) goto LAB_10ddebe7;
                pbVar12 = pbVar12 + 2;
                pbVar18 = pbVar18 + 2;
              } while (bVar2 != 0);
              uVar14 = 0;
LAB_10ddebec:
              if (uVar14 == 0) goto LAB_10dded86;
              iVar5 = iVar5 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar5 < (int)local_c);
          }
          local_c = (uint *)&DAT_1201fc98;
          pbVar12 = pbVar15;
          do {
            bVar2 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar2 != 0);
          _Size = (int)pbVar12 - (int)(pbVar15 + 1);
          _Dst = local_c;
          if (_Size != 0) {
            puVar8 = (undefined4 *)FUN_10c3d780(_Size + 0xd);
            DAT_123be268 = DAT_123be268 + _Size + 0xd;
            *puVar8 = 1;
            _Dst = puVar8 + 3;
            puVar8[1] = _Size;
            puVar8[2] = _Size;
            *(byte *)((int)_Dst + _Size) = 0;
            if (_Dst != (uint *)pbVar15) {
              local_c = _Dst;
              memcpy(_Dst,pbVar15,_Size);
            }
          }
          iVar5 = local_10;
          local_c = *(uint **)(local_10 + 0x54);
          puVar19 = (uint *)((int)local_c + *(uint *)((int)local_c + -4) * 4);
          uVar11 = *(uint *)((int)local_c + -4);
          uVar14 = (*(uint *)((int)local_c + -4) & 0x7fffffff) + 1;
          if ((int)uVar11 < 0) {
            bVar2 = *(byte *)((int)local_c + uVar11 * 4);
            if (bVar2 == 0) {
              uVar11 = (uVar11 & 0x7fffffff) + *(int *)((int)local_c + uVar11 * 4 + 4 & 0xfffffffc);
            }
            else {
              uVar11 = (uVar11 & 0x7fffffff) + (uint)bVar2;
            }
          }
          if ((int)uVar11 < (int)uVar14) {
            FUN_10beea50(uVar14,uVar14,1 < (int)uVar14);
            puVar19 = (uint *)(*(int *)(iVar5 + 0x54) + ((int)puVar19 - (int)local_c >> 2) * 4);
          }
          else {
            uVar11 = *(uint *)((int)local_c + -4);
            if ((int)uVar11 < 0) {
              bVar2 = *(byte *)((int)local_c + uVar11 * 4);
              if (bVar2 == 0) {
                uVar13 = *(uint *)((int)local_c + uVar11 * 4 + 4 & 0xfffffffc);
              }
              else {
                uVar13 = (uint)bVar2;
              }
              uVar11 = (uVar11 & 0x7fffffff) + uVar13;
            }
            *(uint *)((int)local_c + -4) = uVar14;
            if ((int)uVar14 < (int)uVar11) {
              iVar5 = uVar11 - uVar14;
              *(uint *)((int)local_c + -4) = uVar14 | 0x80000000;
              if (iVar5 < 0x100) {
                *(char *)((int)local_c + uVar14 * 4) = (char)iVar5;
              }
              else {
                *(undefined1 *)((int)local_c + uVar14 * 4) = 0;
                *(int *)((int)local_c + uVar14 * 4 + 4 & 0xfffffffc) = iVar5;
              }
            }
          }
          puVar16 = puVar19 + 1;
          local_c = puVar16;
          if (puVar19 != puVar16) {
            do {
              if (puVar19 != (uint *)0x0) {
                if (*(int *)((int)_Dst + -0xc) < 0) {
                  *puVar19 = (uint)&DAT_1201fc98;
                }
                else {
                  *puVar19 = (uint)_Dst;
                  FUN_10c3dab0((byte *)((int)_Dst + -0xc));
                  puVar16 = local_c;
                }
              }
              puVar19 = puVar19 + 1;
            } while (puVar19 != puVar16);
          }
          pbVar15 = (byte *)((int)_Dst + -0xc);
          if ((-1 < *(int *)pbVar15) && (iVar5 = FUN_10c3dad0(pbVar15), iVar5 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - *(int *)((int)_Dst + -4));
            FUN_10c3d900(pbVar15);
          }
        }
      }
LAB_10dded86:
      local_30 = (int *)((int)local_30 + 1);
      piVar4 = local_24;
    } while ((int)local_30 < (int)(*puVar7 & 0x7fffffff));
  }
  if (param_3 != '\0') {
    CMonsterInfo__GetManagers_10ddf560(param_2);
  }
  if (*puVar7 != 0) {
    FUN_10c3d900(puVar7);
  }
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 4))();
  }
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 4))();
  }
  (**(code **)(*piVar4 + 4))();
  return 1;
}



/* --- CProjectileInfo::GetManagers_10ddf3d0 @ 10ddf3d0 --- */
// [RE-AUTO c3]
// id: CProjectileInfo::GetManagers
// strings:
//   ""CProjectileInfo::GetManagers""
//   ""CProjectileInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CProjectileInfo::GetManagers
   strings:
     ""CProjectileInfo::GetManagers""
     ""CProjectileInfo"" */

void __fastcall CProjectileInfo__GetManagers_10ddf3d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined **local_8;
  
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x58);
  if ((*(uint *)(iVar4 + -4) & 0x7fffffff) != 0) {
    do {
      iVar4 = *(int *)(iVar4 + iVar5 * 4);
      local_8 = &PTR_FUN_11ce0b94;
      if ((DAT_1202f624 & 1) == 0) {
        DAT_1202f624 = DAT_1202f624 | 1;
        FUN_102500e0("CProjectileInfo::GetManagers");
        FUN_11a8911f(&LAB_11c88430);
      }
      puVar3 = (undefined4 *)*DAT_1202f608;
      if ((puVar3 == (undefined4 *)0x0) &&
         (puVar3 = (undefined4 *)FUN_11679e10(&local_8,"CProjectileInfo",0),
         puVar3 == (undefined4 *)0x0)) {
        if ((DAT_1202f670 & 1) == 0) {
          DAT_1202f63c = 0;
          DAT_1202f64c = 0;
          DAT_1202f650 = 0;
          _DAT_1202f654 = 0;
          DAT_1202f658 = 0;
          DAT_1202f670 = DAT_1202f670 | 1;
          DAT_1202f638 = &PTR_FUN_11ce0bcc;
          DAT_1202f65c = _DAT_11de9ae0;
          DAT_1202f660 = _UNK_11de9ae4;
          uRam1202f664 = _UNK_11de9ae8;
          DAT_1202f668 = _UNK_11de9aec;
          DAT_1202f66c = 1;
          DAT_1202f640 = puVar3;
          _DAT_1202f644 = puVar3;
          _DAT_1202f648 = puVar3;
          FUN_11a8911f(&LAB_11c8a510);
        }
        puVar3 = &DAT_1202f638;
      }
      local_8 = &PTR_FUN_11da54a8;
      if (((iVar4 != -1) &&
          (((iVar4 != 0 || (puVar3[0xc] == 0)) && (iVar1 = puVar3[10], iVar1 != 0)))) &&
         ((iVar4 = iVar4 - puVar3[0xc], -1 < iVar4 && (iVar4 < (int)puVar3[9])))) {
        iVar2 = *(int *)(puVar3[8] + (iVar4 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar4 = *(int *)(iVar2 + (iVar4 % iVar1) * 4), iVar4 != 0)) {
          (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0x9c))(*(undefined4 *)(iVar4 + 0x134));
          (**(code **)(**(int **)(DAT_1202e818 + 0xa0) + 0x9c))(*(undefined4 *)(iVar4 + 0x168));
          FUN_110038f0(*(undefined4 *)(iVar4 + 0x1c4));
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(param_1 + 0x58);
    } while (iVar5 < (int)(*(uint *)(iVar4 + -4) & 0x7fffffff));
  }
  return;
}



