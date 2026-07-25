// FUN_10258170 @ 10258170  (1732 bytes)
// CAnimSequencePlay param indices referenced: [0, 1, 2, 3, 4, 5, 12, 16, 18, 19, 20, 24, 27, 28]


/* [RE-AUTO c0]
   calls: tolower
   strings:
     ""HealthLoss""
     ""AbnormalHandleType"" */

void __thiscall FUN_10258170(int param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  int unaff_ESI;
  uint uVar9;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined1 auStack_54 [12];
  uint *puStack_48;
  uint *puStack_44;
  undefined1 *puStack_40;
  undefined1 auStack_3c [12];
  undefined4 **ppuStack_30;
  char *pcStack_2c;
  undefined1 *puStack_28;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_6c;
  if (*(char *)(param_1 + 0x170) == '\0') goto LAB_1025881e;
  uVar9 = *param_2;
  local_5c = uVar9 - 0x89a;
  local_64 = uVar9;
  if (0xbb < local_5c) {
    if (0x18 < uVar9 - 0x516) goto LAB_1025881e;
    local_5c = uVar9 - 0x45a;
  }
  if (((int)local_5c < 0) ||
     ((*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c)) / 0xc <= (int)local_5c))
  goto LAB_1025881e;
  cVar3 = (char)((uint)unaff_EBX >> 0x18);
  if (uVar9 == 0x528) {
    uVar4 = FUN_113168d0("HealthLoss",&local_60);
    cVar2 = FUN_1046dc90(uVar4);
    if (cVar2 != '\0') {
      uVar9 = param_2[4];
      local_58 = *(int *)(param_1 + 0x280) - uVar9;
      FUN_1025bd00(local_60,&local_58);
      *(uint *)(param_1 + 0x280) = uVar9;
      uVar9 = local_64;
    }
LAB_1025824d:
    local_5c = local_5c * 0xc;
    local_64 = *(int *)(param_1 + 0x10c) + local_5c;
    iVar5 = FUN_1025a520();
    if (iVar5 == 0) goto LAB_1025881e;
    if (uVar9 == 0x516) {
      FUN_104b57b0(0);
      iVar5 = (**(code **)(**(int **)(local_60 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
      if (iVar5 == 1) {
        param_2[4] = 0;
        param_2[5] = 1;
      }
      goto LAB_1025881e;
    }
    if (((uVar9 == 0x521) || (uVar9 == 0x51b)) || (uVar9 == 0x519)) {
      uStack_68 = uStack_68 & 0xffffff;
      FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
      if (cVar3 != '\0') goto LAB_102582fc;
      piVar8 = (int *)(**(code **)(**(int **)(DAT_123bb90c + 0x10) + 8))
                                (*(undefined4 *)(param_1 + 300));
      if (piVar8 != (int *)0x0) {
        piVar8 = (int *)(**(code **)(*piVar8 + 4))();
        iVar5 = (**(code **)(*piVar8 + 0x10))();
        if ((iVar5 != 0) && (iVar5 != -0x1288)) {
          local_60 = param_2[5];
          local_58 = param_2[6];
          if ((param_2[4] != 0xffffffff) && (iVar5 = FUN_11429ec0(param_2[4]), iVar5 != 0)) {
            FUN_11427e40(auStack_3c);
            puStack_48 = &local_58;
            local_58 = local_58 & 0xffffff00;
            puStack_44 = puStack_48;
            iVar5 = tolower((int)*pcStack_2c);
            uStack_68 = CONCAT31(uStack_68._1_3_,(char)iVar5);
            FUN_1025b1c0(extraout_ECX,uStack_68);
            iVar5 = FUN_100ede30(&ppuStack_30,1,0xffffffff);
            FUN_100d9260(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x10));
            if ((ppuStack_30 != &puStack_44) && (ppuStack_30 != (uint **)0x0)) {
              FUN_10c3d5d0(ppuStack_30);
            }
            uVar4 = FUN_11316810(&stack0xffffff8c);
            FUN_1025bc60(*(undefined4 *)(param_1 + 0x228),uVar4);
            if ((puStack_40 != auStack_54) && (puStack_40 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_40);
            }
            if ((puStack_28 != auStack_3c) && (puStack_28 != (undefined1 *)0x0)) {
              FUN_10c3d5d0(puStack_28);
            }
          }
          if (local_60 != 0xffffffff) {
            local_64 = local_60;
            FUN_1025bc30(*(undefined4 *)(param_1 + 0x26c),&local_64);
          }
          if (local_58 != 0xffffffff) {
            local_64 = local_58;
            FUN_1025bc30(*(undefined4 *)(param_1 + 0x270),&local_64);
          }
          param_2[7] = 1;
          FUN_104b57b0(0);
          iVar5 = (**(code **)(**(int **)(local_60 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
          if (iVar5 == 1) {
            param_2[7] = 0;
            uVar4 = FUN_113168d0("AbnormalHandleType",&local_60);
            cVar3 = FUN_1046dc90(uVar4);
            if (cVar3 != '\0') {
              FUN_1025bd00(uStack_6c,&stack0xffffff90);
            }
            piVar8 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2c) + 0x128))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0xc))
                                      (&stack0xffffff90,*(undefined4 *)(param_1 + 300));
            piVar8 = (int *)*piVar8;
            SmartPtr__ReleaseMember_1025aab0();
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x28))(param_2);
            }
          }
          goto LAB_1025881e;
        }
      }
    }
    uVar9 = local_5c;
    FUN_104b57b0(0);
    (**(code **)(**(int **)(uVar9 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
  }
  else {
    if (uVar9 != 0x51c) {
      if (uVar9 == 0x51d) {
        uVar9 = param_2[4];
        uStack_68 = uStack_68 & 0xffffff;
        local_64 = uVar9;
        FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
        if ((((uVar9 == 6) || (uVar9 == 5)) || (uVar9 == 4)) || ((uVar9 == 3 || (uVar9 == 0x12)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((uStack_68._3_1_ == '\0') || (!bVar1)) {
          if (uVar9 != 0xffffffff) {
            FUN_1025bd00(*(undefined4 *)(param_1 + 0x260),&local_64);
          }
          FUN_10256f40();
          iVar5 = FUN_10256f10();
          iVar7 = FUN_1025a520();
          if (iVar7 == 0) goto LAB_1025881e;
          param_2[7] = 1;
          FUN_104b57b0(0);
          iVar5 = (**(code **)(**(int **)(iVar5 * 0xc + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
          if (iVar5 != 1) goto LAB_1025881e;
        }
        param_2[7] = 0;
        goto LAB_1025881e;
      }
      goto LAB_1025824d;
    }
    local_64 = param_2[4];
    uStack_68 = uStack_68 & 0xffffff;
    local_5c = local_64;
    FUN_1025bef0(*(undefined4 *)(param_1 + 0x25c),(int)&uStack_68 + 3);
    if ((cVar3 == '\0') || (local_64 == 6)) {
      if (local_64 != 0xffffffff) {
        FUN_1025bd00(*(undefined4 *)(param_1 + 0x260),&uStack_6c);
      }
      uStack_68 = param_2[6];
      if (uStack_68 != 0xffffffff) {
        FUN_1046e900(*(undefined4 *)(param_1 + 0x278));
        iVar5 = FUN_1046e900(*(undefined4 *)(param_1 + 0x274));
        if ((unaff_ESI != 0) && (iVar5 != 0)) {
          FUN_10468510(unaff_ESI);
        }
        FUN_1025bd00(*(undefined4 *)(param_1 + 0x278),&stack0xffffff90);
      }
      FUN_10256f40();
      iVar5 = FUN_10256f10();
      local_64 = iVar5 * 0xc;
      if ((*(int *)(*(int *)(param_1 + 0x10c) + 4 + local_64) != 0) &&
         (*(int *)(*(int *)(param_1 + 0x10c) + local_64) != 0)) {
        param_2[7] = 1;
        FUN_104b57b0(0);
        iVar5 = (**(code **)(**(int **)(uStack_68 + 8 + *(int *)(param_1 + 0x10c)) + 4))(1);
        if (iVar5 == 1) {
          param_2[7] = 0;
          uVar4 = FUN_113168d0("AbnormalHandleType",&local_60);
          cVar3 = FUN_1046dc90(uVar4);
          if (cVar3 != '\0') {
            FUN_1025bd00(uStack_6c,&stack0xffffff90);
          }
          piVar8 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x2c) + 0x128))();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
          puVar6 = (undefined4 *)
                   (**(code **)(*piVar8 + 0xc))(&stack0xffffff90,*(undefined4 *)(param_1 + 300));
          piVar8 = (int *)*puVar6;
          SmartPtr__ReleaseMember_1025aab0();
          (**(code **)(*piVar8 + 0x28))(param_2);
        }
      }
      goto LAB_1025881e;
    }
LAB_102582fc:
    param_2[7] = 0;
    uVar4 = FUN_113168d0("AbnormalHandleType",&uStack_68);
    cVar3 = FUN_1046dc90(uVar4);
    if (cVar3 != '\0') {
      local_64 = 1;
      FUN_1025bd00(local_60,&local_64);
    }
  }
LAB_1025881e:
  FUN_11a89daa();
  return;
}

