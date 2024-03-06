/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT3_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class CDT3.DunDefProjectile_Meteor_HeroScaling
// 0x0004 (0x038C - 0x0388)
class ADunDefProjectile_Meteor_HeroScaling : public ADunDefProjectile_Meteor
{
public:
	float                                              FireDamageScale;                                  		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81043 ];

		return pClassPointer;
	};

	void SpawnFires ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ADunDefProjectile_Meteor_HeroScaling::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif