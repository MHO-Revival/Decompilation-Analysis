
/* [RE-AUTO c0]
   strings:
     ""right"" */

undefined4 __thiscall
FUN_10579750(int param_1,int *param_2,int *param_3,float *param_4,undefined4 *param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint *puVar4;
  float *pfVar5;
  int iVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [36];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  char local_11;
  float local_10;
  float local_c;
  float local_8;
  
  local_11 = '\0';
  *param_5 = 0;
  FUN_10a5d620(&DAT_113bef10);
  piVar1 = *(int **)(param_1 + 0x2c);
  if (((1 < (uint)(piVar1[1] - *piVar1 >> 2)) && (4 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU)))
     && (-1 < *(int *)(piVar1[3] + 4))) {
    FUN_103d8940(*(int *)(piVar1[3] + 4),&local_11);
    FUN_101c36a0();
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (((piVar1[1] - *piVar1 >> 2 != 0) && (0 < (int)(piVar1[4] - piVar1[3] & 0xfffffffcU))) &&
     (-1 < *(int *)piVar1[3])) {
    FUN_103d8940(*(int *)piVar1[3],local_48);
    FUN_103dc170();
  }
  iVar6 = *param_2;
  uVar3 = (**(code **)(*param_3 + 200))(&local_38);
  (**(code **)(iVar6 + 0x98))(&local_60,uVar3);
  if (local_11 == '\0') {
    pfVar5 = (float *)(**(code **)(*param_2 + 0xd4))(local_a8);
    local_2c = *pfVar5;
    local_28 = pfVar5[1];
    local_24 = pfVar5[2];
    local_44 = local_60;
    local_40 = local_5c;
    local_3c = local_58;
    pfVar5 = (float *)(**(code **)(*param_2 + 0x94))();
    local_8 = pfVar5[2];
    local_20 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    if (((DAT_112fca68 < (float)((uint)(*pfVar5 - local_44) & DAT_112fcb10)) ||
        (DAT_112fca68 < (float)((uint)(pfVar5[1] - local_40) & DAT_112fcb10))) ||
       (local_38 = local_20, local_34 = local_1c, local_30 = local_18,
       DAT_112fca68 < (float)((uint)(local_8 - local_3c) & DAT_112fcb10))) {
      local_10 = *pfVar5;
      local_c = pfVar5[1];
      fVar9 = local_28 * (local_44 - local_10);
      local_54 = (local_44 - local_10) * DAT_112fcb00;
      local_38 = 0.0;
      fVar8 = local_2c * (local_40 - local_c);
      local_34 = 0.0;
      local_50 = (local_40 - local_c) * DAT_112fcb00;
      local_30 = 1.0;
      fVar10 = local_50 * local_50 + local_54 * local_54 + DAT_112fca5c;
      auVar7 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      local_4c = auVar7._0_4_;
      local_4c = (DAT_112fcaac - local_4c * fVar10 * local_4c * DAT_113c12b8) * local_4c;
      local_54 = local_54 * local_4c;
      local_50 = local_50 * local_4c;
      local_4c = local_4c * DAT_113c1280;
      uVar3 = FUN_10552f00(local_90,&local_54,&local_38,0);
      FUN_10552be0(uVar3);
      fVar10 = local_30 * DAT_1130193c;
      FUN_104878c0(&local_2c);
      FUN_10552be0(local_90);
      local_30 = (float)((uint)(local_30 * DAT_1130193c - fVar10) & DAT_112fcb10);
      if (DAT_11301d98 < local_30) {
        local_30 = DAT_11301ccc - local_30;
      }
      if (fVar9 - fVar8 <= DAT_113c1280) {
        iVar6 = -1;
      }
      else {
        iVar6 = 1;
      }
      local_30 = (float)iVar6 * local_30;
      local_38 = local_20;
      local_34 = local_1c;
    }
  }
  else {
    cVar2 = FUN_10a5d8d0(&DAT_11307f38);
    if (cVar2 == '\0') {
      cVar2 = FUN_10a5d8d0("right");
      if (cVar2 == '\0') {
        cVar2 = FUN_10a5d8d0(&DAT_11307f48);
        if (cVar2 != '\0') {
          puVar4 = (uint *)(**(code **)(*param_2 + 0xd4))(local_a8);
          fVar8 = (float)(*puVar4 ^ DAT_113c1410);
          fVar10 = (float)(puVar4[1] ^ DAT_113c1410);
          local_30 = (float)(puVar4[2] ^ DAT_113c1410);
          local_44 = local_60;
          local_40 = local_5c;
          local_3c = local_58;
          local_38 = fVar8;
          local_34 = fVar10;
          local_10 = fVar8;
          local_c = fVar10;
          local_8 = local_30;
          pfVar5 = (float *)(**(code **)(*param_2 + 0x94))();
          local_10 = *pfVar5;
          local_c = pfVar5[1];
          local_24 = pfVar5[2];
          local_20 = 0.0;
          local_1c = 0.0;
          local_18 = 0.0;
          if (((DAT_112fca68 < (float)((uint)(local_10 - local_44) & DAT_112fcb10)) ||
              (DAT_112fca68 < (float)((uint)(local_c - local_40) & DAT_112fcb10))) ||
             (DAT_112fca68 < (float)((uint)(local_24 - local_3c) & DAT_112fcb10))) {
            local_2c = *pfVar5;
            local_28 = pfVar5[1];
            fVar12 = local_44 - local_2c;
            fVar11 = local_40 - local_28;
            local_54 = 0.0;
            local_6c = fVar12 * DAT_112fcb00;
            local_50 = 0.0;
            local_4c = 1.0;
            local_68 = fVar11 * DAT_112fcb00;
            fVar9 = local_68 * local_68 + local_6c * local_6c + DAT_112fca5c;
            auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
            local_64 = auVar7._0_4_;
            local_64 = (DAT_112fcaac - local_64 * fVar9 * local_64 * DAT_113c12b8) * local_64;
            local_6c = local_6c * local_64;
            local_68 = local_68 * local_64;
            local_64 = local_64 * DAT_113c1280;
            local_8 = local_24;
            uVar3 = FUN_10552f00(local_90,&local_6c,&local_54,0);
            FUN_10552be0(uVar3);
            fVar9 = local_4c * DAT_1130193c;
            FUN_104878c0(&local_38);
            FUN_10552be0(local_90);
            local_18 = (float)((uint)(local_30 * DAT_1130193c - fVar9) & DAT_112fcb10);
            if (DAT_11301d98 < local_18) {
              local_18 = DAT_11301ccc - local_18;
            }
            if (fVar12 * fVar10 - fVar11 * fVar8 <= DAT_113c1280) {
              iVar6 = -1;
            }
            else {
              iVar6 = 1;
            }
            local_18 = (float)iVar6 * local_18;
          }
          *param_5 = 3;
          local_38 = local_20;
          local_34 = local_1c;
          local_30 = local_18;
        }
      }
      else {
        pfVar5 = (float *)(**(code **)(*param_2 + 0x78))(local_9c);
        fVar8 = *pfVar5;
        fVar10 = pfVar5[4];
        local_4c = pfVar5[8];
        local_44 = local_60;
        local_40 = local_5c;
        local_3c = local_58;
        local_54 = fVar8;
        local_50 = fVar10;
        local_10 = fVar8;
        local_c = fVar10;
        local_8 = local_4c;
        pfVar5 = (float *)(**(code **)(*param_2 + 0x94))();
        local_10 = *pfVar5;
        local_c = pfVar5[1];
        local_8 = pfVar5[2];
        local_20 = 0.0;
        local_1c = 0.0;
        local_18 = 0.0;
        if (((DAT_112fca68 < (float)((uint)(local_10 - local_44) & DAT_112fcb10)) ||
            (DAT_112fca68 < (float)((uint)(local_c - local_40) & DAT_112fcb10))) ||
           (DAT_112fca68 < (float)((uint)(local_8 - local_3c) & DAT_112fcb10))) {
          fVar12 = local_44 - *pfVar5;
          fVar11 = local_40 - pfVar5[1];
          local_6c = 0.0;
          local_2c = fVar12 * DAT_112fcb00;
          local_68 = 0.0;
          local_64 = 1.0;
          local_28 = fVar11 * DAT_112fcb00;
          fVar9 = local_28 * local_28 + local_2c * local_2c + DAT_112fca5c;
          auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          local_24 = auVar7._0_4_;
          local_24 = (DAT_112fcaac - local_24 * fVar9 * local_24 * DAT_113c12b8) * local_24;
          local_2c = local_2c * local_24;
          local_28 = local_28 * local_24;
          local_24 = local_24 * DAT_113c1280;
          uVar3 = FUN_10552f00(local_90,&local_2c,&local_6c,0);
          FUN_10552be0(uVar3);
          fVar9 = local_30 * DAT_1130193c;
          FUN_104878c0(&local_54);
          FUN_10552be0(local_90);
          local_18 = (float)((uint)(local_30 * DAT_1130193c - fVar9) & DAT_112fcb10);
          if (DAT_11301d98 < local_18) {
            local_18 = DAT_11301ccc - local_18;
          }
          if (fVar12 * fVar10 - fVar11 * fVar8 <= DAT_113c1280) {
            iVar6 = -1;
          }
          else {
            iVar6 = 1;
          }
          local_18 = (float)iVar6 * local_18;
        }
        *param_5 = 2;
        local_38 = local_20;
        local_34 = local_1c;
        local_30 = local_18;
      }
    }
    else {
      puVar4 = (uint *)(**(code **)(*param_2 + 0x78))(local_9c);
      fVar8 = (float)(*puVar4 ^ DAT_113c1410);
      fVar10 = (float)(puVar4[4] ^ DAT_113c1410);
      local_64 = (float)(puVar4[8] ^ DAT_113c1410);
      local_10 = local_60;
      local_c = local_5c;
      local_8 = local_58;
      local_6c = fVar8;
      local_68 = fVar10;
      local_20 = fVar8;
      local_1c = fVar10;
      local_18 = local_64;
      pfVar5 = (float *)(**(code **)(*param_2 + 0x94))();
      local_44 = *pfVar5;
      local_40 = pfVar5[1];
      local_3c = pfVar5[2];
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 0.0;
      if (((DAT_112fca68 < (float)((uint)(local_44 - local_10) & DAT_112fcb10)) ||
          (DAT_112fca68 < (float)((uint)(local_40 - local_c) & DAT_112fcb10))) ||
         (DAT_112fca68 < (float)((uint)(local_3c - local_8) & DAT_112fcb10))) {
        fVar12 = local_10 - *pfVar5;
        fVar11 = local_c - pfVar5[1];
        local_2c = 0.0;
        local_10 = fVar12 * DAT_112fcb00;
        local_28 = 0.0;
        local_24 = 1.0;
        local_c = fVar11 * DAT_112fcb00;
        fVar9 = local_c * local_c + local_10 * local_10 + DAT_112fca5c;
        auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        local_8 = auVar7._0_4_;
        local_8 = (DAT_112fcaac - local_8 * fVar9 * local_8 * DAT_113c12b8) * local_8;
        local_10 = local_10 * local_8;
        local_c = local_c * local_8;
        local_8 = local_8 * DAT_113c1280;
        uVar3 = FUN_10552f00(local_90,&local_10,&local_2c,0);
        FUN_10552be0(uVar3);
        fVar9 = local_30 * DAT_1130193c;
        FUN_104878c0(&local_6c);
        FUN_10552be0(local_90);
        local_18 = (float)((uint)(local_30 * DAT_1130193c - fVar9) & DAT_112fcb10);
        if (DAT_11301d98 < local_18) {
          local_18 = DAT_11301ccc - local_18;
        }
        if (fVar12 * fVar10 - fVar11 * fVar8 <= DAT_113c1280) {
          iVar6 = -1;
        }
        else {
          iVar6 = 1;
        }
        local_18 = (float)iVar6 * local_18;
      }
      *param_5 = 1;
      local_38 = local_20;
      local_34 = local_1c;
      local_30 = local_18;
    }
  }
  *param_4 = local_38;
  param_4[1] = local_34;
  param_4[2] = local_30;
  return 1;
}

