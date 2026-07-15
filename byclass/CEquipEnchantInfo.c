// ===== class CEquipEnchantInfo  (2 recovered methods) =====

/* --- CEquipEnchantInfo::GetManagers @ 1050ecd0 --- */
// [RE-AUTO c3]
// id: CEquipEnchantInfo::GetManagers
// strings:
//   ""CEquipEnchantInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CEquipEnchantInfo::GetManagers
   strings:
     ""CEquipEnchantInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CEquipEnchantInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be4f4 & 1) == 0) {
    DAT_123be4f4 = DAT_123be4f4 | 1;
    _DAT_123be50c = &DAT_123be4fc;
    DAT_123be510 = &DAT_123be4fc;
    DAT_123be4fc = 0;
    FUN_100d83d0("CEquipEnchantInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6f680);
  }
  return DAT_123be4f8;
}



/* --- CEquipEnchantInfo::GetManagers_112a5b80 @ 112a5b80 --- */
// [RE-AUTO c3]
// id: CEquipEnchantInfo::GetManagers
// calls: __alloca_probe, memset, memcpy, atoi
// strings:
//   ""CEquipEnchantInfo::GetManagers""
//   ""CEquipEnchantInfo""

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfff6afe3 : 0x112a5e44 */
/* WARNING: Removing unreachable block (ram,0x112a5e3d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [RE-AUTO c3]
   id: CEquipEnchantInfo::GetManagers
   calls: __alloca_probe, memset, memcpy, atoi
   strings:
     ""CEquipEnchantInfo::GetManagers""
     ""CEquipEnchantInfo"" */

void CEquipEnchantInfo__GetManagers_112a5b80
               (undefined4 param_1,undefined4 param_2,undefined **param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined **_Src;
  undefined **ppuVar15;
  int iVar16;
  int iVar17;
  size_t _Size;
  int *piVar18;
  ushort *puVar19;
  float10 fVar20;
  int *piStack_9503c;
  int *piStack_95038;
  undefined4 uStack_95034;
  undefined1 uStack_9502d;
  undefined **ppuStack_9502c;
  ushort *puStack_95028;
  undefined **ppuStack_95024;
  byte bStack_9501d;
  undefined4 uStack_9501c;
  undefined4 uStack_95018;
  undefined4 uStack_95014;
  float fStack_95010;
  int iStack_9500c;
  undefined4 uStack_95008;
  undefined4 uStack_95004;
  undefined4 uStack_95000;
  undefined4 uStack_94ffc;
  undefined4 uStack_94ff8;
  undefined4 uStack_94ff4;
  undefined4 uStack_94ff0;
  undefined4 uStack_94fec;
  undefined4 uStack_94fe8;
  undefined4 uStack_94fe4;
  undefined4 uStack_94fe0;
  undefined4 uStack_94fdc;
  undefined4 uStack_94fd8;
  undefined4 uStack_94fd4;
  undefined4 uStack_94fd0;
  undefined4 uStack_94fcc;
  undefined4 uStack_94fc8;
  undefined4 uStack_94fc4;
  undefined1 auStack_94fc0 [256];
  undefined4 uStack_94ec0;
  undefined4 uStack_94ebc;
  int iStack_94eb8;
  uint auStack_94eb4 [2];
  undefined1 auStack_94eac [32];
  undefined4 auStack_94e8c [3];
  undefined1 auStack_94e80 [32];
  undefined4 uStack_94e60;
  undefined1 auStack_94e5c [4];
  undefined4 auStack_94e58 [2];
  undefined1 auStack_94e50 [4];
  uint auStack_94e4c [10];
  undefined1 auStack_94e24 [64];
  int aiStack_94de4 [312];
  int aiStack_94904 [128];
  int aiStack_94704 [128];
  ushort auStack_94504 [256];
  undefined *apuStack_94304 [620];
  int aiStack_93954 [25];
  int aiStack_938f0 [20];
  undefined4 uStack_938a0;
  undefined4 uStack_9389c;
  undefined4 uStack_93898;
  int iStack_93894;
  uint uStack_93890;
  byte bStack_9388c;
  undefined4 uStack_93888;
  int iStack_93884;
  int iStack_93880;
  int iStack_9387c;
  int iStack_93878;
  int iStack_93874;
  int iStack_93870;
  undefined4 uStack_9386c;
  uint uStack_93868;
  undefined4 auStack_93064 [201];
  int iStack_92d40;
  undefined4 auStack_92d3c [33022];
  ushort uStack_72944;
  ushort auStack_72935 [233204];
  byte local_b4c;
  byte local_b4b;
  int *local_30c;
  int local_14c;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  ppuStack_9502c = param_3;
  FUN_112977d0();
  if (*param_3 != (undefined *)0x0) {
    if (*param_3 == (undefined *)0xfffffffe) {
      FUN_1112ef90(0x14d5);
    }
    goto LAB_112a6865;
  }
  memset(&uStack_9501c,0,0x226d8);
  aiStack_93954[0] = 0;
  aiStack_93954[1] = 0;
  aiStack_93954[2] = 0;
  aiStack_93954[3] = 0;
  aiStack_93954[4] = 0;
  aiStack_93954[5] = 0;
  aiStack_93954[6] = 0;
  aiStack_93954[7] = 0;
  aiStack_93954[8] = 0;
  aiStack_93954[9] = 0;
  aiStack_93954[10] = 0;
  aiStack_93954[0xb] = 0;
  aiStack_93954[0xc] = 0;
  aiStack_93954[0xd] = 0;
  aiStack_93954[0xe] = 0;
  aiStack_93954[0xf] = 0;
  aiStack_93954[0x10] = 0;
  aiStack_93954[0x11] = 0;
  aiStack_93954[0x12] = 0;
  aiStack_93954[0x13] = 0;
  aiStack_93954[0x14] = 0;
  aiStack_93954[0x15] = 0;
  aiStack_93954[0x16] = 0;
  aiStack_93954[0x17] = 0;
  memset(aiStack_93954,0,0x60);
  FUN_113b2190(param_3 + 0x473,*(undefined2 *)(param_3 + 0x40e));
  uStack_95004 = FUN_1134b310();
  uStack_95008 = FUN_1134b7d0();
  uStack_9501c = FUN_1134b990();
  uStack_95014 = FUN_1134bbf0();
  uStack_94ff8 = FUN_1134c950();
  uStack_94ffc = FUN_1134ca10();
  uStack_94fe4 = FUN_1134d100();
  uStack_94fc8 = FUN_1134d2a0();
  uStack_95000 = FUN_11398d70();
  uStack_94fd4 = FUN_1134e930();
  uStack_94fe8 = FUN_1134fae0();
  uStack_94fc4 = FUN_1134fc60();
  uStack_94fec = FUN_11350570();
  uStack_94fcc = FUN_11350630();
  uStack_94fd8 = FUN_11351820();
  fVar20 = (float10)FUN_113521b0();
  ppuStack_95024 = (undefined **)(float)fVar20;
  iStack_9500c = (int)fVar20;
  FUN_100ebf60(auStack_94fc0,0x100,param_3 + 3);
  uStack_94fe0 = FUN_113523d0();
  uStack_94ec0 = FUN_1025b060();
  uStack_94fdc = FUN_11353940();
  uStack_94ff0 = FUN_11355fa0();
  uStack_94fd0 = FUN_11356120();
  uStack_95018 = FUN_1025b060();
  fVar20 = (float10)FUN_10268440();
  fStack_95010 = (float)fVar20;
  uStack_94ff4 = FUN_1134e7b0();
  uStack_938a0 = FUN_1025b060();
  uStack_9389c = FUN_1025b060();
  uStack_93898 = FUN_1025b060();
  bStack_9501d = local_b4b ^ local_b4c;
  bStack_9388c = bStack_9501d;
  uStack_93888 = FUN_1025b060();
  sVar4 = FUN_108e1140();
  iStack_93884 = (int)sVar4;
  sVar4 = FUN_108e1140();
  iStack_93880 = (int)sVar4;
  sVar4 = FUN_108e1140();
  iStack_9387c = (int)sVar4;
  sVar4 = FUN_108e1140();
  iStack_93878 = (int)sVar4;
  sVar4 = FUN_108e1140();
  iStack_93874 = (int)sVar4;
  sVar4 = FUN_108e1140();
  iStack_93870 = (int)sVar4;
  uVar5 = FUN_1025b060();
  uVar12 = (uint)*(ushort *)((int)param_3 + 0x103a);
  uStack_93890 = uVar5 & 0xffffff;
  iStack_93894 = (int)uVar5 >> 0x18;
  uStack_9386c = *(undefined4 *)((int)param_3 + 0x32);
  uStack_94ebc = 0;
  iStack_94eb8 = 0;
  ppuVar14 = param_3;
  uStack_93868 = uVar12;
  if (uVar12 != 0) {
    puStack_95028 = (ushort *)((int)auStack_94504 + -(int)param_3);
    ppuStack_95024 = (undefined **)((int)apuStack_94304 + -(int)param_3);
    ppuVar15 = param_3 + 0x428;
    do {
      ppuVar14 = ppuVar15 + 1;
      *(undefined **)((int)aiStack_94de4 + (0x4dc - (int)param_3) + (int)ppuVar14) = ppuVar15[-0x19]
      ;
      *(undefined **)((int)aiStack_94904 + (0x1fc - (int)param_3) + (int)ppuVar14) = *ppuVar15;
      *(undefined **)((int)aiStack_94704 + -(int)param_3 + 0x1fc + (int)ppuVar14) = ppuVar15[0x19];
      *(undefined **)((int)auStack_94504 + -(int)param_3 + 0x1fc + (int)ppuVar14) = ppuVar15[0x32];
      uVar12 = uVar12 - 1;
      ppuVar15 = ppuVar14;
      ppuVar14 = ppuStack_9502c;
    } while (uVar12 != 0);
  }
  FUN_115721d0(ppuVar14 + 0x1894,ppuVar14[0x1893]);
  ppuVar15 = (undefined **)0x0;
  ppuStack_95024 = (undefined **)0x0;
  iVar16 = *(int *)(local_14c + 8);
  if (iVar16 != local_14c) {
    piVar8 = &iStack_92d40;
    puStack_95028 = (ushort *)0x0;
    do {
      if ((int)ppuVar15 < 0x80) {
        iVar17 = 0;
        piVar8[-1] = *(int *)(iVar16 + 0x10);
        uVar5 = 0;
        if (*(int *)(iVar16 + 0x20) - *(int *)(iVar16 + 0x1c) >> 3 != 0) {
          do {
            *piVar8 = *piVar8 + 1;
            if ((iVar17 < 0x100) && (*(char *)(*(int *)(iVar16 + 0x1c) + 4 + uVar5 * 8) != '\0')) {
              iVar13 = (int)puStack_95028 + iVar17;
              iVar17 = iVar17 + 1;
              auStack_92d3c[iVar13] = *(undefined4 *)(*(int *)(iVar16 + 0x1c) + uVar5 * 8);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)(*(int *)(iVar16 + 0x20) - *(int *)(iVar16 + 0x1c) >> 3));
        }
        piVar8 = piVar8 + 0x102;
        ppuVar15 = (undefined **)((int)ppuStack_95024 + 1);
        puStack_95028 = puStack_95028 + 0x81;
        ppuStack_95024 = ppuVar15;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      if (iVar17 == 0) {
        iVar17 = *(int *)(iVar16 + 4);
        if (iVar16 == *(int *)(iVar17 + 0xc)) {
          do {
            iVar16 = iVar17;
            iVar17 = *(int *)(iVar16 + 4);
          } while (iVar16 == *(int *)(iVar17 + 0xc));
        }
        if (*(int *)(iVar16 + 0xc) != iVar17) {
          iVar16 = iVar17;
        }
      }
      else {
        for (iVar13 = *(int *)(iVar17 + 8); iVar16 = iVar17, iVar13 != 0;
            iVar13 = *(int *)(iVar13 + 8)) {
          iVar17 = iVar13;
        }
      }
      ppuVar14 = ppuStack_9502c;
    } while (iVar16 != local_14c);
  }
  if (local_30c != (int *)0x0) {
    FUN_11413dc0(ppuVar14 + 0x2295,ppuVar14[0x2294]);
    iVar16 = 0;
    iVar13 = FUN_11413650();
    iVar17 = *(int *)(iVar13 + 8);
    while (iVar17 != iVar13) {
      if (iVar16 < 200) {
        auStack_93064[iVar16] = *(undefined4 *)(iVar17 + 0x10);
        iVar16 = iVar16 + 1;
      }
      iVar6 = *(int *)(iVar17 + 0xc);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar17 + 4);
        if (iVar17 == *(int *)(iVar6 + 0xc)) {
          do {
            iVar17 = iVar6;
            iVar6 = *(int *)(iVar17 + 4);
          } while (iVar17 == *(int *)(iVar6 + 0xc));
        }
        if (*(int *)(iVar17 + 0xc) != iVar6) {
          iVar17 = iVar6;
        }
      }
      else {
        for (iVar2 = *(int *)(iVar6 + 8); iVar17 = iVar6, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
          iVar6 = iVar2;
        }
      }
    }
  }
  _Src = ppuVar14 + 0x1873;
  piStack_9503c = (int *)0x0;
  local_10 = local_20;
  piStack_95038 = (int *)0x0;
  uStack_95034 = 0;
  ppuVar15 = _Src;
  do {
    cVar3 = *(char *)ppuVar15;
    ppuVar15 = (undefined **)((int)ppuVar15 + 1);
  } while (cVar3 != '\0');
  ppuStack_95024 = (undefined **)((int)_Src + ((int)ppuVar15 - ((int)ppuVar14 + 0x61cd)));
  _Size = (int)ppuStack_95024 - (int)_Src;
  uVar5 = _Size + 1;
  local_c = local_10;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_100b73e0();
  }
  if (0x10 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_10c3d580(uVar5);
  }
  if (ppuStack_95024 != _Src) {
    pvVar7 = memcpy(local_10,_Src,_Size);
    local_10 = (undefined1 *)(_Size + (int)pvVar7);
  }
  *local_10 = 0;
  FUN_100e4b30(local_20,&piStack_9503c,0x2c);
  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
    FUN_10c3d5d0(local_c);
  }
  iVar17 = 0;
  iVar16 = ((int)piStack_95038 - (int)piStack_9503c) / 0x18;
  aiStack_93954[0x18] = 0x14;
  if (iVar16 < 0x14) {
    aiStack_93954[0x18] = iVar16;
  }
  piVar8 = piStack_9503c;
  if (piStack_95038 != piStack_9503c) {
    do {
      if (0x13 < iVar17) break;
      iVar16 = atoi((char *)piVar8[5]);
      piVar8 = piVar8 + 6;
      aiStack_938f0[iVar17] = iVar16;
      iVar17 = iVar17 + 1;
    } while (piVar8 != piStack_95038);
    piVar8 = piStack_9503c;
    if (piStack_95038 != piStack_9503c) {
      piVar18 = piStack_95038 + -1;
      do {
        piVar1 = (int *)*piVar18;
        if ((piVar1 != piVar18 + -5) && (piVar1 != (int *)0x0)) {
          FUN_10c3d5d0(piVar1);
        }
        piVar1 = piVar18 + -5;
        piVar18 = piVar18 + -6;
      } while (piVar1 != piVar8);
    }
  }
  if (piStack_9503c != (int *)0x0) {
    FUN_10c3d5d0(piStack_9503c);
  }
  FUN_1010ec80();
  if (*(short *)((int)ppuStack_9502c + 0x36) == 0) {
LAB_112a6309:
    ppuStack_95024 = (undefined **)0x0;
    if (uStack_72944 != 0) {
      puVar19 = auStack_72935;
      do {
        if ((DAT_12038f04 & 1) == 0) {
          DAT_12038f04 = DAT_12038f04 | 1;
          _DAT_12038f00 = 0;
          DAT_12038f02 = 0;
        }
        puStack_95028 = puVar19;
        piVar8 = (int *)FUN_11669090(*(undefined4 *)((int)puVar19 + -5),&DAT_12038f00);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 4))((int)puVar19 + -0xd);
          if (((*(char *)((int)puVar19 + -1) == '\b') || (*(char *)((int)puVar19 + -1) == '\x03'))
             && (uVar5 = (uint)*puVar19, uVar5 < 0x18)) {
            aiStack_93954[uVar5] = (int)piVar8;
            ppuStack_9502c = (undefined **)(uVar5 * 0xe4);
            uVar9 = FUN_11669730();
            auStack_94e8c[uVar5 * 0x39] = uVar9;
            uVar9 = (**(code **)(*piVar8 + 0xc))();
            auStack_94e8c[uVar5 * 0x39 + 1] = uVar9;
            uVar9 = FUN_11669780();
            auStack_94e8c[uVar5 * 0x39 + 2] = uVar9;
            FUN_11669880();
            uVar12 = FUN_11a897a0();
            auStack_94e4c[uVar5 * 0x39 + 4] = uVar12;
            auStack_94eb4[uVar5 * 0x39] = (uint)*(byte *)((int)puVar19 + -1);
            auStack_94eb4[uVar5 * 0x39 + 1] = (uint)*puVar19;
            iVar16 = FUN_11669250();
            puVar11 = &DAT_11d9d32b;
            if (*(undefined1 **)(iVar16 + 0x14) != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)(iVar16 + 0x14);
            }
            FUN_100ec080(auStack_94eac + (int)(uVar5 * 0xe4),0x20,puVar11,0x20);
            iVar17 = FUN_11669250();
            iVar16 = *(int *)(iVar17 + 0xb0);
            iVar17 = *(int *)(iVar17 + 0xb4);
            iVar13 = FUN_11669250();
            ppuVar14 = ppuStack_9502c;
            FUN_100ec080(auStack_94e80 + (int)ppuStack_9502c,0x20,*(undefined4 *)(iVar13 + 0xb4),
                         iVar16 - iVar17);
            uVar9 = FUN_116693d0();
            *(undefined4 *)((int)&uStack_94e60 + (int)ppuVar14) = uVar9;
            iVar16 = FUN_11669250();
            auStack_94e5c[(int)ppuVar14] = *(undefined1 *)(iVar16 + 0x68);
            iVar16 = FUN_11669250();
            (auStack_94e5c + 1)[(int)ppuVar14] = *(int *)(iVar16 + 0x9c) != 0;
            iVar16 = FUN_11669250();
            *(undefined4 *)(auStack_94e5c + 4 + (int)ppuVar14) = *(undefined4 *)(iVar16 + 0x38);
            iVar16 = FUN_11669250();
            *(undefined4 *)((int)(auStack_94e58 + 1) + (int)ppuVar14) =
                 *(undefined4 *)(iVar16 + 0x3c);
            auStack_94e50[(int)ppuVar14] = 0;
            cVar3 = FUN_11669930();
            if (cVar3 != '\0') {
              iVar16 = FUN_11671b30();
              if (iVar16 != 0) {
                auStack_94e50[(int)ppuVar14] = 1;
              }
              uVar9 = FUN_11671aa0();
              *(undefined4 *)((int)(auStack_94e4c + 2) + (int)ppuVar14) = uVar9;
              uVar9 = FUN_11671a80();
              *(undefined4 *)((int)(auStack_94e4c + 3) + (int)ppuVar14) = uVar9;
              uVar9 = FUN_11671c00();
              *(undefined4 *)((int)(auStack_94e4c + 5) + (int)ppuVar14) = uVar9;
              uVar9 = FUN_11671b30();
              *(undefined4 *)((int)(auStack_94e4c + 6) + (int)ppuVar14) = uVar9;
            }
            uVar9 = FUN_11669350();
            *(undefined4 *)((int)(auStack_94e4c + 7) + (int)ppuVar14) = uVar9;
            uVar9 = (**(code **)(*piVar8 + 0x2c))();
            *(undefined4 *)((int)auStack_94e4c + (int)ppuVar14) = uVar9;
            *(uint *)((int)(auStack_94e4c + 1) + (int)ppuVar14) = (uint)(piVar8[8] != 0);
            uVar5 = FUN_11668f60();
            *(uint *)((int)(auStack_94e4c + 8) + (int)ppuVar14) = uVar5 & 0xff;
            cVar3 = FUN_116698a0();
            if ((cVar3 == '\0') && (cVar3 = FUN_11669950(), cVar3 == '\0')) {
              *(undefined4 *)((int)(auStack_94e4c + 9) + (int)ppuVar14) = 0xffffffff;
              FUN_100ec080(auStack_94e24 + (int)ppuVar14,0x40,&DAT_11d9d32b,0x40);
            }
            else {
              iVar16 = (**(code **)(*piVar8 + 0x3c))();
              ppuStack_9502c = &PTR_FUN_11dbffd0;
              if ((DAT_123be4f4 & 1) == 0) {
                DAT_123be4f4 = DAT_123be4f4 | 1;
                FUN_102500e0("CEquipEnchantInfo::GetManagers");
                FUN_11a8911f(&LAB_11c6f680);
              }
              puVar10 = (undefined *)*DAT_123be4f8;
              if ((puVar10 == (undefined *)0x0) &&
                 (puVar10 = (undefined *)FUN_11679e10(&ppuStack_9502c,"CEquipEnchantInfo",0),
                 puVar10 == (undefined *)0x0)) {
                if ((DAT_123be47c & 1) == 0) {
                  DAT_123be484 = 0;
                  DAT_123be494 = 0;
                  uRam123be498 = 0;
                  _DAT_123be49c = 0;
                  DAT_123be4a0 = 0;
                  DAT_123be47c = DAT_123be47c | 1;
                  _DAT_123be480 = &PTR_FUN_11dc0024;
                  DAT_123be4a4 = _DAT_11de9ae0;
                  DAT_123be4a8 = _UNK_11de9ae4;
                  uRam123be4ac = _UNK_11de9ae8;
                  DAT_123be4b0 = _UNK_11de9aec;
                  DAT_123be4b4 = 1;
                  DAT_123be488 = puVar10;
                  _DAT_123be48c = puVar10;
                  _DAT_123be490 = puVar10;
                  FUN_11a8911f(&LAB_11c99460);
                }
                puVar10 = &DAT_123be480;
              }
              ppuStack_9502c = &PTR_FUN_11da54a8;
              if ((iVar16 != -1) &&
                 ((((iVar16 != 0 || (*(int *)(puVar10 + 0x30) == 0)) &&
                   (*(int *)(puVar10 + 0x28) != 0)) &&
                  ((iVar16 = iVar16 - *(int *)(puVar10 + 0x30), -1 < iVar16 &&
                   (iVar16 < *(int *)(puVar10 + 0x24))))))) {
                iVar17 = *(int *)(*(int *)(puVar10 + 0x20) + (iVar16 / *(int *)(puVar10 + 0x28)) * 4
                                 );
                if ((iVar17 != 0) &&
                   (iVar16 = *(int *)(iVar17 + (iVar16 % *(int *)(puVar10 + 0x28)) * 4), iVar16 != 0
                   )) {
                  if (*(int *)(iVar16 + 0x30) == 0) {
                    *(undefined4 *)((int)(auStack_94e4c + 9) + (int)ppuVar14) = 0xffffffff;
                  }
                  else {
                    iVar17 = FUN_10a136c0();
                    iVar13 = (**(code **)(*piVar8 + 0x40))();
                    *(int *)((int)(auStack_94e4c + 9) + (int)ppuVar14) = iVar17 - iVar13;
                  }
                  *(undefined4 *)((int)(auStack_94e4c + 9) + (int)ppuVar14) =
                       *(undefined4 *)(iVar16 + 0x30);
                  iVar16 = FUN_100e5b40(local_20);
                  FUN_100ec080(auStack_94e24 + (int)ppuVar14,0x40,*(undefined4 *)(iVar16 + 0x14),
                               0x40);
                  if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
                    FUN_10c3d5d0(local_c);
                  }
                }
              }
            }
            cVar3 = FUN_116698a0();
            puVar19 = puStack_95028;
            if (cVar3 != '\0') {
              *(int *)((int)aiStack_94de4 + (int)ppuVar14) = piVar8[0x7d];
              *(uint *)((int)(aiStack_94de4 + 1) + (int)ppuVar14) = (uint)*(ushort *)(piVar8 + 0x7e)
              ;
              iVar16 = FUN_1166c4b0();
              *(undefined4 *)((int)(aiStack_94de4 + 2) + (int)ppuVar14) =
                   *(undefined4 *)(iVar16 + 0x290);
              iVar16 = FUN_1166c4b0();
              *(uint *)((int)(aiStack_94de4 + 3) + (int)ppuVar14) =
                   (uint)(*(int *)(iVar16 + 0x28c) != 0);
              *(uint *)((int)(aiStack_94de4 + 4) + (int)ppuVar14) = (uint)*(ushort *)(piVar8 + 0x7c)
              ;
              cVar3 = FUN_1166e270();
              if (cVar3 != '\0') {
                uStack_94ebc = (**(code **)(*piVar8 + 0x18))();
              }
              cVar3 = FUN_1166e100();
              puVar19 = puStack_95028;
              if (cVar3 != '\0') {
                iVar16 = (**(code **)(*piVar8 + 0x18))();
                iStack_94eb8 = iStack_94eb8 + iVar16;
                puVar19 = puStack_95028;
              }
            }
          }
        }
        puVar19 = (ushort *)((int)puVar19 + 0xb7);
        ppuStack_95024 = (undefined **)((int)ppuStack_95024 + 1);
        puStack_95028 = puVar19;
      } while ((int)ppuStack_95024 < (int)(uint)uStack_72944);
    }
  }
  else {
    ppuStack_95024 = (undefined **)0x0;
    iVar16 = FUN_1010f020(ppuStack_9502c + 0xe,*(short *)((int)ppuStack_9502c + 0x36),
                          &ppuStack_95024);
    if (iVar16 == 0) goto LAB_112a6309;
  }
  piVar8 = (int *)FUN_111e09f0();
  iVar16 = (**(code **)(*piVar8 + 0x28))();
  if (iVar16 != 0) {
    piVar8 = (int *)FUN_111e09f0();
    piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
    (**(code **)(*piVar8 + 0x568))(&uStack_9501c);
  }
  iVar16 = FUN_111e0a50();
  if (iVar16 != 0) {
    piVar8 = (int *)FUN_111e0a50();
    (**(code **)(*piVar8 + 4))(0x19c,&uStack_9502d);
  }
LAB_112a6865:
  (**(code **)(*local_30c + 8))();
  if (local_30c != (int *)0x0) {
    (**(code **)*local_30c)(1);
  }
  FUN_11395350();
  FUN_11a89daa();
  return;
}



