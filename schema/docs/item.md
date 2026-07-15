# Category: item  (74 classes)

### CAllTagItemLimitInfo  

*Per-tag item hold/ownership limit table (max quantity of items sharing a given tag/category). Only factory boilerplate recovered.*  

confidence: **low**  


> Purpose inferred from name; no field data recovered.

---
### CCatCuisineInfo  

*Felyne (cat) cuisine config table: each dish defines the monster it is associated with, the buffs it grants, and unlock conditions. Recovered logic links cuisines to monsters/buffs and filters available dishes.*  

confidence: **medium**  

related TLV: TlvCatCuisineData (DISCREPANCY: that Tlv is player runtime cuisine state — tCatTime/vCatSeq/iOpen/tOpenTime/iTools — not this static config; do not map fields)  


| field | offset | type | source |
|---|---|---|---|
| monsterId | 0x20 | int | inferred |
| buffIdList | 0x2c | vector<int> | inferred |


---
### CCharmRebuildCostInfo  

*Cost config for rebuilding/rerolling charms (talismans). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CCharmRebuildResultInfo  

*Result table for charm rebuild/reroll.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CCraftInfo  

*Static config for crafting (weapon/armor forge) entries. The recovered method builds two craft lists split by craft type and stores them on an owner object.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| craftId | 0x10 | int | reader |
| craftType | 0x44 | int | reader |


---
### CDragonBoxBlackFaceGiftInfo  

*Static data for the 'black face' (pity/guaranteed) gift entries of a Dragon Box lottery, referencing item rewards (CItemBaseInfo).*  

confidence: **medium**  

related TLV: TlvDragonBoxLotteryData  


> Cross-reference to CItemBaseInfo; part of the Dragon Box lottery family.

---
### CDragonBoxFxInfo  

*Static config for Dragon Box (lottery box) visual/effect entries. Related to the DragonBox lottery/shop system.*  

confidence: **medium**  

related TLV: TlvDragonBoxLotteryData, TlvDragonBoxShopItems  


> Directional TLV link only; those Tlv structs are runtime save data, this is the static Fx config table.

---
### CDragonBoxInfo  

*Static data for a 'Dragon Box' lottery/gacha container. Each box references its prize entries (CDragonBoxPrizeInfo) and item rewards (CItemBaseInfo).*  

confidence: **medium**  

related TLV: TlvDragonBoxLotteryData, TlvDragonBoxShopItems  


> Clear cross-references to CDragonBoxPrizeInfo and CItemBaseInfo confirm this is a lottery-box definition. No field offsets exposed in these methods.

---
### CDragonBoxPrizeInfo  

*Dragon Box lottery prize-pool entry. Each prize record has an item id + count and a pool/type key; methods grant pending prizes to a player and build the per-player prize/gift/shop pools (joining CDragonBoxBlackFaceGiftInfo and CDragonBoxShop).*  

confidence: **medium**  

related TLV: TlvDragonBoxLotteryData, TlvDragonBoxShopItems  


| field | offset | type | source |
|---|---|---|---|
| poolType | 0x14 (record[5]) | int32 (1|2|3) | reader |
| poolOwnerKey | 0x18 (record[6]) | int32 | reader |
| itemId | 0x24 | int32 | reader |
| itemCount | 0x28 | int32 | reader |
| prizeState | entry+0x04 | int32 (1->2) | reader |


**Constants:** StatePending=1, StateGranted=2, GrantMode=2

> TlvDragonBoxLotteryData/TlvDragonBoxShopItems are the network/persistence counterparts. Sibling classes CDragonBoxBlackFaceGiftInfo, CDragonBoxShop and CDragonBoxInfo are joined here. itemId/count at 0x24/0x28 and pool key at 0x14/0x18 are consistent across the code.

---
### CDragonBoxShowInfo  

*Display/showcase config for the Dragon Box (gacha/lottery box) - which items are shown as featured. Only factory boilerplate recovered.*  

confidence: **low**  


> DragonBox family (CDragonBoxInfo, CDragonBoxPrizeInfo, etc.). No field data recovered.

---
### CEquipBreakTransferInfo  

*Static config for equipment 'break' (dismantle/salvage) transfer rules. Rows precached per entry, linked to item base.*  

confidence: **medium**  


---
### CEquipEnchantInfo  

*Equipment enchant / attribute-bonus table entry. Drives building of an equipment's full enchant detail block (per-slot enchant attributes, names, descriptions) for tooltip display / network report.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| maxAttrSlots | unknown | count | inferred |
| csvValueList | unknown | int[20] | inferred |


**Constants:** MaxAttrSlots=24 (0x18), MaxCsvValues=20 (0x14), ListSeparator=',' (0x2c)

**Formulas / rules:**
- per-slot buffer stride = slot * 0xe4 bytes; description strings copied at 0x40, names at 0x20

> Only the first method is the true singleton accessor. The second is a tooltip/detail assembler, not a TLV parser. Heavy stack usage confirms it builds a large transient display struct. Field offsets inside the equip item are opaque here (item passed as param_3).

---
### CEquipEnchaseRuleInfo  

*Rules for equipment enchase (gem/decoration inlay).*  

confidence: **medium**  


> 'Enchase'=socketing/inlaying decorations. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CEquipEnforceRuleInfo  

*Rules for equipment enforce (upgrade/strengthen).*  

confidence: **medium**  


> 'Enforce'=upgrade/strengthen. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CEquipEnforceTransferInfo  

*Static config for equipment 'enforce' (enhancement/reinforce) transfer rules — moving enhancement level between equipment. Rows precached per entry at load.*  

confidence: **medium**  


---
### CEquipFoundInfo  

*Config related to equipment discovery/foundation (likely equipment base/foundry data). Only the singleton-manager accessor was recovered.*  

confidence: **low**  


> Stub; only GetManagers recovered. 'Found' meaning ambiguous (found/foundation/foundry).

---
### CEquipFoundRuleInfo  

*Rules for the equipment forging ('Found') system.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CEquipGroupInfo  

*Equipment grouping/set-classification table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CEquipInfo  

*Static configuration record for a piece of equipment (armor/weapon gear). One instance per equip definition, owned by a CInfoManager<CEquipInfo> singleton and looked up by numeric id. Holds the item-id string, gender-specific model/appearance sub-structs, the owning suit/set id, and links to passive-skill and suit-skill group definitions.*  

confidence: **medium**  

related TLV: TlvEquipData, TlvEquipItem  


| field | offset | type | source |
|---|---|---|---|
| itemIdStr | 0x80 | char* | reader |
| modelDataMale | 0x6c | struct | reader |
| modelDataFemale | 0x84 | struct | reader |
| stateFlag | 0x120 | int | inferred |
| flag138 | 0x138 | int | inferred |
| levelOrStar | 0x28d | byte | inferred |
| suitCfgId | 0x27c | int | reader |
| derivedEquipVec | 0x258 | vector<int> | inferred |
| ownerSystem | 0x0c | ptr | inferred |


**Constants:** EquipSlotCount=24 (0x18 loop in 111e0f20), VariantFlagMask=0x800000

**Formulas / rules:**
- CInfoManager id lookup (shared): idx = id - mgr[0x30(minId)]; if 0<=idx<mgr[0x24(count)] then entry = pageTable[mgr+0x20][idx / mgr[0x28(pageSize)]][idx % pageSize]
- Suit set bonus active test (113023d0): activeTier requires equippedPieceCount >= tier.requiredPieces (local_a8 = equippedCount - matched; local_ac = required - present); bonus disabled when local_a8 < local_ac

> All 8 methods were auto-labeled 'CEquipInfo::GetManagers'; only 1052bd00 is actually the manager/singleton accessor. TlvEquipData/TlvEquipItem describe the runtime networked item instance, NOT this static config class, so treat the mapping as directional only (field offsets here do not correspond to the TLV layout).

---
### CEquipLevelUpConsumeInfo  

*Config for materials/currency consumed when leveling up equipment. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CEquipLevelUpInfo  

*Static config for equipment level-up rules/costs. Rows precached per entry and linked to their item base at load.*  

confidence: **medium**  


---
### CEquipPlanInfo  

*Config record for a saved equipment plan/loadout (id + name + equipment list). Consumer method rebuilds a red-black map keyed by planId. Maps to the runtime save struct TlvEquipPlan (planId/name/equipCnt/equipList).*  

confidence: **medium**  

related TLV: TlvEquipPlan, TlvEquipPlanList  


| field | offset | type | source |
|---|---|---|---|
| planId | 0x10 | int32 | inferred |
| name | 0x14 | char* | inferred |
| enabledFlag | 0x18 | bool | inferred |


> Ordered-map nodes: node+2/+3 = left/right children, node+4 = key. TLV is the network/save form; this Info is the config form.

---
### CEquipQuenchRuleInfo  

*Static config for equipment 'quench' (refine/temper) rules. Rows precached per entry at load.*  

confidence: **medium**  


---
### CEquipQuickLevelUpInfo  

*Static config for equipment quick level-up (batch/one-click leveling) rules. Rows precached per entry at load.*  

confidence: **medium**  


---
### CEquipRandBaseItemRuleInfo  

*Rule table for random base-item selection when generating equipment.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CEquipRandRuleInInfo  

*Input rules for equipment random generation.*  

confidence: **low**  


> Doubled 'In' likely 'RandRule In(put)'. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CEquipRankUpInfo  

*Static config for equipment rank-up (tier promotion) rules. Rows precached per entry and linked to item base at load.*  

confidence: **medium**  


---
### CEquipReColorRuleInfo  

*Rules for recoloring equipment (dye/palette constraints). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CEquipRelationAttrInfo  

*Data-registry for equipment set/relation attribute bonuses. Each entry has a weight (+0x18), an attribute-id sub-list (+0x2c..0x30) and threshold/pair data (+0x24). Provides matching-collection and a weighted random roll (capped at 6 selections) of relation attributes for a piece of equipment, then links associated buffs.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| weight | 0x18 | int32 | inferred |
| attrIdList_begin | 0x2c | int32* | inferred |
| attrIdList_end | 0x30 | int32* | inferred |
| thresholdPairs | 0x24 | struct[2] | inferred |


**Formulas / rules:**
- RollRelationAttrs: random r = FUN_11a89331(); accumulate sum += entry.weight(+0x18) over candidates; select entry when r < accumulated sum (weighted pick); at most 6 attributes selected

> Max-6 cap suggests up to 6 relation/set attribute slots per equipment. Offsets inferred from arithmetic only.

---
### CEquipRelationInfo  

*Defines relationships between equipment pieces (set/series/upgrade relations). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CEquipSuitEffectInfo  

*Static definition of an equipment SUIT (armor-set) effect: which suit id it belongs to, its set-skill groups and per-tier skill entries (stride 0x20), and the piece-count thresholds that activate them. Owned by a CInfoManager<CEquipSuitEffectInfo> singleton. Works together with CSuitCfgInfo and CEquipSuitSkillGroupInfo to compute active set bonuses from equipped gear.*  

confidence: **medium**  

related TLV: TlvSuitSkillGroups  


| field | offset | type | source |
|---|---|---|---|
| suitId | 0x10 | int | inferred |
| effectEntries | 0x24 | vector<Effect[0x20]> | reader |
| effectType | 0x10 | int | reader |
| suitIdList | 0x54 | vector<int> | reader |
| skillMap | 0x78 | rbtree | inferred |
| resultRecords | 0x104 | vector<Rec[0x14]> | inferred |
| resolvedSkillIds | 0x8c | vector<int> | inferred |


**Constants:** EquippedSlotScan=24 (0x17), EffectEntryStride=0x20, SkillTypeTagFiltered=0xc, ComputeStateFlag=0x20000

**Formulas / rules:**
- Set-bonus activation (11212bc0/11464860/11300ec0): count equipped pieces with CEquipInfo.suitCfgId == node.suitId; a tier entry activates when type==0, or type==1 and player rank/piece-count (FUN_11572960 / FUN_1172a750) >= entry.threshold (entry+0x14 list[1])

> All 7 methods auto-labeled 'CEquipSuitEffectInfo::GetManagers'; only 10856be0 is the accessor. 11212bc0 is the reusable resolver called from CEquipInfo (1120fbf0) and CUnderclothesInfo (11211080). TlvSuitSkillGroups is conceptually related (suit skill groups) but is a serialization struct, not a field-for-field map of this config class.

---
### CEquipUpgradeInfo  

*Equipment upgrade path config: for each upgradable equip, defines a chain of upgrade steps, each with an item-cost list, validated against CEquipInfo and CItemBaseInfo.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| equipId | 0x14 | int32 | inferred |
| steps_begin | 0x1c | record* (stride 0xB0) | inferred |
| steps_end | 0x20 | record* | inferred |


**Constants:** UpgradeStepStride=0xB0, ItemCostPairStride=0x8

**Formulas / rules:**
- step struct stride = 0xB0; each step has item-cost list at step+0x4..step+0x8 with stride 8 ({itemId, count})

> Only the validation/load method recovered (single big method). Step and cost-pair offsets inferred from iteration strides.

---
### CEquipWakeInfo  

*Config for equipment 'wake'/awakening (unlocking latent equipment powers). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CExpandInventorySlotInfo  

*Config for expanding inventory/bag slot capacity (cost per expansion step). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CGiftBagGroupInfo  

*Groups multiple gift-bag (item bundle) definitions; iterates child CGiftBagInfo elements. Only factory boilerplate recovered.*  

confidence: **medium**  


> Cross-reference: this group class owns/iterates CGiftBagInfo children. No field offsets recovered.

---
### CGiftBagInfo  

*Gift-bag / reward-package definition table. Records belong to gift-bag groups; recovered logic resolves a bag's group, computes group-level reward values, and collects bags by group.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| groupInfoPtr | 0x2c | ptr | inferred |
| resolvedMaxValue | 0x34 | int | inferred |
| keyObjPtr | 0x2c | ptr | inferred |


---
### CHuntingBoxGroupInfo  

*Group table for hunting boxes (loot/reward containers). Only factory boilerplate recovered.*  

confidence: **low**  


> Purpose inferred from name; no field data recovered.

---
### CHuntingBoxInfo  

*Static data for hunting reward boxes/chests that grant equipment. Consumers iterate boxes resolving equipment (CEquipInfo) rewards.*  

confidence: **low**  


> Cross-reference to CEquipInfo confirms equipment-reward boxes.

---
### CItemAOEInfo  

*Area-of-effect parameters for items (e.g. traps/bombs).*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CItemAutoUseInfo  

*Config for items that are auto-used (auto-consume) conditions.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CItemBaseInfo  

*Static item-definition (base item config) record loaded into a CInfoManager<CItemBaseInfo> singleton and looked up by item id. Holds an item's id, internal/config name, display name, type/subtype category, per-type stack/carry limit and various boolean gameplay flags. Almost none of the 41 grouped functions are true members of the class: the auto-grouper collected every function that references the manager-singleton name string "CItemBaseInfo::GetManagers". Most are consumers in OTHER classes (bag/inventory validators, resource precachers, crafting/equip/NPC-sale logic) that resolve the item table via the singleton and do a 2D-sparse-array GetById.*  

confidence: **medium**  

related TLV: TlvItem (0x99) — RUNTIME item instance (itemId int64, itemType, posColumn, posGrid, count, bind, attrCount, ext-attr arrays), NOT this static config record; field layouts differ. CItemBaseInfo is the server-side static item definition table, so treat the mapping as thematic only.  


| field | offset | type | source |
|---|---|---|---|
| id | 0x10 | int32 | inferred |
| configName | 0x14 | char* | inferred |
| itemType | 0x34 | int32 | inferred |
| subType | 0x38 | int32 | inferred |
| stackLimit | 0x48 | uint32 | inferred |
| flag_0x68 | 0x68 | uint8 | inferred |
| displayName | 0xb4 | char[32] | inferred |
| flag_0xc4 | 0xc4 | uint8 | inferred |
| field_0x11c | 0x11c | int32 | inferred |
| field_0x16c | 0x16c | int32 | inferred |


**Constants:** MaxNameSearchResults=200

**Formulas / rules:**
- CInfoManager::GetById(id): let base=mgr+0x30, count=mgr+0x24, divisor=mgr+0x28, array=mgr+0x20. Valid iff id!=-1, !(id==0 && base!=0), divisor!=0, and 0 <= (id-base) < count. Then entry = array[(id-base)/divisor][(id-base)%divisor] (2D sparse bucket table). Same struct viewed via FUN_11679e10 result uses word indices [0xc]=base,[9]=count,[10]=divisor,[8]=array; linear enumeration uses [5]/[6] begin/end pointers, count=([6]-[5])>>2.
- Bag validation error codes (written to op-struct+0x50): 0x28=per-item stack limit exceeded (offending id at +0x58), 0x29=grid/slot capacity exceeded, 0x2a=category capacity, 0x32/0x34/0x40=id out of table range, 0x35=empty/invalid op.
- Needed-slots for a stack add ~ ceil((requiredCount - existingCount) / perStackMax) i.e. (required - existing - 1 + perStack)/perStack (114014c0).
- NPC sale price computed with double math + ceil() over an item price/component vector (114b5ed0).
- Drop roll count = base + floor(rand01 * (max-min+1)) then item/limit validated (114bcea0).

> The 41 grouped functions share only the singleton-name string "CItemBaseInfo::GetManagers"; only ~4 are genuine CItemBaseInfo members (the manager accessor 10254050 and its inlined duplicates 11a87b20/11a880c0, plus the table query FindItemsByName 1159dc20). The rest live in other classes (bag validators, resource precachers, crafting/equip/NPC/guild logic) and merely resolve items through the singleton. vtable offsets confirmed: +0x18=GetId, +0x28=GetCount. All record field offsets are inferred from consumer usage (Ghidra had no param types); none came from a dedicated DebugFormat/TLV reader in this bundle, so offset confidence is medium. The dump function 1187f880 is the strongest evidence for name fields and manager layout.

---
### CItemBoxGroupInfo  

*Static-data for loot/reward box GROUPS (a group aggregates several CItemBoxInfo tables). The core helper performs the weighted random roll that opens a box group and produces the reward item list; another warms up all groups at load.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| itemBoxEntryWeight | 0x10 | int | reader |


**Constants:** ItemBoxEntryStride=0x24, RewardRowStride=0x40

**Formulas / rules:**
- Weighted roll: draw r in [0, sumWeights); walk entries accumulating weight(+0x10) until cumulative > r to pick the winning item. RNG via FUN_11a89331 (rand+1 style).

> CItemBaseInfo (11679e10 name lookup) is used with the shared word-offset manager layout ([8]page [9]count [10]pageSize [0xc]baseId) to resolve item names into the reward rows.

---
### CItemBoxInfo  

*Item-box / container definition table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CItemColumnInfo  

*Static config for item bag column/slot layout. Populates a per-owner column table (up to 11 columns) from a config key.*  

confidence: **high**  


**Constants:** MaxColumns=11 (loop 0..10, overflow guard at >10), returns 10 when key==0, 0xd on lookup miss

---
### CItemConvInfo  

*Item conversion/exchange table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CItemDecomposeInfo  

*Static data for item decomposition/salvage recipes (breaking an item down into component materials).*  

confidence: **low**  


> Only manager accessors and per-record iterators recovered; no field offsets.

---
### CItemGroupInfo  

*Grouping/categorization of items (item bundles or categories). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CLegendConsumeInfo  

*Config for consumption (materials/currency) in a legend upgrade/craft system. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CLegendPearlItemInfo  

*Item definition for 'legend pearl' consumables/currency used in a legend system. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CLegendRandomAttrInfo  

*Static config for legendary-equipment random attribute rolls. Rows precached per entry at load.*  

confidence: **medium**  


---
### CLevelBoxRewardInfo  

*Data-registry for level-up 'box' rewards. An entry lists {boxRewardId, rollCount} pairs (this+0xc..0x10, stride 8). On first use it rolls each box rollCount times using a weighted item pool, resolves items via CItemBaseInfo, splits stackable items into multiple stacks, and produces reward records into this+0x3c and this+0x58; a done-flag at this+8 prevents re-rolling.*  

confidence: **medium**  

related TLV: TlvLotteryBoxItemPool, TlvLotteryBoxContainer  


| field | offset | type | source |
|---|---|---|---|
| builtFlag | 0x8 | uint8 | inferred |
| boxList_begin | 0xc | struct* | inferred |
| boxList_end | 0x10 | struct* | inferred |
| singleRewards | 0x3c | vector | inferred |
| stackRewards | 0x58 | vector | inferred |


**Formulas / rules:**
- Weighted pick: threshold = rand01 * sum(weights); walk pool subtracting weight(+4) until threshold < weight; DAT_11de98f0 is 1/RAND_MAX scale factor
- Stack quantity = min(+8) + round(rand01 * (max(+0xc) - min(+8) + 1)) roughly; stackable split when item+0x34==2 && item+0x2a8

> Same weighted-pool roll idiom as CSRLMaterialLotteryInfo; conceptually aligns with the LotteryBox item-pool TLVs.

---
### CManufactureInfo  

*Static config for manufacturing/crafting recipes. Rows precached per entry at load.*  

confidence: **medium**  


---
### CManufactureIngredientLearnInfo  

*Crafting: config for learning/unlocking manufacture (crafting) ingredients.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CManufactureInitUnlockInfo  

*Crafting: initially-unlocked manufacture recipes table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CManufactureProficiencyInfo  

*Crafting proficiency (skill-level) progression table.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CMaterialTagDescInfo  

*Descriptions for material tags/categories (crafting material classification). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CNormalItemInfo  

*Normal/consumable item definition table. Recovered logic performs inventory stack-capacity and add-item validation using per-item stack sizes and tag-based item limits.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| itemId | 0x0 | int | inferred |
| count | 0x4 | int | inferred |
| subtype | 0x8 | int | inferred |


**Constants:** AddRequestEntryStride=0xc, TagGroupEntryStride=0x20, Err_Full=0xc, Err_NotFound=10, Err_NotStackable=9

**Formulas / rules:**
- needed slots per item = ceil(count / stackSize) where stackSize = FUN_116c04a0(subtype) or FUN_116c0400() for special stackable

---
### CPhysicalCardTypeInfo  

*Definition of physical (stamina/energy) card types used for entering activities. Only the singleton-manager accessor was recovered.*  

confidence: **low**  


> Stub; only GetManagers recovered. 'Physical card' meaning inferred.

---
### CSRLItemBoxDescriptionInfo  

*'SRL' subsystem: description entries for item boxes.*  

confidence: **low**  


> 'SRL' subsystem meaning not recovered. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CSRLItemPoolInfo  

*Static definition of an SRL (item-box/lottery) reward pool. Drives the box-opening roll: weighted random selection of item id/count pairs plus a shuffled fixed-reward block.*  

confidence: **medium**  

related TLV: TlvLotteryBoxItemPool, TlvSearchItemPool  


| field | offset | type | source |
|---|---|---|---|
| outItemId | n/a | int | reader |


**Constants:** rewardSlots=8, requiredWeightSum=8, poolPairStride=8

**Formulas / rules:**
- weight sum must equal 8 to roll
- slot pick: idx = rand() % (poolEntryCount); poolEntryCount = (end-begin)>>3 (8-byte id/count pairs)
- fixed block shuffle: 8-element Fisher-Yates over reward set _DAT_11de9b30..

> Sibling classes CSRLItemBoxDescriptionInfo, CSRLItemLotteryInfo. Likely related to TlvLotteryBoxItemPool / TlvSearchItemPool wire structs.

---
### CSRLMaterialLotteryInfo  

*Data-registry for the 'SRL' material lottery / item-box. Given a box description (CSRLItemBoxDescriptionInfo) it either emits a fixed 8-slot result or performs a weighted lottery: builds a weight map (RB-tree keyed by entry+0x4c) of lottery entries, filters CNormalItemInfo by predicate, and fills 8 output result slots (stride-5 records {?, itemId, count, ...}).*  

confidence: **medium**  

related TLV: TlvLotteryBoxItemPool, TlvLotteryBoxContainer, TlvDragonBoxLotteryData  


| field | offset | type | source |
|---|---|---|---|
| weightKey | 0x4c | int32 | inferred |
| itemId(CNormalItemInfo) | 0x10 | int32 | inferred |


**Formulas / rules:**
- Output is always 8 result slots (stride-5 records). Roll selects among CNormalItemInfo entries whose +0x4c key matches an entry weight bucket; empty picks fall back to the box's fixed items.

> 'SRL' prefix meaning unresolved. Behavior matches the lottery-box family; 8-slot fixed output is notable.

---
### CSoulStoneAttrInfo  

