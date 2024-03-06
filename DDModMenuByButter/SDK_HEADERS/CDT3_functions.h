/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT3_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires
// [0x00820002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_Meteor_HeroScaling::SpawnFires ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnFires = NULL;

	if ( ! pFnSpawnFires )
		pFnSpawnFires = (UFunction*) UObject::GObjObjects()->Data[ 81045 ];

	ADunDefProjectile_Meteor_HeroScaling_execSpawnFires_Parms SpawnFires_Parms;
	memcpy ( &SpawnFires_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnFires_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnFires, &SpawnFires_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif