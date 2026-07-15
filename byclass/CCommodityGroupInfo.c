// ===== class CCommodityGroupInfo  (6 recovered methods) =====

/* --- CCommodityGroupInfo::GetManagers @ 1083e7c0 --- */
// [RE-AUTO c3]
// id: CCommodityGroupInfo::GetManagers
// strings:
//   ""CCommodityGroupInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityGroupInfo::GetManagers
   strings:
     ""CCommodityGroupInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CCommodityGroupInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c7478 & 1) == 0) {
    DAT_123c7478 = DAT_123c7478 | 1;
    _DAT_123c7490 = &DAT_123c7480;
    DAT_123c7494 = &DAT_123c7480;
    DAT_123c7480 = 0;
    FUN_100d83d0("CCommodityGroupInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c72580);
  }
  return DAT_123c747c;
}



/* --- CCommodityGroupInfo::GetManagers_11720730 @ 11720730 --- */
// [RE-AUTO c3]
// id: CCommodityGroupInfo::GetManagers
// strings:
//   ""CCommodityGroupInfo::GetManagers""
//   ""CCommodityGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityGroupInfo::GetManagers
   strings:
     ""CCommodityGroupInfo::GetManagers""
     ""CCommodityGroupInfo"" */

undefined4 __thiscall
CCommodityGroupInfo__GetManagers_11720730(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_8;
  
  piVar6 = *(int **)(param_1 + 0x40);
  if (piVar6 != *(int **)(param_1 + 0x44)) {
    do {
      iVar5 = *piVar6;
      local_8 = &PTR_FUN_11dceff0;
      if ((DAT_123c7478 & 1) == 0) {
        DAT_123c7478 = DAT_123c7478 | 1;
        FUN_102500e0("CCommodityGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72580);
      }
      puVar4 = (undefined *)*DAT_123c747c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_8,"CCommodityGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c74a0 & 1) == 0) {
          DAT_123c74a8 = 0;
          DAT_123c74b8 = 0;
          DAT_123c74bc = 0;
          _DAT_123c74c0 = 0;
          DAT_123c74c4 = 0;
          DAT_123c74a0 = DAT_123c74a0 | 1;
          _DAT_123c74a4 = &PTR_FUN_11dceff8;
          DAT_123c74c8 = _DAT_11de9ae0;
          DAT_123c74cc = _UNK_11de9ae4;
          uRam123c74d0 = _UNK_11de9ae8;
          DAT_123c74d4 = _UNK_11de9aec;
          DAT_123c74d8 = 1;
          DAT_123c74ac = puVar4;
          _DAT_123c74b0 = puVar4;
          _DAT_123c74b4 = puVar4;
          FUN_11a8911f(&LAB_11ca8a90);
        }
        puVar4 = &DAT_123c74a4;
      }
      local_8 = &PTR_FUN_11da54a8;
      if ((iVar5 != -1) &&
         ((((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
           (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)) &&
          ((iVar5 = iVar5 - *(int *)(puVar4 + 0x30), -1 < iVar5 && (iVar5 < *(int *)(puVar4 + 0x24))
           ))))) {
        iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
        if ((iVar2 != 0) &&
           ((iVar5 = *(int *)(iVar2 + (iVar5 % iVar1) * 4), iVar5 != 0 &&
            (cVar3 = FUN_117df8c0(param_2), cVar3 != '\0')))) {
          *param_3 = iVar5;
          return 1;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0x44));
  }
  *param_3 = 0;
  return 0;
}



/* --- CCommodityGroupInfo::GetManagers_11721020 @ 11721020 --- */
// [RE-AUTO c3]
// id: CCommodityGroupInfo::GetManagers
// strings:
//   ""CCommodityGroupInfo::GetManagers""
//   ""CCommodityGroupInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityGroupInfo::GetManagers
   strings:
     ""CCommodityGroupInfo::GetManagers""
     ""CCommodityGroupInfo"" */

void __fastcall CCommodityGroupInfo__GetManagers_11721020(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined **local_c;
  undefined1 local_5;
  
  piVar6 = *(int **)(param_1 + 0x40);
  if (piVar6 != *(int **)(param_1 + 0x44)) {
    do {
      iVar5 = *piVar6;
      local_c = &PTR_FUN_11dceff0;
      if ((DAT_123c7478 & 1) == 0) {
        DAT_123c7478 = DAT_123c7478 | 1;
        FUN_102500e0("CCommodityGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72580);
      }
      puVar4 = (undefined *)*DAT_123c747c;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&local_c,"CCommodityGroupInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c74a0 & 1) == 0) {
          DAT_123c74a8 = 0;
          DAT_123c74b8 = 0;
          DAT_123c74bc = 0;
          _DAT_123c74c0 = 0;
          DAT_123c74c4 = 0;
          DAT_123c74a0 = DAT_123c74a0 | 1;
          _DAT_123c74a4 = &PTR_FUN_11dceff8;
          DAT_123c74c8 = _DAT_11de9ae0;
          DAT_123c74cc = _UNK_11de9ae4;
          uRam123c74d0 = _UNK_11de9ae8;
          DAT_123c74d4 = _UNK_11de9aec;
          DAT_123c74d8 = 1;
          DAT_123c74ac = puVar4;
          _DAT_123c74b0 = puVar4;
          _DAT_123c74b4 = puVar4;
          FUN_11a8911f(&LAB_11ca8a90);
        }
        puVar4 = &DAT_123c74a4;
      }
      if ((iVar5 != -1) &&
         (((iVar5 != 0 || (*(int *)(puVar4 + 0x30) == 0)) &&
          (iVar1 = *(int *)(puVar4 + 0x28), iVar1 != 0)))) {
        iVar5 = iVar5 - *(int *)(puVar4 + 0x30);
        if ((iVar5 < 0) || (*(int *)(puVar4 + 0x24) <= iVar5)) {
LAB_1172113e:
          local_c = (undefined **)0x0;
        }
        else {
          iVar2 = *(int *)(*(int *)(puVar4 + 0x20) + (iVar5 / iVar1) * 4);
          if (iVar2 == 0) goto LAB_1172113e;
          local_c = *(undefined ***)(iVar2 + (iVar5 % iVar1) * 4);
        }
        if (local_c != (undefined **)0x0) {
          piVar3 = *(int **)(param_1 + 0x18);
          if (piVar3 == *(int **)(param_1 + 0x1c)) {
            FUN_11721d80(piVar3,&local_c,&local_5,1,1);
          }
          else {
            *piVar3 = (int)local_c;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0x44));
  }
  return;
}



/* --- CCommodityGroupInfo::GetManagers_117ddac0 @ 117ddac0 --- */
// [RE-AUTO c3]
// id: CCommodityGroupInfo::GetManagers
// calls: CItemBaseInfo::GetManagers_117daf50
// strings:
//   ""CCommodityGroupInfo::GetManagers""
//   ""CCommodityGroupInfo""
//   ""CItemBaseInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
//   ""CItemBaseInfo""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityGroupInfo::GetManagers
   calls: CItemBaseInfo::GetManagers_117daf50
   strings:
     ""CCommodityGroupInfo::GetManagers""
     ""CCommodityGroupInfo""
     ""CItemBaseInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""
     ""CItemBaseInfo"" */

void __thiscall CCommodityGroupInfo__GetManagers_117ddac0(int param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined **local_c;
  undefined **local_8;
  
  piVar4 = *(int **)(param_1 + 0x1c);
  if (piVar4 != *(int **)(param_1 + 0x20)) {
    do {
      iVar2 = *piVar4;
      CItemBaseInfo__GetManagers_117daf50(param_2);
      FUN_117da6f0();
      if (0 < *(int *)(iVar2 + 0x58)) {
        local_8 = &PTR_FUN_11dceff0;
        if ((DAT_123c7478 & 1) == 0) {
          DAT_123c7478 = DAT_123c7478 | 1;
          FUN_102500e0("CCommodityGroupInfo::GetManagers");
          FUN_11a8911f(&LAB_11c72580);
        }
        if (((*DAT_123c747c == 0) &&
            (iVar5 = FUN_11679e10(&local_8,"CCommodityGroupInfo",0), iVar5 == 0)) &&
           ((DAT_123c74a0 & 1) == 0)) {
          DAT_123c74a8 = 0;
          DAT_123c74b8 = 0;
          DAT_123c74bc = 0;
          _DAT_123c74c0 = 0;
          DAT_123c74c4 = 0;
          DAT_123c74a0 = DAT_123c74a0 | 1;
          DAT_123c74ac = 0;
          _DAT_123c74b0 = 0;
          _DAT_123c74b4 = 0;
          _DAT_123c74a4 = &PTR_FUN_11dceff8;
          DAT_123c74c8 = _DAT_11de9ae0;
          DAT_123c74cc = _UNK_11de9ae4;
          uRam123c74d0 = _UNK_11de9ae8;
          DAT_123c74d4 = _UNK_11de9aec;
          DAT_123c74d8 = 1;
          FUN_11a8911f(&LAB_11caafb0);
        }
        local_8 = &PTR_FUN_11da54a8;
      }
      if (*(char *)(iVar2 + 0x74) != '\0') {
        iVar5 = 0;
        if (0 < (int)(*(int *)(iVar2 + 0x88) - *(int *)(iVar2 + 0x84) & 0xfffffff8U)) {
          do {
            local_c = &PTR_FUN_11da5518;
            if ((DAT_123bdbfc & 1) == 0) {
              DAT_123bdbfc = DAT_123bdbfc | 1;
              _DAT_123bdbb4 = &DAT_123bdba4;
              DAT_123bdbb8 = &DAT_123bdba4;
              DAT_123bdba4 = 0;
              FUN_100d9260("CItemBaseInfo::GetManagers","");
              FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
              DAT_123bdba0 = (int *)FUN_100dfd90(DAT_123bdbb8);
              if (DAT_123bdba0 == (int *)0x0) {
                DAT_123bdba0 = (int *)FUN_100dde50(4);
                *DAT_123bdba0 = 0;
                FUN_100dfdc0(DAT_123bdbb8,DAT_123bdba0);
              }
              FUN_11a8911f(&LAB_11c6e610);
            }
            if (((*DAT_123bdba0 == 0) &&
                (iVar6 = FUN_11679e10(&local_c,"CItemBaseInfo",0), iVar6 == 0)) &&
               ((DAT_123bdc00 & 1) == 0)) {
              DAT_123bdbc4 = 0;
              DAT_123bdbd4 = 0;
              DAT_123bdbd8 = 0;
              _DAT_123bdbdc = 0;
              DAT_123bdbe0 = 0;
              DAT_123bdc00 = DAT_123bdc00 | 1;
              DAT_123bdbc8 = (undefined4 *)0x0;
              _DAT_123bdbcc = (undefined4 *)0x0;
              _DAT_123bdbd0 = (undefined4 *)0x0;
              DAT_123bdbc0 = &PTR_FUN_11da5520;
              DAT_123bdbe4 = _DAT_11de9ae0;
              DAT_123bdbe8 = _UNK_11de9ae4;
              uRam123bdbec = _UNK_11de9ae8;
              DAT_123bdbf0 = _UNK_11de9aec;
              DAT_123bdbf4 = 1;
              FUN_11a8911f(&LAB_11cab010);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(iVar2 + 0x88) - *(int *)(iVar2 + 0x84) >> 3);
        }
        iVar5 = *(int *)(iVar2 + 0x28);
        local_8 = &PTR_FUN_11da5518;
        if ((DAT_123bdbfc & 1) == 0) {
          DAT_123bdbfc = DAT_123bdbfc | 1;
          FUN_102500e0("CItemBaseInfo::GetManagers");
          FUN_11a8911f(&LAB_11c6e610);
        }
        puVar7 = (undefined4 *)*DAT_123bdba0;
        if ((puVar7 == (undefined4 *)0x0) &&
           (puVar7 = (undefined4 *)FUN_11679e10(&local_8,"CItemBaseInfo",0),
           puVar7 == (undefined4 *)0x0)) {
          if ((DAT_123bdc00 & 1) == 0) {
            DAT_123bdbc4 = 0;
            DAT_123bdbd4 = 0;
            DAT_123bdbd8 = 0;
            _DAT_123bdbdc = 0;
            DAT_123bdbe0 = 0;
            DAT_123bdc00 = DAT_123bdc00 | 1;
            DAT_123bdbc0 = &PTR_FUN_11da5520;
            DAT_123bdbe4 = _DAT_11de9ae0;
            DAT_123bdbe8 = _UNK_11de9ae4;
            uRam123bdbec = _UNK_11de9ae8;
            DAT_123bdbf0 = _UNK_11de9aec;
            DAT_123bdbf4 = 1;
            DAT_123bdbc8 = puVar7;
            _DAT_123bdbcc = puVar7;
            _DAT_123bdbd0 = puVar7;
            FUN_11a8911f(&LAB_11cab010);
          }
          puVar7 = &DAT_123bdbc0;
        }
        local_8 = &PTR_FUN_11da54a8;
        if (((iVar5 != -1) &&
            (((iVar5 != 0 || (puVar7[0xc] == 0)) && (iVar6 = puVar7[10], iVar6 != 0)))) &&
           ((iVar5 = iVar5 - puVar7[0xc], -1 < iVar5 && (iVar5 < (int)puVar7[9])))) {
          iVar3 = *(int *)(puVar7[8] + (iVar5 / iVar6) * 4);
          if ((iVar3 != 0) &&
             (((*(int *)(iVar3 + (iVar5 % iVar6) * 4) != 0 &&
               (*(int *)(iVar2 + 0x84) == *(int *)(iVar2 + 0x88))) &&
              ((*(int *)(iVar2 + 0x9c) == *(int *)(iVar2 + 0xa0) &&
               (((ppuVar1 = *(undefined ***)(iVar2 + 0x30), (float)ppuVar1 <= DAT_11de98bc ||
                 (local_c = ppuVar1, fVar8 = (float10)FUN_116bd500(), ppuVar1 = local_c,
                 (float)fVar8 <= (float)local_c)) && ((float)ppuVar1 < DAT_11de98bc)))))))) {
            FUN_116bd500();
            FUN_116bd4b0();
          }
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 0x20));
  }
  return;
}



/* --- CCommodityGroupInfo::GetManagers_11909600 @ 11909600 --- */
// [RE-AUTO c3]
// id: CCommodityGroupInfo::GetManagers
// strings:
//   ""CCommodityGroupInfo""
//   ""CCommodityGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityGroupInfo::GetManagers
   strings:
     ""CCommodityGroupInfo""
     ""CCommodityGroupInfo::GetManagers"" */

void CCommodityGroupInfo__GetManagers_11909600(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108480b0(0,"CCommodityGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dceff0;
      if ((DAT_123c7478 & 1) == 0) {
        DAT_123c7478 = DAT_123c7478 | 1;
        FUN_102500e0("CCommodityGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72580);
      }
      if (((*DAT_123c747c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CCommodityGroupInfo",0), iVar3 == 0)) &&
         ((DAT_123c74a0 & 1) == 0)) {
        DAT_123c74a8 = 0;
        DAT_123c74b8 = 0;
        DAT_123c74bc = 0;
        _DAT_123c74c0 = 0;
        DAT_123c74c4 = 0;
        DAT_123c74a0 = DAT_123c74a0 | 1;
        _DAT_123c74a4 = &PTR_FUN_11dceff8;
        DAT_123c74c8 = _DAT_11de9ae0;
        DAT_123c74cc = _UNK_11de9ae4;
        uRam123c74d0 = _UNK_11de9ae8;
        DAT_123c74d4 = _UNK_11de9aec;
        DAT_123c74d8 = 1;
        DAT_123c74ac = iVar3;
        _DAT_123c74b0 = iVar3;
        _DAT_123c74b4 = iVar3;
        FUN_11a8911f(&LAB_11cb1170);
      }
      local_8 = &PTR_FUN_11da54a8;
      FUN_117e0070();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



/* --- CCommodityGroupInfo::GetManagers_11909750 @ 11909750 --- */
// [RE-AUTO c3]
// id: CCommodityGroupInfo::GetManagers
// calls: CCommodityInfo::GetManagers_117dff10
// strings:
//   ""CCommodityGroupInfo""
//   ""CCommodityGroupInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CCommodityGroupInfo::GetManagers
   calls: CCommodityInfo::GetManagers_117dff10
   strings:
     ""CCommodityGroupInfo""
     ""CCommodityGroupInfo::GetManagers"" */

void CCommodityGroupInfo__GetManagers_11909750(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_8;
  
  piVar1 = (int *)FUN_108480b0(0,"CCommodityGroupInfo",0);
  iVar2 = (**(code **)(*piVar1 + 0x28))();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      local_8 = &PTR_FUN_11dceff0;
      if ((DAT_123c7478 & 1) == 0) {
        DAT_123c7478 = DAT_123c7478 | 1;
        FUN_102500e0("CCommodityGroupInfo::GetManagers");
        FUN_11a8911f(&LAB_11c72580);
      }
      if (((*DAT_123c747c == 0) &&
          (iVar3 = FUN_11679e10(&local_8,"CCommodityGroupInfo",0), iVar3 == 0)) &&
         ((DAT_123c74a0 & 1) == 0)) {
        DAT_123c74a8 = 0;
        DAT_123c74b8 = 0;
        DAT_123c74bc = 0;
        _DAT_123c74c0 = 0;
        DAT_123c74c4 = 0;
        DAT_123c74a0 = DAT_123c74a0 | 1;
        _DAT_123c74a4 = &PTR_FUN_11dceff8;
        DAT_123c74c8 = _DAT_11de9ae0;
        DAT_123c74cc = _UNK_11de9ae4;
        uRam123c74d0 = _UNK_11de9ae8;
        DAT_123c74d4 = _UNK_11de9aec;
        DAT_123c74d8 = 1;
        DAT_123c74ac = iVar3;
        _DAT_123c74b0 = iVar3;
        _DAT_123c74b4 = iVar3;
        FUN_11a8911f(&LAB_11cb1170);
      }
      local_8 = &PTR_FUN_11da54a8;
      CCommodityInfo__GetManagers_117dff10();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



