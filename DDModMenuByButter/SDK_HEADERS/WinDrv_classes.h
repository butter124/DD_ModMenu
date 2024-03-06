/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: WinDrv_classes.h
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

// Class WinDrv.WindowsClient
// 0x0180 (0x01D8 - 0x0058)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[ 0x13C ];                           		// 0x0058 (0x013C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x0194 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x2C ];                            		// 0x0198 (0x002C) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x01C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                UnlockMouse;                                      		// 0x01C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData02[ 0xC ];                             		// 0x01CC (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1334 ];

		return pClassPointer;
	};

};

UClass* UWindowsClient::pClassPointer = NULL;

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0050 - 0x0050)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1335 ];

		return pClassPointer;
	};

};

UClass* UXnaForceFeedbackManager::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif