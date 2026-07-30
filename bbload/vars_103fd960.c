
/* [RE-AUTO c0]
   strings:
     ""Value"" */

void __thiscall FUN_103fd960(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  bool bVar13;
  uint local_4c;
  undefined1 local_48 [4];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  undefined1 local_20 [16];
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  local_8 = DAT_113dd8c0 ^ (uint)&stack0xfffffffc;
  local_34 = param_2;
  local_30 = param_1;
  if (*param_1 != 0) {
    local_40 = (**(code **)(*(int *)*param_2 + 100))();
    local_38 = 0;
    if (0 < local_40) {
      do {
        local_24 = (int *)(**(code **)(*(int *)*param_2 + 0x68))(local_38);
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 4))();
        }
        cVar4 = (**(code **)(*local_24 + 0x10))(&DAT_113bef38);
        if (cVar4 == '\0') {
          if (local_24 != (int *)0x0) {
            (**(code **)(*local_24 + 8))();
          }
        }
        else {
          FUN_10a5d660();
          FUN_10a5d660();
          pcVar5 = (char *)(**(code **)(*local_24 + 0x5c))(&DAT_113a4d50);
          local_10 = local_20;
          pcVar3 = pcVar5;
          do {
            pcVar11 = pcVar3;
            pcVar3 = pcVar11 + 1;
          } while (*pcVar11 != '\0');
          local_c = local_10;
          FUN_1001ea30(pcVar5,pcVar11);
          FUN_10a5d820(local_20);
          if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
            FUN_10653dc0(local_c);
          }
          pcVar5 = (char *)(**(code **)(*local_24 + 0x5c))(&DAT_113bef4c);
          local_10 = local_20;
          pcVar3 = pcVar5;
          do {
            pcVar11 = pcVar3;
            pcVar3 = pcVar11 + 1;
          } while (*pcVar11 != '\0');
          local_c = local_10;
          FUN_1001ea30(pcVar5,pcVar11);
          FUN_10a5d820(local_20);
          if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
            FUN_10653dc0(local_c);
          }
          iVar1 = *param_1;
          iVar6 = *(int *)(iVar1 + 0x30);
          iVar9 = iVar1 + 0x2c;
          iVar12 = iVar9;
          if (iVar6 == 0) {
LAB_103fdacd:
            if (iVar12 == iVar9) goto LAB_103fdad5;
            local_10 = local_20;
            local_c = local_10;
            FUN_1001ea30(&DAT_113beeac,&DAT_113beeb1);
            FUN_10a5d560(local_20);
            bVar13 = local_28 == local_4c;
            if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
              FUN_10653dc0(local_c);
            }
            param_1 = local_30;
            if (bVar13) {
              FUN_103fddc0(*(undefined4 *)(iVar12 + 0x14),local_48);
              FUN_103fd960(&local_24,param_3);
            }
            else if ((char)param_3 == '\0') {
              uVar10 = (**(code **)(*local_24 + 0x5c))("Value");
              param_1 = local_30;
              FUN_103c7ad0(*(undefined4 *)(iVar12 + 0x14),uVar10);
            }
          }
          else {
            do {
              if (*(uint *)(iVar6 + 0x10) < local_2c) {
                iVar7 = *(int *)(iVar6 + 0xc);
              }
              else {
                iVar7 = *(int *)(iVar6 + 8);
                iVar12 = iVar6;
              }
              iVar6 = iVar7;
            } while (iVar7 != 0);
            if (iVar12 != iVar9) {
              if (local_2c < *(uint *)(iVar12 + 0x10)) {
                iVar12 = iVar9;
              }
              goto LAB_103fdacd;
            }
LAB_103fdad5:
            iVar9 = *(int *)(iVar1 + 0x24);
            iVar1 = *(int *)(iVar1 + 0x20);
            piVar8 = (int *)FUN_103ccb00(&local_2c);
            param_1 = local_30;
            *piVar8 = iVar9 - iVar1 >> 3;
            iVar9 = *local_30;
            puVar2 = *(uint **)(iVar9 + 0x24);
            if (puVar2 == *(uint **)(iVar9 + 0x28)) {
              FUN_103cbef0(puVar2,&local_2c,iVar9 + 0x20,1,1);
            }
            else {
              if (puVar2 != (uint *)0x0) {
                *puVar2 = local_2c;
                puVar2[1] = local_28;
              }
              *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + 8;
            }
            local_10 = local_20;
            local_c = local_10;
            FUN_1001ea30(&DAT_113beeac,&DAT_113beeb1);
            FUN_10a5d560(local_20);
            bVar13 = local_28 == local_44;
            if ((local_c != local_20) && (local_c != (undefined1 *)0x0)) {
              FUN_10653dc0(local_c);
            }
            if (bVar13) {
              iVar9 = FUN_10653d70(0xac);
              if (iVar9 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = FUN_103c72c0(param_1[1]);
              }
              FUN_103fd960(&local_24,0);
              *(undefined1 *)(iVar9 + 0x60) = *(undefined1 *)(*param_1 + 0x60);
              local_3c = iVar9;
              FUN_103ccb70(&local_3c);
            }
            else {
              uVar10 = (**(code **)(*local_24 + 0x5c))("Value");
              FUN_103c7dc0(&local_2c,uVar10);
            }
          }
          param_2 = local_34;
          if (local_24 != (int *)0x0) {
            (**(code **)(*local_24 + 8))();
            param_2 = local_34;
          }
        }
        local_38 = local_38 + 1;
      } while (local_38 < local_40);
    }
  }
  FUN_112bed8e();
  return;
}

