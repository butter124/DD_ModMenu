/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.h
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

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0008
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0008
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                              		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0024
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UpdateType;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                LeaderboardSize;                                  		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      SortType;                                         		// 0x0014 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      DisplayFormat;                                    		// 0x0015 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FLeaderboardHandle                          LeaderboardRef;                                   		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bLeaderboardInitializing : 1;                     		// 0x0020 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bLeaderboardInitiated : 1;                        		// 0x0020 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0018
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      RequestType;                                      		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                Start;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                End;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x001C
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      WriteData;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x001C
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      ReadData;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TalkerIDMap
// 0x000C
struct FTalkerIDMap
{
	struct FUniqueNetId                                TalkerId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             TalkerAudioComponent;                             		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0010
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     LeaderboardName;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadDelegates;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteDelegates;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ProfileDataChangedDelegates;                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001(0x0005 - 0x0004)
struct FLocalTalkerSteam : FLocalTalker
{
	unsigned char                                      MuteType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeviceSelectionDelegates;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxProgress;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUnlock : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AchievementName;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                ViewId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ProgressCount;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxProgress;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoUnlock : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x001C
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumberOfAttempts;                                 		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0010 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MappedAchievement
// 0x0010
struct FMappedAchievement
{
	struct FString                                     SteamAchievementID;                               		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bIsActive : 1;                                    		// 0x000C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif