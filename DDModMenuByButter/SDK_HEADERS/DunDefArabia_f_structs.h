/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefArabia_f_structs.h
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

// Function DunDefArabia.GenieLamp.PlayActivateAnim
// [0x00820102] 
struct AGenieLamp_execPlayActivateAnim_Parms
{
	// struct FVector                                  emitterLoc;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 emitterRot;                                       		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.GenieLamp.ShutDownEffects
// [0x00020102] 
struct AGenieLamp_execShutDownEffects_Parms
{
};

// Function DunDefArabia.GenieLamp.StartActiveEffects
// [0x00020102] 
struct AGenieLamp_execStartActiveEffects_Parms
{
};

// Function DunDefArabia.GenieLamp.DoActivation
// [0x00020002] 
struct AGenieLamp_execDoActivation_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.GenieLamp.RemoveCurrentGenieFromLamp
// [0x00020002] 
struct AGenieLamp_execRemoveCurrentGenieFromLamp_Parms
{
};

// Function DunDefArabia.GenieLamp.GiveLampAGenie
// [0x00020002] 
struct AGenieLamp_execGiveLampAGenie_Parms
{
	class AController*                                 newGenie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.GenieLamp.GetToolTipPriority
// [0x00020100] 
struct AGenieLamp_execGetToolTipPriority_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.GenieLamp.TakesToolTipPriority
// [0x00020100] 
struct AGenieLamp_execTakesToolTipPriority_Parms
{
	class UDunDefToolTipInterface*                     otherToolTip;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.GenieLamp.ContinueDrawingToolTip
// [0x00020100] 
struct AGenieLamp_execContinueDrawingToolTip_Parms
{
	unsigned long                                      ContinueDrawing : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.GenieLamp.DrawToolTip
// [0x00824102] 
struct AGenieLamp_execDrawToolTip_Parms
{
	class UCanvas*                                     C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosX;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                ForPlayer;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           canvasScale;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DrawCoords;                                       		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.GenieLamp.GetActivationOffset
// [0x00020100] 
struct AGenieLamp_execGetActivationOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.GenieLamp.GetActivationWeighting
// [0x00020102] 
struct AGenieLamp_execGetActivationWeighting_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.GenieLamp.Client_Activate
// [0x00024100] 
struct AGenieLamp_execClient_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.GenieLamp.Server_Activate
// [0x00024002] 
struct AGenieLamp_execServer_Activate_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      forceActivation : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                activationType;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.GenieLamp.AllowActivation
// [0x00024102] 
struct AGenieLamp_execAllowActivation_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                activationType;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           DistToTarget;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.GenieLamp.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AGenieLamp_eventPostBeginPlay_Parms
{
};

// Function DunDefArabia.GenieLamp.ExecReplicatedFunction
// [0x00024102] 
struct AGenieLamp_execExecReplicatedFunction_Parms
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

// Function DunDefArabia.DunDefGenieBossController.NotifyDjinnDeath
// [0x00020002] 
struct ADunDefGenieBossController_execNotifyDjinnDeath_Parms
{
	class ADunDefDjinn*                                deadDjinn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.SpawnDjinn
// [0x00820002] 
struct ADunDefGenieBossController_execSpawnDjinn_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// class ADunDefDjinn*                             newDjinn;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             spawnSocket;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.KeepSpawningBabies
// [0x00020002] 
struct ADunDefGenieBossController_execKeepSpawningBabies_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBossController.ClearHitList
// [0x00020002] 
struct ADunDefGenieBossController_execClearHitList_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.SetTongueSwing
// [0x00020002] 
struct ADunDefGenieBossController_execSetTongueSwing_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.AddToSwingHurtList
// [0x00020002] 
struct ADunDefGenieBossController_execAddToSwingHurtList_Parms
{
	class AActor*                                      newEntry;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBossController.ShouldDamage
// [0x00020002] 
struct ADunDefGenieBossController_execShouldDamage_Parms
{
	class AActor*                                      act;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBossController.CheckForBurp
// [0x00020002] 
struct ADunDefGenieBossController_execCheckForBurp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Angle;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.CheckForMelee
// [0x00020002] 
struct ADunDefGenieBossController_execCheckForMelee_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   TestActor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ValidTarget;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.CheckForSuperTongue
// [0x00020002] 
struct ADunDefGenieBossController_execCheckForSuperTongue_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   TestActor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.BiteStop
// [0x00020002] 
struct ADunDefGenieBossController_execBiteStop_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.BiteStart
// [0x00020000] 
struct ADunDefGenieBossController_execBiteStart_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.DoBurp
// [0x00820002] 
struct ADunDefGenieBossController_execDoBurp_Parms
{
	// struct FVector                                  BurpSpawnLocation;                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BurpSpawnRotation;                                		// 0x000C (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        theProjectile;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BurpShootDirection;                               		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  BurpLandLocation;                                 		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TempShootDirection;                               		// 0x0034 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             Counter;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             shiftDirection;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	// class ADunDefProjectile*                        currentBurpTemplate;                              		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.CheckForCustomAttacks
// [0x00020002] 
struct ADunDefGenieBossController_execCheckForCustomAttacks_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.GetCDMultiplier
// [0x00020002] 
struct ADunDefGenieBossController_execGetCDMultiplier_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBossController.CheckPlayerCloseness
// [0x00020000] 
struct ADunDefGenieBossController_execCheckPlayerCloseness_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.PickLamp
// [0x00020002] 
struct ADunDefGenieBossController_execPickLamp_Parms
{
	// TArray< class AGenieLamp* >                     tempLamps;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.NotifyLampRubbed
// [0x00020002] 
struct ADunDefGenieBossController_execNotifyLampRubbed_Parms
{
	class AActor*                                      newSpawnPoint;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBossController.NotifyReformed
// [0x00020002] 
struct ADunDefGenieBossController_execNotifyReformed_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.LeaveLamp
// [0x00020000] 
struct ADunDefGenieBossController_execLeaveLamp_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckActiveDamage
// [0x00020002] 
struct ADunDefGenieBossController_execCheckActiveDamage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           DmgPct;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             GameDifficulty;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.FindTargetRightEye
// [0x00024002] 
struct ADunDefGenieBossController_execFindTargetRightEye_Parms
{
	unsigned long                                      bSetTarget : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   TestActor;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ValidTarget;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           bestDistance;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           currentDistance;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.FindTargetLeftEye
// [0x00024002] 
struct ADunDefGenieBossController_execFindTargetLeftEye_Parms
{
	unsigned long                                      bSetTarget : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   TestActor;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ValidTarget;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           bestDistance;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           currentDistance;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.TraceRightEye
// [0x00820002] 
struct ADunDefGenieBossController_execTraceRightEye_Parms
{
	struct FVector                                     beamStartLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      currentEyeDmgType;                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FBeamHitActors                           newHitActor;                                      		// 0x0054 (0x0008) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.TraceLeftEye
// [0x00820002] 
struct ADunDefGenieBossController_execTraceLeftEye_Parms
{
	struct FVector                                     beamStartLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      currentEyeDmgType;                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FBeamHitActors                           newHitActor;                                      		// 0x0054 (0x0008) [0x0000000000000000]              
	// int                                             currentHitIndex;                                  		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.ShutDownEyes
// [0x00020002] 
struct ADunDefGenieBossController_execShutDownEyes_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.StopEyeTracking
// [0x00020002] 
struct ADunDefGenieBossController_execStopEyeTracking_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.GoToLamp
// [0x00020002] 
struct ADunDefGenieBossController_execGoToLamp_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.SetRageMode
// [0x00020002] 
struct ADunDefGenieBossController_execSetRageMode_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.NotifyTakeHitEX
// [0x00020002] 
struct ADunDefGenieBossController_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBossController.WantsHurtAnimation
// [0x00020002] 
struct ADunDefGenieBossController_execWantsHurtAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBossController.ForceIntoLamp
// [0x00020002] 
struct ADunDefGenieBossController_execForceIntoLamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBossController.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ADunDefGenieBossController_eventSetInitialState_Parms
{
};

// Function DunDefArabia.DunDefGenieBossController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGenieBossController_eventPostBeginPlay_Parms
{
	// class AGenieLamp*                               theLamp;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DjinnLamp.PlayKillAnim
// [0x00820102] 
struct ADjinnLamp_execPlayKillAnim_Parms
{
	// struct FVector                                  emitterLoc;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 emitterRot;                                       		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.DjinnLamp.DoActivation
// [0x00020002] 
struct ADjinnLamp_execDoActivation_Parms
{
	class ADunDefPlayerController*                     PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DjinnLamp.RemoveCurrentGenieFromLamp
// [0x00020002] 
struct ADjinnLamp_execRemoveCurrentGenieFromLamp_Parms
{
};

// Function DunDefArabia.DjinnLamp.GiveLampAGenie
// [0x00020002] 
struct ADjinnLamp_execGiveLampAGenie_Parms
{
	class AController*                                 newGenie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DjinnLamp.ExecReplicatedFunction
// [0x00024102] 
struct ADjinnLamp_execExecReplicatedFunction_Parms
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

// Function DunDefArabia.DunDefDjinnController.Destroyed
// [0x00020802] ( FUNC_Event )
struct ADunDefDjinnController_eventDestroyed_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.DoAllyDjinnTimeOut
// [0x00020002] 
struct ADunDefDjinnController_execDoAllyDjinnTimeOut_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyLampRubbed
// [0x00020002] 
struct ADunDefDjinnController_execNotifyLampRubbed_Parms
{
	class AActor*                                      SpawnPoint;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayerController*                     RubbedController;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.PickLamp
// [0x00020002] 
struct ADunDefDjinnController_execPickLamp_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.AllowDeath
// [0x00020002] 
struct ADunDefDjinnController_execAllowDeath_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.NotifyFinishedReforming
// [0x00020000] 
struct ADunDefDjinnController_execNotifyFinishedReforming_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.LeaveLamp
// [0x00020000] 
struct ADunDefDjinnController_execLeaveLamp_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyGenieOfDeath
// [0x00020002] 
struct ADunDefDjinnController_execNotifyGenieOfDeath_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.PawnDied
// [0x00020002] 
struct ADunDefDjinnController_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.SetMyGenie
// [0x00020002] 
struct ADunDefDjinnController_execSetMyGenie_Parms
{
	class ADunDefGenieBossController*                  newGenie;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.ForceFlee
// [0x00020002] 
struct ADunDefDjinnController_execForceFlee_Parms
{
	class ADunDefPawn*                                 ForceFleeTarget;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.CheckForFlee
// [0x00020002] 
struct ADunDefDjinnController_execCheckForFlee_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayer*                            Player;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AMain*                                    TheMain;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           FleeRadiusSq;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.GetProjectile
// [0x00020002] 
struct ADunDefDjinnController_execGetProjectile_Parms
{
	class ADunDefProjectile*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.PickProjectileType
// [0x00020002] 
struct ADunDefDjinnController_execPickProjectileType_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.ShootProjectile
// [0x00820002] 
struct ADunDefDjinnController_execShootProjectile_Parms
{
	// struct FVector                                  SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        theProjectile;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ShootDirection;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// class ADunDefProjectile*                        currentProjTemplate;                              		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.CheckForCustomAttacks
// [0x00020002] 
struct ADunDefDjinnController_execCheckForCustomAttacks_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.IsValidUpgradeTower
// [0x00020102] 
struct ADunDefDjinnController_execIsValidUpgradeTower_Parms
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.CastTowerDestructSpell
// [0x00020002] 
struct ADunDefDjinnController_execCastTowerDestructSpell_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.FindDestroyTower
// [0x00020002] 
struct ADunDefDjinnController_execFindDestroyTower_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefTower*                             currentTower;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             BestTower;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           bestScore;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           testScore;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           DistanceToTower;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           DistanceToTowerSq;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             UpgradeLevel;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.DestroyTower
// [0x00020002] 
struct ADunDefDjinnController_execDestroyTower_Parms
{
	// class ADunDefTower*                             towerTarget;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.PlayFinishTowerDestructAnim
// [0x00020002] 
struct ADunDefDjinnController_execPlayFinishTowerDestructAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefTower*                             towerTarget;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.FinishTowerDestructCast
// [0x00020002] 
struct ADunDefDjinnController_execFinishTowerDestructCast_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.HealGoldTarget
// [0x00020002] 
struct ADunDefDjinnController_execHealGoldTarget_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.CastGoldEnemySpell
// [0x00020002] 
struct ADunDefDjinnController_execCastGoldEnemySpell_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.FindGoldEnemyTarget
// [0x00020002] 
struct ADunDefDjinnController_execFindGoldEnemyTarget_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefEnemy*                             currentActor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DistanceToTargetSq;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           CurrentScore;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           bestScore;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AActor*                                   bestActor;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.CheckValidGoldTarget
// [0x00020002] 
struct ADunDefDjinnController_execCheckValidGoldTarget_Parms
{
	class ADunDefEnemy*                                checkActor;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.PlayFinishGoldAnim
// [0x00020002] 
struct ADunDefDjinnController_execPlayFinishGoldAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.FinishGoldEnemyCast
// [0x00020002] 
struct ADunDefDjinnController_execFinishGoldEnemyCast_Parms
{
	// class ADunDefEnemy*                             goldTarget;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.CheckCastTimeout
// [0x00020002] 
struct ADunDefDjinnController_execCheckCastTimeout_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.CheckForCastingMovement
// [0x00020002] 
struct ADunDefDjinnController_execCheckForCastingMovement_Parms
{
	unsigned long                                      bHasLineOfSight : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.ClearCurrentSpellTarget
// [0x00020002] 
struct ADunDefDjinnController_execClearCurrentSpellTarget_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyTakeHitEX
// [0x00020002] 
struct ADunDefDjinnController_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.NotifyDamageTaken
// [0x00020000] 
struct ADunDefDjinnController_execNotifyDamageTaken_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.CheckCurrentCastTarget
// [0x00020002] 
struct ADunDefDjinnController_execCheckCurrentCastTarget_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.Cough
// [0x00024002] 
struct ADunDefDjinnController_execCough_Parms
{
	struct FName                                       coughAnimName;                                    		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.InterruptSpellCast
// [0x00024000] 
struct ADunDefDjinnController_execInterruptSpellCast_Parms
{
	unsigned long                                      bNoSeeking : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.CheckSpellDamageAmount
// [0x00020002] 
struct ADunDefDjinnController_execCheckSpellDamageAmount_Parms
{
	class AActor*                                      DamageCauser;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           currentDmgPct;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.CheckAllowedCastingStart
// [0x00020002] 
struct ADunDefDjinnController_execCheckAllowedCastingStart_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.IsWithinCastingRange
// [0x00020002] 
struct ADunDefDjinnController_execIsWithinCastingRange_Parms
{
	class AActor*                                      FollowTarget;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.FindNearestFleePoint
// [0x00824002] 
struct ADunDefDjinnController_execFindNearestFleePoint_Parms
{
	unsigned long                                      bIgnoreFleeAngle : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             MyDistance;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             NearestDistance;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// class AFlightPathNode*                          NavPoint;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  FleeDir;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirToFleePt;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.CheckFleeDistance
// [0x00020002] 
struct ADunDefDjinnController_execCheckFleeDistance_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.StopFlee
// [0x00020002] 
struct ADunDefDjinnController_execStopFlee_Parms
{
};

// Function DunDefArabia.DunDefDjinnController.CheckDirectReachability
// [0x00020002] 
struct ADunDefDjinnController_execCheckDirectReachability_Parms
{
	// class AActor*                                   PreviousTarget;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.CheckIndirectReachability
// [0x00020002] 
struct ADunDefDjinnController_execCheckIndirectReachability_Parms
{
	// class AActor*                                   PreviousTarget;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.MoveUnreachable
// [0x00020800] ( FUNC_Event )
struct ADunDefDjinnController_eventMoveUnreachable_Parms
{
	struct FVector                                     AttemptedDest;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      AttemptedTarget;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.GetObstructionJumpForwardDir
// [0x00020002] 
struct ADunDefDjinnController_execGetObstructionJumpForwardDir_Parms
{
	struct FVector                                     forwardDir;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.ObstructionJump
// [0x00020002] 
struct ADunDefDjinnController_execObstructionJump_Parms
{
	struct FVector                                     jumpForwardDir;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     jumpSideDir;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnController.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
struct ADunDefDjinnController_eventGeneratePathToActor_Parms
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WithinDistance;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowPartialPath : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  NextDest;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.MoveAroundBlockade
// [0x00024000] 
struct ADunDefDjinnController_execMoveAroundBlockade_Parms
{
	class AActor*                                      blockadeActor;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlockadeWidth;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      SkipBlockingCheck : 1;                            		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.NavActorReachable
// [0x00020002] 
struct ADunDefDjinnController_execNavActorReachable_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnController.FindNearestNavPointTo
// [0x00024002] 
struct ADunDefDjinnController_execFindNearestNavPointTo_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCheckVisible : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         aNavPoint;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.GetTargetingMultiplier
// [0x00024002] 
struct ADunDefDjinnController_execGetTargetingMultiplier_Parms
{
	class AActor*                                      ActorRef;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              baseDesirability;                                 		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             it;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           TargetingMult;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefDjinnController_eventPostBeginPlay_Parms
{
	// class ADunDefDjinnManager*                      theManager;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia_eventActivated_Parms
{
	// class USeqVar_ObjectList*                       listIt;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UObject*                                  objectIt;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             it;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         aSpawnPointsList;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UDunDef_SeqVar_EnemyWaveEntries*          seqVar;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge.RefreshBillboard
// [0x00020002] 
struct ADunDefWaveBillBoard_ArabiaChallenge_execRefreshBillboard_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             kk;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AActor*                                   SpawnPoint;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned long                                   HasOurSpawnPoint : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             entryDisplayIndex;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             masterWaveNum;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             missionSwitch;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinn.GetPawnDamageModifier
// [0x00024102] 
struct ADunDefDjinn_execGetPawnDamageModifier_Parms
{
	unsigned long                                      bDontIncludeAbilities : 1;                        		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           allyMult;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinn.GetMiniMapIconTexture
// [0x00020102] 
struct ADunDefDjinn_execGetMiniMapIconTexture_Parms
{
	class UTexture2D*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.UpdateToTeamMaterial
// [0x00020102] 
struct ADunDefDjinn_execUpdateToTeamMaterial_Parms
{
	// int                                             it;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinn.NotifyTeamSwitch
// [0x00020102] 
struct ADunDefDjinn_execNotifyTeamSwitch_Parms
{
};

// Function DunDefArabia.DunDefDjinn.NotifyOfDeath
// [0x00020002] 
struct ADunDefDjinn_execNotifyOfDeath_Parms
{
	class ADunDefPlayerController*                     Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             MyTeam;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             worth;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinn.UnHideDjinn
// [0x00020102] 
struct ADunDefDjinn_execUnHideDjinn_Parms
{
};

// Function DunDefArabia.DunDefDjinn.HideDjinn
// [0x00020102] 
struct ADunDefDjinn_execHideDjinn_Parms
{
};

// Function DunDefArabia.DunDefDjinn.PlayGoToLamp
// [0x00820102] 
struct ADunDefDjinn_execPlayGoToLamp_Parms
{
	class AActor*                                      theLamp;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  dirToLamp;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinn.PlayLeaveLamp
// [0x00020102] 
struct ADunDefDjinn_execPlayLeaveLamp_Parms
{
};

// Function DunDefArabia.DunDefDjinn.LeaveLamp
// [0x00020002] 
struct ADunDefDjinn_execLeaveLamp_Parms
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinn.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
struct ADunDefDjinn_eventGetEnemyTargetingDesirability_Parms
{
	class AEngineNativeDunDefAIController*             forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefEnemy*                             dde;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           val;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinn.GetMiniMapIconColor
// [0x00020102] 
struct ADunDefDjinn_execGetMiniMapIconColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.CheckDjinnProximity
// [0x00820002] 
struct ADunDefDjinn_execCheckDjinnProximity_Parms
{
	// class APawn*                                    outDjinn;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  diff;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           upDot;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           DjinnProxDistanceSq;                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinn.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefDjinn_eventTakeDamage_Parms
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

// Function DunDefArabia.DunDefDjinn.AllowTrapSpringing
// [0x00020002] 
struct ADunDefDjinn_execAllowTrapSpringing_Parms
{
	class ADunDefTower_DetonationType*                 trap;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.ShutDownAllCastingVFX
// [0x00020102] 
struct ADunDefDjinn_execShutDownAllCastingVFX_Parms
{
};

// Function DunDefArabia.DunDefDjinn.PlayAttackAnimation
// [0x00020102] 
struct ADunDefDjinn_execPlayAttackAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.GetProjectileLocAndRot
// [0x00420102] 
struct ADunDefDjinn_execGetProjectileLocAndRot_Parms
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    Orientation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefArabia.DunDefDjinn.FireProjectile
// [0x00020802] ( FUNC_Event )
struct ADunDefDjinn_eventFireProjectile_Parms
{
};

// Function DunDefArabia.DunDefDjinn.ResetTowers
// [0x00020102] 
struct ADunDefDjinn_execResetTowers_Parms
{
};

// Function DunDefArabia.DunDefDjinn.ShutDownTowerVFX
// [0x00020102] 
struct ADunDefDjinn_execShutDownTowerVFX_Parms
{
};

// Function DunDefArabia.DunDefDjinn.StopTowerDestructCast
// [0x00020102] 
struct ADunDefDjinn_execStopTowerDestructCast_Parms
{
	class ADunDefTower*                                theTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.SetInitialTowerValues
// [0x00020102] 
struct ADunDefDjinn_execSetInitialTowerValues_Parms
{
};

// Function DunDefArabia.DunDefDjinn.StartTowerUpgradeCast
// [0x00020102] 
struct ADunDefDjinn_execStartTowerUpgradeCast_Parms
{
	class AActor*                                      castTarget;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.StartTowerDestructCast
// [0x00020102] 
struct ADunDefDjinn_execStartTowerDestructCast_Parms
{
	class AActor*                                      castTarget;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.StartTowerBeam
// [0x00020902] ( FUNC_Event )
struct ADunDefDjinn_eventStartTowerBeam_Parms
{
};

// Function DunDefArabia.DunDefDjinn.UpdateTower
// [0x00020102] 
struct ADunDefDjinn_execUpdateTower_Parms
{
};

// Function DunDefArabia.DunDefDjinn.Died
// [0x00020002] 
struct ADunDefDjinn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.AdjustDamage
// [0x00424002] 
struct ADunDefDjinn_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.DunDefDjinn.UnSetGoldenEnemy
// [0x00020102] 
struct ADunDefDjinn_execUnSetGoldenEnemy_Parms
{
	class ADunDefEnemy*                                Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinn.SetGoldenEnemy
// [0x00020102] 
struct ADunDefDjinn_execSetGoldenEnemy_Parms
{
	class ADunDefEnemy*                                Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             it;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinn.PlayInterruptAnimation
// [0x00020102] 
struct ADunDefDjinn_execPlayInterruptAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.ShutDownGoldVFX
// [0x00020102] 
struct ADunDefDjinn_execShutDownGoldVFX_Parms
{
};

// Function DunDefArabia.DunDefDjinn.StopGoldEnemyCast
// [0x00020102] 
struct ADunDefDjinn_execStopGoldEnemyCast_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.StartGoldEnemyCast
// [0x00020102] 
struct ADunDefDjinn_execStartGoldEnemyCast_Parms
{
	class AActor*                                      castTarget;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.StartBeam
// [0x00020900] ( FUNC_Event )
struct ADunDefDjinn_eventStartBeam_Parms
{
};

// Function DunDefArabia.DunDefDjinn.PlayMajorHurtAnimation
// [0x00020102] 
struct ADunDefDjinn_execPlayMajorHurtAnimation_Parms
{
};

// Function DunDefArabia.DunDefDjinn.PlayHurtAnimation
// [0x00020102] 
struct ADunDefDjinn_execPlayHurtAnimation_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinn.UpdateDifficultyMaterial
// [0x00020102] 
struct ADunDefDjinn_execUpdateDifficultyMaterial_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinn.SetMovementPhysics
// [0x00020002] 
struct ADunDefDjinn_execSetMovementPhysics_Parms
{
};

// Function DunDefArabia.DunDefDjinn.DisableSpawnCollision
// [0x00020102] 
struct ADunDefDjinn_execDisableSpawnCollision_Parms
{
};

// Function DunDefArabia.DunDefDjinn.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefDjinn_eventPostBeginPlay_Parms
{
};

// Function DunDefArabia.DunDefDjinn.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefDjinn_execExecReplicatedFunction_Parms
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

// Function DunDefArabia.DunDefDjinn.GetTowerTargetingDesirability
// [0x00020102] 
struct ADunDefDjinn_execGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           val;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnManager.PickDjinnLamp
// [0x00020002] 
struct ADunDefDjinnManager_execPickDjinnLamp_Parms
{
	class ADjinnLamp*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< class ADjinnLamp* >                     tempLamps;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ADjinnLamp*                               currentLamp;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyGold
// [0x00020002] 
struct ADunDefDjinnManager_execIsActorAlreadyGold_Parms
{
	class AActor*                                      checkActor;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActorIndexed
// [0x00020002] 
struct ADunDefDjinnManager_execRemoveGoldenActorIndexed_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActor
// [0x00020002] 
struct ADunDefDjinnManager_execRemoveGoldenActor_Parms
{
	class AActor*                                      removeActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnManager.AddGoldenActor
// [0x00020002] 
struct ADunDefDjinnManager_execAddGoldenActor_Parms
{
	class AActor*                                      NewActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyTargeted
// [0x00020002] 
struct ADunDefDjinnManager_execIsActorAlreadyTargeted_Parms
{
	class AActor*                                      checkActor;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefDjinnManager.RemoveTargetedActor
// [0x00020002] 
struct ADunDefDjinnManager_execRemoveTargetedActor_Parms
{
	class AActor*                                      removeActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnManager.AddTargetedActor
// [0x00020002] 
struct ADunDefDjinnManager_execAddTargetedActor_Parms
{
	class AActor*                                      NewActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefDjinnManager.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefDjinnManager_eventPostBeginPlay_Parms
{
	// class ADjinnLamp*                               theLamp;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdatingDelayTurnOff
// [0x00024100] 
struct ADunDefGenieBoss_execForceSkelUpdatingDelayTurnOff_Parms
{
	unsigned long                                      Force : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              delayTurnOff;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdating
// [0x00024100] 
struct ADunDefGenieBoss_execForceSkelUpdating_Parms
{
	unsigned long                                      Force : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bOnlyForceTickAnimNodes : 1;                      		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.ClearElementalEffect
// [0x00020002] 
struct ADunDefGenieBoss_execClearElementalEffect_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.GetElementalDamageType
// [0x00020102] 
struct ADunDefGenieBoss_execGetElementalDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefGenieBoss_eventTakeDamage_Parms
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

// Function DunDefArabia.DunDefGenieBoss.GetMiniMapIconColor
// [0x00020102] 
struct ADunDefGenieBoss_execGetMiniMapIconColor_Parms
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.ActivateRageMode
// [0x00020102] 
struct ADunDefGenieBoss_execActivateRageMode_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.PauseAnimationAfterDeath
// [0x00020902] ( FUNC_Event )
struct ADunDefGenieBoss_eventPauseAnimationAfterDeath_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.GetBurpProjectileLocAndRot
// [0x00420002] 
struct ADunDefGenieBoss_execGetBurpProjectileLocAndRot_Parms
{
	struct FVector                                     burpLoc;                                          		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    burpRot;                                          		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefArabia.DunDefGenieBoss.GetRightEyeLocAndRot
// [0x00420102] 
struct ADunDefGenieBoss_execGetRightEyeLocAndRot_Parms
{
	struct FVector                                     eyeLoc;                                           		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    eyeRot;                                           		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeLocAndRot
// [0x00420102] 
struct ADunDefGenieBoss_execGetLeftEyeLocAndRot_Parms
{
	struct FVector                                     eyeLoc;                                           		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    eyeRot;                                           		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefArabia.DunDefGenieBoss.GetRightEyeDmgType
// [0x00020002] 
struct ADunDefGenieBoss_execGetRightEyeDmgType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeDmgType
// [0x00020002] 
struct ADunDefGenieBoss_execGetLeftEyeDmgType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.PickRightEyeBeam
// [0x00020002] 
struct ADunDefGenieBoss_execPickRightEyeBeam_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.PickLeftEyeBeam
// [0x00020002] 
struct ADunDefGenieBoss_execPickLeftEyeBeam_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayBiteAnim
// [0x00020102] 
struct ADunDefGenieBoss_execPlayBiteAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.GetDjinnSpawnLocandRot
// [0x00420002] 
struct ADunDefGenieBoss_execGetDjinnSpawnLocandRot_Parms
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLoc;                                         		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    SpawnRot;                                         		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefArabia.DunDefGenieBoss.GetBiteLocation
// [0x00424002] 
struct ADunDefGenieBoss_execGetBiteLocation_Parms
{
	struct FVector                                     biteLocation;                                     		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    biteRot;                                          		// 0x000C (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function DunDefArabia.DunDefGenieBoss.SpawnBabyDjinn
// [0x00020802] ( FUNC_Event )
struct ADunDefGenieBoss_eventSpawnBabyDjinn_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.ClearHitList
// [0x00020802] ( FUNC_Event )
struct ADunDefGenieBoss_eventClearHitList_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.BiteStop
// [0x00020802] ( FUNC_Event )
struct ADunDefGenieBoss_eventBiteStop_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.BiteStart
// [0x00020802] ( FUNC_Event )
struct ADunDefGenieBoss_eventBiteStart_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.Burp
// [0x00020802] ( FUNC_Event )
struct ADunDefGenieBoss_eventBurp_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.SpawnMoveToLampVFX
// [0x00020102] 
struct ADunDefGenieBoss_execSpawnMoveToLampVFX_Parms
{
	struct FVector                                     particleDir;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.PlayBabySpawnAnim
// [0x00020102] 
struct ADunDefGenieBoss_execPlayBabySpawnAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.PlayBurpAnim
// [0x00020102] 
struct ADunDefGenieBoss_execPlayBurpAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.PlayDisappearAnim
// [0x00820102] 
struct ADunDefGenieBoss_execPlayDisappearAnim_Parms
{
	unsigned long                                      bPlayEffects : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      newLamp;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  dirToLamp;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBoss.PlayLickAnim
// [0x00020102] 
struct ADunDefGenieBoss_execPlayLickAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.PlaySuperLickAnim
// [0x00020102] 
struct ADunDefGenieBoss_execPlaySuperLickAnim_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.PlayEyeBeamLoop
// [0x00020102] 
struct ADunDefGenieBoss_execPlayEyeBeamLoop_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.TongueStart
// [0x00020802] ( FUNC_Event )
struct ADunDefGenieBoss_eventTongueStart_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.GetTongueSocketLocation
// [0x00820002] 
struct ADunDefGenieBoss_execGetTongueSocketLocation_Parms
{
	struct FName                                       currentSocket;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  tongueLoc;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 tongueRot;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBoss.StopCrazyEye
// [0x00020102] 
struct ADunDefGenieBoss_execStopCrazyEye_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayCrazyEyesAttack
// [0x00020102] 
struct ADunDefGenieBoss_execPlayCrazyEyesAttack_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefArabia.DunDefGenieBoss.StartEyeDamage
// [0x00020002] 
struct ADunDefGenieBoss_execStartEyeDamage_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeTarget
// [0x00020002] 
struct ADunDefGenieBoss_execSetLeftEyeTarget_Parms
{
	class AActor*                                      newLeftEyeTarget;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.SetRightEyeTarget
// [0x00020002] 
struct ADunDefGenieBoss_execSetRightEyeTarget_Parms
{
	class AActor*                                      newRightEyeTarget;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.PlayEyeAttackStart
// [0x00020102] 
struct ADunDefGenieBoss_execPlayEyeAttackStart_Parms
{
	unsigned long                                      bIgnoreEyeTracking : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           theTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBoss.StartUpEyes
// [0x00020002] 
struct ADunDefGenieBoss_execStartUpEyes_Parms
{
	float                                              DamageTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.AdjustDamage
// [0x00424002] 
struct ADunDefGenieBoss_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.UnHideHead
// [0x00020102] 
struct ADunDefGenieBoss_execUnHideHead_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.HideHead
// [0x00020102] 
struct ADunDefGenieBoss_execHideHead_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.BringGenieOutOfLamp
// [0x00020102] 
struct ADunDefGenieBoss_execBringGenieOutOfLamp_Parms
{
	struct FVector                                     lampLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.ShutDownEyes
// [0x00020102] 
struct ADunDefGenieBoss_execShutDownEyes_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.SetRightEyeBeamLocation
// [0x00020102] 
struct ADunDefGenieBoss_execSetRightEyeBeamLocation_Parms
{
	struct FVector                                     beamStartLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamNormal;                                       		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeBeamLocation
// [0x00024102] 
struct ADunDefGenieBoss_execSetLeftEyeBeamLocation_Parms
{
	struct FVector                                     beamStartLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamEndLoc;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     BeamNormal;                                       		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.TraceRightEye
// [0x00820102] 
struct ADunDefGenieBoss_execTraceRightEye_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BeamDir;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  impactHitNormal;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	// class UClass*                                   currentEyeDmgType;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFailedToSetLoc : 1;                              		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefArabia.DunDefGenieBoss.TraceLeftEye
// [0x00820102] 
struct ADunDefGenieBoss_execTraceLeftEye_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  beamStartLoc;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEndLoc;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BeamDir;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  impactHitNormal;                                  		// 0x0034 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Traced;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	// class UClass*                                   currentEyeDmgType;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFailedToSetLoc : 1;                              		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefArabia.DunDefGenieBoss.EndEyeAttack
// [0x00020100] 
struct ADunDefGenieBoss_execEndEyeAttack_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.UpdateHeadLookAt
// [0x00820102] 
struct ADunDefGenieBoss_execUpdateHeadLookAt_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 desiredRot;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBoss.SetMovementPhysics
// [0x00020002] 
struct ADunDefGenieBoss_execSetMovementPhysics_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefGenieBoss_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefArabia.DunDefGenieBoss.SetOnAllOverlappingAuras
// [0x00020002] 
struct ADunDefGenieBoss_execSetOnAllOverlappingAuras_Parms
{
	unsigned long                                      bSet : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ADunDefTower_Aura*                        Aura;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefArabia.DunDefGenieBoss.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ADunDefGenieBoss_eventSetInitialState_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefGenieBoss_eventPostBeginPlay_Parms
{
};

// Function DunDefArabia.DunDefGenieBoss.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefGenieBoss_execExecReplicatedFunction_Parms
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

// Function DunDefArabia.DunDefGenieBoss.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefGenieBoss_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif