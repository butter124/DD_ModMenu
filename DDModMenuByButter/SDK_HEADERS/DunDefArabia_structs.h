/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefArabia_structs.h
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

// ScriptStruct DunDefArabia.DunDefDjinn.SpellAnims
// 0x003C
struct FSpellAnims
{
	struct FName                                       StartAnimName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LoopAnimName;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StopAnimName;                                     		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             CastingEffectTemplate;                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             CastingEffectTemplate_Ally;                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CastAttachSocketName;                             		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              effectScale;                                      		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             AttachTemplate;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             AttachTemplate_Ally;                              		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AttachScale;                                      		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   LoopingCastSound;                                 		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefArabia.DunDefGenieBoss.EyeBeam
// 0x0014
struct FEyeBeam
{
	class UClass*                                      MyDamageType;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             BeamEffect;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EyeEffect;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     ImpactEmitterTemplate;                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      EyeLightColor;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefArabia.DunDefGenieBossController.BeamHitActors
// 0x0008
struct FBeamHitActors
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastDamageTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefArabia.DunDefGenieBossController.TongueTraceSockets
// 0x0014
struct FTongueTraceSockets
{
	struct FName                                       TongueSocketName;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PreviousTraceLoc;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif