/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: SdkHeaders.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

#include <Psapi.h>
#include "HelperFunctions.h"
MODULEINFO miGame = GetModuleInfo(NULL);

// UE3 Tables Sigs
#define GObjects_Pattern		"\x8b\x00\x00\x00\x00\x00\x8b\x04\x00\x8b\x40\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask			"x?????xx?xx?xxxxx"
#define GObjects_Offset			0x2

#define GNames_Pattern			"\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask				"xx????xxxxx"
#define GNames_Offset			0x2

DWORD GObjects = *(unsigned long*)(FindPattern((unsigned long)miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*)GObjects_Pattern, (char*)GObjects_Mask) + GObjects_Offset);
DWORD GNames = *(unsigned long*)(FindPattern((unsigned long)miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*)GNames_Pattern, (char*)GNames_Mask) + GNames_Offset);
/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	T& operator() ( int i ) 
	{ 
		return this->Data[ i ]; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

	void Add ( T InputData ) 
	{ 
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); 
		Data[ Count++ ] = InputData; 
		Max = Count; 
	}; 

	void Clear() 
	{ 
		free ( Data ); 
		Count = Max = 0; 
	}; 
}; 

struct FNameEntry 
{ 
	unsigned char	UnknownData00[ 0x10 ]; 
	char			Name[ 0x10 ]; 
}; 

struct FName 
{ 
	int				Index; 
	unsigned char	unknownData00[ 0x4 ]; 

	FName() : Index ( 0 ) {}; 

	FName ( int i ) : Index ( i ) {}; 

	~FName() {}; 

	FName ( char* FindName ) 
	{ 
		static TArray< int > NameCache; 

		for ( int i = 0; i < NameCache.Count; ++i ) 
		{ 
		if ( ! strcmp ( this->Names()->Data[ NameCache ( i ) ]->Name, FindName ) ) 
			{ 
				Index = NameCache ( i ); 
				return; 
			} 
		} 

		for ( int i = 0; i < this->Names()->Count; ++i ) 
		{ 
			if ( this->Names()->Data[ i ] ) 
			{ 
				if ( ! strcmp ( this->Names()->Data[ i ]->Name, FindName ) ) 
				{ 
					NameCache.Add ( i ); 
					Index = i; 
				} 
			} 
		} 
	}; 

	static TArray< FNameEntry* >* Names() 
	{ 
		return (TArray< FNameEntry* >*) GNames; 
	}; 

	char* GetName() 
	{ 
		return this->Names()->Data[ Index ]->Name; 
	}; 

	bool operator == ( const FName& A ) const 
	{ 
		return ( Index == A.Index ); 
	}; 
}; 

struct FString : public TArray< wchar_t > 
{ 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	unsigned char UnknownData00[ 0xC ]; 
}; 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
#include "SDK_HEADERS\Core_functions.h"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
#include "SDK_HEADERS\Engine_functions.h"
#include "SDK_HEADERS\GameFramework_structs.h"
#include "SDK_HEADERS\GameFramework_classes.h"
#include "SDK_HEADERS\GameFramework_f_structs.h"
#include "SDK_HEADERS\GameFramework_functions.h"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
#include "SDK_HEADERS\IpDrv_functions.h"
#include "SDK_HEADERS\XAudio2_structs.h"
#include "SDK_HEADERS\XAudio2_classes.h"
#include "SDK_HEADERS\XAudio2_f_structs.h"
#include "SDK_HEADERS\XAudio2_functions.h"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
#include "SDK_HEADERS\WinDrv_functions.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_structs.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_classes.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_f_structs.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_functions.h"
#include "SDK_HEADERS\UDKGame_structs.h"
#include "SDK_HEADERS\UDKGame_classes.h"
#include "SDK_HEADERS\UDKGame_f_structs.h"
#include "SDK_HEADERS\UDKGame_functions.h"
#include "SDK_HEADERS\Leaderboards_structs.h"
#include "SDK_HEADERS\Leaderboards_classes.h"
#include "SDK_HEADERS\Leaderboards_f_structs.h"
#include "SDK_HEADERS\Leaderboards_functions.h"
#include "SDK_HEADERS\DunDefMiscNoMedia_structs.h"
#include "SDK_HEADERS\DunDefMiscNoMedia_classes.h"
#include "SDK_HEADERS\DunDefMiscNoMedia_f_structs.h"
#include "SDK_HEADERS\DunDefMiscNoMedia_functions.h"
#include "SDK_HEADERS\CDT_structs.h"
#include "SDK_HEADERS\CDT_classes.h"
#include "SDK_HEADERS\CDT_f_structs.h"
#include "SDK_HEADERS\CDT_functions.h"
#include "SDK_HEADERS\DunDefSpecial_structs.h"
#include "SDK_HEADERS\DunDefSpecial_classes.h"
#include "SDK_HEADERS\DunDefSpecial_f_structs.h"
#include "SDK_HEADERS\DunDefSpecial_functions.h"
#include "SDK_HEADERS\DunDefSkyCity_structs.h"
#include "SDK_HEADERS\DunDefSkyCity_classes.h"
#include "SDK_HEADERS\DunDefSkyCity_f_structs.h"
#include "SDK_HEADERS\DunDefSkyCity_functions.h"
#include "SDK_HEADERS\CDT3_structs.h"
#include "SDK_HEADERS\CDT3_classes.h"
#include "SDK_HEADERS\CDT3_f_structs.h"
#include "SDK_HEADERS\CDT3_functions.h"
#include "SDK_HEADERS\CDT4_structs.h"
#include "SDK_HEADERS\CDT4_classes.h"
#include "SDK_HEADERS\CDT4_f_structs.h"
#include "SDK_HEADERS\CDT4_functions.h"
#include "SDK_HEADERS\DunDefSpider_structs.h"
#include "SDK_HEADERS\DunDefSpider_classes.h"
#include "SDK_HEADERS\DunDefSpider_f_structs.h"
#include "SDK_HEADERS\DunDefSpider_functions.h"
#include "SDK_HEADERS\CDT7_structs.h"
#include "SDK_HEADERS\CDT7_classes.h"
#include "SDK_HEADERS\CDT7_f_structs.h"
#include "SDK_HEADERS\CDT7_functions.h"
#include "SDK_HEADERS\CDT8_structs.h"
#include "SDK_HEADERS\CDT8_classes.h"
#include "SDK_HEADERS\CDT8_f_structs.h"
#include "SDK_HEADERS\CDT8_functions.h"
#include "SDK_HEADERS\DunDefArabia_structs.h"
#include "SDK_HEADERS\DunDefArabia_classes.h"
#include "SDK_HEADERS\DunDefArabia_f_structs.h"
#include "SDK_HEADERS\DunDefArabia_functions.h"
#include "SDK_HEADERS\DunDefAtlantis_structs.h"
#include "SDK_HEADERS\DunDefAtlantis_classes.h"
#include "SDK_HEADERS\DunDefAtlantis_f_structs.h"
#include "SDK_HEADERS\DunDefAtlantis_functions.h"
#include "SDK_HEADERS\DunDefBuff_structs.h"
#include "SDK_HEADERS\DunDefBuff_classes.h"
#include "SDK_HEADERS\DunDefBuff_f_structs.h"
#include "SDK_HEADERS\DunDefBuff_functions.h"
#include "SDK_HEADERS\DunDefPortal_structs.h"
#include "SDK_HEADERS\DunDefPortal_classes.h"
#include "SDK_HEADERS\DunDefPortal_f_structs.h"
#include "SDK_HEADERS\DunDefPortal_functions.h"
