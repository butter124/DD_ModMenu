/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefBuff_f_structs.h
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

// Function DunDefBuff.DunDefBuff_Boost.GetBoostedTargets
// [0x00420002] 
struct UDunDefBuff_Boost_execGetBoostedTargets_Parms
{
	TArray< class APawn* >                             boostedTargets;                                   		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function DunDefBuff.DunDefBuff_Boost.NotifyOfBoostedRemoval
// [0x00020000] 
struct UDunDefBuff_Boost_execNotifyOfBoostedRemoval_Parms
{
	class APawn*                                       removedBoostee;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Boost.GetPawnBoostAmount
// [0x00020002] 
struct UDunDefBuff_Boost_execGetPawnBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Boost.HasPawnBoostingType
// [0x00020002] 
struct UDunDefBuff_Boost_execHasPawnBoostingType_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostAmount
// [0x00020002] 
struct UDunDefBuff_Boost_execGetTowerBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Boost.HasTowerBoostingType
// [0x00020002] 
struct UDunDefBuff_Boost_execHasTowerBoostingType_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostingTarget
// [0x00020002] 
struct UDunDefBuff_Boost_execGetTowerBoostingTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Boost.InitalizeActorStats
// [0x00024102] 
struct UDunDefBuff_Boost_execInitalizeActorStats_Parms
{
	class UIActorModifierInterface*                    ActorStatObject;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     CallingObject;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Boost.DeactivateBuff
// [0x00020102] 
struct UDunDefBuff_Boost_execDeactivateBuff_Parms
{
};

// Function DunDefBuff.DunDefBuff_Boost.ActivateBuff
// [0x00020102] 
struct UDunDefBuff_Boost_execActivateBuff_Parms
{
};

// Function DunDefBuff.DunDefBuff_Contagion.CanAffectTarget
// [0x00020002] 
struct UDunDefBuff_Contagion_execCanAffectTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Contagion.GetNearestTarget
// [0x00020102] 
struct UDunDefBuff_Contagion_execGetNearestTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           closestDistance;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           newDistance;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   aTarget;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AActor*                                   BestTarget;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AActor*                                   act;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Contagion.Initialize
// [0x00020102] 
struct UDunDefBuff_Contagion_execInitialize_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Contagion.BuffEffect
// [0x00020102] 
struct UDunDefBuff_Contagion_execBuffEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             TargetNum;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   aActor;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   bActor;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Damage.InitalizeActorStats
// [0x00024102] 
struct UDunDefBuff_Damage_execInitalizeActorStats_Parms
{
	class UIActorModifierInterface*                    ActorStatObject;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     CallingObject;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Damage.CanDamage
// [0x00020002] 
struct UDunDefBuff_Damage_execCanDamage_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Damage.GetBuffDamage
// [0x00020002] 
struct UDunDefBuff_Damage_execGetBuffDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Damage.BuffEffect
// [0x00020102] 
struct UDunDefBuff_Damage_execBuffEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   aActor;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.ResetTimer
// [0x00020102] 
struct UDunDefBuff_DamageAdjuster_execResetTimer_Parms
{
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.IsBetween
// [0x00020002] 
struct UDunDefBuff_DamageAdjuster_execIsBetween_Parms
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.InitalizeActorStats
// [0x00024102] 
struct UDunDefBuff_DamageAdjuster_execInitalizeActorStats_Parms
{
	class UIActorModifierInterface*                    ActorStatObject;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     CallingObject;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.GetDamageMultiplier
// [0x00020002] 
struct UDunDefBuff_DamageAdjuster_execGetDamageMultiplier_Parms
{
	class AActor*                                      damagedTarget;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Angle;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.IsAdjustAllowed
// [0x00020002] 
struct UDunDefBuff_DamageAdjuster_execIsAdjustAllowed_Parms
{
	class UObject*                                     Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FsLastDamageInfo                            TheDamageInfo;                                    		// 0x0004 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.AdjustDealtDamage
// [0x00424002] 
struct UDunDefBuff_DamageAdjuster_execAdjustDealtDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      damagedTarget;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FsLastDamageInfo                            damageInfo;                                       		// 0x0008 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                OriginalDamage;                                   		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_ExtraLife.DisableInvincibility
// [0x00020102] 
struct UDunDefBuff_ExtraLife_execDisableInvincibility_Parms
{
};

// Function DunDefBuff.DunDefBuff_ExtraLife.AdjustTargetDamage
// [0x00424002] 
struct UDunDefBuff_ExtraLife_execAdjustTargetDamage_Parms
{
	class AActor*                                      forActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                howMuchDamage;                                    		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 fromController;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      TheDamageType;                                    		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FsLastDamageInfo                            damageInfo;                                       		// 0x0020 (0x0010) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_ExtraLife.BuffEffect
// [0x00020100] 
struct UDunDefBuff_ExtraLife_execBuffEffect_Parms
{
};

// Function DunDefBuff.DunDefBuff_ExtraLife.DeactivateBuff
// [0x00820102] 
struct UDunDefBuff_ExtraLife_execDeactivateBuff_Parms
{
	// struct FsBuffStorageData                        buffData;                                         		// 0x0000 (0x0028) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_ExtraLife.ActivateBuff
// [0x00820102] 
struct UDunDefBuff_ExtraLife_execActivateBuff_Parms
{
	// class ADunDefPlayerReplicationInfo*             ddPRI;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FsBuffStorageData                        Data;                                             		// 0x0004 (0x0028) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_ExtraLife.CanProc
// [0x00020002] 
struct UDunDefBuff_ExtraLife_execCanProc_Parms
{
	class AActor*                                      aActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_ExtraLife.InitalizeActorStats
// [0x00024102] 
struct UDunDefBuff_ExtraLife_execInitalizeActorStats_Parms
{
	class UIActorModifierInterface*                    ActorStatObject;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     CallingObject;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_OnHit.InitalizeActorStats
// [0x00024102] 
struct UDunDefBuff_OnHit_execInitalizeActorStats_Parms
{
	class UIActorModifierInterface*                    ActorStatObject;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     CallingObject;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_OnHit.GetExtraDamageAmount
// [0x00024002] 
struct UDunDefBuff_OnHit_execGetExtraDamageAmount_Parms
{
	float                                              dealtDamage;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_OnHit.IsValidHitTarget
// [0x00020002] 
struct UDunDefBuff_OnHit_execIsValidHitTarget_Parms
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 DamageInstigator;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     whatDidDamage;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_OnHit.ReportActorDealtDamage
// [0x00024002] 
struct UDunDefBuff_OnHit_execReportActorDealtDamage_Parms
{
	int                                                dealtDamage;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Victim;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      TheDamageType;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 DamageInstigator;                                 		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                adjustedDamage;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     whatDidDamage;                                    		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_OnHit.AdjustDealtDamage
// [0x00424000] 
struct UDunDefBuff_OnHit_execAdjustDealtDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      damagedTarget;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FsLastDamageInfo                            damageInfo;                                       		// 0x0008 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                OriginalDamage;                                   		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.CanSpawn
// [0x00024002] 
struct UDunDefBuff_Spawn_execCanSpawn_Parms
{
	class UObject*                                     EventCauser;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     EventOwner;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     whatDidDamage;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Spawn.DestroySpawn
// [0x00080002] 
struct UDunDefBuff_Spawn_execDestroySpawn_Parms
{
	class UObject*                                     theObject;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.EnforceSpawnLimit
// [0x00080002] 
struct UDunDefBuff_Spawn_execEnforceSpawnLimit_Parms
{
	int                                                aspawnCount;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             numberOfActorsToDestroy;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Spawn.CheckSpawnCount
// [0x00080002] 
struct UDunDefBuff_Spawn_execCheckSpawnCount_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Spawn.GetSpawnCount
// [0x00020002] 
struct UDunDefBuff_Spawn_execGetSpawnCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Spawn.SpawnArchetype
// [0x00020002] 
struct UDunDefBuff_Spawn_execSpawnArchetype_Parms
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UObject*                                  SpawnedObject;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   spawnedActor;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UObject*                                  Template;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ii;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportBuffRemoved
// [0x00020000] 
struct UDunDefBuff_Spawn_execReportBuffRemoved_Parms
{
	class UDunDefBuff*                                 BuffRemoved;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportBuffAdded
// [0x00020000] 
struct UDunDefBuff_Spawn_execReportBuffAdded_Parms
{
	class UDunDefBuff*                                 BuffAdded;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerJumped
// [0x00020002] 
struct UDunDefBuff_Spawn_execReportOwnerJumped_Parms
{
};

// Function DunDefBuff.DunDefBuff_Spawn.TriggerEvent
// [0x00020002] 
struct UDunDefBuff_Spawn_execTriggerEvent_Parms
{
	unsigned char                                      EventToTrigger;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerDeath
// [0x00020002] 
struct UDunDefBuff_Spawn_execReportOwnerDeath_Parms
{
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportHealedActor
// [0x00020002] 
struct UDunDefBuff_Spawn_execReportHealedActor_Parms
{
	int                                                healedAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      healed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportHealed
// [0x00020002] 
struct UDunDefBuff_Spawn_execReportHealed_Parms
{
	int                                                healedAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportKilledActor
// [0x00020002] 
struct UDunDefBuff_Spawn_execReportKilledActor_Parms
{
	class AActor*                                      killedActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      TheDamageType;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Killer;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      KillingActor;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     WhatKilledThem;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportTookDamage
// [0x00024002] 
struct UDunDefBuff_Spawn_execReportTookDamage_Parms
{
	int                                                dealtDamage;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      damager;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      TheDamageType;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                adjustedDamage;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportActorDealtDamage
// [0x00024002] 
struct UDunDefBuff_Spawn_execReportActorDealtDamage_Parms
{
	int                                                dealtDamage;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Victim;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      TheDamageType;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 DamageInstigator;                                 		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                adjustedDamage;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     whatDidDamage;                                    		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Web.GetPawnBoostAmount
// [0x00020002] 
struct UDunDefBuff_Web_execGetPawnBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Web.RemoveDebuff
// [0x00020102] 
struct UDunDefBuff_Web_execRemoveDebuff_Parms
{
};

// Function DunDefBuff.DunDefBuff_Web.ApplyDebuff
// [0x00020102] 
struct UDunDefBuff_Web_execApplyDebuff_Parms
{
};

// Function DunDefBuff.DunDefBuff_Web.InitalizeActorStats
// [0x00024102] 
struct UDunDefBuff_Web_execInitalizeActorStats_Parms
{
	class UIActorModifierInterface*                    ActorStatObject;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     CallingObject;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefBuff.DunDefBuff_Web.BuffEffect
// [0x00020102] 
struct UDunDefBuff_Web_execBuffEffect_Parms
{
};

// Function DunDefBuff.DunDefBuff_Web.IsValidTarget
// [0x00022002] 
struct UDunDefBuff_Web_execIsValidTarget_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      BuffOwner;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UDunDefBuff*                                 aBuffTemplate;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefBuff.DunDefBuff_Web.DeactivateBuff
// [0x00020102] 
struct UDunDefBuff_Web_execDeactivateBuff_Parms
{
};

// Function DunDefBuff.DunDefBuff_Web.ActivateBuff
// [0x00020102] 
struct UDunDefBuff_Web_execActivateBuff_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif