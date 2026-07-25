# MHO RMI Opcode / Handler Map — COMPLETE

136 CryEngine entity RMIs across CryGame.dll + CryAction.dll, all handlers renamed to `RMI_<Class>_<Method>`.

C2S (client->server, Sv*): 57 · S2C (server->client, Cl*): 79

**Wire opcode** = runtime registration order per network aspect; authoritative key = (class, method, direction).


## CInventory  [CryAction.dll]  (9)
| dir | method | handler |
|---|---|---|
| C2S | SvReq_AddEquipmentPack | `1088a4e0` |
| C2S | SvReq_AddItem | `1088a1c0` |
| C2S | SvReq_RemoveAllAmmo | `1088a140` |
| C2S | SvReq_RemoveAllItems | `1088a0c0` |
| C2S | SvReq_RemoveItem | `1088a2c0` |
| C2S | SvReq_SetAmmoCount | `1088a3c0` |
| S2C | Cl_RemoveAllAmmo | `1088a700` |
| S2C | Cl_SetAmmoCapacity | `1088a780` |
| S2C | Cl_SetAmmoCount | `1088a5e0` |

## CVehicle  [CryAction.dll]  (7)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestChangeSeat | `109dd3d0` |
| C2S | SvRequestLeave | `109dd4a0` |
| C2S | SvRequestUse | `109dd310` |
| S2C | ClAbandonWarning | `109dd7e0` |
| S2C | ClRequestLeave | `109dd570` |
| S2C | ClSetAmmo | `109dd640` |
| S2C | ClSetupWeapons | `109dd720` |

## CActor  [CryGame.dll]  (17)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestDropItem | `10a4d540` |
| C2S | SvRequestPickUpItem | `10a4d650` |
| C2S | SvRequestUseItem | `10a4d700` |
| S2C | ClAddAmmo | `10a4e2a0` |
| S2C | ClClearInventory | `10a4d8a0` |
| S2C | ClDrop | `10a4d930` |
| S2C | ClKill | `10a4dfe0` |
| S2C | ClMoveTo | `10a4e0b0` |
| S2C | ClPickUp | `10a4d7b0` |
| S2C | ClRevive | `10a4dd20` |
| S2C | ClReviveInVehicle | `10a4de60` |
| S2C | ClSetAmmo | `10a4e1d0` |
| S2C | ClSetSpectatorHealth | `10a4dc70` |
| S2C | ClSetSpectatorMode | `10a4dba0` |
| S2C | ClSimpleKill | `10a4df50` |
| S2C | ClStartUse | `10a4da40` |
| S2C | ClStopUse | `10a4daf0` |

## CC4  [CryGame.dll]  (2)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestTime | `10b38a20` |
| S2C | ClSetProjectileId | `10b38950` |

## CC4Projectile  [CryGame.dll]  (2)
| dir | method | handler |
|---|---|---|
| S2C | ClSetPosition | `10b3add0` |
| S2C | ClStickToEntity | `10b3af10` |

## CGameRules  [CryGame.dll]  (41)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestChangeTeam | `10c28460` |
| C2S | SvRequestChatMessage | `10c27ea0` |
| C2S | SvRequestHit | `10c27a50` |
| C2S | SvRequestRadioMessage | `10c28000` |
| C2S | SvRequestRename | `10c282c0` |
| C2S | SvRequestSimpleHit | `10c27980` |
| C2S | SvRequestSpectatorMode | `10c28530` |
| C2S | SvStartVoting | `10c295a0` |
| C2S | SvVote | `10c29480` |
| C2S | SvVoteNo | `10c29510` |
| S2C | ClAddMinimapEntity | `10c28970` |
| S2C | ClAddSpawnGroup | `10c28810` |
| S2C | ClChatMessage | `10c27f50` |
| S2C | ClDamageIndicator | `10c28f70` |
| S2C | ClEnteredGame | `10c29750` |
| S2C | ClExplosion | `10c27b60` |
| S2C | ClForbiddenAreaWarning | `10c29040` |
| S2C | ClFreezeEntity | `10c27c90` |
| S2C | ClHitIndicator | `10c28ee0` |
| S2C | ClPlayerJoined | `10c297e0` |
| S2C | ClPlayerLeft | `10c298b0` |
| S2C | ClRadioMessage | `10c280a0` |
| S2C | ClRemoveMinimapEntity | `10c28a50` |
| S2C | ClRemoveSpawnGroup | `10c288c0` |
| S2C | ClRenameEntity | `10c28390` |
| S2C | ClResetMinimap | `10c28b00` |
| S2C | ClResetObjectives | `10c28e50` |
| S2C | ClSetGameStartTimer | `10c293d0` |
| S2C | ClSetGameTime | `10c29110` |
| S2C | ClSetObjective | `10c28b90` |
| S2C | ClSetObjectiveEntity | `10c28d70` |
| S2C | ClSetObjectiveStatus | `10c28c90` |
| S2C | ClSetPreRoundTime | `10c29270` |
| S2C | ClSetReviveCycleTime | `10c29320` |
| S2C | ClSetRoundTime | `10c291c0` |
| S2C | ClSetTeam | `10c28620` |
| S2C | ClShatterEntity | `10c27d70` |
| S2C | ClTaggedEntity | `10c28140` |
| S2C | ClTempRadarEntity | `10c281f0` |
| S2C | ClTextMessage | `10c286f0` |
| S2C | ClVotingStatus | `10c296a0` |

## CHomingMissile  [CryGame.dll]  (1)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestDestination | `10c878d0` |

## CItem  [CryGame.dll]  (5)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestEnterModify | `10cc4870` |
| C2S | SvRequestLeaveModify | `10cc4900` |
| S2C | ClAttachAccessory | `10cc47b0` |
| S2C | ClEnterModify | `10cc4990` |
| S2C | ClLeaveModify | `10cc4a20` |

## CMonster  [CryGame.dll]  (12)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestGrabOnLadder | `10d97480` |
| C2S | SvRequestHitAssistance | `10d979b0` |
| C2S | SvRequestJump | `10d97bc0` |
| C2S | SvRequestLeaveLadder | `10d975a0` |
| C2S | SvRequestParachute | `10d97c70` |
| C2S | SvRequestUnfreeze | `10d97900` |
| S2C | ClAnimGraphInput | `10d973d0` |
| S2C | ClAnimGraphTransition | `10d97310` |
| S2C | ClEMP | `10d97a60` |
| S2C | ClGrabOnLadder | `10d976c0` |
| S2C | ClJump | `10d97b10` |
| S2C | ClLeaveLadder | `10d977e0` |

## CNPC  [CryGame.dll]  (12)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestGrabOnLadder | `10ec0020` |
| C2S | SvRequestHitAssistance | `10ec0550` |
| C2S | SvRequestJump | `10ec0760` |
| C2S | SvRequestLeaveLadder | `10ec0140` |
| C2S | SvRequestParachute | `10ec0810` |
| C2S | SvRequestUnfreeze | `10ec04a0` |
| S2C | ClAnimGraphInput | `10ebff70` |
| S2C | ClAnimGraphTransition | `10ebfeb0` |
| S2C | ClEMP | `10ec0600` |
| S2C | ClGrabOnLadder | `10ec0260` |
| S2C | ClJump | `10ec06b0` |
| S2C | ClLeaveLadder | `10ec0380` |

## CPlayer  [CryGame.dll]  (12)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestGrabOnLadder | `10f03b60` |
| C2S | SvRequestHitAssistance | `10f04090` |
| C2S | SvRequestJump | `10f042a0` |
| C2S | SvRequestLeaveLadder | `10f03c80` |
| C2S | SvRequestParachute | `10f04350` |
| C2S | SvRequestUnfreeze | `10f03fe0` |
| S2C | ClAnimGraphInput | `10f03ab0` |
| S2C | ClAnimGraphTransition | `10f039f0` |
| S2C | ClEMP | `10f04140` |
| S2C | ClGrabOnLadder | `10f03da0` |
| S2C | ClJump | `10f041f0` |
| S2C | ClLeaveLadder | `10f03ec0` |

## CWeapon  [CryGame.dll]  (16)
| dir | method | handler |
|---|---|---|
| C2S | SvRequestCancelReload | `1110a400` |
| C2S | SvRequestFireMode | `1110a2c0` |
| C2S | SvRequestLock | `1110a6a0` |
| C2S | SvRequestReload | `1110a370` |
| C2S | SvRequestSetZoomState | `1110a800` |
| C2S | SvRequestShoot | `11109e70` |
| C2S | SvRequestShootEx | `11109f30` |
| C2S | SvRequestStartFire | `1110a040` |
| C2S | SvRequestStartMeleeAttack | `1110a160` |
| C2S | SvRequestStopFire | `1110a0d0` |
| C2S | SvRequestUnlock | `1110a770` |
| C2S | SvRequestWeaponRaised | `1110a8b0` |
| C2S | SvRequestZoom | `1110a210` |
| S2C | ClLock | `1110a490` |
| S2C | ClUnlock | `1110a560` |
| S2C | ClZoom | `1110a5f0` |