/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefAtlantis_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqAct_PickNewPuzzleSolver::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 82929 ];

	UDunDef_SeqAct_PickNewPuzzleSolver_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.AddPlayerToWaterList
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           waterPlayer                    ( CPF_Parm )

void ADunDefGRI_RisingWater::AddPlayerToWaterList ( class ADunDefPlayer* waterPlayer )
{
	static UFunction* pFnAddPlayerToWaterList = NULL;

	if ( ! pFnAddPlayerToWaterList )
		pFnAddPlayerToWaterList = (UFunction*) UObject::GObjObjects()->Data[ 83015 ];

	ADunDefGRI_RisingWater_execAddPlayerToWaterList_Parms AddPlayerToWaterList_Parms;
	AddPlayerToWaterList_Parms.waterPlayer = waterPlayer;

	this->ProcessEvent ( pFnAddPlayerToWaterList, &AddPlayerToWaterList_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.RemovePlayerToWaterList
// [0x00020102] 
// Parameters infos:
// class ADunDefPlayer*           waterPlayer                    ( CPF_Parm )

void ADunDefGRI_RisingWater::RemovePlayerToWaterList ( class ADunDefPlayer* waterPlayer )
{
	static UFunction* pFnRemovePlayerToWaterList = NULL;

	if ( ! pFnRemovePlayerToWaterList )
		pFnRemovePlayerToWaterList = (UFunction*) UObject::GObjObjects()->Data[ 83013 ];

	ADunDefGRI_RisingWater_execRemovePlayerToWaterList_Parms RemovePlayerToWaterList_Parms;
	RemovePlayerToWaterList_Parms.waterPlayer = waterPlayer;

	this->ProcessEvent ( pFnRemovePlayerToWaterList, &RemovePlayerToWaterList_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.SetWaterCastingMultiplier
// [0x00020002] 
// Parameters infos:
// float                          newCastingMultiplier           ( CPF_Parm )

void ADunDefGRI_RisingWater::SetWaterCastingMultiplier ( float newCastingMultiplier )
{
	static UFunction* pFnSetWaterCastingMultiplier = NULL;

	if ( ! pFnSetWaterCastingMultiplier )
		pFnSetWaterCastingMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 83011 ];

	ADunDefGRI_RisingWater_execSetWaterCastingMultiplier_Parms SetWaterCastingMultiplier_Parms;
	SetWaterCastingMultiplier_Parms.newCastingMultiplier = newCastingMultiplier;

	this->ProcessEvent ( pFnSetWaterCastingMultiplier, &SetWaterCastingMultiplier_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.GetCastRateMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerAbility*    ability                        ( CPF_Parm )

float ADunDefGRI_RisingWater::GetCastRateMultiplier ( class ADunDefPlayerAbility* ability )
{
	static UFunction* pFnGetCastRateMultiplier = NULL;

	if ( ! pFnGetCastRateMultiplier )
		pFnGetCastRateMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 83007 ];

	ADunDefGRI_RisingWater_execGetCastRateMultiplier_Parms GetCastRateMultiplier_Parms;
	GetCastRateMultiplier_Parms.ability = ability;

	this->ProcessEvent ( pFnGetCastRateMultiplier, &GetCastRateMultiplier_Parms, NULL );

	return GetCastRateMultiplier_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.PuzzleComplete
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_RisingWater::PuzzleComplete ( )
{
	static UFunction* pFnPuzzleComplete = NULL;

	if ( ! pFnPuzzleComplete )
		pFnPuzzleComplete = (UFunction*) UObject::GObjObjects()->Data[ 83005 ];

	ADunDefGRI_RisingWater_execPuzzleComplete_Parms PuzzleComplete_Parms;

	this->ProcessEvent ( pFnPuzzleComplete, &PuzzleComplete_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.GetRandomPlayer
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefPlayer* ADunDefGRI_RisingWater::GetRandomPlayer ( )
{
	static UFunction* pFnGetRandomPlayer = NULL;

	if ( ! pFnGetRandomPlayer )
		pFnGetRandomPlayer = (UFunction*) UObject::GObjObjects()->Data[ 83001 ];

	ADunDefGRI_RisingWater_execGetRandomPlayer_Parms GetRandomPlayer_Parms;

	this->ProcessEvent ( pFnGetRandomPlayer, &GetRandomPlayer_Parms, NULL );

	return GetRandomPlayer_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.DrawMyHUD
// [0x00820102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefGRI_RisingWater::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 82993 ];

	ADunDefGRI_RisingWater_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.SetNewSolver
// [0x00024102] 
// Parameters infos:
// class ADunDefPlayer*           newSolver                      ( CPF_Parm )
// unsigned long                  bIgnoreGameInfoNotification    ( CPF_OptionalParm | CPF_Parm )

void ADunDefGRI_RisingWater::SetNewSolver ( class ADunDefPlayer* newSolver, unsigned long bIgnoreGameInfoNotification )
{
	static UFunction* pFnSetNewSolver = NULL;

	if ( ! pFnSetNewSolver )
		pFnSetNewSolver = (UFunction*) UObject::GObjObjects()->Data[ 82988 ];

	ADunDefGRI_RisingWater_execSetNewSolver_Parms SetNewSolver_Parms;
	SetNewSolver_Parms.newSolver = newSolver;
	SetNewSolver_Parms.bIgnoreGameInfoNotification = bIgnoreGameInfoNotification;

	this->ProcessEvent ( pFnSetNewSolver, &SetNewSolver_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.NotifyPuzzleSolverDeath
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_RisingWater::NotifyPuzzleSolverDeath ( )
{
	static UFunction* pFnNotifyPuzzleSolverDeath = NULL;

	if ( ! pFnNotifyPuzzleSolverDeath )
		pFnNotifyPuzzleSolverDeath = (UFunction*) UObject::GObjObjects()->Data[ 82987 ];

	ADunDefGRI_RisingWater_execNotifyPuzzleSolverDeath_Parms NotifyPuzzleSolverDeath_Parms;

	this->ProcessEvent ( pFnNotifyPuzzleSolverDeath, &NotifyPuzzleSolverDeath_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.ClearPuzzleSolver
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_RisingWater::ClearPuzzleSolver ( )
{
	static UFunction* pFnClearPuzzleSolver = NULL;

	if ( ! pFnClearPuzzleSolver )
		pFnClearPuzzleSolver = (UFunction*) UObject::GObjObjects()->Data[ 82986 ];

	ADunDefGRI_RisingWater_execClearPuzzleSolver_Parms ClearPuzzleSolver_Parms;

	this->ProcessEvent ( pFnClearPuzzleSolver, &ClearPuzzleSolver_Parms, NULL );
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.PickNewSolver
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefPlayer* ADunDefGRI_RisingWater::PickNewSolver ( )
{
	static UFunction* pFnPickNewSolver = NULL;

	if ( ! pFnPickNewSolver )
		pFnPickNewSolver = (UFunction*) UObject::GObjObjects()->Data[ 82933 ];

	ADunDefGRI_RisingWater_execPickNewSolver_Parms PickNewSolver_Parms;

	this->ProcessEvent ( pFnPickNewSolver, &PickNewSolver_Parms, NULL );

	return PickNewSolver_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefGRI_RisingWater::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 82968 ];

	ADunDefGRI_RisingWater_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqAct_SetUpPuzzle::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 82941 ];

	UDunDef_SeqAct_SetUpPuzzle_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.Destroyed
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void APuzzleRoomActor::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 84205 ];

	APuzzleRoomActor_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.FlashPuzzlePiece
// [0x00020102] 
// Parameters infos:
// int                            pieceIndex                     ( CPF_Parm )

void APuzzleRoomActor::FlashPuzzlePiece ( int pieceIndex )
{
	static UFunction* pFnFlashPuzzlePiece = NULL;

	if ( ! pFnFlashPuzzlePiece )
		pFnFlashPuzzlePiece = (UFunction*) UObject::GObjObjects()->Data[ 84203 ];

	APuzzleRoomActor_execFlashPuzzlePiece_Parms FlashPuzzlePiece_Parms;
	FlashPuzzlePiece_Parms.pieceIndex = pieceIndex;

	this->ProcessEvent ( pFnFlashPuzzlePiece, &FlashPuzzlePiece_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.ShowPuzzlePath
// [0x00020002] 
// Parameters infos:

void APuzzleRoomActor::ShowPuzzlePath ( )
{
	static UFunction* pFnShowPuzzlePath = NULL;

	if ( ! pFnShowPuzzlePath )
		pFnShowPuzzlePath = (UFunction*) UObject::GObjObjects()->Data[ 84202 ];

	APuzzleRoomActor_execShowPuzzlePath_Parms ShowPuzzlePath_Parms;

	this->ProcessEvent ( pFnShowPuzzlePath, &ShowPuzzlePath_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.PlayFailedPathVFX
// [0x00020102] 
// Parameters infos:
// struct FVector                 actorLoc                       ( CPF_Parm )

void APuzzleRoomActor::PlayFailedPathVFX ( struct FVector actorLoc )
{
	static UFunction* pFnPlayFailedPathVFX = NULL;

	if ( ! pFnPlayFailedPathVFX )
		pFnPlayFailedPathVFX = (UFunction*) UObject::GObjObjects()->Data[ 84199 ];

	APuzzleRoomActor_execPlayFailedPathVFX_Parms PlayFailedPathVFX_Parms;
	memcpy ( &PlayFailedPathVFX_Parms.actorLoc, &actorLoc, 0xC );

	this->ProcessEvent ( pFnPlayFailedPathVFX, &PlayFailedPathVFX_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.PlayInitalFailVFX
// [0x00020102] 
// Parameters infos:
// int                            failedIndex                    ( CPF_Parm )

void APuzzleRoomActor::PlayInitalFailVFX ( int failedIndex )
{
	static UFunction* pFnPlayInitalFailVFX = NULL;

	if ( ! pFnPlayInitalFailVFX )
		pFnPlayInitalFailVFX = (UFunction*) UObject::GObjObjects()->Data[ 84197 ];

	APuzzleRoomActor_execPlayInitalFailVFX_Parms PlayInitalFailVFX_Parms;
	PlayInitalFailVFX_Parms.failedIndex = failedIndex;

	this->ProcessEvent ( pFnPlayInitalFailVFX, &PlayInitalFailVFX_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.FailedPath
// [0x00020002] 
// Parameters infos:

void APuzzleRoomActor::FailedPath ( )
{
	static UFunction* pFnFailedPath = NULL;

	if ( ! pFnFailedPath )
		pFnFailedPath = (UFunction*) UObject::GObjObjects()->Data[ 84196 ];

	APuzzleRoomActor_execFailedPath_Parms FailedPath_Parms;

	this->ProcessEvent ( pFnFailedPath, &FailedPath_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulMove
// [0x00020102] 
// Parameters infos:
// int                            moveIndex                      ( CPF_Parm )

void APuzzleRoomActor::SuccessfulMove ( int moveIndex )
{
	static UFunction* pFnSuccessfulMove = NULL;

	if ( ! pFnSuccessfulMove )
		pFnSuccessfulMove = (UFunction*) UObject::GObjObjects()->Data[ 84194 ];

	APuzzleRoomActor_execSuccessfulMove_Parms SuccessfulMove_Parms;
	SuccessfulMove_Parms.moveIndex = moveIndex;

	this->ProcessEvent ( pFnSuccessfulMove, &SuccessfulMove_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulFinish
// [0x00020102] 
// Parameters infos:
// int                            finalIndex                     ( CPF_Parm )

void APuzzleRoomActor::SuccessfulFinish ( int finalIndex )
{
	static UFunction* pFnSuccessfulFinish = NULL;

	if ( ! pFnSuccessfulFinish )
		pFnSuccessfulFinish = (UFunction*) UObject::GObjObjects()->Data[ 84192 ];

	APuzzleRoomActor_execSuccessfulFinish_Parms SuccessfulFinish_Parms;
	SuccessfulFinish_Parms.finalIndex = finalIndex;

	this->ProcessEvent ( pFnSuccessfulFinish, &SuccessfulFinish_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.FinishedPuzzle
// [0x00020002] 
// Parameters infos:
// int                            finalIndex                     ( CPF_Parm )

void APuzzleRoomActor::FinishedPuzzle ( int finalIndex )
{
	static UFunction* pFnFinishedPuzzle = NULL;

	if ( ! pFnFinishedPuzzle )
		pFnFinishedPuzzle = (UFunction*) UObject::GObjObjects()->Data[ 84190 ];

	APuzzleRoomActor_execFinishedPuzzle_Parms FinishedPuzzle_Parms;
	FinishedPuzzle_Parms.finalIndex = finalIndex;

	this->ProcessEvent ( pFnFinishedPuzzle, &FinishedPuzzle_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.NotifyPieceTouched
// [0x00020002] 
// Parameters infos:
// class APuzzlePieceActor*       touchedPiece                   ( CPF_Parm )
// class AActor*                  TouchingActor                  ( CPF_Parm )

void APuzzleRoomActor::NotifyPieceTouched ( class APuzzlePieceActor* touchedPiece, class AActor* TouchingActor )
{
	static UFunction* pFnNotifyPieceTouched = NULL;

	if ( ! pFnNotifyPieceTouched )
		pFnNotifyPieceTouched = (UFunction*) UObject::GObjObjects()->Data[ 84185 ];

	APuzzleRoomActor_execNotifyPieceTouched_Parms NotifyPieceTouched_Parms;
	NotifyPieceTouched_Parms.touchedPiece = touchedPiece;
	NotifyPieceTouched_Parms.TouchingActor = TouchingActor;

	this->ProcessEvent ( pFnNotifyPieceTouched, &NotifyPieceTouched_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.ResetPuzzle
// [0x00020002] 
// Parameters infos:

void APuzzleRoomActor::ResetPuzzle ( )
{
	static UFunction* pFnResetPuzzle = NULL;

	if ( ! pFnResetPuzzle )
		pFnResetPuzzle = (UFunction*) UObject::GObjObjects()->Data[ 84183 ];

	APuzzleRoomActor_execResetPuzzle_Parms ResetPuzzle_Parms;

	this->ProcessEvent ( pFnResetPuzzle, &ResetPuzzle_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.DrawDebugPathLines
// [0x00820002] 
// Parameters infos:

void APuzzleRoomActor::DrawDebugPathLines ( )
{
	static UFunction* pFnDrawDebugPathLines = NULL;

	if ( ! pFnDrawDebugPathLines )
		pFnDrawDebugPathLines = (UFunction*) UObject::GObjObjects()->Data[ 84178 ];

	APuzzleRoomActor_execDrawDebugPathLines_Parms DrawDebugPathLines_Parms;

	this->ProcessEvent ( pFnDrawDebugPathLines, &DrawDebugPathLines_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.StartEffect
// [0x00024102] 
// Parameters infos:
// int                            pieceIndex                     ( CPF_OptionalParm | CPF_Parm )

void APuzzleRoomActor::StartEffect ( int pieceIndex )
{
	static UFunction* pFnStartEffect = NULL;

	if ( ! pFnStartEffect )
		pFnStartEffect = (UFunction*) UObject::GObjObjects()->Data[ 84176 ];

	APuzzleRoomActor_execStartEffect_Parms StartEffect_Parms;
	StartEffect_Parms.pieceIndex = pieceIndex;

	this->ProcessEvent ( pFnStartEffect, &StartEffect_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.AddValidPathPiece
// [0x00020102] 
// Parameters infos:
// int                            newPieceIndex                  ( CPF_Parm )
// int                            newValidIndex                  ( CPF_Parm )

void APuzzleRoomActor::AddValidPathPiece ( int newPieceIndex, int newValidIndex )
{
	static UFunction* pFnAddValidPathPiece = NULL;

	if ( ! pFnAddValidPathPiece )
		pFnAddValidPathPiece = (UFunction*) UObject::GObjObjects()->Data[ 84172 ];

	APuzzleRoomActor_execAddValidPathPiece_Parms AddValidPathPiece_Parms;
	AddValidPathPiece_Parms.newPieceIndex = newPieceIndex;
	AddValidPathPiece_Parms.newValidIndex = newValidIndex;

	this->ProcessEvent ( pFnAddValidPathPiece, &AddValidPathPiece_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.MakePuzzle
// [0x00820002] 
// Parameters infos:

void APuzzleRoomActor::MakePuzzle ( )
{
	static UFunction* pFnMakePuzzle = NULL;

	if ( ! pFnMakePuzzle )
		pFnMakePuzzle = (UFunction*) UObject::GObjObjects()->Data[ 84154 ];

	APuzzleRoomActor_execMakePuzzle_Parms MakePuzzle_Parms;

	this->ProcessEvent ( pFnMakePuzzle, &MakePuzzle_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.CalculatePieceIndex
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            X_loc                          ( CPF_Parm )
// int                            Y_loc                          ( CPF_Parm )

int APuzzleRoomActor::CalculatePieceIndex ( int X_loc, int Y_loc )
{
	static UFunction* pFnCalculatePieceIndex = NULL;

	if ( ! pFnCalculatePieceIndex )
		pFnCalculatePieceIndex = (UFunction*) UObject::GObjObjects()->Data[ 84150 ];

	APuzzleRoomActor_execCalculatePieceIndex_Parms CalculatePieceIndex_Parms;
	CalculatePieceIndex_Parms.X_loc = X_loc;
	CalculatePieceIndex_Parms.Y_loc = Y_loc;

	this->ProcessEvent ( pFnCalculatePieceIndex, &CalculatePieceIndex_Parms, NULL );

	return CalculatePieceIndex_Parms.ReturnValue;
};

// Function DunDefAtlantis.PuzzleRoomActor.InitGrid
// [0x00820102] 
// Parameters infos:

void APuzzleRoomActor::InitGrid ( )
{
	static UFunction* pFnInitGrid = NULL;

	if ( ! pFnInitGrid )
		pFnInitGrid = (UFunction*) UObject::GObjObjects()->Data[ 84142 ];

	APuzzleRoomActor_execInitGrid_Parms InitGrid_Parms;

	this->ProcessEvent ( pFnInitGrid, &InitGrid_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APuzzleRoomActor::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84141 ];

	APuzzleRoomActor_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefAtlantis.PuzzleRoomActor.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void APuzzleRoomActor::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84124 ];

	APuzzleRoomActor_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqEvent_PuzzleSolverLeft::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 82949 ];

	UDunDef_SeqEvent_PuzzleSolverLeft_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefAtlantis.GameInfo_RisingWater.Logout
// [0x00020002] 
// Parameters infos:
// class AController*             Exiting                        ( CPF_Parm )

void AGameInfo_RisingWater::Logout ( class AController* Exiting )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 83832 ];

	AGameInfo_RisingWater_execLogout_Parms Logout_Parms;
	Logout_Parms.Exiting = Exiting;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );
};

// Function DunDefAtlantis.GameInfo_RisingWater.SetCurrentPuzzleSolver
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           newPuzzleSolver                ( CPF_Parm )

void AGameInfo_RisingWater::SetCurrentPuzzleSolver ( class ADunDefPlayer* newPuzzleSolver )
{
	static UFunction* pFnSetCurrentPuzzleSolver = NULL;

	if ( ! pFnSetCurrentPuzzleSolver )
		pFnSetCurrentPuzzleSolver = (UFunction*) UObject::GObjObjects()->Data[ 83830 ];

	AGameInfo_RisingWater_execSetCurrentPuzzleSolver_Parms SetCurrentPuzzleSolver_Parms;
	SetCurrentPuzzleSolver_Parms.newPuzzleSolver = newPuzzleSolver;

	this->ProcessEvent ( pFnSetCurrentPuzzleSolver, &SetCurrentPuzzleSolver_Parms, NULL );
};

// Function DunDefAtlantis.GameInfo_RisingWater.SetGRIPuzzleSolver
// [0x00020002] 
// Parameters infos:

void AGameInfo_RisingWater::SetGRIPuzzleSolver ( )
{
	static UFunction* pFnSetGRIPuzzleSolver = NULL;

	if ( ! pFnSetGRIPuzzleSolver )
		pFnSetGRIPuzzleSolver = (UFunction*) UObject::GObjObjects()->Data[ 83829 ];

	AGameInfo_RisingWater_execSetGRIPuzzleSolver_Parms SetGRIPuzzleSolver_Parms;

	this->ProcessEvent ( pFnSetGRIPuzzleSolver, &SetGRIPuzzleSolver_Parms, NULL );
};

// Function DunDefAtlantis.GameInfo_RisingWater.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AGameInfo_RisingWater::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 83827 ];

	AGameInfo_RisingWater_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function DunDefAtlantis.GameInfo_RisingWater.Killed
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             KilledPlayer                   ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void AGameInfo_RisingWater::Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 83822 ];

	AGameInfo_RisingWater_execKilled_Parms Killed_Parms;
	Killed_Parms.Killer = Killer;
	Killed_Parms.KilledPlayer = KilledPlayer;
	Killed_Parms.KilledPawn = KilledPawn;
	Killed_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function DunDefAtlantis.DunDefInkCloud.ResetCurrentMoveActors
// [0x00020002] 
// Parameters infos:

void ADunDefInkCloud::ResetCurrentMoveActors ( )
{
	static UFunction* pFnResetCurrentMoveActors = NULL;

	if ( ! pFnResetCurrentMoveActors )
		pFnResetCurrentMoveActors = (UFunction*) UObject::GObjObjects()->Data[ 83044 ];

	ADunDefInkCloud_execResetCurrentMoveActors_Parms ResetCurrentMoveActors_Parms;

	this->ProcessEvent ( pFnResetCurrentMoveActors, &ResetCurrentMoveActors_Parms, NULL );
};

// Function DunDefAtlantis.DunDefInkCloud.HurtRadius
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// class AActor*                  IgnoredActor                   ( CPF_OptionalParm | CPF_Parm )
// class AController*             InstigatedByController         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDoFullDamage                  ( CPF_OptionalParm | CPF_Parm )

bool ADunDefInkCloud::HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnHurtRadius = NULL;

	if ( ! pFnHurtRadius )
		pFnHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 83032 ];

	ADunDefInkCloud_execHurtRadius_Parms HurtRadius_Parms;
	HurtRadius_Parms.BaseDamage = BaseDamage;
	HurtRadius_Parms.DamageRadius = DamageRadius;
	HurtRadius_Parms.DamageType = DamageType;
	HurtRadius_Parms.Momentum = Momentum;
	memcpy ( &HurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	HurtRadius_Parms.IgnoredActor = IgnoredActor;
	HurtRadius_Parms.InstigatedByController = InstigatedByController;
	HurtRadius_Parms.bDoFullDamage = bDoFullDamage;

	this->ProcessEvent ( pFnHurtRadius, &HurtRadius_Parms, NULL );

	return HurtRadius_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefInkCloud.FadeOut
// [0x00024102] 
// Parameters infos:
// float                          theLightFadeOutTime            ( CPF_OptionalParm | CPF_Parm )

void ADunDefInkCloud::FadeOut ( float theLightFadeOutTime )
{
	static UFunction* pFnFadeOut = NULL;

	if ( ! pFnFadeOut )
		pFnFadeOut = (UFunction*) UObject::GObjObjects()->Data[ 83030 ];

	ADunDefInkCloud_execFadeOut_Parms FadeOut_Parms;
	FadeOut_Parms.theLightFadeOutTime = theLightFadeOutTime;

	this->ProcessEvent ( pFnFadeOut, &FadeOut_Parms, NULL );
};

// Function DunDefAtlantis.DunDefInkCloud.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void ADunDefInkCloud::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 83028 ];

	ADunDefInkCloud_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.CheckKrakenProximity
// [0x00820002] 
// Parameters infos:

void ADunDefKraken::CheckKrakenProximity ( )
{
	static UFunction* pFnCheckKrakenProximity = NULL;

	if ( ! pFnCheckKrakenProximity )
		pFnCheckKrakenProximity = (UFunction*) UObject::GObjObjects()->Data[ 83256 ];

	ADunDefKraken_execCheckKrakenProximity_Parms CheckKrakenProximity_Parms;

	this->ProcessEvent ( pFnCheckKrakenProximity, &CheckKrakenProximity_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefKraken::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 83251 ];

	ADunDefKraken_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.DestroyTentacles
// [0x00020002] 
// Parameters infos:

void ADunDefKraken::DestroyTentacles ( )
{
	static UFunction* pFnDestroyTentacles = NULL;

	if ( ! pFnDestroyTentacles )
		pFnDestroyTentacles = (UFunction*) UObject::GObjObjects()->Data[ 83249 ];

	ADunDefKraken_execDestroyTentacles_Parms DestroyTentacles_Parms;

	this->ProcessEvent ( pFnDestroyTentacles, &DestroyTentacles_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.GetPlayerTargetingDesirability
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* forController                  ( CPF_Parm )
// class ADunDefPlayer*           ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

float ADunDefKraken::GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer )
{
	static UFunction* pFnGetPlayerTargetingDesirability = NULL;

	if ( ! pFnGetPlayerTargetingDesirability )
		pFnGetPlayerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 83245 ];

	ADunDefKraken_execGetPlayerTargetingDesirability_Parms GetPlayerTargetingDesirability_Parms;
	GetPlayerTargetingDesirability_Parms.forController = forController;
	GetPlayerTargetingDesirability_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnGetPlayerTargetingDesirability, &GetPlayerTargetingDesirability_Parms, NULL );

	return GetPlayerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.BiteStop
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventBiteStop ( )
{
	static UFunction* pFnBiteStop = NULL;

	if ( ! pFnBiteStop )
		pFnBiteStop = (UFunction*) UObject::GObjObjects()->Data[ 83244 ];

	ADunDefKraken_eventBiteStop_Parms BiteStop_Parms;

	this->ProcessEvent ( pFnBiteStop, &BiteStop_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.BiteStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventBiteStart ( )
{
	static UFunction* pFnBiteStart = NULL;

	if ( ! pFnBiteStart )
		pFnBiteStart = (UFunction*) UObject::GObjObjects()->Data[ 83243 ];

	ADunDefKraken_eventBiteStart_Parms BiteStart_Parms;

	this->ProcessEvent ( pFnBiteStart, &BiteStart_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.PlayTentacleAttackAnimation
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::PlayTentacleAttackAnimation ( )
{
	static UFunction* pFnPlayTentacleAttackAnimation = NULL;

	if ( ! pFnPlayTentacleAttackAnimation )
		pFnPlayTentacleAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83241 ];

	ADunDefKraken_execPlayTentacleAttackAnimation_Parms PlayTentacleAttackAnimation_Parms;

	this->ProcessEvent ( pFnPlayTentacleAttackAnimation, &PlayTentacleAttackAnimation_Parms, NULL );

	return PlayTentacleAttackAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.PlayBiteAttackAnimation
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::PlayBiteAttackAnimation ( )
{
	static UFunction* pFnPlayBiteAttackAnimation = NULL;

	if ( ! pFnPlayBiteAttackAnimation )
		pFnPlayBiteAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83239 ];

	ADunDefKraken_execPlayBiteAttackAnimation_Parms PlayBiteAttackAnimation_Parms;

	this->ProcessEvent ( pFnPlayBiteAttackAnimation, &PlayBiteAttackAnimation_Parms, NULL );

	return PlayBiteAttackAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.StopSpit
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventStopSpit ( )
{
	static UFunction* pFnStopSpit = NULL;

	if ( ! pFnStopSpit )
		pFnStopSpit = (UFunction*) UObject::GObjObjects()->Data[ 83238 ];

	ADunDefKraken_eventStopSpit_Parms StopSpit_Parms;

	this->ProcessEvent ( pFnStopSpit, &StopSpit_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.StartSpit
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventStartSpit ( )
{
	static UFunction* pFnStartSpit = NULL;

	if ( ! pFnStartSpit )
		pFnStartSpit = (UFunction*) UObject::GObjObjects()->Data[ 83237 ];

	ADunDefKraken_eventStartSpit_Parms StartSpit_Parms;

	this->ProcessEvent ( pFnStartSpit, &StartSpit_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.GetSocketLocAndRot
// [0x00420002] 
// Parameters infos:
// struct FName                   SocketName                     ( CPF_Parm )
// struct FVector                 socLoc                         ( CPF_Parm | CPF_OutParm )
// struct FRotator                socRot                         ( CPF_Parm | CPF_OutParm )

void ADunDefKraken::GetSocketLocAndRot ( struct FName SocketName, struct FVector* socLoc, struct FRotator* socRot )
{
	static UFunction* pFnGetSocketLocAndRot = NULL;

	if ( ! pFnGetSocketLocAndRot )
		pFnGetSocketLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 83233 ];

	ADunDefKraken_execGetSocketLocAndRot_Parms GetSocketLocAndRot_Parms;
	memcpy ( &GetSocketLocAndRot_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnGetSocketLocAndRot, &GetSocketLocAndRot_Parms, NULL );

	if ( socLoc )
		memcpy ( socLoc, &GetSocketLocAndRot_Parms.socLoc, 0xC );

	if ( socRot )
		memcpy ( socRot, &GetSocketLocAndRot_Parms.socRot, 0xC );
};

// Function DunDefAtlantis.DunDefKraken.ShootGiantProjectile
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventShootGiantProjectile ( )
{
	static UFunction* pFnShootGiantProjectile = NULL;

	if ( ! pFnShootGiantProjectile )
		pFnShootGiantProjectile = (UFunction*) UObject::GObjObjects()->Data[ 83232 ];

	ADunDefKraken_eventShootGiantProjectile_Parms ShootGiantProjectile_Parms;

	this->ProcessEvent ( pFnShootGiantProjectile, &ShootGiantProjectile_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.ShootRight
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventShootRight ( )
{
	static UFunction* pFnShootRight = NULL;

	if ( ! pFnShootRight )
		pFnShootRight = (UFunction*) UObject::GObjObjects()->Data[ 83231 ];

	ADunDefKraken_eventShootRight_Parms ShootRight_Parms;

	this->ProcessEvent ( pFnShootRight, &ShootRight_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.ShootLeft
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventShootLeft ( )
{
	static UFunction* pFnShootLeft = NULL;

	if ( ! pFnShootLeft )
		pFnShootLeft = (UFunction*) UObject::GObjObjects()->Data[ 83230 ];

	ADunDefKraken_eventShootLeft_Parms ShootLeft_Parms;

	this->ProcessEvent ( pFnShootLeft, &ShootLeft_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.ResetMovementSettings
// [0x00020002] 
// Parameters infos:

void ADunDefKraken::ResetMovementSettings ( )
{
	static UFunction* pFnResetMovementSettings = NULL;

	if ( ! pFnResetMovementSettings )
		pFnResetMovementSettings = (UFunction*) UObject::GObjObjects()->Data[ 83229 ];

	ADunDefKraken_execResetMovementSettings_Parms ResetMovementSettings_Parms;

	this->ProcessEvent ( pFnResetMovementSettings, &ResetMovementSettings_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.SetDashMovementSettings
// [0x00020002] 
// Parameters infos:
// float                          DashAirSpeedScalar             ( CPF_Parm )
// float                          DashRotationRateScalar         ( CPF_Parm )

void ADunDefKraken::SetDashMovementSettings ( float DashAirSpeedScalar, float DashRotationRateScalar )
{
	static UFunction* pFnSetDashMovementSettings = NULL;

	if ( ! pFnSetDashMovementSettings )
		pFnSetDashMovementSettings = (UFunction*) UObject::GObjObjects()->Data[ 83226 ];

	ADunDefKraken_execSetDashMovementSettings_Parms SetDashMovementSettings_Parms;
	SetDashMovementSettings_Parms.DashAirSpeedScalar = DashAirSpeedScalar;
	SetDashMovementSettings_Parms.DashRotationRateScalar = DashRotationRateScalar;

	this->ProcessEvent ( pFnSetDashMovementSettings, &SetDashMovementSettings_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.PlayDashWindUp
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::PlayDashWindUp ( )
{
	static UFunction* pFnPlayDashWindUp = NULL;

	if ( ! pFnPlayDashWindUp )
		pFnPlayDashWindUp = (UFunction*) UObject::GObjObjects()->Data[ 83224 ];

	ADunDefKraken_execPlayDashWindUp_Parms PlayDashWindUp_Parms;

	this->ProcessEvent ( pFnPlayDashWindUp, &PlayDashWindUp_Parms, NULL );

	return PlayDashWindUp_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.PlayInkCloudAttack
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::PlayInkCloudAttack ( )
{
	static UFunction* pFnPlayInkCloudAttack = NULL;

	if ( ! pFnPlayInkCloudAttack )
		pFnPlayInkCloudAttack = (UFunction*) UObject::GObjObjects()->Data[ 83222 ];

	ADunDefKraken_execPlayInkCloudAttack_Parms PlayInkCloudAttack_Parms;

	this->ProcessEvent ( pFnPlayInkCloudAttack, &PlayInkCloudAttack_Parms, NULL );

	return PlayInkCloudAttack_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.PlayGiantProjectileAttack
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::PlayGiantProjectileAttack ( )
{
	static UFunction* pFnPlayGiantProjectileAttack = NULL;

	if ( ! pFnPlayGiantProjectileAttack )
		pFnPlayGiantProjectileAttack = (UFunction*) UObject::GObjObjects()->Data[ 83220 ];

	ADunDefKraken_execPlayGiantProjectileAttack_Parms PlayGiantProjectileAttack_Parms;

	this->ProcessEvent ( pFnPlayGiantProjectileAttack, &PlayGiantProjectileAttack_Parms, NULL );

	return PlayGiantProjectileAttack_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.PlayRightTentacleAttack
// [0x00820102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::PlayRightTentacleAttack ( )
{
	static UFunction* pFnPlayRightTentacleAttack = NULL;

	if ( ! pFnPlayRightTentacleAttack )
		pFnPlayRightTentacleAttack = (UFunction*) UObject::GObjObjects()->Data[ 83216 ];

	ADunDefKraken_execPlayRightTentacleAttack_Parms PlayRightTentacleAttack_Parms;

	this->ProcessEvent ( pFnPlayRightTentacleAttack, &PlayRightTentacleAttack_Parms, NULL );

	return PlayRightTentacleAttack_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.GetTowerTargetingDesirability
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            forTower                       ( CPF_Parm )

float ADunDefKraken::GetTowerTargetingDesirability ( class ADunDefTower* forTower )
{
	static UFunction* pFnGetTowerTargetingDesirability = NULL;

	if ( ! pFnGetTowerTargetingDesirability )
		pFnGetTowerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 83213 ];

	ADunDefKraken_execGetTowerTargetingDesirability_Parms GetTowerTargetingDesirability_Parms;
	GetTowerTargetingDesirability_Parms.forTower = forTower;

	this->ProcessEvent ( pFnGetTowerTargetingDesirability, &GetTowerTargetingDesirability_Parms, NULL );

	return GetTowerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.PlayLeftTentacleAttack
// [0x00820102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::PlayLeftTentacleAttack ( )
{
	static UFunction* pFnPlayLeftTentacleAttack = NULL;

	if ( ! pFnPlayLeftTentacleAttack )
		pFnPlayLeftTentacleAttack = (UFunction*) UObject::GObjObjects()->Data[ 83209 ];

	ADunDefKraken_execPlayLeftTentacleAttack_Parms PlayLeftTentacleAttack_Parms;

	this->ProcessEvent ( pFnPlayLeftTentacleAttack, &PlayLeftTentacleAttack_Parms, NULL );

	return PlayLeftTentacleAttack_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.IsValidRightSwingTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  checkTarg                      ( CPF_Parm )

bool ADunDefKraken::IsValidRightSwingTarget ( class AActor* checkTarg )
{
	static UFunction* pFnIsValidRightSwingTarget = NULL;

	if ( ! pFnIsValidRightSwingTarget )
		pFnIsValidRightSwingTarget = (UFunction*) UObject::GObjObjects()->Data[ 83206 ];

	ADunDefKraken_execIsValidRightSwingTarget_Parms IsValidRightSwingTarget_Parms;
	IsValidRightSwingTarget_Parms.checkTarg = checkTarg;

	this->ProcessEvent ( pFnIsValidRightSwingTarget, &IsValidRightSwingTarget_Parms, NULL );

	return IsValidRightSwingTarget_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.IsValidLeftSwingTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  checkTarg                      ( CPF_Parm )

bool ADunDefKraken::IsValidLeftSwingTarget ( class AActor* checkTarg )
{
	static UFunction* pFnIsValidLeftSwingTarget = NULL;

	if ( ! pFnIsValidLeftSwingTarget )
		pFnIsValidLeftSwingTarget = (UFunction*) UObject::GObjObjects()->Data[ 83203 ];

	ADunDefKraken_execIsValidLeftSwingTarget_Parms IsValidLeftSwingTarget_Parms;
	IsValidLeftSwingTarget_Parms.checkTarg = checkTarg;

	this->ProcessEvent ( pFnIsValidLeftSwingTarget, &IsValidLeftSwingTarget_Parms, NULL );

	return IsValidLeftSwingTarget_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.AddToRightSwingHurtList
// [0x00020002] 
// Parameters infos:
// class AActor*                  newHitTarg                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefKraken::AddToRightSwingHurtList ( class AActor* newHitTarg, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnAddToRightSwingHurtList = NULL;

	if ( ! pFnAddToRightSwingHurtList )
		pFnAddToRightSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 83199 ];

	ADunDefKraken_execAddToRightSwingHurtList_Parms AddToRightSwingHurtList_Parms;
	AddToRightSwingHurtList_Parms.newHitTarg = newHitTarg;
	memcpy ( &AddToRightSwingHurtList_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &AddToRightSwingHurtList_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnAddToRightSwingHurtList, &AddToRightSwingHurtList_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.AddToLeftSwingHurtList
// [0x00020002] 
// Parameters infos:
// class AActor*                  newHitTarg                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefKraken::AddToLeftSwingHurtList ( class AActor* newHitTarg, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnAddToLeftSwingHurtList = NULL;

	if ( ! pFnAddToLeftSwingHurtList )
		pFnAddToLeftSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 83195 ];

	ADunDefKraken_execAddToLeftSwingHurtList_Parms AddToLeftSwingHurtList_Parms;
	AddToLeftSwingHurtList_Parms.newHitTarg = newHitTarg;
	memcpy ( &AddToLeftSwingHurtList_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &AddToLeftSwingHurtList_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnAddToLeftSwingHurtList, &AddToLeftSwingHurtList_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.StopMelee
// [0x00020002] 
// Parameters infos:

void ADunDefKraken::StopMelee ( )
{
	static UFunction* pFnStopMelee = NULL;

	if ( ! pFnStopMelee )
		pFnStopMelee = (UFunction*) UObject::GObjObjects()->Data[ 83193 ];

	ADunDefKraken_execStopMelee_Parms StopMelee_Parms;

	this->ProcessEvent ( pFnStopMelee, &StopMelee_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.StartMelee
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventStartMelee ( )
{
	static UFunction* pFnStartMelee = NULL;

	if ( ! pFnStartMelee )
		pFnStartMelee = (UFunction*) UObject::GObjObjects()->Data[ 83191 ];

	ADunDefKraken_eventStartMelee_Parms StartMelee_Parms;

	this->ProcessEvent ( pFnStartMelee, &StartMelee_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.CloseMouth
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::CloseMouth ( )
{
	static UFunction* pFnCloseMouth = NULL;

	if ( ! pFnCloseMouth )
		pFnCloseMouth = (UFunction*) UObject::GObjObjects()->Data[ 83189 ];

	ADunDefKraken_execCloseMouth_Parms CloseMouth_Parms;

	this->ProcessEvent ( pFnCloseMouth, &CloseMouth_Parms, NULL );

	return CloseMouth_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.OpenMouth
// [0x00020002] 
// Parameters infos:

void ADunDefKraken::OpenMouth ( )
{
	static UFunction* pFnOpenMouth = NULL;

	if ( ! pFnOpenMouth )
		pFnOpenMouth = (UFunction*) UObject::GObjObjects()->Data[ 83188 ];

	ADunDefKraken_execOpenMouth_Parms OpenMouth_Parms;

	this->ProcessEvent ( pFnOpenMouth, &OpenMouth_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.PlayMouthOpen
// [0x00020102] 
// Parameters infos:

void ADunDefKraken::PlayMouthOpen ( )
{
	static UFunction* pFnPlayMouthOpen = NULL;

	if ( ! pFnPlayMouthOpen )
		pFnPlayMouthOpen = (UFunction*) UObject::GObjObjects()->Data[ 83187 ];

	ADunDefKraken_execPlayMouthOpen_Parms PlayMouthOpen_Parms;

	this->ProcessEvent ( pFnPlayMouthOpen, &PlayMouthOpen_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.DoSingleWithdraw
// [0x00020102] 
// Parameters infos:
// int                            tentacleIndex                  ( CPF_Parm )

void ADunDefKraken::DoSingleWithdraw ( int tentacleIndex )
{
	static UFunction* pFnDoSingleWithdraw = NULL;

	if ( ! pFnDoSingleWithdraw )
		pFnDoSingleWithdraw = (UFunction*) UObject::GObjObjects()->Data[ 83185 ];

	ADunDefKraken_execDoSingleWithdraw_Parms DoSingleWithdraw_Parms;
	DoSingleWithdraw_Parms.tentacleIndex = tentacleIndex;

	this->ProcessEvent ( pFnDoSingleWithdraw, &DoSingleWithdraw_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.ForceWithDraw
// [0x00020002] 
// Parameters infos:
// class AKrakenTentacle*         withdrawTentacle               ( CPF_Parm )

void ADunDefKraken::ForceWithDraw ( class AKrakenTentacle* withdrawTentacle )
{
	static UFunction* pFnForceWithDraw = NULL;

	if ( ! pFnForceWithDraw )
		pFnForceWithDraw = (UFunction*) UObject::GObjObjects()->Data[ 83182 ];

	ADunDefKraken_execForceWithDraw_Parms ForceWithDraw_Parms;
	ForceWithDraw_Parms.withdrawTentacle = withdrawTentacle;

	this->ProcessEvent ( pFnForceWithDraw, &ForceWithDraw_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.BringOutAllTentacles
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::BringOutAllTentacles ( )
{
	static UFunction* pFnBringOutAllTentacles = NULL;

	if ( ! pFnBringOutAllTentacles )
		pFnBringOutAllTentacles = (UFunction*) UObject::GObjObjects()->Data[ 83178 ];

	ADunDefKraken_execBringOutAllTentacles_Parms BringOutAllTentacles_Parms;

	this->ProcessEvent ( pFnBringOutAllTentacles, &BringOutAllTentacles_Parms, NULL );

	return BringOutAllTentacles_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.PlayWithDrawTentacle
// [0x00820102] 
// Parameters infos:
// int                            tentacleIndex                  ( CPF_Parm )

void ADunDefKraken::PlayWithDrawTentacle ( int tentacleIndex )
{
	static UFunction* pFnPlayWithDrawTentacle = NULL;

	if ( ! pFnPlayWithDrawTentacle )
		pFnPlayWithDrawTentacle = (UFunction*) UObject::GObjObjects()->Data[ 83170 ];

	ADunDefKraken_execPlayWithDrawTentacle_Parms PlayWithDrawTentacle_Parms;
	PlayWithDrawTentacle_Parms.tentacleIndex = tentacleIndex;

	this->ProcessEvent ( pFnPlayWithDrawTentacle, &PlayWithDrawTentacle_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.NotifyTentacleWithdraw
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AKrakenTentacle*         damagedTentacle                ( CPF_Parm )

bool ADunDefKraken::NotifyTentacleWithdraw ( class AKrakenTentacle* damagedTentacle )
{
	static UFunction* pFnNotifyTentacleWithdraw = NULL;

	if ( ! pFnNotifyTentacleWithdraw )
		pFnNotifyTentacleWithdraw = (UFunction*) UObject::GObjObjects()->Data[ 83165 ];

	ADunDefKraken_execNotifyTentacleWithdraw_Parms NotifyTentacleWithdraw_Parms;
	NotifyTentacleWithdraw_Parms.damagedTentacle = damagedTentacle;

	this->ProcessEvent ( pFnNotifyTentacleWithdraw, &NotifyTentacleWithdraw_Parms, NULL );

	return NotifyTentacleWithdraw_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.CheckSpecialCoreDmg
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefKraken::CheckSpecialCoreDmg ( struct FVector HitLocation )
{
	static UFunction* pFnCheckSpecialCoreDmg = NULL;

	if ( ! pFnCheckSpecialCoreDmg )
		pFnCheckSpecialCoreDmg = (UFunction*) UObject::GObjObjects()->Data[ 83160 ];

	ADunDefKraken_execCheckSpecialCoreDmg_Parms CheckSpecialCoreDmg_Parms;
	memcpy ( &CheckSpecialCoreDmg_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnCheckSpecialCoreDmg, &CheckSpecialCoreDmg_Parms, NULL );

	return CheckSpecialCoreDmg_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ADunDefKraken::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 83152 ];

	ADunDefKraken_execAdjustDamage_Parms AdjustDamage_Parms;
	AdjustDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
	AdjustDamage_Parms.DamageType = DamageType;
	memcpy ( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x1C );
	AdjustDamage_Parms.WhatHitMe = WhatHitMe;

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );

	if ( inDamage )
		*inDamage = AdjustDamage_Parms.inDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustDamage_Parms.Momentum, 0xC );
};

// Function DunDefAtlantis.DunDefKraken.PlayRealHurtEffect
// [0x00820102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefKraken::PlayRealHurtEffect ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayRealHurtEffect = NULL;

	if ( ! pFnPlayRealHurtEffect )
		pFnPlayRealHurtEffect = (UFunction*) UObject::GObjObjects()->Data[ 83148 ];

	ADunDefKraken_execPlayRealHurtEffect_Parms PlayRealHurtEffect_Parms;
	PlayRealHurtEffect_Parms.DamageType = DamageType;
	memcpy ( &PlayRealHurtEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayRealHurtEffect, &PlayRealHurtEffect_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ADunDefKraken::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 83142 ];

	ADunDefKraken_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefKraken::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 83133 ];

	ADunDefKraken_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;
	TakeDamage_Parms.WhatHitMe = WhatHitMe;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.UpdateDifficultyValues
// [0x00024002] 
// Parameters infos:
// unsigned long                  UpdateMaterial                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  onlyDynamicValues              ( CPF_OptionalParm | CPF_Parm )

void ADunDefKraken::UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues )
{
	static UFunction* pFnUpdateDifficultyValues = NULL;

	if ( ! pFnUpdateDifficultyValues )
		pFnUpdateDifficultyValues = (UFunction*) UObject::GObjObjects()->Data[ 83130 ];

	ADunDefKraken_execUpdateDifficultyValues_Parms UpdateDifficultyValues_Parms;
	UpdateDifficultyValues_Parms.UpdateMaterial = UpdateMaterial;
	UpdateDifficultyValues_Parms.onlyDynamicValues = onlyDynamicValues;

	this->ProcessEvent ( pFnUpdateDifficultyValues, &UpdateDifficultyValues_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.SetMovementPhysics
// [0x00020002] 
// Parameters infos:

void ADunDefKraken::SetMovementPhysics ( )
{
	static UFunction* pFnSetMovementPhysics = NULL;

	if ( ! pFnSetMovementPhysics )
		pFnSetMovementPhysics = (UFunction*) UObject::GObjObjects()->Data[ 83129 ];

	ADunDefKraken_execSetMovementPhysics_Parms SetMovementPhysics_Parms;

	this->ProcessEvent ( pFnSetMovementPhysics, &SetMovementPhysics_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.GetAttackPauseRate
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKraken::GetAttackPauseRate ( )
{
	static UFunction* pFnGetAttackPauseRate = NULL;

	if ( ! pFnGetAttackPauseRate )
		pFnGetAttackPauseRate = (UFunction*) UObject::GObjObjects()->Data[ 83127 ];

	ADunDefKraken_execGetAttackPauseRate_Parms GetAttackPauseRate_Parms;

	this->ProcessEvent ( pFnGetAttackPauseRate, &GetAttackPauseRate_Parms, NULL );

	return GetAttackPauseRate_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKraken.InitTentacles
// [0x00020102] 
// Parameters infos:

void ADunDefKraken::InitTentacles ( )
{
	static UFunction* pFnInitTentacles = NULL;

	if ( ! pFnInitTentacles )
		pFnInitTentacles = (UFunction*) UObject::GObjObjects()->Data[ 83124 ];

	ADunDefKraken_execInitTentacles_Parms InitTentacles_Parms;

	this->ProcessEvent ( pFnInitTentacles, &InitTentacles_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefKraken::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83123 ];

	ADunDefKraken_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefKraken::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 83106 ];

	ADunDefKraken_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKraken.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefKraken::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 83104 ];

	ADunDefKraken_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.GetLightningTowerDamagePercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AKrakenTentacle::GetLightningTowerDamagePercent ( )
{
	static UFunction* pFnGetLightningTowerDamagePercent = NULL;

	if ( ! pFnGetLightningTowerDamagePercent )
		pFnGetLightningTowerDamagePercent = (UFunction*) UObject::GObjObjects()->Data[ 84019 ];

	AKrakenTentacle_execGetLightningTowerDamagePercent_Parms GetLightningTowerDamagePercent_Parms;

	this->ProcessEvent ( pFnGetLightningTowerDamagePercent, &GetLightningTowerDamagePercent_Parms, NULL );

	return GetLightningTowerDamagePercent_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.setIsWebbed
// [0x00020002] 
// Parameters infos:
// unsigned long                  isWebbed                       ( CPF_Parm )

void AKrakenTentacle::setIsWebbed ( unsigned long isWebbed )
{
	static UFunction* pFnsetIsWebbed = NULL;

	if ( ! pFnsetIsWebbed )
		pFnsetIsWebbed = (UFunction*) UObject::GObjObjects()->Data[ 84017 ];

	AKrakenTentacle_execsetIsWebbed_Parms setIsWebbed_Parms;
	setIsWebbed_Parms.isWebbed = isWebbed;

	this->ProcessEvent ( pFnsetIsWebbed, &setIsWebbed_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.isWebbed
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AKrakenTentacle::isWebbed ( )
{
	static UFunction* pFnisWebbed = NULL;

	if ( ! pFnisWebbed )
		pFnisWebbed = (UFunction*) UObject::GObjObjects()->Data[ 84015 ];

	AKrakenTentacle_execisWebbed_Parms isWebbed_Parms;

	this->ProcessEvent ( pFnisWebbed, &isWebbed_Parms, NULL );

	return isWebbed_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.GetChainIgnore
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AKrakenTentacle::GetChainIgnore ( )
{
	static UFunction* pFnGetChainIgnore = NULL;

	if ( ! pFnGetChainIgnore )
		pFnGetChainIgnore = (UFunction*) UObject::GObjObjects()->Data[ 84013 ];

	AKrakenTentacle_execGetChainIgnore_Parms GetChainIgnore_Parms;

	this->ProcessEvent ( pFnGetChainIgnore, &GetChainIgnore_Parms, NULL );

	return GetChainIgnore_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.SetChainIgnore
// [0x00020002] 
// Parameters infos:
// unsigned long                  ignore                         ( CPF_Parm )

void AKrakenTentacle::SetChainIgnore ( unsigned long ignore )
{
	static UFunction* pFnSetChainIgnore = NULL;

	if ( ! pFnSetChainIgnore )
		pFnSetChainIgnore = (UFunction*) UObject::GObjObjects()->Data[ 84011 ];

	AKrakenTentacle_execSetChainIgnore_Parms SetChainIgnore_Parms;
	SetChainIgnore_Parms.ignore = ignore;

	this->ProcessEvent ( pFnSetChainIgnore, &SetChainIgnore_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.IsBeingChainedBy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_ChainLightning* Tower                          ( CPF_Parm )

bool AKrakenTentacle::IsBeingChainedBy ( class ADunDefTower_ChainLightning* Tower )
{
	static UFunction* pFnIsBeingChainedBy = NULL;

	if ( ! pFnIsBeingChainedBy )
		pFnIsBeingChainedBy = (UFunction*) UObject::GObjObjects()->Data[ 84008 ];

	AKrakenTentacle_execIsBeingChainedBy_Parms IsBeingChainedBy_Parms;
	IsBeingChainedBy_Parms.Tower = Tower;

	this->ProcessEvent ( pFnIsBeingChainedBy, &IsBeingChainedBy_Parms, NULL );

	return IsBeingChainedBy_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.RemoveFromChainingTowers
// [0x00020002] 
// Parameters infos:
// class ADunDefTower_ChainLightning* Tower                          ( CPF_Parm )

void AKrakenTentacle::RemoveFromChainingTowers ( class ADunDefTower_ChainLightning* Tower )
{
	static UFunction* pFnRemoveFromChainingTowers = NULL;

	if ( ! pFnRemoveFromChainingTowers )
		pFnRemoveFromChainingTowers = (UFunction*) UObject::GObjObjects()->Data[ 84006 ];

	AKrakenTentacle_execRemoveFromChainingTowers_Parms RemoveFromChainingTowers_Parms;
	RemoveFromChainingTowers_Parms.Tower = Tower;

	this->ProcessEvent ( pFnRemoveFromChainingTowers, &RemoveFromChainingTowers_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.AddToChainingTowers
// [0x00020002] 
// Parameters infos:
// class ADunDefTower_ChainLightning* Tower                          ( CPF_Parm )

void AKrakenTentacle::AddToChainingTowers ( class ADunDefTower_ChainLightning* Tower )
{
	static UFunction* pFnAddToChainingTowers = NULL;

	if ( ! pFnAddToChainingTowers )
		pFnAddToChainingTowers = (UFunction*) UObject::GObjObjects()->Data[ 84004 ];

	AKrakenTentacle_execAddToChainingTowers_Parms AddToChainingTowers_Parms;
	AddToChainingTowers_Parms.Tower = Tower;

	this->ProcessEvent ( pFnAddToChainingTowers, &AddToChainingTowers_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.AllowSuction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AKrakenTentacle::AllowSuction ( )
{
	static UFunction* pFnAllowSuction = NULL;

	if ( ! pFnAllowSuction )
		pFnAllowSuction = (UFunction*) UObject::GObjObjects()->Data[ 84002 ];

	AKrakenTentacle_execAllowSuction_Parms AllowSuction_Parms;

	this->ProcessEvent ( pFnAllowSuction, &AllowSuction_Parms, NULL );

	return AllowSuction_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.ClientTakeRadiusDamage
// [0x00024100] 
// Parameters infos:
// class APawn*                   InstigatorPawn                 ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// float                          DamageFalloffExponent          ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )

void AKrakenTentacle::ClientTakeRadiusDamage ( class APawn* InstigatorPawn, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent, class UObject* WhatHitMe )
{
	static UFunction* pFnClientTakeRadiusDamage = NULL;

	if ( ! pFnClientTakeRadiusDamage )
		pFnClientTakeRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 83991 ];

	AKrakenTentacle_execClientTakeRadiusDamage_Parms ClientTakeRadiusDamage_Parms;
	ClientTakeRadiusDamage_Parms.InstigatorPawn = InstigatorPawn;
	ClientTakeRadiusDamage_Parms.BaseDamage = BaseDamage;
	ClientTakeRadiusDamage_Parms.DamageRadius = DamageRadius;
	ClientTakeRadiusDamage_Parms.DamageType = DamageType;
	ClientTakeRadiusDamage_Parms.Momentum = Momentum;
	memcpy ( &ClientTakeRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
	ClientTakeRadiusDamage_Parms.bFullDamage = bFullDamage;
	ClientTakeRadiusDamage_Parms.DamageCauser = DamageCauser;
	ClientTakeRadiusDamage_Parms.DamageFalloffExponent = DamageFalloffExponent;
	ClientTakeRadiusDamage_Parms.WhatHitMe = WhatHitMe;

	this->ProcessEvent ( pFnClientTakeRadiusDamage, &ClientTakeRadiusDamage_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.ClientTakeDamage
// [0x00024100] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class APawn*                   InstigatorPawn                 ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )

void AKrakenTentacle::ClientTakeDamage ( int DamageAmount, class APawn* InstigatorPawn, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe )
{
	static UFunction* pFnClientTakeDamage = NULL;

	if ( ! pFnClientTakeDamage )
		pFnClientTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 83982 ];

	AKrakenTentacle_execClientTakeDamage_Parms ClientTakeDamage_Parms;
	ClientTakeDamage_Parms.DamageAmount = DamageAmount;
	ClientTakeDamage_Parms.InstigatorPawn = InstigatorPawn;
	memcpy ( &ClientTakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ClientTakeDamage_Parms.Momentum, &Momentum, 0xC );
	ClientTakeDamage_Parms.DamageType = DamageType;
	memcpy ( &ClientTakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	ClientTakeDamage_Parms.DamageCauser = DamageCauser;
	ClientTakeDamage_Parms.WhatHitMe = WhatHitMe;

	this->ProcessEvent ( pFnClientTakeDamage, &ClientTakeDamage_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.GetHealthPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AKrakenTentacle::GetHealthPercent ( )
{
	static UFunction* pFnGetHealthPercent = NULL;

	if ( ! pFnGetHealthPercent )
		pFnGetHealthPercent = (UFunction*) UObject::GObjObjects()->Data[ 83980 ];

	AKrakenTentacle_execGetHealthPercent_Parms GetHealthPercent_Parms;

	this->ProcessEvent ( pFnGetHealthPercent, &GetHealthPercent_Parms, NULL );

	return GetHealthPercent_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.UpdateDamageFlashing
// [0x00020102] 
// Parameters infos:

void AKrakenTentacle::UpdateDamageFlashing ( )
{
	static UFunction* pFnUpdateDamageFlashing = NULL;

	if ( ! pFnUpdateDamageFlashing )
		pFnUpdateDamageFlashing = (UFunction*) UObject::GObjObjects()->Data[ 83978 ];

	AKrakenTentacle_execUpdateDamageFlashing_Parms UpdateDamageFlashing_Parms;

	this->ProcessEvent ( pFnUpdateDamageFlashing, &UpdateDamageFlashing_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.LocalTookDamage
// [0x00020102] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// struct FVector                 atPosition                     ( CPF_Parm )
// class UClass*                  fromDamageType                 ( CPF_Parm )

void AKrakenTentacle::LocalTookDamage ( int DamageAmount, struct FVector atPosition, class UClass* fromDamageType )
{
	static UFunction* pFnLocalTookDamage = NULL;

	if ( ! pFnLocalTookDamage )
		pFnLocalTookDamage = (UFunction*) UObject::GObjObjects()->Data[ 83974 ];

	AKrakenTentacle_execLocalTookDamage_Parms LocalTookDamage_Parms;
	LocalTookDamage_Parms.DamageAmount = DamageAmount;
	memcpy ( &LocalTookDamage_Parms.atPosition, &atPosition, 0xC );
	LocalTookDamage_Parms.fromDamageType = fromDamageType;

	this->ProcessEvent ( pFnLocalTookDamage, &LocalTookDamage_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.HealPctOfMaxHealth
// [0x00024002] 
// Parameters infos:
// float                          HealPct                        ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// unsigned long                  bShowFloatingNumbers           ( CPF_OptionalParm | CPF_Parm )

void AKrakenTentacle::HealPctOfMaxHealth ( float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers )
{
	static UFunction* pFnHealPctOfMaxHealth = NULL;

	if ( ! pFnHealPctOfMaxHealth )
		pFnHealPctOfMaxHealth = (UFunction*) UObject::GObjObjects()->Data[ 83968 ];

	AKrakenTentacle_execHealPctOfMaxHealth_Parms HealPctOfMaxHealth_Parms;
	HealPctOfMaxHealth_Parms.HealPct = HealPct;
	HealPctOfMaxHealth_Parms.Healer = Healer;
	HealPctOfMaxHealth_Parms.DamageType = DamageType;
	HealPctOfMaxHealth_Parms.bShowFloatingNumbers = bShowFloatingNumbers;

	this->ProcessEvent ( pFnHealPctOfMaxHealth, &HealPctOfMaxHealth_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.ForceMoveActor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Mover                          ( CPF_Parm )
// struct FVector                 NewLoc                         ( CPF_Parm )

bool AKrakenTentacle::ForceMoveActor ( class AActor* Mover, struct FVector NewLoc )
{
	static UFunction* pFnForceMoveActor = NULL;

	if ( ! pFnForceMoveActor )
		pFnForceMoveActor = (UFunction*) UObject::GObjObjects()->Data[ 83964 ];

	AKrakenTentacle_execForceMoveActor_Parms ForceMoveActor_Parms;
	ForceMoveActor_Parms.Mover = Mover;
	memcpy ( &ForceMoveActor_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnForceMoveActor, &ForceMoveActor_Parms, NULL );

	return ForceMoveActor_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.GetOverrideTargetComponent
// [0x00020102] 
// Parameters infos:
// class UPrimitiveComponent*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UPrimitiveComponent* AKrakenTentacle::GetOverrideTargetComponent ( )
{
	static UFunction* pFnGetOverrideTargetComponent = NULL;

	if ( ! pFnGetOverrideTargetComponent )
		pFnGetOverrideTargetComponent = (UFunction*) UObject::GObjObjects()->Data[ 83962 ];

	AKrakenTentacle_execGetOverrideTargetComponent_Parms GetOverrideTargetComponent_Parms;

	this->ProcessEvent ( pFnGetOverrideTargetComponent, &GetOverrideTargetComponent_Parms, NULL );

	return GetOverrideTargetComponent_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.EncroachingOn
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool AKrakenTentacle::eventEncroachingOn ( class AActor* Other )
{
	static UFunction* pFnEncroachingOn = NULL;

	if ( ! pFnEncroachingOn )
		pFnEncroachingOn = (UFunction*) UObject::GObjObjects()->Data[ 83959 ];

	AKrakenTentacle_eventEncroachingOn_Parms EncroachingOn_Parms;
	EncroachingOn_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachingOn, &EncroachingOn_Parms, NULL );

	return EncroachingOn_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.Bump
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AKrakenTentacle::eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 83955 ];

	AKrakenTentacle_eventBump_Parms Bump_Parms;
	Bump_Parms.Other = Other;
	Bump_Parms.OtherComp = OtherComp;
	memcpy ( &Bump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AKrakenTentacle::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 83950 ];

	AKrakenTentacle_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.SetDoDamageChecks
// [0x00020002] 
// Parameters infos:
// unsigned long                  bAllowDamage                   ( CPF_Parm )

void AKrakenTentacle::SetDoDamageChecks ( unsigned long bAllowDamage )
{
	static UFunction* pFnSetDoDamageChecks = NULL;

	if ( ! pFnSetDoDamageChecks )
		pFnSetDoDamageChecks = (UFunction*) UObject::GObjObjects()->Data[ 83948 ];

	AKrakenTentacle_execSetDoDamageChecks_Parms SetDoDamageChecks_Parms;
	SetDoDamageChecks_Parms.bAllowDamage = bAllowDamage;

	this->ProcessEvent ( pFnSetDoDamageChecks, &SetDoDamageChecks_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.GetHealth
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bGetMax                        ( CPF_OptionalParm | CPF_Parm )

int AKrakenTentacle::GetHealth ( unsigned long bGetMax )
{
	static UFunction* pFnGetHealth = NULL;

	if ( ! pFnGetHealth )
		pFnGetHealth = (UFunction*) UObject::GObjObjects()->Data[ 83945 ];

	AKrakenTentacle_execGetHealth_Parms GetHealth_Parms;
	GetHealth_Parms.bGetMax = bGetMax;

	this->ProcessEvent ( pFnGetHealth, &GetHealth_Parms, NULL );

	return GetHealth_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.GetMass
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AKrakenTentacle::GetMass ( )
{
	static UFunction* pFnGetMass = NULL;

	if ( ! pFnGetMass )
		pFnGetMass = (UFunction*) UObject::GObjObjects()->Data[ 83943 ];

	AKrakenTentacle_execGetMass_Parms GetMass_Parms;

	this->ProcessEvent ( pFnGetMass, &GetMass_Parms, NULL );

	return GetMass_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.AllowDarknessIgnorance
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AKrakenTentacle::AllowDarknessIgnorance ( )
{
	static UFunction* pFnAllowDarknessIgnorance = NULL;

	if ( ! pFnAllowDarknessIgnorance )
		pFnAllowDarknessIgnorance = (UFunction*) UObject::GObjObjects()->Data[ 83941 ];

	AKrakenTentacle_execAllowDarknessIgnorance_Parms AllowDarknessIgnorance_Parms;

	this->ProcessEvent ( pFnAllowDarknessIgnorance, &AllowDarknessIgnorance_Parms, NULL );

	return AllowDarknessIgnorance_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.ForceFriendlyFire
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

bool AKrakenTentacle::ForceFriendlyFire ( class AActor* Target )
{
	static UFunction* pFnForceFriendlyFire = NULL;

	if ( ! pFnForceFriendlyFire )
		pFnForceFriendlyFire = (UFunction*) UObject::GObjObjects()->Data[ 83938 ];

	AKrakenTentacle_execForceFriendlyFire_Parms ForceFriendlyFire_Parms;
	ForceFriendlyFire_Parms.Target = Target;

	this->ProcessEvent ( pFnForceFriendlyFire, &ForceFriendlyFire_Parms, NULL );

	return ForceFriendlyFire_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.GetInterpolatedTargetingLocation
// [0x00824102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )

struct FVector AKrakenTentacle::GetInterpolatedTargetingLocation ( class AActor* RequestedBy )
{
	static UFunction* pFnGetInterpolatedTargetingLocation = NULL;

	if ( ! pFnGetInterpolatedTargetingLocation )
		pFnGetInterpolatedTargetingLocation = (UFunction*) UObject::GObjObjects()->Data[ 83933 ];

	AKrakenTentacle_execGetInterpolatedTargetingLocation_Parms GetInterpolatedTargetingLocation_Parms;
	GetInterpolatedTargetingLocation_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnGetInterpolatedTargetingLocation, &GetInterpolatedTargetingLocation_Parms, NULL );

	return GetInterpolatedTargetingLocation_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.GetTargetingLocation
// [0x00824102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )

struct FVector AKrakenTentacle::GetTargetingLocation ( class AActor* RequestedBy )
{
	static UFunction* pFnGetTargetingLocation = NULL;

	if ( ! pFnGetTargetingLocation )
		pFnGetTargetingLocation = (UFunction*) UObject::GObjObjects()->Data[ 83928 ];

	AKrakenTentacle_execGetTargetingLocation_Parms GetTargetingLocation_Parms;
	GetTargetingLocation_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnGetTargetingLocation, &GetTargetingLocation_Parms, NULL );

	return GetTargetingLocation_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.OnDestroy_RemoveFromTargetableList
// [0x00020000] 
// Parameters infos:

void AKrakenTentacle::OnDestroy_RemoveFromTargetableList ( )
{
	static UFunction* pFnOnDestroy_RemoveFromTargetableList = NULL;

	if ( ! pFnOnDestroy_RemoveFromTargetableList )
		pFnOnDestroy_RemoveFromTargetableList = (UFunction*) UObject::GObjObjects()->Data[ 83927 ];

	AKrakenTentacle_execOnDestroy_RemoveFromTargetableList_Parms OnDestroy_RemoveFromTargetableList_Parms;

	this->ProcessEvent ( pFnOnDestroy_RemoveFromTargetableList, &OnDestroy_RemoveFromTargetableList_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.OnPostBeginPlay_AddToTargetableList
// [0x00020000] 
// Parameters infos:

void AKrakenTentacle::OnPostBeginPlay_AddToTargetableList ( )
{
	static UFunction* pFnOnPostBeginPlay_AddToTargetableList = NULL;

	if ( ! pFnOnPostBeginPlay_AddToTargetableList )
		pFnOnPostBeginPlay_AddToTargetableList = (UFunction*) UObject::GObjObjects()->Data[ 83926 ];

	AKrakenTentacle_execOnPostBeginPlay_AddToTargetableList_Parms OnPostBeginPlay_AddToTargetableList_Parms;

	this->ProcessEvent ( pFnOnPostBeginPlay_AddToTargetableList, &OnPostBeginPlay_AddToTargetableList_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.UnregisterAttacker
// [0x00020000] 
// Parameters infos:
// class ADunDefEnemyController*  forController                  ( CPF_Parm )

void AKrakenTentacle::UnregisterAttacker ( class ADunDefEnemyController* forController )
{
	static UFunction* pFnUnregisterAttacker = NULL;

	if ( ! pFnUnregisterAttacker )
		pFnUnregisterAttacker = (UFunction*) UObject::GObjObjects()->Data[ 83924 ];

	AKrakenTentacle_execUnregisterAttacker_Parms UnregisterAttacker_Parms;
	UnregisterAttacker_Parms.forController = forController;

	this->ProcessEvent ( pFnUnregisterAttacker, &UnregisterAttacker_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.RegisterAttacker
// [0x00020000] 
// Parameters infos:
// class ADunDefEnemyController*  forController                  ( CPF_Parm )

void AKrakenTentacle::RegisterAttacker ( class ADunDefEnemyController* forController )
{
	static UFunction* pFnRegisterAttacker = NULL;

	if ( ! pFnRegisterAttacker )
		pFnRegisterAttacker = (UFunction*) UObject::GObjObjects()->Data[ 83922 ];

	AKrakenTentacle_execRegisterAttacker_Parms RegisterAttacker_Parms;
	RegisterAttacker_Parms.forController = forController;

	this->ProcessEvent ( pFnRegisterAttacker, &RegisterAttacker_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.GetAttackRangeOffset
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AKrakenTentacle::GetAttackRangeOffset ( )
{
	static UFunction* pFnGetAttackRangeOffset = NULL;

	if ( ! pFnGetAttackRangeOffset )
		pFnGetAttackRangeOffset = (UFunction*) UObject::GObjObjects()->Data[ 83920 ];

	AKrakenTentacle_execGetAttackRangeOffset_Parms GetAttackRangeOffset_Parms;

	this->ProcessEvent ( pFnGetAttackRangeOffset, &GetAttackRangeOffset_Parms, NULL );

	return GetAttackRangeOffset_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.IgnoreFriendlyFireDamage
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefTargetableInterface* instigatorActor                ( CPF_Parm )
// class AController*             OptionalController             ( CPF_OptionalParm | CPF_Parm )

bool AKrakenTentacle::IgnoreFriendlyFireDamage ( class UDunDefTargetableInterface* instigatorActor, class AController* OptionalController )
{
	static UFunction* pFnIgnoreFriendlyFireDamage = NULL;

	if ( ! pFnIgnoreFriendlyFireDamage )
		pFnIgnoreFriendlyFireDamage = (UFunction*) UObject::GObjObjects()->Data[ 83916 ];

	AKrakenTentacle_execIgnoreFriendlyFireDamage_Parms IgnoreFriendlyFireDamage_Parms;
	IgnoreFriendlyFireDamage_Parms.instigatorActor = instigatorActor;
	IgnoreFriendlyFireDamage_Parms.OptionalController = OptionalController;

	this->ProcessEvent ( pFnIgnoreFriendlyFireDamage, &IgnoreFriendlyFireDamage_Parms, NULL );

	return IgnoreFriendlyFireDamage_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.GetTargetingTeam
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AKrakenTentacle::GetTargetingTeam ( )
{
	static UFunction* pFnGetTargetingTeam = NULL;

	if ( ! pFnGetTargetingTeam )
		pFnGetTargetingTeam = (UFunction*) UObject::GObjObjects()->Data[ 83914 ];

	AKrakenTentacle_execGetTargetingTeam_Parms GetTargetingTeam_Parms;

	this->ProcessEvent ( pFnGetTargetingTeam, &GetTargetingTeam_Parms, NULL );

	return GetTargetingTeam_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.GetTowerTargetingDesirability
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            forTower                       ( CPF_Parm )

float AKrakenTentacle::GetTowerTargetingDesirability ( class ADunDefTower* forTower )
{
	static UFunction* pFnGetTowerTargetingDesirability = NULL;

	if ( ! pFnGetTowerTargetingDesirability )
		pFnGetTowerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 83911 ];

	AKrakenTentacle_execGetTowerTargetingDesirability_Parms GetTowerTargetingDesirability_Parms;
	GetTowerTargetingDesirability_Parms.forTower = forTower;

	this->ProcessEvent ( pFnGetTowerTargetingDesirability, &GetTowerTargetingDesirability_Parms, NULL );

	return GetTowerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.GetPlayerTargetingDesirability
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* forController                  ( CPF_Parm )
// class ADunDefPlayer*           ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

float AKrakenTentacle::GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer )
{
	static UFunction* pFnGetPlayerTargetingDesirability = NULL;

	if ( ! pFnGetPlayerTargetingDesirability )
		pFnGetPlayerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 83907 ];

	AKrakenTentacle_execGetPlayerTargetingDesirability_Parms GetPlayerTargetingDesirability_Parms;
	GetPlayerTargetingDesirability_Parms.forController = forController;
	GetPlayerTargetingDesirability_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnGetPlayerTargetingDesirability, &GetPlayerTargetingDesirability_Parms, NULL );

	return GetPlayerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefAtlantis.KrakenTentacle.DecreaseHealth
// [0x00020002] 
// Parameters infos:
// int                            Amount                         ( CPF_Parm )

void AKrakenTentacle::DecreaseHealth ( int Amount )
{
	static UFunction* pFnDecreaseHealth = NULL;

	if ( ! pFnDecreaseHealth )
		pFnDecreaseHealth = (UFunction*) UObject::GObjObjects()->Data[ 83905 ];

	AKrakenTentacle_execDecreaseHealth_Parms DecreaseHealth_Parms;
	DecreaseHealth_Parms.Amount = Amount;

	this->ProcessEvent ( pFnDecreaseHealth, &DecreaseHealth_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.ForceWithDraw
// [0x00020002] 
// Parameters infos:

void AKrakenTentacle::ForceWithDraw ( )
{
	static UFunction* pFnForceWithDraw = NULL;

	if ( ! pFnForceWithDraw )
		pFnForceWithDraw = (UFunction*) UObject::GObjObjects()->Data[ 83904 ];

	AKrakenTentacle_execForceWithDraw_Parms ForceWithDraw_Parms;

	this->ProcessEvent ( pFnForceWithDraw, &ForceWithDraw_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.LeaveShell
// [0x00020002] 
// Parameters infos:

void AKrakenTentacle::LeaveShell ( )
{
	static UFunction* pFnLeaveShell = NULL;

	if ( ! pFnLeaveShell )
		pFnLeaveShell = (UFunction*) UObject::GObjObjects()->Data[ 83903 ];

	AKrakenTentacle_execLeaveShell_Parms LeaveShell_Parms;

	this->ProcessEvent ( pFnLeaveShell, &LeaveShell_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.WithdrawIntoShell
// [0x00020002] 
// Parameters infos:

void AKrakenTentacle::WithdrawIntoShell ( )
{
	static UFunction* pFnWithdrawIntoShell = NULL;

	if ( ! pFnWithdrawIntoShell )
		pFnWithdrawIntoShell = (UFunction*) UObject::GObjObjects()->Data[ 83902 ];

	AKrakenTentacle_execWithdrawIntoShell_Parms WithdrawIntoShell_Parms;

	this->ProcessEvent ( pFnWithdrawIntoShell, &WithdrawIntoShell_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )

void AKrakenTentacle::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 83893 ];

	AKrakenTentacle_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;
	TakeDamage_Parms.WhatHitMe = WhatHitMe;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.SetWithDrawTime
// [0x00020002] 
// Parameters infos:
// float                          ForceWithDraw                  ( CPF_Parm )

void AKrakenTentacle::SetWithDrawTime ( float ForceWithDraw )
{
	static UFunction* pFnSetWithDrawTime = NULL;

	if ( ! pFnSetWithDrawTime )
		pFnSetWithDrawTime = (UFunction*) UObject::GObjObjects()->Data[ 83891 ];

	AKrakenTentacle_execSetWithDrawTime_Parms SetWithDrawTime_Parms;
	SetWithDrawTime_Parms.ForceWithDraw = ForceWithDraw;

	this->ProcessEvent ( pFnSetWithDrawTime, &SetWithDrawTime_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.SetUpMesh
// [0x00820102] 
// Parameters infos:

void AKrakenTentacle::SetUpMesh ( )
{
	static UFunction* pFnSetUpMesh = NULL;

	if ( ! pFnSetUpMesh )
		pFnSetUpMesh = (UFunction*) UObject::GObjObjects()->Data[ 83888 ];

	AKrakenTentacle_execSetUpMesh_Parms SetUpMesh_Parms;

	this->ProcessEvent ( pFnSetUpMesh, &SetUpMesh_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.InitTentacle
// [0x00020002] 
// Parameters infos:
// class ADunDefKraken*           theKraken                      ( CPF_Parm )
// struct FName                   BaseSocketName                 ( CPF_Parm )
// float                          DifficultyHealthMultiplier     ( CPF_Parm )

void AKrakenTentacle::InitTentacle ( class ADunDefKraken* theKraken, struct FName BaseSocketName, float DifficultyHealthMultiplier )
{
	static UFunction* pFnInitTentacle = NULL;

	if ( ! pFnInitTentacle )
		pFnInitTentacle = (UFunction*) UObject::GObjObjects()->Data[ 83884 ];

	AKrakenTentacle_execInitTentacle_Parms InitTentacle_Parms;
	InitTentacle_Parms.theKraken = theKraken;
	memcpy ( &InitTentacle_Parms.BaseSocketName, &BaseSocketName, 0x8 );
	InitTentacle_Parms.DifficultyHealthMultiplier = DifficultyHealthMultiplier;

	this->ProcessEvent ( pFnInitTentacle, &InitTentacle_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKrakenTentacle::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83883 ];

	AKrakenTentacle_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void AKrakenTentacle::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 83866 ];

	AKrakenTentacle_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefAtlantis.KrakenTentacle.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AKrakenTentacle::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 83864 ];

	AKrakenTentacle_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.StopInkCloud
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::StopInkCloud ( )
{
	static UFunction* pFnStopInkCloud = NULL;

	if ( ! pFnStopInkCloud )
		pFnStopInkCloud = (UFunction*) UObject::GObjObjects()->Data[ 83496 ];

	ADunDefKrakenController_execStopInkCloud_Parms StopInkCloud_Parms;

	this->ProcessEvent ( pFnStopInkCloud, &StopInkCloud_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnInkCloud
// [0x00820002] 
// Parameters infos:

void ADunDefKrakenController::SpawnInkCloud ( )
{
	static UFunction* pFnSpawnInkCloud = NULL;

	if ( ! pFnSpawnInkCloud )
		pFnSpawnInkCloud = (UFunction*) UObject::GObjObjects()->Data[ 83491 ];

	ADunDefKrakenController_execSpawnInkCloud_Parms SpawnInkCloud_Parms;

	this->ProcessEvent ( pFnSpawnInkCloud, &SpawnInkCloud_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnGiantProjectile
// [0x00820002] 
// Parameters infos:

void ADunDefKrakenController::SpawnGiantProjectile ( )
{
	static UFunction* pFnSpawnGiantProjectile = NULL;

	if ( ! pFnSpawnGiantProjectile )
		pFnSpawnGiantProjectile = (UFunction*) UObject::GObjObjects()->Data[ 83486 ];

	ADunDefKrakenController_execSpawnGiantProjectile_Parms SpawnGiantProjectile_Parms;

	this->ProcessEvent ( pFnSpawnGiantProjectile, &SpawnGiantProjectile_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnRightTentacleProjectiles
// [0x00820002] 
// Parameters infos:

void ADunDefKrakenController::SpawnRightTentacleProjectiles ( )
{
	static UFunction* pFnSpawnRightTentacleProjectiles = NULL;

	if ( ! pFnSpawnRightTentacleProjectiles )
		pFnSpawnRightTentacleProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 83477 ];

	ADunDefKrakenController_execSpawnRightTentacleProjectiles_Parms SpawnRightTentacleProjectiles_Parms;

	this->ProcessEvent ( pFnSpawnRightTentacleProjectiles, &SpawnRightTentacleProjectiles_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnLeftTentacleProjectiles
// [0x00820002] 
// Parameters infos:

void ADunDefKrakenController::SpawnLeftTentacleProjectiles ( )
{
	static UFunction* pFnSpawnLeftTentacleProjectiles = NULL;

	if ( ! pFnSpawnLeftTentacleProjectiles )
		pFnSpawnLeftTentacleProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 83468 ];

	ADunDefKrakenController_execSpawnLeftTentacleProjectiles_Parms SpawnLeftTentacleProjectiles_Parms;

	this->ProcessEvent ( pFnSpawnLeftTentacleProjectiles, &SpawnLeftTentacleProjectiles_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.GetValidShootTargets
// [0x00424002] 
// Parameters infos:
// float                          MinRange                       ( CPF_Parm )
// float                          MaxRange                       ( CPF_Parm )
// float                          angleCheck                     ( CPF_OptionalParm | CPF_Parm )
// TArray< class AActor* >        ActorList                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ADunDefKrakenController::GetValidShootTargets ( float MinRange, float MaxRange, float angleCheck, TArray< class AActor* >* ActorList )
{
	static UFunction* pFnGetValidShootTargets = NULL;

	if ( ! pFnGetValidShootTargets )
		pFnGetValidShootTargets = (UFunction*) UObject::GObjObjects()->Data[ 83458 ];

	ADunDefKrakenController_execGetValidShootTargets_Parms GetValidShootTargets_Parms;
	GetValidShootTargets_Parms.MinRange = MinRange;
	GetValidShootTargets_Parms.MaxRange = MaxRange;
	GetValidShootTargets_Parms.angleCheck = angleCheck;

	this->ProcessEvent ( pFnGetValidShootTargets, &GetValidShootTargets_Parms, NULL );

	if ( ActorList )
		memcpy ( ActorList, &GetValidShootTargets_Parms.ActorList, 0xC );
};

// Function DunDefAtlantis.DunDefKrakenController.CheckCustomOpenMouthAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::CheckCustomOpenMouthAttacks ( )
{
	static UFunction* pFnCheckCustomOpenMouthAttacks = NULL;

	if ( ! pFnCheckCustomOpenMouthAttacks )
		pFnCheckCustomOpenMouthAttacks = (UFunction*) UObject::GObjObjects()->Data[ 83454 ];

	ADunDefKrakenController_execCheckCustomOpenMouthAttacks_Parms CheckCustomOpenMouthAttacks_Parms;

	this->ProcessEvent ( pFnCheckCustomOpenMouthAttacks, &CheckCustomOpenMouthAttacks_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomClosedMouthAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::CheckForCustomClosedMouthAttacks ( )
{
	static UFunction* pFnCheckForCustomClosedMouthAttacks = NULL;

	if ( ! pFnCheckForCustomClosedMouthAttacks )
		pFnCheckForCustomClosedMouthAttacks = (UFunction*) UObject::GObjObjects()->Data[ 83451 ];

	ADunDefKrakenController_execCheckForCustomClosedMouthAttacks_Parms CheckForCustomClosedMouthAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomClosedMouthAttacks, &CheckForCustomClosedMouthAttacks_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::CheckForCustomAttacks ( )
{
	static UFunction* pFnCheckForCustomAttacks = NULL;

	if ( ! pFnCheckForCustomAttacks )
		pFnCheckForCustomAttacks = (UFunction*) UObject::GObjObjects()->Data[ 83450 ];

	ADunDefKrakenController_execCheckForCustomAttacks_Parms CheckForCustomAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomAttacks, &CheckForCustomAttacks_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.CloseMouth
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::CloseMouth ( )
{
	static UFunction* pFnCloseMouth = NULL;

	if ( ! pFnCloseMouth )
		pFnCloseMouth = (UFunction*) UObject::GObjObjects()->Data[ 83449 ];

	ADunDefKrakenController_execCloseMouth_Parms CloseMouth_Parms;

	this->ProcessEvent ( pFnCloseMouth, &CloseMouth_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTentacleBroughtOut
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::NotifyTentacleBroughtOut ( )
{
	static UFunction* pFnNotifyTentacleBroughtOut = NULL;

	if ( ! pFnNotifyTentacleBroughtOut )
		pFnNotifyTentacleBroughtOut = (UFunction*) UObject::GObjObjects()->Data[ 83447 ];

	ADunDefKrakenController_execNotifyTentacleBroughtOut_Parms NotifyTentacleBroughtOut_Parms;

	this->ProcessEvent ( pFnNotifyTentacleBroughtOut, &NotifyTentacleBroughtOut_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTentecaleWithDrawn
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::NotifyTentecaleWithDrawn ( )
{
	static UFunction* pFnNotifyTentecaleWithDrawn = NULL;

	if ( ! pFnNotifyTentecaleWithDrawn )
		pFnNotifyTentecaleWithDrawn = (UFunction*) UObject::GObjObjects()->Data[ 83446 ];

	ADunDefKrakenController_execNotifyTentecaleWithDrawn_Parms NotifyTentecaleWithDrawn_Parms;

	this->ProcessEvent ( pFnNotifyTentecaleWithDrawn, &NotifyTentecaleWithDrawn_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.HandleTentacleDamage
// [0x00820002] 
// Parameters infos:
// class AActor*                  newHitTarg                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefKrakenController::HandleTentacleDamage ( class AActor* newHitTarg, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnHandleTentacleDamage = NULL;

	if ( ! pFnHandleTentacleDamage )
		pFnHandleTentacleDamage = (UFunction*) UObject::GObjObjects()->Data[ 83441 ];

	ADunDefKrakenController_execHandleTentacleDamage_Parms HandleTentacleDamage_Parms;
	HandleTentacleDamage_Parms.newHitTarg = newHitTarg;
	memcpy ( &HandleTentacleDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &HandleTentacleDamage_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnHandleTentacleDamage, &HandleTentacleDamage_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.EndDash
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::EndDash ( )
{
	static UFunction* pFnEndDash = NULL;

	if ( ! pFnEndDash )
		pFnEndDash = (UFunction*) UObject::GObjObjects()->Data[ 83428 ];

	ADunDefKrakenController_execEndDash_Parms EndDash_Parms;

	this->ProcessEvent ( pFnEndDash, &EndDash_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.UpdateDashPoint
// [0x00820002] 
// Parameters infos:

void ADunDefKrakenController::UpdateDashPoint ( )
{
	static UFunction* pFnUpdateDashPoint = NULL;

	if ( ! pFnUpdateDashPoint )
		pFnUpdateDashPoint = (UFunction*) UObject::GObjObjects()->Data[ 83421 ];

	ADunDefKrakenController_execUpdateDashPoint_Parms UpdateDashPoint_Parms;

	this->ProcessEvent ( pFnUpdateDashPoint, &UpdateDashPoint_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.AddToDashHurtList
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  DashedActor                    ( CPF_Parm )

bool ADunDefKrakenController::AddToDashHurtList ( class AActor* DashedActor )
{
	static UFunction* pFnAddToDashHurtList = NULL;

	if ( ! pFnAddToDashHurtList )
		pFnAddToDashHurtList = (UFunction*) UObject::GObjObjects()->Data[ 83405 ];

	ADunDefKrakenController_execAddToDashHurtList_Parms AddToDashHurtList_Parms;
	AddToDashHurtList_Parms.DashedActor = DashedActor;

	this->ProcessEvent ( pFnAddToDashHurtList, &AddToDashHurtList_Parms, NULL );

	return AddToDashHurtList_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.EndMeleeSwing
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::EndMeleeSwing ( )
{
	static UFunction* pFnEndMeleeSwing = NULL;

	if ( ! pFnEndMeleeSwing )
		pFnEndMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 83404 ];

	ADunDefKrakenController_execEndMeleeSwing_Parms EndMeleeSwing_Parms;

	this->ProcessEvent ( pFnEndMeleeSwing, &EndMeleeSwing_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.BiteStart
// [0x00020000] 
// Parameters infos:

void ADunDefKrakenController::BiteStart ( )
{
	static UFunction* pFnBiteStart = NULL;

	if ( ! pFnBiteStart )
		pFnBiteStart = (UFunction*) UObject::GObjObjects()->Data[ 83392 ];

	ADunDefKrakenController_execBiteStart_Parms BiteStart_Parms;

	this->ProcessEvent ( pFnBiteStart, &BiteStart_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.EndBite
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::EndBite ( )
{
	static UFunction* pFnEndBite = NULL;

	if ( ! pFnEndBite )
		pFnEndBite = (UFunction*) UObject::GObjObjects()->Data[ 83391 ];

	ADunDefKrakenController_execEndBite_Parms EndBite_Parms;

	this->ProcessEvent ( pFnEndBite, &EndBite_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.DoBiting
// [0x00820002] 
// Parameters infos:

void ADunDefKrakenController::DoBiting ( )
{
	static UFunction* pFnDoBiting = NULL;

	if ( ! pFnDoBiting )
		pFnDoBiting = (UFunction*) UObject::GObjObjects()->Data[ 83386 ];

	ADunDefKrakenController_execDoBiting_Parms DoBiting_Parms;

	this->ProcessEvent ( pFnDoBiting, &DoBiting_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.AddToSwingHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  newEntry                       ( CPF_Parm )

bool ADunDefKrakenController::AddToSwingHurtList ( class AActor* newEntry )
{
	static UFunction* pFnAddToSwingHurtList = NULL;

	if ( ! pFnAddToSwingHurtList )
		pFnAddToSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 83383 ];

	ADunDefKrakenController_execAddToSwingHurtList_Parms AddToSwingHurtList_Parms;
	AddToSwingHurtList_Parms.newEntry = newEntry;

	this->ProcessEvent ( pFnAddToSwingHurtList, &AddToSwingHurtList_Parms, NULL );

	return AddToSwingHurtList_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.ShouldDamage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  act                            ( CPF_Parm )

bool ADunDefKrakenController::ShouldDamage ( class AActor* act )
{
	static UFunction* pFnShouldDamage = NULL;

	if ( ! pFnShouldDamage )
		pFnShouldDamage = (UFunction*) UObject::GObjObjects()->Data[ 83380 ];

	ADunDefKrakenController_execShouldDamage_Parms ShouldDamage_Parms;
	ShouldDamage_Parms.act = act;

	this->ProcessEvent ( pFnShouldDamage, &ShouldDamage_Parms, NULL );

	return ShouldDamage_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.DoAttack
// [0x00020002] 
// Parameters infos:

void ADunDefKrakenController::DoAttack ( )
{
	static UFunction* pFnDoAttack = NULL;

	if ( ! pFnDoAttack )
		pFnDoAttack = (UFunction*) UObject::GObjObjects()->Data[ 83379 ];

	ADunDefKrakenController_execDoAttack_Parms DoAttack_Parms;

	this->ProcessEvent ( pFnDoAttack, &DoAttack_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

struct FVector ADunDefKrakenController::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 83373 ];

	ADunDefKrakenController_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.MoveAroundBlockade
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  blockadeActor                  ( CPF_Parm )
// float                          BlockadeWidth                  ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// unsigned long                  SkipBlockingCheck              ( CPF_OptionalParm | CPF_Parm )

bool ADunDefKrakenController::MoveAroundBlockade ( class AActor* blockadeActor, float BlockadeWidth, struct FVector HitNormal, unsigned long SkipBlockingCheck )
{
	static UFunction* pFnMoveAroundBlockade = NULL;

	if ( ! pFnMoveAroundBlockade )
		pFnMoveAroundBlockade = (UFunction*) UObject::GObjObjects()->Data[ 83367 ];

	ADunDefKrakenController_execMoveAroundBlockade_Parms MoveAroundBlockade_Parms;
	MoveAroundBlockade_Parms.blockadeActor = blockadeActor;
	MoveAroundBlockade_Parms.BlockadeWidth = BlockadeWidth;
	memcpy ( &MoveAroundBlockade_Parms.HitNormal, &HitNormal, 0xC );
	MoveAroundBlockade_Parms.SkipBlockingCheck = SkipBlockingCheck;

	this->ProcessEvent ( pFnMoveAroundBlockade, &MoveAroundBlockade_Parms, NULL );

	return MoveAroundBlockade_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.NavActorReachable
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool ADunDefKrakenController::NavActorReachable ( class AActor* A )
{
	static UFunction* pFnNavActorReachable = NULL;

	if ( ! pFnNavActorReachable )
		pFnNavActorReachable = (UFunction*) UObject::GObjObjects()->Data[ 83364 ];

	ADunDefKrakenController_execNavActorReachable_Parms NavActorReachable_Parms;
	NavActorReachable_Parms.A = A;

	this->ProcessEvent ( pFnNavActorReachable, &NavActorReachable_Parms, NULL );

	return NavActorReachable_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.FindNearestNavPointTo
// [0x00024002] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )
// unsigned long                  bCheckVisible                  ( CPF_OptionalParm | CPF_Parm )

class ANavigationPoint* ADunDefKrakenController::FindNearestNavPointTo ( class AActor* A, unsigned long bCheckVisible )
{
	static UFunction* pFnFindNearestNavPointTo = NULL;

	if ( ! pFnFindNearestNavPointTo )
		pFnFindNearestNavPointTo = (UFunction*) UObject::GObjObjects()->Data[ 83360 ];

	ADunDefKrakenController_execFindNearestNavPointTo_Parms FindNearestNavPointTo_Parms;
	FindNearestNavPointTo_Parms.A = A;
	FindNearestNavPointTo_Parms.bCheckVisible = bCheckVisible;

	this->ProcessEvent ( pFnFindNearestNavPointTo, &FindNearestNavPointTo_Parms, NULL );

	return FindNearestNavPointTo_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.GetAttackRange
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefKrakenController::GetAttackRange ( )
{
	static UFunction* pFnGetAttackRange = NULL;

	if ( ! pFnGetAttackRange )
		pFnGetAttackRange = (UFunction*) UObject::GObjObjects()->Data[ 83352 ];

	ADunDefKrakenController_execGetAttackRange_Parms GetAttackRange_Parms;

	this->ProcessEvent ( pFnGetAttackRange, &GetAttackRange_Parms, NULL );

	return GetAttackRange_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.ForceTentacleAttack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefKrakenController::ForceTentacleAttack ( )
{
	static UFunction* pFnForceTentacleAttack = NULL;

	if ( ! pFnForceTentacleAttack )
		pFnForceTentacleAttack = (UFunction*) UObject::GObjObjects()->Data[ 83350 ];

	ADunDefKrakenController_execForceTentacleAttack_Parms ForceTentacleAttack_Parms;

	this->ProcessEvent ( pFnForceTentacleAttack, &ForceTentacleAttack_Parms, NULL );

	return ForceTentacleAttack_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.WantsHurtAnimation
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefKrakenController::WantsHurtAnimation ( )
{
	static UFunction* pFnWantsHurtAnimation = NULL;

	if ( ! pFnWantsHurtAnimation )
		pFnWantsHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83348 ];

	ADunDefKrakenController_execWantsHurtAnimation_Parms WantsHurtAnimation_Parms;

	this->ProcessEvent ( pFnWantsHurtAnimation, &WantsHurtAnimation_Parms, NULL );

	return WantsHurtAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefKrakenController::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 83341 ];

	ADunDefKrakenController_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefAtlantis.DunDefKrakenController.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADunDefKrakenController::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 83338 ];

	ADunDefKrakenController_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.IsCurrentlyPlayingAttackAnimation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefSharkMan::IsCurrentlyPlayingAttackAnimation ( )
{
	static UFunction* pFnIsCurrentlyPlayingAttackAnimation = NULL;

	if ( ! pFnIsCurrentlyPlayingAttackAnimation )
		pFnIsCurrentlyPlayingAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83654 ];

	ADunDefSharkMan_execIsCurrentlyPlayingAttackAnimation_Parms IsCurrentlyPlayingAttackAnimation_Parms;

	this->ProcessEvent ( pFnIsCurrentlyPlayingAttackAnimation, &IsCurrentlyPlayingAttackAnimation_Parms, NULL );

	return IsCurrentlyPlayingAttackAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefSharkMan::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 83647 ];

	ADunDefSharkMan_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ADunDefSharkMan::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 83641 ];

	ADunDefSharkMan_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.ClearChargeHurtList
// [0x00020002] 
// Parameters infos:

void ADunDefSharkMan::ClearChargeHurtList ( )
{
	static UFunction* pFnClearChargeHurtList = NULL;

	if ( ! pFnClearChargeHurtList )
		pFnClearChargeHurtList = (UFunction*) UObject::GObjObjects()->Data[ 83640 ];

	ADunDefSharkMan_execClearChargeHurtList_Parms ClearChargeHurtList_Parms;

	this->ProcessEvent ( pFnClearChargeHurtList, &ClearChargeHurtList_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.AddToChargeHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayer*           Player                         ( CPF_Parm )

bool ADunDefSharkMan::AddToChargeHurtList ( class ADunDefPlayer* Player )
{
	static UFunction* pFnAddToChargeHurtList = NULL;

	if ( ! pFnAddToChargeHurtList )
		pFnAddToChargeHurtList = (UFunction*) UObject::GObjObjects()->Data[ 83637 ];

	ADunDefSharkMan_execAddToChargeHurtList_Parms AddToChargeHurtList_Parms;
	AddToChargeHurtList_Parms.Player = Player;

	this->ProcessEvent ( pFnAddToChargeHurtList, &AddToChargeHurtList_Parms, NULL );

	return AddToChargeHurtList_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.EndCharging
// [0x00020102] 
// Parameters infos:

void ADunDefSharkMan::EndCharging ( )
{
	static UFunction* pFnEndCharging = NULL;

	if ( ! pFnEndCharging )
		pFnEndCharging = (UFunction*) UObject::GObjObjects()->Data[ 83636 ];

	ADunDefSharkMan_execEndCharging_Parms EndCharging_Parms;

	this->ProcessEvent ( pFnEndCharging, &EndCharging_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.SetChargingSpeed
// [0x00020002] 
// Parameters infos:

void ADunDefSharkMan::SetChargingSpeed ( )
{
	static UFunction* pFnSetChargingSpeed = NULL;

	if ( ! pFnSetChargingSpeed )
		pFnSetChargingSpeed = (UFunction*) UObject::GObjObjects()->Data[ 83635 ];

	ADunDefSharkMan_execSetChargingSpeed_Parms SetChargingSpeed_Parms;

	this->ProcessEvent ( pFnSetChargingSpeed, &SetChargingSpeed_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.CheckForEncroachers
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefSharkMan::CheckForEncroachers ( float DeltaTime )
{
	static UFunction* pFnCheckForEncroachers = NULL;

	if ( ! pFnCheckForEncroachers )
		pFnCheckForEncroachers = (UFunction*) UObject::GObjObjects()->Data[ 83627 ];

	ADunDefSharkMan_execCheckForEncroachers_Parms CheckForEncroachers_Parms;
	CheckForEncroachers_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnCheckForEncroachers, &CheckForEncroachers_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAbortAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSharkMan::PlaySharkManChargeAbortAnimation ( )
{
	static UFunction* pFnPlaySharkManChargeAbortAnimation = NULL;

	if ( ! pFnPlaySharkManChargeAbortAnimation )
		pFnPlaySharkManChargeAbortAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83625 ];

	ADunDefSharkMan_execPlaySharkManChargeAbortAnimation_Parms PlaySharkManChargeAbortAnimation_Parms;

	this->ProcessEvent ( pFnPlaySharkManChargeAbortAnimation, &PlaySharkManChargeAbortAnimation_Parms, NULL );

	return PlaySharkManChargeAbortAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManHitWallAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSharkMan::PlaySharkManHitWallAnimation ( )
{
	static UFunction* pFnPlaySharkManHitWallAnimation = NULL;

	if ( ! pFnPlaySharkManHitWallAnimation )
		pFnPlaySharkManHitWallAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83623 ];

	ADunDefSharkMan_execPlaySharkManHitWallAnimation_Parms PlaySharkManHitWallAnimation_Parms;

	this->ProcessEvent ( pFnPlaySharkManHitWallAnimation, &PlaySharkManHitWallAnimation_Parms, NULL );

	return PlaySharkManHitWallAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeFailAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSharkMan::PlaySharkManChargeFailAnimation ( )
{
	static UFunction* pFnPlaySharkManChargeFailAnimation = NULL;

	if ( ! pFnPlaySharkManChargeFailAnimation )
		pFnPlaySharkManChargeFailAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83621 ];

	ADunDefSharkMan_execPlaySharkManChargeFailAnimation_Parms PlaySharkManChargeFailAnimation_Parms;

	this->ProcessEvent ( pFnPlaySharkManChargeFailAnimation, &PlaySharkManChargeFailAnimation_Parms, NULL );

	return PlaySharkManChargeFailAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.StopSharkManDizzyAnimation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefSharkMan::StopSharkManDizzyAnimation ( )
{
	static UFunction* pFnStopSharkManDizzyAnimation = NULL;

	if ( ! pFnStopSharkManDizzyAnimation )
		pFnStopSharkManDizzyAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83619 ];

	ADunDefSharkMan_execStopSharkManDizzyAnimation_Parms StopSharkManDizzyAnimation_Parms;

	this->ProcessEvent ( pFnStopSharkManDizzyAnimation, &StopSharkManDizzyAnimation_Parms, NULL );

	return StopSharkManDizzyAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManDizzyAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSharkMan::PlaySharkManDizzyAnimation ( )
{
	static UFunction* pFnPlaySharkManDizzyAnimation = NULL;

	if ( ! pFnPlaySharkManDizzyAnimation )
		pFnPlaySharkManDizzyAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83617 ];

	ADunDefSharkMan_execPlaySharkManDizzyAnimation_Parms PlaySharkManDizzyAnimation_Parms;

	this->ProcessEvent ( pFnPlaySharkManDizzyAnimation, &PlaySharkManDizzyAnimation_Parms, NULL );

	return PlaySharkManDizzyAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSharkMan::PlaySharkManChargeAnimation ( )
{
	static UFunction* pFnPlaySharkManChargeAnimation = NULL;

	if ( ! pFnPlaySharkManChargeAnimation )
		pFnPlaySharkManChargeAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83615 ];

	ADunDefSharkMan_execPlaySharkManChargeAnimation_Parms PlaySharkManChargeAnimation_Parms;

	this->ProcessEvent ( pFnPlaySharkManChargeAnimation, &PlaySharkManChargeAnimation_Parms, NULL );

	return PlaySharkManChargeAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManWindupAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSharkMan::PlaySharkManWindupAnimation ( )
{
	static UFunction* pFnPlaySharkManWindupAnimation = NULL;

	if ( ! pFnPlaySharkManWindupAnimation )
		pFnPlaySharkManWindupAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83613 ];

	ADunDefSharkMan_execPlaySharkManWindupAnimation_Parms PlaySharkManWindupAnimation_Parms;

	this->ProcessEvent ( pFnPlaySharkManWindupAnimation, &PlaySharkManWindupAnimation_Parms, NULL );

	return PlaySharkManWindupAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefSharkMan::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 83611 ];

	ADunDefSharkMan_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.HandleMomentum
// [0x00024002] 
// Parameters infos:
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )

void ADunDefSharkMan::HandleMomentum ( struct FVector Momentum, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnHandleMomentum = NULL;

	if ( ! pFnHandleMomentum )
		pFnHandleMomentum = (UFunction*) UObject::GObjObjects()->Data[ 83606 ];

	ADunDefSharkMan_execHandleMomentum_Parms HandleMomentum_Parms;
	memcpy ( &HandleMomentum_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &HandleMomentum_Parms.HitLocation, &HitLocation, 0xC );
	HandleMomentum_Parms.DamageType = DamageType;
	memcpy ( &HandleMomentum_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnHandleMomentum, &HandleMomentum_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.SetSharkManArmBlend
// [0x00020100] 
// Parameters infos:
// int                            animAmount                     ( CPF_Parm )

void ADunDefSharkMan::SetSharkManArmBlend ( int animAmount )
{
	static UFunction* pFnSetSharkManArmBlend = NULL;

	if ( ! pFnSetSharkManArmBlend )
		pFnSetSharkManArmBlend = (UFunction*) UObject::GObjObjects()->Data[ 83604 ];

	ADunDefSharkMan_execSetSharkManArmBlend_Parms SetSharkManArmBlend_Parms;
	SetSharkManArmBlend_Parms.animAmount = animAmount;

	this->ProcessEvent ( pFnSetSharkManArmBlend, &SetSharkManArmBlend_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManAttackAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AnimationIndex                 ( CPF_Parm )

float ADunDefSharkMan::PlaySharkManAttackAnimation ( int AnimationIndex )
{
	static UFunction* pFnPlaySharkManAttackAnimation = NULL;

	if ( ! pFnPlaySharkManAttackAnimation )
		pFnPlaySharkManAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83601 ];

	ADunDefSharkMan_execPlaySharkManAttackAnimation_Parms PlaySharkManAttackAnimation_Parms;
	PlaySharkManAttackAnimation_Parms.AnimationIndex = AnimationIndex;

	this->ProcessEvent ( pFnPlaySharkManAttackAnimation, &PlaySharkManAttackAnimation_Parms, NULL );

	return PlaySharkManAttackAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.PlayHurtAnimation
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefSharkMan::PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayHurtAnimation = NULL;

	if ( ! pFnPlayHurtAnimation )
		pFnPlayHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83598 ];

	ADunDefSharkMan_execPlayHurtAnimation_Parms PlayHurtAnimation_Parms;
	PlayHurtAnimation_Parms.DamageType = DamageType;
	memcpy ( &PlayHurtAnimation_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayHurtAnimation, &PlayHurtAnimation_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.PlayAttackAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSharkMan::PlayAttackAnimation ( )
{
	static UFunction* pFnPlayAttackAnimation = NULL;

	if ( ! pFnPlayAttackAnimation )
		pFnPlayAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 83592 ];

	ADunDefSharkMan_execPlayAttackAnimation_Parms PlayAttackAnimation_Parms;

	this->ProcessEvent ( pFnPlayAttackAnimation, &PlayAttackAnimation_Parms, NULL );

	return PlayAttackAnimation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AEngineNativeDunDefAIController* forController                  ( CPF_Parm )

float ADunDefSharkMan::eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController )
{
	static UFunction* pFnGetEnemyTargetingDesirability = NULL;

	if ( ! pFnGetEnemyTargetingDesirability )
		pFnGetEnemyTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 83588 ];

	ADunDefSharkMan_eventGetEnemyTargetingDesirability_Parms GetEnemyTargetingDesirability_Parms;
	GetEnemyTargetingDesirability_Parms.forController = forController;

	this->ProcessEvent ( pFnGetEnemyTargetingDesirability, &GetEnemyTargetingDesirability_Parms, NULL );

	return GetEnemyTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.GetTowerTargetingDesirability
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            forTower                       ( CPF_Parm )

float ADunDefSharkMan::GetTowerTargetingDesirability ( class ADunDefTower* forTower )
{
	static UFunction* pFnGetTowerTargetingDesirability = NULL;

	if ( ! pFnGetTowerTargetingDesirability )
		pFnGetTowerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 83584 ];

	ADunDefSharkMan_execGetTowerTargetingDesirability_Parms GetTowerTargetingDesirability_Parms;
	GetTowerTargetingDesirability_Parms.forTower = forTower;

	this->ProcessEvent ( pFnGetTowerTargetingDesirability, &GetTowerTargetingDesirability_Parms, NULL );

	return GetTowerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeSwingLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefSharkMan::GetMeleeSwingLocation ( )
{
	static UFunction* pFnGetMeleeSwingLocation = NULL;

	if ( ! pFnGetMeleeSwingLocation )
		pFnGetMeleeSwingLocation = (UFunction*) UObject::GObjObjects()->Data[ 83581 ];

	ADunDefSharkMan_execGetMeleeSwingLocation_Parms GetMeleeSwingLocation_Parms;

	this->ProcessEvent ( pFnGetMeleeSwingLocation, &GetMeleeSwingLocation_Parms, NULL );

	return GetMeleeSwingLocation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeElbowLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  fist                           ( CPF_Parm )

struct FVector ADunDefSharkMan::GetMeleeElbowLocation ( unsigned char fist )
{
	static UFunction* pFnGetMeleeElbowLocation = NULL;

	if ( ! pFnGetMeleeElbowLocation )
		pFnGetMeleeElbowLocation = (UFunction*) UObject::GObjObjects()->Data[ 83576 ];

	ADunDefSharkMan_execGetMeleeElbowLocation_Parms GetMeleeElbowLocation_Parms;
	GetMeleeElbowLocation_Parms.fist = fist;

	this->ProcessEvent ( pFnGetMeleeElbowLocation, &GetMeleeElbowLocation_Parms, NULL );

	return GetMeleeElbowLocation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeFistLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  fist                           ( CPF_Parm )

struct FVector ADunDefSharkMan::GetMeleeFistLocation ( unsigned char fist )
{
	static UFunction* pFnGetMeleeFistLocation = NULL;

	if ( ! pFnGetMeleeFistLocation )
		pFnGetMeleeFistLocation = (UFunction*) UObject::GObjObjects()->Data[ 83571 ];

	ADunDefSharkMan_execGetMeleeFistLocation_Parms GetMeleeFistLocation_Parms;
	GetMeleeFistLocation_Parms.fist = fist;

	this->ProcessEvent ( pFnGetMeleeFistLocation, &GetMeleeFistLocation_Parms, NULL );

	return GetMeleeFistLocation_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkMan.GroundStrike
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDefSharkMan::eventGroundStrike ( )
{
	static UFunction* pFnGroundStrike = NULL;

	if ( ! pFnGroundStrike )
		pFnGroundStrike = (UFunction*) UObject::GObjObjects()->Data[ 83566 ];

	ADunDefSharkMan_eventGroundStrike_Parms GroundStrike_Parms;

	this->ProcessEvent ( pFnGroundStrike, &GroundStrike_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeBothEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSharkMan::eventMeleeBothEnd ( )
{
	static UFunction* pFnMeleeBothEnd = NULL;

	if ( ! pFnMeleeBothEnd )
		pFnMeleeBothEnd = (UFunction*) UObject::GObjObjects()->Data[ 83565 ];

	ADunDefSharkMan_eventMeleeBothEnd_Parms MeleeBothEnd_Parms;

	this->ProcessEvent ( pFnMeleeBothEnd, &MeleeBothEnd_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeBothStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSharkMan::eventMeleeBothStart ( )
{
	static UFunction* pFnMeleeBothStart = NULL;

	if ( ! pFnMeleeBothStart )
		pFnMeleeBothStart = (UFunction*) UObject::GObjObjects()->Data[ 83564 ];

	ADunDefSharkMan_eventMeleeBothStart_Parms MeleeBothStart_Parms;

	this->ProcessEvent ( pFnMeleeBothStart, &MeleeBothStart_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeRightEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSharkMan::eventMeleeRightEnd ( )
{
	static UFunction* pFnMeleeRightEnd = NULL;

	if ( ! pFnMeleeRightEnd )
		pFnMeleeRightEnd = (UFunction*) UObject::GObjObjects()->Data[ 83563 ];

	ADunDefSharkMan_eventMeleeRightEnd_Parms MeleeRightEnd_Parms;

	this->ProcessEvent ( pFnMeleeRightEnd, &MeleeRightEnd_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeRightStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSharkMan::eventMeleeRightStart ( )
{
	static UFunction* pFnMeleeRightStart = NULL;

	if ( ! pFnMeleeRightStart )
		pFnMeleeRightStart = (UFunction*) UObject::GObjObjects()->Data[ 83562 ];

	ADunDefSharkMan_eventMeleeRightStart_Parms MeleeRightStart_Parms;

	this->ProcessEvent ( pFnMeleeRightStart, &MeleeRightStart_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSharkMan::eventMeleeLeftEnd ( )
{
	static UFunction* pFnMeleeLeftEnd = NULL;

	if ( ! pFnMeleeLeftEnd )
		pFnMeleeLeftEnd = (UFunction*) UObject::GObjObjects()->Data[ 83561 ];

	ADunDefSharkMan_eventMeleeLeftEnd_Parms MeleeLeftEnd_Parms;

	this->ProcessEvent ( pFnMeleeLeftEnd, &MeleeLeftEnd_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSharkMan::eventMeleeLeftStart ( )
{
	static UFunction* pFnMeleeLeftStart = NULL;

	if ( ! pFnMeleeLeftStart )
		pFnMeleeLeftStart = (UFunction*) UObject::GObjObjects()->Data[ 83559 ];

	ADunDefSharkMan_eventMeleeLeftStart_Parms MeleeLeftStart_Parms;

	this->ProcessEvent ( pFnMeleeLeftStart, &MeleeLeftStart_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefSharkMan::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 83542 ];

	ADunDefSharkMan_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkMan.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefSharkMan::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 83541 ];

	ADunDefSharkMan_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkmanController.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefSharkmanController::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 83813 ];

	ADunDefSharkmanController_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkmanController.AbortCharge
// [0x00020002] 
// Parameters infos:

void ADunDefSharkmanController::AbortCharge ( )
{
	static UFunction* pFnAbortCharge = NULL;

	if ( ! pFnAbortCharge )
		pFnAbortCharge = (UFunction*) UObject::GObjObjects()->Data[ 83812 ];

	ADunDefSharkmanController_execAbortCharge_Parms AbortCharge_Parms;

	this->ProcessEvent ( pFnAbortCharge, &AbortCharge_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkmanController.CheckTowerViability
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            Tower                          ( CPF_Parm )

float ADunDefSharkmanController::CheckTowerViability ( class ADunDefTower* Tower )
{
	static UFunction* pFnCheckTowerViability = NULL;

	if ( ! pFnCheckTowerViability )
		pFnCheckTowerViability = (UFunction*) UObject::GObjObjects()->Data[ 83808 ];

	ADunDefSharkmanController_execCheckTowerViability_Parms CheckTowerViability_Parms;
	CheckTowerViability_Parms.Tower = Tower;

	this->ProcessEvent ( pFnCheckTowerViability, &CheckTowerViability_Parms, NULL );

	return CheckTowerViability_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkmanController.CheckForCustomAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefSharkmanController::CheckForCustomAttacks ( )
{
	static UFunction* pFnCheckForCustomAttacks = NULL;

	if ( ! pFnCheckForCustomAttacks )
		pFnCheckForCustomAttacks = (UFunction*) UObject::GObjObjects()->Data[ 83802 ];

	ADunDefSharkmanController_execCheckForCustomAttacks_Parms CheckForCustomAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomAttacks, &CheckForCustomAttacks_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkmanController.GetReachCheckDuration
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSharkmanController::GetReachCheckDuration ( )
{
	static UFunction* pFnGetReachCheckDuration = NULL;

	if ( ! pFnGetReachCheckDuration )
		pFnGetReachCheckDuration = (UFunction*) UObject::GObjObjects()->Data[ 83800 ];

	ADunDefSharkmanController_execGetReachCheckDuration_Parms GetReachCheckDuration_Parms;

	this->ProcessEvent ( pFnGetReachCheckDuration, &GetReachCheckDuration_Parms, NULL );

	return GetReachCheckDuration_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkmanController.DoPositionPoll
// [0x00020002] 
// Parameters infos:

void ADunDefSharkmanController::DoPositionPoll ( )
{
	static UFunction* pFnDoPositionPoll = NULL;

	if ( ! pFnDoPositionPoll )
		pFnDoPositionPoll = (UFunction*) UObject::GObjObjects()->Data[ 83799 ];

	ADunDefSharkmanController_execDoPositionPoll_Parms DoPositionPoll_Parms;

	this->ProcessEvent ( pFnDoPositionPoll, &DoPositionPoll_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkmanController.IsWinding
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefSharkmanController::IsWinding ( )
{
	static UFunction* pFnIsWinding = NULL;

	if ( ! pFnIsWinding )
		pFnIsWinding = (UFunction*) UObject::GObjObjects()->Data[ 83797 ];

	ADunDefSharkmanController_execIsWinding_Parms IsWinding_Parms;

	this->ProcessEvent ( pFnIsWinding, &IsWinding_Parms, NULL );

	return IsWinding_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkmanController.IsDistractedByCore
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefSharkmanController::IsDistractedByCore ( )
{
	static UFunction* pFnIsDistractedByCore = NULL;

	if ( ! pFnIsDistractedByCore )
		pFnIsDistractedByCore = (UFunction*) UObject::GObjObjects()->Data[ 83793 ];

	ADunDefSharkmanController_execIsDistractedByCore_Parms IsDistractedByCore_Parms;

	this->ProcessEvent ( pFnIsDistractedByCore, &IsDistractedByCore_Parms, NULL );

	return IsDistractedByCore_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToTowers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Radius                         ( CPF_Parm )

bool ADunDefSharkmanController::IsCloseToTowers ( float Radius )
{
	static UFunction* pFnIsCloseToTowers = NULL;

	if ( ! pFnIsCloseToTowers )
		pFnIsCloseToTowers = (UFunction*) UObject::GObjObjects()->Data[ 83788 ];

	ADunDefSharkmanController_execIsCloseToTowers_Parms IsCloseToTowers_Parms;
	IsCloseToTowers_Parms.Radius = Radius;

	this->ProcessEvent ( pFnIsCloseToTowers, &IsCloseToTowers_Parms, NULL );

	return IsCloseToTowers_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToPlayers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Radius                         ( CPF_Parm )

bool ADunDefSharkmanController::IsCloseToPlayers ( float Radius )
{
	static UFunction* pFnIsCloseToPlayers = NULL;

	if ( ! pFnIsCloseToPlayers )
		pFnIsCloseToPlayers = (UFunction*) UObject::GObjObjects()->Data[ 83783 ];

	ADunDefSharkmanController_execIsCloseToPlayers_Parms IsCloseToPlayers_Parms;
	IsCloseToPlayers_Parms.Radius = Radius;

	this->ProcessEvent ( pFnIsCloseToPlayers, &IsCloseToPlayers_Parms, NULL );

	return IsCloseToPlayers_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkmanController.AddToSwingHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  newEntry                       ( CPF_Parm )

bool ADunDefSharkmanController::AddToSwingHurtList ( class AActor* newEntry )
{
	static UFunction* pFnAddToSwingHurtList = NULL;

	if ( ! pFnAddToSwingHurtList )
		pFnAddToSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 83704 ];

	ADunDefSharkmanController_execAddToSwingHurtList_Parms AddToSwingHurtList_Parms;
	AddToSwingHurtList_Parms.newEntry = newEntry;

	this->ProcessEvent ( pFnAddToSwingHurtList, &AddToSwingHurtList_Parms, NULL );

	return AddToSwingHurtList_Parms.ReturnValue;
};

// Function DunDefAtlantis.DunDefSharkmanController.EndMeleeSwing
// [0x00020002] 
// Parameters infos:
// unsigned char                  fist                           ( CPF_Parm )

void ADunDefSharkmanController::EndMeleeSwing ( unsigned char fist )
{
	static UFunction* pFnEndMeleeSwing = NULL;

	if ( ! pFnEndMeleeSwing )
		pFnEndMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 83702 ];

	ADunDefSharkmanController_execEndMeleeSwing_Parms EndMeleeSwing_Parms;
	EndMeleeSwing_Parms.fist = fist;

	this->ProcessEvent ( pFnEndMeleeSwing, &EndMeleeSwing_Parms, NULL );
};

// Function DunDefAtlantis.DunDefSharkmanController.StartMeleeSwing
// [0x00020000] 
// Parameters infos:
// unsigned char                  fist                           ( CPF_Parm )

void ADunDefSharkmanController::StartMeleeSwing ( unsigned char fist )
{
	static UFunction* pFnStartMeleeSwing = NULL;

	if ( ! pFnStartMeleeSwing )
		pFnStartMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 83700 ];

	ADunDefSharkmanController_execStartMeleeSwing_Parms StartMeleeSwing_Parms;
	StartMeleeSwing_Parms.fist = fist;

	this->ProcessEvent ( pFnStartMeleeSwing, &StartMeleeSwing_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.ScaleColor
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool APuzzlePieceActor::ScaleColor ( float DeltaTime )
{
	static UFunction* pFnScaleColor = NULL;

	if ( ! pFnScaleColor )
		pFnScaleColor = (UFunction*) UObject::GObjObjects()->Data[ 84072 ];

	APuzzlePieceActor_execScaleColor_Parms ScaleColor_Parms;
	ScaleColor_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnScaleColor, &ScaleColor_Parms, NULL );

	return ScaleColor_Parms.ReturnValue;
};

// Function DunDefAtlantis.PuzzlePieceActor.TurnOnStartEmitter
// [0x00020102] 
// Parameters infos:

void APuzzlePieceActor::TurnOnStartEmitter ( )
{
	static UFunction* pFnTurnOnStartEmitter = NULL;

	if ( ! pFnTurnOnStartEmitter )
		pFnTurnOnStartEmitter = (UFunction*) UObject::GObjObjects()->Data[ 84071 ];

	APuzzlePieceActor_execTurnOnStartEmitter_Parms TurnOnStartEmitter_Parms;

	this->ProcessEvent ( pFnTurnOnStartEmitter, &TurnOnStartEmitter_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayDemoEmitter
// [0x00020102] 
// Parameters infos:

void APuzzlePieceActor::PlayDemoEmitter ( )
{
	static UFunction* pFnPlayDemoEmitter = NULL;

	if ( ! pFnPlayDemoEmitter )
		pFnPlayDemoEmitter = (UFunction*) UObject::GObjObjects()->Data[ 84070 ];

	APuzzlePieceActor_execPlayDemoEmitter_Parms PlayDemoEmitter_Parms;

	this->ProcessEvent ( pFnPlayDemoEmitter, &PlayDemoEmitter_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.ShutOffVFX
// [0x00020102] 
// Parameters infos:
// float                          lerpScale                      ( CPF_Parm )

void APuzzlePieceActor::ShutOffVFX ( float lerpScale )
{
	static UFunction* pFnShutOffVFX = NULL;

	if ( ! pFnShutOffVFX )
		pFnShutOffVFX = (UFunction*) UObject::GObjObjects()->Data[ 84068 ];

	APuzzlePieceActor_execShutOffVFX_Parms ShutOffVFX_Parms;
	ShutOffVFX_Parms.lerpScale = lerpScale;

	this->ProcessEvent ( pFnShutOffVFX, &ShutOffVFX_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.SetColorLerp
// [0x00020102] 
// Parameters infos:
// struct FLinearColor            NewColor                       ( CPF_Parm )
// unsigned long                  bShouldScaleBack               ( CPF_Parm )
// float                          lerpScale                      ( CPF_Parm )

void APuzzlePieceActor::SetColorLerp ( struct FLinearColor NewColor, unsigned long bShouldScaleBack, float lerpScale )
{
	static UFunction* pFnSetColorLerp = NULL;

	if ( ! pFnSetColorLerp )
		pFnSetColorLerp = (UFunction*) UObject::GObjObjects()->Data[ 84064 ];

	APuzzlePieceActor_execSetColorLerp_Parms SetColorLerp_Parms;
	memcpy ( &SetColorLerp_Parms.NewColor, &NewColor, 0x10 );
	SetColorLerp_Parms.bShouldScaleBack = bShouldScaleBack;
	SetColorLerp_Parms.lerpScale = lerpScale;

	this->ProcessEvent ( pFnSetColorLerp, &SetColorLerp_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayPuzzleCompletedVFX
// [0x00020102] 
// Parameters infos:

void APuzzlePieceActor::PlayPuzzleCompletedVFX ( )
{
	static UFunction* pFnPlayPuzzleCompletedVFX = NULL;

	if ( ! pFnPlayPuzzleCompletedVFX )
		pFnPlayPuzzleCompletedVFX = (UFunction*) UObject::GObjObjects()->Data[ 84063 ];

	APuzzlePieceActor_execPlayPuzzleCompletedVFX_Parms PlayPuzzleCompletedVFX_Parms;

	this->ProcessEvent ( pFnPlayPuzzleCompletedVFX, &PlayPuzzleCompletedVFX_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayFailedVFX
// [0x00020102] 
// Parameters infos:

void APuzzlePieceActor::PlayFailedVFX ( )
{
	static UFunction* pFnPlayFailedVFX = NULL;

	if ( ! pFnPlayFailedVFX )
		pFnPlayFailedVFX = (UFunction*) UObject::GObjObjects()->Data[ 84062 ];

	APuzzlePieceActor_execPlayFailedVFX_Parms PlayFailedVFX_Parms;

	this->ProcessEvent ( pFnPlayFailedVFX, &PlayFailedVFX_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.SetValidDeactivation
// [0x00020102] 
// Parameters infos:

void APuzzlePieceActor::SetValidDeactivation ( )
{
	static UFunction* pFnSetValidDeactivation = NULL;

	if ( ! pFnSetValidDeactivation )
		pFnSetValidDeactivation = (UFunction*) UObject::GObjObjects()->Data[ 84061 ];

	APuzzlePieceActor_execSetValidDeactivation_Parms SetValidDeactivation_Parms;

	this->ProcessEvent ( pFnSetValidDeactivation, &SetValidDeactivation_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.SetValidTouching
// [0x00020102] 
// Parameters infos:

void APuzzlePieceActor::SetValidTouching ( )
{
	static UFunction* pFnSetValidTouching = NULL;

	if ( ! pFnSetValidTouching )
		pFnSetValidTouching = (UFunction*) UObject::GObjObjects()->Data[ 84060 ];

	APuzzlePieceActor_execSetValidTouching_Parms SetValidTouching_Parms;

	this->ProcessEvent ( pFnSetValidTouching, &SetValidTouching_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.Bump
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitNormal                      ( CPF_Parm )

void APuzzlePieceActor::eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 84056 ];

	APuzzlePieceActor_eventBump_Parms Bump_Parms;
	Bump_Parms.Other = Other;
	Bump_Parms.OtherComp = OtherComp;
	memcpy ( &Bump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void APuzzlePieceActor::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 84051 ];

	APuzzlePieceActor_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.SetMyPuzzleRoom
// [0x00020002] 
// Parameters infos:
// class APuzzleRoomActor*        newPuzzleRoom                  ( CPF_Parm )

void APuzzlePieceActor::SetMyPuzzleRoom ( class APuzzleRoomActor* newPuzzleRoom )
{
	static UFunction* pFnSetMyPuzzleRoom = NULL;

	if ( ! pFnSetMyPuzzleRoom )
		pFnSetMyPuzzleRoom = (UFunction*) UObject::GObjObjects()->Data[ 84049 ];

	APuzzlePieceActor_execSetMyPuzzleRoom_Parms SetMyPuzzleRoom_Parms;
	SetMyPuzzleRoom_Parms.newPuzzleRoom = newPuzzleRoom;

	this->ProcessEvent ( pFnSetMyPuzzleRoom, &SetMyPuzzleRoom_Parms, NULL );
};

// Function DunDefAtlantis.PuzzlePieceActor.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APuzzlePieceActor::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84048 ];

	APuzzlePieceActor_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefAtlantis.RaisingWaterVolume.OnModifyProperty
// [0x00820102] 
// Parameters infos:
// class USeqAct_ModifyProperty*  Action                         ( CPF_Parm )

void ARaisingWaterVolume::OnModifyProperty ( class USeqAct_ModifyProperty* Action )
{
	static UFunction* pFnOnModifyProperty = NULL;

	if ( ! pFnOnModifyProperty )
		pFnOnModifyProperty = (UFunction*) UObject::GObjObjects()->Data[ 84262 ];

	ARaisingWaterVolume_execOnModifyProperty_Parms OnModifyProperty_Parms;
	OnModifyProperty_Parms.Action = Action;

	this->ProcessEvent ( pFnOnModifyProperty, &OnModifyProperty_Parms, NULL );
};

// Function DunDefAtlantis.RaisingWaterVolume.ClearPawnFXOverrides
// [0x00020102] 
// Parameters infos:
// class ADunDefPawn*             thePawn                        ( CPF_Parm )

void ARaisingWaterVolume::ClearPawnFXOverrides ( class ADunDefPawn* thePawn )
{
	static UFunction* pFnClearPawnFXOverrides = NULL;

	if ( ! pFnClearPawnFXOverrides )
		pFnClearPawnFXOverrides = (UFunction*) UObject::GObjObjects()->Data[ 84260 ];

	ARaisingWaterVolume_execClearPawnFXOverrides_Parms ClearPawnFXOverrides_Parms;
	ClearPawnFXOverrides_Parms.thePawn = thePawn;

	this->ProcessEvent ( pFnClearPawnFXOverrides, &ClearPawnFXOverrides_Parms, NULL );
};

// Function DunDefAtlantis.RaisingWaterVolume.SetPawnFXOverrides
// [0x00020102] 
// Parameters infos:
// class ADunDefPawn*             thePawn                        ( CPF_Parm )

void ARaisingWaterVolume::SetPawnFXOverrides ( class ADunDefPawn* thePawn )
{
	static UFunction* pFnSetPawnFXOverrides = NULL;

	if ( ! pFnSetPawnFXOverrides )
		pFnSetPawnFXOverrides = (UFunction*) UObject::GObjObjects()->Data[ 84258 ];

	ARaisingWaterVolume_execSetPawnFXOverrides_Parms SetPawnFXOverrides_Parms;
	SetPawnFXOverrides_Parms.thePawn = thePawn;

	this->ProcessEvent ( pFnSetPawnFXOverrides, &SetPawnFXOverrides_Parms, NULL );
};

// Function DunDefAtlantis.RaisingWaterVolume.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ARaisingWaterVolume::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84255 ];

	ARaisingWaterVolume_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefAtlantis.RaisingWaterVolume.ClearAirControl
// [0x00020002] 
// Parameters infos:

void ARaisingWaterVolume::ClearAirControl ( )
{
	static UFunction* pFnClearAirControl = NULL;

	if ( ! pFnClearAirControl )
		pFnClearAirControl = (UFunction*) UObject::GObjObjects()->Data[ 84253 ];

	ARaisingWaterVolume_execClearAirControl_Parms ClearAirControl_Parms;

	this->ProcessEvent ( pFnClearAirControl, &ClearAirControl_Parms, NULL );
};

// Function DunDefAtlantis.RaisingWaterVolume.UnTouch
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ARaisingWaterVolume::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 84249 ];

	ARaisingWaterVolume_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function DunDefAtlantis.RaisingWaterVolume.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ARaisingWaterVolume::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 84243 ];

	ARaisingWaterVolume_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefAtlantis.RaisingWaterVolume.ExecReplicatedFunction
// [0x00024102] 
// Parameters infos:
// struct FName                   FunctionName                   ( CPF_Parm )
// struct FName                   nameParam1                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   nameParam2                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam1                    ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  actorParam2                    ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vecParam1                      ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                rotParam1                      ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam1                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam2                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam3                    ( CPF_OptionalParm | CPF_Parm )
// float                          floatParam4                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam1                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam2                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  boolParam3                     ( CPF_OptionalParm | CPF_Parm )
// struct FString                 stringParam1                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 objectParam1                   ( CPF_OptionalParm | CPF_Parm )

void ARaisingWaterVolume::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84226 ];

	ARaisingWaterVolume_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
	memcpy ( &ExecReplicatedFunction_Parms.FunctionName, &FunctionName, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam1, &nameParam1, 0x8 );
	memcpy ( &ExecReplicatedFunction_Parms.nameParam2, &nameParam2, 0x8 );
	ExecReplicatedFunction_Parms.actorParam1 = actorParam1;
	ExecReplicatedFunction_Parms.actorParam2 = actorParam2;
	memcpy ( &ExecReplicatedFunction_Parms.vecParam1, &vecParam1, 0xC );
	memcpy ( &ExecReplicatedFunction_Parms.rotParam1, &rotParam1, 0xC );
	ExecReplicatedFunction_Parms.floatParam1 = floatParam1;
	ExecReplicatedFunction_Parms.floatParam2 = floatParam2;
	ExecReplicatedFunction_Parms.floatParam3 = floatParam3;
	ExecReplicatedFunction_Parms.floatParam4 = floatParam4;
	ExecReplicatedFunction_Parms.boolParam1 = boolParam1;
	ExecReplicatedFunction_Parms.boolParam2 = boolParam2;
	ExecReplicatedFunction_Parms.boolParam3 = boolParam3;
	memcpy ( &ExecReplicatedFunction_Parms.stringParam1, &stringParam1, 0xC );
	ExecReplicatedFunction_Parms.objectParam1 = objectParam1;

	this->ProcessEvent ( pFnExecReplicatedFunction, &ExecReplicatedFunction_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif