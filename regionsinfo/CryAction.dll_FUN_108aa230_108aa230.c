
/* [RE-AUTO c0]
   strings:
     ""Height""
     ""Points"" */

void __thiscall FUN_108aa230(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  piVar2 = param_2;
  if ((int *)*param_2 != (int *)0x0) {
    local_c = param_1;
    (**(code **)(*(int *)*param_2 + 0x74))(&DAT_1131fae4,param_1 + 1);
    (**(code **)(*(int *)*piVar2 + 0x74))(&DAT_113bef4c,param_1 + 2);
    (**(code **)(*(int *)*piVar2 + 100))("Height",param_1 + 0xd);
    (**(code **)(*(int *)*piVar2 + 0xac))(&local_8,"Points");
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 0xa0))();
      piVar2 = local_c;
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          (**(code **)(*local_8 + 0xa8))(&local_c,iVar4);
          (**(code **)(*local_c + 0x58))(&DAT_113069fc,&local_18);
          puVar1 = (undefined4 *)piVar2[0xb];
          local_24 = local_18;
          local_20 = local_14;
          local_1c = local_10;
          if (puVar1 == (undefined4 *)piVar2[0xc]) {
            FUN_108b2a80(puVar1,&local_24,(int)&param_2 + 3,1,1);
          }
          else {
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = local_18;
              puVar1[1] = local_14;
              puVar1[2] = local_10;
            }
            piVar2[0xb] = piVar2[0xb] + 0xc;
          }
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 4))();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))();
      }
    }
  }
  return;
}

