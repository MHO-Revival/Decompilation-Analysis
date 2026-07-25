// ScriptBind::RegisterLootAndEventEnums @ 10d1d7f0  (5746 bytes)
// CAnimSequencePlay param indices referenced: [0, 4, 7, 12, 13, 15, 16, 17, 18, 19, 20, 22, 23, 24, 25, 26, 27, 28]


/* [RE-R1]
   strings:
     ""MH_INVALID_ID""
     ""eResourceQuality_Default""
     ""eResourceQuality_Normal""
     ""eResourceQuality_Rich""
     ""eLootType_Mine""
     ""eLootType_Herb""
     ""eLootType_Insect""
     ""eLootType_Fish""
     ""eLootType_Mushroom""
     ""eLootType_Honey"" */

void __fastcall ScriptBind__RegisterLootAndEventEnums(int param_1)

{
  int local_14;
  int *local_10;
  
  local_14 = 4;
  local_10 = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("MH_INVALID_ID",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eResourceQuality_Default",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_3f800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eResourceQuality_Normal",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eResourceQuality_Rich",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_3f800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Mine",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Herb",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Insect",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Fish",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40a00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Mushroom",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40c00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Honey",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40e00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Stone",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Shit",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41100000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Remain",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41200000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Body",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41300000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_BrokenPart",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Bone",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Egg",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41880000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Web",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41900000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eLootType_Other",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_42d00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("E_EVTTYPE_BG_ENTITY_ENTER",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_42d20000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("E_EVTTYPE_BG_ENTITY_LEAVE",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_447e4000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("E_EVTTYPE_PLAYER_GUIDE_UPDATE",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_44a2e000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("E_EVTTYPE_MONSTER_DEAD",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_None",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_3f800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Meat",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Herb",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Fruit",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Mushroom",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40a00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Mine",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40c00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Fish",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40e00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Insect",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Flower",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41100000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Honey",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41200000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Shell",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41300000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Sleep",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Water",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41500000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Escape",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41600000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Bone",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41700000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Stool",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Enter",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41880000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Exit",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41900000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Tail",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_41980000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eInterestPointType_Other",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_3f800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_EnterInstance",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40000000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_GMCommand",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40400000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_LevelLoading",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40800000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_LevelLoaded",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40a00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_SpawnLocalPlayer",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40c00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_LeaveInstanceReq",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  local_14 = 4;
  local_10 = (int *)&DAT_40e00000;
  (**(code **)(**(int **)(param_1 + 0x48) + 0x70))("eMHGameEventID_PlayerDialogueRsp",&local_14);
  if (local_14 == 6) {
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0xc))();
    }
  }
  else if ((local_14 == 7) && (local_10 != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_1202e818 + 0x30) + 0x60))(local_10);
  }
  FUN_10d1cc20("eMHGameEventID_ShowSystemConfig",8);
  FUN_10d1cc20("eMHGameEventID_AddCraft",9);
  FUN_10d1cc20("eMHGameEventID_BeginCraft",10);
  FUN_10d1cc20("eMHGameEventID_BeginLoot",0xb);
  FUN_10d1cc20("eMHGameEventID_Resetconnected",0xc);
  FUN_10d1cc20("eMHGameEventID_AutoLaunch",0xd);
  FUN_10d1cc20("eMHGameEventID_RoleListResponse",0xe);
  FUN_10d1cc20("eMHGameEventID_SelectRoleResponse",0xf);
  FUN_10d1cc20("eMHGameEventID_GotoMap",0x10);
  FUN_10d1cc20("eMHGameEventID_GotoMapResponse",0x11);
  FUN_10d1cc20("eMHGameEventID_MoveToDest",0x12);
  FUN_10d1cc20("eMHGameEventID_ChangeOrient",0x13);
  FUN_10d1cc20("eMHGameEventID_MainInstanceEnterAgree",0x14);
  FUN_10d1cc20("eMHGameEventID_MainInstanceSynOpt",0x15);
  FUN_10d1cc20("eMHGameEventID_MainInstanceEnter",0x16);
  FUN_10d1cc20("eMHGameEventID_FadingInStartNotify",0x17);
  FUN_10d1cc20("eMHGameEventID_InstanceClearingStart",0x18);
  FUN_10d1cc20("eMHGameEventID_InstanceClearingFinish",0x19);
  FUN_10d1cc20("eMHGameEventID_WebPageDownloadNotify",0x1a);
  FUN_10d1cc20("eMHGameEventID_KeyMapInputNotify",0x1b);
  FUN_10d1cc20("eMHGameEventID_NewCreateRoleRsp",0x1c);
  FUN_10d1cc20("eMHGameEventID_NewRoleListRsp",0x1d);
  FUN_10d1cc20("eMHGameEventID_NewDeleteRoleRsp",0x1e);
  FUN_10d1cc20("eMHGameEventID_NewSelecteRoleRsp",0x1f);
  FUN_10d1cc20("eMHGameEventID_FangchengmiTimeNotify",0x20);
  FUN_10d1cc20("eMHGameEventID_ChangeBullet",0x21);
  FUN_10d1cc20("eMHGameEventID_GameStageChanged",0x22);
  FUN_10d1cc20("eMHGameEventID_ChangeCharacterAvatar",0x23);
  FUN_10d1cc20("eMHGameEventID_SelectCharacter",0x24);
  FUN_10d1cc20("eMHGameEventID_DeleteRole",0x25);
  FUN_10d1cc20("eMHGameEventID_CreateRole",0x26);
  FUN_10d1cc20("eMHGameEventID_ResponeLineInfoRefresh",0x27);
  FUN_10d1cc20("eMHGameEventID_RoleShow",0x28);
  FUN_10d1cc20("eMHGameEventID_GuideStepStart",0x29);
  FUN_10d1cc20("eMHGameEventID_GuideStepStop",0x2a);
  FUN_10d1cc20("eMHGameEventID_UIGuideStepComplete",0x2b);
  FUN_10d1cc20("eMHGameEventID_ShowOrHideDialogIcon",0x2c);
  FUN_10d1cc20("eMHGameEventID_SplashMovieEsc",0x2d);
  FUN_10d1cc20("eMHGameEventID_RequestSelectLine",0x2e);
  FUN_10d1cc20("eMHGameEventID_RequestEntrustList",0x2f);
  FUN_10d1cc20("eMHGameEventID_AcceptEntrustTask",0x30);
  FUN_10d1cc20("eMHGameEventID_GiveUpEntrustTask",0x31);
  FUN_10d1cc20("eMHGameEventID_EntrustSelHuntBox",0x32);
  FUN_10d1cc20("eMHGameEventID_RequestAllEntrustList",0x33);
  FUN_10d1cc20("eMHGameEventID_MinimapRegionState",0x34);
  FUN_10d1cc20("eMHGameEventID_MinimapLinkState",0x35);
  FUN_10d1cc20("eMHGameEventID_MinimapPointState",0x36);
  FUN_10d1cc20("eMHGameEventID_RequestPaidBox",0x37);
  FUN_10d1cc20("eMHGameEventID_TutorialStart",0x38);
  FUN_10d1cc20("eMHGameEventID_TutorialActionExecuted",0x39);
  FUN_10d1cc20("eMHGameEventID_UIWidgetShow",0x3a);
  FUN_10d1cc20("eMHGameEventID_UIWidgetHide",0x3b);
  FUN_10d1cc20("eMHGameEventID_AirShipState",0x3c);
  FUN_10d1cc20("eMHGameEventID_PVPSelHuntBox",0x3d);
  FUN_10d1cc20("eMHGameEventID_PetShopAvatarView",0x3e);
  FUN_10d1cc20("eMHGameEventID_TrackViewEvent",0x3f);
  FUN_10d1cc20("eMHGameEventID_ChangeCharacterAvatarWithGreatFace",0x40);
  FUN_10d1cc20("eMHGameEventID_PvpOpenReadyPlayerInfoUI",0x41);
  FUN_10d1cc20("eMHGameEventID_TempPvpLineupReq",0x42);
  FUN_10d1cc20("eMHGameEventID_TempPvpQuitLineReq",0x43);
  FUN_10d1cc20("eMHGameEventID_WeaponTalentSkillActivated",0x44);
  FUN_10d1cc20("eMHGameEventID_WeaponTalentSkillUnactivated",0x45);
  FUN_10d1cc20("eMHGameEventID_WeaponTalentSkillUpgraded",0x46);
  FUN_10d1cc20("eMHGameEventID_WeaponTalentSkillSlotUnlock",0x47);
  FUN_10d1cc20("eMHGameEventID_FarmAdvGatherCutSceneEnd",0x48);
  FUN_10d1cc20("eMHGameEventID_OpenWeaponTutorialVideo",0x49);
  FUN_10d1cc20("eMHGameEventID_CloseWeaponTutorialVideo",0x4a);
  FUN_10d1cc20("eMHGameEventID_OpenWeaponTutorialClear",0x4b);
  FUN_10d1cc20("eMHGameEventID_CloseWeaponTutorialClear",0x4c);
  FUN_10d1cc20("eMHGameEventID_OpenCommonFunctionalList",0x4d);
  FUN_10d1cc20("eMHGameEventID_CloseCommonFunctionalList",0x4e);
  FUN_10d1cc20("eMHGameEventID_StartCommonFunctionByID",0x4f);
  FUN_10d1cc20("eMHGameEventID_NotifyFGTutorialVideoClosed",0x50);
  FUN_10d1cc20("eMHGameEventID_RequestOpenEquipShow",0x51);
  FUN_10d1cc20("eMHGameEventID_ShowEquipShowItemByEvent",0x52);
  FUN_10d1cc20("eMHGameEventID_FGNotifyUIShow_HideMouse",0x53);
  FUN_10d1cc20("eMHGameEventID_NotifyFGWidgetUnloaded",0x54);
  FUN_10d1cc20("eMHGameEventID_ActivityRequestSimpleData",0x55);
  FUN_10d1cc20("eMHGameEventID_ActivityRequestDetailInfo",0x56);
  FUN_10d1cc20("eMHGameEventID_MarqueenAddressUpdate",0x57);
  FUN_10d1cc20("eMHGameEventID_ActivityRequestUniqueID",0x58);
  FUN_10d1cc20("eMHGameEventID_OnResponseActivityResponseSimpleData",0x59);
  FUN_10d1cc20("eMHGameEventID_OnResponseActivityResponseDetailInfo",0x5a);
  FUN_10d1cc20("eMHGameEventID_OnResponseActivityResponseAcceptTask",0x5b);
  FUN_10d1cc20("eMHGameEventID_OnResponseActivityResponsePickupItem",0x5c);
  FUN_10d1cc20("eMHGameEventID_OnRoundSwfDownloadFinished",0x5d);
  FUN_10d1cc20("eMHGameEventID_OnChangeTownInstance",0x5e);
  FUN_10d1cc20("eMHGameEventID_OperationActivitySimpleDataReady",0x5f);
  FUN_10d1cc20("eMHGameEventID_OperationActivityDataExecRsp",0x60);
  FUN_10d1cc20("eMHGameEventID_OpenChargeInternalUrl",0x61);
  FUN_10d1cc20("eMHGameEventID_S2CUpdateOperationActData",0x62);
  FUN_10d1cc20("eMHGameEventID_S2CUpdateOperationItemCountsRefresh",99);
  FUN_10d1cc20("eMHGameEventID_S2CUpdateOperationItemCountsRefreshData",100);
  FUN_10d1cc20("eMHGameEventID_WeaponUnlockViewEnableSkillVideo",0x65);
  FUN_10d1cc20("eMHGameEventID_WeaponUnlockPrework",0x66);
  FUN_10d1cc20("eMHGameEventID_OperationActivityHasNewData",0x67);
  FUN_10d1cc20("eMHGameEventID_ExitWindowDelay",0x68);
  FUN_10d1cc20("eMHGameEventID_InstanceSelectQuickMatch",0x69);
  FUN_10d1cc20("eMHGameEventID_InstanceSelectHubEnterLevel",0x6a);
  FUN_10d1cc20("eMHGameEventID_InstanceCaptainSelectLevel",0x6b);
  FUN_10d1cc20("eMHGameEventID_InstanceSelect_UnlockEliteLevelID",0x6c);
  FUN_10d1cc20("eMHGameEventID_LevelUnlockNotify",0x6d);
  FUN_10d1cc20("eMHGameEventID_SelectTutorialWeapon",0x6e);
  FUN_10d1cc20("eMHGameEventID_WeaponTutorialStepUpdated",0x6f);
  FUN_10d1cc20("eMHGameEventID_WeaponTutorialClearAllShortcut",0x70);
  FUN_10d1cc20("eMHGameEventID_UpdateShortcutItem",0x71);
  FUN_10d1cc20("eMHGameEventID_WeaponTutorialUpdateUIWeaponType",0x72);
  FUN_10d1cc20("eMHGameEventID_SetTeachUIClickMode",0x73);
  FUN_10d1cc20("eMHGameEventID_TeachUIClickedEvent",0x74);
  FUN_10d1cc20("eMHGameEventID_LobbyChanged",0x75);
  FUN_10d1cc20("eMHGameEventID_VipLevelNotify",0x76);
  FUN_10d1cc20("eMHGameEventID_UIWidgetMinimize",0x77);
  FUN_10d1cc20("eMHGameEventID_UIWidgetMaximize",0x78);
  FUN_10d1cc20("eMHGameEventID_BeginChangeFace",0x79);
  FUN_10d1cc20("eMHGameEventID_EndChangeFace",0x7a);
  FUN_10d1cc20("eMHGameEventID_ChangeFaceResponse",0x7b);
  FUN_10d1cc20("eMHGameEventID_PlayerBeautyAcountInfoNotify",0x7c);
  FUN_10d1cc20("eMHGameEventID_MvMPetMonsterDeadNotify",0x7d);
  FUN_10d1cc20("eMHGameEventID_ReturnTownNotify",0x7e);
  FUN_10d1cc20("eMHGameEventID_ReturnChooseRoleNotify",0x7f);
  FUN_10d1cc20("eMHGameEventID_SaveNetworkSequenceNotify",0x80);
  FUN_10d1cc20("eMHGameEventID_OnLeaveCamp",0x81);
  FUN_10d1cc20("eMHGameEventID_OnLeaveJumpArea",0x82);
  FUN_10d1cc20("eMHGameEventID_OnLeaveFarm",0x83);
  FUN_10d1cc20("eMHGameEventID_OnEnterFarm",0x84);
  FUN_10d1cc20("eMHGameEventID_OnEnterCamp",0x85);
  return;
}

