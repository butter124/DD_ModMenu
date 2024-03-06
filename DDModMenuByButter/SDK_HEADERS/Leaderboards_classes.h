/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: Leaderboards_classes.h
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

// Class Leaderboards.DunDefLeaderboardReadBase
// 0x0000 (0x00A4 - 0x00A4)
class UDunDefLeaderboardReadBase : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36586 ];

		return pClassPointer;
	};

};

UClass* UDunDefLeaderboardReadBase::pClassPointer = NULL;

// Class Leaderboards.DunDefLeaderboardWriteBase
// 0x0000 (0x00A4 - 0x00A4)
class UDunDefLeaderboardWriteBase : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36647 ];

		return pClassPointer;
	};

};

UClass* UDunDefLeaderboardWriteBase::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif