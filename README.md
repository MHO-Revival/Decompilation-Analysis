# MHO Reverse-Engineering — Master Index

Goal: recover Monster Hunter Online (Tencent/Capcom, CryEngine 3.3.8) client logic from CryGame.dll / CryAction.dll to support a private-server rebuild (Arrowgene.MonsterHunterOnline).

## Method
Ghidra headless full-analyzed all 3 binaries into a persistent project. Functions were auto-named from embedded `Class::Method` strings + RTTI, then reverse-engineered in category rounds by a fan-out of AI agents reading decompiled C; verified names applied back into the Ghidra DB (tagged [RE-R1]/[RE-R2]/…). MHOClient.exe is TenProtect-packed+virtualized (not statically recoverable); game logic lives in the DLLs.

## Rounds completed
| Round | Category | Units | Renamed | Docs |
|------|----------|-------|---------|------|
| 1 | C*Info data schema | 382 classes | 1287 | schema/docs/(item,activity,economy,combat,quest,pet,skill,weapon,monster,social,ui,misc).md |
| 2 | Combat / damage | 116 functions | 116 | schema/docs/combat.md |
| 3 | Network / RPC | 1011 functions | 1011 | schema/docs/network.md ; schema/network/TLV_DISCREPANCIES.md |

## Key artifacts
- **Ghidra project**: scratchpad/ghidra_proj (open in Ghidra GUI to browse renamed funcs)
- **schema/docs/** — human-readable schema + formulas per category
- **schema/network/TLV_DISCREPANCIES.md** — corrections to the auto-generated Arrowgene TLV structs
- **byclass/** — per-class decompiled C bundles
- **strings/** — full string dumps + inventories (methods.txt, CInfo_classes.txt)
- **schema/*/_ALL.json** — machine-readable findings (addresses, formulas, fields)

## Notable recovered logic
- CInfoManager::GetById slotted-array data-table lookup (used by every C*Info table)
- CDamageDampingInfo::EvalDampingMultiplier — cubic damage-damping curve
- CMHHitInfo hit-message struct (shooter/target/weapon/projectile/material/type/bulletType/dmg)
- Loot/drop roll counts, NPC sale pricing, weighted-pick RNG, per-mille skill probabilities
- Hit validation ([Security]/EvpDamageChecker) error-code taxonomy + fields
- CDamageInfo::ParseAttackInfoXml is virtualized (TenProtect) — attack data parser not statically recoverable

## Candidate next rounds
progression/economy depth · quests · pets · social/guild · items&inventory systems · skills/buffs · AI/spawn · resolve RMI names from SRMIParams descriptors · CryAction engine-side netcode
