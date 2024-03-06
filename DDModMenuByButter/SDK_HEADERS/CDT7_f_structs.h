/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT7_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function CDT7.DunDefProjectile_HarpoonDot.ProcessTouch
// [0x00020102] 
struct ADunDefProjectile_HarpoonDot_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefEmitterSpawnable*                  aSpawnableEmitter;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  aSpawned;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           MomentumToUse;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_HarpoonDot.SpawnDot
// [0x00020002] 
struct ADunDefProjectile_HarpoonDot_execSpawnDot_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGasCloud*                          Dot;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnEffect
// [0x00020002] 
struct ADunDefProjectile_StaffDot_execSpawnEffect_Parms
{
	// class ADunDefEmitterSpawnable*                  SpawnEffect;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   EnemyHit;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           HitRadius;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_StaffDot.Landed
// [0x00020102] 
struct ADunDefProjectile_StaffDot_execLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Floor;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnDot
// [0x00020002] 
struct ADunDefProjectile_StaffDot_execSpawnDot_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGasCloud*                          Dot;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefProjectile_StaffDot.DoEffect
// [0x00020002] 
struct ADunDefProjectile_StaffDot_execDoEffect_Parms
{
};

// Function CDT7.DunDefProjectile_StaffDot.Explode
// [0x00020102] 
struct ADunDefProjectile_StaffDot_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefEmitterSpawnable*                  ImpactEffect;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           SizeChange;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function CDT7.DunDefWeapon_MagicStaff_Dot.ShootProjectiles
// [0x00824102] 
struct ADunDefWeapon_MagicStaff_Dot_execShootProjectiles_Parms
{
	int                                                theFireMode;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefProjectile*                        SpawnedProjectile;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  MuzzleFlashEffect;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             useNumProjectiles;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             projAdditionalDamageAmount;                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bForceNoRotClamping : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ProjDamage;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           projSpeed;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ProjAdditionalDamageType;                         		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetHealAmount
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetHealAmount_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           healAmount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.OnDunDefProjectileImpacted
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execOnDunDefProjectileImpacted_Parms
{
	class ADunDefProjectile*                           aProjectile;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      impactedOn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           MaxManaDamageClamp;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ManaPowerToAdd;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_PawnTookDamage
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execNotifyEquipment_PawnTookDamage_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execNotifyEquipment_AnimNotifyAttachment_Parms
{
	int                                                NotifyID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      equipmentSkelComp;                                		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShootProjectile
// [0x00824002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execShootProjectile_Parms
{
	unsigned long                                      bIsAltProjectile : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class USkeletalMeshComponent*                   MyMeshComponent;                                  		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        SpawnedProjectile;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            myPlayer;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               BestTarget;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             useNumProjectiles;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             theAdditionalDamageAmount;                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// class ADunDefProjectile*                        projectileArch;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	// struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot theDelayedShot;                                   		// 0x0040 (0x0024) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetMuzzleTransformation
// [0x00420002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetMuzzleTransformation_Parms
{
	class USkeletalMeshComponent*                      myMeshComp;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     SpawnLocation;                                    		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetWeaponDamage
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetWeaponDamage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ApplyPrimaryDamageMultiplierDisplay
// [0x00420002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execApplyPrimaryDamageMultiplierDisplay_Parms
{
	int                                                StatValue;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetEquipmentStatValue
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetEquipmentStatValue_Parms
{
	unsigned char                                      equipmentStatType;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      returnFinalAddedValue : 1;                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      includeStatLevelUp : 1;                           		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             val;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AddRandomizeValues
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execAddRandomizeValues_Parms
{
	float                                              equipmentQuality;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      doResetStatsToTemplate : 1;                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDontUseMissionRandomizerMultiplier : 1;          		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              RandomizerMultiplierOverride;                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsForShop : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowTranscendentGear : 1;                       		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AllowStatLevelUp
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execAllowStatLevelUp_Parms
{
	unsigned char                                      EQS;                                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                statSubIndex;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      IsInForgeUI : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIgnoreManaRequirement : 1;                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetAttackInterval
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetAttackInterval_Parms
{
	unsigned long                                      bIncludeShotsPerSecondExponent : 1;               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetElementalDamageType
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetElementalDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileElementalDamage
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileElementalDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileDamage
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileDamage_Parms
{
	class ADunDefProjectile*                           projectileArch;                                   		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileSpeed
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileSpeed_Parms
{
	class ADunDefProjectile*                           projectileArch;                                   		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetNumProjectiles
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetNumProjectiles_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredSphereRotationalPlacement
// [0x00420002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetDesiredSphereRotationalPlacement_Parms
{
	class USkeletalMeshComponent*                      myMeshComp;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class ADunDefPlayer*                               myPlayer;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HasTarget;                                        		// 0x0008 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredDirection
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetDesiredDirection_Parms
{
	class USkeletalMeshComponent*                      myMeshComp;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class ADunDefPlayer*                               myPlayer;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShutDown
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execShutDown_Parms
{
	unsigned long                                      isDestruction : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AttachedComponent
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execAttachedComponent_Parms
{
	class UPrimitiveComponent*                         aComp;                                            		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateAI
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execUpdateAI_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateDelayedShots
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execUpdateDelayedShots_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.TickedByPawn
// [0x00020002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execTickedByPawn_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestTarget
// [0x00820002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetBestTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   act;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            myPlayer;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   aTarget;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AActor*                                   BestTarget;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           closestDistance;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           newDistance;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ProjectileSpawnLocation;                          		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ProjectileSpawnRotation;                          		// 0x002C (0x000C) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   MyMeshComponent;                                  		// 0x0038 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestHealingTarget
// [0x00024002] 
struct UHeroEquipment_Familiar_TowerDamageScaling_execGetBestHealingTarget_Parms
{
	float                                              CheckHealthPercentageThreshold;                   		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayer*                            myPlayer;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   act;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            aTarget;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            BestTarget;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           LowestHealthPercent;                              		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           newHealthPercent;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AttachedComponent
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execAttachedComponent_Parms
{
	class UPrimitiveComponent*                         aComp;                                            		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execNotifyEquipment_AnimNotifyAttachment_Parms
{
	int                                                NotifyID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USkeletalMeshComponent*                      equipmentSkelComp;                                		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.ShutDown
// [0x00024002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execShutDown_Parms
{
	unsigned long                                      isDestruction : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAI
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execUpdateAI_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetHealMultiplier
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execGetHealMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetMomentumMultiplier
// [0x00020102] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execGetMomentumMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAttackSwing
// [0x00820002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execUpdateAttackSwing_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  slapLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 slapRot;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            OwnerPlayer;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   SMComp;                                           		// 0x0024 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// unsigned long                                   bAddedManaForDamage : 1;                          		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDidMeleeHealing : 1;                             		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           MaxManaDamageClamp;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           ManaPowerToAdd;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           MaxHealDamageClamp;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           healAmount;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           Damage;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           RandomMultiplier;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AddToSwingHurtList
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execAddToSwingHurtList_Parms
{
	class ADunDefPlayer*                               myOwner;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      newEntry;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.TickedByPawn
// [0x00020002] 
struct UHeroEquipment_Familiar_Melee_TowerScaling_execTickedByPawn_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif