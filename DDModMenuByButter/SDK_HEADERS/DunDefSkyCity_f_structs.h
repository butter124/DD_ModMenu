/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSkyCity_f_structs.h
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

// Function DunDefSkyCity.DunDefProjectile_Meteor.Destroyed
// [0x00020102] 
struct ADunDefProjectile_Meteor_execDestroyed_Parms
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.SpawnFires
// [0x00820002] 
struct ADunDefProjectile_Meteor_execSpawnFires_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGasCloud*                          spawnedFire;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TraceHitLoc;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceHitNorm;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  newFireLoc;                                       		// 0x0034 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           randRadius;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.Explode
// [0x00020102] 
struct ADunDefProjectile_Meteor_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateDecal
// [0x00820102] 
struct ADunDefProjectile_Meteor_execUpdateDecal_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           NewScale;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateShadow
// [0x00820102] 
struct ADunDefProjectile_Meteor_execUpdateShadow_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AActor*                                   hitAct;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           NewScale;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.DoHoming
// [0x00020102] 
struct ADunDefProjectile_Meteor_execDoHoming_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefProjectile_Meteor_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefProjectile_Meteor_eventPostBeginPlay_Parms
{
};

// Function DunDefSkyCity.DropOffPoint.GetIsBeingUsed
// [0x00020002] 
struct ADropOffPoint_execGetIsBeingUsed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DropOffPoint.SetBeingUsed
// [0x00020002] 
struct ADropOffPoint_execSetBeingUsed_Parms
{
	unsigned long                                      bNowBeingUsed : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.StopsProjectile
// [0x00020102] 
struct ADunDef_DamagingInterpActor_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.GetDamageAmount
// [0x00020002] 
struct ADunDef_DamagingInterpActor_execGetDamageAmount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.RanInto
// [0x00820802] ( FUNC_Event )
struct ADunDef_DamagingInterpActor_eventRanInto_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct Fdamagee                                 newDamagee;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.EncroachingOn
// [0x00020802] ( FUNC_Event )
struct ADunDef_DamagingInterpActor_eventEncroachingOn_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.ClearDamageList
// [0x00020002] 
struct ADunDef_DamagingInterpActor_execClearDamageList_Parms
{
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.SetDoDamage
// [0x00024002] 
struct ADunDef_DamagingInterpActor_execSetDoDamage_Parms
{
	unsigned long                                      bSetDamage : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bToggleCollision : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetLightningTowerDamagePercent
// [0x00020102] 
struct ADunDef_OldOne_execGetLightningTowerDamagePercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.setIsWebbed
// [0x00020002] 
struct ADunDef_OldOne_execsetIsWebbed_Parms
{
	unsigned long                                      isWebbed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.isWebbed
// [0x00020002] 
struct ADunDef_OldOne_execisWebbed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetChainIgnore
// [0x00020002] 
struct ADunDef_OldOne_execGetChainIgnore_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.SetChainIgnore
// [0x00020002] 
struct ADunDef_OldOne_execSetChainIgnore_Parms
{
	unsigned long                                      ignore : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.IsBeingChainedBy
// [0x00020002] 
struct ADunDef_OldOne_execIsBeingChainedBy_Parms
{
	class ADunDefTower_ChainLightning*                 Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.RemoveFromChainingTowers
// [0x00020002] 
struct ADunDef_OldOne_execRemoveFromChainingTowers_Parms
{
	class ADunDefTower_ChainLightning*                 Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.AddToChainingTowers
// [0x00020002] 
struct ADunDef_OldOne_execAddToChainingTowers_Parms
{
	class ADunDefTower_ChainLightning*                 Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.AllowSuction
// [0x00020002] 
struct ADunDef_OldOne_execAllowSuction_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.IsPlayingCustomAnim
// [0x00024102] 
struct ADunDef_OldOne_execIsPlayingCustomAnim_Parms
{
	struct FName                                       inAnim;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeFromEndToConsiderFinished;                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   Value : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSkyCity.DunDef_OldOne.SetupDamageFlashing
// [0x00020102] 
struct ADunDef_OldOne_execSetupDamageFlashing_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                aNewMat;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.UpdateDamageFlashing
// [0x00020102] 
struct ADunDef_OldOne_execUpdateDamageFlashing_Parms
{
	// float                                           flashAmount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                aMIC;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.LocalTookDamage
// [0x00020102] 
struct ADunDef_OldOne_execLocalTookDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     atPosition;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      fromDamageType;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.NotifyHealthLevel
// [0x00020002] 
struct ADunDef_OldOne_execNotifyHealthLevel_Parms
{
	class ADunDef_OldOneCrystals*                      healthCrystal;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.HealPctOfMaxHealth
// [0x00024002] 
struct ADunDef_OldOne_execHealPctOfMaxHealth_Parms
{
	float                                              HealPct;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowFloatingNumbers : 1;                         		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetHealthPercent
// [0x00020102] 
struct ADunDef_OldOne_execGetHealthPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetHealth
// [0x00024102] 
struct ADunDef_OldOne_execGetHealth_Parms
{
	unsigned long                                      bGetMax : 1;                                      		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.ForceMoveActor
// [0x00020100] 
struct ADunDef_OldOne_execForceMoveActor_Parms
{
	class AActor*                                      Mover;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetOverrideTargetComponent
// [0x00020100] 
struct ADunDef_OldOne_execGetOverrideTargetComponent_Parms
{
	class UPrimitiveComponent*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function DunDefSkyCity.DunDef_OldOne.GetMass
// [0x00020100] 
struct ADunDef_OldOne_execGetMass_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.AllowDarknessIgnorance
// [0x00020100] 
struct ADunDef_OldOne_execAllowDarknessIgnorance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.ForceFriendlyFire
// [0x00024000] 
struct ADunDef_OldOne_execForceFriendlyFire_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetInterpolatedTargetingLocation
// [0x00024100] 
struct ADunDef_OldOne_execGetInterpolatedTargetingLocation_Parms
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetTargetingLocation
// [0x00024100] 
struct ADunDef_OldOne_execGetTargetingLocation_Parms
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.OnDestroy_RemoveFromTargetableList
// [0x00020000] 
struct ADunDef_OldOne_execOnDestroy_RemoveFromTargetableList_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.OnPostBeginPlay_AddToTargetableList
// [0x00020000] 
struct ADunDef_OldOne_execOnPostBeginPlay_AddToTargetableList_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.UnregisterAttacker
// [0x00020000] 
struct ADunDef_OldOne_execUnregisterAttacker_Parms
{
	class ADunDefEnemyController*                      forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.RegisterAttacker
// [0x00020000] 
struct ADunDef_OldOne_execRegisterAttacker_Parms
{
	class ADunDefEnemyController*                      forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetAttackRangeOffset
// [0x00020000] 
struct ADunDef_OldOne_execGetAttackRangeOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.IgnoreFriendlyFireDamage
// [0x00024100] 
struct ADunDef_OldOne_execIgnoreFriendlyFireDamage_Parms
{
	class UDunDefTargetableInterface*                  instigatorActor;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 OptionalController;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetTargetingTeam
// [0x00020102] 
struct ADunDef_OldOne_execGetTargetingTeam_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetTowerTargetingDesirability
// [0x00020102] 
struct ADunDef_OldOne_execGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.GetPlayerTargetingDesirability
// [0x00024102] 
struct ADunDef_OldOne_execGetPlayerTargetingDesirability_Parms
{
	class ADunDefPlayerController*                     forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               ForPlayer;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.TraceEyeMultiBeamDmg
// [0x00820002] 
struct ADunDef_OldOne_execTraceEyeMultiBeamDmg_Parms
{
	int                                                beamIdx;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FDmgActors                               newHitActor;                                      		// 0x0054 (0x0008) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               hitTarg;                                          		// 0x0060 (0x0008) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SetMultiEyeBeamLocation
// [0x00024102] 
struct ADunDef_OldOne_execSetMultiEyeBeamLocation_Parms
{
	int                                                beamIdx;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamNormal;                                       		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.TraceMultiEyeBeam
// [0x00820102] 
struct ADunDef_OldOne_execTraceMultiEyeBeam_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BeamDir;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  impactHitNormal;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  desiredLoc;                                       		// 0x0040 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnFire
// [0x00020002] 
struct ADunDef_OldOne_execSpawnFire_Parms
{
	class ADunDefGasCloud*                             fireTemplate;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLoc;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGasCloud*                          spawnedFire;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.TraceRightEyeDmg
// [0x00820002] 
struct ADunDef_OldOne_execTraceRightEyeDmg_Parms
{
	struct FVector                                     beamStartLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0018 (0x001C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FDmgActors                               newHitActor;                                      		// 0x0050 (0x0008) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               hitTarg;                                          		// 0x005C (0x0008) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SetRightEyeBeamLocation
// [0x00024102] 
struct ADunDef_OldOne_execSetRightEyeBeamLocation_Parms
{
	struct FVector                                     beamStartLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamNormal;                                       		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEyeDmg
// [0x00820002] 
struct ADunDef_OldOne_execTraceLeftEyeDmg_Parms
{
	struct FVector                                     beamStartLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0018 (0x001C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FDmgActors                               newHitActor;                                      		// 0x0050 (0x0008) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               hitTarg;                                          		// 0x005C (0x0008) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SetLeftEyeBeamLocation
// [0x00024102] 
struct ADunDef_OldOne_execSetLeftEyeBeamLocation_Parms
{
	struct FVector                                     beamStartLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamNormal;                                       		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.TraceRightEye
// [0x00820102] 
struct ADunDef_OldOne_execTraceRightEye_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  desiredLoc;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BeamDir;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  impactHitNormal;                                  		// 0x0040 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEye
// [0x00820102] 
struct ADunDef_OldOne_execTraceLeftEye_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  desiredLoc;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BeamDir;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  impactHitNormal;                                  		// 0x0040 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyMultiBeamDmg
// [0x00820002] 
struct ADunDef_OldOne_execTraceBellyMultiBeamDmg_Parms
{
	int                                                beamIdx;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FDmgActors                               newHitActor;                                      		// 0x0054 (0x0008) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               hitTarg;                                          		// 0x0060 (0x0008) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeamDmg
// [0x00820002] 
struct ADunDef_OldOne_execTraceBellyBeamDmg_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FDmgActors                               newHitActor;                                      		// 0x0054 (0x0008) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	// class UDunDefTargetableInterface*               hitTarg;                                          		// 0x0060 (0x0008) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SetBellyBeamLocation
// [0x00024102] 
struct ADunDef_OldOne_execSetBellyBeamLocation_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamNormal;                                       		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.SetMultiBellyBeamLocation
// [0x00024102] 
struct ADunDef_OldOne_execSetMultiBellyBeamLocation_Parms
{
	int                                                beamIdx;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamNormal;                                       		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.TraceMultiBellyBeam
// [0x00820102] 
struct ADunDef_OldOne_execTraceMultiBellyBeam_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BeamDir;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  impactHitNormal;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  desiredLoc;                                       		// 0x0040 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SetRandomLazerPoint
// [0x00020102] 
struct ADunDef_OldOne_execSetRandomLazerPoint_Parms
{
	int                                                lazerIdx;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     lazerPoint;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeam
// [0x00820102] 
struct ADunDef_OldOne_execTraceBellyBeam_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BeamDir;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  impactHitNormal;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  desiredLoc;                                       		// 0x0040 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SetNormalBellyTarget
// [0x00020102] 
struct ADunDef_OldOne_execSetNormalBellyTarget_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   CheckPlayer;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.InitNormalBeams
// [0x00820102] 
struct ADunDef_OldOne_execInitNormalBeams_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FCrazyBellyLazers                        newLazer;                                         		// 0x0004 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSkyCity.DunDef_OldOne.ChooseTarget
// [0x00020002] 
struct ADunDef_OldOne_execChooseTarget_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   CheckPlayer;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class ADunDefPawn* >                    validTargets;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSkyCity.DunDef_OldOne.StartLazers
// [0x00020800] ( FUNC_Event )
struct ADunDef_OldOne_eventStartLazers_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.StopFlameBreath
// [0x00020902] ( FUNC_Event )
struct ADunDef_OldOne_eventStopFlameBreath_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartFlameSweep
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventStartFlameSweep_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.StartFlameburst
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventStartFlameburst_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateChestCrystal
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventActivateChestCrystal_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateRightHandCrystal
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventActivateRightHandCrystal_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateLeftHandCrystal
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventActivateLeftHandCrystal_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateChestCrystal
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventDeactivateChestCrystal_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateRightHandCrystal
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventDeactivateRightHandCrystal_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateLeftHandCrystal
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventDeactivateLeftHandCrystal_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnDoubleSlamEmitter
// [0x00020102] 
struct ADunDef_OldOne_execSpawnDoubleSlamEmitter_Parms
{
	struct FVector                                     SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefEmitterShockwave*                     EmitterTemplate;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefEmitterShockwave*                  ShockWave;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnSingleSlamEmitter
// [0x00020102] 
struct ADunDef_OldOne_execSpawnSingleSlamEmitter_Parms
{
	struct FVector                                     SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefEmitterShockwave*                  ShockWave;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleStomp
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventDoubleStomp_Parms
{
	// struct FVector                                  footLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 footRot;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.RightFootStomp
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventRightFootStomp_Parms
{
	// struct FVector                                  footLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 footRot;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.LeftFootStomp
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventLeftFootStomp_Parms
{
	// struct FVector                                  footLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 footRot;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.UpdateDifficultyValues
// [0x00020002] 
struct ADunDef_OldOne_execUpdateDifficultyValues_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeActivateCollisionDamage
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventDeActivateCollisionDamage_Parms
{
	// class ADunDef_DamagingInterpActor*              currentDamageActor;                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateCollisionDamage
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventActivateCollisionDamage_Parms
{
	// class ADunDef_DamagingInterpActor*              currentDamageActor;                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.GetNumCrystalsThisPhase
// [0x00020002] 
struct ADunDef_OldOne_execGetNumCrystalsThisPhase_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.DoPhaseShift
// [0x00020002] 
struct ADunDef_OldOne_execDoPhaseShift_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.ArePlayersWithinRange
// [0x00020002] 
struct ADunDef_OldOne_execArePlayersWithinRange_Parms
{
	struct FVector                                     LocCheck;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              distCheck;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   CheckPlayer;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.DoDeath
// [0x00820002] 
struct ADunDef_OldOne_execDoDeath_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FCollisionBoxes                          currentBox;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.CheckCrystalDeaths
// [0x00020002] 
struct ADunDef_OldOne_execCheckCrystalDeaths_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.NotifyCrystalDeath
// [0x00020002] 
struct ADunDef_OldOne_execNotifyCrystalDeath_Parms
{
	class ADunDef_OldOneCrystals*                      diedCrystal;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleFootStomp
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventDoubleFootStomp_Parms
{
	// struct FVector                                  footLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 footRot;                                          		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.LeftHandProjectile
// [0x00020800] ( FUNC_Event )
struct ADunDef_OldOne_eventLeftHandProjectile_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.RightHandProjectile
// [0x00020800] ( FUNC_Event )
struct ADunDef_OldOne_eventRightHandProjectile_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.PickSmashAttack
// [0x00020102] 
struct ADunDef_OldOne_execPickSmashAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.DoProjectileAttack
// [0x00020100] 
struct ADunDef_OldOne_execDoProjectileAttack_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckProjectileAttack
// [0x00020100] 
struct ADunDef_OldOne_execCheckProjectileAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForTaunt
// [0x00020100] 
struct ADunDef_OldOne_execCheckForTaunt_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForBeamAttack
// [0x00020000] 
struct ADunDef_OldOne_execCheckForBeamAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.DoTaunt
// [0x00020100] 
struct ADunDef_OldOne_execDoTaunt_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetTauntAnim
// [0x00020102] 
struct ADunDef_OldOne_execGetTauntAnim_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.PlayHurtAnim
// [0x00020102] 
struct ADunDef_OldOne_execPlayHurtAnim_Parms
{
	struct FName                                       theHurtAnim;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.FinishTaunt
// [0x00020002] 
struct ADunDef_OldOne_execFinishTaunt_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnMeteor
// [0x00820002] 
struct ADunDef_OldOne_execSpawnMeteor_Parms
{
	class ADunDefCustomNode*                           theNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SpawnLoc;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        theProjectile;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.StartMeteorAttack
// [0x00020802] ( FUNC_Event )
struct ADunDef_OldOne_eventStartMeteorAttack_Parms
{
	// TArray< class ADunDefCustomNode* >              customNodes;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             randIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             numMeteors;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForMeteorAttack
// [0x00020000] 
struct ADunDef_OldOne_execCheckForMeteorAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForFlame
// [0x00020000] 
struct ADunDef_OldOne_execCheckForFlame_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForLazer
// [0x00020000] 
struct ADunDef_OldOne_execCheckForLazer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForSweep
// [0x00020000] 
struct ADunDef_OldOne_execCheckForSweep_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.EndAttack
// [0x00024000] 
struct ADunDef_OldOne_execEndAttack_Parms
{
	unsigned long                                      bDontEndState : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.ShutDownLazers
// [0x00020102] 
struct ADunDef_OldOne_execShutDownLazers_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.SetInitalEyeLazerTarget
// [0x00020102] 
struct ADunDef_OldOne_execSetInitalEyeLazerTarget_Parms
{
	class AActor*                                      newLazerTarget;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.StartBellyLazer
// [0x00020102] 
struct ADunDef_OldOne_execStartBellyLazer_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.StartEyeLazer
// [0x00020102] 
struct ADunDef_OldOne_execStartEyeLazer_Parms
{
	// struct FName                                    playAnimName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.BeginFlameSweepAnim
// [0x00020900] ( FUNC_Event )
struct ADunDef_OldOne_eventBeginFlameSweepAnim_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoFlameSweep
// [0x00020102] 
struct ADunDef_OldOne_execDoFlameSweep_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleHandStomp
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventDoubleHandStomp_Parms
{
	// struct FVector                                  handLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 handRot;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.LeftHandStomp
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventLeftHandStomp_Parms
{
	// struct FVector                                  handLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 handRot;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.RightHandStomp
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventRightHandStomp_Parms
{
	// struct FVector                                  handLoc;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 handRot;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.GetAttackDelay
// [0x00020002] 
struct ADunDef_OldOne_execGetAttackDelay_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOne.SetPhase
// [0x00020002] 
struct ADunDef_OldOne_execSetPhase_Parms
{
	unsigned char                                      newPhase;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.OnToggle
// [0x00020102] 
struct ADunDef_OldOne_execOnToggle_Parms
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOne.StartAttack
// [0x00020100] 
struct ADunDef_OldOne_execStartAttack_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.PickAttack
// [0x00020000] 
struct ADunDef_OldOne_execPickAttack_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOne.StopCustomAnim
// [0x00024102] 
struct ADunDef_OldOne_execStopCustomAnim_Parms
{
	float                                              blendTimeOut;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       CustomAnimationToStop;                            		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bReplicate : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForceReplication : 1;                            		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   isReplicated : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bIsCustomName : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefSkyCity.DunDef_OldOne.PlayCustomAnim
// [0x00024102] 
struct ADunDef_OldOne_execPlayCustomAnim_Parms
{
	struct FName                                       inAnim;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              blendTimeIn;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      Looping : 1;                                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              Speed;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      Replicate : 1;                                    		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUninterruptable : 1;                             		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bReplicateToOwners : 1;                           		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Value;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.InitCrystals
// [0x00020002] 
struct ADunDef_OldOne_execInitCrystals_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.ClearCrystalsRefs
// [0x00020102] 
struct ADunDef_OldOne_execClearCrystalsRefs_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.PopulateCustomNode
// [0x00020002] 
struct ADunDef_OldOne_execPopulateCustomNode_Parms
{
	// class AActor*                                   act;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADunDefCustomNode*                        tNode;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               wInfo;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOne.PostBeginPlay
// [0x00820902] ( FUNC_Event )
struct ADunDef_OldOne_eventPostBeginPlay_Parms
{
	// struct FCollisionBoxes                          currentBox;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             it;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 Component;                                        		// 0x0028 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FCrazyBellyLazers                        newLazer;                                         		// 0x002C (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefSkyCity.DunDef_OldOne.ExecReplicatedFunction
// [0x00024102] 
struct ADunDef_OldOne_execExecReplicatedFunction_Parms
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

// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetPlayerTargetingDesirability
// [0x00024102] 
struct ADunDef_OldOneCrystals_execDTGetPlayerTargetingDesirability_Parms
{
	class ADunDefPlayerController*                     forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               ForPlayer;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetTowerTargetingDesirability
// [0x00020102] 
struct ADunDef_OldOneCrystals_execDTGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.IgnoreFriendlyFireDamage
// [0x00024102] 
struct ADunDef_OldOneCrystals_execIgnoreFriendlyFireDamage_Parms
{
	class UDunDefTargetableInterface*                  instigatorActor;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 OptionalController;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DrawMyHUD
// [0x00820102] 
struct ADunDef_OldOneCrystals_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FLinearColor                             healthColor;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
	// float                                           healthPercent;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  healthColorVec;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           IconDistanceScale;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           IconWidth;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           IconHeight;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayHitEffect
// [0x00020102] 
struct ADunDef_OldOneCrystals_execPlayHitEffect_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDamageFlashing
// [0x00020102] 
struct ADunDef_OldOneCrystals_execUpdateDamageFlashing_Parms
{
	// float                                           flashAmount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.LocalTookDamage
// [0x00020102] 
struct ADunDef_OldOneCrystals_execLocalTookDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     atPosition;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      fromDamageType;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.SubtractHealth
// [0x00020002] 
struct ADunDef_OldOneCrystals_execSubtractHealth_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DmgPct;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.SetInPlay
// [0x00020002] 
struct ADunDef_OldOneCrystals_execSetInPlay_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.RepairCrystal
// [0x00020002] 
struct ADunDef_OldOneCrystals_execRepairCrystal_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.StopsProjectile
// [0x00020102] 
struct ADunDef_OldOneCrystals_execStopsProjectile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateHealthColor
// [0x00020100] 
struct ADunDef_OldOneCrystals_execUpdateHealthColor_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.NotifyHealthChange
// [0x00020102] 
struct ADunDef_OldOneCrystals_execNotifyHealthChange_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateActivate
// [0x00820102] 
struct ADunDef_OldOneCrystals_execUpdateActivate_Parms
{
	// struct FLinearColor                             healthColor;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Deactivate
// [0x00020102] 
struct ADunDef_OldOneCrystals_execDeactivate_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Activate
// [0x00020102] 
struct ADunDef_OldOneCrystals_execActivate_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.BaseChange
// [0x00020800] ( FUNC_Event )
struct ADunDef_OldOneCrystals_eventBaseChange_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.ShutDownCrystal
// [0x00020102] 
struct ADunDef_OldOneCrystals_execShutDownCrystal_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDissolve
// [0x00020102] 
struct ADunDef_OldOneCrystals_execUpdateDissolve_Parms
{
	// float                                           dissolveValue;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DissolveCrystal
// [0x00020102] 
struct ADunDef_OldOneCrystals_execDissolveCrystal_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayDeath
// [0x00020102] 
struct ADunDef_OldOneCrystals_execPlayDeath_Parms
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Died
// [0x00020002] 
struct ADunDef_OldOneCrystals_execDied_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.InitCrystal
// [0x00820102] 
struct ADunDef_OldOneCrystals_execInitCrystal_Parms
{
	class ADunDef_OldOne*                              owningOldOne;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Loc;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDef_OldOneCrystals_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefOldOneBreath.HurtRadius
// [0x00824102] 
struct ADunDefOldOneBreath_execHurtRadius_Parms
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
	// struct FRotator                                 RotToTarget;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefEmitterShockwave.RingHurtRadius
// [0x00024102] 
struct ADunDefEmitterShockwave_execRingHurtRadius_Parms
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
	// float                                           distFromCenter;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefEmitterShockwave.Tick
// [0x00820902] ( FUNC_Event )
struct ADunDefEmitterShockwave_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  newSize;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefEmitterShockwave.AllowSpawn
// [0x00022802] ( FUNC_Event )
struct ADunDefEmitterShockwave_eventAllowSpawn_Parms
{
	class AActor*                                      theArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     theLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    theRot;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefEmitterShockwave.HurtRadius
// [0x00024102] 
struct ADunDefEmitterShockwave_execHurtRadius_Parms
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
};

// Function DunDefSkyCity.DunDefEmitterShockwave.DoDamage
// [0x00020002] 
struct ADunDefEmitterShockwave_execDoDamage_Parms
{
};

// Function DunDefSkyCity.DunDefEmitterShockwave.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefEmitterShockwave_eventPostBeginPlay_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefGoblinCopter_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetTargetingLocation
// [0x00024102] 
struct ADunDefGoblinCopter_execGetTargetingLocation_Parms
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.SpawnFlare
// [0x00020102] 
struct ADunDefGoblinCopter_execSpawnFlare_Parms
{
	struct FVector                                     flareLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    flareRot;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetFlareSpawnLocAndRot
// [0x00C20002] 
struct ADunDefGoblinCopter_execGetFlareSpawnLocAndRot_Parms
{
	struct FVector                                     flareLoc;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    flareRot;                                         		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// unsigned long                                   bDoLeftSide : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FRotator                                 RotOffset;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.CheckGCopterProximity
// [0x00820002] 
struct ADunDefGoblinCopter_execCheckGCopterProximity_Parms
{
	// class ADunDefGoblinCopter*                      outGCopter;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  diff;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyValues
// [0x00024002] 
struct ADunDefGoblinCopter_execUpdateDifficultyValues_Parms
{
	unsigned long                                      UpdateMaterial : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      onlyDynamicValues : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.DrawMiniMapIcon
// [0x00820102] 
struct ADunDefGoblinCopter_execDrawMiniMapIcon_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefMiniMap*                              MiniMap;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  MapPos;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               theTex;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.PauseAnimationAfterDeath
// [0x00020902] ( FUNC_Event )
struct ADunDefGoblinCopter_eventPauseAnimationAfterDeath_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDying
// [0x00020102] 
struct ADunDefGoblinCopter_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.Died
// [0x00020002] 
struct ADunDefGoblinCopter_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoDoubleShoot
// [0x00020802] ( FUNC_Event )
struct ADunDefGoblinCopter_eventDoDoubleShoot_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoRightShoot
// [0x00820802] ( FUNC_Event )
struct ADunDefGoblinCopter_eventDoRightShoot_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoLeftShoot
// [0x00820802] ( FUNC_Event )
struct ADunDefGoblinCopter_eventDoLeftShoot_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDoubleShootAnim
// [0x00020102] 
struct ADunDefGoblinCopter_execPlayDoubleShootAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayRightShootAnim
// [0x00020102] 
struct ADunDefGoblinCopter_execPlayRightShootAnim_Parms
{
	float                                              shootPlayRate;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayLeftShootAnim
// [0x00020102] 
struct ADunDefGoblinCopter_execPlayLeftShootAnim_Parms
{
	float                                              shootPlayRate;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.ResetHeldPawnValues
// [0x00020102] 
struct ADunDefGoblinCopter_execResetHeldPawnValues_Parms
{
	class ADunDefEnemy*                                thePawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.DropPawn
// [0x00020802] ( FUNC_Event )
struct ADunDefGoblinCopter_eventDropPawn_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDropOffAnim
// [0x00020102] 
struct ADunDefGoblinCopter_execPlayDropOffAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.SetMovementPhysics
// [0x00020002] 
struct ADunDefGoblinCopter_execSetMovementPhysics_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.CanBeBaseForPawn
// [0x00020102] 
struct ADunDefGoblinCopter_execCanBeBaseForPawn_Parms
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.InitNewHeldPawn
// [0x00020102] 
struct ADunDefGoblinCopter_execInitNewHeldPawn_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.SetUpHoldingPawn
// [0x00820102] 
struct ADunDefGoblinCopter_execSetUpHoldingPawn_Parms
{
	class ADunDefEnemy*                                newHeldPawn;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SpawnLoc;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.SpawnHoldingPawn
// [0x00820002] 
struct ADunDefGoblinCopter_execSpawnHoldingPawn_Parms
{
	// class ADunDefEnemy*                             newHeldPawn;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             enemyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  heldLoc;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// class AController*                              theController;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetHeldPawnExtraDifficultyOffset
// [0x00020002] 
struct ADunDefGoblinCopter_execGetHeldPawnExtraDifficultyOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopter.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGoblinCopter_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.TurnOnVFX
// [0x00020102] 
struct ADunDefGoblinCopter_execTurnOnVFX_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyMaterial
// [0x00020102] 
struct ADunDefGoblinCopter_execUpdateDifficultyMaterial_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopter.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGoblinCopter_eventPostBeginPlay_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefGoblinCopter_execExecReplicatedFunction_Parms
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

// Function DunDefSkyCity.DunDefGoblinCopter.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefGoblinCopter_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefGoblinCopterController.SpawnRocket
// [0x00820002] 
struct ADunDefGoblinCopterController_execSpawnRocket_Parms
{
	struct FVector                                     SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ShootDirection;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// class ADunDefHomingProjectile*                  theProjectile;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopterController.PlayMissileShootAnim
// [0x00020002] 
struct ADunDefGoblinCopterController_execPlayMissileShootAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinDropRange
// [0x00020002] 
struct ADunDefGoblinCopterController_execIsWithinDropRange_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDropOffLoS
// [0x00020002] 
struct ADunDefGoblinCopterController_execCheckDropOffLoS_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopterController.ShootFlare
// [0x00820002] 
struct ADunDefGoblinCopterController_execShootFlare_Parms
{
	// class ADunDefGoblinCopter*                      myCopter;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  flareSpawnLoc;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 flareSpawnRot;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckForDropOffRange
// [0x00020002] 
struct ADunDefGoblinCopterController_execCheckForDropOffRange_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckAttackSight
// [0x00020002] 
struct ADunDefGoblinCopterController_execCheckAttackSight_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinAttackRange
// [0x00824002] 
struct ADunDefGoblinCopterController_execIsWithinAttackRange_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              AttackRangeOffset;                                		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCheckDeltaZ : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ClosestPoint;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnLocation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  BoxExtent;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ClosestPointOnBox;                                		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ClosestPointOnPrimitive;                          		// 0x0040 (0x000C) [0x0000000000000000]              
	// float                                           TargetableRangeOffset;                            		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopterController.DoAttack
// [0x00020002] 
struct ADunDefGoblinCopterController_execDoAttack_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.FindDropOffPoint
// [0x00020002] 
struct ADunDefGoblinCopterController_execFindDropOffPoint_Parms
{
	// class ADropOffPoint*                            bestPoint;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ADropOffPoint*                            Checkpoint;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           bestDistance;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           checkDistance;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GetTargetMoveToPoint
// [0x00020002] 
struct ADunDefGoblinCopterController_execGetTargetMoveToPoint_Parms
{
	class AActor*                                      moveToActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           zDifference;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GetZDifference
// [0x00020002] 
struct ADunDefGoblinCopterController_execGetZDifference_Parms
{
	class AActor*                                      zActor;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDirectReachability
// [0x00020002] 
struct ADunDefGoblinCopterController_execCheckDirectReachability_Parms
{
	// class AActor*                                   PreviousTarget;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckIndirectReachability
// [0x00020002] 
struct ADunDefGoblinCopterController_execCheckIndirectReachability_Parms
{
	// class AActor*                                   PreviousTarget;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
struct ADunDefGoblinCopterController_eventGeneratePathToActor_Parms
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WithinDistance;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowPartialPath : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  NextDest;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefSkyCity.DunDefGoblinCopterController.NavActorReachable
// [0x00020002] 
struct ADunDefGoblinCopterController_execNavActorReachable_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopterController.FindNearestNavPointTo
// [0x00024002] 
struct ADunDefGoblinCopterController_execFindNearestNavPointTo_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCheckVisible : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefSkyCity.DunDefGoblinCopterController.SetMyPawn
// [0x00020002] 
struct ADunDefGoblinCopterController_execSetMyPawn_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.Possess
// [0x00020802] ( FUNC_Event )
struct ADunDefGoblinCopterController_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefSkyCity.DunDefGoblinCopterController.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefGoblinCopterController_eventDestroyed_Parms
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGoblinCopterController_eventPostBeginPlay_Parms
{
	// class ADropOffPoint*                            newPoint;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif