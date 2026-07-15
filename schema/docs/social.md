# Category: social  (29 classes)

### CChatTabInfo  

*Chat tab/channel definition table. Records define chat tabs; recovered logic enumerates all tabs and syncs the player's chat-tab set against the config (adding missing tabs, applying filters).*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| tabEntryRecordPtr | 0x0 | ptr | inferred |


**Constants:** ChatTabEntryStride=0xc

---
### CClanLevelInfo  

*Static config for clan (team/legion) level requirements/rewards. Rows precached per entry at load.*  

confidence: **medium**  


---
### CContributeBoxInfo  

*Reward-box table for guild/community contribution.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CExpressionGroupInfo  

*Grouping of expressions/emotes for chat/social use. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CFactionInfo  

*Static faction definition table. Builds the faction-vs-faction relationship matrix for 10 factions at init.*  

confidence: **high**  


**Constants:** NumFactions=10 (loops 1..0xb exclusive)

---
### CFinalGuildMatchRewardInfo  

*Reward table for the final round of guild matches/tournaments. Only factory boilerplate recovered.*  

confidence: **low**  


> Part of the guild-match family (see CGuildMatchAgainstInfo/CGuildMatchRewardInfo). No field data recovered.

---
### CGuildBuildingLevelUpInfo  

*Static config for guild-building level-up rules (per building type, its level rows). Used to query the max level available for a building type.*  

confidence: **high**  


| field | offset | type | source |
|---|---|---|---|
| buildingType | 0x14 | int | reader |
| level | 0x18 | int | reader |


---
### CGuildCommodityUnlockInfo  

*Unlock conditions for guild-shop commodities.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CGuildLevelUpInfo  

*Static config table for guild (union) level-up requirements/rewards. Rows are held by a CInfoManager<CGuildLevelUpInfo> singleton and iterated at load time.*  

confidence: **medium**  


> FUN_11679e10 = CInfoManager<T> find-or-default singleton accessor; mgr+0x14/+0x18 = row vector begin/end, count=(end-begin)/4; vtbl+0x28 = GetCount. No DebugFormat/reader recovered so field offsets unknown.

---
### CGuildMatchAgainstInfo  

*Guild-match matchup/bracket ('against') pairing table. Only factory boilerplate recovered.*  

confidence: **low**  


> Guild-match family. No field data recovered.

---
### CGuildMatchInfo  

*Config record for a guild-match / guild-ranking bracket, selected by a score/value threshold. Only manager accessors and consumer loops recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| nextBracketId | 0x234 | int32 | inferred |


> Threshold value is 64-bit (compared with CONCAT44(param_2,param_1)).

---
### CGuildMatchRewardInfo  

*Reward table for regular (non-final) guild matches. Only factory boilerplate recovered.*  

confidence: **low**  


> Guild-match family (cf. CFinalGuildMatchRewardInfo). No field data recovered.

---
### CGuildResourceInstituteInfo  

*Static data for guild 'resource institute' upgrade tiers. A field at +0x10 is a level/threshold; consumers filter tiers whose threshold <= a requested value and iterate associated guild-quest prizes.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| levelThreshold | 0x10 | int32 | inferred |


**Formulas / rules:**
- tier included iff tier+0x10 <= requestedValue

> Offset 0x10 threshold is clear; related to CGuildQuestPrizeInfo.

---
### CGuildSkillInfo  

*Guild skill config: lists guild skills and the guild level at which each unlocks; builds the set of skills currently available to a guild.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| skillGroup | 0x14 | ptr | inferred |
| skillId | 0x18 | int32 | inferred |
| requiredGuildLevel | 0x24 | int32 | inferred |


**Formulas / rules:**
- availLevel = min(owner.field_0x224 + 1, CGuildBuildingLevelUpInfo::GetMaxLevel(5))
- skill included when requiredGuildLevel <= availLevel

> owner.field_0x224 is a byte (guild building level counter). CGuildBuildingLevelUpInfo(5) supplies a cap for building type 5.

---
### CGuildTaskGroupInfo  

*Config record for a guild-task group (set of guild tasks/quests). Only manager accessors and consumer loops recovered.*  

confidence: **medium**  


---
### CGuildTaskLibInfo  

*Library/pool of guild task definitions (guild quests). Registered under CInfoManager via StcMbrNameSvr. Only factory boilerplate recovered.*  

confidence: **low**  


> Contains 'StcMbrNameSvr<class CInfoManager>::GetSingletonName' reference confirming the shared singleton factory. No field offsets recovered.

---
### CGuildTipsInfo  

*Guild-related tips/notice text definitions. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CGuildTitleInfo  

*Definition table for guild titles/ranks (name, permissions, etc.). Only factory boilerplate recovered.*  

confidence: **low**  


> Pure factory boilerplate; no field data recovered.

---
### CHunterCardBaseInfo  

*Base data for a hunter profile card (player business/profile card). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CHunterRecordCardInfo  

*Hunter record card (player profile/hunter-log card) definition. One record-building query method recovered.*  

confidence: **low**  


> Only 2 methods recovered. Second builds/queries a card record but fields are not labelled.

---
### CLeagueRewardInfo  

*Reward table for the League (guild/clan competitive) system.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CNpcAtdOrgInfo  

*NPC attitude ('Atd') organisation/faction table.*  

confidence: **low**  


> 'Atd'=Attitude, 'Org'=organisation/faction. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CNpcAtdPrefersInfo  

*Static definition of NPC attitude/affinity gift preferences (which items an NPC prefers and the resulting attitude change).*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| atdId | 0x10 | int | reader |


> Sibling base class CNpcAtdInfo.

---
### CNpcAtdStageInfo  

*NPC attitude ('Atd') stage/level thresholds table.*  

confidence: **low**  


> 'Atd' read as Attitude (affinity/relationship stages). Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CNpcSaleInfo  

*Per-NPC content descriptor keyed by npc id (this+0x14). Post-load it wires together everything an NPC exposes: monster-part sale items, manufacture/skill-learn entries, daily-work entries, tasks and illustrate-book entries, plus its commodity groups. this+0x74 points to the built runtime NPC object.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| npcId | 0x14 | int32 | inferred |
| runtimeNpc | 0x74 | ptr | inferred |
| saleList_begin | 0x84 | ptr* | inferred |


> Ties together sales, skill-learn, daily-work, tasks and illustrate book under one npc id. High fan-out linker; names of sub-linkers proposed in nameNext.

---
### CNpcTalkInfo  

*NPC dialogue/talk line definitions. Only factory boilerplate recovered.*  

confidence: **low**  


> Purpose inferred from name; no field data recovered.

---
### CRankingListOfPlayerInfo  

*Static definition of player ranking-list rows; each row has a ranking-type enum (+0x34) and an id (+0x10). Lookups fetch the ranking id for a given type/subtype.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| id | 0x10 | int | reader |
| rankingType | 0x34 | int | reader |
| subKey | 0x38 | int | reader |


**Constants:** type_D=0x0D, type_E=0x0E, type_F=0x0F

---
### CSpeakInfo  

*Static definition of an NPC dialogue/speak line entry. Speak sets reference many speak-line ids plus embedded short strings.*  

confidence: **medium**  

related TLV: TlvChatSpeakData  


| field | offset | type | source |
|---|---|---|---|
| primarySpeakIds | 0x04 | int[<=40] | reader |
| secondaryCount | 0xA4 | int | reader |
| stringCount | 0x120 | int | reader |


**Constants:** maxPrimaryIds=0x28, maxSecondaryIds=0x14, maxStringSlots=10, stringSlotStride=24

> Likely the client-side static form of chat/speak data (cf. TlvChatSpeakData) but this is the static Info table, not the TLV wire struct.

---
### CTitleInfo  

*Definition of player titles (display titles/honorifics). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
