/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefMiscNoMedia_structs.h
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

// ScriptStruct DunDefMiscNoMedia.DunDefGameStorageUpdates.OptionsInfo_FIXED
// 0x00F0
struct FOptionsInfo_FIXED
{
	struct UDunDefGameStorage_FOptionsFixedStruct      fixedSizeOptions;                                 		// 0x0000 (0x008C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Resolution;                                       		// 0x008C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     lastLevelTag;                                     		// 0x0098 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     UserName;                                         		// 0x00A4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x00B0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct UDunDefGameStorage_FSearchFilterSettings    searchFilters;                                    		// 0x00BC (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      installedDLCEquipments;                           		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct DunDefMiscNoMedia.DunDefGameStorageUpdates.GameStorage_FIXED
// 0x01F8
struct UDunDefGameStorageUpdates_FGameStorage_FIXED
{
	struct FOptionsInfo_FIXED                          GameOptions;                                      		// 0x0000 (0x00F0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefGameStorage_FHeroAndEquipment > Heroes;                                           		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct UDunDefGameStorage_FAchievementInfo         Achievements;                                     		// 0x00FC (0x003C) [0x0000000000000000]              
	struct UDunDefHeroManagerNative_FCoreUnlockInfo    Core_Info;                                        		// 0x0138 (0x0028) [0x0000000000000000]              
	struct FCrystalCoreOptions                         Core_Options;                                     		// 0x0160 (0x0034) [0x0000000000000000]              
	TArray< struct UDunDefGameStorage_FLevelProgressInfo > Beaten_Levels;                                    		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefGameStorage_FLevelProgressInfo > Unlocked_Levels;                                  		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct UDunDefHeroManagerNative_FItemBoxInfo       Item_Box;                                         		// 0x01AC (0x0010) [0x0000000000000000]              
	TArray< struct UDunDefGameStorage_FEquipmentSaveInfo > Equipment;                                        		// 0x01BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefGameStorage_FEquipmentSaveInfo > Hero_Equipment;                                   		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefGameStorage_FEquipmentSaveInfo > Lobby_Equipment;                                  		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefGameStorage_FShopSetSaveInfo > Shop_Sets;                                        		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefGameStorage_FPlayerShopEntrySaveInfo > Player_Shop_Entries;                              		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif