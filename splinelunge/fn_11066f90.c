
/* [RE-AUTO c0] */

int __thiscall
FUN_11066f90(int param_1,int *param_2,undefined8 param_3,undefined4 param_4,uint param_5,
            float param_6,undefined8 param_7,undefined4 param_8)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  undefined1 local_54 [48];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined8 local_c;
  
  if (param_5 == 0xffffffff) {
    param_5 = (uint)*(byte *)(param_1 + 0x114);
  }
  *(char *)(param_1 + 0x115) = (char)param_5;
  iVar8 = **(int **)(*(int *)(param_1 + 0x10) + 0x24);
  uVar3 = FUN_11317f30();
  (**(code **)(iVar8 + 0x414))(uVar3);
  *(int **)(param_1 + 0xd8) = param_2;
  fVar9 = DAT_11cc655c;
  local_c = 0;
  if ((*(byte *)(param_1 + 0x116) & 0x20) == 0) {
    local_10 = 0;
    param_4 = 0;
    param_3 = 0;
  }
  *(undefined8 *)(param_1 + 200) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_4;
  *(undefined4 *)(param_1 + 0xd4) = 0x43fa0000;
  *(float *)(param_1 + 200) = *(float *)(param_1 + 200) * fVar9;
  *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) * fVar9;
  *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xd0) * fVar9;
  *(undefined8 *)(param_1 + 0xb4) = param_7;
  fVar9 = param_6 * DAT_11de9a44;
  *(undefined4 *)(param_1 + 0xbc) = param_8;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(float *)(param_1 + 0xc4) = fVar9;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(byte *)(param_1 + 0x116) = *(byte *)(param_1 + 0x116) | 1;
  FUN_11065140();
  iVar8 = 0;
  piVar1 = (int *)**(int **)(param_1 + 0x18);
  piVar7 = param_2;
  if ((piVar1 != (int *)(*(int **)(param_1 + 0x18))[1]) && (piVar7 = piVar1, *piVar1 != 0)) {
    iVar8 = FUN_10ab70e0(param_2,*(undefined1 *)(param_1 + 0x115),param_6);
  }
  *(int **)(param_1 + 0xf8) = param_2;
  if (0 < iVar8) {
    *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) | 2;
    iVar4 = *piVar7;
    *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) | 1;
    *(int *)(param_1 + 4) = iVar4;
    puVar5 = (undefined4 *)**(int **)(param_1 + 0x24);
    if (puVar5 != (undefined4 *)(*(int **)(param_1 + 0x24))[1]) {
      do {
        (**(code **)(*(int *)*puVar5 + 8))(param_1);
        puVar5 = puVar5 + 1;
      } while (puVar5 != *(undefined4 **)(*(int *)(param_1 + 0x24) + 4));
    }
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x10) + 0x24) + 0xc) + 0x94))();
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x10) + 0x24) + 0xc) + 0x48))();
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 0x24) + 0xc);
    if (piVar1 != (int *)0x0) {
      if ((*(byte *)(param_1 + 0x116) & 2) != 0) {
        iVar4 = (**(code **)(*piVar1 + 0x288))();
        (**(code **)(**(int **)(iVar4 + 0x14) + 0x2c))
                  (*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
      }
      iVar4 = (**(code **)(*piVar1 + 0x16c))();
      if (iVar4 != 0) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + 0x24) + 0x27c))
                  ((*(byte *)(param_1 + 0x116) & 0x10) == 0);
        if ((*(int *)(param_1 + 0x78) == 0) ||
           (cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 0x20))(piVar1,&local_18),
           cVar2 == '\0')) {
          local_1c = 0;
          local_18 = CONCAT44((int)local_c,(int)local_c);
          local_10 = 0;
        }
        cVar2 = (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 0x10))(piVar1);
        if (cVar2 == '\0') {
          (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 8))
                    (piVar1,*(byte *)(param_1 + 0x116) >> 3 & 1);
        }
        (**(code **)(**(int **)(DAT_1202e818 + 0x80) + 0x1c))(piVar1,&local_18,2);
      }
      puVar5 = (undefined4 *)
               (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x10) + 0x24) + 0xc) + 0x78))
                         (local_54);
      *(undefined4 *)(param_1 + 0x84) = *puVar5;
      *(undefined4 *)(param_1 + 0x88) = puVar5[1];
      *(undefined4 *)(param_1 + 0x8c) = puVar5[2];
      *(undefined4 *)(param_1 + 0x90) = puVar5[3];
      *(undefined4 *)(param_1 + 0x94) = puVar5[4];
      *(undefined4 *)(param_1 + 0x98) = puVar5[5];
      *(undefined4 *)(param_1 + 0x9c) = puVar5[6];
      *(undefined4 *)(param_1 + 0xa0) = puVar5[7];
      *(undefined4 *)(param_1 + 0xa4) = puVar5[8];
      *(undefined4 *)(param_1 + 0xa8) = puVar5[9];
      *(undefined4 *)(param_1 + 0xac) = puVar5[10];
      *(undefined4 *)(param_1 + 0xb0) = puVar5[0xb];
      if (*(int *)(param_1 + 0x7c) != 0) {
        puVar6 = (undefined8 *)FUN_1106d650(local_24,0);
        local_1c = *(undefined4 *)(puVar6 + 1);
        *(undefined8 *)(param_1 + 0x6c) = *puVar6;
        *(undefined4 *)(param_1 + 0x74) = local_1c;
      }
      if (*(int *)(param_1 + 0x78) != 0) {
        puVar6 = (undefined8 *)FUN_1106d120(local_24,0);
        *(undefined8 *)(param_1 + 0x54) = *puVar6;
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(puVar6 + 1);
      }
      return iVar8;
    }
  }
  return 0;
}

