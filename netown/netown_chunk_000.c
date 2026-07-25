/* ===== FUN_108f3720 @ 108f3720  size=104 ===== */
// strings:
//   "CCET_DelegateAuthority: Name %s\r\n"

/* [RE-AUTO c0]
   strings:
     ""CCET_DelegateAuthority: Name %s\r\n"" */

undefined4 __thiscall FUN_108f3720(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_108eea20("CCET_DelegateAuthority: Name %s\r\n",uVar1);
  iVar2 = (**(code **)(*param_1 + 0x18))(param_2);
  if (iVar2 != 0) {
    iVar3 = (**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(iVar2);
    if (iVar3 != 0) {
      iVar3 = FUN_1065b930();
      (**(code **)(**(int **)(iVar3 + 0x3c) + 0x58))(iVar2,*(undefined4 *)(param_2 + 4));
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_108f8560 @ 108f8560  size=306 ===== */
// strings:
//   "g_localPacketRate"
//   "cl_packetRate"
//   "cl_bandwidth"
//   "g_localActorId"
//   "g_localActor"
//   "g_localChannelId"

/* [RE-AUTO c0]
   strings:
     ""g_localPacketRate""
     ""cl_packetRate""
     ""cl_bandwidth""
     ""g_localActorId""
     ""g_localActor""
     ""g_localChannelId"" */

undefined4 * __thiscall
FUN_108f8560(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_108f8330();
  puVar1 = param_1 + 7;
  param_1[5] = param_4;
  *param_1 = &PTR_FUN_1133b324;
  *(undefined1 *)(param_1 + 6) = 0;
  *puVar1 = 0;
  *(undefined1 *)puVar1 = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[9] = puVar1;
  param_1[10] = puVar1;
  *(undefined1 *)(param_1 + 0xc) = param_4._3_1_;
  (**(code **)(*param_2 + 0xc))(*(undefined4 *)(param_3 + 0x3c),1);
  FUN_108f83e0(param_2,param_3);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (*(char *)(DAT_113f3a18 + 0x16d) == '\0') {
    pcVar2 = "g_localPacketRate";
  }
  else {
    pcVar2 = "cl_packetRate";
  }
  local_20 = (**(code **)(**(int **)(DAT_113f3a18 + 0x2c) + 0x54))(pcVar2);
  local_2c = (**(code **)(**(int **)(DAT_113f3a18 + 0x2c) + 0x54))("cl_bandwidth");
  (**(code **)(*param_2 + 0x1c))(&local_2c);
  (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x78))("g_localActorId");
  (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x78))("g_localActor");
  (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x78))("g_localChannelId");
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  FUN_1065c290(&local_10);
  return param_1;
}



/* ===== FUN_108f86a0 @ 108f86a0  size=360 ===== */
// strings:
//   "g_localActorId"
//   "g_localActor"
//   "g_localChannelId"

/* [RE-AUTO c0]
   strings:
     ""g_localActorId""
     ""g_localActor""
     ""g_localChannelId"" */

void __fastcall FUN_108f86a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_18 = 1;
  *param_1 = &PTR_FUN_1133b324;
  local_14 = 0;
  local_10 = 0;
  local_c = param_1;
  FUN_1065c290(&local_18);
  FUN_108faad0();
  (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x78))("g_localActorId");
  (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x78))("g_localActor");
  (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x78))("g_localChannelId");
  cVar2 = FUN_106607d0();
  if (cVar2 == '\0') {
    puVar6 = (undefined4 *)param_1[9];
    puVar7 = param_1 + 7;
    local_8 = puVar7;
    if (puVar6 != puVar7) {
      do {
        piVar3 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x2c) + 0x54))(puVar6[4]);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x10))();
          uVar4 = (**(code **)(*piVar3 + 0x28))();
          (**(code **)(*piVar3 + 0x2c))(uVar4 | 0x80);
          (**(code **)(*piVar3 + 0x20))(puVar6[5]);
          (**(code **)(*piVar3 + 0x2c))(uVar4 & 0xffffff7f);
          puVar7 = local_8;
        }
        puVar5 = (undefined4 *)puVar6[3];
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)puVar6[1];
          if (puVar6 == (undefined4 *)puVar5[3]) {
            do {
              puVar6 = puVar5;
              puVar5 = (undefined4 *)puVar6[1];
            } while (puVar6 == (undefined4 *)puVar5[3]);
          }
          if ((undefined4 *)puVar6[3] != puVar5) {
            puVar6 = puVar5;
          }
        }
        else {
          for (puVar1 = (undefined4 *)puVar5[2]; puVar6 = puVar5, puVar1 != (undefined4 *)0x0;
              puVar1 = (undefined4 *)puVar1[2]) {
            puVar5 = puVar1;
          }
        }
        param_1 = local_c;
      } while (puVar6 != puVar7);
    }
  }
  if (param_1[0xb] != 0) {
    FUN_104e14c0(param_1[8]);
    param_1[9] = param_1 + 7;
    param_1[8] = 0;
    param_1[10] = param_1 + 7;
    param_1[0xb] = 0;
  }
  FUN_108f83a0();
  return;
}



/* ===== FUN_108f8f70 @ 108f8f70  size=382 ===== */
// strings:
//   "g_localActorId"
//   "g_localActor"
//   "g_localChannelId"

/* [RE-AUTO c0]
   strings:
     ""g_localActorId""
     ""g_localActor""
     ""g_localChannelId"" */

void __thiscall FUN_108f8f70(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int local_18;
  int *local_14;
  int local_8;
  
  piVar1 = param_2;
  local_8 = param_1;
  FUN_108f8400(param_2);
  FUN_1065b930(piVar1);
  FUN_108fefb0();
  piVar2 = *(int **)(DAT_113f3a18 + 0x30);
  if (piVar1 == (int *)0x0) {
    (**(code **)(*piVar2 + 0x78))("g_localActorId");
    (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x78))("g_localActor");
    (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x78))("g_localChannelId");
  }
  else {
    local_14 = *(int **)(param_1 + 0x10);
    local_18 = 3;
    (**(code **)(*piVar2 + 0x70))("g_localActorId",&local_18);
    if (local_18 == 6) {
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 0xc))();
      }
    }
    else if ((local_18 == 7) && (local_14 != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_113f3a18 + 0x30) + 0x60))(local_14);
    }
    param_2 = (int *)(**(code **)(**(int **)(DAT_113f3a18 + 0x50) + 0x2c))(piVar1);
    if (param_2 == (int *)0x0) {
      (**(code **)(*piVar2 + 0x78))("g_localActor");
      (**(code **)(*piVar2 + 0x78))("g_localChannelId");
      FUN_108f90f0();
    }
    else {
      piVar2 = (int *)(**(code **)(*(int *)CCryAction::m_pThis + 0x144))(piVar1);
      piVar3 = (int *)(**(code **)(*param_2 + 0x150))(2);
      if (piVar3 == (int *)0x0) {
        param_2 = (int *)0x0;
      }
      else {
        param_2 = (int *)(**(code **)(*piVar3 + 0x38))();
      }
      FUN_10679940("g_localActor",&param_2);
      if (piVar2 == (int *)0x0) {
        param_2 = (int *)0x0;
      }
      else {
        uVar4 = (**(code **)(*piVar2 + 0x30))();
        param_2 = (int *)(uVar4 & 0xffff);
      }
      FUN_1087a350("g_localChannelId",&param_2);
      FUN_108f90f0();
    }
  }
  if (*(int **)(DAT_113f3a18 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_113f3a18 + 4) + 0x24))(piVar1);
  }
  return;
}



/* ===== FUN_108fa720 @ 108fa720  size=166 ===== */
// strings:
//   "classId"
//   "scale"
//   "rotation"
//   "bClientActor"
//   "nChannelId"
//   "flags"

/* [RE-AUTO c0]
   strings:
     ""classId""
     ""scale""
     ""rotation""
     ""bClientActor""
     ""nChannelId""
     ""flags"" */

void __thiscall FUN_108fa720(int param_1,int *param_2)

{
  FUN_10467420(&DAT_113bf1f0,param_1 + 4,0);
  (**(code **)(*param_2 + 0x48))("classId",param_1 + 8,0);
  (**(code **)(*param_2 + 0x68))(&DAT_112fc370,param_1 + 0xc,0);
  (**(code **)(*param_2 + 0x68))("scale",param_1 + 0x28,0);
  (**(code **)(*param_2 + 100))("rotation",param_1 + 0x18,0);
  (**(code **)(*param_2 + 0x74))("bClientActor",param_1 + 0x34,0);
  (**(code **)(*param_2 + 0x48))("nChannelId",param_1 + 0x36,0);
  (**(code **)(*param_2 + 0x44))("flags",param_1 + 0x38,0x75693332);
  return;
}



/* ===== FUN_10924a20 @ 10924a20  size=193 ===== */
// strings:
//   "Expose"
//   "DelegateAuthority"
//   "entity, channel"

/* [RE-AUTO c0]
   strings:
     ""Expose""
     ""DelegateAuthority""
     ""entity, channel"" */

void __fastcall FUN_10924a20(int param_1)

{
  char *local_40;
  char *local_3c;
  int local_38;
  code *local_34;
  int local_2c;
  code *local_28;
  undefined4 local_24;
  code *local_20;
  int *local_1c;
  undefined4 local_18;
  int local_c;
  code *local_8;
  
  local_34 = FUN_10924470;
  if (param_1 == 0) {
    local_34 = (code *)0x0;
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_3c = "";
    local_20 = (code *)0x0;
    local_1c = (int *)0x0;
    local_18 = 0;
    local_40 = "Expose";
    local_28 = FUN_10924dd0;
    local_2c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10924480;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "DelegateAuthority";
    local_3c = "entity, channel";
    local_20 = FUN_10924d50;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  return;
}



/* ===== FUN_10955110 @ 10955110  size=4486 ===== */
// strings:
//   "LoadXML"
//   "definitionFile, dataFile"
//   "SaveXML"
//   "definitionFile, dataFile, dataTable"
//   "IsServer"
//   "IsClient"
//   "IsGameStarted"
//   "IsRMIServer"
//   "IsGameObjectProbablyVisible"
//   "entityId"
//   "GetPlayerList"
//   "ActivateEffect"
//   "GetWaterInfo"
//   "GetServer"
//   "number"
//   "ConnectToServer"
//   "server"
//   "RefreshPings"
//   "GetServerTime"
//   "PauseGame"

/* [RE-AUTO c0]
   strings:
     ""LoadXML""
     ""definitionFile, dataFile""
     ""SaveXML""
     ""definitionFile, dataFile, dataTable""
     ""IsServer""
     ""IsClient""
     ""IsGameStarted""
     ""IsRMIServer""
     ""IsGameObjectProbablyVisible""
     ""entityId"" */

void __fastcall FUN_10955110(int param_1)

{
  char *local_40;
  char *local_3c;
  int local_38;
  code *local_34;
  undefined4 local_30;
  int local_2c;
  code *local_28;
  undefined4 local_24;
  code *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10952770;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "LoadXML";
    local_3c = "definitionFile, dataFile";
    local_20 = FUN_10958830;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109527b0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "SaveXML";
    local_3c = "definitionFile, dataFile, dataTable";
    local_20 = FUN_10958890;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10952840;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "IsServer";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109528b0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "IsClient";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10952920;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "IsGameStarted";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10952990;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "IsRMIServer";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10952b90;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "IsGameObjectProbablyVisible";
    local_3c = "entityId";
    local_20 = FUN_109589a0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10952a00;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "GetPlayerList";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10952bf0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "ActivateEffect";
    local_3c = "name";
    local_20 = FUN_109588b0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10952c40;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "GetWaterInfo";
    local_3c = "pos";
    local_20 = FUN_10958b90;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109533f0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "GetServer";
    local_3c = "number";
    local_20 = FUN_109587b0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953490;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "ConnectToServer";
    local_3c = "server";
    local_20 = FUN_109587f0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953460;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "RefreshPings";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109534c0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "GetServerTime";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953540;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "PauseGame";
    local_3c = "pause";
    local_20 = FUN_10958c30;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953590;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "IsImmersivenessEnabled";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953630;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "IsChannelSpecial";
    local_3c = "entityId/channelId";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953710;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "ForceGameObjectUpdate";
    local_3c = "entityId, force";
    local_20 = FUN_10958b10;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953740;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "CreateGameObjectForEntity";
    local_3c = "entityId";
    local_20 = FUN_109589a0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953770;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "BindGameObjectToNetwork";
    local_3c = "entityId";
    local_20 = FUN_109589a0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109537a0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "ActivateExtensionForGameObject";
    local_3c = "entityId, extension, activate";
    local_20 = FUN_10958af0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953800;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "SetNetworkParent";
    local_3c = "entityId, parentId";
    local_20 = FUN_10958910;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953830;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "IsChannelOnHold";
    local_3c = "channelId";
    local_20 = FUN_109587b0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109538c0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "BanPlayer";
    local_3c = "playerId, message";
    local_20 = FUN_10958a70;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953910;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "PersistantSphere";
    local_3c = "pos, radius, color, name, timeout";
    local_20 = FUN_10958c10;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953980;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "PersistantLine";
    local_3c = "start, end, color, name, timeout";
    local_20 = FUN_10958b70;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109539f0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "PersistantArrow";
    local_3c = "pos, radius, color, dir, name, timeout";
    local_20 = FUN_10958bf0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953a70;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "Persistant2DText";
    local_3c = "text, size, color, name, timeout";
    local_20 = FUN_109588f0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953ae0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "PersistantEntityTag";
    local_3c = "entityId, text";
    local_20 = FUN_10958a70;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953cc0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "ClearEntityTags";
    local_3c = "entityId";
    local_20 = FUN_109589a0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953cf0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "ClearStaticTag";
    local_3c = "entityId, staticId";
    local_20 = FUN_10958a70;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953d20;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "SendGameplayEvent";
    local_3c = "entityId, event, [desc], [value], [ID|ptr], [str]";
    local_20 = FUN_109589f0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953e60;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "CacheItemSound";
    local_3c = "itemName";
    local_20 = FUN_109588b0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953e90;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "CacheItemGeometry";
    local_3c = "itemName";
    local_20 = FUN_109588b0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953ec0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "DontSyncPhysics";
    local_3c = "entityId";
    local_20 = FUN_109589a0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953f00;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "EnableSignalTimer";
    local_3c = "entityId, text";
    local_20 = FUN_10958a70;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10953f80;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "DisableSignalTimer";
    local_3c = "entityId, text";
    local_20 = FUN_10958a70;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954000;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "SetSignalTimerRate";
    local_3c = "entityId, text, float, float";
    local_20 = FUN_10958ad0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954090;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "ResetSignalTimer";
    local_3c = "entityId, text";
    local_20 = FUN_10958a70;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954110;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "EnableRangeSignaling";
    local_3c = "entityId, bEnable";
    local_20 = FUN_10958b10;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954140;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "DestroyRangeSignaling";
    local_3c = "entityId";
    local_20 = FUN_109589a0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954170;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "ResetRangeSignaling";
    local_3c = "entityId";
    local_20 = FUN_109589a0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109541a0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "AddRangeSignal";
    local_3c = "entityId, float, float, text";
    local_20 = FUN_10958a50;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954240;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "AddTargetRangeSignal";
    local_3c = "entityId, targetId, float, float, text";
    local_20 = FUN_10958980;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109542e0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "AddAngleSignal";
    local_3c = "entityId, float, float, text";
    local_20 = FUN_10958a50;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_3c = "";
    local_30 = local_10;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_20 = (code *)0x0;
    local_1c = (int *)0x0;
    local_18 = 0;
    local_40 = "SetViewCamera";
    local_34 = FUN_109530c0;
    local_28 = FUN_10959650;
    local_2c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_3c = "";
    local_30 = local_10;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_20 = (code *)0x0;
    local_1c = (int *)0x0;
    local_18 = 0;
    local_40 = "ResetToNormalCamera";
    local_34 = FUN_109533c0;
    local_28 = FUN_10959650;
    local_2c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_3c = "";
    local_30 = local_10;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_20 = (code *)0x0;
    local_1c = (int *)0x0;
    local_18 = 0;
    local_40 = "RegisterWithAI";
    local_34 = FUN_10954380;
    local_28 = FUN_10959650;
    local_2c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_109548f0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "HasAI";
    local_3c = "entityId";
    local_20 = FUN_109589a0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954980;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "GetClassName";
    local_3c = "classId";
    local_20 = FUN_109587b0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954a20;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "GetSoundNameByID";
    local_3c = "SoundID";
    local_20 = FUN_109587b0;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_38 = param_1 + 4;
    local_1c = &local_c;
    local_8 = FUN_10954af0;
    local_24 = *(undefined4 *)(param_1 + 0x4c);
    local_34 = (code *)0x0;
    local_2c = 0;
    local_40 = "GetTimeOfDay";
    local_3c = "";
    local_20 = FUN_10958790;
    local_18 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_40);
  }
  return;
}



/* ===== FUN_1095b490 @ 1095b490  size=186 ===== */
// strings:
//   "CreateActor"
//   "channelId, actorParams"
//   "CreateLogicPlayer"

/* [RE-AUTO c0]
   strings:
     ""CreateActor""
     ""channelId, actorParams""
     ""CreateLogicPlayer"" */

void __fastcall FUN_1095b490(int param_1)

{
  char *local_38;
  char *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  code *local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1095ace0;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "CreateActor";
    local_34 = "channelId, actorParams";
    local_18 = FUN_1095b7c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_30 = param_1 + 4;
    local_14 = &local_c;
    local_8 = FUN_1095b160;
    local_1c = *(undefined4 *)(param_1 + 0x4c);
    local_2c = 0;
    local_24 = 0;
    local_38 = "CreateLogicPlayer";
    local_34 = "channelId, actorParams";
    local_18 = FUN_1095b7c0;
    local_10 = 8;
    local_c = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_38);
  }
  return;
}



