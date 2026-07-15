# Category: ui  (17 classes)

### CCutSceneInfo  

*Cutscene definition/trigger table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CDialogInfo  

*NPC/system dialog text table; loader links each entry to a CMessageColorInfo record.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CHubEntryPageInfo  

*Config for a hub (town/gathering-hall) entry menu page.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CLoadingTemplateInfo  

*Template layout definitions for loading screens. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CLoadingTipsDataInfo  

*Individual loading-screen tip text/data entries. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CLoadingTipsGroupInfo  

*Grouping/categorization of loading-screen tips. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CLoadingTutorialInfo  

*Tutorial content shown during loading screens. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CMessageColorInfo  

*Client message-color table entry. Maps a message color-id to an actual RGBA/color value, and is used together with CMessageParmDescInfo to colorize localized chat/system messages and substitute {name} placeholders.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| colorValue | unknown | uint32 (RGBA) | inferred |


**Constants:** OpenBrace='{' (0x7b), CloseBrace='}' (0x7d)

**Formulas / rules:**
- placeholder scan: FUN_118dfd80(buf, pos, '{', '}', outName) walks {name} tokens; each token name compared to CMessageParmDescInfo entry name at entry+0x14

> All four methods share the auto-id 'GetManagers'; only the first two are true manager accessors. The two big methods are the message color/parameter resolver in two struct layouts. No matching TLV doc (this is a client-only display table).

---
### CMessageInfo  

*Static definition of localized system/UI message templates. Provides message formatting from a parameter blob (typed argument list) and applying per-message colors.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| messageId | 0x00 | int | reader |
| argCount | 0x10 | byte | reader |
| customTemplate | 0x16a | char* | reader |


**Constants:** argRecordStride=0x45, maxVectorElems=0x3FFFFFFF

**Formulas / rules:**
- arg record stride = 0x45 bytes; type byte at record+4 selects converter (1..4)

> Sibling class CMessageColorInfo.

---
### CNoticeInfo  

*In-game notice/announcement text table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CSystemShortcutDataInfo  

*UI system shortcut definitions (quick-access buttons/menu entries). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CSystemUnlockInfo  

*Table of feature/system unlock conditions (which UI systems or gameplay features unlock and when). One query method over the manager list was recovered.*  

confidence: **low**  


> Only 2 methods recovered. Second is a real lookup but without labelled fields.

---
### CTutorialCounterInfo  

*Counter/progress tracking config for tutorials.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CTutorialHintInfo  

*Tutorial hint/tooltip content definitions. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CTutorialInfo  

*Definition of tutorial sequences/steps. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CUIInfo  

*Static UI-window definition table. Builds the list of UI ids that are open/enabled by default at startup.*  

confidence: **high**  


| field | offset | type | source |
|---|---|---|---|
| uiId | 0x10 | int | reader |
| defaultOpen | 0x70 | char(bool) | reader |


**Constants:** Always-appended UI ids: 1 and 0x1b (27)

---
### CUIOpenProcessInfo  

*Config for UI unlock/open progression (which UI panels open at what progress). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
