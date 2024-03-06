/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSpecial_classes.h
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

#define CONST_CTF_MAX_TEAMS                                      2
#define CONST_MARGIN                                             64
#define CONST_FORCE_UPDATE_FREQUENCY                             180
#define CONST_NUMGLYPHS                                          5
#define CONST_NUMWHEELS                                          3

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum DunDefSpecial.DunDefPlayer_DualMelee.Stances
/*enum Stances
{
	ST_DEFAULT                                         = 0,
	ST_LIGHTNING                                       = 1,
	ST_SIPHON                                          = 2,
	ST_TURTLE                                          = 3,
	ST_HAWK                                            = 4,
	ST_TORNADO                                         = 5,
	ST_MAX                                             = 6
};*/

// Enum DunDefSpecial.DunDefPlayerAbility_SummonCommand.SummonedCommand
/*enum SummonedCommand
{
	CMD_IDLE                                           = 0,
	CMD_FOLLOW                                         = 1,
	CMD_ATTACK                                         = 2,
	CMD_MOVE_DEFENSIVE                                 = 3,
	CMD_HOLD_DEFENSIVE                                 = 4,
	CMD_MOVE_OFFENSIVE                                 = 5,
	CMD_HOLD_OFFENSIVE                                 = 6,
	CMD_MAX                                            = 7
};*/

