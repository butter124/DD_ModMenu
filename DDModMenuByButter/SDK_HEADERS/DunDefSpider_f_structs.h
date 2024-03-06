/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSpider_f_structs.h
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

// Function DunDefSpider.DunDefWebProjectile.GetBoostedTargets
// [0x00420000] 
struct ADunDefWebProjectile_execGetBoostedTargets_Parms
{
	TArray< class APawn* >                             boostedTargets;                                   		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function DunDefSpider.DunDefWebProjectile.NotifyOfBoostedRemoval
// [0x00020000] 
struct ADunDefWebProjectile_execNotifyOfBoostedRemoval_Parms
{
	class APawn*                                       removedBoostee;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefWebProjectile.GetPawnBoostAmount
// [0x00020002] 
struct ADunDefWebProjectile_execGetPawnBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefWebProjectile.HasPawnBoostingType
// [0x00020002] 
struct ADunDefWebProjectile_execHasPawnBoostingType_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefWebProjectile.Destroyed
// [0x00020102] 
struct ADunDefWebProjectile_execDestroyed_Parms
{
};

// Function DunDefSpider.DunDefWebProjectile.RemoveWebEffect
// [0x00020102] 
struct ADunDefWebProjectile_execRemoveWebEffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.AddWebEffect
// [0x00820102] 
struct ADunDefWebProjectile_execAddWebEffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FWebbedActor                             newEffect;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           ActRadius;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ActHeight;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  newScaleVect;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.CanAddWebAffect
// [0x00020102] 
struct ADunDefWebProjectile_execCanAddWebAffect_Parms
{
	class AActor*                                      theAct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADunDefWebProjectile*                     webProjectile;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.EndRadiusDamage
// [0x00020102] 
struct ADunDefWebProjectile_execEndRadiusDamage_Parms
{
};

// Function DunDefSpider.DunDefWebProjectile.AffectVictim
// [0x00020102] 
struct ADunDefWebProjectile_execAffectVictim_Parms
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefWebProjectile.StartRadiusDamage
// [0x00020102] 
struct ADunDefWebProjectile_execStartRadiusDamage_Parms
{
};

// Function DunDefSpider.DunDefWebProjectile.SetHomingTarget
// [0x00024102] 
struct ADunDefWebProjectile_execSetHomingTarget_Parms
{
	class AActor*                                      NewTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HomingLocation;                                   		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpider.DunDefWebProjectile.GetTowerBoostAmount
// [0x00020002] 
struct ADunDefWebProjectile_execGetTowerBoostAmount_Parms
{
	unsigned char                                      checkBoostType;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefWebProjectile.HasTowerBoostingType
// [0x00020002] 
struct ADunDefWebProjectile_execHasTowerBoostingType_Parms
{
	unsigned char                                      checkType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefWebProjectile.GetTowerBoostingTarget
// [0x00020000] 
struct ADunDefWebProjectile_execGetTowerBoostingTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefWebProjectile.EndAttachment
// [0x00820102] 
struct ADunDefWebProjectile_execEndAttachment_Parms
{
	unsigned long                                      bClearList : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FWebbedActor                             attachedAct;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class UTowerDeboosterObject*                    debooster;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             AltActor;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.SetScaleTime
// [0x00024102] 
struct ADunDefWebProjectile_execSetScaleTime_Parms
{
	unsigned long                                      bDoScaleUp : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpider.DunDefWebProjectile.AddNewAffected
// [0x00020102] 
struct ADunDefWebProjectile_execAddNewAffected_Parms
{
	class AActor*                                      newAffected;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UTowerDeboosterObject*                    debooster;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             AltActor;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.Expire
// [0x00020102] 
struct ADunDefWebProjectile_execExpire_Parms
{
};

// Function DunDefSpider.DunDefWebProjectile.Explode
// [0x00820102] 
struct ADunDefWebProjectile_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  DownHitLocation;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DownHitNormal;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  spawnedResult;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.UpdateAttachStatus
// [0x00020102] 
struct ADunDefWebProjectile_execUpdateAttachStatus_Parms
{
	class AActor*                                      updateActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefWebProjectile.Landed
// [0x00020902] ( FUNC_Event )
struct ADunDefWebProjectile_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefWebProjectile.DoHoming
// [0x00820102] 
struct ADunDefWebProjectile_execDoHoming_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewVel;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NormalVel;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           angleCheck;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.Tick
// [0x00820902] ( FUNC_Event )
struct ADunDefWebProjectile_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FWebbedActor                             updateActor;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           AffectScale;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefWebProjectile_eventPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefWebProjectile.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefWebProjectile_execExecReplicatedFunction_Parms
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

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.DrawMyHUD
// [0x00820102] 
struct ADunDefCrystalCore_PortalDefense_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 UseRotation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  screenMiddle;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           screenScale;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Width;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           Height;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           dotWithCamera;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// class UMaterialInterface*                       waypointMat;                                      		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.MakeInvincible
// [0x00020002] 
struct ADunDefCrystalCore_PortalDefense_execMakeInvincible_Parms
{
	// class ADunDefGRI_PortalDefense*                 GRI_PD;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.EndWarpInvincibility
// [0x00020002] 
struct ADunDefCrystalCore_PortalDefense_execEndWarpInvincibility_Parms
{
	// class ADunDefGRI_PortalDefense*                 GRI_PD;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.OnTeleport
// [0x00020102] 
struct ADunDefCrystalCore_PortalDefense_execOnTeleport_Parms
{
	class USeqAct_Teleport*                            Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.UpdateCrystalCore
// [0x00024102] 
struct ADunDefCrystalCore_PortalDefense_execUpdateCrystalCore_Parms
{
	unsigned long                                      locked : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class UMaterialInstanceConstant*                MIC;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ULensFlareComponent*                      theLensFlareComponent;                            		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.TakeDamage
// [0x00024800] ( FUNC_Event )
struct ADunDefCrystalCore_PortalDefense_eventTakeDamage_Parms
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

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.PlayWarpedFX
// [0x00020102] 
struct ADunDefCrystalCore_PortalDefense_execPlayWarpedFX_Parms
{
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.HandleCoreTouched
// [0x00020002] 
struct ADunDefCrystalCore_PortalDefense_execHandleCoreTouched_Parms
{
	class AActor*                                      TouchingActor;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGRI_PortalDefense*                 GRI_PD;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.Bump
// [0x00020802] ( FUNC_Event )
struct ADunDefCrystalCore_PortalDefense_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.Touch
// [0x00020800] ( FUNC_Event )
struct ADunDefCrystalCore_PortalDefense_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.PostBeginPlay
// [0x00020102] 
struct ADunDefCrystalCore_PortalDefense_execPostBeginPlay_Parms
{
	// class ADunDefGRI_PortalDefense*                 GRI_PD;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefCrystalCore_PortalDefense_execExecReplicatedFunction_Parms
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

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyEndWarpInvincibility
// [0x00020002] 
struct ADunDefGRI_PortalDefense_execNotifyEndWarpInvincibility_Parms
{
};

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyWarpInvincibility
// [0x00020002] 
struct ADunDefGRI_PortalDefense_execNotifyWarpInvincibility_Parms
{
};

// Function DunDefSpider.DunDefGRI_PortalDefense.DrawMyHUD
// [0x00020102] 
struct ADunDefGRI_PortalDefense_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UFont*                                    PrevFont;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UFont*                                    tFont;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyPortalHit
// [0x00020002] 
struct ADunDefGRI_PortalDefense_execNotifyPortalHit_Parms
{
	// class AGameInfo_PortalDefense*                  GIPD;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           HitPct;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefGRI_PortalDefense.SetInCombatPhase
// [0x00020102] 
struct ADunDefGRI_PortalDefense_execSetInCombatPhase_Parms
{
	unsigned long                                      inCombatPhase : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpider.DunDefGRI_PortalDefense.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGRI_PortalDefense_eventPostBeginPlay_Parms
{
};

// Function DunDefSpider.DunDefSpider.PlayDying
// [0x00020102] 
struct ADunDefSpider_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpider.Died
// [0x00020002] 
struct ADunDefSpider_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpider.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefSpider_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpider.SetWebChargeTime
// [0x00020102] 
struct ADunDefSpider_execSetWebChargeTime_Parms
{
	float                                              NewWebChargeTime;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpider.UpdateWebParticle
// [0x00020102] 
struct ADunDefSpider_execUpdateWebParticle_Parms
{
	float                                              NewScale;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           currentScale;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpider.PlayMeleeAttackAnimation
// [0x00020102] 
struct ADunDefSpider_execPlayMeleeAttackAnimation_Parms
{
	int                                                AnimationIndex;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpider.ShutDownWebCharge
// [0x00020102] 
struct ADunDefSpider_execShutDownWebCharge_Parms
{
};

// Function DunDefSpider.DunDefSpider.ShootWeb
// [0x00020802] ( FUNC_Event )
struct ADunDefSpider_eventShootWeb_Parms
{
};

// Function DunDefSpider.DunDefSpider.MeleeSwingEnd
// [0x00020802] ( FUNC_Event )
struct ADunDefSpider_eventMeleeSwingEnd_Parms
{
};

// Function DunDefSpider.DunDefSpider.MeleeSwingStart
// [0x00020802] ( FUNC_Event )
struct ADunDefSpider_eventMeleeSwingStart_Parms
{
};

// Function DunDefSpider.DunDefSpider.GetMeleeSwingLocation
// [0x00820102] 
struct ADunDefSpider_execGetMeleeSwingLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SwingLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SwingRotation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpider.GetWebProjectileLocAndRot
// [0x00420102] 
struct ADunDefSpider_execGetWebProjectileLocAndRot_Parms
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    Orientation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpider.DunDefSpider.PlayAttackAnimation
// [0x00020102] 
struct ADunDefSpider_execPlayAttackAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpider.PlayWebChargeAnim
// [0x00020102] 
struct ADunDefSpider_execPlayWebChargeAnim_Parms
{
};

// Function DunDefSpider.DunDefSpider.PlayWebShootAnim
// [0x00020102] 
struct ADunDefSpider_execPlayWebShootAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpider.PlayLungeAnimation
// [0x00020102] 
struct ADunDefSpider_execPlayLungeAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpider.UpdateDifficultyValues
// [0x00024002] 
struct ADunDefSpider_execUpdateDifficultyValues_Parms
{
	unsigned long                                      UpdateMaterial : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      onlyDynamicValues : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class AGameInfo_PortalDefense*                  gInfo;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpider.PlaySpawnEffect
// [0x00020102] 
struct ADunDefSpider_execPlaySpawnEffect_Parms
{
};

// Function DunDefSpider.DunDefSpider.ClearSpawnEffect
// [0x00020002] 
struct ADunDefSpider_execClearSpawnEffect_Parms
{
};

// Function DunDefSpider.DunDefSpider.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefSpider_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpider.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefSpider_execExecReplicatedFunction_Parms
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

// Function DunDefSpider.DunDefSpider.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefSpider_eventPostBeginPlay_Parms
{
};

// Function DunDefSpider.DunDefMapInfo_PortalDefense.GetMaxAllowedCoreHits
// [0x00020002] 
struct UDunDefMapInfo_PortalDefense_execGetMaxAllowedCoreHits_Parms
{
	int                                                difficulty;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameScaleMultiplier
// [0x00020002] 
struct AGameInfo_PortalDefense_execGetGameScaleMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameDamageMultiplier
// [0x00020002] 
struct AGameInfo_PortalDefense_execGetGameDamageMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameHealthMultiplier
// [0x00020002] 
struct AGameInfo_PortalDefense_execGetGameHealthMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.GameInfo_PortalDefense.UpdateEnemyMultipliers
// [0x00820002] 
struct AGameInfo_PortalDefense_execUpdateEnemyMultipliers_Parms
{
	float                                              DmgPct;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UDunDefMapInfo_PortalDefense*             mInfo;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FMinMaxValues                            currentMinMax;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function DunDefSpider.GameInfo_PortalDefense.SetWaveNumber
// [0x00020002] 
struct AGameInfo_PortalDefense_execSetWaveNumber_Parms
{
	int                                                theWaveNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.GameInfo_PortalDefense.DoWaveSkipping
// [0x00024002] 
struct AGameInfo_PortalDefense_execDoWaveSkipping_Parms
{
	unsigned long                                      bAllowArbritraryWaveSkipping : 1;                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpider.GameInfo_PortalDefense.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AGameInfo_PortalDefense_eventPostBeginPlay_Parms
{
};

// Function DunDefSpider.DunDefGRI_VDay.DrawExtraEnemyMinimapIcon
// [0x00820102] 
struct ADunDefGRI_VDay_execDrawExtraEnemyMinimapIcon_Parms
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

// Function DunDefSpider.DunDefGRI_VDay.GenderSpawned
// [0x00020102] 
struct ADunDefGRI_VDay_execGenderSpawned_Parms
{
	class ADunDefEnemy*                                enemyActor;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      isBoy : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpider.DunDefGRI_VDay.PairMatched
// [0x00020102] 
struct ADunDefGRI_VDay_execPairMatched_Parms
{
	struct FVector                                     Loc1;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Loc2;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                enemyArch;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UDunDefMapInfo_VDay*                      tMapInfo;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefGRI_VDay.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefGRI_VDay_execExecReplicatedFunction_Parms
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

// Function DunDefSpider.DunDefSpiderController.GetToolTipAttackRange
// [0x00020002] 
struct ADunDefSpiderController_execGetToolTipAttackRange_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderController.GetTargetableRange
// [0x00024002] 
struct ADunDefSpiderController_execGetTargetableRange_Parms
{
	unsigned long                                      bCheckAttackRange : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderController.GetAttackDamage
// [0x00020002] 
struct ADunDefSpiderController_execGetAttackDamage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderController.CancelCurrentTarget
// [0x00020000] 
struct ADunDefSpiderController_execCancelCurrentTarget_Parms
{
	int                                                Reason;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderController.SetMyQueen
// [0x00020002] 
struct ADunDefSpiderController_execSetMyQueen_Parms
{
	class ADunDefSpiderQueenController*                newQueen;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderController.NotifyQueenOfDeath
// [0x00020002] 
struct ADunDefSpiderController_execNotifyQueenOfDeath_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderController.PawnDied
// [0x00020002] 
struct ADunDefSpiderController_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderController.IsWithinAttackRange
// [0x00024002] 
struct ADunDefSpiderController_execIsWithinAttackRange_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              AttackRangeOffset;                                		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCheckDeltaZ : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderController.ShootWeb
// [0x00820002] 
struct ADunDefSpiderController_execShootWeb_Parms
{
	// struct FVector                                  WebSpawnLocation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 WebSpawnRotation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	// class ADunDefWebProjectile*                     theProjectile;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WebShootDirection;                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  WebLandLocation;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           WebAngle;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           DistFromTarget;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderController.GetAttackRange
// [0x00020002] 
struct ADunDefSpiderController_execGetAttackRange_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderController.DoLungeAttack
// [0x00020002] 
struct ADunDefSpiderController_execDoLungeAttack_Parms
{
	// float                                           JumpAngle;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           DistFromTarget;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           LungeSpeed;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderController.DoWebAttack
// [0x00020002] 
struct ADunDefSpiderController_execDoWebAttack_Parms
{
	// class ADunDefSpider*                            theSpider;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderController.CheckForCustomAttacks
// [0x00020002] 
struct ADunDefSpiderController_execCheckForCustomAttacks_Parms
{
	// float                                           DistanceToTargetSq;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           MaxDistanceSq;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderController.AllowWebAttack
// [0x00020002] 
struct ADunDefSpiderController_execAllowWebAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderController.AddToSwingHurtList
// [0x00020002] 
struct ADunDefSpiderController_execAddToSwingHurtList_Parms
{
	class AActor*                                      newEntry;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderController.EndMeleeSwing
// [0x00020002] 
struct ADunDefSpiderController_execEndMeleeSwing_Parms
{
};

// Function DunDefSpider.DunDefSpiderController.StartMeleeSwing
// [0x00020000] 
struct ADunDefSpiderController_execStartMeleeSwing_Parms
{
};

// Function DunDefSpider.DunDefSpiderController.GetWebChargeTime
// [0x00020102] 
struct ADunDefSpiderController_execGetWebChargeTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderController.NotifyBump
// [0x00020802] ( FUNC_Event )
struct ADunDefSpiderController_eventNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueenController.SetTarget
// [0x00024802] ( FUNC_Event )
struct ADunDefSpiderQueenController_eventSetTarget_Parms
{
	class AActor*                                      NewTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDontClearIgnoreList : 1;                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderQueenController.ShootWeb
// [0x00820002] 
struct ADunDefSpiderQueenController_execShootWeb_Parms
{
	// struct FVector                                  WebSpawnLocation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 WebSpawnRotation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	// class ADunDefWebProjectile*                     theProjectile;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WebShootDirection;                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  WebLandLocation;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TempWebShootDirection;                            		// 0x0034 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             shiftDirection;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	// class AActor*                                   myTarget;                                         		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueenController.GetWebChargeTime
// [0x00020102] 
struct ADunDefSpiderQueenController_execGetWebChargeTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueenController.DoWebAttack
// [0x00020002] 
struct ADunDefSpiderQueenController_execDoWebAttack_Parms
{
	// class ADunDefSpiderQueen*                       theSpider;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueenController.NotifyBabyDeath
// [0x00020002] 
struct ADunDefSpiderQueenController_execNotifyBabyDeath_Parms
{
	class ADunDefSpider*                               DeadBaby;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueenController.GetAttackInterval
// [0x00024002] 
struct ADunDefSpiderQueenController_execGetAttackInterval_Parms
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueenController.CheckForCustomAttacks
// [0x00020002] 
struct ADunDefSpiderQueenController_execCheckForCustomAttacks_Parms
{
	// float                                           DistancetoTarget;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueenController.FindValidBabyShootLoc
// [0x00020002] 
struct ADunDefSpiderQueenController_execFindValidBabyShootLoc_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueenController.SpawnBaby
// [0x00820002] 
struct ADunDefSpiderQueenController_execSpawnBaby_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// class ADunDefSpider*                            newSpider;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ShootLoc;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnVelocity;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           SpawnSpeed;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueenController.FlagSpawnBaby
// [0x00020002] 
struct ADunDefSpiderQueenController_execFlagSpawnBaby_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueenController.StartBabySpawn
// [0x00020002] 
struct ADunDefSpiderQueenController_execStartBabySpawn_Parms
{
	// float                                           AnimTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueenController.ForceWakeUp
// [0x00020002] 
struct ADunDefSpiderQueenController_execForceWakeUp_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueenController.AddToSwingHurtList
// [0x00020002] 
struct ADunDefSpiderQueenController_execAddToSwingHurtList_Parms
{
	class AActor*                                      newEntry;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueenController.EndMeleeSwing
// [0x00020002] 
struct ADunDefSpiderQueenController_execEndMeleeSwing_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueenController.StartMeleeSwing
// [0x00020000] 
struct ADunDefSpiderQueenController_execStartMeleeSwing_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueenController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefSpiderQueenController_eventPostBeginPlay_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.SetDyingPhysics
// [0x00020100] 
struct ADunDefSpiderQueen_execSetDyingPhysics_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.Died
// [0x00020002] 
struct ADunDefSpiderQueen_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueen.SetUpperBodyLookAt
// [0x00020102] 
struct ADunDefSpiderQueen_execSetUpperBodyLookAt_Parms
{
	unsigned long                                      bTurnOn : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderQueen.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefSpiderQueen_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderQueen.PlayStunnedHurtEffect
// [0x00820102] 
struct ADunDefSpiderQueen_execPlayStunnedHurtEffect_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 theRot;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueen.ShootWeb
// [0x00020802] ( FUNC_Event )
struct ADunDefSpiderQueen_eventShootWeb_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.PlayWebShootAnim
// [0x00020102] 
struct ADunDefSpiderQueen_execPlayWebShootAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueen.PlayWebChargeAnim
// [0x00020102] 
struct ADunDefSpiderQueen_execPlayWebChargeAnim_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.SetWebChargeTime
// [0x00020102] 
struct ADunDefSpiderQueen_execSetWebChargeTime_Parms
{
	float                                              NewWebChargeTime;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderQueen.GetWebProjectileLocAndRot
// [0x00420102] 
struct ADunDefSpiderQueen_execGetWebProjectileLocAndRot_Parms
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    Orientation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpider.DunDefSpiderQueen.GetMeleeSwingLocation
// [0x00820102] 
struct ADunDefSpiderQueen_execGetMeleeSwingLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SwingLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SwingRotation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueen.MeleeSwingEnd
// [0x00020802] ( FUNC_Event )
struct ADunDefSpiderQueen_eventMeleeSwingEnd_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.MeleeSwingStart
// [0x00020802] ( FUNC_Event )
struct ADunDefSpiderQueen_eventMeleeSwingStart_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.SetRageMode
// [0x00020102] 
struct ADunDefSpiderQueen_execSetRageMode_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.GetEnrageIntervalMult
// [0x00020002] 
struct ADunDefSpiderQueen_execGetEnrageIntervalMult_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueen.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefSpiderQueen_eventTakeDamage_Parms
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

// Function DunDefSpider.DunDefSpiderQueen.CheckSpecialCoreDmg
// [0x00820002] 
struct ADunDefSpiderQueen_execCheckSpecialCoreDmg_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  theLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 theRot;                                           		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function DunDefSpider.DunDefSpiderQueen.AdjustDamage
// [0x00424002] 
struct ADunDefSpiderQueen_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderQueen.NotifyTakeHit
// [0x00020002] 
struct ADunDefSpiderQueen_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderQueen.GetBabySpawnLocandRot
// [0x00420002] 
struct ADunDefSpiderQueen_execGetBabySpawnLocandRot_Parms
{
	struct FVector                                     SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefSpider.DunDefSpiderQueen.DoSpawnBaby
// [0x00020802] ( FUNC_Event )
struct ADunDefSpiderQueen_eventDoSpawnBaby_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.StopStunAnimation
// [0x00020102] 
struct ADunDefSpiderQueen_execStopStunAnimation_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.PlayStunAnimation
// [0x00020102] 
struct ADunDefSpiderQueen_execPlayStunAnimation_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.PlayBabySpawnAnim
// [0x00020102] 
struct ADunDefSpiderQueen_execPlayBabySpawnAnim_Parms
{
	float                                              playSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueen.GetPawnDamageModifier
// [0x00024102] 
struct ADunDefSpiderQueen_execGetPawnDamageModifier_Parms
{
	unsigned long                                      bDontIncludeAbilities : 1;                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.DunDefSpiderQueen.UpdateDifficultyValues
// [0x00024002] 
struct ADunDefSpiderQueen_execUpdateDifficultyValues_Parms
{
	unsigned long                                      UpdateMaterial : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      onlyDynamicValues : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSpider.DunDefSpiderQueen.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefSpiderQueen_eventPostBeginPlay_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.PlayJumpAnimation
// [0x00020100] 
struct ADunDefSpiderQueen_execPlayJumpAnimation_Parms
{
};

// Function DunDefSpider.DunDefSpiderQueen.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefSpiderQueen_execExecReplicatedFunction_Parms
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

// Function DunDefSpider.TowerDeboosterObject.GetTowerBoostAmount
// [0x00020002] 
struct UTowerDeboosterObject_execGetTowerBoostAmount_Parms
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.TowerDeboosterObject.HasTowerBoostingType
// [0x00020002] 
struct UTowerDeboosterObject_execHasTowerBoostingType_Parms
{
	unsigned char                                      checkType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.TowerDeboosterObject.GetTowerBoostingTarget
// [0x00020000] 
struct UTowerDeboosterObject_execGetTowerBoostingTarget_Parms
{
	class UDunDefTargetableInterface*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSpider.TowerDeboosterObject.SetBoostAmount
// [0x00020002] 
struct UTowerDeboosterObject_execSetBoostAmount_Parms
{
	float                                              newBoostAmount;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.TowerDeboosterObject.SetBoostType
// [0x00020002] 
struct UTowerDeboosterObject_execSetBoostType_Parms
{
	unsigned char                                      newBoostType;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.GameInfo_VDay.PairMatched
// [0x00020002] 
struct AGameInfo_VDay_execPairMatched_Parms
{
	class ADunDefEnemy*                                Boy;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                Girl;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSpider.GameInfo_VDay.Tick
// [0x00020802] ( FUNC_Event )
struct AGameInfo_VDay_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UDunDefMapInfo_VDay*                      tMapInfo;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           PairMatchDistance;                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.GameInfo_VDay.FindBestTemplate
// [0x00424002] 
struct AGameInfo_VDay_execFindBestTemplate_Parms
{
	struct FString                                     GenderString;                                     		// 0x0000 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class ADunDefEnemy*                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             P;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             altGenderArchetype;                               		// 0x001C (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefEnemy* >                   TempBoys;                                         		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class ADunDefEnemy* >                   TempGirls;                                        		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UDunDefMapInfo_VDay*                      tMapInfo;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFoundAny : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSpider.GameInfo_VDay.WaveSpawnerCreateEnemy
// [0x00020002] 
struct AGameInfo_VDay_execWaveSpawnerCreateEnemy_Parms
{
	class UDunDef_SeqAct_EnemyWaveSpawner*             aSpawner;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                EnemyTemplate;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEnemy*                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefEnemy*                             bestTemplate;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             newEnemy;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             FoundIndex;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  GenderString;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UDunDefMapInfo_VDay*                      tMapInfo;                                         		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function DunDefSpider.GameInfo_VDay.OpenedKillCountUI
// [0x00020002] 
struct AGameInfo_VDay_execOpenedKillCountUI_Parms
{
	class UUI_KillCount*                               aKillCountUI;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif