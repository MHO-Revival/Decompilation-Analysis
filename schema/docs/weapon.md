# Category: weapon  (19 classes)

### CBowWeaponInfo  

*Weapon definition for bow-type weapons. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CCrossBowWeaponInfo  

*Weapon definition for crossbow/bowgun-type weapons. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CFluteFxInfo  

*Static config for Hunting Horn (flute) melody/effect entries. Rows precached per entry at load.*  

confidence: **medium**  


---
### CFluteWeaponInfo  

*Static config for Hunting Horn (flute) weapon entries. Rows precached per entry and linked to flute-tune config at load.*  

confidence: **medium**  


---
### CGunLanceWeaponInfo  

*Gunlance weapon-type data table.*  

confidence: **high**  


> Weapon-type Info; recognizable MH weapon class. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CPianShouWeaponInfo  

*Sword-and-shield ('PianShou' 片手 = one-handed) weapon data table.*  

confidence: **medium**  


> 'PianShou'=片手, one-handed / sword&shield. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CProjectileVehicleWeaponInfo  

*Static data for vehicle-mounted projectile weapons (e.g. the 'Abrams_Cannon' ballista/cannon). Setup routine binds a weapon instance to its owner, copies ballistic params from a record, and iterates the vehicle-weapon table.*  

confidence: **low**  


| field | offset | type | source |
|---|---|---|---|
| ballisticA | 0xd8 | int32 | inferred |
| ballisticB | 0xdc | int32 | inferred |
| ballisticC | 0xe0 | int16->int32 | inferred |


**Constants:** ReferencedEntity="Abrams_Cannon"

> Record offsets rec+0xe2/+0xe6/+0x12a/+0xea/+0x7e/+0x82 read directly; 'Abrams_Cannon' is a referenced vehicle entity class.

---
### CRandomWeaponAbilityInfo  

*Static config for random-weapon abilities/affixes. Rows precached per entry at load.*  

confidence: **medium**  


---
### CRandomWeaponAddonGroupInfo  

*Static config for random-weapon addon (affix) groups. Rows are precached/registered per entry at load.*  

confidence: **medium**  


---
### CRandomWeaponAddonInfo  

*Config record for a random weapon addon/affix (a rollable bonus applied to a weapon), with a min/max weighted random range. Only manager accessors + consumers recovered.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| addonId | 0x00 | int32 | inferred |
| rollMin | 0x08 | int32 | inferred |
| rollMax | 0x0c | int32 | inferred |


**Formulas / rules:**
- rolledValue = rollMax - random01*(rollMax - rollMin); random01 = FUN_100ee450() * DAT_11de9a60

---
### CRandomWeaponInfo  

*Config for random weapon generation/drops. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CRandomWeaponRandBaseInfo  

*Base rolls table for randomly-generated weapons.*  

confidence: **low**  


> Registrar uses the FUN_102500e0 variant (no StcMbrNameSvr string) but same singleton role. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CRandomWeaponRandScoreInfo  

*Static config for random-weapon random-score (roll quality) tables. Rows precached per entry at load.*  

confidence: **medium**  


---
### CSwordWeaponInfo  

*Sword (great-sword class) weapon data table.*  

confidence: **medium**  


> Weapon-type Info. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CTadaoWeaponInfo  

*Long-sword ('Tadao' 太刀) weapon data table.*  

confidence: **medium**  


> 'Tadao'=太刀, long sword. Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
### CVehicleAmmoInfo  

*Vehicle (mount/ballista) ammo config keyed by ammo id; used to resolve ammo records and to fill ammo capacity into a loadout list.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| ammoCapacity | 0x58 | int32 | inferred |
| categoryId | 0x88 | int32 | inferred |


**Formulas / rules:**
- loadout entry ammo max = ammoRecord.field_0x58; entry matched by ammoRecord.field_0x88 == queryCategory

> Query methods operate on a caller loadout vector; the two named record offsets (0x58 capacity, 0x88 category) are on the CVehicleAmmoInfo record resolved via the sparse map.

---
### CWeaponTrailInfo  

*Visual weapon-trail (swing effect) definitions per weapon. Only the singleton-manager accessor was recovered.*  

confidence: **medium**  


> Stub; only GetManagers recovered.

---
### CWeaponTutorialInfo  

*Bidirectional map between weapon type/category and its tutorial id; also tests whether a tutorial exists.*  

confidence: **medium**  


| field | offset | type | source |
|---|---|---|---|
| keyA_weaponType | unknown | int32 (via vtable+0x30) | inferred |
| keyB_tutorialId | unknown | int32 (via vtable+0x34) | inferred |


> Fields accessed only through virtual getters (vtable+0x30/+0x34), so raw offsets not visible. keyA/keyB roles are symmetric (weaponType <-> tutorialId).

---
### CWeaponWakeUpRandRuleInfo  

*Random-roll rules for weapon 'wake up'/awakening.*  

confidence: **medium**  


> Only CInfoManager registration/accessor boilerplate recovered (no printer/reader/TLV), so field layout is unknown; purpose/category inferred from class name.

---
