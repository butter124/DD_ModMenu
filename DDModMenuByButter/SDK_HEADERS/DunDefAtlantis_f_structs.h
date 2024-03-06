/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefAtlantis_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqAct_PickNewPuzzleSolver_eventActivated_Parms
{
	// class ADunDefGRI_RisingWater*                   rwGRI;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USeqVar_Object*                           outputVar;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.AddPlayerToWaterList
// [0x00020102] 
struct ADunDefGRI_RisingWater_execAddPlayerToWaterList_Parms
{
	class ADunDefPlayer*                               waterPlayer;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.RemovePlayerToWaterList
// [0x00020102] 
struct ADunDefGRI_RisingWater_execRemovePlayerToWaterList_Parms
{
	class ADunDefPlayer*                               waterPlayer;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.SetWaterCastingMultiplier
// [0x00020002] 
struct ADunDefGRI_RisingWater_execSetWaterCastingMultiplier_Parms
{
	float                                              newCastingMultiplier;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.GetCastRateMultiplier
// [0x00020102] 
struct ADunDefGRI_RisingWater_execGetCastRateMultiplier_Parms
{
	class ADunDefPlayerAbility*                        ability;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.PuzzleComplete
// [0x00020002] 
struct ADunDefGRI_RisingWater_execPuzzleComplete_Parms
{
	// class ADunDefPlayerController*                  PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.GetRandomPlayer
// [0x00020002] 
struct ADunDefGRI_RisingWater_execGetRandomPlayer_Parms
{
	class ADunDefPlayer*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayer*                            playerCheck;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.DrawMyHUD
// [0x00820102] 
struct ADunDefGRI_RisingWater_execDrawMyHUD_Parms
{
	class ADunDefHUD*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ScreenPos;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  objectIconWorldPos;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           cameraDistFromPos;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           IconWidth;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           IconHeight;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           IconDistanceScale;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.SetNewSolver
// [0x00024102] 
struct ADunDefGRI_RisingWater_execSetNewSolver_Parms
{
	class ADunDefPlayer*                               newSolver;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIgnoreGameInfoNotification : 1;                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ADunDefPlayerController*                  PC;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.NotifyPuzzleSolverDeath
// [0x00020002] 
struct ADunDefGRI_RisingWater_execNotifyPuzzleSolverDeath_Parms
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.ClearPuzzleSolver
// [0x00020002] 
struct ADunDefGRI_RisingWater_execClearPuzzleSolver_Parms
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.PickNewSolver
// [0x00020002] 
struct ADunDefGRI_RisingWater_execPickNewSolver_Parms
{
	class ADunDefPlayer*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefPlayer*                            newSolver;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefGRI_RisingWater_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqAct_SetUpPuzzle_eventActivated_Parms
{
	// class USeqVar_Object*                           outputVar;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APuzzleRoomActor*                         puzzle;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.Destroyed
// [0x00820902] ( FUNC_Event )
struct APuzzleRoomActor_eventDestroyed_Parms
{
	// struct FPuzzlePiece                             thePiece;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.FlashPuzzlePiece
// [0x00020102] 
struct APuzzleRoomActor_execFlashPuzzlePiece_Parms
{
	int                                                pieceIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzleRoomActor.ShowPuzzlePath
// [0x00020002] 
struct APuzzleRoomActor_execShowPuzzlePath_Parms
{
};

// Function DunDefAtlantis.PuzzleRoomActor.PlayFailedPathVFX
// [0x00020102] 
struct APuzzleRoomActor_execPlayFailedPathVFX_Parms
{
	struct FVector                                     actorLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.PlayInitalFailVFX
// [0x00020102] 
struct APuzzleRoomActor_execPlayInitalFailVFX_Parms
{
	int                                                failedIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzleRoomActor.FailedPath
// [0x00020002] 
struct APuzzleRoomActor_execFailedPath_Parms
{
};

// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulMove
// [0x00020102] 
struct APuzzleRoomActor_execSuccessfulMove_Parms
{
	int                                                moveIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulFinish
// [0x00020102] 
struct APuzzleRoomActor_execSuccessfulFinish_Parms
{
	int                                                finalIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzleRoomActor.FinishedPuzzle
// [0x00020002] 
struct APuzzleRoomActor_execFinishedPuzzle_Parms
{
	int                                                finalIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzleRoomActor.NotifyPieceTouched
// [0x00020002] 
struct APuzzleRoomActor_execNotifyPieceTouched_Parms
{
	class APuzzlePieceActor*                           touchedPiece;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TouchingActor;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             touchedPathPoint;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             failedTouchIndex;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.ResetPuzzle
// [0x00020002] 
struct APuzzleRoomActor_execResetPuzzle_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.DrawDebugPathLines
// [0x00820002] 
struct APuzzleRoomActor_execDrawDebugPathLines_Parms
{
	// struct FPuzzlePiece                             currentPiece;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FPuzzlePiece                             previousPiece;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  DrawLoc;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  prevDrawLoc;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.StartEffect
// [0x00024102] 
struct APuzzleRoomActor_execStartEffect_Parms
{
	int                                                pieceIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.PuzzleRoomActor.AddValidPathPiece
// [0x00020102] 
struct APuzzleRoomActor_execAddValidPathPiece_Parms
{
	int                                                newPieceIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newValidIndex;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.MakePuzzle
// [0x00820002] 
struct APuzzleRoomActor_execMakePuzzle_Parms
{
	// struct FVector2D                                thePoint;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             currentPoint;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CurrentRow;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             CurrentColumn;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             testPoint;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             leftTestPoint;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             rightTestPoint;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bMovedLeft : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bMovedRight : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bMovedUp : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bMovedDown : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             failToMoveCount;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             currentPathIndex;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             moveLeftCount;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             moveRightCount;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             movedDownCount;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             movedUpCount;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.CalculatePieceIndex
// [0x00020102] 
struct APuzzleRoomActor_execCalculatePieceIndex_Parms
{
	int                                                X_loc;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y_loc;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.PuzzleRoomActor.InitGrid
// [0x00820102] 
struct APuzzleRoomActor_execInitGrid_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FPuzzlePiece                             newPiece;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BoxExtent;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FBoxSphereBounds                         BSB;                                              		// 0x002C (0x001C) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzleRoomActor.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct APuzzleRoomActor_eventPostBeginPlay_Parms
{
};

// Function DunDefAtlantis.PuzzleRoomActor.ExecReplicatedFunction
// [0x00024102] 
struct APuzzleRoomActor_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft.Activated
// [0x00020802] ( FUNC_Event )
struct UDunDef_SeqEvent_PuzzleSolverLeft_eventActivated_Parms
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.Logout
// [0x00020002] 
struct AGameInfo_RisingWater_execLogout_Parms
{
	class AController*                                 Exiting;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class USequenceObject* >                theEvents;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USequenceObject*                          theEvent;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.GameInfo_RisingWater.SetCurrentPuzzleSolver
// [0x00020002] 
struct AGameInfo_RisingWater_execSetCurrentPuzzleSolver_Parms
{
	class ADunDefPlayer*                               newPuzzleSolver;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.GameInfo_RisingWater.SetGRIPuzzleSolver
// [0x00020002] 
struct AGameInfo_RisingWater_execSetGRIPuzzleSolver_Parms
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.RestartPlayer
// [0x00020002] 
struct AGameInfo_RisingWater_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.GameInfo_RisingWater.Killed
// [0x00020002] 
struct AGameInfo_RisingWater_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefInkCloud.ResetCurrentMoveActors
// [0x00020002] 
struct ADunDefInkCloud_execResetCurrentMoveActors_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefInkCloud.HurtRadius
// [0x00024102] 
struct ADunDefInkCloud_execHurtRadius_Parms
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      IgnoredActor;                                     		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AController*                                 InstigatedByController;                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   Victim;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCausedDamage : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefAtlantis.DunDefInkCloud.FadeOut
// [0x00024102] 
struct ADunDefInkCloud_execFadeOut_Parms
{
	float                                              theLightFadeOutTime;                              		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDefInkCloud.Init
// [0x00020002] 
struct ADunDefInkCloud_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.CheckKrakenProximity
// [0x00820002] 
struct ADunDefKraken_execCheckKrakenProximity_Parms
{
	// class APawn*                                    outPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  diff;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.Died
// [0x00020002] 
struct ADunDefKraken_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.DestroyTentacles
// [0x00020002] 
struct ADunDefKraken_execDestroyTentacles_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.GetPlayerTargetingDesirability
// [0x00024102] 
struct ADunDefKraken_execGetPlayerTargetingDesirability_Parms
{
	class ADunDefPlayerController*                     forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               ForPlayer;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.BiteStop
// [0x00020802] ( FUNC_Event )
struct ADunDefKraken_eventBiteStop_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.BiteStart
// [0x00020802] ( FUNC_Event )
struct ADunDefKraken_eventBiteStart_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.PlayTentacleAttackAnimation
// [0x00020002] 
struct ADunDefKraken_execPlayTentacleAttackAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.PlayBiteAttackAnimation
// [0x00020002] 
struct ADunDefKraken_execPlayBiteAttackAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.StopSpit
// [0x00020802] ( FUNC_Event )
struct ADunDefKraken_eventStopSpit_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.StartSpit
// [0x00020802] ( FUNC_Event )
struct ADunDefKraken_eventStartSpit_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.GetSocketLocAndRot
// [0x00420002] 
struct ADunDefKraken_execGetSocketLocAndRot_Parms
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     socLoc;                                           		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    socRot;                                           		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function DunDefAtlantis.DunDefKraken.ShootGiantProjectile
// [0x00020802] ( FUNC_Event )
struct ADunDefKraken_eventShootGiantProjectile_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.ShootRight
// [0x00020802] ( FUNC_Event )
struct ADunDefKraken_eventShootRight_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.ShootLeft
// [0x00020802] ( FUNC_Event )
struct ADunDefKraken_eventShootLeft_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.ResetMovementSettings
// [0x00020002] 
struct ADunDefKraken_execResetMovementSettings_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.SetDashMovementSettings
// [0x00020002] 
struct ADunDefKraken_execSetDashMovementSettings_Parms
{
	float                                              DashAirSpeedScalar;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DashRotationRateScalar;                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.PlayDashWindUp
// [0x00020102] 
struct ADunDefKraken_execPlayDashWindUp_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.PlayInkCloudAttack
// [0x00020102] 
struct ADunDefKraken_execPlayInkCloudAttack_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.PlayGiantProjectileAttack
// [0x00020102] 
struct ADunDefKraken_execPlayGiantProjectileAttack_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.PlayRightTentacleAttack
// [0x00820102] 
struct ADunDefKraken_execPlayRightTentacleAttack_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FTentacle                                theTentacle;                                      		// 0x0004 (0x0034) [0x0000000000000000]              
	// unsigned long                                   bAllowAnim : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefAtlantis.DunDefKraken.GetTowerTargetingDesirability
// [0x00020102] 
struct ADunDefKraken_execGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.PlayLeftTentacleAttack
// [0x00820102] 
struct ADunDefKraken_execPlayLeftTentacleAttack_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FTentacle                                theTentacle;                                      		// 0x0004 (0x0034) [0x0000000000000000]              
	// unsigned long                                   bAllowAnim : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DunDefAtlantis.DunDefKraken.IsValidRightSwingTarget
// [0x00020002] 
struct ADunDefKraken_execIsValidRightSwingTarget_Parms
{
	class AActor*                                      checkTarg;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.IsValidLeftSwingTarget
// [0x00020002] 
struct ADunDefKraken_execIsValidLeftSwingTarget_Parms
{
	class AActor*                                      checkTarg;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.AddToRightSwingHurtList
// [0x00020002] 
struct ADunDefKraken_execAddToRightSwingHurtList_Parms
{
	class AActor*                                      newHitTarg;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.AddToLeftSwingHurtList
// [0x00020002] 
struct ADunDefKraken_execAddToLeftSwingHurtList_Parms
{
	class AActor*                                      newHitTarg;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.StopMelee
// [0x00020002] 
struct ADunDefKraken_execStopMelee_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.StartMelee
// [0x00020802] ( FUNC_Event )
struct ADunDefKraken_eventStartMelee_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.CloseMouth
// [0x00020002] 
struct ADunDefKraken_execCloseMouth_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.OpenMouth
// [0x00020002] 
struct ADunDefKraken_execOpenMouth_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.PlayMouthOpen
// [0x00020102] 
struct ADunDefKraken_execPlayMouthOpen_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.DoSingleWithdraw
// [0x00020102] 
struct ADunDefKraken_execDoSingleWithdraw_Parms
{
	int                                                tentacleIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.ForceWithDraw
// [0x00020002] 
struct ADunDefKraken_execForceWithDraw_Parms
{
	class AKrakenTentacle*                             withdrawTentacle;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.BringOutAllTentacles
// [0x00020102] 
struct ADunDefKraken_execBringOutAllTentacles_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           AnimLength;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.PlayWithDrawTentacle
// [0x00820102] 
struct ADunDefKraken_execPlayWithDrawTentacle_Parms
{
	int                                                tentacleIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FPerBoneMaskInfo                         currentMaskInfo;                                  		// 0x0004 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             BranchListIndex;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           BlendOutTime;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FVector                                  emitterLoc;                                       		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 emitterRot;                                       		// 0x0058 (0x000C) [0x0000000000000000]              
	// class ADunDefEmitterSpawnable*                  retreatVFX;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.NotifyTentacleWithdraw
// [0x00020002] 
struct ADunDefKraken_execNotifyTentacleWithdraw_Parms
{
	class AKrakenTentacle*                             damagedTentacle;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.CheckSpecialCoreDmg
// [0x00820002] 
struct ADunDefKraken_execCheckSpecialCoreDmg_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  theLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 theRot;                                           		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.AdjustDamage
// [0x00424002] 
struct ADunDefKraken_execAdjustDamage_Parms
{
	int                                                inDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.PlayRealHurtEffect
// [0x00820102] 
struct ADunDefKraken_execPlayRealHurtEffect_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 theRot;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.NotifyTakeHit
// [0x00020002] 
struct ADunDefKraken_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ADunDefKraken_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.UpdateDifficultyValues
// [0x00024002] 
struct ADunDefKraken_execUpdateDifficultyValues_Parms
{
	unsigned long                                      UpdateMaterial : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      onlyDynamicValues : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.SetMovementPhysics
// [0x00020002] 
struct ADunDefKraken_execSetMovementPhysics_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.GetAttackPauseRate
// [0x00020002] 
struct ADunDefKraken_execGetAttackPauseRate_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKraken.InitTentacles
// [0x00020102] 
struct ADunDefKraken_execInitTentacles_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKraken.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefKraken_eventPostBeginPlay_Parms
{
};

// Function DunDefAtlantis.DunDefKraken.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefKraken_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDefKraken.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADunDefKraken_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.GetLightningTowerDamagePercent
// [0x00020102] 
struct AKrakenTentacle_execGetLightningTowerDamagePercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.setIsWebbed
// [0x00020002] 
struct AKrakenTentacle_execsetIsWebbed_Parms
{
	unsigned long                                      isWebbed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.isWebbed
// [0x00020002] 
struct AKrakenTentacle_execisWebbed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.GetChainIgnore
// [0x00020002] 
struct AKrakenTentacle_execGetChainIgnore_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.SetChainIgnore
// [0x00020002] 
struct AKrakenTentacle_execSetChainIgnore_Parms
{
	unsigned long                                      ignore : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.IsBeingChainedBy
// [0x00020002] 
struct AKrakenTentacle_execIsBeingChainedBy_Parms
{
	class ADunDefTower_ChainLightning*                 Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.RemoveFromChainingTowers
// [0x00020002] 
struct AKrakenTentacle_execRemoveFromChainingTowers_Parms
{
	class ADunDefTower_ChainLightning*                 Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.AddToChainingTowers
// [0x00020002] 
struct AKrakenTentacle_execAddToChainingTowers_Parms
{
	class ADunDefTower_ChainLightning*                 Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.AllowSuction
// [0x00020002] 
struct AKrakenTentacle_execAllowSuction_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.ClientTakeRadiusDamage
// [0x00024100] 
struct AKrakenTentacle_execClientTakeRadiusDamage_Parms
{
	class APawn*                                       InstigatorPawn;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageFalloffExponent;                            		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.ClientTakeDamage
// [0x00024100] 
struct AKrakenTentacle_execClientTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       InstigatorPawn;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.GetHealthPercent
// [0x00020102] 
struct AKrakenTentacle_execGetHealthPercent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.UpdateDamageFlashing
// [0x00020102] 
struct AKrakenTentacle_execUpdateDamageFlashing_Parms
{
	// float                                           flashAmount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.KrakenTentacle.LocalTookDamage
// [0x00020102] 
struct AKrakenTentacle_execLocalTookDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     atPosition;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      fromDamageType;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.HealPctOfMaxHealth
// [0x00024002] 
struct AKrakenTentacle_execHealPctOfMaxHealth_Parms
{
	float                                              HealPct;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowFloatingNumbers : 1;                         		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             AddHealth;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.KrakenTentacle.ForceMoveActor
// [0x00020102] 
struct AKrakenTentacle_execForceMoveActor_Parms
{
	class AActor*                                      Mover;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     NewLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.GetOverrideTargetComponent
// [0x00020102] 
struct AKrakenTentacle_execGetOverrideTargetComponent_Parms
{
	class UPrimitiveComponent*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function DunDefAtlantis.KrakenTentacle.EncroachingOn
// [0x00020802] ( FUNC_Event )
struct AKrakenTentacle_eventEncroachingOn_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.Bump
// [0x00020800] ( FUNC_Event )
struct AKrakenTentacle_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.Touch
// [0x00020802] ( FUNC_Event )
struct AKrakenTentacle_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.SetDoDamageChecks
// [0x00020002] 
struct AKrakenTentacle_execSetDoDamageChecks_Parms
{
	unsigned long                                      bAllowDamage : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.GetHealth
// [0x00024102] 
struct AKrakenTentacle_execGetHealth_Parms
{
	unsigned long                                      bGetMax : 1;                                      		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.GetMass
// [0x00020102] 
struct AKrakenTentacle_execGetMass_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.AllowDarknessIgnorance
// [0x00020102] 
struct AKrakenTentacle_execAllowDarknessIgnorance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.ForceFriendlyFire
// [0x00024002] 
struct AKrakenTentacle_execForceFriendlyFire_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.GetInterpolatedTargetingLocation
// [0x00824102] 
struct AKrakenTentacle_execGetInterpolatedTargetingLocation_Parms
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  targetingPoint;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 targetingRot;                                     		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.KrakenTentacle.GetTargetingLocation
// [0x00824102] 
struct AKrakenTentacle_execGetTargetingLocation_Parms
{
	class AActor*                                      RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  targetingPoint;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 targetingRot;                                     		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.KrakenTentacle.OnDestroy_RemoveFromTargetableList
// [0x00020000] 
struct AKrakenTentacle_execOnDestroy_RemoveFromTargetableList_Parms
{
};

// Function DunDefAtlantis.KrakenTentacle.OnPostBeginPlay_AddToTargetableList
// [0x00020000] 
struct AKrakenTentacle_execOnPostBeginPlay_AddToTargetableList_Parms
{
};

// Function DunDefAtlantis.KrakenTentacle.UnregisterAttacker
// [0x00020000] 
struct AKrakenTentacle_execUnregisterAttacker_Parms
{
	class ADunDefEnemyController*                      forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.RegisterAttacker
// [0x00020000] 
struct AKrakenTentacle_execRegisterAttacker_Parms
{
	class ADunDefEnemyController*                      forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.GetAttackRangeOffset
// [0x00020002] 
struct AKrakenTentacle_execGetAttackRangeOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.IgnoreFriendlyFireDamage
// [0x00024102] 
struct AKrakenTentacle_execIgnoreFriendlyFireDamage_Parms
{
	class UDunDefTargetableInterface*                  instigatorActor;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 OptionalController;                               		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.GetTargetingTeam
// [0x00020102] 
struct AKrakenTentacle_execGetTargetingTeam_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.GetTowerTargetingDesirability
// [0x00020102] 
struct AKrakenTentacle_execGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.GetPlayerTargetingDesirability
// [0x00024102] 
struct AKrakenTentacle_execGetPlayerTargetingDesirability_Parms
{
	class ADunDefPlayerController*                     forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ADunDefPlayer*                               ForPlayer;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.KrakenTentacle.DecreaseHealth
// [0x00020002] 
struct AKrakenTentacle_execDecreaseHealth_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.ForceWithDraw
// [0x00020002] 
struct AKrakenTentacle_execForceWithDraw_Parms
{
};

// Function DunDefAtlantis.KrakenTentacle.LeaveShell
// [0x00020002] 
struct AKrakenTentacle_execLeaveShell_Parms
{
};

// Function DunDefAtlantis.KrakenTentacle.WithdrawIntoShell
// [0x00020002] 
struct AKrakenTentacle_execWithdrawIntoShell_Parms
{
};

// Function DunDefAtlantis.KrakenTentacle.TakeDamage
// [0x00024802] ( FUNC_Event )
struct AKrakenTentacle_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     WhatHitMe;                                        		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.SetWithDrawTime
// [0x00020002] 
struct AKrakenTentacle_execSetWithDrawTime_Parms
{
	float                                              ForceWithDraw;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.SetUpMesh
// [0x00820102] 
struct AKrakenTentacle_execSetUpMesh_Parms
{
	// struct FVector                                  L;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 R;                                                		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.KrakenTentacle.InitTentacle
// [0x00020002] 
struct AKrakenTentacle_execInitTentacle_Parms
{
	class ADunDefKraken*                               theKraken;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BaseSocketName;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DifficultyHealthMultiplier;                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKrakenTentacle_eventPostBeginPlay_Parms
{
};

// Function DunDefAtlantis.KrakenTentacle.ExecReplicatedFunction
// [0x00024102] 
struct AKrakenTentacle_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.KrakenTentacle.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKrakenTentacle_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefKrakenController.StopInkCloud
// [0x00020002] 
struct ADunDefKrakenController_execStopInkCloud_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnInkCloud
// [0x00820002] 
struct ADunDefKrakenController_execSpawnInkCloud_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShootDirection;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class ADunDefInkCloud*                          theProjectile;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnGiantProjectile
// [0x00820002] 
struct ADunDefKrakenController_execSpawnGiantProjectile_Parms
{
	// struct FVector                                  SpawnLoc;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShootDirection;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class ADunDefHomingProjectile*                  theProjectile;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnRightTentacleProjectiles
// [0x00820002] 
struct ADunDefKrakenController_execSpawnRightTentacleProjectiles_Parms
{
	// struct FTentacle                                checkTentacle;                                    		// 0x0000 (0x0034) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShootDirection;                                   		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x004C (0x000C) [0x0000000000000000]              
	// class ADunDefHomingProjectile*                  theProjectile;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         ActorList;                                        		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             targIndex;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnLeftTentacleProjectiles
// [0x00820002] 
struct ADunDefKrakenController_execSpawnLeftTentacleProjectiles_Parms
{
	// struct FTentacle                                checkTentacle;                                    		// 0x0000 (0x0034) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShootDirection;                                   		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x004C (0x000C) [0x0000000000000000]              
	// class ADunDefHomingProjectile*                  theProjectile;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         ActorList;                                        		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             targIndex;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.GetValidShootTargets
// [0x00424002] 
struct ADunDefKrakenController_execGetValidShootTargets_Parms
{
	TArray< class AActor* >                            ActorList;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              MinRange;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxRange;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              angleCheck;                                       		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AActor*                                   checkActor;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            dunPlayer;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           DistancetoTarget;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.CheckCustomOpenMouthAttacks
// [0x00020002] 
struct ADunDefKrakenController_execCheckCustomOpenMouthAttacks_Parms
{
	// float                                           DistancetoTarget;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasLineOfSight : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           angleToTarg;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomClosedMouthAttacks
// [0x00020002] 
struct ADunDefKrakenController_execCheckForCustomClosedMouthAttacks_Parms
{
	// TArray< class AActor* >                         ActorList;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomAttacks
// [0x00020002] 
struct ADunDefKrakenController_execCheckForCustomAttacks_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.CloseMouth
// [0x00020002] 
struct ADunDefKrakenController_execCloseMouth_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTentacleBroughtOut
// [0x00020002] 
struct ADunDefKrakenController_execNotifyTentacleBroughtOut_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTentecaleWithDrawn
// [0x00020002] 
struct ADunDefKrakenController_execNotifyTentecaleWithDrawn_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.HandleTentacleDamage
// [0x00820002] 
struct ADunDefKrakenController_execHandleTentacleDamage_Parms
{
	class AActor*                                      newHitTarg;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  dmgMomentum;                                      		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.EndDash
// [0x00020002] 
struct ADunDefKrakenController_execEndDash_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.UpdateDashPoint
// [0x00820002] 
struct ADunDefKrakenController_execUpdateDashPoint_Parms
{
	// struct FVector                                  myFlatHeight;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirToDashPt;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  newDashPoint;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.AddToDashHurtList
// [0x00820002] 
struct ADunDefKrakenController_execAddToDashHurtList_Parms
{
	class AActor*                                      DashedActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FChargeHit                               newChargeHit;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.EndMeleeSwing
// [0x00020002] 
struct ADunDefKrakenController_execEndMeleeSwing_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.BiteStart
// [0x00020000] 
struct ADunDefKrakenController_execBiteStart_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.EndBite
// [0x00020002] 
struct ADunDefKrakenController_execEndBite_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.DoBiting
// [0x00820002] 
struct ADunDefKrakenController_execDoBiting_Parms
{
	// struct FVector                                  biteLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x000C (0x001C) [0x0000000000000000]              
	// class AActor*                                   BittenActor;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 biteRotation;                                     		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.AddToSwingHurtList
// [0x00020002] 
struct ADunDefKrakenController_execAddToSwingHurtList_Parms
{
	class AActor*                                      newEntry;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKrakenController.ShouldDamage
// [0x00020002] 
struct ADunDefKrakenController_execShouldDamage_Parms
{
	class AActor*                                      act;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKrakenController.DoAttack
// [0x00020002] 
struct ADunDefKrakenController_execDoAttack_Parms
{
};

// Function DunDefAtlantis.DunDefKrakenController.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
struct ADunDefKrakenController_eventGeneratePathToActor_Parms
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WithinDistance;                                   		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowPartialPath : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  NextDest;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefKrakenController.MoveAroundBlockade
// [0x00024000] 
struct ADunDefKrakenController_execMoveAroundBlockade_Parms
{
	class AActor*                                      blockadeActor;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlockadeWidth;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      SkipBlockingCheck : 1;                            		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKrakenController.NavActorReachable
// [0x00020002] 
struct ADunDefKrakenController_execNavActorReachable_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKrakenController.FindNearestNavPointTo
// [0x00024002] 
struct ADunDefKrakenController_execFindNearestNavPointTo_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCheckVisible : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKrakenController.GetAttackRange
// [0x00020002] 
struct ADunDefKrakenController_execGetAttackRange_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKrakenController.ForceTentacleAttack
// [0x00020002] 
struct ADunDefKrakenController_execForceTentacleAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKrakenController.WantsHurtAnimation
// [0x00020002] 
struct ADunDefKrakenController_execWantsHurtAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTakeHitEX
// [0x00020002] 
struct ADunDefKrakenController_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefKrakenController.Possess
// [0x00020802] ( FUNC_Event )
struct ADunDefKrakenController_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkMan.IsCurrentlyPlayingAttackAnimation
// [0x00020102] 
struct ADunDefSharkMan_execIsCurrentlyPlayingAttackAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHitEX
// [0x00020002] 
struct ADunDefSharkMan_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHit
// [0x00020002] 
struct ADunDefSharkMan_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkMan.ClearChargeHurtList
// [0x00020002] 
struct ADunDefSharkMan_execClearChargeHurtList_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.AddToChargeHurtList
// [0x00020002] 
struct ADunDefSharkMan_execAddToChargeHurtList_Parms
{
	class ADunDefPlayer*                               Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.EndCharging
// [0x00020102] 
struct ADunDefSharkMan_execEndCharging_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.SetChargingSpeed
// [0x00020002] 
struct ADunDefSharkMan_execSetChargingSpeed_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.CheckForEncroachers
// [0x00820002] 
struct ADunDefSharkMan_execCheckForEncroachers_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefTower*                             Tower;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ADunDefEnemy*                             Enemy;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADunDefPlayer*                            Player;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Radius;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  effectiveLocation;                                		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAbortAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlaySharkManChargeAbortAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManHitWallAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlaySharkManHitWallAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeFailAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlaySharkManChargeFailAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.StopSharkManDizzyAnimation
// [0x00020102] 
struct ADunDefSharkMan_execStopSharkManDizzyAnimation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManDizzyAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlaySharkManDizzyAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlaySharkManChargeAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManWindupAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlaySharkManWindupAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.Tick
// [0x00020802] ( FUNC_Event )
struct ADunDefSharkMan_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkMan.HandleMomentum
// [0x00024002] 
struct ADunDefSharkMan_execHandleMomentum_Parms
{
	struct FVector                                     Momentum;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkMan.SetSharkManArmBlend
// [0x00020100] 
struct ADunDefSharkMan_execSetSharkManArmBlend_Parms
{
	int                                                animAmount;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManAttackAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlaySharkManAttackAnimation_Parms
{
	int                                                AnimationIndex;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkMan.PlayHurtAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlayHurtAnimation_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkMan.PlayAttackAnimation
// [0x00020102] 
struct ADunDefSharkMan_execPlayAttackAnimation_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkMan.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
struct ADunDefSharkMan_eventGetEnemyTargetingDesirability_Parms
{
	class AEngineNativeDunDefAIController*             forController;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           val;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkMan.GetTowerTargetingDesirability
// [0x00020102] 
struct ADunDefSharkMan_execGetTowerTargetingDesirability_Parms
{
	class ADunDefTower*                                forTower;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           val;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeSwingLocation
// [0x00820102] 
struct ADunDefSharkMan_execGetMeleeSwingLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  averagePosition;                                  		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeElbowLocation
// [0x00820102] 
struct ADunDefSharkMan_execGetMeleeElbowLocation_Parms
{
	unsigned char                                      fist;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ElbowLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ElbowRotation;                                    		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeFistLocation
// [0x00820102] 
struct ADunDefSharkMan_execGetMeleeFistLocation_Parms
{
	unsigned char                                      fist;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SwingLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SwingRotation;                                    		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkMan.GroundStrike
// [0x00820902] ( FUNC_Event )
struct ADunDefSharkMan_eventGroundStrike_Parms
{
	// struct FVector                                  StrikeLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	// class ADunDefPlayer*                            Player;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             Tower;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MomentumVector;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeBothEnd
// [0x00020802] ( FUNC_Event )
struct ADunDefSharkMan_eventMeleeBothEnd_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeBothStart
// [0x00020802] ( FUNC_Event )
struct ADunDefSharkMan_eventMeleeBothStart_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeRightEnd
// [0x00020802] ( FUNC_Event )
struct ADunDefSharkMan_eventMeleeRightEnd_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeRightStart
// [0x00020802] ( FUNC_Event )
struct ADunDefSharkMan_eventMeleeRightStart_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftEnd
// [0x00020802] ( FUNC_Event )
struct ADunDefSharkMan_eventMeleeLeftEnd_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftStart
// [0x00020802] ( FUNC_Event )
struct ADunDefSharkMan_eventMeleeLeftStart_Parms
{
};

// Function DunDefAtlantis.DunDefSharkMan.ExecReplicatedFunction
// [0x00024102] 
struct ADunDefSharkMan_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkMan.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADunDefSharkMan_eventPostBeginPlay_Parms
{
};

// Function DunDefAtlantis.DunDefSharkmanController.NotifyTakeHitEX
// [0x00020002] 
struct ADunDefSharkmanController_execNotifyTakeHitEX_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkmanController.AbortCharge
// [0x00020002] 
struct ADunDefSharkmanController_execAbortCharge_Parms
{
};

// Function DunDefAtlantis.DunDefSharkmanController.CheckTowerViability
// [0x00020002] 
struct ADunDefSharkmanController_execCheckTowerViability_Parms
{
	class ADunDefTower*                                Tower;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           DistanceSq;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkmanController.CheckForCustomAttacks
// [0x00020002] 
struct ADunDefSharkmanController_execCheckForCustomAttacks_Parms
{
	// int                                             pos;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           closestDistanceSq;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           currentDistanceSq;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ADunDefTower*                             closestVisibleTower;                              		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ChargeMaxDistanceSq;                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkmanController.GetReachCheckDuration
// [0x00020102] 
struct ADunDefSharkmanController_execGetReachCheckDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkmanController.DoPositionPoll
// [0x00020002] 
struct ADunDefSharkmanController_execDoPositionPoll_Parms
{
};

// Function DunDefAtlantis.DunDefSharkmanController.IsWinding
// [0x00020002] 
struct ADunDefSharkmanController_execIsWinding_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkmanController.IsDistractedByCore
// [0x00020002] 
struct ADunDefSharkmanController_execIsDistractedByCore_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ADunDefCrystalCore*                       targetCore;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           CoreTargetDistractionDistanceSq;                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToTowers
// [0x00020002] 
struct ADunDefSharkmanController_execIsCloseToTowers_Parms
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   Tower;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           RadiusSq;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToPlayers
// [0x00020002] 
struct ADunDefSharkmanController_execIsCloseToPlayers_Parms
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   Player;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           RadiusSq;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.DunDefSharkmanController.AddToSwingHurtList
// [0x00020002] 
struct ADunDefSharkmanController_execAddToSwingHurtList_Parms
{
	class AActor*                                      newEntry;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function DunDefAtlantis.DunDefSharkmanController.EndMeleeSwing
// [0x00020002] 
struct ADunDefSharkmanController_execEndMeleeSwing_Parms
{
	unsigned char                                      fist;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.DunDefSharkmanController.StartMeleeSwing
// [0x00020000] 
struct ADunDefSharkmanController_execStartMeleeSwing_Parms
{
	unsigned char                                      fist;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzlePieceActor.ScaleColor
// [0x00820102] 
struct APuzzlePieceActor_execScaleColor_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           currentAlpha;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             currentColor;                                     		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function DunDefAtlantis.PuzzlePieceActor.TurnOnStartEmitter
// [0x00020102] 
struct APuzzlePieceActor_execTurnOnStartEmitter_Parms
{
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayDemoEmitter
// [0x00020102] 
struct APuzzlePieceActor_execPlayDemoEmitter_Parms
{
};

// Function DunDefAtlantis.PuzzlePieceActor.ShutOffVFX
// [0x00020102] 
struct APuzzlePieceActor_execShutOffVFX_Parms
{
	float                                              lerpScale;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzlePieceActor.SetColorLerp
// [0x00020102] 
struct APuzzlePieceActor_execSetColorLerp_Parms
{
	struct FLinearColor                                NewColor;                                         		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldScaleBack : 1;                             		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              lerpScale;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayPuzzleCompletedVFX
// [0x00020102] 
struct APuzzlePieceActor_execPlayPuzzleCompletedVFX_Parms
{
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayFailedVFX
// [0x00020102] 
struct APuzzlePieceActor_execPlayFailedVFX_Parms
{
};

// Function DunDefAtlantis.PuzzlePieceActor.SetValidDeactivation
// [0x00020102] 
struct APuzzlePieceActor_execSetValidDeactivation_Parms
{
};

// Function DunDefAtlantis.PuzzlePieceActor.SetValidTouching
// [0x00020102] 
struct APuzzlePieceActor_execSetValidTouching_Parms
{
};

// Function DunDefAtlantis.PuzzlePieceActor.Bump
// [0x00020802] ( FUNC_Event )
struct APuzzlePieceActor_eventBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzlePieceActor.Touch
// [0x00020802] ( FUNC_Event )
struct APuzzlePieceActor_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzlePieceActor.SetMyPuzzleRoom
// [0x00020002] 
struct APuzzlePieceActor_execSetMyPuzzleRoom_Parms
{
	class APuzzleRoomActor*                            newPuzzleRoom;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.PuzzlePieceActor.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct APuzzlePieceActor_eventPostBeginPlay_Parms
{
};

// Function DunDefAtlantis.RaisingWaterVolume.OnModifyProperty
// [0x00820102] 
struct ARaisingWaterVolume_execOnModifyProperty_Parms
{
	class USeqAct_ModifyProperty*                      Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FPropertyInfo                            P;                                                		// 0x0004 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function DunDefAtlantis.RaisingWaterVolume.ClearPawnFXOverrides
// [0x00020102] 
struct ARaisingWaterVolume_execClearPawnFXOverrides_Parms
{
	class ADunDefPawn*                                 thePawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.RaisingWaterVolume.SetPawnFXOverrides
// [0x00020102] 
struct ARaisingWaterVolume_execSetPawnFXOverrides_Parms
{
	class ADunDefPawn*                                 thePawn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function DunDefAtlantis.RaisingWaterVolume.Tick
// [0x00020802] ( FUNC_Event )
struct ARaisingWaterVolume_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ADunDefPawn*                              thePawn;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.RaisingWaterVolume.ClearAirControl
// [0x00020002] 
struct ARaisingWaterVolume_execClearAirControl_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.RaisingWaterVolume.UnTouch
// [0x00820802] ( FUNC_Event )
struct ARaisingWaterVolume_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FAirControlPawn                          newAirControlPawn;                                		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function DunDefAtlantis.RaisingWaterVolume.Touch
// [0x00020802] ( FUNC_Event )
struct ARaisingWaterVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function DunDefAtlantis.RaisingWaterVolume.ExecReplicatedFunction
// [0x00024102] 
struct ARaisingWaterVolume_execExecReplicatedFunction_Parms
{
	struct FName                                       FunctionName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nameParam1;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       nameParam2;                                       		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam1;                                      		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      actorParam2;                                      		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vecParam1;                                        		// 0x0020 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    rotParam1;                                        		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam1;                                      		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam2;                                      		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam3;                                      		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              floatParam4;                                      		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam1 : 1;                                   		// 0x0048 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam2 : 1;                                   		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      boolParam3 : 1;                                   		// 0x0050 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     stringParam1;                                     		// 0x0054 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     objectParam1;                                     		// 0x0060 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif