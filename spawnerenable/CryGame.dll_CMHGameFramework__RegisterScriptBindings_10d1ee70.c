
/* [RE-R1]
   strings:
     ""PrintLog""
     ""SpawnMonster""
     ""params""
     ""SpawnCollectPoint""
     ""SpawnGameObjItem""
     ""spawner, ItemCEClass""
     ""SpawnCollectPointUnderEntity""
     ""spawner, resid""
     ""GetEntityLogicId""
     ""GetEntityIDByLogicId"" */

void __fastcall CMHGameFramework__RegisterScriptBindings(int param_1)

{
  char *local_3c;
  char *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  code *local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  code *local_c;
  undefined4 local_8;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d1f920;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "PrintLog";
    local_38 = "str";
    local_1c = FUN_10d3ee60;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d1fa00;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SpawnMonster";
    local_38 = "params";
    local_1c = FUN_10d3eeb0;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d1fe80;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SpawnCollectPoint";
    local_38 = "params";
    local_1c = FUN_10d3eeb0;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20680;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SpawnGameObjItem";
    local_38 = "spawner, ItemCEClass";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = ScriptBind__SpawnCollectPointUnderEntity;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SpawnCollectPointUnderEntity";
    local_38 = "spawner, resid";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d207f0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "GetEntityLogicId";
    local_38 = "this";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d208e0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "GetEntityIDByLogicId";
    local_38 = "LogicEntityId";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20bf0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "GetLocalPlayer";
    local_38 = "";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20c50;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "GetAllPlayers";
    local_38 = "";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20d40;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RegisterBattleGroundEvent";
    local_38 = "nEventID, entity, callback, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20d60;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RegisterLogicPlayerEvent";
    local_38 = "nPlayerNetID, nEventID, entity, callback, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20d80;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RegisterLogicMonsterEvent";
    local_38 = "nMonsterNetID, nEventID, entity, callback, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20da0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "AddGameEventListener";
    local_38 = "eventID, entity, func, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d22090;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RemoveGameEventListener";
    local_38 = "eventID, entity, func, params";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d22230;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "DispatchGameEvent";
    local_38 = "eventID, eventParams";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d222f0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "UIShowFallPrompt";
    local_38 = "text";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d223d0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "EnableSpawner";
    local_38 = "spawner, enable";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = ScriptBind__Spawner_DoSpawn;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "Spawner_DoSpawn";
    local_38 = "spawner, param";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d226b0;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "Spawner_Reset";
    local_38 = "spawner";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20940;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SetGameObjProperty";
    local_38 = "entityId, key, value";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20a80;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "SetMHScnObjProperty";
    local_38 = "entityId, key, value";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    local_34 = param_1 + 4;
    local_18 = &local_10;
    local_c = FUN_10d20b80;
    local_20 = *(undefined4 *)(param_1 + 0x4c);
    local_8 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3c = "RemoveLogicEntity";
    local_38 = "LogicId";
    local_1c = FUN_10d3ee40;
    local_14 = 0xc;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x44) + 100))(&local_3c);
  }
  return;
}

