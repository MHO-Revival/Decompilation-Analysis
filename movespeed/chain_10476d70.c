// FUN_10476d70 @ 10476d70  depth 2  (133 bytes)


/* [RE-AUTO c0] */

uint * __thiscall FUN_10476d70(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_c;
  
  local_c = 0;
  puVar1 = param_1;
  if ((uint *)param_1[1] != (uint *)0x0) {
    puVar2 = (uint *)param_1[1];
    do {
      if (puVar2[4] < *param_2) {
        puVar3 = (uint *)puVar2[3];
      }
      else {
        puVar3 = (uint *)puVar2[2];
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar3 != (uint *)0x0);
  }
  if ((puVar1 == param_1) || (*param_2 < puVar1[4])) {
    local_28 = *param_2;
    local_18 = 0;
    uStack_14 = 0;
    local_24 = 0;
    local_1c = 0;
    FUN_10477870(&param_2,puVar1,&local_28);
    puVar1 = param_2;
  }
  return puVar1 + 5;
}

