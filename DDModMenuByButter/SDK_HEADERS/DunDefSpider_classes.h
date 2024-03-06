/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSpider_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class DunDefSpider.DunDefWebProjectile
// 0x009C (0x0444 - 0x03A8)
class ADunDefWebProjectile : public ADunDefHomingProjectile
{
public:
	class AActor*                                      AttachedTo;                                       		// 0x03A8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FWebbedActor >                      AffectingActors;                                  		// 0x03AC (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	float                                              MovementSpeedMultiplier;                          		// 0x03B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerAttackRateMultiplier;                        		// 0x03BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerAttackRateMultiplier;                       		// 0x03C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              pawnDamageModifier;                               		// 0x03C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnAttackSpeedMult;                              		// 0x03C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseStatusAffectTime;                             		// 0x03CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BasePawnStatusAffectTime;                         		// 0x03D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    AttachedVFX;                                      		// 0x03D4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             WebAttachTemplate;                                		// 0x03D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AttachedVFXScale;                                 		// 0x03DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AttachedVFXTranslation;                           		// 0x03E0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultBoundsHeight;                              		// 0x03EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultBoundWidth;                                		// 0x03F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebbedJumpZ;                                      		// 0x03F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PlayerAttachSocketName;                           		// 0x03F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            IgnoreActorsForWeb;                               		// 0x0400 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             WebbedEffect;                                     		// 0x040C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebbedEffectScale;                                		// 0x0410 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseOriginalHoming : 1;                           		// 0x0414 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseEnemyPawnDeboosting : 1;                      		// 0x0414 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bHasAttached : 1;                                 		// 0x0414 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bIsHoming : 1;                                    		// 0x0414 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bTempHitPawn : 1;                                 		// 0x0414 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bShutDown : 1;                                    		// 0x0414 (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      bScaleUp : 1;                                     		// 0x0414 (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	TArray< class UTowerDeboosterObject* >             TowerDeBoosters;                                  		// 0x0418 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< unsigned char >                            deboostingTypes;                                  		// 0x0424 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      towerBoostType;                                   		// 0x0430 (0x0001) [0x0000000000000000]              
	struct FVector                                     InitialTargetLocation;                            		// 0x0434 (0x000C) [0x0000000000000000]              
	float                                              ScaleTime;                                        		// 0x0440 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81178 ];

		return pClassPointer;
	};

	void GetBoostedTargets ( TArray< class APawn* >* boostedTargets );
	void NotifyOfBoostedRemoval ( class APawn* removedBoostee );
	float GetPawnBoostAmount ( unsigned char boostType );
	bool HasPawnBoostingType ( unsigned char boostType );
	void Destroyed ( );
	void RemoveWebEffect ( class AActor* theAct );
	void AddWebEffect ( class AActor* theAct );
	bool CanAddWebAffect ( class AActor* theAct );
	void EndRadiusDamage ( );
	void AffectVictim ( class AActor* Victim );
	void StartRadiusDamage ( );
	void SetHomingTarget ( class AActor* NewTarget, struct FVector HomingLocation );
	float GetTowerBoostAmount ( unsigned char checkBoostType );
	bool HasTowerBoostingType ( unsigned char checkType );
	class UDunDefTargetableInterface* GetTowerBoostingTarget ( );
	void EndAttachment ( unsigned long bClearList );
	void SetScaleTime ( unsigned long bDoScaleUp );
	void AddNewAffected ( class AActor* newAffected );
	void Expire ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void UpdateAttachStatus ( class AActor* updateActor );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void DoHoming ( float DeltaTime );
	void eventTick ( float DeltaTime );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefWebProjectile::pClassPointer = NULL;

// Class DunDefSpider.DunDefMapInfo_VDay
// 0x0070 (0x03A4 - 0x0334)
class UDunDefMapInfo_VDay : public UDunDefMapInfo
{
public:
	TArray< struct FWaveKillCounts >                   KillCountsPerPlayer;                              		// 0x0334 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEnemyGenderOverride >              EnemyGenderOverrides;                             		// 0x0340 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MinTimeBetweenGenderSpawns;                       		// 0x034C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTimeBetweenGenderSpawns;                       		// 0x0350 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTimeBetweenPairSpawns;                         		// 0x0354 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTimeBetweenPairSpawns;                         		// 0x0358 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapGenderIconSize;                            		// 0x035C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapGenderIconOffset;                          		// 0x0360 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PairMatchDistance;                                		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      MaxGenderPairsAllowed;                            		// 0x0368 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADunDefEmitterSpawnable*                     PairMatchedEffect;                                		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   PairMatchedHUDSound;                              		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   GenderSpawnedHUDSound;                            		// 0x037C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNotifyOnGenderSpawn : 1;                         		// 0x0380 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UTexture2D*                                  BoyIcon;                                          		// 0x0384 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  GirlIcon;                                         		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefEnemy* >                      BoyArchetypes;                                    		// 0x038C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class ADunDefEnemy* >                      GirlArchetypes;                                   		// 0x0398 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88081 ];

		return pClassPointer;
	};

};

UClass* UDunDefMapInfo_VDay::pClassPointer = NULL;

// Class DunDefSpider.DunDefCrystalCore_PortalDefense
// 0x002C (0x069C - 0x0670)
class ADunDefCrystalCore_PortalDefense : public ADunDefCrystalCore
{
public:
	TArray< class UClass* >                            AllowedToDamageClasses;                           		// 0x0670 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             WarpEffect;                                       		// 0x067C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WarpedSound;                                      		// 0x0680 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     WarpEffectOffset;                                 		// 0x0684 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              WarpInvincibilityTime;                            		// 0x0690 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeSinceLastTeleport;                            		// 0x0694 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsInvincible : 1;                                		// 0x0698 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93278 ];

		return pClassPointer;
	};

	bool DrawMyHUD ( class ADunDefHUD* H );
	void MakeInvincible ( );
	void EndWarpInvincibility ( );
	void OnTeleport ( class USeqAct_Teleport* Action );
	void UpdateCrystalCore ( unsigned long locked );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe );
	void PlayWarpedFX ( );
	void HandleCoreTouched ( class AActor* TouchingActor );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void PostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefCrystalCore_PortalDefense::pClassPointer = NULL;

// Class DunDefSpider.DunDefGRI_PortalDefense
// 0x0020 (0x0740 - 0x0720)
class ADunDefGRI_PortalDefense : public ADunDefGameReplicationInfo
{
public:
	int                                                PortalHitsRemaining;                              		// 0x0720 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                AllowedPortalHits;                                		// 0x0724 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FColor                                      TextColor;                                        		// 0x0728 (0x0004) [0x0000000000000000]              
	struct FColor                                      InvincibleTextColor;                              		// 0x072C (0x0004) [0x0000000000000000]              
	struct FString                                     HUDRemainingTouchesString;                        		// 0x0730 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	unsigned long                                      bIsCoreInvincible : 1;                            		// 0x073C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93306 ];

		return pClassPointer;
	};

	void NotifyEndWarpInvincibility ( );
	void NotifyWarpInvincibility ( );
	void DrawMyHUD ( class ADunDefHUD* H );
	void NotifyPortalHit ( );
	void SetInCombatPhase ( unsigned long inCombatPhase );
	void eventPostBeginPlay ( );
};

UClass* ADunDefGRI_PortalDefense::pClassPointer = NULL;

// Class DunDefSpider.DunDefSpider
// 0x004C (0x0D18 - 0x0CCC)
class ADunDefSpider : public ADunDefEnemy
{
public:
	struct FName                                       LungeAnimation;                                   		// 0x0CCC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebShootAnimation;                                		// 0x0CD4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebChargeAnimation;                               		// 0x0CDC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebShootSocket;                                   		// 0x0CE4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MeleeSwingSocketName;                             		// 0x0CEC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SpawnParticleMeshAttachmentSocket;                		// 0x0CF4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWebParticleScale;                              		// 0x0CFC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    WebChargeParticleSystem;                          		// 0x0D00 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   WebChargeSound;                                   		// 0x0D04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    SpawnParticleEffect;                              		// 0x0D08 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bAttachSpawnParticleToMesh : 1;                   		// 0x0D0C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseSpawnEffect : 1;                              		// 0x0D0C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bPlayingWebCharge : 1;                            		// 0x0D0C (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bPlaySpawnEffect : 1;                             		// 0x0D0C (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	float                                              WebStartTime;                                     		// 0x0D10 (0x0004) [0x0000000000000000]              
	float                                              WebChargeTime;                                    		// 0x0D14 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93361 ];

		return pClassPointer;
	};

	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventTick ( float DeltaTime );
	void SetWebChargeTime ( float NewWebChargeTime );
	void UpdateWebParticle ( float NewScale );
	float PlayMeleeAttackAnimation ( int AnimationIndex );
	void ShutDownWebCharge ( );
	void eventShootWeb ( );
	void eventMeleeSwingEnd ( );
	void eventMeleeSwingStart ( );
	struct FVector GetMeleeSwingLocation ( );
	void GetWebProjectileLocAndRot ( struct FVector* Position, struct FRotator* Orientation );
	float PlayAttackAnimation ( );
	void PlayWebChargeAnim ( );
	float PlayWebShootAnim ( );
	float PlayLungeAnimation ( );
	void UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues );
	void PlaySpawnEffect ( );
	void ClearSpawnEffect ( );
	void eventReplicatedEvent ( struct FName VarName );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventPostBeginPlay ( );
};

UClass* ADunDefSpider::pClassPointer = NULL;

// Class DunDefSpider.DunDefMapInfo_PortalDefense
// 0x0038 (0x036C - 0x0334)
class UDunDefMapInfo_PortalDefense : public UDunDefMapInfo
{
public:
	struct FMinMaxValues                               MinMaxEnemyHealth;                                		// 0x0334 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FMinMaxValues                               MinMaxEnemyDamage;                                		// 0x033C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FMinMaxValues                               MinMaxEnemyScale;                                 		// 0x0344 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAllowedCoreHits[ 0x5 ];                        		// 0x034C (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RemainingTouchesString;                           		// 0x0360 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93370 ];

		return pClassPointer;
	};

	int GetMaxAllowedCoreHits ( int difficulty );
};

UClass* UDunDefMapInfo_PortalDefense::pClassPointer = NULL;

// Class DunDefSpider.GameInfo_PortalDefense
// 0x0010 (0x0558 - 0x0548)
class AGameInfo_PortalDefense : public AGameInfo_Special
{
public:
	int                                                currentPortal;                                    		// 0x0548 (0x0004) [0x0000000000000000]              
	float                                              GameEnemyHealthMultiplier;                        		// 0x054C (0x0004) [0x0000000000000000]              
	float                                              GameEnemyDamageMultiplier;                        		// 0x0550 (0x0004) [0x0000000000000000]              
	float                                              GameEnemyScaleMultiplier;                         		// 0x0554 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93379 ];

		return pClassPointer;
	};

	float GetGameScaleMultiplier ( );
	float GetGameDamageMultiplier ( );
	float GetGameHealthMultiplier ( );
	void UpdateEnemyMultipliers ( float DmgPct );
	void SetWaveNumber ( int theWaveNumber );
	void DoWaveSkipping ( unsigned long bAllowArbritraryWaveSkipping );
	void eventPostBeginPlay ( );
};

UClass* AGameInfo_PortalDefense::pClassPointer = NULL;

// Class DunDefSpider.DunDefGRI_VDay
// 0x0024 (0x0744 - 0x0720)
class ADunDefGRI_VDay : public ADunDefGameReplicationInfo
{
public:
	struct FString                                     PairWasMatched;                                   		// 0x0720 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BoySpawned;                                       		// 0x072C (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GirlSpawned;                                      		// 0x0738 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93387 ];

		return pClassPointer;
	};

	void DrawExtraEnemyMinimapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap, class ADunDefEnemy* Enemy );
	void GenderSpawned ( class ADunDefEnemy* enemyActor, unsigned long isBoy );
	void PairMatched ( struct FVector Loc1, struct FVector Loc2, class ADunDefEnemy* enemyArch );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefGRI_VDay::pClassPointer = NULL;

// Class DunDefSpider.DunDefSpiderController
// 0x00AC (0x06B8 - 0x060C)
class ADunDefSpiderController : public ADunDefEnemyController
{
public:
	float                                              LungeAttackDamage;                                		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LungeDamageMomentum;                              		// 0x0610 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      LungeDamageType;                                  		// 0x0614 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lunge_MaxAttackDistance;                          		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lunge_MinAttackDistance;                          		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LungeSpeed_Max;                                   		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LungeSpeed_Min;                                   		// 0x0624 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LungeCoolDownTime;                                		// 0x0628 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LungeAngle;                                       		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastLungeTime;                                    		// 0x0630 (0x0004) [0x0000000000000000]              
	float                                              MinWebAttackPrepTime;                             		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWebAttackPrepTime;                             		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebShootCoolDown;                                 		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Web_MaxShootRange;                                		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Web_MinShootRange;                                		// 0x0644 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebShootAngle;                                    		// 0x0648 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebTowerProjectileAggroMult;                      		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowWebAttack : 1;                              		// 0x0650 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsInMeleeSwing : 1;                               		// 0x0650 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LastWebShootTime;                                 		// 0x0654 (0x0004) [0x0000000000000000]              
	int                                                MeleeDamageAmount;                                		// 0x0658 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageMomentum;                              		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeleeSwingExtent;                                 		// 0x0660 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MeleeDamageType;                                  		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShootSpeed;                                       		// 0x0670 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerDmgScale;                                    		// 0x0674 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              currentWebPrepTime;                               		// 0x0678 (0x0004) [0x0000000000000000]              
	struct FVector                                     PreviousMeleeSwingLocation;                       		// 0x067C (0x000C) [0x0000000000000000]              
	TArray< class AActor* >                            SwingHurtList;                                    		// 0x0688 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADunDefWebProjectile*                        WebProjectileTemplate;                            		// 0x0694 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebAttackStateName;                               		// 0x0698 (0x0008) [0x0000000000000000]              
	struct FName                                       LungeAttackStateName;                             		// 0x06A0 (0x0008) [0x0000000000000000]              
	struct FVector                                     LungeVelocity;                                    		// 0x06A8 (0x000C) [0x0000000000000000]              
	class ADunDefSpiderQueenController*                MyQueen;                                          		// 0x06B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93521 ];

		return pClassPointer;
	};

	float GetToolTipAttackRange ( );
	float GetTargetableRange ( unsigned long bCheckAttackRange );
	int GetAttackDamage ( );
	void CancelCurrentTarget ( int Reason );
	void SetMyQueen ( class ADunDefSpiderQueenController* newQueen );
	void NotifyQueenOfDeath ( class APawn* inPawn );
	void PawnDied ( class APawn* inPawn );
	bool IsWithinAttackRange ( class AActor* Other, float AttackRangeOffset, unsigned long bCheckDeltaZ );
	void ShootWeb ( );
	float GetAttackRange ( );
	void DoLungeAttack ( );
	void DoWebAttack ( );
	void CheckForCustomAttacks ( );
	bool AllowWebAttack ( );
	bool AddToSwingHurtList ( class AActor* newEntry );
	void EndMeleeSwing ( );
	void StartMeleeSwing ( );
	float GetWebChargeTime ( );
	bool eventNotifyBump ( class AActor* Other, struct FVector HitNormal );
};

UClass* ADunDefSpiderController::pClassPointer = NULL;

