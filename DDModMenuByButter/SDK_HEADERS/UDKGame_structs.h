/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: UDKGame_structs.h
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

// ScriptStruct UDKGame._DataTypes.sNameStringPair
// 0x0014
struct FsNameStringPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame._DataTypes.TowerUpgradeStat
// 0x000C
struct FTowerUpgradeStat
{
	int                                                ForTowerLevel;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      ValueStat;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                StatModifier;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.Boostingtypes
// 0x002C
struct FBoostingtypes
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              boostExponent;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              boostBaseAmt;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      levelUpStat;                                      		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     boostToolTip;                                     		// 0x0010 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	TArray< float >                                    UpgradeLinearBoostMultipliers;                    		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bInvertValue : 1;                                 		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sTowerBoostType
// 0x0008
struct FsTowerBoostType
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostAmount;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sPawnBoostType
// 0x0008
struct FsPawnBoostType
{
	unsigned char                                      boostType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostAmount;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sHeroGUID
// 0x0010
struct FsHeroGUID
{
	int                                                GUID1;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GUID2;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GUID3;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                GUID4;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.sBuffStorageData
// 0x0028
struct FsBuffStorageData
{
	struct FsHeroGUID                                  HeroID;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                buffUniqueID;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BuffStackCount;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              BuffRemainingLifeSpan;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              BuffLastRefreshTime;                              		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              BuffLastProcTime;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanProc : 1;                                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame._DataTypes.sHeroBuffData
// 0x001C
struct FsHeroBuffData
{
	struct FsHeroGUID                                  HeroID;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FsBuffStorageData >                 heroBuffData;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame._DataTypes.AuraEffect
// 0x0008
struct FAuraEffect
{
	class ADunDefTower_Aura*                           AuraType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UseCounter;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.HQArray
// 0x000C
struct FHQArray
{
	TArray< class UHeroEquipment* >                    inner;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame._DataTypes.sNameFloatPair
// 0x000C
struct FsNameFloatPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.sNameIntPair
// 0x000C
struct FsNameIntPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.sNameBoolPair
// 0x000C
struct FsNameBoolPair
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bValue : 1;                                       		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sIntPair
// 0x0008
struct FsIntPair
{
	int                                                Left;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Right;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.sIntFloatPair
// 0x0008
struct FsIntFloatPair
{
	int                                                Left;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Right;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.sIndexPair
// 0x0008
struct FsIndexPair
{
	int                                                Data;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.sIntStringPair
// 0x0010
struct FsIntStringPair
{
	int                                                IntValue;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StrValue;                                         		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame._DataTypes.sElementalCombo
// 0x000C
struct FsElementalCombo
{
	class UClass*                                      DamageTypeTrigger;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StatusEffect;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UDunDefBuff*                                 Result;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sActorStatDescription
// 0x0028
struct FsActorStatDescription
{
	int                                                ActorStatID;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ModifierTag;                                      		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PreDescriptionText;                               		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PostDescriptionText;                              		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame._DataTypes.ActorLevelUpStatModifier
// 0x0020
struct FActorLevelUpStatModifier
{
	unsigned char                                      theLevelUpValueType;                              		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              InitialValue;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LevelLinearStatMultiplier;                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LevelExponentialStatMultiplier;                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InitialLinearStatMultiplier;                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LinearStatMultiplier;                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExponentialStatMultiplier;                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sActorStatScalar
// 0x0014
struct FsActorStatScalar
{
	unsigned char                                      AssociatedStat;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScalingValue;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScalingExponent;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseValue;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseStatModifier : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sActorStatModifier
// 0x0044
struct FsActorStatModifier
{
	unsigned char                                      StatToModify;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FsActorStatScalar >                 AssociateStatScalars;                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BaseValue;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InitialValueOverride;                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseValueDivsor;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseValueLevelLinearMultiplier;                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseValueLinearMultiplier;                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseValueExponent;                                		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinValue;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DecimalPlacesForToolTip;                          		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ModifierTag;                                      		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUseAdditiveScaling : 1;                          		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisplayToolTipAsPercentage : 1;                  		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bInvertedStat : 1;                                		// 0x0040 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUseToolTipHack : 1;                              		// 0x0040 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sActorStatTemplateModifier
// 0x0010
struct FsActorStatTemplateModifier
{
	class UObject*                                     AssociatedTemplate;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FsActorStatModifier >               Modifiers;                                        		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame._DataTypes.sBuffNetInfo
// 0x00C8
struct FsBuffNetInfo
{
	class UDunDefBuff*                                 BuffTemplate;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class APawn*                                       Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      BuffTarget;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class AActor*                                      BuffOwner;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	int                                                BuffTemplateID;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                BuffID;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                BuffTier;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                StackCount;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              LifeSpan;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              BuffRange;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              StatValueBuffsAdditive[ 0x11 ];                   		// 0x0040 (0x0044) [0x0000000000000000]              
	float                                              StatValueBuffsMultiplicative[ 0x11 ];             		// 0x0084 (0x0044) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.sBuffTarget
// 0x0010
struct FsBuffTarget
{
	TArray< class UDunDefBuff* >                       Buffs;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      Target;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame._DataTypes.sBuffNotification
// 0x0020
struct FsBuffNotification
{
	struct FString                                     NotificationText;                                 		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                NotificationTextColor;                            		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              NotificationDuration;                             		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame._DataTypes.sBuffNotifcationInfo
// 0x00A0
struct FsBuffNotifcationInfo
{
	struct FsBuffNotification                          BuffApplyNotification;                            		// 0x0000 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FsBuffNotification                          BuffRemoveNotification;                           		// 0x0020 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FsBuffNotification                          BuffActivationNotification;                       		// 0x0040 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FsBuffNotification                          BuffDeActivationNotification;                     		// 0x0060 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FsBuffNotification                          BuffProcNotification;                             		// 0x0080 (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame._DataTypes.sBuffInfo
// 0x0064
struct FsBuffInfo
{
	struct FString                                     BuffName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     BuffDescription;                                  		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USurface*                                    BuffIcon;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TierNames[ 0x6 ];                                 		// 0x001C (0x0048) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame._DataTypes.sLastDamageInfo
// 0x0010
struct FsLastDamageInfo
{
	class UClass*                                      lastDamageType;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      lastDamageCauser;                                 		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     lastWhatHitMe;                                    		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AController*                                 lastDamageInstigator;                             		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct UDKGame.DunDefHero.HotKey
// 0x0018
struct FHotKey
{
	struct FString                                     KeyBindingName;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ActionWheelEntryName;                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UActionWheelEntry*                           ActionWheelEntryObject;                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.AdvancedConsoleCommandsSettings.ItemTestInfo
// 0x0044
struct FItemTestInfo
{
	TArray< int >                                      Qualities;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Levels;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ArchetypeToTest;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              QualityToTest;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              MultiplierToTest;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                MaxItemCount;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                CurrentItemCount;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                ItemsPerFrame;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.LevelProgressInfo
// 0x0010
struct UDunDefHeroManagerNative_FLevelProgressInfo
{
	struct FString                                     campaignTag;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                difficultyMask;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.ProgressEntry
// 0x0020
struct FProgressEntry
{
	TArray< struct UDunDefHeroManagerNative_FLevelProgressInfo > beatenLevels;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefHeroManagerNative_FLevelProgressInfo > unlockedLevels;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UserID;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      remote : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.CoreUnlockInfo
// 0x0028
struct UDunDefHeroManagerNative_FCoreUnlockInfo
{
	unsigned char                                      CoreUnlocks[ 0x28 ];                              		// 0x0000 (0x0028) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.CoreUnlockEntry
// 0x002C
struct FCoreUnlockEntry
{
	struct UDunDefHeroManagerNative_FCoreUnlockInfo    coresUnlocked;                                    		// 0x0000 (0x0028) [0x0000000000000000]              
	int                                                UserID;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.AchievementInfo
// 0x01F4
struct UDunDefHeroManagerNative_FAchievementInfo
{
	unsigned char                                      Achievements[ 0x1F4 ];                            		// 0x0000 (0x01F4) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.AchievementSaveEntry
// 0x01FC
struct FAchievementSaveEntry
{
	struct UDunDefHeroManagerNative_FAchievementInfo   Achievements;                                     		// 0x0000 (0x01F4) [0x0000000000000000]              
	int                                                UserID;                                           		// 0x01F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      remote : 1;                                       		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.CrystalCoreOptions
// 0x0034
struct FCrystalCoreOptions
{
	int                                                coreIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                color1;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                color2;                                           		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                color3;                                           		// 0x0024 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.CrystalCoreEntry
// 0x0038
struct FCrystalCoreEntry
{
	struct FCrystalCoreOptions                         Options;                                          		// 0x0000 (0x0034) [0x0000000000000000]              
	int                                                UserID;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.GameDamageEntry
// 0x0010
struct FGameDamageEntry
{
	class UClass*                                      TheDamageType;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ElementalWeaponEffect;                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ElementalWeaponEffectExtraScale;                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AEmitterSpawnable*                           ElementalImpactEffectEmitter;                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.OptionsFixedStruct
// 0x00A4
struct UDunDefHeroManagerNative_FOptionsFixedStruct
{
	unsigned long                                      AutoShowLevelUp : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      AllowFriendlyFire : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      UseGamepad : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      AutoAdjustCameraForPhase : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowTutorials : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                ShownTutorials[ 0xA ];                            		// 0x0004 (0x0028) [0x0000000000000000]              
	float                                              VolumeSFX;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              VolumeMusic;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              VoicePlayVolume;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              VoiceCaptureVolume;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      PushToTalk : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IncomingVoice : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      OutgoingVoice : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              Gamma;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              SaturationIntensity;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              UIScalePercent;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      PostProcessing : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ShowFloatingDamageNumbers : 1;                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRightStickTurnsCameraScheme : 1;                 		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInvertCameraPitch : 1;                           		// 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSwapTriggersAndButtons : 1;                      		// 0x004C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      FullScreen : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned char                                      SplitScreenConfig;                                		// 0x0050 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentDifficulty;                                		// 0x0051 (0x0001) [0x0000000000000000]              
	unsigned long                                      LobbyItemLock : 1;                                		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultChaseCamera : 1;                          		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DefaultCameraTargetDistance;                      		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              DefaultPlacingTowerCameraDistance;                		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              MouseCameraRotationSpeed;                         		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                ItemQualityFilter;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHideAccessory : 1;                               		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      EnableOutlineEffect : 1;                          		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      GraphicsQuality;                                  		// 0x006C (0x0001) [0x0000000000000000]              
	float                                              FrameRateLimit;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned char                                      InventorySortingFilter;                           		// 0x0074 (0x0001) [0x0000000000000000]              
	int                                                MinimumLevel;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      SavedLoginInfo : 1;                               		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            CustomGameMetaFlags;                              		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CustomeUnlocks;                                   		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      HeroUnlocks;                                      		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.SearchFilterSettings
// 0x0021
struct UDunDefHeroManagerNative_FSearchFilterSettings
{
	TArray< int >                                      levelIndicesToFilter;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      difficultiesToFilter;                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      filterChallengeMissions;                          		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      filterCampaignMissions;                           		// 0x0019 (0x0001) [0x0000000000000000]              
	unsigned char                                      filterPureStrategy;                               		// 0x001A (0x0001) [0x0000000000000000]              
	unsigned char                                      filterInfiniteBuild;                              		// 0x001B (0x0001) [0x0000000000000000]              
	unsigned char                                      filterInfiniteWaves;                              		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      filterHostClass;                                  		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned char                                      filterHostLevel;                                  		// 0x001E (0x0001) [0x0000000000000000]              
	unsigned char                                      filterHostLevelStart;                             		// 0x001F (0x0001) [0x0000000000000000]              
	unsigned char                                      filterHostLevelEnd;                               		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.OptionsInfo
// 0x0104
struct UDunDefHeroManagerNative_FOptionsInfo
{
	struct UDunDefHeroManagerNative_FOptionsFixedStruct fixedSizeOptions;                                 		// 0x0000 (0x00A4) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Resolution;                                       		// 0x00A4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     lastLevelTag;                                     		// 0x00B0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     UserName;                                         		// 0x00BC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x00C8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct UDunDefHeroManagerNative_FSearchFilterSettings searchFilters;                                    		// 0x00D4 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      installedDLCEquipments;                           		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.ItemBoxInfo
// 0x0010
struct UDunDefHeroManagerNative_FItemBoxInfo
{
	int                                                StoredMana;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HighInfoStoredMana[ 0x3 ];                        		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.ItemBoxEntry
// 0x0014
struct FItemBoxEntry
{
	struct FHighDigitInt                               myItemBoxInfo;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                UserID;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.OptionsEntry
// 0x0108
struct FOptionsEntry
{
	struct UDunDefHeroManagerNative_FOptionsInfo       Options;                                          		// 0x0000 (0x0104) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                UserID;                                           		// 0x0104 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.EquipmentSaveInfo
// 0x015C
struct UDunDefHeroManagerNative_FEquipmentSaveInfo
{
	unsigned long                                      IsInitialized : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      DamageReductionIndex[ 0x4 ];                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      DamageReductionPercentage[ 0x4 ];                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                StatModifiers[ 0xB ];                             		// 0x000C (0x002C) [0x0000000000000000]              
	int                                                SpawnStatModifiers[ 0xB ];                        		// 0x0038 (0x002C) [0x0000000000000000]              
	int                                                WeaponDamageBonus;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponNumberOfProjectilesBonus;                   		// 0x0068 (0x0001) [0x0000000000000000]              
	int                                                WeaponSpeedOfProjectilesBonus;                    		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                  		// 0x0070 (0x0001) [0x0000000000000000]              
	int                                                WeaponAdditionalDamageAmount;                     		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              WeaponDrawScaleMultiplier;                        		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              WeaponSwingSpeedMultiplier;                       		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                StoredMana;                                       		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              SpawnQuality;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              SpawnRandomizerMultiplier;                        		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponBlockingBonus;                              		// 0x0090 (0x0001) [0x0000000000000000]              
	int                                                WeaponAltDamageBonus;                             		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                WeaponClipAmmoBonus;                              		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponReloadSpeedBonus;                           		// 0x009C (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponKnockbackBonus;                             		// 0x009D (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponChargeSpeedBonus;                           		// 0x009E (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponShotsPerSecondBonus;                        		// 0x009F (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_Base;                                   		// 0x00A0 (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_DamageReduction;                        		// 0x00A1 (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_QualityDescriptor;                      		// 0x00A2 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryColorSet;                                  		// 0x00A3 (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryColorSet;                                		// 0x00A4 (0x0001) [0x0000000000000000]              
	int                                                EquipmentID1;                                     		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                EquipmentID2;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                MinimumSellWorth;                                 		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                MaximumSellWorth;                                 		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                MaxEquipmentLevel;                                		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                DroppedLocationX;                                 		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                DroppedLocationY;                                 		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                DroppedLocationZ;                                 		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned char                                      bCanBeUpgraded;                                   		// 0x00C8 (0x0001) [0x0000000000000000]              
	unsigned char                                      AllowRenamingAtMaxUpgrade;                        		// 0x00C9 (0x0001) [0x0000000000000000]              
	unsigned char                                      bCantBeDropped;                                   		// 0x00CA (0x0001) [0x0000000000000000]              
	unsigned char                                      bCantBeSold;                                      		// 0x00CB (0x0001) [0x0000000000000000]              
	unsigned char                                      bAutoLockInItemBox;                               		// 0x00CC (0x0001) [0x0000000000000000]              
	unsigned char                                      bDidOnetimeEffect;                                		// 0x00CD (0x0001) [0x0000000000000000]              
	unsigned char                                      bIsLocked;                                        		// 0x00CE (0x0001) [0x0000000000000000]              
	unsigned char                                      ManualLR;                                         		// 0x00CF (0x0001) [0x0000000000000000]              
	struct FLinearColor                                PrimaryColorOverride;                             		// 0x00D0 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                SecondaryColorOverride;                           		// 0x00E0 (0x0010) [0x0000000000000000]              
	struct FString                                     UserEquipmentName;                                		// 0x00F0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     UserForgerName;                                   		// 0x00FC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0108 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     EquipmentTemplate;                                		// 0x0114 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     EquipmentTimeStamp;                               		// 0x0120 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                FolderID;                                         		// 0x012C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsSecondary : 1;                                 		// 0x0130 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StatEquipmentIDs[ 0x3 ];                          		// 0x0134 (0x000C) [0x0000000000000000]              
	int                                                StatEquipmentTiers[ 0x3 ];                        		// 0x0140 (0x000C) [0x0000000000000000]              
	struct FLinearColor                                QualityBeamColorOverride;                         		// 0x014C (0x0010) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.HeroSaveInfo
// 0x0114
struct FHeroSaveInfo
{
	unsigned long                                      IsInitialized : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                HeroHealthModifier;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HeroSpeedModifier;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HeroDamageModifier;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                HeroCastingModifier;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                HeroAbilityOneModifier;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                HeroAbilityTwoModifier;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                HeroDefenseHealthModifier;                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HeroDefenseAttackRateModifier;                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                HeroDefenseDamageModifier;                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                HeroDefenseAreaOfEffectModifier;                  		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                HeroLevel;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                HeroExperience;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                ManaPower;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                GUID1;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                GUID2;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                GUID3;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                GUID4;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                CurrentCostumeIndex;                              		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                C1;                                               		// 0x004C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                c2;                                               		// 0x005C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                C3;                                               		// 0x006C (0x0010) [0x0000000000000000]              
	unsigned char                                      bDidRespec;                                       		// 0x007C (0x0001) [0x0000000000000000]              
	unsigned char                                      bGaveExpBonus;                                    		// 0x007D (0x0001) [0x0000000000000000]              
	unsigned char                                      bAllowRename;                                     		// 0x007E (0x0001) [0x0000000000000000]              
	struct FString                                     HeroName;                                         		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HeroTemplate;                                     		// 0x008C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionOne;                                  		// 0x0098 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionTwo;                                  		// 0x00A4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionThree;                                		// 0x00B0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionFour;                                 		// 0x00BC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionFive;                                 		// 0x00C8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionSix;                                  		// 0x00D4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionSeven;                                		// 0x00E0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionEight;                                		// 0x00EC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionNine;                                 		// 0x00F8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     HotKeyActionTen;                                  		// 0x0104 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                EquipmentCount;                                   		// 0x0110 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.HeroAndEquipment
// 0x0120
struct UDunDefHeroManagerNative_FHeroAndEquipment
{
	struct FHeroSaveInfo                               HeroData;                                         		// 0x0000 (0x0114) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefHeroManagerNative_FEquipmentSaveInfo > Equipment;                                        		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.HeroEquipmentNative.EquipmentColorSet
// 0x0020
struct FEquipmentColorSet
{
	struct FLinearColor                                PrimaryColor;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                SecondaryColor;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UDKGame.HeroEquipmentNative.DamageReduction
// 0x0008
struct FDamageReduction
{
	class UClass*                                      ForDamageType;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PercentageReduction;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.HeroEquipmentNative.NetDamageReduction
// 0x0005
struct FNetDamageReduction
{
	class UClass*                                      ForDamageType;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PercentageReduction;                              		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefAchievementManager.AchievementEntry
// 0x002C
struct FAchievementEntry
{
	unsigned char                                      AchievementId;                                    		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AchievementName;                                  		// 0x0004 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AchievementDescription;                           		// 0x0010 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      Is360 : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUnlockInUnranked : 1;                            		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                Mapping360;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  AchievementIcon;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      AchievementColor;                                 		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefAchievementManager.FamiliarTypeAlias
// 0x0010
struct FFamiliarTypeAlias
{
	struct FString                                     FamiliarPath;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AliasIndex;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefHeroManager.CrystalCoreData
// 0x0030
struct FCrystalCoreData
{
	TArray< unsigned char >                            neededAchievements;                               		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     coreName;                                         		// 0x000C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      theCoreUnlockMessageColor;                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             coreVFX;                                          		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   mainColorMIC;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   altColorMIC;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   auraColorMIC;                                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   soulColorMIC;                                     		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefHeroManager.CampaignLevelEntry
// 0x0108
struct FCampaignLevelEntry
{
	unsigned long                                      IsDLCCampaign : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsSpecialMission : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsLostCampaign : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsRankedOnly : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      IsRestrictedDifficultyMission : 1;                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FString                                     EntryIdentifierTag;                               		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LevelFileName;                                    		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LevelFriendlyName;                                		// 0x001C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LevelDescription;                                 		// 0x0028 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      AlwaysUnlocked : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ProceedsToNextLevel : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisableHardcoreMode : 1;                         		// 0x0034 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              EquipmentWeightingMultiplier;                     		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EquipmentQualityMultiplier;                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExperienceMultiplier;                             		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     GameInfoClassOverride;                            		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                KismetSwitch;                                     		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RecommendedHeroLevel;                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      RecommendedHeroLevels;                            		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                StartWaveOverride;                                		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxWaveOverride;                                  		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           AdditionalUnlocks;                                		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ContextId;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsDLC : 1;                                        		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FString >                           HiddenUnlessUnlocked;                             		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsHidden : 1;                                     		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     PreviewImage;                                     		// 0x0090 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIsDemoLevel : 1;                                 		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      AllowForegroundRendering : 1;                     		// 0x009C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      AllowFlawlessVictory : 1;                         		// 0x009C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      SpecialMissionAllowProcession : 1;                		// 0x009C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bForceDisplayAtEndOfList : 1;                     		// 0x009C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      HideOnMacAppStore : 1;                            		// 0x009C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	int                                                TowerUnitsOverride;                               		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      NoLeaderboard : 1;                                		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMultiplayerOnly : 1;                             		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TreasureManaDropMultiplier;                       		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsCustomEntry : 1;                               		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsPremiumLevel : 1;                               		// 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsRestrictedPremiumLevel : 1;                     		// 0x00AC (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                TheDLCId;                                         		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsModMap : 1;                                     		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsSubscribedModMap : 1;                           		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHiddenIfLocked : 1;                              		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      ForceShowInMissionSetup : 1;                      		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ForceShowForStats : 1;                            		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FString                                     PurchaseURLSteam;                                 		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PurchaseURLGeneral;                               		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              EquipmentRandomizerMultiplier;                    		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MapAdditiveDroppedEquipmentQuality;               		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EqupmentRandomizerAdditionPerScalingWave;         		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MixModeEquipmentAdditionScalingPerWave;           		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightmareRandomizerAdditionPerScalingWave;        		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HardcoreNightmareRandomizerAdditionPerScalingWave;		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExtraBuildTimeMultiplier;                         		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OverlordMinHeight;                                		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OverlordMaxHeight;                                		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   OverlordMinXYBounds;                              		// 0x00F4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   OverlordMaxXYBounds;                              		// 0x00FC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                DunDefMaxPlayers;                                 		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.StatSystem.StatEntry
// 0x0018
struct FStatEntry
{
	int                                                StatClass;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                StatValue;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PlayerIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       associatedName;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManager.DLCEquipmentEntry
// 0x0010
struct FDLCEquipmentEntry
{
	struct FString                                     EquipmentObjectPath;                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                UniqueEquipmentDLCID;                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefHeroManager.EquipmentDropEntry
// 0x0040
struct FEquipmentDropEntry
{
	float                                              EquipmentDropValue;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RelativeWeighting;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AbsoluteWeighting;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumQualityThreshold;                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumShopQualityThreshold;                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumRarityThreshold;                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UHeroEquipment*                              EquipmentTemplate;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UHeroEquipment* >                    AlternateEquipmentTemplates;                      		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      CanOnlyBeUsedOnce : 1;                            		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseForAnyPlayer : 1;                             		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              MinimumDropTimeInterval;                          		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MinimumDifficulty;                                		// 0x0030 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaximumDifficulty;                                		// 0x0031 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastDroppedTime;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                LastDroppedGameplayInstanceID;                    		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      wasUsed : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDefHeroManager.MissionCompletionEquipmentDropEntry
// 0x0020
struct FMissionCompletionEquipmentDropEntry
{
	unsigned long                                      bIsActive : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     MissionEntryTag;                                  		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      MinimumCompletedDifficulty;                       		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEquipmentDropEntry >               AdditionalDropEntries;                            		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefHeroManager.PlayerUserID
// 0x001C
struct FPlayerUserID
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UserID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GuestID;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      beenLoaded : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      remote : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     NickName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefHeroManager.StatsSaveEntry
// 0x000C
struct FStatsSaveEntry
{
	class UDunDefPlayerStats*                          Stats;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UserID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      remote : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDefHeroManager.PlayerShopEntrySaveInfo
// 0x0160
struct UDunDefHeroManager_FPlayerShopEntrySaveInfo
{
	struct UDunDefHeroManagerNative_FEquipmentSaveInfo EquipmentEntry;                                   		// 0x0000 (0x015C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SellAmount;                                       		// 0x015C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHeroManager.ShopEquipmentSet
// 0x000C
struct FShopEquipmentSet
{
	TArray< class UHeroEquipment* >                    Equipments;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefHeroManager.ItemFolder
// 0x0018
struct FItemFolder
{
	int                                                ParentID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                FolderID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     FolderName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Tag : 1;                                          		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct UDKGame.DunDefHero.HeroCostumeTemplate
// 0x00B8
struct FHeroCostumeTemplate
{
	int                                                CostumeUniqueID;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CostumeName;                                      		// 0x0004 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	class USkeletalMesh*                               CostumeMesh;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    CostumeAnimSet;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                C1;                                               		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                c2;                                               		// 0x0028 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                C3;                                               		// 0x0038 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefPlayer*                               PlayerTemplateOverride;                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefPlayer*                               PlayerTemplateOverride_Competitive;               		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          ColorableMiniMapIconMat;                          		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          HeroIconMaterial;                                 		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   RemovedHeroSelectionSoundOverride;                		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                PreviewMaterials;                                 		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIsPurchasable : 1;                               		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShowWhenLocked : 1;                              		// 0x0068 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FString                                     UnlockDescription;                                		// 0x006C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bRankedOnly : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHideOnMacAppStore : 1;                           		// 0x0078 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FString                                     PurchaseURLSteam;                                 		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PurchaseURLGeneral;                               		// 0x0088 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SteamAppIDToCheck;                                		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADunDefPlayerAbility* >              AdditionalAbilityTemplatesOverride;               		// 0x0098 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class ADunDefPlayerAbility* >              AdditionalAbilityTemplatesOverride_Competitive;   		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bOverridePreviewAnimSet : 1;                      		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UAnimSet*                                    OverridePreviewAnimSet;                           		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefHero.HeroColorTemplate
// 0x003C
struct FHeroColorTemplate
{
	struct FString                                     colorName;                                        		// 0x0000 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	struct FLinearColor                                C1;                                               		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                c2;                                               		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                C3;                                               		// 0x002C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefGameStorage.EquipmentSaveInfo
// 0x0134
struct UDunDefGameStorage_FEquipmentSaveInfo
{
	unsigned long                                      IsInitialized : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      DamageReductionIndex[ 0x4 ];                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      DamageReductionPercentage[ 0x4 ];                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                StatModifiers[ 0xB ];                             		// 0x000C (0x002C) [0x0000000000000000]              
	int                                                SpawnStatModifiers[ 0xB ];                        		// 0x0038 (0x002C) [0x0000000000000000]              
	int                                                WeaponDamageBonus;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponNumberOfProjectilesBonus;                   		// 0x0068 (0x0001) [0x0000000000000000]              
	int                                                WeaponSpeedOfProjectilesBonus;                    		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                  		// 0x0070 (0x0001) [0x0000000000000000]              
	int                                                WeaponAdditionalDamageAmount;                     		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              WeaponDrawScaleMultiplier;                        		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              WeaponSwingSpeedMultiplier;                       		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                StoredMana;                                       		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              SpawnQuality;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              SpawnRandomizerMultiplier;                        		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponBlockingBonus;                              		// 0x0090 (0x0001) [0x0000000000000000]              
	int                                                WeaponAltDamageBonus;                             		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                WeaponClipAmmoBonus;                              		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponReloadSpeedBonus;                           		// 0x009C (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponKnockbackBonus;                             		// 0x009D (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponChargeSpeedBonus;                           		// 0x009E (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponShotsPerSecondBonus;                        		// 0x009F (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_Base;                                   		// 0x00A0 (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_DamageReduction;                        		// 0x00A1 (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_QualityDescriptor;                      		// 0x00A2 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryColorSet;                                  		// 0x00A3 (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryColorSet;                                		// 0x00A4 (0x0001) [0x0000000000000000]              
	int                                                EquipmentID1;                                     		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                EquipmentID2;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                MinimumSellWorth;                                 		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                MaximumSellWorth;                                 		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                MaxEquipmentLevel;                                		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                DroppedLocationX;                                 		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                DroppedLocationY;                                 		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                DroppedLocationZ;                                 		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned char                                      bCanBeUpgraded;                                   		// 0x00C8 (0x0001) [0x0000000000000000]              
	unsigned char                                      AllowRenamingAtMaxUpgrade;                        		// 0x00C9 (0x0001) [0x0000000000000000]              
	unsigned char                                      bCantBeDropped;                                   		// 0x00CA (0x0001) [0x0000000000000000]              
	unsigned char                                      bCantBeSold;                                      		// 0x00CB (0x0001) [0x0000000000000000]              
	unsigned char                                      bAutoLockInItemBox;                               		// 0x00CC (0x0001) [0x0000000000000000]              
	unsigned char                                      bDidOnetimeEffect;                                		// 0x00CD (0x0001) [0x0000000000000000]              
	unsigned char                                      bIsLocked;                                        		// 0x00CE (0x0001) [0x0000000000000000]              
	unsigned char                                      ManualLR;                                         		// 0x00CF (0x0001) [0x0000000000000000]              
	struct FLinearColor                                PrimaryColorOverride;                             		// 0x00D0 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                SecondaryColorOverride;                           		// 0x00E0 (0x0010) [0x0000000000000000]              
	struct FString                                     UserEquipmentName;                                		// 0x00F0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     UserForgerName;                                   		// 0x00FC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0108 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     EquipmentTemplate;                                		// 0x0114 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     EquipmentTimeStamp;                               		// 0x0120 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                FolderID;                                         		// 0x012C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsSecondary : 1;                                 		// 0x0130 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo
// 0x000C
struct UDunDefGameStorage_FShopSetSaveInfo
{
	TArray< struct UDunDefGameStorage_FEquipmentSaveInfo > Shop_Equipment;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage
// 0x03DC
struct UDunDefGameStorage_FGameStorage
{
	struct UDunDefHeroManagerNative_FOptionsInfo       GameOptions;                                      		// 0x0000 (0x0104) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefHeroManagerNative_FHeroAndEquipment > Heroes;                                           		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct UDunDefHeroManagerNative_FAchievementInfo   Achievements;                                     		// 0x0110 (0x01F4) [0x0000000000000000]              
	struct UDunDefHeroManagerNative_FCoreUnlockInfo    Core_Info;                                        		// 0x0304 (0x0028) [0x0000000000000000]              
	struct FCrystalCoreOptions                         Core_Options;                                     		// 0x032C (0x0034) [0x0000000000000000]              
	TArray< struct UDunDefHeroManagerNative_FLevelProgressInfo > Beaten_Levels;                                    		// 0x0360 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefHeroManagerNative_FLevelProgressInfo > Unlocked_Levels;                                  		// 0x036C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct UDunDefHeroManagerNative_FItemBoxInfo       Item_Box;                                         		// 0x0378 (0x0010) [0x0000000000000000]              
	TArray< struct UDunDefHeroManagerNative_FEquipmentSaveInfo > Equipment;                                        		// 0x0388 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefHeroManagerNative_FEquipmentSaveInfo > Hero_Equipment;                                   		// 0x0394 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefHeroManagerNative_FEquipmentSaveInfo > Lobby_Equipment;                                  		// 0x03A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefGameStorage_FShopSetSaveInfo > Shop_Sets;                                        		// 0x03AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefHeroManager_FPlayerShopEntrySaveInfo > Player_Shop_Entries;                              		// 0x03B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemFolder >                       ItemFolders;                                      		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemFolder >                       LocalShopItemFolders;                             		// 0x03D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.HeroEquipment.EquipmentNetInfo
// 0x0120
struct FEquipmentNetInfo
{
	struct FNetDamageReduction                         DamageReductions[ 0x4 ];                          		// 0x0000 (0x0020) [0x0000000000000000]              
	int                                                StatModifiers[ 0xB ];                             		// 0x0020 (0x002C) [0x0000000000000000]              
	class UHeroEquipment*                              EquipmentTemplate;                                		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                WeaponDamageBonus;                                		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponNumberOfProjectilesBonus;                   		// 0x0054 (0x0001) [0x0000000000000000]              
	int                                                WeaponSpeedOfProjectilesBonus;                    		// 0x0058 (0x0004) [0x0000000000000000]              
	class UClass*                                      WeaponAdditionalDamageType;                       		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                WeaponAdditionalDamageAmount;                     		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              WeaponDrawScaleMultiplier;                        		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              WeaponSwingSpeedMultiplier;                       		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                StoredMana;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponBlockingBonus;                              		// 0x0074 (0x0001) [0x0000000000000000]              
	int                                                WeaponAltDamageBonus;                             		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                WeaponClipAmmoBonus;                              		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned char                                      WeaponReloadSpeedBonus;                           		// 0x0080 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponKnockbackBonus;                             		// 0x0081 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponChargeSpeedBonus;                           		// 0x0082 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponShotsPerSecondBonus;                        		// 0x0083 (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_Base;                                   		// 0x0084 (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_QualityDescriptor;                      		// 0x0085 (0x0001) [0x0000000000000000]              
	unsigned char                                      NameIndex_DamageReduction;                        		// 0x0086 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrimaryColorSet;                                  		// 0x0087 (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryColorSet;                                		// 0x0088 (0x0001) [0x0000000000000000]              
	struct FLinearColor                                PrimaryColorOverride;                             		// 0x008C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                SecondaryColorOverride;                           		// 0x009C (0x0010) [0x0000000000000000]              
	int                                                EquipmentID1;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                EquipmentID2;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                MinimumSellWorth;                                 		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                MaximumSellWorth;                                 		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                MaxEquipmentLevel;                                		// 0x00BC (0x0004) [0x0000000000000000]              
	unsigned char                                      bCanBeUpgraded;                                   		// 0x00C0 (0x0001) [0x0000000000000000]              
	unsigned char                                      AllowRenamingAtMaxUpgrade;                        		// 0x00C1 (0x0001) [0x0000000000000000]              
	unsigned char                                      bCantBeDropped;                                   		// 0x00C2 (0x0001) [0x0000000000000000]              
	unsigned char                                      bCantBeSold;                                      		// 0x00C3 (0x0001) [0x0000000000000000]              
	unsigned char                                      bAutoLockInItemBox;                               		// 0x00C4 (0x0001) [0x0000000000000000]              
	unsigned char                                      bDidOnetimeEffect;                                		// 0x00C5 (0x0001) [0x0000000000000000]              
	unsigned char                                      ManualLR;                                         		// 0x00C6 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsForgerNameOnlineVerified : 1;                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsNameOnlineVerified : 1;                        		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisableRandomization : 1;                        		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     UserEquipmentName;                                		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UserForgerName;                                   		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                FolderID;                                         		// 0x00F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsSecondary : 1;                                 		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StatEquipmentIDs[ 0x3 ];                          		// 0x00F8 (0x000C) [0x0000000000000000]              
	int                                                StatEquipmentTiers[ 0x3 ];                        		// 0x0104 (0x000C) [0x0000000000000000]              
	struct FLinearColor                                QualityBeamColorOverride;                         		// 0x0110 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefHero.HeroNetInfo
// 0x0095
struct FHeroNetInfo
{
	struct FString                                     HeroName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UDunDefHero*                                 HeroTemplate;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LastPawnHealth;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                HeroHealthModifier;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                HeroSpeedModifier;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                HeroDamageModifier;                               		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HeroCastingModifier;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                HeroAbilityOneModifier;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                HeroAbilityTwoModifier;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                HeroDefenseHealthModifier;                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                HeroDefenseAttackRateModifier;                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                HeroDefenseDamageModifier;                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                HeroDefenseAreaOfEffectModifier;                  		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                HeroLevel;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                HeroExperience;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ManaPower;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                GameplayInstanceID;                               		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                GUID1;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                GUID2;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                GUID3;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                GUID4;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                C1;                                               		// 0x005C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                c2;                                               		// 0x006C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                C3;                                               		// 0x007C (0x0010) [0x0000000000000000]              
	int                                                CurrentCostumeIndex;                              		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsNameOnlineVerified : 1;                        		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      SubstituteNameIndex;                              		// 0x0094 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DataListEntryInterface.DataEntryProps
// 0x0004
struct FDataEntryProps
{
	class USurface*                                    DataImage;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.NativeDunDefGameReplicationInfo.FloatingDamageEntry
// 0x0044
struct FFloatingDamageEntry
{
	class UClass*                                      TheDamageType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     theDamageAmount;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Position;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              LifeSpan;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DisplayScale;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ScreenPosYOffset;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsDamageFromEnemy : 1;                            		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverrideColor : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                OverrideColor;                                    		// 0x0034 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UDKGame.StatSystem.StatClass
// 0x0048
struct FStatClass
{
	unsigned long                                      bCumulative : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEvent : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStore : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPlayerSpecific : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSplitName : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsBestOf : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bMultiplayerAward : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPureStrategy : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      IgnoreOnSpecialMission : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	int                                                AwardType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ScoreValue;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                ScoreAwardColor;                                  		// 0x000C (0x0010) [0x0000000000000000]              
	TArray< float >                                    ScoreDifficultyMultipliers;                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      ScoreIncludeLevelMultiplier : 1;                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ScoreIncludeDifficultyMultiplier : 1;             		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	class UTexture2D*                                  AwardTexture;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     AwardName;                                        		// 0x0030 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AwardDescription;                                 		// 0x003C (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.StatSystem.StatPlayerMetaData
// 0x0014
struct FStatPlayerMetaData
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.StatSystem.StatPlayer
// 0x0024
struct FStatPlayer
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      isHere : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                statPlayerIndex;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< struct FStatPlayerMetaData >               MetaData;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.StatSystem.BestOfStatEntry
// 0x0024
struct FBestOfStatEntry
{
	struct FStatEntry                                  BestOfStatEntry;                                  		// 0x0000 (0x0018) [0x0000000000000000]              
	TArray< struct FStatPlayerMetaData >               bestOfMetadata;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.StatSystem.StatContainer
// 0x003C
struct FStatContainer
{
	TArray< struct FStatEntry >                        storedInstances;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStatEntry >                        cumulativeInstances;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBestOfStatEntry                            bestOfInstance;                                   		// 0x0018 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.StatSystem.StatBuffer
// 0x0020
struct FStatBuffer
{
	int                                                bufferIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     BufferName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UStatSystem*                                 owningSystem;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FStatContainer >                    Stats;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.StatSystem.StatProxyBuffer
// 0x0024
struct FStatProxyBuffer
{
	TArray< struct FStatBuffer >                       storedBuffers;                                    		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FStatPlayer >                       Players;                                          		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FStatClass >                        statClasses;                                      		// 0x0018 (0x000C) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefGameStats.NewBestStats
// 0x0018
struct FNewBestStats
{
	int                                                statPlayerIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      bestOfStats;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                playerUniqueNetId;                                		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameStats.StatHeroInfo
// 0x0050
struct FStatHeroInfo
{
	struct FString                                     HeroName;                                         		// 0x0000 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     heroClassName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       heroTemplateName;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                color1;                                           		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                color2;                                           		// 0x0030 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                color3;                                           		// 0x0040 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefNativeUIScene.UIAnimationSound
// 0x000C
struct FUIAnimationSound
{
	class USoundCue*                                   CueToPlay;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              timeToPlay;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStopSoundOnUIDeactivate : 1;                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefNativeUIScene.DunDefUIAnimation
// 0x003C
struct FDunDefUIAnimation
{
	struct FName                                       SequenceName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoopMode;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FUIAnimTrack >                      Tracks;                                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUIAnimationSeq*                             AnimSeqObject;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      allowInput : 1;                                   		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUnstoppable : 1;                                 		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              animationRate;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UUIScreenObject* >                   WidgetsToAnimate;                                 		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FUIAnimationSound >                 Sounds;                                           		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefUIScene.DunDefKeyBindings
// 0x0020
struct FDunDefKeyBindings
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UUIObject*                                   WidgetToClick;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      buttonAlignment;                                  		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              buttonOffset;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              buttonSize;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDontHandleInput : 1;                             		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceDrawBinding : 1;                            		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDontDrawIcon : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBindingDisabled : 1;                             		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bSetWidgetFocus : 1;                              		// 0x0018 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDontResetFocus : 1;                              		// 0x0018 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bForceDrawBindingIfAnyGamepad : 1;                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bUseSubRenderDelegate : 1;                        		// 0x0018 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	float                                              LastPressedTime;                                  		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefUIScene.ToolTipInfo
// 0x0046
struct FToolTipInfo
{
	class UToolTipInterface*                           ToolTipTarget;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UUIPrefab*                                   CurrentToolTipTemplate;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CountDownTimer;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      ToolTipFadingOut : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ToolTipFadeTimer;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FVector                                     ToolTipScale;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FString                                     ToolTipString;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUIObject*                                   ToolTip;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      MouseFollow : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   ToolTipOffset;                                    		// 0x0038 (0x0008) [0x0000000000000000]              
	unsigned long                                      ScenePosition : 1;                                		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      HorizontalAlignment;                              		// 0x0044 (0x0001) [0x0000000000000000]              
	unsigned char                                      VerticalAlignment;                                		// 0x0045 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefInput.KeyDescription
// 0x0018
struct FKeyDescription
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     KeyDescription;                                   		// 0x0008 (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	class UTexture2D*                                  KeyIcon;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.HeroAward
// 0x0010
struct ADunDefGameReplicationInfo_FHeroAward
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Wave;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.HeroAwardStatInfo
// 0x0030
struct FHeroAwardStatInfo
{
	int                                                numPlayerKills;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                numTowerKills;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                numTotalKills;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                numTowerRepairs;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                numUpgrades;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                numDamage;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                numDeaths;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                mana;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Dist;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct ADunDefGameReplicationInfo_FHeroAward > awards;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.playerStatsEntry
// 0x0028
struct FplayerStatsEntry
{
	int                                                remoteUserID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                arraySize;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                statPlayerIndex;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      remote : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ignore : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Host : 1;                                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< int >                                      remoteBestOfStats;                                		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.damageTypeCount
// 0x0008
struct FdamageTypeCount
{
	int                                                statPlayerIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.StatSendingQueueEntry
// 0x0008
struct FStatSendingQueueEntry
{
	class ADunDefPlayerController*                     DPC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                statPlayerIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.WaveBonusChecks
// 0x0028
struct FWaveBonusChecks
{
	unsigned long                                      CoreTookDamage : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      PlayerTookDamage;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      UsedAnyWeaponsToHurt;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      UsedAnyTowersToHurt;                              		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.ExpensiveFunctionRegister
// 0x0010
struct FExpensiveFunctionRegister
{
	TArray< class UObject* >                           ExpensiveFunctionRequestors;                      		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bExpensiveFunctionRan : 1;                        		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct UDKGame.DDGRI_Competitive.TeamData
// 0x0010
struct FTeamData
{
	TArray< class APlayerController* >                 TeamPCs;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TeamTowerUnits;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDef_SeqVar_TutorialData.TutorialData
// 0x0014
struct FTutorialData
{
	unsigned long                                      IsUsed : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bConsoleDefault : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FString                                     TutorialText;                                     		// 0x0004 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
	class USoundCue*                                   TutorialSound;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDef_SeqAct_EnemyWaveSpawner.EnemyWaveEntry
// 0x00A0
struct FEnemyWaveEntry
{
	struct FName                                       EntryName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeOfWave;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      EnemyTemplate;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    PlayerEnemyNumMultipliers;                        		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              NumberOfEnemies;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnInterval;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomSpawnInterval;                              		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyNumScalingExponent;                          		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinimumMasterWaveForThisGroup;                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaximumMasterWaveForThisGroup;                    		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaximumNumberOfEnemiesForThisGroup;               		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    PlayerMaximumNumberOfEnemiesForThisGroupMultipliers;		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MinimumNumberOfPlayersForThisGroup;               		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaximumNumberOfGroupsOverride;                    		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      DisableGroupDuplication : 1;                      		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                WaveModulusForInclusion;                          		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WaveModulusForExclusion;                          		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DifficultySetOffset;                              		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    NumEnemyDifficultyMultipliers;                    		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      EnemyElementOverride;                             		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroupDuplicationTimeOfWaveMultiplier;             		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseCustomMissionIndexRequirement : 1;            		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNightmareModeOnly : 1;                           		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDisableInPureStrategy : 1;                       		// 0x0070 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bForceNoSpawnInterval : 1;                        		// 0x0070 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	int                                                CustomMissionIndexRequirement;                    		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CustomEnemyTag;                                   		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            SpawnPointList;                                   		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Executed : 1;                                     		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Active : 1;                                       		// 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                NumberOfEnemiesSpawned;                           		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              NextSpawnTimer;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                NumberOfPlayersWhenScaled;                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              TempRandomSpawnInterval;                          		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBeenMixRandomized : 1;                           		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDef_SeqAct_EnemyWaveSpawner.ActorTargetingMultiplier
// 0x0008
struct FActorTargetingMultiplier
{
	class AActor*                                      ActorRef;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetingMultiplier;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDef_SeqAct_GiveEquipmentToPlayers.GiveEquipmentEntry
// 0x0034
struct FGiveEquipmentEntry
{
	class UDunDefHero*                                 ForHeroArchetype;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UHeroEquipment*                              EquipmentArchetype;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UHeroEquipment* >                    EquipmentArchetypesRandom;                        		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BaseForceRandomizationQuality;                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRandomizationQuality;                          		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomizerMultiplierOverride;                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseEquipmentArchetypeAsTemplate : 1;             		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRandomGlobalDontUseAdditionalItemEntries : 1;    		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      ForceHeroArchetypeExactMatch : 1;                 		// 0x0020 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDontIgnoreEquipmentMinUpgradeLevels : 1;         		// 0x0020 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bGetRandomGlobalEquipmentDrop : 1;                		// 0x0020 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bRandomGlobalDontUseShopDrops : 1;                		// 0x0020 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	float                                              RandomGlobalEquipmentDropExtraRarityWeighting;    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomGlobalEquipmentDropValueMin;                		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomGlobalEquipmentDropValueMax;                		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUsed : 1;                                        		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDefMapInfo.EnemyAnimTreeOverride
// 0x0008
struct FEnemyAnimTreeOverride
{
	class ADunDefEnemy*                                EnemyArchetype;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   AnimTreeOverride;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefMapInfo.MixEnemyDifficultyThreshold
// 0x0005
struct FMixEnemyDifficultyThreshold
{
	class ADunDefEnemy*                                EnemyArchetype;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DifficultyThreshold;                              		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefMapInfo.CameraParticleInfo
// 0x0040
struct FCameraParticleInfo
{
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     cameraOffset;                                     		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     cameraWorldOffset;                                		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      useCameraRotMultiplier : 1;                       		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     cameraRotMultiplier;                              		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       particleName;                                     		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      initiallyEnabled : 1;                             		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                TranslucencySortPriority;                         		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      fromMap : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDefPlayerController.metPlayers
// 0x0014
struct FmetPlayers
{
	struct FUniqueNetId                                metID;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     metName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefPlayerController.DunDefMuteListEntry
// 0x000C
struct FDunDefMuteListEntry
{
	struct FUniqueNetId                                mutedNetId;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      selfInitiated : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.DunDefPlayerController.PRIRelatedInfo
// 0x0020
struct FPRIRelatedInfo
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDunDefMuteListEntry >              DunDefMuteList;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefPlayerController.ParticleSystemInfo
// 0x0008
struct FParticleSystemInfo
{
	class UParticleSystem*                             forSystem;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                tally;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefInput.MobileInput
// 0x0004
struct FMobileInput
{
	unsigned long                                      bTouchHolding : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCameraLeftPressed : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCameraRightPressed : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct UDKGame.Main.MapPrefixDefinition
// 0x0018
struct FMapPrefixDefinition
{
	struct FString                                     MapPrefix;                                        		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     GameInfoClassName;                                		// 0x000C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDef_SeqAct_TogglePostProcessEffects.PostProcessEffectToggle
// 0x0028
struct FPostProcessEffectToggle
{
	struct FName                                       EffectName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMatEffectInterpScalarParameter : 1;              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      MatEffectDisableWhenFinishedInterpOff : 1;        		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FName                                       MatEffectToggleScalarParameterName;               		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MatEffectOnScalarSpeed;                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MatEffectOnScalarParameterValue;                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MatEffectOffScalarSpeed;                          		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MatEffectOffScalarParameterValue;                 		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPostProcessEffect*                          PPEffect;                                         		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct UDKGame.DunDef_SeqAct_UnlockCostumes.GiveCostumeEntry
// 0x0010
struct FGiveCostumeEntry
{
	class UDunDefHero*                                 OnlyUnlockForHeroArchetype;                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDunDefHero*                                 ForHeroArchetype;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                costumeIndex;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsHeroUnlock : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefEnemy.EnemyElementalEntry
// 0x0010
struct FEnemyElementalEntry
{
	class UClass*                                      ElementalDamageType;                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UsageChance;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             elementalEffect;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ElementalEffectScale;                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefEnemy.ElementalDamageModifier
// 0x0008
struct FElementalDamageModifier
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageMultiplier;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefBuffManager.sBuffArchetypeInstances
// 0x0010
struct FsBuffArchetypeInstances
{
	class UObject*                                     BuffArchetype;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class UDunDefBuff* >                       BuffInstances;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefBuffManager.sBuffArchetypePerOwnerSpawnCount
// 0x000C
struct FsBuffArchetypePerOwnerSpawnCount
{
	class UDunDefBuff*                                 BuffArchetype;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UObject*                                     BuffOwner;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SpawnCount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.HeroEquipment.EquipmentAttachmentScaleInfo
// 0x0010
struct FEquipmentAttachmentScaleInfo
{
	int                                                HeroAttachmentScaleType;                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AttachmentScale;                                  		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.HeroEquipment.EquipmentAttachmentInfo
// 0x003C
struct FEquipmentAttachmentInfo
{
	TArray< struct FEquipmentAttachmentScaleInfo >     AttachmentScaleInfos;                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       SocketNameToAttachTo;                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MICIndex;                                         		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseQualityRatingMIC : 1;                          		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      UseColorSetMIC : 1;                               		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAttachToBone : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAttachToActor : 1;                               		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUseEquipmentDrawScale : 1;                       		// 0x0018 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bUseParentShadow : 1;                             		// 0x0018 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	struct FVector                                     CagedOffset;                                      		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UPrimitiveComponent*                         ComponentToAttach;                                		// 0x0028 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bAttachToOtherSKAttachment : 1;                   		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                AttachToOtherSKAttachmentIndex;                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AttachedCompName;                                 		// 0x0034 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct UDKGame.DunDefDamageableTarget.DamageAdjuster
// 0x000C
struct FDamageAdjuster
{
	class UClass*                                      TheDamageType;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageScale;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MomentumScale;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.NativeDunDefEnemyController.DebugTargetList
// 0x0008
struct FDebugTargetList
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Desiribility;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.NativeDunDefEnemyController.ClassTargetingMultiplier
// 0x0008
struct FClassTargetingMultiplier
{
	class UClass*                                      ActorClass;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetingMultiplier;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.NativeDunDefEnemyController.AggroEntry
// 0x000C
struct FAggroEntry
{
	class AActor*                                      Attacker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AggroFactor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastAggroHitTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsFixedStruct
// 0x009C
struct UDunDefGameStorage_FOptionsFixedStruct
{
	unsigned long                                      AutoShowLevelUp : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      AllowFriendlyFire : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      UseGamepad : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      AutoAdjustCameraForPhase : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowTutorials : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                ShownTutorials[ 0xA ];                            		// 0x0004 (0x0028) [0x0000000000000000]              
	float                                              VolumeSFX;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              VolumeMusic;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              VoicePlayVolume;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              VoiceCaptureVolume;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      PushToTalk : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IncomingVoice : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      OutgoingVoice : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              Gamma;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              SaturationIntensity;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              UIScalePercent;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      PostProcessing : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ShowFloatingDamageNumbers : 1;                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRightStickTurnsCameraScheme : 1;                 		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInvertCameraPitch : 1;                           		// 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSwapTriggersAndButtons : 1;                      		// 0x004C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      FullScreen : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned char                                      SplitScreenConfig;                                		// 0x0050 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentDifficulty;                                		// 0x0051 (0x0001) [0x0000000000000000]              
	unsigned long                                      LobbyItemLock : 1;                                		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultChaseCamera : 1;                          		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DefaultCameraTargetDistance;                      		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              DefaultPlacingTowerCameraDistance;                		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              MouseCameraRotationSpeed;                         		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                ItemQualityFilter;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHideAccessory : 1;                               		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      EnableOutlineEffect : 1;                          		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      GraphicsQuality;                                  		// 0x006C (0x0001) [0x0000000000000000]              
	unsigned char                                      InventorySortingFilter;                           		// 0x006D (0x0001) [0x0000000000000000]              
	int                                                MinimumLevel;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      SavedLoginInfo : 1;                               		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            CustomGameMetaFlags;                              		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CustomeUnlocks;                                   		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      HeroUnlocks;                                      		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsInfo
// 0x00FC
struct UDunDefGameStorage_FOptionsInfo
{
	struct UDunDefGameStorage_FOptionsFixedStruct      fixedSizeOptions;                                 		// 0x0000 (0x009C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Resolution;                                       		// 0x009C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     lastLevelTag;                                     		// 0x00A8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     UserName;                                         		// 0x00B4 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x00C0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct UDunDefHeroManagerNative_FSearchFilterSettings searchFilters;                                    		// 0x00CC (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      installedDLCEquipments;                           		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefGameStorage.HeroAndEquipment
// 0x0120
struct UDunDefGameStorage_FHeroAndEquipment
{
	struct FHeroSaveInfo                               HeroData;                                         		// 0x0000 (0x0114) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UDunDefGameStorage_FEquipmentSaveInfo > Equipment;                                        		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefGameStorage.PlayerShopEntrySaveInfo
// 0x0138
struct UDunDefGameStorage_FPlayerShopEntrySaveInfo
{
	struct UDunDefGameStorage_FEquipmentSaveInfo       EquipmentEntry;                                   		// 0x0000 (0x0134) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SellAmount;                                       		// 0x0134 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameStorage.AchievementInfo
// 0x0078
struct UDunDefGameStorage_FAchievementInfo
{
	unsigned char                                      Achievements[ 0x78 ];                             		// 0x0000 (0x0078) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameStorage.LevelProgressInfo
// 0x000D
struct UDunDefGameStorage_FLevelProgressInfo
{
	struct FString                                     campaignTag;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      difficultyMask;                                   		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameStorage.SearchFilterSettings
// 0x0025
struct UDunDefGameStorage_FSearchFilterSettings
{
	TArray< int >                                      levelIndicesToFilter;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                difficultiesToFilter[ 0x4 ];                      		// 0x000C (0x0010) [0x0000000000000000]              
	unsigned char                                      filterChallengeMissions;                          		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      filterCampaignMissions;                           		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned char                                      filterPureStrategy;                               		// 0x001E (0x0001) [0x0000000000000000]              
	unsigned char                                      filterInfiniteBuild;                              		// 0x001F (0x0001) [0x0000000000000000]              
	unsigned char                                      filterInfiniteWaves;                              		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      filterHostClass;                                  		// 0x0021 (0x0001) [0x0000000000000000]              
	unsigned char                                      filterHostLevel;                                  		// 0x0022 (0x0001) [0x0000000000000000]              
	unsigned char                                      filterHostLevelStart;                             		// 0x0023 (0x0001) [0x0000000000000000]              
	unsigned char                                      filterHostLevelEnd;                               		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameStorage.CoreUnlockInfo
// 0x0020
struct UDunDefGameStorage_FCoreUnlockInfo
{
	unsigned char                                      CoreUnlocks[ 0x20 ];                              		// 0x0000 (0x0020) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGameStorage.ItemBoxInfo
// 0x0004
struct UDunDefGameStorage_FItemBoxInfo
{
	int                                                StoredMana;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefGasCloud.ActorTypeDamageMultiplier
// 0x0008
struct FActorTypeDamageMultiplier
{
	class UClass*                                      ActorClass;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageMultiplier;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefInput.BindingDescription
// 0x0018
struct FBindingDescription
{
	struct FString                                     Binding;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefNativeViewportClient.ScreenResolution
// 0x0008
struct FScreenResolution
{
	int                                                Width;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefPlayer.OverlayEffectEntry
// 0x0014
struct FOverlayEffectEntry
{
	class AActor*                                      CausedByActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                Coloration;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefWeapon_MeleeSword.MeleeSwingInfo
// 0x002C
struct FMeleeSwingInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Animspeed;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeBeforeEndToAllowNextCombo;                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeAfterEndToAllowNextCombo;                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      StepTowardsTarget : 1;                            		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              DamageMultiplier;                                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MomentumMultiplier;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SwingAnimationDuration;                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              BlendInTime;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefPlayer.CustomColorContainer
// 0x0038
struct FCustomColorContainer
{
	class USkeletalMesh*                               CostumeMesh;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    CostumeAnimSet;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                C1;                                               		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                c2;                                               		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                C3;                                               		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefPlayerAbility_AreaOfEffect.AffectedActor
// 0x0008
struct FAffectedActor
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    theEffectComponent;                               		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct UDKGame.DunDefPlayerAbility_TowerPlacement.ActorHitInfo
// 0x0008
struct FActorHitInfo
{
	class AActor*                                      TracedActor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TracedDistance;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefPlayerStats.StatEntryArray
// 0x000C
struct FStatEntryArray
{
	TArray< struct FStatEntry >                        theArray;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.DunDefTower_ProjectileType.TargetClassWeight
// 0x0008
struct FTargetClassWeight
{
	class UClass*                                      TargetClass;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefTower_ChainLightning.EnemyChainLink
// 0x0014
struct FEnemyChainLink
{
	class AActor*                                      EnemyLink;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastEnemyPos;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    LightningChainComponent;                          		// 0x0010 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct UDKGame.DunDefTower_MagicMissile.ProjectileEntry
// 0x0008
struct FProjectileEntry
{
	class ADunDefProjectile*                           theProjectile;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              chanceToSpawn;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.DunDefViewportClient.CursorParticle
// 0x0028
struct FCursorParticle
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   Velocity;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   Acceleration;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   Position;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              LifeSpan;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefViewportClient.AxisInfo
// 0x0010
struct FAxisInfo
{
	float                                              lx;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ly;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              rx;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ry;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.DunDefWaveBillboard.WaveDisplayEntry
// 0x0010
struct FWaveDisplayEntry
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class ADunDefEnemy*                                WaveEnemyArchetype;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      EnemyDifficultyIndex;                             		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                NumberOfEnemies;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.EquipmentDataContainer.SHeroEquipmentItem
// 0x0008
struct FSHeroEquipmentItem
{
	int                                                equipmentID;                                      		// 0x0000 (0x0004) [0x0000000000200003]              ( CPF_Edit | CPF_Const )
	class UHeroEquipmentNative*                        EquipmentTemplate;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.HeroEquipment.LevelRequirementOverride
// 0x0008
struct FLevelRequirementOverride
{
	float                                              QualityThreshold;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LevelRequirementIndex;                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.HeroEquipment.EG_StatMatchingString
// 0x0018
struct FEG_StatMatchingString
{
	float                                              ValueThreshold;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PetValueThreshold;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArmorValueThreshold;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StringValue;                                      		// 0x000C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.HeroEquipment.LevelRange
// 0x0008
struct FLevelRange
{
	int                                                MinLevel;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLevel;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.HeroEquipment.EquipmentComparison
// 0x0038
struct FEquipmentComparison
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Values[ 0xB ];                                    		// 0x000C (0x002C) [0x0000000000000000]              
};

// ScriptStruct UDKGame.HeroEquipment.EG_StatRandomizer
// 0x0028
struct FEG_StatRandomizer
{
	float                                              MaxRandomValue;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRandomValueNegative;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomPower;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomPowerOverrideIfNegative;                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomNegativeThreshold;                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomInclusionThreshold;                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InclusionThresholdOverrideIfNegative;             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NegativeThresholdQualityPercentMultiplier;        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinimumPercentageValue;                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NegativeMinimumPercentageValue;                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.HeroEquipment_Familiar_WithProjectileAI.DelayedShot
// 0x0024
struct UHeroEquipment_Familiar_WithProjectileAI_FDelayedShot
{
	float                                              Timer;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefProjectile*                           Projectile;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Direction;                                        		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.StatObjectDataContainer.SStatObject
// 0x0008
struct FSStatObject
{
	int                                                StatObjectID;                                     		// 0x0000 (0x0004) [0x0000000000200003]              ( CPF_Edit | CPF_Const )
	class UBaseStatObject*                             StatObjectTemplate;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.ProfanityFilter.WordEntry
// 0x0010
struct FWordEntry
{
	struct FString                                     DirtyWord;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      exactOnly : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct UDKGame.SaveHelper.QueuedSave
// 0x0014
struct FQueuedSave
{
	int                                                UserID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsRemote : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            saveData;                                         		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.SaveHelper.ThreadQueuedSave
// 0x0038
struct FThreadQueuedSave
{
	int                                                UserID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            saveData;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsRemote : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FStatProxyBuffer                            StatBuffer;                                       		// 0x0014 (0x0024) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.SaveHelper.PurchasedItem
// 0x000C
struct FPurchasedItem
{
	int                                                OrderID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Quantity;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UI_CreateHeroBase.HeroClassInfo
// 0x0018
struct UUI_CreateHeroBase_FHeroClassInfo
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.UI_GameSetup.MissionPreviewImageInfo
// 0x0010
struct FMissionPreviewImageInfo
{
	struct FString                                     MissionTag;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USurface*                                    MissionPreviewImage;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.UI_GameStats.IntRange
// 0x0014
struct FIntRange
{
	int                                                Start;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Stop;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     feedbackString;                                   		// 0x0008 (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.UI_GameStats.StatPanelProperties
// 0x003C
struct FStatPanelProperties
{
	class UUIObject*                                   panel;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ColumnPositions[ 0x4 ];                           		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FIntRange >                         SelectorPositions;                                		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUIToggleButton*                             panelToggle;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       sceneState;                                       		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      defaultPanel : 1;                                 		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class UUIObject* >                         subObjects;                                       		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.UI_GameStats.EnemyStatInfo
// 0x002C
struct UUI_GameStats_FEnemyStatInfo
{
	struct FName                                       enemyClassName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     enemyName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                numSpawned;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                numKilled;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                numKilledByTowers;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                numKilledByPlayers;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                TotalDamage;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UI_GameStats.TowerStatInfo
// 0x0030
struct UUI_GameStats_FTowerStatInfo
{
	struct FName                                       towerClassName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     towerName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumKills;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                numBuilt;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                numDestroyed;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                numRepaired;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                numSold;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                numUpgraded;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UI_GameStats.HeroAward
// 0x0010
struct UUI_GameStats_FHeroAward
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Wave;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UI_GameStats.HeroStatInfo
// 0x0098
struct FHeroStatInfo
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HeroName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     heroOnlyName;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     heroClassName;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HeroLevel;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                statPlayerIndex;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                numTotalKills;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                numPlayerKills;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                numTowerKills;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                numTowerRepairs;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                numChests;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                numDamage;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                numDeaths;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                mana;                                             		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                Dist;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsRemote : 1;                                    		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInstanceConstant*                   heroMIC;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TinyIcon;                                         		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                PlayerID;                                         		// 0x0078 (0x0008) [0x0000000000000000]              
	TArray< struct UDunDefHeroManagerNative_FLevelProgressInfo > beatenLevels;                                     		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UUI_GameStats_FHeroAward >          awards;                                           		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.UI_GameStats.StatRenderEntry
// 0x0010
struct FStatRenderEntry
{
	struct FString                                     renderString;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  renderTexture;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UI_GameStats.AwardRenderEntry
// 0x0040
struct FAwardRenderEntry
{
	struct FString                                     labelString;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     renderString;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     bestOfString;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     bestOfPartTwo;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  renderTexture;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  HeroIcon;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      isNew : 1;                                        		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      recent : 1;                                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                Count;                                            		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UIResolutionContainer.ResolutionFitting
// 0x0028
struct FResolutionFitting
{
	unsigned char                                      screenType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ResSettingName;                                   		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Width;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                coords[ 0x4 ];                                    		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.UILineGraph.LineIcon
// 0x0020
struct FLineIcon
{
	class UTexture*                                    Texture;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              xvalue;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Color;                                            		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              yvalue;                                           		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Size;                                             		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.UILineGraph.LineGraphLine
// 0x002C
struct FLineGraphLine
{
	TArray< struct FVector2D >                         Values;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Color;                                            		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              widthInPixels;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FLineIcon >                         icons;                                            		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.UI_MainMenu.myUIKeyRepeatData
// 0x000C
struct FmyUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                 		// 0x0000 (0x0008) [0x0000000000100000]              
	float                                              NextRepeatTime;                                   		// 0x0008 (0x0004) [0x0000000000100000]              
};

// ScriptStruct UDKGame.UI_OptionsMenu.PanelProperties
// 0x000C
struct FPanelProperties
{
	class UUIObject*                                   panel;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIToggleButton*                             panelToggle;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      defaultPanel : 1;                                 		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      PC : 1;                                           		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      PS3 : 1;                                          		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      XBox : 1;                                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      PCOnlyWhenUsingGamepad : 1;                       		// 0x0008 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      PCOnlyWhenUsingKeyboard : 1;                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIsGamepadControlPanel : 1;                       		// 0x0008 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
};

// ScriptStruct UDKGame.UI_PlayerStats.EnemyStatInfo
// 0x0028
struct UUI_PlayerStats_FEnemyStatInfo
{
	struct FName                                       enemyClassName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     enemyName;                                        		// 0x000C (0x000C) [0x0000000000408000]              ( CPF_Localized | CPF_NeedCtorLink )
	int                                                numKilled;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                numKilledByTowers;                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                numKilledByPlayers;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                TotalDamage;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UI_PlayerStats.TowerStatInfo
// 0x0030
struct UUI_PlayerStats_FTowerStatInfo
{
	struct FName                                       towerClassName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     towerName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumKills;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                numBuilt;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                numDestroyed;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                numRepaired;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                numSold;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                numUpgraded;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UI_PlayerStats.ClassToTextureMapping
// 0x0018
struct FClassToTextureMapping
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  Texture;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LocalizedName;                                    		// 0x000C (0x000C) [0x0000000000408001]              ( CPF_Edit | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.UI_SearchFilters.HeroClassInfo
// 0x0010
struct UUI_SearchFilters_FHeroClassInfo
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UILabel_ScoreIndicator.ScoreAwardEntry
// 0x0030
struct FScoreAwardEntry
{
	struct FString                                     ScoreAwardReason;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                ScoreAwardColor;                                  		// 0x000C (0x0010) [0x0000000000000000]              
	float                                              playSpeed;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ScoreTagReason;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ScoreTagAdditionalNum;                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ScoreTagSecondaryNum;                             		// 0x0028 (0x0004) [0x0000000000000000]              
	class AActor*                                      ActorArchetype;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct UDKGame.UIPanel_Leaderboard.ArchetypeToHeroClassMapping
// 0x0024
struct FArchetypeToHeroClassMapping
{
	struct FString                                     archetypeName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     heroClassName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     iconPath;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct UDKGame.UIScriptWidget_ButtonMultiImage.MultiImageEntry
// 0x0024
struct FMultiImageEntry
{
	class USurface*                                    ImageRef;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CenterOffsetX;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CenterOffsetY;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeX;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SizeY;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ImageColor;                                       		// 0x0014 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.UIScriptWidget_Combobox.BoxOverlay
// 0x000C
struct FBoxOverlay
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Color;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct UDKGame.UIScriptWidget_Combobox.ComboboxFlags
// 0x000C
struct FComboboxFlags
{
	unsigned long                                      bPushSelectionToTitle : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPreventExpansionOnTitleClick : 1;                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRotateToggleBtnWhenExpanded : 1;                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bRenderLastElementOverBorder : 1;                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bForceSquareToggleBtn : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDrawFullElementBackground : 1;                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bDontDrawToggleIcon : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	float                                              TitleWidth;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DefaultSelection;                                 		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct UDKGame.UIScriptWidget_MaterialInstance.MICFloatParam
// 0x000C
struct FMICFloatParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParamValue;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct UDKGame.UIScriptWidget_MaterialInstance.MICVectorParam
// 0x0018
struct FMICVectorParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParamValue;                                       		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif