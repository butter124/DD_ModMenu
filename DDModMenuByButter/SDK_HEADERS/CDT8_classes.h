/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT8_classes.h
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

// Class CDT8.DunDefWeapon_MagicStaff_Channeling
// 0x0030 (0x0644 - 0x0614)
class ADunDefWeapon_MagicStaff_Channeling : public ADunDefWeapon_MagicStaff
{
public:
	class ADunDefProjectile*                           ChannelingProjectileTemplate;                     		// 0x0614 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChannelingProjectileFireSpeed;                    		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChannelingProjectileDamageMultiplier;             		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ChannelingProjectileLocationOffset;               		// 0x0620 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChannelingRangeMultiplier;                        		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDunDefTargetableInterface*                  act;                                              		// 0x0630 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0634 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< class UDunDefTargetableInterface* >        Enemies;                                          		// 0x0638 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81535 ];

		return pClassPointer;
	};

};

UClass* ADunDefWeapon_MagicStaff_Channeling::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif