/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSpecial_f_structs.h
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

// Function DunDefSpecial.DunDefBuff_Harbinger.DeactivateBuff
// [0x00020102] 
struct UDunDefBuff_Harbinger_execDeactivateBuff_Parms
{
};

// Function DunDefSpecial.DunDefBuff_Harbinger.BuffEffect
// [0x00020102] 
struct UDunDefBuff_Harbinger_execBuffEffect_Parms
{
};

// Function DunDefSpecial.DunDefBuff_Harbinger.Tick
// [0x00020902] ( FUNC_Event )
struct UDunDefBuff_Harbinger_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefBuff_Harbinger.Initialize
// [0x00020102] 
struct UDunDefBuff_Harbinger_execInitialize_Parms
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateBuffValues
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execUpdateBuffValues_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UObject*                                  Buff;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAttackDamage
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetAttackDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnDefaultBuffs
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execSpawnDefaultBuffs_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ClientDisableMovementReplication
// [0x00020100] 
struct ADunDefTower_SummonEnemy_execClientDisableMovementReplication_Parms
{
	struct FVector                                     endedLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.TransferTowerOwnership
// [0x00020002] 
struct ADunDefTower_SummonEnemy_execTransferTowerOwnership_Parms
{
	class APawn*                                       toPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ForceSingleMove
// [0x00024102] 
struct ADunDefTower_SummonEnemy_execForceSingleMove_Parms
{
	struct FVector                                     NewLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    NewRot;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldCollideWorld : 1;                          		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bSuccess : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ForceMoveActor
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execForceMoveActor_Parms
{
	class AActor*                                      Mover;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateAggroActor
// [0x00420002] 
struct ADunDefTower_SummonEnemy_execGetAlternateAggroActor_Parms
{
	class UDunDefTargetableInterface*                  AltActor;                                         		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetPlayerTargetingDesirability
// [0x00024102] 
struct ADunDefTower_SummonEnemy_execGetPlayerTargetingDesirability_Parms
{
	class ADunDefPlayerController*                     forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               ForPlayer;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetTowerTargetingDesirability
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_SummonEnemy_eventGetEnemyTargetingDesirability_Parms
{
	class AEngineNativeDunDefAIController*             forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawToolTip
// [0x00024102] 
struct ADunDefTower_SummonEnemy_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosX;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawTowerToolTipStats
// [0x00420102] 
struct ADunDefTower_SummonEnemy_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   boostType;                                        		// 0x0018 (0x0001) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostString
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetBoostString_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetBoostedTargets
// [0x00420002] 
struct ADunDefTower_SummonEnemy_execGetBoostedTargets_Parms
{
	TArray< class APawn* >                             boostedTargets;                                   		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.NotifyOfBoostedRemoval
// [0x00020002] 
struct ADunDefTower_SummonEnemy_execNotifyOfBoostedRemoval_Parms
{
	class APawn*                                       removedBoostee;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipStatValue
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetToolTipStatValue_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetPawnBoostAmount
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetPawnBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HasPawnBoostingType
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execHasPawnBoostingType_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.TakeDamage
// [0x00024800] ( FUNC_Event )
struct ADunDefTower_SummonEnemy_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetAlternateActor
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetAlternateActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealth
// [0x00024102] 
struct ADunDefTower_SummonEnemy_execGetHealth_Parms
{
	unsigned long                                      bGetMax : 1;                                      		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HealDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_SummonEnemy_eventHealDamage_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.AddHealth
// [0x00024002] 
struct ADunDefTower_SummonEnemy_execAddHealth_Parms
{
	int                                                howMuch;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDontDisplayFloatingNumber : 1;                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             oldHealth;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetHealthPercent
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetHealthPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.StartRepair
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execStartRepair_Parms
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetToolTipText
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetToolTipText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefTower_SummonEnemy_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// float                                           linearMult;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.DrawMyHUD
// [0x00820102] 
struct ADunDefTower_SummonEnemy_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ScreenPos;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  objectIconWorldPos;                               		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           cameraDistFromPos;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           IconWidth;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           IconHeight;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           IconDistanceScale;                                		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           heightZ;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               DrawIcon;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// class AActor*                                   towerAct;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateCommand
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execUpdateCommand_Parms
{
	// class UDunDefTargetableInterface*               targetAct;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HandleCommand
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execHandleCommand_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewCommand;                                       		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     commandPoint;                                     		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bValidCommand : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetCommand
// [0x00024102] 
struct ADunDefTower_SummonEnemy_execSetCommand_Parms
{
	struct FVector                                     commandPoint;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewCommand;                                       		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      commandInstigator;                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      targetedActor;                                    		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetSelected
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execSetSelected_Parms
{
	unsigned long                                      bWantsSelected : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      selectingActor;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   commanders;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNonLocalFound : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetPendingSelection
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execSetPendingSelection_Parms
{
	unsigned long                                      bIsPending : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.CleanUpSummon
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execCleanUpSummon_Parms
{
	// class AActor*                                   commandActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             killEnemyReference;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SummonEnemy_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.BaseChange
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_SummonEnemy_eventBaseChange_Parms
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SetUpEnemyValues
// [0x00024102] 
struct ADunDefTower_SummonEnemy_execSetUpEnemyValues_Parms
{
	unsigned long                                      bInitialSetup : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.SpawnMyEnemy
// [0x00020002] 
struct ADunDefTower_SummonEnemy_execSpawnMyEnemy_Parms
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.InitializeForInstigator
// [0x00020002] 
struct ADunDefTower_SummonEnemy_execInitializeForInstigator_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.GetLastDamageTime
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execGetLastDamageTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.HasBeenRendered
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execHasBeenRendered_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateEnemyCollisionValues
// [0x00020102] 
struct ADunDefTower_SummonEnemy_execUpdateEnemyCollisionValues_Parms
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.UpdateReplicatedStatValues
// [0x00020002] 
struct ADunDefTower_SummonEnemy_execUpdateReplicatedStatValues_Parms
{
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefTower_SummonEnemy_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_SummonEnemy.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_SummonEnemy_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefEmitterDamage.GetDamageCauser
// [0x00020102] 
struct ADunDefEmitterDamage_execGetDamageCauser_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   DamageCauser;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefEmitterDamage.CheckValidAngle
// [0x00820002] 
struct ADunDefEmitterDamage_execCheckValidAngle_Parms
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Origin;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  testLoc;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           victimCollisionRadius;                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 RotToTarget;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefEmitterDamage.GetStatModifierObject
// [0x00020102] 
struct ADunDefEmitterDamage_execGetStatModifierObject_Parms
{
	class UIActorModifierInterface*                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefEmitterDamage.GetStatValueByTag
// [0x00024000] 
struct ADunDefEmitterDamage_execGetStatValueByTag_Parms
{
	float                                              initalValue;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     StatTag;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UIActorModifierInterface*                    TagActor;                                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      statType;                                         		// 0x0018 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefEmitterDamage.InitalizeActorStats
// [0x00024102] 
struct ADunDefEmitterDamage_execInitalizeActorStats_Parms
{
	class UIActorModifierInterface*                    ActorStatObject;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     CallingObject;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefEmitterDamage.AllowSpawn
// [0x00022802] ( FUNC_Event )
struct ADunDefEmitterDamage_eventAllowSpawn_Parms
{
	class AActor*                                      theArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     theLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    theRot;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefEmitterDamage.HurtRadius
// [0x00024102] 
struct ADunDefEmitterDamage_execHurtRadius_Parms
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      IgnoredActor;                                     		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AController*                                 InstigatedByController;                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   Victim;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCausedDamage : 1;                                		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bBuffApplied : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           MomentumScale;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefEmitterDamage.DoDamage
// [0x00020002] 
struct ADunDefEmitterDamage_execDoDamage_Parms
{
};

// Function DunDefSpecial.DunDefEmitterDamage.InitDamageEmitter
// [0x00024102] 
struct ADunDefEmitterDamage_execInitDamageEmitter_Parms
{
	int                                                BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BaseRange;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UIActorModifierInterface*                    aActorStatModifier;                               		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefEmitterDamage.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefEmitterDamage_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.CTF_PlayerAbility_PickupFlag.RequestPickup
// [0x00020102] 
struct ACTF_PlayerAbility_PickupFlag_execRequestPickup_Parms
{
	class ACTF_Flag*                                   newFlag;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.SetAtBase
// [0x00020102] 
struct ACTF_Flag_execSetAtBase_Parms
{
	unsigned long                                      bIsAtBase : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.SetDroppedParticleColor
// [0x00820102] 
struct ACTF_Flag_execSetDroppedParticleColor_Parms
{
	// struct FVector                                  TeamColor;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FLinearColor                             TeamLinearColor;                                  		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_Flag.SetTeam
// [0x00020102] 
struct ACTF_Flag_execSetTeam_Parms
{
	int                                                NewTeam;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.InitFlag
// [0x00020002] 
struct ACTF_Flag_execInitFlag_Parms
{
	int                                                NewTeam;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ACTF_FlagBase*                               NewBase;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.AutoTeleport
// [0x00020002] 
struct ACTF_Flag_execAutoTeleport_Parms
{
};

// Function DunDefSpecial.CTF_Flag.AdjustDamage
// [0x00420102] 
struct ACTF_Flag_execAdjustDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.CTF_Flag.PreventTowerAtPoint
// [0x00020102] 
struct ACTF_Flag_execPreventTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              towerRadius;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.AllowTowerAtPoint
// [0x00020102] 
struct ACTF_Flag_execAllowTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.CheckAllowance
// [0x00020102] 
struct ACTF_Flag_execCheckAllowance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.PhysicsVolumeChange
// [0x00020802] ( FUNC_Event )
struct ACTF_Flag_eventPhysicsVolumeChange_Parms
{
	class APhysicsVolume*                              NewVolume;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
struct ACTF_Flag_eventFellOutOfWorld_Parms
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.ResetCollision
// [0x00020102] 
struct ACTF_Flag_execResetCollision_Parms
{
};

// Function DunDefSpecial.CTF_Flag.DisableCollision
// [0x00020102] 
struct ACTF_Flag_execDisableCollision_Parms
{
};

// Function DunDefSpecial.CTF_Flag.IsInAuraOrTrap
// [0x00024102] 
struct ACTF_Flag_execIsInAuraOrTrap_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APhysicsVolume*                           aVolume;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             aTower;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_Flag.CaptureFlag
// [0x00020102] 
struct ACTF_Flag_execCaptureFlag_Parms
{
};

// Function DunDefSpecial.CTF_Flag.ReturnToBase
// [0x00020102] 
struct ACTF_Flag_execReturnToBase_Parms
{
};

// Function DunDefSpecial.CTF_Flag.DropFlag
// [0x00024102] 
struct ACTF_Flag_execDropFlag_Parms
{
	unsigned long                                      bForceRandomizedPosition : 1;                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForceDroppedMessage : 1;                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class APlayerStart*                             P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class APlayerStart* >                   NonAuraPlayerStarts;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class APlayerStart* >                   AllPlayerStarts;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_Flag.PickUpFlag
// [0x00820102] 
struct ACTF_Flag_execPickUpFlag_Parms
{
	class ADunDefPlayer*                               newHolder;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SocketLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_Flag.BeginBeingPickedUp
// [0x00020102] 
struct ACTF_Flag_execBeginBeingPickedUp_Parms
{
	class ADunDefPlayerController*                     newHolder;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ACTF_PlayerAbility_PickupFlag*            playerAbility;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_Flag.CanBePickedUp
// [0x00020102] 
struct ACTF_Flag_execCanBePickedUp_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.DrawMiniMapIcon
// [0x00820102] 
struct ACTF_Flag_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  MapPos;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FColor                                   iconColor;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_Flag.GetActivationOffset
// [0x00020102] 
struct ACTF_Flag_execGetActivationOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.GetActivationWeighting
// [0x00020102] 
struct ACTF_Flag_execGetActivationWeighting_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.Client_Activate
// [0x00024102] 
struct ACTF_Flag_execClient_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.Server_Activate
// [0x00024002] 
struct ACTF_Flag_execServer_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      forceActivation : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                activationType;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.AllowActivation
// [0x00024102] 
struct ACTF_Flag_execAllowActivation_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.GetToolTipPriority
// [0x00020100] 
struct ACTF_Flag_execGetToolTipPriority_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.TakesToolTipPriority
// [0x00020102] 
struct ACTF_Flag_execTakesToolTipPriority_Parms
{
	class UDunDefToolTipInterface*                     otherToolTip;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.ContinueDrawingToolTip
// [0x00020100] 
struct ACTF_Flag_execContinueDrawingToolTip_Parms
{
	unsigned long                                      ContinueDrawing : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.DrawToolTip
// [0x00824102] 
struct ACTF_Flag_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosX;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  DrawCoords;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FColor                                   DrawColor;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           canvasScale;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_Flag.Destroyed
// [0x00020902] ( FUNC_Event )
struct ACTF_Flag_eventDestroyed_Parms
{
};

// Function DunDefSpecial.CTF_Flag.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ACTF_Flag_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.CTF_Flag.DrawMyHUD
// [0x00820102] 
struct ACTF_Flag_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 UseRotation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  screenMiddle;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           screenScale;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Width;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           bounceAmount;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           dotWithCamera;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               waypointTexture;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_Flag.OnlyDrawHUDForOwner
// [0x00020102] 
struct ACTF_Flag_execOnlyDrawHUDForOwner_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_Flag.ExecReplicatedFunction
// [0x00024102] 
struct ACTF_Flag_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_Flag.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ACTF_Flag_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_UIGlobalHUD.GetUITeamLists
// [0x00420102] 
struct UCTF_UIGlobalHUD_execGetUITeamLists_Parms
{
	int                                                TeamOnlyCheck;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     tList;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     kList;                                            		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     sList;                                            		// 0x001C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// TArray< class APlayerReplicationInfo* >         PRIArray;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class APlayerReplicationInfo* >         sortedPRI;                                        		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FString                                  DrawColorString;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bLocalPlayer : 1;                                 		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bWasInserted : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_UIGlobalHUD.GetColorString
// [0x00020102] 
struct UCTF_UIGlobalHUD_execGetColorString_Parms
{
	struct FColor                                      aColor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_UIGlobalHUD.UpdateTeamPanels
// [0x00020102] 
struct UCTF_UIGlobalHUD_execUpdateTeamPanels_Parms
{
	// class ACTF_DDGRI*                               ctfGRI;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  TeamList;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  KillList;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ScoreList;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_UIGlobalHUD.Update
// [0x00020802] ( FUNC_Event )
struct UCTF_UIGlobalHUD_eventUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ACTF_DDGRI*                               ddGRI;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_UIGlobalHUD.UpdateCompetitive
// [0x00020002] 
struct UCTF_UIGlobalHUD_execUpdateCompetitive_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  newCompetitivePlayerList;                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ACTF_DDGRI*                               ddGRI;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController*                  MyPC;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ACTF_DDPRI*                               myPRI;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDPRI.IsFriendlyToLocal
// [0x00020102] 
struct ACTF_DDPRI_execIsFriendlyToLocal_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDPRI.PrintHeroLevelUpMessage
// [0x00020102] 
struct ACTF_DDPRI_execPrintHeroLevelUpMessage_Parms
{
};

// Function DunDefSpecial.CTF_DDPRI.PrintNewHeroMessage
// [0x00020102] 
struct ACTF_DDPRI_execPrintNewHeroMessage_Parms
{
};

// Function DunDefSpecial.CTF_DDPRI.SetReadyToSpawn
// [0x00020102] 
struct ACTF_DDPRI_execSetReadyToSpawn_Parms
{
	unsigned long                                      bIsReady : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDPRI.GetTeamName
// [0x00020102] 
struct ACTF_DDPRI_execGetTeamName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_DDPRI.GetTeamColor
// [0x00020102] 
struct ACTF_DDPRI_execGetTeamColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDPRI.Destroyed
// [0x00020902] ( FUNC_Event )
struct ACTF_DDPRI_eventDestroyed_Parms
{
};

// Function DunDefSpecial.CTF_DDPRI.AddToTeam
// [0x00024102] 
struct ACTF_DDPRI_execAddToTeam_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_DDPRI.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ACTF_DDPRI_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.AllowedToTeleport
// [0x00020002] 
struct ACTF_DDGRI_execAllowedToTeleport_Parms
{
	class APawn*                                       Teleportee;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.DoDeathNotification
// [0x00020102] 
struct ACTF_DDGRI_execDoDeathNotification_Parms
{
	class ADunDefPlayerReplicationInfo*                Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayerReplicationInfo*                Victim;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                damageTypeIndex;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  DeathString;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_DDGRI.GetJumpZMultiplier
// [0x00020102] 
struct ACTF_DDGRI_execGetJumpZMultiplier_Parms
{
	class ADunDefPawn*                                 aPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.ExtraDrawHUDInterface
// [0x00820102] 
struct ACTF_DDGRI_execExtraDrawHUDInterface_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UDunDefHUDInterface*                         hudint;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ScreenPos;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  objectIconWorldPos;                               		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           cameraDistFromPos;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           IconWidth;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           IconHeight;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           IconDistanceScale;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FColor                                   TeamColor;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// class USurface*                                 TeamTexture;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             aTower;                                           		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.CustomUpdatePlayerScoreLabel
// [0x00020102] 
struct ACTF_DDGRI_execCustomUpdatePlayerScoreLabel_Parms
{
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUILabel_ScoreIndicator*                     ScoreLabel;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.AllowDeathSpectatorMode
// [0x00020102] 
struct ACTF_DDGRI_execAllowDeathSpectatorMode_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.ModifyPlayerGroundSpeed
// [0x00020102] 
struct ACTF_DDGRI_execModifyPlayerGroundSpeed_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              theGroundSpeed;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelColor
// [0x00020102] 
struct ACTF_DDGRI_execGetGameOverLabelColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelColor
// [0x00020102] 
struct ACTF_DDGRI_execGetVictoryLabelColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.GetGameOverLabelString
// [0x00020102] 
struct ACTF_DDGRI_execGetGameOverLabelString_Parms
{
	class APlayerReplicationInfo*                      myPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_DDGRI.GetVictoryLabelString
// [0x00020102] 
struct ACTF_DDGRI_execGetVictoryLabelString_Parms
{
	class APlayerReplicationInfo*                      myPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_DDGRI.OverrideEndGameLabel
// [0x00020102] 
struct ACTF_DDGRI_execOverrideEndGameLabel_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.GetWinningPRI
// [0x00020102] 
struct ACTF_DDGRI_execGetWinningPRI_Parms
{
	class ADunDefPlayerReplicationInfo*                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerReplicationInfo*                   pInfo;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerReplicationInfo*             theMVP;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             bestScore;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.GetDataListEntries
// [0x00024102] 
struct ACTF_DDGRI_execGetDataListEntries_Parms
{
	int                                                dataSetType;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                FolderID;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	TArray< class UDataListEntryInterface* >           ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< class UDataListEntryInterface* >        altSet;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   pInfo;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamIcon
// [0x00424102] 
struct ACTF_DDGRI_execGetTeamIcon_Parms
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USurface*                                    theTeamIcon;                                      		// 0x0004 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	struct FColor                                      theTeamColor;                                     		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.CTF_DDGRI.IsTeamCompetitive
// [0x00020102] 
struct ACTF_DDGRI_execIsTeamCompetitive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.AllowChatBetween
// [0x00020102] 
struct ACTF_DDGRI_execAllowChatBetween_Parms
{
	class APlayerReplicationInfo*                      myPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      TheirPlayer;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamThatHasFlag
// [0x00020102] 
struct ACTF_DDGRI_execGetTeamThatHasFlag_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ACTF_Flag*                                aFlag;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.DoLevelVictory
// [0x00020102] 
struct ACTF_DDGRI_execDoLevelVictory_Parms
{
};

// Function DunDefSpecial.CTF_DDGRI.GiveWinningBonus
// [0x00020002] 
struct ACTF_DDGRI_execGiveWinningBonus_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             numOpposingPlayers;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerReplicationInfo*             ddPRI;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.WonGame
// [0x00024102] 
struct ACTF_DDGRI_execWonGame_Parms
{
	class ADunDefPlayerReplicationInfo*                theWinningPlayer;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                WinningTeamIndex;                                 		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.CheckAllReady
// [0x00020002] 
struct ACTF_DDGRI_execCheckAllReady_Parms
{
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.CheckReadyPlayers
// [0x00020002] 
struct ACTF_DDGRI_execCheckReadyPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             numReadyTeams;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.SetAllowCountDown
// [0x00020002] 
struct ACTF_DDGRI_execSetAllowCountDown_Parms
{
	unsigned long                                      setAllow : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.AllowGameCountDown
// [0x00020002] 
struct ACTF_DDGRI_execAllowGameCountDown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.SetGameReady
// [0x00020002] 
struct ACTF_DDGRI_execSetGameReady_Parms
{
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.SetGameTime
// [0x00020002] 
struct ACTF_DDGRI_execSetGameTime_Parms
{
	float                                              NewTime;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.UpdateGameTime
// [0x00020102] 
struct ACTF_DDGRI_execUpdateGameTime_Parms
{
};

// Function DunDefSpecial.CTF_DDGRI.Tick
// [0x00020902] ( FUNC_Event )
struct ACTF_DDGRI_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.FilloutTeams
// [0x00020102] 
struct ACTF_DDGRI_execFilloutTeams_Parms
{
	// int                                             TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.FlushTeams
// [0x00020102] 
struct ACTF_DDGRI_execFlushTeams_Parms
{
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.AutoBalanceTeams
// [0x00020102] 
struct ACTF_DDGRI_execAutoBalanceTeams_Parms
{
	// TArray< int >                                   levelTotals;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             smallestTeamIdx;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< class APlayerReplicationInfo* >         sortedPRI;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bWasInserted : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.CTF_DDGRI.AutoSortTeams
// [0x00020102] 
struct ACTF_DDGRI_execAutoSortTeams_Parms
{
	// int                                             TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.GetLowestBalancedTeam
// [0x00020102] 
struct ACTF_DDGRI_execGetLowestBalancedTeam_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             SmallestTotal;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             SmallestTeamIndex;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             currentTeamTotal;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.IncrementTeamScore
// [0x00020002] 
struct ACTF_DDGRI_execIncrementTeamScore_Parms
{
	int                                                ScoringTeam;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             newScore;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ACTF_DDGRI_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.CTF_DDGRI.ModifyCustomColors
// [0x00020002] 
struct ACTF_DDGRI_execModifyCustomColors_Parms
{
	class ADunDefPlayerController*                     aController;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.DrawExtraPlayerFloatingHUD
// [0x00820102] 
struct ACTF_DDGRI_execDrawExtraPlayerFloatingHUD_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefHUD*                                  H;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ScreenPos;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  objectIconWorldPos;                               		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           TextScale;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           distanceScale;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           cameraDistFromPos;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           theScale;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// class APawn*                                    aPawn;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamScores
// [0x00020102] 
struct ACTF_DDGRI_execGetTeamScores_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retValue;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             teamThatHasFlag;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             it;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bWasInserted : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FCTFTeamData >                   sortedTeams;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_DDGRI.Server_AddGRIHeroAbilities
// [0x00020002] 
struct ACTF_DDGRI_execServer_AddGRIHeroAbilities_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerAbility*                     abilityInstance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.GetColorString
// [0x00020102] 
struct ACTF_DDGRI_execGetColorString_Parms
{
	struct FColor                                      aColor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_DDGRI.GetTeamLists
// [0x00024102] 
struct ACTF_DDGRI_execGetTeamLists_Parms
{
	int                                                TeamOnlyCheck;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWantsReadyCheck : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retValue;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.GetCompetitivePlayerList
// [0x00020102] 
struct ACTF_DDGRI_execGetCompetitivePlayerList_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retValue;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.DestroyTowerOnOwnerLeft
// [0x00020002] 
struct ACTF_DDGRI_execDestroyTowerOnOwnerLeft_Parms
{
	class ADunDefTower*                                aTower;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.GetMaxTowerUnits
// [0x00020102] 
struct ACTF_DDGRI_execGetMaxTowerUnits_Parms
{
	class ADunDefPlayerReplicationInfo*                ddPRI;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.GetAltCurrentTowerUnits
// [0x00020102] 
struct ACTF_DDGRI_execGetAltCurrentTowerUnits_Parms
{
	class ADunDefPlayerReplicationInfo*                ddPRI;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.GetCurrentTowerUnits
// [0x00020102] 
struct ACTF_DDGRI_execGetCurrentTowerUnits_Parms
{
	class ADunDefPlayerReplicationInfo*                ddPRI;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.CanPlaceTowerUnitCost
// [0x00024102] 
struct ACTF_DDGRI_execCanPlaceTowerUnitCost_Parms
{
	int                                                Cost;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayerController*                     ForPlayer;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                Tower;                                            		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_DDGRI.RemovedTower
// [0x00020002] 
struct ACTF_DDGRI_execRemovedTower_Parms
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.AddedTower
// [0x00020002] 
struct ACTF_DDGRI_execAddedTower_Parms
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.RemovePlayerFromTeam
// [0x00020102] 
struct ACTF_DDGRI_execRemovePlayerFromTeam_Parms
{
	class ACTF_DDPRI*                                  aPRI;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TeamIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.AddPlayerToTeam
// [0x00020102] 
struct ACTF_DDGRI_execAddPlayerToTeam_Parms
{
	class ACTF_DDPRI*                                  aPRI;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TeamIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDGRI.RemoveFromAnyTeams
// [0x00020102] 
struct ACTF_DDGRI_execRemoveFromAnyTeams_Parms
{
	class ACTF_DDPRI*                                  aPRI;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.GetSmallestTeam
// [0x00020102] 
struct ACTF_DDGRI_execGetSmallestTeam_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             SmallestSize;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             SmallestTeamIndex;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDGRI.ExecReplicatedFunction
// [0x00024102] 
struct ACTF_DDGRI_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_DDPC.AdjustDamage
// [0x00424002] 
struct ACTF_DDPC_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_DDPC.PawnDied
// [0x00020002] 
struct ACTF_DDPC_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDPC.GiveFlag
// [0x00020102] 
struct ACTF_DDPC_execGiveFlag_Parms
{
	class ACTF_Flag*                                   newFlag;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDPC.SetIsReady
// [0x002240C2] 
struct ACTF_DDPC_execSetIsReady_Parms
{
	unsigned long                                      bIsReady : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_DDPC.SetDesiredTeam
// [0x002200C2] 
struct ACTF_DDPC_execSetDesiredTeam_Parms
{
	int                                                desiredTeam;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_DDPC.CreateHUD
// [0x00020002] 
struct ACTF_DDPC_execCreateHUD_Parms
{
};

// Function DunDefSpecial.CTF_DDPC.LocalAttemptSpawn
// [0x00020102] 
struct ACTF_DDPC_execLocalAttemptSpawn_Parms
{
	// class ACTF_DDPRI*                               ctfPRI;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ACTF_DDGRI*                               ctfGRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_DDPC.ServerRestartPlayer
// [0x002200C2] 
struct ACTF_DDPC_execServerRestartPlayer_Parms
{
};

// Function DunDefSpecial.CTF_DDPC.ShowTeamSelectionUI
// [0x00020000] 
struct ACTF_DDPC_execShowTeamSelectionUI_Parms
{
};

// Function DunDefSpecial.CTD_DDGRI.AllowedToTeleport
// [0x00020002] 
struct ACTD_DDGRI_execAllowedToTeleport_Parms
{
	class APawn*                                       Teleportee;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTD_DDGRI.DoLevelVictory
// [0x00020102] 
struct ACTD_DDGRI_execDoLevelVictory_Parms
{
};

// Function DunDefSpecial.CTD_DDGRI.Tick
// [0x00020902] ( FUNC_Event )
struct ACTD_DDGRI_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTD_DDGRI.GetSkipBuildPhaseString
// [0x00020102] 
struct ACTD_DDGRI_execGetSkipBuildPhaseString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retValue;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             localTeam;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTD_DDGRI.DrawExtraPlayerFloatingHUD
// [0x00020100] 
struct ACTD_DDGRI_execDrawExtraPlayerFloatingHUD_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefHUD*                                  H;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTD_DDGRI.Server_AddGRIHeroAbilities
// [0x00020000] 
struct ACTD_DDGRI_execServer_AddGRIHeroAbilities_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTD_DDGRI.DestroyTowerOnOwnerLeft
// [0x00020002] 
struct ACTD_DDGRI_execDestroyTowerOnOwnerLeft_Parms
{
	class ADunDefTower*                                aTower;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTD_DDGRI.AllowActivatingCrystal
// [0x00020102] 
struct ACTD_DDGRI_execAllowActivatingCrystal_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTD_DDGRI.SetGameReady
// [0x00020002] 
struct ACTD_DDGRI_execSetGameReady_Parms
{
};

// Function DunDefSpecial.UI_TeamSelect.OnInterceptedInputKey
// [0x00420002] 
struct UUI_TeamSelect_execOnInterceptedInputKey_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.UI_TeamSelect.NotifyWidgetClicked
// [0x00020802] ( FUNC_Event )
struct UUI_TeamSelect_eventNotifyWidgetClicked_Parms
{
	class UUIObject*                                   Widget;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ACTF_DDGRI*                               ctfGRI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ACTF_DDPC*                                PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             NewTeam;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.UI_TeamSelect.Update
// [0x00020002] 
struct UUI_TeamSelect_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ACTF_DDGRI*                               ctfGRI;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ACTF_DDPC*                                PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.UI_TeamSelect.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUI_TeamSelect_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.CTF_GameInfo.AdjustDTDamage
// [0x00424002] 
struct ACTF_GameInfo_execAdjustDTDamage_Parms
{
	class ADunDefDamageableTarget*                     forDT;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inDamage;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0028 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_GameInfo.AdjustPawnDamage
// [0x00424002] 
struct ACTF_GameInfo_execAdjustPawnDamage_Parms
{
	class ADunDefPawn*                                 forPawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                inDamage;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0028 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_GameInfo.GetPlayerTeamForStart
// [0x00024002] 
struct ACTF_GameInfo_execGetPlayerTeamForStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InTeam;                                           		// 0x0004 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0005 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_GameInfo.CheckScore
// [0x00020002] 
struct ACTF_GameInfo_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_GameInfo.ScoreKill
// [0x00020002] 
struct ACTF_GameInfo_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_GameInfo.ScoreObjective
// [0x00020002] 
struct ACTF_GameInfo_execScoreObjective_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             TeamCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_GameInfo.AddObjectiveScore
// [0x00020002] 
struct ACTF_GameInfo_execAddObjectiveScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_GameInfo.PlayerReplicationInfoInitialized
// [0x00020002] 
struct ACTF_GameInfo_execPlayerReplicationInfoInitialized_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_GameInfo.DoPlayerLeaving
// [0x00024002] 
struct ACTF_GameInfo_execDoPlayerLeaving_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceLocal : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_GameInfo.SpawnPlayerController
// [0x00020002] 
struct ACTF_GameInfo_execSpawnPlayerController_Parms
{
	struct FVector                                     SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTD_GameInfo.WaveSpawnerCreateEnemy
// [0x00020002] 
struct ACTD_GameInfo_execWaveSpawnerCreateEnemy_Parms
{
	class UDunDef_SeqAct_EnemyWaveSpawner*             aSpawner;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                EnemyTemplate;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefEnemy*                             anEnemy;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTD_GameInfo.RatePlayerStart
// [0x00020002] 
struct ACTD_GameInfo_execRatePlayerStart_Parms
{
	class APlayerStart*                                P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController*                  ddpc;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTD_GameInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ACTD_GameInfo_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.CTF_FlagBase.PreventTowerAtPoint
// [0x00020102] 
struct ACTF_FlagBase_execPreventTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              towerRadius;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_FlagBase.AllowTowerAtPoint
// [0x00020102] 
struct ACTF_FlagBase_execAllowTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_FlagBase.CheckAllowance
// [0x00020102] 
struct ACTF_FlagBase_execCheckAllowance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.CTF_FlagBase.DrawMiniMapIcon
// [0x00820102] 
struct ACTF_FlagBase_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  MapPos;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FColor                                   iconColor;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_FlagBase.SpawnFlag
// [0x00020002] 
struct ACTF_FlagBase_execSpawnFlag_Parms
{
};

// Function DunDefSpecial.CTF_FlagBase.FlagTaken
// [0x00020102] 
struct ACTF_FlagBase_execFlagTaken_Parms
{
};

// Function DunDefSpecial.CTF_FlagBase.FlagReturned
// [0x00020002] 
struct ACTF_FlagBase_execFlagReturned_Parms
{
};

// Function DunDefSpecial.CTF_FlagBase.DoCaptureEffects
// [0x00020102] 
struct ACTF_FlagBase_execDoCaptureEffects_Parms
{
};

// Function DunDefSpecial.CTF_FlagBase.ScoreFlag
// [0x00020002] 
struct ACTF_FlagBase_execScoreFlag_Parms
{
	class ACTF_Flag*                                   scoredFlag;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_FlagBase.Touch
// [0x00020802] ( FUNC_Event )
struct ACTF_FlagBase_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ACTF_DDPC*                                PC;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            DDP;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_FlagBase.InitBase
// [0x00820102] 
struct ACTF_FlagBase_execInitBase_Parms
{
	// struct FVector                                  TeamColor;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FLinearColor                             TeamLinearColor;                                  		// 0x000C (0x0010) [0x0000000000000000]              
	// class APlayerStart*                             theStart;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// class ADunDefTeamTowerVolume*                   TheVolume;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                zMIC;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_FlagBase.SetTeamIndex
// [0x00020002] 
struct ACTF_FlagBase_execSetTeamIndex_Parms
{
	int                                                NewTeam;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_FlagBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ACTF_FlagBase_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.CTF_FlagBase.ExecReplicatedFunction
// [0x00024102] 
struct ACTF_FlagBase_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_FlagBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ACTF_FlagBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.CTF_MultiFlag_GameInfo.RatePlayerStart
// [0x00020002] 
struct ACTF_MultiFlag_GameInfo_execRatePlayerStart_Parms
{
	class APlayerStart*                                P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController*                  ddpc;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_MultiFlag_GameInfo.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ACTF_MultiFlag_GameInfo_eventPostBeginPlay_Parms
{
	// class ACTF_FlagBase*                            currentBase;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< struct FCTFTeamData >                   TeamDatas;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             randIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTeamTowerVolume.SetMyTeam
// [0x00020102] 
struct ADunDefTeamTowerVolume_execSetMyTeam_Parms
{
	int                                                NewTeam;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTeamTowerVolume.Destroyed
// [0x00020102] 
struct ADunDefTeamTowerVolume_execDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefTeamTowerVolume.PostBeginPlay
// [0x00020102] 
struct ADunDefTeamTowerVolume_execPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefTeamTowerVolume.AllowTowerAtPoint
// [0x00020102] 
struct ADunDefTeamTowerVolume_execAllowTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTeamTowerVolume.PreventTowerAtPoint
// [0x00020102] 
struct ADunDefTeamTowerVolume_execPreventTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              towerRadius;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTeamTowerVolume.CheckAllowance
// [0x00020102] 
struct ADunDefTeamTowerVolume_execCheckAllowance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTeamTowerVolume.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefTeamTowerVolume_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.CTF_UIGameStats.GetUITeamLists
// [0x00420102] 
struct UCTF_UIGameStats_execGetUITeamLists_Parms
{
	int                                                TeamOnlyCheck;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     tList;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     kList;                                            		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     sList;                                            		// 0x001C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// TArray< class APlayerReplicationInfo* >         PRIArray;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class APlayerReplicationInfo* >         sortedPRI;                                        		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FString                                  DrawColorString;                                  		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bLocalPlayer : 1;                                 		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bWasInserted : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ACTF_DDGRI*                               ddGRI;                                            		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.CTF_UIGameStats.GetColorString
// [0x00020102] 
struct UCTF_UIGameStats_execGetColorString_Parms
{
	struct FColor                                      aColor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_UIGameStats.UpdateTeamPanels
// [0x00020102] 
struct UCTF_UIGameStats_execUpdateTeamPanels_Parms
{
	// class ACTF_DDGRI*                               ctfGRI;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  TeamList;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  KillList;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ScoreList;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.CTF_UIGameStats.CustomInit
// [0x00024002] 
struct UCTF_UIGameStats_execCustomInit_Parms
{
	int                                                CustomInitIndex;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqAct_AddPlatformToVerticalTowerMover_eventActivated_Parms
{
	// class USeqVar_Object*                           theTowerMover;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USeqVar_Object*                           TheActor;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.Tick
// [0x00020802] ( FUNC_Event )
struct ADunDef_VerticalTowerMover_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             iter;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   inCombatPhase : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.MoveTowers
// [0x00A200C2] 
struct ADunDef_VerticalTowerMover_execMoveTowers_Parms
{
	struct FPlatformInfo                               Info;                                             		// 0x0000 (0x0014) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             iter;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Loc;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0024 (0x000C) [0x0000000000000000]              
	// class ADunDefTower*                             Tower;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.RebuildTowerCache
// [0x00820002] 
struct ADunDef_VerticalTowerMover_execRebuildTowerCache_Parms
{
	struct FPlatformInfo                               thePlatformInfo;                                  		// 0x0000 (0x0014) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FTowerInfo >                        ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< struct FTowerInfo >                     Cache;                                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FTowerInfo                               theTowerInfo;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FVector                                  BoxExtent;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// class ADunDefTower*                             Tower;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             iter;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDef_VerticalTowerMover.AddInterpActor
// [0x00820002] 
struct ADunDef_VerticalTowerMover_execAddInterpActor_Parms
{
	class AInterpActor*                                TheActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FPlatformInfo                            Info;                                             		// 0x0004 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqAct_CheckToUnlockAchievements_eventActivated_Parms
{
};

// Function DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqAct_CTDWinGameForTeam_eventActivated_Parms
{
};

// Function DunDefSpecial.DunDef_SeqAct_GetMVP.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqAct_GetMVP_eventActivated_Parms
{
	// class USeqVar_Object*                           outputVar;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    theMVP;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController*                  PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             bestScore;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqAct_HideGlobalUIScene_eventActivated_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.StaticGetTowerScale
// [0x00022002] 
struct ADunDefTower_TripWire_execStaticGetTowerScale_Parms
{
	class UDunDefHero*                                 hero;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                Tower;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TowerRangeScaler;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.AllowAbilityMove
// [0x00020102] 
struct ADunDefTower_TripWire_execAllowAbilityMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.TransferTowerOwnership
// [0x00020002] 
struct ADunDefTower_TripWire_execTransferTowerOwnership_Parms
{
	class APawn*                                       toPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.CheckAssociateWithHero
// [0x00020002] 
struct ADunDefTower_TripWire_execCheckAssociateWithHero_Parms
{
	class UDunDefHero*                                 hero;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPawn*                                 pawnInstigator;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayerController*                     PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.CanDetonate
// [0x00020102] 
struct ADunDefTower_TripWire_execCanDetonate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.HasCharges
// [0x00020102] 
struct ADunDefTower_TripWire_execHasCharges_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetSellWorth
// [0x00020102] 
struct ADunDefTower_TripWire_execGetSellWorth_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_TripWire_eventGetEnemyTargetingDesirability_Parms
{
	class AEngineNativeDunDefAIController*             forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawMiniMapIcon
// [0x00820102] 
struct ADunDefTower_TripWire_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  PlayerMapPos;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  childPos;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           healthPercent;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           Opacity;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.HealDetonationStyle
// [0x00024102] 
struct ADunDefTower_TripWire_execHealDetonationStyle_Parms
{
	int                                                HealAmt;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowFloatingNumbers : 1;                         		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAlternateActor
// [0x00020102] 
struct ADunDefTower_TripWire_execGetAlternateActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.IsMultiActorTower
// [0x00020102] 
struct ADunDefTower_TripWire_execIsMultiActorTower_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawUpgradeOverlay
// [0x00020102] 
struct ADunDefTower_TripWire_execDrawUpgradeOverlay_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Opacity;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      upgradeOverlayColor;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetGlobalTowerHealthMultiplier
// [0x00020102] 
struct ADunDefTower_TripWire_execGetGlobalTowerHealthMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.PerformFullHeal
// [0x00020002] 
struct ADunDefTower_TripWire_execPerformFullHeal_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.SetRadiusScale
// [0x00020100] 
struct ADunDefTower_TripWire_execSetRadiusScale_Parms
{
	float                                              theRadiusScale;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawTowerToolTipStats
// [0x00420102] 
struct ADunDefTower_TripWire_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetToolTipText
// [0x00020102] 
struct ADunDefTower_TripWire_execGetToolTipText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_TripWire.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefTower_TripWire_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UDunDefHero*                              hero;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           linearHealthMult;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.ScaleHealthMultiplier
// [0x00020002] 
struct ADunDefTower_TripWire_execScaleHealthMultiplier_Parms
{
	// float                                           linearHealthMult;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportSummoned
// [0x00020102] 
struct ADunDefTower_TripWire_execReportSummoned_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateTowerRatingMaterial
// [0x00020102] 
struct ADunDefTower_TripWire_execUpdateTowerRatingMaterial_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.NeedsRepair
// [0x00024102] 
struct ADunDefTower_TripWire_execNeedsRepair_Parms
{
	unsigned long                                      requireFullHealth : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetHealthPercent
// [0x00020102] 
struct ADunDefTower_TripWire_execGetHealthPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.HealDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_TripWire_eventHealDamage_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   HealSuccess : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefTower_TripWire.HealPctOfMaxHealth
// [0x00024002] 
struct ADunDefTower_TripWire_execHealPctOfMaxHealth_Parms
{
	float                                              HealPct;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowFloatingNumbers : 1;                         		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             healthAmt;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             oldHealth;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             newlifeEnergy;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.GetHealth
// [0x00024102] 
struct ADunDefTower_TripWire_execGetHealth_Parms
{
	unsigned long                                      bGetMax : 1;                                      		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.IncrementRepair
// [0x00020002] 
struct ADunDefTower_TripWire_execIncrementRepair_Parms
{
	float                                              CurrentMana;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CostOfIncrement;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           potentialHealth;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           TimeOvershotReduction;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           theTimeOfTotalRepair;                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.IncrementDetonationRepair
// [0x00020002] 
struct ADunDefTower_TripWire_execIncrementDetonationRepair_Parms
{
	float                                              CurrentMana;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CostOfIncrement;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           potentialHealth;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           TimeOvershotReduction;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           theTimeOfTotalRepair;                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCurrentRepairPercentage
// [0x00024102] 
struct ADunDefTower_TripWire_execGetCurrentRepairPercentage_Parms
{
	float                                              StartRepairTime;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              RepairSpeed;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.StartRepair
// [0x00020102] 
struct ADunDefTower_TripWire_execStartRepair_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeToRepair
// [0x00020102] 
struct ADunDefTower_TripWire_execGetTimeToRepair_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCostToRepair
// [0x00020102] 
struct ADunDefTower_TripWire_execGetCostToRepair_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeOfTotalRepair
// [0x00020102] 
struct ADunDefTower_TripWire_execGetTimeOfTotalRepair_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.Died
// [0x00020002] 
struct ADunDefTower_TripWire_execDied_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportedDeath
// [0x00020102] 
struct ADunDefTower_TripWire_execReportedDeath_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ReportDeath
// [0x00020002] 
struct ADunDefTower_TripWire_execReportDeath_Parms
{
	// struct FName                                    tPathName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.DecreaseLifeEnergy
// [0x00020102] 
struct ADunDefTower_TripWire_execDecreaseLifeEnergy_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FName                                    tPathName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.ContinueDrawingToolTip
// [0x00020102] 
struct ADunDefTower_TripWire_execContinueDrawingToolTip_Parms
{
	unsigned long                                      ContinueDrawing : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawToolTip
// [0x00824102] 
struct ADunDefTower_TripWire_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosX;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  childCoords;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.Sell
// [0x00020002] 
struct ADunDefTower_TripWire_execSell_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_TripWire_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.PlaySellFX
// [0x00020102] 
struct ADunDefTower_TripWire_execPlaySellFX_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.Detonate
// [0x00024102] 
struct ADunDefTower_TripWire_execDetonate_Parms
{
	int                                                SetDetonationsNumber;                             		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildEndDetonate
// [0x00020102] 
struct ADunDefTower_TripWire_execChildEndDetonate_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDetonate
// [0x00020102] 
struct ADunDefTower_TripWire_execChildDetonate_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.RemoveStunnedActor
// [0x00024102] 
struct ADunDefTower_TripWire_execRemoveStunnedActor_Parms
{
	class AActor*                                      stunRemoval;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                removalIndex;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDontReplicate : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.CanStun
// [0x00020102] 
struct ADunDefTower_TripWire_execCanStun_Parms
{
	class ADunDefEnemy*                                stunTest;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.AddStunnedActor
// [0x00820102] 
struct ADunDefTower_TripWire_execAddStunnedActor_Parms
{
	class ADunDefEnemy*                                newStun;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBeamTrippers                               ReturnValue;                                      		// 0x0004 (0x001C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FBeamTrippers                            newStunnedActor;                                  		// 0x0020 (0x001C) [0x0000000000000000]              
	// struct FVector                                  SocketLoc;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FName                                    SocketName;                                       		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.ClearBeamTrippers
// [0x00020102] 
struct ADunDefTower_TripWire_execClearBeamTrippers_Parms
{
	unsigned long                                      bFullClear : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackDuration
// [0x00020102] 
struct ADunDefTower_TripWire_execGetAttackDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ResetTrip
// [0x00020102] 
struct ADunDefTower_TripWire_execResetTrip_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DeactivateTrip
// [0x00024102] 
struct ADunDefTower_TripWire_execDeactivateTrip_Parms
{
	unsigned long                                      bShutDownEffects : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateTrip
// [0x00020102] 
struct ADunDefTower_TripWire_execActivateTrip_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DrawMyHUD
// [0x00020102] 
struct ADunDefTower_TripWire_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTrapDamageMultiplier
// [0x00020102] 
struct ADunDefTower_TripWire_execGetTrapDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetDamageMultiplier
// [0x00020102] 
struct ADunDefTower_TripWire_execGetDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackDamage
// [0x00020102] 
struct ADunDefTower_TripWire_execGetAttackDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetStunTime
// [0x00020102] 
struct ADunDefTower_TripWire_execGetStunTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.RemoveTowerBooster
// [0x00024102] 
struct ADunDefTower_TripWire_execRemoveTowerBooster_Parms
{
	class UTowerBoosterInterface*                      aBooster;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                indexOverride;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.AddTowerBooster
// [0x00020102] 
struct ADunDefTower_TripWire_execAddTowerBooster_Parms
{
	class UTowerBoosterInterface*                      aBooster;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateStuns
// [0x00020002] 
struct ADunDefTower_TripWire_execUpdateStuns_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             EnemyTrip;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.GetAttackRate
// [0x00020102] 
struct ADunDefTower_TripWire_execGetAttackRate_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.DoTracing
// [0x00824102] 
struct ADunDefTower_TripWire_execDoTracing_Parms
{
	float                                              dt;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceDamage : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class AActor*                                   Traced;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  beamStartLoc;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FBeamTrippers                            newTripper;                                       		// 0x003C (0x001C) [0x0000000000000000]              
	// int                                             dmgAmount;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           attackTime;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.UnTouch
// [0x00020900] ( FUNC_Event )
struct ADunDefTower_TripWire_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.Touch
// [0x00020900] ( FUNC_Event )
struct ADunDefTower_TripWire_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.SetDetonateTimer
// [0x00020102] 
struct ADunDefTower_TripWire_execSetDetonateTimer_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.GetEndPoint
// [0x00020102] 
struct ADunDefTower_TripWire_execGetEndPoint_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetBeamStartLoc
// [0x00020102] 
struct ADunDefTower_TripWire_execGetBeamStartLoc_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.UpdateMovementBeams
// [0x00820102] 
struct ADunDefTower_TripWire_execUpdateMovementBeams_Parms
{
	// struct FVector                                  X;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Dir;                                              		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_TripWire_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ClientSingleSetMovement
// [0x00024102] 
struct ADunDefTower_TripWire_execClientSingleSetMovement_Parms
{
	struct FVector                                     endLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    endRot;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldCollideWorld : 1;                          		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ForceSingleMove
// [0x00024102] 
struct ADunDefTower_TripWire_execForceSingleMove_Parms
{
	struct FVector                                     NewLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    NewRot;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldCollideWorld : 1;                          		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bSuccess : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefTower_TripWire.DisableSingleMovementReplication
// [0x00020002] 
struct ADunDefTower_TripWire_execDisableSingleMovementReplication_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.EnableSingleMovementReplicationTimer
// [0x00020002] 
struct ADunDefTower_TripWire_execEnableSingleMovementReplicationTimer_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.DisableMovementReplication
// [0x00020002] 
struct ADunDefTower_TripWire_execDisableMovementReplication_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.EnableMovementReplicationTimer
// [0x00020002] 
struct ADunDefTower_TripWire_execEnableMovementReplicationTimer_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.SetDUCost
// [0x00020102] 
struct ADunDefTower_TripWire_execSetDUCost_Parms
{
	int                                                newDUCost;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetNextUpgradeLevel
// [0x00024102] 
struct ADunDefTower_TripWire_execGetNextUpgradeLevel_Parms
{
	unsigned long                                      bForceBeyondMaxUpgrade : 1;                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTimeToUpgradeTower
// [0x00020102] 
struct ADunDefTower_TripWire_execGetTimeToUpgradeTower_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCostToUpgradeTower
// [0x00020102] 
struct ADunDefTower_TripWire_execGetCostToUpgradeTower_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.GetTowerUpgradeLevelStatModifier
// [0x00020102] 
struct ADunDefTower_TripWire_execGetTowerUpgradeLevelStatModifier_Parms
{
	unsigned char                                      valueType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDoUpgrade
// [0x00020102] 
struct ADunDefTower_TripWire_execChildDoUpgrade_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ChildDoDowngrade
// [0x00020102] 
struct ADunDefTower_TripWire_execChildDoDowngrade_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DoDowngrade
// [0x00020102] 
struct ADunDefTower_TripWire_execDoDowngrade_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.DoUpgrade
// [0x00020102] 
struct ADunDefTower_TripWire_execDoUpgrade_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.CanBeUpgraded
// [0x00020102] 
struct ADunDefTower_TripWire_execCanBeUpgraded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ShutDownBeamEffects
// [0x00020102] 
struct ADunDefTower_TripWire_execShutDownBeamEffects_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateBeamEffects
// [0x00020102] 
struct ADunDefTower_TripWire_execActivateBeamEffects_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ActivateBeam
// [0x00020102] 
struct ADunDefTower_TripWire_execActivateBeam_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.GetBeamPoint
// [0x00820102] 
struct ADunDefTower_TripWire_execGetBeamPoint_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  beamLoc;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 beamRot;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.GetCollisionPoint
// [0x00020100] 
struct ADunDefTower_TripWire_execGetCollisionPoint_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripWire.SetPlacementPoints
// [0x00820002] 
struct ADunDefTower_TripWire_execSetPlacementPoints_Parms
{
	TArray< struct FVector >                           SpawnPoints;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class ADunDefTower*                                NodeTemplate;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefTower_TripWire*                    newChildNode;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripWire.InitializeForInstigator
// [0x00020002] 
struct ADunDefTower_TripWire_execInitializeForInstigator_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.SetUpCollisionMesh
// [0x00020100] 
struct ADunDefTower_TripWire_execSetUpCollisionMesh_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.InitalizeStatObject
// [0x00020102] 
struct ADunDefTower_TripWire_execInitalizeStatObject_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.OnDestroy_RemoveFromTargetableList
// [0x00020002] 
struct ADunDefTower_TripWire_execOnDestroy_RemoveFromTargetableList_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.OnPostBeginPlay_AddToTargetableList
// [0x00020002] 
struct ADunDefTower_TripWire_execOnPostBeginPlay_AddToTargetableList_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_TripWire_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.SetUseHealthBarMat
// [0x00020102] 
struct ADunDefTower_TripWire_execSetUseHealthBarMat_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripWire.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefTower_TripWire_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripWire.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_TripWire_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DisableAbilityMove
// [0x002200C2] 
struct ADunDefTower_TripPhysical_execDisableAbilityMove_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.AllowAbilityMove
// [0x00020102] 
struct ADunDefTower_TripPhysical_execAllowAbilityMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ClientDisableMovementReplication
// [0x00020102] 
struct ADunDefTower_TripPhysical_execClientDisableMovementReplication_Parms
{
	struct FVector                                     endedLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.BaseChange
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_TripPhysical_eventBaseChange_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ForceMoveActor
// [0x00820102] 
struct ADunDefTower_TripPhysical_execForceMoveActor_Parms
{
	class AActor*                                      Mover;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLoc;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  tracePoint;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  beamPoint;                                        		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  centerPoint;                                      		// 0x0050 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetSelectionLocation
// [0x00C20102] 
struct ADunDefTower_TripPhysical_execGetSelectionLocation_Parms
{
	class AActor*                                      wantsLocation;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     bestLoc;                                          		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  BoxExtent;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ClosestPointOnBox;                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ClosestPointOnPrimitive;                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  myLoc;                                            		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IsPhysicalTower
// [0x00020102] 
struct ADunDefTower_TripPhysical_execIsPhysicalTower_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawMiniMapIcon
// [0x00820102] 
struct ADunDefTower_TripPhysical_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  PlayerMapPos;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 tileRotation;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           healthPercent;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  childPos;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           lstDmgTime;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           Opacity;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UpdateMovementBeams
// [0x00820102] 
struct ADunDefTower_TripPhysical_execUpdateMovementBeams_Parms
{
	// struct FVector                                  X;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  beamVect;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// class ADunDefTower_TripPhysical*                myChild;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 Dir;                                              		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IsPreviousToolTipActor
// [0x00020102] 
struct ADunDefTower_TripPhysical_execIsPreviousToolTipActor_Parms
{
	class ADunDefPlayerController*                     ownerCheck;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UpdateDamageFlashing
// [0x00020102] 
struct ADunDefTower_TripPhysical_execUpdateDamageFlashing_Parms
{
	// float                                           flashAmount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.PerformFullHeal
// [0x00020002] 
struct ADunDefTower_TripPhysical_execPerformFullHeal_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.HealDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_TripPhysical_eventHealDamage_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.IncrementRepair
// [0x00020002] 
struct ADunDefTower_TripPhysical_execIncrementRepair_Parms
{
	float                                              CurrentMana;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCurrentRepairPercentage
// [0x00024102] 
struct ADunDefTower_TripPhysical_execGetCurrentRepairPercentage_Parms
{
	float                                              StartRepairTime;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              RepairSpeed;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.StartRepair
// [0x00020102] 
struct ADunDefTower_TripPhysical_execStartRepair_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeToRepair
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetTimeToRepair_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCostToRepair
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetCostToRepair_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTimeOfTotalRepair
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetTimeOfTotalRepair_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetToolTipText
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetToolTipText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetGlobalTowerHealthMultiplier
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetGlobalTowerHealthMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.Bump
// [0x00020802] ( FUNC_Event )
struct ADunDefTower_TripPhysical_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetOverrideTargetComponent
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetOverrideTargetComponent_Parms
{
	class UPrimitiveComponent*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawToolTip
// [0x00024102] 
struct ADunDefTower_TripPhysical_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosX;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetHealthPercent
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetHealthPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetHealth
// [0x00024102] 
struct ADunDefTower_TripPhysical_execGetHealth_Parms
{
	unsigned long                                      bGetMax : 1;                                      		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.AddHealth
// [0x00024002] 
struct ADunDefTower_TripPhysical_execAddHealth_Parms
{
	int                                                howMuch;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDontDisplayFloatingNumber : 1;                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             oldHealth;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeamEffects
// [0x00020102] 
struct ADunDefTower_TripPhysical_execActivateBeamEffects_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ShutDownBeamEffects
// [0x00020102] 
struct ADunDefTower_TripPhysical_execShutDownBeamEffects_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateTrip
// [0x00020102] 
struct ADunDefTower_TripPhysical_execActivateTrip_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.DrawMyHUD
// [0x00020102] 
struct ADunDefTower_TripPhysical_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.NeedsRepair
// [0x00024102] 
struct ADunDefTower_TripPhysical_execNeedsRepair_Parms
{
	unsigned long                                      requireFullHealth : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SubtractHealth
// [0x00020002] 
struct ADunDefTower_TripPhysical_execSubtractHealth_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefTower_TripPhysical_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetAttackRangeOffset
// [0x00820002] 
struct ADunDefTower_TripPhysical_execGetAttackRangeOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FBox                                     BBox;                                             		// 0x0004 (0x001C) [0x0000000000000000]              
	// float                                           rad;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           H;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTargetingLocation
// [0x00024102] 
struct ADunDefTower_TripPhysical_execGetTargetingLocation_Parms
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerDamageMultiplier
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetPhysicalTowerDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPhysicalTowerHealthMultiplier
// [0x00020002] 
struct ADunDefTower_TripPhysical_execGetPhysicalTowerHealthMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetAuraDamageMultiplier
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetAuraDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.UseForTowerSelectionPassThrough
// [0x00020102] 
struct ADunDefTower_TripPhysical_execUseForTowerSelectionPassThrough_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetTowerTargetingDesirability
// [0x00020102] 
struct ADunDefTower_TripPhysical_execGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetPlayerTargetingDesirability
// [0x00024102] 
struct ADunDefTower_TripPhysical_execGetPlayerTargetingDesirability_Parms
{
	class ADunDefPlayerController*                     forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               ForPlayer;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Dist;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivatePlaneBeam
// [0x00820102] 
struct ADunDefTower_TripPhysical_execActivatePlaneBeam_Parms
{
	// struct FVector                                  beamVect;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ActivateBeam
// [0x00020100] 
struct ADunDefTower_TripPhysical_execActivateBeam_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ModifyTranslation
// [0x00820102] 
struct ADunDefTower_TripPhysical_execModifyTranslation_Parms
{
	// struct FVector                                  tempLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewTranslation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FMatrix                                  theMat;                                           		// 0x0020 (0x0040) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SetUpCollisionMesh
// [0x00020102] 
struct ADunDefTower_TripPhysical_execSetUpCollisionMesh_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetCollisionPoint
// [0x00820102] 
struct ADunDefTower_TripPhysical_execGetCollisionPoint_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  beamLoc;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 beamRot;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.GetSecondBeamPoint
// [0x00820102] 
struct ADunDefTower_TripPhysical_execGetSecondBeamPoint_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Loc;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ScaleInBeams
// [0x00020100] 
struct ADunDefTower_TripPhysical_execScaleInBeams_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.StartBeams
// [0x00020100] 
struct ADunDefTower_TripPhysical_execStartBeams_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_TripPhysical_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripPhysical.SetPlacementPoints
// [0x00020002] 
struct ADunDefTower_TripPhysical_execSetPlacementPoints_Parms
{
	TArray< struct FVector >                           SpawnPoints;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class ADunDefTower*                                NodeTemplate;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripPhysical.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_TripPhysical_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.DrawMiniMapIcon
// [0x00820102] 
struct ADunDefPlayer_Summoner_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  cameraPos;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetPhaseShiftMaterials
// [0x00020102] 
struct ADunDefPlayer_Summoner_execGetPhaseShiftMaterials_Parms
{
	TArray< class UMaterialInstanceConstant* >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.IssuedCommand
// [0x00020102] 
struct ADunDefPlayer_Summoner_execIssuedCommand_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSellTowerEmitter
// [0x00020102] 
struct ADunDefPlayer_Summoner_execGetSellTowerEmitter_Parms
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetTrapDetonationEmitter
// [0x00020102] 
struct ADunDefPlayer_Summoner_execGetTrapDetonationEmitter_Parms
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetUpgradingWeaponEmitter
// [0x00020102] 
struct ADunDefPlayer_Summoner_execGetUpgradingWeaponEmitter_Parms
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetWeaponRepairEmitter
// [0x00020102] 
struct ADunDefPlayer_Summoner_execGetWeaponRepairEmitter_Parms
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetHealingWeaponEmitter
// [0x00020102] 
struct ADunDefPlayer_Summoner_execGetHealingWeaponEmitter_Parms
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSummoningTowerEmitter
// [0x00020102] 
struct ADunDefPlayer_Summoner_execGetSummoningTowerEmitter_Parms
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StopSpellEmitter
// [0x00020102] 
struct ADunDefPlayer_Summoner_execStopSpellEmitter_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StartSpellEmitter
// [0x00824102] 
struct ADunDefPlayer_Summoner_execStartSpellEmitter_Parms
{
	class ADunDefEmitterSpawnable*                     Template;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      DontSetAsPrimaryEffect : 1;                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      IsSpawnEffect : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForceSpawnOnWeapon : 1;                          		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  SocketLoc;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  TheEmitter;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowDropPickups
// [0x00020102] 
struct ADunDefPlayer_Summoner_execAllowDropPickups_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetOwnerNoSee
// [0x00024102] 
struct ADunDefPlayer_Summoner_execSetOwnerNoSee_Parms
{
	unsigned long                                      ownerNoSee : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ownerNoSeeWeapon : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.Died
// [0x00020002] 
struct ADunDefPlayer_Summoner_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
struct ADunDefPlayer_Summoner_eventGetEnemyTargetingDesirability_Parms
{
	class AEngineNativeDunDefAIController*             forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefPlayer_Summoner_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.PhaseScaleDown
// [0x00020802] ( FUNC_Event )
struct ADunDefPlayer_Summoner_eventPhaseScaleDown_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.UsedAbility
// [0x00020002] 
struct ADunDefPlayer_Summoner_execUsedAbility_Parms
{
	class ADunDefPlayerAbility*                        ability;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.CheckForTokens
// [0x00020102] 
struct ADunDefPlayer_Summoner_execCheckForTokens_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowFamiliarAbilities
// [0x00020102] 
struct ADunDefPlayer_Summoner_execAllowFamiliarAbilities_Parms
{
	class UHeroEquipment_Familiar*                     askingFamiliar;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AttachAllEquipment
// [0x00020102] 
struct ADunDefPlayer_Summoner_execAttachAllEquipment_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.DetachAllEquipment
// [0x00020102] 
struct ADunDefPlayer_Summoner_execDetachAllEquipment_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetPhased
// [0x00020102] 
struct ADunDefPlayer_Summoner_execSetPhased_Parms
{
	unsigned long                                      bNewPhaseState : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AllowEquipmentAttachment
// [0x00020102] 
struct ADunDefPlayer_Summoner_execAllowEquipmentAttachment_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_Summoner_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StopFire
// [0x00020100] 
struct ADunDefPlayer_Summoner_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.StartFire
// [0x00020102] 
struct ADunDefPlayer_Summoner_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerAbility*                     activateAbility;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Summoner.GetSelectedTowers
// [0x00020102] 
struct ADunDefPlayer_Summoner_execGetSelectedTowers_Parms
{
	TArray< class ADunDefTower_SummonEnemy* >          ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.RemoveSelectedTower
// [0x00020102] 
struct ADunDefPlayer_Summoner_execRemoveSelectedTower_Parms
{
	class ADunDefTower_SummonEnemy*                    RemoveTower;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ServerRemoveSelectedTower
// [0x002200C2] 
struct ADunDefPlayer_Summoner_execServerRemoveSelectedTower_Parms
{
	class ADunDefTower_SummonEnemy*                    RemoveTower;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.RemoveAllSelectedTowers
// [0x00020102] 
struct ADunDefPlayer_Summoner_execRemoveAllSelectedTowers_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Summoner.HasSelectedTower
// [0x00020102] 
struct ADunDefPlayer_Summoner_execHasSelectedTower_Parms
{
	class ADunDefTower_SummonEnemy*                    chkTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTowerGroup
// [0x00020102] 
struct ADunDefPlayer_Summoner_execAddSelectedTowerGroup_Parms
{
	TArray< class ADunDefTower_SummonEnemy* >          newTowers;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ADunDefTower_SummonEnemy*                 newTower;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ServerAddSelectedTower
// [0x002200C2] 
struct ADunDefPlayer_Summoner_execServerAddSelectedTower_Parms
{
	class ADunDefTower_SummonEnemy*                    newTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.AddSelectedTower
// [0x00020102] 
struct ADunDefPlayer_Summoner_execAddSelectedTower_Parms
{
	class ADunDefTower_SummonEnemy*                    newTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ClientSetupColors
// [0x00820102] 
struct ADunDefPlayer_Summoner_execClientSetupColors_Parms
{
	// struct FVector                                  handColor;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Summoner.SetMyCustomColors
// [0x00820002] 
struct ADunDefPlayer_Summoner_execSetMyCustomColors_Parms
{
	class ADunDefPlayerController*                     aController;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UDunDefHero*                                 usingHero;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  handColor;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Summoner.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_Summoner_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayer_Summoner_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Summoner.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_Summoner_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Hovering.PostBeginPlay
// [0x00020102] 
struct ADunDefPlayer_Hovering_execPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Hovering.StopHovering
// [0x00020102] 
struct ADunDefPlayer_Hovering_execStopHovering_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Hovering.StartHovering
// [0x00020102] 
struct ADunDefPlayer_Hovering_execStartHovering_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Hovering.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayer_Hovering_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefDecoyTarget.DTGetEnemyTargetingDesirability
// [0x00020002] 
struct ADunDefDecoyTarget_execDTGetEnemyTargetingDesirability_Parms
{
	class ADunDefEnemyController*                      forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDecoyTarget.DrawMyHUD
// [0x00020102] 
struct ADunDefDecoyTarget_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDecoyTarget.PlayDeath
// [0x00020102] 
struct ADunDefDecoyTarget_execPlayDeath_Parms
{
};

// Function DunDefSpecial.DunDefDecoyTarget.AllowHeroGUID
// [0x00020000] 
struct ADunDefDecoyTarget_execAllowHeroGUID_Parms
{
	int                                                GUID1;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GUID2;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GUID3;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GUID4;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDecoyTarget.CanDetonate
// [0x00020102] 
struct ADunDefDecoyTarget_execCanDetonate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDecoyTarget.Detonate
// [0x00024102] 
struct ADunDefDecoyTarget_execDetonate_Parms
{
	int                                                SetDetonationsNumber;                             		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefDecoyTarget.SelfDestruct
// [0x00020002] 
struct ADunDefDecoyTarget_execSelfDestruct_Parms
{
};

// Function DunDefSpecial.DunDefDecoyTarget.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefDecoyTarget_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefDecoyTarget.IsClassOnIgnoreList
// [0x00020102] 
struct ADunDefDecoyTarget_execIsClassOnIgnoreList_Parms
{
	class UClass*                                      ActorClass;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDecoyTarget.SetMaxNumberOfAttackers
// [0x00020100] 
struct ADunDefDecoyTarget_execSetMaxNumberOfAttackers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDecoyTarget.SetActiveTime
// [0x00020002] 
struct ADunDefDecoyTarget_execSetActiveTime_Parms
{
	// class ADunDefPlayer*                            PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDecoyTarget.DoPoke
// [0x00020002] 
struct ADunDefDecoyTarget_execDoPoke_Parms
{
	// class ADunDefEnemy*                             theEnemy;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemyController*                   theController;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDecoyTarget.SetDesirability
// [0x00020102] 
struct ADunDefDecoyTarget_execSetDesirability_Parms
{
	// class ADunDefPlayer*                            PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDecoyTarget.SetHealth
// [0x00020102] 
struct ADunDefDecoyTarget_execSetHealth_Parms
{
	// class ADunDefPlayer*                            PlayerOwner;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDecoyTarget.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefDecoyTarget_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           currentOpacity;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDecoyTarget.DrawMiniMapIcon
// [0x00820102] 
struct ADunDefDecoyTarget_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  PlayerMapPos;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDecoyTarget.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefDecoyTarget_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefDecoyTarget.PostBeginPlay
// [0x00020102] 
struct ADunDefDecoyTarget_execPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefDropOffPoint.PreventTowerAtPoint
// [0x00020102] 
struct ADunDefDropOffPoint_execPreventTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              towerRadius;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDropOffPoint.AllowTowerAtPoint
// [0x00020102] 
struct ADunDefDropOffPoint_execAllowTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDropOffPoint.CheckAllowance
// [0x00020102] 
struct ADunDefDropOffPoint_execCheckAllowance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDropOffPoint.DTGetEnemyTargetingDesirability
// [0x00020002] 
struct ADunDefDropOffPoint_execDTGetEnemyTargetingDesirability_Parms
{
	class ADunDefEnemyController*                      forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDropOffPoint.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefDropOffPoint_eventPostBeginPlay_Parms
{
	// class ADunDefTouchForwardingActor*              fAct;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDestroyed
// [0x00020102] 
struct ADunDefDropOffPoint_execNotifyPackageDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefDropOffPoint.Died
// [0x00020002] 
struct ADunDefDropOffPoint_execDied_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPickupableItem*                    deadItem;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyHealthChange
// [0x00020102] 
struct ADunDefDropOffPoint_execNotifyHealthChange_Parms
{
};

// Function DunDefSpecial.DunDefDropOffPoint.PlayHitEffect
// [0x00020102] 
struct ADunDefDropOffPoint_execPlayHitEffect_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefDropOffPoint.AdjustDamage
// [0x00424002] 
struct ADunDefDropOffPoint_execAdjustDamage_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DamageAmount;                                     		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefDropOffPoint.OnlyDrawHUDForOwner
// [0x00020102] 
struct ADunDefDropOffPoint_execOnlyDrawHUDForOwner_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawMiniMapIcon
// [0x00020102] 
struct ADunDefDropOffPoint_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawActiveDisplay
// [0x00824102] 
struct ADunDefDropOffPoint_execDrawActiveDisplay_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ScreenPos;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Opacity;                                          		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsMiniMap : 1;                                   		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FColor                                   theWhiteColor;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           SizeX;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           SizeY;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.DrawMyHUD
// [0x00820102] 
struct ADunDefDropOffPoint_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ScreenPos;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  objectIconWorldPos;                               		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           cameraDistFromPos;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           IconDistanceScale;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           DotOpacity;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           DistanceOpacity;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Opacity;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 UseRotation;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  screenMiddle;                                     		// 0x0040 (0x000C) [0x0000000000000000]              
	// float                                           screenScale;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           Width;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           dotWithCamera;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           healthPercent;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             healthColor;                                      		// 0x0060 (0x0010) [0x0000000000000000]              
	// struct FVector                                  healthColorVec;                                   		// 0x0070 (0x000C) [0x0000000000000000]              
	// class UMaterialInterface*                       waypointMat;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	// float                                           theTimeSince;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.DeactivatePoint
// [0x00020002] 
struct ADunDefDropOffPoint_execDeactivatePoint_Parms
{
	// class ADunDefPickupableItem*                    RemoveItem;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.TurnOffActiveEffects
// [0x00020102] 
struct ADunDefDropOffPoint_execTurnOffActiveEffects_Parms
{
};

// Function DunDefSpecial.DunDefDropOffPoint.TurnOnActiveEffects
// [0x00020102] 
struct ADunDefDropOffPoint_execTurnOnActiveEffects_Parms
{
};

// Function DunDefSpecial.DunDefDropOffPoint.ActivatePoint
// [0x00020002] 
struct ADunDefDropOffPoint_execActivatePoint_Parms
{
	int                                                maxDropOffs;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefDropOffPoint.ClearDropOffActor
// [0x00020102] 
struct ADunDefDropOffPoint_execClearDropOffActor_Parms
{
	// class ADunDefPlayerController_Delivery*         PCD;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.SetDropOffActor
// [0x00020102] 
struct ADunDefDropOffPoint_execSetDropOffActor_Parms
{
	class ADunDefPlayer*                               DoA;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerController_Delivery*         PCD;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.NotifyPackageDropOff
// [0x00020102] 
struct ADunDefDropOffPoint_execNotifyPackageDropOff_Parms
{
	class ADunDefPlayer*                               theDropper;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefDropOffPoint.PlaceNewItem
// [0x00820102] 
struct ADunDefDropOffPoint_execPlaceNewItem_Parms
{
	class ADunDefPickupableItem*                       NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  itemLoc;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 moveRot;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.IsFull
// [0x00020102] 
struct ADunDefDropOffPoint_execIsFull_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefDropOffPoint.RemoveDropOffItem
// [0x00020002] 
struct ADunDefDropOffPoint_execRemoveDropOffItem_Parms
{
	class ADunDefPickupableItem*                       RemoveItem;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGRI_Delivery*                      GRI_d;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.DropOffUnFilled
// [0x00020102] 
struct ADunDefDropOffPoint_execDropOffUnFilled_Parms
{
};

// Function DunDefSpecial.DunDefDropOffPoint.DropOffFilled
// [0x00020102] 
struct ADunDefDropOffPoint_execDropOffFilled_Parms
{
};

// Function DunDefSpecial.DunDefDropOffPoint.AddDropOffItem
// [0x00020102] 
struct ADunDefDropOffPoint_execAddDropOffItem_Parms
{
	class ADunDefPlayer*                               droppedOffActor;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerController_Delivery*         PCD;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefPickupableItem*                    NewItem;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADunDefGRI_Delivery*                      GRI_d;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.UpdateDropOff
// [0x00020102] 
struct ADunDefDropOffPoint_execUpdateDropOff_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerController_Delivery*         PCD;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefDropOffPoint_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefDropOffPoint.UnTouch
// [0x00020802] ( FUNC_Event )
struct ADunDefDropOffPoint_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayer*                            DP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.Touch
// [0x00020802] ( FUNC_Event )
struct ADunDefDropOffPoint_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayer*                            DP;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController_Delivery*         PCD;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefDropOffPoint.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefDropOffPoint_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefDropOffPoint.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefDropOffPoint_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.SetDroppingOff
// [0x00020102] 
struct ADunDefPickupableItem_execSetDroppingOff_Parms
{
	unsigned long                                      IsDroppingOff : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class ADunDefDropOffPoint*                         newDP;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefPickupableItem_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefPickupableItem.NotifyHolderLost
// [0x00020102] 
struct ADunDefPickupableItem_execNotifyHolderLost_Parms
{
	class ADunDefPlayer*                               lostHolder;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.DoDestroyEffects
// [0x00020102] 
struct ADunDefPickupableItem_execDoDestroyEffects_Parms
{
};

// Function DunDefSpecial.DunDefPickupableItem.DestroyPickUp
// [0x00024002] 
struct ADunDefPickupableItem_execDestroyPickUp_Parms
{
	unsigned long                                      bFromDamage : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.PlaceAtPoint
// [0x00020102] 
struct ADunDefPickupableItem_execPlaceAtPoint_Parms
{
	struct FVector                                     NewLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.DropOffItem
// [0x00024102] 
struct ADunDefPickupableItem_execDropOffItem_Parms
{
	class ADunDefDropOffPoint*                         DropOffPoint;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.DrawWaypointToMe
// [0x00020100] 
struct ADunDefPickupableItem_execDrawWaypointToMe_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.GetDropOffWayPt
// [0x00020000] 
struct ADunDefPickupableItem_execGetDropOffWayPt_Parms
{
};

// Function DunDefSpecial.DunDefPickupableItem.OnlyDrawHUDForOwner
// [0x00020102] 
struct ADunDefPickupableItem_execOnlyDrawHUDForOwner_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.DrawMyHUD
// [0x00020102] 
struct ADunDefPickupableItem_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.CanBePickedUp
// [0x00020102] 
struct ADunDefPickupableItem_execCanBePickedUp_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.PickupItem
// [0x00820102] 
struct ADunDefPickupableItem_execPickupItem_Parms
{
	class ADunDefPlayer*                               newHolder;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SocketLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableItem.BeginBeingPickedUp
// [0x00020102] 
struct ADunDefPickupableItem_execBeginBeingPickedUp_Parms
{
	class ADunDefPlayerController*                     newHolder;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerAbility_PickUpItem*          playerAbility;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableItem.AttachToSpawner
// [0x00820102] 
struct ADunDefPickupableItem_execAttachToSpawner_Parms
{
	// struct FVector                                  NewLoc;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 NewRot;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableItem.InitMesh
// [0x00020102] 
struct ADunDefPickupableItem_execInitMesh_Parms
{
	class ADunDefPickupableSpawner*                    MySpawner;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.GetToolTipPriority
// [0x00020100] 
struct ADunDefPickupableItem_execGetToolTipPriority_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.TakesToolTipPriority
// [0x00020102] 
struct ADunDefPickupableItem_execTakesToolTipPriority_Parms
{
	class UDunDefToolTipInterface*                     otherToolTip;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.ContinueDrawingToolTip
// [0x00020100] 
struct ADunDefPickupableItem_execContinueDrawingToolTip_Parms
{
	unsigned long                                      ContinueDrawing : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.DrawToolTip
// [0x00824102] 
struct ADunDefPickupableItem_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosX;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  DrawCoords;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FColor                                   DrawColor;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           canvasScale;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableItem.AllowTowerAtPoint
// [0x00020100] 
struct ADunDefPickupableItem_execAllowTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.CheckAllowance
// [0x00020100] 
struct ADunDefPickupableItem_execCheckAllowance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.PreventTowerAtPoint
// [0x00020100] 
struct ADunDefPickupableItem_execPreventTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              towerRadius;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.DrawMiniMapIcon
// [0x00020100] 
struct ADunDefPickupableItem_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.GetActivationOffset
// [0x00020102] 
struct ADunDefPickupableItem_execGetActivationOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.GetActivationWeighting
// [0x00020102] 
struct ADunDefPickupableItem_execGetActivationWeighting_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.Client_Activate
// [0x00024102] 
struct ADunDefPickupableItem_execClient_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.Server_Activate
// [0x00024002] 
struct ADunDefPickupableItem_execServer_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      forceActivation : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                activationType;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.AllowActivation
// [0x00024102] 
struct ADunDefPickupableItem_execAllowActivation_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableItem.SetMyActiveMesh
// [0x00020102] 
struct ADunDefPickupableItem_execSetMyActiveMesh_Parms
{
	int                                                MeshIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPickupableItem_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPickupableItem.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPickupableItem_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableItem.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPickupableItem_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTouchForwardingActor.UnTouch
// [0x00020802] ( FUNC_Event )
struct ADunDefTouchForwardingActor_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTouchForwardingActor.Touch
// [0x00020802] ( FUNC_Event )
struct ADunDefTouchForwardingActor_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTouchForwardingActor.SetTouchParent
// [0x00020002] 
struct ADunDefTouchForwardingActor_execSetTouchParent_Parms
{
	class AActor*                                      NewParent;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.PawnDied
// [0x00020002] 
struct ADunDefPlayerController_Delivery_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.NotifyTakeHit
// [0x00020002] 
struct ADunDefPlayerController_Delivery_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.DropCurrentItem
// [0x00020002] 
struct ADunDefPlayerController_Delivery_execDropCurrentItem_Parms
{
};

// Function DunDefSpecial.DunDefPlayerController_Delivery.PickupItem
// [0x00020002] 
struct ADunDefPlayerController_Delivery_execPickupItem_Parms
{
	class ADunDefPickupableItem*                       newPickup;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.AllowedToTeleport
// [0x00020002] 
struct ADunDefGRI_Delivery_execAllowedToTeleport_Parms
{
	class APawn*                                       Teleportee;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.SetCurrentDeliveryItem
// [0x00020002] 
struct ADunDefGRI_Delivery_execSetCurrentDeliveryItem_Parms
{
	class ADunDefPickupableItem*                       NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.RemovePackageHolder
// [0x00020102] 
struct ADunDefGRI_Delivery_execRemovePackageHolder_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.AddPackageHolder
// [0x00020102] 
struct ADunDefGRI_Delivery_execAddPackageHolder_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.ModifyPlayerGroundSpeed
// [0x00020102] 
struct ADunDefGRI_Delivery_execModifyPlayerGroundSpeed_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              theGroundSpeed;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.AllowPackageSpawn
// [0x00020002] 
struct ADunDefGRI_Delivery_execAllowPackageSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.SetInCombatPhase
// [0x00020102] 
struct ADunDefGRI_Delivery_execSetInCombatPhase_Parms
{
	unsigned long                                      inCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.DrawMyHUD
// [0x00020102] 
struct ADunDefGRI_Delivery_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UFont*                                    PrevFont;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UFont*                                    tFont;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  displayString;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefGRI_Delivery.ClearDropPoints
// [0x00020002] 
struct ADunDefGRI_Delivery_execClearDropPoints_Parms
{
	// class ADunDefDropOffPoint*                      clearPoint;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Delivery.NotifyLostDropOffPoint
// [0x00020002] 
struct ADunDefGRI_Delivery_execNotifyLostDropOffPoint_Parms
{
	class ADunDefDropOffPoint*                         lostPoint;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.NotifyFilledDropOffPoint
// [0x00020002] 
struct ADunDefGRI_Delivery_execNotifyFilledDropOffPoint_Parms
{
	class ADunDefDropOffPoint*                         filledPoint;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefDropOffPoint*                      Points;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bAllPointsFull : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             MaxDropOffPts;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Delivery.SelectNewDropOffPoint
// [0x00020002] 
struct ADunDefGRI_Delivery_execSelectNewDropOffPoint_Parms
{
	// class ADunDefDropOffPoint*                      newActivePoint;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Delivery.Server_AddGRIHeroAbilities
// [0x00020002] 
struct ADunDefGRI_Delivery_execServer_AddGRIHeroAbilities_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerAbility*                     abilityInstance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Delivery.EndBuildPhase
// [0x00020002] 
struct ADunDefGRI_Delivery_execEndBuildPhase_Parms
{
	// class UUI_BuildTimer*                           buildTimerUI;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Delivery.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_Delivery_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Delivery.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_Delivery_eventPostBeginPlay_Parms
{
	// class ADunDefDropOffPoint*                      thePoint;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.DrawMiniMapIcon
// [0x00820102] 
struct ADunDefEnemyCrystalCore_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  PlayerMapPos;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefEnemyCrystalCore_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefEnemyCrystalCore.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefEnemyCrystalCore_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefFlashHeal.SpawnHealEmitter
// [0x00020102] 
struct ADunDefFlashHeal_execSpawnHealEmitter_Parms
{
	class AActor*                                      HealedActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefFlashHeal.AllowSpawn
// [0x00022802] ( FUNC_Event )
struct ADunDefFlashHeal_eventAllowSpawn_Parms
{
	class AActor*                                      theArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     theLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    theRot;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefFlashHeal.FlashHeal
// [0x00020102] 
struct ADunDefFlashHeal_execFlashHeal_Parms
{
	// class AActor*                                   HealTarget;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               HealInterface;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             targMaxHealth;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   classCheck;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bValidClass : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< class AActor* >                         healedActors;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AActor*                                   altTowerActorCheck;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ADunDefPracticeDummy*                     theDummy;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefFlashHeal.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefFlashHeal_eventPostBeginPlay_Parms
{
	// class ADunDefPlayerController*                  theController;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Assault.AllowedToTeleport
// [0x00020002] 
struct ADunDefGRI_Assault_execAllowedToTeleport_Parms
{
	class APawn*                                       Teleportee;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetEnemyLifeSpanMultiplier
// [0x00020102] 
struct ADunDefGRI_Assault_execGetEnemyLifeSpanMultiplier_Parms
{
	class ADunDefEnemy*                                anEnemy;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.ModifyPlayerGroundSpeed
// [0x00020102] 
struct ADunDefGRI_Assault_execModifyPlayerGroundSpeed_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              theGroundSpeed;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapRangeMultiplier
// [0x00024102] 
struct ADunDefGRI_Assault_execGetTrapRangeMultiplier_Parms
{
	class ADunDefTower_DetonationType*                 aTrap;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraRangeMultiplier
// [0x00024102] 
struct ADunDefGRI_Assault_execGetAuraRangeMultiplier_Parms
{
	class ADunDefTower_Aura*                           anAura;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapDamageMultiplier
// [0x00024102] 
struct ADunDefGRI_Assault_execGetTrapDamageMultiplier_Parms
{
	class ADunDefTower_DetonationType*                 aTrap;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetTrapHealthMultiplier
// [0x00024102] 
struct ADunDefGRI_Assault_execGetTrapHealthMultiplier_Parms
{
	class ADunDefTower_DetonationType*                 aTrap;                                            		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetStrengthDrainAuraMultiplier
// [0x00024102] 
struct ADunDefGRI_Assault_execGetStrengthDrainAuraMultiplier_Parms
{
	class ADunDefTower_AuraStrengthDrain*              anAura;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraDamageMultiplier
// [0x00024102] 
struct ADunDefGRI_Assault_execGetAuraDamageMultiplier_Parms
{
	class ADunDefTower_Aura*                           anAura;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetAuraHealthMultiplier
// [0x00024102] 
struct ADunDefGRI_Assault_execGetAuraHealthMultiplier_Parms
{
	class ADunDefTower_Aura*                           anAura;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetProjectileLimitDistance
// [0x00020102] 
struct ADunDefGRI_Assault_execGetProjectileLimitDistance_Parms
{
	class AActor*                                      anInstigator;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              originalLimit;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.PostBeginPlay
// [0x00020102] 
struct ADunDefGRI_Assault_execPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefGRI_Assault.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_Assault_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Assault.GetNumberOfEnemyCoresRemaining
// [0x00020102] 
struct ADunDefGRI_Assault_execGetNumberOfEnemyCoresRemaining_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemyCrystalCore*                  Core;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Assault.DrawMyHUD
// [0x00020102] 
struct ADunDefGRI_Assault_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UFont*                                    PrevFont;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UFont*                                    tFont;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Assault.RestartedPlayer
// [0x00020002] 
struct ADunDefGRI_Assault_execRestartedPlayer_Parms
{
	class ADunDefPlayerController*                     NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Assault.CanEnterSpectatorMode
// [0x00020102] 
struct ADunDefGRI_Assault_execCanEnterSpectatorMode_Parms
{
	class ADunDefPlayerController*                     thePlayerController;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Assault.CanRespawnPlayer
// [0x00020102] 
struct ADunDefGRI_Assault_execCanRespawnPlayer_Parms
{
	class ADunDefPlayerController*                     thePlayerController;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Chicken.PostBeginPlay
// [0x00020102] 
struct ADunDefGRI_Chicken_execPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefGRI_Chicken.GetSpectatorWaitString
// [0x00020102] 
struct ADunDefGRI_Chicken_execGetSpectatorWaitString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefGRI_Chicken.RestartedPlayer
// [0x00020002] 
struct ADunDefGRI_Chicken_execRestartedPlayer_Parms
{
	class ADunDefPlayerController*                     NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Chicken.CanEnterSpectatorMode
// [0x00020102] 
struct ADunDefGRI_Chicken_execCanEnterSpectatorMode_Parms
{
	class ADunDefPlayerController*                     thePlayerController;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Chicken.CanRespawnPlayer
// [0x00020102] 
struct ADunDefGRI_Chicken_execCanRespawnPlayer_Parms
{
	class ADunDefPlayerController*                     thePlayerController;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_Chicken.DrawMyHUD
// [0x00820102] 
struct ADunDefGRI_Chicken_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UFont*                                    PrevFont;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UFont*                                    tFont;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  objectIconWorldPos;                               		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           cameraDistFromPos;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           IconWidth;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           IconHeight;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           IconDistanceScale;                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Chicken.BeganCombatPhase
// [0x00020002] 
struct ADunDefGRI_Chicken_execBeganCombatPhase_Parms
{
};

// Function DunDefSpecial.DunDefGRI_Chicken.SetChickenPlayer
// [0x00020102] 
struct ADunDefGRI_Chicken_execSetChickenPlayer_Parms
{
	class ADunDefPlayer*                               theNewChickenPlayer;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Chicken.GetRandomPlayer
// [0x00020002] 
struct ADunDefGRI_Chicken_execGetRandomPlayer_Parms
{
	class ADunDefPlayer*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< class ADunDefPlayer* >                  PlayersList;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADunDefPlayer*                            aPlayer;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_Chicken.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_Chicken_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Chicken.SetInCombatPhase
// [0x00020102] 
struct ADunDefGRI_Chicken_execSetInCombatPhase_Parms
{
	unsigned long                                      inCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Chicken.NotifyOfChicken
// [0x00020102] 
struct ADunDefGRI_Chicken_execNotifyOfChicken_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Chicken.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefGRI_Chicken_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_Chicken.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_Chicken_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_PickUpItem.RequestPickup
// [0x00020102] 
struct ADunDefPlayerAbility_PickUpItem_execRequestPickup_Parms
{
	class ADunDefPickupableItem*                       NewItem;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetPointDropOffCount
// [0x00020002] 
struct UDunDefMapInfo_Delivery_execGetPointDropOffCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetDUForWave
// [0x00020002] 
struct UDunDefMapInfo_Delivery_execGetDUForWave_Parms
{
	int                                                waveNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetTimeLimit
// [0x00020002] 
struct UDunDefMapInfo_Delivery_execGetTimeLimit_Parms
{
	int                                                waveNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                difficulty;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumPlayers;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           baseTime;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Multiplier;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefMapInfo_Delivery.GetWaveDropOffCount
// [0x00020002] 
struct UDunDefMapInfo_Delivery_execGetWaveDropOffCount_Parms
{
	int                                                waveNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefManaToken_Golden.Collected
// [0x00020002] 
struct ADunDefManaToken_Golden_execCollected_Parms
{
	class ADunDefPlayer*                               byPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.DrawMyHUD
// [0x00020102] 
struct ADunDefGRI_GoldenTokens_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UFont*                                    PrevFont;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UFont*                                    tFont;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.SetInCombatPhase
// [0x00020102] 
struct ADunDefGRI_GoldenTokens_execSetInCombatPhase_Parms
{
	unsigned long                                      inCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ADunDefManaToken_Golden*                  goldenToken;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.CollectedGoldenToken
// [0x00020102] 
struct ADunDefGRI_GoldenTokens_execCollectedGoldenToken_Parms
{
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.PawnDied
// [0x00020002] 
struct ADunDefGRI_GoldenTokens_execPawnDied_Parms
{
	class APawn*                                       KilledPawn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.SetGoldenEnemy
// [0x00020102] 
struct ADunDefGRI_GoldenTokens_execSetGoldenEnemy_Parms
{
	class ADunDefEnemy*                                Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_GoldenTokens_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_GoldenTokens_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   enemyActor;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             Enemy;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefEnemy* >                   enemyCandidates;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefGRI_GoldenTokens.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_GoldenTokens_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.GetSpectatorWaitString
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_execGetSpectatorWaitString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.RestartedPlayer
// [0x00020002] 
struct ADunDefGRI_KillEnemiesTimeLimit_execRestartedPlayer_Parms
{
	class ADunDefPlayerController*                     NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanEnterSpectatorMode
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_execCanEnterSpectatorMode_Parms
{
	class ADunDefPlayerController*                     thePlayerController;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.CanRespawnPlayer
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_execCanRespawnPlayer_Parms
{
	class ADunDefPlayerController*                     thePlayerController;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.DrawMyHUD
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UFont*                                    PrevFont;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UFont*                                    tFont;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.ReceivedGameClass
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_execReceivedGameClass_Parms
{
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.SetInCombatPhase
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_execSetInCombatPhase_Parms
{
	unsigned long                                      inCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// float                                           PlayerWaveTimeAddition;                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_KillEnemiesTimeLimit_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_KillEnemiesTimeLimit_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit.GetTimeLimit
// [0x00020002] 
struct UDunDefMapInfo_KillEnemiesTimeLimit_execGetTimeLimit_Parms
{
	int                                                waveNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.GetPlayerList
// [0x00420102] 
struct UUI_GlobalHUDUberMF_execGetPlayerList_Parms
{
	struct FString                                     pList;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     sList;                                            		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// TArray< class APlayerReplicationInfo* >         PRIArray;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class APlayerReplicationInfo* >         sortedPRI;                                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0030 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FString                                  DrawColorString;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bLocalPlayer : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bWasInserted : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.GetColorString
// [0x00020102] 
struct UUI_GlobalHUDUberMF_execGetColorString_Parms
{
	struct FColor                                      aColor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.UpdateScorePanel
// [0x00020102] 
struct UUI_GlobalHUDUberMF_execUpdateScorePanel_Parms
{
	// struct FString                                  thePlayerList;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  theScoreList;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.UI_GlobalHUDUberMF.Update
// [0x00020802] ( FUNC_Event )
struct UUI_GlobalHUDUberMF_eventUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGRI_KillEnemiesTimeLimit_Uber*     ddGRI;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.ReadToShowStats
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_execReadToShowStats_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelColor
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetGameOverLabelColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelColor
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetVictoryLabelColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetGameOverLabelString
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetGameOverLabelString_Parms
{
	class APlayerReplicationInfo*                      myPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetVictoryLabelString
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetVictoryLabelString_Parms
{
	class APlayerReplicationInfo*                      myPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.OverrideEndGameLabel
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_execOverrideEndGameLabel_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.GetMVP
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_execGetMVP_Parms
{
	class ADunDefPlayerReplicationInfo*                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   theMVP;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             bestScore;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber.DoLevelVictory
// [0x00020102] 
struct ADunDefGRI_KillEnemiesTimeLimit_Uber_execDoLevelVictory_Parms
{
	// class ADunDefPlayerReplicationInfo*             theMVP;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.ReceivedGameClass
// [0x00020102] 
struct ADunDefGRI_OgreAlly_execReceivedGameClass_Parms
{
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.SetInCombatPhase
// [0x00020102] 
struct ADunDefGRI_OgreAlly_execSetInCombatPhase_Parms
{
	unsigned long                                      inCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_OgreAlly.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_OgreAlly_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefGRI_UberAssault.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_UberAssault_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_UberDefense.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_UberDefense_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_VDay2.PostBeginPlay
// [0x00020102] 
struct ADunDefGRI_VDay2_execPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefGRI_VDay2.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_VDay2_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefGRI_VDay2.DrawMyHUD
// [0x00020102] 
struct ADunDefGRI_VDay2_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UFont*                                    PrevFont;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UFont*                                    tFont;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_VDay2.GetGameOverString
// [0x00020102] 
struct ADunDefGRI_VDay2_execGetGameOverString_Parms
{
	int                                                GameOverType;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                gameOverNumberAppend;                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefGRI_VDay2.DrawExtraEnemyMinimapIcon
// [0x00820102] 
struct ADunDefGRI_VDay2_execDrawExtraEnemyMinimapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                Enemy;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsBoy : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  MapPos;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               theTex;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UDunDefMapInfo_VDay*                      tMapInfo;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_VDay2.PrintPairMatch
// [0x00020102] 
struct ADunDefGRI_VDay2_execPrintPairMatch_Parms
{
	class ADunDefEnemy*                                aPairMatch1;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                aPairMatch2;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UDunDefMapInfo_VDay*                      tMapInfo;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefGRI_VDay2.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefGRI_VDay2_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootRight
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbinger_v2_eventFireAttackShootRight_Parms
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackShootLeft
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbinger_v2_eventFireAttackShootLeft_Parms
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.FireAttackBegin
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbinger_v2_eventFireAttackBegin_Parms
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbinger_v2_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.GetProjectileSpawnTransformation
// [0x00420102] 
struct ADunDefHarbinger_v2_execGetProjectileSpawnTransformation_Parms
{
	struct FName                                       socketToUse;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Position;                                         		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    Orientation;                                      		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingAttackAnimation
// [0x00020102] 
struct ADunDefHarbinger_v2_execIsCurrentlyPlayingAttackAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayShootFireAnimation
// [0x00020102] 
struct ADunDefHarbinger_v2_execPlayShootFireAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefHarbinger_v2.IsCurrentlyPlayingChargeAnimation
// [0x00020102] 
struct ADunDefHarbinger_v2_execIsCurrentlyPlayingChargeAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayChargeFireAnimation
// [0x00020102] 
struct ADunDefHarbinger_v2_execPlayChargeFireAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayHurtAnimation
// [0x00020100] 
struct ADunDefHarbinger_v2_execPlayHurtAnimation_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefHarbinger_v2.PlayJumpAnimation
// [0x00020100] 
struct ADunDefHarbinger_v2_execPlayJumpAnimation_Parms
{
};

// Function DunDefSpecial.DunDefHarbinger_v2.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefHarbinger_v2_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefHarbingerController_v2.PawnDied
// [0x00020002] 
struct ADunDefHarbingerController_v2_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefHarbingerController_v2.CheckPlayer
// [0x00020002] 
struct ADunDefHarbingerController_v2_execCheckPlayer_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UObject*                                  anEffect;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefHarbingerController_v2.CheckForNearbyPlayers
// [0x00020002] 
struct ADunDefHarbingerController_v2_execCheckForNearbyPlayers_Parms
{
	// class AActor*                                   aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefHarbingerController_v2.ObstructionJump
// [0x00020000] 
struct ADunDefHarbingerController_v2_execObstructionJump_Parms
{
	struct FVector                                     jumpForwardDir;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     jumpSideDir;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefHarbingerController_v2.NotifyTakeHitEX
// [0x00020002] 
struct ADunDefHarbingerController_v2_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefHarbingerController_v2.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbingerController_v2_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefHarbingerController_v2.FireProjectiles
// [0x00020000] 
struct ADunDefHarbingerController_v2_execFireProjectiles_Parms
{
	struct FName                                       socketToUse;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.AdjustDamage
// [0x00424002] 
struct ADunDefPickupableSpawner_execAdjustDamage_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DamageAmount;                                     		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.OnlyDrawHUDForOwner
// [0x00020100] 
struct ADunDefPickupableSpawner_execOnlyDrawHUDForOwner_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawMyHUD
// [0x00820102] 
struct ADunDefPickupableSpawner_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 UseRotation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  screenMiddle;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           screenScale;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Width;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           bounceAmount;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           dotWithCamera;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               waypointTexture;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawToolTip
// [0x00824102] 
struct ADunDefPickupableSpawner_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosX;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  DrawCoords;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FColor                                   DrawColor;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           canvasScale;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.ChangedGamePhases
// [0x00020102] 
struct ADunDefPickupableSpawner_execChangedGamePhases_Parms
{
	unsigned long                                      IsCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyPickUp
// [0x00020002] 
struct ADunDefPickupableSpawner_execNotifyPickUp_Parms
{
	class ADunDefPickupableItem*                       pickedupItem;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               playerPickUp;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyDestroyed
// [0x00020002] 
struct ADunDefPickupableSpawner_execNotifyDestroyed_Parms
{
	class ADunDefPickupableItem*                       droppedItem;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.NotifyDrop
// [0x00020002] 
struct ADunDefPickupableSpawner_execNotifyDrop_Parms
{
	class ADunDefPickupableItem*                       droppedItem;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetSpawnLocandRot
// [0x00420002] 
struct ADunDefPickupableSpawner_execGetSpawnLocandRot_Parms
{
	struct FVector                                     sLoc;                                             		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    sRot;                                             		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.ActivateEffects
// [0x00820102] 
struct ADunDefPickupableSpawner_execActivateEffects_Parms
{
	unsigned long                                      bTurnOn : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FVector                                  SpawnLoc;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.SpawnPickUpItem
// [0x00824002] 
struct ADunDefPickupableSpawner_execSpawnPickUpItem_Parms
{
	unsigned long                                      bForceSpawn : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefPickupableItem*                    NewItem;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPickupableSpawner_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPickupableSpawner.AllowTowerAtPoint
// [0x00020100] 
struct ADunDefPickupableSpawner_execAllowTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.CheckAllowance
// [0x00020100] 
struct ADunDefPickupableSpawner_execCheckAllowance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.PreventTowerAtPoint
// [0x00020100] 
struct ADunDefPickupableSpawner_execPreventTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              towerRadius;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.DrawMiniMapIcon
// [0x00820102] 
struct ADunDefPickupableSpawner_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  MapPos;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.Client_Activate
// [0x00024100] 
struct ADunDefPickupableSpawner_execClient_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetActivationOffset
// [0x00020102] 
struct ADunDefPickupableSpawner_execGetActivationOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.GetActivationWeighting
// [0x00020102] 
struct ADunDefPickupableSpawner_execGetActivationWeighting_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.Server_Activate
// [0x00024002] 
struct ADunDefPickupableSpawner_execServer_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      forceActivation : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                activationType;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefPickupableItem*                    pickupCheck;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPickupableSpawner.AllowActivation
// [0x00024102] 
struct ADunDefPickupableSpawner_execAllowActivation_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPickupableSpawner.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPickupableSpawner_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetOwnerNoSee
// [0x00024102] 
struct ADunDefPlayer_DualMelee_execSetOwnerNoSee_Parms
{
	unsigned long                                      ownerNoSee : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ownerNoSeeWeapon : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AutoActivateSecondaryWeapon
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execAutoActivateSecondaryWeapon_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AllowNegativeStatusAffecting
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execAllowNegativeStatusAffecting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetAlternateStance
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execGetAlternateStance_Parms
{
	class ADunDefPlayerAbility_StanceBase*             askingStance;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayerAbility_StanceBase*             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetWeaponSpeedMultiplier
// [0x00020002] 
struct ADunDefPlayer_DualMelee_execSetWeaponSpeedMultiplier_Parms
{
	float                                              newMult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetOverrideSocketName
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execGetOverrideSocketName_Parms
{
	class ADunDefWeapon*                               theWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.JumpOffPawn
// [0x00020002] 
struct ADunDefPlayer_DualMelee_execJumpOffPawn_Parms
{
	// class ADunDefPlayerAbility_LeapSlam*            slamCheck;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ShouldPlayHurtAnimation
// [0x00420002] 
struct ADunDefPlayer_DualMelee_execShouldPlayHurtAnimation_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Result;                                           		// 0x0018 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetOffhandWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventAnimNotify_ResetOffhandWeaponSwingDamage_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopOffhandWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventAnimNotify_StopOffhandWeaponSwingDamage_Parms
{
	// unsigned long                                   bNoCallSuper : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartOffhandWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventAnimNotify_StartOffhandWeaponSwingDamage_Parms
{
	// unsigned long                                   bNoCallSuper : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_ResetWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventAnimNotify_ResetWeaponSwingDamage_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StopWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventAnimNotify_StopWeaponSwingDamage_Parms
{
	// unsigned long                                   bNoCallSuper : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_StartWeaponSwingDamage
// [0x00020802] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventAnimNotify_StartWeaponSwingDamage_Parms
{
	// unsigned long                                   bNoCallSuper : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AdjustDamage
// [0x00424002] 
struct ADunDefPlayer_DualMelee_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GivePlayerHitInfo
// [0x00420002] 
struct ADunDefPlayer_DualMelee_execGivePlayerHitInfo_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                dealtDamage;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowMomentumOverride : 1;                       		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     appliedMomentum;                                  		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_Off
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execAnimNotify_CurrentAbility_Off_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AnimNotify_CurrentAbility_On
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execAnimNotify_CurrentAbility_On_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceBlend
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execDoStanceBlend_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DeActivateStance
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execDeActivateStance_Parms
{
	class ADunDefPlayerAbility_StanceBase*             oldStance;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ActivateStance
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execActivateStance_Parms
{
	class ADunDefPlayerAbility_StanceBase*             newStance;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetMeleeSwingInfoOverride
// [0x00C20002] 
struct ADunDefPlayer_DualMelee_execGetMeleeSwingInfoOverride_Parms
{
	class ADunDefWeapon_MeleeSword*                    overrideForWeap;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                currentMeleeSwingIndex;                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FMeleeSwingInfo                             OverrideInfo;                                     		// 0x0008 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FMeleeSwingInfo                          modifiedSwingInfo;                                		// 0x0038 (0x002C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.OverrideMeleeSwingInfo
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execOverrideMeleeSwingInfo_Parms
{
	class ADunDefWeapon_MeleeSword*                    askingWeapon;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CheckAllowMelee
// [0x00824102] 
struct ADunDefPlayer_DualMelee_execCheckAllowMelee_Parms
{
	class ADunDefWeapon_MeleeSword*                    weaponCheck;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      checkAnimDuration : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FMeleeSwingInfo                          currentInfoCheck;                                 		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CheckPlayingCustomAnim
// [0x00024102] 
struct ADunDefPlayer_DualMelee_execCheckPlayingCustomAnim_Parms
{
	struct FName                                       inAnim;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeFromEndToConsiderFinished;                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   Value : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.StopFire
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStopFire
// [0x002200C2] 
struct ADunDefPlayer_DualMelee_execServerStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetComboInfo
// [0x00820102] 
struct ADunDefPlayer_DualMelee_execSetComboInfo_Parms
{
	class ADunDefWeapon_MeleeSword*                    comboWeapon;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bMainHand : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FMeleeSwingInfo                          currentInfoCheck;                                 		// 0x0008 (0x002C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.DoStanceCheck
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execDoStanceCheck_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.StartFire
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.ServerStartFire
// [0x002200C2] 
struct ADunDefPlayer_DualMelee_execServerStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.GetOffHandSocketName
// [0x00022002] 
struct ADunDefPlayer_DualMelee_execGetOffHandSocketName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.AllowDualWeapon
// [0x00022002] 
struct ADunDefPlayer_DualMelee_execAllowDualWeapon_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.CreateContainedInventoryFromTemplate
// [0x00024102] 
struct ADunDefPlayer_DualMelee_execCreateContainedInventoryFromTemplate_Parms
{
	class AActor*                                      InventoryActorTemplate;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SetOffHandWeapon
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execSetOffHandWeapon_Parms
{
	class ADunDefWeapon_MeleeSword*                    newOffHandWeap;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SwapOffHandWeaponFor
// [0x00020002] 
struct ADunDefPlayer_DualMelee_execSwapOffHandWeaponFor_Parms
{
	class ADunDefWeapon*                               weaponTemplate;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHeroEquipment*                              equipmentRef;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefWeapon*                               ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefWeapon_MeleeSword*                 NewWeapon;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.SwapWeaponFor
// [0x00020002] 
struct ADunDefPlayer_DualMelee_execSwapWeaponFor_Parms
{
	class ADunDefWeapon*                               weaponTemplate;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHeroEquipment*                              equipmentRef;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefWeapon*                               ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefWeapon*                            NewWeapon;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.HasLightningStance
// [0x00020102] 
struct ADunDefPlayer_DualMelee_execHasLightningStance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_DualMelee.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_DualMelee_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowNegativeStatusAffecting
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execAllowNegativeStatusAffecting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.ResetWeaponDamage
// [0x00020100] 
struct ADunDefPlayerAbility_StanceBase_execResetWeaponDamage_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopOffHandWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execStopOffHandWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StopWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execStopWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartOffHandWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execStartOffHandWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.StartWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execStartWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GivePlayerHitInfo
// [0x00420100] 
struct ADunDefPlayerAbility_StanceBase_execGivePlayerHitInfo_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                dealtDamage;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowMomentumOverride : 1;                       		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     appliedMomentum;                                  		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_Off
// [0x00020100] 
struct ADunDefPlayerAbility_StanceBase_execAnimNotify_CurrentAbility_Off_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AnimNotify_CurrentAbility_On
// [0x00020100] 
struct ADunDefPlayerAbility_StanceBase_execAnimNotify_CurrentAbility_On_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStanceCancel
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execAllowStanceCancel_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckDoStanceAttack
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execCheckDoStanceAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetMultiplierValue
// [0x00024102] 
struct ADunDefPlayerAbility_StanceBase_execGetMultiplierValue_Parms
{
	struct FStatMultipliers                            multiplierCheck;                                  		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoLog : 1;                                       		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           baseMultiplier;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Mult;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.CheckStatus
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execCheckStatus_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_StanceBase_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayerAbility*                     ability;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.OnActivate
// [0x00820102] 
struct ADunDefPlayerAbility_StanceBase_execOnActivate_Parms
{
	// class ADunDefPlayerAbility*                     ability;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  emitterSpawn;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.AllowStepTowards
// [0x00020102] 
struct ADunDefPlayerAbility_StanceBase_execAllowStepTowards_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerMomentumMultiplier
// [0x00020100] 
struct ADunDefPlayerAbility_StanceBase_execGetPlayerMomentumMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackKnockbackMultiplier
// [0x00020100] 
struct ADunDefPlayerAbility_StanceBase_execGetPlayerAttackKnockbackMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.GetPlayerAttackSpeedMultiplier
// [0x00020100] 
struct ADunDefPlayerAbility_StanceBase_execGetPlayerAttackSpeedMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceBase.PlayActivationAnimation
// [0x00020100] 
struct ADunDefPlayerAbility_StanceBase_execPlayActivationAnimation_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.OnActivate
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execOnActivate_Parms
{
	// class ADunDefPlayerAbility*                     ability;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetCostToActivate
// [0x00024102] 
struct ADunDefPlayerAbility_LeapSlam_execGetCostToActivate_Parms
{
	unsigned long                                      returnTrueValue : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.RequestActivation
// [0x00024102] 
struct ADunDefPlayerAbility_LeapSlam_execRequestActivation_Parms
{
	unsigned long                                      bHeld : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ExtraStatusFlag;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.HasNoAutoAim
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execHasNoAutoAim_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_LeapSlam_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   aStatus;                                          		// 0x0005 (0x0001) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetMomentum
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execGetMomentum_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetElementalDamage
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execGetElementalDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetDamage
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execGetDamage_Parms
{
	class ADunDefWeapon_MeleeSword*                    weaponCheck;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_Off
// [0x00820102] 
struct ADunDefPlayerAbility_LeapSlam_execAnimNotify_CurrentAbility_Off_Parms
{
	// class ADunDefEmitterDamage*                     spawnedShockWave;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.AnimNotify_CurrentAbility_On
// [0x00820102] 
struct ADunDefPlayerAbility_LeapSlam_execAnimNotify_CurrentAbility_On_Parms
{
	// struct FVector                                  jumpVel;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ConsumesInputWhenActive
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execConsumesInputWhenActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.DoTimeOut
// [0x00020002] 
struct ADunDefPlayerAbility_LeapSlam_execDoTimeOut_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.GetLeapVelocity
// [0x00C20002] 
struct ADunDefPlayerAbility_LeapSlam_execGetLeapVelocity_Parms
{
	struct FVector                                     End;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Start;                                            		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     JumpVelocity;                                     		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  jumpDir;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  upVect;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           JumpDirZ;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           JumpDist;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           Gravity;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           XYSpeed;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           JumpTime;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           ZSpeed;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           LastZSpeed;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           NewZSpeed;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           TimeSlice;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.CancelAbility
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execCancelAbility_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PlayStopAnim
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execPlayStopAnim_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ShutOffVFX
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execShutOffVFX_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ActivateHandVFX
// [0x00020102] 
struct ADunDefPlayerAbility_LeapSlam_execActivateHandVFX_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.PushCheck
// [0x00020000] 
struct ADunDefPlayerAbility_LeapSlam_execPushCheck_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayerAbility_LeapSlam_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_LeapSlam.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_LeapSlam_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Jester.StaticGetOverrideSocketName
// [0x00022002] 
struct ADunDefPlayer_Jester_execStaticGetOverrideSocketName_Parms
{
	class UDunDefHero*                                 aHero;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UHeroEquipment*                           anEquipment;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetOverrideSocketName
// [0x00020102] 
struct ADunDefPlayer_Jester_execGetOverrideSocketName_Parms
{
	class ADunDefWeapon*                               theWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapAnimSets
// [0x00020102] 
struct ADunDefPlayer_Jester_execSwapAnimSets_Parms
{
	class ADunDefWeapon*                               NewWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UAnimNodeSequence*                        Node;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.WeaponSet
// [0x00020102] 
struct ADunDefPlayer_Jester_execWeaponSet_Parms
{
	class AWeapon*                                     NewWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Jester.DrawMyHUD
// [0x00020102] 
struct ADunDefPlayer_Jester_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           hudScale;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_Jester_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetWeaponIcon
// [0x00020102] 
struct ADunDefPlayer_Jester_execGetWeaponIcon_Parms
{
	unsigned long                                      bOffHand : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UMaterialInstanceConstant*                   ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UDunDefHero*                              tHero;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UHeroEquipment*                           tEquipment;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.DrawWeaponIcons
// [0x00020102] 
struct ADunDefPlayer_Jester_execDrawWeaponIcons_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefWeapon*                               weapDraw;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              weapOpacity;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                paddingIndex;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              hudScale;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayerController*                     PC;                                               		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           XCenterPos;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           YCenterPos;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           initialLocX;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           dt;                                               		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_Jester_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_Jester.CreateContainedInventoryFromTemplate
// [0x00024102] 
struct ADunDefPlayer_Jester_execCreateContainedInventoryFromTemplate_Parms
{
	class AActor*                                      InventoryActorTemplate;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapOffHandWeaponFor
// [0x00020002] 
struct ADunDefPlayer_Jester_execSwapOffHandWeaponFor_Parms
{
	class ADunDefWeapon*                               weaponTemplate;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHeroEquipment*                              equipmentRef;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefWeapon*                               ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             equipIdx;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADunDefWeapon*                            newWeap;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.DoWeaponSwap
// [0x00024102] 
struct ADunDefPlayer_Jester_execDoWeaponSwap_Parms
{
	unsigned long                                      bForceSwap : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefWeapon*                            PrevWeapon;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UHeroEquipment*                           equipRefMain;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UHeroEquipment*                           equipRefOffhand;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FName                                    swapName;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.ServerDoSwap
// [0x002240C2] 
struct ADunDefPlayer_Jester_execServerDoSwap_Parms
{
	unsigned long                                      bForceSwap : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_Jester.SetNewMainWeapon
// [0x00020102] 
struct ADunDefPlayer_Jester_execSetNewMainWeapon_Parms
{
	class AWeapon*                                     theNewWeapon;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemoveExisting : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UHeroEquipment*                              equipRef;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefWeapon*                            NewWeapon;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             equipIdx;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.SetStoredWeapon
// [0x00020102] 
struct ADunDefPlayer_Jester_execSetStoredWeapon_Parms
{
	class AWeapon*                                     newStoredWeapon;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHeroEquipment*                              equipRef;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefWeapon*                            newDDWeap;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.GetShootAnim
// [0x00020102] 
struct ADunDefPlayer_Jester_execGetShootAnim_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Jester.ForceWeaponActivationOverride
// [0x00020102] 
struct ADunDefPlayer_Jester_execForceWeaponActivationOverride_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Jester.SwapWeaponFor
// [0x00020002] 
struct ADunDefPlayer_Jester_execSwapWeaponFor_Parms
{
	class ADunDefWeapon*                               weaponTemplate;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHeroEquipment*                              equipmentRef;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefWeapon*                               ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefWeapon*                            NewWeapon;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADunDefWeapon*                            OldWeapon;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             equipIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_Jester.AllowDualWeapon
// [0x00022002] 
struct ADunDefPlayer_Jester_execAllowDualWeapon_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_Jester.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayer_Jester_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PostBeginPlay
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StopHovering
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execStopHovering_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StartHovering
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execStartHovering_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_SeriesEv_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.UsedAbility
// [0x00020002] 
struct ADunDefPlayer_SeriesEv_execUsedAbility_Parms
{
	class ADunDefPlayerAbility*                        ability;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetActiveChargeAbility
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execSetActiveChargeAbility_Parms
{
	class ADunDefPlayerAbility_ManaCharge*             newCharge;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetManaTokenAttractionRadius
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execGetManaTokenAttractionRadius_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.HasMaxManaPower
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execHasMaxManaPower_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.TryTokenCollection
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execTryTokenCollection_Parms
{
	class ADunDefManaToken*                            Token;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.IsCurrentlyPlayingHurtAnimation
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execIsCurrentlyPlayingHurtAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bIsPlaying : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayHurtAnimation
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execPlayHurtAnimation_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ShouldOverrideWeaponElementalEffects
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execShouldOverrideWeaponElementalEffects_Parms
{
	class ADunDefWeapon*                               weaponCheck;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StopFire
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayJumpAnimation
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execPlayJumpAnimation_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.StartFire
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PutArmDown
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execPutArmDown_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.PlayShootAnimation
// [0x00024102] 
struct ADunDefPlayer_SeriesEv_execPlayShootAnimation_Parms
{
	unsigned long                                      isBigShoot : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      Replicate : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDontPlayAnim : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ForceUseInstigatorForMuzzle
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execForceUseInstigatorForMuzzle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.CanReload
// [0x00020002] 
struct ADunDefPlayer_SeriesEv_execCanReload_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetWeaponIcon
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execGetWeaponIcon_Parms
{
	unsigned long                                      bOffHand : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UMaterialInstanceConstant*                   ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UDunDefHero*                              tHero;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UHeroEquipment*                           tEquipment;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawWeaponIcons
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execDrawWeaponIcons_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefWeapon*                               weapDraw;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              weapOpacity;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                paddingIndex;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSelected : 1;                                    		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              hudScale;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayerController*                     PC;                                               		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           XCenterPos;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           YCenterPos;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           initialLocX;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           dt;                                               		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DrawMyHUD
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           hudScale;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayer_SeriesEv_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.CreateContainedInventoryFromTemplate
// [0x00024102] 
struct ADunDefPlayer_SeriesEv_execCreateContainedInventoryFromTemplate_Parms
{
	class AActor*                                      InventoryActorTemplate;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapOffHandWeaponFor
// [0x00020002] 
struct ADunDefPlayer_SeriesEv_execSwapOffHandWeaponFor_Parms
{
	class ADunDefWeapon*                               weaponTemplate;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHeroEquipment*                              equipmentRef;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefWeapon*                               ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             equipIdx;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADunDefWeapon*                            newWeap;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.DoWeaponSwap
// [0x00024102] 
struct ADunDefPlayer_SeriesEv_execDoWeaponSwap_Parms
{
	unsigned long                                      bForceSwap : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefWeapon*                            PrevWeapon;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UHeroEquipment*                           equipRefMain;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UHeroEquipment*                           equipRefOffhand;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ServerDoSwap
// [0x002240C2] 
struct ADunDefPlayer_SeriesEv_execServerDoSwap_Parms
{
	unsigned long                                      bForceSwap : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetNewMainWeapon
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execSetNewMainWeapon_Parms
{
	class AWeapon*                                     theNewWeapon;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemoveExisting : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UHeroEquipment*                              equipRef;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefWeapon*                            NewWeapon;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             equipIdx;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SetStoredWeapon
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execSetStoredWeapon_Parms
{
	class AWeapon*                                     newStoredWeapon;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHeroEquipment*                              equipRef;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefWeapon*                            newDDWeap;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.SwapWeaponFor
// [0x00020002] 
struct ADunDefPlayer_SeriesEv_execSwapWeaponFor_Parms
{
	class ADunDefWeapon*                               weaponTemplate;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UHeroEquipment*                              equipmentRef;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefWeapon*                               ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefWeapon*                            NewWeapon;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADunDefWeapon*                            OldWeapon;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             equipIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.GetOffHandSocketName
// [0x00022002] 
struct ADunDefPlayer_SeriesEv_execGetOffHandSocketName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.OverrideWeaponAttach
// [0x00020102] 
struct ADunDefPlayer_SeriesEv_execOverrideWeaponAttach_Parms
{
	class ADunDefWeapon*                               weaponCheck;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.AllowDualWeapon
// [0x00022002] 
struct ADunDefPlayer_SeriesEv_execAllowDualWeapon_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayer_SeriesEv.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayer_SeriesEv_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_ManaCharge_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AllowUsageDuringCastingStates
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execAllowUsageDuringCastingStates_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DrawChargeBar
// [0x00820102] 
struct ADunDefPlayerAbility_ManaCharge_execDrawChargeBar_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           XCenterPos;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           YCenterPos;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           barPercent;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  C;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           uiScale;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             castBarColor;                                     		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetCooldownStartTime
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execGetCooldownStartTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ShouldDrawManaBar
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execShouldDrawManaBar_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StopEffects
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execStopEffects_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStopFire
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execNotifyStopFire_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerStartDamage
// [0x002200C2] 
struct ADunDefPlayerAbility_ManaCharge_execServerStartDamage_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.NotifyStartFire
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execNotifyStartFire_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ActivateEffects
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execActivateEffects_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetSocketName
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execGetSocketName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AttachParticles
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execAttachParticles_Parms
{
	// struct FName                                    attachSocketName;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetDamage
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execGetDamage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ResetManaCharge
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execResetManaCharge_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.AddManaCharge
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execAddManaCharge_Parms
{
	int                                                addedMana;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.SpawnManaEffect
// [0x00820102] 
struct ADunDefPlayerAbility_ManaCharge_execSpawnManaEffect_Parms
{
	// struct FVector                                  Loc;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ServerCollectManaToken
// [0x002200C2] 
struct ADunDefPlayerAbility_ManaCharge_execServerCollectManaToken_Parms
{
	class ADunDefManaToken*                            Token;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.InCylinderFwd
// [0x00020103] ( FUNC_Final )
struct ADunDefPlayerAbility_ManaCharge_execInCylinderFwd_Parms
{
	struct FVector                                     Origin;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     VDir;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              RadiusSq;                                         		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     A;                                                		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           dotProduct;                                       		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.DoDamage
// [0x00820002] 
struct ADunDefPlayerAbility_ManaCharge_execDoDamage_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 beamRot;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DamagePoint;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           MomentumToUse;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CheckForFire
// [0x00020100] 
struct ADunDefPlayerAbility_ManaCharge_execCheckForFire_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.GetTimeBasedOnCharge
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execGetTimeBasedOnCharge_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           MaxTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamage
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execStartDamage_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.StartDamageEffects
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execStartDamageEffects_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CanHoldMoreCharge
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execCanHoldMoreCharge_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.CancelAbility
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execCancelAbility_Parms
{
	// class ADunDefPlayer_SeriesEv*                   evPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.OnActivate
// [0x00020102] 
struct ADunDefPlayerAbility_ManaCharge_execOnActivate_Parms
{
	// class ADunDefPlayer_SeriesEv*                   evPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_ManaCharge_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_ManaCharge.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayerAbility_ManaCharge_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.AllowUsageDuringCastingStates
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execAllowUsageDuringCastingStates_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetCastingStateNamePC
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execGetCastingStateNamePC_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.CancelAbility
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execCancelAbility_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ClientForceCancel
// [0x010201C2] 
struct ADunDefPlayerAbility_PhaseShift_execClientForceCancel_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ForceCancel
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execForceCancel_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseMaterials
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execSetPhaseMaterials_Parms
{
	unsigned long                                      bPhasedMaterials : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.StartScaleUp
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execStartScaleUp_Parms
{
	// class ADunDefPlayer*                            thePlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetMaterialColors
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execSetMaterialColors_Parms
{
	struct FLinearColor                                C1;                                               		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                c2;                                               		// 0x0010 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                C3;                                               		// 0x0020 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	// class UMaterialInstanceConstant*                currentMaterial;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.OnActivate
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execOnActivate_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                newMIC;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer_Summoner*                   mySummoner;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetDefaultValues
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execSetDefaultValues_Parms
{
	// class ADunDefPlayer*                            thePlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.SetPhaseShiftValue
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execSetPhaseShiftValue_Parms
{
	// class ADunDefPlayer*                            thePlayer;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PhaseScaleDown
// [0x00020100] 
struct ADunDefPlayerAbility_PhaseShift_execPhaseScaleDown_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_PhaseShift_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayerAbility_PhaseShift*          otherActivePhaseShift;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.FinishScaleUp
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execFinishScaleUp_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.InitializeForPlayer
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShift_execInitializeForPlayer_Parms
{
	class ADunDefPlayer*                               myPlayer;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                newMIC;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class UMaterialInstanceConstant* >      summonerOverrideMICs;                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_PhaseShift_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayerAbility_PhaseShift_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShift.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_PhaseShift_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_BuilTripWire_eventPostBeginPlay_Parms
{
	// class ADunDefTower_TripWire*                    twTemplate;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CancelAbility
// [0x00020102] 
struct ADunDefPlayerAbility_BuilTripWire_execCancelAbility_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AllowTowerPlacementPosition
// [0x00C24102] 
struct ADunDefPlayerAbility_BuilTripWire_execAllowTowerPlacementPosition_Parms
{
	struct FVector                                     placementPos;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlacementDeniedReason;                            		// 0x000C (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      bOnlyCheckVolumes : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// unsigned long                                   inRange : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ADunDefTower_TripWire*                    trip;                                             		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetCenterLocation
// [0x00020102] 
struct ADunDefPlayerAbility_BuilTripWire_execGetCenterLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CanPlaceTowerUnitCost
// [0x00020102] 
struct ADunDefPlayerAbility_BuilTripWire_execCanPlaceTowerUnitCost_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.GetDUCost
// [0x00824102] 
struct ADunDefPlayerAbility_BuilTripWire_execGetDUCost_Parms
{
	unsigned long                                      bUseCustomEndLoc : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     endLoc;                                           		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Cost;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             MaxCost;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ADunDefTower_TripWire*                    twTemplate;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartLoc;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.DrawCastingHUD
// [0x00820102] 
struct ADunDefPlayerAbility_BuilTripWire_execDrawCastingHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  CursorPos;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.CreateNewPreviewPoint
// [0x00820102] 
struct ADunDefPlayerAbility_BuilTripWire_execCreateNewPreviewPoint_Parms
{
	struct FVector                                     previewLoc;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FPreviewPoint                            newPoint;                                         		// 0x000C (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ClearPreviewPoints
// [0x00020102] 
struct ADunDefPlayerAbility_BuilTripWire_execClearPreviewPoints_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerAddPlacementPoint
// [0x002200C2] 
struct ADunDefPlayerAbility_BuilTripWire_execServerAddPlacementPoint_Parms
{
	struct FVector                                     tPlacementLocation;                               		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PostPlacementUpdate
// [0x00820102] 
struct ADunDefPlayerAbility_BuilTripWire_execPostPlacementUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 lookAtRot;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ServerRequestBuildTower
// [0x002200C2] 
struct ADunDefPlayerAbility_BuilTripWire_execServerRequestBuildTower_Parms
{
	struct FVector                                     towerPlacementLocation;                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    towerPlacementRotation;                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   Failure : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.AbilityTick
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_BuilTripWire_eventAbilityTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.HidePreviewPoints
// [0x00020102] 
struct ADunDefPlayerAbility_BuilTripWire_execHidePreviewPoints_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFXCompleted
// [0x00020102] 
struct ADunDefPlayerAbility_BuilTripWire_execStopAltSummonTowerFXCompleted_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.StopAltSummonTowerFX
// [0x00020102] 
struct ADunDefPlayerAbility_BuilTripWire_execStopAltSummonTowerFX_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.UpdateAltSummonTowerFX
// [0x00020102] 
struct ADunDefPlayerAbility_BuilTripWire_execUpdateAltSummonTowerFX_Parms
{
	float                                              Percent;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.BeginAltSummonTowerFX
// [0x00024102] 
struct ADunDefPlayerAbility_BuilTripWire_execBeginAltSummonTowerFX_Parms
{
	class ADunDefEmitterSpawnable*                     spellEffect;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     thePlacementLocation;                             		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    thePlacementRotation;                             		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              scaleMult;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUsesDecal : 1;                                   		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_BuilTripWire.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayerAbility_BuilTripWire_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_DefenseBoost_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveTower
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execRemoveTower_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddTower
// [0x00820102] 
struct ADunDefPlayerAbility_DefenseBoost_execAddTower_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FAffectedActor                           newEffect;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_DefenseBoost_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowers
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execRemoveAllTowers_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.CheckAllTowers
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execCheckAllTowers_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveAllTowersFor
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execRemoveAllTowersFor_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddAllTowersFor
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execAddAllTowersFor_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   aTower;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.AddEffect
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execAddEffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.RemoveEffect
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execRemoveEffect_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostAmount
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execGetTowerBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           BoostAmount;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.HasTowerBoostingType
// [0x00020102] 
struct ADunDefPlayerAbility_DefenseBoost_execHasTowerBoostingType_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_DefenseBoost.GetTowerBoostingTarget
// [0x00020000] 
struct ADunDefPlayerAbility_DefenseBoost_execGetTowerBoostingTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_EnemyDrain_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetPawnResistanceMultiplier
// [0x00020002] 
struct ADunDefPlayerAbility_EnemyDrain_execGetPawnResistanceMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetSpeedMultiplier
// [0x00020002] 
struct ADunDefPlayerAbility_EnemyDrain_execGetSpeedMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           currentSpeedScale;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.GetDamageMultiplier
// [0x00020002] 
struct ADunDefPlayerAbility_EnemyDrain_execGetDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           currentDmgScale;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.CanAffect
// [0x00020102] 
struct ADunDefPlayerAbility_EnemyDrain_execCanAffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.AddEffect
// [0x00020102] 
struct ADunDefPlayerAbility_EnemyDrain_execAddEffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_EnemyDrain.RemoveEffect
// [0x00020102] 
struct ADunDefPlayerAbility_EnemyDrain_execRemoveEffect_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.DoMultiActorSpawn
// [0x00820002] 
struct ADunDefPlayerAbility_GenericMultiActorSpawner_execDoMultiActorSpawn_Parms
{
	// struct FVector                                  SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  currentSpawnLocation;                             		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 currentSpawnRotation;                             		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   spawnedActor;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 OriginalSpawnRotation;                            		// 0x0034 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.SetUpActorSpawn
// [0x00020102] 
struct ADunDefPlayerAbility_GenericMultiActorSpawner_execSetUpActorSpawn_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_InstantUpgradeTower_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.DoEffect
// [0x00020102] 
struct ADunDefPlayerAbility_InstantUpgradeTower_execDoEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.GetTowerCost
// [0x00020102] 
struct ADunDefPlayerAbility_InstantUpgradeTower_execGetTowerCost_Parms
{
	class ADunDefTower*                                UpgradeTower;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             costToUpgrade;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             bonusCost;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           upgradeDivider;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           StatModifier;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefPlayerAbility_InstantUpgradeTower_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UDunDefHero*                              hero;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Scalar;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower.IsValidUpgradeTower
// [0x00424102] 
struct ADunDefPlayerAbility_InstantUpgradeTower_execIsValidUpgradeTower_Parms
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                theNextUpgradeLevel;                              		// 0x0004 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      bDontCountMana : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   retval : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedTower
// [0x00020002] 
struct ADunDefPlayerAbility_InvisibilityAOE_execRemovedTower_Parms
{
	class ADunDefTower*                                affectedTower;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedTower
// [0x00020002] 
struct ADunDefPlayerAbility_InvisibilityAOE_execAddedTower_Parms
{
	class ADunDefTower*                                affectedTower;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemovedPawn
// [0x00020002] 
struct ADunDefPlayerAbility_InvisibilityAOE_execRemovedPawn_Parms
{
	class ADunDefPawn*                                 affectedPawn;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddedPawn
// [0x00020002] 
struct ADunDefPlayerAbility_InvisibilityAOE_execAddedPawn_Parms
{
	class ADunDefPawn*                                 affectedPawn;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_InvisibilityAOE_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.AddEffect
// [0x00020102] 
struct ADunDefPlayerAbility_InvisibilityAOE_execAddEffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bIsFirstAOEAbility : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE.RemoveEffect
// [0x00020102] 
struct ADunDefPlayerAbility_InvisibilityAOE_execRemoveEffect_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bIsOnlyAOEAbility : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetCostToActivate
// [0x00024102] 
struct ADunDefPlayerAbility_MoveTower_execGetCostToActivate_Parms
{
	unsigned long                                      returnTrueValue : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_MoveTower_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientReset
// [0x010201C2] 
struct ADunDefPlayerAbility_MoveTower_execClientReset_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerMoveTower
// [0x002200C2] 
struct ADunDefPlayerAbility_MoveTower_execServerMoveTower_Parms
{
	struct FVector                                     towerPlacementLocation;                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    towerPlacementRotation;                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           rad;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.SetUpTowerMesh
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execSetUpTowerMesh_Parms
{
	class ADunDefTower*                                theTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           rad;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerRequestGrabTower
// [0x002200C2] 
struct ADunDefPlayerAbility_MoveTower_execServerRequestGrabTower_Parms
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.StartMovingState
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execStartMovingState_Parms
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ClientStartMovingState
// [0x010201C2] 
struct ADunDefPlayerAbility_MoveTower_execClientStartMovingState_Parms
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerReceivePlacementState
// [0x00220042] 
struct ADunDefPlayerAbility_MoveTower_execServerReceivePlacementState_Parms
{
	unsigned long                                      bIsValidPlacement : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     tPlacementLocation;                               		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    tPlacementRotation;                               		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostPlacementUpdate
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execPostPlacementUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateDecalPlacement
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execUpdateDecalPlacement_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           TowerRange;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.AllowTowerPlacementPosition
// [0x00424102] 
struct ADunDefPlayerAbility_MoveTower_execAllowTowerPlacementPosition_Parms
{
	struct FVector                                     placementPos;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlacementDeniedReason;                            		// 0x000C (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      bOnlyCheckVolumes : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefTower_Aura*                        Aura;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ADunDefTower_GasTrap*                     trap;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// class AActor*                                   act;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerAbility_BuildTower*          otherBuildTowerAbility;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerAbility_MoveTower*           otherMoveTowerAbility;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned long                                   FoundAnyAllowanceVolumes : 1;                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   AllowedByVolume : 1;                              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           towerRadius;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           originalTowerRadius;                              		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetOtherMoveAbilityTowerRadius
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execGetOtherMoveAbilityTowerRadius_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           towerRadius;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsInPlacingTowerState
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execIsInPlacingTowerState_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.IsTowerPhysical
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execIsTowerPhysical_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.OnActivate
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execOnActivate_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.UpdateClientInterpolations
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execUpdateClientInterpolations_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ServerGotoRotationState
// [0x002200C0] 
struct ADunDefPlayerAbility_MoveTower_execServerGotoRotationState_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.GetPlacementWeaponEffect
// [0x00020102] 
struct ADunDefPlayerAbility_MoveTower_execGetPlacementWeaponEffect_Parms
{
	class ADunDefEmitterSpawnable*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_MoveTower_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayerAbility_MoveTower_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_MoveTower.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_MoveTower_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_SummonCommand_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.RequestActivation
// [0x00024102] 
struct ADunDefPlayerAbility_SummonCommand_execRequestActivation_Parms
{
	unsigned long                                      bHeld : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ExtraStatusFlag;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StopTowerPlacingAnimation
// [0x00020102] 
struct ADunDefPlayerAbility_SummonCommand_execStopTowerPlacingAnimation_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.StartTowerPlacingAnimation
// [0x00020102] 
struct ADunDefPlayerAbility_SummonCommand_execStartTowerPlacingAnimation_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.AllowCastingCancelOnDamage
// [0x00020002] 
struct ADunDefPlayerAbility_SummonCommand_execAllowCastingCancelOnDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostPlacementUpdate
// [0x00020102] 
struct ADunDefPlayerAbility_SummonCommand_execPostPlacementUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.UpdateDecalPlacement
// [0x00020102] 
struct ADunDefPlayerAbility_SummonCommand_execUpdateDecalPlacement_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.ServerRequestSetCommand
// [0x00A200C2] 
struct ADunDefPlayerAbility_SummonCommand_execServerRequestSetCommand_Parms
{
	struct FVector                                     pLoc;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      targActor;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefTower_SummonEnemy*                 currentTower;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefTower_SummonEnemy* >       currentTowers;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector                                  currentLocationPoint;                             		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  moveLoc;                                          		// 0x002C (0x000C) [0x0000000000000000]              
	// class ADunDefPlayer_Summoner*                   theSummoner;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           currentPlacementRadius;                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFirstPlacement : 1;                              		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.HandleInstantCommand
// [0x00020102] 
struct ADunDefPlayerAbility_SummonCommand_execHandleInstantCommand_Parms
{
	// class AActor*                                   targActor;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer_Summoner*                   theSummoner;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefTower_SummonEnemy* >       selectedTowers;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.OnActivate
// [0x00020102] 
struct ADunDefPlayerAbility_SummonCommand_execOnActivate_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.GetCastingStateNamePC
// [0x00020102] 
struct ADunDefPlayerAbility_SummonCommand_execGetCastingStateNamePC_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_SummonCommand_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.IncreasePlacementTowerRadius
// [0x00020100] 
struct ADunDefPlayerAbility_SummonCommand_execIncreasePlacementTowerRadius_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SummonCommand.DecreasePlacementTowerRadius
// [0x00020100] 
struct ADunDefPlayerAbility_SummonCommand_execDecreasePlacementTowerRadius_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetCastingStateNamePC
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execGetCastingStateNamePC_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.ServerRequestSetCommand
// [0x002200C2] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execServerRequestSetCommand_Parms
{
	struct FVector                                     pLoc;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      targActor;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      myCommand;                                        		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayer_Summoner*                   mySummoner;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefTower_SummonEnemy* >       selectedTowers;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DoMovementCommand
// [0x00820002] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execDoMovementCommand_Parms
{
	TArray< class ADunDefTower_SummonEnemy* >          selectedTowers;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector                                     pLoc;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      myCommand;                                        		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ADunDefTower_SummonEnemy*                 currentTower;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  currentLocationPoint;                             		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  moveLoc;                                          		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           currentPlacementRadius;                           		// 0x0040 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFirstPlacement : 1;                              		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bFoundValidSpot : 1;                              		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.DrawCastingHUD
// [0x00820102] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execDrawCastingHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector2D                                currentMouseCoords;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  towerLoc;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// class ADunDefTower_SummonEnemy*                 currentTower;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0038 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefTower_SummonEnemy* >       inRangeTowers;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AActor*                                   hitAct;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer_Summoner*                   mySummoner;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           IconScale;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           CanvasIconScale;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FColor                                   col;                                              		// 0x0058 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               currentOverlayIcon;                               		// 0x005C (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               targ;                                             		// 0x0060 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestActivation
// [0x00024102] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execRequestActivation_Parms
{
	unsigned long                                      bHeld : 1;                                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ExtraStatusFlag;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.RequestCancellation
// [0x00024102] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execRequestCancellation_Parms
{
	unsigned long                                      bForce : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayer_Summoner*                   mySummoner;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleConfirmation
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execHandleConfirmation_Parms
{
	// class ADunDefHUD*                               playerHUD;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController*                  PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltCancellation
// [0x00020102] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execHandleAltCancellation_Parms
{
	// class ADunDefPlayer_Summoner*                   mySummoner;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord.HandleAltConfirmation
// [0x00820102] 
struct ADunDefPlayerAbility_PhaseShiftOverlord_execHandleAltConfirmation_Parms
{
	// class ADunDefHUD*                               playerHUD;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController*                  PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               targ;                                             		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ADunDefPlayer_Summoner*                   mySummoner;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefTower_SummonEnemy* >       selectedTowers;                                   		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector                                  blipOffset;                                       		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StopTowerPlacingAnimation
// [0x00020102] 
struct ADunDefPlayerAbility_SelectSummonUnits_execStopTowerPlacingAnimation_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.StartTowerPlacingAnimation
// [0x00020102] 
struct ADunDefPlayerAbility_SelectSummonUnits_execStartTowerPlacingAnimation_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AllowCastingCancelOnDamage
// [0x00020002] 
struct ADunDefPlayerAbility_SelectSummonUnits_execAllowCastingCancelOnDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DeSelectUnits
// [0x00020102] 
struct ADunDefPlayerAbility_SelectSummonUnits_execDeSelectUnits_Parms
{
	// class ADunDefTower_SummonEnemy*                 Tower;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.SelectAllTowers
// [0x00020102] 
struct ADunDefPlayerAbility_SelectSummonUnits_execSelectAllTowers_Parms
{
	// class ADunDefTower_SummonEnemy*                 currentTower;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefTower_SummonEnemy* >       foundTowers;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.OnActivate
// [0x00020102] 
struct ADunDefPlayerAbility_SelectSummonUnits_execOnActivate_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostPlacementUpdate
// [0x00020102] 
struct ADunDefPlayerAbility_SelectSummonUnits_execPostPlacementUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.UpdateDecalPlacement
// [0x00020102] 
struct ADunDefPlayerAbility_SelectSummonUnits_execUpdateDecalPlacement_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.CancelAbility
// [0x00020102] 
struct ADunDefPlayerAbility_SelectSummonUnits_execCancelAbility_Parms
{
	// class ADunDefTower_SummonEnemy*                 Tower;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.AbilityTick
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_SelectSummonUnits_eventAbilityTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_SelectSummonUnits_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.IncreasePlacementTowerRadius
// [0x00020100] 
struct ADunDefPlayerAbility_SelectSummonUnits_execIncreasePlacementTowerRadius_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits.DecreasePlacementTowerRadius
// [0x00020100] 
struct ADunDefPlayerAbility_SelectSummonUnits_execDecreasePlacementTowerRadius_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_SlamDash_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ConsumesInputWhenActive
// [0x00020102] 
struct ADunDefPlayerAbility_SlamDash_execConsumesInputWhenActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.AllowUsageDuringCastingStates
// [0x00020102] 
struct ADunDefPlayerAbility_SlamDash_execAllowUsageDuringCastingStates_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.CheckStuck
// [0x00020102] 
struct ADunDefPlayerAbility_SlamDash_execCheckStuck_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PlayStopAnim
// [0x00020102] 
struct ADunDefPlayerAbility_SlamDash_execPlayStopAnim_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ShutOffVFX
// [0x00020102] 
struct ADunDefPlayerAbility_SlamDash_execShutOffVFX_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ActivateHandVFX
// [0x00020102] 
struct ADunDefPlayerAbility_SlamDash_execActivateHandVFX_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.PushCheck
// [0x00020000] 
struct ADunDefPlayerAbility_SlamDash_execPushCheck_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayerAbility_SlamDash_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_SlamDash.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_SlamDash_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_StanceOnDmgEffect_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.SetMaxHealAmountPerAttack
// [0x00020002] 
struct ADunDefPlayerAbility_StanceOnDmgEffect_execSetMaxHealAmountPerAttack_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.ResetWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceOnDmgEffect_execResetWeaponDamage_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopOffHandWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceOnDmgEffect_execStopOffHandWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StopWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceOnDmgEffect_execStopWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartOffHandWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceOnDmgEffect_execStartOffHandWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.StartWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceOnDmgEffect_execStartWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect.DoAddHealth
// [0x00020102] 
struct ADunDefPlayerAbility_StanceOnDmgEffect_execDoAddHealth_Parms
{
	int                                                dmgAmount;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             healthAmt;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             tempAccumulatedHeal;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerAbility_StanceOnDmgEffect*   secondaryStance;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer_DualMelee*                  stanceOwner;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_StanceLightning_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.GetStunTime
// [0x00020102] 
struct ADunDefPlayerAbility_StanceLightning_execGetStunTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayerAbility_StanceLightning*     secondaryStance;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer_DualMelee*                  stanceOwner;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ClearStunnedList
// [0x00020102] 
struct ADunDefPlayerAbility_StanceLightning_execClearStunnedList_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.RemoveStunnedActor
// [0x00024102] 
struct ADunDefPlayerAbility_StanceLightning_execRemoveStunnedActor_Parms
{
	class ADunDefEnemy*                                stunRemoval;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDontReplicate : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.AddStunnedActor
// [0x00820102] 
struct ADunDefPlayerAbility_StanceLightning_execAddStunnedActor_Parms
{
	class ADunDefEnemy*                                newStun;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FStunnedActors                           newStunnedActor;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SocketLoc;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FName                                    SocketName;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.CanStun
// [0x00020102] 
struct ADunDefPlayerAbility_StanceLightning_execCanStun_Parms
{
	class ADunDefEnemy*                                stunTest;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceLightning.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayerAbility_StanceLightning_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopOffHandWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execStopOffHandWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StopWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execStopWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartOffHandWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execStartOffHandWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.StartWeaponDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execStartWeaponDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetMomentum
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execGetMomentum_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.GetDamage
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execGetDamage_Parms
{
	class ADunDefWeapon_MeleeSword*                    dmgWeapon;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearStanceStun
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execClearStanceStun_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CancelAbility
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execCancelAbility_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.CompletedSpecial
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execCompletedSpecial_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClientCompletedSpecial
// [0x010201C2] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execClientCompletedSpecial_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.SpawnFinishEmitter
// [0x00820102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execSpawnFinishEmitter_Parms
{
	// class ADunDefEmitterDamage*                     spawnedShockWave;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_Off
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execAnimNotify_CurrentAbility_Off_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.AnimNotify_CurrentAbility_On
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execAnimNotify_CurrentAbility_On_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSpecialAttack
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execDoSpecialAttack_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ClearHitList
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execClearHitList_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.DoSwinging
// [0x00020102] 
struct ADunDefPlayerAbility_StanceSpecialAttack_execDoSwinging_Parms
{
	// float                                           mainDamage;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bReduced : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ADunDefPlayerAbility*                     ability;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_StanceSpecialAttack_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_WheeloFortuna_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   classCheck;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCostToActivate
// [0x00024102] 
struct ADunDefPlayerAbility_WheeloFortuna_execGetCostToActivate_Parms
{
	unsigned long                                      returnTrueValue : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.StopLoopingAnims
// [0x00020102] 
struct ADunDefPlayerAbility_WheeloFortuna_execStopLoopingAnims_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetCastingCharacterAnimation
// [0x00020102] 
struct ADunDefPlayerAbility_WheeloFortuna_execGetCastingCharacterAnimation_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_WheeloFortuna_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ResetTimeDilation
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execResetTimeDilation_Parms
{
	// class ADunDefPlayerAbility_WheeloFortuna*       activeWheel;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   act;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTimeDilation
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execDoTimeDilation_Parms
{
	struct FGlyphPattern                               thePattern;                                       		// 0x0000 (0x0080) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SpawnManaTokens
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execSpawnManaTokens_Parms
{
	// class ADunDefManaToken*                         mToken;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           numTokensToSpawn;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             NumLargeManaTokens;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             NumMinorManaTokens;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             NumSmallManaTokens;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AActor*                                   fromActor;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UDunDefHero*                              hero;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GoldEnemy
// [0x00020102] 
struct ADunDefPlayerAbility_WheeloFortuna_execGoldEnemy_Parms
{
	class ADunDefEnemy*                                Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoGolding
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execDoGolding_Parms
{
	struct FGlyphPattern                               thePattern;                                       		// 0x0000 (0x0080) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   TheActor;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             theEnemy;                                         		// 0x0088 (0x0004) [0x0000000000000000]              
	// int                                             numAffected;                                      		// 0x008C (0x0004) [0x0000000000000000]              
	// int                                             currentTotalActive;                               		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           thePctToAffect;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	// int                                             MyTargetingTeam;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
	// class UDunDefHero*                              hero;                                             		// 0x009C (0x0004) [0x0000000000000000]              
	// class ADunDefPracticeDummy*                     theDummy;                                         		// 0x00A0 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.EndEffect
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execEndEffect_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ClearOutBoosters
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execClearOutBoosters_Parms
{
	// class ADunDefPawn*                              thePawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefPracticeDummy*                     theDummy;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   disableAbility;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADunDefPlayerController*                  PC;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleEnemyAffects
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execHandleEnemyAffects_Parms
{
	struct FGlyphPattern                               thePattern;                                       		// 0x0000 (0x0080) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AActor*                                   TheActor;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             theEnemy;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	// class ADunDefPracticeDummy*                     theDummy;                                         		// 0x0088 (0x0004) [0x0000000000000000]              
	// int                                             numAffected;                                      		// 0x008C (0x0004) [0x0000000000000000]              
	// int                                             currentTotalActive;                               		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           HealMult;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	// float                                           thePctToAffect;                                   		// 0x0098 (0x0004) [0x0000000000000000]              
	// class UDunDefHero*                              hero;                                             		// 0x009C (0x0004) [0x0000000000000000]              
	// int                                             MyTargetingTeam;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	// float                                           PawnResistBoost;                                  		// 0x00A4 (0x0004) [0x0000000000000000]              
	// float                                           PawnDamageBoost;                                  		// 0x00A8 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandleTowerAffects
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execHandleTowerAffects_Parms
{
	struct FGlyphPattern                               thePattern;                                       		// 0x0000 (0x0080) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AActor*                                   TheActor;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             theTower;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	// int                                             numAffected;                                      		// 0x0088 (0x0004) [0x0000000000000000]              
	// int                                             currentTotalActive;                               		// 0x008C (0x0004) [0x0000000000000000]              
	// float                                           HealMult;                                         		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           thePctToAffect;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	// class UDunDefHero*                              hero;                                             		// 0x0098 (0x0004) [0x0000000000000000]              
	// int                                             MyTargetingTeam;                                  		// 0x009C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HandlePlayerAffects
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execHandlePlayerAffects_Parms
{
	struct FGlyphPattern                               thePattern;                                       		// 0x0000 (0x0080) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AActor*                                   TheActor;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            thePlayer;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	// int                                             numAffected;                                      		// 0x0088 (0x0004) [0x0000000000000000]              
	// int                                             currentTotalActive;                               		// 0x008C (0x0004) [0x0000000000000000]              
	// float                                           HealMult;                                         		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           thePctToAffect;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	// class UDunDefHero*                              hero;                                             		// 0x0098 (0x0004) [0x0000000000000000]              
	// int                                             MyTargetingTeam;                                  		// 0x009C (0x0004) [0x0000000000000000]              
	// class UClass*                                   disableAbility;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bAddedAsBoost : 1;                                		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           healthPctToAffect;                                		// 0x00A8 (0x0004) [0x0000000000000000]              
	// float                                           healthMaxAffect;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	// class ADunDefPracticeDummy*                     theDummy;                                         		// 0x00B0 (0x0004) [0x0000000000000000]              
	// float                                           PawnResistBoost;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
	// float                                           PawnDamageBoost;                                  		// 0x00B8 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.DoTowerUpgrades
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execDoTowerUpgrades_Parms
{
	struct FGlyphPattern                               thePattern;                                       		// 0x0000 (0x0080) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class AActor*                                   TheActor;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             theTower;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             altTower;                                         		// 0x0088 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefTower* >                   towerList;                                        		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0098 (0x0004) [0x0000000000000000]              
	// int                                             numToUpgrade;                                     		// 0x009C (0x0004) [0x0000000000000000]              
	// int                                             numUpgraded;                                      		// 0x00A0 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x00A4 (0x0004) [0x0000000000000000]              
	// int                                             MyTargetingTeam;                                  		// 0x00A8 (0x0004) [0x0000000000000000]              
	// float                                           currentDistance;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	// unsigned long                                   bUpgraded : 1;                                    		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleSuccess
// [0x00A200C2] 
struct ADunDefPlayerAbility_WheeloFortuna_execServerHandleSuccess_Parms
{
	int                                                patternIdx;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FGlyphPattern                            currentPattern;                                   		// 0x0004 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ServerHandleDefault
// [0x002200C2] 
struct ADunDefPlayerAbility_WheeloFortuna_execServerHandleDefault_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CancelAbility
// [0x00020102] 
struct ADunDefPlayerAbility_WheeloFortuna_execCancelAbility_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.SetDoFadeOut
// [0x00020102] 
struct ADunDefPlayerAbility_WheeloFortuna_execSetDoFadeOut_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.FinishSelection
// [0x00820102] 
struct ADunDefPlayerAbility_WheeloFortuna_execFinishSelection_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FGlyphPattern                            chosenPattern;                                    		// 0x0004 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.CheckPattern
// [0x00820102] 
struct ADunDefPlayerAbility_WheeloFortuna_execCheckPattern_Parms
{
	struct FGlyphPattern                               CheckPattern;                                     		// 0x0000 (0x0080) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FGlyphPattern                            currentTestPattern;                               		// 0x0084 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x0104 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0108 (0x0004) [0x0000000000000000]              
	// int                                             foundIdx;                                         		// 0x010C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFoundMatch : 1;                                  		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< unsigned char >                         testGlyph;                                        		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< unsigned char >                         checkGlyph;                                       		// 0x0120 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetBoostedTargets
// [0x00420002] 
struct ADunDefPlayerAbility_WheeloFortuna_execGetBoostedTargets_Parms
{
	TArray< class APawn* >                             boostedTargets;                                   		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.NotifyOfBoostedRemoval
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execNotifyOfBoostedRemoval_Parms
{
	class APawn*                                       removedBoostee;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GetPawnBoostAmount
// [0x00820002] 
struct ADunDefPlayerAbility_WheeloFortuna_execGetPawnBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FGlyphPattern                            currentPattern;                                   		// 0x0008 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UDunDefHero*                              hero;                                             		// 0x0088 (0x0004) [0x0000000000000000]              
	// float                                           Value;                                            		// 0x008C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.HasPawnBoostingType
// [0x00820002] 
struct ADunDefPlayerAbility_WheeloFortuna_execHasPawnBoostingType_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FGlyphPattern                            currentPattern;                                   		// 0x0008 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.UpdateStuns
// [0x00020002] 
struct ADunDefPlayerAbility_WheeloFortuna_execUpdateStuns_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             stunnedEnemy;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.AbilityTick
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_WheeloFortuna_eventAbilityTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ForceSelections
// [0x00020102] 
struct ADunDefPlayerAbility_WheeloFortuna_execForceSelections_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_WheeloFortuna_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPlayerAbility_WheeloFortuna_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.ConsumesInputWhenActive
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execConsumesInputWhenActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.InitalizeActorStats
// [0x00024102] 
struct ADunDefPlayerAbility_WhirlWind_execInitalizeActorStats_Parms
{
	class UIActorModifierInterface*                    ActorStatObject;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     CallingObject;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                Tier;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bBaseValueOnly : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.CanAffect
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execCanAffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   tempClass;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.SetElementalVFX
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execSetElementalVFX_Parms
{
	unsigned char                                      aElementalTrait;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AbilityReleased
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execAbilityReleased_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AbilityPressed
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execAbilityPressed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.CancelEffect
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execCancelEffect_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetElementalDamageType
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execGetElementalDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetDamageType
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetElementalDamage
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execGetElementalDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetDamage
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execGetDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.GetAbilityStatus
// [0x00424102] 
struct ADunDefPlayerAbility_WhirlWind_execGetAbilityStatus_Parms
{
	int                                                ExtraStatusFlag;                                  		// 0x0000 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.DoEffect
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execDoEffect_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.AddEffect
// [0x00820102] 
struct ADunDefPlayerAbility_WhirlWind_execAddEffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FAffectedActor                           newEffect;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ADunDefTower*                             alternateTower;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             currentTower;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.OnActivate
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execOnActivate_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.PostBeginPlay
// [0x00020102] 
struct ADunDefPlayerAbility_WhirlWind_execPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefPlayerAbility_WhirlWind.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPlayerAbility_WhirlWind_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefPurifyingBomb.HurtRadius
// [0x00024102] 
struct ADunDefPurifyingBomb_execHurtRadius_Parms
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      IgnoredActor;                                     		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AController*                                 InstigatedByController;                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   Victim;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCausedDamage : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           MomentumScale;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           bonusDmg;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetTowerBoostAmount
// [0x00020102] 
struct ADunDefTower_BoostAura_execGetTowerBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BoostAura.HasTowerBoostingType
// [0x00020102] 
struct ADunDefTower_BoostAura_execHasTowerBoostingType_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetTowerBoostingTarget
// [0x00020000] 
struct ADunDefTower_BoostAura_execGetTowerBoostingTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.SetBoostMultiplier
// [0x00020002] 
struct ADunDefTower_BoostAura_execSetBoostMultiplier_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           currentMod;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           levelBoostMult;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BoostAura.RefreshBoosts
// [0x00020102] 
struct ADunDefTower_BoostAura_execRefreshBoosts_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetAttackInterval
// [0x00020102] 
struct ADunDefTower_BoostAura_execGetAttackInterval_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetAttackDamage
// [0x00020102] 
struct ADunDefTower_BoostAura_execGetAttackDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefTower_BoostAura_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BoostAura.GetToolTipText
// [0x00020102] 
struct ADunDefTower_BoostAura_execGetToolTipText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_BoostAura.DrawTowerToolTipStats
// [0x00C20102] 
struct ADunDefTower_BoostAura_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBoostingtypes                           currentBoost;                                     		// 0x0018 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_BoostAura.ExitEffectDT
// [0x00020102] 
struct ADunDefTower_BoostAura_execExitEffectDT_Parms
{
	class ADunDefDamageableTarget*                     dt;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.EntryEffectDT
// [0x00020102] 
struct ADunDefTower_BoostAura_execEntryEffectDT_Parms
{
	class ADunDefDamageableTarget*                     dt;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.AttacksDT
// [0x00020102] 
struct ADunDefTower_BoostAura_execAttacksDT_Parms
{
	class ADunDefDamageableTarget*                     dt;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   attackClass;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BoostAura.EnteredRadiusDT
// [0x00020102] 
struct ADunDefTower_BoostAura_execEnteredRadiusDT_Parms
{
	class ADunDefDamageableTarget*                     dt;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.UnTouch
// [0x00020102] 
struct ADunDefTower_BoostAura_execUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.CanTargetInvisibleTarget
// [0x00020102] 
struct ADunDefTower_BoostAura_execCanTargetInvisibleTarget_Parms
{
	class UDunDefTargetableInterface*                  aTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.Touch
// [0x00020102] 
struct ADunDefTower_BoostAura_execTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BoostAura.CheckForDamagableTargets
// [0x00020102] 
struct ADunDefTower_BoostAura_execCheckForDamagableTargets_Parms
{
	// class AActor*                                   act;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BoostAura.Timer
// [0x00020102] 
struct ADunDefTower_BoostAura_execTimer_Parms
{
};

// Function DunDefSpecial.DunDefTower_BoostAura.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefTower_BoostAura_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.SetBoostMultiplier
// [0x00020002] 
struct ADunDefTower_TripTowerBuff_execSetBoostMultiplier_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           currentMod;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           levelBoostMult;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RefreshBoosts
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execRefreshBoosts_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefTower_TripTowerBuff_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.DrawTowerToolTipStats
// [0x00C20102] 
struct ADunDefTower_TripTowerBuff_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBoostingtypes                           currentBoost;                                     		// 0x0018 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.SetUseHealthBarMat
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execSetUseHealthBarMat_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetToolTipText
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execGetToolTipText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.NeedsRepair
// [0x00024102] 
struct ADunDefTower_TripTowerBuff_execNeedsRepair_Parms
{
	unsigned long                                      requireFullHealth : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffectIndex
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execRemoveTowerEffectIndex_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveTowerEffect
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execRemoveTowerEffect_Parms
{
	class ADunDefTower*                                theTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.AddTowerEffect
// [0x00820102] 
struct ADunDefTower_TripTowerBuff_execAddTowerEffect_Parms
{
	class ADunDefTower*                                theTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBeamTrippers                            newTripper;                                       		// 0x0004 (0x001C) [0x0000000000000000]              
	// class ADunDefTower*                             altTower;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetMaxDetonations
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execGetMaxDetonations_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_TripTowerBuff_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.RemoveAllBoosts
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execRemoveAllBoosts_Parms
{
	// class ADunDefTower*                             Tower;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_TripTowerBuff_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ClearDeletedTowers
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execClearDeletedTowers_Parms
{
	// class ADunDefTower*                             Tower;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.CheckTowers
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execCheckTowers_Parms
{
	// class ADunDefTower*                             Tower;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.CanAffectTower
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execCanAffectTower_Parms
{
	class ADunDefTower*                                towerCheck;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.DoTracing
// [0x00824102] 
struct ADunDefTower_TripTowerBuff_execDoTracing_Parms
{
	float                                              dt;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceDamage : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefTower*                             Traced;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  beamStartLoc;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0030 (0x000C) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostAmount
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execGetTowerBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.HasTowerBoostingType
// [0x00020102] 
struct ADunDefTower_TripTowerBuff_execHasTowerBoostingType_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.GetTowerBoostingTarget
// [0x00020000] 
struct ADunDefTower_TripTowerBuff_execGetTowerBoostingTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_TripTowerBuff.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefTower_TripTowerBuff_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.ChangedGamePhases
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execChangedGamePhases_Parms
{
	unsigned long                                      IsCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.AllowTowerAtPoint
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execAllowTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.CheckAllowance
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execCheckAllowance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.PreventTowerAtPoint
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execPreventTowerAtPoint_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                towerArch;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Point;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              towerRadius;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.IsPhysicalTower
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execIsPhysicalTower_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.GetTowerTargetingDesirability
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.GetPlayerTargetingDesirability
// [0x00024102] 
struct ADunDefTower_BuffSpawner_execGetPlayerTargetingDesirability_Parms
{
	class ADunDefPlayerController*                     forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               ForPlayer;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.DrawTowerToolTipStats
// [0x00420102] 
struct ADunDefTower_BuffSpawner_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.GetAttackInterval
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execGetAttackInterval_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           interval;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.GetAttackDamage
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execGetAttackDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefTower_BuffSpawner_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.RemoveAllBuffTargets
// [0x00020002] 
struct ADunDefTower_BuffSpawner_execRemoveAllBuffTargets_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.RemoveBuffsFromTarget
// [0x00820002] 
struct ADunDefTower_BuffSpawner_execRemoveBuffsFromTarget_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FsBuffTarget                             aBuffTarget;                                      		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.AddBuffsToTarget
// [0x00820002] 
struct ADunDefTower_BuffSpawner_execAddBuffsToTarget_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FsBuffTarget                             aBuffTarget;                                      		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UDunDefBuff*                              aBuff;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.CanAffectTarget
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execCanAffectTarget_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_BuffSpawner_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefTower_BuffSpawner_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_BuffSpawner_eventDestroyed_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.UnTouch
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.Touch
// [0x00020102] 
struct ADunDefTower_BuffSpawner_execTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_BuffSpawner_eventPostBeginPlay_Parms
{
	// class AActor*                                   aActor;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_BuffSpawner.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefTower_BuffSpawner_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.GetDamageType
// [0x00020102] 
struct ADunDefTower_EmitterBurst_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.StaticGetAttackRange
// [0x00022002] 
struct ADunDefTower_EmitterBurst_execStaticGetAttackRange_Parms
{
	class UDunDefHero*                                 hero;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefTower*                                Tower;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TowerRangeScaler;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.GetAttackRange
// [0x00020102] 
struct ADunDefTower_EmitterBurst_execGetAttackRange_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.GetAttackDamage
// [0x00020102] 
struct ADunDefTower_EmitterBurst_execGetAttackDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.StopShooting
// [0x00020002] 
struct ADunDefTower_EmitterBurst_execStopShooting_Parms
{
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.ShootProjectile
// [0x00820902] ( FUNC_Event )
struct ADunDefTower_EmitterBurst_eventShootProjectile_Parms
{
	// struct FVector                                  SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_EmitterBurst.ReplicatedEvent
// [0x00820902] ( FUNC_Event )
struct ADunDefTower_EmitterBurst_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.UpdateTowerRatingMaterial
// [0x00020100] 
struct ADunDefTower_Present_execUpdateTowerRatingMaterial_Parms
{
};

// Function DunDefSpecial.DunDefTower_Present.SpawnDroppedEquipment
// [0x00020002] 
struct ADunDefTower_Present_execSpawnDroppedEquipment_Parms
{
	// class UHeroEquipment*                           Equipment;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           dropQuality;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           qualityMult;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             waveNumber;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.SpawnManaTokens
// [0x00020002] 
struct ADunDefTower_Present_execSpawnManaTokens_Parms
{
	// class ADunDefManaToken*                         mToken;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           numTokensToSpawn;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             NumLargeManaTokens;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             NumMinorManaTokens;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             NumSmallManaTokens;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             NumSuperManaTokens;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.DrawTowerToolTipStats
// [0x00420102] 
struct ADunDefTower_Present_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           TotalWeight;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.AllowTowerSpawnAtLoc
// [0x00024002] 
struct ADunDefTower_Present_execAllowTowerSpawnAtLoc_Parms
{
	class ADunDefTower*                                TowerArchetype;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     placementPos;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOnlyCheckVolumes : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefTower_Aura*                        Aura;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ADunDefTower_DetonationType*              trap;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// class AActor*                                   act;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// unsigned long                                   FoundAnyAllowanceVolumes : 1;                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   AllowedByVolume : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           towerRadius;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           originalTowerRadius;                              		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.DoActorSpawn
// [0x00020002] 
struct ADunDefTower_Present_execDoActorSpawn_Parms
{
	struct FspawnChances                               spawnChance;                                      		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   theActorTemplate;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.DoEnemySpawn
// [0x00820002] 
struct ADunDefTower_Present_execDoEnemySpawn_Parms
{
	struct FspawnChances                               spawnChance;                                      		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
	// float                                           ZOffset;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             theEnemyTemplate;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.DoTowerSpawn
// [0x00020002] 
struct ADunDefTower_Present_execDoTowerSpawn_Parms
{
	struct FspawnChances                               spawnChance;                                      		// 0x0000 (0x0014) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefTower*                             spawnedTower;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             theTowerTemplate;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.DoPresentSpawn
// [0x00820002] 
struct ADunDefTower_Present_execDoPresentSpawn_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSpawnOgresInLobby : 1;                           		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FspawnChances                            SpawnActorTemplate;                               		// 0x0010 (0x0014) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.PickActor
// [0x00420002] 
struct ADunDefTower_Present_execPickActor_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FspawnChances                               spawnChance;                                      		// 0x0004 (0x0014) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             sidx;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           weightTotal;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           randWeight;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bAllUsed : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefTower_Present.PickSpawnGroup
// [0x00020002] 
struct ADunDefTower_Present_execPickSpawnGroup_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           weightTotal;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           randWeight;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_Present.Died
// [0x00020002] 
struct ADunDefTower_Present_execDied_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bSpawnOgresInLobby : 1;                           		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpecial.DunDefTower_Present.ChangedGamePhases
// [0x00020102] 
struct ADunDefTower_Present_execChangedGamePhases_Parms
{
	unsigned long                                      IsCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.IsPhysicalTower
// [0x00020102] 
struct ADunDefTower_ProjectileReflect_execIsPhysicalTower_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.GetCostPerReflect
// [0x00020002] 
struct ADunDefTower_ProjectileReflect_execGetCostPerReflect_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefTower_ProjectileReflect_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.GetAttackDamage
// [0x00020102] 
struct ADunDefTower_ProjectileReflect_execGetAttackDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.DoReflection
// [0x00020102] 
struct ADunDefTower_ProjectileReflect_execDoReflection_Parms
{
	class ADunDefProjectile*                           reflectedProj;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewDir;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.KilledTarget
// [0x00020002] 
struct ADunDefTower_ProjectileReflect_execKilledTarget_Parms
{
	class UDunDefTargetableInterface*                  aTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_ProjectileReflect.Touch
// [0x00820902] ( FUNC_Event )
struct ADunDefTower_ProjectileReflect_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefProjectile*                        hitProj;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  U;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  W;                                                		// 0x003C (0x000C) [0x0000000000000000]              
	// class AController*                              projController;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_WebWall.ScaleForHeroModifiers
// [0x00020002] 
struct ADunDefTower_WebWall_execScaleForHeroModifiers_Parms
{
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_WebWall.DrawTowerToolTipActorStats
// [0x00420102] 
struct ADunDefTower_WebWall_execDrawTowerToolTipActorStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_WebWall.DrawTowerToolTipStats
// [0x00420102] 
struct ADunDefTower_WebWall_execDrawTowerToolTipStats_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PosX;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              PosY;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Opacity;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              canvasScale;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_WebWall.CheckTouchingActor
// [0x00020002] 
struct ADunDefTower_WebWall_execCheckTouchingActor_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   classType;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_WebWall.GetAttackDamage
// [0x00020102] 
struct ADunDefTower_WebWall_execGetAttackDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_WebWall.GetCostPerWeb
// [0x00020102] 
struct ADunDefTower_WebWall_execGetCostPerWeb_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_WebWall.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefTower_WebWall_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_WebWall.IsPhysicalTower
// [0x00020102] 
struct ADunDefTower_WebWall_execIsPhysicalTower_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTower_WebWall.KilledTarget
// [0x00020002] 
struct ADunDefTower_WebWall_execKilledTarget_Parms
{
	class UDunDefTargetableInterface*                  aTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_WebWall.Touch
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_WebWall_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTower_WebWall.UpdateBuffTargets
// [0x00020102] 
struct ADunDefTower_WebWall_execUpdateBuffTargets_Parms
{
	// class AActor*                                   aActor;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTower_WebWall.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefTower_WebWall_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.DunDefTurkey.UpdateDifficultyValues
// [0x00024002] 
struct ADunDefTurkey_execUpdateDifficultyValues_Parms
{
	unsigned long                                      UpdateMaterial : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      onlyDynamicValues : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTurkey.Bump
// [0x00020802] ( FUNC_Event )
struct ADunDefTurkey_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTurkey.StopFlee
// [0x00020002] 
struct ADunDefTurkey_execStopFlee_Parms
{
};

// Function DunDefSpecial.DunDefTurkey.PlayFleeSound
// [0x00020102] 
struct ADunDefTurkey_execPlayFleeSound_Parms
{
};

// Function DunDefSpecial.DunDefTurkey.StartFlee
// [0x00020002] 
struct ADunDefTurkey_execStartFlee_Parms
{
};

// Function DunDefSpecial.DunDefTurkey.SetGroundSpeed
// [0x00024002] 
struct ADunDefTurkey_execSetGroundSpeed_Parms
{
	float                                              NewSpeed;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseDifficultyMult : 1;                           		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.DunDefTurkey.Died
// [0x00020002] 
struct ADunDefTurkey_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTurkey.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefTurkey_eventDestroyed_Parms
{
};

// Function DunDefSpecial.DunDefTurkey.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefTurkey_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTurkeyController.WantsHurtAnimation
// [0x00020002] 
struct ADunDefTurkeyController_execWantsHurtAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.DunDefTurkeyController.NotifyTakeHitEX
// [0x00020002] 
struct ADunDefTurkeyController_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.DunDefTurkeyController.GetWanderPoint
// [0x00820002] 
struct ADunDefTurkeyController_execGetWanderPoint_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 moveDir;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  moveToPt;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTurkeyController.DoFlee
// [0x00820002] 
struct ADunDefTurkeyController_execDoFlee_Parms
{
	class ADunDefPlayer*                               fleeFrom;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  RunDir;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  bestPoint;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 runRot;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 randRot;                                          		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTurkeyController.CheckPlayers
// [0x00020002] 
struct ADunDefTurkeyController_execCheckPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayer*                            Player;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.DunDefTurkeyController.TimeOutFlee
// [0x00020002] 
struct ADunDefTurkeyController_execTimeOutFlee_Parms
{
};

// Function DunDefSpecial.GameInfo_AroundTheWorld.InitGameReplicationInfo
// [0x00020002] 
struct AGameInfo_AroundTheWorld_execInitGameReplicationInfo_Parms
{
};

// Function DunDefSpecial.GameInfo_AroundTheWorld.DoWaveSkipping
// [0x00024002] 
struct AGameInfo_AroundTheWorld_execDoWaveSkipping_Parms
{
	unsigned long                                      bAllowArbritraryWaveSkipping : 1;                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.GameInfo_Assault.InitGameReplicationInfo
// [0x00020002] 
struct AGameInfo_Assault_execInitGameReplicationInfo_Parms
{
};

// Function DunDefSpecial.GameInfo_Assault.DoWaveSkipping
// [0x00024002] 
struct AGameInfo_Assault_execDoWaveSkipping_Parms
{
	unsigned long                                      bAllowArbritraryWaveSkipping : 1;                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.GameInfo_Assault.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AGameInfo_Assault_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.GameInfo_Assault.RestartPlayer
// [0x00020002] 
struct AGameInfo_Assault_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.GameInfo_Chicken.RestartPlayer
// [0x00020002] 
struct AGameInfo_Chicken_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.GameInfo_GoldenTokens.Killed
// [0x00020002] 
struct AGameInfo_GoldenTokens_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.RestartPlayer
// [0x00020002] 
struct AGameInfo_KillEnemiesTimeLimit_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit.DoWaveSkipping
// [0x00024002] 
struct AGameInfo_KillEnemiesTimeLimit_execDoWaveSkipping_Parms
{
	unsigned long                                      bAllowArbritraryWaveSkipping : 1;                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.AddObjectiveScore
// [0x00020000] 
struct AGameInfo_KillEnemiesTimeLimit_Uber_execAddObjectiveScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.ScoreKill
// [0x00020002] 
struct AGameInfo_KillEnemiesTimeLimit_Uber_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPawn*                              KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber.Killed
// [0x00020002] 
struct AGameInfo_KillEnemiesTimeLimit_Uber_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.GameInfo_NoTowers.InitGameReplicationInfo
// [0x00020002] 
struct AGameInfo_NoTowers_execInitGameReplicationInfo_Parms
{
	// class ADunDefCrystalCore*                       Core;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.GameInfo_OgreAlly.InitGameReplicationInfo
// [0x00020002] 
struct AGameInfo_OgreAlly_execInitGameReplicationInfo_Parms
{
};

// Function DunDefSpecial.GameInfo_RainingGoblins.InitGameReplicationInfo
// [0x00020002] 
struct AGameInfo_RainingGoblins_execInitGameReplicationInfo_Parms
{
};

// Function DunDefSpecial.GameInfo_VDay2.PairMatched
// [0x00020002] 
struct AGameInfo_VDay2_execPairMatched_Parms
{
	class ADunDefEnemy*                                Boy;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                Girl;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.GameInfo_VDay2.Tick
// [0x00020802] ( FUNC_Event )
struct AGameInfo_VDay2_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           PairMatchDistance;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             it;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.GameInfo_VDay2.EnemyDied
// [0x00020002] 
struct AGameInfo_VDay2_execEnemyDied_Parms
{
	class ADunDefEnemy*                                anEnemy;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.GameInfo_VDay2.WaveSpawnerCreateEnemy
// [0x00020002] 
struct AGameInfo_VDay2_execWaveSpawnerCreateEnemy_Parms
{
	class UDunDef_SeqAct_EnemyWaveSpawner*             aSpawner;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                EnemyTemplate;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefEnemy*                             anEnemy;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UDunDefMapInfo_VDay*                      tMapInfo;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.GameInfo_Wizardry.MageCheck
// [0x00020002] 
struct AGameInfo_Wizardry_execMageCheck_Parms
{
	// class ADunDefDarkElfMage*                       Mage;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefDarkElfMage* >             mageCandidates;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.GameInfo_Wizardry.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AGameInfo_Wizardry_eventPostBeginPlay_Parms
{
	// class UDunDefMapInfo*                           ddMapInfo;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.GameInfo_ZippyTerror.InitGameReplicationInfo
// [0x00020002] 
struct AGameInfo_ZippyTerror_execInitGameReplicationInfo_Parms
{
};

// Function DunDefSpecial.SnowManBoss.StartMovement
// [0x00020102] 
struct ASnowManBoss_execStartMovement_Parms
{
};

// Function DunDefSpecial.SnowManBoss.StopMovement
// [0x00020102] 
struct ASnowManBoss_execStopMovement_Parms
{
};

// Function DunDefSpecial.SnowManBoss.Died
// [0x00020002] 
struct ASnowManBoss_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.SnowManBoss.Destroyed
// [0x00020902] ( FUNC_Event )
struct ASnowManBoss_eventDestroyed_Parms
{
};

// Function DunDefSpecial.SnowManBoss.DoStompDamage
// [0x00020802] ( FUNC_Event )
struct ASnowManBoss_eventDoStompDamage_Parms
{
};

// Function DunDefSpecial.SnowManBoss.DoStomp
// [0x00820802] ( FUNC_Event )
struct ASnowManBoss_eventDoStomp_Parms
{
	// struct FVector                                  HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.SnowManBoss.DoPeck
// [0x00820802] ( FUNC_Event )
struct ASnowManBoss_eventDoPeck_Parms
{
	// struct FVector                                  peckLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.SnowManBoss.GetPeckLoc
// [0x00C20102] 
struct ASnowManBoss_execGetPeckLoc_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 Rot;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.SnowManBoss.SnowBallRight
// [0x00020802] ( FUNC_Event )
struct ASnowManBoss_eventSnowBallRight_Parms
{
};

// Function DunDefSpecial.SnowManBoss.SnowBallLeft
// [0x00020802] ( FUNC_Event )
struct ASnowManBoss_eventSnowBallLeft_Parms
{
};

// Function DunDefSpecial.SnowManBoss.SpawnSnowShootEffect
// [0x00020102] 
struct ASnowManBoss_execSpawnSnowShootEffect_Parms
{
	struct FVector                                     SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.SnowManBoss.GetProjectileSpawnLoc
// [0x00420102] 
struct ASnowManBoss_execGetProjectileSpawnLoc_Parms
{
	unsigned long                                      bIsLeftSocket : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     Loc;                                              		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    Rot;                                              		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.SnowManBoss.PlayStomp
// [0x00020102] 
struct ASnowManBoss_execPlayStomp_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.SnowManBoss.PlaySnowShoot
// [0x00020102] 
struct ASnowManBoss_execPlaySnowShoot_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.SnowManBoss.PlayPeckAttack
// [0x00020102] 
struct ASnowManBoss_execPlayPeckAttack_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.SnowManBoss.PlaySpawnIn
// [0x00020102] 
struct ASnowManBoss_execPlaySpawnIn_Parms
{
};

// Function DunDefSpecial.SnowManBoss.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASnowManBoss_eventPostBeginPlay_Parms
{
};

// Function DunDefSpecial.SnowManBossController.CheckForCustomAttacks
// [0x00020002] 
struct ASnowManBossController_execCheckForCustomAttacks_Parms
{
};

// Function DunDefSpecial.SnowManBossController.WantsHurtAnimation
// [0x00020002] 
struct ASnowManBossController_execWantsHurtAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.SnowManBossController.NotifyTakeHitEX
// [0x00020002] 
struct ASnowManBossController_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.SnowManBossController.CheckStomp
// [0x00020002] 
struct ASnowManBossController_execCheckStomp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             numSurroundingEnemies;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           stompChance;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.SnowManBossController.ChooseAttack
// [0x00020002] 
struct ASnowManBossController_execChooseAttack_Parms
{
	// float                                           dotTarget;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.SnowManBossController.DoPeck
// [0x00820002] 
struct ASnowManBossController_execDoPeck_Parms
{
	// struct FVector                                  peckLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIgnore : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   aClass;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.SnowManBossController.DoStomp
// [0x00820002] 
struct ASnowManBossController_execDoStomp_Parms
{
	// struct FVector                                  stompLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIgnore : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   aClass;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.SnowManBossController.SpawnSnowProjectile
// [0x00824002] 
struct ASnowManBossController_execSpawnSnowProjectile_Parms
{
	unsigned long                                      bIsLeftSocket : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  ProjectileSpawnLocation;                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShootDir;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ProjectileSpawnRotation;                          		// 0x001C (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        theProjectile;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.TurkeyBoss.Died
// [0x00020002] 
struct ATurkeyBoss_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.TurkeyBoss.Destroyed
// [0x00020902] ( FUNC_Event )
struct ATurkeyBoss_eventDestroyed_Parms
{
};

// Function DunDefSpecial.TurkeyBoss.DoStompDamage
// [0x00020802] ( FUNC_Event )
struct ATurkeyBoss_eventDoStompDamage_Parms
{
};

// Function DunDefSpecial.TurkeyBoss.DoStomp
// [0x00820802] ( FUNC_Event )
struct ATurkeyBoss_eventDoStomp_Parms
{
	// struct FVector                                  HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.TurkeyBoss.DoPeck
// [0x00820802] ( FUNC_Event )
struct ATurkeyBoss_eventDoPeck_Parms
{
	// struct FVector                                  peckLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.TurkeyBoss.GetPeckLoc
// [0x00C20102] 
struct ATurkeyBoss_execGetPeckLoc_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 Rot;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSpecial.TurkeyBoss.ShootEgg
// [0x00020802] ( FUNC_Event )
struct ATurkeyBoss_eventShootEgg_Parms
{
};

// Function DunDefSpecial.TurkeyBoss.SpawnEggShootEffect
// [0x00020102] 
struct ATurkeyBoss_execSpawnEggShootEffect_Parms
{
	struct FVector                                     SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.TurkeyBoss.GetProjectileSpawnLoc
// [0x00420102] 
struct ATurkeyBoss_execGetProjectileSpawnLoc_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    Rot;                                              		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpecial.TurkeyBoss.PlayStomp
// [0x00020102] 
struct ATurkeyBoss_execPlayStomp_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.TurkeyBoss.PlayEggShoot
// [0x00020102] 
struct ATurkeyBoss_execPlayEggShoot_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.TurkeyBoss.PlayPeckAttack
// [0x00020102] 
struct ATurkeyBoss_execPlayPeckAttack_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.TurkeyBossController.WantsHurtAnimation
// [0x00020002] 
struct ATurkeyBossController_execWantsHurtAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpecial.TurkeyBossController.NotifyTakeHitEX
// [0x00020002] 
struct ATurkeyBossController_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpecial.TurkeyBossController.CheckStomp
// [0x00020002] 
struct ATurkeyBossController_execCheckStomp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             numSurroundingEnemies;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           stompChance;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.TurkeyBossController.ChooseAttack
// [0x00020002] 
struct ATurkeyBossController_execChooseAttack_Parms
{
	// float                                           dotTarget;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.TurkeyBossController.DoPeck
// [0x00820002] 
struct ATurkeyBossController_execDoPeck_Parms
{
	// struct FVector                                  peckLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.TurkeyBossController.DoStomp
// [0x00820002] 
struct ATurkeyBossController_execDoStomp_Parms
{
	// struct FVector                                  stompLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.TurkeyBossController.SpawnEggProjectile
// [0x00820002] 
struct ATurkeyBossController_execSpawnEggProjectile_Parms
{
	// struct FVector                                  ProjectileSpawnLocation;                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShootDir;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ProjectileSpawnRotation;                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        theProjectile;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.UI_GameStatsUberMF.GetPlayerList
// [0x00420102] 
struct UUI_GameStatsUberMF_execGetPlayerList_Parms
{
	struct FString                                     pList;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     sList;                                            		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// TArray< class APlayerReplicationInfo* >         PRIArray;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class APlayerReplicationInfo* >         sortedPRI;                                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0030 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FString                                  DrawColorString;                                  		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bLocalPlayer : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bWasInserted : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpecial.UI_GameStatsUberMF.GetColorString
// [0x00020102] 
struct UUI_GameStatsUberMF_execGetColorString_Parms
{
	struct FColor                                      aColor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function DunDefSpecial.UI_GameStatsUberMF.UpdateTeamPanels
// [0x00020102] 
struct UUI_GameStatsUberMF_execUpdateTeamPanels_Parms
{
	// struct FString                                  PlayerList;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ScoreList;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSpecial.UI_GameStatsUberMF.CustomInit
// [0x00024002] 
struct UUI_GameStatsUberMF_execCustomInit_Parms
{
	int                                                CustomInitIndex;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif