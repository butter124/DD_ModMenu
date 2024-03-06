/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefMiscNoMedia_classes.h
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

// Class DunDefMiscNoMedia.DunDefGameStorageUpdates
// 0x03E4 (0x0420 - 0x003C)
class UDunDefGameStorageUpdates : public UObject
{
public:
	struct UDunDefGameStorageUpdates_FGameStorage_FIXED StorageData;                                      		// 0x003C (0x01EC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct UDunDefGameStorageUpdates_FGameStorage_FIXED StorageData01;                                    		// 0x0228 (0x01F8) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79656 ];

		return pClassPointer;
	};

};

UClass* UDunDefGameStorageUpdates::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif