
/* [RE-R1]
   id: CBuffInfo::GetManagers
   strings:
     ""CBuffInfo::GetManagers""
     ""CBuffInfo"" */

void CBuffInfo__AddBuffEffectsForHit(int param_1,int param_2,int param_3,int *param_4)

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
        StcMbrNameSvr_CInfoManager__RegisterAndGetSingleton("CBuffInfo::GetManagers");
        FUN_11a8911f(&LAB_11c6f220);
      }
      puVar6 = (undefined *)*DAT_123be35c;
      if ((puVar6 == (undefined *)0x0) &&
         (puVar6 = (undefined *)CInfoManager__FindByName(&local_c,"CBuffInfo",0),
         puVar6 == (undefined *)0x0)) {
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