// Enum DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.EGlyphs
/*enum EGlyphs
{
	EG_ENEMY                                           = 0,
	EG_SWORD                                           = 1,
	EG_POTION                                          = 2,
	EG_MANATOKEN                                       = 3,
	EG_CRYSTALCORE                                     = 4,
	EG_MAX                                             = 5
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class DunDefSpecial.DunDefBuff_Harbinger
// 0x0034 (0x0334 - 0x0300)
class UDunDefBuff_Harbinger : public UDunDefBuff
{
public:
	TArray< int >                                      DifficultyTickDamageArray;                        		// 0x0300 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    DifficultyTickDamageMultiplierArray;              		// 0x030C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              HarbingerTimeoutRange;                            		// 0x0318 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TickDamageMultiplier;                             		// 0x031C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Damage;                                           		// 0x0320 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             BeamEmitterTemplate;                              		// 0x0324 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    beamInstance;                                     		// 0x0328 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UClass*                                      TickDamageType;                                   		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoLineOfSightCheck : 1;                          		// 0x0330 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80962 ];

		return pClassPointer;
	};

	void DeactivateBuff ( );
	void BuffEffect ( );
	void eventTick ( float DeltaTime );
	void Initialize ( );
};

UClass* UDunDefBuff_Harbinger::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_SummonEnemy
// 0x015A (0x0972 - 0x0818)
class ADunDefTower_SummonEnemy : public ADunDefTower
{
public:
	struct FSummonedBoosts                             resistanceBoosting;                               		// 0x0818 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSummonedBoosts                             movementSpeedBoosting;                            		// 0x083C (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSummonedBoosts                             attackAnimSpeedBoosting;                          		// 0x0860 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            allowedScalingTypes;                              		// 0x0884 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADunDefEnemy*                                myEnemyTemplate;                                  		// 0x0890 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  SelectedIcon;                                     		// 0x0894 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  PendingSelectionIcon;                             		// 0x0898 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CmdIcon_MoveDef;                                  		// 0x089C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CmdIcon_MoveOf;                                   		// 0x08A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CmdIcon_Attack;                                   		// 0x08A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CmdIcon_Follow;                                   		// 0x08A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CmdIcon_HoldDef;                                  		// 0x08AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CmdIcon_HoldOff;                                  		// 0x08B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  currentAttackTargetIcon;                          		// 0x08B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  currentFollowTargetIcon;                          		// 0x08B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEnemy*                                myEnemyReference;                                 		// 0x08BC (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class ADunDefEnemyController*                      myEnemyControllerReference;                       		// 0x08C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      currentTargetActor;                               		// 0x08C4 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class AActor*                                      pendingTargetActor;                               		// 0x08C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bFollowOwner : 1;                                 		// 0x08CC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bCheckForFollowReturn : 1;                        		// 0x08CC (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bAllowSelection : 1;                              		// 0x08CC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDisableCommandIconDrawing : 1;                   		// 0x08CC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bIsSelected : 1;                                  		// 0x08CC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bPendingSelection : 1;                            		// 0x08CC (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              SelectedIconSize;                                 		// 0x08D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UpdateCommandRate;                                		// 0x08D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SelectedIconOffset;                               		// 0x08D8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              ResistanceMultiplier;                             		// 0x08E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              AttackRangeMultiplier;                            		// 0x08E8 (0x0004) [0x0000000000000000]              
	float                                              MovementSpeedMult;                                		// 0x08EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              AnimAttackSpeedMult;                              		// 0x08F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ReplicatedDmgValue;                               		// 0x08F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ReplicatedAtkRange;                               		// 0x08F8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     ResistanceString;                                 		// 0x08FC (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MovementSpeedString;                              		// 0x0908 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AnimSpeedString;                                  		// 0x0914 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttackAnimSpeedString;                            		// 0x0920 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              HoldOffensive_TargetableRange;                    		// 0x092C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoldDefensive_TargetableRange;                    		// 0x0930 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              followIconZOffset;                                		// 0x0934 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              attackIconZOffset;                                		// 0x0938 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   AcceptOrderSound;                                 		// 0x093C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    SelectedParticle;                                 		// 0x0940 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    pendingSelectedParticle;                          		// 0x0944 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    otherSelectedParticle;                            		// 0x0948 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class AActor* >                            commandInstigators;                               		// 0x094C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     currentCommandPoint;                              		// 0x0958 (0x000C) [0x0000000000000000]              
	struct FVector                                     pendingCommandPoint;                              		// 0x0964 (0x000C) [0x0000000000000000]              
	unsigned char                                      currentCommand;                                   		// 0x0970 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      previousCommand;                                  		// 0x0971 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84353 ];

		return pClassPointer;
	};

	void UpdateBuffValues ( );
	float GetAttackDamage ( );
	void SpawnDefaultBuffs ( );
	void ClientDisableMovementReplication ( struct FVector endedLoc );
	void TransferTowerOwnership ( class APawn* toPawn );
	bool ForceSingleMove ( struct FVector NewLoc, struct FRotator NewRot, unsigned long bShouldCollideWorld );
	bool ForceMoveActor ( class AActor* Mover, struct FVector NewLoc );
	void GetAlternateAggroActor ( class UDunDefTargetableInterface** AltActor );
	float GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer );
	float GetTowerTargetingDesirability ( class ADunDefTower* forTower );
	float eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController );
	void DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	struct FString GetBoostString ( unsigned char boostType );
	void GetBoostedTargets ( TArray< class APawn* >* boostedTargets );
	void NotifyOfBoostedRemoval ( class APawn* removedBoostee );
	float GetToolTipStatValue ( unsigned char boostType );
	float GetPawnBoostAmount ( unsigned char boostType );
	bool HasPawnBoostingType ( unsigned char boostType );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe );
	class AActor* GetAlternateActor ( );
	int GetHealth ( unsigned long bGetMax );
	bool eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	void AddHealth ( int howMuch, unsigned long bDontDisplayFloatingNumber );
	float GetHealthPercent ( );
	void StartRepair ( );
	struct FString GetToolTipText ( );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	bool DrawMyHUD ( class ADunDefHUD* H );
	void UpdateCommand ( );
	bool HandleCommand ( class AActor* Target, unsigned char NewCommand, struct FVector commandPoint );
	bool SetCommand ( struct FVector commandPoint, unsigned char NewCommand, class AActor* commandInstigator, class AActor* targetedActor );
	void SetSelected ( unsigned long bWantsSelected, class AActor* selectingActor );
	void SetPendingSelection ( unsigned long bIsPending );
	void CleanUpSummon ( );
	void eventDestroyed ( );
	void eventBaseChange ( );
	void SetUpEnemyValues ( unsigned long bInitialSetup );
	void SpawnMyEnemy ( );
	void InitializeForInstigator ( class APawn* Pawn );
	float GetLastDamageTime ( );
	bool HasBeenRendered ( );
	void UpdateEnemyCollisionValues ( );
	void UpdateReplicatedStatValues ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefTower_SummonEnemy::pClassPointer = NULL;

// Class DunDefSpecial.DunDefEmitterDamage
// 0x005C (0x0330 - 0x02D4)
class ADunDefEmitterDamage : public ADunDefEmitterSpawnable
{
public:
	float                                              MaximumMassMomentumScale;                         		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MassMomentumBaseScale;                            		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MassMomentumScaleExponent;                        		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Damage;                                           		// 0x02E0 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              Radius;                                           		// 0x02E4 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              EffectRadius;                                     		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MyMomentum;                                       		// 0x02F0 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              DamageDelay;                                      		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScalingHeroStatExponentDamage;                    		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScalingHeroStatExponentRadius;                    		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFalloffExponent;                            		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScalingHeroStatType;                              		// 0x0304 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseAngleForDamage : 1;                           		// 0x0308 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseOwnerAsInstigator : 1;                        		// 0x0308 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bScaleDrawScale : 1;                              		// 0x0308 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUseSelfAsDamageCauser : 1;                       		// 0x0308 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              MaxTargetDeltaPitch;                              		// 0x030C (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              MaxTargetDeltaYaw;                                		// 0x0310 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	TArray< class UDunDefBuff* >                       BuffsToApplyOnHit;                                		// 0x0314 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UDunDefBuff*                                 FirstTargetBuff;                                  		// 0x0320 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UIActorModifierInterface*                    MyActorStatModifier;                              		// 0x0324 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0328 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              PowerMult;                                        		// 0x032C (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84560 ];

		return pClassPointer;
	};

	class AActor* GetDamageCauser ( );
	bool CheckValidAngle ( class AActor* Victim, struct FVector Origin );
	class UIActorModifierInterface* GetStatModifierObject ( );
	float GetStatValueByTag ( float initalValue, struct FString StatTag, class UIActorModifierInterface* TagActor, unsigned char statType, unsigned long bBaseValueOnly );
	void InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly );
	bool eventAllowSpawn ( class AActor* theArchetype, struct FVector theLoc, struct FRotator theRot );
	bool HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	void DoDamage ( );
	void InitDamageEmitter ( int BaseDamage, float BaseRange, class UIActorModifierInterface* aActorStatModifier );
	void eventPostBeginPlay ( );
};

UClass* ADunDefEmitterDamage::pClassPointer = NULL;

// Class DunDefSpecial.CTF_PlayerAbility_PickupFlag
// 0x0008 (0x046C - 0x0464)
class ACTF_PlayerAbility_PickupFlag : public ADunDefPlayerAbility_GenericSpellTimer
{
public:
	class ACTF_Flag*                                   PickUpFlag;                                       		// 0x0464 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class USoundCue*                                   StartPickingupSound;                              		// 0x0468 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86283 ];

		return pClassPointer;
	};

	void RequestPickup ( class ACTF_Flag* newFlag );
};

UClass* ACTF_PlayerAbility_PickupFlag::pClassPointer = NULL;

// Class DunDefSpecial.CTF_Flag
// 0x00B4 (0x02D8 - 0x0224)
class ACTF_Flag : public ADunDefDroppedItem
{
public:
	float                                              PickupOffset;                                     		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PickupWeighting;                                  		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ToolTipDrawColor;                                 		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PickUpString;                                     		// 0x0230 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              ScorePerSecond;                                   		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoldTimeForScore;                                 		// 0x0240 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPickupDistance;                                		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageMultiplierIncreaseSpeed;                    		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeldDamageMultiplier;                             		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDamageMultiplier;                              		// 0x0250 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DroppedAutoTeleportTime;                          		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointIconOffscreenScale;                       		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointIconCenterScale;                          		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointCenterYOffset;                            		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   AllyPickedUpFlagSound;                            		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   EnemyPickedUpFlagSound;                           		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     PickedUpFlagEffects[ 0x2 ];                       		// 0x026C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    DroppedParticleComponent;                         		// 0x0274 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    PickedUpParticleComponent;                        		// 0x0278 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             TeamFlagEffects[ 0x2 ];                           		// 0x027C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapIconSize;                                  		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumTowerDistance;                             		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OverlappingTowerCheckRadius;                      		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HolderJumpZMultiplier;                            		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MiniMapIcon;                                      		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  OnScreenWaypointTexture;                          		// 0x0298 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  OffScreenWaypointTexture;                         		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      MiniMapDefaultColor;                              		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefPlayer*                               FlagHolder;                                       		// 0x02A4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              currentScoreAccumulation;                         		// 0x02A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPickedUp : 1;                                  		// 0x02AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGivePointsForPossesion : 1;                      		// 0x02AC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bTeamBasedFlag : 1;                               		// 0x02AC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAllowTeamReset : 1;                              		// 0x02AC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAtBase : 1;                                      		// 0x02AC (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	class ACTF_FlagBase*                               myBase;                                           		// 0x02B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                myTeamIndex;                                      		// 0x02B4 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                CapturePoints;                                    		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TeamParticleColorParam;                           		// 0x02BC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     CapturedFlagEffects[ 0x2 ];                       		// 0x02C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     flagCapturedMessage;                              		// 0x02CC (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86286 ];

		return pClassPointer;
	};

	void SetAtBase ( unsigned long bIsAtBase );
	void SetDroppedParticleColor ( );
	void SetTeam ( int NewTeam );
	void InitFlag ( int NewTeam, class ACTF_FlagBase* NewBase );
	void AutoTeleport ( );
	void AdjustDamage ( int* Damage );
	bool PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius );
	bool AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point );
	bool CheckAllowance ( );
	void eventPhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void eventFellOutOfWorld ( class UClass* dmgType );
	void ResetCollision ( );
	void DisableCollision ( );
	bool IsInAuraOrTrap ( struct FVector Loc );
	void CaptureFlag ( );
	void ReturnToBase ( );
	void DropFlag ( unsigned long bForceRandomizedPosition, unsigned long bForceDroppedMessage );
	void PickUpFlag ( class ADunDefPlayer* newHolder );
	void BeginBeingPickedUp ( class ADunDefPlayerController* newHolder );
	bool CanBePickedUp ( class ADunDefPlayerController* PC );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	float GetActivationOffset ( );
	float GetActivationWeighting ( );
	void Client_Activate ( class ADunDefPlayerController* PC, int activationType );
	void Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType );
	int AllowActivation ( class ADunDefPlayerController* PC, int activationType );
	int GetToolTipPriority ( );
	bool TakesToolTipPriority ( class UDunDefToolTipInterface* otherToolTip );
	bool ContinueDrawingToolTip ( unsigned long ContinueDrawing );
	void DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	bool DrawMyHUD ( class ADunDefHUD* H );
	bool OnlyDrawHUDForOwner ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ACTF_Flag::pClassPointer = NULL;

// Class DunDefSpecial.CTF_UIGlobalHUD
// 0x0030 (0x0738 - 0x0708)
class UCTF_UIGlobalHUD : public UUI_GlobalHUD
{
public:
	class UUILabel*                                    MyTeamNameLabel;                                  		// 0x0708 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIPanel*                                    ScorePanel;                                       		// 0x070C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIPanel*                                    ScorePanel01;                                     		// 0x0710 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team1PlayerList;                                  		// 0x0714 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team2PlayerList;                                  		// 0x0718 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    TeamName;                                         		// 0x071C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    TeamName01;                                       		// 0x0720 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team1ScoreList;                                   		// 0x0724 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team2ScoreList;                                   		// 0x0728 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team1KillList;                                    		// 0x072C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team2KillList;                                    		// 0x0730 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LocalPlayerHighLightColor;                        		// 0x0734 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86300 ];

		return pClassPointer;
	};

	void GetUITeamLists ( int TeamOnlyCheck, struct FString* tList, struct FString* kList, struct FString* sList );
	struct FString GetColorString ( struct FColor aColor );
	void UpdateTeamPanels ( );
	void eventUpdate ( float DeltaTime );
	void UpdateCompetitive ( float DeltaTime );
};

UClass* UCTF_UIGlobalHUD::pClassPointer = NULL;

// Class DunDefSpecial.CTF_DDPRI
// 0x0010 (0x0380 - 0x0370)
class ACTF_DDPRI : public ADunDefPlayerReplicationInfo
{
public:
	int                                                CTF_MyCurrentTowerUnits;                          		// 0x0370 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CTF_MyMaxTowerUnits;                              		// 0x0374 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      IsReadyToSpawn : 1;                               		// 0x0378 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	int                                                MatchKills;                                       		// 0x037C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86315 ];

		return pClassPointer;
	};

	bool IsFriendlyToLocal ( );
	void PrintHeroLevelUpMessage ( );
	void PrintNewHeroMessage ( );
	void SetReadyToSpawn ( unsigned long bIsReady );
	struct FString GetTeamName ( );
	struct FColor GetTeamColor ( );
	void eventDestroyed ( );
	void AddToTeam ( int TeamIndex );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ACTF_DDPRI::pClassPointer = NULL;

// Class DunDefSpecial.CTF_DDGRI
// 0x00EC (0x08CC - 0x07E0)
class ACTF_DDGRI : public ADDGRI_Competitive
{
public:
	struct FCTFTeamData                                CTFTeamDatas[ 0x2 ];                              		// 0x07E0 (0x0068) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	struct FColor                                      NeutralColor;                                     		// 0x0848 (0x0004) [0x0000000000000000]              
	class ACTF_PlayerAbility_PickupFlag*               CTFPickupFlagAbilityTemplate;                     		// 0x084C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TeamIconTexture;                                  		// 0x0850 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  FlagIcon;                                         		// 0x0854 (0x0004) [0x0000000000000000]              
	class ACTF_Flag*                                   TheFlag;                                          		// 0x0858 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ACTF_Flag*                                   TheSecondFlag;                                    		// 0x085C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     FlagIconPath;                                     		// 0x0860 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                WinningTeam;                                      		// 0x086C (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bAutoBalanceTeams : 1;                            		// 0x0870 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bIsGameReady : 1;                                 		// 0x0870 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bUsePersonalTowerUnits : 1;                       		// 0x0870 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAllowCountDown : 1;                              		// 0x0870 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPrintWinningPlayerMessage : 1;                   		// 0x0870 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDisplayPlayerScore : 1;                          		// 0x0870 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              GameStartTime;                                    		// 0x0874 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              FlagHoldingGroundSpeed;                           		// 0x0878 (0x0004) [0x0000000000000000]              
	int                                                LastSentGameTime;                                 		// 0x087C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     EndGameLabelString;                               		// 0x0880 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	int                                                WinCTFManaBonus[ 0x8 ];                           		// 0x088C (0x0020) [0x0000000000000000]              
	int                                                WinExpBonus[ 0x8 ];                               		// 0x08AC (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86318 ];

		return pClassPointer;
	};

	bool AllowedToTeleport ( class APawn* Teleportee );
	void DoDeathNotification ( class ADunDefPlayerReplicationInfo* Killer, class ADunDefPlayerReplicationInfo* Victim, int damageTypeIndex );
	float GetJumpZMultiplier ( class ADunDefPawn* aPawn );
	void ExtraDrawHUDInterface ( class ADunDefHUD* H, class UDunDefHUDInterface* hudint );
	void CustomUpdatePlayerScoreLabel ( class ULocalPlayer* ForPlayer, class UUILabel_ScoreIndicator* ScoreLabel );
	bool AllowDeathSpectatorMode ( class ADunDefPlayerController* PC );
	float ModifyPlayerGroundSpeed ( class ADunDefPlayer* aPlayer, float theGroundSpeed );
	struct FColor GetGameOverLabelColor ( );
	struct FColor GetVictoryLabelColor ( );
	struct FString GetGameOverLabelString ( class APlayerReplicationInfo* myPlayer );
	struct FString GetVictoryLabelString ( class APlayerReplicationInfo* myPlayer );
	bool OverrideEndGameLabel ( );
	class ADunDefPlayerReplicationInfo* GetWinningPRI ( );
	TArray< class UDataListEntryInterface* > GetDataListEntries ( int dataSetType, int PlayerIndex, int FolderID );
	void GetTeamIcon ( int TeamIndex, class USurface** theTeamIcon, struct FColor* theTeamColor );
	bool IsTeamCompetitive ( );
	bool AllowChatBetween ( class APlayerReplicationInfo* myPlayer, class APlayerReplicationInfo* TheirPlayer );
	int GetTeamThatHasFlag ( );
	void DoLevelVictory ( );
	void GiveWinningBonus ( );
	void WonGame ( class ADunDefPlayerReplicationInfo* theWinningPlayer, int WinningTeamIndex );
	void CheckAllReady ( );
	bool CheckReadyPlayers ( );
	void SetAllowCountDown ( unsigned long setAllow );
	bool AllowGameCountDown ( );
	void SetGameReady ( );
	void SetGameTime ( float NewTime );
	void UpdateGameTime ( );
	void eventTick ( float DeltaTime );
	void FilloutTeams ( );
	void FlushTeams ( );
	void AutoBalanceTeams ( );
	void AutoSortTeams ( );
	int GetLowestBalancedTeam ( );
	void IncrementTeamScore ( int ScoringTeam, int Score );
	void eventPostBeginPlay ( );
	void ModifyCustomColors ( class ADunDefPlayerController* aController, class ADunDefPlayer* aPlayer );
	void DrawExtraPlayerFloatingHUD ( class ADunDefPlayer* aPlayer, class ADunDefHUD* H );
	struct FString GetTeamScores ( );
	void Server_AddGRIHeroAbilities ( class ADunDefPlayerController* PC );
	struct FString GetColorString ( struct FColor aColor );
	struct FString GetTeamLists ( int TeamOnlyCheck, unsigned long bWantsReadyCheck );
	struct FString GetCompetitivePlayerList ( );
	bool DestroyTowerOnOwnerLeft ( class ADunDefTower* aTower );
	int GetMaxTowerUnits ( class ADunDefPlayerReplicationInfo* ddPRI );
	int GetAltCurrentTowerUnits ( class ADunDefPlayerReplicationInfo* ddPRI );
	int GetCurrentTowerUnits ( class ADunDefPlayerReplicationInfo* ddPRI );
	bool CanPlaceTowerUnitCost ( int Cost, class ADunDefPlayerController* ForPlayer, class ADunDefTower* Tower );
	void RemovedTower ( class ADunDefTower* Tower );
	void AddedTower ( class ADunDefTower* Tower );
	void RemovePlayerFromTeam ( class ACTF_DDPRI* aPRI, int TeamIndex );
	void AddPlayerToTeam ( class ACTF_DDPRI* aPRI, int TeamIndex );
	void RemoveFromAnyTeams ( class ACTF_DDPRI* aPRI );
	int GetSmallestTeam ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ACTF_DDGRI::pClassPointer = NULL;

// Class DunDefSpecial.CTF_DDPC
// 0x0008 (0x0B40 - 0x0B38)
class ACTF_DDPC : public ADunDefPlayerController
{
public:
	class UUI_TeamSelect*                              TeamSelectUITemplate;                             		// 0x0B38 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ACTF_Flag*                                   myHeldFlag;                                       		// 0x0B3C (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86476 ];

		return pClassPointer;
	};

	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum );
	void PawnDied ( class APawn* inPawn );
	void GiveFlag ( class ACTF_Flag* newFlag );
	void SetIsReady ( unsigned long bIsReady );
	void SetDesiredTeam ( int desiredTeam );
	void CreateHUD ( );
	void LocalAttemptSpawn ( );
	void ServerRestartPlayer ( );
	void ShowTeamSelectionUI ( );
};

UClass* ACTF_DDPC::pClassPointer = NULL;

// Class DunDefSpecial.CTD_DDGRI
// 0x000C (0x08D8 - 0x08CC)
class ACTD_DDGRI : public ACTF_DDGRI
{
public:
	TArray< float >                                    MoveRepSizes;                                     		// 0x08CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86615 ];

		return pClassPointer;
	};

	bool AllowedToTeleport ( class APawn* Teleportee );
	void DoLevelVictory ( );
	void eventTick ( float DeltaTime );
	struct FString GetSkipBuildPhaseString ( );
	void DrawExtraPlayerFloatingHUD ( class ADunDefPlayer* aPlayer, class ADunDefHUD* H );
	void Server_AddGRIHeroAbilities ( class ADunDefPlayerController* PC );
	bool DestroyTowerOnOwnerLeft ( class ADunDefTower* aTower );
	bool AllowActivatingCrystal ( );
	void SetGameReady ( );
};

UClass* ACTD_DDGRI::pClassPointer = NULL;

// Class DunDefSpecial.UI_TeamSelect
// 0x002C (0x0668 - 0x063C)
class UUI_TeamSelect : public UDunDefUIScene
{
public:
	class UUIScriptWidget_Button*                      ReadyButton;                                      		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIButton_Scripted*                          SwapTeamButton;                                   		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIButton_Scripted*                          AutoSetTeams;                                     		// 0x0644 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIButton_Scripted*                          TeamButton;                                       		// 0x0648 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIButton_Scripted*                          TeamButton01;                                     		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    GameStartCountdown;                               		// 0x0650 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team1PlayerList;                                  		// 0x0654 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team2PlayerList;                                  		// 0x0658 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    TeamName;                                         		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    TeamName01;                                       		// 0x0660 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GameStartTime;                                    		// 0x0664 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86644 ];

		return pClassPointer;
	};

	bool OnInterceptedInputKey ( struct FInputEventParameters* EventParms );
	bool eventNotifyWidgetClicked ( class UUIObject* Widget );
	void Update ( float DeltaTime );
	void eventSceneActivated ( unsigned long bInitialActivation );
};

UClass* UUI_TeamSelect::pClassPointer = NULL;

// Class DunDefSpecial.CTF_GameInfo
// 0x0008 (0x0554 - 0x054C)
class ACTF_GameInfo : public AGameInfo_Competitive
{
public:
	int                                                TeamPointsForKill;                                		// 0x054C (0x0004) [0x0000000000000000]              
	unsigned long                                      bPreventCompetitivePlayerDamage : 1;              		// 0x0550 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86678 ];

		return pClassPointer;
	};

	void AdjustDTDamage ( class ADunDefDamageableTarget* forDT, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum );
	void AdjustPawnDamage ( class ADunDefPawn* forPawn, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum );
	unsigned char GetPlayerTeamForStart ( class AController* Player, unsigned char InTeam );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void ScoreObjective ( class APlayerReplicationInfo* Scorer, int Score );
	void AddObjectiveScore ( class APlayerReplicationInfo* Scorer, int Score );
	void PlayerReplicationInfoInitialized ( class ADunDefPlayerController* PC );
	void DoPlayerLeaving ( class ADunDefPlayerController* PC, unsigned long bForceLocal );
	class APlayerController* SpawnPlayerController ( struct FVector SpawnLocation, struct FRotator SpawnRotation );
};

UClass* ACTF_GameInfo::pClassPointer = NULL;

// Class DunDefSpecial.CTD_GameInfo
// 0x000C (0x0560 - 0x0554)
class ACTD_GameInfo : public ACTF_GameInfo
{
public:
	TArray< float >                                    OgreDifficultyOffsets;                            		// 0x0554 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86726 ];

		return pClassPointer;
	};

	class ADunDefEnemy* WaveSpawnerCreateEnemy ( class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	void eventPostBeginPlay ( );
};

UClass* ACTD_GameInfo::pClassPointer = NULL;

// Class DunDefSpecial.CTF_FlagBase
// 0x0068 (0x0284 - 0x021C)
class ACTF_FlagBase : public AActor
{
public:
	int                                                myTeamIndex;                                      		// 0x021C (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class ADunDefEmitterSpawnable*                     CaptureEmitterTemplate[ 0x2 ];                    		// 0x0220 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     FlagStoleEmitterTemplate[ 0x2 ];                  		// 0x0228 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    MyParticleComponent;                              		// 0x0230 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ACTF_Flag*                                   myFlagTemplate;                                   		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParticleColorName;                                		// 0x0238 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class APlayerStart* >                      myAssociatedStarts;                               		// 0x0240 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class ADunDefTeamTowerVolume* >            myAssociatedVolumes;                              		// 0x024C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ACTF_Flag*                                   myFlag;                                           		// 0x0258 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bBaseInited : 1;                                  		// 0x025C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class UCylinderComponent*                          myCollisionComponent;                             		// 0x0260 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              MiniMapIconSize;                                  		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumTowerDistance;                             		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MiniMapIcon;                                      		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInstanceConstant* >         ZoneMICs;                                         		// 0x0270 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ZoneMICParamName;                                 		// 0x027C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86763 ];

		return pClassPointer;
	};

	bool PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius );
	bool AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point );
	bool CheckAllowance ( );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	void SpawnFlag ( );
	void FlagTaken ( );
	void FlagReturned ( );
	void DoCaptureEffects ( );
	void ScoreFlag ( class ACTF_Flag* scoredFlag );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void InitBase ( );
	void SetTeamIndex ( int NewTeam );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ACTF_FlagBase::pClassPointer = NULL;

// Class DunDefSpecial.CTF_MultiFlag_GameInfo
// 0x0004 (0x0558 - 0x0554)
class ACTF_MultiFlag_GameInfo : public ACTF_GameInfo
{
public:
	unsigned long                                      bSetRandomTeamSides : 1;                          		// 0x0554 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86856 ];

		return pClassPointer;
	};

	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	void eventPostBeginPlay ( );
};

UClass* ACTF_MultiFlag_GameInfo::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTeamTowerVolume
// 0x0004 (0x025C - 0x0258)
class ADunDefTeamTowerVolume : public AVolume
{
public:
	int                                                myTeamIndex;                                      		// 0x0258 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86941 ];

		return pClassPointer;
	};

	void SetMyTeam ( int NewTeam );
	void Destroyed ( );
	void PostBeginPlay ( );
	bool AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point );
	bool PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius );
	bool CheckAllowance ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefTeamTowerVolume::pClassPointer = NULL;

// Class DunDefSpecial.CTFM_DDGRI
// 0x0000 (0x08CC - 0x08CC)
class ACTFM_DDGRI : public ACTF_DDGRI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87035 ];

		return pClassPointer;
	};

};

UClass* ACTFM_DDGRI::pClassPointer = NULL;

// Class DunDefSpecial.CTF_UIGameStats
// 0x0024 (0x0FE4 - 0x0FC0)
class UCTF_UIGameStats : public UUI_GameStats
{
public:
	class UUILabel*                                    Team1PlayerList;                                  		// 0x0FC0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team2PlayerList;                                  		// 0x0FC4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    TeamName;                                         		// 0x0FC8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    TeamName01;                                       		// 0x0FCC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team1ScoreList;                                   		// 0x0FD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team2ScoreList;                                   		// 0x0FD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team1KillList;                                    		// 0x0FD8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    Team2KillList;                                    		// 0x0FDC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LocalPlayerHighLightColor;                        		// 0x0FE0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87036 ];

		return pClassPointer;
	};

	void GetUITeamLists ( int TeamOnlyCheck, struct FString* tList, struct FString* kList, struct FString* sList );
	struct FString GetColorString ( struct FColor aColor );
	void UpdateTeamPanels ( );
	void CustomInit ( int CustomInitIndex );
};

UClass* UCTF_UIGameStats::pClassPointer = NULL;

// Class DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover
// 0x0000 (0x00E8 - 0x00E8)
class UDunDef_SeqAct_AddPlatformToVerticalTowerMover : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87076 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqAct_AddPlatformToVerticalTowerMover::pClassPointer = NULL;

// Class DunDefSpecial.DunDef_VerticalTowerMover
// 0x0014 (0x0230 - 0x021C)
class ADunDef_VerticalTowerMover : public AActor
{
public:
	unsigned long                                      bBuildPhaseOnly : 1;                              		// 0x021C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FPlatformInfo >                     Platforms;                                        		// 0x0220 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                TicksSinceUpdate;                                 		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87080 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void MoveTowers ( struct FPlatformInfo Info );
	TArray< struct FTowerInfo > RebuildTowerCache ( struct FPlatformInfo thePlatformInfo );
	void AddInterpActor ( class AInterpActor* TheActor );
};

UClass* ADunDef_VerticalTowerMover::pClassPointer = NULL;

// Class DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements
// 0x0001 (0x00E9 - 0x00E8)
class UDunDef_SeqAct_CheckToUnlockAchievements : public USequenceAction
{
public:
	unsigned char                                      AchievementCheckSet;                              		// 0x00E8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87082 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqAct_CheckToUnlockAchievements::pClassPointer = NULL;

// Class DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam
// 0x0004 (0x00EC - 0x00E8)
class UDunDef_SeqAct_CTDWinGameForTeam : public USequenceAction
{
public:
	int                                                WinningTeamIndex;                                 		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87086 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqAct_CTDWinGameForTeam::pClassPointer = NULL;

// Class DunDefSpecial.DunDef_SeqAct_GetMVP
// 0x0000 (0x00E8 - 0x00E8)
class UDunDef_SeqAct_GetMVP : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87090 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqAct_GetMVP::pClassPointer = NULL;

// Class DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene
// 0x0008 (0x00F0 - 0x00E8)
class UDunDef_SeqAct_HideGlobalUIScene : public USequenceAction
{
public:
	class UDunDefUIScene*                              aUIScene;                                         		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceClose : 1;                                  		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87097 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UDunDef_SeqAct_HideGlobalUIScene::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_TripWire
// 0x0100 (0x09E4 - 0x08E4)
class ADunDefTower_TripWire : public ADunDefTower_DetonationType
{
public:
	TArray< struct FBeamTrippers >                     currentBeamTrippers;                              		// 0x08E4 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	TArray< class ADunDefTower_TripWire* >             ChildNodes;                                       		// 0x08F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADunDefTower_TripWire*                       ChildNode;                                        		// 0x08FC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bIsChildNode : 1;                                 		// 0x0900 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bUseDetonation : 1;                               		// 0x0900 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShowInactiveEffectOnDeactivate : 1;              		// 0x0900 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bActiveDamage : 1;                                		// 0x0900 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bShutDown : 1;                                    		// 0x0900 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      bDoesStun : 1;                                    		// 0x0900 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bContinuousProcs : 1;                             		// 0x0900 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bAllowTargeting : 1;                              		// 0x0900 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bDoesTracing : 1;                                 		// 0x0900 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bActiveOnStart : 1;                               		// 0x0900 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bWantsChildTodrawUpgradeOverlay : 1;              		// 0x0900 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bSetFullCollisionForChild : 1;                    		// 0x0900 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bDoClientTrace : 1;                               		// 0x0900 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bMoving : 1;                                      		// 0x0900 (0x0004) [0x0000000000000020] [0x00002000] ( CPF_Net )
	unsigned long                                      bDidSingleHit : 1;                                		// 0x0900 (0x0004) [0x0000000000000000] [0x00004000] 
	class ADunDefTower_TripWire*                       ParentNode;                                       		// 0x0904 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              WireDistanceForMaxCost;                           		// 0x0908 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WireDistanceForMinCost;                           		// 0x090C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TowerUnitCostMax;                                 		// 0x0910 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     BeamTraceExtent;                                  		// 0x0914 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveEffectLingerTime;                           		// 0x0920 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    BeamEffect;                                       		// 0x0924 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    InActiveBeamEffect;                               		// 0x0928 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    InActiveBeamEndPointEffect;                       		// 0x092C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ActiveBeamEndPointEffect;                         		// 0x0930 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    PreDetonationEndPointEffect;                      		// 0x0934 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       BeamSocketName;                                   		// 0x0938 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                BaseDamagePerTick;                                		// 0x0940 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DmgProcInterval;                                  		// 0x0944 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDuration;                                   		// 0x0948 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      BeamDamageType;                                   		// 0x094C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeTillDetonate;                                 		// 0x0950 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeEnergy;                                       		// 0x0954 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              LifeEnergyDecrease;                               		// 0x0958 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeEnergyDecreasePerPawnAffected;                		// 0x095C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealAmountMultiplier;                             		// 0x0960 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NetUpdateFrequencyWhenRepairing;                  		// 0x0964 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastRepairIncrementTime;                          		// 0x0968 (0x0004) [0x0000000000000000]              
	int                                                MaxLifeEnergy;                                    		// 0x096C (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class UClass* >                            NoStunDamageTypes;                                		// 0x0970 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             StunnedEffect;                                    		// 0x097C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseStunTime;                                     		// 0x0980 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxZHeight;                                       		// 0x0984 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinZHeight;                                       		// 0x0988 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MiniMapBeamTexture;                               		// 0x098C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapBeamWidth;                                 		// 0x0990 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StunTimeExponent;                                 		// 0x0994 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StunStat;                                         		// 0x0998 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DetonateSound;                                    		// 0x099C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   TripCue;                                          		// 0x09A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LinearDUHealthScaleValue;                         		// 0x09A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DUHealthExp;                                      		// 0x09A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StunTimeString;                                   		// 0x09AC (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StunIntervalEndString;                            		// 0x09B8 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	class UAudioComponent*                             AmbientSoundComponent;                            		// 0x09C4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FColor                                      MiniMapBeamColor;                                 		// 0x09C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StunMultiplier;                                   		// 0x09CC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastCleanUpTime;                                  		// 0x09D0 (0x0004) [0x0000000000000000]              
	struct FVector                                     spawnInPoint;                                     		// 0x09D4 (0x000C) [0x0000000000000020]              ( CPF_Net )
	int                                                modifiedDUCost;                                   		// 0x09E0 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87137 ];

		return pClassPointer;
	};

	float StaticGetTowerScale ( class UDunDefHero* hero, class ADunDefTower* Tower, float TowerRangeScaler );
	bool AllowAbilityMove ( );
	void TransferTowerOwnership ( class APawn* toPawn );
	void CheckAssociateWithHero ( class UDunDefHero* hero, class ADunDefPawn* pawnInstigator, class ADunDefPlayerController* PC );
	bool CanDetonate ( );
	bool HasCharges ( );
	float GetSellWorth ( );
	float eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	void HealDetonationStyle ( int HealAmt, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers );
	class AActor* GetAlternateActor ( );
	bool IsMultiActorTower ( );
	void DrawUpgradeOverlay ( class ADunDefHUD* H, float Opacity, struct FColor upgradeOverlayColor );
	float GetGlobalTowerHealthMultiplier ( );
	void PerformFullHeal ( );
	void SetRadiusScale ( float theRadiusScale );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	struct FString GetToolTipText ( );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	void ScaleHealthMultiplier ( );
	void ReportSummoned ( );
	void UpdateTowerRatingMaterial ( );
	bool NeedsRepair ( unsigned long requireFullHealth );
	float GetHealthPercent ( );
	bool eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	void HealPctOfMaxHealth ( float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers );
	int GetHealth ( unsigned long bGetMax );
	float IncrementRepair ( float CurrentMana, float DeltaTime );
	float IncrementDetonationRepair ( float CurrentMana, float DeltaTime );
	float GetCurrentRepairPercentage ( float StartRepairTime, float RepairSpeed );
	void StartRepair ( );
	float GetTimeToRepair ( );
	float GetCostToRepair ( );
	float GetTimeOfTotalRepair ( );
	void Died ( class AController* EventInstigator, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser );
	void ReportedDeath ( );
	void ReportDeath ( );
	void DecreaseLifeEnergy ( float X );
	bool ContinueDrawingToolTip ( unsigned long ContinueDrawing );
	void DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer );
	bool Sell ( class ADunDefPlayerController* PC );
	void eventDestroyed ( );
	void PlaySellFX ( );
	void Detonate ( int SetDetonationsNumber );
	void ChildEndDetonate ( );
	void ChildDetonate ( );
	void RemoveStunnedActor ( class AActor* stunRemoval, int removalIndex, unsigned long bDontReplicate );
	bool CanStun ( class ADunDefEnemy* stunTest );
	struct FBeamTrippers AddStunnedActor ( class ADunDefEnemy* newStun );
	void ClearBeamTrippers ( unsigned long bFullClear );
	float GetAttackDuration ( );
	void ResetTrip ( );
	void DeactivateTrip ( unsigned long bShutDownEffects );
	void ActivateTrip ( );
	bool DrawMyHUD ( class ADunDefHUD* H );
	float GetTrapDamageMultiplier ( );
	float GetDamageMultiplier ( );
	float GetAttackDamage ( );
	float GetStunTime ( );
	void RemoveTowerBooster ( class UTowerBoosterInterface* aBooster, int indexOverride );
	void AddTowerBooster ( class UTowerBoosterInterface* aBooster );
	void UpdateStuns ( );
	float GetAttackRate ( );
	void DoTracing ( float dt, unsigned long bForceDamage );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetDetonateTimer ( );
	struct FVector GetEndPoint ( );
	struct FVector GetBeamStartLoc ( );
	void UpdateMovementBeams ( );
	void eventTick ( float DeltaTime );
	void ClientSingleSetMovement ( struct FVector endLoc, struct FRotator endRot, unsigned long bShouldCollideWorld );
	bool ForceSingleMove ( struct FVector NewLoc, struct FRotator NewRot, unsigned long bShouldCollideWorld );
	void DisableSingleMovementReplication ( );
	void EnableSingleMovementReplicationTimer ( float Time );
	void DisableMovementReplication ( );
	void EnableMovementReplicationTimer ( float Time );
	void SetDUCost ( int newDUCost );
	int GetNextUpgradeLevel ( unsigned long bForceBeyondMaxUpgrade );
	int GetTimeToUpgradeTower ( );
	int GetCostToUpgradeTower ( );
	int GetTowerUpgradeLevelStatModifier ( unsigned char valueType );
	void ChildDoUpgrade ( );
	void ChildDoDowngrade ( );
	void DoDowngrade ( );
	void DoUpgrade ( );
	bool CanBeUpgraded ( );
	void ShutDownBeamEffects ( );
	void ActivateBeamEffects ( unsigned long bActive );
	void ActivateBeam ( );
	struct FVector GetBeamPoint ( );
	struct FVector GetCollisionPoint ( );
	void SetPlacementPoints ( TArray< struct FVector > SpawnPoints, class ADunDefTower* NodeTemplate );
	void InitializeForInstigator ( class APawn* Pawn );
	void SetUpCollisionMesh ( );
	void InitalizeStatObject ( );
	void OnDestroy_RemoveFromTargetableList ( );
	void OnPostBeginPlay_AddToTargetableList ( );
	void eventPostBeginPlay ( );
	void SetUseHealthBarMat ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefTower_TripWire::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_TripPhysical
// 0x00B0 (0x0A94 - 0x09E4)
class ADunDefTower_TripPhysical : public ADunDefTower_TripWire
{
public:
	struct FVector                                     TargetingLocation;                                		// 0x09E4 (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    TopBeam;                                          		// 0x09F0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    SideBeamA;                                        		// 0x09F4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    SideBeamB;                                        		// 0x09F8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticlePlane;                                    		// 0x09FC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    TopPointA;                                        		// 0x0A00 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    TopPointB;                                        		// 0x0A04 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       TopBoneControllerName;                            		// 0x0A08 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TopSocketName;                                    		// 0x0A10 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlaneFadeTime;                                    		// 0x0A18 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CollisionWidth;                                   		// 0x0A1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          PlaneMaterial;                                    		// 0x0A20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ExpandSound;                                      		// 0x0A24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeshOffSet;                                       		// 0x0A28 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BottomSocketName;                                 		// 0x0A34 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseBottomSocket : 1;                             		// 0x0A3C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowAbilityMove : 1;                            		// 0x0A3C (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bDoSpawnTick : 1;                                 		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBeamStarted : 1;                                 		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bActivatedBeam : 1;                               		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bModifyActorLocation : 1;                         		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bSetCollisionMeshAsComponent : 1;                 		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bClientRecievedLoc : 1;                           		// 0x0A3C (0x0004) [0x0000000000000000] [0x00000080] 
	class UMaterialInstanceConstant*                   MyPlaneMIC;                                       		// 0x0A40 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      TopBoneController;                                		// 0x0A44 (0x0004) [0x0000000000000000]              
	float                                              ScaleInTime;                                      		// 0x0A48 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartScaleTime;                                   		// 0x0A4C (0x0004) [0x0000000000000000]              
	struct FVector                                     topEndPointA;                                     		// 0x0A50 (0x000C) [0x0000000000000000]              
	struct FVector                                     topEndPointB;                                     		// 0x0A5C (0x000C) [0x0000000000000000]              
	struct FVector                                     currentPointA;                                    		// 0x0A68 (0x000C) [0x0000000000000000]              
	struct FVector                                     currentPointB;                                    		// 0x0A74 (0x000C) [0x0000000000000000]              
	float                                              distanceBetween;                                  		// 0x0A80 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              theTime;                                          		// 0x0A84 (0x0004) [0x0000000000000000]              
	struct FVector                                     MeshTranslation;                                  		// 0x0A88 (0x000C) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87138 ];

		return pClassPointer;
	};

	void DisableAbilityMove ( );
	bool AllowAbilityMove ( );
	void ClientDisableMovementReplication ( struct FVector endedLoc );
	void eventBaseChange ( );
	bool ForceMoveActor ( class AActor* Mover, struct FVector NewLoc );
	void GetSelectionLocation ( class AActor* wantsLocation, struct FVector* bestLoc );
	bool IsPhysicalTower ( );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	void UpdateMovementBeams ( );
	bool IsPreviousToolTipActor ( class ADunDefPlayerController* ownerCheck );
	void UpdateDamageFlashing ( );
	void PerformFullHeal ( );
	bool eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	float IncrementRepair ( float CurrentMana, float DeltaTime );
	float GetCurrentRepairPercentage ( float StartRepairTime, float RepairSpeed );
	void StartRepair ( );
	float GetTimeToRepair ( );
	float GetCostToRepair ( );
	float GetTimeOfTotalRepair ( );
	struct FString GetToolTipText ( );
	float GetGlobalTowerHealthMultiplier ( );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	class UPrimitiveComponent* GetOverrideTargetComponent ( );
	void DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer );
	float GetHealthPercent ( );
	int GetHealth ( unsigned long bGetMax );
	void AddHealth ( int howMuch, unsigned long bDontDisplayFloatingNumber );
	void ActivateBeamEffects ( unsigned long bActive );
	void ShutDownBeamEffects ( );
	void ActivateTrip ( );
	bool DrawMyHUD ( class ADunDefHUD* H );
	bool NeedsRepair ( unsigned long requireFullHealth );
	void SubtractHealth ( int DamageAmount );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe );
	float GetAttackRangeOffset ( );
	struct FVector GetTargetingLocation ( class AActor* RequestedBy );
	float GetPhysicalTowerDamageMultiplier ( );
	float GetPhysicalTowerHealthMultiplier ( );
	float GetAuraDamageMultiplier ( );
	bool UseForTowerSelectionPassThrough ( );
	float GetTowerTargetingDesirability ( class ADunDefTower* forTower );
	float GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer );
	void ActivatePlaneBeam ( );
	void ActivateBeam ( );
	void ModifyTranslation ( );
	void SetUpCollisionMesh ( );
	struct FVector GetCollisionPoint ( );
	struct FVector GetSecondBeamPoint ( );
	void ScaleInBeams ( float DeltaTime );
	void StartBeams ( );
	void eventPostBeginPlay ( );
	void SetPlacementPoints ( TArray< struct FVector > SpawnPoints, class ADunDefTower* NodeTemplate );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefTower_TripPhysical::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayer_Hovering
// 0x002C (0x0DAC - 0x0D80)
class ADunDefPlayer_Hovering : public ADunDefPlayer
{
public:
	struct FName                                       HoveringBlenderName;                              		// 0x0D80 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoverOnBlendTime;                                 		// 0x0D88 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoverOffBlendTime;                                		// 0x0D8C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HoveringStartSound;                               		// 0x0D90 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HoveringStopSound;                                		// 0x0D94 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    HoveringParticleSystem;                           		// 0x0D98 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             HoveringLoopSound;                                		// 0x0D9C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       HoveringParticleSystemAttachSocketName;           		// 0x0DA0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlend*                              HoveringBlender;                                  		// 0x0DA8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87162 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
	void StopHovering ( );
	void StartHovering ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefPlayer_Hovering::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayer_Summoner
// 0x00A8 (0x0E54 - 0x0DAC)
class ADunDefPlayer_Summoner : public ADunDefPlayer_Hovering
{
public:
	struct FName                                       WheelEntryToOpenOnFire;                           		// 0x0DAC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AbilityToActivateOnFire;                          		// 0x0DB4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefTower_SummonEnemy* >          currentSelectedTowers;                            		// 0x0DBC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                SummonBarTextColor;                               		// 0x0DC8 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                SummonBarColor;                                   		// 0x0DD8 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    HoverEffect;                                      		// 0x0DE8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    BookHoverEffect;                                  		// 0x0DEC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    LeftHandGlow;                                     		// 0x0DF0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    RightHandGlow;                                    		// 0x0DF4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       RightHandSocket;                                  		// 0x0DF8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeftHandSocket;                                   		// 0x0E00 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HoverSocket;                                      		// 0x0E08 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BookHoverSocket;                                  		// 0x0E10 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     RepairingTowerWeaponEmitterTemplate;              		// 0x0E18 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     UpgradingTowerWeaponEmitterTemplate;              		// 0x0E1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     HealingSelfWeaponEmitterTemplate;                 		// 0x0E20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     SummoningTowerWeaponEmitterTemplate;              		// 0x0E24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     DetonatingTrapsEmitterTemplate;                   		// 0x0E28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     SellTowerEmitterTemplate;                         		// 0x0E2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  OverlordMiniMapIconTexture;                       		// 0x0E30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInstanceConstant* >         phaseShiftMICoverride;                            		// 0x0E34 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cameraIconSize;                                   		// 0x0E40 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             OrderIssuedUnitCommand;                           		// 0x0E44 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bIsPhased : 1;                                    		// 0x0E48 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class ADunDefPlayerAbility_PhaseShift*             myPhaseShiftAbility;                              		// 0x0E4C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class ADunDefEmitterSpawnable*                     castingSpellEmitter;                              		// 0x0E50 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87161 ];

		return pClassPointer;
	};

	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	TArray< class UMaterialInstanceConstant* > GetPhaseShiftMaterials ( );
	void IssuedCommand ( );
	class ADunDefEmitterSpawnable* GetSellTowerEmitter ( );
	class ADunDefEmitterSpawnable* GetTrapDetonationEmitter ( );
	class ADunDefEmitterSpawnable* GetUpgradingWeaponEmitter ( );
	class ADunDefEmitterSpawnable* GetWeaponRepairEmitter ( );
	class ADunDefEmitterSpawnable* GetHealingWeaponEmitter ( );
	class ADunDefEmitterSpawnable* GetSummoningTowerEmitter ( );
	void StopSpellEmitter ( );
	void StartSpellEmitter ( class ADunDefEmitterSpawnable* Template, unsigned long DontSetAsPrimaryEffect, unsigned long IsSpawnEffect, unsigned long bForceSpawnOnWeapon );
	bool AllowDropPickups ( );
	void SetOwnerNoSee ( unsigned long ownerNoSee, unsigned long ownerNoSeeWeapon );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	float eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe );
	void eventPhaseScaleDown ( );
	void UsedAbility ( class ADunDefPlayerAbility* ability );
	void CheckForTokens ( );
	bool AllowFamiliarAbilities ( class UHeroEquipment_Familiar* askingFamiliar );
	void AttachAllEquipment ( );
	void DetachAllEquipment ( );
	void SetPhased ( unsigned long bNewPhaseState );
	bool AllowEquipmentAttachment ( );
	void eventDestroyed ( );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	TArray< class ADunDefTower_SummonEnemy* > GetSelectedTowers ( );
	void RemoveSelectedTower ( class ADunDefTower_SummonEnemy* RemoveTower );
	void ServerRemoveSelectedTower ( class ADunDefTower_SummonEnemy* RemoveTower );
	void RemoveAllSelectedTowers ( );
	bool HasSelectedTower ( class ADunDefTower_SummonEnemy* chkTower );
	void AddSelectedTowerGroup ( TArray< class ADunDefTower_SummonEnemy* > newTowers );
	void ServerAddSelectedTower ( class ADunDefTower_SummonEnemy* newTower );
	void AddSelectedTower ( class ADunDefTower_SummonEnemy* newTower );
	void ClientSetupColors ( );
	void SetMyCustomColors ( class ADunDefPlayerController* aController, class UDunDefHero* usingHero );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPlayer_Summoner::pClassPointer = NULL;

// Class DunDefSpecial.DunDefDamageType_ProtoBeam
// 0x0000 (0x00D4 - 0x00D4)
class UDunDefDamageType_ProtoBeam : public UDunDefDamageType_Passive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87168 ];

		return pClassPointer;
	};

};

UClass* UDunDefDamageType_ProtoBeam::pClassPointer = NULL;

// Class DunDefSpecial.DunDefDecoyTarget
// 0x005C (0x0564 - 0x0508)
class ADunDefDecoyTarget : public ADunDefDamageableTarget
{
public:
	unsigned char                                      AssociatedHeroStat;                               		// 0x0508 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthExponent;                                   		// 0x050C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthLinearFactor;                               		// 0x0510 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetingDesirabilityExponent;                    		// 0x0514 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoPoke : 1;                                      		// 0x0518 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFadedIn : 1;                                     		// 0x0518 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	float                                              PokeRadius;                                       		// 0x051C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PokeAggroAmount;                                  		// 0x0520 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveTime;                                       		// 0x0524 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveTimeExponent;                               		// 0x0528 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NumAttackersExponent;                             		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            NoPokeClasses;                                    		// 0x0530 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x053C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0540 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADunDefEmitterSpawnable*                     SpawnedEmitter;                                   		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          MyMaterial;                                       		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MaterialFadeInName;                               		// 0x054C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeInTime;                                       		// 0x0554 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MiniMapIconTexture;                               		// 0x0558 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapIconSize;                                  		// 0x055C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   myMIC;                                            		// 0x0560 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87172 ];

		return pClassPointer;
	};

	float DTGetEnemyTargetingDesirability ( class ADunDefEnemyController* forController );
	bool DrawMyHUD ( class ADunDefHUD* H );
	void PlayDeath ( );
	bool AllowHeroGUID ( int GUID1, int GUID2, int GUID3, int GUID4 );
	bool CanDetonate ( );
	void Detonate ( int SetDetonationsNumber );
	void SelfDestruct ( );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	bool IsClassOnIgnoreList ( class UClass* ActorClass );
	bool SetMaxNumberOfAttackers ( );
	void SetActiveTime ( );
	void DoPoke ( );
	void SetDesirability ( );
	void SetHealth ( );
	void eventTick ( float DeltaTime );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

UClass* ADunDefDecoyTarget::pClassPointer = NULL;

// Class DunDefSpecial.DunDefDropOffPoint
// 0x01BC (0x06C4 - 0x0508)
class ADunDefDropOffPoint : public ADunDefDamageableTarget
{
public:
	class ADunDefPlayer*                               theDroppingOffActor;                              		// 0x0508 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class ADunDefPickupableItem* >             droppedOffItems;                                  		// 0x050C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UDecalComponent*                             Decal;                                            		// 0x0518 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      MyMesh;                                           		// 0x051C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x0520 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0524 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    DropOffParticleComponent;                         		// 0x0528 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    DropOffCompletedParticleComponent;                		// 0x052C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             DropOffSoundComp;                                 		// 0x0530 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FName >                             TakeHitAnims;                                     		// 0x0534 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       CustomAnimName;                                   		// 0x0540 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DropOffFullSound;                                 		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DroppedOffItemSound;                              		// 0x054C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DropOffPointDiedSound;                            		// 0x0550 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                   		// 0x0554 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PushOutOffset;                                    		// 0x0558 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotPlacementInc;                                  		// 0x055C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullOpacityValue;                                 		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DropOffUnderAttackMessageColor;                   		// 0x0564 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DropOffDestroyedColor;                            		// 0x0568 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DropOffUnderAttackMessageString;                  		// 0x056C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DropOffDestroyedString;                           		// 0x0578 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DropOffString;                                    		// 0x0584 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BeganDroppingOffString;                           		// 0x0590 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              DropOffTime;                                      		// 0x059C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefTouchForwardingActor*                 myTouchForwardingActor;                           		// 0x05A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ActiveDropsTexture;                               		// 0x05A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ActiveDropsBGTexture;                             		// 0x05A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  IconBGTexture;                                    		// 0x05AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  IconTexture;                                      		// 0x05B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapScale;                                     		// 0x05B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapOpacity;                                   		// 0x05B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MiniMapOffset;                                    		// 0x05BC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ActiveDisplayOffset;                              		// 0x05C8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              TileTextOffsetY;                                  		// 0x05D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TileTextOffsetX;                                  		// 0x05D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDisplayScale;                               		// 0x05DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IconBGScale;                                      		// 0x05E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IconBGSizeX;                                      		// 0x05E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IconBGSizeY;                                      		// 0x05E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IconBGOffsetX;                                    		// 0x05EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IconBGOffsetY;                                    		// 0x05F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDisplaySizeX;                               		// 0x05F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDisplaySizeY;                               		// 0x05F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDisplayTextScale;                           		// 0x05FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TileScale;                                        		// 0x0600 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDisplayOffsetX;                             		// 0x0604 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDisplayOffsetY;                             		// 0x0608 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TileOffsetY;                                      		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TileOffsetX;                                      		// 0x0610 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TileSizeX;                                        		// 0x0614 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TileSizeY;                                        		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDisplayTextOffsetX;                         		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveDisplayTextOffsetY;                         		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     fullString;                                       		// 0x0624 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ActiveString;                                     		// 0x0630 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DroppingOffString;                                		// 0x063C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              MinFadeDistance;                                  		// 0x0648 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeDistanceOffset;                               		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinFadeOpacity;                                   		// 0x0650 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeDotExponent;                                  		// 0x0654 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ActiveDisplayTextColor;                           		// 0x0658 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerPreventionRadius;                            		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageNotifyInterval;                             		// 0x0660 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IndicateDamageTime;                               		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ActiveScalarParamName;                            		// 0x0668 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ActiveMICIndex;                                   		// 0x0670 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   ActiveMIC;                                        		// 0x0674 (0x0004) [0x0000000000000000]              
	int                                                MaxHoldableDropOffs;                              		// 0x0678 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                currentDropOffTime;                               		// 0x067C (0x0004) [0x0000000000000000]              
	float                                              accumulatedDropOffTime;                           		// 0x0680 (0x0004) [0x0000000000000000]              
	int                                                currentNumDropOffs;                               		// 0x0684 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bIsActive : 1;                                    		// 0x0688 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bStartedDangerFadeIn : 1;                         		// 0x0688 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDropOffFilled : 1;                               		// 0x0688 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	class UMaterialInterface*                          InDangerHUDWaypointMatHealthBar;                  		// 0x068C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          InDangerHUDWaypointMat;                           		// 0x0690 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   InDangerHUDWaypointMatHealthBarInst;              		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              InDangerHUDFadeOutTime;                           		// 0x0698 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InDangerHUDFadeInTime;                            		// 0x069C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastStartedDangerFadeInTime;                      		// 0x06A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WarningIconCenterYOffset;                         		// 0x06A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WarningIconCenterScale;                           		// 0x06A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DropOffFilledMessage;                             		// 0x06AC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    DifficultyHealthMultipliers;                      		// 0x06B8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87246 ];

		return pClassPointer;
	};

	bool PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius );
	bool AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point );
	bool CheckAllowance ( );
	float DTGetEnemyTargetingDesirability ( class ADunDefEnemyController* forController );
	void eventPostBeginPlay ( );
	void NotifyPackageDestroyed ( );
	void Died ( class AController* EventInstigator, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser );
	void NotifyHealthChange ( );
	void PlayHitEffect ( class UClass* DamageType, struct FVector HitLocation );
	void AdjustDamage ( class UClass* DamageType, class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, int* DamageAmount, struct FVector* Momentum );
	bool OnlyDrawHUDForOwner ( );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	void DrawActiveDisplay ( class UCanvas* C, struct FVector ScreenPos, float Scale, float Opacity, unsigned long bIsMiniMap );
	bool DrawMyHUD ( class ADunDefHUD* H );
	void DeactivatePoint ( );
	void TurnOffActiveEffects ( );
	void TurnOnActiveEffects ( );
	void ActivatePoint ( int maxDropOffs );
	void ClearDropOffActor ( );
	void SetDropOffActor ( class ADunDefPlayer* DoA );
	void NotifyPackageDropOff ( class ADunDefPlayer* theDropper );
	void PlaceNewItem ( class ADunDefPickupableItem* NewItem );
	bool IsFull ( );
	void RemoveDropOffItem ( class ADunDefPickupableItem* RemoveItem );
	void DropOffUnFilled ( );
	void DropOffFilled ( );
	void AddDropOffItem ( class ADunDefPlayer* droppedOffActor );
	void UpdateDropOff ( float DeltaTime );
	void eventTick ( float DeltaTime );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefDropOffPoint::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPickupableItem
// 0x00A0 (0x02C4 - 0x0224)
class ADunDefPickupableItem : public ADunDefDroppedItem
{
public:
	class UParticleSystemComponent*                    DropOffParticleComponent;                         		// 0x0224 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    PickedUpParticleComponent;                        		// 0x0228 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UStaticMesh* >                       myMeshes;                                         		// 0x022C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                myMeshIndex;                                      		// 0x0238 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UStaticMeshComponent*                        myActiveMesh;                                     		// 0x023C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADunDefEmitterSpawnable*                     PackageDestroyTemplate;                           		// 0x0240 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     PickUpEmitter;                                    		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPickupDistance;                                		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PickupWeighting;                                  		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PickupOffset;                                     		// 0x0250 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ToolTipDrawColor;                                 		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PickUpString;                                     		// 0x0258 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PickedUpHudMessage;                               		// 0x0264 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LostPackageString;                                		// 0x0270 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bModifyTargetingDesirability : 1;                 		// 0x027C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowLonePickUp : 1;                             		// 0x027C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsPickedUp : 1;                                  		// 0x027C (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bCanBePickedUp : 1;                               		// 0x027C (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bIsDroppingOff : 1;                               		// 0x027C (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	float                                              ModifiedTargetingDesirability;                    		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAllowedPickUpHits;                             		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxDroppedHealth;                                 		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                currentHealth;                                    		// 0x028C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  OffScreenWaypointTexture;                         		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  OnScreenWaypointTexture;                          		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  WayPointToMe;                                     		// 0x0298 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointIconOffscreenScale;                       		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointIconCenterScale;                          		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointCenterYOffset;                            		// 0x02A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      WayPtColor;                                       		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      PickedUpColor;                                    		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   PickupSound;                                      		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefDropOffPoint*                         closestDropOffPoint;                              		// 0x02B4 (0x0004) [0x0000000000000000]              
	class ADunDefPickupableSpawner*                    myPickupSpawner;                                  		// 0x02B8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADunDefPlayer*                               ItemHolder;                                       		// 0x02BC (0x0004) [0x0000000000000000]              
	class ADunDefDropOffPoint*                         myDropOffPoint;                                   		// 0x02C0 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87249 ];

		return pClassPointer;
	};

	void SetDroppingOff ( unsigned long IsDroppingOff, class ADunDefDropOffPoint* newDP );
	void eventDestroyed ( );
	void NotifyHolderLost ( class ADunDefPlayer* lostHolder );
	void DoDestroyEffects ( );
	void DestroyPickUp ( unsigned long bFromDamage );
	void PlaceAtPoint ( struct FVector NewLoc );
	void DropOffItem ( class ADunDefDropOffPoint* DropOffPoint );
	void DrawWaypointToMe ( class ADunDefHUD* H );
	void GetDropOffWayPt ( );
	bool OnlyDrawHUDForOwner ( );
	bool DrawMyHUD ( class ADunDefHUD* H );
	bool CanBePickedUp ( class ADunDefPlayerController* PC );
	void PickupItem ( class ADunDefPlayer* newHolder );
	void BeginBeingPickedUp ( class ADunDefPlayerController* newHolder );
	void AttachToSpawner ( );
	void InitMesh ( class ADunDefPickupableSpawner* MySpawner );
	int GetToolTipPriority ( );
	bool TakesToolTipPriority ( class UDunDefToolTipInterface* otherToolTip );
	bool ContinueDrawingToolTip ( unsigned long ContinueDrawing );
	void DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer );
	bool AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point );
	bool CheckAllowance ( );
	bool PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	float GetActivationOffset ( );
	float GetActivationWeighting ( );
	void Client_Activate ( class ADunDefPlayerController* PC, int activationType );
	void Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType );
	int AllowActivation ( class ADunDefPlayerController* PC, int activationType );
	void SetMyActiveMesh ( int MeshIndex );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPickupableItem::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTouchForwardingActor
// 0x0008 (0x0224 - 0x021C)
class ADunDefTouchForwardingActor : public AActor
{
public:
	class AActor*                                      TouchParent;                                      		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x0220 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87313 ];

		return pClassPointer;
	};

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetTouchParent ( class AActor* NewParent );
};

UClass* ADunDefTouchForwardingActor::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerController_Delivery
// 0x0008 (0x0B40 - 0x0B38)
class ADunDefPlayerController_Delivery : public ADunDefPlayerController
{
public:
	class ADunDefPickupableItem*                       myCarriedItem;                                    		// 0x0B38 (0x0004) [0x0000000000000000]              
	int                                                carriedHitsTaken;                                 		// 0x0B3C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87358 ];

		return pClassPointer;
	};

	void PawnDied ( class APawn* inPawn );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void DropCurrentItem ( );
	void PickupItem ( class ADunDefPickupableItem* newPickup );
};

UClass* ADunDefPlayerController_Delivery::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_Delivery
// 0x0084 (0x07A4 - 0x0720)
class ADunDefGRI_Delivery : public ADunDefGameReplicationInfo
{
public:
	TArray< class ADunDefDropOffPoint* >               worldDropOffPts;                                  		// 0x0720 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ADunDefDropOffPoint* >               activeDropOffPoints;                              		// 0x072C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumFullPoints;                                    		// 0x0738 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FColor                                      DeliveryTextColor;                                		// 0x073C (0x0004) [0x0000000000000000]              
	struct FColor                                      DeliveryStatusTextColor;                          		// 0x0740 (0x0004) [0x0000000000000000]              
	class ADunDefPlayerAbility_PickUpItem*             PickupItemAbilityTemplate;                        		// 0x0744 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoneDoingDelivery : 1;                           		// 0x0748 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bDisableTimer : 1;                                		// 0x0748 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bDisableTimerBySpeedBuild : 1;                    		// 0x0748 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< class ADunDefPlayer* >                     PackageHolders;                                   		// 0x074C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              PackageHoldingGroundSpeed;                        		// 0x0758 (0x0004) [0x0000000000000000]              
	float                                              DeliveryTimeLimit;                                		// 0x075C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     TimeLimitString;                                  		// 0x0760 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DeliveryLimitString;                              		// 0x076C (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DeliveryString;                                   		// 0x0778 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DropOffString;                                    		// 0x0784 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PickUpString;                                     		// 0x0790 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      TimeLimitTextColor;                               		// 0x079C (0x0004) [0x0000000000000000]              
	class ADunDefPickupableItem*                       currentDeliveryItem;                              		// 0x07A0 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87375 ];

		return pClassPointer;
	};

	bool AllowedToTeleport ( class APawn* Teleportee );
	void SetCurrentDeliveryItem ( class ADunDefPickupableItem* NewItem );
	void RemovePackageHolder ( class ADunDefPlayer* aPlayer );
	void AddPackageHolder ( class ADunDefPlayer* aPlayer );
	float ModifyPlayerGroundSpeed ( class ADunDefPlayer* aPlayer, float theGroundSpeed );
	bool AllowPackageSpawn ( );
	void SetInCombatPhase ( unsigned long inCombatPhase );
	void DrawMyHUD ( class ADunDefHUD* H );
	void ClearDropPoints ( );
	void NotifyLostDropOffPoint ( class ADunDefDropOffPoint* lostPoint );
	void NotifyFilledDropOffPoint ( class ADunDefDropOffPoint* filledPoint );
	void SelectNewDropOffPoint ( );
	void Server_AddGRIHeroAbilities ( class ADunDefPlayerController* PC );
	void EndBuildPhase ( );
	void eventTick ( float DeltaTime );
	void eventPostBeginPlay ( );
};

UClass* ADunDefGRI_Delivery::pClassPointer = NULL;

// Class DunDefSpecial.DunDefEnemyCrystalCore
// 0x0028 (0x0530 - 0x0508)
class ADunDefEnemyCrystalCore : public ADunDefDamageableTarget
{
public:
	class UStaticMeshComponent*                        CollisionMesh;                                    		// 0x0508 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    CoreParticleEffect;                               		// 0x050C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             MyAmbientSound;                                   		// 0x0510 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPointLightComponent*                        CoreLight;                                        		// 0x0514 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTexture2D*                                  MiniMapIconTexture;                               		// 0x0518 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapIconSize;                                  		// 0x051C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    DifficultyHealthMultipliers;                      		// 0x0520 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxDifficultySets;                                		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87566 ];

		return pClassPointer;
	};

	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefEnemyCrystalCore::pClassPointer = NULL;

// Class DunDefSpecial.DunDefFlashHeal
// 0x0048 (0x031C - 0x02D4)
class ADunDefFlashHeal : public ADunDefEmitterSpawnable
{
public:
	float                                              HealthPercentToHeal;                              		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPercentToHealExp;                           		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHealPct;                                       		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealRadius;                                       		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealRadiusExp;                                    		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectRadius;                                     		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealDelay;                                        		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScalingHeroStatType;                              		// 0x02F0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHealSameTeamOnly : 1;                            		// 0x02F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UClass*                                      HealDamageType;                                   		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            AllowedHealClasses;                               		// 0x02FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADunDefEmitterSpawnable*                     HealEmitter;                                      		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DummyPercentHealingString;                        		// 0x030C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              HealRadiusMult;                                   		// 0x0318 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87590 ];

		return pClassPointer;
	};

	void SpawnHealEmitter ( class AActor* HealedActor );
	bool eventAllowSpawn ( class AActor* theArchetype, struct FVector theLoc, struct FRotator theRot );
	void FlashHeal ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefFlashHeal::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_Assault
// 0x0058 (0x0778 - 0x0720)
class ADunDefGRI_Assault : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                   		// 0x0720 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     NumLivesString;                                   		// 0x0724 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NumCoresString;                                   		// 0x0730 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      NumLivesStringColor;                              		// 0x073C (0x0004) [0x0000000000000000]              
	struct FColor                                      NumCoresStringColor;                              		// 0x0740 (0x0004) [0x0000000000000000]              
	unsigned long                                      HadPositiveCores : 1;                             		// 0x0744 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              KillPhaseTimeLimit;                               		// 0x0748 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              NightmareGroundSpeedLerp;                         		// 0x074C (0x0004) [0x0000000000000000]              
	float                                              NightmareTimeLimitMultiplier;                     		// 0x0750 (0x0004) [0x0000000000000000]              
	struct FString                                     TimeLimitString;                                  		// 0x0754 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      TimeLimitTextColor;                               		// 0x0760 (0x0004) [0x0000000000000000]              
	struct FString                                     DestroyedEnemyCoreString;                         		// 0x0764 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      DestroyedEnemyCoreStringColor;                    		// 0x0770 (0x0004) [0x0000000000000000]              
	int                                                LastNumberOfCoresRemaining;                       		// 0x0774 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87629 ];

		return pClassPointer;
	};

	bool AllowedToTeleport ( class APawn* Teleportee );
	float GetEnemyLifeSpanMultiplier ( class ADunDefEnemy* anEnemy );
	float ModifyPlayerGroundSpeed ( class ADunDefPlayer* aPlayer, float theGroundSpeed );
	float GetTrapRangeMultiplier ( class ADunDefTower_DetonationType* aTrap );
	float GetAuraRangeMultiplier ( class ADunDefTower_Aura* anAura );
	float GetTrapDamageMultiplier ( class ADunDefTower_DetonationType* aTrap );
	float GetTrapHealthMultiplier ( class ADunDefTower_DetonationType* aTrap );
	float GetStrengthDrainAuraMultiplier ( class ADunDefTower_AuraStrengthDrain* anAura );
	float GetAuraDamageMultiplier ( class ADunDefTower_Aura* anAura );
	float GetAuraHealthMultiplier ( class ADunDefTower_Aura* anAura );
	float GetProjectileLimitDistance ( class AActor* anInstigator, float originalLimit );
	void PostBeginPlay ( );
	void eventTick ( float DeltaTime );
	int GetNumberOfEnemyCoresRemaining ( );
	void DrawMyHUD ( class ADunDefHUD* H );
	void RestartedPlayer ( class ADunDefPlayerController* NewPlayer );
	bool CanEnterSpectatorMode ( class ADunDefPlayerController* thePlayerController );
	bool CanRespawnPlayer ( class ADunDefPlayerController* thePlayerController );
};

UClass* ADunDefGRI_Assault::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_Chicken
// 0x0094 (0x07B4 - 0x0720)
class ADunDefGRI_Chicken : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                   		// 0x0720 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     NumLivesString;                                   		// 0x0724 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      NumLivesStringColor;                              		// 0x0730 (0x0004) [0x0000000000000000]              
	class ADunDefPlayer*                               ChickenPlayer;                                    		// 0x0734 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     IsTheChickenString;                               		// 0x0738 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MSG_YouAreTheChicken;                             		// 0x0744 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SpectatorNoLivesWaitString;                       		// 0x0750 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MSG_WillBecomeChicken;                            		// 0x075C (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      ChickenMessageColor;                              		// 0x0768 (0x0004) [0x0000000000000000]              
	struct FColor                                      ChickenMessageYouColor;                           		// 0x076C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ChickenIcon;                                      		// 0x0770 (0x0004) [0x0000000000000000]              
	struct FVector                                     ChickenIconPositionOffset;                        		// 0x0774 (0x000C) [0x0000000000000000]              
	float                                              ChickenIconPositionHeightScale;                   		// 0x0780 (0x0004) [0x0000000000000000]              
	float                                              ChickenIconSize;                                  		// 0x0784 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ChickenSoundEffect;                               		// 0x0788 (0x0004) [0x0000000000000000]              
	TArray< int >                                      LivesRemainings;                                  		// 0x078C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSentChickenChangeNotification : 1;               		// 0x0798 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bWasAChicken : 1;                                 		// 0x0798 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIsSinglePlayer : 1;                              		// 0x0798 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              LastChickenChangeTime;                            		// 0x079C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ADunDefPlayer*                               NewChickenPlayer;                                 		// 0x07A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ChickenChangeNotificationInterval;                		// 0x07A4 (0x0004) [0x0000000000000000]              
	float                                              ChickenChangeInterval;                            		// 0x07A8 (0x0004) [0x0000000000000000]              
	float                                              SinglePlayerChickenTimeout;                       		// 0x07AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SinglePlayerCombatStartChickenInterval;           		// 0x07B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87699 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
	struct FString GetSpectatorWaitString ( );
	void RestartedPlayer ( class ADunDefPlayerController* NewPlayer );
	bool CanEnterSpectatorMode ( class ADunDefPlayerController* thePlayerController );
	bool CanRespawnPlayer ( class ADunDefPlayerController* thePlayerController );
	void DrawMyHUD ( class ADunDefHUD* H );
	void BeganCombatPhase ( );
	void SetChickenPlayer ( class ADunDefPlayer* theNewChickenPlayer );
	class ADunDefPlayer* GetRandomPlayer ( );
	void eventTick ( float DeltaTime );
	void SetInCombatPhase ( unsigned long inCombatPhase );
	void NotifyOfChicken ( class ADunDefPlayerController* PC );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefGRI_Chicken::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_PickUpItem
// 0x0008 (0x046C - 0x0464)
class ADunDefPlayerAbility_PickUpItem : public ADunDefPlayerAbility_GenericSpellTimer
{
public:
	class ADunDefPickupableItem*                       PickupItem;                                       		// 0x0464 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class USoundCue*                                   StartPickingupSound;                              		// 0x0468 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87784 ];

		return pClassPointer;
	};

	void RequestPickup ( class ADunDefPickupableItem* NewItem );
};

UClass* ADunDefPlayerAbility_PickUpItem::pClassPointer = NULL;

// Class DunDefSpecial.DunDefMapInfo_Delivery
// 0x003C (0x0370 - 0x0334)
class UDunDefMapInfo_Delivery : public UDunDefMapInfo
{
public:
	TArray< struct FTimes >                            DifficultyTimeLimits;                             		// 0x0334 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPerDifficulty >                    NumPlayerTimeMultiplier;                          		// 0x0340 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      DropPointsPerWave;                                		// 0x034C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      DUPerWave;                                        		// 0x0358 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      NumDropOffsPerPoints;                             		// 0x0364 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87834 ];

		return pClassPointer;
	};

	int GetPointDropOffCount ( );
	int GetDUForWave ( int waveNumber );
	float GetTimeLimit ( int waveNumber, int difficulty, int NumPlayers );
	int GetWaveDropOffCount ( int waveNumber );
};

UClass* UDunDefMapInfo_Delivery::pClassPointer = NULL;

// Class DunDefSpecial.DunDefManaToken_Golden
// 0x0003 (0x0374 - 0x0371)
class ADunDefManaToken_Golden : public ADunDefManaToken
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87880 ];

		return pClassPointer;
	};

	void Collected ( class ADunDefPlayer* byPlayer );
};

UClass* ADunDefManaToken_Golden::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_GoldenTokens
// 0x0074 (0x0794 - 0x0720)
class ADunDefGRI_GoldenTokens : public ADunDefGameReplicationInfo
{
public:
	class ADunDefEnemy*                                GoldenEnemy;                                      		// 0x0720 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ADunDefEnemy*                                PreviousGoldenEnemy;                              		// 0x0724 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PreviousGoldEffectComp;                           		// 0x0728 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             GoldParticleEffect;                               		// 0x072C (0x0004) [0x0000000000000000]              
	class ADunDefManaToken_Golden*                     GoldenManaTokenTemplate;                          		// 0x0730 (0x0004) [0x0000000000000000]              
	struct FString                                     GoldenManaTokenCollectedString;                   		// 0x0734 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AllGoldenManaTokenCollectedString;                		// 0x0740 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GoldenManaTokensToCollectString;                  		// 0x074C (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      GoldenManaTokenCollectedStringColor;              		// 0x0758 (0x0004) [0x0000000000000000]              
	struct FColor                                      AllGoldenManaTokenCollectedStringColor;           		// 0x075C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   GoldMaterialTemplate;                             		// 0x0760 (0x0004) [0x0000000000000000]              
	int                                                NumSpawners;                                      		// 0x0764 (0x0004) [0x0000000000000000]              
	int                                                NumGoldenTokens;                                  		// 0x0768 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                LastNumGoldenTokens;                              		// 0x076C (0x0004) [0x0000000000000000]              
	float                                              NextGoldenEnemyTimer;                             		// 0x0770 (0x0004) [0x0000000000000000]              
	float                                              GoldenEnemyMinInterval;                           		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              GoldenEnemyMaxInterval;                           		// 0x0778 (0x0004) [0x0000000000000000]              
	float                                              MaxGoldenEnemyAge;                                		// 0x077C (0x0004) [0x0000000000000000]              
	float                                              GoldenTokenRequirementWaveMultiplier;             		// 0x0780 (0x0004) [0x0000000000000000]              
	float                                              TokenEnemyDifficultyOffset;                       		// 0x0784 (0x0004) [0x0000000000000000]              
	TArray< class UDunDef_SeqAct_EnemyWaveSpawner* >   UsedSpawners;                                     		// 0x0788 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87883 ];

		return pClassPointer;
	};

	void DrawMyHUD ( class ADunDefHUD* H );
	void SetInCombatPhase ( unsigned long inCombatPhase );
	void CollectedGoldenToken ( );
	void PawnDied ( class APawn* KilledPawn );
	void SetGoldenEnemy ( class ADunDefEnemy* Enemy );
	void eventPostBeginPlay ( );
	void eventTick ( float DeltaTime );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefGRI_GoldenTokens::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit
// 0x0028 (0x0748 - 0x0720)
class ADunDefGRI_KillEnemiesTimeLimit : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                   		// 0x0720 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              KillPhaseTimeLimit;                               		// 0x0724 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     TimeLimitString;                                  		// 0x0728 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      TimeLimitTextColor;                               		// 0x0734 (0x0004) [0x0000000000000000]              
	TArray< int >                                      LivesRemainings;                                  		// 0x0738 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisableTimer : 1;                                		// 0x0744 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bDisableTimerBySpeedBuild : 1;                    		// 0x0744 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNightmareDontAllowRespawn : 1;                   		// 0x0744 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87934 ];

		return pClassPointer;
	};

	struct FString GetSpectatorWaitString ( );
	void RestartedPlayer ( class ADunDefPlayerController* NewPlayer );
	bool CanEnterSpectatorMode ( class ADunDefPlayerController* thePlayerController );
	bool CanRespawnPlayer ( class ADunDefPlayerController* thePlayerController );
	void DrawMyHUD ( class ADunDefHUD* H );
	void ReceivedGameClass ( );
	void SetInCombatPhase ( unsigned long inCombatPhase );
	void eventPostBeginPlay ( );
	void eventTick ( float DeltaTime );
};

UClass* ADunDefGRI_KillEnemiesTimeLimit::pClassPointer = NULL;

// Class DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit
// 0x0040 (0x0374 - 0x0334)
class UDunDefMapInfo_KillEnemiesTimeLimit : public UDunDefMapInfo
{
public:
	TArray< float >                                    TimeLimits;                                       		// 0x0334 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    TimeLimitMultipliers;                             		// 0x0340 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    DifficultyTimeLimitAdditions;                     		// 0x034C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTimeLimitAddition >                WavePlayerTimeLimitAdditions;                     		// 0x0358 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                KillEnemiesTimeLimitWaveToStartAt;                		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      LivesPerDifficulty;                               		// 0x0368 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87947 ];

		return pClassPointer;
	};

	float GetTimeLimit ( int waveNumber );
};

UClass* UDunDefMapInfo_KillEnemiesTimeLimit::pClassPointer = NULL;

// Class DunDefSpecial.UI_GlobalHUDUberMF
// 0x0018 (0x0720 - 0x0708)
class UUI_GlobalHUDUberMF : public UUI_GlobalHUD
{
public:
	class UUILabel*                                    ScoreLabel;                                       		// 0x0708 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIPanel*                                    ScorePanel;                                       		// 0x070C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    PlayerList;                                       		// 0x0710 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    ScoreList;                                        		// 0x0714 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LocalPlayerHighLightColor;                        		// 0x0718 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DefaultPlayerHighLightColor;                      		// 0x071C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87975 ];

		return pClassPointer;
	};

	void GetPlayerList ( struct FString* pList, struct FString* sList );
	struct FString GetColorString ( struct FColor aColor );
	void UpdateScorePanel ( );
	void eventUpdate ( float DeltaTime );
};

UClass* UUI_GlobalHUDUberMF::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber
// 0x001C (0x0764 - 0x0748)
class ADunDefGRI_KillEnemiesTimeLimit_Uber : public ADunDefGRI_KillEnemiesTimeLimit
{
public:
	struct FColor                                      WinMsgColor;                                      		// 0x0748 (0x0004) [0x0000000000000000]              
	struct FString                                     mvpString;                                        		// 0x074C (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	TArray< float >                                    MoveRepSizes;                                     		// 0x0758 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87984 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	bool ReadToShowStats ( );
	struct FColor GetGameOverLabelColor ( );
	struct FColor GetVictoryLabelColor ( );
	struct FString GetGameOverLabelString ( class APlayerReplicationInfo* myPlayer );
	struct FString GetVictoryLabelString ( class APlayerReplicationInfo* myPlayer );
	bool OverrideEndGameLabel ( );
	class ADunDefPlayerReplicationInfo* GetMVP ( );
	void DoLevelVictory ( );
};

UClass* ADunDefGRI_KillEnemiesTimeLimit_Uber::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_OgreAlly
// 0x0000 (0x0720 - 0x0720)
class ADunDefGRI_OgreAlly : public ADunDefGameReplicationInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88037 ];

		return pClassPointer;
	};

	void ReceivedGameClass ( );
	void SetInCombatPhase ( unsigned long inCombatPhase );
	void eventPostBeginPlay ( );
};

UClass* ADunDefGRI_OgreAlly::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_UberAssault
// 0x000C (0x0784 - 0x0778)
class ADunDefGRI_UberAssault : public ADunDefGRI_Assault
{
public:
	TArray< float >                                    MoveRepSizes;                                     		// 0x0778 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88043 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
};

UClass* ADunDefGRI_UberAssault::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_UberDefense
// 0x000C (0x072C - 0x0720)
class ADunDefGRI_UberDefense : public ADunDefGameReplicationInfo
{
public:
	TArray< float >                                    MoveRepSizes;                                     		// 0x0720 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88049 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
};

UClass* ADunDefGRI_UberDefense::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_VDay2
// 0x0020 (0x0740 - 0x0720)
class ADunDefGRI_VDay2 : public ADunDefGameReplicationInfo
{
public:
	TArray< int >                                      DefaultLivesRemainings;                           		// 0x0720 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LivesRemaining;                                   		// 0x072C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FColor                                      NumLivesStringColor;                              		// 0x0730 (0x0004) [0x0000000000000000]              
	TArray< float >                                    MoveRepSizes;                                     		// 0x0734 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88055 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
	void eventTick ( float DeltaTime );
	void DrawMyHUD ( class ADunDefHUD* H );
	struct FString GetGameOverString ( int GameOverType, int gameOverNumberAppend );
	void DrawExtraEnemyMinimapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap, class ADunDefEnemy* Enemy );
	void PrintPairMatch ( class ADunDefEnemy* aPairMatch1, class ADunDefEnemy* aPairMatch2 );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefGRI_VDay2::pClassPointer = NULL;

// Class DunDefSpecial.DunDefGRI_ZippyTerror
// 0x0000 (0x0720 - 0x0720)
class ADunDefGRI_ZippyTerror : public ADunDefGameReplicationInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88114 ];

		return pClassPointer;
	};

};

UClass* ADunDefGRI_ZippyTerror::pClassPointer = NULL;

// Class DunDefSpecial.DunDefHarbinger_v2
// 0x0034 (0x0D00 - 0x0CCC)
class ADunDefHarbinger_v2 : public ADunDefEnemy
{
public:
	struct FName                                       ShootFireAnimation;                               		// 0x0CCC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChargeAnimationName;                              		// 0x0CD4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileSpawnSocketNameLeft;                    		// 0x0CDC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileSpawnSocketNameRight;                   		// 0x0CE4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GloveEffectSocketName;                            		// 0x0CEC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    FireGloveEffectComponent;                         		// 0x0CF4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    AuraEffectComponent;                              		// 0x0CF8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    FiringAuraEffect;                                 		// 0x0CFC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88116 ];

		return pClassPointer;
	};

	void eventFireAttackShootRight ( );
	void eventFireAttackShootLeft ( );
	void eventFireAttackBegin ( );
	void eventPostBeginPlay ( );
	void GetProjectileSpawnTransformation ( struct FName socketToUse, struct FVector* Position, struct FRotator* Orientation );
	bool IsCurrentlyPlayingAttackAnimation ( );
	float PlayShootFireAnimation ( );
	bool IsCurrentlyPlayingChargeAnimation ( );
	float PlayChargeFireAnimation ( );
	void PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation );
	void PlayJumpAnimation ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefHarbinger_v2::pClassPointer = NULL;

// Class DunDefSpecial.DunDefHarbingerController_v2
// 0x000C (0x0644 - 0x0638)
class ADunDefHarbingerController_v2 : public ADunDefDarkElfController
{
public:
	float                                              AimRandomSpreadYaw;                               		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AimRandomSpreadPitch;                             		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDunDefBuff_Harbinger*                       BuffTemplate;                                     		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88161 ];

		return pClassPointer;
	};

	void PawnDied ( class APawn* inPawn );
	void CheckPlayer ( class ADunDefPlayer* aPlayer );
	void CheckForNearbyPlayers ( );
	void ObstructionJump ( struct FVector jumpForwardDir, struct FVector jumpSideDir );
	void NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	void eventPostBeginPlay ( );
	void FireProjectiles ( struct FName socketToUse );
};

UClass* ADunDefHarbingerController_v2::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPickupableSpawner
// 0x00A8 (0x05B0 - 0x0508)
class ADunDefPickupableSpawner : public ADunDefDamageableTarget
{
public:
	class USkeletalMeshComponent*                      MyMesh;                                           		// 0x0508 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x050C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class ADunDefPickupableItem* >             PickupableTemplates;                              		// 0x0510 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x051C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ActiveParticle;                                   		// 0x0520 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADunDefEmitterSpawnable*                     ActivateEmitter;                                  		// 0x0524 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAllowedSpawnedItems;                           		// 0x0528 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseSocketForSpawn : 1;                           		// 0x052C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInCombatPhase : 1;                               		// 0x052C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAllowActivate : 1;                               		// 0x052C (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	struct FName                                       SocketName;                                       		// 0x0530 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              RespawnNewItemDelay;                              		// 0x0538 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      ToolTipDrawColor;                                 		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CombatPhaseString;                                		// 0x0540 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BuildPhaseString;                                 		// 0x054C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PickedUpSpawnHudMessage;                          		// 0x0558 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	class UTexture2D*                                  MiniMapIconTexture;                               		// 0x0564 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  OffScreenWaypointTexture;                         		// 0x0568 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  OnScreenWaypointTexture;                          		// 0x056C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointIconOffscreenScale;                       		// 0x0570 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointIconCenterScale;                          		// 0x0574 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaypointCenterYOffset;                            		// 0x0578 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MiniMapIconSize;                                  		// 0x057C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      MiniMapIconColor;                                 		// 0x0580 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      MiniMapIconColorDisabled;                         		// 0x0584 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      PickedUpSpawnMessageColor;                        		// 0x0588 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefPickupableItem* >             currentPickupItems;                               		// 0x058C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ADunDefPickupableItem* >             currentSpawnedItems;                              		// 0x0598 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxPickupDistance;                                		// 0x05A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PickupWeighting;                                  		// 0x05A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PickupOffset;                                     		// 0x05AC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88240 ];

		return pClassPointer;
	};

	void AdjustDamage ( class UClass* DamageType, class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, int* DamageAmount, struct FVector* Momentum );
	bool OnlyDrawHUDForOwner ( );
	bool DrawMyHUD ( class ADunDefHUD* H );
	void DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer );
	void ChangedGamePhases ( unsigned long IsCombatPhase );
	void NotifyPickUp ( class ADunDefPickupableItem* pickedupItem, class ADunDefPlayer* playerPickUp );
	void NotifyDestroyed ( class ADunDefPickupableItem* droppedItem );
	void NotifyDrop ( class ADunDefPickupableItem* droppedItem );
	void GetSpawnLocandRot ( struct FVector* sLoc, struct FRotator* sRot );
	void ActivateEffects ( unsigned long bTurnOn );
	void SpawnPickUpItem ( unsigned long bForceSpawn );
	void eventPostBeginPlay ( );
	bool AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point );
	bool CheckAllowance ( );
	bool PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius );
	void DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap );
	void Client_Activate ( class ADunDefPlayerController* PC, int activationType );
	float GetActivationOffset ( );
	float GetActivationWeighting ( );
	void Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType );
	int AllowActivation ( class ADunDefPlayerController* PC, int activationType );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPickupableSpawner::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayer_DualMelee
// 0x0090 (0x0E10 - 0x0D80)
class ADunDefPlayer_DualMelee : public ADunDefPlayer
{
public:
	unsigned char                                      myCurrentStance;                                  		// 0x0D80 (0x0001) [0x0000000000000000]              
	unsigned char                                      PendingFireMain;                                  		// 0x0D81 (0x0001) [0x0000000000000000]              
	unsigned char                                      PendingFireOff;                                   		// 0x0D82 (0x0001) [0x0000000000000000]              
	struct FName                                       OffHandWeaponSocketName;                          		// 0x0D84 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StanceIdleNodeName;                               		// 0x0D8C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StanceMovementNodeName;                           		// 0x0D94 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              StanceBlendTime;                                  		// 0x0D9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlendList*                          StanceIdleNode;                                   		// 0x0DA0 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          StanceMovementNode;                               		// 0x0DA4 (0x0004) [0x0000000000000000]              
	class ADunDefWeapon_MeleeSword*                    PreviousAttackWeapon;                             		// 0x0DA8 (0x0004) [0x0000000000000000]              
	int                                                currentComboSwingIndex;                           		// 0x0DAC (0x0004) [0x0000000000000000]              
	struct FMeleeSwingInfo                             currentComboMeleeSwingInfo;                       		// 0x0DB0 (0x002C) [0x0000000000000000]              
	unsigned long                                      bInCombo : 1;                                     		// 0x0DDC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastSwingTime;                                    		// 0x0DE0 (0x0004) [0x0000000000000000]              
	class ADunDefWeapon_MeleeSword*                    OffHandWeapon;                                    		// 0x0DE4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FMeleeSwingInfo >                   OffHandMeleeSwingInfos;                           		// 0x0DE8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMeleeSwingInfo >                   MainHandMeleeSwingInfos;                          		// 0x0DF4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADunDefPlayerAbility_StanceBase*             myActiveStance;                                   		// 0x0E00 (0x0004) [0x0000000000000000]              
	class ADunDefPlayerAbility_StanceBase*             mySecondaryStance;                                		// 0x0E04 (0x0004) [0x0000000000000000]              
	struct FName                                       PreviousAnim;                                     		// 0x0E08 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88546 ];

		return pClassPointer;
	};

	void SetOwnerNoSee ( unsigned long ownerNoSee, unsigned long ownerNoSeeWeapon );
	bool AutoActivateSecondaryWeapon ( );
	bool AllowNegativeStatusAffecting ( );
	class ADunDefPlayerAbility_StanceBase* GetAlternateStance ( class ADunDefPlayerAbility_StanceBase* askingStance );
	void SetWeaponSpeedMultiplier ( float newMult );
	struct FName GetOverrideSocketName ( class ADunDefWeapon* theWeapon );
	void JumpOffPawn ( );
	bool ShouldPlayHurtAnimation ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, int* Result );
	void eventAnimNotify_ResetOffhandWeaponSwingDamage ( );
	void eventAnimNotify_StopOffhandWeaponSwingDamage ( );
	void eventAnimNotify_StartOffhandWeaponSwingDamage ( );
	void eventAnimNotify_ResetWeaponSwingDamage ( );
	void eventAnimNotify_StopWeaponSwingDamage ( );
	void eventAnimNotify_StartWeaponSwingDamage ( );
	void eventDestroyed ( );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum );
	void GivePlayerHitInfo ( class AActor* HitActor, int dealtDamage, unsigned long bAllowMomentumOverride, struct FVector* appliedMomentum );
	void eventTick ( float DeltaTime );
	void AnimNotify_CurrentAbility_Off ( );
	void AnimNotify_CurrentAbility_On ( );
	void DoStanceBlend ( );
	void DeActivateStance ( class ADunDefPlayerAbility_StanceBase* oldStance );
	void ActivateStance ( class ADunDefPlayerAbility_StanceBase* newStance );
	bool GetMeleeSwingInfoOverride ( class ADunDefWeapon_MeleeSword* overrideForWeap, int* currentMeleeSwingIndex, struct FMeleeSwingInfo* OverrideInfo );
	bool OverrideMeleeSwingInfo ( class ADunDefWeapon_MeleeSword* askingWeapon );
	bool CheckAllowMelee ( class ADunDefWeapon_MeleeSword* weaponCheck, unsigned long checkAnimDuration );
	bool CheckPlayingCustomAnim ( struct FName inAnim, float TimeFromEndToConsiderFinished );
	void StopFire ( unsigned char FireModeNum );
	void ServerStopFire ( unsigned char FireModeNum );
	void SetComboInfo ( class ADunDefWeapon_MeleeSword* comboWeapon, unsigned long bMainHand );
	bool DoStanceCheck ( );
	void StartFire ( unsigned char FireModeNum );
	void ServerStartFire ( unsigned char FireModeNum );
	struct FName GetOffHandSocketName ( );
	bool AllowDualWeapon ( );
	class AInventory* CreateContainedInventoryFromTemplate ( class AActor* InventoryActorTemplate, unsigned long bDoNotActivate );
	void SetOffHandWeapon ( class ADunDefWeapon_MeleeSword* newOffHandWeap );
	class ADunDefWeapon* SwapOffHandWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef );
	class ADunDefWeapon* SwapWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef );
	bool HasLightningStance ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefPlayer_DualMelee::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_StanceBase
// 0x0098 (0x0510 - 0x0478)
class ADunDefPlayerAbility_StanceBase : public ADunDefPlayerAbility_CharacterToggle
{
public:
	class UParticleSystemComponent*                    AbilityEffectComponent;                           		// 0x0478 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADunDefEmitterSpawnable*                     AbilityActivateTemplate;                          		// 0x047C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   AbilityActivateSound;                             		// 0x0480 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   AbilityDeActivateSound;                           		// 0x0484 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FStatMultipliers                            GroundSpeed;                                      		// 0x0488 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FStatMultipliers                            AttackDamage;                                     		// 0x0498 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FStatMultipliers                            AttackSpeed;                                      		// 0x04A8 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FStatMultipliers                            AttackKnockBack;                                  		// 0x04B8 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FStatMultipliers                            MomentumMultiplier;                               		// 0x04C8 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FStatMultipliers                            DamageResistance;                                 		// 0x04D8 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      myStance;                                         		// 0x04E8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       activeEffectSocket;                               		// 0x04EC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowActivateWhileCasting : 1;                   		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCancelAllStancesOnActivate : 1;                  		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCancelTornadoStanceOnActivate : 1;               		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bCancelTurtleStanceOnActivate : 1;                		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bCancelHawkStanceOnActivate : 1;                  		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bIsTurtleStance : 1;                              		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIsTornadoStance : 1;                             		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bIsHawkStance : 1;                                		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bAllowAttackStepTowards : 1;                      		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bNullifyJumpModifier : 1;                         		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bStatusActive : 1;                                		// 0x04F4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bAllowNegativeStatusAffects : 1;                  		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	struct FName                                       StanceDeactivateAnim;                             		// 0x04F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StanceActivateAnim;                               		// 0x0500 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpZMultiplier;                                  		// 0x0508 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AttackKnockBackMomentumBase;                      		// 0x050C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88554 ];

		return pClassPointer;
	};

	bool AllowNegativeStatusAffecting ( );
	void ResetWeaponDamage ( );
	bool StopOffHandWeaponDamage ( );
	bool StopWeaponDamage ( );
	bool StartOffHandWeaponDamage ( );
	bool StartWeaponDamage ( );
	void GivePlayerHitInfo ( class AActor* HitActor, int dealtDamage, unsigned long bAllowMomentumOverride, struct FVector* appliedMomentum );
	void AnimNotify_CurrentAbility_Off ( );
	void AnimNotify_CurrentAbility_On ( );
	bool AllowStanceCancel ( );
	bool CheckDoStanceAttack ( );
	float GetMultiplierValue ( struct FStatMultipliers multiplierCheck, unsigned long bDoLog );
	bool CheckStatus ( );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void OnActivate ( );
	bool AllowStepTowards ( );
	float GetPlayerMomentumMultiplier ( );
	float GetPlayerAttackKnockbackMultiplier ( );
	float GetPlayerAttackSpeedMultiplier ( );
	void PlayActivationAnimation ( );
};

UClass* ADunDefPlayerAbility_StanceBase::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_LeapSlam
// 0x00B4 (0x04DC - 0x0428)
class ADunDefPlayerAbility_LeapSlam : public ADunDefPlayerAbility
{
public:
	float                                              LeapHeight;                                       		// 0x0428 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeapSpeed;                                        		// 0x042C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeapRotationSpeed;                                		// 0x0430 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ManaCostToActivate;                               		// 0x0434 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxLeapDistance;                                  		// 0x0438 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeapStartAnim;                                    		// 0x043C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeapLoopAnim;                                     		// 0x0444 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LeapStopAnim;                                     		// 0x044C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterDamage*                        ShockwaveTemplate;                                		// 0x0454 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeapExtent;                                       		// 0x0458 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MassMomentumExponentialScale;                     		// 0x0464 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponDamageMultiplier;                           		// 0x0468 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AdditionalDamageAmount;                           		// 0x046C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatDamageModifierExponent;                   		// 0x0470 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageMomentum;                              		// 0x0474 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatMomentumModifierExponent;                 		// 0x0478 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              velocityInterp;                                   		// 0x047C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AirTargetLeapStopDistance;                        		// 0x0480 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRequiresAutoAimTarget : 1;                       		// 0x0484 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bStartedLeap : 1;                                 		// 0x0484 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStartDamage : 1;                                 		// 0x0484 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bStopped : 1;                                     		// 0x0484 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	float                                              leapTimeOut;                                      		// 0x0488 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     NotAutoAimTargetFailString;                       		// 0x048C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              HomingScale;                                      		// 0x0498 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      TargetActor;                                      		// 0x049C (0x0004) [0x0000000000000000]              
	struct FVector                                     originalTargetLoc;                                		// 0x04A0 (0x000C) [0x0000000000000000]              
	TArray< struct ADunDefPlayerAbility_LeapSlam_FHitTarget > HitTargets;                                       		// 0x04AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADunDefEmitterSpawnable*                     WeaponEmitterTemplate;                            		// 0x04B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    MyParticleSystemComponent;                        		// 0x04BC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     lastStuckCheck;                                   		// 0x04C0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              hitWallTraceOffset;                               		// 0x04CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StuckCheckInterval;                               		// 0x04D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StuckCheckDistance;                               		// 0x04D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x04D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88690 ];

		return pClassPointer;
	};

	void OnActivate ( );
	int GetCostToActivate ( unsigned long returnTrueValue );
	bool RequestActivation ( unsigned long bHeld );
	bool HasNoAutoAim ( );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	float GetMomentum ( );
	float GetElementalDamage ( );
	float GetDamage ( class ADunDefWeapon_MeleeSword* weaponCheck );
	void AnimNotify_CurrentAbility_Off ( );
	void AnimNotify_CurrentAbility_On ( );
	bool ConsumesInputWhenActive ( );
	void DoTimeOut ( );
	bool GetLeapVelocity ( struct FVector End, struct FVector Start, struct FVector* JumpVelocity );
	void CancelAbility ( );
	void PlayStopAnim ( );
	void ShutOffVFX ( );
	void ActivateHandVFX ( );
	void PushCheck ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPlayerAbility_LeapSlam::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayer_Jester
// 0x008C (0x0E0C - 0x0D80)
class ADunDefPlayer_Jester : public ADunDefPlayer
{
public:
	float                                              WeaponIconScale;                                  		// 0x0D80 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconFrameSize;                              		// 0x0D84 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconYOffset;                                		// 0x0D88 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconXOffset;                                		// 0x0D8C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconXOffset_GamePad;                        		// 0x0D90 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconYOffset_GamePad;                        		// 0x0D94 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconSize;                                   		// 0x0D98 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SplitScreenIconScale;                             		// 0x0D9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrameInterpSpeed;                                 		// 0x0DA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OffHandIconOpacity;                               		// 0x0DA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MainHandIconOpacity;                              		// 0x0DA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefWeapon*                               storedWeapon;                                     		// 0x0DAC (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       WeaponSwapAnim_ToRanged;                          		// 0x0DB0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponSwapAnim_ToStaff;                           		// 0x0DB8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Shootanim_Spear;                                  		// 0x0DC0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinWeaponSwitchDelay;                             		// 0x0DC8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastSwitchTime;                                   		// 0x0DCC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WeaponSwitchSound;                                		// 0x0DD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USurface*                                    WeaponSelectFrame;                                		// 0x0DD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    CrossBowAnimSet;                                  		// 0x0DD8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    StaffAnimSet;                                     		// 0x0DDC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponCrossbow_Socket;                            		// 0x0DE0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponStaff_Socket;                               		// 0x0DE8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponSpear_Socket;                               		// 0x0DF0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponSword_Socket;                               		// 0x0DF8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MainHandIndex;                                    		// 0x0E00 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bDoInterp : 1;                                    		// 0x0E04 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              InterpTime;                                       		// 0x0E08 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88753 ];

		return pClassPointer;
	};

	struct FName StaticGetOverrideSocketName ( class UDunDefHero* aHero );
	struct FName GetOverrideSocketName ( class ADunDefWeapon* theWeapon );
	void SwapAnimSets ( class ADunDefWeapon* NewWeapon );
	void WeaponSet ( class AWeapon* NewWeapon );
	bool DrawMyHUD ( class ADunDefHUD* H );
	void eventTick ( float DeltaTime );
	class UMaterialInstanceConstant* GetWeaponIcon ( unsigned long bOffHand );
	void DrawWeaponIcons ( class UCanvas* C, class ADunDefWeapon* weapDraw, float weapOpacity, int paddingIndex, unsigned long bSelected, float hudScale, class ADunDefPlayerController* PC );
	void eventDestroyed ( );
	class AInventory* CreateContainedInventoryFromTemplate ( class AActor* InventoryActorTemplate, unsigned long bDoNotActivate );
	class ADunDefWeapon* SwapOffHandWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef );
	void DoWeaponSwap ( unsigned long bForceSwap );
	void ServerDoSwap ( unsigned long bForceSwap );
	void SetNewMainWeapon ( class AWeapon* theNewWeapon, unsigned long bRemoveExisting, class UHeroEquipment* equipRef );
	void SetStoredWeapon ( class AWeapon* newStoredWeapon, class UHeroEquipment* equipRef );
	struct FName GetShootAnim ( );
	bool ForceWeaponActivationOverride ( );
	class ADunDefWeapon* SwapWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef );
	bool AllowDualWeapon ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefPlayer_Jester::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayer_SeriesEv
// 0x00D0 (0x0E50 - 0x0D80)
class ADunDefPlayer_SeriesEv : public ADunDefPlayer
{
public:
	class ADunDefWeapon*                               storedWeapon;                                     		// 0x0D80 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              WeaponIconScale;                                  		// 0x0D84 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconFrameSize;                              		// 0x0D88 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconYOffset;                                		// 0x0D8C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconXOffset;                                		// 0x0D90 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconXOffset_GamePad;                        		// 0x0D94 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconYOffset_GamePad;                        		// 0x0D98 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponIconSize;                                   		// 0x0D9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SplitScreenIconScale;                             		// 0x0DA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OffHandIconOpacity;                               		// 0x0DA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MainHandIconOpacity;                              		// 0x0DA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArmUpNoFireTime;                                  		// 0x0DAC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USurface*                                    WeaponSelectFrame;                                		// 0x0DB0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DoubleShootAnim;                                  		// 0x0DB4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SingleShootAnim;                                  		// 0x0DBC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponElementalSocket;                            		// 0x0DC4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponSwapAnim;                                   		// 0x0DCC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             GunUpHurtAnims;                                   		// 0x0DD4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   DefaultWeaponIcon;                                		// 0x0DE0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGameDamageEntry >                  ElementalWeaponOverrides;                         		// 0x0DE4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   WeaponSwitchSound;                                		// 0x0DF0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrameInterpSpeed;                                 		// 0x0DF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinWeaponSwitchDelay;                             		// 0x0DF8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastSwitchTime;                                   		// 0x0DFC (0x0004) [0x0000000000000000]              
	class ADunDefPlayerAbility_ManaCharge*             activeChargeAbility;                              		// 0x0E00 (0x0004) [0x0000000000000000]              
	float                                              LastFireTime;                                     		// 0x0E04 (0x0004) [0x0000000000000000]              
	unsigned long                                      bArmUp : 1;                                       		// 0x0E08 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDoInterp : 1;                                    		// 0x0E08 (0x0004) [0x0000000000000000] [0x00000002] 
	class UMaterialInstanceConstant*                   MainHandWeapTex;                                  		// 0x0E0C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   OffHandWeapTex;                                   		// 0x0E10 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              frameXCenterPos;                                  		// 0x0E14 (0x0004) [0x0000000000000000]              
	float                                              frameYCenterPos;                                  		// 0x0E18 (0x0004) [0x0000000000000000]              
	int                                                MainHandIndex;                                    		// 0x0E1C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              InterpTime;                                       		// 0x0E20 (0x0004) [0x0000000000000000]              
	struct FName                                       HoveringBlenderName;                              		// 0x0E24 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoverOnBlendTime;                                 		// 0x0E2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoverOffBlendTime;                                		// 0x0E30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HoveringStartSound;                               		// 0x0E34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HoveringStopSound;                                		// 0x0E38 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    HoveringParticleSystem;                           		// 0x0E3C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             HoveringLoopSound;                                		// 0x0E40 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       HoveringParticleSystemAttachSocketName;           		// 0x0E44 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlend*                              HoveringBlender;                                  		// 0x0E4C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88886 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
	void StopHovering ( );
	void StartHovering ( );
	void eventTick ( float DeltaTime );
	void UsedAbility ( class ADunDefPlayerAbility* ability );
	void SetActiveChargeAbility ( class ADunDefPlayerAbility_ManaCharge* newCharge );
	float GetManaTokenAttractionRadius ( );
	bool HasMaxManaPower ( );
	void TryTokenCollection ( class ADunDefManaToken* Token );
	bool IsCurrentlyPlayingHurtAnimation ( );
	void PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation );
	bool ShouldOverrideWeaponElementalEffects ( class ADunDefWeapon* weaponCheck );
	void StopFire ( unsigned char FireModeNum );
	void PlayJumpAnimation ( );
	void StartFire ( unsigned char FireModeNum );
	void PutArmDown ( );
	void PlayShootAnimation ( unsigned long isBigShoot, unsigned long Replicate, unsigned long bDontPlayAnim );
	bool ForceUseInstigatorForMuzzle ( );
	bool CanReload ( );
	class UMaterialInstanceConstant* GetWeaponIcon ( unsigned long bOffHand );
	void DrawWeaponIcons ( class UCanvas* C, class ADunDefWeapon* weapDraw, float weapOpacity, int paddingIndex, unsigned long bSelected, float hudScale, class ADunDefPlayerController* PC );
	bool DrawMyHUD ( class ADunDefHUD* H );
	void eventDestroyed ( );
	class AInventory* CreateContainedInventoryFromTemplate ( class AActor* InventoryActorTemplate, unsigned long bDoNotActivate );
	class ADunDefWeapon* SwapOffHandWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef );
	void DoWeaponSwap ( unsigned long bForceSwap );
	void ServerDoSwap ( unsigned long bForceSwap );
	void SetNewMainWeapon ( class AWeapon* theNewWeapon, unsigned long bRemoveExisting, class UHeroEquipment* equipRef );
	void SetStoredWeapon ( class AWeapon* newStoredWeapon, class UHeroEquipment* equipRef );
	class ADunDefWeapon* SwapWeaponFor ( class ADunDefWeapon* weaponTemplate, class UHeroEquipment* equipmentRef );
	struct FName GetOffHandSocketName ( );
	bool OverrideWeaponAttach ( class ADunDefWeapon* weaponCheck );
	bool AllowDualWeapon ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefPlayer_SeriesEv::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_ManaCharge
// 0x0114 (0x058C - 0x0478)
class ADunDefPlayerAbility_ManaCharge : public ADunDefPlayerAbility_CharacterToggle
{
public:
	int                                                currentManaCharge;                                		// 0x0478 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              MinShootTime;                                     		// 0x047C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxShootTime;                                     		// 0x0480 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAllowedManaCharge;                             		// 0x0484 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinAllowedManaCharge;                             		// 0x0488 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageProcInterval;                               		// 0x048C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BeamDamageMomentum;                               		// 0x0490 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageMultiplier;                                 		// 0x0494 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageExponent;                                   		// 0x0498 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaTimeExponent;                                 		// 0x049C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeBarExponent;                                		// 0x04A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BeamRange;                                        		// 0x04A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChargingAnim;                                     		// 0x04A8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ReleasingAnim;                                    		// 0x04B0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MuzzleSocketName;                                 		// 0x04B8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      BeamDamageType;                                   		// 0x04C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    BeamEffect;                                       		// 0x04C4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    MuzzleEffect;                                     		// 0x04C8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    BeamEndEffect;                                    		// 0x04CC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ADunDefEmitterSpawnable*                     ManaPickUpEffect;                                 		// 0x04D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeBetweenManaPickUpVFX;                         		// 0x04D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastManaPickUpTime;                               		// 0x04D8 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    ChargeEffect;                                     		// 0x04DC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInterface*                          ChargeBar;                                        		// 0x04E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     ActivationEffect;                                 		// 0x04E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BarScale;                                         		// 0x04E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargingManaAttractionRadiusMultiplier;           		// 0x04EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BarXOffset;                                       		// 0x04F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BarYOffset;                                       		// 0x04F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BarIconSizeY;                                     		// 0x04F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BarIconSizeX;                                     		// 0x04FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ManaGatherSocketName;                             		// 0x0500 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ManaChargeBarSocket;                              		// 0x0508 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ChargeBarOffset;                                  		// 0x0510 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    ChargeBarRot;                                     		// 0x051C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseCastBarForCharge : 1;                         		// 0x0528 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseActivateAsToggleOnly : 1;                     		// 0x0528 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDoingDamage : 1;                                 		// 0x0528 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      ScaleMomentumForPawnMass : 1;                     		// 0x0528 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	struct FLinearColor                                ChargeBarColor;                                   		// 0x052C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ChargeBarColorAllowActivate;                      		// 0x053C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     NeedMoreManaChargeMsg;                            		// 0x054C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      NeedMoreManaMsgColor;                             		// 0x0558 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   BeginFiringSound;                                 		// 0x055C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   StopFiringSound;                                  		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             LoopingFiringSound;                               		// 0x0564 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LoopingFiringSoundFadeInTime;                     		// 0x0568 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastBeamFireTime;                                 		// 0x056C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   chargeBarMIC;                                     		// 0x0570 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              currentTimeLimit;                                 		// 0x0574 (0x0004) [0x0000000000000000]              
	float                                              MaxPawnMassMomentumScale;                         		// 0x0578 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScaleMomentumForPawnMassExponent;                 		// 0x057C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinPawnMassMomentumScale;                         		// 0x0580 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTargetDeltaPitch;                              		// 0x0584 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTargetDeltaYaw;                                		// 0x0588 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88910 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	bool AllowUsageDuringCastingStates ( );
	void DrawChargeBar ( class ADunDefHUD* H );
	float GetCooldownStartTime ( );
	bool ShouldDrawManaBar ( );
	void StopEffects ( );
	void NotifyStopFire ( );
	void ServerStartDamage ( );
	void NotifyStartFire ( );
	void ActivateEffects ( );
	struct FName GetSocketName ( );
	void AttachParticles ( );
	int GetDamage ( );
	void ResetManaCharge ( );
	void AddManaCharge ( int addedMana );
	void SpawnManaEffect ( );
	void ServerCollectManaToken ( class ADunDefManaToken* Token );
	bool InCylinderFwd ( struct FVector Origin, struct FVector VDir, float RadiusSq, struct FVector A );
	void DoDamage ( );
	void CheckForFire ( );
	float GetTimeBasedOnCharge ( );
	void StartDamage ( );
	void StartDamageEffects ( );
	bool CanHoldMoreCharge ( );
	void CancelAbility ( );
	void OnActivate ( );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefPlayerAbility_ManaCharge::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_PhaseShift
// 0x0060 (0x04D8 - 0x0478)
class ADunDefPlayerAbility_PhaseShift : public ADunDefPlayerAbility_CharacterToggle
{
public:
	class UParticleSystemComponent*                    AbilityEffectComponent;                           		// 0x0478 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       UnPhasedScaleDown;                                		// 0x047C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UnPhasedScaleUp;                                  		// 0x0484 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhasedScaleDown;                                  		// 0x048C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhaseScaleUp;                                     		// 0x0494 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                OverlayEffectColor;                               		// 0x049C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScaleTime;                                        		// 0x04AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReScaleBackUpDelay;                               		// 0x04B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEndCastingStateOnScale : 1;                      		// 0x04B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnterCastingStateWhilePhased : 1;                		// 0x04B4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bScalingDown : 1;                                 		// 0x04B4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bPendingScaleUp : 1;                              		// 0x04B4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bPendingScaleDown : 1;                            		// 0x04B4 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bIgnoreCastingState : 1;                          		// 0x04B4 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bIsPhased : 1;                                    		// 0x04B4 (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      bUpScaling : 1;                                   		// 0x04B4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bScaling : 1;                                     		// 0x04B4 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bUnphasing : 1;                                   		// 0x04B4 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bUnphased : 1;                                    		// 0x04B4 (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )
	float                                              InitialScale;                                     		// 0x04B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ScaleDownCompleteTime;                            		// 0x04BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UMaterialInstanceConstant* >         myOriginalMICs;                                   		// 0x04C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         myMICOverride;                                    		// 0x04CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89072 ];

		return pClassPointer;
	};

	bool AllowUsageDuringCastingStates ( );
	struct FName GetCastingStateNamePC ( );
	void CancelAbility ( );
	void ClientForceCancel ( );
	void ForceCancel ( );
	void SetPhaseMaterials ( unsigned long bPhasedMaterials );
	void StartScaleUp ( );
	void SetMaterialColors ( struct FLinearColor C1, struct FLinearColor c2, struct FLinearColor C3 );
	void OnActivate ( );
	void SetDefaultValues ( );
	void SetPhaseShiftValue ( );
	void PhaseScaleDown ( );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void FinishScaleUp ( );
	void InitializeForPlayer ( class ADunDefPlayer* myPlayer );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPlayerAbility_PhaseShift::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_BuilTripWire
// 0x0064 (0x0778 - 0x0714)
class ADunDefPlayerAbility_BuilTripWire : public ADunDefPlayerAbility_BuildTower
{
public:
	int                                                PlacementPoints;                                  		// 0x0714 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCheckLineOfSight : 1;                            		// 0x0718 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     LineofSightBlockString;                           		// 0x071C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              DUTextScale;                                      		// 0x0728 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinPointPlacementDistance;                        		// 0x072C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DUStringOffset;                                   		// 0x0730 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DUPlacementString;                                		// 0x073C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	TArray< class UClass* >                            CancelsLineOfSightClass;                          		// 0x0748 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystemComponent*                    PreviewBeamEffect;                                		// 0x0754 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     LineofSightExtent;                                		// 0x0758 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     MyAltSummoningEmitter;                            		// 0x0764 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MaxTowerDistance;                                 		// 0x0768 (0x0004) [0x0000000000000000]              
	TArray< struct FPreviewPoint >                     PreviewPoints;                                    		// 0x076C (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89228 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
	void CancelAbility ( );
	bool AllowTowerPlacementPosition ( struct FVector placementPos, unsigned long bOnlyCheckVolumes, int* PlacementDeniedReason );
	struct FVector GetCenterLocation ( );
	bool CanPlaceTowerUnitCost ( );
	int GetDUCost ( unsigned long bUseCustomEndLoc, struct FVector endLoc );
	bool DrawCastingHUD ( class ADunDefHUD* H );
	void CreateNewPreviewPoint ( struct FVector previewLoc );
	void ClearPreviewPoints ( );
	void ServerAddPlacementPoint ( struct FVector tPlacementLocation );
	void PostPlacementUpdate ( float DeltaTime );
	void ServerRequestBuildTower ( struct FVector towerPlacementLocation, struct FRotator towerPlacementRotation );
	void eventAbilityTick ( float DeltaTime );
	void HidePreviewPoints ( );
	void StopAltSummonTowerFXCompleted ( );
	void StopAltSummonTowerFX ( );
	void UpdateAltSummonTowerFX ( float Percent );
	void BeginAltSummonTowerFX ( class ADunDefEmitterSpawnable* spellEffect, struct FVector thePlacementLocation, struct FRotator thePlacementRotation, float scaleMult, unsigned long bUsesDecal );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefPlayerAbility_BuilTripWire::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_DefenseBoost
// 0x0030 (0x0504 - 0x04D4)
class ADunDefPlayerAbility_DefenseBoost : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	TArray< unsigned char >                            MyTowerBoostType;                                 		// 0x04D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ETBAttackRateExponent;                            		// 0x04E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ETBAttackRangeExponent;                           		// 0x04E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ETBDamageExponent;                                		// 0x04E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerDamageMultiplier;                            		// 0x04EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerRangeMultiplier;                             		// 0x04F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerRateMultiplier;                              		// 0x04F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAffectedActor >                    BoostedTowers;                                    		// 0x04F8 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89373 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void RemoveTower ( int Index );
	void AddTower ( class AActor* theAct );
	void eventDestroyed ( );
	void RemoveAllTowers ( );
	void CheckAllTowers ( );
	void RemoveAllTowersFor ( class ADunDefPlayer* aPlayer );
	void AddAllTowersFor ( class ADunDefPlayer* aPlayer );
	void AddEffect ( class AActor* theAct );
	void RemoveEffect ( int Index );
	float GetTowerBoostAmount ( unsigned char boostType );
	bool HasTowerBoostingType ( unsigned char boostType );
	class UDunDefTargetableInterface* GetTowerBoostingTarget ( );
};

UClass* ADunDefPlayerAbility_DefenseBoost::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_EnemyDrain
// 0x0018 (0x04EC - 0x04D4)
class ADunDefPlayerAbility_EnemyDrain : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              DamageScalar;                                     		// 0x04D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageResistanceMultiplier;                       		// 0x04D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedMultiplier;                                  		// 0x04DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageExponent;                                   		// 0x04E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageResistanceExponent;                         		// 0x04E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedExponent;                                    		// 0x04E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89424 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	float GetPawnResistanceMultiplier ( );
	float GetSpeedMultiplier ( );
	float GetDamageMultiplier ( );
	bool CanAffect ( class AActor* theAct );
	void AddEffect ( class AActor* theAct );
	void RemoveEffect ( int Index );
};

UClass* ADunDefPlayerAbility_EnemyDrain::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner
// 0x000C (0x04D4 - 0x04C8)
class ADunDefPlayerAbility_GenericMultiActorSpawner : public ADunDefPlayerAbility_GenericActorSpawner
{
public:
	TArray< struct FSpawnSettings >                    ActorSpawns;                                      		// 0x04C8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89452 ];

		return pClassPointer;
	};

	void DoMultiActorSpawn ( );
	void SetUpActorSpawn ( );
};

UClass* ADunDefPlayerAbility_GenericMultiActorSpawner::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower
// 0x0008 (0x04DC - 0x04D4)
class ADunDefPlayerAbility_InstantUpgradeTower : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              TowerUpgradeScale;                                		// 0x04D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExpTowerUpgradeScale;                             		// 0x04D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89469 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void DoEffect ( );
	int GetTowerCost ( class ADunDefTower* UpgradeTower );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	bool IsValidUpgradeTower ( class ADunDefTower* Tower, unsigned long bDontCountMana, int* theNextUpgradeLevel );
};

UClass* ADunDefPlayerAbility_InstantUpgradeTower::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE
// 0x0004 (0x04D8 - 0x04D4)
class ADunDefPlayerAbility_InvisibilityAOE : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              NewTowerTargetableAttackRange;                    		// 0x04D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89497 ];

		return pClassPointer;
	};

	void RemovedTower ( class ADunDefTower* affectedTower );
	void AddedTower ( class ADunDefTower* affectedTower );
	void RemovedPawn ( class ADunDefPawn* affectedPawn );
	void AddedPawn ( class ADunDefPawn* affectedPawn );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void AddEffect ( class AActor* theAct );
	void RemoveEffect ( int Index );
};

UClass* ADunDefPlayerAbility_InvisibilityAOE::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_MoveTower
// 0x0170 (0x06AC - 0x053C)
class ADunDefPlayerAbility_MoveTower : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialMoveTower;                           		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     ChoosingTowerWeaponEmitter;                       		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CursorSelectTexture;                              		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CursorMoveTexture;                                		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshComponent*                      TowerMeshComponent;                               		// 0x054C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              MinimumNormalZForPlacement;                       		// 0x0550 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumRotationInputDistance;                     		// 0x0554 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FVector >                           TraceDirections;                                  		// 0x0558 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     TraceExtent;                                      		// 0x0564 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotationGamepadCursorOffset;                      		// 0x0570 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PlacementRotationCursorOffset;                    		// 0x057C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ExtentCheckBaseOffset;                            		// 0x0588 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationCursorScale;                              		// 0x0594 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  CursorRotateTexture;                              		// 0x0598 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlacementLightIntensityMultiplier;                		// 0x059C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     MovementEffect;                                   		// 0x05A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          MeshPlacementMaterial;                            		// 0x05A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AutoTowerPlacementMeshScaleBase;                  		// 0x05A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OtherAbilityPreventionRadiusBuffer;               		// 0x05AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OtherAbilityPreventionRadiusMultiplier;           		// 0x05B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        rangeMesh;                                        		// 0x05B4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMesh*                               TrapPreviewMesh;                                  		// 0x05B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     TrapMeshScaleVec;                                 		// 0x05BC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           PlacementDeniedStrings;                           		// 0x05C8 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChooseWhereToPlaceString;                         		// 0x05D4 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ChooseTowerString;                                		// 0x05E0 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              TrapZOffset;                                      		// 0x05EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AngleIndicatorDecalSize;                          		// 0x05F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AngleIndicatorDecalOffset;                        		// 0x05F4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial;                      		// 0x0600 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial01;                    		// 0x0604 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial02;                    		// 0x0608 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial03;                    		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial;                      		// 0x0610 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial01;                    		// 0x0614 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial02;                    		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial03;                    		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AngleIndicatorDecalTowerRangeScale;               		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              baseRangeMeshScale;                               		// 0x0624 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlacementRangeExponent;                           		// 0x0628 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaCostToActivate;                               		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDecalComponent*                             AngleIndicatorDecal;                              		// 0x0630 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDecalComponent*                             RangeIndicatorDecal;                              		// 0x0634 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterialInstance;              		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterialInstance;              		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     TowerActorPlacementOffset;                        		// 0x0640 (0x000C) [0x0000000000000000]              
	struct FVector                                     ReplicatedPlacementLocation;                      		// 0x064C (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FRotator                                    ReplicatedPlacementRotation;                      		// 0x0658 (0x000C) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      ReplicatedIsValidPlacement : 1;                   		// 0x0664 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bWasValidTower : 1;                               		// 0x0664 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bShowAngleDecal : 1;                              		// 0x0664 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bShowRangeDecal : 1;                              		// 0x0664 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bClientGotoRotationState : 1;                     		// 0x0664 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      ClientForceNoInterpolation : 1;                   		// 0x0664 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	float                                              LastTowerMeshScale;                               		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TowerRangeScaler;                                 		// 0x066C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              TowerMeshScale;                                   		// 0x0670 (0x0004) [0x0000000000000000]              
	float                                              CurrentAngleDecalOpacity;                         		// 0x0674 (0x0004) [0x0000000000000000]              
	class ADunDefTower*                                currentMovingTower;                               		// 0x0678 (0x0004) [0x0000000000000000]              
	class ADunDefTower*                                pendingMovingTower;                               		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             defaultParticleTemplate;                          		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     GamepadLookDirection;                             		// 0x0684 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    PlacementRotation;                                		// 0x0690 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LookAtLocation;                                   		// 0x069C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   MeshMaterialInstance;                             		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89798 ];

		return pClassPointer;
	};

	int GetCostToActivate ( unsigned long returnTrueValue );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void ClientReset ( );
	void ServerMoveTower ( struct FVector towerPlacementLocation, struct FRotator towerPlacementRotation );
	void SetUpTowerMesh ( class ADunDefTower* theTower );
	void ServerRequestGrabTower ( class ADunDefTower* Tower );
	void StartMovingState ( class ADunDefTower* Tower );
	void ClientStartMovingState ( class ADunDefTower* Tower );
	void ServerReceivePlacementState ( unsigned long bIsValidPlacement, struct FVector tPlacementLocation, struct FRotator tPlacementRotation );
	void PostPlacementUpdate ( float DeltaTime );
	void UpdateDecalPlacement ( float DeltaTime );
	bool AllowTowerPlacementPosition ( struct FVector placementPos, unsigned long bOnlyCheckVolumes, int* PlacementDeniedReason );
	float GetOtherMoveAbilityTowerRadius ( );
	bool IsInPlacingTowerState ( );
	bool IsTowerPhysical ( );
	void OnActivate ( );
	void UpdateClientInterpolations ( float DeltaTime );
	void ServerGotoRotationState ( );
	class ADunDefEmitterSpawnable* GetPlacementWeaponEffect ( );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPlayerAbility_MoveTower::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_SummonCommand
// 0x008C (0x05C8 - 0x053C)
class ADunDefPlayerAbility_SummonCommand : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialBuild;                               		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SelectionRadius;                                  		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDecalComponent*                             SummonRangeDecal;                                 		// 0x0544 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterial;                		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SummonIndicatorDecalOffset;                       		// 0x054C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRequiresMovementLocation : 1;                    		// 0x0558 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTraceForTarget : 1;                              		// 0x0558 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bForceMaualInOverlord : 1;                        		// 0x0558 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDoInstantCommand : 1;                            		// 0x0558 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUseInstigatorAsTargetedActor : 1;                		// 0x0558 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOnlyTargetFriendly : 1;                          		// 0x0558 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bUsePlayersTarget : 1;                            		// 0x0558 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bRequiresSelections : 1;                          		// 0x0558 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned char                                      myCommand;                                        		// 0x055C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  targetedIcon;                                     		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     TargetedIconOffset;                               		// 0x0564 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              targetedIconSize;                                 		// 0x0570 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SelectRadius;                                     		// 0x0574 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              placementSteps;                                   		// 0x0578 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              placementRadius;                                  		// 0x057C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              placementIncrease;                                		// 0x0580 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                placementIterations;                              		// 0x0584 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       IssueCommandAnimName;                             		// 0x0588 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CommandFinishAnim;                                		// 0x0590 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     Blip_MoveEmitter;                                 		// 0x0598 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     Blip_Follow;                                      		// 0x059C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     Blip_AttackEmitter;                               		// 0x05A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   LocalIssueCommandSound;                           		// 0x05A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RequiresMinionsString;                            		// 0x05A8 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	class UAudioComponent*                             OrderIssuedUnitCommand;                           		// 0x05B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      targetedActor;                                    		// 0x05B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ADunDefPlayer_Summoner*                      mySummoner;                                       		// 0x05BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SelectionRangeScaler;                             		// 0x05C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterialInstance;        		// 0x05C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90115 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	bool RequestActivation ( unsigned long bHeld );
	void StopTowerPlacingAnimation ( );
	void StartTowerPlacingAnimation ( );
	bool AllowCastingCancelOnDamage ( );
	void PostPlacementUpdate ( float DeltaTime );
	void UpdateDecalPlacement ( float DeltaTime );
	void ServerRequestSetCommand ( struct FVector pLoc, class AActor* targActor );
	void HandleInstantCommand ( );
	void OnActivate ( );
	struct FName GetCastingStateNamePC ( );
	void eventPostBeginPlay ( );
	void IncreasePlacementTowerRadius ( );
	void DecreasePlacementTowerRadius ( );
};

UClass* ADunDefPlayerAbility_SummonCommand::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord
// 0x00C8 (0x05A0 - 0x04D8)
class ADunDefPlayerAbility_PhaseShiftOverlord : public ADunDefPlayerAbility_PhaseShift
{
public:
	class ADunDefEmitterSpawnable*                     Blip_MoveEmitter;                                 		// 0x04D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     Blip_Follow;                                      		// 0x04DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     Blip_AttackEmitter;                               		// 0x04E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  overFriendly;                                     		// 0x04E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  overEnemy;                                        		// 0x04E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  overFollow;                                       		// 0x04EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mouseOverIconScale;                               		// 0x04F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      overEnemyColor;                                   		// 0x04F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      overFriendlyColor;                                		// 0x04F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              moveLocRadius;                                    		// 0x04FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              placementSteps;                                   		// 0x0500 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              placementRadius;                                  		// 0x0504 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              placementIncrease;                                		// 0x0508 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                placementIterations;                              		// 0x050C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   MovementClickSound;                               		// 0x0510 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   AttackSound;                                      		// 0x0514 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FollowSound;                                      		// 0x0518 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SelectSound;                                      		// 0x051C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeSelectSound;                                    		// 0x0520 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UnphasingCastingStateName;                        		// 0x0524 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     UnsupportedGamepadString;                         		// 0x052C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SelectMinionsString;                              		// 0x0538 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bDrawStringPrompt : 1;                            		// 0x0544 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSelectionStarted : 1;                            		// 0x0544 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bForceCancel : 1;                                 		// 0x0544 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              BlipZOffset;                                      		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   startMouseCoords;                                 		// 0x054C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     startMouseProjection;                             		// 0x0554 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     startMouseDirection;                              		// 0x0560 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ADunDefTower_SummonEnemy* >          currentSelectedTowers;                            		// 0x056C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class AActor*                                      currentMousedActor;                               		// 0x0578 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              clickStart;                                       		// 0x057C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FColor                                      LineColor;                                        		// 0x0580 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefDroppedEquipment*                     MovingItem;                                       		// 0x0584 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     MovingItemStartLocation;                          		// 0x0588 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              MovingItemZOffset;                                		// 0x0594 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MovingItemZOffsetAdditional;                      		// 0x0598 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MovingItemZOffsetMinimum;                         		// 0x059C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90225 ];

		return pClassPointer;
	};

	struct FName GetCastingStateNamePC ( );
	void ServerRequestSetCommand ( struct FVector pLoc, class AActor* targActor, unsigned char myCommand );
	void DoMovementCommand ( TArray< class ADunDefTower_SummonEnemy* > selectedTowers, struct FVector pLoc, unsigned char myCommand );
	bool DrawCastingHUD ( class ADunDefHUD* H );
	bool RequestActivation ( unsigned long bHeld );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	bool RequestCancellation ( unsigned long bForce );
	void HandleConfirmation ( );
	void HandleAltCancellation ( );
	void HandleAltConfirmation ( );
};

UClass* ADunDefPlayerAbility_PhaseShiftOverlord::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits
// 0x0064 (0x05A0 - 0x053C)
class ADunDefPlayerAbility_SelectSummonUnits : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialBuild;                               		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SelectionRadius;                                  		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalRangeScale;                                  		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefTower_SummonEnemy* >          currentSelectedTowers;                            		// 0x0548 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UDecalComponent*                             SummonRangeDecal;                                 		// 0x0554 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterial;                		// 0x0558 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SummonIndicatorDecalOffset;                       		// 0x055C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRequiresMovementLocation : 1;                    		// 0x0568 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DeselectAllTower : 1;                             		// 0x0568 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSelectAllTowers : 1;                             		// 0x0568 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       SelectingAnimName;                                		// 0x056C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SelectingStopAnim;                                		// 0x0574 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SelectUnitsString;                                		// 0x057C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	class USoundCue*                                   SelectSound;                                      		// 0x0588 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeSelectSound;                                    		// 0x058C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefPlayer_Summoner*                      mySummoner;                                       		// 0x0590 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SelectionRangeScaler;                             		// 0x0594 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterialInstance;        		// 0x0598 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastConfirmTime;                                  		// 0x059C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90345 ];

		return pClassPointer;
	};

	void StopTowerPlacingAnimation ( );
	void StartTowerPlacingAnimation ( );
	bool AllowCastingCancelOnDamage ( );
	void DeSelectUnits ( );
	void SelectAllTowers ( );
	void OnActivate ( );
	void PostPlacementUpdate ( float DeltaTime );
	void UpdateDecalPlacement ( float DeltaTime );
	void CancelAbility ( );
	void eventAbilityTick ( float DeltaTime );
	void eventPostBeginPlay ( );
	void IncreasePlacementTowerRadius ( );
	void DecreasePlacementTowerRadius ( );
};

UClass* ADunDefPlayerAbility_SelectSummonUnits::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_SlamDash
// 0x00B8 (0x0530 - 0x0478)
class ADunDefPlayerAbility_SlamDash : public ADunDefPlayerAbility_CharacterToggle
{
public:
	TArray< struct ADunDefPlayerAbility_SlamDash_FHitTarget > HitTargets;                                       		// 0x0478 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DamageInterval;                                   		// 0x0484 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxActiveTime;                                    		// 0x0488 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageMomentum;                              		// 0x048C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeleeSwingExtent;                                 		// 0x0490 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MassMomentumExponentialScale;                     		// 0x049C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponDamageMultiplier;                           		// 0x04A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AdditionalDamageAmount;                           		// 0x04A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatDamageModifierExponent;                   		// 0x04A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatMomentumModifierExponent;                 		// 0x04AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashAnimPlayRate;                                 		// 0x04B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DashGroundSpeed;                                  		// 0x04B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatGroundSpeedExponent;                      		// 0x04B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PushRadius;                                       		// 0x04BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayRateExp;                                      		// 0x04C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPlayRate;                                      		// 0x04C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTravelDistance;                                		// 0x04C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RunStartPoint;                                    		// 0x04CC (0x000C) [0x0000000000000000]              
	struct FName                                       DashStartAnim;                                    		// 0x04D8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DashLoopAnim;                                     		// 0x04E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DashStopAnim;                                     		// 0x04E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     WeaponEmitterTemplate;                            		// 0x04F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    MyParticleSystemComponent;                        		// 0x04F4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bStopped : 1;                                     		// 0x04F8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bStartedDash : 1;                                 		// 0x04F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      SummoningFlameLine : 1;                           		// 0x04F8 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     lastStuckCheck;                                   		// 0x04FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              hitWallTraceOffset;                               		// 0x0508 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StuckCheckInterval;                               		// 0x050C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StuckCheckDistance;                               		// 0x0510 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x0514 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefGasCloud*                             FlameCloudTemplate;                               		// 0x0518 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SummonFlameInterval;                              		// 0x051C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FlameOffset;                                      		// 0x0520 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastSummonFlameLineTime;                          		// 0x052C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90417 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	bool ConsumesInputWhenActive ( );
	bool AllowUsageDuringCastingStates ( );
	void CheckStuck ( );
	void PlayStopAnim ( );
	void ShutOffVFX ( );
	void ActivateHandVFX ( );
	void PushCheck ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPlayerAbility_SlamDash::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect
// 0x0038 (0x0548 - 0x0510)
class ADunDefPlayerAbility_StanceOnDmgEffect : public ADunDefPlayerAbility_StanceBase
{
public:
	unsigned long                                      bDoStun : 1;                                      		// 0x0510 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHealthAsDmg : 1;                                 		// 0x0510 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLimitHealAmtPerAttack : 1;                       		// 0x0510 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBaseHealOnOwnerHealth : 1;                       		// 0x0510 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUseHealAmtforPerAttack : 1;                      		// 0x0510 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bIgnoreMaxHealAmt : 1;                            		// 0x0510 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	struct FStatMultipliers                            HealOnHitMult;                                    		// 0x0514 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      dmgType;                                          		// 0x0524 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinHealAmtPct;                                    		// 0x0528 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHealAmtPctPerAttack;                           		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BaseHealAmount;                                   		// 0x0530 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinHealAmount;                                    		// 0x0534 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxNumProcs;                                      		// 0x0538 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                curNumProcs;                                      		// 0x053C (0x0004) [0x0000000000000000]              
	int                                                accumulatedHeal;                                  		// 0x0540 (0x0004) [0x0000000000000000]              
	int                                                MaxHealAmtPerAttack;                              		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90632 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void SetMaxHealAmountPerAttack ( );
	void ResetWeaponDamage ( );
	bool StopOffHandWeaponDamage ( );
	bool StopWeaponDamage ( );
	bool StartOffHandWeaponDamage ( );
	bool StartWeaponDamage ( );
	void DoAddHealth ( int dmgAmount );
};

UClass* ADunDefPlayerAbility_StanceOnDmgEffect::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_StanceLightning
// 0x0040 (0x0588 - 0x0548)
class ADunDefPlayerAbility_StanceLightning : public ADunDefPlayerAbility_StanceOnDmgEffect
{
public:
	TArray< struct FStunnedActors >                    currentStunnedEnemies;                            		// 0x0548 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	struct FStatMultipliers                            StunTimeValue;                                    		// 0x0554 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   StunEnemySound;                                   		// 0x0564 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StunSoundDelay;                                   		// 0x0568 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastStunSound;                                    		// 0x056C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             StunnedEffect;                                    		// 0x0570 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StunTime;                                         		// 0x0574 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowBossStun : 1;                               		// 0x0578 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class UClass* >                            NoStunDamageTypes;                                		// 0x057C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90677 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	float GetStunTime ( );
	void ClearStunnedList ( );
	void RemoveStunnedActor ( class ADunDefEnemy* stunRemoval, unsigned long bDontReplicate );
	void AddStunnedActor ( class ADunDefEnemy* newStun );
	bool CanStun ( class ADunDefEnemy* stunTest );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefPlayerAbility_StanceLightning::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack
// 0x0044 (0x0554 - 0x0510)
class ADunDefPlayerAbility_StanceSpecialAttack : public ADunDefPlayerAbility_StanceBase
{
public:
	struct FName                                       SpecialAnimation;                                 		// 0x0510 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeleeSwingExtent;                                 		// 0x0518 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageMomentum;                                   		// 0x0524 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MassMomentumExponentialScale;                     		// 0x0528 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponDamageMultiplier;                           		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AdditionalDamageAmount;                           		// 0x0530 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatDamageModifierExponent;                   		// 0x0534 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HeroStatMomentumModifierExponent;                 		// 0x0538 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeBeforeEndAnimationToFinish;                   		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CompletedStunDelayTime;                           		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseWeaponsIndividual : 1;                        		// 0x0544 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseCombinedDamage : 1;                           		// 0x0544 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLockStanceOnComplete : 1;                        		// 0x0544 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAutoActivate : 1;                                		// 0x0544 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bSpawnEmitterOnEnd : 1;                           		// 0x0544 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bUseOffHandForEmitter : 1;                        		// 0x0544 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bConsumeManaOnSpecial : 1;                        		// 0x0544 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bStopAttackOnComplete : 1;                        		// 0x0544 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bDoingAttack : 1;                                 		// 0x0544 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bLockedStance : 1;                                		// 0x0544 (0x0004) [0x0000000000000020] [0x00000200] ( CPF_Net )
	unsigned long                                      bSpecialStarted : 1;                              		// 0x0544 (0x0004) [0x0000000000000020] [0x00000400] ( CPF_Net )
	unsigned long                                      bDoingMainHandDmg : 1;                            		// 0x0544 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bDoingOffHandDmg : 1;                             		// 0x0544 (0x0004) [0x0000000000000000] [0x00001000] 
	class ADunDefEmitterDamage*                        EndDamageEmitter;                                 		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    StunEffectComponent;                              		// 0x054C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                ManaCostForSpecial;                               		// 0x0550 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90748 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	bool StopOffHandWeaponDamage ( );
	bool StopWeaponDamage ( );
	bool StartOffHandWeaponDamage ( );
	bool StartWeaponDamage ( );
	float GetMomentum ( );
	float GetDamage ( class ADunDefWeapon_MeleeSword* dmgWeapon );
	void ClearStanceStun ( );
	void CancelAbility ( );
	void CompletedSpecial ( );
	void ClientCompletedSpecial ( );
	void SpawnFinishEmitter ( );
	void AnimNotify_CurrentAbility_Off ( );
	void AnimNotify_CurrentAbility_On ( );
	void DoSpecialAttack ( );
	void ClearHitList ( );
	void DoSwinging ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPlayerAbility_StanceSpecialAttack::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_WheeloFortuna
// 0x02C8 (0x06F0 - 0x0428)
class ADunDefPlayerAbility_WheeloFortuna : public ADunDefPlayerAbility
{
public:
	class UMaterialInterface*                          SlotMachineMat;                                   		// 0x0428 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGlyphPattern >                     myPatterns;                                       		// 0x042C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FGlyphIcon                                  wheelSlots[ 0x3 ];                                		// 0x0438 (0x0060) [0x0000000000000001]              ( CPF_Edit )
	float                                              GlobalSpinSpeedMult;                              		// 0x0498 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelIconSizeX;                                   		// 0x049C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelIconSizeY;                                   		// 0x04A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelStepValue;                                   		// 0x04A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceTestPattern : 1;                            		// 0x04A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDoingTimeDilation : 1;                           		// 0x04A8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bForceSelections : 1;                             		// 0x04A8 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bDoFadeOut : 1;                                   		// 0x04A8 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bFinished : 1;                                    		// 0x04A8 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	struct FGlyphPattern                               testPattern;                                      		// 0x04AC (0x0080) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   GoldMaterialTemplate;                             		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                defaultManaAmount;                                		// 0x0530 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              defaultManaExp;                                   		// 0x0534 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefManaToken*                            SmallManaTokenTemplate;                           		// 0x0538 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefManaToken*                            MinorManaTokenTemplate;                           		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefManaToken*                            LargeManaTokenTemplate;                           		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaTokenImpulseMagnitude;                        		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaTokenTorqueMagnitude;                         		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ManaTokenImpulseUpOffset;                         		// 0x054C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     defaultNoMatchMessage;                            		// 0x0558 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              EndLingerTime;                                    		// 0x0564 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DanceStartAnimName;                               		// 0x0568 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DanceLoopAnimName;                                		// 0x0570 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DanceEndAnimName;                                 		// 0x0578 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                DefaultSelection;                                 		// 0x0580 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                goodSelection;                                    		// 0x0590 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       selectionBarParamName;                            		// 0x05A0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       selectionFlashParamName;                          		// 0x05A8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaCostToActivate;                               		// 0x05B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelFadeInTime;                                  		// 0x05B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelFadeOutTime;                                 		// 0x05B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   StopWheelSound;                                   		// 0x05BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DefaultSound;                                     		// 0x05C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             LoopingWheelSound;                                		// 0x05C4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       WheelOpacityName;                                 		// 0x05C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fadeOutDelay;                                     		// 0x05D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            GRInotallowedon;                                  		// 0x05D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DummyPercentDamageString;                         		// 0x05E0 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DummyPercentHealingString;                        		// 0x05EC (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DummyDamageTakenByPlayerString;                   		// 0x05F8 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DummyDamageDoneByPlayerString;                    		// 0x0604 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DummyDamageTakenByEnemyString;                    		// 0x0610 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DummyDamageDoneByEnemyString;                     		// 0x061C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DummyPercentGoldedString;                         		// 0x0628 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	int                                                currentStopIndex;                                 		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                currentPatternIdx;                                		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FGlyphPattern                               selectedPattern;                                  		// 0x063C (0x0080) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ADunDefPawn* >                       boostingPawns;                                    		// 0x06BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ADunDefPracticeDummy* >              boostingDummies;                                  		// 0x06C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ADunDefEnemy* >                      goldedEnemies;                                    		// 0x06D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ADunDefEnemy* >                      stunnedPawns;                                     		// 0x06E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   mySlotMIC;                                        		// 0x06EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90830 ];

		return pClassPointer;
	};

	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	int GetCostToActivate ( unsigned long returnTrueValue );
	void StopLoopingAnims ( );
	struct FName GetCastingCharacterAnimation ( );
	void eventDestroyed ( );
	void ResetTimeDilation ( );
	void DoTimeDilation ( struct FGlyphPattern thePattern );
	void SpawnManaTokens ( );
	void GoldEnemy ( class ADunDefEnemy* Enemy );
	bool DoGolding ( struct FGlyphPattern thePattern );
	void EndEffect ( );
	void ClearOutBoosters ( );
	void HandleEnemyAffects ( struct FGlyphPattern thePattern );
	void HandleTowerAffects ( struct FGlyphPattern thePattern );
	void HandlePlayerAffects ( struct FGlyphPattern thePattern );
	void DoTowerUpgrades ( struct FGlyphPattern thePattern );
	void ServerHandleSuccess ( int patternIdx );
	void ServerHandleDefault ( );
	void CancelAbility ( );
	void SetDoFadeOut ( );
	void FinishSelection ( );
	bool CheckPattern ( struct FGlyphPattern CheckPattern );
	void GetBoostedTargets ( TArray< class APawn* >* boostedTargets );
	void NotifyOfBoostedRemoval ( class APawn* removedBoostee );
	float GetPawnBoostAmount ( unsigned char boostType );
	bool HasPawnBoostingType ( unsigned char boostType );
	void UpdateStuns ( );
	void eventAbilityTick ( float DeltaTime );
	void ForceSelections ( );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefPlayerAbility_WheeloFortuna::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPlayerAbility_WhirlWind
// 0x008D (0x0561 - 0x04D4)
class ADunDefPlayerAbility_WhirlWind : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              WhirlWindDamage;                                  		// 0x04D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WhirlWindElementalDamage;                         		// 0x04D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WhirlWindDamageMomentum;                          		// 0x04DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WhirlWindDamageMultiplier;                        		// 0x04E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WhirlWindDamageExponent;                          		// 0x04E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WhirlWindDamageType;                              		// 0x04E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WhirlWindElementalDamageType;                     		// 0x04EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WhirlWindDuration;                                		// 0x04F0 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned long                                      bCancelAbilityAfterDuration : 1;                  		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseElementalVFX : 1;                             		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseWeaponDamage : 1;                             		// 0x04F4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       IdleAnimationName;                                		// 0x04F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ElementalVFXEntries[ 0xB ];                       		// 0x0500 (0x002C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ElementalDamageVFXEntries[ 0xB ];                 		// 0x052C (0x002C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             CachedAbilityEffect;                              		// 0x0558 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             CachedAbilityActorEffect;                         		// 0x055C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      WeaponElementalTrait;                             		// 0x0560 (0x0001) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 91126 ];

		return pClassPointer;
	};

	bool ConsumesInputWhenActive ( );
	void InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly );
	bool CanAffect ( class AActor* theAct );
	void SetElementalVFX ( unsigned char aElementalTrait );
	bool AbilityReleased ( );
	bool AbilityPressed ( );
	void CancelEffect ( );
	class UClass* GetElementalDamageType ( );
	class UClass* GetDamageType ( );
	float GetElementalDamage ( );
	float GetDamage ( );
	unsigned char GetAbilityStatus ( int* ExtraStatusFlag );
	void DoEffect ( );
	void AddEffect ( class AActor* theAct );
	void OnActivate ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPlayerAbility_WhirlWind::pClassPointer = NULL;

// Class DunDefSpecial.DunDefPurifyingBomb
// 0x000C (0x033C - 0x0330)
class ADunDefPurifyingBomb : public ADunDefManaBomb
{
public:
	TArray< struct FBonusDamageType >                  BonusDamageTypes;                                 		// 0x0330 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 91219 ];

		return pClassPointer;
	};

	bool HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
};

UClass* ADunDefPurifyingBomb::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_BoostAura
// 0x002C (0x08E0 - 0x08B4)
class ADunDefTower_BoostAura : public ADunDefTower_Aura
{
public:
	struct FString                                     boostedTowerString;                               		// 0x08B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UClass* >                            DamagableClassesToIgnore;                         		// 0x08C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBoostingtypes >                    BoostValues;                                      		// 0x08CC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              AttackRangeMultiplier;                            		// 0x08D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ResistanceMultiplier;                             		// 0x08DC (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 91294 ];

		return pClassPointer;
	};

	float GetTowerBoostAmount ( unsigned char boostType );
	bool HasTowerBoostingType ( unsigned char boostType );
	class UDunDefTargetableInterface* GetTowerBoostingTarget ( );
	void SetBoostMultiplier ( int Idx );
	void RefreshBoosts ( );
	float GetAttackInterval ( );
	float GetAttackDamage ( );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	struct FString GetToolTipText ( );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	void ExitEffectDT ( class ADunDefDamageableTarget* dt );
	void EntryEffectDT ( class ADunDefDamageableTarget* dt );
	bool AttacksDT ( class ADunDefDamageableTarget* dt );
	void EnteredRadiusDT ( class ADunDefDamageableTarget* dt );
	void UnTouch ( class AActor* Other );
	bool CanTargetInvisibleTarget ( class UDunDefTargetableInterface* aTarget );
	void Touch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void CheckForDamagableTargets ( );
	void Timer ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefTower_BoostAura::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_TripTowerBuff
// 0x0050 (0x0A34 - 0x09E4)
class ADunDefTower_TripTowerBuff : public ADunDefTower_TripWire
{
public:
	TArray< struct FBoostingtypes >                    BoostValues;                                      		// 0x09E4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxAllowedLostTowers;                             		// 0x09F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                currentLostTowers;                                		// 0x09F4 (0x0004) [0x0000000000000000]              
	float                                              TowerCheckInterval;                               		// 0x09F8 (0x0004) [0x0000000000000000]              
	float                                              LastTowerCheckTime;                               		// 0x09FC (0x0004) [0x0000000000000000]              
	float                                              AttachParticleScale;                              		// 0x0A00 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             AttachParticle;                                   		// 0x0A04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            IgnoreForBuffs;                                   		// 0x0A08 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     boostedTowerString;                               		// 0x0A14 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	float                                              AttackRangeMultiplier;                            		// 0x0A20 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ResistanceMultiplier;                             		// 0x0A24 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class ADunDefTower* >                      TracedTowers;                                     		// 0x0A28 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 91384 ];

		return pClassPointer;
	};

	void SetBoostMultiplier ( int Idx );
	void RefreshBoosts ( );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	void SetUseHealthBarMat ( );
	struct FString GetToolTipText ( );
	bool NeedsRepair ( unsigned long requireFullHealth );
	void RemoveTowerEffectIndex ( int Idx );
	void RemoveTowerEffect ( class ADunDefTower* theTower );
	void AddTowerEffect ( class ADunDefTower* theTower );
	int GetMaxDetonations ( );
	void eventDestroyed ( );
	void RemoveAllBoosts ( );
	void eventPostBeginPlay ( );
	void ClearDeletedTowers ( );
	void CheckTowers ( );
	bool CanAffectTower ( class ADunDefTower* towerCheck );
	void DoTracing ( float dt, unsigned long bForceDamage );
	float GetTowerBoostAmount ( unsigned char boostType );
	bool HasTowerBoostingType ( unsigned char boostType );
	class UDunDefTargetableInterface* GetTowerBoostingTarget ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefTower_TripTowerBuff::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_BuffSpawner
// 0x003C (0x0854 - 0x0818)
class ADunDefTower_BuffSpawner : public ADunDefTower
{
public:
	TArray< class UDunDefBuff* >                       BuffTemplates;                                    		// 0x0818 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UClass* >                            ClassesToAffect;                                  		// 0x0824 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIsPhysicalTower : 1;                             		// 0x0830 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPreventTowerOverlap : 1;                         		// 0x0830 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDoneInitalOverlap : 1;                           		// 0x0830 (0x0004) [0x0000000000002020] [0x00000004] ( CPF_Net | CPF_Transient )
	float                                              TowerPreventionRadiusOffset;                      		// 0x0834 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostPerBuffSpawn;                                 		// 0x0838 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FsBuffTarget >                      BuffTargets;                                      		// 0x083C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UDunDefBuff* >                       ActiveBuffs;                                      		// 0x0848 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 91385 ];

		return pClassPointer;
	};

	void ChangedGamePhases ( unsigned long IsCombatPhase );
	bool AllowTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point );
	bool CheckAllowance ( );
	bool PreventTowerAtPoint ( class ADunDefPlayerController* PC, class ADunDefTower* towerArch, struct FVector Point, float towerRadius );
	bool IsPhysicalTower ( );
	float GetTowerTargetingDesirability ( class ADunDefTower* forTower );
	float GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	float GetAttackInterval ( );
	float GetAttackDamage ( );
	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	void RemoveAllBuffTargets ( );
	void RemoveBuffsFromTarget ( class AActor* Other );
	void AddBuffsToTarget ( class AActor* Other );
	bool CanAffectTarget ( class AActor* Other );
	void eventTick ( float DeltaTime );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe );
	void eventDestroyed ( );
	void UnTouch ( class AActor* Other );
	void Touch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventPostBeginPlay ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefTower_BuffSpawner::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_EmitterBurst
// 0x0020 (0x08F0 - 0x08D0)
class ADunDefTower_EmitterBurst : public ADunDefTower_ProjectileType
{
public:
	class ADunDefEmitterDamage*                        EmitterTemplate;                                  		// 0x08D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageHeight;                                     		// 0x08D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageWidth;                                      		// 0x08D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BurstTime;                                        		// 0x08DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       stopShootAnim;                                    		// 0x08E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSingleBurst : 1;                                 		// 0x08E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsShooting : 1;                                  		// 0x08E8 (0x0004) [0x0000000000002020] [0x00000002] ( CPF_Net | CPF_Transient )
	class ADunDefEmitterDamage*                        damageEmitterInstance;                            		// 0x08EC (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 91500 ];

		return pClassPointer;
	};

	class UClass* GetDamageType ( );
	float StaticGetAttackRange ( class UDunDefHero* hero, class ADunDefTower* Tower, float TowerRangeScaler );
	float GetAttackRange ( );
	float GetAttackDamage ( );
	void StopShooting ( );
	void eventShootProjectile ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefTower_EmitterBurst::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_Present
// 0x0098 (0x08B0 - 0x0818)
class ADunDefTower_Present : public ADunDefTower
{
public:
	struct FString                                     ChanceToSpawnString;                              		// 0x0818 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FspawnTypes >                       mySpawns;                                         		// 0x0824 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                minManatoSpawn;                                   		// 0x0830 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                maxManatoSpawn;                                   		// 0x0834 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefManaToken*                            SmallManaTokenTemplate;                           		// 0x0838 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefManaToken*                            MinorManaTokenTemplate;                           		// 0x083C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefManaToken*                            LargeManaTokenTemplate;                           		// 0x0840 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefManaToken*                            SuperManaTokenTemplate;                           		// 0x0844 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaTokenImpulseMagnitude;                        		// 0x0848 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaTokenTorqueMagnitude;                         		// 0x084C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ManaTokenImpulseUpOffset;                         		// 0x0850 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PlacementPosOffset;                               		// 0x085C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              GlobalEquipmentDropValueMin;                      		// 0x0868 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GlobalEquipmentDropValueMax;                      		// 0x086C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareAbsoluteMaxEquipmentDropQuality;         		// 0x0870 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareGlobalEquipmentDropQuality;              		// 0x0874 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AdditionalEquipmentRarityWeighting;               		// 0x0878 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDropEquipmentAngle;                            		// 0x087C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWaveEquipmentQualityMultiplier;                		// 0x0880 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EquipmentQualityMultiplierMaxWave;                		// 0x0884 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AbsoluteMaxEquipmentDropQuality;                  		// 0x0888 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GlobalEquipmentDropQuality;                       		// 0x088C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    DifficultyEquipmentQualityMultipliers;            		// 0x0890 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bOpenPresentOnCombatPhase : 1;                    		// 0x089C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                spawnGroupIdx;                                    		// 0x08A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FspawnChances >                     tempSpawnType;                                    		// 0x08A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 91549 ];

		return pClassPointer;
	};

	void UpdateTowerRatingMaterial ( );
	void SpawnDroppedEquipment ( );
	void SpawnManaTokens ( );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	bool AllowTowerSpawnAtLoc ( class ADunDefTower* TowerArchetype, struct FVector placementPos, unsigned long bOnlyCheckVolumes );
	void DoActorSpawn ( struct FspawnChances spawnChance );
	void DoEnemySpawn ( struct FspawnChances spawnChance );
	bool DoTowerSpawn ( struct FspawnChances spawnChance, struct FVector HitLoc );
	void DoPresentSpawn ( struct FVector HitLocation, unsigned long bSpawnOgresInLobby );
	bool PickActor ( int Idx, struct FspawnChances* spawnChance );
	void PickSpawnGroup ( );
	void Died ( class AController* EventInstigator, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser );
	void ChangedGamePhases ( unsigned long IsCombatPhase );
};

UClass* ADunDefTower_Present::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_ProjectileReflect
// 0x0016 (0x0AAA - 0x0A94)
class ADunDefTower_ProjectileReflect : public ADunDefTower_TripPhysical
{
public:
	float                                              costPerReflect;                                   		// 0x0A94 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjDmgScale;                                     		// 0x0A98 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjDmgExp;                                       		// 0x0A9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjSecondDmgScale;                               		// 0x0AA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjSecondDmgExp;                                 		// 0x0AA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ProjDmgStatType;                                  		// 0x0AA8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ProjSecondDmgStatType;                            		// 0x0AA9 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92315 ];

		return pClassPointer;
	};

	bool IsPhysicalTower ( );
	int GetCostPerReflect ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe );
	float GetAttackDamage ( );
	void DoReflection ( class ADunDefProjectile* reflectedProj, struct FVector NewDir );
	void KilledTarget ( class UDunDefTargetableInterface* aTarget );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ADunDefTower_ProjectileReflect::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTower_WebWall
// 0x000C (0x0AA0 - 0x0A94)
class ADunDefTower_WebWall : public ADunDefTower_TripPhysical
{
public:
	class UDunDefBuff*                                 BuffTemplate;                                     		// 0x0A94 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostPerWeb;                                       		// 0x0A98 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ActivateTouchForSameTeam : 1;                     		// 0x0A9C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bBuffExistingWebbedTargets : 1;                   		// 0x0A9C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92717 ];

		return pClassPointer;
	};

	void ScaleForHeroModifiers ( unsigned long IsFirstTime );
	void DrawTowerToolTipActorStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	void DrawTowerToolTipStats ( class UCanvas* C, float Opacity, class ULocalPlayer* ForPlayer, float canvasScale, float* PosX, float* PosY );
	bool CheckTouchingActor ( class AActor* Other );
	float GetAttackDamage ( );
	int GetCostPerWeb ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe );
	bool IsPhysicalTower ( );
	void KilledTarget ( class UDunDefTargetableInterface* aTarget );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void UpdateBuffTargets ( );
	void eventPostBeginPlay ( );
};

UClass* ADunDefTower_WebWall::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTurkey
// 0x000C (0x0CD8 - 0x0CCC)
class ADunDefTurkey : public ADunDefEnemy
{
public:
	class ADunDefEmitterSpawnable*                     DeathEffect;                                      		// 0x0CCC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FleeSpeed;                                        		// 0x0CD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FleeSoundIndex;                                   		// 0x0CD4 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92787 ];

		return pClassPointer;
	};

	void UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void StopFlee ( );
	void PlayFleeSound ( );
	void StartFlee ( );
	void SetGroundSpeed ( float NewSpeed, unsigned long bUseDifficultyMult );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventDestroyed ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefTurkey::pClassPointer = NULL;

// Class DunDefSpecial.DunDefTurkeyController
// 0x0030 (0x063C - 0x060C)
class ADunDefTurkeyController : public ADunDefEnemyController
{
public:
	float                                              FleeDistance;                                     		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WanderRange;                                      		// 0x0610 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FleeTimeOut;                                      		// 0x0614 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWanderOffSet;                                  		// 0x0618 (0x0004) [0x0000000000000000]              
	float                                              MaxYawOffset;                                     		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                currentFleeIndex;                                 		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              LastFleeChange;                                   		// 0x0624 (0x0004) [0x0000000000000000]              
	class ADunDefPlayer*                               FleeTarget;                                       		// 0x0628 (0x0004) [0x0000000000000000]              
	struct FVector                                     FleePoint;                                        		// 0x062C (0x000C) [0x0000000000000000]              
	float                                              currentYaw;                                       		// 0x0638 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92809 ];

		return pClassPointer;
	};

	bool WantsHurtAnimation ( );
	void NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	struct FVector GetWanderPoint ( );
	bool DoFlee ( class ADunDefPlayer* fleeFrom );
	bool CheckPlayers ( );
	void TimeOutFlee ( );
};

UClass* ADunDefTurkeyController::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_AroundTheWorld
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_AroundTheWorld : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92859 ];

		return pClassPointer;
	};

	void InitGameReplicationInfo ( );
	void DoWaveSkipping ( unsigned long bAllowArbritraryWaveSkipping );
};

UClass* AGameInfo_AroundTheWorld::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_Assault
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_Assault : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92864 ];

		return pClassPointer;
	};

	void InitGameReplicationInfo ( );
	void DoWaveSkipping ( unsigned long bAllowArbritraryWaveSkipping );
	void eventPostBeginPlay ( );
	void RestartPlayer ( class AController* NewPlayer );
};

UClass* AGameInfo_Assault::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_Chicken
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_Chicken : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92872 ];

		return pClassPointer;
	};

	void RestartPlayer ( class AController* NewPlayer );
};

UClass* AGameInfo_Chicken::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_Delivery
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_Delivery : public AMain
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92876 ];

		return pClassPointer;
	};

};

UClass* AGameInfo_Delivery::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_GoldenTokens
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_GoldenTokens : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92880 ];

		return pClassPointer;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
};

UClass* AGameInfo_GoldenTokens::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_KillEnemiesTimeLimit : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92887 ];

		return pClassPointer;
	};

	void RestartPlayer ( class AController* NewPlayer );
	void DoWaveSkipping ( unsigned long bAllowArbritraryWaveSkipping );
};

UClass* AGameInfo_KillEnemiesTimeLimit::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_KillEnemiesTimeLimit_Uber : public AGameInfo_KillEnemiesTimeLimit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92893 ];

		return pClassPointer;
	};

	void AddObjectiveScore ( class APlayerReplicationInfo* Scorer, int Score );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
};

UClass* AGameInfo_KillEnemiesTimeLimit_Uber::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber6
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_KillEnemiesTimeLimit_Uber6 : public AGameInfo_KillEnemiesTimeLimit_Uber
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92907 ];

		return pClassPointer;
	};

};

UClass* AGameInfo_KillEnemiesTimeLimit_Uber6::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_NoTowers
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_NoTowers : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92909 ];

		return pClassPointer;
	};

	void InitGameReplicationInfo ( );
};

UClass* AGameInfo_NoTowers::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_OgreAlly
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_OgreAlly : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92913 ];

		return pClassPointer;
	};

	void InitGameReplicationInfo ( );
};

UClass* AGameInfo_OgreAlly::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_RainingGoblins
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_RainingGoblins : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92916 ];

		return pClassPointer;
	};

	void InitGameReplicationInfo ( );
};

UClass* AGameInfo_RainingGoblins::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_UberAssault
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_UberAssault : public AGameInfo_Assault
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92919 ];

		return pClassPointer;
	};

};

UClass* AGameInfo_UberAssault::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_UberDefense
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_UberDefense : public AMain
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92921 ];

		return pClassPointer;
	};

};

UClass* AGameInfo_UberDefense::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_VDay2
// 0x0018 (0x0560 - 0x0548)
class AGameInfo_VDay2 : public AMain
{
public:
	TArray< class ADunDefEnemy* >                      Boys;                                             		// 0x0548 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ADunDefEnemy* >                      Girls;                                            		// 0x0554 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92923 ];

		return pClassPointer;
	};

	void PairMatched ( class ADunDefEnemy* Boy, class ADunDefEnemy* Girl );
	void eventTick ( float DeltaTime );
	void EnemyDied ( class ADunDefEnemy* anEnemy );
	class ADunDefEnemy* WaveSpawnerCreateEnemy ( class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation );
};

UClass* AGameInfo_VDay2::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_Wizardry
// 0x0008 (0x0550 - 0x0548)
class AGameInfo_Wizardry : public AGameInfo_Special
{
public:
	class ADunDefDarkElfMage*                          RegularMage;                                      		// 0x0548 (0x0004) [0x0000000000000000]              
	class ADunDefDarkElfMage*                          RegularMageTwo;                                   		// 0x054C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92948 ];

		return pClassPointer;
	};

	void MageCheck ( );
	void eventPostBeginPlay ( );
};

UClass* AGameInfo_Wizardry::pClassPointer = NULL;

// Class DunDefSpecial.GameInfo_ZippyTerror
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_ZippyTerror : public AGameInfo_Special
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92958 ];

		return pClassPointer;
	};

	void InitGameReplicationInfo ( );
};

UClass* AGameInfo_ZippyTerror::pClassPointer = NULL;

// Class DunDefSpecial.SnowManBoss
// 0x004C (0x0D40 - 0x0CF4)
class ASnowManBoss : public ADunDefBoss
{
public:
	struct FName                                       PeckAnim;                                         		// 0x0CF4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PeckSocket;                                       		// 0x0CFC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SnowShootAnim;                                    		// 0x0D04 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SnowSpawnSocketLeft;                              		// 0x0D0C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SnowSpawnSocketRight;                             		// 0x0D14 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     SnowShootEffect;                                  		// 0x0D1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     PeckHitEffect;                                    		// 0x0D20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     StompEffect;                                      		// 0x0D24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     DeathEffect;                                      		// 0x0D28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StompAnim;                                        		// 0x0D2C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              StompEffectRadius;                                		// 0x0D34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SpawnInAnim;                                      		// 0x0D38 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92961 ];

		return pClassPointer;
	};

	void StartMovement ( );
	void StopMovement ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventDestroyed ( );
	void eventDoStompDamage ( );
	void eventDoStomp ( );
	void eventDoPeck ( );
	void GetPeckLoc ( struct FVector* Loc );
	void eventSnowBallRight ( );
	void eventSnowBallLeft ( );
	void SpawnSnowShootEffect ( struct FVector SpawnLoc, struct FRotator SpawnRot );
	void GetProjectileSpawnLoc ( unsigned long bIsLeftSocket, struct FVector* Loc, struct FRotator* Rot );
	float PlayStomp ( );
	float PlaySnowShoot ( );
	float PlayPeckAttack ( );
	void PlaySpawnIn ( );
	void eventPostBeginPlay ( );
};

UClass* ASnowManBoss::pClassPointer = NULL;

// Class DunDefSpecial.SnowManBossController
// 0x0068 (0x0674 - 0x060C)
class ASnowManBossController : public ADunDefEnemyController
{
public:
	class ADunDefProjectile*                           SnowProjectileTemplate;                           		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckRange;                                        		// 0x0610 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckRadius;                                       		// 0x0614 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BasePeckDamage;                                   		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      PeckDmgType;                                      		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckMomentum;                                     		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckDmgFallOffExp;                                		// 0x0624 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoFullPeckRadialDmg : 1;                         		// 0x0628 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDoFullStompRadialDmg : 1;                        		// 0x0628 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              SnowShootRange;                                   		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckAngle;                                        		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckCoolDown;                                     		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPeckTime;                                     		// 0x0638 (0x0004) [0x0000000000000000]              
	float                                              SnowShootCoolDown;                                		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SnowShootAngle;                                   		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSnowShootRotOffset;                            		// 0x0644 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastSnowShoot;                                    		// 0x0648 (0x0004) [0x0000000000000000]              
	float                                              StompRadius;                                      		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseStompDamage;                                  		// 0x0650 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      StompDmgType;                                     		// 0x0654 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StompMomentum;                                    		// 0x0658 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StompDmgFallOffExp;                               		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseStompChance;                                  		// 0x0660 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinSurroundingEnemiesForStomp;                    		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSurroundingEnemiesForStomp;                    		// 0x0668 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StompCoolDown;                                    		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastStompTime;                                    		// 0x0670 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92990 ];

		return pClassPointer;
	};

	void CheckForCustomAttacks ( );
	bool WantsHurtAnimation ( );
	void NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	bool CheckStomp ( );
	void ChooseAttack ( );
	void DoPeck ( );
	void DoStomp ( );
	void SpawnSnowProjectile ( unsigned long bIsLeftSocket );
};

UClass* ASnowManBossController::pClassPointer = NULL;

// Class DunDefSpecial.TurkeyBoss
// 0x003C (0x0D30 - 0x0CF4)
class ATurkeyBoss : public ADunDefBoss
{
public:
	struct FName                                       PeckAnim;                                         		// 0x0CF4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PeckSocket;                                       		// 0x0CFC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EggShootAnim;                                     		// 0x0D04 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EggSpawnSocket;                                   		// 0x0D0C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     EggShootEffect;                                   		// 0x0D14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     PeckHitEffect;                                    		// 0x0D18 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     StompEffect;                                      		// 0x0D1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     DeathEffect;                                      		// 0x0D20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StompAnim;                                        		// 0x0D24 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              StompEffectRadius;                                		// 0x0D2C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93094 ];

		return pClassPointer;
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventDestroyed ( );
	void eventDoStompDamage ( );
	void eventDoStomp ( );
	void eventDoPeck ( );
	void GetPeckLoc ( struct FVector* Loc );
	void eventShootEgg ( );
	void SpawnEggShootEffect ( struct FVector SpawnLoc, struct FRotator SpawnRot );
	void GetProjectileSpawnLoc ( struct FVector* Loc, struct FRotator* Rot );
	float PlayStomp ( );
	float PlayEggShoot ( );
	float PlayPeckAttack ( );
};

UClass* ATurkeyBoss::pClassPointer = NULL;

// Class DunDefSpecial.TurkeyBossController
// 0x0068 (0x0674 - 0x060C)
class ATurkeyBossController : public ADunDefEnemyController
{
public:
	class ADunDefProjectile*                           EggProjectileTemplate;                            		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckRange;                                        		// 0x0610 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckRadius;                                       		// 0x0614 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BasePeckDamage;                                   		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      PeckDmgType;                                      		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckMomentum;                                     		// 0x0620 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckDmgFallOffExp;                                		// 0x0624 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoFullPeckRadialDmg : 1;                         		// 0x0628 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDoFullStompRadialDmg : 1;                        		// 0x0628 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              EggShootRange;                                    		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckAngle;                                        		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PeckCoolDown;                                     		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastPeckTime;                                     		// 0x0638 (0x0004) [0x0000000000000000]              
	float                                              EggShootCoolDown;                                 		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EggShootAngle;                                    		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxEggShootRotOffset;                             		// 0x0644 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastEggShoot;                                     		// 0x0648 (0x0004) [0x0000000000000000]              
	float                                              StompRadius;                                      		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseStompDamage;                                  		// 0x0650 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      StompDmgType;                                     		// 0x0654 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StompMomentum;                                    		// 0x0658 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StompDmgFallOffExp;                               		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseStompChance;                                  		// 0x0660 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinSurroundingEnemiesForStomp;                    		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSurroundingEnemiesForStomp;                    		// 0x0668 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StompCoolDown;                                    		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastStompTime;                                    		// 0x0670 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93118 ];

		return pClassPointer;
	};

	bool WantsHurtAnimation ( );
	void NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	bool CheckStomp ( );
	void ChooseAttack ( );
	void DoPeck ( );
	void DoStomp ( );
	void SpawnEggProjectile ( );
};

UClass* ATurkeyBossController::pClassPointer = NULL;

// Class DunDefSpecial.UI_GameStatsUberMF
// 0x0010 (0x0FD0 - 0x0FC0)
class UUI_GameStatsUberMF : public UUI_GameStats
{
public:
	class UUILabel*                                    PlayerListLabel;                                  		// 0x0FC0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUILabel*                                    ScoreListLabel;                                   		// 0x0FC4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LocalPlayerHighLightColor;                        		// 0x0FC8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DefaultPlayerHighLightColor;                      		// 0x0FCC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 93220 ];

		return pClassPointer;
	};

	void GetPlayerList ( struct FString* pList, struct FString* sList );
	struct FString GetColorString ( struct FColor aColor );
	void UpdateTeamPanels ( );
	void CustomInit ( int CustomInitIndex );
};

UClass* UUI_GameStatsUberMF::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif