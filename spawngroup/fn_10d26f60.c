
/* [RE-R1]
   strings:
     ""LevelMode""
     ""TriggerID""
     ""TriggerPoint""
     ""LevelID""
     ""LevelDiff"" */

void __thiscall CMHLevelInfo__DispatchLevelModeEnterEvent(int param_1,int *param_2)

{
  int *piVar1;
  int local_28;
  int *local_24;
  int local_18;
  int *local_14;
  int local_8;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xac) + 0x250);
  if (((int *)*piVar1 != piVar1) ||
     (piVar1 = (int *)(*(int *)(param_1 + 0xac) + 600), (int *)*piVar1 != piVar1)) {
    local_8 = param_1;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x58) + 0x30))(0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    local_14 = (int *)(float)*param_2;
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("LevelMode",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[1];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("TriggerID",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[2];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("TriggerPoint",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[3];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("LevelID",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)(float)param_2[4];
    local_18 = 4;
    (**(code **)(*piVar1 + 0x18))("LevelDiff",&local_18,0);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_28 = 6;
    local_24 = piVar1;
    (**(code **)(*piVar1 + 8))();
    local_18 = 1;
    local_14 = (int *)0x0;
    FUN_10d1d220(*(undefined4 *)(local_8 + 0x58),0x15,&local_18,&local_28);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_14);
    }
    local_14 = (int *)0x0;
    local_18 = 0;
    if (local_28 == 6) {
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
        return;
      }
    }
    else if ((local_28 == 7) && (local_24 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_24);
    }
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}

