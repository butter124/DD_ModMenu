/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT3_f_structs.h
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

// Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires
// [0x00820002] 
struct ADunDefProjectile_Meteor_HeroScaling_execSpawnFires_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefGasCloud*                          spawnedFire;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  newFireLoc;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           randRadius;                                       		// 0x002C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif