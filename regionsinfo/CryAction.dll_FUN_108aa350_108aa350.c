
/* [RE-AUTO c0]
   strings:
     ""Regions""
     ""ClimateSetting""
     ""RegionID""
     ""Weather""
     ""SoundEventValue"" */

void __thiscall FUN_108aa350(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  if (((int *)*param_2 != (int *)0x0) &&
     (local_2c = param_1, (**(code **)(*(int *)*param_2 + 0xac))(&local_14,"Regions"),
     local_14 != (int *)0x0)) {
    iVar1 = (**(code **)(*local_14 + 0xa0))();
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(*local_14 + 0xa8))(&local_c,iVar5);
        if (local_c != (int *)0x0) {
          (**(code **)(*param_1 + 0x10))();
          FUN_108aa230(&local_c);
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 4))();
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    (**(code **)(*(int *)*param_2 + 0xac))(&local_10,"ClimateSetting");
    if (local_10 != (int *)0x0) {
      iVar1 = (**(code **)(*local_10 + 0xa0))();
      local_28 = 0;
      if (0 < iVar1) {
        do {
          iVar5 = local_28;
          (**(code **)(*local_10 + 0xa8))(&local_8,local_28);
          local_18 = 0;
          (**(code **)(*local_8 + 0x74))(&DAT_1131fae4,&local_18);
          if (local_18 == param_3) {
            iVar2 = (**(code **)(*local_8 + 0xa0))();
            local_24 = 0;
            if (0 < iVar2) {
              do {
                iVar5 = local_24;
                (**(code **)(*local_8 + 0xa8))(&param_2,local_24);
                local_1c = 0;
                (**(code **)(*param_2 + 0x74))(&DAT_1131fae4,&local_1c);
                if (local_1c == param_4) {
                  iVar3 = (**(code **)(*param_2 + 0xa0))();
                  iVar6 = 0;
                  if (0 < iVar3) {
                    do {
                      (**(code **)(*param_2 + 0xa8))(&local_c,iVar6);
                      local_20 = 0xffffffff;
                      (**(code **)(*local_c + 0x74))("RegionID",&local_20);
                      local_30 = (**(code **)(*local_c + 0x7c))("Weather");
                      (**(code **)(*local_c + 0x74))("SoundEventValue",&local_34);
                      piVar4 = (int *)(**(code **)(*local_2c + 8))(local_20);
                      if (piVar4 != (int *)0x0) {
                        (**(code **)(*piVar4 + 8))(local_30);
                        (**(code **)(*piVar4 + 0xc))(local_34);
                      }
                      if (local_c != (int *)0x0) {
                        (**(code **)(*local_c + 4))();
                      }
                      iVar6 = iVar6 + 1;
                      iVar5 = local_24;
                    } while (iVar6 < iVar3);
                  }
                }
                if (param_2 != (int *)0x0) {
                  (**(code **)(*param_2 + 4))();
                }
                local_24 = iVar5 + 1;
                iVar5 = local_28;
              } while (local_24 < iVar2);
            }
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 4))();
          }
          local_28 = iVar5 + 1;
        } while (local_28 < iVar1);
      }
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 4))();
      }
    }
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 4))();
    }
  }
  return;
}

