/* ===== data::XmasRewardItemMo @ 109d36e0  size=51 ===== */
// strings:
//   "mh.data::XmasRewardItemMo"

/* [RE-AUTO c3]
   id: data::XmasRewardItemMo
   strings:
     ""mh.data::XmasRewardItemMo"" */

undefined4 * __thiscall data__XmasRewardItemMo(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_11a98de0(param_1,"mh.data::XmasRewardItemMo",0,0);
  }
  return param_1;
}



/* ===== FUN_109d3900 @ 109d3900  size=538 ===== */
// strings:
//   "InitModel"
//   "FetchActivityData"
//   "GetSecretMeat"
//   "GetGiantMeat"
//   "SubmitGiantMeat"
//   "FetchRewardData"
//   "DrawReward"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""FetchActivityData""
     ""GetSecretMeat""
     ""GetGiantMeat""
     ""SubmitGiantMeat""
     ""FetchRewardData""
     ""DrawReward"" */

void FUN_109d3900(void)

{
  code *pcStack_94;
  char *pcStack_90;
  code **ppcStack_8c;
  undefined4 ***pppuStack_88;
  code *pcStack_84;
  code **ppcStack_80;
  code ***pppcStack_7c;
  undefined4 ***pppuStack_78;
  code **ppcStack_74;
  code **ppcStack_70;
  undefined4 ***pppuStack_6c;
  undefined4 ***pppuStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  undefined4 ***pppuStack_5c;
  code ***pppcStack_58;
  undefined4 ***pppuStack_54;
  undefined4 ***pppuStack_50;
  undefined4 ***pppuStack_4c;
  undefined4 ***pppuStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  undefined4 ***pppuStack_34;
  undefined4 ***pppuStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppuStack_30 = (undefined4 ***)0x11dbd57c;
  pppuStack_34 = (undefined4 ***)0x109d3934;
  FUN_100b62c0();
  pppuStack_34 = (undefined4 ***)&DAT_109d4040;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109d3945;
  FUN_109d4230();
  if (((undefined4 ****)pppcStack_20 != &pppuStack_34) &&
     ((undefined4 ****)pppcStack_20 != (undefined4 ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppuStack_40 = (undefined4 ***)0x109d395b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppuStack_34;
  pppcStack_3c = (code ***)0x11ddfbb1;
  pppuStack_40 = (undefined4 ***)0x11ddfba0;
  pppuStack_44 = (undefined4 ***)0x109d397b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppuStack_44 = (undefined4 ***)FUN_109d3e00;
  pppuStack_48 = &pppcStack_3c;
  pppuStack_4c = (undefined4 ***)0x109d398c;
  FUN_109d4230();
  if (((undefined4 ****)pppuStack_30 != &pppuStack_44) &&
     ((undefined4 ****)pppuStack_30 != (undefined4 ****)0x0)) {
    pppuStack_4c = pppuStack_30;
    pppuStack_50 = (undefined4 ***)0x109d39a2;
    FUN_10c3d5d0();
  }
  pppuStack_34 = &pppuStack_44;
  pppuStack_4c = (undefined4 ***)0x11de39e1;
  pppuStack_50 = (undefined4 ***)0x11de39d4;
  pppuStack_54 = (undefined4 ***)0x109d39c2;
  pppuStack_30 = pppuStack_34;
  FUN_100b62c0();
  pppuStack_54 = (undefined4 ***)&LAB_109d3f70;
  pppcStack_58 = (code ***)&pppuStack_4c;
  pppuStack_5c = (undefined4 ***)0x109d39d3;
  FUN_109d4230();
  if (((undefined4 ****)pppuStack_40 != &pppuStack_54) &&
     ((undefined4 ****)pppuStack_40 != (undefined4 ****)0x0)) {
    pppuStack_5c = pppuStack_40;
    pppcStack_60 = (code ***)0x109d39e9;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppuStack_54;
  pppuStack_5c = (undefined4 ***)0x11de39d0;
  pppcStack_60 = (code ***)0x11de39c4;
  pppcStack_64 = (code ***)0x109d3a09;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)&LAB_109d3fb0;
  pppuStack_68 = &pppuStack_5c;
  pppuStack_6c = (undefined4 ***)0x109d3a1a;
  FUN_109d4230();
  if (((code ****)pppuStack_50 != &pppcStack_64) && ((code ****)pppuStack_50 != (code ****)0x0)) {
    pppuStack_6c = pppuStack_50;
    ppcStack_70 = (code **)0x109d3a30;
    FUN_10c3d5d0();
  }
  pppuStack_54 = &pppcStack_64;
  pppuStack_6c = (undefined4 ***)0x11de3a03;
  ppcStack_70 = (code **)0x11de39f4;
  ppcStack_74 = (code **)0x109d3a50;
  pppuStack_50 = pppuStack_54;
  FUN_100b62c0();
  ppcStack_74 = (code **)&LAB_109d3ff0;
  pppuStack_78 = &pppuStack_6c;
  pppcStack_7c = (code ***)0x109d3a61;
  FUN_109d4230();
  if ((pppcStack_60 != &ppcStack_74) && (pppcStack_60 != (code ***)0x0)) {
    pppcStack_7c = pppcStack_60;
    ppcStack_80 = (code **)0x109d3a77;
    FUN_10c3d5d0();
  }
  pppcStack_64 = &ppcStack_74;
  pppcStack_7c = (code ***)0x11de39f3;
  ppcStack_80 = (code **)0x11de39e4;
  pcStack_84 = (code *)0x109d3a97;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109d3b20;
  pppuStack_88 = &pppcStack_7c;
  ppcStack_8c = (code **)0x109d3aa8;
  FUN_109d4230();
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    ppcStack_8c = ppcStack_70;
    pcStack_90 = (char *)0x109d3abe;
    FUN_10c3d5d0();
  }
  ppcStack_74 = &pcStack_84;
  ppcStack_8c = (code **)0x11ddfb3a;
  pcStack_90 = "DrawReward";
  pcStack_94 = (code *)0x109d3ade;
  ppcStack_70 = ppcStack_74;
  FUN_100b62c0();
  pcStack_94 = FUN_109d3f10;
  FUN_109d4230(&ppcStack_8c);
  if ((ppcStack_80 != &pcStack_94) && (ppcStack_80 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_80);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109d3b20 @ 109d3b20  size=734 ===== */
// calls: CActivityMgr::GetActivityState, data::XmasRewardItemMo
// strings:
//   "currentHeight"
//   "iItemIndex"
//   "iItemId"
//   "iItemDataId"
//   "bIsDaily"
//   "iNeedHeight"
//   "bClaimed"
//   "bEnabled"
//   "rewardArray"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   calls: data::XmasRewardItemMo
   strings:
     ""currentHeight""
     ""iItemIndex""
     ""iItemId""
     ""iItemDataId""
     ""bIsDaily""
     ""iNeedHeight""
     ""bClaimed""
     ""bEnabled""
     ""rewardArray"" */

void FUN_109d3b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_EDI;
  undefined4 *puVar5;
  int *local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 auStack_3c [14];
  
  local_54 = (int *)param_4[1];
  local_4c = param_4[3];
  local_50 = param_4[2];
  local_48 = param_4[4];
  local_58 = (int *)0x0;
  if (((uint)local_54 >> 6 & 1) != 0) {
    local_58 = (int *)*param_4;
    (**(code **)(*local_58 + 4))(&local_58,local_50);
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar3 + 0xb4))();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2acc) != 0)) {
      iVar1 = FUN_109d4050();
      if (iVar1 != 0) {
        uVar2 = FUN_109d4090();
        iVar1 = CActivityMgr__GetActivityState(uVar2);
        if (iVar1 != 0) {
          uVar2 = FUN_109d4090();
          iVar1 = FUN_1122b9d0(uVar2);
          if (iVar1 != 0) {
            piVar3 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))()
            ;
            if (piVar3 != (int *)0x0) {
              iVar4 = (**(code **)(*piVar3 + 0x4e8))();
              if (iVar4 != 0) {
                uVar2 = FUN_1141f8e0();
                FUN_104d1550("currentHeight",uVar2);
              }
              puVar5 = &uStack_40;
              uStack_40 = 0;
              auStack_3c[0] = 0;
              FUN_11a98a70(puVar5);
              iVar4 = 0;
              if (*(char *)(iVar1 + 0xad2) != '\0') {
                piVar3 = (int *)(iVar1 + 0xada);
                do {
                  if (*(char *)((int)piVar3 + -6) == '@') {
                    FUN_1141f8e0();
                    FUN_1141fab0(piVar3[-1],*piVar3 == 1);
                    data__XmasRewardItemMo(param_2);
                    FUN_104d1550("iItemIndex",piVar3[-1]);
                    FUN_104d1550("iItemId",piVar3[0x43]);
                    FUN_109d37b0();
                    FUN_104d1550("iItemDataId",piVar3[2]);
                    FUN_104d15e0("bIsDaily",*piVar3 == 1);
                    FUN_104d1550("iNeedHeight",piVar3[1]);
                    FUN_104d15e0("bClaimed",puVar5);
                    FUN_104d15e0("bEnabled",unaff_EDI);
                    (**(code **)(*local_54 + 0x3c))(local_4c,auStack_3c);
                    FUN_109d3720();
                  }
                  iVar4 = iVar4 + 1;
                  piVar3 = (int *)((int)piVar3 + 0x423);
                } while (iVar4 < (int)(uint)*(byte *)(iVar1 + 0xad2));
              }
              FUN_104d12b0("rewardArray",auStack_44);
              FUN_104d7c10();
            }
          }
        }
      }
    }
  }
  if (((uint)local_54 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 8))(&local_58,local_50);
  }
  return;
}



/* ===== FUN_109d4690 @ 109d4690  size=751 ===== */
// strings:
//   "C2AS_GetActivitySimpleDatas"
//   "C2AS_GetActivityDetailData"
//   "C2AS_GetConstTableData"
//   "C2AS_GetServerId"
//   "C2AS_SetCacheActivityId"
//   "C2AS_GetCacheActivityId"
//   "C2AS_ExecuteEntry"
//   "C2AS_ExecuteLevelMatch"
//   "C2AS_GetNewYearRedPacket"
//   "C2AS_ReqRewardActivity"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetActivitySimpleDatas""
     ""C2AS_GetActivityDetailData""
     ""C2AS_GetConstTableData""
     ""C2AS_GetServerId""
     ""C2AS_SetCacheActivityId""
     ""C2AS_GetCacheActivityId""
     ""C2AS_ExecuteEntry""
     ""C2AS_ExecuteLevelMatch""
     ""C2AS_GetNewYearRedPacket""
     ""C2AS_ReqRewardActivity"" */

void FUN_109d4690(void)

{
  undefined1 *puStack_c4;
  char *pcStack_c0;
  code **ppcStack_bc;
  code ***pppcStack_b8;
  code *pcStack_b4;
  undefined1 **ppuStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code **ppcStack_a4;
  code **ppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11de3bd8;
  pppcStack_34 = (code ***)0x109d46c4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109d4990;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109d46d5;
  FUN_109dc140();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109d46eb;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de3b42;
  pppcStack_40 = (code ***)0x11de3b28;
  pppcStack_44 = (code ***)0x109d470b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109d4bc0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109d471c;
  FUN_109dc140();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109d4732;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de3b26;
  pppcStack_50 = (code ***)0x11de3b10;
  pppcStack_54 = (code ***)0x109d4752;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109d87e0;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109d4763;
  FUN_109dc140();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x109d4779;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de3b6c;
  pppcStack_60 = (code ***)0x11de3b5c;
  pppcStack_64 = (code ***)0x109d4799;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109d8a90;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109d47aa;
  FUN_109dc140();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x109d47c0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de3b5b;
  pppcStack_70 = (code ***)0x11de3b44;
  pppcStack_74 = (code ***)0x109d47e0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_109d8b00;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109d47f1;
  FUN_109dc140();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x109d4807;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11de3e23;
  pppcStack_80 = (code ***)0x11de3e0c;
  pppcStack_84 = (code ***)0x109d4827;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_109d8b30;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x109d4838;
  FUN_109dc140();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x109d484e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11de3e09;
  pppcStack_90 = (code ***)0x11de3df8;
  pppcStack_94 = (code ***)0x109d486e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_109d8b70;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x109d487f;
  FUN_109dc140();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    ppcStack_a0 = (code **)0x109d4895;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11de3e56;
  ppcStack_a0 = (code **)0x11de3e40;
  ppcStack_a4 = (code **)0x109d48b5;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  ppcStack_a4 = (code **)FUN_109d8c70;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x109d48c6;
  FUN_109dc140();
  if ((pppcStack_90 != &ppcStack_a4) && (pppcStack_90 != (code ***)0x0)) {
    pppcStack_ac = pppcStack_90;
    ppuStack_b0 = (undefined1 **)0x109d48dc;
    FUN_10c3d5d0();
  }
  pppcStack_94 = &ppcStack_a4;
  pppcStack_ac = (code ***)0x11de3e3c;
  ppuStack_b0 = (undefined1 **)0x11de3e24;
  pcStack_b4 = (code *)0x109d48fc;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pcStack_b4 = FUN_109d8cf0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  ppcStack_bc = (code **)0x109d490d;
  FUN_109dc140();
  if ((ppcStack_a0 != &pcStack_b4) && (ppcStack_a0 != (code **)0x0)) {
    ppcStack_bc = ppcStack_a0;
    pcStack_c0 = (char *)0x109d4923;
    FUN_10c3d5d0();
  }
  ppcStack_a4 = &pcStack_b4;
  ppcStack_bc = (code **)0x11de3dd2;
  pcStack_c0 = "C2AS_ReqRewardActivity";
  puStack_c4 = (undefined1 *)0x109d4943;
  ppcStack_a0 = ppcStack_a4;
  FUN_100b62c0();
  puStack_c4 = &LAB_109dbfc0;
  FUN_109dc140(&ppcStack_bc);
  if ((ppuStack_b0 != &puStack_c4) && (ppuStack_b0 != (undefined1 **)0x0)) {
    FUN_10c3d5d0(ppuStack_b0);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109d4990 @ 109d4990  size=558 ===== */
// calls: CPet::SetName
// strings:
//   "mh.view.NewOperationActivity.Data.ActivitySimpleData"
//   "ActivityType"
//   "ActivityId"
//   "ActivityName"
//   "ActivityIcon"
//   "HasRewardCanFetch"

/* [RE-AUTO c0]
   strings:
     ""mh.view.NewOperationActivity.Data.ActivitySimpleData""
     ""ActivityType""
     ""ActivityId""
     ""ActivityName""
     ""ActivityIcon""
     ""HasRewardCanFetch"" */

void FUN_109d4990(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *unaff_EDI;
  int *in_stack_00000018;
  int **ppiVar8;
  undefined4 local_6c [2];
  int *local_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined2 auStack_58 [2];
  undefined2 auStack_54 [6];
  int iStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined2 *puStack_34;
  undefined2 *puStack_30;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)local_6c;
  local_64 = in_stack_00000018;
  local_6c[0] = param_2;
  FUN_11a98a70(in_stack_00000018);
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     ((iVar5 = (**(code **)(*piVar1 + 0xb4))(), iVar5 != 0 &&
      (iStack_48 = *(int *)(iVar5 + 0x260fc), iStack_48 != 0)))) {
    FUN_1122bb90(&puStack_44);
    FUN_111f8d20();
    puVar7 = puStack_44;
    if (puStack_44 != puStack_40) {
      do {
        puVar2 = (undefined4 *)*puVar7;
        pcVar6 = (char *)FUN_1122b9d0(*puVar2);
        if ((pcVar6 != (char *)0x0) && (cVar3 = FUN_109d8df0(puVar2,pcVar6), cVar3 != '\0')) {
          ppiVar8 = &local_64;
          local_64 = (int *)0x0;
          uStack_60 = 0;
          FUN_11a98de0(ppiVar8,"mh.view.NewOperationActivity.Data.ActivitySimpleData",0,0);
          (**(code **)(*(int *)*unaff_EDI + 0x3c))(unaff_EDI[2],&stack0xffffff8c);
          FUN_104d1550("ActivityType",(int)*pcVar6);
          FUN_104d1440("ActivityId",*puVar2);
          CPet__SetName(pcVar6 + 0xd);
          puStack_34 = auStack_54;
          auStack_54[0] = 0;
          puStack_30 = puStack_34;
          FUN_100e5b60(auStack_54);
          FUN_104d1700("ActivityName",puStack_34);
          if ((puStack_34 != auStack_58) && (puStack_34 != (undefined2 *)0x0)) {
            FUN_10c3d5d0(puStack_34);
          }
          if (ppiVar8 != (int **)0x0) {
            FUN_10c3da30(ppiVar8);
          }
          FUN_104d1670("ActivityIcon",pcVar6 + 0x94d);
          uVar4 = FUN_109db010(*puVar2);
          FUN_104d15e0("HasRewardCanFetch",uVar4);
          if ((uStack_60 >> 6 & 1) != 0) {
            (**(code **)(*local_64 + 8))(&local_64,uStack_5c);
          }
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puStack_40);
    }
    if (puStack_44 != (undefined4 *)0x0) {
      FUN_10c3d5d0(puStack_44);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109d8fc0 @ 109d8fc0  size=2808 ===== */
// calls: CPet::SetName, atoi
// strings:
//   "RewardDatas"
//   "mh.view.NewOperationActivity.Data.ActivityRewardData"
//   "ItemId"
//   "ItemCount"
//   "FetchCount"
//   "MaxFetchCount"
//   "EntryId"
//   "ConditionType"
//   "nCondParam1"
//   "nCondParam2"
//   "CurrentAchieveCount"
//   "NeedAchieveCount"
//   "currentItemCount"
//   "needItemCount"
//   "nParam1"
//   "nParam2"
//   "strParam5"
//   "strParam6"

/* [RE-AUTO c0]
   calls: atoi
   strings:
     ""RewardDatas""
     ""mh.view.NewOperationActivity.Data.ActivityRewardData""
     ""ItemId""
     ""ItemCount""
     ""FetchCount""
     ""MaxFetchCount""
     ""EntryId""
     ""ConditionType""
     ""nCondParam1""
     ""nCondParam2"" */

void FUN_109d8fc0(undefined4 param_1,undefined4 *param_2,int param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int iVar6;
  char *unaff_EDI;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_13c;
  char *pcStack_138;
  undefined4 uStack_12c;
  uint uStack_114;
  int local_110;
  undefined4 *puStack_10c;
  int *piStack_108;
  int iStack_104;
  int *piStack_100;
  uint uStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint uStack_e8;
  char *local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d4;
  undefined4 local_cc [4];
  undefined4 uStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  char *pcStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  int iStack_98;
  int iStack_94;
  int *piStack_90;
  uint uStack_8c;
  undefined4 auStack_88 [3];
  undefined2 *puStack_7c;
  undefined2 auStack_78 [2];
  undefined4 *puStack_74;
  undefined2 auStack_70 [2];
  undefined2 **ppuStack_6c;
  ushort auStack_68 [8];
  undefined2 **ppuStack_58;
  undefined2 **ppuStack_54;
  undefined4 **ppuStack_50;
  undefined4 **ppuStack_4c;
  undefined2 ***pppuStack_48;
  undefined2 ***pppuStack_44;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_114;
  local_110 = param_3;
  local_cc[0] = param_1;
  local_e4 = param_4;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     (iStack_e0 = (**(code **)(*piVar1 + 0xb4))(), iStack_e0 != 0)) {
    piStack_a8 = (int *)0x0;
    uStack_a4 = 0;
    FUN_11a98a70();
    iStack_e0 = CONCAT31(iStack_e0._1_3_,((byte)param_2[1] & 0x8f) == 10);
    pcStack_138 = (char *)0x109d9078;
    (**(code **)(*(int *)*param_2 + 0x14))();
    iStack_dc = 0;
    if (param_4[0xad2] != '\0') {
LAB_109d9090:
      iVar6 = iStack_dc * 0x423;
      iStack_d4 = iVar6;
      if (((param_4[iVar6 + 0xad4] != '0') || (param_4[iVar6 + 0xae3] == '\x10')) ||
         ((*param_4 == '|' && (param_4[iVar6 + 0xae3] != '\n')))) goto LAB_109d9e19;
      piStack_100 = (int *)0x0;
      uStack_fc = 0;
      FUN_11a98de0();
      pcStack_138 = pcStack_b0;
      uStack_13c = (char *)0x109d90fe;
      (**(code **)(*piStack_b8 + 0x3c))();
      uStack_13c = *(char **)(param_4 + iVar6 + 0xad6);
      FUN_104d1440();
      FUN_104d1550("ItemCount",(int)*(short *)(param_4 + iVar6 + 0xada));
      uStack_13c = (char *)(uint)(byte)param_4[iVar6 + 0xad3];
      uVar3 = FUN_109d8f20();
      FUN_104d1550("FetchCount",uVar3);
      FUN_104d1550("MaxFetchCount",(int)*(short *)(param_4 + iVar6 + 0xb0d));
      FUN_104d1550("EntryId",param_4[iVar6 + 0xad3]);
      CPet__SetName(param_4 + iVar6 + 0xb0f);
      ppuStack_50 = (undefined4 **)auStack_70;
      auStack_70[0] = 0;
      ppuStack_4c = ppuStack_50;
      FUN_100e5b60(auStack_70);
      FUN_104d1700(&DAT_11dbe644,ppuStack_50);
      if ((ppuStack_50 != &puStack_74) && (ppuStack_50 != (undefined4 **)0x0)) {
        FUN_10c3d5d0(ppuStack_50);
      }
      FUN_10c3da30("mh.view.NewOperationActivity.Data.ActivityRewardData");
      FUN_104d1550("ConditionType",param_4[iVar6 + 0xae3]);
      FUN_104d1550("nCondParam1",*(undefined4 *)(param_4 + iVar6 + 0xae5));
      FUN_104d1550("nCondParam2",*(undefined4 *)(param_4 + iVar6 + 0xae9));
      uVar3 = *(undefined4 *)(param_4 + iVar6 + 0xae9);
      uStack_12c = 0;
      switch(param_4[iVar6 + 0xae3]) {
      case '\x02':
        uVar9 = *(undefined4 *)(param_4 + iVar6 + 0xae5);
        pcVar8 = "LoginDayTime";
        goto code_r0x109d92ec;
      case '\x03':
        uVar9 = *(undefined4 *)(param_4 + iVar6 + 0xae5);
        pcVar8 = "NeedOnlineTime";
code_r0x109d92ec:
        FUN_104d1550(pcVar8,uVar9);
      case '\x04':
      case '\x05':
      case '\x06':
      case '\a':
      case '\f':
      case '\x0f':
      case '\x10':
code_r0x109d92fa:
        break;
      case '\b':
        uStack_12c = FUN_109d8f20(pcStack_138,param_4[iVar6 + 0xae4]);
        uVar3 = *(undefined4 *)(param_4 + iVar6 + 0xae5);
        break;
      case '\t':
        (**(code **)(*piStack_108 + 0x46c))(*(undefined2 *)(param_4 + iVar6 + 0xae5));
        uStack_12c = FUN_114e00a0();
        break;
      case '\n':
      case '\x0e':
        goto DAT_109d92cc;
      case '\v':
        piStack_90 = (int *)0x0;
        uStack_8c = 0;
        FUN_11a98a70(&piStack_90);
        FUN_104d12b0("ExchangeSourceItemDataArray",&iStack_94);
        iStack_f4 = 0;
        iStack_f0 = 0;
        iStack_ec = 0;
        FUN_100b5f70(param_4 + iVar6 + 0xb8f,&stack0xfffffecf);
        FUN_100e4b30(&ppuStack_58,&uStack_fc,0x2c);
        if ((pppuStack_44 != &ppuStack_58) && (pppuStack_44 != (undefined2 ***)0x0)) {
          FUN_10c3d5d0(pppuStack_44);
        }
        iStack_f0 = 0;
        iStack_ec = 0;
        uStack_e8 = 0;
        FUN_100b5f70(param_4 + iVar6 + 0xc0f,(int)&uStack_13c + 3);
        FUN_100e4b30(auStack_88,&iStack_f8,0x2c);
        if ((puStack_74 != auStack_88) && (puStack_74 != (undefined4 *)0x0)) {
          FUN_10c3d5d0(puStack_74);
        }
        uStack_114 = 0;
        uStack_e8 = ((int)piStack_100 - iStack_104) / 0x18;
        if (uStack_e8 != 0) {
          iVar4 = iStack_f4 - iStack_f8;
          puStack_10c = (undefined4 *)(iStack_f8 + 0x14);
          iStack_ec = iStack_104 - iStack_f8;
          do {
            iVar6 = local_110;
            param_4 = unaff_EDI;
            if ((uint)(iVar4 / 0x18) <= uStack_114) break;
            iVar6 = atoi(*(char **)(iStack_ec + (int)puStack_10c));
            iVar5 = atoi((char *)*puStack_10c);
            uStack_bc = 0;
            piStack_b8 = (int *)0x0;
            FUN_11a98de0(&uStack_bc,"mh.view.NewOperationActivity.Data.ActivitySimpleItemData",0,0);
            FUN_104d1550("ItemId",iVar6);
            FUN_104d1550("ItemCount",iVar5);
            (**(code **)(*piStack_b4 + 0x3c))(uStack_ac,local_cc);
            FUN_104d7c10();
            uStack_114 = uStack_114 + 1;
            puStack_10c = puStack_10c + 6;
            iVar6 = local_110;
          } while (uStack_114 < uStack_e8);
        }
        FUN_100e4590(iStack_f4,iStack_f8,0,&stack0xfffffebf);
        if (iStack_f8 != 0) {
          FUN_10c3d5d0(iStack_f8);
        }
        FUN_100e4590(piStack_100,iStack_104,0,&stack0xfffffebf);
        if (iStack_f0 != 0) {
          FUN_10c3d5d0(iStack_f0);
        }
        if ((uStack_8c >> 6 & 1) != 0) {
          (**(code **)(*piStack_90 + 8))(&piStack_90,auStack_88[0]);
        }
        goto code_r0x109d92fa;
      case '\r':
        uVar3 = 1;
        iVar4 = FUN_107ca5b0(*(undefined4 *)(param_4 + iVar6 + 0xae5));
        if ((((iVar4 == 0) ||
             (iVar4 = FUN_116b8a70(*(undefined4 *)(param_4 + iVar6 + 0xae9)), iVar4 == 0)) ||
            (piStack_108[0xae2] == 0)) ||
           (cVar2 = FUN_114cdd70(*(undefined4 *)(iVar4 + 0x28)), cVar2 == '\0'))
        goto code_r0x109d92fa;
        uStack_12c = 1;
        break;
      case '\x11':
        FUN_109d8f20(pcStack_138,param_4[iVar6 + 0xae5]);
        goto DAT_109d92cc;
      default:
        uStack_12c = 0;
      }
      goto LAB_109d92fe;
    }
LAB_109d9e50:
    if ((uStack_a4 >> 6 & 1) != 0) {
      (**(code **)(*piStack_a8 + 8))();
    }
  }
  FUN_11a89daa();
  return;
DAT_109d92cc:
  uStack_12c = FUN_109d8f20(pcStack_138,param_4[iVar6 + 0xae5]);
LAB_109d92fe:
  FUN_104d1550("CurrentAchieveCount",uStack_12c);
  FUN_104d1550("NeedAchieveCount",uVar3);
  cVar2 = *param_4;
  if ((((cVar2 == '\x7f') || (cVar2 == '\f')) || (cVar2 == '\x10')) ||
     (((cVar2 == '\x16' || (cVar2 == '\x1c')) ||
      ((cVar2 == '\x1b' || ((cVar2 == '\x1f' || (cVar2 == '\"')))))))) {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = "needItemCount";
    uStack_13c = (char *)0x109d9383;
    FUN_104d1550();
    param_4 = local_e4;
  }
  if (*param_4 == '\x18') {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = "needItemCount";
    uStack_13c = (char *)0x109d93ca;
    FUN_104d1550();
    param_4 = local_e4;
  }
  if (*param_4 == '\x19') {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = "needItemCount";
    uStack_13c = (char *)0x109d9411;
    FUN_104d1550();
    param_4 = local_e4;
  }
  if (((*param_4 == '|') && (param_4[iVar6 + 0xae3] == '\n')) &&
     (puStack_10c = (undefined4 *)FUN_109dbcd0(), puStack_10c != (undefined4 *)0x0)) {
    iVar4 = FUN_109d8f20();
    if (iVar4 == 0) {
      iVar4 = *(int *)(uStack_114 + 0xb);
    }
    uVar7 = FUN_111f8d20();
    piStack_90 = (int *)((uint)uVar7 - 0x2a30);
    iStack_98 = iVar4 + -0x2a30;
    uStack_8c = (int)((ulonglong)uVar7 >> 0x20) - (uint)((uint)uVar7 < 0x2a30);
    iStack_94 = iStack_98 >> 0x1f;
    pcStack_138 = (char *)0x109d94a2;
    FUN_10a13c30();
    FUN_109d8f20();
    pcStack_138 = "ItemCount";
    uStack_13c = (char *)0x109d94fb;
    FUN_104d1550();
    param_4 = local_e4;
  }
  if ((*param_4 == '\n') && (param_4[iVar6 + 0xae3] == '\n')) {
    if ((*(int *)(param_4 + iVar6 + 0xadf) == 4) && (*(int *)(iStack_e0 + 0x2d1c) != 0)) {
      iStack_d4 = FUN_113fa0d0();
      iStack_d4 = *(int *)(param_4 + iVar6 + 0xae9) - iStack_d4;
      if (0 < iStack_d4) {
        FUN_109d8f20();
        FUN_104d1550();
      }
    }
    if ((*(int *)(param_4 + iVar6 + 0xadf) == 2) && (*(int *)(iStack_e0 + 0x2d1c) != 0)) {
      FUN_113fa380();
      FUN_104d1440();
      pcStack_138 = (char *)0x109d9964;
      FUN_104d1550();
    }
  }
  if ((*param_4 == '\x17') && (param_4[iVar6 + 0xae3] == '\n')) {
    if (*(int *)(param_4 + iVar6 + 0xadf) == 4) {
      FUN_104d1550();
      FUN_104d1550();
    }
    if (*(int *)(param_4 + iVar6 + 0xadf) == 2) {
      FUN_104d1550();
      FUN_104d1550();
    }
  }
  if (*param_4 == '%') {
    FUN_109d8f20();
    FUN_104d1550();
  }
  if (*param_4 == '*') {
    FUN_109d8f20();
    FUN_104d1550();
    cVar2 = param_4[iVar6 + 0xae5];
    FUN_109d8f20();
    pcStack_138 = "NeedAchieveCount";
    uStack_13c = (char *)0x109d9a79;
    FUN_104d1550();
    uStack_13c = (char *)0x109d9a8e;
    pcStack_138 = unaff_EDI;
    uStack_13c = (char *)FUN_109d8f20();
    FUN_104d1550();
    FUN_104d1550("MaxFetchCount",(int)*(short *)(param_4 + iVar6 + 0xb0d));
    uStack_13c = param_4 + iVar6 + 0xb0f;
    CPet__SetName();
    pppuStack_48 = (undefined2 ***)auStack_68;
    auStack_68[0] = 0;
    pppuStack_44 = pppuStack_48;
    FUN_100e5b60();
    FUN_104d1700(&DAT_11dbe644,pppuStack_48);
    if ((pppuStack_48 != &ppuStack_6c) && (pppuStack_48 != (undefined2 ***)0x0)) {
      FUN_10c3d5d0(pppuStack_48);
    }
    if (cVar2 != '\0') {
      FUN_10c3da30(cVar2);
    }
    iVar4 = FUN_109d8f20(unaff_EBX,param_4[iVar6 + 0xae5]);
    CPet__SetName(param_4 + iVar4 * 0x423 + 0x6c3);
    ppuStack_58 = (undefined2 **)auStack_78;
    auStack_78[0] = 0;
    ppuStack_54 = ppuStack_58;
    FUN_100e5b60(auStack_78);
    FUN_104d1700("strParam5",ppuStack_58);
    if ((ppuStack_58 != &puStack_7c) && (ppuStack_58 != (undefined2 **)0x0)) {
      FUN_10c3d5d0(ppuStack_58);
    }
    if (uStack_13c != (char *)0x0) {
      FUN_10c3da30(uStack_13c);
    }
    iVar4 = FUN_10254130(*(undefined4 *)(param_4 + iVar6 + 0xad6));
    if (iVar4 != 0) {
      ppuStack_58 = (undefined2 **)auStack_68;
      auStack_68[0] = auStack_68[0] & 0xff00;
      ppuStack_54 = ppuStack_58;
      FUN_100e5aa0();
      FUN_104d1670();
      if ((ppuStack_54 != (undefined2 **)auStack_68) && (ppuStack_54 != (undefined2 **)0x0)) {
        FUN_10c3d5d0();
      }
      goto LAB_109d9c70;
    }
LAB_109d9e33:
    if ((uStack_fc >> 6 & 1) != 0) {
      (**(code **)(*piStack_100 + 8))();
    }
    goto LAB_109d9e50;
  }
LAB_109d9c70:
  if (*param_4 == '+') {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = (char *)0x109d9cab;
    atoi(param_4 + iVar6 + 0xc0f);
    FUN_104d1550();
    pcStack_138 = (char *)0x109d9ccb;
    iVar4 = FUN_10254130();
    if (iVar4 == 0) goto LAB_109d9e33;
    ppuStack_58 = (undefined2 **)auStack_68;
    auStack_68[0] = auStack_68[0] & 0xff00;
    ppuStack_54 = ppuStack_58;
    FUN_100e5aa0();
    FUN_104d1670();
    if ((ppuStack_54 != (undefined2 **)auStack_68) && (ppuStack_54 != (undefined2 **)0x0)) {
      FUN_10c3d5d0();
    }
  }
  if (*param_4 == ',') {
    FUN_109d8f20();
    FUN_104d1550();
    pcStack_138 = "NeedAchieveCount";
    uStack_13c = (char *)0x109d9d77;
    FUN_104d1550();
    FUN_109d8f20();
    pcStack_138 = "FetchCount";
    uStack_13c = (char *)0x109d9d9d;
    FUN_104d1550();
    uStack_13c = (char *)(int)*(short *)(param_4 + iVar6 + 0xb0d);
    FUN_104d1550();
    pcStack_138 = (char *)0x109d9dd3;
    CPet__SetName();
    pcStack_138 = &stack0xfffffee0;
    uStack_13c = "Desc";
    FUN_104d1790();
    if (puStack_10c != (undefined4 *)0x0) {
      FUN_10c3da30();
    }
  }
  if ((uStack_fc >> 6 & 1) != 0) {
    (**(code **)(*piStack_100 + 8))();
  }
LAB_109d9e19:
  iStack_dc = iStack_dc + 1;
  if ((int)(uint)(byte)param_4[0xad2] <= iStack_dc) goto LAB_109d9e50;
  goto LAB_109d9090;
}



/* ===== FUN_109d9ec0 @ 109d9ec0  size=327 ===== */
// strings:
//   "arrTaskReward"
//   "mh.view.NewOperationActivity.Data.ActivityRewardData"
//   "ItemId"
//   "ItemCount"

/* [RE-AUTO c0]
   strings:
     ""arrTaskReward""
     ""mh.view.NewOperationActivity.Data.ActivityRewardData""
     ""ItemId""
     ""ItemCount"" */

void FUN_109d9ec0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *local_38;
  uint local_34;
  undefined4 local_30;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar2 != 0) {
      local_38 = (int *)0x0;
      local_34 = 0;
      FUN_11a98a70(&local_38);
      (**(code **)(*(int *)*param_2 + 0x14))
                (param_2[2],"arrTaskReward",&local_38,((byte)param_2[1] & 0x8f) == 10);
      iVar2 = 0;
      if (*(char *)(param_3 + 0x1b9) != '\0') {
        psVar3 = (short *)(param_3 + 0x1be);
        do {
          local_20 = (int *)0x0;
          local_1c = 0;
          FUN_11a98de0(&local_20,"mh.view.NewOperationActivity.Data.ActivityRewardData",0,0);
          (**(code **)(*local_38 + 0x3c))(local_30,&local_20);
          FUN_104d1440("ItemId",*(undefined4 *)(psVar3 + -2));
          FUN_104d1550("ItemCount",(int)*psVar3);
          if ((local_1c >> 6 & 1) != 0) {
            (**(code **)(*local_20 + 8))(&local_20,local_18);
          }
          iVar2 = iVar2 + 1;
          psVar3 = psVar3 + 4;
        } while (iVar2 < (int)(uint)*(byte *)(param_3 + 0x1b9));
      }
      if ((local_34 >> 6 & 1) != 0) {
        (**(code **)(*local_38 + 8))(&local_38,local_30);
      }
    }
  }
  return;
}



/* ===== FUN_109da2a0 @ 109da2a0  size=1044 ===== */
// calls: CPet::SetName
// strings:
//   "RewardDatas"
//   "EntryId"
//   "nParam1"
//   "nParam2"
//   "mh.view.NewOperationActivity.Data.ActivityRewardData"
//   "ItemId"
//   "ItemCount"
//   "FetchCount"
//   "MaxFetchCount"
//   "ConditionType"
//   "CurrentAchieveCount"
//   "NeedAchieveCount"

/* [RE-AUTO c0]
   strings:
     ""RewardDatas""
     ""EntryId""
     ""nParam1""
     ""nParam2""
     ""mh.view.NewOperationActivity.Data.ActivityRewardData""
     ""ItemId""
     ""ItemCount""
     ""FetchCount""
     ""MaxFetchCount""
     ""ConditionType"" */

void FUN_109da2a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_94 [4];
  int local_90;
  undefined4 *local_8c;
  int *piStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 auStack_78 [2];
  undefined4 uStack_70;
  undefined4 *local_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int *piStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  int **ppiStack_30;
  int **ppiStack_2c;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_94;
  local_90 = param_4;
  local_6c = param_3;
  local_8c = param_2;
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0xb4))(), iVar3 != 0)) {
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    FUN_11a98a70(&piStack_50);
    (**(code **)(*(int *)*param_2 + 0x14))
              (param_2[2],"RewardDatas",&piStack_54,((byte)param_2[1] & 0x8f) == 10);
    iStack_68 = 0;
    if (*(char *)(local_90 + 0xad2) != '\0') {
      psVar7 = (short *)(local_90 + 0xb0d);
      do {
        if (*(char *)((int)psVar7 + -0x39) == ' ') {
          FUN_104d1550("EntryId",(char)psVar7[-0x1d]);
          FUN_104d1550("nParam1",*(undefined4 *)((int)psVar7 + -0x17));
          iVar3 = 0;
          uStack_5c = CONCAT31(uStack_5c._1_3_,(char)psVar7[-0x1d]);
          if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
              (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
             (iVar4 = (**(code **)(*piVar1 + 0xb4))(), iVar4 != 0)) {
            iVar3 = iVar4;
          }
          param_3 = local_6c;
          if (((*(int *)(iVar3 + 0x2acc) == 0) ||
              (cVar2 = FUN_11513b40(*local_6c,*(undefined1 *)((int)local_6c + 5),uStack_5c,
                                    &iStack_64), cVar2 == '\0')) || (iStack_64 < 1)) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          FUN_104d1550("nParam2",uVar9);
        }
        else {
          piStack_88 = (int *)0x0;
          uStack_84 = 0;
          FUN_11a98de0(&piStack_88,"mh.view.NewOperationActivity.Data.ActivityRewardData",0,0);
          iVar3 = iStack_58;
          puVar8 = &stack0xffffff68;
          (**(code **)(*piStack_60 + 0x3c))();
          FUN_104d1440("ItemId",*(undefined4 *)((int)psVar7 + -0x37));
          FUN_104d1550("ItemCount",(int)*(short *)((int)psVar7 + -0x33));
          uStack_70 = CONCAT31(uStack_70._1_3_,(char)psVar7[-0x1d]);
          puVar6 = (undefined4 *)0x0;
          uVar9 = 0;
          local_6c = (undefined4 *)0x0;
          if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
             ((piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0 &&
              (puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0xb4))(), puVar6 = local_6c,
              puVar5 != (undefined4 *)0x0)))) {
            puVar6 = puVar5;
          }
          if ((puVar6[0xab3] != 0) &&
             (cVar2 = FUN_11513b40(*param_3,*(undefined1 *)((int)param_3 + 5),uStack_70,auStack_78),
             cVar2 != '\0')) {
            uVar9 = auStack_78[0];
          }
          FUN_104d1550("FetchCount",uVar9);
          FUN_104d1550("MaxFetchCount",(int)*psVar7);
          FUN_104d1550("EntryId",(char)psVar7[-0x1d]);
          CPet__SetName(psVar7 + 1);
          ppiStack_30 = &piStack_50;
          piStack_50 = (int *)((uint)piStack_50 & 0xffff0000);
          ppiStack_2c = ppiStack_30;
          FUN_100e5b60(&piStack_50);
          FUN_104d1700(&DAT_11dbe644,ppiStack_30);
          if ((ppiStack_30 != &piStack_54) && (ppiStack_30 != (int **)0x0)) {
            FUN_10c3d5d0(ppiStack_30);
          }
          if (puVar8 != (undefined1 *)0x0) {
            FUN_10c3da30(puVar8);
          }
          FUN_104d1550("ConditionType",(char)psVar7[-0x15]);
          if ((char)psVar7[-0x1d] == '\x02') {
            uVar9 = FUN_109d8f20(param_3,DAT_1201fce4);
            FUN_104d1550("CurrentAchieveCount",uVar9);
            uVar9 = 1;
          }
          else {
            iVar4 = FUN_109d8f20(param_3,DAT_1201fce4);
            if (iVar4 < 1) {
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_109d8f20(param_3,*(undefined1 *)(iVar3 + 0x11b19));
            }
            FUN_104d1550("CurrentAchieveCount",uVar9);
            uVar9 = *(undefined4 *)(psVar7 + -0x14);
          }
          FUN_104d1550("NeedAchieveCount",uVar9);
          if ((uStack_84 >> 6 & 1) != 0) {
            (**(code **)(*piStack_88 + 8))(&piStack_88,uStack_80);
          }
        }
        psVar7 = (short *)((int)psVar7 + 0x423);
        iStack_68 = iStack_68 + 1;
      } while (iStack_68 < (int)(uint)*(byte *)(local_90 + 0xad2));
    }
    if ((uStack_4c >> 6 & 1) != 0) {
      (**(code **)(*piStack_50 + 8))(&piStack_50,uStack_48);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109dade0 @ 109dade0  size=549 ===== */
// strings:
//   "RewardDatas"
//   "mh.view.NewOperationActivity.Data.ActivityRewardData"
//   "ItemId"
//   "ItemCount"

/* [RE-AUTO c0]
   strings:
     ""RewardDatas""
     ""mh.view.NewOperationActivity.Data.ActivityRewardData""
     ""ItemId""
     ""ItemCount"" */

void FUN_109dade0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_168;
  uint local_164;
  undefined4 local_160;
  int *local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_134;
  int local_130;
  int local_12c;
  int local_124;
  undefined4 local_30;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&stack0xfffffffc;
  local_12c = param_2;
  local_134 = param_1;
  iVar1 = FUN_10540d00(param_3);
  if ((iVar1 != 0) &&
     (iVar2 = *(int *)(iVar1 + 0x168) - *(int *)(iVar1 + 0x164), iVar3 = iVar2 >> 0x1f,
     iVar2 / 0x114 + iVar3 != iVar3)) {
    FUN_1052f520(*(int *)(iVar1 + 0x164));
    if ((local_124 == 0xbc9) && (iVar1 = FUN_1052c520(local_30), local_130 = iVar1, iVar1 != 0)) {
      local_150 = (int *)0x0;
      local_14c = 0;
      FUN_11a98a70(&local_150);
      FUN_104d12b0("RewardDatas",&local_150);
      iVar3 = *(int *)(iVar1 + 0x24);
      local_12c = iVar3;
      if (iVar3 != *(int *)(iVar1 + 0x28)) {
        do {
          local_12c = iVar3;
          iVar1 = FUN_1052c6a0(*(undefined4 *)(iVar3 + 4));
          if ((iVar1 != 0) &&
             (puVar4 = *(undefined4 **)(iVar1 + 0x18), puVar4 != *(undefined4 **)(iVar1 + 0x1c))) {
            do {
              local_168 = (int *)0x0;
              local_164 = 0;
              FUN_11a98de0(&local_168,"mh.view.NewOperationActivity.Data.ActivityRewardData",0,0);
              FUN_104d1440("ItemId",*puVar4);
              FUN_104d1440("ItemCount",puVar4[3]);
              (**(code **)(*local_150 + 0x3c))(local_148,&local_168);
              if ((local_164 >> 6 & 1) != 0) {
                (**(code **)(*local_168 + 8))(&local_168,local_160);
              }
              puVar4 = puVar4 + 9;
              iVar3 = local_12c;
            } while (puVar4 != *(undefined4 **)(iVar1 + 0x1c));
          }
          iVar3 = iVar3 + 0x14;
          local_12c = iVar3;
        } while (iVar3 != *(int *)(local_130 + 0x28));
      }
      if ((local_14c >> 6 & 1) != 0) {
        (**(code **)(*local_150 + 8))(&local_150,local_148);
        local_150 = (int *)0x0;
      }
      local_14c = 0;
    }
    FUN_10540e00();
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109dbdd0 @ 109dbdd0  size=474 ===== */
// strings:
//   "RewardDatas"
//   "mh.view.NewOperationActivity.Data.ActivityRewardData"
//   "ItemId"
//   "ItemCount"
//   "CurrentAchieveCount"
//   "NeedAchieveCount"
//   "nParam1"
//   "nParam2"

/* [RE-AUTO c0]
   strings:
     ""RewardDatas""
     ""mh.view.NewOperationActivity.Data.ActivityRewardData""
     ""ItemId""
     ""ItemCount""
     ""CurrentAchieveCount""
     ""NeedAchieveCount""
     ""nParam1""
     ""nParam2"" */

void FUN_109dbdd0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_4c [8];
  undefined1 *local_44;
  int *local_34;
  uint local_30;
  undefined4 local_2c;
  int *local_1c;
  uint local_18;
  undefined4 local_14;
  
  local_34 = (int *)0x0;
  local_30 = 0;
  FUN_11a98a70(&local_34);
  (**(code **)(*(int *)*param_2 + 0x14))
            (param_2[2],"RewardDatas",&local_34,((byte)param_2[1] & 0x8f) == 10);
  if ((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
      (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
     ((iVar3 = (**(code **)(*piVar1 + 0xb4))(), iVar3 != 0 && (*(int *)(iVar3 + 11000) != 0)))) {
    FUN_109dc320(iVar3 + 0x2dd0);
    puVar5 = local_44;
    if (local_44 != local_4c) {
      do {
        local_1c = (int *)0x0;
        local_18 = 0;
        FUN_11a98de0(&local_1c,"mh.view.NewOperationActivity.Data.ActivityRewardData",0,0);
        FUN_104d1550("ItemId",*(undefined4 *)(puVar5 + 0x20));
        FUN_104d1550("ItemCount",*(undefined4 *)(puVar5 + 0x24));
        FUN_104d1550("CurrentAchieveCount",*(undefined4 *)(iVar3 + 0x2dc8));
        FUN_104d1550("NeedAchieveCount",*(undefined4 *)(puVar5 + 0x18));
        FUN_104d1550("nParam1",*(undefined4 *)(puVar5 + 0x14));
        FUN_104d1550("nParam2",*(undefined4 *)(puVar5 + 0x1c));
        (**(code **)(*local_34 + 0x3c))(local_2c,&local_1c);
        if ((local_18 >> 6 & 1) != 0) {
          (**(code **)(*local_1c + 8))(&local_1c,local_14);
        }
        puVar4 = *(undefined1 **)(puVar5 + 0xc);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = *(undefined1 **)(puVar5 + 4);
          if (puVar5 == *(undefined1 **)(puVar4 + 0xc)) {
            do {
              puVar5 = puVar4;
              puVar4 = *(undefined1 **)(puVar5 + 4);
            } while (puVar5 == *(undefined1 **)(puVar4 + 0xc));
          }
          if (*(undefined1 **)(puVar5 + 0xc) != puVar4) {
            puVar5 = puVar4;
          }
        }
        else {
          for (puVar2 = *(undefined1 **)(puVar4 + 8); puVar5 = puVar4, puVar2 != (undefined1 *)0x0;
              puVar2 = *(undefined1 **)(puVar2 + 8)) {
            puVar4 = puVar2;
          }
        }
      } while (puVar5 != local_4c);
    }
    FUN_109dc3c0();
  }
  if ((local_30 >> 6 & 1) != 0) {
    (**(code **)(*local_34 + 8))(&local_34,local_2c);
  }
  return;
}



/* ===== FUN_109dd880 @ 109dd880  size=304 ===== */
// strings:
//   "InitModel"
//   "IsActivityOpen"
//   "IsRankRewardFetched"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""IsActivityOpen""
     ""IsRankRewardFetched"" */

void __fastcall FUN_109dd880(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  code *pcStack_54;
  char *pcStack_50;
  code **ppcStack_4c;
  code ***pppcStack_48;
  code *pcStack_44;
  code **ppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code **ppcStack_34;
  code **ppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  ppcStack_30 = (code **)0x11dbd57c;
  ppcStack_34 = (code **)0x109dd8b4;
  FUN_100b62c0();
  ppcStack_34 = (code **)FUN_109dd9c0;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109dd8c5;
  FUN_109de600();
  if ((pppcStack_20 != &ppcStack_34) && (pppcStack_20 != (code ***)0x0)) {
    pppcStack_3c = pppcStack_20;
    ppcStack_40 = (code **)0x109dd8db;
    FUN_10c3d5d0();
  }
  local_24 = &ppcStack_34;
  pppcStack_3c = (code ***)0x11de13fa;
  ppcStack_40 = (code **)0x11de13ec;
  pcStack_44 = (code *)0x109dd8fb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pcStack_44 = FUN_109de2e0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  ppcStack_4c = (code **)0x109dd90c;
  FUN_109de600();
  if ((ppcStack_30 != &pcStack_44) && (ppcStack_30 != (code **)0x0)) {
    ppcStack_4c = ppcStack_30;
    pcStack_50 = (char *)0x109dd922;
    FUN_10c3d5d0();
  }
  ppcStack_34 = &pcStack_44;
  ppcStack_4c = (code **)0x11de4387;
  pcStack_50 = "IsRankRewardFetched";
  pcStack_54 = (code *)0x109dd942;
  ppcStack_30 = ppcStack_34;
  FUN_100b62c0();
  pcStack_54 = FUN_109de3e0;
  FUN_109de600(&ppcStack_4c);
  if ((ppcStack_40 != &pcStack_54) && (ppcStack_40 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_40);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_109de770();
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_11a89daa();
  return;
}



/* ===== FUN_109ddd60 @ 109ddd60  size=624 ===== */
// calls: CActivityMgr::GetActivityState
// strings:
//   "rewardItemIdArray"
//   "entryIdArray"
//   "exchangeItemCount"

/* [RE-AUTO c0]
   strings:
     ""rewardItemIdArray""
     ""entryIdArray""
     ""exchangeItemCount"" */

void FUN_109ddd60(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *local_88;
  uint local_84;
  undefined4 local_80;
  int *local_70;
  uint local_6c;
  undefined4 local_68;
  int *local_58;
  uint local_54;
  undefined4 local_50;
  int *local_40;
  uint local_3c;
  uint local_38;
  int local_28;
  int iStack_24;
  int *local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar1 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar1 != (int *)0x0)) &&
      ((local_20 = (int *)(**(code **)(*piVar1 + 0xb4))(), local_20 != (int *)0x0 &&
       (local_20[0xab3] != 0)))) &&
     ((iVar5 = FUN_107cd110(), iVar5 != 0 &&
      ((local_18 = CActivityMgr__GetActivityState(param_3), local_18 != 0 &&
       (iVar5 = FUN_1122b9d0(param_3), iVar5 != 0)))))) {
    local_88 = (int *)0x0;
    local_84 = 0;
    local_58 = (int *)0x0;
    local_54 = 0;
    local_28 = iVar5;
    (**(code **)(*(int *)*param_2 + 0x10))
              (param_2[2],"rewardItemIdArray",&local_88,((byte)param_2[1] & 0x8f) == 10);
    local_70 = (int *)0x0;
    local_6c = 0;
    local_40 = (int *)0x0;
    local_3c = 0;
    (**(code **)(*(int *)*param_2 + 0x10))
              (param_2[2],"entryIdArray",&local_70,((byte)param_2[1] & 0x8f) == 10);
    local_10 = 0;
    bVar2 = true;
    local_14 = 0;
    bVar3 = true;
    *(undefined4 *)(local_c + 0x28) = 0;
    bVar4 = false;
    local_1c = 0;
    if (*(char *)(iVar5 + 0xad2) != '\0') {
      iVar5 = iVar5 + 0xb66;
      do {
        uVar8 = local_1c;
        switch(*(undefined1 *)(iVar5 + -0x92)) {
        case 0x20:
          FUN_104d1550("rankEntryId",*(undefined1 *)(iVar5 + -0x93));
          iVar7 = FUN_107e6320();
          bVar2 = bVar3;
          if (0 < iVar7) {
            FUN_104d15e0("isRankRewardFetched",1);
          }
          break;
        case 0x25:
          uVar9 = *(undefined4 *)(iVar5 + -0x70);
          FUN_107d7930(uVar9);
          (**(code **)(*local_20 + 0x388))(uVar9);
          iVar7 = FUN_1156c6b0();
          if (iVar7 == 0) {
            FUN_104d1550("remainderChance",3);
          }
          else {
            iVar7 = FUN_1156c660();
            FUN_104d1440("remainderChance",local_10 - iVar7);
          }
          FUN_104d1550("levelEntryId",*(undefined1 *)(iVar5 + -0x93));
          uVar8 = local_1c;
          bVar2 = bVar3;
          break;
        case 0x30:
          if (bVar2) {
            local_14 = *(undefined4 *)(iVar5 + -0x90);
            bVar3 = false;
            FUN_104d1550("ticketEntryId",*(undefined1 *)(iVar5 + -0x93));
          }
          else {
            local_1c = (uint)*(byte *)(iVar5 + -0x93);
            if ((local_3c >> 6 & 1) != 0) {
              (**(code **)(*local_40 + 8))(&local_40,local_38);
              local_40 = (int *)0x0;
            }
            local_3c = 3;
            local_38 = local_1c;
            (**(code **)(*local_70 + 0x3c))(local_68,&local_40);
            FUN_104d1670("fashionExchangeNeedTicketCount",iVar5 + 0xa9);
            iVar7 = FUN_107e6320();
            if ((0 < iVar7) && (!bVar4)) {
              FUN_104d15e0("isFashionRewardFetched",1);
              bVar4 = true;
            }
          }
          local_1c = *(undefined4 *)(iVar5 + -0x90);
          if ((local_54 >> 6 & 1) != 0) {
            (**(code **)(*local_58 + 8))(&local_58,local_50);
            local_58 = (int *)0x0;
          }
          local_54 = 3;
          local_50 = local_1c;
          (**(code **)(*local_88 + 0x3c))(local_80,&local_58);
          bVar2 = bVar3;
          break;
        case 0x40:
          local_10 = 0;
          CPet__SetName(iVar5);
          FUN_104d1790("rankRewardItemString",&local_10);
          FUN_100e5670();
          local_10 = *(int *)(iVar5 + -0x8c);
          iStack_24 = *(int *)(iVar5 + -0x88);
          *(undefined4 *)(local_c + 0x24) = *(undefined4 *)(iVar5 + -0x84);
          *(undefined4 *)(local_c + 0x28) = *(undefined4 *)(iVar5 + 0x80);
          iVar6 = FUN_111f8d20();
          local_1c = 0;
          iVar7 = *(int *)(local_c + 0x24);
          if (iVar6 < iVar7) {
            if (iStack_24 <= iVar6) {
              uVar9 = 0;
              local_1c = (iVar7 - iVar6) / 0x15180;
              goto LAB_109de120;
            }
            if (iVar7 <= iVar6) goto LAB_109de11e;
          }
          else {
LAB_109de11e:
            uVar9 = 1;
LAB_109de120:
            FUN_104d15e0("isActivityFinish",uVar9);
          }
          FUN_104d1550("remainderTime",local_1c);
          bVar2 = bVar3;
        }
        local_1c = uVar8 + 1;
        iVar5 = iVar5 + 0x423;
      } while ((int)local_1c < (int)(uint)*(byte *)(local_28 + 0xad2));
    }
    if (local_20[0xb47] == 0) {
      iVar5 = 0;
    }
    else {
      iVar7 = FUN_113fa680(local_14,0,1);
      iVar5 = FUN_113fa680(local_14,1,1);
      iVar5 = iVar5 + iVar7;
    }
    FUN_104d1550("exchangeItemCount",iVar5);
    if ((local_3c >> 6 & 1) != 0) {
      (**(code **)(*local_40 + 8))(&local_40,local_38);
      local_40 = (int *)0x0;
    }
    local_3c = 0;
    if ((local_6c >> 6 & 1) != 0) {
      (**(code **)(*local_70 + 8))(&local_70,local_68);
      local_70 = (int *)0x0;
    }
    local_6c = 0;
    if ((local_54 >> 6 & 1) != 0) {
      (**(code **)(*local_58 + 8))(&local_58,local_50);
      local_58 = (int *)0x0;
    }
    local_54 = 0;
    if ((local_84 >> 6 & 1) != 0) {
      (**(code **)(*local_88 + 8))(&local_88,local_80);
    }
  }
  return;
}



/* ===== FUN_109dfac0 @ 109dfac0  size=1102 ===== */
// strings:
//   "InitModel"
//   "ReqGroupMemberList"
//   "ReqGuildActivityInfo"
//   "ReqGuildDetailInfo"
//   "ReqGuilderInfo"
//   "GetLocalGuilderActivityInfo"
//   "GetGuilderTaskInfoById"
//   "AcceptGuilderTaskById"
//   "GiveUpGuilderTaskById"
//   "FinishGuilderTaskById"
//   "GetSpecialTaskReward"
//   "GiveUpHiddenLevel"
//   "EnterHiddenLevel"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""ReqGroupMemberList""
     ""ReqGuildActivityInfo""
     ""ReqGuildDetailInfo""
     ""ReqGuilderInfo""
     ""GetLocalGuilderActivityInfo""
     ""GetGuilderTaskInfoById""
     ""AcceptGuilderTaskById""
     ""GiveUpGuilderTaskById""
     ""FinishGuilderTaskById"" */

void __fastcall FUN_109dfac0(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  code *pcStack_f4;
  char *pcStack_f0;
  undefined **ppuStack_ec;
  undefined4 ***pppuStack_e8;
  undefined *puStack_e4;
  code **ppcStack_e0;
  undefined ***pppuStack_dc;
  code ***pppcStack_d8;
  undefined **ppuStack_d4;
  undefined **ppuStack_d0;
  undefined4 ***pppuStack_cc;
  code ***pppcStack_c8;
  undefined ***pppuStack_c4;
  undefined ***pppuStack_c0;
  code ***pppcStack_bc;
  code ***pppcStack_b8;
  undefined4 ***pppuStack_b4;
  undefined4 ***pppuStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code ***pppcStack_a4;
  code ***pppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x109dfaf4;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109dff20;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109dfb05;
  FUN_109e2110();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109dfb1b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de46ae;
  pppcStack_40 = (code ***)0x11de469c;
  pppcStack_44 = (code ***)0x109dfb3b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109dff80;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109dfb4c;
  FUN_109e2110();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109dfb62;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de4698;
  pppcStack_50 = (code ***)0x11de4684;
  pppcStack_54 = (code ***)0x109dfb82;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109e0040;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109dfb93;
  FUN_109e2110();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x109dfba9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de46d2;
  pppcStack_60 = (code ***)0x11de46c0;
  pppcStack_64 = (code ***)0x109dfbc9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109e00a0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109dfbda;
  FUN_109e2110();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x109dfbf0;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de46be;
  pppcStack_70 = (code ***)0x11de46b0;
  pppcStack_74 = (code ***)0x109dfc10;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_109e0150;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109dfc21;
  FUN_109e2110();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x109dfc37;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11de4653;
  pppcStack_80 = (code ***)0x11de4638;
  pppcStack_84 = (code ***)0x109dfc57;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_109e0950;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x109dfc68;
  FUN_109e2110();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x109dfc7e;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11de4636;
  pppcStack_90 = (code ***)0x11de4620;
  pppcStack_94 = (code ***)0x109dfc9e;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_109e13d0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x109dfcaf;
  FUN_109e2110();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    pppcStack_a0 = (code ***)0x109dfcc5;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11de4681;
  pppcStack_a0 = (code ***)0x11de466c;
  pppcStack_a4 = (code ***)0x109dfce5;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  pppcStack_a4 = (code ***)FUN_109e1c80;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x109dfcf6;
  FUN_109e2110();
  if (((code ****)pppcStack_90 != &pppcStack_a4) && ((code ****)pppcStack_90 != (code ****)0x0)) {
    pppcStack_ac = pppcStack_90;
    pppuStack_b0 = (undefined4 ***)0x109dfd0c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = (code ***)&pppcStack_a4;
  pppcStack_ac = (code ***)0x11de4669;
  pppuStack_b0 = (undefined4 ***)0x11de4654;
  pppuStack_b4 = (undefined4 ***)0x109dfd2c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pppuStack_b4 = (undefined4 ***)FUN_109e1c20;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  pppcStack_bc = (code ***)0x109dfd3d;
  FUN_109e2110();
  if (((undefined4 ****)pppcStack_a0 != &pppuStack_b4) &&
     ((undefined4 ****)pppcStack_a0 != (undefined4 ****)0x0)) {
    pppcStack_bc = pppcStack_a0;
    pppuStack_c0 = (undefined ***)0x109dfd53;
    FUN_10c3d5d0();
  }
  pppcStack_a4 = (code ***)&pppuStack_b4;
  pppcStack_bc = (code ***)0x11de45f5;
  pppuStack_c0 = (undefined ***)0x11de45e0;
  pppuStack_c4 = (undefined ***)0x109dfd73;
  pppcStack_a0 = pppcStack_a4;
  FUN_100b62c0();
  pppuStack_c4 = (undefined ***)FUN_109e1bc0;
  pppcStack_c8 = (code ***)&pppcStack_bc;
  pppuStack_cc = (undefined4 ***)0x109dfd84;
  FUN_109e2110();
  if (((undefined ****)pppuStack_b0 != &pppuStack_c4) &&
     ((undefined ****)pppuStack_b0 != (undefined ****)0x0)) {
    pppuStack_cc = pppuStack_b0;
    ppuStack_d0 = (undefined **)0x109dfd9a;
    FUN_10c3d5d0();
  }
  pppuStack_b4 = &pppuStack_c4;
  pppuStack_cc = (undefined4 ***)0x11de45dc;
  ppuStack_d0 = (undefined **)0x11de45c8;
  ppuStack_d4 = (undefined **)0x109dfdba;
  pppuStack_b0 = pppuStack_b4;
  FUN_100b62c0();
  ppuStack_d4 = (undefined **)&DAT_109e1ce0;
  pppcStack_d8 = (code ***)&pppuStack_cc;
  pppuStack_dc = (undefined ***)0x109dfdcb;
  FUN_109e2110();
  if ((pppuStack_c0 != &ppuStack_d4) && (pppuStack_c0 != (undefined ***)0x0)) {
    pppuStack_dc = pppuStack_c0;
    ppcStack_e0 = (code **)0x109dfde1;
    FUN_10c3d5d0();
  }
  pppuStack_c4 = &ppuStack_d4;
  pppuStack_dc = (undefined ***)0x11de461d;
  ppcStack_e0 = (code **)0x11de460c;
  puStack_e4 = (undefined *)0x109dfe01;
  pppuStack_c0 = pppuStack_c4;
  FUN_100b62c0();
  puStack_e4 = &DAT_109e1cf0;
  pppuStack_e8 = &pppuStack_dc;
  ppuStack_ec = (undefined **)0x109dfe12;
  FUN_109e2110();
  if ((ppuStack_d0 != &puStack_e4) && (ppuStack_d0 != (undefined **)0x0)) {
    ppuStack_ec = ppuStack_d0;
    pcStack_f0 = (char *)0x109dfe28;
    FUN_10c3d5d0();
  }
  ppuStack_d4 = &puStack_e4;
  ppuStack_ec = (undefined **)0x11de4608;
  pcStack_f0 = "EnterHiddenLevel";
  pcStack_f4 = (code *)0x109dfe48;
  ppuStack_d0 = ppuStack_d4;
  FUN_100b62c0();
  pcStack_f4 = FUN_109e1d00;
  FUN_109e2110(&ppuStack_ec);
  if ((ppcStack_e0 != &pcStack_f4) && (ppcStack_e0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_e0);
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX);
      FUN_10d17870();
      FUN_109e2340();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_00);
      FUN_10d17870();
      FUN_109e2390();
    }
  }
  iVar1 = FUN_10d17440();
  if (iVar1 != 0) {
    FUN_10d17440();
    iVar1 = FUN_10d17870();
    if (iVar1 != 0) {
      FUN_10d17440(param_1,extraout_ECX_01);
      FUN_10d17870();
      FUN_109e23e0();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e0250 @ 109e0250  size=1695 ===== */
// calls: _i64toa
// strings:
//   "groupMemberArray"
//   "GUILDMEMBER_CLASS_NAME"
//   "GroupMemberMaxPageNum"
//   "GroupMemberCurrentPage"
//   "guildersCount"
//   "m_nOnlineGuildersCount"
//   "name_member"
//   "level_member"
//   "HRlevel_member"
//   "titleIndex"
//   "titleName"
//   "currentP"
//   "nCelebrationScore"
//   "nCelebrationReward"
//   "nCelebrationTask"
//   "nPreCelebrationTask"
//   "state"
//   "offlineTimeSpan"
//   "otherMess"

/* [RE-AUTO c0]
   calls: _i64toa
   strings:
     ""groupMemberArray""
     ""GUILDMEMBER_CLASS_NAME""
     ""GroupMemberMaxPageNum""
     ""GroupMemberCurrentPage""
     ""guildersCount""
     ""m_nOnlineGuildersCount""
     ""name_member""
     ""level_member""
     ""HRlevel_member""
     ""titleIndex"" */

void __fastcall FUN_109e0250(int param_1)

{
  longlong _Val;
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int *piStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  char *pcStack_150;
  undefined4 *puStack_14c;
  int *piStack_148;
  undefined4 uStack_144;
  int iStack_134;
  int *piStack_130;
  uint uStack_12c;
  int *piStack_128;
  int *piStack_120;
  undefined4 uStack_100;
  undefined1 auStack_fc [16];
  int *piStack_ec;
  undefined1 *puStack_e8;
  int *piStack_e4;
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  uint auStack_d8 [2];
  int **ppiStack_d0;
  int **ppiStack_cc;
  uint *puStack_c8;
  uint *puStack_c4;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  uint **appuStack_b0 [3];
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  undefined1 auStack_9c [16];
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined4 uStack_7c;
  char acStack_70 [100];
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&iStack_134;
  uStack_144 = 0x102;
  piStack_148 = (int *)0x109e027f;
  cVar2 = FUN_1050a110();
  if ((((cVar2 != '\0') && (DAT_1202e818 != 0)) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar7 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar7 != (int *)0x0)) {
    piStack_148 = (int *)0x109e02b8;
    iVar3 = (**(code **)(*piVar7 + 0xb4))();
    if ((iVar3 != 0) &&
       (piVar7 = *(int **)(iVar3 + 0x2abc), piStack_120 = piVar7, piVar7 != (int *)0x0)) {
      piStack_148 = (int *)0x109e02d9;
      piStack_128 = (int *)FUN_111743b0();
      if ((piStack_128 != (int *)0x0) && (((byte)*(undefined4 *)(param_1 + 0x2c) & 0x8f) != 1)) {
        uVar4 = *(uint *)(param_1 + 0x2c) & 0x8f;
        if (((uVar4 == 8) || (uVar4 == 9)) || (uVar4 == 10)) {
          piStack_148 = (int *)0x109e0319;
          (**(code **)(*piVar7 + 0xc))();
          piStack_148 = (int *)0x109e0320;
          uStack_100 = FUN_114a88b0();
          uStack_dc = 0;
          auStack_d8[0] = 0;
          piStack_148 = (int *)(uint)(((byte)*(undefined4 *)(param_1 + 0x2c) & 0x8f) == 10);
          puStack_14c = &uStack_dc;
          pcStack_150 = "groupMemberArray";
          uStack_154 = *(undefined4 *)(param_1 + 0x30);
          piStack_158 = (int *)0x109e035b;
          (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
          piStack_158 = (int *)0x0;
          piStack_15c = piStack_e4;
          uStack_160 = 0x109e036a;
          (**(code **)(*piStack_ec + 0x2c))();
          uStack_164 = &uStack_dc;
          uStack_dc = 0;
          auStack_d8[0] = 0;
          puStack_14c = (undefined4 *)
                        CONCAT31(puStack_14c._1_3_,
                                 ((byte)*(undefined4 *)(param_1 + 0x2c) & 0x8f) == 10);
          piStack_148 = (int *)0x0;
          uStack_160 = puStack_14c;
          pcStack_168 = "GUILDMEMBER_CLASS_NAME";
          cVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(*(undefined4 *)(param_1 + 0x30));
          pcVar1 = pcStack_150;
          if (((cVar2 != '\0') && (((byte)puStack_e8 & 0x8f) == 6)) &&
             (piStack_158 = piStack_e4, ((uint)puStack_e8 >> 6 & 1) != 0)) {
            piStack_158 = (int *)*piStack_e4;
          }
          if (*(int *)(param_1 + 0x20) != 0) {
            FUN_104d1550("GroupMemberMaxPageNum",*(undefined4 *)(pcStack_150 + 0x2a8));
            FUN_104d1550("GroupMemberCurrentPage",*(undefined4 *)(pcVar1 + 0x2a4));
            piVar7 = piStack_148;
            piVar5 = (int *)(**(code **)(*piStack_148 + 0xc))();
            uVar6 = (**(code **)(*piVar5 + 0x18))();
            FUN_104d1550("guildersCount",uVar6);
            piVar7 = (int *)(**(code **)(*piVar7 + 0xc))();
            uVar6 = (**(code **)(*piVar7 + 0x1c))();
            FUN_104d1550("m_nOnlineGuildersCount",uVar6);
            uVar8 = FUN_111f8d20();
            piStack_15c = (int *)*piStack_128;
            if (piStack_15c != (int *)piStack_128[1]) {
              do {
                piStack_120 = (int *)((ulonglong)uVar8 >> 0x20);
                piStack_148 = (int *)uVar8;
                piVar7 = (int *)*piStack_15c;
                uStack_144 = 0;
                FUN_11a98de0(&uStack_144,piStack_158,0,0);
                iStack_134 = piVar7[8];
                piStack_130 = (int *)piVar7[9];
                FUN_104d14d0(&DAT_11dd4c54);
                uVar6 = (**(code **)(*piVar7 + 4))();
                FUN_104d1440(&DAT_11dd4c5c,uVar6);
                ppiStack_d0 = (int **)auStack_e0;
                auStack_e0[0] = 0;
                ppiStack_cc = ppiStack_d0;
                FUN_108addf0(appuStack_b0);
                FUN_109e2620();
                if ((puStack_a0 != auStack_b4) && (puStack_a0 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_a0);
                }
                FUN_104d1670("name_member",ppiStack_d0);
                uVar6 = (**(code **)(*piVar7 + 8))();
                FUN_104d1550("level_member",uVar6);
                uVar6 = (**(code **)(*piVar7 + 0x3c))();
                FUN_104d1550("HRlevel_member",uVar6);
                piStack_130 = (int *)0x0;
                uStack_12c = 0;
                iVar3 = FUN_114b0f80();
                piVar5 = *(int **)(iVar3 + 4);
                if ((uStack_12c >> 6 & 1) != 0) {
                  (**(code **)(*piStack_130 + 8))(&piStack_130,piStack_128);
                  piStack_130 = (int *)0x0;
                }
                uStack_12c = 4;
                piStack_128 = piVar5;
                FUN_104d12b0("titleIndex",&piStack_130);
                puStack_8c = auStack_9c;
                auStack_9c[0] = 0;
                puStack_88 = puStack_8c;
                FUN_114b0f80(auStack_b4);
                FUN_108adbe0();
                FUN_109e2620();
                if ((puStack_a4 != auStack_b8) && (puStack_a4 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_a4);
                }
                FUN_104d1670("titleName",puStack_8c);
                uVar6 = (**(code **)(*piVar7 + 0x14))();
                FUN_104d1550("currentP",uVar6);
                uVar6 = (**(code **)(*piVar7 + 0x18))();
                FUN_104d1550("nCelebrationScore",uVar6);
                uVar6 = (**(code **)(*piVar7 + 0x1c))();
                FUN_104d1550("nCelebrationReward",uVar6);
                uVar6 = (**(code **)(*piVar7 + 0x34))();
                FUN_104d1550("nCelebrationTask",uVar6);
                uVar6 = (**(code **)(*piVar7 + 0x38))();
                FUN_104d1550("nPreCelebrationTask",uVar6);
                _Val = (**(code **)(*piVar7 + 0x20))();
                _i64toa(_Val,acStack_70,10);
                FUN_100b5f70(acStack_70,(int)&uStack_164 + 3);
                FUN_104d1670(&DAT_11dd4d1c,uStack_7c);
                iVar3 = 0;
                cVar2 = (**(code **)(*piVar7 + 0x10))();
                if (cVar2 == '\0') {
                  uVar6 = 0;
                  iVar3 = (int)pcStack_168 - piVar7[0x25];
                  if (iVar3 < 0) {
                    iVar3 = 0;
                  }
                }
                else {
                  uVar6 = 1;
                }
                FUN_104d1550("state",uVar6);
                FUN_104d1550("offlineTimeSpan",iVar3);
                puStack_c8 = auStack_d8;
                auStack_d8[0] = auStack_d8[0] & 0xffffff00;
                puStack_c4 = puStack_c8;
                FUN_108ade30(auStack_c0);
                FUN_109e2620();
                if ((appuStack_b0[0] != &puStack_c4) && (appuStack_b0[0] != (uint **)0x0)) {
                  FUN_10c3d5d0(appuStack_b0[0]);
                }
                FUN_104d1670("otherMess",puStack_c8);
                (**(code **)(*piStack_128 + 0x3c))(piStack_120,&pcStack_168);
                if ((ppiStack_d0 != &piStack_e4) && (ppiStack_d0 != (int **)0x0)) {
                  FUN_10c3d5d0(ppiStack_d0);
                }
                if ((puStack_88 != auStack_9c) && (puStack_88 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_88);
                }
                if ((puStack_a0 != auStack_b4) && (puStack_a0 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_a0);
                }
                FUN_104d7c10();
                if ((puStack_e8 != auStack_fc) && (puStack_e8 != (undefined1 *)0x0)) {
                  FUN_10c3d5d0(puStack_e8);
                }
                FUN_104d7c10();
                uVar8 = CONCAT44(piStack_120,piStack_148);
                piStack_15c = piStack_15c + 1;
              } while (piStack_15c != (int *)piStack_128[1]);
            }
            piStack_120 = (int *)((ulonglong)uVar8 >> 0x20);
            piStack_148 = (int *)uVar8;
            FUN_105ebf40();
          }
          FUN_104d7c10();
          FUN_104d7c10();
        }
      }
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e27e0 @ 109e27e0  size=2022 ===== */
// calls: CActivityMgr::GetActivityState, CPet::SetName
// strings:
//   "weekCount"
//   "processingTaskId"
//   "dayRewardArray"
//   "bInitial"
//   "rewardItemArray"
//   "FetchCount"
//   "CurrentAchieveCount"
//   "NeedAchieveCount"
//   "entryId"
//   "taskDesc"
//   "ItemId"
//   "ItemCount"

/* [RE-AUTO c0]
   strings:
     ""weekCount""
     ""processingTaskId""
     ""dayRewardArray""
     ""bInitial""
     ""rewardItemArray""
     ""FetchCount""
     ""CurrentAchieveCount""
     ""NeedAchieveCount""
     ""entryId""
     ""taskDesc"" */

void FUN_109e27e0(void)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *unaff_EBX;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *in_stack_00000010;
  char *pcStack_18c;
  char *pcStack_188;
  uint uStack_184;
  char *pcStack_180;
  int **ppiStack_17c;
  int **ppiStack_178;
  char *pcStack_174;
  uint uStack_170;
  uint uStack_16c;
  int *piStack_168;
  undefined4 *puStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  int **ppiStack_158;
  int **ppiStack_154;
  int *piStack_138;
  int iStack_130;
  int *piStack_12c;
  int *local_128;
  uint local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int *piStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [4];
  undefined4 uStack_104;
  undefined4 uStack_100;
  int *piStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint uStack_d0;
  undefined4 uStack_c8;
  int *local_c0;
  int *local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_9c;
  undefined1 auStack_88 [8];
  int *piStack_80;
  uint uStack_7c;
  undefined4 auStack_78 [4];
  int *piStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_54 [4];
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [12];
  int *piStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int *piStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  
  local_c0 = (int *)0x0;
  local_bc = (int *)in_stack_00000010[1];
  local_b4 = in_stack_00000010[3];
  ppiStack_154 = (int **)in_stack_00000010[2];
  local_b0 = in_stack_00000010[4];
  local_b8 = (uint)ppiStack_154;
  if (((uint)local_bc >> 6 & 1) != 0) {
    local_c0 = (int *)*in_stack_00000010;
    ppiStack_158 = &local_c0;
    puStack_15c = (undefined1 *)0x109e2844;
    (**(code **)(*local_c0 + 4))();
  }
  local_124 = in_stack_00000010[7];
  local_11c = in_stack_00000010[9];
  ppiStack_154 = (int **)in_stack_00000010[8];
  local_118 = in_stack_00000010[10];
  local_128 = (int *)0x0;
  local_120 = ppiStack_154;
  if ((local_124 >> 6 & 1) != 0) {
    local_128 = (int *)in_stack_00000010[6];
    ppiStack_158 = &local_128;
    puStack_15c = (undefined1 *)0x109e2882;
    (**(code **)(*local_128 + 4))();
  }
  if (((in_stack_00000010[0xd] & 0x8f) == 3) || ((in_stack_00000010[0xd] & 0x8f) == 4)) {
    uVar7 = in_stack_00000010[0xe];
  }
  else {
    uVar7 = 0xdeadbeaf;
  }
  if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
     (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) {
    ppiStack_154 = (int **)0x109e28cf;
    iVar2 = (**(code **)(*piVar3 + 0xb4))();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2acc) != 0)) {
      ppiStack_154 = (int **)0x109e28e9;
      iVar2 = FUN_107cd110();
      if (iVar2 != 0) {
        ppiStack_158 = (int **)0x109e28fb;
        ppiStack_154 = (int **)uVar7;
        piVar3 = (int *)CActivityMgr__GetActivityState();
        if (piVar3 != (int *)0x0) {
          ppiStack_158 = (int **)0x109e290f;
          ppiStack_154 = (int **)uVar7;
          iVar2 = FUN_1122b9d0();
          iStack_9c = iVar2;
          if (iVar2 != 0) {
            ppiStack_154 = &piStack_20;
            piStack_20 = (int *)0x0;
            uStack_1c = 0;
            piStack_50 = (int *)0x0;
            uStack_4c = 0;
            piStack_80 = (int *)0x0;
            uStack_7c = 0;
            piStack_38 = (int *)0x0;
            uStack_34 = 0;
            piStack_68 = (int *)0x0;
            uStack_64 = 0;
            piStack_12c = (int *)0x0;
            ppiStack_158 = (int **)0x109e29b7;
            FUN_109e32d0();
            ppiStack_158 = (int **)auStack_54;
            puStack_15c = (undefined1 *)0x109e29c8;
            FUN_109e32d0();
            puStack_15c = auStack_88;
            puStack_160 = (undefined1 *)0x109e29d9;
            FUN_109e32d0();
            puStack_160 = auStack_44;
            puStack_164 = (undefined4 *)0x109e29ea;
            FUN_109e32d0();
            puStack_164 = auStack_78;
            piStack_168 = (int *)0x109e29fb;
            FUN_109e32d0();
            if (((byte)piStack_138 & 0x8f) == 9) {
              uVar8 = 0;
              piStack_168 = (int *)0x0;
              uStack_16c = 0x109e2a17;
              iVar4 = (**(code **)(*piVar3 + 0x28))();
              piVar9 = unaff_EBX;
              if (iVar4 != 0) {
                do {
                  uStack_170 = 0;
                  pcStack_174 = (char *)0x109e2a2f;
                  uStack_16c = uVar8;
                  piStack_168 = piVar9;
                  (**(code **)(*piVar3 + 0x30))();
                  uVar8 = uVar8 + 1;
                  ppiStack_178 = (int **)0x109e2a40;
                  uVar5 = (**(code **)(*unaff_EBX + 0x28))();
                  piVar9 = piVar9 + 6;
                } while (uVar8 < uVar5);
              }
            }
            uVar8 = 0;
            ppiStack_158 = (int **)0x0;
            uStack_104 = 0;
            uStack_100 = 0;
            local_11c = 0;
            local_118 = 0;
            uStack_ec = 0;
            uStack_e8 = 0;
            uStack_ac = 0;
            uStack_a8 = 0;
            piStack_168 = (int *)0x109e2a75;
            FUN_111f8d20();
            piStack_168 = (int *)(uint)*(byte *)(iVar2 + 0x11b1d);
            uStack_170 = 0x109e2a86;
            uStack_170 = FUN_109d8f20();
            pcStack_174 = "weekCount";
            ppiStack_178 = (int **)0x109e2a9d;
            FUN_104d1550();
            uStack_170 = (uint)*(byte *)(iVar2 + 0x11b19);
            pcStack_174 = (char *)ppiStack_158;
            ppiStack_178 = (int **)0x109e2ab1;
            ppiStack_178 = (int **)FUN_109d8f20();
            ppiStack_17c = (int **)0x11de4974;
            pcStack_180 = (char *)0x109e2ac5;
            FUN_104d1550();
            iStack_130 = 0;
            if (*(char *)(iVar2 + 0xad2) != '\0') {
              puStack_164 = (undefined4 *)((int)ppiStack_158 + -0x18);
              puVar6 = (undefined4 *)(iVar2 + 0xae9);
              do {
                if (*(char *)((int)puVar6 + -0x15) == '0') {
                  if (uVar8 == ((int)uVar8 / 3) * 3) {
                    puStack_164 = puStack_164 + 6;
                    piStack_168 = (int *)0x0;
                  }
                  ppiStack_17c = &piStack_114;
                  uStack_c8 = CONCAT31(uStack_c8._1_3_,((byte)puStack_164[1] & 0x8f) == 10);
                  ppiStack_178 = (int **)uStack_c8;
                  pcStack_180 = "dayRewardArray";
                  uStack_184 = puStack_164[2];
                  pcStack_188 = (char *)0x109e2b4f;
                  (**(code **)(*(int *)*puStack_164 + 0x10))();
                  pcStack_188 = (char *)0x1;
                  pcStack_18c = "bInitial";
                  FUN_104d15e0();
                  piVar3 = piStack_168;
                  if (((byte)uStack_110 & 0x8f) == 9) {
                    ppiStack_178 = (int **)uStack_10c;
                    ppiStack_17c = (int **)0x109e2b86;
                    uVar8 = (**(code **)(*piStack_114 + 0x28))();
                    if (piVar3 < uVar8) {
                      ppiStack_178 = &piStack_12c;
                      ppiStack_17c = (int **)piVar3;
                      pcStack_180 = (char *)uStack_10c;
                      uStack_184 = 0x109e2ba1;
                      (**(code **)(*piStack_114 + 0x30))();
                      pcStack_188 = auStack_108;
                      uStack_d0 = uStack_d0 & 0xffffff00;
                      uStack_184 = uStack_d0;
                      pcStack_18c = "rewardItemArray";
                      (**(code **)(*piStack_138 + 0x10))(iStack_130);
                      uVar7 = FUN_109d8f20(ppiStack_17c,*(undefined1 *)((int)puVar6 + -0x16));
                      FUN_104d1550("FetchCount",uVar7);
                      uVar7 = FUN_109d8f20(uStack_184,*(undefined1 *)(puVar6 + -1));
                      FUN_104d1550("CurrentAchieveCount",uVar7);
                      FUN_104d1550("NeedAchieveCount",*puVar6);
                      FUN_104d1550("entryId",*(undefined1 *)((int)puVar6 + -0x16));
                      pcStack_188 = (char *)0x0;
                      CPet__SetName((int)puVar6 + 0x26);
                      FUN_104d1790("taskDesc",&pcStack_18c);
                      if (puStack_15c != (undefined1 *)0x0) {
                        ppiStack_178 = (int **)puStack_15c;
                        ppiStack_17c = (int **)0x109e2c78;
                        FUN_10c3da30();
                      }
                      if ((((byte)uStack_f8 & 0x8f) == 9) &&
                         (uVar8 = 0, *(char *)((int)puVar6 + 0x1a6) != '\0')) {
                        puVar10 = (uint *)((int)puVar6 + 0x1a7);
                        do {
                          ppiStack_178 = (int **)uStack_f4;
                          ppiStack_17c = (int **)0x109e2cb0;
                          uVar5 = (**(code **)(*piStack_fc + 0x28))();
                          piVar3 = piStack_168;
                          if (uVar5 <= uVar8) break;
                          ppiStack_178 = &local_bc;
                          pcStack_180 = (char *)uStack_f4;
                          uStack_184 = 0x109e2ccd;
                          ppiStack_17c = (int **)uVar8;
                          (**(code **)(*piStack_fc + 0x30))();
                          uStack_184 = *puVar10;
                          pcStack_188 = "ItemId";
                          pcStack_18c = (char *)0x109e2ce3;
                          FUN_104d1440();
                          pcStack_18c = (char *)(int)(short)puVar10[1];
                          FUN_104d1550("ItemCount");
                          uVar8 = uVar8 + 1;
                          puVar10 = puVar10 + 2;
                          piVar3 = piStack_168;
                        } while ((int)uVar8 < (int)(uint)*(byte *)((int)puVar6 + 0x1a6));
                      }
                    }
                  }
                  uVar8 = (int)piVar3 + 1;
                  piStack_168 = (int *)uVar8;
                }
                iStack_130 = iStack_130 + 1;
                puVar6 = (undefined4 *)((int)puVar6 + 0x423);
              } while (iStack_130 < (int)(uint)*(byte *)((int)local_c0 + 0xad2));
            }
            if ((local_b8 >> 6 & 1) != 0) {
              ppiStack_17c = &local_bc;
              ppiStack_178 = (int **)local_b4;
              pcStack_180 = (char *)0x109e2d68;
              (**(code **)(*local_bc + 8))();
              local_bc = (int *)0x0;
            }
            local_b8 = 0;
            if ((uStack_f8 >> 6 & 1) != 0) {
              ppiStack_17c = &piStack_fc;
              ppiStack_178 = (int **)uStack_f4;
              pcStack_180 = (char *)0x109e2d9e;
              (**(code **)(*piStack_fc + 8))();
              piStack_fc = (int *)0x0;
            }
            uStack_f8 = 0;
            if (((uint)local_128 >> 6 & 1) != 0) {
              ppiStack_17c = &piStack_12c;
              ppiStack_178 = (int **)local_124;
              pcStack_180 = (char *)0x109e2dcb;
              (**(code **)(*piStack_12c + 8))();
              piStack_12c = (int *)0x0;
            }
            local_128 = (int *)0x0;
            if ((uStack_110 >> 6 & 1) != 0) {
              ppiStack_17c = &piStack_114;
              ppiStack_178 = (int **)uStack_10c;
              pcStack_180 = (char *)0x109e2df8;
              (**(code **)(*piStack_114 + 8))();
              piStack_114 = (int *)0x0;
            }
            ppiVar1 = ppiStack_158;
            uStack_110 = 0;
            ppiStack_178 = ppiStack_158;
            ppiStack_17c = ppiStack_154;
            pcStack_180 = (char *)0x109e2e1f;
            FUN_109e3880();
            if (ppiVar1 != (int **)0x0) {
              ppiStack_154 = ppiVar1;
              ppiStack_158 = (int **)0x109e2e2c;
              FUN_10c3d5d0();
            }
            if ((uStack_64 >> 6 & 1) != 0) {
              ppiStack_158 = &piStack_68;
              ppiStack_154 = (int **)uStack_60;
              puStack_15c = (undefined1 *)0x109e2e58;
              (**(code **)(*piStack_68 + 8))();
              piStack_68 = (int *)0x0;
            }
            uStack_64 = 0;
            if ((uStack_34 >> 6 & 1) != 0) {
              ppiStack_158 = &piStack_38;
              ppiStack_154 = (int **)uStack_30;
              puStack_15c = (undefined1 *)0x109e2e97;
              (**(code **)(*piStack_38 + 8))();
              piStack_38 = (int *)0x0;
            }
            uStack_34 = 0;
            if ((uStack_7c >> 6 & 1) != 0) {
              ppiStack_158 = &piStack_80;
              ppiStack_154 = (int **)auStack_78[0];
              puStack_15c = (undefined1 *)0x109e2ed6;
              (**(code **)(*piStack_80 + 8))();
              piStack_80 = (int *)0x0;
            }
            uStack_7c = 0;
            if ((uStack_4c >> 6 & 1) != 0) {
              ppiStack_158 = &piStack_50;
              ppiStack_154 = (int **)uStack_48;
              puStack_15c = (undefined1 *)0x109e2f15;
              (**(code **)(*piStack_50 + 8))();
              piStack_50 = (int *)0x0;
            }
            uStack_4c = 0;
            if ((uStack_1c >> 6 & 1) != 0) {
              ppiStack_158 = &piStack_20;
              ppiStack_154 = (int **)uStack_18;
              puStack_15c = (undefined1 *)0x109e2f54;
              (**(code **)(*piStack_20 + 8))();
              piStack_20 = (int *)0x0;
            }
            uStack_1c = 0;
          }
        }
      }
    }
  }
  if ((local_124 >> 6 & 1) != 0) {
    ppiStack_158 = &local_128;
    ppiStack_154 = (int **)local_120;
    puStack_15c = (undefined1 *)0x109e2f87;
    (**(code **)(*local_128 + 8))();
    local_128 = (int *)0x0;
  }
  local_124 = 0;
  if (((uint)local_bc >> 6 & 1) != 0) {
    ppiStack_158 = &local_c0;
    ppiStack_154 = (int **)local_b8;
    puStack_15c = (undefined1 *)0x109e2fc0;
    (**(code **)(*local_c0 + 8))();
  }
  return;
}



/* ===== FUN_109e3f50 @ 109e3f50  size=467 ===== */
// strings:
//   "InitModel"
//   "GetGoalGuideData"
//   "FetchReward"
//   "GetNextRewardData"
//   "UpdateAchieveNotice"
//   "CheckSystemUnlock"

/* [RE-AUTO c0]
   strings:
     ""InitModel""
     ""GetGoalGuideData""
     ""FetchReward""
     ""GetNextRewardData""
     ""UpdateAchieveNotice""
     ""CheckSystemUnlock"" */

void FUN_109e3f50(void)

{
  code *pcStack_84;
  char *pcStack_80;
  code **ppcStack_7c;
  code ***pppcStack_78;
  code *pcStack_74;
  code **ppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code **ppcStack_64;
  code **ppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  undefined4 ***pppuStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11dbd57c;
  pppcStack_34 = (code ***)0x109e3f84;
  FUN_100b62c0();
  pppcStack_34 = (code ***)&DAT_109e4140;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109e3f95;
  FUN_109e50f0();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109e3fab;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de4a04;
  pppcStack_40 = (code ***)0x11de49f4;
  pppcStack_44 = (code ***)0x109e3fcb;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109e4150;
  pppuStack_48 = &pppcStack_3c;
  pppcStack_4c = (code ***)0x109e3fdc;
  FUN_109e50f0();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109e3ff2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11dd8c63;
  pppcStack_50 = (code ***)0x11dd8c58;
  pppcStack_54 = (code ***)0x109e4012;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109e4980;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109e4023;
  FUN_109e50f0();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    ppcStack_60 = (code **)0x109e4039;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11de49f1;
  ppcStack_60 = (code **)0x11de49e0;
  ppcStack_64 = (code **)0x109e4059;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  ppcStack_64 = (code **)FUN_109e49e0;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109e406a;
  FUN_109e50f0();
  if ((pppcStack_50 != &ppcStack_64) && (pppcStack_50 != (code ***)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x109e4080;
    FUN_10c3d5d0();
  }
  pppcStack_54 = &ppcStack_64;
  pppcStack_6c = (code ***)0x11de4adb;
  ppcStack_70 = (code **)0x11de4ac8;
  pcStack_74 = (code *)0x109e40a0;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pcStack_74 = FUN_109e4de0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  ppcStack_7c = (code **)0x109e40b1;
  FUN_109e50f0();
  if ((ppcStack_60 != &pcStack_74) && (ppcStack_60 != (code **)0x0)) {
    ppcStack_7c = ppcStack_60;
    pcStack_80 = (char *)0x109e40c7;
    FUN_10c3d5d0();
  }
  ppcStack_64 = &pcStack_74;
  ppcStack_7c = (code **)0x11de4ac5;
  pcStack_80 = "CheckSystemUnlock";
  pcStack_84 = (code *)0x109e40e7;
  ppcStack_60 = ppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109e4f70;
  FUN_109e50f0(&ppcStack_7c);
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_70);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e4150 @ 109e4150  size=2085 ===== */
// calls: CPlayer::GetHuntRankOrCount
// strings:
//   "PAGEGOALGUIDE_VO_CLASSNAME"
//   "GOALGUIDE_VO_CLASSNAME"
//   "pageDataList"
//   "hasRewards"
//   "groupID"
//   "strName"
//   "goalValue"
//   "strNote"
//   "curValue"
//   "strDesc"
//   "rewardAchieveID"
//   "rewardValue"
//   "itemId"
//   "itemNum"
//   "strTips"
//   "achieveList"

/* [RE-AUTO c0]
   strings:
     ""PAGEGOALGUIDE_VO_CLASSNAME""
     ""GOALGUIDE_VO_CLASSNAME""
     ""pageDataList""
     ""hasRewards""
     ""groupID""
     ""strName""
     ""goalValue""
     ""strNote""
     ""curValue""
     ""strDesc"" */

void FUN_109e4150(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4,int param_5
                 )

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piStack_ec;
  int *piStack_e8;
  int *local_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 *puStack_d4;
  int *piStack_d0;
  byte bStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *local_c0;
  int *local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint uStack_a4;
  int *piStack_a0;
  undefined1 auStack_98 [4];
  uint uStack_94;
  undefined4 *puStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  uint uStack_84;
  int *piStack_80;
  undefined4 uStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  undefined1 auStack_38 [8];
  int **ppiStack_30;
  int **ppiStack_2c;
  int **ppiStack_28;
  int **ppiStack_24;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_ec;
  local_e4 = param_2;
  if (param_5 == 1) {
    local_c0 = (int *)0x0;
    local_bc = (int *)param_4[1];
    local_b4 = param_4[3];
    local_b8 = param_4[2];
    local_b0 = param_4[4];
    if (((uint)local_bc >> 6 & 1) != 0) {
      local_c0 = (int *)*param_4;
      (**(code **)(*local_c0 + 4))(&local_c0,local_b8);
    }
    piVar2 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    piStack_d0 = piVar2;
    if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x46c))(), iVar3 != 0)) &&
       (piVar2[0xac6] != 0)) {
      piStack_88 = (int *)0x0;
      uStack_84 = 0;
      piStack_e0 = (int *)CONCAT31(piStack_e0._1_3_,((byte)local_bc & 0x8f) == 10);
      uStack_c4 = 0;
      cVar1 = (**(code **)(*local_c0 + 0x10))
                        (local_b8,"PAGEGOALGUIDE_VO_CLASSNAME",&piStack_88,piStack_e0);
      if ((cVar1 != '\0') && (((byte)uStack_94 & 0x8f) == 6)) {
        if ((uStack_94 >> 6 & 1) == 0) {
          puStack_d4 = puStack_90;
        }
        else {
          puStack_d4 = (undefined4 *)*puStack_90;
        }
      }
      uStack_d8 = 0;
      cVar1 = (**(code **)(*piStack_d0 + 0x10))
                        (uStack_c8,"GOALGUIDE_VO_CLASSNAME",auStack_98,(bStack_cc & 0x8f) == 10);
      if ((cVar1 != '\0') && (((byte)uStack_a4 & 0x8f) == 6)) {
        if ((uStack_a4 >> 6 & 1) == 0) {
          piStack_e8 = piStack_a0;
        }
        else {
          piStack_e8 = (int *)*piStack_a0;
        }
      }
      puStack_90 = (undefined4 *)0x0;
      uStack_8c = 0;
      (**(code **)(*piStack_e0 + 0x10))
                (uStack_d8,"pageDataList",&puStack_90,((byte)uStack_dc & 0x8f) == 10);
      if (((byte)piStack_6c & 0x8f) == 9) {
        (**(code **)(*piStack_70 + 0x44))(piStack_68,0,0xffffffff);
        piVar8 = (int *)0x0;
        piStack_e0 = (int *)0x0;
        iVar3 = FUN_109e3df0();
        if (0 < iVar3) {
          do {
            uVar10 = 0;
            piStack_40 = (int *)0x0;
            piStack_3c = (int *)0x0;
            FUN_11a98de0(&piStack_40,uStack_c4,0,0);
            iVar3 = FUN_109e3d60(piVar8);
            if (iVar3 != 0) {
              piStack_68 = (int *)0x0;
              uStack_64 = 0;
              FUN_11a98a70(&piStack_68);
              puVar4 = (undefined4 *)FUN_11a81480();
              cVar1 = (char)((uint)uVar10 >> 0x18);
              piStack_a0 = (int *)*puVar4;
              if (piStack_a0 != (int *)puVar4[1]) {
                do {
                  piVar8 = (int *)*piStack_a0;
                  piStack_ec = piVar8;
                  if ((piVar8 != (int *)0x0) &&
                     (iVar3 = piVar8[9], iVar5 = CPlayer__GetHuntRankOrCount(), iVar3 <= iVar5)) {
                    local_bc = (int *)0x0;
                    local_b8 = 0;
                    FUN_11a98de0(&local_bc,uStack_dc,0,0);
                    (**(code **)(*piVar2 + 0x46c))(piVar8[10]);
                    FUN_114e00a0();
                    piVar9 = (int *)0x0;
                    piVar8 = (int *)0x0;
                    piVar6 = (int *)FUN_11a81a60();
                    piVar2 = (int *)*piVar6;
                    piStack_3c = piVar6;
                    if (piVar2 != (int *)piVar6[1]) {
                      do {
                        if ((int *)*piVar2 != (int *)0x0) {
                          uVar7 = (**(code **)(*(int *)*piVar2 + 0x18))();
                          iVar3 = *(int *)(*piVar2 + 0x24);
                          if ((piVar8 == (int *)0x0) && (cVar1 = FUN_115350b0(uVar7), cVar1 == '\0')
                             ) {
                            piVar8 = (int *)*piVar2;
                            FUN_104d15e0("hasRewards",1);
                          }
                          piVar9 = (int *)*piVar2;
                          piVar6 = piStack_3c;
                          if ((int)piStack_e0 < iVar3) break;
                        }
                        piVar2 = piVar2 + 1;
                      } while (piVar2 != (int *)piVar6[1]);
                      if (piVar9 != (int *)0x0) {
                        uVar7 = (**(code **)(*piStack_ec + 0x18))();
                        FUN_104d1550("groupID",uVar7);
                        ppiStack_28 = (int **)auStack_38;
                        auStack_38[0] = 0;
                        ppiStack_24 = ppiStack_28;
                        FUN_100e5aa0(ppiStack_28);
                        FUN_104d1670("strName",ppiStack_28);
                        if ((ppiStack_28 != &piStack_3c) && (ppiStack_28 != (int **)0x0)) {
                          FUN_10c3d5d0(ppiStack_28);
                        }
                        FUN_104d1550("goalValue",piVar9[9]);
                        piStack_3c = (int *)((uint)piStack_3c & 0xffffff00);
                        ppiStack_2c = &piStack_3c;
                        ppiStack_28 = ppiStack_2c;
                        FUN_100e5aa0(ppiStack_2c);
                        FUN_104d1670("strNote",ppiStack_2c);
                        if ((ppiStack_2c != &piStack_40) && (ppiStack_2c != (int **)0x0)) {
                          FUN_10c3d5d0(ppiStack_2c);
                        }
                        FUN_104d1550("curValue",piStack_e8);
                        if (piVar8 == (int *)0x0) {
                          if (piVar9[9] <= (int)piStack_e8) {
                            piVar8 = piVar9;
                          }
                          uVar7 = extraout_ECX;
                          if (piVar8 != (int *)0x0) goto LAB_109e45e7;
                        }
                        else {
LAB_109e45e7:
                          ppiStack_30 = &piStack_40;
                          piStack_40 = (int *)((uint)piStack_40 & 0xffffff00);
                          ppiStack_2c = ppiStack_30;
                          FUN_100e5aa0(ppiStack_30);
                          FUN_104d1670("strDesc",ppiStack_30);
                          if ((ppiStack_30 != &piStack_44) && (ppiStack_30 != (int **)0x0)) {
                            FUN_10c3d5d0(ppiStack_30);
                          }
                          uVar7 = (**(code **)(*piVar8 + 0x18))();
                          FUN_104d1550("rewardAchieveID",uVar7);
                          FUN_104d1550("rewardValue",piVar8[9]);
                          FUN_104d1550("itemId",piVar8[10]);
                          FUN_104d1550("itemNum",piVar8[0xb]);
                          uVar7 = extraout_ECX_00;
                        }
                        iVar3 = FUN_1099d930(uVar7);
                        if (((*(int *)(iVar3 + 0x30) == 0) &&
                            (iVar5 = *(int *)(iVar3 + 0x28), iVar5 != 0)) &&
                           (0 < *(int *)(iVar3 + 0x24))) {
                          iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + (int)(0 / (longlong)iVar5) * 4);
                          if (iVar3 == 0) goto LAB_109e46cc;
                          iVar3 = *(int *)(iVar3 + (int)(0 % (longlong)iVar5) * 4);
                        }
                        else {
LAB_109e46cc:
                          iVar3 = 0;
                        }
                        if (iVar3 != 0) {
                          ppiStack_30 = &piStack_40;
                          piStack_40 = (int *)((uint)piStack_40 & 0xffffff00);
                          ppiStack_2c = ppiStack_30;
                          FUN_100e5aa0(ppiStack_30);
                          FUN_104d1670("strTips",ppiStack_30);
                          if ((ppiStack_2c != &piStack_40) && (ppiStack_2c != (int **)0x0)) {
                            FUN_10c3d5d0(ppiStack_2c);
                          }
                        }
                        (**(code **)(*piStack_74 + 0x3c))(piStack_6c,&uStack_c4);
                      }
                    }
                    piVar2 = local_e4;
                    if ((local_b8 >> 6 & 1) != 0) {
                      (**(code **)(*local_bc + 8))(&local_bc,local_b4);
                      piVar2 = local_e4;
                    }
                  }
                  cVar1 = (char)((uint)uVar10 >> 0x18);
                  piStack_a0 = piStack_a0 + 1;
                } while (piStack_a0 != (int *)puVar4[1]);
              }
              iVar3 = (**(code **)(*piStack_6c + 0x28))(uStack_64);
              if (iVar3 != 0) {
                cVar1 = '\x01';
              }
              piStack_3c = (int *)((uint)piStack_3c & 0xffffff00);
              ppiStack_2c = &piStack_3c;
              ppiStack_28 = ppiStack_2c;
              FUN_100e5aa0(ppiStack_2c);
              FUN_104d1670("strName",ppiStack_2c);
              if ((ppiStack_2c != &piStack_40) && (ppiStack_2c != (int **)0x0)) {
                FUN_10c3d5d0(ppiStack_2c);
              }
              (**(code **)(*piStack_5c + 0x14))
                        (uStack_54,"achieveList",&piStack_74,((byte)uStack_58 & 0x8f) == 10);
              if ((uStack_64 >> 6 & 1) != 0) {
                (**(code **)(*piStack_68 + 8))(&piStack_68,uStack_60);
              }
              piVar8 = local_e4;
              if (cVar1 != '\0') {
                (**(code **)(*piStack_80 + 0x3c))(uStack_78,&piStack_50);
                piVar8 = local_e4;
              }
            }
            if ((uStack_4c >> 6 & 1) != 0) {
              (**(code **)(*piStack_50 + 8))(&piStack_50,uStack_48);
            }
            piVar8 = (int *)((int)piVar8 + 1);
            local_e4 = piVar8;
            iVar3 = FUN_109e3df0();
          } while ((int)piVar8 < iVar3);
        }
      }
      if (((uint)piStack_6c >> 6 & 1) != 0) {
        (**(code **)(*piStack_70 + 8))(&piStack_70,piStack_68);
        piStack_70 = (int *)0x0;
      }
      piStack_6c = (int *)0x0;
      if ((uStack_84 >> 6 & 1) != 0) {
        (**(code **)(*piStack_88 + 8))(&piStack_88,piStack_80);
        piStack_88 = (int *)0x0;
      }
      uStack_84 = 0;
    }
    if (((uint)local_bc >> 6 & 1) != 0) {
      (**(code **)(*local_c0 + 8))(&local_c0,local_b8);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109e49e0 @ 109e49e0  size=1009 ===== */
// strings:
//   "GOALGUIDE_VO_CLASSNAME"
//   "groupID"
//   "strName"
//   "strDesc"
//   "curValue"
//   "rewardAchieveID"
//   "rewardValue"
//   "itemId"
//   "itemNum"
//   "hasRewards"
//   "goalGuideVo"

/* [RE-AUTO c0]
   strings:
     ""GOALGUIDE_VO_CLASSNAME""
     ""groupID""
     ""strName""
     ""strDesc""
     ""curValue""
     ""rewardAchieveID""
     ""rewardValue""
     ""itemId""
     ""itemNum""
     ""hasRewards"" */

void FUN_109e49e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5,undefined4 *param_6)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 unaff_EBX;
  byte unaff_SI;
  undefined1 auStack_8c [3];
  undefined1 uStack_89;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int *piStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  int *piStack_4c;
  int *piStack_48;
  int iStack_44;
  int *piStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [12];
  uint *puStack_28;
  uint *puStack_24;
  uint *puStack_20;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)auStack_8c;
  local_50 = param_2;
  if (param_5 == 2) {
    local_7c = param_4[1];
    local_74 = param_4[3];
    local_78 = param_4[2];
    local_70 = param_4[4];
    local_80 = (int *)0x0;
    if ((local_7c >> 6 & 1) != 0) {
      local_80 = (int *)*param_4;
      (**(code **)(*local_80 + 4))(&local_80,local_78);
    }
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90) + 0xb4))();
    piStack_48 = piVar3;
    if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x46c))(), iVar4 != 0)) {
      piStack_40 = (int *)0x0;
      uStack_3c = 0;
      uStack_88 = CONCAT31(uStack_88._1_3_,((byte)local_7c & 0x8f) == 10);
      uStack_84 = 0;
      cVar2 = (**(code **)(*local_80 + 0x10))
                        (local_78,"GOALGUIDE_VO_CLASSNAME",&piStack_40,uStack_88);
      if ((cVar2 != '\0') && (((byte)piStack_4c & 0x8f) == 6)) {
        piVar6 = piStack_48;
        if (((uint)piStack_4c >> 6 & 1) != 0) {
          piVar6 = (int *)*piStack_48;
        }
        unaff_SI = (byte)piVar6;
      }
      piVar5 = (int *)FUN_109e3ba0();
      (**(code **)(*piVar3 + 0x46c))(piVar5[10]);
      uStack_3c = FUN_114e00a0();
      piVar6 = (int *)FUN_11a81a60();
      piVar3 = (int *)*piVar6;
      piStack_4c = piVar6;
      if (piVar3 != (int *)piVar6[1]) {
        do {
          piVar1 = (int *)*piVar3;
          if (piVar1 != (int *)0x0) {
            uVar7 = (**(code **)(*piVar1 + 0x18))();
            iStack_44 = piVar1[9];
            cVar2 = FUN_115350b0(uVar7);
            piVar6 = piStack_4c;
            if (cVar2 == '\0') {
              piStack_68 = (int *)0x0;
              uStack_64 = 0;
              FUN_11a98de0(&piStack_68,uStack_84,0,0);
              uVar7 = (**(code **)(*piVar5 + 0x18))();
              FUN_104d1550("groupID",uVar7);
              puStack_24 = (uint *)auStack_34;
              auStack_34[0] = 0;
              puStack_20 = puStack_24;
              FUN_100e5aa0(puStack_24);
              FUN_104d1670("strName",puStack_24);
              if ((puStack_24 != &uStack_38) && (puStack_24 != (uint *)0x0)) {
                FUN_10c3d5d0(puStack_24);
              }
              puStack_28 = &uStack_38;
              uStack_38 = uStack_38 & 0xffffff00;
              puStack_24 = puStack_28;
              FUN_100e5aa0(puStack_28);
              FUN_104d1670("strDesc",puStack_28);
              if ((puStack_28 != &uStack_3c) && (puStack_28 != (uint *)0x0)) {
                FUN_10c3d5d0(puStack_28);
              }
              FUN_104d1550("curValue",piStack_40);
              uVar7 = (**(code **)(*piVar1 + 0x18))();
              FUN_104d1550("rewardAchieveID",uVar7);
              FUN_104d1550("rewardValue",uStack_5c);
              FUN_104d1550("itemId",piVar1[10]);
              FUN_104d1550("itemNum",piVar1[0xb]);
              FUN_104d15e0("hasRewards",1);
              (**(code **)(*piVar5 + 0x14))
                        (unaff_EBX,"goalGuideVo",&local_80,(unaff_SI & 0x8f) == 10);
              uStack_89 = 1;
              if ((uStack_64 >> 6 & 1) != 0) {
                (**(code **)(*piStack_68 + 8))(&piStack_68,uStack_60);
              }
              break;
            }
          }
          piVar3 = piVar3 + 1;
        } while (piVar3 != (int *)piVar6[1]);
      }
      if (((uint)param_6[1] >> 6 & 1) != 0) {
        (**(code **)(*(int *)*param_6 + 8))(param_6,param_6[2]);
        *param_6 = 0;
      }
      *(undefined1 *)(param_6 + 2) = uStack_89;
      param_6[1] = 2;
      if ((uStack_3c >> 6 & 1) != 0) {
        (**(code **)(*piStack_40 + 8))(&piStack_40,uStack_38);
        piStack_40 = (int *)0x0;
      }
      uStack_3c = 0;
    }
    if ((local_7c >> 6 & 1) != 0) {
      (**(code **)(*local_80 + 8))(&local_80,local_78);
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109eacd0 @ 109eacd0  size=538 ===== */
// strings:
//   "C2AS_GetSuperHunterData"
//   "AS2C_RequestSuperHunterRankData"
//   "C2AS_GetSuperHunterRankData"
//   "EnterInstance"
//   "TeamMatch"
//   "GainReward"
//   "GetSuperHunterInfo"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetSuperHunterData""
     ""AS2C_RequestSuperHunterRankData""
     ""C2AS_GetSuperHunterRankData""
     ""EnterInstance""
     ""TeamMatch""
     ""GainReward""
     ""GetSuperHunterInfo"" */

void FUN_109eacd0(void)

{
  code *pcStack_94;
  char *pcStack_90;
  code **ppcStack_8c;
  code ***pppcStack_88;
  code *pcStack_84;
  code **ppcStack_80;
  code ***pppcStack_7c;
  code ***pppcStack_78;
  code **ppcStack_74;
  code **ppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  code ***pppcStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  code ***pppcStack_44;
  code ***pppcStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11de4f08;
  pppcStack_34 = (code ***)0x109ead04;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109eaf00;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109ead15;
  FUN_109ec790();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppcStack_40 = (code ***)0x109ead2b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de50af;
  pppcStack_40 = (code ***)0x11de5090;
  pppcStack_44 = (code ***)0x109ead4b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppcStack_44 = (code ***)FUN_109eba30;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109ead5c;
  FUN_109ec790();
  if (((code ****)pppcStack_30 != &pppcStack_44) && ((code ****)pppcStack_30 != (code ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109ead72;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppcStack_44;
  pppcStack_4c = (code ***)0x11de50cb;
  pppcStack_50 = (code ***)0x11de50b0;
  pppcStack_54 = (code ***)0x109ead92;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109eba90;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppcStack_5c = (code ***)0x109eada3;
  FUN_109ec790();
  if (((code ****)pppcStack_40 != &pppcStack_54) && ((code ****)pppcStack_40 != (code ****)0x0)) {
    pppcStack_5c = pppcStack_40;
    pppcStack_60 = (code ***)0x109eadb9;
    FUN_10c3d5d0();
  }
  pppcStack_44 = (code ***)&pppcStack_54;
  pppcStack_5c = (code ***)0x11dc3d95;
  pppcStack_60 = (code ***)0x11dc3d88;
  pppcStack_64 = (code ***)0x109eadd9;
  pppcStack_40 = pppcStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)FUN_109ec540;
  pppcStack_68 = (code ***)&pppcStack_5c;
  pppcStack_6c = (code ***)0x109eadea;
  FUN_109ec790();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    ppcStack_70 = (code **)0x109eae00;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de5081;
  ppcStack_70 = (code **)0x11de5078;
  ppcStack_74 = (code **)0x109eae20;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  ppcStack_74 = (code **)FUN_109ec5c0;
  pppcStack_78 = (code ***)&pppcStack_6c;
  pppcStack_7c = (code ***)0x109eae31;
  FUN_109ec790();
  if ((pppcStack_60 != &ppcStack_74) && (pppcStack_60 != (code ***)0x0)) {
    pppcStack_7c = pppcStack_60;
    ppcStack_80 = (code **)0x109eae47;
    FUN_10c3d5d0();
  }
  pppcStack_64 = &ppcStack_74;
  pppcStack_7c = (code ***)0x11de508e;
  ppcStack_80 = (code **)0x11de5084;
  pcStack_84 = (code *)0x109eae67;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pcStack_84 = FUN_109ec630;
  pppcStack_88 = (code ***)&pppcStack_7c;
  ppcStack_8c = (code **)0x109eae78;
  FUN_109ec790();
  if ((ppcStack_70 != &pcStack_84) && (ppcStack_70 != (code **)0x0)) {
    ppcStack_8c = ppcStack_70;
    pcStack_90 = (char *)0x109eae8e;
    FUN_10c3d5d0();
  }
  ppcStack_74 = &pcStack_84;
  ppcStack_8c = (code **)0x11de506a;
  pcStack_90 = "GetSuperHunterInfo";
  pcStack_94 = (code *)0x109eaeae;
  ppcStack_70 = ppcStack_74;
  FUN_100b62c0();
  pcStack_94 = FUN_109ec4b0;
  FUN_109ec790(&ppcStack_8c);
  if ((ppcStack_80 != &pcStack_94) && (ppcStack_80 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_80);
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109eaf00 @ 109eaf00  size=2688 ===== */
// strings:
//   "difficulty"
//   "remainNum"
//   "vipLevel"
//   "isVip"
//   "ruleStr"
//   "monsterCharacterPath"
//   "monsterCharacterState"
//   "monsterCharacterTips"
//   "mh.view.SuperHunter.model.BossVo"
//   "bossID"
//   "bossName"
//   "bossData"
//   "mh.view.SuperHunter.model.RewardVo"
//   "rewardID"
//   "rewardCount"
//   "gainedTimes"
//   "remainGainTimes"
//   "maxGainTimes"
//   "rewardData"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c0]
   strings:
     ""difficulty""
     ""remainNum""
     ""vipLevel""
     ""isVip""
     ""ruleStr""
     ""monsterCharacterPath""
     ""monsterCharacterState""
     ""monsterCharacterTips""
     ""mh.view.SuperHunter.model.BossVo""
     ""bossID"" */

void FUN_109eaf00(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4,int param_5
                 )

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *unaff_EBX;
  int *piVar4;
  undefined4 unaff_EDI;
  int *piVar5;
  int *piVar6;
  int **ppiStack_1b0;
  int **ppiStack_1ac;
  int **ppiStack_1a8;
  int **ppiStack_1a4;
  int *piStack_1a0;
  int **ppiStack_19c;
  int *piStack_198;
  int **ppiStack_194;
  int **ppiStack_190;
  int *piStack_18c;
  int *piStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  int *piStack_16c;
  int **ppiStack_168;
  char *pcStack_164;
  int *local_160;
  uint local_15c;
  int *local_158;
  undefined4 local_154;
  int *local_150;
  int iStack_14c;
  int iStack_148;
  int *piStack_144;
  int *piStack_140;
  int *piStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  int *piStack_128;
  int *piStack_124;
  int **ppiStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_114 [8];
  int *piStack_10c;
  int *piStack_108;
  int *piStack_104;
  int *piStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  int *piStack_f0;
  uint local_ec;
  int *piStack_e8;
  uint uStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  uint uStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  undefined4 *puStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined2 auStack_b4 [8];
  undefined4 *puStack_a4;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 *puStack_94;
  undefined4 *puStack_90;
  undefined1 auStack_8c [32];
  undefined4 uStack_6c;
  undefined1 auStack_68 [12];
  int *piStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_4c;
  undefined1 **ppuStack_48;
  undefined1 **ppuStack_44;
  undefined1 ***pppuStack_38;
  undefined1 ***pppuStack_34;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&piStack_17c;
  local_ec = param_2;
  if (param_5 == 1) {
    local_160 = (int *)0x0;
    local_15c = param_4[1];
    local_154 = param_4[3];
    local_158 = (int *)param_4[2];
    local_150 = (int *)param_4[4];
    if ((local_15c >> 6 & 1) != 0) {
      local_160 = (int *)*param_4;
      ppiStack_190 = &local_160;
      ppiStack_194 = (int **)0x109eaf71;
      piStack_18c = local_158;
      (**(code **)(*local_160 + 4))();
    }
    if (((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
       (piVar6 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar6 != (int *)0x0)) {
      piStack_18c = (int *)0x109eafa2;
      iVar2 = (**(code **)(*piVar6 + 0xb4))();
      if ((iVar2 != 0) &&
         (piVar6 = *(int **)(iVar2 + 0x2b84), piStack_cc = piVar6, piVar6 != (int *)0x0)) {
        piStack_18c = (int *)0x109eafc8;
        piStack_18c = (int *)(**(code **)(*piVar6 + 0x3c))();
        ppiStack_190 = (int **)0x11de506c;
        ppiStack_194 = (int **)0x109eafd9;
        FUN_104d1550();
        piStack_18c = (int *)0x109eafe3;
        piStack_18c = (int *)(**(code **)(*piVar6 + 0x38))();
        ppiStack_190 = (int **)0x11ddb95c;
        ppiStack_194 = (int **)0x109eaff4;
        FUN_104d1550();
        iStack_148 = iVar2 + 0x2348;
        piStack_18c = (int *)0x109eb008;
        piStack_18c = (int *)FUN_1025b060();
        ppiStack_190 = (int **)0x11de5044;
        ppiStack_194 = (int **)0x109eb019;
        FUN_104d1550();
        if (*(int *)(iVar2 + 11000) != 0) {
          piStack_18c = (int *)0x109eb02b;
          uVar3 = FUN_11549be0();
          piStack_18c = (int *)(uVar3 & 0xff);
          ppiStack_190 = (int **)0x11de5050;
          ppiStack_194 = (int **)0x109eb03f;
          FUN_104d15e0();
        }
        piStack_18c = (int *)0x0;
        ppiStack_190 = (int **)0x109eb04b;
        ppiStack_190 = (int **)(**(code **)(*piVar6 + 0x30))();
        ppiStack_194 = (int **)0x109eb051;
        iVar2 = FUN_109eab50();
        if (iVar2 != 0) {
          ppiStack_190 = *(int ***)(iVar2 + 0x24);
          ppiStack_194 = (int **)0x11de5024;
          piStack_198 = (int *)0x109eb071;
          FUN_104d1670();
          piStack_13c = (int *)0x0;
          ppiStack_190 = &piStack_13c;
          uStack_138 = 0;
          ppiStack_194 = (int **)0x109eb090;
          FUN_11a98a70();
          ppiStack_194 = &piStack_128;
          piStack_128 = (int *)0x0;
          piStack_124 = (int *)0x0;
          piStack_198 = (int *)0x109eb0ac;
          FUN_11a98a70();
          piStack_198 = (int *)&stack0xfffffe7c;
          unaff_EBX = (int *)0x0;
          ppiStack_19c = (int **)0x109eb0c8;
          FUN_11a98a70();
          piVar1 = *(int **)(iVar2 + 0x40);
          piVar4 = *(int **)(iVar2 + 0x3c);
          piStack_e0 = piVar1;
          if (piVar4 != piVar1) {
            piVar5 = piVar4 + 0xb;
            do {
              ppiStack_19c = (int **)piVar5[-7];
              puStack_58 = auStack_68;
              piStack_1a0 = (int *)piVar5[-6];
              ppiStack_1a4 = (int **)0x109eb104;
              puStack_54 = puStack_58;
              FUN_100b62c0();
              ppiStack_1a4 = (int **)piVar5[-1];
              ppuStack_48 = &puStack_58;
              ppiStack_1a8 = (int **)*piVar5;
              ppiStack_1ac = (int **)0x109eb125;
              ppuStack_44 = ppuStack_48;
              FUN_100b62c0();
              ppiStack_1ac = (int **)piVar5[5];
              pppuStack_38 = &ppuStack_48;
              ppiStack_1b0 = (int **)piVar5[6];
              pppuStack_34 = pppuStack_38;
              FUN_100b62c0();
              uStack_c0 = 0;
              uStack_bc = 6;
              uStack_b8 = uStack_6c;
              (**(code **)(*local_160 + 0x3c))(local_158,&uStack_c0);
              piStack_e0 = (int *)0x0;
              piStack_dc = (int *)&DAT_00000006;
              piStack_d8 = piStack_5c;
              (**(code **)(*local_150 + 0x3c))(iStack_148,&piStack_e0);
              piStack_100 = (int *)0x0;
              uStack_fc = 6;
              uStack_f8 = uStack_4c;
              (*(code *)(*ppiStack_1b0)[0xf])(ppiStack_1a8,&piStack_100);
              if (((uint)piStack_104 >> 6 & 1) != 0) {
                (**(code **)(*piStack_108 + 8))(&piStack_108,piStack_100);
                piStack_108 = (int *)0x0;
              }
              piStack_104 = (int *)0x0;
              if ((local_ec >> 6 & 1) != 0) {
                (**(code **)(*piStack_f0 + 8))(&piStack_f0,piStack_e8);
                piStack_f0 = (int *)0x0;
              }
              local_ec = 0;
              if ((uStack_d4 >> 6 & 1) != 0) {
                (**(code **)(*piStack_d8 + 8))(&piStack_d8,piStack_d0);
              }
              FUN_109eb9e0();
              piVar4 = piVar4 + 0x12;
              piVar5 = piVar5 + 0x12;
              param_2 = uStack_fc;
              piVar6 = piStack_dc;
            } while (piVar4 != piVar1);
          }
          ppiStack_19c = (int **)(uint)(((byte)piStack_16c & 0x8f) == 10);
          piStack_1a0 = &iStack_148;
          ppiStack_1a4 = (int **)0x11de502c;
          ppiStack_1a8 = ppiStack_168;
          ppiStack_1ac = (int **)0x109eb2ea;
          (**(code **)(*piStack_170 + 0x14))();
          ppiStack_1ac = (int **)(uint)(((byte)piStack_17c & 0x8f) == 10);
          ppiStack_1b0 = &piStack_140;
          (**(code **)(_DAT_00000000 + 0x14))(uStack_178,"monsterCharacterState");
          (*(code *)(*ppiStack_190)[5])
                    (unaff_EDI,"monsterCharacterTips",&ppiStack_1a8,((byte)piStack_18c & 0x8f) == 10
                    );
          if ((uStack_178 >> 6 & 1) != 0) {
            ppiStack_194 = &piStack_17c;
            ppiStack_190 = (int **)uStack_174;
            piStack_198 = (int *)0x109eb359;
            (**(code **)(*piStack_17c + 8))();
            piStack_17c = (int *)0x0;
          }
          uStack_178 = 0;
          if (((uint)ppiStack_120 >> 6 & 1) != 0) {
            ppiStack_194 = &piStack_124;
            ppiStack_190 = (int **)uStack_11c;
            piStack_198 = (int *)0x109eb386;
            (**(code **)(*piStack_124 + 8))();
            piStack_124 = (int *)0x0;
          }
          ppiStack_120 = (int **)0x0;
          if ((uStack_138 >> 6 & 1) != 0) {
            ppiStack_194 = &piStack_13c;
            ppiStack_190 = (int **)uStack_134;
            piStack_198 = (int *)0x109eb3b3;
            (**(code **)(*piStack_13c + 8))();
          }
        }
        ppiStack_190 = &piStack_10c;
        piStack_10c = (int *)0x0;
        piStack_108 = (int *)0x0;
        ppiStack_194 = (int **)0x109eb3d8;
        FUN_11a98a70();
        iStack_14c = 0;
        ppiStack_194 = (int **)&iStack_14c;
        iStack_148 = 0;
        piStack_144 = (int *)0x0;
        piStack_198 = (int *)0x109eb3fc;
        (**(code **)(*piVar6 + 0x34))();
        uVar3 = 0;
        if (iStack_14c - (int)local_150 >> 2 != 0) {
          do {
            piStack_198 = (int *)0x0;
            ppiStack_19c = (int **)0x0;
            piStack_1a0 = (int *)0x11de4f6c;
            ppiStack_1a4 = &piStack_144;
            piStack_144 = (int *)0x0;
            piStack_140 = (int *)0x0;
            ppiStack_1a8 = (int **)0x109eb436;
            FUN_11a98de0();
            ppiStack_1a8 = *(int ***)(local_160[uVar3] + 0x14);
            ppiStack_1ac = (int **)0x11de4fe0;
            ppiStack_1b0 = (int **)0x109eb450;
            FUN_104d1550();
            puStack_94 = (undefined4 *)auStack_b4;
            auStack_b4[0] = 0;
            ppiStack_1a8 = (int **)auStack_b4;
            ppiStack_1ac = (int **)0x109eb489;
            puStack_90 = puStack_94;
            FUN_100e5b60();
            ppiStack_1ac = (int **)puStack_94;
            ppiStack_1b0 = (int **)0x11de4fe8;
            FUN_104d1700();
            if ((puStack_94 != &uStack_b8) && (puStack_94 != (undefined4 *)0x0)) {
              ppiStack_1ac = (int **)puStack_94;
              ppiStack_1b0 = (int **)0x109eb4bf;
              FUN_10c3d5d0();
            }
            ppiStack_1ac = &local_158;
            ppiStack_1b0 = ppiStack_120;
            (**(code **)(*piStack_128 + 0x3c))();
            if (((uint)piStack_140 >> 6 & 1) != 0) {
              ppiStack_19c = &piStack_144;
              piStack_198 = piStack_13c;
              piStack_1a0 = (int *)0x109eb4f7;
              (**(code **)(*piStack_144 + 8))();
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)(iStack_14c - (int)local_150 >> 2));
        }
        piStack_198 = (int *)(uint)(((byte)ppiStack_168 & 0x8f) == 10);
        ppiStack_19c = (int **)auStack_114;
        piStack_1a0 = (int *)0x11de4fc8;
        ppiStack_1a4 = (int **)pcStack_164;
        ppiStack_1a8 = (int **)0x109eb537;
        (**(code **)(*piStack_16c + 0x14))();
        ppiStack_1a8 = &piStack_104;
        piStack_104 = (int *)0x0;
        piStack_100 = (int *)0x0;
        ppiStack_1ac = (int **)0x109eb55c;
        FUN_11a98a70();
        ppiStack_1ac = (int **)0x109eb565;
        ppiStack_168 = (int **)FUN_1025b060();
        if ((int)ppiStack_168 < 1) {
          ppiStack_168 = (int **)0x1;
        }
        uVar3 = 0;
        do {
          ppiStack_1ac = (int **)auStack_8c;
          if ((uVar3 & 1) == 0) {
            ppiStack_1b0 = ppiStack_168;
            if ((int)uVar3 < 2) {
              ppiStack_1b0 = (int **)0x0;
            }
            (**(code **)(*piVar6 + 0x44))();
          }
          else {
            ppiStack_1b0 = (int **)0x0;
            if (1 < (int)uVar3) {
              ppiStack_1b0 = ppiStack_168;
            }
            (**(code **)(*piVar6 + 0x40))();
          }
          piStack_1a0 = (int *)0x0;
          ppiStack_19c = (int **)0x0;
          FUN_11a98de0(&piStack_1a0,"mh.view.SuperHunter.model.RewardVo",0,0);
          if (param_2 != 0) {
            puStack_c8 = puStack_a4;
            piStack_d0 = (int *)0x0;
            piStack_cc = (int *)0x3;
            (*(code *)(*ppiStack_1b0)[5])
                      (ppiStack_1a8,"rewardID",&piStack_d0,((byte)ppiStack_1ac & 0x8f) == 10);
            if (((uint)piStack_cc >> 6 & 1) != 0) {
              (**(code **)(*piStack_d0 + 8))(&piStack_d0,puStack_c8);
            }
            if (param_2 != 0) {
              puStack_c8 = puStack_a0;
              piStack_d0 = (int *)0x0;
              piStack_cc = (int *)0x3;
              (*(code *)(*ppiStack_1b0)[5])
                        (ppiStack_1a8,"rewardCount",&piStack_d0,((byte)ppiStack_1ac & 0x8f) == 10);
              if (((uint)piStack_cc >> 6 & 1) != 0) {
                (**(code **)(*piStack_d0 + 8))(&piStack_d0,puStack_c8);
              }
              if (param_2 != 0) {
                puStack_c8 = puStack_9c;
                piStack_d0 = (int *)0x0;
                piStack_cc = (int *)0x3;
                (*(code *)(*ppiStack_1b0)[5])
                          (ppiStack_1a8,"gainedTimes",&piStack_d0,((byte)ppiStack_1ac & 0x8f) == 10)
                ;
                if (((uint)piStack_cc >> 6 & 1) != 0) {
                  (**(code **)(*piStack_d0 + 8))(&piStack_d0,puStack_c8);
                }
                if (param_2 != 0) {
                  puStack_c8 = puStack_98;
                  piStack_d0 = (int *)0x0;
                  piStack_cc = (int *)0x3;
                  (*(code *)(*ppiStack_1b0)[5])
                            (ppiStack_1a8,"remainGainTimes",&piStack_d0,
                             ((byte)ppiStack_1ac & 0x8f) == 10);
                  if (((uint)piStack_cc >> 6 & 1) != 0) {
                    (**(code **)(*piStack_d0 + 8))(&piStack_d0,puStack_c8);
                  }
                  if (param_2 != 0) {
                    puStack_c8 = puStack_94;
                    piStack_d0 = (int *)0x0;
                    piStack_cc = (int *)0x3;
                    (*(code *)(*ppiStack_1b0)[5])
                              (ppiStack_1a8,"maxGainTimes",&piStack_d0,
                               ((byte)ppiStack_1ac & 0x8f) == 10);
                    if (((uint)piStack_cc >> 6 & 1) != 0) {
                      (**(code **)(*piStack_d0 + 8))(&piStack_d0,puStack_c8);
                    }
                  }
                }
              }
            }
          }
          (*(code *)(*ppiStack_120)[0xf])(uStack_118,&ppiStack_1b0);
          if (((uint)ppiStack_194 >> 6 & 1) != 0) {
            ppiStack_1b0 = &piStack_198;
            ppiStack_1ac = ppiStack_190;
            (**(code **)(*piStack_198 + 8))();
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 4);
        ppiStack_1ac = (int **)(uint)(((byte)piStack_17c & 0x8f) == 10);
        ppiStack_1b0 = &piStack_108;
        (**(code **)(*unaff_EBX + 0x14))(uStack_178,"rewardData");
        if ((uStack_e4 >> 6 & 1) != 0) {
          ppiStack_190 = &piStack_e8;
          piStack_18c = piStack_e0;
          ppiStack_194 = (int **)0x109eb8ed;
          (**(code **)(*piStack_e8 + 8))();
          piStack_e8 = (int *)0x0;
        }
        uStack_e4 = 0;
        if (piStack_144 != (int *)0x0) {
          piStack_18c = piStack_144;
          ppiStack_190 = (int **)0x109eb911;
          FUN_10c3d5d0();
        }
        if (((uint)piStack_104 >> 6 & 1) != 0) {
          ppiStack_190 = &piStack_108;
          piStack_18c = piStack_100;
          ppiStack_194 = (int **)0x109eb93d;
          (**(code **)(*piStack_108 + 8))();
          piStack_108 = (int *)0x0;
        }
        piStack_104 = (int *)0x0;
      }
    }
    if ((local_15c >> 6 & 1) != 0) {
      ppiStack_190 = &local_160;
      piStack_18c = local_158;
      ppiStack_194 = (int **)0x109eb970;
      (**(code **)(*local_160 + 8))();
    }
  }
  FUN_11a89daa();
  return;
}



/* ===== FUN_109eda60 @ 109eda60  size=210 ===== */
// strings:
//   "C2AS_RequestLegendPearlPutItemIn"
//   "C2AS_RequestLegendPearlUpgradeInfo"
//   "C2AS_RequestLegendPearlUpgrade"
//   "C2AS_RequestLegendPearlReplaceAbility"

/* [RE-AUTO c0]
   strings:
     ""C2AS_RequestLegendPearlPutItemIn""
     ""C2AS_RequestLegendPearlUpgradeInfo""
     ""C2AS_RequestLegendPearlUpgrade""
     ""C2AS_RequestLegendPearlReplaceAbility"" */

void FUN_109eda60(void)

{
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  int *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (in_stack_00000014 == 1) {
    local_20 = (int *)0x0;
    local_1c = in_stack_00000010[1];
    local_14 = in_stack_00000010[3];
    local_18 = in_stack_00000010[2];
    local_10 = in_stack_00000010[4];
    if ((local_1c >> 6 & 1) != 0) {
      local_20 = (int *)*in_stack_00000010;
      (**(code **)(*local_20 + 4))(&local_20,local_18);
    }
    FUN_104d13b0("C2AS_RequestLegendPearlPutItemIn",FUN_109edb40);
    FUN_104d13b0("C2AS_RequestLegendPearlUpgradeInfo",FUN_109edfd0);
    FUN_104d13b0("C2AS_RequestLegendPearlUpgrade",FUN_109ef720);
    FUN_104d13b0("C2AS_RequestLegendPearlReplaceAbility",FUN_109efc10);
    if ((local_1c >> 6 & 1) != 0) {
      (**(code **)(*local_20 + 8))(&local_20,local_18);
    }
  }
  return;
}



/* ===== FUN_109edfd0 @ 109edfd0  size=2721 ===== */
// calls: CPlayer::GetHuntRankOrCount, CPet::SetName
// strings:
//   "roleLevel"
//   "roleHunterStarLv"
//   "sourceRare"
//   "itemLevel"
//   "ItemRank"
//   "sourceItemName"
//   "bPointType"
//   "destArrayLength"
//   "destEquipArray"
//   "equipID"
//   "equipName"
//   "equipRare"
//   "playerUseLevelMin"
//   "playerUseLevelMax"
//   "equipCounts"
//   "upgradeMoney"
//   "currentMoney"
//   "enforceRequirement"
//   "hunterstarRequirement"
//   "rankDownLevel"

/* WARNING: Removing unreachable block (ram,0x109ef046) */
/* [RE-AUTO c0]
   strings:
     ""roleLevel""
     ""roleHunterStarLv""
     ""sourceRare""
     ""itemLevel""
     ""ItemRank""
     ""sourceItemName""
     ""bPointType""
     ""destArrayLength""
     ""destEquipArray""
     ""equipID"" */

void FUN_109edfd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined **ppuVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 *unaff_EBX;
  undefined **ppuVar13;
  int unaff_ESI;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  char *pcVar18;
  undefined4 uStack_22c;
  int iStack_228;
  int *piStack_224;
  int aiStack_220 [2];
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  undefined4 auStack_1fc [6];
  int *piStack_1e4;
  byte bStack_1e0;
  undefined4 uStack_1dc;
  int *piStack_1d4;
  int *local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  undefined **local_1c4;
  undefined **local_1c0;
  undefined **ppuStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1a8;
  undefined4 local_19c;
  undefined4 *puStack_198;
  int *piStack_190;
  undefined4 uStack_188;
  undefined4 *local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int *piStack_144;
  undefined4 auStack_13c [4];
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_120;
  uint uStack_11c;
  undefined1 auStack_108 [12];
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined1 uStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  char *pcStack_d4;
  undefined1 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [16];
  undefined1 *puStack_7c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [16];
  undefined1 *puStack_44;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [16];
  undefined1 *puStack_18;
  uint local_c;
  
  local_c = DAT_11e11390 ^ (uint)&uStack_22c;
  local_184 = param_1;
  local_19c = param_2;
  if (((uint)param_1[1] >> 6 & 1) != 0) {
    (**(code **)(*(int *)*param_1 + 8))(param_1,param_1[2]);
    *param_1 = 0;
  }
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_5 == 3) {
    local_1cc = param_4[1];
    local_1c4 = (undefined **)param_4[3];
    local_1c8 = param_4[2];
    local_1c0 = (undefined **)param_4[4];
    local_1d0 = (int *)0x0;
    if ((local_1cc >> 6 & 1) != 0) {
      local_1d0 = (int *)*param_4;
      (**(code **)(*local_1d0 + 4))(&local_1d0,local_1c8);
    }
    if (((param_4[7] & 0x8f) == 3) || ((param_4[7] & 0x8f) == 4)) {
      uStack_22c = param_4[8];
    }
    else {
      uStack_22c = 0xdeadbeaf;
    }
    if (((param_4[0xd] & 0x8f) == 3) || ((param_4[0xd] & 0x8f) == 4)) {
      uVar14 = param_4[0xe];
    }
    else {
      uVar14 = 0xdeadbeaf;
    }
    if (((((DAT_1202e818 != 0) && (*(int *)(DAT_1202e818 + 0xd0) != 0)) &&
         (piVar3 = *(int **)(*(int *)(DAT_1202e818 + 0xd0) + 0x90), piVar3 != (int *)0x0)) &&
        ((piVar3 = (int *)(**(code **)(*piVar3 + 0xb4))(), piVar3 != (int *)0x0 &&
         (iStack_1a8 = piVar3[0xb47], iStack_1a8 != 0)))) &&
       ((piVar4 = (int *)FUN_113f9bb0(uStack_22c,uVar14), piStack_224 = piVar4, piVar4 != (int *)0x0
        && (cVar2 = FUN_116698c0(), cVar2 != '\0')))) {
      uVar14 = FUN_11669730();
      iStack_20c = FUN_10855a60(uVar14);
      if ((iStack_20c != 0) &&
         (iStack_228 = FUN_109ed840(*(undefined4 *)(iStack_20c + 0x1b8)), iStack_228 != 0)) {
        uVar14 = FUN_11673530();
        iStack_210 = FUN_117e6040(uVar14);
        if (iStack_210 != 0) {
          uVar14 = CPlayer__GetHuntRankOrCount();
          FUN_104d1550("roleLevel",uVar14);
          uStack_22c = 0;
          aiStack_220[0] = 0;
          iVar5 = (**(code **)(*piVar3 + 0x46c))();
          if (iVar5 != 0) {
            piVar3 = (int *)(**(code **)(*piVar3 + 0x46c))();
            uStack_22c = (**(code **)(*piVar3 + 0x18))();
            iVar5 = FUN_1025b060();
            aiStack_220[0] = FUN_1025b060();
            aiStack_220[0] = aiStack_220[0] + iVar5;
            piVar4 = piStack_224;
          }
          FUN_104d1550("roleHunterStarLv",uStack_22c);
          uVar14 = (**(code **)(*piVar4 + 0x2c))();
          FUN_104d1550("sourceRare",uVar14);
          uVar14 = (**(code **)(*piVar4 + 0x18))();
          FUN_104d1550("itemLevel",uVar14);
          uVar14 = FUN_11669840();
          FUN_104d1550("ItemRank",uVar14);
          iVar5 = iStack_20c;
          iStack_20c = iStack_20c + 0x14;
          iVar6 = FUN_100e5b40(auStack_28);
          FUN_104d1670("sourceItemName",*(undefined4 *)(iVar6 + 0x14));
          if ((puStack_18 != auStack_2c) && (puStack_18 != (undefined1 *)0x0)) {
            FUN_10c3d5d0(puStack_18);
          }
          FUN_104d15e0("bPointType",1);
          iStack_fc = 0;
          uStack_f8 = 0;
          uStack_22c = CONCAT31(uStack_22c._1_3_,((byte)local_1d0 & 0x8f) == 10);
          pcVar18 = "destArrayLength";
          cVar2 = (**(code **)(*piStack_1d4 + 0x10))
                            (local_1cc,"destArrayLength",&iStack_fc,uStack_22c);
          if (cVar2 != '\0') {
            uStack_12c = 0;
            uStack_128 = 0;
            cVar2 = (**(code **)(*piStack_1e4 + 0x10))
                              (uStack_1dc,"destEquipArray",&uStack_12c,(bStack_1e0 & 0x8f) == 10);
            if (cVar2 != '\0') {
              ppuStack_1bc = &PTR_FUN_11dd2bf4;
              uStack_1b8 = 0;
              uStack_1b4 = 0;
              uStack_1b0 = 0;
              FUN_10891d30();
              uStack_f0 = 0;
              uStack_f4 = FUN_11669730();
              uStack_f8 = FUN_11669730();
              uStack_e0 = (**(code **)(*piVar4 + 0x2c))();
              iStack_dc = *(int *)(unaff_ESI + 4);
              uStack_b0 = (**(code **)(*piVar4 + 0x18))();
              uStack_ac = *(undefined4 *)(iVar5 + 0x1b4);
              uStack_d8 = 0;
              auStack_1fc[0] = 0;
              auStack_1fc[1] = 2;
              piVar3 = (int *)0x0;
              do {
                piVar7 = (int *)FUN_113f9160(auStack_1fc[(int)piVar3]);
                if (piVar7 != (int *)0x0) {
                  uVar15 = 0;
                  iVar5 = (**(code **)(*piVar7 + 0x38))();
                  if (iVar5 != 0) {
                    do {
                      piVar8 = (int *)FUN_11460eb0(uVar15);
                      if (((piVar8 != (int *)0x0) && (cVar2 = FUN_116698c0(), cVar2 != '\0')) &&
                         (iVar5 = FUN_11669730(), iVar5 == iStack_fc)) {
                        iVar5 = (**(code **)(*piVar4 + 0x18))();
                        piVar4 = piVar7;
                        iVar6 = (**(code **)(*piVar8 + 0x18))();
                        piVar7 = piVar4;
                        if (iVar6 == iVar5) {
                          iStack_dc = iStack_dc + 1;
                        }
                      }
                      uVar15 = uVar15 + 1;
                      uVar9 = (**(code **)(*piVar3 + 0x38))();
                    } while (uVar15 < uVar9);
                  }
                }
                piVar3 = (int *)((int)piVar3 + 1);
              } while ((int)piVar3 < 2);
              uStack_b8 = piVar4[8] != 0;
              pcStack_d4 = *(char **)(unaff_ESI + 8);
              puVar12 = &DAT_11d9d32b;
              if ((undefined1 *)*unaff_EBX != (undefined1 *)0x0) {
                puVar12 = (undefined1 *)*unaff_EBX;
              }
              CPet__SetName(puVar12);
              uStack_e8 = 0;
              pcStack_d4 = pcVar18;
              FUN_108920d0(auStack_108);
              if (((uStack_120 & 0x8f) == 3) || (uVar15 = 0xdeadbeaf, (uStack_120 & 0x8f) == 4)) {
                uVar15 = uStack_11c;
              }
              local_1cc = 0;
              if (local_1c0 != ppuStack_1bc) {
                ppuVar13 = local_1c0 + 3;
                do {
                  uVar9 = local_1cc;
                  if (uVar15 <= local_1cc) break;
                  cVar2 = (**(code **)(*piStack_144 + 0x30))
                                    (auStack_13c[0],local_1cc,&stack0xfffffdcc);
                  if (cVar2 != '\0') {
                    FUN_104d1550(&DAT_11dbb0b4,ppuVar13[1]);
                    FUN_104d1550("equipID",*ppuVar13);
                    puVar12 = auStack_54;
                    iVar5 = FUN_100e5b40(puVar12);
                    FUN_104d1670("equipName",*(undefined4 *)(iVar5 + 0x14));
                    if ((puStack_44 != auStack_58) && (puStack_44 != (undefined1 *)0x0)) {
                      FUN_10c3d5d0(puStack_44);
                    }
                    FUN_104d1550("equipRare",ppuVar13[6]);
                    FUN_104d1550("itemLevel",ppuVar13[7]);
                    FUN_104d1550("playerUseLevelMin",ppuVar13[0x12]);
                    FUN_104d1550("playerUseLevelMax",ppuVar13[0x13]);
                    FUN_104d1550("equipCounts",ppuVar13[8]);
                    FUN_104d1550("upgradeMoney",ppuVar13[9]);
                    FUN_104d1550("currentMoney",ppuVar13[10]);
                    FUN_104d1550("enforceRequirement",ppuVar13[-2]);
                    FUN_104d1550("hunterstarRequirement",ppuVar13[-1]);
                    FUN_104d1550("rankDownLevel",ppuVar13[0xb]);
                    FUN_104d1550("enforceDownLevel",ppuVar13[0xc]);
                    FUN_104d1550("newRankLevel",ppuVar13[0xd]);
                    FUN_104d15e0("bBindState",*(undefined1 *)(ppuVar13 + 0x10));
                    FUN_104d1550("enforceLevel",ppuVar13[3]);
                    FUN_104d1550("breakLevel",ppuVar13[4]);
                    FUN_104d15e0("canBreak",*(undefined1 *)(ppuVar13 + 5));
                    FUN_104d1550("enforceRuleID",ppuVar13[0x11]);
                    FUN_104d1550("nCraftCreditID",ppuVar13[0x15]);
                    puVar17 = &uStack_180;
                    uStack_180 = 0;
                    uStack_17c = 0;
                    uStack_1b8 = uStack_1b8 & 0xffffff00;
                    iVar5 = 0;
                    cVar2 = (**(code **)(*ppuVar13 + 0x10))
                                      (0,"arrayMaterialData",puVar17,uStack_1b8);
                    if (cVar2 != '\0') {
                      FUN_10460ef0();
                      piVar3 = piVar3 + 3;
                      iVar6 = 0;
                      goto LAB_109ee7d0;
                    }
                    FUN_104d15e0("equipHasEnoughMaterial",0);
                    FUN_104d7c10();
                  }
                  local_1cc = uVar9 + 1;
                  ppuVar1 = ppuVar13 + 0x1f;
                  ppuVar13 = ppuVar13 + 0x22;
                } while (ppuVar1 != ppuStack_1bc);
              }
              FUN_10891e60();
              local_1c4 = &PTR_FUN_11dd2bf4;
              FUN_108923c0();
            }
            FUN_104d7c10();
          }
          if (((uint)puStack_198[1] >> 6 & 1) != 0) {
            (**(code **)(*(int *)*puStack_198 + 8))(puStack_198,puStack_198[2]);
            *puStack_198 = 0;
          }
          puStack_198[1] = 2;
          *(undefined1 *)(puStack_198 + 2) = 1;
          FUN_104d7c10();
        }
      }
    }
    if ((local_1cc >> 6 & 1) != 0) {
      (**(code **)(*local_1d0 + 8))(&local_1d0,local_1c8);
    }
  }
  FUN_11a89daa();
  return;
  while( true ) {
    piVar4 = &iStack_218;
    piVar7 = piVar3;
    piVar8 = (int *)FUN_107e00f0(auStack_13c);
    if ((undefined4 *)*piVar8 == &local_1c8) {
      puVar10 = (undefined4 *)FUN_104ef0a0(aiStack_220);
      *puVar10 = 1;
      iVar16 = iVar5;
    }
    else {
      piVar3 = (int *)FUN_104ef0a0(aiStack_220);
      iVar16 = *piVar3;
      piVar3 = piVar4;
      piVar4 = (int *)FUN_104ef0a0(&piStack_224);
      *piVar4 = iVar16 + 1;
      iVar16 = iVar5;
    }
    FUN_10254130(iVar11);
    FUN_113fa380(iVar11);
    iVar5 = iVar16;
    if (piVar7 != (int *)0x0) {
      uStack_22c = 0;
      cVar2 = (**(code **)(*piStack_190 + 0x30))(uStack_188,iVar6,&stack0xfffffdd0);
      iVar5 = iVar16;
      if (cVar2 != '\0') {
        FUN_104d1550("itemID",iVar11);
        iVar5 = iVar16;
        iVar11 = FUN_100e5b40(auStack_8c);
        FUN_104d1670("itemName",*(undefined4 *)(iVar11 + 0x14));
        if ((puStack_7c != auStack_90) && (puStack_7c != (undefined1 *)0x0)) {
          FUN_10c3d5d0(puStack_7c);
        }
        FUN_104d1550("requireItemCounts",puVar12);
        FUN_104d1550("currentItemCounts",puVar17);
        FUN_104d1550(&DAT_11dcc18c,*(undefined4 *)(iVar16 + 0x4c));
        FUN_104d15e0("bPointType",0);
      }
      FUN_104d7c10();
    }
    piVar3 = piVar3 + 2;
    iVar6 = iVar6 + 1;
    if (5 < iVar6) break;
LAB_109ee7d0:
    iVar11 = *piVar3;
    iStack_214 = piVar3[1];
    iStack_218 = iVar11;
    if (iVar11 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10c3d580(0x18);
}



/* ===== FUN_109f0f10 @ 109f0f10  size=751 ===== */
// strings:
//   "C2AS_GetAllGuideChapters"
//   "C2AS_GetGuideBookDataByID"
//   "C2AS_GetReward"
//   "C2AS_SetAlreadyOpenGuide"
//   "C2AS_IsNeedAutoOpenGuideBook"
//   "C2AS_IsShowGuideBook"
//   "C2AS_SetChooseWeaponType"
//   "C2AS_SetChapterNotNew"
//   "C2AS_GetWeaponDesByType"
//   "C2AS_GetGuideBookCanReward"

/* [RE-AUTO c0]
   strings:
     ""C2AS_GetAllGuideChapters""
     ""C2AS_GetGuideBookDataByID""
     ""C2AS_GetReward""
     ""C2AS_SetAlreadyOpenGuide""
     ""C2AS_IsNeedAutoOpenGuideBook""
     ""C2AS_IsShowGuideBook""
     ""C2AS_SetChooseWeaponType""
     ""C2AS_SetChapterNotNew""
     ""C2AS_GetWeaponDesByType""
     ""C2AS_GetGuideBookCanReward"" */

void FUN_109f0f10(void)

{
  code *pcStack_c4;
  char *pcStack_c0;
  code **ppcStack_bc;
  code ***pppcStack_b8;
  code *pcStack_b4;
  code **ppcStack_b0;
  code ***pppcStack_ac;
  code ***pppcStack_a8;
  code **ppcStack_a4;
  code **ppcStack_a0;
  code ***pppcStack_9c;
  code ***pppcStack_98;
  code ***pppcStack_94;
  code ***pppcStack_90;
  code ***pppcStack_8c;
  code ***pppcStack_88;
  code ***pppcStack_84;
  code ***pppcStack_80;
  code ***pppcStack_7c;
  undefined4 ***pppuStack_78;
  code ***pppcStack_74;
  code ***pppcStack_70;
  code ***pppcStack_6c;
  code ***pppcStack_68;
  code ***pppcStack_64;
  code ***pppcStack_60;
  undefined4 ***pppuStack_5c;
  code ***pppcStack_58;
  code ***pppcStack_54;
  code ***pppcStack_50;
  code ***pppcStack_4c;
  code ***pppcStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
  code ***pppcStack_3c;
  char **ppcStack_38;
  code ***pppcStack_34;
  code ***pppcStack_30;
  char *pcStack_2c;
  code ***local_24;
  code ***pppcStack_20;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  
  local_14 = (undefined1 *)&local_24;
  local_10 = (undefined1 *)&local_24;
  local_c = DAT_11e11390 ^ (uint)&local_24;
  pcStack_2c = "";
  pppcStack_30 = (code ***)0x11de543c;
  pppcStack_34 = (code ***)0x109f0f44;
  FUN_100b62c0();
  pppcStack_34 = (code ***)FUN_109f1210;
  ppcStack_38 = &pcStack_2c;
  pppcStack_3c = (code ***)0x109f0f55;
  FUN_109f2290();
  if (((code ****)pppcStack_20 != &pppcStack_34) && ((code ****)pppcStack_20 != (code ****)0x0)) {
    pppcStack_3c = pppcStack_20;
    pppuStack_40 = (undefined4 ***)0x109f0f6b;
    FUN_10c3d5d0();
  }
  local_24 = (code ***)&pppcStack_34;
  pppcStack_3c = (code ***)0x11de5471;
  pppuStack_40 = (undefined4 ***)0x11de5458;
  pppuStack_44 = (undefined4 ***)0x109f0f8b;
  pppcStack_20 = local_24;
  FUN_100b62c0();
  pppuStack_44 = (undefined4 ***)FUN_109f14a0;
  pppcStack_48 = (code ***)&pppcStack_3c;
  pppcStack_4c = (code ***)0x109f0f9c;
  FUN_109f2290();
  if (((undefined4 ****)pppcStack_30 != &pppuStack_44) &&
     ((undefined4 ****)pppcStack_30 != (undefined4 ****)0x0)) {
    pppcStack_4c = pppcStack_30;
    pppcStack_50 = (code ***)0x109f0fb2;
    FUN_10c3d5d0();
  }
  pppcStack_34 = (code ***)&pppuStack_44;
  pppcStack_4c = (code ***)0x11de541e;
  pppcStack_50 = (code ***)0x11de5410;
  pppcStack_54 = (code ***)0x109f0fd2;
  pppcStack_30 = pppcStack_34;
  FUN_100b62c0();
  pppcStack_54 = (code ***)FUN_109f1bb0;
  pppcStack_58 = (code ***)&pppcStack_4c;
  pppuStack_5c = (undefined4 ***)0x109f0fe3;
  FUN_109f2290();
  if (((code ****)pppuStack_40 != &pppcStack_54) && ((code ****)pppuStack_40 != (code ****)0x0)) {
    pppuStack_5c = pppuStack_40;
    pppcStack_60 = (code ***)0x109f0ff9;
    FUN_10c3d5d0();
  }
  pppuStack_44 = &pppcStack_54;
  pppuStack_5c = (undefined4 ***)0x11de5438;
  pppcStack_60 = (code ***)0x11de5420;
  pppcStack_64 = (code ***)0x109f1019;
  pppuStack_40 = pppuStack_44;
  FUN_100b62c0();
  pppcStack_64 = (code ***)&LAB_109f1c40;
  pppcStack_68 = (code ***)&pppuStack_5c;
  pppcStack_6c = (code ***)0x109f102a;
  FUN_109f2290();
  if (((code ****)pppcStack_50 != &pppcStack_64) && ((code ****)pppcStack_50 != (code ****)0x0)) {
    pppcStack_6c = pppcStack_50;
    pppcStack_70 = (code ***)0x109f1040;
    FUN_10c3d5d0();
  }
  pppcStack_54 = (code ***)&pppcStack_64;
  pppcStack_6c = (code ***)0x11de53f4;
  pppcStack_70 = (code ***)0x11de53d8;
  pppcStack_74 = (code ***)0x109f1060;
  pppcStack_50 = pppcStack_54;
  FUN_100b62c0();
  pppcStack_74 = (code ***)FUN_109f1c80;
  pppuStack_78 = &pppcStack_6c;
  pppcStack_7c = (code ***)0x109f1071;
  FUN_109f2290();
  if (((code ****)pppcStack_60 != &pppcStack_74) && ((code ****)pppcStack_60 != (code ****)0x0)) {
    pppcStack_7c = pppcStack_60;
    pppcStack_80 = (code ***)0x109f1087;
    FUN_10c3d5d0();
  }
  pppcStack_64 = (code ***)&pppcStack_74;
  pppcStack_7c = (code ***)0x11de540c;
  pppcStack_80 = (code ***)0x11de53f8;
  pppcStack_84 = (code ***)0x109f10a7;
  pppcStack_60 = pppcStack_64;
  FUN_100b62c0();
  pppcStack_84 = (code ***)FUN_109f1d20;
  pppcStack_88 = (code ***)&pppcStack_7c;
  pppcStack_8c = (code ***)0x109f10b8;
  FUN_109f2290();
  if (((code ****)pppcStack_70 != &pppcStack_84) && ((code ****)pppcStack_70 != (code ****)0x0)) {
    pppcStack_8c = pppcStack_70;
    pppcStack_90 = (code ***)0x109f10ce;
    FUN_10c3d5d0();
  }
  pppcStack_74 = (code ***)&pppcStack_84;
  pppcStack_8c = (code ***)0x11de53bc;
  pppcStack_90 = (code ***)0x11de53a4;
  pppcStack_94 = (code ***)0x109f10ee;
  pppcStack_70 = pppcStack_74;
  FUN_100b62c0();
  pppcStack_94 = (code ***)FUN_109f1dc0;
  pppcStack_98 = (code ***)&pppcStack_8c;
  pppcStack_9c = (code ***)0x109f10ff;
  FUN_109f2290();
  if (((code ****)pppcStack_80 != &pppcStack_94) && ((code ****)pppcStack_80 != (code ****)0x0)) {
    pppcStack_9c = pppcStack_80;
    ppcStack_a0 = (code **)0x109f1115;
    FUN_10c3d5d0();
  }
  pppcStack_84 = (code ***)&pppcStack_94;
  pppcStack_9c = (code ***)0x11de53d5;
  ppcStack_a0 = (code **)0x11de53c0;
  ppcStack_a4 = (code **)0x109f1135;
  pppcStack_80 = pppcStack_84;
  FUN_100b62c0();
  ppcStack_a4 = (code **)FUN_109f1e30;
  pppcStack_a8 = (code ***)&pppcStack_9c;
  pppcStack_ac = (code ***)0x109f1146;
  FUN_109f2290();
  if ((pppcStack_90 != &ppcStack_a4) && (pppcStack_90 != (code ***)0x0)) {
    pppcStack_ac = pppcStack_90;
    ppcStack_b0 = (code **)0x109f115c;
    FUN_10c3d5d0();
  }
  pppcStack_94 = &ppcStack_a4;
  pppcStack_ac = (code ***)0x11de5387;
  ppcStack_b0 = (code **)0x11de5370;
  pcStack_b4 = (code *)0x109f117c;
  pppcStack_90 = pppcStack_94;
  FUN_100b62c0();
  pcStack_b4 = FUN_109f1ea0;
  pppcStack_b8 = (code ***)&pppcStack_ac;
  ppcStack_bc = (code **)0x109f118d;
  FUN_109f2290();
  if ((ppcStack_a0 != &pcStack_b4) && (ppcStack_a0 != (code **)0x0)) {
    ppcStack_bc = ppcStack_a0;
    pcStack_c0 = (char *)0x109f11a3;
    FUN_10c3d5d0();
  }
  ppcStack_a4 = &pcStack_b4;
  ppcStack_bc = (code **)0x11de53a2;
  pcStack_c0 = "C2AS_GetGuideBookCanReward";
  pcStack_c4 = (code *)0x109f11c3;
  ppcStack_a0 = ppcStack_a4;
  FUN_100b62c0();
  pcStack_c4 = FUN_109f2120;
  FUN_109f2290(&ppcStack_bc);
  if ((ppcStack_b0 != &pcStack_c4) && (ppcStack_b0 != (code **)0x0)) {
    FUN_10c3d5d0(ppcStack_b0);
  }
  FUN_11a89daa();
  return;
}



