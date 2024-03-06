/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSpecial_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct DunDefSpecial.CTF_DDGRI.CTFTeamData
// 0x0034
struct FCTFTeamData
{
	int                                                TeamScore;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TeamTowerUnits;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FColor                                      TeamColor;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                TeamLinearColor;                                  		// 0x000C (0x0010) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class APlayerReplicationInfo* >            TeamPlayers;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct DunDefSpecial.DunDef_VerticalTowerMover.TowerInfo
// 0x0008
struct FTowerInfo
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSpecial.DunDef_VerticalTowerMover.PlatformInfo
// 0x0014
struct FPlatformInfo
{
	class AInterpActor*                                Platform;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OldZCoordinate;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTowerInfo >                        TowerCache;                                       		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit.TimeLimitAddition
// 0x0010
struct FTimeLimitAddition
{
	int                                                Temp;                                             		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< float >                                    PlayerIndexTimeLimitAddition;                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct DunDefSpecial.DunDefMapInfo_Delivery.Times
// 0x000C
struct FTimes
{
	TArray< float >                                    waveNumber;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct DunDefSpecial.DunDefMapInfo_Delivery.PerDifficulty
// 0x000C
struct FPerDifficulty
{
	TArray< float >                                    theDifficulty;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PreviewPoint
// 0x0010
struct FPreviewPoint
{
	class USkeletalMeshComponent*                      PreviewMeshes;                                    		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     PlacementPoint;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.SpawnSettings
// 0x001C
struct FSpawnSettings
{
	struct FRotator                                    RotationOffset;                                   		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocationOffset;                                   		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      SpawnActorTemplate;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_LeapSlam.HitTarget
// 0x0008
struct ADunDefPlayerAbility_LeapSlam_FHitTarget
{
	float                                              LastHitTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_SlamDash.HitTarget
// 0x0008
struct ADunDefPlayerAbility_SlamDash_FHitTarget
{
	float                                              LastHitTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_StanceBase.StatMultipliers
// 0x0010
struct FStatMultipliers
{
	unsigned long                                      bInverseMult : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              theMultiplier;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatExponent;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseAsPrimary : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_StanceLightning.StunnedActors
// 0x000C
struct FStunnedActors
{
	class ADunDefEnemy*                                stunnedEnemy;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    stunnedComponent;                                 		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              stunnedStartTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GlyphPattern
// 0x0080
struct FGlyphPattern
{
	struct FString                                     Description;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      glyph[ 0x3 ];                                     		// 0x000C (0x0003) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAffectsPlayers : 1;                              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAffectsTowers : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAffectsEnemies : 1;                              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAffectsAllies : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAffectsNonAllies : 1;                            		// 0x0010 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bPositiveBoost : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	TArray< unsigned char >                            boostTypes;                                       		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PctToAffect;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PctToAffectExp;                                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PctToAffectMax;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      PctToAffectInvert : 1;                            		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              dmgBoost;                                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              dmgBoostExp;                                      		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      resistanceBoostInvert : 1;                        		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      dmgBoostInvert : 1;                               		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              resistanceBoost;                                  		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              resistanceBoostExp;                               		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveTime;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHealthAsDmg : 1;                                 		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              HealthModifyPct;                                  		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPctToHealExp;                               		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthMaxHealPct;                                 		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      dmgType;                                          		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            disableAbilitiesofType;                           		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      SPEC_DoTowerLevels : 1;                           		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      SPEC_DownGradeTower : 1;                          		// 0x0068 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                SPEC_numTowersToLevel;                            		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SPEC_towerUpgradeLevel;                           		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      SPEC_GoldEnemies : 1;                             		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      SPEC_StunEnemies : 1;                             		// 0x0074 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      SPEC_TimeDilation : 1;                            		// 0x0074 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              SPEC_TimeDilationAmt;                             		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   patternSound;                                     		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GlyphIcon
// 0x0020
struct FGlyphIcon
{
	float                                              CurrentValue;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStopped : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      glyphWheelSlots[ 0x5 ];                           		// 0x0008 (0x0005) [0x0000000000000001]              ( CPF_Edit )
	float                                              spinSpeed;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParamName;                                        		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bScrollDown : 1;                                  		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct DunDefSpecial.DunDefPurifyingBomb.BonusDamageType
// 0x0008
struct FBonusDamageType
{
	unsigned char                                      ClassificationType;                               		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BonusMult;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSpecial.DunDefTower_Present.spawnChances
// 0x0014
struct FspawnChances
{
	class AActor*                                      ActorArchetype;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              chanceToSpawnActor;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                minNumToSpawn;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                maxNumToSpawn;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUsed : 1;                                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DunDefSpecial.DunDefTower_Present.spawnTypes
// 0x0020
struct FspawnTypes
{
	TArray< struct FspawnChances >                     spawnType;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              spawnTypeChance;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StatDisplayName;                                  		// 0x0010 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bDoManaSpawn : 1;                                 		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSpawnDroppedEquipment : 1;                       		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bFailed : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct DunDefSpecial.DunDefTower_TripWire.BeamTrippers
// 0x001C
struct FBeamTrippers
{
	class AActor*                                      BeamTripper;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    stunnedComponent;                                 		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastTripTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              StunTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsStunned : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      AltBeamTripper;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    stunnedAltComponent;                              		// 0x0018 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct DunDefSpecial.DunDefTower_SummonEnemy.SummonedBoosts
// 0x0024
struct FSummonedBoosts
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              boostExp;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              boostBaseValue;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      levelUpStat;                                      		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInvertValue : 1;                                 		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< float >                                    UpgradeLinearBoostMultipliers;                    		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDisplayToolTip : 1;                              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif