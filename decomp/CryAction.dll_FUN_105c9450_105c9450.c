
/* [RE-AUTO c0]
   strings:
     ""GameCommonEvent""
     ""Target""
     ""TargetID""
     ""EmCommon"" */

undefined4 __fastcall FUN_105c9450(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  undefined1 local_60 [20];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_18 [4];
  int *local_14;
  undefined4 local_10;
  undefined1 local_c [7];
  char local_5;
  
  local_5 = '\x01';
  FUN_103db9b0(0,&local_5);
  iVar5 = **(int **)(DAT_113f3a18 + 0x50);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  piVar4 = (int *)(**(code **)(iVar5 + 0x2c))(uVar3);
  local_14 = piVar4;
  FUN_10a5d660();
  cVar2 = FUN_103dbbb0(1,local_c);
  if (((cVar2 == '\0') || (piVar4 == (int *)0x0)) ||
     (iVar5 = (**(code **)(*piVar4 + 0x288))(), iVar5 == 0)) {
    return 1;
  }
  FUN_10a5d660();
  cVar2 = FUN_103dbbb0(2,local_18);
  if (cVar2 == '\0') {
    return 1;
  }
  piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x60))();
  local_4c = (**(code **)(*piVar4 + 0x18))("GameCommonEvent");
  local_48 = 0x4ffff;
  local_44 = (undefined4 *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_40 = FUN_10a5ec80();
  local_24 = (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  local_44 = &local_24;
  local_20 = 0;
  local_10 = 0;
  cVar2 = FUN_10551c20(3,&local_10);
  if (cVar2 == '\0') {
    cVar2 = FUN_10a5d8d0("Target");
    if (cVar2 == '\0') goto LAB_105c95d1;
    uVar3 = FUN_10a5d620("TargetID");
    uVar3 = FUN_103c8620(uVar3);
    FUN_101c3720(uVar3,&local_10);
  }
  piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x144))(local_10);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x24))(&local_4c);
    return 2;
  }
LAB_105c95d1:
  (**(code **)(**(int **)(*(int *)(DAT_113f3a18 + 0xd0) + 0x90) + 0x8c))(&local_38);
  cVar2 = FUN_10a6b260();
  while (cVar2 == '\0') {
    iVar5 = (**(code **)(local_38 + 0xc))();
    piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))
                              (*(undefined4 *)(iVar5 + 8));
    if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0x288))(), iVar5 != 0)) {
      piVar6 = (int *)(**(code **)(*piVar4 + 0xc))();
      pbVar7 = (byte *)(**(code **)(*piVar6 + 8))();
      pcVar12 = "EmCommon";
      pbVar8 = pbVar7;
      do {
        bVar1 = *pbVar8;
        bVar13 = bVar1 < (byte)*pcVar12;
        if (bVar1 != *pcVar12) {
LAB_105c9670:
          uVar9 = -(uint)bVar13 | 1;
          goto LAB_105c9675;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar13 = bVar1 < (byte)pcVar12[1];
        if (bVar1 != pcVar12[1]) goto LAB_105c9670;
        pbVar8 = pbVar8 + 2;
        pcVar12 = pcVar12 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_105c9675:
      if (uVar9 == 0) {
        pbVar7 = (byte *)(**(code **)(*piVar4 + 0x2b8))();
      }
      pbVar8 = (byte *)FUN_10a5ec80();
      do {
        bVar1 = *pbVar7;
        bVar13 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_105c96b0:
          uVar9 = -(uint)bVar13 | 1;
          goto LAB_105c96b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar13 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_105c96b0;
        pbVar7 = pbVar7 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_105c96b5:
      if (uVar9 == 0) {
        if (local_5 != '\0') {
          piVar6 = (int *)(**(code **)(*local_14 + 0x288))();
          piVar10 = (int *)(**(code **)(*piVar4 + 0x288))();
          iVar5 = (**(code **)(*piVar6 + 0x88))();
          iVar11 = (**(code **)(*piVar10 + 0x88))();
          if (iVar5 != iVar11) goto LAB_105c9721;
        }
        piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
        iVar5 = *piVar6;
        uVar3 = (**(code **)(*piVar4 + 4))();
        piVar4 = (int *)(**(code **)(iVar5 + 0x144))(uVar3);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x24))(&local_4c);
        }
      }
    }
LAB_105c9721:
    FUN_10a6b270();
    cVar2 = FUN_10a6b260();
  }
  iVar5 = (**(code **)(**(int **)(*(int *)(DAT_113f3a18 + 0xd0) + 0x90) + 0x9c))(local_60,0xc);
  local_34 = *(undefined4 *)(iVar5 + 4);
  local_30 = *(undefined4 *)(iVar5 + 8);
  local_2c = *(undefined4 *)(iVar5 + 0xc);
  local_28 = *(undefined4 *)(iVar5 + 0x10);
  FUN_10a6b130();
  cVar2 = FUN_10a6b260();
  while (cVar2 == '\0') {
    iVar5 = (**(code **)(local_38 + 0xc))();
    piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))
                              (*(undefined4 *)(iVar5 + 8));
    if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0x288))(), iVar5 != 0)) {
      piVar6 = (int *)(**(code **)(*piVar4 + 0xc))();
      pbVar8 = (byte *)(**(code **)(*piVar6 + 8))();
      pbVar7 = (byte *)FUN_10a5ec80();
      do {
        bVar1 = *pbVar8;
        bVar13 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_105c9800:
          uVar9 = -(uint)bVar13 | 1;
          goto LAB_105c9805;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar13 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_105c9800;
        pbVar8 = pbVar8 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_105c9805:
      if (uVar9 == 0) {
        if (local_5 != '\0') {
          piVar6 = (int *)(**(code **)(*local_14 + 0x288))();
          piVar10 = (int *)(**(code **)(*piVar4 + 0x288))();
          iVar5 = (**(code **)(*piVar6 + 0x88))();
          iVar11 = (**(code **)(*piVar10 + 0x88))();
          if (iVar5 != iVar11) goto LAB_105c9871;
        }
        piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
        iVar5 = *piVar6;
        uVar3 = (**(code **)(*piVar4 + 4))();
        piVar4 = (int *)(**(code **)(iVar5 + 0x144))(uVar3);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x24))(&local_4c);
        }
      }
    }
LAB_105c9871:
    FUN_10a6b270();
    cVar2 = FUN_10a6b260();
  }
  iVar5 = (**(code **)(**(int **)(*(int *)(DAT_113f3a18 + 0xd0) + 0x90) + 0x9c))(local_60,7);
  local_34 = *(undefined4 *)(iVar5 + 4);
  local_30 = *(undefined4 *)(iVar5 + 8);
  local_2c = *(undefined4 *)(iVar5 + 0xc);
  local_28 = *(undefined4 *)(iVar5 + 0x10);
  FUN_10a6b130();
  cVar2 = FUN_10a6b260();
  do {
    if (cVar2 != '\0') {
      FUN_10a6b130();
      return 2;
    }
    iVar5 = (**(code **)(local_38 + 0xc))();
    piVar4 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))
                              (*(undefined4 *)(iVar5 + 8));
    if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0x288))(), iVar5 != 0)) {
      piVar6 = (int *)(**(code **)(*piVar4 + 0xc))();
      pbVar8 = (byte *)(**(code **)(*piVar6 + 8))();
      pbVar7 = (byte *)FUN_10a5ec80();
      do {
        bVar1 = *pbVar8;
        bVar13 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_105c9950:
          uVar9 = -(uint)bVar13 | 1;
          goto LAB_105c9955;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar13 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_105c9950;
        pbVar8 = pbVar8 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_105c9955:
      if (uVar9 == 0) {
        if (local_5 != '\0') {
          piVar6 = (int *)(**(code **)(*local_14 + 0x288))();
          piVar10 = (int *)(**(code **)(*piVar4 + 0x288))();
          iVar5 = (**(code **)(*piVar6 + 0x88))();
          iVar11 = (**(code **)(*piVar10 + 0x88))();
          if (iVar5 != iVar11) goto LAB_105c99c1;
        }
        piVar6 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x3c))();
        iVar5 = *piVar6;
        uVar3 = (**(code **)(*piVar4 + 4))();
        piVar4 = (int *)(**(code **)(iVar5 + 0x144))(uVar3);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x24))(&local_4c);
        }
      }
    }
LAB_105c99c1:
    FUN_10a6b270();
    cVar2 = FUN_10a6b260();
  } while( true );
}

