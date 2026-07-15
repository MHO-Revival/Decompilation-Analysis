// ===== class CChatTabInfo  (4 recovered methods) =====

/* --- CChatTabInfo::GetManagers @ 111e13f0 --- */
// [RE-AUTO c3]
// id: CChatTabInfo::GetManagers
// strings:
//   ""CChatTabInfo::GetManagers""

/* [RE-AUTO c3]
   id: CChatTabInfo::GetManagers
   strings:
     ""CChatTabInfo::GetManagers"" */

undefined4 * CChatTabInfo__GetManagers(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined **local_8;
  
  local_8 = &PTR_FUN_11d17188;
  if (param_3 == 0) {
    if ((DAT_1203f31c & 1) == 0) {
      DAT_1203f31c = DAT_1203f31c | 1;
      FUN_102500e0("CChatTabInfo::GetManagers");
      FUN_11a8911f(&LAB_11c972f0);
    }
    if ((undefined4 *)*DAT_1203f300 != (undefined4 *)0x0) {
      return (undefined4 *)*DAT_1203f300;
    }
  }
  puVar1 = (undefined4 *)FUN_11679e10(&local_8,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_1203f360 & 1) == 0) {
      DAT_1203f360 = DAT_1203f360 | 1;
      FUN_111e20c0();
      FUN_11a8911f(&LAB_11c97290);
    }
    puVar1 = &DAT_1203f328;
  }
  return puVar1;
}



/* --- CChatTabInfo::GetManagers_111e2de0 @ 111e2de0 --- */
// [RE-AUTO c3]
// id: CChatTabInfo::GetManagers
// strings:
//   ""CChatTabInfo::GetManagers""
//   ""CChatTabInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CChatTabInfo::GetManagers
   strings:
     ""CChatTabInfo::GetManagers""
     ""CChatTabInfo"" */

undefined4 * CChatTabInfo__GetManagers_111e2de0(undefined **param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
  puVar1 = param_1;
  iVar4 = 0;
  *param_1 = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
LAB_111e2e02:
  do {
    param_1 = &PTR_FUN_11d17188;
    if ((DAT_1203f31c & 1) == 0) {
      DAT_1203f31c = DAT_1203f31c | 1;
      FUN_102500e0("CChatTabInfo::GetManagers");
      FUN_11a8911f(&LAB_11c972f0);
    }
    piVar2 = (int *)*DAT_1203f300;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CChatTabInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1203f360 & 1) == 0) {
          DAT_1203f32c = 0;
          DAT_1203f33c = 0;
          DAT_1203f340 = 0;
          _DAT_1203f344 = 0;
          uRam1203f348 = 0;
          DAT_1203f360 = DAT_1203f360 | 1;
          DAT_1203f328 = &PTR_FUN_11d171bc;
          _DAT_1203f34c = _DAT_11de9ae0;
          uRam1203f350 = _UNK_11de9ae4;
          uRam1203f354 = _UNK_11de9ae8;
          uRam1203f358 = _UNK_11de9aec;
          DAT_1203f35c = 1;
          DAT_1203f330 = piVar2;
          _DAT_1203f334 = piVar2;
          _DAT_1203f338 = piVar2;
          FUN_11a8911f(&LAB_11c97290);
        }
        piVar2 = (int *)&DAT_1203f328;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 <= iVar4) {
      return puVar1;
    }
    param_1 = &PTR_FUN_11d17188;
    if ((DAT_1203f31c & 1) == 0) {
      DAT_1203f31c = DAT_1203f31c | 1;
      FUN_102500e0("CChatTabInfo::GetManagers");
      FUN_11a8911f(&LAB_11c972f0);
    }
    piVar2 = (int *)*DAT_1203f300;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)FUN_11679e10(&param_1,"CChatTabInfo",0);
      if (piVar2 == (int *)0x0) {
        if ((DAT_1203f360 & 1) == 0) {
          DAT_1203f32c = 0;
          DAT_1203f33c = 0;
          DAT_1203f340 = 0;
          _DAT_1203f344 = 0;
          uRam1203f348 = 0;
          DAT_1203f360 = DAT_1203f360 | 1;
          DAT_1203f328 = &PTR_FUN_11d171bc;
          _DAT_1203f34c = _DAT_11de9ae0;
          uRam1203f350 = _UNK_11de9ae4;
          uRam1203f354 = _UNK_11de9ae8;
          uRam1203f358 = _UNK_11de9aec;
          DAT_1203f35c = 1;
          DAT_1203f330 = piVar2;
          _DAT_1203f334 = piVar2;
          _DAT_1203f338 = piVar2;
          FUN_11a8911f(&LAB_11c97290);
        }
        piVar2 = (int *)&DAT_1203f328;
      }
    }
    param_1 = &PTR_FUN_11da54a8;
    if (((-1 < iVar4) && (iVar4 < piVar2[6] - piVar2[5] >> 2)) &&
       (iVar3 = *(int *)(piVar2[5] + iVar4 * 4), iVar3 != 0)) {
      local_10 = iVar3;
      FUN_100e5570();
      piVar2 = (int *)puVar1[1];
      local_8 = 0;
      if (piVar2 != (int *)puVar1[2]) {
        if (piVar2 != (int *)0x0) {
          *piVar2 = local_10;
          FUN_100e5580(local_c);
          piVar2[2] = local_8;
        }
        puVar1[1] = puVar1[1] + 0xc;
        FUN_100e5670();
        iVar4 = iVar4 + 1;
        goto LAB_111e2e02;
      }
      FUN_111e4450(piVar2,&local_10,(int)&param_1 + 3,1,1);
      FUN_100e5670();
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



/* --- CChatTabInfo::GetManagers_111e3440 @ 111e3440 --- */
// [RE-AUTO c3]
// id: CChatTabInfo::GetManagers
// strings:
//   ""CChatTabInfo::GetManagers""

/* [RE-AUTO c3]
   id: CChatTabInfo::GetManagers
   strings:
     ""CChatTabInfo::GetManagers"" */

undefined4 CChatTabInfo__GetManagers_111e3440(int param_1)

{
  if (param_1 == 0) {
    if ((DAT_1203f31c & 1) == 0) {
      DAT_1203f31c = DAT_1203f31c | 1;
      FUN_102500e0("CChatTabInfo::GetManagers");
      FUN_11a8911f(&LAB_11c972f0);
    }
    return *DAT_1203f300;
  }
  return 0;
}



/* --- CChatTabInfo::GetManagers_111e3a40 @ 111e3a40 --- */
// [RE-AUTO c3]
// id: CChatTabInfo::GetManagers
// calls: CChatTabInfo::GetManagers_111e2de0, CChatTabInfo::GetManagers
// strings:
//   ""CChatTabInfo""
//   ""CChatTabInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CChatTabInfo::GetManagers
   calls: CChatTabInfo::GetManagers_111e2de0, CChatTabInfo::GetManagers
   strings:
     ""CChatTabInfo""
     ""CChatTabInfo::GetManagers"" */

void __fastcall CChatTabInfo__GetManagers_111e3a40(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  undefined **local_c;
  undefined1 local_5;
  
  local_10 = param_1;
  FUN_113f3640();
  iVar4 = FUN_1115abd0();
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)FUN_113994b0();
    if (puVar5 == (undefined4 *)0x0) {
      uVar6 = CChatTabInfo__GetManagers_111e2de0(&local_38);
      FUN_111e2790(uVar6);
      piVar8 = local_38;
      for (; local_2c = local_38, local_34 != piVar8; local_34 = local_34 + -3) {
        FUN_100e5670();
      }
    }
    else {
      (**(code **)*puVar5)(&local_2c);
      if (local_2c == local_28) {
        uVar6 = CChatTabInfo__GetManagers_111e2de0(&local_38);
        FUN_111e2790(uVar6);
        FUN_111e26d0();
      }
      else {
        FUN_111e4ae0();
        if (local_2c != local_28) {
          piVar8 = local_2c + 6;
          do {
            if (piVar8[-1] == piVar8[-2]) {
              piVar7 = (int *)FUN_111e3320(*piVar8);
              if (piVar7 != (int *)0x0) {
                local_38 = piVar7;
                FUN_100e5570();
                local_30 = 0;
                FUN_111e4f20(&local_38);
                goto LAB_111e3ba5;
              }
            }
            else {
              iVar4 = *piVar8;
              FUN_100e55d0(piVar8[-1]);
              local_20 = 0;
              FUN_100e5580(&local_c);
              piVar7 = *(int **)(param_1 + 8);
              local_18 = iVar4;
              if (piVar7 == *(int **)(param_1 + 0xc)) {
                FUN_111e4450(piVar7,&local_20,&local_5,1,1);
              }
              else {
                if (piVar7 != (int *)0x0) {
                  *piVar7 = local_20;
                  FUN_100e5580(local_1c);
                  piVar7[2] = local_18;
                }
                *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc;
              }
              FUN_100e5670();
LAB_111e3ba5:
              FUN_100e5670();
            }
            piVar7 = piVar8 + 1;
            piVar8 = piVar8 + 7;
          } while (piVar7 != local_28);
        }
        piVar8 = (int *)CChatTabInfo__GetManagers(0,"CChatTabInfo",0);
        iVar4 = (**(code **)(*piVar8 + 0x28))();
        iVar9 = 0;
        local_14 = iVar4;
        if (0 < iVar4) {
          do {
            local_c = &PTR_FUN_11d17188;
            if ((DAT_1203f31c & 1) == 0) {
              DAT_1203f31c = DAT_1203f31c | 1;
              FUN_102500e0("CChatTabInfo::GetManagers");
              FUN_11a8911f(&LAB_11c972f0);
            }
            puVar5 = (undefined4 *)*DAT_1203f300;
            if ((puVar5 == (undefined4 *)0x0) &&
               (puVar5 = (undefined4 *)FUN_11679e10(&local_c,"CChatTabInfo",0),
               puVar5 == (undefined4 *)0x0)) {
              if ((DAT_1203f360 & 1) == 0) {
                DAT_1203f32c = 0;
                DAT_1203f33c = 0;
                DAT_1203f340 = 0;
                _DAT_1203f344 = 0;
                uRam1203f348 = 0;
                DAT_1203f360 = DAT_1203f360 | 1;
                DAT_1203f328 = &PTR_FUN_11d171bc;
                _DAT_1203f34c = _DAT_11de9ae0;
                uRam1203f350 = _UNK_11de9ae4;
                uRam1203f354 = _UNK_11de9ae8;
                uRam1203f358 = _UNK_11de9aec;
                DAT_1203f35c = 1;
                DAT_1203f330 = puVar5;
                _DAT_1203f334 = puVar5;
                _DAT_1203f338 = puVar5;
                FUN_11a8911f(&LAB_11c97290);
              }
              puVar5 = &DAT_1203f328;
            }
            local_c = &PTR_FUN_11da54a8;
            if (((-1 < iVar9) && (iVar9 < (int)(puVar5[6] - puVar5[5]) >> 2)) &&
               (iVar1 = *(int *)(puVar5[5] + iVar9 * 4), iVar1 != 0)) {
              local_20 = iVar1;
              FUN_100e5570();
              local_18 = 0;
              cVar3 = FUN_111e2d80(&local_20);
              if (cVar3 == '\0') {
                piVar8 = *(int **)(param_1 + 8);
                if (piVar8 == *(int **)(param_1 + 0xc)) {
                  FUN_111e4450(piVar8,&local_20,&local_5,1,1);
                  iVar4 = local_14;
                }
                else {
                  if (piVar8 != (int *)0x0) {
                    *piVar8 = local_20;
                    FUN_100e5580(local_1c);
                    piVar8[2] = local_18;
                  }
                  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc;
                  iVar4 = local_14;
                }
              }
              FUN_100e5670();
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar4);
        }
      }
      piVar8 = local_2c;
      if (local_28 != local_2c) {
        piVar7 = local_28 + -2;
        do {
          piVar2 = (int *)*piVar7;
          if ((piVar2 != piVar7 + -5) && (piVar2 != (int *)0x0)) {
            FUN_10c3d5d0(piVar2);
          }
          piVar2 = piVar7 + -5;
          piVar7 = piVar7 + -7;
        } while (piVar2 != piVar8);
      }
    }
    if (local_2c != (int *)0x0) {
      FUN_10c3d5d0(local_2c);
    }
    FUN_111e46c0();
  }
  return;
}



