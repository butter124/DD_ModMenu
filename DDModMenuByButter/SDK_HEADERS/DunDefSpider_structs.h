/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSpider_structs.h
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

// ScriptStruct DunDefSpider.DunDefMapInfo_PortalDefense.MinMaxValues
// 0x0008
struct FMinMaxValues
{
	float                                              MinValue;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSpider.DunDefMapInfo_VDay.WaveKillCounts
// 0x000C
struct FWaveKillCounts
{
	TArray< int >                                      KillCountsPerWave;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct DunDefSpider.DunDefMapInfo_VDay.EnemyGenderOverride
// 0x000C
struct FEnemyGenderOverride
{
	class ADunDefEnemy*                                OriginalArchetype;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEnemy*                                ReplacementGenderArchetypeBoy;                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEnemy*                                ReplacementGenderArchetypeGirl;                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct DunDefSpider.DunDefWebProjectile.WebbedActor
// 0x0008
struct FWebbedActor
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    theEffectComponent;                               		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif