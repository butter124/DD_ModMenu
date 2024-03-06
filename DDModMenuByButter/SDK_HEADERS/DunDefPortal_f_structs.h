/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefPortal_f_structs.h
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

// Function DunDefPortal.DunDefPortalNode.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefPortalNode_eventPostBeginPlay_Parms
{
};

// Function DunDefPortal.DunDefPortalNode.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefPortalNode_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPortalNode*                        aSibling;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UTextureRenderTarget2D*                   portalTextureTarget;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             it;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefPortal.DunDefPortalNode.AllowSpawn
// [0x00022802] ( FUNC_Event )
struct ADunDefPortalNode_eventAllowSpawn_Parms
{
	class AActor*                                      theArchetype;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     theLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    theRot;                                           		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefPortalNode.FadeOut
// [0x00024102] 
struct ADunDefPortalNode_execFadeOut_Parms
{
	float                                              theLightFadeOutTime;                              		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefPortal.DunDefPortalNode.Touch
// [0x00820902] ( FUNC_Event )
struct ADunDefPortalNode_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPortalNode*                        aSibling;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  localVecOffset;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  newVecOffset;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 NewRot;                                           		// 0x003C (0x000C) [0x0000000000000000]              
	// float                                           offsetDist;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsProjectile : 1;                                		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FRecentTeleport                          newTeleportEntry;                                 		// 0x0050 (0x0008) [0x0000000000000000]              
	// float                                           ZOffset;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function DunDefPortal.DunDefPortalNode.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefPortalNode_execExecReplicatedFunction_Parms
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

// Function DunDefPortal.DunDefPortalNode.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefPortalNode_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HitBlockingVolume
// [0x00820002] 
struct ADunDefWeapon_PortalGun_execHitBlockingVolume_Parms
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// class ADynamicBlockingVolume*                   anActor;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function DunDefPortal.DunDefWeapon_PortalGun.IsInAnyPortalBlockingVolume
// [0x00020002] 
struct ADunDefWeapon_PortalGun_execIsInAnyPortalBlockingVolume_Parms
{
	struct FVector                                     aPoint;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AVolume*                                  aVolume;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefPortal.DunDefWeapon_PortalGun.Tick
// [0x00020902] ( FUNC_Event )
struct ADunDefWeapon_PortalGun_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetReloadingColors
// [0x00420102] 
struct ADunDefWeapon_PortalGun_execGetReloadingColors_Parms
{
	struct FLinearColor                                BarColor;                                         		// 0x0000 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FLinearColor                                TextColor;                                        		// 0x0010 (0x0010) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HasBothPortals
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execHasBothPortals_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ClearPortal
// [0x00020002] 
struct ADunDefWeapon_PortalGun_execClearPortal_Parms
{
	int                                                portalIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.Destroyed
// [0x00020902] ( FUNC_Event )
struct ADunDefWeapon_PortalGun_eventDestroyed_Parms
{
};

// Function DunDefPortal.DunDefWeapon_PortalGun.DetachWeapon
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execDetachWeapon_Parms
{
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HolderDied
// [0x00020002] 
struct ADunDefWeapon_PortalGun_execHolderDied_Parms
{
};

// Function DunDefPortal.DunDefWeapon_PortalGun.CustomFire
// [0x00820102] 
struct ADunDefWeapon_PortalGun_execCustomFire_Parms
{
	int                                                theFireMode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPortalNode*                        aPortal;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefPortalNode*                        SpawnedPortal;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ShootProjectiles
// [0x00024100] 
struct ADunDefWeapon_PortalGun_execShootProjectiles_Parms
{
	int                                                theFireMode;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HasAnyAmmo
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execHasAnyAmmo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.BeginFire
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetSiblingPortal
// [0x00424102] 
struct ADunDefWeapon_PortalGun_execGetSiblingPortal_Parms
{
	class ADunDefPortalNode*                           aPortal;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPortalNode*                           aSibling;                                         		// 0x0004 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	class UTextureRenderTarget2D*                      portalTextureTarget;                              		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	class ADunDefPortalNode*                           ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefWeapon_PortalGun_eventPostBeginPlay_Parms
{
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PlayCancelAnimation
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execPlayCancelAnimation_Parms
{
	unsigned long                                      bIsPrimary : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PlayedShootAnimation
// [0x00024102] 
struct ADunDefWeapon_PortalGun_execPlayedShootAnimation_Parms
{
	unsigned long                                      isBigShot : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetTotalAmmo
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execGetTotalAmmo_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetMaxAmmo
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execGetMaxAmmo_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmo
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execGetAmmo_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmoPercent
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execGetAmmoPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.UsesAmmo
// [0x00020102] 
struct ADunDefWeapon_PortalGun_execUsesAmmo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefWeapon_PortalGun_execExecReplicatedFunction_Parms
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


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif