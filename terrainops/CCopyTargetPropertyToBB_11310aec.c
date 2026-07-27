// CCopyTargetPropertyToBB  name-getter slot 0x11310aec
// -6  0x11310ad4 -> 0x103d8b60
// -5  0x11310ad8 -> 0x103dca70
// -4  0x11310adc -> 0x103dc9e0
// -3  0x11310ae0 -> 0x105656e0   <== Evaluate
// -2  0x11310ae4 -> 0x103d7a00
// -1  0x11310ae8 -> 0x103d7a30
// +0  0x11310aec -> 0x106216e0   <== name getter
// +1  0x11310af0 -> 0x103dc6d0
// +2  0x11310af4 -> 0x103dc830


/* [RE-AUTO c0]
   strings:
     ""Properties""
     ""PropertiesInstance""
     ""String""
     ""Float"" */

undefined4 __fastcall FUN_105656e0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  int *local_c;
  char local_5;
  
  if (*(char *)(DAT_113f3a18 + 0x209) == '\0') {
    cVar1 = (**(code **)(**(int **)(DAT_113f3a18 + 0xd0) + 0x174))();
    if (cVar1 == '\0') {
      return 2;
    }
  }
  FUN_10a5d660();
  FUN_10a5d660();
  cVar1 = FUN_103dbbb0(0,local_18);
  if (cVar1 != '\0') {
    cVar1 = FUN_103dbbb0(1,local_14);
    if ((((cVar1 != '\0') &&
         (piVar2 = *(int **)(param_1 + 0x2c), 3 < (uint)(piVar2[1] - *piVar2 >> 2))) &&
        (0xc < (int)(piVar2[4] - piVar2[3] & 0xfffffffcU))) && (-1 < *(int *)(piVar2[3] + 0xc))) {
      FUN_103d8940(*(int *)(piVar2[3] + 0xc),&local_1c);
      cVar1 = FUN_101c3720();
      if (cVar1 != '\0') {
        piVar2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(local_1c);
        if (piVar2 != (int *)0x0) {
          local_c = (int *)0x0;
          piVar2 = (int *)(**(code **)(*piVar2 + 0x150))(2);
          if (piVar2 != (int *)0x0) {
            iVar3 = (**(code **)(*piVar2 + 0x38))();
            if (iVar3 != 0) {
              local_5 = '\0';
              FUN_103db9b0(2,&local_5);
              if (local_5 == '\0') {
                pcVar6 = "Properties";
              }
              else {
                pcVar6 = "PropertiesInstance";
              }
              FUN_10465b20(pcVar6,&local_c);
              piVar2 = local_c;
              if (local_c != (int *)0x0) {
                uVar4 = FUN_10a5ec80();
                uVar4 = FUN_10a5d620(uVar4,&local_10);
                cVar1 = FUN_103c8650(uVar4);
                if (cVar1 != '\0') {
                  FUN_10a5d660();
                  puVar5 = (undefined4 *)FUN_103c8880(local_10);
                  FUN_10a5d8a0(*puVar5);
                  uVar4 = FUN_10a5ec80();
                  cVar1 = FUN_10a5d8d0(&DAT_113bee70);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_10a5d8d0("String");
                    if (cVar1 == '\0') {
                      cVar1 = FUN_10a5d8d0("Float");
                      if (cVar1 == '\0') {
                        cVar1 = FUN_10a5d8d0(&DAT_113bedfc);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_10a5d8d0(&DAT_113bee80);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_10a5d8d0(&DAT_113bee84);
                            if (cVar1 != '\0') {
                              cVar1 = FUN_10565c60(uVar4,&local_20);
                              if (cVar1 != '\0') {
                                FUN_101c3780(local_10,&local_20);
                                (**(code **)(*piVar2 + 0xc))();
                                return 2;
                              }
                            }
                          }
                          else {
                            cVar1 = FUN_10465910(uVar4,&local_20);
                            if (cVar1 != '\0') {
                              FUN_101cbf50(local_10,&local_20);
                              (**(code **)(*piVar2 + 0xc))();
                              return 2;
                            }
                          }
                        }
                        else {
                          cVar1 = FUN_10565d80(uVar4,local_2c);
                          if (cVar1 != '\0') {
                            FUN_10551360(local_10,local_2c);
                            (**(code **)(*piVar2 + 0xc))();
                            return 2;
                          }
                        }
                      }
                      else {
                        cVar1 = FUN_10465990(uVar4,&local_20);
                        if (cVar1 != '\0') {
                          FUN_101c3510(local_10,&local_20);
                          (**(code **)(*piVar2 + 0xc))();
                          return 2;
                        }
                      }
                    }
                    else {
                      cVar1 = FUN_10565d00(uVar4,&local_20);
                      if (cVar1 != '\0') {
                        FUN_10a5d620(local_20);
                        FUN_101cbef0(local_10,&local_20);
                        (**(code **)(*piVar2 + 0xc))();
                        return 2;
                      }
                    }
                  }
                  else {
                    local_5 = '\0';
                    cVar1 = FUN_10465bd0(uVar4,&local_5);
                    if (cVar1 != '\0') {
                      FUN_101c3550(local_10,&local_5);
                      (**(code **)(*piVar2 + 0xc))();
                      return 2;
                    }
                  }
                }
                (**(code **)(*piVar2 + 0xc))();
              }
            }
          }
        }
        return 1;
      }
    }
  }
  return 1;
}

