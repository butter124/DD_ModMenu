/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefAtlantis_structs.h
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

// ScriptStruct DunDefAtlantis.DunDefKraken.Tentacle
// 0x0034
struct FTentacle
{
	class AKrakenTentacle*                             theTentacle;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInShell : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       SkelControlName;                                  		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BasedSocket;                                      		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RootBoneName;                                     		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileSocketName;                             		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RetreatVFXSocketName;                             		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkelControlSingleBone*                      TentacleController;                               		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefAtlantis.DunDefKrakenController.ChargeHit
// 0x0008
struct FChargeHit
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastHitTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefAtlantis.PuzzleRoomActor.PuzzlePiece
// 0x000C
struct FPuzzlePiece
{
	class APuzzlePieceActor*                           thePiece;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCurrentPathPiece : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                GridIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct DunDefAtlantis.RaisingWaterVolume.AirControlPawn
// 0x0008
struct FAirControlPawn
{
	class ADunDefPawn*                                 thePawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LeftVolumeTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif