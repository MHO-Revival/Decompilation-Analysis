// ===== class CBuffInfo  (29 recovered methods) =====

/* --- CBuffInfo::GetManagers @ 104fd650 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CBuffInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123be358 & 1) == 0) {
    DAT_123be358 = DAT_123be358 | 1;
    _DAT_123be370 = &DAT_123be360;
    DAT_123be374 = &DAT_123be360;
    DAT_123be360 = 0;
    FUN_100d83d0("CBuffInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c6f220);
  }
  return DAT_123be35c;
}



/* --- CBuffInfo::GetManagers_10b04b30 @ 10b04b30 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""AddBuff""
//   ""EventName""
//   ""BuffId""
//   ""BuffType""
//   ""spAttack""
//   ""EventParam""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""AddBuff""
     ""EventName""
     ""BuffId""
     ""BuffType""
     ""spAttack""
     ""EventParam"" */

void __thiscall CBuffInfo__GetManagers_10b04b30(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *local_18 [3];
  int local_c;
  undefined **local_8;
  
  iVar8 = 0;
  piVar7 = (int *)(param_3 + 0x94);
  do {
    if (*piVar7 != 0) {
      FUN_11316910();
      local_8 = &PTR_FUN_11dbea04;
      local_18[2] = (int *)(param_3 + (iVar8 + 0x25) * 4);
      iVar8 = *local_18[2];
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar4 = (undefined *)*DAT_123be35c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CBuffInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be308 = DAT_123be308 | 1;
          FUN_105005e0();
          FUN_11a8911f(&LAB_11c80ee0);
        }
        puVar4 = &DAT_123be2d0;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar8 != -1) &&
         ((((iVar8 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)) &&
          ((iVar8 = iVar8 - *(int *)(puVar4 + 0x30), -1 < iVar8 && (iVar8 < *(int *)(puVar4 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar8 / iVar1) * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar8 % iVar1) * 4) != 0)) {
          FUN_11316b10("AddBuff");
          (**(code **)(*param_1 + 0x78))("EventName",local_c);
          (**(code **)(*param_1 + 0x6c))("BuffId",*local_18[2]);
          FUN_116a7450(local_18,2);
          iVar8 = 0;
          do {
            uVar5 = FUN_1101e0e0(local_18[iVar8]);
            FUN_113168d0(uVar5);
            piVar7 = (int *)FUN_113168d0(&DAT_11dbab60);
            if ((local_18[2] != (int *)*piVar7) &&
               ((**(code **)(*param_1 + 0x78))("BuffType",local_18[2]), param_1[10] != 0)) {
              piVar7 = (int *)FUN_100b4ca0(param_1[9]);
              param_1[0xb] = (int)piVar7;
              if (piVar7 != (int *)0x0) {
                FUN_104b57b0(0);
                (**(code **)(*piVar7 + 4))(1);
                FUN_104b5770();
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
        }
      }
      break;
    }
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar8 < 10);
  piVar7 = (int *)(param_3 + 0x68);
  local_c = 4;
  do {
    iVar8 = *piVar7;
    if ((iVar8 < 0x11) && (0 < iVar8)) {
      uVar5 = FUN_1101e190(iVar8);
      FUN_113168d0(uVar5);
      cVar3 = FUN_11318380();
      if (cVar3 == '\0') {
        FUN_113168d0("spAttack");
        (**(code **)(*param_1 + 0x78))("EventName",local_18[2]);
        (**(code **)(*param_1 + 0x78))("EventParam",param_3);
        if (param_1[10] != 0) {
          piVar6 = (int *)FUN_100b4ca0(param_1[9]);
          param_1[0xb] = (int)piVar6;
          if (piVar6 != (int *)0x0) {
            FUN_104b57b0(0);
            (**(code **)(*piVar6 + 4))(1);
            FUN_104b5770();
          }
        }
      }
    }
    piVar7 = piVar7 + 2;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}



/* --- CBuffInfo::GetManagers_10b24750 @ 10b24750 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: ceil
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""AddBuff""
//   ""EventName""
//   ""Dynamite""
//   ""poison""
//   ""BuffType""
//   ""spAttack""
//   ""EventParam""
//   ""OnHit""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: ceil
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""AddBuff""
     ""EventName""
     ""Dynamite""
     ""poison""
     ""BuffType""
     ""spAttack""
     ""EventParam""
     ""OnHit"" */

void __thiscall CBuffInfo__GetManagers_10b24750(int *param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  char *pcVar15;
  undefined4 uVar16;
  float local_40;
  undefined8 uStack_3c;
  int *local_30;
  undefined4 local_2c;
  float *local_28;
  int local_24;
  float *local_20;
  undefined4 local_1c;
  float *local_18;
  undefined4 local_14;
  int local_10;
  undefined **local_c;
  undefined4 *local_8;
  
  pfVar7 = param_3 + 0x25;
  local_10 = 10;
  local_30 = param_1;
  do {
    if (*pfVar7 != 0.0) {
      local_18 = pfVar7;
      FUN_11316910();
      fVar1 = *pfVar7;
      local_c = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar3 = (undefined *)*DAT_123be35c;
      if ((puVar3 == (undefined *)0x0) &&
         (puVar3 = (undefined *)FUN_11679e10(&local_c,"CBuffInfo",0), puVar3 == (undefined *)0x0)) {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be308 = DAT_123be308 | 1;
          FUN_105005e0();
          FUN_11a8911f(&LAB_11c818e0);
        }
        puVar3 = &DAT_123be2d0;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((fVar1 == -NAN) ||
         ((((fVar1 == 0.0 && (*(int *)(puVar3 + 0x30) != 0)) || (*(int *)(puVar3 + 0x28) == 0)) ||
          ((iVar11 = (int)fVar1 - *(int *)(puVar3 + 0x30), iVar11 < 0 ||
           (*(int *)(puVar3 + 0x24) <= iVar11)))))) {
LAB_10b24845:
        iVar11 = 0;
      }
      else {
        iVar4 = iVar11 / *(int *)(puVar3 + 0x28);
        if (*(int *)(*(int *)(puVar3 + 0x20) + iVar4 * 4) == 0) goto LAB_10b24845;
        iVar11 = *(int *)(*(int *)(*(int *)(puVar3 + 0x20) + iVar4 * 4) +
                         (iVar11 % *(int *)(puVar3 + 0x28)) * 4);
      }
      FUN_11316b10("AddBuff");
      (**(code **)(*param_1 + 0x78))("EventName",local_14);
      if (iVar11 != 0) {
        FUN_116a7450(&uStack_3c,2);
        iVar11 = 0;
        do {
          iVar4 = *(int *)((int)&uStack_3c + iVar11 * 4);
          local_8 = (undefined4 *)&DAT_1201fc98;
          puVar5 = (undefined4 *)FUN_10c3d780(0x11);
          DAT_123be268 = DAT_123be268 + 0x11;
          *puVar5 = 1;
          local_8 = puVar5 + 3;
          puVar5[1] = 4;
          puVar5[2] = 4;
          *(undefined1 *)(puVar5 + 4) = 0;
          if (local_8 != &DAT_11dbab60) {
            *local_8 = DAT_11dbab60;
          }
          if (iVar4 == 0xb) {
            uVar16 = 6;
            pcVar15 = "poison";
LAB_10b248f1:
            FUN_1083ab70(pcVar15,uVar16);
          }
          else {
            if (iVar4 == 0x14) {
              uVar16 = 4;
              pcVar15 = "burn";
              goto LAB_10b248f1;
            }
            if (iVar4 == 0x30) {
              uVar16 = 8;
              pcVar15 = "Dynamite";
              goto LAB_10b248f1;
            }
          }
          puVar5 = local_8;
          FUN_113168d0(local_8);
          piVar6 = puVar5 + -3;
          if ((-1 < *piVar6) && (iVar4 = FUN_10c3dad0(piVar6), iVar4 < 1)) {
            DAT_123be268 = DAT_123be268 + (-0xd - puVar5[-1]);
            FUN_10c3d900(piVar6);
          }
          piVar6 = (int *)FUN_113168d0(&DAT_11dbab60);
          if ((local_20 != (float *)*piVar6) &&
             ((**(code **)(*param_1 + 0x78))("BuffType",local_20), param_1[0x3c] != 0)) {
            piVar6 = (int *)FUN_100b4ca0(param_1[0x3b]);
            param_1[0x3d] = (int)piVar6;
            if (piVar6 != (int *)0x0) {
              FUN_104b57b0(0);
              (**(code **)(*piVar6 + 4))(1);
              FUN_104b5770();
            }
          }
          iVar11 = iVar11 + 1;
          pfVar7 = local_18;
        } while (iVar11 < 2);
      }
    }
    pfVar7 = pfVar7 + 1;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      pfVar7 = param_3 + 0x1a;
      local_18 = (float *)0x4;
      local_10 = 0;
      local_20 = pfVar7;
      do {
        fVar1 = *pfVar7;
        if (((int)fVar1 < 0x11) && (0 < (int)fVar1)) {
          uVar16 = FUN_1101e190(fVar1);
          FUN_113168d0(uVar16);
          cVar2 = FUN_11318380();
          if (cVar2 == '\0') {
            FUN_113168d0("spAttack");
            (**(code **)(*param_1 + 0x78))("EventName",local_24);
            (**(code **)(*param_1 + 0x78))("EventParam",local_1c);
            if (param_1[0x3c] != 0) {
              piVar6 = (int *)FUN_100b4ca0(param_1[0x3b]);
              param_1[0x3d] = (int)piVar6;
              if (piVar6 != (int *)0x0) {
                FUN_104b57b0(0);
                (**(code **)(*piVar6 + 4))(1);
                FUN_104b5770();
              }
            }
          }
        }
        pfVar7 = pfVar7 + 2;
        local_18 = (float *)((int)local_18 + -1);
      } while (local_18 != (float *)0x0);
      pfVar7 = (float *)0x0;
      if (*local_20 == 1.4013e-45) {
        pfVar7 = local_20;
      }
      if (param_3[0x1c] == 1.4013e-45) {
        pfVar7 = param_3 + 0x1c;
      }
      if (param_3[0x1e] == 1.4013e-45) {
        pfVar7 = param_3 + 0x1e;
      }
      if (param_3[0x20] == 1.4013e-45) {
        pfVar7 = param_3 + 0x20;
      }
      if (pfVar7 == (float *)0x0) {
        local_20[1] = 1.4013e-45;
        pfVar7 = local_20;
      }
      if ((param_1[0x21] & (uint)pfVar7[1]) != 0) {
        if (((char)param_1[0x4d] != '\0') ||
           (param_1[0x4a] = param_1[0x4a] + 1, param_1[0x4a] <= param_1[0x49])) {
          iVar11 = FUN_10ba9b00();
          if ((iVar11 != 0) && (*(int *)(iVar11 + 0x2d4) != 0)) {
            *(undefined4 **)(*(int *)(iVar11 + 0x2d4) + 0xe8) = param_2;
            FUN_10dc0e00(param_3);
          }
          piVar6 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
          piVar6 = (int *)(**(code **)(*piVar6 + 0x68))();
          local_24 = (**(code **)(*piVar6 + 0xc))(*param_2);
          if (local_24 != 0) {
            FUN_10b26050(param_1 + 8,param_2);
            piVar6 = (int *)(**(code **)(*(int *)param_1[3] + 0x150))(2);
            if (piVar6 == (int *)0x0) {
              pfVar7 = (float *)0x0;
            }
            else {
              pfVar7 = (float *)(**(code **)(*piVar6 + 0x38))();
            }
            local_28 = pfVar7;
            piVar6 = (int *)(**(code **)((int)*pfVar7 + 4))();
            iVar11 = (**(code **)(*piVar6 + 0x34))(pfVar7,"OnHit");
            if (iVar11 != 0) {
              FUN_10a69900(piVar6,&local_28,param_1 + 8);
              (**(code **)(*piVar6 + 0x44))();
            }
            FUN_113168d0("DamageEvent");
            (**(code **)(*param_1 + 0x78))("EventName",local_2c);
            piVar6 = (int *)param_1[3];
            puVar8 = (undefined8 *)(**(code **)(**(int **)(local_24 + 0xc) + 0x94))();
            pfVar7 = (float *)(**(code **)(*piVar6 + 0x94))();
            local_40 = (float)*puVar8;
            uStack_3c._0_4_ = (float)((ulonglong)*puVar8 >> 0x20);
            uStack_3c._4_4_ = pfVar7[2] - *(float *)(puVar8 + 1);
            (**(code **)(*param_1 + 0x7c))
                      ("AttackDir",CONCAT44(pfVar7[1] - (float)uStack_3c,*pfVar7 - local_40),
                       uStack_3c._4_4_);
            uStack_3c = (double)*param_3;
            dVar13 = ceil(uStack_3c);
            local_28 = param_3 + 1;
            iVar11 = *param_1;
            uStack_3c = (double)(*local_28 + 0.0 + param_3[2] + param_3[3] + param_3[4] + param_3[5]
                                );
            dVar14 = ceil(uStack_3c);
            uStack_3c._0_4_ = SUB84(dVar14,0);
            uStack_3c._4_4_ = (float)((ulonglong)dVar14 >> 0x20);
            (**(code **)(iVar11 + 0x6c))("HitDamage",(int)dVar14 + (int)dVar13);
            (**(code **)(*param_1 + 0x7c))("HitPoint",*(undefined8 *)(param_2 + 0x14),param_2[0x16])
            ;
            (**(code **)(*param_1 + 0x70))("AttackerID",*param_2);
            uVar10 = 0;
            param_3 = (float *)0x5;
            uVar12 = 1;
            pfVar7 = local_28;
            do {
              uStack_3c = (double)*pfVar7;
              dVar13 = ceil(uStack_3c);
              piVar6 = local_30;
              uStack_3c._0_4_ = SUB84(dVar13,0);
              uStack_3c._4_4_ = (float)((ulonglong)dVar13 >> 0x20);
              if (0.0 < (float)dVar13) {
                uVar10 = uVar10 | uVar12;
              }
              pfVar7 = pfVar7 + 1;
              uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
              param_3 = (float *)((int)param_3 + -1);
            } while (param_3 != (float *)0x0);
            (**(code **)(*local_30 + 0x6c))("AttackAttr",uVar10);
            if (piVar6[0x3c] != 0) {
              piVar9 = (int *)FUN_100b4ca0(piVar6[0x3b]);
              piVar6[0x3d] = (int)piVar9;
              if (piVar9 != (int *)0x0) {
                FUN_104b57b0(0);
                (**(code **)(*piVar9 + 4))(1);
                FUN_104b5770();
              }
            }
          }
        }
        return;
      }
      *param_3 = 0.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      param_3[3] = 0.0;
      param_3[4] = 0.0;
      param_3[5] = 0.0;
      return;
    }
  } while( true );
}



/* --- CBuffInfo::GetManagers_10c09270 @ 10c09270 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__GetManagers_10c09270(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined **local_7c [2];
  undefined1 local_74 [20];
  undefined1 *local_60;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  undefined **local_c;
  int local_8;
  
  piVar2 = (int *)param_4[4];
  local_10 = (int *)(param_2 + 0x94);
  local_8 = 10;
  do {
    iVar8 = local_8;
    iVar3 = *local_10;
    if (iVar3 != 0) {
      local_c = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar6 = (undefined *)*DAT_123be35c;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)FUN_11679e10(&local_c,"CBuffInfo",0), puVar6 == (undefined *)0x0)) {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be308 = DAT_123be308 | 1;
          FUN_105005e0();
          FUN_11a8911f(&LAB_11c86390);
        }
        puVar6 = &DAT_123be2d0;
      }
      local_c = &PTR_FUN_11da54a8;
      if ((((iVar3 != -1) && (iVar4 = *(int *)(puVar6 + 0x28), iVar8 = local_8, iVar4 != 0)) &&
          (iVar7 = iVar3 - *(int *)(puVar6 + 0x30), -1 < iVar7)) &&
         (iVar7 < *(int *)(puVar6 + 0x24))) {
        iVar5 = *(int *)(*(int *)(puVar6 + 0x20) + (iVar7 / iVar4) * 4);
        if ((iVar5 != 0) && (iVar4 = *(int *)(iVar5 + (iVar7 % iVar4) * 4), iVar4 != 0)) {
          if (*(int *)(iVar4 + 0x424) == -1) {
            iVar8 = (**(code **)(*param_4 + 0xa8))();
            if (iVar8 == 1) {
              local_c = (undefined **)0x0;
              if (*(int *)(param_1 + 0xc) == 0) {
                ppuVar10 = (undefined **)0x0;
              }
              else {
                piVar9 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 0x50) + 0x2c))
                                          (*(int *)(param_1 + 0xc));
                ppuVar10 = local_c;
                if (((piVar9 != (int *)0x0) &&
                    (piVar9 = (int *)(**(code **)(*piVar9 + 0x288))(), ppuVar10 = local_c,
                    piVar9 != (int *)0x0)) &&
                   ((iVar8 = (**(code **)(*piVar9 + 0xa8))(), ppuVar10 = local_c, iVar8 == 2 &&
                    (iVar8 = FUN_113f2520(), ppuVar10 = local_c, iVar8 != 0)))) {
                  iVar8 = FUN_113f2520();
                  ppuVar10 = *(undefined ***)(iVar8 + 8);
                }
              }
              local_1c = *(undefined4 *)(param_1 + 0x80);
              local_18 = *(undefined4 *)(param_1 + 0x84);
              local_14 = *(undefined4 *)(param_1 + 0x88);
              local_28 = *(undefined4 *)(param_1 + 0x5c);
              local_24 = *(undefined4 *)(param_1 + 0x60);
              local_20 = *(undefined4 *)(param_1 + 100);
              FUN_10c13e10(param_4,*(undefined4 *)(param_2 + 0x88),&local_28,&local_1c,ppuVar10);
              (**(code **)(*piVar2 + 0x44))
                        (*(undefined4 *)(param_3 + 4),iVar3,local_7c,
                         *(char *)(param_2 + 0x90) == '\0',0xb);
              local_7c[0] = &PTR_FUN_11cd7298;
              iVar8 = local_8;
              if ((local_60 != local_74) && (local_60 != (undefined1 *)0x0)) {
                FUN_10c3d5d0(local_60);
                iVar8 = local_8;
              }
              goto LAB_10c094f4;
            }
            cVar1 = *(char *)(param_2 + 0x90);
            pppuVar11 = (undefined ***)0x0;
          }
          else {
            local_38 = 2;
            local_3c = &PTR_FUN_11cd72a0;
            local_30 = *(undefined4 *)(param_2 + 0x5c);
            cVar1 = *(char *)(param_2 + 0x90);
            local_34 = 0xffffffff;
            pppuVar11 = &local_3c;
            local_2c = 0;
          }
          (**(code **)(*piVar2 + 0x44))
                    (*(undefined4 *)(param_3 + 4),iVar3,pppuVar11,cVar1 == '\0',0xb);
          iVar8 = local_8;
        }
      }
    }
LAB_10c094f4:
    local_10 = local_10 + 1;
    local_8 = iVar8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}



/* --- CBuffInfo::GetManagers_11011c80 @ 11011c80 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: ceil, _ultoa_s, _ltoa_s
// strings:
//   ""attackerType""
//   ""HitPoint""
//   ""attackerNetID""
//   ""Damage""
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""buffFlag""
//   ""spAttackFlag""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: ceil, _ultoa_s, _ltoa_s
   strings:
     ""attackerType""
     ""HitPoint""
     ""attackerNetID""
     ""Damage""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""buffFlag""
     ""spAttackFlag"" */

void __thiscall
CBuffInfo__GetManagers_11011c80(int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  ulong _Val;
  uint _Val_00;
  int iVar10;
  double dVar11;
  char local_60 [32];
  char local_40 [32];
  int local_20;
  undefined8 local_1c;
  float local_14;
  undefined8 local_10;
  undefined **local_8;
  
  local_10 = (double)CONCAT44(param_1,(undefined4)local_10);
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  ppuVar4 = (undefined **)(**(code **)(*piVar3 + 0xc))(*param_3);
  if (ppuVar4 != (undefined **)0x0) {
    piVar3 = (int *)*param_2;
    local_8 = ppuVar4;
    (**(code **)(*piVar3 + 0x30))();
    piVar1 = *(int **)(param_1 + 0xc);
    puVar5 = (undefined8 *)(**(code **)(*(int *)ppuVar4[3] + 0x94))();
    pfVar6 = (float *)(**(code **)(*piVar1 + 0x94))();
    local_1c._0_4_ = (int *)*puVar5;
    local_1c._4_4_ = (float)((ulonglong)*puVar5 >> 0x20);
    local_14 = pfVar6[2] - *(float *)(puVar5 + 1);
    local_20 = 9;
    local_1c = CONCAT44(pfVar6[1] - local_1c._4_4_,*pfVar6 - (float)(int *)local_1c);
    (**(code **)(*piVar3 + 0x18))(&DAT_11cc17c8,&local_20,1);
    if (local_20 == 6) {
      if ((int *)local_1c != (int *)0x0) {
        (**(code **)(*(int *)local_1c + 0xc))();
      }
    }
    else if ((local_20 == 7) && ((int *)local_1c != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))((int *)local_1c);
    }
    local_20 = 5;
    uVar7 = FUN_11011a70(local_8);
    local_1c = CONCAT44(local_1c._4_4_,uVar7);
    (**(code **)(*piVar3 + 0x18))("attackerType",&local_20,1);
    if (local_20 == 6) {
      if ((int *)local_1c != (int *)0x0) {
        (**(code **)(*(int *)local_1c + 0xc))();
      }
    }
    else if ((local_20 == 7) && ((int *)local_1c != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))((int *)local_1c);
    }
    local_1c = *(undefined8 *)(param_3 + 0x14);
    local_14 = (float)param_3[0x16];
    local_20 = 9;
    (**(code **)(*piVar3 + 0x18))("HitPoint",&local_20,1);
    if (local_20 == 6) {
      if ((int *)local_1c != (int *)0x0) {
        (**(code **)(*(int *)local_1c + 0xc))();
      }
    }
    else if ((local_20 == 7) && ((int *)local_1c != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))((int *)local_1c);
    }
    local_20 = 3;
    uVar7 = (**(code **)(**(int **)m_pThis_exref + 700))(*param_3);
    local_1c = CONCAT44(local_1c._4_4_,uVar7);
    (**(code **)(*piVar3 + 0x18))("attackerNetID",&local_20,1);
    if (local_20 == 6) {
      if ((int *)local_1c != (int *)0x0) {
        (**(code **)(*(int *)local_1c + 0xc))();
      }
    }
    else if ((local_20 == 7) && ((int *)local_1c != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))();
    }
    if (param_4 != (float *)0x0) {
      local_10 = (double)*param_4;
      dVar11 = ceil(local_10);
      local_20 = 4;
      local_10 = (double)(param_4[1] + DAT_11de9890 + param_4[2] + param_4[3] + param_4[4] +
                         param_4[5]);
      local_10 = ceil(local_10);
      local_1c = CONCAT44(local_1c._4_4_,(float)((int)local_10 + (int)dVar11));
      (**(code **)(*piVar3 + 0x18))("Damage",&local_20);
      if (local_20 == 6) {
        if ((int *)local_1c != (int *)0x0) {
          (**(code **)(*(int *)local_1c + 0xc))();
        }
      }
      else if ((local_20 == 7) && ((int *)local_1c != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))();
      }
    }
    _Val = 0;
    param_2 = (undefined4 *)0x0;
    pfVar6 = param_4 + 0x25;
    param_3 = (undefined4 *)0xa;
    do {
      if (*pfVar6 != 0.0) {
        FUN_11316910();
        fVar2 = *pfVar6;
        local_8 = &PTR_FUN_11dbea04;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0();
          FUN_11a8911f(&LAB_11c6f220);
        }
        puVar8 = (undefined *)*DAT_123be35c;
        if ((puVar8 == (undefined *)0x0) &&
           (puVar8 = (undefined *)FUN_11679e10(&local_8,"CBuffInfo"), puVar8 == (undefined *)0x0)) {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f();
          }
          puVar8 = &DAT_123be2d0;
        }
        local_8 = &PTR_FUN_11da54a8;
        _Val = (ulong)param_2;
        if ((fVar2 != -NAN) &&
           ((((fVar2 != 0.0 || (*(int *)(puVar8 + 0x30) == 0)) && (*(int *)(puVar8 + 0x28) != 0)) &&
            ((iVar10 = (int)fVar2 - *(int *)(puVar8 + 0x30), -1 < iVar10 &&
             (iVar10 < *(int *)(puVar8 + 0x24))))))) {
          iVar9 = iVar10 / *(int *)(puVar8 + 0x28);
          if ((*(int *)(*(int *)(puVar8 + 0x20) + iVar9 * 4) != 0) &&
             (*(int *)(*(int *)(*(int *)(puVar8 + 0x20) + iVar9 * 4) +
                      (iVar10 % *(int *)(puVar8 + 0x28)) * 4) != 0)) {
            param_2 = (undefined4 *)FUN_116a74a0();
            _Val = (ulong)param_2;
          }
        }
      }
      pfVar6 = pfVar6 + 1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
    _ultoa_s(_Val,local_40,0x20,10);
    local_20 = 5;
    local_1c = CONCAT44(local_1c._4_4_,local_40);
    (**(code **)(*piVar3 + 0x18))("buffFlag",&local_20,1);
    if (local_20 == 6) {
      if ((int *)local_1c != (int *)0x0) {
        (**(code **)(*(int *)local_1c + 0xc))();
      }
    }
    else if ((local_20 == 7) && ((int *)local_1c != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))((int *)local_1c);
    }
    _Val_00 = 0;
    fVar2 = param_4[0x1a];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      _Val_00 = 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x1c];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      _Val_00 = _Val_00 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x1e];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      _Val_00 = _Val_00 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x20];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      _Val_00 = _Val_00 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    _ltoa_s(_Val_00,local_60,0x1f,10);
    local_20 = 5;
    local_1c = CONCAT44(local_1c._4_4_,local_60);
    (**(code **)(*piVar3 + 0x18))("spAttackFlag",&local_20,1);
    if (local_20 == 6) {
      if ((int *)local_1c != (int *)0x0) {
        (**(code **)(*(int *)local_1c + 0xc))();
        (**(code **)(*piVar3 + 0x34))();
        return;
      }
    }
    else if ((local_20 == 7) && ((int *)local_1c != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))((int *)local_1c);
    }
    (**(code **)(*piVar3 + 0x34))();
  }
  return;
}



/* --- CBuffInfo::GetManagers_1101b760 @ 1101b760 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: ceil, _ltoa_s
// strings:
//   ""HitDir""
//   ""attackerType""
//   ""HitPos""
//   ""attackerNetID""
//   ""Damage""
//   ""AttackAttr""
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""%I64u""
//   ""buffFlag""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: ceil, _ltoa_s
   strings:
     ""HitDir""
     ""attackerType""
     ""HitPos""
     ""attackerNetID""
     ""Damage""
     ""AttackAttr""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""%I64u""
     ""buffFlag"" */

void __thiscall
CBuffInfo__GetManagers_1101b760(int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  int local_d0 [32];
  int local_50 [8];
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined **local_18;
  int local_14;
  int *local_10;
  undefined8 uStack_c;
  
  local_2c = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_1202e818 + 4) + 0x3c))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x68))();
  ppuVar4 = (undefined **)(**(code **)(*piVar3 + 0xc))(*param_3);
  if (ppuVar4 != (undefined **)0x0) {
    piVar3 = (int *)*param_2;
    local_30 = piVar3;
    local_18 = ppuVar4;
    (**(code **)(*piVar3 + 0x30))();
    piVar1 = *(int **)(param_1 + 0xc);
    puVar5 = (undefined8 *)(**(code **)(*(int *)ppuVar4[3] + 0x94))();
    pfVar6 = (float *)(**(code **)(*piVar1 + 0x94))();
    local_10 = (int *)*puVar5;
    uStack_c._0_4_ = (float)((ulonglong)*puVar5 >> 0x20);
    local_10 = (int *)(*pfVar6 - (float)local_10);
    uStack_c._0_4_ = pfVar6[1] - (float)uStack_c;
    uStack_c._4_4_ = pfVar6[2] - *(float *)(puVar5 + 1);
    local_14 = 9;
    (**(code **)(*piVar3 + 0x18))("HitDir",&local_14,1);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_14 = 5;
    local_10 = (int *)FUN_1101bd20(local_18);
    (**(code **)(*piVar3 + 0x18))("attackerType",&local_14,1);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_10 = (int *)param_3[0x14];
    uStack_c._0_4_ = (float)param_3[0x15];
    uStack_c._4_4_ = (float)param_3[0x16];
    local_14 = 9;
    (**(code **)(*piVar3 + 0x18))("HitPos",&local_14,1);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
    }
    local_14 = 3;
    local_10 = (int *)(**(code **)(**(int **)m_pThis_exref + 700))(*param_3);
    (**(code **)(*piVar3 + 0x18))("attackerNetID",&local_14,1);
    if (local_14 == 6) {
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 0xc))();
      }
    }
    else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))();
    }
    if (param_4 != (float *)0x0) {
      uStack_c = (double)*param_4;
      dVar15 = ceil(uStack_c);
      local_28 = 4;
      uStack_c = (double)(param_4[1] + DAT_11de9890 + param_4[2] + param_4[3] + param_4[4] +
                         param_4[5]);
      dVar16 = ceil(uStack_c);
      uStack_c._0_4_ = SUB84(dVar16,0);
      uStack_c._4_4_ = (float)((ulonglong)dVar16 >> 0x20);
      local_24 = (int *)(float)((int)dVar16 + (int)dVar15);
      (**(code **)(*piVar3 + 0x18))("Damage",&local_28,1);
      if (local_28 == 6) {
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 0xc))();
        }
      }
      else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
      }
      local_28 = 4;
      iVar7 = FUN_10b28010();
      local_24 = (int *)(float)iVar7;
      (**(code **)(*piVar3 + 0x18))("AttackAttr",&local_28,1);
      if (local_28 == 6) {
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 0xc))();
        }
      }
      else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))();
      }
    }
    pfVar6 = param_4 + 0x25;
    param_2 = (undefined4 *)0xa;
    uStack_c._0_4_ = 0.0;
    uStack_c._4_4_ = 0.0;
    uVar13 = (uint)uStack_c._4_4_;
    uVar14 = (uint)(float)uStack_c;
    do {
      if (*pfVar6 != 0.0) {
        FUN_11316910();
        local_18 = &PTR_FUN_11dbea04;
        fVar2 = *pfVar6;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0();
          FUN_11a8911f(&LAB_11c6f220);
        }
        puVar8 = (undefined *)*DAT_123be35c;
        if ((puVar8 == (undefined *)0x0) &&
           (puVar8 = (undefined *)FUN_11679e10(&local_18,"CBuffInfo",0), puVar8 == (undefined *)0x0)
           ) {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f();
          }
          puVar8 = &DAT_123be2d0;
        }
        local_18 = &PTR_FUN_11da54a8;
        if ((fVar2 != -NAN) &&
           ((((fVar2 != 0.0 || (*(int *)(puVar8 + 0x30) == 0)) && (*(int *)(puVar8 + 0x28) != 0)) &&
            ((iVar7 = (int)fVar2 - *(int *)(puVar8 + 0x30), -1 < iVar7 &&
             (iVar7 < *(int *)(puVar8 + 0x24))))))) {
          iVar9 = iVar7 / *(int *)(puVar8 + 0x28);
          if ((*(int *)(*(int *)(puVar8 + 0x20) + iVar9 * 4) != 0) &&
             (local_2c = *(int *)(*(int *)(*(int *)(puVar8 + 0x20) + iVar9 * 4) +
                                 (iVar7 % *(int *)(puVar8 + 0x28)) * 4), local_2c != 0)) {
            iVar7 = 0;
            do {
              uVar10 = FUN_116a7480();
              uVar11 = 1 << (uVar10 & 0x1f);
              uVar12 = 0;
              if (0x1f < uVar10) {
                uVar12 = uVar11;
              }
              uVar11 = uVar11 ^ uVar12;
              if (0x3f < uVar10) {
                uVar12 = uVar11;
              }
              iVar7 = iVar7 + 1;
              uVar14 = uVar14 | uVar11;
              uVar13 = uVar13 | uVar12;
            } while (iVar7 < 2);
          }
        }
      }
      pfVar6 = pfVar6 + 1;
      param_2 = (undefined4 *)((int)param_2 + -1);
    } while (param_2 != (undefined4 *)0x0);
    FUN_1098b870(local_d0,"%I64u",uVar14,uVar13);
    piVar3 = local_30;
    local_24 = local_d0;
    local_28 = 5;
    (**(code **)(*local_30 + 0x18))("buffFlag",&local_28,1);
    if (local_28 == 6) {
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xc))();
      }
    }
    else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
    }
    uVar13 = 0;
    fVar2 = param_4[0x1a];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      uVar13 = 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x1c];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      uVar13 = uVar13 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x1e];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      uVar13 = uVar13 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    fVar2 = param_4[0x20];
    if (((int)fVar2 < 0x11) && (0 < (int)fVar2)) {
      uVar13 = uVar13 | 1 << (SUB41(fVar2,0) & 0x1f);
    }
    _ltoa_s(uVar13,(char *)local_50,0x1f,10);
    local_28 = 5;
    local_24 = local_50;
    (**(code **)(*piVar3 + 0x18))("spAttackFlag",&local_28,1);
    if (local_28 == 6) {
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xc))();
        (**(code **)(*piVar3 + 0x34))();
        return;
      }
    }
    else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
    }
    (**(code **)(*piVar3 + 0x34))();
  }
  return;
}



/* --- CBuffInfo::GetManagers_112605d0 @ 112605d0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: atoi
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: atoi
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__GetManagers_112605d0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 local_c0 [20];
  int local_ac;
  undefined **local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined4 local_96;
  undefined4 local_92;
  undefined1 local_28;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if (*param_2 == 3) {
    pcVar3 = (char *)FUN_11560730(1);
    local_ac = atoi(pcVar3);
    pcVar3 = (char *)FUN_11560730(2);
    iVar4 = atoi(pcVar3);
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x90) + 0x8c))(local_c0);
    cVar2 = FUN_113a58c0();
    while (cVar2 == '\0') {
      iVar5 = FUN_113a5930();
      iVar6 = FUN_113a23b0();
      if (*(int *)(iVar6 + 0x14) == local_ac) {
        local_a8 = &PTR_FUN_11dbea04;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0("CBuffInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f220);
        }
        puVar7 = (undefined *)*DAT_123be35c;
        if ((puVar7 == (undefined *)0x0) &&
           (puVar7 = (undefined *)FUN_11679e10(&local_a8,"CBuffInfo",0), puVar7 == (undefined *)0x0)
           ) {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f(&LAB_11c98c50);
          }
          puVar7 = &DAT_123be2d0;
        }
        local_a8 = &PTR_FUN_11da54a8;
        if (((iVar4 != -1) &&
            (((iVar4 != 0 || (*(int *)(puVar7 + 0x30) == 0)) &&
             (iVar6 = *(int *)(puVar7 + 0x28), iVar6 != 0)))) &&
           ((iVar8 = iVar4 - *(int *)(puVar7 + 0x30), -1 < iVar8 &&
            (iVar8 < *(int *)(puVar7 + 0x24))))) {
          iVar1 = *(int *)(*(int *)(puVar7 + 0x20) + (iVar8 / iVar6) * 4);
          if ((iVar1 != 0) && (iVar6 = *(int *)(iVar1 + (iVar8 % iVar6) * 4), iVar6 != 0)) {
            local_a0 = *(undefined4 *)(iVar6 + 0x10);
            local_a4 = DAT_11dfa3cc;
            DAT_11dfa3cc = DAT_11dfa3cc + 1;
            local_9c = 0;
            local_98 = 1;
            local_96 = *(undefined4 *)(iVar6 + 0x10c);
            local_92 = *(undefined4 *)(iVar6 + 0x80);
            local_28 = 1;
            (**(code **)(**(int **)(iVar5 + 0x10) + 0x40))(&local_a4);
          }
        }
      }
      FUN_113a58d0();
      cVar2 = FUN_113a58c0();
    }
    FUN_113a5790();
  }
  FUN_11a89daa();
  return;
}



/* --- CBuffInfo::GetManagers_113ef050 @ 113ef050 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void __thiscall CBuffInfo__GetManagers_113ef050(int *param_1,undefined **param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  
  FUN_11442e50(param_2);
  if ((((param_1[0x7b1] != -1) && (param_1[3] != 0)) &&
      (piVar2 = *(int **)(param_1[3] + 0x90), piVar2 != (int *)0x0)) &&
     ((piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(param_1[0x7b1]), piVar2 != (int *)0x0 &&
      (iVar3 = (**(code **)(*piVar2 + 0xa8))(), iVar3 == 0)))) {
    if (((param_1[0x7b1] == -1) ||
        ((param_1[3] == 0 || (piVar2 = *(int **)(param_1[3] + 0x90), piVar2 == (int *)0x0)))) ||
       ((piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(param_1[0x7b1]), piVar2 == (int *)0x0 ||
        (iVar3 = (**(code **)(*piVar2 + 0xa8))(), iVar3 != 0)))) {
      piVar2 = (int *)0x0;
    }
    (**(code **)(*(int *)piVar2[0xb36] + 0x50))(0);
  }
  (**(code **)(*param_1 + 0x1b4))();
  FUN_113f1aa0();
  if ((((param_1[0x7b1] != -1) && (param_1[3] != 0)) &&
      (piVar2 = *(int **)(param_1[3] + 0x90), piVar2 != (int *)0x0)) &&
     (((piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(param_1[0x7b1]), piVar2 != (int *)0x0 &&
       (iVar3 = (**(code **)(*piVar2 + 0xa8))(), iVar3 == 0)) &&
      ((param_1[0x7b5] != 0 && ((char)param_1[0x7c5] == '\0')))))) {
    iVar3 = *(int *)(param_1[0x7b5] + 8);
    piVar2 = *(int **)(iVar3 + 0x10);
    if (piVar2 != *(int **)(iVar3 + 0x14)) {
      do {
        iVar6 = *piVar2;
        param_2 = &PTR_FUN_11dbea04;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0("CBuffInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f220);
        }
        puVar4 = (undefined *)*DAT_123be35c;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&param_2,"CBuffInfo",0), puVar4 == (undefined *)0x0))
        {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f(&LAB_11c9be20);
          }
          puVar4 = &DAT_123be2d0;
        }
        param_2 = &PTR_FUN_11da54a8;
        if ((iVar6 != -1) &&
           ((((iVar6 != 0 || (*(int *)(puVar4 + 0x30) == 0)) && (*(int *)(puVar4 + 0x28) != 0)) &&
            ((iVar6 = iVar6 - *(int *)(puVar4 + 0x30), -1 < iVar6 &&
             (iVar6 < *(int *)(puVar4 + 0x24))))))) {
          iVar1 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar6 / *(int *)(puVar4 + 0x28)) * 4);
          if ((iVar1 != 0) &&
             ((*(int *)(iVar1 + (iVar6 % *(int *)(puVar4 + 0x28)) * 4) != 0 && (piVar2[4] != 0)))) {
            if (((param_1[0x7b1] == -1) ||
                (((param_1[3] == 0 || (piVar5 = *(int **)(param_1[3] + 0x90), piVar5 == (int *)0x0))
                 || (piVar5 = (int *)(**(code **)(*piVar5 + 0x7c))(param_1[0x7b1]),
                    piVar5 == (int *)0x0)))) ||
               (iVar6 = (**(code **)(*piVar5 + 0xa8))(), iVar6 != 0)) {
              piVar5 = (int *)0x0;
            }
            (**(code **)(*(int *)piVar5[4] + 0x54))(piVar2[4],1);
          }
        }
        piVar2 = piVar2 + 5;
      } while (piVar2 != *(int **)(iVar3 + 0x14));
    }
    if (param_1[0x7b3] != 0) {
      FUN_1157f260();
    }
  }
  return;
}



/* --- CBuffInfo::GetManagers_113f0440 @ 113f0440 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void __fastcall CBuffInfo__GetManagers_113f0440(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined **local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x1ed4);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x1f14) == '\0')) {
    iVar6 = *(int *)(iVar1 + 8);
    piVar5 = *(int **)(iVar6 + 4);
    local_8 = param_1;
    if (piVar5 != *(int **)(iVar6 + 8)) {
      do {
        iVar8 = *piVar5;
        local_c = &PTR_FUN_11dbea04;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0("CBuffInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f220);
        }
        puVar4 = (undefined *)*DAT_123be35c;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_c,"CBuffInfo",0), puVar4 == (undefined *)0x0))
        {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f(&LAB_11c9be20);
          }
          puVar4 = &DAT_123be2d0;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar8 != -1) &&
           ((((iVar8 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
             (iVar2 = *(int *)(puVar4 + 0x28), param_1 = local_8, iVar2 != 0)) &&
            ((iVar8 = iVar8 - *(int *)(puVar4 + 0x30), -1 < iVar8 &&
             (iVar8 < *(int *)(puVar4 + 0x24))))))) {
          iVar3 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar8 / iVar2) * 4);
          if ((iVar3 != 0) &&
             ((iVar8 = *(int *)(iVar3 + (iVar8 % iVar2) * 4), iVar8 != 0 &&
              (*(int *)(iVar8 + 0x80) == 0)))) {
            iVar8 = (**(code **)(**(int **)(local_8 + 0x10) + 0x44))(0,*piVar5,0,1,0xc);
            piVar5[4] = iVar8;
          }
        }
        piVar5 = piVar5 + 5;
      } while (piVar5 != *(int **)(iVar6 + 8));
    }
    if ((((*(int *)(param_1 + 0x1ec4) != -1) && (*(int *)(param_1 + 0xc) != 0)) &&
        (piVar5 = *(int **)(*(int *)(param_1 + 0xc) + 0x90), piVar5 != (int *)0x0)) &&
       ((piVar5 = (int *)(**(code **)(*piVar5 + 0x7c))(*(int *)(param_1 + 0x1ec4)),
        piVar5 != (int *)0x0 && (iVar6 = (**(code **)(*piVar5 + 0xa8))(), iVar6 == 0)))) {
      iVar1 = *(int *)(iVar1 + 8);
      piVar5 = *(int **)(iVar1 + 0x10);
      if (piVar5 != *(int **)(iVar1 + 0x14)) {
        do {
          iVar6 = *piVar5;
          local_c = &PTR_FUN_11dbea04;
          if ((DAT_123be358 & 1) == 0) {
            DAT_123be358 = DAT_123be358 | 1;
            FUN_102500e0("CBuffInfo::GetManagers");
            FUN_11a8911f(&LAB_11c6f220);
          }
          puVar4 = (undefined *)*DAT_123be35c;
          if ((puVar4 == (undefined *)0x0) &&
             (puVar4 = (undefined *)FUN_11679e10(&local_c,"CBuffInfo",0), puVar4 == (undefined *)0x0
             )) {
            if ((DAT_123be308 & 1) == 0) {
              DAT_123be2d4 = 0;
              DAT_123be2e4 = 0;
              DAT_123be2e8 = 0;
              _DAT_123be2ec = 0;
              DAT_123be2f0 = 0;
              DAT_123be308 = DAT_123be308 | 1;
              _DAT_123be2d0 = &PTR_FUN_11dbea14;
              DAT_123be2f4 = _DAT_11de9ae0;
              DAT_123be2f8 = _UNK_11de9ae4;
              uRam123be2fc = _UNK_11de9ae8;
              DAT_123be300 = _UNK_11de9aec;
              DAT_123be304 = 1;
              DAT_123be2d8 = puVar4;
              _DAT_123be2dc = puVar4;
              _DAT_123be2e0 = puVar4;
              FUN_11a8911f(&LAB_11c9be20);
            }
            puVar4 = &DAT_123be2d0;
          }
          local_c = &PTR_FUN_11da54a8;
          if (((iVar6 != -1) &&
              (((iVar6 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
               (iVar8 = *(int *)(puVar4 + 0x28), iVar8 != 0)))) &&
             ((iVar6 = iVar6 - *(int *)(puVar4 + 0x30), -1 < iVar6 &&
              (iVar6 < *(int *)(puVar4 + 0x24))))) {
            iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar6 / iVar8) * 4);
            if ((iVar2 != 0) && (*(int *)(iVar2 + (iVar6 % iVar8) * 4) != 0)) {
              if (((*(int *)(local_8 + 0x1ec4) == -1) || (*(int *)(local_8 + 0xc) == 0)) ||
                 ((piVar7 = *(int **)(*(int *)(local_8 + 0xc) + 0x90), piVar7 == (int *)0x0 ||
                  ((piVar7 = (int *)(**(code **)(*piVar7 + 0x7c))(*(int *)(local_8 + 0x1ec4)),
                   piVar7 == (int *)0x0 || (iVar6 = (**(code **)(*piVar7 + 0xa8))(), iVar6 != 0)))))
                 ) {
                piVar7 = (int *)0x0;
              }
              iVar6 = (**(code **)(*(int *)piVar7[4] + 0x44))(0,*piVar5,0,1,0xc);
              piVar5[4] = iVar6;
            }
          }
          piVar5 = piVar5 + 5;
        } while (piVar5 != *(int **)(iVar1 + 0x14));
      }
    }
  }
  return;
}



/* --- CBuffInfo::GetManagers_1142dcd0 @ 1142dcd0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__GetManagers_1142dcd0(int *param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int local_218;
  undefined **local_214;
  int local_210 [4];
  int iStack_200;
  int local_1fc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  undefined1 local_1cc;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_184;
  undefined1 local_180;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  undefined1 local_44;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_10bb3fc0();
  local_1d4 = param_1[0xf];
  local_80 = param_1[100];
  iStack_7c = param_1[0x65];
  iStack_78 = param_1[0x66];
  iStack_74 = param_1[0x67];
  local_1d8 = param_1[0xe];
  local_1d0 = param_1[0x10];
  local_1cc = (undefined1)param_1[0x11];
  local_1c0 = param_1[0x14];
  local_1bc = param_1[0x15];
  local_e0 = param_1[0x4c];
  local_dc = param_1[0x4d];
  local_d8 = param_1[0x4e];
  local_44 = 1;
  local_70 = param_1[0x68];
  iStack_6c = param_1[0x69];
  iStack_68 = param_1[0x6a];
  iStack_64 = param_1[0x6b];
  local_60 = param_1[0x6c];
  if (param_1[0x16] == param_1[0x18]) {
    param_2 = param_2 & 0x200;
  }
  else {
    param_2 = param_2 & 0x100;
  }
  if (param_2 != 0) {
    local_210[1] = param_1[1];
    local_210[2] = param_1[2];
    local_210[3] = param_1[3];
    iStack_200 = param_1[4];
    local_1fc = param_1[5];
    local_210[0] = *param_1;
  }
  local_180 = (undefined1)param_1[0x24];
  piVar5 = param_1 + 0x25;
  local_184 = param_1[0x23];
  local_218 = 10;
  local_1c4 = local_1d8;
  do {
    iVar3 = *piVar5;
    if (0 < iVar3) {
      local_214 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar2 = (undefined *)*DAT_123be35c;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&local_214,"CBuffInfo",0), puVar2 == (undefined *)0x0))
      {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be2d4 = 0;
          DAT_123be2e4 = 0;
          DAT_123be2e8 = 0;
          _DAT_123be2ec = 0;
          DAT_123be2f0 = 0;
          DAT_123be308 = DAT_123be308 | 1;
          _DAT_123be2d0 = &PTR_FUN_11dbea14;
          DAT_123be2f4 = _DAT_11de9ae0;
          DAT_123be2f8 = _UNK_11de9ae4;
          uRam123be2fc = _UNK_11de9ae8;
          DAT_123be300 = _UNK_11de9aec;
          DAT_123be304 = 1;
          DAT_123be2d8 = puVar2;
          _DAT_123be2dc = puVar2;
          _DAT_123be2e0 = puVar2;
          FUN_11a8911f(&LAB_11c9d180);
        }
        puVar2 = &DAT_123be2d0;
      }
      local_214 = &PTR_FUN_11da54a8;
      if ((iVar3 != -1) &&
         ((((iVar3 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar2 + 0x28), iVar1 != 0)) &&
          ((iVar3 = iVar3 - *(int *)(puVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar2 + 0x24))
           ))))) {
        if ((*(int *)(*(int *)(puVar2 + 0x20) + (iVar3 / iVar1) * 4) != 0) &&
           ((iVar3 = *(int *)(*(int *)(*(int *)(puVar2 + 0x20) + (iVar3 / iVar1) * 4) +
                             (iVar3 % iVar1) * 4), iVar3 != 0 && (*(int *)(iVar3 + 0x44) != 0)))) {
          *(int *)(((int)local_210 - (int)param_1) + (int)piVar5) = *piVar5;
        }
      }
    }
    piVar5 = piVar5 + 1;
    local_218 = local_218 + -1;
  } while (local_218 != 0);
  piVar5 = param_1 + 0x2f;
  local_218 = 0x15;
  do {
    iVar3 = *piVar5;
    if (0 < iVar3) {
      local_214 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar2 = (undefined *)*DAT_123be35c;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = (undefined *)FUN_11679e10(&local_214,"CBuffInfo",0), puVar2 == (undefined *)0x0))
      {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be2d4 = 0;
          DAT_123be2e4 = 0;
          DAT_123be2e8 = 0;
          _DAT_123be2ec = 0;
          DAT_123be2f0 = 0;
          DAT_123be308 = DAT_123be308 | 1;
          _DAT_123be2d0 = &PTR_FUN_11dbea14;
          DAT_123be2f4 = _DAT_11de9ae0;
          DAT_123be2f8 = _UNK_11de9ae4;
          uRam123be2fc = _UNK_11de9ae8;
          DAT_123be300 = _UNK_11de9aec;
          DAT_123be304 = 1;
          DAT_123be2d8 = puVar2;
          _DAT_123be2dc = puVar2;
          _DAT_123be2e0 = puVar2;
          FUN_11a8911f(&LAB_11c9d180);
        }
        puVar2 = &DAT_123be2d0;
      }
      local_214 = &PTR_FUN_11da54a8;
      if (((iVar3 != -1) &&
          (((iVar3 != 0 || (*(int *)(puVar2 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar2 + 0x28), iVar1 != 0)))) &&
         ((iVar3 = iVar3 - *(int *)(puVar2 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar2 + 0x24)))
         )) {
        if ((*(int *)(*(int *)(puVar2 + 0x20) + (iVar3 / iVar1) * 4) != 0) &&
           ((iVar3 = *(int *)(*(int *)(*(int *)(puVar2 + 0x20) + (iVar3 / iVar1) * 4) +
                             (iVar3 % iVar1) * 4), iVar3 != 0 && (*(int *)(iVar3 + 0x44) != 0)))) {
          *(int *)((int)piVar5 + ((int)local_210 - (int)param_1)) = *piVar5;
        }
      }
    }
    piVar5 = piVar5 + 1;
    local_218 = local_218 + -1;
  } while (local_218 != 0);
  FUN_10c24b30(local_210);
  puVar4 = local_18;
  iVar3 = 1;
  do {
    piVar5 = (int *)(puVar4 + -0x14);
    puVar4 = puVar4 + -0x14;
    if (*piVar5 != 0) {
      FUN_10c3d5d0(*piVar5);
    }
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  FUN_11a89daa();
  return;
}



/* --- CBuffInfo::GetManagers_1142f4c0 @ 1142f4c0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

undefined4 __thiscall CBuffInfo__GetManagers_1142f4c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_c;
  int local_8;
  
  piVar6 = *(int **)(param_1 + 0xc);
  local_8 = param_1;
  if (piVar6 != *(int **)(param_1 + 0x10)) {
    do {
      if (*piVar6 == 1) {
        iVar5 = piVar6[1];
        local_c = &PTR_FUN_11dbea04;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0("CBuffInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f220);
        }
        puVar4 = (undefined *)*DAT_123be35c;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_c,"CBuffInfo",0), puVar4 == (undefined *)0x0))
        {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f(&LAB_11c9d3a0);
          }
          puVar4 = &DAT_123be2d0;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar5 != -1) &&
           ((((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
             (iVar1 = *(int *)(puVar4 + 0x28), param_1 = local_8, iVar1 != 0)) &&
            ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
             (iVar5 < *(int *)(puVar4 + 0x24))))))) {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if ((iVar2 != 0) &&
             ((*(int *)(iVar2 + (iVar5 % iVar1) * 4) != 0 &&
              (cVar3 = FUN_116a7820(param_2), param_1 = local_8, cVar3 != '\0')))) {
            return 1;
          }
        }
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != *(int **)(param_1 + 0x10));
  }
  return 0;
}



/* --- CBuffInfo::GetManagers_1142f5e0 @ 1142f5e0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

uint __thiscall CBuffInfo__GetManagers_1142f5e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *in_EAX;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined **local_c;
  int local_8;
  
  piVar5 = *(int **)(param_1 + 0xc);
  local_8 = param_1;
  if (piVar5 != *(int **)(param_1 + 0x10)) {
    do {
      if (*piVar5 == 1) {
        iVar4 = piVar5[1];
        local_c = &PTR_FUN_11dbea04;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0("CBuffInfo::GetManagers");
          in_EAX = (undefined *)FUN_11a8911f(&LAB_11c6f220);
        }
        puVar3 = (undefined *)*DAT_123be35c;
        if (((undefined *)*DAT_123be35c == (undefined *)0x0) &&
           (in_EAX = (undefined *)FUN_11679e10(&local_c,"CBuffInfo",0), puVar3 = in_EAX,
           in_EAX == (undefined *)0x0)) {
          in_EAX = DAT_123be308;
          if (((uint)DAT_123be308 & 1) == 0) {
            DAT_123be308 = (undefined *)((uint)DAT_123be308 | 1);
            FUN_105005e0();
            in_EAX = (undefined *)FUN_11a8911f(&LAB_11c9d3a0);
          }
          puVar3 = &DAT_123be2d0;
        }
        if ((iVar4 != -1) &&
           ((((iVar4 != 0 || (*(int *)(puVar3 + 0x30) == 0)) &&
             (iVar1 = *(int *)(puVar3 + 0x28), param_1 = local_8, iVar1 != 0)) &&
            ((iVar4 = iVar4 - *(int *)(puVar3 + 0x30), -1 < iVar4 &&
             (iVar4 < *(int *)(puVar3 + 0x24))))))) {
          iVar2 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar4 / iVar1) * 4);
          in_EAX = (undefined *)0x0;
          if ((iVar2 != 0) &&
             ((in_EAX = *(undefined **)(iVar2 + (iVar4 % iVar1) * 4), in_EAX != (undefined *)0x0 &&
              (*(int *)(in_EAX + 0x420) == param_2)))) {
            return CONCAT31((int3)((uint)in_EAX >> 8),1);
          }
        }
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != *(int **)(param_1 + 0x10));
  }
  return (uint)in_EAX & 0xffffff00;
}



/* --- CBuffInfo::GetManagers_1142f700 @ 1142f700 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

undefined4 __thiscall CBuffInfo__GetManagers_1142f700(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_c;
  int local_8;
  
  piVar6 = *(int **)(param_1 + 0xc);
  local_8 = param_1;
  if (piVar6 != *(int **)(param_1 + 0x10)) {
    do {
      if (*piVar6 == 1) {
        iVar5 = piVar6[1];
        local_c = &PTR_FUN_11dbea04;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0("CBuffInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f220);
        }
        puVar4 = (undefined *)*DAT_123be35c;
        if ((puVar4 == (undefined *)0x0) &&
           (puVar4 = (undefined *)FUN_11679e10(&local_c,"CBuffInfo",0), puVar4 == (undefined *)0x0))
        {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f(&LAB_11c9d3a0);
          }
          puVar4 = &DAT_123be2d0;
        }
        local_c = &PTR_FUN_11da54a8;
        if ((iVar5 != -1) &&
           ((((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
             (iVar1 = *(int *)(puVar4 + 0x28), param_1 = local_8, iVar1 != 0)) &&
            ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 &&
             (iVar5 < *(int *)(puVar4 + 0x24))))))) {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if ((iVar2 != 0) &&
             ((*(int *)(iVar2 + (iVar5 % iVar1) * 4) != 0 &&
              (cVar3 = FUN_116a78d0(param_2), param_1 = local_8, cVar3 != '\0')))) {
            return 1;
          }
        }
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != *(int **)(param_1 + 0x10));
  }
  return 0;
}



/* --- CBuffInfo::GetManagers_114748b0 @ 114748b0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: __alloca_probe
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: __alloca_probe
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__GetManagers_114748b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  short *psVar5;
  undefined1 local_2ae0 [16];
  int local_2ad0;
  undefined4 local_2ac4;
  int local_2ac0;
  undefined4 local_2abc;
  int local_2ab8;
  undefined2 local_2ab4;
  int local_2ab0;
  undefined4 local_2aac;
  int local_2aa8;
  undefined **local_2aa4;
  undefined4 local_2aa0;
  undefined1 local_2a99 [9];
  short local_2a90;
  short local_2a76 [5431];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11473c40(0,0,1);
  FUN_101fced0();
  local_2aac = 0;
  iVar2 = FUN_101fd2d0(param_1,param_2,&local_2aac);
  if (((iVar2 != 0) && (0 < param_2)) || (0x27 < local_2a90)) {
    FUN_11a89daa();
    return;
  }
  local_2aa8 = 0;
  if (0 < local_2a90) {
    psVar5 = local_2a76;
    do {
      iVar2 = *(int *)(psVar5 + -0xc);
      local_2aa4 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar3 = (undefined *)*DAT_123be35c;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = (undefined *)FUN_11679e10(&local_2aa4,"CBuffInfo",0);
        if (puVar3 == (undefined *)0x0) {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be308 = DAT_123be308 | 1;
            FUN_105005e0();
            FUN_11a8911f(&LAB_11c9e090);
          }
          puVar3 = &DAT_123be2d0;
        }
      }
      local_2aa4 = &PTR_FUN_11da54a8;
      if ((((iVar2 != -1) && ((iVar2 != 0 || (*(int *)(puVar3 + 0x30) == 0)))) &&
          (iVar4 = *(int *)(puVar3 + 0x28), iVar4 != 0)) &&
         ((iVar2 = iVar2 - *(int *)(puVar3 + 0x30), -1 < iVar2 && (iVar2 < *(int *)(puVar3 + 0x24)))
         )) {
        iVar1 = *(int *)(*(int *)(puVar3 + 0x20) + (iVar2 / iVar4) * 4);
        if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + (iVar2 % iVar4) * 4), iVar2 != 0)) {
          if (*(int *)(iVar2 + 0x80) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_11475790(*(undefined4 *)(iVar2 + 0x110),psVar5 + -0xc,iVar2);
            if (iVar4 < 0) goto LAB_11474b3a;
          }
          local_2abc = *(undefined4 *)(psVar5 + -8);
          local_2ac4 = local_2aa0;
          local_2ab0 = (int)*psVar5;
          local_2ab8 = 0;
          local_2ab4 = 0x100;
          local_2ac0 = iVar2;
          FUN_11472c10((int)psVar5[-1],(int)psVar5[-2],iVar4,0,(int)psVar5[1],psVar5 + 2);
          iVar2 = *(int *)(psVar5 + -10);
          local_2a99[0] = 0;
          if (iVar2 == 0) {
            FUN_11474ed0(&local_2ac4,local_2ae0,local_2a99);
          }
          else {
            local_2ab8 = iVar2;
            iVar2 = FUN_11612920(iVar2);
            if (iVar2 == 0) {
              FUN_11612230(&local_2ac4,local_2ae0);
            }
          }
          if (local_2ad0 != 0) {
            FUN_10c3d5d0(local_2ad0);
          }
        }
      }
LAB_11474b3a:
      psVar5 = psVar5 + 0x88;
      local_2aa8 = local_2aa8 + 1;
    } while (local_2aa8 < local_2a90);
  }
  FUN_11a89daa();
  return;
}



/* --- CBuffInfo::GetManagers_11474b80 @ 11474b80 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: __alloca_probe
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: __alloca_probe
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__GetManagers_11474b80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined4 *puVar6;
  undefined1 local_26d4 [16];
  int local_26c4;
  undefined4 local_26b8;
  int local_26b4;
  undefined4 local_26b0;
  int local_26ac;
  undefined2 local_26a8;
  uint local_26a4;
  undefined4 local_26a0;
  int local_269c;
  undefined **local_2698;
  undefined1 local_2691 [5];
  short local_268c;
  undefined4 local_2682 [2446];
  undefined **local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined1 *local_2c;
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  FUN_11473c40(0,0,1);
  FUN_10301c10();
  iVar3 = FUN_10301dc0(param_1,param_2,0,0);
  if ((iVar3 != 0) && (0 < param_2)) {
    FUN_11a89daa();
    return;
  }
  local_269c = 0;
  if (0 < local_268c) {
    puVar6 = local_2682;
    do {
      iVar3 = puVar6[-1];
      local_2698 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar4 = (undefined *)*DAT_123be35c;
      if (puVar4 == (undefined *)0x0) {
        puVar4 = (undefined *)FUN_11679e10(&local_2698,"CBuffInfo",0);
        if (puVar4 == (undefined *)0x0) {
          if ((DAT_123be308 & 1) == 0) {
            DAT_123be2d4 = 0;
            DAT_123be2e4 = 0;
            DAT_123be2e8 = 0;
            _DAT_123be2ec = 0;
            DAT_123be2f0 = 0;
            DAT_123be308 = DAT_123be308 | 1;
            _DAT_123be2d0 = &PTR_FUN_11dbea14;
            DAT_123be2f4 = _DAT_11de9ae0;
            DAT_123be2f8 = _UNK_11de9ae4;
            uRam123be2fc = _UNK_11de9ae8;
            DAT_123be300 = _UNK_11de9aec;
            DAT_123be304 = 1;
            DAT_123be2d8 = puVar4;
            _DAT_123be2dc = puVar4;
            _DAT_123be2e0 = puVar4;
            FUN_11a8911f(&LAB_11c9e090);
          }
          puVar4 = &DAT_123be2d0;
        }
      }
      local_2698 = &PTR_FUN_11da54a8;
      if ((iVar3 != -1) &&
         ((((iVar3 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)) &&
          ((iVar3 = iVar3 - *(int *)(puVar4 + 0x30), -1 < iVar3 && (iVar3 < *(int *)(puVar4 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar3 / iVar1) * 4);
        if ((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + (iVar3 % iVar1) * 4), iVar3 != 0)) {
          pppuVar5 = (undefined ***)0x0;
          local_26b0 = *puVar6;
          local_26a4 = (uint)*(ushort *)((int)puVar6 + 0x75);
          local_30 = local_40;
          local_26b8 = local_26a0;
          local_26ac = 0;
          local_26a8 = 0x100;
          local_44 = 1;
          local_48 = &PTR_FUN_11cd7298;
          local_40[0] = 0;
          local_26b4 = iVar3;
          local_2c = local_30;
          if (*(short *)((int)puVar6 + 0xe) != 0) {
            FUN_1141fcb0(puVar6 + 4,*(short *)((int)puVar6 + 0xe));
            pppuVar5 = &local_48;
          }
          FUN_11472cb0((int)*(short *)(puVar6 + 1),*(undefined4 *)((int)puVar6 + 6),
                       *(undefined4 *)((int)puVar6 + 10),pppuVar5,
                       *(undefined2 *)((int)puVar6 + 0x77),(int)puVar6 + 0x79);
          iVar3 = puVar6[-2];
          local_2691[0] = 0;
          if (iVar3 == 0) {
            FUN_11474ed0(&local_26b8,local_26d4,local_2691);
          }
          else {
            local_26ac = iVar3;
            iVar3 = FUN_11612920(iVar3);
            if (iVar3 == 0) {
              FUN_11612230(&local_26b8,local_26d4);
            }
          }
          if (local_26c4 != 0) {
            FUN_10c3d5d0(local_26c4);
          }
          local_48 = &PTR_FUN_11cd7298;
          if ((local_2c != local_40) && (local_2c != (undefined1 *)0x0)) {
            FUN_10c3d5d0(local_2c);
          }
        }
      }
      puVar6 = (undefined4 *)((int)puVar6 + 0x99);
      local_269c = local_269c + 1;
    } while (local_269c < local_268c);
  }
  FUN_11a89daa();
  return;
}



/* --- CBuffInfo::GetManagers_1154caa0 @ 1154caa0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo""
//   ""CBuffInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo""
     ""CBuffInfo::GetManagers"" */

undefined4 CBuffInfo__GetManagers_1154caa0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined **local_8;
  
  piVar2 = (int *)FUN_10500130(0,"CBuffInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      local_8 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar4 = (undefined *)*DAT_123be35c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CBuffInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be2d4 = 0;
          DAT_123be2e4 = 0;
          DAT_123be2e8 = 0;
          _DAT_123be2ec = 0;
          DAT_123be2f0 = 0;
          DAT_123be308 = DAT_123be308 | 1;
          _DAT_123be2d0 = &PTR_FUN_11dbea14;
          DAT_123be2f4 = _DAT_11de9ae0;
          DAT_123be2f8 = _UNK_11de9ae4;
          uRam123be2fc = _UNK_11de9ae8;
          DAT_123be300 = _UNK_11de9aec;
          DAT_123be304 = 1;
          DAT_123be2d8 = puVar4;
          _DAT_123be2dc = puVar4;
          _DAT_123be2e0 = puVar4;
          FUN_11a8911f(&LAB_11ca1de0);
        }
        puVar4 = &DAT_123be2d0;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) {
        iVar1 = *(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4);
        if (iVar1 != 0) {
          FUN_1154cce0(iVar1);
          FUN_1154d0a0(iVar1);
          FUN_1154cfc0(iVar1);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 1;
}



/* --- CBuffInfo::GetManagers_116cfc70 @ 116cfc70 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: memset
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: memset
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__GetManagers_116cfc70(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **local_19c;
  undefined4 local_198;
  undefined1 local_194 [396];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_198 = 0;
  memset(local_194,0,0x18c);
  local_19c = (undefined **)0x0;
  FUN_116cfe60(&local_198,&local_19c,0);
  ppuVar2 = local_19c;
  if (0 < (int)local_19c) {
    do {
      local_19c = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      if (*DAT_123be35c == 0) {
        iVar1 = FUN_11679e10(&local_19c,"CBuffInfo",0);
        if ((iVar1 == 0) && ((DAT_123be308 & 1) == 0)) {
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
          FUN_11a8911f(&LAB_11ca7d30);
        }
      }
      ppuVar2 = (undefined **)((int)ppuVar2 + -1);
    } while (ppuVar2 != (undefined **)0x0);
  }
  FUN_11a89daa();
  return;
}



/* --- CBuffInfo::GetManagers_116e5260 @ 116e5260 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__GetManagers_116e5260(int param_1,uint *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_34;
  int local_30 [10];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_100ec450(*(undefined4 *)(param_1 + 0x14),local_30,10);
  *param_2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  iVar6 = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  if (0 < iVar3) {
    while (iVar5 = local_30[iVar6], iVar5 != 0) {
      local_34 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar4 = (undefined *)*DAT_123be35c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_34,"CBuffInfo",0), puVar4 == (undefined *)0x0))
      {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be2d4 = 0;
          DAT_123be2e4 = 0;
          DAT_123be2e8 = 0;
          _DAT_123be2ec = 0;
          DAT_123be2f0 = 0;
          DAT_123be308 = DAT_123be308 | 1;
          _DAT_123be2d0 = &PTR_FUN_11dbea14;
          DAT_123be2f4 = _DAT_11de9ae0;
          DAT_123be2f8 = _UNK_11de9ae4;
          uRam123be2fc = _UNK_11de9ae8;
          DAT_123be300 = _UNK_11de9aec;
          DAT_123be304 = 1;
          DAT_123be2d8 = puVar4;
          _DAT_123be2dc = puVar4;
          _DAT_123be2e0 = puVar4;
          FUN_11a8911f(&LAB_11ca8000);
        }
        puVar4 = &DAT_123be2d0;
      }
      local_34 = &PTR_FUN_11da54a8;
      if ((iVar5 == -1) ||
         ((((iVar5 == 0 && (*(int *)(puVar4 + 0x30) != 0)) ||
           (iVar1 = *(int *)(puVar4 + 0x28), iVar1 == 0)) ||
          ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), iVar5 < 0 || (*(int *)(puVar4 + 0x24) <= iVar5)
           ))))) break;
      iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
      if ((iVar2 == 0) ||
         ((iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 == 0 ||
          (iVar1 = *(int *)(iVar5 + 0x420), iVar1 == 0)))) break;
      iVar6 = iVar6 + 1;
      *param_2 = *param_2 | 1 << ((byte)iVar1 & 0x1f);
      param_3[iVar1] = iVar5;
      if (iVar3 <= iVar6) break;
    }
  }
  FUN_11a89daa();
  return;
}



/* --- CBuffInfo::GetManagers_116e90f0 @ 116e90f0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__GetManagers_116e90f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined **local_34;
  int local_30 [11];
  
  local_30[10] = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[9] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  iVar1 = FUN_100ec450(*(undefined4 *)(param_1 + 0x14),local_30,10);
  FUN_100ec450(*(undefined4 *)(param_2 + 0x14),local_30 + iVar1,10 - iVar1);
  iVar1 = 0;
  do {
    if (local_30[iVar1] != 0) {
      local_34 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      if (*DAT_123be35c == 0) {
        iVar2 = FUN_11679e10(&local_34,"CBuffInfo",0);
        if ((iVar2 == 0) && ((DAT_123be308 & 1) == 0)) {
          DAT_123be308 = DAT_123be308 | 1;
          FUN_105005e0();
          FUN_11a8911f(&LAB_11ca8000);
        }
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  FUN_11a89daa();
  return;
}



/* --- CBuffInfo::GetManagers_117eb8e0 @ 117eb8e0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

undefined * __fastcall CBuffInfo__GetManagers_117eb8e0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **local_8;
  
  iVar2 = 0;
  do {
    puVar1 = *(undefined **)(param_1 + 0x30);
    if (0 < *(int *)(puVar1 + iVar2)) {
      local_8 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar1 = (undefined *)*DAT_123be35c;
      if ((puVar1 == (undefined *)0x0) &&
         (puVar1 = (undefined *)FUN_11679e10(&local_8,"CBuffInfo",0), puVar1 == (undefined *)0x0)) {
        if ((DAT_123be308 & 1) == 0) {
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
          FUN_11a8911f(&LAB_11cab640);
        }
        puVar1 = &DAT_123be2d0;
      }
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x20);
  return puVar1;
}



/* --- CBuffInfo::GetManagers_118006a0 @ 118006a0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CBuffInfo"" */

void __fastcall CBuffInfo__GetManagers_118006a0(undefined **param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined **local_8;
  
  puVar3 = param_1[0xc];
  local_8 = param_1;
  if (puVar3 != param_1[0xd]) {
    do {
      if (puVar3 != (undefined *)0x0) {
        piVar2 = *(int **)(puVar3 + 0x40);
        if (piVar2 != *(int **)(puVar3 + 0x44)) {
          do {
            if (0 < *piVar2) {
              local_8 = &PTR_FUN_11dbea04;
              if ((DAT_123be358 & 1) == 0) {
                DAT_123be358 = DAT_123be358 | 1;
                _DAT_123be370 = &DAT_123be360;
                DAT_123be374 = &DAT_123be360;
                DAT_123be360 = 0;
                FUN_100d9260("CBuffInfo::GetManagers","");
                FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
                DAT_123be35c = (int *)FUN_100dfd90(DAT_123be374);
                if (DAT_123be35c == (int *)0x0) {
                  DAT_123be35c = (int *)FUN_100dde50(4);
                  *DAT_123be35c = 0;
                  FUN_100dfdc0(DAT_123be374,DAT_123be35c);
                }
                FUN_11a8911f(&LAB_11c6f220);
              }
              if (((*DAT_123be35c == 0) &&
                  (iVar1 = FUN_11679e10(&local_8,"CBuffInfo",0), iVar1 == 0)) &&
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
                FUN_11a8911f(&LAB_11caba90);
              }
            }
            piVar2 = piVar2 + 1;
          } while (piVar2 != *(int **)(puVar3 + 0x44));
        }
        iVar1 = FUN_11679c30();
        if (iVar1 != 0) {
          FUN_1169ee00(*(undefined4 *)(puVar3 + 0x4c),puVar3);
        }
      }
      puVar3 = puVar3 + 0x50;
    } while (puVar3 != param_1[0xd]);
  }
  return;
}



/* --- CBuffInfo::GetManagers_118c0450 @ 118c0450 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo""
//   ""CBuffInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo""
     ""CBuffInfo::GetManagers"" */

void CBuffInfo__GetManagers_118c0450(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_10500130(0,"CBuffInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar4 = (undefined *)*DAT_123be35c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CBuffInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be2d4 = 0;
          DAT_123be2e4 = 0;
          DAT_123be2e8 = 0;
          _DAT_123be2ec = 0;
          DAT_123be2f0 = 0;
          DAT_123be308 = DAT_123be308 | 1;
          _DAT_123be2d0 = &PTR_FUN_11dbea14;
          DAT_123be2f4 = _DAT_11de9ae0;
          DAT_123be2f8 = _UNK_11de9ae4;
          uRam123be2fc = _UNK_11de9ae8;
          DAT_123be300 = _UNK_11de9aec;
          DAT_123be304 = 1;
          DAT_123be2d8 = puVar4;
          _DAT_123be2dc = puVar4;
          _DAT_123be2e0 = puVar4;
          FUN_11a8911f(&LAB_11cafb80);
        }
        puVar4 = &DAT_123be2d0;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_116aa680(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



/* --- CBuffInfo::GetManagers_11a193b0 @ 11a193b0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""CPetSupportBuff::GetManagers""
//   ""CPetSupportBuff""
//   ""CItemBaseInfo::GetManagers""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""CPetSupportBuff::GetManagers""
     ""CPetSupportBuff""
     ""CItemBaseInfo::GetManagers""
     ""CItemBaseInfo"" */

void __fastcall CBuffInfo__GetManagers_11a193b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined **local_8;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
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
        FUN_11a8911f(&LAB_11cb60d0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    local_8 = &PTR_FUN_11d21878;
    if ((DAT_12040ba8 & 1) == 0) {
      DAT_12040ba8 = DAT_12040ba8 | 1;
      FUN_102500e0("CPetSupportBuff::GetManagers");
      FUN_11a8911f(&LAB_11c9a860);
    }
    if (((*DAT_12040b8c == 0) && (iVar2 = FUN_11679e10(&local_8,"CPetSupportBuff",0), iVar2 == 0))
       && ((DAT_12040cbc & 1) == 0)) {
      DAT_12040cbc = DAT_12040cbc | 1;
      FUN_112f3d40();
      FUN_11a8911f(&LAB_11cb6190);
    }
  }
  piVar3 = (int *)(param_1 + 0x68);
  iVar2 = 3;
  do {
    if (*piVar3 != 0) {
      local_8 = &PTR_FUN_11da5518;
      if ((DAT_123bdbfc & 1) == 0) {
        DAT_123bdbfc = DAT_123bdbfc | 1;
        FUN_102500e0("CItemBaseInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6e610);
      }
      if (((*DAT_123bdba0 == 0) && (iVar1 = FUN_11679e10(&local_8,"CItemBaseInfo",0), iVar1 == 0))
         && ((DAT_123bdc00 & 1) == 0)) {
        DAT_123bdbc4 = 0;
        DAT_123bdbd4 = 0;
        DAT_123bdbd8 = 0;
        _DAT_123bdbdc = 0;
        DAT_123bdbe0 = 0;
        DAT_123bdc00 = DAT_123bdc00 | 1;
        DAT_123bdbc8 = 0;
        _DAT_123bdbcc = 0;
        _DAT_123bdbd0 = 0;
        DAT_123bdbc0 = &PTR_FUN_11da5520;
        DAT_123bdbe4 = _DAT_11de9ae0;
        DAT_123bdbe8 = _UNK_11de9ae4;
        uRam123bdbec = _UNK_11de9ae8;
        DAT_123bdbf0 = _UNK_11de9aec;
        DAT_123bdbf4 = 1;
        FUN_11a8911f(&LAB_11cb6130);
      }
    }
    piVar3 = piVar3 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* --- CBuffInfo::GetManagers_11a21800 @ 11a21800 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void __fastcall CBuffInfo__GetManagers_11a21800(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined **local_c;
  int local_8;
  
  if (0 < (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18) {
    local_8 = 0;
    iVar3 = 1;
    do {
      if (*(int *)(*(int *)(param_1 + 0x14) + local_8 + 4) != 0) {
        local_c = &PTR_FUN_11dbea04;
        if ((DAT_123be358 & 1) == 0) {
          DAT_123be358 = DAT_123be358 | 1;
          FUN_102500e0("CBuffInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6f220);
        }
        if (((*DAT_123be35c == 0) && (iVar2 = FUN_11679e10(&local_c,"CBuffInfo",0), iVar2 == 0)) &&
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
          FUN_11a8911f(&LAB_11cb63d0);
        }
      }
      local_8 = local_8 + 0x18;
      bVar1 = iVar3 < (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x18;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return;
}



/* --- CBuffInfo::GetManagers_11a396b0 @ 11a396b0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void __fastcall CBuffInfo__GetManagers_11a396b0(int param_1)

{
  int iVar1;
  undefined **local_8;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
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
      FUN_11a8911f(&LAB_11cb6670);
    }
  }
  return;
}



/* --- CBuffInfo::GetManagers_11a39890 @ 11a39890 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: memset
// strings:
//   "u"GodLuckType""
//   "u"addbuff""
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""sQaSI""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: memset
   strings:
     "u"GodLuckType""
     "u"addbuff""
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""sQaSI"" */

void __thiscall CBuffInfo__GetManagers_11a39890(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined **local_434;
  undefined2 local_430 [16];
  undefined2 *local_410;
  undefined2 *local_40c;
  char local_408;
  undefined1 local_407 [1023];
  uint local_8;
  
  local_8 = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  if ((DAT_123a9bd0 & 1) == 0) {
    DAT_123a9bd0 = DAT_123a9bd0 | 1;
    FUN_100f67b0(L"GodLuckType");
  }
  if ((DAT_123a9bd0 & 2) == 0) {
    DAT_123a9bd0 = DAT_123a9bd0 | 2;
    iVar2 = FUN_100e1cb0(DAT_123a9bcc);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9bd4);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9bcc);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a9bd4);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  if ((DAT_123a9bd0 & 4) == 0) {
    DAT_123a9bd0 = DAT_123a9bd0 | 4;
    FUN_100f67b0(L"addbuff");
  }
  if ((DAT_123a9bd0 & 8) == 0) {
    DAT_123a9bd0 = DAT_123a9bd0 | 8;
    iVar2 = FUN_100e1cb0(DAT_123a9be4);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9be8);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9be4);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a9be8);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_434 = &PTR_FUN_11dbea04;
    if ((DAT_123be358 & 1) == 0) {
      DAT_123be358 = DAT_123be358 | 1;
      FUN_102500e0("CBuffInfo::GetManagers");
      FUN_11a8911f(&LAB_11c6f220);
    }
    if (((*DAT_123be35c == 0) && (iVar2 = FUN_11679e10(&local_434,"CBuffInfo",0), iVar2 == 0)) &&
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
      FUN_11a8911f(&LAB_11cb66d0);
    }
    local_434 = &PTR_FUN_11da54a8;
  }
  if ((DAT_123a9bd0 & 0x10) == 0) {
    DAT_123a9bd0 = DAT_123a9bd0 | 0x10;
    FUN_100f67b0(&DAT_11d44360);
  }
  if ((DAT_123a9bd0 & 0x20) == 0) {
    DAT_123a9bd0 = DAT_123a9bd0 | 0x20;
    iVar2 = FUN_100e1cb0(DAT_123a9bf8);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9bfc);
  if (cVar1 == '\0') {
    local_408 = cVar1;
    memset(local_407,0,0x3ff);
    iVar2 = FUN_100e1c50(DAT_123a9bf8);
    FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
    FUN_100ee330(&local_408,1);
  }
  else {
    local_410 = local_430;
    local_430[0] = 0;
    local_40c = local_410;
    (**(code **)(*param_2 + 0x28))(local_430,&DAT_123a9bfc);
    puVar3 = (undefined4 *)FUN_100e5530(&local_434,local_40c);
    puVar5 = &DAT_11d9d32b;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar3;
    }
    FUN_100e5d80(puVar5);
    FUN_100e5670();
    if ((local_40c != local_430) && (local_40c != (undefined2 *)0x0)) {
      FUN_10c3d5d0(local_40c);
    }
  }
  if ((DAT_123a9bd0 & 0x40) == 0) {
    DAT_123a9bd0 = DAT_123a9bd0 | 0x40;
    FUN_100f67b0("sQaSI");
  }
  if (-1 < (char)DAT_123a9bd0) {
    DAT_123a9bd0 = DAT_123a9bd0 | 0x80;
    iVar2 = FUN_100e1cb0(DAT_123a9c0c);
    FUN_10a30020(*(undefined4 *)(iVar2 + 0x24));
  }
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_123a9c10);
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*param_2 + 0x20))(&DAT_123a9c10);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    FUN_11a89daa();
    return;
  }
  local_408 = cVar1;
  memset(local_407,0,0x3ff);
  iVar2 = FUN_100e1c50(DAT_123a9c0c);
  FUN_100ea3b0(&local_408,&DAT_11d389ec,*(undefined4 *)(iVar2 + 0x14));
  FUN_100ee330(&local_408,1);
  FUN_11a89daa();
  return;
}



/* --- CBuffInfo::GetManagers_11a3c750 @ 11a3c750 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

void __fastcall CBuffInfo__GetManagers_11a3c750(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_8;
  
  if (*(int *)(param_1 + 0x28) != 0) {
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
      FUN_11a8911f(&LAB_11cb6730);
    }
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != *(int *)(param_1 + 0x30)) {
    do {
      local_8 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        _DAT_123be370 = &DAT_123be360;
        DAT_123be374 = &DAT_123be360;
        DAT_123be360 = 0;
        FUN_100d9260("CBuffInfo::GetManagers","");
        FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
        DAT_123be35c = (int *)FUN_100dfd90(DAT_123be374);
        if (DAT_123be35c == (int *)0x0) {
          DAT_123be35c = (int *)FUN_100dde50(4);
          *DAT_123be35c = 0;
          FUN_100dfdc0(DAT_123be374,DAT_123be35c);
        }
        FUN_11a8911f(&LAB_11c6f220);
      }
      if (((*DAT_123be35c == 0) && (iVar2 = FUN_11679e10(&local_8,"CBuffInfo",0), iVar2 == 0)) &&
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
        FUN_11a8911f(&LAB_11cb6730);
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 0x30));
  }
  return;
}



/* --- CBuffInfo::GetManagers_11a484b0 @ 11a484b0 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// strings:
//   ""CBuffInfo::GetManagers""
//   ""CBuffInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

undefined4 __fastcall CBuffInfo__GetManagers_11a484b0(undefined **param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined **local_8;
  
  local_8 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x18))();
  if (iVar3 < 0) {
    return 0;
  }
  param_1 = param_1 + 0x26;
  uVar5 = 0;
  do {
    puVar1 = *param_1;
    if (puVar1 != (undefined *)0x0) {
      local_8 = &PTR_FUN_11dbea04;
      if ((DAT_123be358 & 1) == 0) {
        DAT_123be358 = DAT_123be358 | 1;
        FUN_102500e0("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar4 = (undefined *)*DAT_123be35c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CBuffInfo",0), puVar4 == (undefined *)0x0)) {
        if ((DAT_123be308 & 1) == 0) {
          DAT_123be2d4 = 0;
          DAT_123be2e4 = 0;
          DAT_123be2e8 = 0;
          _DAT_123be2ec = 0;
          DAT_123be2f0 = 0;
          DAT_123be308 = DAT_123be308 | 1;
          _DAT_123be2d0 = &PTR_FUN_11dbea14;
          DAT_123be2f4 = _DAT_11de9ae0;
          DAT_123be2f8 = _UNK_11de9ae4;
          uRam123be2fc = _UNK_11de9ae8;
          DAT_123be300 = _UNK_11de9aec;
          DAT_123be304 = 1;
          DAT_123be2d8 = puVar4;
          _DAT_123be2dc = puVar4;
          _DAT_123be2e0 = puVar4;
          FUN_11a8911f(&LAB_11cb6c30);
        }
        puVar4 = &DAT_123be2d0;
      }
      if (((puVar1 == (undefined *)0xffffffff) ||
          (((puVar1 == (undefined *)0x0 && (*(int *)(puVar4 + 0x30) != 0)) ||
           (*(int *)(puVar4 + 0x28) == 0)))) ||
         ((iVar3 = (int)puVar1 - *(int *)(puVar4 + 0x30), iVar3 < 0 ||
          (*(int *)(puVar4 + 0x24) <= iVar3)))) {
        return 0;
      }
      iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar3 / *(int *)(puVar4 + 0x28)) * 4);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(iVar2 + (iVar3 % *(int *)(puVar4 + 0x28)) * 4) == 0) {
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    param_1 = param_1 + 1;
    if (4 < uVar5) {
      return 1;
    }
  } while( true );
}



/* --- CBuffInfo::GetManagers_123f4dd5 @ 123f4dd5 --- */
// [RE-AUTO c3]
// id: CBuffInfo::GetManagers
// calls: LAB_123f4e06+1
// strings:
//   ""CBuffInfo::GetManagers""

/* WARNING: Instruction at (ram,0x123f4e6c) overlaps instruction at (ram,0x123f4e68)
    */
/* [RE-AUTO c3]
   id: CBuffInfo::GetManagers
   calls: LAB_123f4e06+1
   strings:
     ""CBuffInfo::GetManagers"" */

void CBuffInfo__GetManagers_123f4dd5(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int unaff_EBX;
  undefined4 unaff_EBP;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar3 = 0;
  uVar5 = 0;
  DAT_123be358 = DAT_123be358 | 1;
  uVar4 = DAT_123be358 == 0;
  LOCK();
  UNLOCK();
  uVar2 = FUN_102500e0();
                    /* WARNING: Call to offcut address within same function */
  uVar6 = func_0x123f4e07(uVar2);
  if ((bool)uVar5) {
    (*(code *)((int)uVar6 + -0x1421cad))();
    if ((bool)uVar3 || (bool)uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_10fd1df0();
    }
    *(undefined4 *)(unaff_EBX + -0x74ffe10b) = unaff_EBP;
  }
  else {
    pcVar1 = (char *)((int)((ulonglong)uVar6 >> 0x20) + 0x55);
    *pcVar1 = *pcVar1 + '\x01';
  }
                    /* WARNING: Subroutine does not return */
  FUN_10fd1df0();
}



