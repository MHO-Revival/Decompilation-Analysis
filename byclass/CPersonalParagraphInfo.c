// ===== class CPersonalParagraphInfo  (2 recovered methods) =====

/* --- CPersonalParagraphInfo::GetManagers @ 1099e3f0 --- */
// [RE-AUTO c3]
// id: CPersonalParagraphInfo::GetManagers
// strings:
//   ""CPersonalParagraphInfo::GetManagers""
//   ""StcMbrNameSvr<class CInfoManager>::GetSingletonName""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPersonalParagraphInfo::GetManagers
   strings:
     ""CPersonalParagraphInfo::GetManagers""
     ""StcMbrNameSvr<class CInfoManager>::GetSingletonName"" */

undefined4 __fastcall CPersonalParagraphInfo__GetManagers(undefined4 param_1)

{
  if ((DAT_123c0610 & 1) == 0) {
    DAT_123c0610 = DAT_123c0610 | 1;
    _DAT_123c0608 = &DAT_123c05f8;
    DAT_123c060c = &DAT_123c05f8;
    DAT_123c05f8 = 0;
    FUN_100d83d0("CPersonalParagraphInfo::GetManagers","",param_1);
    FUN_100d9260("StcMbrNameSvr<class CInfoManager>::GetSingletonName","");
    FUN_10250eb0();
    FUN_11a8911f(&LAB_11c7adc0);
  }
  return DAT_123c05f4;
}



/* --- CPersonalParagraphInfo::GetManagers_119a1ae0 @ 119a1ae0 --- */
// [RE-AUTO c3]
// id: CPersonalParagraphInfo::GetManagers
// strings:
//   ""CPersonalParagraphInfo""
//   ""CPersonalParagraphInfo::GetManagers""

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [RE-AUTO c3]
   id: CPersonalParagraphInfo::GetManagers
   strings:
     ""CPersonalParagraphInfo""
     ""CPersonalParagraphInfo::GetManagers"" */

void CPersonalParagraphInfo__GetManagers_119a1ae0(undefined **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_109a1fa0(0,"CPersonalParagraphInfo",0);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  uVar1 = param_1;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      param_1 = &PTR_FUN_11de11bc;
      if ((DAT_123c0610 & 1) == 0) {
        DAT_123c0610 = DAT_123c0610 | 1;
        FUN_102500e0("CPersonalParagraphInfo::GetManagers");
        FUN_11a8911f(&LAB_11c7adc0);
      }
      puVar4 = (undefined *)*DAT_123c05f4;
      if ((puVar4 == (undefined *)0x0) &&
         (puVar4 = (undefined *)FUN_11679e10(&param_1,"CPersonalParagraphInfo",0),
         puVar4 == (undefined *)0x0)) {
        if ((DAT_123c05e8 & 1) == 0) {
          DAT_123c05b4 = 0;
          DAT_123c05c4 = 0;
          DAT_123c05c8 = 0;
          _DAT_123c05cc = 0;
          DAT_123c05d0 = 0;
          DAT_123c05e8 = DAT_123c05e8 | 1;
          _DAT_123c05b0 = &PTR_FUN_11de1218;
          DAT_123c05d4 = _DAT_11de9ae0;
          DAT_123c05d8 = _UNK_11de9ae4;
          uRam123c05dc = _UNK_11de9ae8;
          DAT_123c05e0 = _UNK_11de9aec;
          DAT_123c05e4 = 1;
          DAT_123c05b8 = puVar4;
          _DAT_123c05bc = puVar4;
          _DAT_123c05c0 = puVar4;
          FUN_11a8911f(&LAB_11cb3fc0);
        }
        puVar4 = &DAT_123c05b0;
      }
      param_1 = &PTR_FUN_11da54a8;
      if (((-1 < iVar5) && (iVar5 < *(int *)(puVar4 + 0x18) - *(int *)(puVar4 + 0x14) >> 2)) &&
         (*(int *)(*(int *)(puVar4 + 0x14) + iVar5 * 4) != 0)) {
        FUN_11a72000(uVar1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}



