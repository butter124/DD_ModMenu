/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT7_classes.h
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

// Class CDT7.DunDefProjectile_HarpoonDot
// 0x001C (0x038C - 0x0370)
class ADunDefProjectile_HarpoonDot : public ADunDefProjectile_Harpoon
{
public:
	float                                              DotDamageScale;                                   		// 0x0370 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     DotTemplate;                                      		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttach : 1;                                      		// 0x0378 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseDot : 1;                                      		// 0x0378 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSlowEnemyTarget : 1;                             		// 0x0378 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bWeakenEnemyTarget : 1;                           		// 0x0378 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              SlowEnemyTargetPercentage;                        		// 0x037C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeakenEnemyTargetPercentage;                      		// 0x0380 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearSlowTime;                               		// 0x0384 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearWeakenTime;                             		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81198 ];

		return pClassPointer;
	};

	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void SpawnDot ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ADunDefProjectile_HarpoonDot::pClassPointer = NULL;

// Class CDT7.DunDefProjectile_StaffDot
// 0x0020 (0x03A4 - 0x0384)
class ADunDefProjectile_StaffDot : public ADunDefProjectile_MagicBolt
{
public:
	float                                              DotDamageScale;                                   		// 0x0384 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     DotTemplate;                                      		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     EffectTemplate;                                   		// 0x038C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttach : 1;                                      		// 0x0390 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseDot : 1;                                      		// 0x0390 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseEffect : 1;                                   		// 0x0390 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bWeakenEnemyTarget : 1;                           		// 0x0390 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bSlowEnemyTarget : 1;                             		// 0x0390 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bUseParticleEffectOnHit : 1;                      		// 0x0390 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	float                                              SlowEnemyTargetPercentage;                        		// 0x0394 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeakenEnemyTargetPercentage;                      		// 0x0398 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearSlowTime;                               		// 0x039C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearWeakenTime;                             		// 0x03A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81222 ];

		return pClassPointer;
	};

	void SpawnEffect ( );
	void Landed ( struct FVector HitNormal, class AActor* Floor );
	void SpawnDot ( struct FVector HitLocation, struct FVector HitNormal );
	void DoEffect ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ADunDefProjectile_StaffDot::pClassPointer = NULL;

// Class CDT7.DunDefWeapon_MagicStaff_Dot
// 0x0000 (0x0614 - 0x0614)
class ADunDefWeapon_MagicStaff_Dot : public ADunDefWeapon_MagicStaff
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81255 ];

		return pClassPointer;
	};

	void ShootProjectiles ( int theFireMode );
};

UClass* ADunDefWeapon_MagicStaff_Dot::pClassPointer = NULL;

// Class CDT7.HeroEquipment_Familiar_TowerDamageScaling
// 0x00FC (0x0BEC - 0x0AF0)
class UHeroEquipment_Familiar_TowerDamageScaling : public UHeroEquipment_Familiar
{
public:
	float                                              ProjectileShootInterval;                          		// 0x0AF0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefProjectile*                           ProjectileTemplate;                               		// 0x0AF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefProjectile*                           ProjectileTemplateAlt;                            		// 0x0AF8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefProjectile* >                 ProjectileTemplates;                              		// 0x0AFC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       FamiliarSocketName;                               		// 0x0B08 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MuzzleSocketName;                                 		// 0x0B10 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShootEffectSocket;                                		// 0x0B18 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetRange;                                      		// 0x0B20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ScaleTowerDamage : 1;                             		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseFixedShootSpeed : 1;                          		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShootProjectileWithoutTarget : 1;                		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bForceProjectileMuzzleRotation : 1;               		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bIgnoreHurtAnimationWhenShooting : 1;             		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bSlowEnemyTarget : 1;                             		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bWeakenEnemyTarget : 1;                           		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bUseProjectileImpactedDelegate : 1;               		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bMythicalScaleTowerDamage : 1;                    		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bChooseHealingTarget : 1;                         		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bProjectilesCollideWithOwner : 1;                 		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bAddManaForDamage : 1;                            		// 0x0B24 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bUseAltProjectile : 1;                            		// 0x0B24 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bIgnoreElementInTargeting : 1;                    		// 0x0B24 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bDoShotsPerSecondBonusCap : 1;                    		// 0x0B24 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      DoLineOfSightCheck : 1;                           		// 0x0B24 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      bDidAddManaForDamage : 1;                         		// 0x0B24 (0x0004) [0x0000000000002000] [0x00010000] ( CPF_Transient )
	TArray< struct FVector >                           ProjectileSpawnOffsets;                           		// 0x0B28 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     ProjectileSpawnOffset;                            		// 0x0B34 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FRotator >                          ProjectileRotOffsets;                             		// 0x0B40 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    ProjectileDelays;                                 		// 0x0B4C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MinimumProjectileSpeed;                           		// 0x0B58 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileSpeedBonusMultiplier;                   		// 0x0B5C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAttackAnimationSpeed;                          		// 0x0B60 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileDamageMultiplier;                       		// 0x0B64 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShotsPerSecondExponent;                           		// 0x0B68 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShotsPerSecondAnimExponent;                       		// 0x0B6C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AbsoluteDamageMultiplier;                         		// 0x0B70 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlowEnemyTargetPercentage;                        		// 0x0B74 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeakenEnemyTargetPercentage;                      		// 0x0B78 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearSlowTime;                               		// 0x0B7C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MythicalScaleDamageStatExponent;                  		// 0x0B80 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyClearWeakenTime;                             		// 0x0B84 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareDamageMultiplier;                        		// 0x0B88 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExtraNightmareDamageMultiplier;                   		// 0x0B8C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MythicalScaleDamageStatType;                      		// 0x0B90 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ShootSound;                                       		// 0x0B94 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ShootEffect;                                      		// 0x0B98 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseHealAmount;                                   		// 0x0B9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealAmountMultiplier;                             		// 0x0BA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareHealingMultiplier;                       		// 0x0BA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AltProjectileMinimumRange;                        		// 0x0BA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealingPriorityHealthPercentage;                  		// 0x0BAC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AttackAnimationAlt;                               		// 0x0BB0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShotsPerSecondBonusCap;                           		// 0x0BB8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseDamageToManaRatio;                            		// 0x0BBC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ManaMultiplier;                                   		// 0x0BC0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxManaPerDamage;                                 		// 0x0BC4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinManaPerDamage;                                 		// 0x0BC8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxManaMultiplierExponent;                        		// 0x0BCC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageManaMultiplierExponent;                     		// 0x0BD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastShootProjectileTime;                          		// 0x0BD4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDunDefTargetableInterface*                  BestTargetRef;                                    		// 0x0BD8 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0BDC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot > DelayedShots;                                     		// 0x0BE0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81280 ];

		return pClassPointer;
	};

	float GetHealAmount ( );
	void OnDunDefProjectileImpacted ( class ADunDefProjectile* aProjectile, class AActor* impactedOn );
	void NotifyEquipment_PawnTookDamage ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	void NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp );
	void ShootProjectile ( unsigned long bIsAltProjectile );
	void GetMuzzleTransformation ( class USkeletalMeshComponent* myMeshComp, struct FVector* SpawnLocation, struct FRotator* SpawnRotation );
	int GetWeaponDamage ( );
	void ApplyPrimaryDamageMultiplierDisplay ( int* StatValue );
	float GetEquipmentStatValue ( unsigned char equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp );
	void AddRandomizeValues ( float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear );
	bool AllowStatLevelUp ( unsigned char EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement );
	float GetAttackInterval ( unsigned long bIncludeShotsPerSecondExponent );
	class UClass* GetElementalDamageType ( );
	float GetProjectileElementalDamage ( );
	float GetProjectileDamage ( class ADunDefProjectile* projectileArch );
	float GetProjectileSpeed ( class ADunDefProjectile* projectileArch );
	int GetNumProjectiles ( );
	struct FRotator GetDesiredSphereRotationalPlacement ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget );
	struct FRotator GetDesiredDirection ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer );
	void ShutDown ( unsigned long isDestruction );
	void AttachedComponent ( class UPrimitiveComponent* aComp );
	void UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	void UpdateDelayedShots ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	void TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	class UDunDefTargetableInterface* GetBestTarget ( );
	class UDunDefTargetableInterface* GetBestHealingTarget ( float CheckHealthPercentageThreshold );
};

UClass* UHeroEquipment_Familiar_TowerDamageScaling::pClassPointer = NULL;

// Class CDT7.HeroEquipment_Familiar_Melee_TowerScaling
// 0x0060 (0x0C4C - 0x0BEC)
class UHeroEquipment_Familiar_Melee_TowerScaling : public UHeroEquipment_Familiar_TowerDamageScaling
{
public:
	float                                              MeleeHitRadius;                                   		// 0x0BEC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageMomentum;                              		// 0x0BF0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MeleeDamageType;                                  		// 0x0BF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxKnockbackMultiplier;                           		// 0x0BF8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockbackBonusLinearScale;                        		// 0x0BFC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockbackBonusExpScale;                           		// 0x0C00 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAlsoShootProjectile : 1;                         		// 0x0C04 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ScaleMeleeDamageForHero : 1;                      		// 0x0C04 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseRandomizedDamage : 1;                         		// 0x0C04 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDoMeleeHealing : 1;                              		// 0x0C04 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bIsAttacking : 1;                                 		// 0x0C04 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              MeleeRange;                                       		// 0x0C08 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScaleDamageStatExponent;                          		// 0x0C0C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExtraNightmareMeleeDamageMultiplier;              		// 0x0C10 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AlsoShootProjectileAnimation;                     		// 0x0C14 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScaleMeleeDamageForHeroStatType;                  		// 0x0C1C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                RandomizedDamageMultiplierMaximum;                		// 0x0C20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomizedDamageMultiplierDivisor;                		// 0x0C24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseDamageToHealRatio;                            		// 0x0C28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EquipmentDamageMultiplierBase;                    		// 0x0C2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHealPerDamage;                                 		// 0x0C30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinHealPerDamage;                                 		// 0x0C34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHealMultiplierExponent;                        		// 0x0C38 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageHealMultiplierExponent;                     		// 0x0C3C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            SwingHurtList;                                    		// 0x0C40 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81471 ];

		return pClassPointer;
	};

	void AttachedComponent ( class UPrimitiveComponent* aComp );
	void NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp );
	void ShutDown ( unsigned long isDestruction );
	void UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
	float GetHealMultiplier ( );
	float GetMomentumMultiplier ( );
	void UpdateAttackSwing ( float DeltaTime );
	bool AddToSwingHurtList ( class ADunDefPlayer* myOwner, class AActor* newEntry );
	void TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime );
};

UClass* UHeroEquipment_Familiar_Melee_TowerScaling::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif