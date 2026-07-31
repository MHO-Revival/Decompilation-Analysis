
/* [RE-AUTO c0]
   calls: strncpy
   strings:
     ""mh_sharemem_addrinfo"" */

void __thiscall
FUN_10db65e0(int *param_1,int param_2,byte *param_3,uint param_4,undefined8 *param_5,int *param_6,
            int param_7,int param_8,int param_9,undefined1 param_10,undefined8 param_11,int param_12
            ,char param_13,undefined1 param_14,undefined1 param_15)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  cVar2 = (**(code **)(*param_1 + 0x388))();
  if (cVar2 == '\0') {
    pbVar6 = &DAT_11d9d32b;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10db6623:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_10db6628;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10db6623;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10db6628:
    if (uVar5 != 0) {
      strncpy((char *)(param_1 + 0x742),(char *)param_3,0x100);
    }
    if (param_4 != 0) {
      param_1[0x78a] = param_1[0x78a] | param_4;
    }
    *(undefined1 *)(param_1 + 0x7a3) = param_10;
    param_1[0x7a5] = param_7;
    param_1[0x7a6] = param_8;
    param_1[0x741] = param_2;
    param_1[0x7a2] = param_9;
    *(undefined8 *)(param_1 + 0x79b) = *param_5;
    param_1[0x79d] = *(int *)(param_5 + 1);
    param_1[0x79e] = *param_6;
    param_1[0x79f] = param_6[1];
    param_1[0x7a0] = param_6[2];
    param_1[0x7a1] = param_6[3];
    *(undefined8 *)(param_1 + 0x7c0) = param_11;
    param_1[0x7c2] = param_12;
    *(bool *)(param_1 + 0x7c3) = param_13 != '\0';
    *(undefined1 *)(param_1 + 0x7c6) = param_14;
    *(undefined1 *)((int)param_1 + 0x1f19) = param_15;
  }
  if (-1 < *(int *)(param_3 + -0xc)) {
    iVar3 = FUN_10c3dad0(param_3 + -0xc);
    if (iVar3 < 1) {
      DAT_123be268 = DAT_123be268 + (-0xd - *(int *)(param_3 + -4));
      FUN_10c3d900(param_3 + -0xc);
    }
  }
  return;
}