*Soul-stone attribute table entry. Each record carries an attribute-id list and a value/type; methods sum attribute values (optionally by type), apply attribute totals to a character, and collect attributes for a given entity.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| value | 0x18 | int32 | reader |
| attrType | 0x30 | int32 | reader |
| attrIdList | 0x50..0x54 | vector<int> | reader |
| subAttrArray | 0x14 (record[5]) | ptr | reader |
| subAttrCount | 0x18 (record[6]) | int32 | reader |


**Constants:** ClampMax=0x7fffffff, AttrResolveTag=0x29, StatOpCode=0x27

**Formulas / rules:**
- char.stat(+0x28) += sum(subAttr+0x38); clamp to 0x7fffffff
- second stat applied via vtable+0x278(sum(subAttr+0x48), 0x27, 0)

> Note offset overload: record+0x18 is 'value' in the sum methods but sub-attr +0x38/+0x48 are the applied stats. The '{0}:{1}' string is a debug/label build. rb-tree is the owner object's std::map, not the info table.

---
### CSoulStoneLevelUpInfo  

*Config for leveling up soul stones (gem/enhancement stone progression). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CSoulStoneStageUpInfo  

*Soul-stone stage-up (upgrade) config; references CSoulStoneAttrInfo for the resulting attributes. Only factory boilerplate + cross-ref recovered.*  

confidence: **low**  


> Cross-reference to CSoulStoneAttrInfo. No field offsets recovered.

---
### CStarLightStoneInfo  

*Static data for 'starlight stone' gems socketed into star-stone slots. Records are keyed by an id and a level; consumers pick the correct stone tier for a value and remove/refund socketed stone items.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| slotArray | 0x4c | struct[3-dword stride] | inferred |
| levelTree | 0x14 | tree | inferred |


**Constants:** MaxStoneTiers=4, ItemRemoveType=0x21

**Formulas / rules:**
- slot index -> stone id uses (index+1) in FindStoneTierByValue / RefundSlotStones

> Related to CStarStoneSlotInfo. Tier count 4 and item-op type 0x21 are load-bearing constants.

---
### CStarStoneLevelAttrInfo  

*Config record mapping star-stone level to attribute bonuses (star stones are socketable/decoration attributes). Consumer applies level-based attributes; only manager accessors + one applier recovered.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| attrTree | 0x30 | rbtree | inferred |
| value | 0x44 | int32 | inferred |


**Constants:** AttrSlots=5, ApplyOpCode=0x2d

> Field semantics low-confidence; the DebugFormat/reader for this class is not in the bundle.

---
### CStarStoneLevelExpInfo  

*Star-stone (gem) level-up EXP curve. Each level row stores five threshold/attribute values; provides a GetLevelByExp that maps accumulated EXP to a star-stone level by walking the curve.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| attrExpCol0 | 0x18 | uint | reader |
| attrExpCol1 | 0x14 | uint | reader |
| attrExpCol2 | 0x1c | uint | reader |
| attrExpCol3 | 0x20 | uint | reader |
| attrExpCol4 | 0x24 | uint | reader |


**Formulas / rules:**
- GetLevelByExp(attr, exp): for L in 1..maxLevel: threshold = row(L)->col[attr]; if exp < threshold return L-1 (previous level); returns maxLevel when exp exceeds all thresholds. Level->row resolved via the manager 2D grid (base +0x30, cols +0x28, count +0x24, row-array +0x20).
- attr column map: 0->+0x18, 1->+0x14, 2->+0x1c, 3->+0x20, 4->+0x24

> Element field offsets (+0x14..+0x24) are confirmed from the switch in GetLevelByExp. The +0x20/+0x24/+0x28/+0x30 grid offsets belong to the shared CInfoManager container. No exact StarStone TLV doc found.

---
### CStarStoneSlotInfo  

*Static config for Star Stone (gem) socket slots. Computes how many slots are unlocked given a player value (level/score).*  

confidence: **high**  


| field | offset | type | source |
|---|---|---|---|
| unlockRequirement | 0x14 | uint | reader |


**Constants:** MaxSlots=4 (loop 1..4)

---
### CStarStoneTinyInfo  

*Resolves 'tiny' star-stone (small gem) attribute values from an item/gem instance descriptor. Provides a query that matches a property descriptor and reads attribute values from the star-stone level grid.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| descRecordArrayBegin | 0x164 | ptr | reader |
| descRecordArrayEnd | 0x168 | ptr | reader |
| recordTag | 0x04 | int | reader |
| recordStarStoneId | 0xf8 | int | reader |
| recordStarStoneLevel | 0xfc | int | reader |
| elemAttr0 | 0x18 | uint | reader |
| elemAttr1 | 0x14 | uint | reader |
| elemAttr2 | 0x1c | uint | reader |
| elemAttr3 | 0x20 | uint | reader |
| elemAttr4 | 0x24 | uint | reader |
| elemAux | 0x28 | uint | reader |


**Constants:** DescMatch type=1 subtype=8 id=0x16, RecordSelectTag=0xbdb(3035), RecordStride=0x114

> Shares the star-stone level grid layout with CStarStoneLevelExpInfo (same +0x14..+0x28 element fields and +0x20/+0x24/+0x28/+0x30 container grid). Attribute switch order matches CStarStoneLevelExpInfo.

---
### CSuitCfgInfo  

*Static-data config for equipment SUITS (armor sets). Records are indexed by suit id; the helpers compute which suits are active from a player's equipped pieces, evaluate suit-effect piece thresholds, and apply suit/passive skill effects. There appear to be 0x17 (23) suit config slots.*  

confidence: **medium**  

related TLV: TlvSuitSkillGroups  


| field | offset | type | source |
|---|---|---|---|
| equippedPartsArray | 0x16c8 | array | reader |


**Constants:** SuitSlotCount=0x17(23), EquipmentSlotCount=10, SuitEffectEntryStride=0x6c, SuitEffectCondType_PieceCount=2

**Formulas / rules:**
- Suit effect active when equippedPieceCount >= requiredPieces, where requiredPieces is the CEquipSuitEffectInfo entry with condType(+0x18)==2.

> 0x17 recurring loop bound strongly implies 23 suit config entries. Piece-threshold logic verified in 11301170.

---
### CSuitInfo  

*Definition of suits/armor sets (outfit sets). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CSuperCraftConsumeInfo  

*Config for materials/currency consumed by 'super craft' (advanced crafting/upgrade). Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CUnderclothesInfo  

*Static definition/assembler for a character's base 'underclothes' avatar appearance. Its main method composes the full avatar model set from face (CFaceInfo), hair (CHairInfo), and the CEquipInfo pieces occupying the visible gear slots (with gender variants and CSuitInfo defaults / player overrides), then computes the resulting suit set-skill effects. Owned by a CInfoManager<CUnderclothesInfo> singleton.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| hasCustomData | 0x8e | bool | reader |
| appearanceValid | 0x88 | bool | reader |
| forceBaseModel | 0x89 | bool | inferred |
| hasOverrideSlots | 0x8b | bool | reader |
| usesSuitInfo | 0x8c | bool | reader |
| specialFlag8d | 0x8d | bool | reader |
| equipModelSlots | 0x30 | array | inferred |
| suitEffectVec | 0x7c | vector | inferred |


**Constants:** VisibleGearSlots=5 (slot ids 1..5), AlternateSlotBase=0xb (slot n alt = n+0xb -> 0xc..0x10), GenderMaleOffsets: face/hair +0x14, equip +0x6c, GenderFemaleOffsets: face/hair +0x2c, equip +0x84

**Formulas / rules:**
- Per-slot shown-equip resolution priority: param_3 override[slot] > (no custom suit) CSuitInfo default[slot] > slot's stored CEquipInfo id; local_120 gender selects model sub-struct offset (male +0x6c / female +0x84)
- Slot model string pulled from CEquipInfo model sub-struct fields +0x10 (path) and +0x14 (name)

> Only 2 methods; both auto-labeled 'GetManagers'. 1052c770 is the true accessor. 11211080 is a large avatar-composition routine (references CFaceInfo, CHairInfo, CEquipInfo, CSuitInfo) and is the interesting logic. Offsets on param_1 are on the OUTPUT appearance struct being filled, not on a CUnderclothesInfo instance. No clean TLV counterpart found.

---
### CWardrobeInfo  

*Definition of wardrobe/fashion (cosmetic outfit) entries. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