// Class DunDefSpider.DunDefSpiderQueenController
// 0x00C0 (0x06CC - 0x060C)
class ADunDefSpiderQueenController : public ADunDefEnemyController
{
public:
	class ADunDefSpider*                               BabySpiderTemplate;                               		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      NumberOfBabiesToSpawnPerNumPlayers;               		// 0x0610 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PctOfBabiesAllowedBeforeRespawn;                  		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BabySpawnAnimSpeed;                               		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BabyLaunchSpeed;                                  		// 0x0624 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BabyRespawnDelay;                                 		// 0x0628 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSimultaneousBabySpawns;                        		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxNumOfBabies;                                   		// 0x0630 (0x0004) [0x0000000000000000]              
	TArray< class ADunDefSpider* >                     MyBabies;                                         		// 0x0634 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentNumberOfBabies;                            		// 0x0640 (0x0004) [0x0000000000000000]              
	int                                                currentSpawnedBabiesThisSet;                      		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              LastBabySpawnTime;                                		// 0x0648 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpawnBaby : 1;                                   		// 0x064C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsInMeleeSwing : 1;                               		// 0x064C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                NumWebProjectiles;                                		// 0x0650 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebRefireDelay;                                   		// 0x0654 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefWebProjectile*                        WebProjectileTemplate;                            		// 0x0658 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebShootAngle;                                    		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShootSpeed;                                       		// 0x0660 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinWebShootDistance;                              		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWebShootDistance;                              		// 0x0668 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinWebAttackPrepTime;                             		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWebAttackPrepTime;                             		// 0x0670 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    WebShotAngleOffset;                               		// 0x0674 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeRadius;                                      		// 0x0680 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebAttackStateName;                               		// 0x0684 (0x0008) [0x0000000000000000]              
	float                                              LastWebShootTime;                                 		// 0x068C (0x0004) [0x0000000000000000]              
	float                                              currentWebPrepTime;                               		// 0x0690 (0x0004) [0x0000000000000000]              
	int                                                currentNumFiredProjectiles;                       		// 0x0694 (0x0004) [0x0000000000000000]              
	int                                                MeleeDamageAmount;                                		// 0x0698 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageMomentum;                              		// 0x069C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeleeSwingExtent;                                 		// 0x06A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MeleeDamageType;                                  		// 0x06AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PreviousMeleeSwingLocation;                       		// 0x06B0 (0x000C) [0x0000000000000000]              
	TArray< class AActor* >                            SwingHurtList;                                    		// 0x06BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              StunTime;                                         		// 0x06C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93553 ];

		return pClassPointer;
	};

	void eventSetTarget ( class AActor* NewTarget, unsigned long bDontClearIgnoreList );
	void ShootWeb ( );
	float GetWebChargeTime ( );
	void DoWebAttack ( );
	void NotifyBabyDeath ( class ADunDefSpider* DeadBaby );
	float GetAttackInterval ( class AActor* Victim );
	void CheckForCustomAttacks ( );
	struct FVector FindValidBabyShootLoc ( );
	void SpawnBaby ( );
	void FlagSpawnBaby ( );
	void StartBabySpawn ( );
	void ForceWakeUp ( );
	bool AddToSwingHurtList ( class AActor* newEntry );
	void EndMeleeSwing ( );
	void StartMeleeSwing ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefSpiderQueenController::pClassPointer = NULL;

// Class DunDefSpider.DunDefSpiderQueen
// 0x00D0 (0x0DC4 - 0x0CF4)
class ADunDefSpiderQueen : public ADunDefBoss
{
public:
	float                                              StunDelay;                                        		// 0x0CF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CoreDamageMultiplier;                             		// 0x0CF8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumAngleDotForSuperHit;                       		// 0x0CFC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    NonStunnedDmgScalar;                              		// 0x0D00 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CurrentNonStunnedDmgScalar;                       		// 0x0D0C (0x0004) [0x0000000000000000]              
	float                                              BabySpawnPlayRate;                                		// 0x0D10 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BabySpawnLocSocket;                               		// 0x0D14 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BabySpawnAnimName;                                		// 0x0D1C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StunnedAnimLoop;                                  		// 0x0D24 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CrystalSocketName;                                		// 0x0D2C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MeleeSwingSocketName;                             		// 0x0D34 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebShootSocket;                                   		// 0x0D3C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WebShootAnimation;                                		// 0x0D44 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StunnedHurtAnim;                                  		// 0x0D4C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     StunnedHurtEffectTemplate;                        		// 0x0D54 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    StunnedCoreVFX;                                   		// 0x0D58 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    EnragedVFX;                                       		// 0x0D5C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       EnrageSocketName;                                 		// 0x0D60 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UpperBodyLookAtName;                              		// 0x0D68 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrystalScaleDownTime;                             		// 0x0D70 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinCrystalBrightnessScale;                        		// 0x0D74 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageHealthPct;                                  		// 0x0D78 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageDmgMult;                                    		// 0x0D7C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageBabySpawnMult;                              		// 0x0D80 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageIntervalMult;                               		// 0x0D84 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnrageGroundSpeedMult;                            		// 0x0D88 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRageMode : 1;                                    		// 0x0D8C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsStunned : 1;                                   		// 0x0D8C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLookAtTarget : 1;                                		// 0x0D8C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              TimeOfDeath;                                      		// 0x0D90 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   QueenMIC;                                         		// 0x0D94 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          UpperBodyLookAt;                                  		// 0x0D98 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          IKTest;                                           		// 0x0D9C (0x0004) [0x0000000000000000]              
	class AActor*                                      TheLastDamageCauser;                              		// 0x0DA0 (0x0004) [0x0000000000000000]              
	float                                              WebChargeTime;                                    		// 0x0DA4 (0x0004) [0x0000000000000000]              
	float                                              WebStartTime;                                     		// 0x0DA8 (0x0004) [0x0000000000000000]              
	float                                              currentTakenStunnedDamage;                        		// 0x0DAC (0x0004) [0x0000000000000000]              
	float                                              AllowedDmgStunnedPct;                             		// 0x0DB0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                EnrageCoreColor;                                  		// 0x0DB4 (0x0010) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93695 ];

		return pClassPointer;
	};

	void SetDyingPhysics ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void SetUpperBodyLookAt ( unsigned long bTurnOn );
	void eventTick ( float DeltaTime );
	void PlayStunnedHurtEffect ( class UClass* DamageType, struct FVector HitLocation );
	void eventShootWeb ( );
	float PlayWebShootAnim ( );
	void PlayWebChargeAnim ( );
	void SetWebChargeTime ( float NewWebChargeTime );
	void GetWebProjectileLocAndRot ( struct FVector* Position, struct FRotator* Orientation );
	struct FVector GetMeleeSwingLocation ( );
	void eventMeleeSwingEnd ( );
	void eventMeleeSwingStart ( );
	void SetRageMode ( );
	float GetEnrageIntervalMult ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe );
	bool CheckSpecialCoreDmg ( struct FVector HitLocation );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void GetBabySpawnLocandRot ( struct FVector* SpawnLoc, struct FRotator* SpawnRot );
	void eventDoSpawnBaby ( );
	void StopStunAnimation ( );
	void PlayStunAnimation ( );
	float PlayBabySpawnAnim ( float playSpeed );
	float GetPawnDamageModifier ( unsigned long bDontIncludeAbilities );
	void UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues );
	void eventPostBeginPlay ( );
	void PlayJumpAnimation ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefSpiderQueen::pClassPointer = NULL;

// Class DunDefSpider.TowerDeboosterObject
// 0x0008 (0x0044 - 0x003C)
class UTowerDeboosterObject : public UObject
{
public:
	unsigned char                                      MyBoostType;                                      		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              MyBoostAmount;                                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93997 ];

		return pClassPointer;
	};

	float GetTowerBoostAmount ( unsigned char boostType );
	bool HasTowerBoostingType ( unsigned char checkType );
	class UDunDefTargetableInterface* GetTowerBoostingTarget ( );
	void SetBoostAmount ( float newBoostAmount );
	void SetBoostType ( unsigned char newBoostType );
};

UClass* UTowerDeboosterObject::pClassPointer = NULL;

// Class DunDefSpider.GameInfo_VDay
// 0x0024 (0x056C - 0x0548)
class AGameInfo_VDay : public AMain
{
public:
	TArray< class ADunDefEnemy* >                      Boys;                                             		// 0x0548 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ADunDefEnemy* >                      Girls;                                            		// 0x0554 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUsingGenderSpawnTimer : 1;                       		// 0x0560 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GenderSpawnTimer;                                 		// 0x0564 (0x0004) [0x0000000000000000]              
	class UUI_KillCount*                               myKillCountUI;                                    		// 0x0568 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 94140 ];

		return pClassPointer;
	};

	void PairMatched ( class ADunDefEnemy* Boy, class ADunDefEnemy* Girl );
	void eventTick ( float DeltaTime );
	class ADunDefEnemy* FindBestTemplate ( struct FString* GenderString );
	class ADunDefEnemy* WaveSpawnerCreateEnemy ( class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation );
	void OpenedKillCountUI ( class UUI_KillCount* aKillCountUI );
};

UClass* AGameInfo_VDay::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif