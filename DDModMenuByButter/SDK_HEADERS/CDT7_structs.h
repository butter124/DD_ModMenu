/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT7_structs.h
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

// ScriptStruct CDT7.HeroEquipment_Familiar_TowerDamageScaling.DelayedShot
// 0x0024
struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot
{
	float                                              Timer;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefProjectile*                           Projectile;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Direction;                                        		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif