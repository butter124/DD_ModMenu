/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT_f_structs.h
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

// Function CDT.DunDefHarbinger.FireAttackShootRight
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbinger_eventFireAttackShootRight_Parms
{
};

// Function CDT.DunDefHarbinger.FireAttackShootLeft
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbinger_eventFireAttackShootLeft_Parms
{
};

// Function CDT.DunDefHarbinger.FireAttackBegin
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbinger_eventFireAttackBegin_Parms
{
};

// Function CDT.DunDefHarbinger.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbinger_eventPostBeginPlay_Parms
{
};

// Function CDT.DunDefHarbinger.GetProjectileSpawnTransformation
// [0x00420102] 
struct ADunDefHarbinger_execGetProjectileSpawnTransformation_Parms
{
	struct FName                                       socketToUse;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Position;                                         		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    Orientation;                                      		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function CDT.DunDefHarbinger.IsCurrentlyPlayingAttackAnimation
// [0x00020102] 
struct ADunDefHarbinger_execIsCurrentlyPlayingAttackAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT.DunDefHarbinger.PlayShootFireAnimation
// [0x00020102] 
struct ADunDefHarbinger_execPlayShootFireAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT.DunDefHarbinger.IsCurrentlyPlayingChargeAnimation
// [0x00020102] 
struct ADunDefHarbinger_execIsCurrentlyPlayingChargeAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT.DunDefHarbinger.PlayChargeFireAnimation
// [0x00020102] 
struct ADunDefHarbinger_execPlayChargeFireAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function CDT.DunDefHarbinger.PlayHurtAnimation
// [0x00020100] 
struct ADunDefHarbinger_execPlayHurtAnimation_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT.DunDefHarbinger.PlayJumpAnimation
// [0x00020100] 
struct ADunDefHarbinger_execPlayJumpAnimation_Parms
{
};

// Function CDT.DunDefHarbinger.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefHarbinger_execExecReplicatedFunction_Parms
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

// Function CDT.DunDefHarbingerController.PawnDied
// [0x00020002] 
struct ADunDefHarbingerController_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT.DunDefHarbingerController.CheckPlayer
// [0x00020002] 
struct ADunDefHarbingerController_execCheckPlayer_Parms
{
	class ADunDefPlayer*                               aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UObject*                                  anEffect;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function CDT.DunDefHarbingerController.CheckForNearbyPlayers
// [0x00020002] 
struct ADunDefHarbingerController_execCheckForNearbyPlayers_Parms
{
	// class AActor*                                   aPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function CDT.DunDefHarbingerController.ObstructionJump
// [0x00020000] 
struct ADunDefHarbingerController_execObstructionJump_Parms
{
	struct FVector                                     jumpForwardDir;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     jumpSideDir;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT.DunDefHarbingerController.NotifyTakeHitEX
// [0x00020002] 
struct ADunDefHarbingerController_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function CDT.DunDefHarbingerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefHarbingerController_eventPostBeginPlay_Parms
{
};

// Function CDT.DunDefHarbingerController.FireProjectiles
// [0x00020000] 
struct ADunDefHarbingerController_execFireProjectiles_Parms
{
	struct FName                                       socketToUse;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif