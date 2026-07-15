// ===== class CMonsterInfo  (9 recovered methods) =====

/* --- CMonsterInfo::GetManagers @ 107d7d50 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// strings:
//   ""CMonsterInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CMonsterInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123bee5c & 1) == 0) {
    DAT_123bee5c = DAT_123bee5c | 1;
    _DAT_123bee74 = &DAT_123bee64;
    DAT_123bee78 = &DAT_123bee64;
    DAT_123bee64 = 0;
    FUN_100d83d0("CMonsterInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c70e30);
  }
  return DAT_123bee60;
}



/* --- CMonsterInfo::GetManagers_10ddf560 @ 10ddf560 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// calls: atoi, CProjectileInfo::GetManagers
// strings:
//   ""Libs/EntityCustomTypes/""
//   ""_PreCache.xml""
//   ""Entity""
//   ""Effect""
//   ""SpawnEffect""
//   ""EffectName""
//   ""AddBuff""
//   ""EffectID""
//   ""mh_sharemem_addrinfo""
//   ""FlyObj""

/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   calls: atoi, CProjectileInfo::GetManagers
   strings:
     ""Libs/EntityCustomTypes/""
     ""_PreCache.xml""
     ""Entity""
     ""Effect""
     ""SpawnEffect""
     ""EffectName""
     ""AddBuff""
     ""EffectID""
     ""mh_sharemem_addrinfo""
     ""FlyObj"" */

undefined1 CMonsterInfo__GetManagers_10ddf560(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint uVar13;
  int *piVar14;
  byte *pbVar15;
  undefined1 uVar16;
  int iVar17;
  bool bVar18;
  int local_250;
  undefined1 *local_24c;
  undefined1 local_248 [512];
  int *local_48;
  undefined1 local_44 [4];
  int local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_34 [4];
  byte *local_30;
  undefined **local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar4 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_10a6c4c0("Libs/EntityCustomTypes/");
  piVar14 = piVar4;
  do {
    iVar6 = *piVar14;
    piVar14 = (int *)((int)piVar14 + 1);
  } while ((char)iVar6 != '\0');
  FUN_10ae0250(piVar4,(int)piVar14 - (int)((int)piVar4 + 1));
  FUN_10ae0250("_PreCache.xml",0xd);
  (**(code **)(*(int *)*DAT_1202e818 + 0x1c0))(&local_28,local_24c,0,1,0);
  if (local_28 == (int *)0x0) {
    uVar16 = 0;
  }
  else {
    (**(code **)(*local_28 + 0xac))(&param_1,"Entity");
    if (param_1 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*(int *)DAT_1202e818[1] + 0x70))();
      local_8 = piVar4;
      piVar14 = (int *)(**(code **)(*param_1 + 0xa0))();
      local_1c = 0;
      local_14 = piVar14;
      if (0 < (int)piVar14) {
        do {
          iVar6 = local_1c;
          (**(code **)(*param_1 + 0xa8))(&local_20,local_1c);
          cVar3 = (**(code **)(*local_20 + 0x28))("Effect");
          if (cVar3 != '\0') {
            iVar5 = (**(code **)(*local_20 + 0xa0))();
            iVar17 = 0;
            iVar6 = local_1c;
            piVar14 = local_14;
            if (0 < iVar5) {
              do {
                (**(code **)(*local_20 + 0xa8))(&local_10,iVar17);
                cVar3 = (**(code **)(*local_10 + 0x28))("SpawnEffect");
                if (cVar3 == '\0') {
                  cVar3 = (**(code **)(*local_10 + 0x28))("AddBuff");
                  if ((cVar3 != '\0') &&
                     (pcVar10 = (char *)(**(code **)(*local_10 + 0x7c))("EffectID"),
                     pcVar10 != (char *)0x0)) {
                    iVar6 = atoi(pcVar10);
                    pbVar15 = (byte *)(**(code **)(*piVar4 + 0x1c))(iVar6);
                    pbVar9 = &DAT_11d9d32b;
                    pbVar12 = pbVar15;
                    do {
                      bVar2 = *pbVar12;
                      bVar18 = bVar2 < *pbVar9;
                      if (bVar2 != *pbVar9) {
LAB_10ddf780:
                        uVar13 = -(uint)bVar18 | 1;
                        goto LAB_10ddf785;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar12[1];
                      bVar18 = bVar2 < pbVar9[1];
                      if (bVar2 != pbVar9[1]) goto LAB_10ddf780;
                      pbVar12 = pbVar12 + 2;
                      pbVar9 = pbVar9 + 2;
                    } while (bVar2 != 0);
                    uVar13 = 0;
LAB_10ddf785:
                    piVar4 = local_8;
                    if (uVar13 != 0) {
                      FUN_104f6c30(pbVar15);
                      uVar7 = FUN_10bedf30(*(int *)(local_18 + 0x4c) +
                                           *(int *)(*(int *)(local_18 + 0x4c) + -4) * 4,1);
                      FUN_10bee250(uVar7,1,local_44);
                      FUN_104f6f60();
                      piVar4 = local_8;
                    }
                  }
                }
                else {
                  iVar6 = (**(code **)(*local_10 + 0x7c))("EffectName");
                  if (iVar6 != 0) {
                    FUN_104f6c30(iVar6);
                    uVar7 = FUN_10bedf30(*(int *)(local_18 + 0x4c) +
                                         *(int *)(*(int *)(local_18 + 0x4c) + -4) * 4,1);
                    FUN_10bee250(uVar7,1,&local_40);
                    iVar6 = local_40;
                    piVar14 = (int *)(local_40 + -0xc);
                    piVar4 = local_8;
                    if ((-1 < *piVar14) &&
                       (iVar8 = FUN_10c3dad0(piVar14), piVar4 = local_8, iVar8 < 1)) {
                      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
                      FUN_10c3d900(piVar14);
                      piVar4 = local_8;
                    }
                  }
                }
                if (local_10 != (int *)0x0) {
                  (**(code **)(*local_10 + 4))();
                }
                iVar17 = iVar17 + 1;
                iVar6 = local_1c;
                piVar14 = local_14;
              } while (iVar17 < iVar5);
            }
          }
          if (local_20 != (int *)0x0) {
            (**(code **)(*local_20 + 4))();
          }
          local_1c = iVar6 + 1;
        } while (local_1c < (int)piVar14);
      }
    }
    piVar4 = (int *)(**(code **)(*local_28 + 0xac))(&local_48,"FlyObj");
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)();
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
    param_1 = (int *)*piVar4;
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 4))();
    }
    if (param_1 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*param_1 + 0xa0))();
      iVar6 = 0;
      local_8 = piVar4;
      if (0 < (int)piVar4) {
        do {
          (**(code **)(*param_1 + 0xa8))(&local_24,iVar6);
          cVar3 = (**(code **)(*local_24 + 0x28))("Projectile");
          if ((cVar3 != '\0') &&
             (pcVar10 = (char *)(**(code **)(*local_24 + 0x7c))("ProjectileID"),
             pcVar10 != (char *)0x0)) {
            iVar5 = atoi(pcVar10);
            iVar17 = CProjectileInfo__GetManagers(0,"CProjectileInfo",0);
            piVar4 = local_8;
            if ((iVar5 != -1) &&
               ((((iVar5 != 0 || (*(int *)(iVar17 + 0x30) == 0)) &&
                 (iVar8 = *(int *)(iVar17 + 0x28), iVar8 != 0)) &&
                ((iVar5 = iVar5 - *(int *)(iVar17 + 0x30), -1 < iVar5 &&
                 (iVar5 < *(int *)(iVar17 + 0x24))))))) {
              iVar17 = *(int *)(*(int *)(iVar17 + 0x20) + (iVar5 / iVar8) * 4);
              if ((iVar17 != 0) && (iVar5 = *(int *)(iVar17 + (iVar5 % iVar8) * 4), iVar5 != 0)) {
                iVar17 = local_18;
                if (*(int *)(iVar5 + 0x134) != *(int *)(iVar5 + 0x130)) {
                  FUN_104f6c30(*(int *)(iVar5 + 0x134));
                  iVar17 = local_18;
                  uVar7 = FUN_10bedf30(*(int *)(local_18 + 0x4c) +
                                       *(int *)(*(int *)(local_18 + 0x4c) + -4) * 4,1);
                  FUN_10bee250(uVar7,1,local_3c);
                  FUN_104f6f60();
                }
                if (*(int *)(iVar5 + 0x168) != *(int *)(iVar5 + 0x164)) {
                  FUN_104f6c30(*(int *)(iVar5 + 0x168));
                  uVar7 = FUN_10bedf30(*(int *)(iVar17 + 0x4c) +
                                       *(int *)(*(int *)(iVar17 + 0x4c) + -4) * 4,1);
                  FUN_10bee250(uVar7,1,local_34);
                  FUN_104f6f60();
                }
                piVar4 = local_8;
                if (*(int *)(iVar5 + 0x1c4) != *(int *)(iVar5 + 0x1c0)) {
                  FUN_110038f0(*(int *)(iVar5 + 0x1c4));
                  piVar4 = local_8;
                }
              }
            }
          }
          if (local_24 != (int *)0x0) {
            (**(code **)(*local_24 + 4))();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)piVar4);
      }
    }
    piVar4 = (int *)(**(code **)(*local_28 + 0xac))(&local_30,"SpawnMonster");
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)();
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
    param_1 = (int *)*piVar4;
    if (local_30 != (byte *)0x0) {
      (**(code **)(*(int *)local_30 + 4))();
    }
    if (param_1 != (int *)0x0) {
      local_1c = (**(code **)(*param_1 + 0xa0))();
      local_8 = (int *)0x0;
      if (0 < local_1c) {
        local_14 = (int *)(local_18 + 0x54);
        do {
          piVar4 = local_8;
          (**(code **)(*param_1 + 0xa8))(&local_c,local_8);
          cVar3 = (**(code **)(*local_c + 0x28))("Monster");
          if ((cVar3 != '\0') &&
             (pcVar10 = (char *)(**(code **)(*local_c + 0x7c))(&DAT_11de661c),
             pcVar10 != (char *)0x0)) {
            iVar6 = atoi(pcVar10);
            local_2c = &PTR_FUN_11dc8ee8;
            if ((DAT_123bee5c & 1) == 0) {
              DAT_123bee5c = DAT_123bee5c | 1;
              FUN_102500e0("CMonsterInfo::GetManagers");
              FUN_11a8911f(&LAB_11c70e30);
            }
            puVar11 = (undefined4 *)*DAT_123bee60;
            if ((puVar11 == (undefined4 *)0x0) &&
               (puVar11 = (undefined4 *)FUN_11679e10(&local_2c,"CMonsterInfo",0),
               puVar11 == (undefined4 *)0x0)) {
              if ((DAT_123bedd4 & 1) == 0) {
                DAT_123bedd4 = DAT_123bedd4 | 1;
                FUN_107e0630();
                FUN_11a8911f(&LAB_11c8a4b0);
              }
              puVar11 = &DAT_123bedd8;
            }
            local_2c = &PTR_FUN_11da54a8;
            if (((iVar6 != -1) &&
                (((iVar6 != 0 || (puVar11[0xc] == 0)) && (iVar5 = puVar11[10], iVar5 != 0)))) &&
               ((iVar6 = iVar6 - puVar11[0xc], -1 < iVar6 && (iVar6 < (int)puVar11[9])))) {
              iVar17 = *(int *)(puVar11[8] + (iVar6 / iVar5) * 4);
              if ((iVar17 != 0) &&
                 ((iVar6 = *(int *)(iVar17 + (iVar6 % iVar5) * 4), iVar6 != 0 &&
                  (local_30 = *(byte **)(iVar6 + 0x68), local_30 != (byte *)0x0)))) {
                iVar6 = 0;
                puVar11 = (undefined4 *)*local_14;
                puVar1 = puVar11 + -1;
                if ((*puVar1 & 0x7fffffff) != 0) {
                  do {
                    pbVar12 = (byte *)*puVar11;
                    pbVar15 = local_30;
                    do {
                      bVar2 = *pbVar12;
                      bVar18 = bVar2 < *pbVar15;
                      if (bVar2 != *pbVar15) {
LAB_10ddfbb0:
                        uVar13 = -(uint)bVar18 | 1;
                        goto LAB_10ddfbb5;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar12[1];
                      bVar18 = bVar2 < pbVar15[1];
                      if (bVar2 != pbVar15[1]) goto LAB_10ddfbb0;
                      pbVar12 = pbVar12 + 2;
                      pbVar15 = pbVar15 + 2;
                    } while (bVar2 != 0);
                    uVar13 = 0;
LAB_10ddfbb5:
                    piVar4 = local_8;
                    if (uVar13 == 0) goto LAB_10ddfc28;
                    iVar6 = iVar6 + 1;
                    puVar11 = puVar11 + 1;
                  } while (iVar6 < (int)(*puVar1 & 0x7fffffff));
                }
                FUN_104f6c30(local_30);
                uVar7 = FUN_10bedf30(*local_14 + *(int *)(*local_14 + -4) * 4,1);
                FUN_10bee250(uVar7,1,&local_38);
                iVar6 = local_38;
                piVar14 = (int *)(local_38 + -0xc);
                piVar4 = local_8;
                if ((-1 < *piVar14) && (iVar5 = FUN_10c3dad0(piVar14), piVar4 = local_8, iVar5 < 1))
                {
                  DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(iVar6 + -4));
                  FUN_10c3d900(piVar14);
                  piVar4 = local_8;
                }
              }
            }
          }
LAB_10ddfc28:
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 4))();
          }
          local_8 = (int *)((int)piVar4 + 1);
        } while ((int)local_8 < local_1c);
      }
    }
    uVar16 = 1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 4))();
    }
  }
  if (local_24c != local_248) {
    DAT_1202015c = DAT_1202015c + (-1 - local_250);
    FUN_10c3d900(local_24c);
  }
  return uVar16;
}



/* --- CMonsterInfo::GetManagers_112a2e10 @ 112a2e10 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// strings:
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""

/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo"" */

void __thiscall
CMonsterInfo__GetManagers_112a2e10(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

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
          iVar4 = FUN_111e0a50();
          if (iVar4 != 0) {
            piVar2 = (int *)FUN_111e0a50();
            (**(code **)(*piVar2 + 4))(0x1e4,&local_20);
          }
        }
        iVar4 = *(int *)((int)piVar6 + 6);
        local_c = &PTR_FUN_11dc8ee8;
        if ((DAT_123bee5c & 1) == 0) {
          DAT_123bee5c = DAT_123bee5c | 1;
          FUN_102500e0("CMonsterInfo::GetManagers");
          FUN_11a8911f(&LAB_11c70e30);
        }
        puVar5 = (undefined4 *)*DAT_123bee60;
        if ((puVar5 == (undefined4 *)0x0) &&
           (puVar5 = (undefined4 *)FUN_11679e10(&local_c,"CMonsterInfo",0),
           puVar5 == (undefined4 *)0x0)) {
          if ((DAT_123bedd4 & 1) == 0) {
            DAT_123bedd4 = DAT_123bedd4 | 1;
            FUN_107e0630();
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



/* --- CMonsterInfo::GetManagers_114d28a0 @ 114d28a0 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// strings:
//   ""CLevelSuperSequence""
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""

/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   strings:
     ""CLevelSuperSequence""
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo"" */

undefined4 __thiscall CMonsterInfo__GetManagers_114d28a0(int *param_1,undefined **param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_8;
  
  iVar4 = (**(code **)(*param_1 + 0x30))(0);
  iVar5 = FUN_109ed220(0,"CLevelSuperSequence",0);
  ppuVar3 = param_2;
  if ((iVar4 != -1) &&
     ((((iVar4 != 0 || (*(int *)(iVar5 + 0x30) == 0)) &&
       (iVar1 = *(int *)(iVar5 + 0x28), iVar1 != 0)) &&
      ((iVar4 = iVar4 - *(int *)(iVar5 + 0x30), -1 < iVar4 && (iVar4 < *(int *)(iVar5 + 0x24)))))))
  {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x20) + (iVar4 / iVar1) * 4);
    if ((iVar5 != 0) && (*(int *)(iVar5 + (iVar4 % iVar1) * 4) != 0)) {
      iVar4 = 1;
      do {
        iVar5 = FUN_116f5470(iVar4);
        if (iVar5 < 1) {
          return 1;
        }
        param_2 = &PTR_FUN_11dc8ee8;
        if ((DAT_123bee5c & 1) == 0) {
          DAT_123bee5c = DAT_123bee5c | 1;
          FUN_102500e0("CMonsterInfo::GetManagers");
          FUN_11a8911f(&LAB_11c70e30);
        }
        puVar6 = (undefined4 *)*DAT_123bee60;
        if ((puVar6 == (undefined4 *)0x0) &&
           (puVar6 = (undefined4 *)FUN_11679e10(&param_2,"CMonsterInfo",0),
           puVar6 == (undefined4 *)0x0)) {
          if ((DAT_123bedd4 & 1) == 0) {
            DAT_123bedd4 = DAT_123bedd4 | 1;
            FUN_107e0630();
            FUN_11a8911f(&LAB_11c9f1c0);
          }
          puVar6 = &DAT_123bedd8;
        }
        param_2 = &PTR_FUN_11da54a8;
        if ((iVar5 != -1) && (puVar6[10] != 0)) {
          iVar5 = iVar5 - puVar6[0xc];
          if ((iVar5 < 0) || ((int)puVar6[9] <= iVar5)) {
LAB_114d29e9:
            local_8 = 0;
          }
          else {
            iVar1 = *(int *)(puVar6[8] + (iVar5 / (int)puVar6[10]) * 4);
            if (iVar1 == 0) goto LAB_114d29e9;
            local_8 = *(int *)(iVar1 + (iVar5 % (int)puVar6[10]) * 4);
          }
          if (local_8 != 0) {
            piVar2 = (int *)ppuVar3[1];
            if (piVar2 == (int *)ppuVar3[2]) {
              FUN_114d38a0(piVar2,&local_8,(int)&param_2 + 3,1,1);
            }
            else {
              *piVar2 = local_8;
              ppuVar3[1] = ppuVar3[1] + 4;
            }
          }
        }
        iVar4 = iVar4 + 1;
        if (99 < iVar4) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}



/* --- CMonsterInfo::GetManagers_11575040 @ 11575040 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// strings:
//   ""CLevelRewardInfo""
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   strings:
     ""CLevelRewardInfo""
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void CMonsterInfo__GetManagers_11575040(int param_1,undefined **param_2,undefined4 param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined **ppuVar16;
  int *piVar17;
  int local_30;
  undefined **local_2c;
  undefined **local_28;
  undefined **local_24;
  undefined **local_20;
  undefined **local_1c;
  undefined **local_18;
  int local_14;
  undefined **local_10;
  undefined **local_c;
  undefined1 local_5;
  
  puVar1 = param_2[4];
  iVar3 = FUN_1097c5c0(0,"CLevelRewardInfo",0);
  if (((puVar1 != (undefined *)0xffffffff) &&
      (((puVar1 != (undefined *)0x0 || (*(int *)(iVar3 + 0x30) == 0)) &&
       (iVar13 = *(int *)(iVar3 + 0x28), iVar13 != 0)))) &&
     ((iVar14 = (int)puVar1 - *(int *)(iVar3 + 0x30), -1 < iVar14 &&
      (iVar14 < *(int *)(iVar3 + 0x24))))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (iVar14 / iVar13) * 4);
    if ((iVar3 != 0) && (local_14 = *(int *)(iVar3 + (iVar14 % iVar13) * 4), local_14 != 0)) {
      local_30 = 0;
      local_c = (undefined **)0x0;
      local_2c = (undefined **)0x0;
      local_28 = (undefined **)0x0;
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xb4) + 0xc);
      ppuVar11 = (undefined **)(iVar3 + 0x84);
      local_10 = *(undefined ***)(iVar3 + 0x8c);
      local_1c = ppuVar11;
      if (local_10 != ppuVar11) {
        do {
          ppuVar16 = (undefined **)local_10[7];
          ppuVar12 = local_10 + 5;
          local_18 = local_10 + 7;
          if (ppuVar16 != local_18) {
            do {
              puVar1 = *ppuVar12;
              local_c = &PTR_FUN_11dc8ee8;
              if ((DAT_123bee5c & 1) == 0) {
                DAT_123bee5c = DAT_123bee5c | 1;
                FUN_102500e0("CMonsterInfo::GetManagers");
                FUN_11a8911f(&LAB_11c70e30);
              }
              puVar4 = (undefined4 *)*DAT_123bee60;
              if ((puVar4 == (undefined4 *)0x0) &&
                 (puVar4 = (undefined4 *)FUN_11679e10(&local_c,"CMonsterInfo",0),
                 puVar4 == (undefined4 *)0x0)) {
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
                  DAT_123bede0 = puVar4;
                  _DAT_123bede4 = puVar4;
                  _DAT_123bede8 = puVar4;
                  FUN_11a8911f(&LAB_11ca2890);
                }
                puVar4 = &DAT_123bedd8;
              }
              local_c = &PTR_FUN_11da54a8;
              if ((puVar1 != (undefined *)0xffffffff) &&
                 ((((puVar1 != (undefined *)0x0 || (puVar4[0xc] == 0)) && (puVar4[10] != 0)) &&
                  ((iVar3 = (int)puVar1 - puVar4[0xc], -1 < iVar3 && (iVar3 < (int)puVar4[9])))))) {
                iVar13 = *(int *)(puVar4[8] + (iVar3 / (int)puVar4[10]) * 4);
                if ((iVar13 != 0) &&
                   ((*(int *)(iVar13 + (iVar3 % (int)puVar4[10]) * 4) != 0 &&
                    (puVar1 = param_2[0x37],
                    puVar5 = (undefined *)FUN_11295070(param_2[0x36],puVar1,ppuVar12,&local_5),
                    puVar5 != puVar1)))) {
                  local_24 = (undefined **)*ppuVar12;
                  local_20 = (undefined **)ppuVar16[2];
                  FUN_11575950(&local_30,&local_24);
                }
              }
              ppuVar16 = (undefined **)*ppuVar16;
              ppuVar11 = local_1c;
            } while (ppuVar16 != local_18);
          }
          ppuVar12 = (undefined **)local_10[3];
          if (ppuVar12 == (undefined **)0x0) {
            ppuVar12 = (undefined **)local_10[1];
            if (local_10 == (undefined **)ppuVar12[3]) {
              do {
                local_10 = ppuVar12;
                ppuVar12 = (undefined **)local_10[1];
              } while (local_10 == (undefined **)ppuVar12[3]);
            }
            if ((undefined **)local_10[3] != ppuVar12) {
              local_10 = ppuVar12;
            }
          }
          else {
            for (ppuVar16 = (undefined **)ppuVar12[2]; local_10 = ppuVar12,
                ppuVar16 != (undefined **)0x0; ppuVar16 = (undefined **)ppuVar16[2]) {
              ppuVar12 = ppuVar16;
            }
          }
        } while (local_10 != ppuVar11);
        local_c = local_2c;
      }
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xb4) + 0xc);
      ppuVar12 = (undefined **)(iVar3 + 0xb4);
      iVar3 = *(int *)(iVar3 + 0xbc);
      ppuVar11 = local_c;
      local_2c = local_c;
      local_18 = ppuVar12;
      if ((undefined **)iVar3 != ppuVar12) {
        do {
          piVar17 = *(int **)(iVar3 + 0x1c);
          if (piVar17 != (int *)(iVar3 + 0x1c)) {
            do {
              iVar13 = *(int *)(iVar3 + 0x14);
              local_10 = &PTR_FUN_11dc8ee8;
              if ((DAT_123bee5c & 1) == 0) {
                DAT_123bee5c = DAT_123bee5c | 1;
                _DAT_123bee74 = &DAT_123bee64;
                DAT_123bee78 = &DAT_123bee64;
                DAT_123bee64 = 0;
                FUN_100d9260("CMonsterInfo::GetManagers","");
                FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
                DAT_123bee60 = (undefined4 *)FUN_100dfd90(DAT_123bee78);
                if (DAT_123bee60 == (undefined4 *)0x0) {
                  DAT_123bee60 = (undefined4 *)FUN_100dde50(4);
                  *DAT_123bee60 = 0;
                  FUN_100dfdc0(DAT_123bee78,DAT_123bee60);
                }
                FUN_11a8911f(&LAB_11c70e30);
              }
              puVar4 = (undefined4 *)*DAT_123bee60;
              if ((puVar4 == (undefined4 *)0x0) &&
                 (puVar4 = (undefined4 *)FUN_11679e10(&local_10,"CMonsterInfo",0),
                 puVar4 == (undefined4 *)0x0)) {
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
                  DAT_123bede0 = puVar4;
                  _DAT_123bede4 = puVar4;
                  _DAT_123bede8 = puVar4;
                  FUN_11a8911f(&LAB_11ca2890);
                }
                puVar4 = &DAT_123bedd8;
              }
              local_10 = &PTR_FUN_11da54a8;
              if (((iVar13 != -1) && (((iVar13 != 0 || (puVar4[0xc] == 0)) && (puVar4[10] != 0))))
                 && ((iVar13 = iVar13 - puVar4[0xc], -1 < iVar13 && (iVar13 < (int)puVar4[9])))) {
                iVar14 = *(int *)(puVar4[8] + (iVar13 / (int)puVar4[10]) * 4);
                if ((iVar14 != 0) && (*(int *)(iVar14 + (iVar13 % (int)puVar4[10]) * 4) != 0)) {
                  piVar2 = (int *)param_2[0x37];
                  piVar6 = (int *)param_2[0x36];
                  iVar13 = (int)piVar2 - (int)piVar6 >> 4;
                  if (0 < iVar13) {
                    iVar14 = *(int *)(iVar3 + 0x14);
                    do {
                      piVar7 = piVar6;
                      if (((*piVar6 == iVar14) || (piVar7 = piVar6 + 1, piVar6[1] == iVar14)) ||
                         ((piVar7 = piVar6 + 2, piVar6[2] == iVar14 ||
                          (piVar7 = piVar6 + 3, piVar6[3] == iVar14)))) goto LAB_115754e2;
                      iVar13 = iVar13 + -1;
                      piVar6 = piVar6 + 4;
                    } while (0 < iVar13);
                  }
                  iVar13 = (int)piVar2 - (int)piVar6 >> 2;
                  if (iVar13 == 1) {
LAB_115754d9:
                    piVar7 = piVar6;
                    if (*piVar6 != *(int *)(iVar3 + 0x14)) {
LAB_115754e0:
                      piVar7 = piVar2;
                    }
                  }
                  else if (iVar13 == 2) {
LAB_115754cf:
                    piVar7 = piVar6;
                    if (*piVar6 != *(int *)(iVar3 + 0x14)) {
                      piVar6 = piVar6 + 1;
                      goto LAB_115754d9;
                    }
                  }
                  else {
                    if (iVar13 != 3) goto LAB_115754e0;
                    piVar7 = piVar6;
                    if (*piVar6 != *(int *)(iVar3 + 0x14)) {
                      piVar6 = piVar6 + 1;
                      goto LAB_115754cf;
                    }
                  }
LAB_115754e2:
                  if (piVar7 != piVar2) {
                    uVar8 = 0;
                    local_24 = *(undefined ***)(iVar3 + 0x14);
                    local_20 = (undefined **)piVar17[2];
                    uVar10 = (int)local_c - local_30 >> 3;
                    local_1c = local_24;
                    local_10 = local_20;
                    if (uVar10 != 0) {
                      do {
                        if ((*(undefined ***)(local_30 + uVar8 * 8) == local_24) &&
                           (*(undefined ***)(local_30 + 4 + uVar8 * 8) == local_20))
                        goto LAB_11575540;
                        uVar8 = uVar8 + 1;
                      } while (uVar8 < uVar10);
                    }
                    if (local_c == local_28) {
                      FUN_11575bb0(local_c,&local_24,&local_5,1,1);
                      local_c = local_2c;
                    }
                    else {
                      if (local_c != (undefined **)0x0) {
                        *local_c = (undefined *)local_24;
                        local_c[1] = (undefined *)local_20;
                      }
                      local_2c = local_c + 2;
                      local_c = local_2c;
                    }
                  }
                }
              }
LAB_11575540:
              piVar17 = (int *)*piVar17;
              ppuVar11 = local_c;
              ppuVar12 = local_18;
            } while (piVar17 != (int *)(iVar3 + 0x1c));
          }
          iVar13 = *(int *)(iVar3 + 0xc);
          if (iVar13 == 0) {
            iVar13 = *(int *)(iVar3 + 4);
            if (iVar3 == *(int *)(iVar13 + 0xc)) {
              do {
                iVar3 = iVar13;
                iVar13 = *(int *)(iVar3 + 4);
              } while (iVar3 == *(int *)(iVar13 + 0xc));
            }
            if (*(int *)(iVar3 + 0xc) != iVar13) {
              iVar3 = iVar13;
            }
          }
          else {
            for (iVar14 = *(int *)(iVar13 + 8); iVar3 = iVar13, iVar14 != 0;
                iVar14 = *(int *)(iVar14 + 8)) {
              iVar13 = iVar14;
            }
          }
        } while ((undefined **)iVar3 != ppuVar12);
      }
      local_c = (undefined **)((int)ppuVar11 - local_30 >> 3);
      if (local_c != (undefined **)0x0) {
        puVar4 = (undefined4 *)(local_30 + 4);
        uVar15 = param_3;
        do {
          iVar3 = puVar4[-1];
          param_2 = &PTR_FUN_11dc8ee8;
          if ((DAT_123bee5c & 1) == 0) {
            DAT_123bee5c = DAT_123bee5c | 1;
            _DAT_123bee74 = &DAT_123bee64;
            DAT_123bee78 = &DAT_123bee64;
            DAT_123bee64 = 0;
            FUN_100d9260("CMonsterInfo::GetManagers","");
            FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
            DAT_123bee60 = (undefined4 *)FUN_100dfd90(DAT_123bee78);
            if (DAT_123bee60 == (undefined4 *)0x0) {
              DAT_123bee60 = (undefined4 *)FUN_100dde50(4);
              *DAT_123bee60 = 0;
              FUN_100dfdc0(DAT_123bee78,DAT_123bee60);
            }
            FUN_11a8911f(&LAB_11c70e30);
          }
          puVar9 = (undefined4 *)*DAT_123bee60;
          if ((puVar9 == (undefined4 *)0x0) &&
             (puVar9 = (undefined4 *)FUN_11679e10(&param_2,"CMonsterInfo",0),
             puVar9 == (undefined4 *)0x0)) {
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
              DAT_123bede0 = puVar9;
              _DAT_123bede4 = puVar9;
              _DAT_123bede8 = puVar9;
              FUN_11a8911f(&LAB_11ca2890);
            }
            puVar9 = &DAT_123bedd8;
          }
          param_2 = &PTR_FUN_11da54a8;
          if (((iVar3 != -1) && (((iVar3 != 0 || (puVar9[0xc] == 0)) && (puVar9[10] != 0)))) &&
             ((iVar3 = iVar3 - puVar9[0xc], -1 < iVar3 && (iVar3 < (int)puVar9[9])))) {
            iVar13 = *(int *)(puVar9[8] + (iVar3 / (int)puVar9[10]) * 4);
            if ((iVar13 != 0) &&
               (local_1c = *(undefined ***)(iVar13 + (iVar3 % (int)puVar9[10]) * 4),
               local_1c != (undefined **)0x0)) {
              FUN_11680b20(*(undefined4 *)(local_14 + 0x38),*puVar4,uVar15);
              FUN_11680b00(*(undefined4 *)(local_14 + 0x38),*puVar4,uVar15);
              ppuVar11 = (undefined **)0x0;
              local_10 = (undefined **)0x0;
              iVar3 = FUN_11681470();
              uVar15 = param_3;
              if (0 < iVar3) {
                do {
                  iVar3 = FUN_11680e40(ppuVar11);
                  if (iVar3 != 0) {
                    iVar3 = 1;
                    do {
                      iVar13 = FUN_117cdd40(iVar3);
                      if (iVar13 != 0) {
                        FUN_117bbf90(*(undefined4 *)(local_14 + 0x38),*puVar4,param_3);
                      }
                      iVar3 = iVar3 + 1;
                      ppuVar11 = local_10;
                    } while (iVar3 < 4);
                  }
                  ppuVar11 = (undefined **)((int)ppuVar11 + 1);
                  local_10 = ppuVar11;
                  iVar3 = FUN_11681470();
                  uVar15 = param_3;
                } while ((int)ppuVar11 < iVar3);
              }
            }
          }
          puVar4 = puVar4 + 2;
          local_c = (undefined **)((int)local_c + -1);
        } while (local_c != (undefined **)0x0);
        local_c = (undefined **)0x0;
      }
      if (local_30 != 0) {
        FUN_10c3d5d0(local_30);
      }
    }
  }
  return;
}



/* --- CMonsterInfo::GetManagers_11644630 @ 11644630 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// strings:
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""

/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo"" */

void __thiscall CMonsterInfo__GetManagers_11644630(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 local_80 [56];
  int local_48;
  int local_40;
  int *local_38;
  int local_24;
  int local_20;
  int *local_18;
  int local_14;
  int *local_10;
  undefined **local_c;
  int local_8;
  
  local_10 = param_1;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  local_8 = 0;
  local_14 = *(int *)(iVar4 + 0x78);
  if (0 < param_3) {
    local_18 = (int *)(param_2 + 4);
    while (iVar4 = local_8, (int *)*local_18 != local_18) {
      uVar5 = FUN_100ee470();
      iVar6 = FUN_1184a650(uVar5);
      if (iVar6 < 1) {
        return;
      }
      local_c = &PTR_FUN_11dc8ee8;
      if ((DAT_123bee5c & 1) == 0) {
        DAT_123bee5c = DAT_123bee5c | 1;
        FUN_102500e0("CMonsterInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e30);
      }
      puVar7 = (undefined4 *)*DAT_123bee60;
      if ((puVar7 == (undefined4 *)0x0) &&
         (puVar7 = (undefined4 *)FUN_11679e10(&local_c,"CMonsterInfo",0),
         puVar7 == (undefined4 *)0x0)) {
        if ((DAT_123bedd4 & 1) == 0) {
          DAT_123bedd4 = DAT_123bedd4 | 1;
          FUN_107e0630();
          FUN_11a8911f(&LAB_11ca6800);
        }
        puVar7 = &DAT_123bedd8;
      }
      local_c = &PTR_FUN_11da54a8;
      if (iVar6 == -1) {
        return;
      }
      iVar2 = puVar7[10];
      if (iVar2 == 0) {
        return;
      }
      iVar6 = iVar6 - puVar7[0xc];
      if (iVar6 < 0) {
        return;
      }
      if ((int)puVar7[9] <= iVar6) {
        return;
      }
      iVar3 = *(int *)(puVar7[8] + (iVar6 / iVar2) * 4);
      if (iVar3 == 0) {
        return;
      }
      iVar6 = *(int *)(iVar3 + (iVar6 % iVar2) * 4);
      if (iVar6 == 0) {
        return;
      }
      if (local_14 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_11643f00(*(undefined4 *)(iVar6 + 0x14));
      }
      piVar8 = (int *)FUN_11643c60(iVar6,*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x6c)
                                   ,1,1,uVar5);
      if (piVar8 == (int *)0x0) {
        FUN_1184a630(*(undefined4 *)(iVar6 + 0x14));
        local_8 = iVar4 + -1;
      }
      else {
        FUN_10d3d7c0(1);
        piVar1 = local_10;
        local_38 = local_10;
        local_40 = local_10[0x2a];
        local_24 = local_10[0x34];
        local_20 = local_10[0x35];
        local_48 = iVar6;
        iVar4 = (**(code **)(*piVar8 + 0xa0))(local_80);
        if (iVar4 != 0) {
          piVar8 = piVar1 + 0x32;
          *piVar8 = *piVar8 + 1;
          piVar1 = piVar1 + 0x1b;
          piVar8 = piVar1;
          if (piVar1 != (int *)*piVar1) {
            do {
              if (*(int *)(piVar8[1] + 8) != 0) {
                FUN_11643560(iVar4);
              }
              piVar8 = (int *)piVar8[1];
            } while (piVar8 != (int *)*piVar1);
          }
        }
      }
      local_8 = local_8 + 1;
      if (param_3 <= local_8) {
        return;
      }
    }
  }
  return;
}



/* --- CMonsterInfo::GetManagers_118d3cb0 @ 118d3cb0 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// calls: CNpcSaleInfo::GetManagers_1168f070
// strings:
//   ""CMonsterInfo""
//   ""CMonsterInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   calls: CNpcSaleInfo::GetManagers_1168f070
   strings:
     ""CMonsterInfo""
     ""CMonsterInfo::GetManagers"" */

void CMonsterInfo__GetManagers_118d3cb0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)FUN_107dfd30(0,"CMonsterInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dc8ee8;
      if ((DAT_123bee5c & 1) == 0) {
        DAT_123bee5c = DAT_123bee5c | 1;
        FUN_102500e0("CMonsterInfo::GetManagers");
        FUN_11a8911f(&LAB_11c70e30);
      }
      puVar4 = (undefined4 *)*DAT_123bee60;
      if ((puVar4 == (undefined4 *)0x0) &&
         (puVar4 = (undefined4 *)FUN_11679e10(&param_1,"CMonsterInfo",0),
         puVar4 == (undefined4 *)0x0)) {
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
          DAT_123bede0 = puVar4;
          _DAT_123bede4 = puVar4;
          _DAT_123bede8 = puVar4;
          FUN_11a8911f(&LAB_11caff70);
        }
        puVar4 = &DAT_123bedd8;
      }
      param_1 = &PTR_FUN_11da54a8;
      if ((iVar6 < 0) || ((int)(puVar4[6] - puVar4[5]) >> 2 <= iVar6)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(puVar4[5] + iVar6 * 4);
      }
      if (*(char *)(iVar5 + 0x10) != '\0') {
        CNpcSaleInfo__GetManagers_1168f070(uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



/* --- CMonsterInfo::GetManagers_119e6e10 @ 119e6e10 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// strings:
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo"" */

undefined4 * CMonsterInfo__GetManagers_119e6e10(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11dc8ee8;
  if ((DAT_123bee5c & 1) == 0) {
    DAT_123bee5c = DAT_123bee5c | 1;
    FUN_102500e0("CMonsterInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70e30);
  }
  if (((*DAT_123bee60 == 0) && (iVar1 = FUN_11679e10(&local_8,"CMonsterInfo",0), iVar1 == 0)) &&
     ((DAT_123bedd4 & 1) == 0)) {
    DAT_123beddc = 0;
    DAT_123bedec = 0;
    DAT_123bedf0 = 0;
    _DAT_123bedf4 = 0;
    DAT_123bedf8 = 0;
    DAT_123bedd4 = DAT_123bedd4 | 1;
    DAT_123bede0 = 0;
    _DAT_123bede4 = 0;
    _DAT_123bede8 = 0;
    DAT_123bedd8 = &PTR_FUN_11dc8ef0;
    DAT_123bedfc = _DAT_11de9ae0;
    DAT_123bee00 = _UNK_11de9ae4;
    uRam123bee04 = _UNK_11de9ae8;
    DAT_123bee08 = _UNK_11de9aec;
    DAT_123bee0c = 1;
    FUN_11a8911f(&LAB_11cb5040);
  }
  local_8 = &PTR_FUN_11dc8ee8;
  if ((DAT_123bee5c & 1) == 0) {
    DAT_123bee5c = DAT_123bee5c | 1;
    FUN_102500e0("CMonsterInfo::GetManagers");
    FUN_11a8911f(&LAB_11c70e30);
  }
  puVar2 = (undefined4 *)*DAT_123bee60;
  if ((puVar2 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_11679e10(&local_8,"CMonsterInfo",0), puVar2 == (undefined4 *)0x0))
  {
    if ((DAT_123bedd4 & 1) == 0) {
      DAT_123beddc = 0;
      DAT_123bedec = 0;
      DAT_123bedf0 = 0;
      _DAT_123bedf4 = 0;
      DAT_123bedf8 = 0;
      DAT_123bedd4 = DAT_123bedd4 | 1;
      DAT_123bede0 = 0;
      _DAT_123bede4 = 0;
      _DAT_123bede8 = 0;
      DAT_123bedd8 = &PTR_FUN_11dc8ef0;
      DAT_123bedfc = _DAT_11de9ae0;
      DAT_123bee00 = _UNK_11de9ae4;
      uRam123bee04 = _UNK_11de9ae8;
      DAT_123bee08 = _UNK_11de9aec;
      DAT_123bee0c = 1;
      FUN_11a8911f(&LAB_11cb5040);
    }
    puVar2 = &DAT_123bedd8;
  }
  return puVar2;
}



/* --- CMonsterInfo::GetManagers_11a389b0 @ 11a389b0 --- */
// [RE-AUTO c3]
// id: CMonsterInfo::GetManagers
// strings:
//   ""CMonsterInfo::GetManagers""
//   ""CMonsterInfo""
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""CMHLevelInfo::GetManagers""
//   ""CMHLevelInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CMonsterInfo::GetManagers
   strings:
     ""CMonsterInfo::GetManagers""
     ""CMonsterInfo""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""CMHLevelInfo::GetManagers""
     ""CMHLevelInfo"" */

void __fastcall CMonsterInfo__GetManagers_11a389b0(int param_1)

{
  int iVar1;
  undefined **local_8;
  
  if ((*(int *)(param_1 + 0x14) == 4) && (*(int *)(param_1 + 0x1c) != -1)) {
    local_8 = &PTR_FUN_11dc8ee8;
    if ((DAT_123bee5c & 1) == 0) {
      DAT_123bee5c = DAT_123bee5c | 1;
      FUN_102500e0("CMonsterInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70e30);
    }
    if (((*DAT_123bee60 == 0) && (iVar1 = FUN_11679e10(&local_8,"CMonsterInfo",0), iVar1 == 0)) &&
       ((DAT_123bedd4 & 1) == 0)) {
      DAT_123bedd4 = DAT_123bedd4 | 1;
      FUN_107e0630();
      FUN_11a8911f(&LAB_11cb6610);
    }
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    local_8 = &PTR_FUN_11dbea04;
    if ((DAT_123be358 & 1) == 0) {
      DAT_123be358 = DAT_123be358 | 1;
      FUN_102500e0("CBuffInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6f220);
    }
    if (((*DAT_123be35c == 0) && (iVar1 = FUN_11679e10(&local_8,"CBuffInfo",0), iVar1 == 0)) &&
       ((DAT_123be308 & 1) == 0)) {
      DAT_123be2d4 = 0;
      DAT_123be2e4 = 0;
      DAT_123be2e8 = 0;
      _DAT_123be2ec = 0;
      DAT_123be2f0 = 0;
      DAT_123be308 = DAT_123be308 | 1;
      DAT_123be2d8 = 0;
      _DAT_123be2dc = 0;
      _DAT_123be2e0 = 0;
      _DAT_123be2d0 = &PTR_FUN_11dbea14;
      DAT_123be2f4 = _DAT_11de9ae0;
      DAT_123be2f8 = _UNK_11de9ae4;
      uRam123be2fc = _UNK_11de9ae8;
      DAT_123be300 = _UNK_11de9aec;
      DAT_123be304 = 1;
      FUN_11a8911f(&LAB_11cb6550);
    }
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    local_8 = &PTR_FUN_11dbea04;
    if ((DAT_123be358 & 1) == 0) {
      DAT_123be358 = DAT_123be358 | 1;
      FUN_102500e0("CBuffInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6f220);
    }
    if (((*DAT_123be35c == 0) && (iVar1 = FUN_11679e10(&local_8,"CBuffInfo",0), iVar1 == 0)) &&
       ((DAT_123be308 & 1) == 0)) {
      DAT_123be2d4 = 0;
      DAT_123be2e4 = 0;
      DAT_123be2e8 = 0;
      _DAT_123be2ec = 0;
      DAT_123be2f0 = 0;
      DAT_123be308 = DAT_123be308 | 1;
      DAT_123be2d8 = 0;
      _DAT_123be2dc = 0;
      _DAT_123be2e0 = 0;
      _DAT_123be2d0 = &PTR_FUN_11dbea14;
      DAT_123be2f4 = _DAT_11de9ae0;
      DAT_123be2f8 = _UNK_11de9ae4;
      uRam123be2fc = _UNK_11de9ae8;
      DAT_123be300 = _UNK_11de9aec;
      DAT_123be304 = 1;
      FUN_11a8911f(&LAB_11cb6550);
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    local_8 = &PTR_FUN_11dc893c;
    if ((DAT_123bec98 & 1) == 0) {
      DAT_123bec98 = DAT_123bec98 | 1;
      FUN_102500e0("CMHLevelInfo::GetManagers");
      FUN_11a8911f(&LAB_11c70cf0);
    }
    if (((*DAT_123bec7c == 0) && (iVar1 = FUN_11679e10(&local_8,"CMHLevelInfo",0), iVar1 == 0)) &&
       ((DAT_123bec74 & 1) == 0)) {
      DAT_123beca0 = 0;
      DAT_123becb0 = 0;
      DAT_123becb4 = 0;
      _DAT_123becb8 = 0;
      DAT_123becbc = 0;
      DAT_123bec74 = DAT_123bec74 | 1;
      DAT_123beca4 = 0;
      _DAT_123beca8 = 0;
      _DAT_123becac = 0;
      DAT_123bec9c = &PTR_FUN_11dc8960;
      DAT_123becc0 = _DAT_11de9ae0;
      DAT_123becc4 = _UNK_11de9ae4;
      uRam123becc8 = _UNK_11de9ae8;
      DAT_123beccc = _UNK_11de9aec;
      DAT_123becd0 = 1;
      FUN_11a8911f(&LAB_11cb65b0);
    }
  }
  return;
}



