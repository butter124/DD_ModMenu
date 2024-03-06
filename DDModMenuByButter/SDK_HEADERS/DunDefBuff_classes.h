/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefBuff_classes.h
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

// Class DunDefBuff.DunDefBuff_Boost
// 0x001C (0x031C - 0x0300)
class UDunDefBuff_Boost : public UDunDefBuff
{
public:
	TArray< struct FsTowerBoostType >                  TowerBoostTypes;                                  		// 0x0300 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FsPawnBoostType >                   PawnBoostTypes;                                   		// 0x030C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDestroyBuffOnFailedBoost : 1;                    		// 0x0318 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84267 ];

		return pClassPointer;
	};

	void GetBoostedTargets ( TArray< class APawn* >* boostedTargets );
	void NotifyOfBoostedRemoval ( class APawn* removedBoostee );
	float GetPawnBoostAmount ( unsigned char boostType );
	bool HasPawnBoostingType ( unsigned char boostType );
	float GetTowerBoostAmount ( unsigned char boostType );
	bool HasTowerBoostingType ( unsigned char boostType );
	class UDunDefTargetableInterface* GetTowerBoostingTarget ( );
	void InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly );
	void DeactivateBuff ( );
	void ActivateBuff ( );
};

UClass* UDunDefBuff_Boost::pClassPointer = NULL;

// Class DunDefBuff.DunDefBuff_Contagion
// 0x0020 (0x0320 - 0x0300)
class UDunDefBuff_Contagion : public UDunDefBuff
{
public:
	TArray< class UDunDefBuff* >                       ContagionBuffs;                                   		// 0x0300 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      DoLineOfSightCheck : 1;                           		// 0x030C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEndBuffOnMaxStackCount : 1;                      		// 0x030C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bApplyContagionBuffsAsAoe : 1;                    		// 0x030C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDestroyBuffIfNoTarget : 1;                       		// 0x030C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	int                                                MaxAllowedAoeTargets;                             		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            PreviousTargets;                                  		// 0x0314 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84305 ];

		return pClassPointer;
	};

	bool CanAffectTarget ( class AActor* Target );
	class UDunDefTargetableInterface* GetNearestTarget ( );
	void Initialize ( );
	void BuffEffect ( );
};

UClass* UDunDefBuff_Contagion::pClassPointer = NULL;

// Class DunDefBuff.DunDefBuff_Damage
// 0x0030 (0x0330 - 0x0300)
class UDunDefBuff_Damage : public UDunDefBuff
{
public:
	unsigned long                                      bDoEffectAsAoe : 1;                               		// 0x0300 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDoHealing : 1;                                   		// 0x0300 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAddMana : 1;                                     		// 0x0300 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUsePercentageOfTargetMaxHealth : 1;              		// 0x0300 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bMultiplyDamageByStackCount : 1;                  		// 0x0300 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	float                                              Damage;                                           		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageMomentum;                                   		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AoeDamageFallOff;                                 		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageIncreasePerStack;                           		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UDunDefBuff* >                       OnProcBuffs;                                      		// 0x0314 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      BuffDamageTypeClass;                              		// 0x0320 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            ClassesToIgnore;                                  		// 0x0324 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84335 ];

		return pClassPointer;
	};

	void InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly );
	bool CanDamage ( class AActor* Target );
	float GetBuffDamage ( );
	void BuffEffect ( );
};

UClass* UDunDefBuff_Damage::pClassPointer = NULL;

// Class DunDefBuff.DunDefBuff_DamageAdjuster
// 0x0030 (0x0330 - 0x0300)
class UDunDefBuff_DamageAdjuster : public UDunDefBuff
{
public:
	TArray< class UActorFilter* >                      TargetFilters;                                    		// 0x0300 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class ULastDamageInfoFilter* >             DamageInfoFilters;                                		// 0x030C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	float                                              DamageMultiplier;                                 		// 0x0318 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinEffectAngle;                                   		// 0x031C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxEffectAngle;                                   		// 0x0320 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseEffectAngle : 1;                              		// 0x0324 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseDistanceCheck : 1;                            		// 0x0324 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseCheckFailing : 1;                             		// 0x0324 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              MinDamageRange;                                   		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDamageRange;                                   		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84370 ];

		return pClassPointer;
	};

	void ResetTimer ( );
	bool IsBetween ( float Value, float X, float Y );
	void InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly );
	float GetDamageMultiplier ( class AActor* damagedTarget );
	bool IsAdjustAllowed ( class UObject* Target, struct FsLastDamageInfo TheDamageInfo );
	void AdjustDealtDamage ( class AActor* damagedTarget, int OriginalDamage, int* inDamage, struct FsLastDamageInfo* damageInfo, struct FVector* Momentum );
};

UClass* UDunDefBuff_DamageAdjuster::pClassPointer = NULL;

// Class DunDefBuff.DunDefBuff_ExtraLife
// 0x000C (0x030C - 0x0300)
class UDunDefBuff_ExtraLife : public UDunDefBuff
{
public:
	unsigned long                                      bTowerDowngradeIfDead : 1;                        		// 0x0300 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInvincibleAfterProc : 1;                         		// 0x0300 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bProcOnKillZDamage : 1;                           		// 0x0300 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsInvincible : 1;                                		// 0x0300 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	float                                              InvincibleDuration;                               		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              healthRestorePct;                                 		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84412 ];

		return pClassPointer;
	};

	void DisableInvincibility ( );
	void AdjustTargetDamage ( class AActor* forActor, class AController* fromController, class UClass* TheDamageType, class UObject* WhatHitMe, struct FsLastDamageInfo damageInfo, int* howMuchDamage, struct FVector* Momentum );
	void BuffEffect ( );
	void DeactivateBuff ( );
	void ActivateBuff ( );
	bool CanProc ( class AActor* aActor );
	void InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly );
};

UClass* UDunDefBuff_ExtraLife::pClassPointer = NULL;

// Class DunDefBuff.DunDefBuff_OnHit
// 0x0058 (0x0358 - 0x0300)
class UDunDefBuff_OnHit : public UDunDefBuff
{
public:
	int                                                ExtraDamageAmount;                                		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExtraDamageMomentum;                              		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DealtDamageMultiplier;                            		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ExtraDamageType;                                  		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ExtraDamageParticleEffect;                        		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      TriggerOnDamageType;                              		// 0x0314 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIgnoreIntervalBetweenProcs : 1;                  		// 0x0318 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bScaleOffDealtDamage : 1;                         		// 0x0318 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< class UDunDefBuff* >                       BuffsToApplyOnTargetHit;                          		// 0x031C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UDunDefBuff* >                       BuffsToApplyOnOwner;                              		// 0x0328 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UActorFilter* >                      VictimFilters;                                    		// 0x0334 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UActorFilter* >                      DamageCauserFilters;                              		// 0x0340 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UActorFilter* >                      WhatDidDamageFilters;                             		// 0x034C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84445 ];

		return pClassPointer;
	};

	void InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly );
	float GetExtraDamageAmount ( float dealtDamage );
	bool IsValidHitTarget ( class AActor* TargetActor, class AActor* DamageCauser, class AController* DamageInstigator, class UClass* DamageType, class UObject* whatDidDamage );
	void ReportActorDealtDamage ( int dealtDamage, class AActor* Victim, class UClass* TheDamageType, class AActor* DamageCauser, class AController* DamageInstigator, int adjustedDamage, class UObject* whatDidDamage );
	void AdjustDealtDamage ( class AActor* damagedTarget, int OriginalDamage, int* inDamage, struct FsLastDamageInfo* damageInfo, struct FVector* Momentum );
};

UClass* UDunDefBuff_OnHit::pClassPointer = NULL;

// Class DunDefBuff.DunDefBuff_Spawn
// 0x0058 (0x0358 - 0x0300)
class UDunDefBuff_Spawn : public UDunDefBuff
{
public:
	unsigned char                                      EventToTriggerBuff;                               		// 0x0300 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UObject* >                           SpawnTemplates;                                   		// 0x0304 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUseRandomSpawnTemplate : 1;                      		// 0x0310 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseBuffOwnerAsTarget : 1;                        		// 0x0310 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIgnoreSpawnCollision : 1;                        		// 0x0310 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSetTargetAsHomingTarget : 1;                     		// 0x0310 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bDestroyExcessSpawns : 1;                         		// 0x0310 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDestroyBuffOnSucessfulSpawn : 1;                 		// 0x0310 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIgnoreIntervalBetweenProcs : 1;                  		// 0x0310 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	int                                                SpawnCount;                                       		// 0x0314 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpawnLimit;                                       		// 0x0318 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      TieredSpawnCountArray;                            		// 0x031C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UActorFilter* >                      EventCauserFilters;                               		// 0x0328 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UActorFilter* >                      EventOwnerFilters;                                		// 0x0334 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UActorFilter* >                      WhatDidDamageFilters;                             		// 0x0340 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UObject* >                           SpawnedObjects;                                   		// 0x034C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84497 ];

		return pClassPointer;
	};

	bool CanSpawn ( class UObject* EventCauser, class UObject* EventOwner, class UObject* whatDidDamage );
	void DestroySpawn ( class UObject* theObject );
	void EnforceSpawnLimit ( int aspawnCount );
	bool CheckSpawnCount ( );
	int GetSpawnCount ( );
	void SpawnArchetype ( class AActor* TargetActor );
	void ReportBuffRemoved ( class UDunDefBuff* BuffRemoved );
	void ReportBuffAdded ( class UDunDefBuff* BuffAdded );
	void ReportOwnerJumped ( );
	void TriggerEvent ( unsigned char EventToTrigger );
	void ReportOwnerDeath ( );
	void ReportHealedActor ( int healedAmount, class AActor* healed );
	void ReportHealed ( int healedAmount, class AActor* Healer );
	void ReportKilledActor ( class AActor* killedActor, class UClass* TheDamageType, class AController* Killer, class AActor* KillingActor, class UObject* WhatKilledThem );
	void ReportTookDamage ( int dealtDamage, class AActor* damager, class UClass* TheDamageType, int adjustedDamage );
	void ReportActorDealtDamage ( int dealtDamage, class AActor* Victim, class UClass* TheDamageType, class AActor* DamageCauser, class AController* DamageInstigator, int adjustedDamage, class UObject* whatDidDamage );
};

UClass* UDunDefBuff_Spawn::pClassPointer = NULL;

// Class DunDefBuff.DunDefBuff_Web
// 0x001C (0x0338 - 0x031C)
class UDunDefBuff_Web : public UDunDefBuff_Boost
{
public:
	float                                              MovementSpeedMultiplier;                          		// 0x031C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TowerAttackRateMultiplier;                        		// 0x0320 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerAttackRateMultiplier;                       		// 0x0324 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              pawnDamageModifier;                               		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnAttackSpeedMult;                              		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WebbedJumpZ;                                      		// 0x0330 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUsePawnDeboosting : 1;                           		// 0x0334 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84580 ];

		return pClassPointer;
	};

	float GetPawnBoostAmount ( unsigned char boostType );
	void RemoveDebuff ( );
	void ApplyDebuff ( );
	void InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly );
	void BuffEffect ( );
	bool IsValidTarget ( class AActor* Target, class AActor* BuffOwner, class UDunDefBuff* aBuffTemplate );
	void DeactivateBuff ( );
	void ActivateBuff ( );
};

UClass* UDunDefBuff_Web::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif