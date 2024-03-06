/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.h
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

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamCreateGameFailure
/*enum ESteamCreateGameFailure
{
	SCGF_None                                          = 0,
	SCGF_FailedToCreateLobby                           = 1,
	SCGF_FailedToCreateGameServer                      = 2,
	SCGF_FailedToAuthenticateGameServer                = 3,
	SCGF_MAX                                           = 4
};*/

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
/*enum ESteamMatchmakingType
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
/*enum ELeaderboardSortType
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
/*enum ELeaderboardRequestType
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
/*enum ELeaderboardFormat
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_MAX                                             = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
/*enum ELeaderboardUpdateType
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_MAX                                            = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x008C (0x01EC - 0x0160)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray< struct FServerQueryToRulesResponseMapping > QueryToRulesResponseMap;                          		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FServerQueryToPingResponseMapping > QueryToPingResponseMap;                           		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ServerIndexMap;                                   		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    ServerListResponse;                               		// 0x0184 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      CurrentMatchmakingType;                           		// 0x0188 (0x0001) [0x0000000000000000]              
	unsigned char                                      LastCreateGameFailure;                            		// 0x0189 (0x0001) [0x0000000000000000]              
	struct FPointer                                    CurrentMatchmakingQuery;                          		// 0x018C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    CallbackBridge;                                   		// 0x0190 (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FScriptDelegate >                   GameInviteAcceptedDelegates;                      		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSearch*                           InviteGameSearch;                                 		// 0x01A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     InviteLocationUrl;                                		// 0x01A4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x01B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x01BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1336 ];

		return pClassPointer;
	};

	int CreateOnlineGameFailureID ( );
	bool GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName, TArray< int > participatingPlayerControllerIds );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
};

UClass* UOnlineGameInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x05D8 (0x06C8 - 0x00F0)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    CallbackBridge;                                   		// 0x00F0 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bStoringAchievement : 1;                          		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGSStatsStoresSuccess : 1;                        		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedsKeyboardTicking : 1;                        		// 0x00F4 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bLastHasConnection : 1;                           		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsStatsSessionOk : 1;                            		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHasSteamworksAccount : 1;                        		// 0x00F4 (0x0004) [0x0000000000004002] [0x00000020] ( CPF_Const | CPF_Config )
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x00F4 (0x0004) [0x0000000000004002] [0x00000040] ( CPF_Const | CPF_Config )
	unsigned long                                      bListenHostPendingAuth : 1;                       		// 0x00F4 (0x0004) [0x0000000000000002] [0x00000080] ( CPF_Const )
	unsigned long                                      bListenHostAuthenticated : 1;                     		// 0x00F4 (0x0004) [0x0000000000000002] [0x00000100] ( CPF_Const )
	unsigned long                                      bIncrementStatValues : 1;                         		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000200] 
	int                                                TotalGSStatsStoresPending;                        		// 0x00F8 (0x0004) [0x0000000000000000]              
	unsigned char                                      UserStatsReceivedState;                           		// 0x00FC (0x0001) [0x0000000000000000]              
	unsigned char                                      LoggedInStatus;                                   		// 0x00FD (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x00FE (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x00FF (0x0001) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      ListenAuthRetryCount;                             		// 0x0100 (0x0001) [0x0000000000000002]              ( CPF_Const )
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                    		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LocalProfileName;                                 		// 0x0108 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x0114 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0120 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                LoggedInPlayerNum;                                		// 0x0128 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ProfileDataDirectory;                             		// 0x012C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x0138 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x0144 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x0150 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LocalPlayerStorageReadDelegates;                  		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LocalPlayerStorageWriteDelegates;                 		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemotePlayerStorageReadDelegates;                 		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LogoutCompletedDelegates;                         		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AccountCreateDelegates;                           		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PlayerStartedTalkingDelegates;                    		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PlayerStoppedTalkingDelegates;                    		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ControllerChangeDelegates;                        		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LinkStatusDelegates;                              		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLocalTalkerSteam                           CurrentLocalTalker;                               		// 0x025C (0x0008) [0x0000000000000000]              
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameID;                                           		// 0x0270 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x0274 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPendingPlayerStats >               PendingStats;                                     		// 0x0278 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     KeyboardResultsString;                            		// 0x0284 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendMessageReceivedDelegates;                   		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AddFriendByNameCompleteDelegates;                 		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProfileSettingsCache                       ProfileCache;                                     		// 0x02C0 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache;                               		// 0x02E8 (0x0004) [0x0000000000000000]              
	struct FString                                     CachedFriendMessage;                              		// 0x02EC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FDeviceIdCache                              DeviceCache;                                      		// 0x02F8 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LocationUrlsForInvites;                           		// 0x0314 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LocationUrl;                                      		// 0x0320 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMappedAchievement >                AchievementMapping;                               		// 0x032C (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReceivedGameInviteDelegates;                      		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetNumberOfCurrentPlayersCompleteDelegates;       		// 0x0350 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterHostStatGuidCompleteDelegates;            		// 0x035C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineFriendMessage >              CachedFriendMessages;                             		// 0x0368 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineStatusMapping >              StatusMappings;                                   		// 0x0374 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DefaultStatus;                                    		// 0x0380 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteMessage;                                		// 0x038C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FControllerConnectionState                  ControllerStates[ 0x4 ];                          		// 0x0398 (0x0020) [0x0000000000000000]              
	float                                              ConnectionPresenceTimeInterval;                   		// 0x03B8 (0x0004) [0x0000000000000000]              
	float                                              ConnectionPresenceElapsedTime;                    		// 0x03BC (0x0004) [0x0000000000000000]              
	struct FString                                     EncryptedProductKey;                              		// 0x03C0 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	int                                                NextAuthId;                                       		// 0x03CC (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     ServerChallenge;                                  		// 0x03D0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ServerResponse;                                   		// 0x03DC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                ServerLocalId;                                    		// 0x03E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x03EC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FQueuedAvatarRequest >              QueuedAvatarRequests;                             		// 0x03F8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FAchievementMappingInfo >           AchievementMappings;                              		// 0x0404 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FAchievementProgressStat >          PendingAchievementProgress;                       		// 0x0410 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLeaderboardTemplate >              LeaderboardList;                                  		// 0x041C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PendingLeaderboardInits;                          		// 0x0428 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                PendingLeaderboardReads;                          		// 0x042C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                PendingLeaderboardWrites;                         		// 0x0430 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FDeferredLeaderboardRead >          DeferredLeaderboardReads;                         		// 0x0434 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         DeferredLeaderboardWrites;                        		// 0x0440 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         PendingLeaderboardStats;                          		// 0x044C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FTalkerIDMap >                      TalkerAudioComponentMap;                          		// 0x0458 (0x000C) [0x0000000000482002]              ( CPF_Const | CPF_Transient | CPF_Component | CPF_NeedCtorLink )
	float                                              PlaybackVolume;                                   		// 0x0464 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CaptureVolume;                                    		// 0x0468 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FScriptDelegate >                   QuerySubscribedDelegates;                         		// 0x046C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLeaderboardEntry >                 ProcessedLeaderboardReads;                        		// 0x0478 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FViewIdToLeaderboardName >          LeaderboardNameMappings;                          		// 0x0484 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              ListenAuthTimestamp;                              		// 0x0490 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FUniqueNetId >                      StatsReadList;                                    		// 0x0494 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x04A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x04AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x04B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x04C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x04D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x04DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x04E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x04F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0500 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x050C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0518 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0524 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0530 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerBeginTalking__Delegate;                 		// 0x053C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerStopTalking__Delegate;                  		// 0x0548 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0554 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0560 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x056C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0578 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x0584 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x0590 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x059C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x05A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x05B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;       		// 0x05C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x05CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x05D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x05E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x05F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x05FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0608 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0614 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0620 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x062C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x0638 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;           		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindUniqueNetIdForPlayerComplete__Delegate;   		// 0x0668 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceFound__Delegate;                        		// 0x0674 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDLCStorageDeviceRemoved__Delegate;            		// 0x0680 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStringVerificationComplete__Delegate;         		// 0x068C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnContentChange__Delegate;                      		// 0x0698 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadContentComplete__Delegate;                		// 0x06A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableDownloadsComplete__Delegate;    		// 0x06B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQuerySubscribedDownloadsComplete__Delegate;   		// 0x06BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1337 ];

		return pClassPointer;
	};

	void ClearQuerySubscribedDownloadsComplete ( struct FScriptDelegate QueryDelegate );
	void AddQuerySubscribedDownloadsComplete ( struct FScriptDelegate QueryDelegate );
	void OnQuerySubscribedDownloadsComplete ( unsigned long bWasSuccessful );
	struct FString SubscribedDownloadsInformation ( );
	bool QuerySubscribedDownloads ( );
	void GetAvailableDownloadCounts ( unsigned char LocalUserNum, int* NewDownloads, int* TotalDownloads );
	void ClearQueryAvailableDownloadsComplete ( unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate );
	void AddQueryAvailableDownloadsComplete ( unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate );
	void OnQueryAvailableDownloadsComplete ( unsigned long bWasSuccessful );
	bool QueryAvailableDownloads ( unsigned char LocalUserNum, int CategoryMask );
	unsigned char GetContentList ( unsigned char LocalUserNum, TArray< struct FOnlineContent >* ContentList );
	bool ReadContentList ( unsigned char LocalUserNum );
	void ClearReadContentComplete ( unsigned char LocalUserNum, struct FScriptDelegate ReadContentCompleteDelegate );
	void AddReadContentComplete ( unsigned char LocalUserNum, struct FScriptDelegate ReadContentCompleteDelegate );
	void OnReadContentComplete ( unsigned long bWasSuccessful );
	void ClearContentChangeDelegate ( struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum );
	void AddContentChangeDelegate ( struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum );
	void OnContentChange ( );
	void eventExit ( );
	void VerifyStrings ( TArray< struct FStringVerificationEntry > stringEntries );
	void ClearStringVerificationDelegate ( struct FScriptDelegate stringVerificationComplete );
	void AddStringVerificationDelegate ( struct FScriptDelegate stringVerificationComplete );
	void OnStringVerificationComplete ( unsigned long bVerifiedSuccessfully, int StringID, unsigned char StringType );
	void ClearDLCStorageDeviceRemovedDelegate ( struct FScriptDelegate DLCStorageDeviceRemovedDelegate );
	void AddDLCStorageDeviceRemovedDelegate ( struct FScriptDelegate DLCStorageDeviceRemovedDelegate );
	void OnDLCStorageDeviceRemoved ( );
	void ClearAllFlushOnlineStatsCompleteDelegates ( );
	void ClearDeviceFoundDelegate ( struct FScriptDelegate deviceFoundDelegate );
	void AddDeviceFoundDelegate ( struct FScriptDelegate deviceFoundDelegate );
	void OnDeviceFound ( );
	bool HasBeenRegistered ( );
	bool SetCaptureVolume ( unsigned char LocalUserNum, float NewVolume );
	bool SetPlaybackVolume ( unsigned char LocalUserNum, float NewVolume );
	void CancelLogin ( );
	void ManageInvites ( );
	bool FindUniqueNetIdForPlayer ( struct FString PlayerName );
	void ClearFindUniqueNetIdForPlayerDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FindDelegate );
	void AddFindUniqueNetIdForPlayerDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FindDelegate );
	void OnFindUniqueNetIdForPlayerComplete ( unsigned long Found, struct FString PlayerName, int Id );
	bool AddToPlayersMetList ( struct FUniqueNetId PlayerIdToAdd, struct FString PlayerName );
	bool CreateLeaderboard ( struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat );
	void ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers );
	bool GetNumberOfCurrentPlayers ( );
	void ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate );
	void OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar );
	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, struct FString PlayerName );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength, unsigned long bAllowSpaces );
	void SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties );
	bool GetLocalAccountNames ( TArray< struct FString >* Accounts );
	bool DeleteLocalAccount ( struct FString UserName, struct FString Password );
	bool RenameLocalAccount ( struct FString NewUserName, struct FString OldUserName, struct FString Password );
	bool CreateLocalAccount ( struct FString UserName, struct FString Password );
	void ClearCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate );
	void AddCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate );
	void OnCreateOnlineAccountCompleted ( unsigned char ErrorStatus );
	bool CreateOnlineAccount ( struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	unsigned char GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	bool IsControllerConnected ( int ControllerId );
	void ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void OnControllerChange ( int ControllerId, unsigned long bIsConnected );
	void SetNetworkNotificationPosition ( unsigned char NewPos );
	unsigned char GetNetworkNotificationPosition ( );
	void ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void OnExternalUIChange ( unsigned long bIsOpening );
	void ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void OnLinkStatusChange ( unsigned long bIsConnected );
	bool HasLinkConnection ( );
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex ( int UserIndex );
	struct FString eventGetPlayerNicknameFromIndex ( int UserIndex );
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void OnReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	bool ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows );
	bool ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead );
	bool ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadOnlineStats ( class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players );
	bool SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj );
	bool SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId );
	void ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void OnRecognitionComplete ( );
	bool GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* words );
	bool StopSpeechRecognition ( unsigned char LocalUserNum );
	bool StartSpeechRecognition ( unsigned char LocalUserNum );
	void StopNetworkedVoice ( unsigned char LocalUserNum );
	void StartNetworkedVoice ( unsigned char LocalUserNum );
	void ClearPlayerTalkingDelegates ( );
	void ClearPlayerStoppedTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void ClearPlayerStartedTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerStoppedTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerStartedTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void OnPlayerStopTalking ( struct FUniqueNetId Player );
	void OnPlayerBeginTalking ( struct FUniqueNetId Player );
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority );
	bool IsHeadsetPresent ( unsigned char LocalUserNum );
	bool IsRemotePlayerTalking ( struct FUniqueNetId PlayerID );
	bool IsLocalPlayerTalking ( unsigned char LocalUserNum );
	bool UnregisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool RegisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool UnregisterLocalTalker ( unsigned char LocalUserNum );
	bool RegisterLocalTalker ( unsigned char LocalUserNum );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	unsigned char CanShowPresenceInformation ( unsigned char LocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char LocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char LocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char LocalUserNum );
	unsigned char CanCommunicate ( unsigned char LocalUserNum );
	unsigned char CanPlayOnline ( unsigned char LocalUserNum );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	bool eventInit ( );
};

UClass* UOnlineSubsystemSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.SteamworksNetConnection
// 0x0030 (0x5008 - 0x4FD8)
class USteamworksNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[ 0x30 ];                            		// 0x4FD8 (0x0030) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1338 ];

		return pClassPointer;
	};

};

UClass* USteamworksNetConnection::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.SteamWorksNetDriver
// 0x0008 (0x0178 - 0x0170)
class USteamWorksNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0170 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1339 ];

		return pClassPointer;
	};

};

UClass* USteamWorksNetDriver::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif