/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSkyCity_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct DunDefSkyCity.DunDef_DamagingInterpActor.damagee
// 0x0008
struct Fdamagee
{
	class AActor*                                      damageTarget;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastDmgTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.Crystals
// 0x0014
struct FCrystals
{
	class ADunDef_OldOneCrystals*                      theCrystal;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       destroyedAnim;                                    		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       crystalTag;                                       		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.SmashAnims
// 0x0020
struct FSmashAnims
{
	struct FName                                       AttackAnimName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDistance;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAngle;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bToggleCollisions : 1;                            		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class ADunDef_DamagingInterpActor* >       damageableCollisions;                             		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.DmgActors
// 0x0008
struct FDmgActors
{
	class AActor*                                      damagedActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              damagedTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.CrazyBellyLazers
// 0x0040
struct FCrazyBellyLazers
{
	class UParticleSystemComponent*                    myLazer;                                          		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    myStartEffect;                                    		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     prevLazerLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     currentTargetLoc;                                 		// 0x0014 (0x000C) [0x0000000000000000]              
	TArray< struct FDmgActors >                        bellyDmgActors;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADunDefEmitterSpawnable*                     ImpactEmitter;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              lastTargSwitchTime;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	class AActor*                                      CurrentTarget;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FName                                       attachSocket;                                     		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.CollisionBoxes
// 0x000C
struct FCollisionBoxes
{
	class ADunDef_DamagingInterpActor*                 theCollision;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BaseSocketName;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSkyCity.DunDefGoblinCopter.HoldAI
// 0x0024
struct FHoldAI
{
	class ADunDefEnemy*                                HoldEnemyTemplate;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HoldSocketName;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Offset;                                           		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotationOffset;                                   		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSkyCity.DunDefGoblinCopter.HeldPawnDifficultyOffset
// 0x0008
struct FHeldPawnDifficultyOffset
{
	float                                              MinimumWaveDifficultyOffset;                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnDifficultyOffset;                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif