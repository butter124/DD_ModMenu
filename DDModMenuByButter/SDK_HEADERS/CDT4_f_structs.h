/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT4_f_structs.h
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

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AddRandomizeValues
// [0x00024002] 
struct UHeroEquipment_Familiar_CoreHealer_execAddRandomizeValues_Parms
{
	float                                              equipmentQuality;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      doResetStatsToTemplate : 1;                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDontUseMissionRandomizerMultiplier : 1;          		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              RandomizerMultiplierOverride;                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsForShop : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowTranscendentGear : 1;                       		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetStatLevelUpAmountIterations
// [0x00024002] 
struct UHeroEquipment_Familiar_CoreHealer_execGetStatLevelUpAmountIterations_Parms
{
	unsigned char                                      EQS;                                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                statSubIndex;                                     		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetNextStatLevelUpValue
// [0x00024002] 
struct UHeroEquipment_Familiar_CoreHealer_execGetNextStatLevelUpValue_Parms
{
	unsigned char                                      EQS;                                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                statSubIndex;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      SetAsValue : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.InitFromNetInfo
// [0x00024002] 
struct UHeroEquipment_Familiar_CoreHealer_execInitFromNetInfo_Parms
{
	struct FEquipmentNetInfo                           Info;                                             		// 0x0000 (0x0120) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     fromDroppedEquipment;                             		// 0x0120 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.CheckStatLevelUpIterations
// [0x00020002] 
struct UHeroEquipment_Familiar_CoreHealer_execCheckStatLevelUpIterations_Parms
{
	unsigned char                                      EQS;                                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                statSubIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                EquipmentLevelToCheck;                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AllowStatLevelUp
// [0x00024002] 
struct UHeroEquipment_Familiar_CoreHealer_execAllowStatLevelUp_Parms
{
	unsigned char                                      EQS;                                              		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                statSubIndex;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      IsInForgeUI : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIgnoreManaRequirement : 1;                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetWeaponDamage
// [0x00020002] 
struct UHeroEquipment_Familiar_CoreHealer_execGetWeaponDamage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.ApplyPrimaryDamageMultiplierDisplay
// [0x00420002] 
struct UHeroEquipment_Familiar_CoreHealer_execApplyPrimaryDamageMultiplierDisplay_Parms
{
	int                                                StatValue;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatValue
// [0x00024002] 
struct UHeroEquipment_Familiar_CoreHealer_execGetEquipmentStatValue_Parms
{
	unsigned char                                      equipmentStatType;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      returnFinalAddedValue : 1;                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      includeStatLevelUp : 1;                           		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             val;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.NotifyEquipment_PawnAttacked
// [0x00020000] 
struct UHeroEquipment_Familiar_CoreHealer_execNotifyEquipment_PawnAttacked_Parms
{
	int                                                FireMode;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredSphereRotationalPlacement
// [0x00420002] 
struct UHeroEquipment_Familiar_CoreHealer_execGetDesiredSphereRotationalPlacement_Parms
{
	class USkeletalMeshComponent*                      myMeshComp;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class ADunDefPlayer*                               myPlayer;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      HasTarget;                                        		// 0x0008 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredDirection
// [0x00020002] 
struct UHeroEquipment_Familiar_CoreHealer_execGetDesiredDirection_Parms
{
	class USkeletalMeshComponent*                      myMeshComp;                                       		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class ADunDefPlayer*                               myPlayer;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetAttackInterval
// [0x00020102] 
struct UHeroEquipment_Familiar_CoreHealer_execGetAttackInterval_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealAmount
// [0x00020102] 
struct UHeroEquipment_Familiar_CoreHealer_execGetHealAmount_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetManaCost
// [0x00020102] 
struct UHeroEquipment_Familiar_CoreHealer_execGetManaCost_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealRangeSq
// [0x00020102] 
struct UHeroEquipment_Familiar_CoreHealer_execGetHealRangeSq_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           HealRange;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           statAmount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatName
// [0x00020002] 
struct UHeroEquipment_Familiar_CoreHealer_execGetEquipmentStatName_Parms
{
	unsigned char                                      equipmentStatType;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateAI
// [0x00020002] 
struct UHeroEquipment_Familiar_CoreHealer_execUpdateAI_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefCrystalCore*                       aCrystal;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             healAmount;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           NearestSq;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           NewDistSq;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bDidHealing : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.TickedByPawn
// [0x00020002] 
struct UHeroEquipment_Familiar_CoreHealer_execTickedByPawn_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateRotation
// [0x00020002] 
struct UHeroEquipment_Familiar_CoreHealer_execUpdateRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.ShutDown
// [0x00024002] 
struct UHeroEquipment_Familiar_CoreHealer_execShutDown_Parms
{
	unsigned long                                      isDestruction : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AttachedComponent
// [0x00020002] 
struct UHeroEquipment_Familiar_CoreHealer_execAttachedComponent_Parms
{
	class UPrimitiveComponent*                         aComp;                                            		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.GetBestTarget
// [0x00820002] 
struct UHeroEquipment_Familiar_MiniQueen_execGetBestTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   aTarget;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   BestTarget;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   BestWebTarget;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AActor*                                   BestMeleeTarget;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AActor*                                   BestRangedTarget;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           ClosestWebDistSq;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           ClosestMeleeDistSq;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           ClosestRangedDistSq;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           NewDistSq;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   MyMeshComponent;                                  		// 0x002C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  ProjectileSpawnLocation;                          		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ProjectileSpawnRotation;                          		// 0x003C (0x000C) [0x0000000000000000]              
	// class ADunDefPlayer*                            myPlayer;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginRangedAttack
// [0x00020002] 
struct UHeroEquipment_Familiar_MiniQueen_execBeginRangedAttack_Parms
{
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginMeleeAttack
// [0x00020002] 
struct UHeroEquipment_Familiar_MiniQueen_execBeginMeleeAttack_Parms
{
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.CanWebTarget
// [0x00020002] 
struct UHeroEquipment_Familiar_MiniQueen_execCanWebTarget_Parms
{
	class UDunDefTargetableInterface*                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.UpdateAI
// [0x00020002] 
struct UHeroEquipment_Familiar_MiniQueen_execUpdateAI_Parms
{
	class ADunDefPlayer*                               PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif