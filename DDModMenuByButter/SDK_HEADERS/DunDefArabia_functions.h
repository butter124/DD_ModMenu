/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefArabia_functions.h
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

// Function DunDefArabia.GenieLamp.PlayActivateAnim
// [0x00820102] 
// Parameters infos:

void AGenieLamp::PlayActivateAnim ( )
{
	static UFunction* pFnPlayActivateAnim = NULL;

	if ( ! pFnPlayActivateAnim )
		pFnPlayActivateAnim = (UFunction*) UObject::GObjObjects()->Data[ 81674 ];

	AGenieLamp_execPlayActivateAnim_Parms PlayActivateAnim_Parms;

	this->ProcessEvent ( pFnPlayActivateAnim, &PlayActivateAnim_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.ShutDownEffects
// [0x00020102] 
// Parameters infos:

void AGenieLamp::ShutDownEffects ( )
{
	static UFunction* pFnShutDownEffects = NULL;

	if ( ! pFnShutDownEffects )
		pFnShutDownEffects = (UFunction*) UObject::GObjObjects()->Data[ 81673 ];

	AGenieLamp_execShutDownEffects_Parms ShutDownEffects_Parms;

	this->ProcessEvent ( pFnShutDownEffects, &ShutDownEffects_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.StartActiveEffects
// [0x00020102] 
// Parameters infos:

void AGenieLamp::StartActiveEffects ( )
{
	static UFunction* pFnStartActiveEffects = NULL;

	if ( ! pFnStartActiveEffects )
		pFnStartActiveEffects = (UFunction*) UObject::GObjObjects()->Data[ 81672 ];

	AGenieLamp_execStartActiveEffects_Parms StartActiveEffects_Parms;

	this->ProcessEvent ( pFnStartActiveEffects, &StartActiveEffects_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.DoActivation
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void AGenieLamp::DoActivation ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnDoActivation = NULL;

	if ( ! pFnDoActivation )
		pFnDoActivation = (UFunction*) UObject::GObjObjects()->Data[ 81670 ];

	AGenieLamp_execDoActivation_Parms DoActivation_Parms;
	DoActivation_Parms.PC = PC;

	this->ProcessEvent ( pFnDoActivation, &DoActivation_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.RemoveCurrentGenieFromLamp
// [0x00020002] 
// Parameters infos:

void AGenieLamp::RemoveCurrentGenieFromLamp ( )
{
	static UFunction* pFnRemoveCurrentGenieFromLamp = NULL;

	if ( ! pFnRemoveCurrentGenieFromLamp )
		pFnRemoveCurrentGenieFromLamp = (UFunction*) UObject::GObjObjects()->Data[ 81669 ];

	AGenieLamp_execRemoveCurrentGenieFromLamp_Parms RemoveCurrentGenieFromLamp_Parms;

	this->ProcessEvent ( pFnRemoveCurrentGenieFromLamp, &RemoveCurrentGenieFromLamp_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.GiveLampAGenie
// [0x00020002] 
// Parameters infos:
// class AController*             newGenie                       ( CPF_Parm )

void AGenieLamp::GiveLampAGenie ( class AController* newGenie )
{
	static UFunction* pFnGiveLampAGenie = NULL;

	if ( ! pFnGiveLampAGenie )
		pFnGiveLampAGenie = (UFunction*) UObject::GObjObjects()->Data[ 81667 ];

	AGenieLamp_execGiveLampAGenie_Parms GiveLampAGenie_Parms;
	GiveLampAGenie_Parms.newGenie = newGenie;

	this->ProcessEvent ( pFnGiveLampAGenie, &GiveLampAGenie_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.GetToolTipPriority
// [0x00020100] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGenieLamp::GetToolTipPriority ( )
{
	static UFunction* pFnGetToolTipPriority = NULL;

	if ( ! pFnGetToolTipPriority )
		pFnGetToolTipPriority = (UFunction*) UObject::GObjObjects()->Data[ 81665 ];

	AGenieLamp_execGetToolTipPriority_Parms GetToolTipPriority_Parms;

	this->ProcessEvent ( pFnGetToolTipPriority, &GetToolTipPriority_Parms, NULL );

	return GetToolTipPriority_Parms.ReturnValue;
};

// Function DunDefArabia.GenieLamp.TakesToolTipPriority
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefToolTipInterface* otherToolTip                   ( CPF_Parm )

bool AGenieLamp::TakesToolTipPriority ( class UDunDefToolTipInterface* otherToolTip )
{
	static UFunction* pFnTakesToolTipPriority = NULL;

	if ( ! pFnTakesToolTipPriority )
		pFnTakesToolTipPriority = (UFunction*) UObject::GObjObjects()->Data[ 81662 ];

	AGenieLamp_execTakesToolTipPriority_Parms TakesToolTipPriority_Parms;
	TakesToolTipPriority_Parms.otherToolTip = otherToolTip;

	this->ProcessEvent ( pFnTakesToolTipPriority, &TakesToolTipPriority_Parms, NULL );

	return TakesToolTipPriority_Parms.ReturnValue;
};

// Function DunDefArabia.GenieLamp.ContinueDrawingToolTip
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  ContinueDrawing                ( CPF_Parm )

bool AGenieLamp::ContinueDrawingToolTip ( unsigned long ContinueDrawing )
{
	static UFunction* pFnContinueDrawingToolTip = NULL;

	if ( ! pFnContinueDrawingToolTip )
		pFnContinueDrawingToolTip = (UFunction*) UObject::GObjObjects()->Data[ 81659 ];

	AGenieLamp_execContinueDrawingToolTip_Parms ContinueDrawingToolTip_Parms;
	ContinueDrawingToolTip_Parms.ContinueDrawing = ContinueDrawing;

	this->ProcessEvent ( pFnContinueDrawingToolTip, &ContinueDrawingToolTip_Parms, NULL );

	return ContinueDrawingToolTip_Parms.ReturnValue;
};

// Function DunDefArabia.GenieLamp.DrawToolTip
// [0x00824102] 
// Parameters infos:
// class UCanvas*                 C                              ( CPF_Parm )
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// class ULocalPlayer*            ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

void AGenieLamp::DrawToolTip ( class UCanvas* C, int PosX, int PosY, class ULocalPlayer* ForPlayer )
{
	static UFunction* pFnDrawToolTip = NULL;

	if ( ! pFnDrawToolTip )
		pFnDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 81652 ];

	AGenieLamp_execDrawToolTip_Parms DrawToolTip_Parms;
	DrawToolTip_Parms.C = C;
	DrawToolTip_Parms.PosX = PosX;
	DrawToolTip_Parms.PosY = PosY;
	DrawToolTip_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDrawToolTip, &DrawToolTip_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.GetActivationOffset
// [0x00020100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGenieLamp::GetActivationOffset ( )
{
	static UFunction* pFnGetActivationOffset = NULL;

	if ( ! pFnGetActivationOffset )
		pFnGetActivationOffset = (UFunction*) UObject::GObjObjects()->Data[ 81650 ];

	AGenieLamp_execGetActivationOffset_Parms GetActivationOffset_Parms;

	this->ProcessEvent ( pFnGetActivationOffset, &GetActivationOffset_Parms, NULL );

	return GetActivationOffset_Parms.ReturnValue;
};

// Function DunDefArabia.GenieLamp.GetActivationWeighting
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGenieLamp::GetActivationWeighting ( )
{
	static UFunction* pFnGetActivationWeighting = NULL;

	if ( ! pFnGetActivationWeighting )
		pFnGetActivationWeighting = (UFunction*) UObject::GObjObjects()->Data[ 81648 ];

	AGenieLamp_execGetActivationWeighting_Parms GetActivationWeighting_Parms;

	this->ProcessEvent ( pFnGetActivationWeighting, &GetActivationWeighting_Parms, NULL );

	return GetActivationWeighting_Parms.ReturnValue;
};

// Function DunDefArabia.GenieLamp.Client_Activate
// [0x00024100] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void AGenieLamp::Client_Activate ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnClient_Activate = NULL;

	if ( ! pFnClient_Activate )
		pFnClient_Activate = (UFunction*) UObject::GObjObjects()->Data[ 81645 ];

	AGenieLamp_execClient_Activate_Parms Client_Activate_Parms;
	Client_Activate_Parms.PC = PC;
	Client_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnClient_Activate, &Client_Activate_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.Server_Activate
// [0x00024002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// unsigned long                  forceActivation                ( CPF_OptionalParm | CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

void AGenieLamp::Server_Activate ( class ADunDefPlayerController* PC, unsigned long forceActivation, int activationType )
{
	static UFunction* pFnServer_Activate = NULL;

	if ( ! pFnServer_Activate )
		pFnServer_Activate = (UFunction*) UObject::GObjObjects()->Data[ 81641 ];

	AGenieLamp_execServer_Activate_Parms Server_Activate_Parms;
	Server_Activate_Parms.PC = PC;
	Server_Activate_Parms.forceActivation = forceActivation;
	Server_Activate_Parms.activationType = activationType;

	this->ProcessEvent ( pFnServer_Activate, &Server_Activate_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.AllowActivation
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* PC                             ( CPF_Parm )
// int                            activationType                 ( CPF_OptionalParm | CPF_Parm )

int AGenieLamp::AllowActivation ( class ADunDefPlayerController* PC, int activationType )
{
	static UFunction* pFnAllowActivation = NULL;

	if ( ! pFnAllowActivation )
		pFnAllowActivation = (UFunction*) UObject::GObjObjects()->Data[ 81636 ];

	AGenieLamp_execAllowActivation_Parms AllowActivation_Parms;
	AllowActivation_Parms.PC = PC;
	AllowActivation_Parms.activationType = activationType;

	this->ProcessEvent ( pFnAllowActivation, &AllowActivation_Parms, NULL );

	return AllowActivation_Parms.ReturnValue;
};

// Function DunDefArabia.GenieLamp.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGenieLamp::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 81635 ];

	AGenieLamp_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefArabia.GenieLamp.ExecReplicatedFunction
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

void AGenieLamp::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 81618 ];

	AGenieLamp_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefArabia.DunDefGenieBossController.NotifyDjinnDeath
// [0x00020002] 
// Parameters infos:
// class ADunDefDjinn*            deadDjinn                      ( CPF_Parm )

void ADunDefGenieBossController::NotifyDjinnDeath ( class ADunDefDjinn* deadDjinn )
{
	static UFunction* pFnNotifyDjinnDeath = NULL;

	if ( ! pFnNotifyDjinnDeath )
		pFnNotifyDjinnDeath = (UFunction*) UObject::GObjObjects()->Data[ 82913 ];

	ADunDefGenieBossController_execNotifyDjinnDeath_Parms NotifyDjinnDeath_Parms;
	NotifyDjinnDeath_Parms.deadDjinn = deadDjinn;

	this->ProcessEvent ( pFnNotifyDjinnDeath, &NotifyDjinnDeath_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.SpawnDjinn
// [0x00820002] 
// Parameters infos:

void ADunDefGenieBossController::SpawnDjinn ( )
{
	static UFunction* pFnSpawnDjinn = NULL;

	if ( ! pFnSpawnDjinn )
		pFnSpawnDjinn = (UFunction*) UObject::GObjObjects()->Data[ 82907 ];

	ADunDefGenieBossController_execSpawnDjinn_Parms SpawnDjinn_Parms;

	this->ProcessEvent ( pFnSpawnDjinn, &SpawnDjinn_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.KeepSpawningBabies
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGenieBossController::KeepSpawningBabies ( )
{
	static UFunction* pFnKeepSpawningBabies = NULL;

	if ( ! pFnKeepSpawningBabies )
		pFnKeepSpawningBabies = (UFunction*) UObject::GObjObjects()->Data[ 82905 ];

	ADunDefGenieBossController_execKeepSpawningBabies_Parms KeepSpawningBabies_Parms;

	this->ProcessEvent ( pFnKeepSpawningBabies, &KeepSpawningBabies_Parms, NULL );

	return KeepSpawningBabies_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.ClearHitList
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::ClearHitList ( )
{
	static UFunction* pFnClearHitList = NULL;

	if ( ! pFnClearHitList )
		pFnClearHitList = (UFunction*) UObject::GObjObjects()->Data[ 82886 ];

	ADunDefGenieBossController_execClearHitList_Parms ClearHitList_Parms;

	this->ProcessEvent ( pFnClearHitList, &ClearHitList_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.SetTongueSwing
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::SetTongueSwing ( )
{
	static UFunction* pFnSetTongueSwing = NULL;

	if ( ! pFnSetTongueSwing )
		pFnSetTongueSwing = (UFunction*) UObject::GObjObjects()->Data[ 82884 ];

	ADunDefGenieBossController_execSetTongueSwing_Parms SetTongueSwing_Parms;

	this->ProcessEvent ( pFnSetTongueSwing, &SetTongueSwing_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.AddToSwingHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  newEntry                       ( CPF_Parm )

bool ADunDefGenieBossController::AddToSwingHurtList ( class AActor* newEntry )
{
	static UFunction* pFnAddToSwingHurtList = NULL;

	if ( ! pFnAddToSwingHurtList )
		pFnAddToSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 82871 ];

	ADunDefGenieBossController_execAddToSwingHurtList_Parms AddToSwingHurtList_Parms;
	AddToSwingHurtList_Parms.newEntry = newEntry;

	this->ProcessEvent ( pFnAddToSwingHurtList, &AddToSwingHurtList_Parms, NULL );

	return AddToSwingHurtList_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.ShouldDamage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  act                            ( CPF_Parm )

bool ADunDefGenieBossController::ShouldDamage ( class AActor* act )
{
	static UFunction* pFnShouldDamage = NULL;

	if ( ! pFnShouldDamage )
		pFnShouldDamage = (UFunction*) UObject::GObjObjects()->Data[ 82868 ];

	ADunDefGenieBossController_execShouldDamage_Parms ShouldDamage_Parms;
	ShouldDamage_Parms.act = act;

	this->ProcessEvent ( pFnShouldDamage, &ShouldDamage_Parms, NULL );

	return ShouldDamage_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.CheckForBurp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGenieBossController::CheckForBurp ( )
{
	static UFunction* pFnCheckForBurp = NULL;

	if ( ! pFnCheckForBurp )
		pFnCheckForBurp = (UFunction*) UObject::GObjObjects()->Data[ 82865 ];

	ADunDefGenieBossController_execCheckForBurp_Parms CheckForBurp_Parms;

	this->ProcessEvent ( pFnCheckForBurp, &CheckForBurp_Parms, NULL );

	return CheckForBurp_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.CheckForMelee
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGenieBossController::CheckForMelee ( )
{
	static UFunction* pFnCheckForMelee = NULL;

	if ( ! pFnCheckForMelee )
		pFnCheckForMelee = (UFunction*) UObject::GObjObjects()->Data[ 82860 ];

	ADunDefGenieBossController_execCheckForMelee_Parms CheckForMelee_Parms;

	this->ProcessEvent ( pFnCheckForMelee, &CheckForMelee_Parms, NULL );

	return CheckForMelee_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.CheckForSuperTongue
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGenieBossController::CheckForSuperTongue ( )
{
	static UFunction* pFnCheckForSuperTongue = NULL;

	if ( ! pFnCheckForSuperTongue )
		pFnCheckForSuperTongue = (UFunction*) UObject::GObjObjects()->Data[ 82857 ];

	ADunDefGenieBossController_execCheckForSuperTongue_Parms CheckForSuperTongue_Parms;

	this->ProcessEvent ( pFnCheckForSuperTongue, &CheckForSuperTongue_Parms, NULL );

	return CheckForSuperTongue_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.BiteStop
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::BiteStop ( )
{
	static UFunction* pFnBiteStop = NULL;

	if ( ! pFnBiteStop )
		pFnBiteStop = (UFunction*) UObject::GObjObjects()->Data[ 82856 ];

	ADunDefGenieBossController_execBiteStop_Parms BiteStop_Parms;

	this->ProcessEvent ( pFnBiteStop, &BiteStop_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.BiteStart
// [0x00020000] 
// Parameters infos:

void ADunDefGenieBossController::BiteStart ( )
{
	static UFunction* pFnBiteStart = NULL;

	if ( ! pFnBiteStart )
		pFnBiteStart = (UFunction*) UObject::GObjObjects()->Data[ 82855 ];

	ADunDefGenieBossController_execBiteStart_Parms BiteStart_Parms;

	this->ProcessEvent ( pFnBiteStart, &BiteStart_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.DoBurp
// [0x00820002] 
// Parameters infos:

void ADunDefGenieBossController::DoBurp ( )
{
	static UFunction* pFnDoBurp = NULL;

	if ( ! pFnDoBurp )
		pFnDoBurp = (UFunction*) UObject::GObjObjects()->Data[ 82843 ];

	ADunDefGenieBossController_execDoBurp_Parms DoBurp_Parms;

	this->ProcessEvent ( pFnDoBurp, &DoBurp_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.CheckForCustomAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::CheckForCustomAttacks ( )
{
	static UFunction* pFnCheckForCustomAttacks = NULL;

	if ( ! pFnCheckForCustomAttacks )
		pFnCheckForCustomAttacks = (UFunction*) UObject::GObjObjects()->Data[ 82839 ];

	ADunDefGenieBossController_execCheckForCustomAttacks_Parms CheckForCustomAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomAttacks, &CheckForCustomAttacks_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.GetCDMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGenieBossController::GetCDMultiplier ( )
{
	static UFunction* pFnGetCDMultiplier = NULL;

	if ( ! pFnGetCDMultiplier )
		pFnGetCDMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 82837 ];

	ADunDefGenieBossController_execGetCDMultiplier_Parms GetCDMultiplier_Parms;

	this->ProcessEvent ( pFnGetCDMultiplier, &GetCDMultiplier_Parms, NULL );

	return GetCDMultiplier_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.CheckPlayerCloseness
// [0x00020000] 
// Parameters infos:

void ADunDefGenieBossController::CheckPlayerCloseness ( )
{
	static UFunction* pFnCheckPlayerCloseness = NULL;

	if ( ! pFnCheckPlayerCloseness )
		pFnCheckPlayerCloseness = (UFunction*) UObject::GObjObjects()->Data[ 82836 ];

	ADunDefGenieBossController_execCheckPlayerCloseness_Parms CheckPlayerCloseness_Parms;

	this->ProcessEvent ( pFnCheckPlayerCloseness, &CheckPlayerCloseness_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.PickLamp
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::PickLamp ( )
{
	static UFunction* pFnPickLamp = NULL;

	if ( ! pFnPickLamp )
		pFnPickLamp = (UFunction*) UObject::GObjObjects()->Data[ 82832 ];

	ADunDefGenieBossController_execPickLamp_Parms PickLamp_Parms;

	this->ProcessEvent ( pFnPickLamp, &PickLamp_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.NotifyLampRubbed
// [0x00020002] 
// Parameters infos:
// class AActor*                  newSpawnPoint                  ( CPF_Parm )

void ADunDefGenieBossController::NotifyLampRubbed ( class AActor* newSpawnPoint )
{
	static UFunction* pFnNotifyLampRubbed = NULL;

	if ( ! pFnNotifyLampRubbed )
		pFnNotifyLampRubbed = (UFunction*) UObject::GObjObjects()->Data[ 82830 ];

	ADunDefGenieBossController_execNotifyLampRubbed_Parms NotifyLampRubbed_Parms;
	NotifyLampRubbed_Parms.newSpawnPoint = newSpawnPoint;

	this->ProcessEvent ( pFnNotifyLampRubbed, &NotifyLampRubbed_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.NotifyReformed
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::NotifyReformed ( )
{
	static UFunction* pFnNotifyReformed = NULL;

	if ( ! pFnNotifyReformed )
		pFnNotifyReformed = (UFunction*) UObject::GObjObjects()->Data[ 82829 ];

	ADunDefGenieBossController_execNotifyReformed_Parms NotifyReformed_Parms;

	this->ProcessEvent ( pFnNotifyReformed, &NotifyReformed_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.LeaveLamp
// [0x00020000] 
// Parameters infos:

void ADunDefGenieBossController::LeaveLamp ( )
{
	static UFunction* pFnLeaveLamp = NULL;

	if ( ! pFnLeaveLamp )
		pFnLeaveLamp = (UFunction*) UObject::GObjObjects()->Data[ 82807 ];

	ADunDefGenieBossController_execLeaveLamp_Parms LeaveLamp_Parms;

	this->ProcessEvent ( pFnLeaveLamp, &LeaveLamp_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.CheckActiveDamage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGenieBossController::CheckActiveDamage ( )
{
	static UFunction* pFnCheckActiveDamage = NULL;

	if ( ! pFnCheckActiveDamage )
		pFnCheckActiveDamage = (UFunction*) UObject::GObjObjects()->Data[ 82803 ];

	ADunDefGenieBossController_execCheckActiveDamage_Parms CheckActiveDamage_Parms;

	this->ProcessEvent ( pFnCheckActiveDamage, &CheckActiveDamage_Parms, NULL );

	return CheckActiveDamage_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.FindTargetRightEye
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bSetTarget                     ( CPF_OptionalParm | CPF_Parm )

bool ADunDefGenieBossController::FindTargetRightEye ( unsigned long bSetTarget )
{
	static UFunction* pFnFindTargetRightEye = NULL;

	if ( ! pFnFindTargetRightEye )
		pFnFindTargetRightEye = (UFunction*) UObject::GObjObjects()->Data[ 82499 ];

	ADunDefGenieBossController_execFindTargetRightEye_Parms FindTargetRightEye_Parms;
	FindTargetRightEye_Parms.bSetTarget = bSetTarget;

	this->ProcessEvent ( pFnFindTargetRightEye, &FindTargetRightEye_Parms, NULL );

	return FindTargetRightEye_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.FindTargetLeftEye
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bSetTarget                     ( CPF_OptionalParm | CPF_Parm )

bool ADunDefGenieBossController::FindTargetLeftEye ( unsigned long bSetTarget )
{
	static UFunction* pFnFindTargetLeftEye = NULL;

	if ( ! pFnFindTargetLeftEye )
		pFnFindTargetLeftEye = (UFunction*) UObject::GObjObjects()->Data[ 82487 ];

	ADunDefGenieBossController_execFindTargetLeftEye_Parms FindTargetLeftEye_Parms;
	FindTargetLeftEye_Parms.bSetTarget = bSetTarget;

	this->ProcessEvent ( pFnFindTargetLeftEye, &FindTargetLeftEye_Parms, NULL );

	return FindTargetLeftEye_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.TraceRightEye
// [0x00820002] 
// Parameters infos:
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// class UClass*                  currentEyeDmgType              ( CPF_Parm )

void ADunDefGenieBossController::TraceRightEye ( struct FVector beamStartLoc, struct FVector BeamEndLoc, class UClass* currentEyeDmgType )
{
	static UFunction* pFnTraceRightEye = NULL;

	if ( ! pFnTraceRightEye )
		pFnTraceRightEye = (UFunction*) UObject::GObjObjects()->Data[ 82781 ];

	ADunDefGenieBossController_execTraceRightEye_Parms TraceRightEye_Parms;
	memcpy ( &TraceRightEye_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &TraceRightEye_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	TraceRightEye_Parms.currentEyeDmgType = currentEyeDmgType;

	this->ProcessEvent ( pFnTraceRightEye, &TraceRightEye_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.TraceLeftEye
// [0x00820002] 
// Parameters infos:
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// class UClass*                  currentEyeDmgType              ( CPF_Parm )

void ADunDefGenieBossController::TraceLeftEye ( struct FVector beamStartLoc, struct FVector BeamEndLoc, class UClass* currentEyeDmgType )
{
	static UFunction* pFnTraceLeftEye = NULL;

	if ( ! pFnTraceLeftEye )
		pFnTraceLeftEye = (UFunction*) UObject::GObjObjects()->Data[ 82771 ];

	ADunDefGenieBossController_execTraceLeftEye_Parms TraceLeftEye_Parms;
	memcpy ( &TraceLeftEye_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &TraceLeftEye_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	TraceLeftEye_Parms.currentEyeDmgType = currentEyeDmgType;

	this->ProcessEvent ( pFnTraceLeftEye, &TraceLeftEye_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.ShutDownEyes
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::ShutDownEyes ( )
{
	static UFunction* pFnShutDownEyes = NULL;

	if ( ! pFnShutDownEyes )
		pFnShutDownEyes = (UFunction*) UObject::GObjObjects()->Data[ 82770 ];

	ADunDefGenieBossController_execShutDownEyes_Parms ShutDownEyes_Parms;

	this->ProcessEvent ( pFnShutDownEyes, &ShutDownEyes_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.StopEyeTracking
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::StopEyeTracking ( )
{
	static UFunction* pFnStopEyeTracking = NULL;

	if ( ! pFnStopEyeTracking )
		pFnStopEyeTracking = (UFunction*) UObject::GObjObjects()->Data[ 82769 ];

	ADunDefGenieBossController_execStopEyeTracking_Parms StopEyeTracking_Parms;

	this->ProcessEvent ( pFnStopEyeTracking, &StopEyeTracking_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.GoToLamp
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::GoToLamp ( )
{
	static UFunction* pFnGoToLamp = NULL;

	if ( ! pFnGoToLamp )
		pFnGoToLamp = (UFunction*) UObject::GObjObjects()->Data[ 82754 ];

	ADunDefGenieBossController_execGoToLamp_Parms GoToLamp_Parms;

	this->ProcessEvent ( pFnGoToLamp, &GoToLamp_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.SetRageMode
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBossController::SetRageMode ( )
{
	static UFunction* pFnSetRageMode = NULL;

	if ( ! pFnSetRageMode )
		pFnSetRageMode = (UFunction*) UObject::GObjObjects()->Data[ 82753 ];

	ADunDefGenieBossController_execSetRageMode_Parms SetRageMode_Parms;

	this->ProcessEvent ( pFnSetRageMode, &SetRageMode_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefGenieBossController::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 82746 ];

	ADunDefGenieBossController_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.WantsHurtAnimation
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGenieBossController::WantsHurtAnimation ( )
{
	static UFunction* pFnWantsHurtAnimation = NULL;

	if ( ! pFnWantsHurtAnimation )
		pFnWantsHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 82744 ];

	ADunDefGenieBossController_execWantsHurtAnimation_Parms WantsHurtAnimation_Parms;

	this->ProcessEvent ( pFnWantsHurtAnimation, &WantsHurtAnimation_Parms, NULL );

	return WantsHurtAnimation_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.ForceIntoLamp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGenieBossController::ForceIntoLamp ( )
{
	static UFunction* pFnForceIntoLamp = NULL;

	if ( ! pFnForceIntoLamp )
		pFnForceIntoLamp = (UFunction*) UObject::GObjObjects()->Data[ 82741 ];

	ADunDefGenieBossController_execForceIntoLamp_Parms ForceIntoLamp_Parms;

	this->ProcessEvent ( pFnForceIntoLamp, &ForceIntoLamp_Parms, NULL );

	return ForceIntoLamp_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBossController.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBossController::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 82740 ];

	ADunDefGenieBossController_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBossController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBossController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 82738 ];

	ADunDefGenieBossController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefArabia.DjinnLamp.PlayKillAnim
// [0x00820102] 
// Parameters infos:

void ADjinnLamp::PlayKillAnim ( )
{
	static UFunction* pFnPlayKillAnim = NULL;

	if ( ! pFnPlayKillAnim )
		pFnPlayKillAnim = (UFunction*) UObject::GObjObjects()->Data[ 81709 ];

	ADjinnLamp_execPlayKillAnim_Parms PlayKillAnim_Parms;

	this->ProcessEvent ( pFnPlayKillAnim, &PlayKillAnim_Parms, NULL );
};

// Function DunDefArabia.DjinnLamp.DoActivation
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* PC                             ( CPF_Parm )

void ADjinnLamp::DoActivation ( class ADunDefPlayerController* PC )
{
	static UFunction* pFnDoActivation = NULL;

	if ( ! pFnDoActivation )
		pFnDoActivation = (UFunction*) UObject::GObjObjects()->Data[ 81707 ];

	ADjinnLamp_execDoActivation_Parms DoActivation_Parms;
	DoActivation_Parms.PC = PC;

	this->ProcessEvent ( pFnDoActivation, &DoActivation_Parms, NULL );
};

// Function DunDefArabia.DjinnLamp.RemoveCurrentGenieFromLamp
// [0x00020002] 
// Parameters infos:

void ADjinnLamp::RemoveCurrentGenieFromLamp ( )
{
	static UFunction* pFnRemoveCurrentGenieFromLamp = NULL;

	if ( ! pFnRemoveCurrentGenieFromLamp )
		pFnRemoveCurrentGenieFromLamp = (UFunction*) UObject::GObjObjects()->Data[ 81706 ];

	ADjinnLamp_execRemoveCurrentGenieFromLamp_Parms RemoveCurrentGenieFromLamp_Parms;

	this->ProcessEvent ( pFnRemoveCurrentGenieFromLamp, &RemoveCurrentGenieFromLamp_Parms, NULL );
};

// Function DunDefArabia.DjinnLamp.GiveLampAGenie
// [0x00020002] 
// Parameters infos:
// class AController*             newGenie                       ( CPF_Parm )

void ADjinnLamp::GiveLampAGenie ( class AController* newGenie )
{
	static UFunction* pFnGiveLampAGenie = NULL;

	if ( ! pFnGiveLampAGenie )
		pFnGiveLampAGenie = (UFunction*) UObject::GObjObjects()->Data[ 81704 ];

	ADjinnLamp_execGiveLampAGenie_Parms GiveLampAGenie_Parms;
	GiveLampAGenie_Parms.newGenie = newGenie;

	this->ProcessEvent ( pFnGiveLampAGenie, &GiveLampAGenie_Parms, NULL );
};

// Function DunDefArabia.DjinnLamp.ExecReplicatedFunction
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

void ADjinnLamp::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 81687 ];

	ADjinnLamp_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefArabia.DunDefDjinnController.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefDjinnController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 82329 ];

	ADunDefDjinnController_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.DoAllyDjinnTimeOut
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::DoAllyDjinnTimeOut ( )
{
	static UFunction* pFnDoAllyDjinnTimeOut = NULL;

	if ( ! pFnDoAllyDjinnTimeOut )
		pFnDoAllyDjinnTimeOut = (UFunction*) UObject::GObjObjects()->Data[ 82328 ];

	ADunDefDjinnController_execDoAllyDjinnTimeOut_Parms DoAllyDjinnTimeOut_Parms;

	this->ProcessEvent ( pFnDoAllyDjinnTimeOut, &DoAllyDjinnTimeOut_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.NotifyLampRubbed
// [0x00020002] 
// Parameters infos:
// class AActor*                  SpawnPoint                     ( CPF_Parm )
// class ADunDefPlayerController* RubbedController               ( CPF_Parm )

void ADunDefDjinnController::NotifyLampRubbed ( class AActor* SpawnPoint, class ADunDefPlayerController* RubbedController )
{
	static UFunction* pFnNotifyLampRubbed = NULL;

	if ( ! pFnNotifyLampRubbed )
		pFnNotifyLampRubbed = (UFunction*) UObject::GObjObjects()->Data[ 82325 ];

	ADunDefDjinnController_execNotifyLampRubbed_Parms NotifyLampRubbed_Parms;
	NotifyLampRubbed_Parms.SpawnPoint = SpawnPoint;
	NotifyLampRubbed_Parms.RubbedController = RubbedController;

	this->ProcessEvent ( pFnNotifyLampRubbed, &NotifyLampRubbed_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.PickLamp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDjinnController::PickLamp ( )
{
	static UFunction* pFnPickLamp = NULL;

	if ( ! pFnPickLamp )
		pFnPickLamp = (UFunction*) UObject::GObjObjects()->Data[ 82321 ];

	ADunDefDjinnController_execPickLamp_Parms PickLamp_Parms;

	this->ProcessEvent ( pFnPickLamp, &PickLamp_Parms, NULL );

	return PickLamp_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.AllowDeath
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDjinnController::AllowDeath ( )
{
	static UFunction* pFnAllowDeath = NULL;

	if ( ! pFnAllowDeath )
		pFnAllowDeath = (UFunction*) UObject::GObjObjects()->Data[ 81868 ];

	ADunDefDjinnController_execAllowDeath_Parms AllowDeath_Parms;

	this->ProcessEvent ( pFnAllowDeath, &AllowDeath_Parms, NULL );

	return AllowDeath_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.NotifyFinishedReforming
// [0x00020000] 
// Parameters infos:

void ADunDefDjinnController::NotifyFinishedReforming ( )
{
	static UFunction* pFnNotifyFinishedReforming = NULL;

	if ( ! pFnNotifyFinishedReforming )
		pFnNotifyFinishedReforming = (UFunction*) UObject::GObjObjects()->Data[ 82320 ];

	ADunDefDjinnController_execNotifyFinishedReforming_Parms NotifyFinishedReforming_Parms;

	this->ProcessEvent ( pFnNotifyFinishedReforming, &NotifyFinishedReforming_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.LeaveLamp
// [0x00020000] 
// Parameters infos:

void ADunDefDjinnController::LeaveLamp ( )
{
	static UFunction* pFnLeaveLamp = NULL;

	if ( ! pFnLeaveLamp )
		pFnLeaveLamp = (UFunction*) UObject::GObjObjects()->Data[ 82319 ];

	ADunDefDjinnController_execLeaveLamp_Parms LeaveLamp_Parms;

	this->ProcessEvent ( pFnLeaveLamp, &LeaveLamp_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.NotifyGenieOfDeath
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ADunDefDjinnController::NotifyGenieOfDeath ( class APawn* inPawn )
{
	static UFunction* pFnNotifyGenieOfDeath = NULL;

	if ( ! pFnNotifyGenieOfDeath )
		pFnNotifyGenieOfDeath = (UFunction*) UObject::GObjObjects()->Data[ 82303 ];

	ADunDefDjinnController_execNotifyGenieOfDeath_Parms NotifyGenieOfDeath_Parms;
	NotifyGenieOfDeath_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnNotifyGenieOfDeath, &NotifyGenieOfDeath_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ADunDefDjinnController::PawnDied ( class APawn* inPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 82301 ];

	ADunDefDjinnController_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.SetMyGenie
// [0x00020002] 
// Parameters infos:
// class ADunDefGenieBossController* newGenie                       ( CPF_Parm )

void ADunDefDjinnController::SetMyGenie ( class ADunDefGenieBossController* newGenie )
{
	static UFunction* pFnSetMyGenie = NULL;

	if ( ! pFnSetMyGenie )
		pFnSetMyGenie = (UFunction*) UObject::GObjObjects()->Data[ 82299 ];

	ADunDefDjinnController_execSetMyGenie_Parms SetMyGenie_Parms;
	SetMyGenie_Parms.newGenie = newGenie;

	this->ProcessEvent ( pFnSetMyGenie, &SetMyGenie_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.ForceFlee
// [0x00020002] 
// Parameters infos:
// class ADunDefPawn*             ForceFleeTarget                ( CPF_Parm )

void ADunDefDjinnController::ForceFlee ( class ADunDefPawn* ForceFleeTarget )
{
	static UFunction* pFnForceFlee = NULL;

	if ( ! pFnForceFlee )
		pFnForceFlee = (UFunction*) UObject::GObjObjects()->Data[ 82297 ];

	ADunDefDjinnController_execForceFlee_Parms ForceFlee_Parms;
	ForceFlee_Parms.ForceFleeTarget = ForceFleeTarget;

	this->ProcessEvent ( pFnForceFlee, &ForceFlee_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckForFlee
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDjinnController::CheckForFlee ( )
{
	static UFunction* pFnCheckForFlee = NULL;

	if ( ! pFnCheckForFlee )
		pFnCheckForFlee = (UFunction*) UObject::GObjObjects()->Data[ 82291 ];

	ADunDefDjinnController_execCheckForFlee_Parms CheckForFlee_Parms;

	this->ProcessEvent ( pFnCheckForFlee, &CheckForFlee_Parms, NULL );

	return CheckForFlee_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.GetProjectile
// [0x00020002] 
// Parameters infos:
// class ADunDefProjectile*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADunDefProjectile* ADunDefDjinnController::GetProjectile ( )
{
	static UFunction* pFnGetProjectile = NULL;

	if ( ! pFnGetProjectile )
		pFnGetProjectile = (UFunction*) UObject::GObjObjects()->Data[ 82289 ];

	ADunDefDjinnController_execGetProjectile_Parms GetProjectile_Parms;

	this->ProcessEvent ( pFnGetProjectile, &GetProjectile_Parms, NULL );

	return GetProjectile_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.PickProjectileType
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::PickProjectileType ( )
{
	static UFunction* pFnPickProjectileType = NULL;

	if ( ! pFnPickProjectileType )
		pFnPickProjectileType = (UFunction*) UObject::GObjObjects()->Data[ 82288 ];

	ADunDefDjinnController_execPickProjectileType_Parms PickProjectileType_Parms;

	this->ProcessEvent ( pFnPickProjectileType, &PickProjectileType_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.ShootProjectile
// [0x00820002] 
// Parameters infos:

void ADunDefDjinnController::ShootProjectile ( )
{
	static UFunction* pFnShootProjectile = NULL;

	if ( ! pFnShootProjectile )
		pFnShootProjectile = (UFunction*) UObject::GObjObjects()->Data[ 82282 ];

	ADunDefDjinnController_execShootProjectile_Parms ShootProjectile_Parms;

	this->ProcessEvent ( pFnShootProjectile, &ShootProjectile_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckForCustomAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::CheckForCustomAttacks ( )
{
	static UFunction* pFnCheckForCustomAttacks = NULL;

	if ( ! pFnCheckForCustomAttacks )
		pFnCheckForCustomAttacks = (UFunction*) UObject::GObjObjects()->Data[ 82269 ];

	ADunDefDjinnController_execCheckForCustomAttacks_Parms CheckForCustomAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomAttacks, &CheckForCustomAttacks_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.IsValidUpgradeTower
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            Tower                          ( CPF_Parm )

bool ADunDefDjinnController::IsValidUpgradeTower ( class ADunDefTower* Tower )
{
	static UFunction* pFnIsValidUpgradeTower = NULL;

	if ( ! pFnIsValidUpgradeTower )
		pFnIsValidUpgradeTower = (UFunction*) UObject::GObjObjects()->Data[ 82266 ];

	ADunDefDjinnController_execIsValidUpgradeTower_Parms IsValidUpgradeTower_Parms;
	IsValidUpgradeTower_Parms.Tower = Tower;

	this->ProcessEvent ( pFnIsValidUpgradeTower, &IsValidUpgradeTower_Parms, NULL );

	return IsValidUpgradeTower_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.CastTowerDestructSpell
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::CastTowerDestructSpell ( )
{
	static UFunction* pFnCastTowerDestructSpell = NULL;

	if ( ! pFnCastTowerDestructSpell )
		pFnCastTowerDestructSpell = (UFunction*) UObject::GObjObjects()->Data[ 82265 ];

	ADunDefDjinnController_execCastTowerDestructSpell_Parms CastTowerDestructSpell_Parms;

	this->ProcessEvent ( pFnCastTowerDestructSpell, &CastTowerDestructSpell_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.FindDestroyTower
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* ADunDefDjinnController::FindDestroyTower ( )
{
	static UFunction* pFnFindDestroyTower = NULL;

	if ( ! pFnFindDestroyTower )
		pFnFindDestroyTower = (UFunction*) UObject::GObjObjects()->Data[ 82255 ];

	ADunDefDjinnController_execFindDestroyTower_Parms FindDestroyTower_Parms;

	this->ProcessEvent ( pFnFindDestroyTower, &FindDestroyTower_Parms, NULL );

	return FindDestroyTower_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.DestroyTower
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::DestroyTower ( )
{
	static UFunction* pFnDestroyTower = NULL;

	if ( ! pFnDestroyTower )
		pFnDestroyTower = (UFunction*) UObject::GObjObjects()->Data[ 82253 ];

	ADunDefDjinnController_execDestroyTower_Parms DestroyTower_Parms;

	this->ProcessEvent ( pFnDestroyTower, &DestroyTower_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.PlayFinishTowerDestructAnim
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefDjinnController::PlayFinishTowerDestructAnim ( )
{
	static UFunction* pFnPlayFinishTowerDestructAnim = NULL;

	if ( ! pFnPlayFinishTowerDestructAnim )
		pFnPlayFinishTowerDestructAnim = (UFunction*) UObject::GObjObjects()->Data[ 82250 ];

	ADunDefDjinnController_execPlayFinishTowerDestructAnim_Parms PlayFinishTowerDestructAnim_Parms;

	this->ProcessEvent ( pFnPlayFinishTowerDestructAnim, &PlayFinishTowerDestructAnim_Parms, NULL );

	return PlayFinishTowerDestructAnim_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.FinishTowerDestructCast
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::FinishTowerDestructCast ( )
{
	static UFunction* pFnFinishTowerDestructCast = NULL;

	if ( ! pFnFinishTowerDestructCast )
		pFnFinishTowerDestructCast = (UFunction*) UObject::GObjObjects()->Data[ 82249 ];

	ADunDefDjinnController_execFinishTowerDestructCast_Parms FinishTowerDestructCast_Parms;

	this->ProcessEvent ( pFnFinishTowerDestructCast, &FinishTowerDestructCast_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.HealGoldTarget
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::HealGoldTarget ( )
{
	static UFunction* pFnHealGoldTarget = NULL;

	if ( ! pFnHealGoldTarget )
		pFnHealGoldTarget = (UFunction*) UObject::GObjObjects()->Data[ 82231 ];

	ADunDefDjinnController_execHealGoldTarget_Parms HealGoldTarget_Parms;

	this->ProcessEvent ( pFnHealGoldTarget, &HealGoldTarget_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CastGoldEnemySpell
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::CastGoldEnemySpell ( )
{
	static UFunction* pFnCastGoldEnemySpell = NULL;

	if ( ! pFnCastGoldEnemySpell )
		pFnCastGoldEnemySpell = (UFunction*) UObject::GObjObjects()->Data[ 82230 ];

	ADunDefDjinnController_execCastGoldEnemySpell_Parms CastGoldEnemySpell_Parms;

	this->ProcessEvent ( pFnCastGoldEnemySpell, &CastGoldEnemySpell_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.FindGoldEnemyTarget
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* ADunDefDjinnController::FindGoldEnemyTarget ( )
{
	static UFunction* pFnFindGoldEnemyTarget = NULL;

	if ( ! pFnFindGoldEnemyTarget )
		pFnFindGoldEnemyTarget = (UFunction*) UObject::GObjObjects()->Data[ 82221 ];

	ADunDefDjinnController_execFindGoldEnemyTarget_Parms FindGoldEnemyTarget_Parms;

	this->ProcessEvent ( pFnFindGoldEnemyTarget, &FindGoldEnemyTarget_Parms, NULL );

	return FindGoldEnemyTarget_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.CheckValidGoldTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefEnemy*            checkActor                     ( CPF_Parm )

bool ADunDefDjinnController::CheckValidGoldTarget ( class ADunDefEnemy* checkActor )
{
	static UFunction* pFnCheckValidGoldTarget = NULL;

	if ( ! pFnCheckValidGoldTarget )
		pFnCheckValidGoldTarget = (UFunction*) UObject::GObjObjects()->Data[ 82213 ];

	ADunDefDjinnController_execCheckValidGoldTarget_Parms CheckValidGoldTarget_Parms;
	CheckValidGoldTarget_Parms.checkActor = checkActor;

	this->ProcessEvent ( pFnCheckValidGoldTarget, &CheckValidGoldTarget_Parms, NULL );

	return CheckValidGoldTarget_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.PlayFinishGoldAnim
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefDjinnController::PlayFinishGoldAnim ( )
{
	static UFunction* pFnPlayFinishGoldAnim = NULL;

	if ( ! pFnPlayFinishGoldAnim )
		pFnPlayFinishGoldAnim = (UFunction*) UObject::GObjObjects()->Data[ 82211 ];

	ADunDefDjinnController_execPlayFinishGoldAnim_Parms PlayFinishGoldAnim_Parms;

	this->ProcessEvent ( pFnPlayFinishGoldAnim, &PlayFinishGoldAnim_Parms, NULL );

	return PlayFinishGoldAnim_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.FinishGoldEnemyCast
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::FinishGoldEnemyCast ( )
{
	static UFunction* pFnFinishGoldEnemyCast = NULL;

	if ( ! pFnFinishGoldEnemyCast )
		pFnFinishGoldEnemyCast = (UFunction*) UObject::GObjObjects()->Data[ 82209 ];

	ADunDefDjinnController_execFinishGoldEnemyCast_Parms FinishGoldEnemyCast_Parms;

	this->ProcessEvent ( pFnFinishGoldEnemyCast, &FinishGoldEnemyCast_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckCastTimeout
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::CheckCastTimeout ( )
{
	static UFunction* pFnCheckCastTimeout = NULL;

	if ( ! pFnCheckCastTimeout )
		pFnCheckCastTimeout = (UFunction*) UObject::GObjObjects()->Data[ 82170 ];

	ADunDefDjinnController_execCheckCastTimeout_Parms CheckCastTimeout_Parms;

	this->ProcessEvent ( pFnCheckCastTimeout, &CheckCastTimeout_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckForCastingMovement
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bHasLineOfSight                ( CPF_Parm )

bool ADunDefDjinnController::CheckForCastingMovement ( unsigned long bHasLineOfSight )
{
	static UFunction* pFnCheckForCastingMovement = NULL;

	if ( ! pFnCheckForCastingMovement )
		pFnCheckForCastingMovement = (UFunction*) UObject::GObjObjects()->Data[ 82167 ];

	ADunDefDjinnController_execCheckForCastingMovement_Parms CheckForCastingMovement_Parms;
	CheckForCastingMovement_Parms.bHasLineOfSight = bHasLineOfSight;

	this->ProcessEvent ( pFnCheckForCastingMovement, &CheckForCastingMovement_Parms, NULL );

	return CheckForCastingMovement_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.ClearCurrentSpellTarget
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::ClearCurrentSpellTarget ( )
{
	static UFunction* pFnClearCurrentSpellTarget = NULL;

	if ( ! pFnClearCurrentSpellTarget )
		pFnClearCurrentSpellTarget = (UFunction*) UObject::GObjObjects()->Data[ 82166 ];

	ADunDefDjinnController_execClearCurrentSpellTarget_Parms ClearCurrentSpellTarget_Parms;

	this->ProcessEvent ( pFnClearCurrentSpellTarget, &ClearCurrentSpellTarget_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefDjinnController::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 82159 ];

	ADunDefDjinnController_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.NotifyDamageTaken
// [0x00020000] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefDjinnController::NotifyDamageTaken ( int DamageAmount, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyDamageTaken = NULL;

	if ( ! pFnNotifyDamageTaken )
		pFnNotifyDamageTaken = (UFunction*) UObject::GObjObjects()->Data[ 82156 ];

	ADunDefDjinnController_execNotifyDamageTaken_Parms NotifyDamageTaken_Parms;
	NotifyDamageTaken_Parms.DamageAmount = DamageAmount;
	NotifyDamageTaken_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyDamageTaken, &NotifyDamageTaken_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckCurrentCastTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDjinnController::CheckCurrentCastTarget ( )
{
	static UFunction* pFnCheckCurrentCastTarget = NULL;

	if ( ! pFnCheckCurrentCastTarget )
		pFnCheckCurrentCastTarget = (UFunction*) UObject::GObjObjects()->Data[ 82154 ];

	ADunDefDjinnController_execCheckCurrentCastTarget_Parms CheckCurrentCastTarget_Parms;

	this->ProcessEvent ( pFnCheckCurrentCastTarget, &CheckCurrentCastTarget_Parms, NULL );

	return CheckCurrentCastTarget_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.Cough
// [0x00024002] 
// Parameters infos:
// struct FName                   coughAnimName                  ( CPF_OptionalParm | CPF_Parm )

void ADunDefDjinnController::Cough ( struct FName coughAnimName )
{
	static UFunction* pFnCough = NULL;

	if ( ! pFnCough )
		pFnCough = (UFunction*) UObject::GObjObjects()->Data[ 82152 ];

	ADunDefDjinnController_execCough_Parms Cough_Parms;
	memcpy ( &Cough_Parms.coughAnimName, &coughAnimName, 0x8 );

	this->ProcessEvent ( pFnCough, &Cough_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.InterruptSpellCast
// [0x00024000] 
// Parameters infos:
// unsigned long                  bNoSeeking                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefDjinnController::InterruptSpellCast ( unsigned long bNoSeeking )
{
	static UFunction* pFnInterruptSpellCast = NULL;

	if ( ! pFnInterruptSpellCast )
		pFnInterruptSpellCast = (UFunction*) UObject::GObjObjects()->Data[ 82147 ];

	ADunDefDjinnController_execInterruptSpellCast_Parms InterruptSpellCast_Parms;
	InterruptSpellCast_Parms.bNoSeeking = bNoSeeking;

	this->ProcessEvent ( pFnInterruptSpellCast, &InterruptSpellCast_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckSpellDamageAmount
// [0x00020002] 
// Parameters infos:
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefDjinnController::CheckSpellDamageAmount ( class AActor* DamageCauser )
{
	static UFunction* pFnCheckSpellDamageAmount = NULL;

	if ( ! pFnCheckSpellDamageAmount )
		pFnCheckSpellDamageAmount = (UFunction*) UObject::GObjObjects()->Data[ 82144 ];

	ADunDefDjinnController_execCheckSpellDamageAmount_Parms CheckSpellDamageAmount_Parms;
	CheckSpellDamageAmount_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnCheckSpellDamageAmount, &CheckSpellDamageAmount_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckAllowedCastingStart
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefDjinnController::CheckAllowedCastingStart ( )
{
	static UFunction* pFnCheckAllowedCastingStart = NULL;

	if ( ! pFnCheckAllowedCastingStart )
		pFnCheckAllowedCastingStart = (UFunction*) UObject::GObjObjects()->Data[ 82142 ];

	ADunDefDjinnController_execCheckAllowedCastingStart_Parms CheckAllowedCastingStart_Parms;

	this->ProcessEvent ( pFnCheckAllowedCastingStart, &CheckAllowedCastingStart_Parms, NULL );

	return CheckAllowedCastingStart_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.IsWithinCastingRange
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  FollowTarget                   ( CPF_Parm )

bool ADunDefDjinnController::IsWithinCastingRange ( class AActor* FollowTarget )
{
	static UFunction* pFnIsWithinCastingRange = NULL;

	if ( ! pFnIsWithinCastingRange )
		pFnIsWithinCastingRange = (UFunction*) UObject::GObjObjects()->Data[ 82139 ];

	ADunDefDjinnController_execIsWithinCastingRange_Parms IsWithinCastingRange_Parms;
	IsWithinCastingRange_Parms.FollowTarget = FollowTarget;

	this->ProcessEvent ( pFnIsWithinCastingRange, &IsWithinCastingRange_Parms, NULL );

	return IsWithinCastingRange_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.FindNearestFleePoint
// [0x00824002] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIgnoreFleeAngle               ( CPF_OptionalParm | CPF_Parm )

class ANavigationPoint* ADunDefDjinnController::FindNearestFleePoint ( unsigned long bIgnoreFleeAngle )
{
	static UFunction* pFnFindNearestFleePoint = NULL;

	if ( ! pFnFindNearestFleePoint )
		pFnFindNearestFleePoint = (UFunction*) UObject::GObjObjects()->Data[ 82131 ];

	ADunDefDjinnController_execFindNearestFleePoint_Parms FindNearestFleePoint_Parms;
	FindNearestFleePoint_Parms.bIgnoreFleeAngle = bIgnoreFleeAngle;

	this->ProcessEvent ( pFnFindNearestFleePoint, &FindNearestFleePoint_Parms, NULL );

	return FindNearestFleePoint_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.CheckFleeDistance
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::CheckFleeDistance ( )
{
	static UFunction* pFnCheckFleeDistance = NULL;

	if ( ! pFnCheckFleeDistance )
		pFnCheckFleeDistance = (UFunction*) UObject::GObjObjects()->Data[ 82125 ];

	ADunDefDjinnController_execCheckFleeDistance_Parms CheckFleeDistance_Parms;

	this->ProcessEvent ( pFnCheckFleeDistance, &CheckFleeDistance_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.StopFlee
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::StopFlee ( )
{
	static UFunction* pFnStopFlee = NULL;

	if ( ! pFnStopFlee )
		pFnStopFlee = (UFunction*) UObject::GObjObjects()->Data[ 82124 ];

	ADunDefDjinnController_execStopFlee_Parms StopFlee_Parms;

	this->ProcessEvent ( pFnStopFlee, &StopFlee_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckDirectReachability
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::CheckDirectReachability ( )
{
	static UFunction* pFnCheckDirectReachability = NULL;

	if ( ! pFnCheckDirectReachability )
		pFnCheckDirectReachability = (UFunction*) UObject::GObjObjects()->Data[ 82118 ];

	ADunDefDjinnController_execCheckDirectReachability_Parms CheckDirectReachability_Parms;

	this->ProcessEvent ( pFnCheckDirectReachability, &CheckDirectReachability_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.CheckIndirectReachability
// [0x00020002] 
// Parameters infos:

void ADunDefDjinnController::CheckIndirectReachability ( )
{
	static UFunction* pFnCheckIndirectReachability = NULL;

	if ( ! pFnCheckIndirectReachability )
		pFnCheckIndirectReachability = (UFunction*) UObject::GObjObjects()->Data[ 82116 ];

	ADunDefDjinnController_execCheckIndirectReachability_Parms CheckIndirectReachability_Parms;

	this->ProcessEvent ( pFnCheckIndirectReachability, &CheckIndirectReachability_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.MoveUnreachable
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 AttemptedDest                  ( CPF_Parm )
// class AActor*                  AttemptedTarget                ( CPF_Parm )

void ADunDefDjinnController::eventMoveUnreachable ( struct FVector AttemptedDest, class AActor* AttemptedTarget )
{
	static UFunction* pFnMoveUnreachable = NULL;

	if ( ! pFnMoveUnreachable )
		pFnMoveUnreachable = (UFunction*) UObject::GObjObjects()->Data[ 82113 ];

	ADunDefDjinnController_eventMoveUnreachable_Parms MoveUnreachable_Parms;
	memcpy ( &MoveUnreachable_Parms.AttemptedDest, &AttemptedDest, 0xC );
	MoveUnreachable_Parms.AttemptedTarget = AttemptedTarget;

	this->ProcessEvent ( pFnMoveUnreachable, &MoveUnreachable_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.GetObstructionJumpForwardDir
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 forwardDir                     ( CPF_Parm )

struct FVector ADunDefDjinnController::GetObstructionJumpForwardDir ( struct FVector forwardDir )
{
	static UFunction* pFnGetObstructionJumpForwardDir = NULL;

	if ( ! pFnGetObstructionJumpForwardDir )
		pFnGetObstructionJumpForwardDir = (UFunction*) UObject::GObjObjects()->Data[ 82110 ];

	ADunDefDjinnController_execGetObstructionJumpForwardDir_Parms GetObstructionJumpForwardDir_Parms;
	memcpy ( &GetObstructionJumpForwardDir_Parms.forwardDir, &forwardDir, 0xC );

	this->ProcessEvent ( pFnGetObstructionJumpForwardDir, &GetObstructionJumpForwardDir_Parms, NULL );

	return GetObstructionJumpForwardDir_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.ObstructionJump
// [0x00020002] 
// Parameters infos:
// struct FVector                 jumpForwardDir                 ( CPF_Parm )
// struct FVector                 jumpSideDir                    ( CPF_Parm )

void ADunDefDjinnController::ObstructionJump ( struct FVector jumpForwardDir, struct FVector jumpSideDir )
{
	static UFunction* pFnObstructionJump = NULL;

	if ( ! pFnObstructionJump )
		pFnObstructionJump = (UFunction*) UObject::GObjObjects()->Data[ 82107 ];

	ADunDefDjinnController_execObstructionJump_Parms ObstructionJump_Parms;
	memcpy ( &ObstructionJump_Parms.jumpForwardDir, &jumpForwardDir, 0xC );
	memcpy ( &ObstructionJump_Parms.jumpSideDir, &jumpSideDir, 0xC );

	this->ProcessEvent ( pFnObstructionJump, &ObstructionJump_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnController.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

struct FVector ADunDefDjinnController::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 82101 ];

	ADunDefDjinnController_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.MoveAroundBlockade
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  blockadeActor                  ( CPF_Parm )
// float                          BlockadeWidth                  ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// unsigned long                  SkipBlockingCheck              ( CPF_OptionalParm | CPF_Parm )

bool ADunDefDjinnController::MoveAroundBlockade ( class AActor* blockadeActor, float BlockadeWidth, struct FVector HitNormal, unsigned long SkipBlockingCheck )
{
	static UFunction* pFnMoveAroundBlockade = NULL;

	if ( ! pFnMoveAroundBlockade )
		pFnMoveAroundBlockade = (UFunction*) UObject::GObjObjects()->Data[ 82095 ];

	ADunDefDjinnController_execMoveAroundBlockade_Parms MoveAroundBlockade_Parms;
	MoveAroundBlockade_Parms.blockadeActor = blockadeActor;
	MoveAroundBlockade_Parms.BlockadeWidth = BlockadeWidth;
	memcpy ( &MoveAroundBlockade_Parms.HitNormal, &HitNormal, 0xC );
	MoveAroundBlockade_Parms.SkipBlockingCheck = SkipBlockingCheck;

	this->ProcessEvent ( pFnMoveAroundBlockade, &MoveAroundBlockade_Parms, NULL );

	return MoveAroundBlockade_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.NavActorReachable
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool ADunDefDjinnController::NavActorReachable ( class AActor* A )
{
	static UFunction* pFnNavActorReachable = NULL;

	if ( ! pFnNavActorReachable )
		pFnNavActorReachable = (UFunction*) UObject::GObjObjects()->Data[ 82092 ];

	ADunDefDjinnController_execNavActorReachable_Parms NavActorReachable_Parms;
	NavActorReachable_Parms.A = A;

	this->ProcessEvent ( pFnNavActorReachable, &NavActorReachable_Parms, NULL );

	return NavActorReachable_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.FindNearestNavPointTo
// [0x00024002] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )
// unsigned long                  bCheckVisible                  ( CPF_OptionalParm | CPF_Parm )

class ANavigationPoint* ADunDefDjinnController::FindNearestNavPointTo ( class AActor* A, unsigned long bCheckVisible )
{
	static UFunction* pFnFindNearestNavPointTo = NULL;

	if ( ! pFnFindNearestNavPointTo )
		pFnFindNearestNavPointTo = (UFunction*) UObject::GObjObjects()->Data[ 82087 ];

	ADunDefDjinnController_execFindNearestNavPointTo_Parms FindNearestNavPointTo_Parms;
	FindNearestNavPointTo_Parms.A = A;
	FindNearestNavPointTo_Parms.bCheckVisible = bCheckVisible;

	this->ProcessEvent ( pFnFindNearestNavPointTo, &FindNearestNavPointTo_Parms, NULL );

	return FindNearestNavPointTo_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.GetTargetingMultiplier
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  ActorRef                       ( CPF_Parm )
// float                          baseDesirability               ( CPF_OptionalParm | CPF_Parm )

float ADunDefDjinnController::GetTargetingMultiplier ( class AActor* ActorRef, float baseDesirability )
{
	static UFunction* pFnGetTargetingMultiplier = NULL;

	if ( ! pFnGetTargetingMultiplier )
		pFnGetTargetingMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 82081 ];

	ADunDefDjinnController_execGetTargetingMultiplier_Parms GetTargetingMultiplier_Parms;
	GetTargetingMultiplier_Parms.ActorRef = ActorRef;
	GetTargetingMultiplier_Parms.baseDesirability = baseDesirability;

	this->ProcessEvent ( pFnGetTargetingMultiplier, &GetTargetingMultiplier_Parms, NULL );

	return GetTargetingMultiplier_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefDjinnController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 82079 ];

	ADunDefDjinnController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 81721 ];

	UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge.RefreshBillboard
// [0x00020002] 
// Parameters infos:

void ADunDefWaveBillBoard_ArabiaChallenge::RefreshBillboard ( )
{
	static UFunction* pFnRefreshBillboard = NULL;

	if ( ! pFnRefreshBillboard )
		pFnRefreshBillboard = (UFunction*) UObject::GObjObjects()->Data[ 82918 ];

	ADunDefWaveBillBoard_ArabiaChallenge_execRefreshBillboard_Parms RefreshBillboard_Parms;

	this->ProcessEvent ( pFnRefreshBillboard, &RefreshBillboard_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.GetPawnDamageModifier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bDontIncludeAbilities          ( CPF_OptionalParm | CPF_Parm )

float ADunDefDjinn::GetPawnDamageModifier ( unsigned long bDontIncludeAbilities )
{
	static UFunction* pFnGetPawnDamageModifier = NULL;

	if ( ! pFnGetPawnDamageModifier )
		pFnGetPawnDamageModifier = (UFunction*) UObject::GObjObjects()->Data[ 81999 ];

	ADunDefDjinn_execGetPawnDamageModifier_Parms GetPawnDamageModifier_Parms;
	GetPawnDamageModifier_Parms.bDontIncludeAbilities = bDontIncludeAbilities;

	this->ProcessEvent ( pFnGetPawnDamageModifier, &GetPawnDamageModifier_Parms, NULL );

	return GetPawnDamageModifier_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.GetMiniMapIconTexture
// [0x00020102] 
// Parameters infos:
// class UTexture2D*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UTexture2D* ADunDefDjinn::GetMiniMapIconTexture ( )
{
	static UFunction* pFnGetMiniMapIconTexture = NULL;

	if ( ! pFnGetMiniMapIconTexture )
		pFnGetMiniMapIconTexture = (UFunction*) UObject::GObjObjects()->Data[ 81997 ];

	ADunDefDjinn_execGetMiniMapIconTexture_Parms GetMiniMapIconTexture_Parms;

	this->ProcessEvent ( pFnGetMiniMapIconTexture, &GetMiniMapIconTexture_Parms, NULL );

	return GetMiniMapIconTexture_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.UpdateToTeamMaterial
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::UpdateToTeamMaterial ( )
{
	static UFunction* pFnUpdateToTeamMaterial = NULL;

	if ( ! pFnUpdateToTeamMaterial )
		pFnUpdateToTeamMaterial = (UFunction*) UObject::GObjObjects()->Data[ 81995 ];

	ADunDefDjinn_execUpdateToTeamMaterial_Parms UpdateToTeamMaterial_Parms;

	this->ProcessEvent ( pFnUpdateToTeamMaterial, &UpdateToTeamMaterial_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.NotifyTeamSwitch
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::NotifyTeamSwitch ( )
{
	static UFunction* pFnNotifyTeamSwitch = NULL;

	if ( ! pFnNotifyTeamSwitch )
		pFnNotifyTeamSwitch = (UFunction*) UObject::GObjObjects()->Data[ 81994 ];

	ADunDefDjinn_execNotifyTeamSwitch_Parms NotifyTeamSwitch_Parms;

	this->ProcessEvent ( pFnNotifyTeamSwitch, &NotifyTeamSwitch_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.NotifyOfDeath
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayerController* Killer                         ( CPF_Parm )

void ADunDefDjinn::NotifyOfDeath ( class ADunDefPlayerController* Killer )
{
	static UFunction* pFnNotifyOfDeath = NULL;

	if ( ! pFnNotifyOfDeath )
		pFnNotifyOfDeath = (UFunction*) UObject::GObjObjects()->Data[ 81989 ];

	ADunDefDjinn_execNotifyOfDeath_Parms NotifyOfDeath_Parms;
	NotifyOfDeath_Parms.Killer = Killer;

	this->ProcessEvent ( pFnNotifyOfDeath, &NotifyOfDeath_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.UnHideDjinn
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::UnHideDjinn ( )
{
	static UFunction* pFnUnHideDjinn = NULL;

	if ( ! pFnUnHideDjinn )
		pFnUnHideDjinn = (UFunction*) UObject::GObjObjects()->Data[ 81988 ];

	ADunDefDjinn_execUnHideDjinn_Parms UnHideDjinn_Parms;

	this->ProcessEvent ( pFnUnHideDjinn, &UnHideDjinn_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.HideDjinn
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::HideDjinn ( )
{
	static UFunction* pFnHideDjinn = NULL;

	if ( ! pFnHideDjinn )
		pFnHideDjinn = (UFunction*) UObject::GObjObjects()->Data[ 81987 ];

	ADunDefDjinn_execHideDjinn_Parms HideDjinn_Parms;

	this->ProcessEvent ( pFnHideDjinn, &HideDjinn_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.PlayGoToLamp
// [0x00820102] 
// Parameters infos:
// class AActor*                  theLamp                        ( CPF_Parm )

void ADunDefDjinn::PlayGoToLamp ( class AActor* theLamp )
{
	static UFunction* pFnPlayGoToLamp = NULL;

	if ( ! pFnPlayGoToLamp )
		pFnPlayGoToLamp = (UFunction*) UObject::GObjObjects()->Data[ 81984 ];

	ADunDefDjinn_execPlayGoToLamp_Parms PlayGoToLamp_Parms;
	PlayGoToLamp_Parms.theLamp = theLamp;

	this->ProcessEvent ( pFnPlayGoToLamp, &PlayGoToLamp_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.PlayLeaveLamp
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::PlayLeaveLamp ( )
{
	static UFunction* pFnPlayLeaveLamp = NULL;

	if ( ! pFnPlayLeaveLamp )
		pFnPlayLeaveLamp = (UFunction*) UObject::GObjObjects()->Data[ 81983 ];

	ADunDefDjinn_execPlayLeaveLamp_Parms PlayLeaveLamp_Parms;

	this->ProcessEvent ( pFnPlayLeaveLamp, &PlayLeaveLamp_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.LeaveLamp
// [0x00020002] 
// Parameters infos:
// struct FVector                 NewLocation                    ( CPF_Parm )

void ADunDefDjinn::LeaveLamp ( struct FVector NewLocation )
{
	static UFunction* pFnLeaveLamp = NULL;

	if ( ! pFnLeaveLamp )
		pFnLeaveLamp = (UFunction*) UObject::GObjObjects()->Data[ 81981 ];

	ADunDefDjinn_execLeaveLamp_Parms LeaveLamp_Parms;
	memcpy ( &LeaveLamp_Parms.NewLocation, &NewLocation, 0xC );

	this->ProcessEvent ( pFnLeaveLamp, &LeaveLamp_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.GetEnemyTargetingDesirability
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AEngineNativeDunDefAIController* forController                  ( CPF_Parm )

float ADunDefDjinn::eventGetEnemyTargetingDesirability ( class AEngineNativeDunDefAIController* forController )
{
	static UFunction* pFnGetEnemyTargetingDesirability = NULL;

	if ( ! pFnGetEnemyTargetingDesirability )
		pFnGetEnemyTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 81976 ];

	ADunDefDjinn_eventGetEnemyTargetingDesirability_Parms GetEnemyTargetingDesirability_Parms;
	GetEnemyTargetingDesirability_Parms.forController = forController;

	this->ProcessEvent ( pFnGetEnemyTargetingDesirability, &GetEnemyTargetingDesirability_Parms, NULL );

	return GetEnemyTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.GetMiniMapIconColor
// [0x00020102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor ADunDefDjinn::GetMiniMapIconColor ( )
{
	static UFunction* pFnGetMiniMapIconColor = NULL;

	if ( ! pFnGetMiniMapIconColor )
		pFnGetMiniMapIconColor = (UFunction*) UObject::GObjObjects()->Data[ 81974 ];

	ADunDefDjinn_execGetMiniMapIconColor_Parms GetMiniMapIconColor_Parms;

	this->ProcessEvent ( pFnGetMiniMapIconColor, &GetMiniMapIconColor_Parms, NULL );

	return GetMiniMapIconColor_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.CheckDjinnProximity
// [0x00820002] 
// Parameters infos:

void ADunDefDjinn::CheckDjinnProximity ( )
{
	static UFunction* pFnCheckDjinnProximity = NULL;

	if ( ! pFnCheckDjinnProximity )
		pFnCheckDjinnProximity = (UFunction*) UObject::GObjObjects()->Data[ 81930 ];

	ADunDefDjinn_execCheckDjinnProximity_Parms CheckDjinnProximity_Parms;

	this->ProcessEvent ( pFnCheckDjinnProximity, &CheckDjinnProximity_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.TakeDamage
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

void ADunDefDjinn::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 81921 ];

	ADunDefDjinn_eventTakeDamage_Parms TakeDamage_Parms;
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

// Function DunDefArabia.DunDefDjinn.AllowTrapSpringing
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_DetonationType* trap                           ( CPF_Parm )

bool ADunDefDjinn::AllowTrapSpringing ( class ADunDefTower_DetonationType* trap )
{
	static UFunction* pFnAllowTrapSpringing = NULL;

	if ( ! pFnAllowTrapSpringing )
		pFnAllowTrapSpringing = (UFunction*) UObject::GObjObjects()->Data[ 81918 ];

	ADunDefDjinn_execAllowTrapSpringing_Parms AllowTrapSpringing_Parms;
	AllowTrapSpringing_Parms.trap = trap;

	this->ProcessEvent ( pFnAllowTrapSpringing, &AllowTrapSpringing_Parms, NULL );

	return AllowTrapSpringing_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.ShutDownAllCastingVFX
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::ShutDownAllCastingVFX ( )
{
	static UFunction* pFnShutDownAllCastingVFX = NULL;

	if ( ! pFnShutDownAllCastingVFX )
		pFnShutDownAllCastingVFX = (UFunction*) UObject::GObjObjects()->Data[ 81910 ];

	ADunDefDjinn_execShutDownAllCastingVFX_Parms ShutDownAllCastingVFX_Parms;

	this->ProcessEvent ( pFnShutDownAllCastingVFX, &ShutDownAllCastingVFX_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.PlayAttackAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefDjinn::PlayAttackAnimation ( )
{
	static UFunction* pFnPlayAttackAnimation = NULL;

	if ( ! pFnPlayAttackAnimation )
		pFnPlayAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 81908 ];

	ADunDefDjinn_execPlayAttackAnimation_Parms PlayAttackAnimation_Parms;

	this->ProcessEvent ( pFnPlayAttackAnimation, &PlayAttackAnimation_Parms, NULL );

	return PlayAttackAnimation_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.GetProjectileLocAndRot
// [0x00420102] 
// Parameters infos:
// struct FVector                 Position                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                Orientation                    ( CPF_Parm | CPF_OutParm )

void ADunDefDjinn::GetProjectileLocAndRot ( struct FVector* Position, struct FRotator* Orientation )
{
	static UFunction* pFnGetProjectileLocAndRot = NULL;

	if ( ! pFnGetProjectileLocAndRot )
		pFnGetProjectileLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 81905 ];

	ADunDefDjinn_execGetProjectileLocAndRot_Parms GetProjectileLocAndRot_Parms;

	this->ProcessEvent ( pFnGetProjectileLocAndRot, &GetProjectileLocAndRot_Parms, NULL );

	if ( Position )
		memcpy ( Position, &GetProjectileLocAndRot_Parms.Position, 0xC );

	if ( Orientation )
		memcpy ( Orientation, &GetProjectileLocAndRot_Parms.Orientation, 0xC );
};

// Function DunDefArabia.DunDefDjinn.FireProjectile
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefDjinn::eventFireProjectile ( )
{
	static UFunction* pFnFireProjectile = NULL;

	if ( ! pFnFireProjectile )
		pFnFireProjectile = (UFunction*) UObject::GObjObjects()->Data[ 81904 ];

	ADunDefDjinn_eventFireProjectile_Parms FireProjectile_Parms;

	this->ProcessEvent ( pFnFireProjectile, &FireProjectile_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.ResetTowers
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::ResetTowers ( )
{
	static UFunction* pFnResetTowers = NULL;

	if ( ! pFnResetTowers )
		pFnResetTowers = (UFunction*) UObject::GObjObjects()->Data[ 81903 ];

	ADunDefDjinn_execResetTowers_Parms ResetTowers_Parms;

	this->ProcessEvent ( pFnResetTowers, &ResetTowers_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.ShutDownTowerVFX
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::ShutDownTowerVFX ( )
{
	static UFunction* pFnShutDownTowerVFX = NULL;

	if ( ! pFnShutDownTowerVFX )
		pFnShutDownTowerVFX = (UFunction*) UObject::GObjObjects()->Data[ 81902 ];

	ADunDefDjinn_execShutDownTowerVFX_Parms ShutDownTowerVFX_Parms;

	this->ProcessEvent ( pFnShutDownTowerVFX, &ShutDownTowerVFX_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.StopTowerDestructCast
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            theTower                       ( CPF_Parm )

float ADunDefDjinn::StopTowerDestructCast ( class ADunDefTower* theTower )
{
	static UFunction* pFnStopTowerDestructCast = NULL;

	if ( ! pFnStopTowerDestructCast )
		pFnStopTowerDestructCast = (UFunction*) UObject::GObjObjects()->Data[ 81899 ];

	ADunDefDjinn_execStopTowerDestructCast_Parms StopTowerDestructCast_Parms;
	StopTowerDestructCast_Parms.theTower = theTower;

	this->ProcessEvent ( pFnStopTowerDestructCast, &StopTowerDestructCast_Parms, NULL );

	return StopTowerDestructCast_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.SetInitialTowerValues
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::SetInitialTowerValues ( )
{
	static UFunction* pFnSetInitialTowerValues = NULL;

	if ( ! pFnSetInitialTowerValues )
		pFnSetInitialTowerValues = (UFunction*) UObject::GObjObjects()->Data[ 81898 ];

	ADunDefDjinn_execSetInitialTowerValues_Parms SetInitialTowerValues_Parms;

	this->ProcessEvent ( pFnSetInitialTowerValues, &SetInitialTowerValues_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.StartTowerUpgradeCast
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  castTarget                     ( CPF_Parm )

float ADunDefDjinn::StartTowerUpgradeCast ( class AActor* castTarget )
{
	static UFunction* pFnStartTowerUpgradeCast = NULL;

	if ( ! pFnStartTowerUpgradeCast )
		pFnStartTowerUpgradeCast = (UFunction*) UObject::GObjObjects()->Data[ 81895 ];

	ADunDefDjinn_execStartTowerUpgradeCast_Parms StartTowerUpgradeCast_Parms;
	StartTowerUpgradeCast_Parms.castTarget = castTarget;

	this->ProcessEvent ( pFnStartTowerUpgradeCast, &StartTowerUpgradeCast_Parms, NULL );

	return StartTowerUpgradeCast_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.StartTowerDestructCast
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  castTarget                     ( CPF_Parm )

float ADunDefDjinn::StartTowerDestructCast ( class AActor* castTarget )
{
	static UFunction* pFnStartTowerDestructCast = NULL;

	if ( ! pFnStartTowerDestructCast )
		pFnStartTowerDestructCast = (UFunction*) UObject::GObjObjects()->Data[ 81891 ];

	ADunDefDjinn_execStartTowerDestructCast_Parms StartTowerDestructCast_Parms;
	StartTowerDestructCast_Parms.castTarget = castTarget;

	this->ProcessEvent ( pFnStartTowerDestructCast, &StartTowerDestructCast_Parms, NULL );

	return StartTowerDestructCast_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.StartTowerBeam
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefDjinn::eventStartTowerBeam ( )
{
	static UFunction* pFnStartTowerBeam = NULL;

	if ( ! pFnStartTowerBeam )
		pFnStartTowerBeam = (UFunction*) UObject::GObjObjects()->Data[ 81890 ];

	ADunDefDjinn_eventStartTowerBeam_Parms StartTowerBeam_Parms;

	this->ProcessEvent ( pFnStartTowerBeam, &StartTowerBeam_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.UpdateTower
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::UpdateTower ( )
{
	static UFunction* pFnUpdateTower = NULL;

	if ( ! pFnUpdateTower )
		pFnUpdateTower = (UFunction*) UObject::GObjObjects()->Data[ 81889 ];

	ADunDefDjinn_execUpdateTower_Parms UpdateTower_Parms;

	this->ProcessEvent ( pFnUpdateTower, &UpdateTower_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefDjinn::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 81870 ];

	ADunDefDjinn_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ADunDefDjinn::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 81860 ];

	ADunDefDjinn_execAdjustDamage_Parms AdjustDamage_Parms;
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

// Function DunDefArabia.DunDefDjinn.UnSetGoldenEnemy
// [0x00020102] 
// Parameters infos:
// class ADunDefEnemy*            Enemy                          ( CPF_Parm )

void ADunDefDjinn::UnSetGoldenEnemy ( class ADunDefEnemy* Enemy )
{
	static UFunction* pFnUnSetGoldenEnemy = NULL;

	if ( ! pFnUnSetGoldenEnemy )
		pFnUnSetGoldenEnemy = (UFunction*) UObject::GObjObjects()->Data[ 81858 ];

	ADunDefDjinn_execUnSetGoldenEnemy_Parms UnSetGoldenEnemy_Parms;
	UnSetGoldenEnemy_Parms.Enemy = Enemy;

	this->ProcessEvent ( pFnUnSetGoldenEnemy, &UnSetGoldenEnemy_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.SetGoldenEnemy
// [0x00020102] 
// Parameters infos:
// class ADunDefEnemy*            Enemy                          ( CPF_Parm )

void ADunDefDjinn::SetGoldenEnemy ( class ADunDefEnemy* Enemy )
{
	static UFunction* pFnSetGoldenEnemy = NULL;

	if ( ! pFnSetGoldenEnemy )
		pFnSetGoldenEnemy = (UFunction*) UObject::GObjObjects()->Data[ 81855 ];

	ADunDefDjinn_execSetGoldenEnemy_Parms SetGoldenEnemy_Parms;
	SetGoldenEnemy_Parms.Enemy = Enemy;

	this->ProcessEvent ( pFnSetGoldenEnemy, &SetGoldenEnemy_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.PlayInterruptAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefDjinn::PlayInterruptAnimation ( )
{
	static UFunction* pFnPlayInterruptAnimation = NULL;

	if ( ! pFnPlayInterruptAnimation )
		pFnPlayInterruptAnimation = (UFunction*) UObject::GObjObjects()->Data[ 81853 ];

	ADunDefDjinn_execPlayInterruptAnimation_Parms PlayInterruptAnimation_Parms;

	this->ProcessEvent ( pFnPlayInterruptAnimation, &PlayInterruptAnimation_Parms, NULL );

	return PlayInterruptAnimation_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.ShutDownGoldVFX
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::ShutDownGoldVFX ( )
{
	static UFunction* pFnShutDownGoldVFX = NULL;

	if ( ! pFnShutDownGoldVFX )
		pFnShutDownGoldVFX = (UFunction*) UObject::GObjObjects()->Data[ 81852 ];

	ADunDefDjinn_execShutDownGoldVFX_Parms ShutDownGoldVFX_Parms;

	this->ProcessEvent ( pFnShutDownGoldVFX, &ShutDownGoldVFX_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.StopGoldEnemyCast
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefDjinn::StopGoldEnemyCast ( )
{
	static UFunction* pFnStopGoldEnemyCast = NULL;

	if ( ! pFnStopGoldEnemyCast )
		pFnStopGoldEnemyCast = (UFunction*) UObject::GObjObjects()->Data[ 81850 ];

	ADunDefDjinn_execStopGoldEnemyCast_Parms StopGoldEnemyCast_Parms;

	this->ProcessEvent ( pFnStopGoldEnemyCast, &StopGoldEnemyCast_Parms, NULL );

	return StopGoldEnemyCast_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.StartGoldEnemyCast
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  castTarget                     ( CPF_Parm )

float ADunDefDjinn::StartGoldEnemyCast ( class AActor* castTarget )
{
	static UFunction* pFnStartGoldEnemyCast = NULL;

	if ( ! pFnStartGoldEnemyCast )
		pFnStartGoldEnemyCast = (UFunction*) UObject::GObjObjects()->Data[ 81847 ];

	ADunDefDjinn_execStartGoldEnemyCast_Parms StartGoldEnemyCast_Parms;
	StartGoldEnemyCast_Parms.castTarget = castTarget;

	this->ProcessEvent ( pFnStartGoldEnemyCast, &StartGoldEnemyCast_Parms, NULL );

	return StartGoldEnemyCast_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.StartBeam
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void ADunDefDjinn::eventStartBeam ( )
{
	static UFunction* pFnStartBeam = NULL;

	if ( ! pFnStartBeam )
		pFnStartBeam = (UFunction*) UObject::GObjObjects()->Data[ 81846 ];

	ADunDefDjinn_eventStartBeam_Parms StartBeam_Parms;

	this->ProcessEvent ( pFnStartBeam, &StartBeam_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.PlayMajorHurtAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::PlayMajorHurtAnimation ( )
{
	static UFunction* pFnPlayMajorHurtAnimation = NULL;

	if ( ! pFnPlayMajorHurtAnimation )
		pFnPlayMajorHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 81837 ];

	ADunDefDjinn_execPlayMajorHurtAnimation_Parms PlayMajorHurtAnimation_Parms;

	this->ProcessEvent ( pFnPlayMajorHurtAnimation, &PlayMajorHurtAnimation_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.PlayHurtAnimation
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefDjinn::PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayHurtAnimation = NULL;

	if ( ! pFnPlayHurtAnimation )
		pFnPlayHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 81834 ];

	ADunDefDjinn_execPlayHurtAnimation_Parms PlayHurtAnimation_Parms;
	PlayHurtAnimation_Parms.DamageType = DamageType;
	memcpy ( &PlayHurtAnimation_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayHurtAnimation, &PlayHurtAnimation_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.UpdateDifficultyMaterial
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefDjinn::UpdateDifficultyMaterial ( )
{
	static UFunction* pFnUpdateDifficultyMaterial = NULL;

	if ( ! pFnUpdateDifficultyMaterial )
		pFnUpdateDifficultyMaterial = (UFunction*) UObject::GObjObjects()->Data[ 81832 ];

	ADunDefDjinn_execUpdateDifficultyMaterial_Parms UpdateDifficultyMaterial_Parms;

	this->ProcessEvent ( pFnUpdateDifficultyMaterial, &UpdateDifficultyMaterial_Parms, NULL );

	return UpdateDifficultyMaterial_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinn.SetMovementPhysics
// [0x00020002] 
// Parameters infos:

void ADunDefDjinn::SetMovementPhysics ( )
{
	static UFunction* pFnSetMovementPhysics = NULL;

	if ( ! pFnSetMovementPhysics )
		pFnSetMovementPhysics = (UFunction*) UObject::GObjObjects()->Data[ 81831 ];

	ADunDefDjinn_execSetMovementPhysics_Parms SetMovementPhysics_Parms;

	this->ProcessEvent ( pFnSetMovementPhysics, &SetMovementPhysics_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.DisableSpawnCollision
// [0x00020102] 
// Parameters infos:

void ADunDefDjinn::DisableSpawnCollision ( )
{
	static UFunction* pFnDisableSpawnCollision = NULL;

	if ( ! pFnDisableSpawnCollision )
		pFnDisableSpawnCollision = (UFunction*) UObject::GObjObjects()->Data[ 81830 ];

	ADunDefDjinn_execDisableSpawnCollision_Parms DisableSpawnCollision_Parms;

	this->ProcessEvent ( pFnDisableSpawnCollision, &DisableSpawnCollision_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefDjinn::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 81829 ];

	ADunDefDjinn_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinn.ExecReplicatedFunction
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

void ADunDefDjinn::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 81812 ];

	ADunDefDjinn_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefArabia.DunDefDjinn.GetTowerTargetingDesirability
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            forTower                       ( CPF_Parm )

float ADunDefDjinn::GetTowerTargetingDesirability ( class ADunDefTower* forTower )
{
	static UFunction* pFnGetTowerTargetingDesirability = NULL;

	if ( ! pFnGetTowerTargetingDesirability )
		pFnGetTowerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 81808 ];

	ADunDefDjinn_execGetTowerTargetingDesirability_Parms GetTowerTargetingDesirability_Parms;
	GetTowerTargetingDesirability_Parms.forTower = forTower;

	this->ProcessEvent ( pFnGetTowerTargetingDesirability, &GetTowerTargetingDesirability_Parms, NULL );

	return GetTowerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnManager.PickDjinnLamp
// [0x00020002] 
// Parameters infos:
// class ADjinnLamp*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ADjinnLamp* ADunDefDjinnManager::PickDjinnLamp ( )
{
	static UFunction* pFnPickDjinnLamp = NULL;

	if ( ! pFnPickDjinnLamp )
		pFnPickDjinnLamp = (UFunction*) UObject::GObjObjects()->Data[ 82323 ];

	ADunDefDjinnManager_execPickDjinnLamp_Parms PickDjinnLamp_Parms;

	this->ProcessEvent ( pFnPickDjinnLamp, &PickDjinnLamp_Parms, NULL );

	return PickDjinnLamp_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyGold
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  checkActor                     ( CPF_Parm )

bool ADunDefDjinnManager::IsActorAlreadyGold ( class AActor* checkActor )
{
	static UFunction* pFnIsActorAlreadyGold = NULL;

	if ( ! pFnIsActorAlreadyGold )
		pFnIsActorAlreadyGold = (UFunction*) UObject::GObjObjects()->Data[ 82217 ];

	ADunDefDjinnManager_execIsActorAlreadyGold_Parms IsActorAlreadyGold_Parms;
	IsActorAlreadyGold_Parms.checkActor = checkActor;

	this->ProcessEvent ( pFnIsActorAlreadyGold, &IsActorAlreadyGold_Parms, NULL );

	return IsActorAlreadyGold_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActorIndexed
// [0x00020002] 
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void ADunDefDjinnManager::RemoveGoldenActorIndexed ( int Index )
{
	static UFunction* pFnRemoveGoldenActorIndexed = NULL;

	if ( ! pFnRemoveGoldenActorIndexed )
		pFnRemoveGoldenActorIndexed = (UFunction*) UObject::GObjObjects()->Data[ 82348 ];

	ADunDefDjinnManager_execRemoveGoldenActorIndexed_Parms RemoveGoldenActorIndexed_Parms;
	RemoveGoldenActorIndexed_Parms.Index = Index;

	this->ProcessEvent ( pFnRemoveGoldenActorIndexed, &RemoveGoldenActorIndexed_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  removeActor                    ( CPF_Parm )

void ADunDefDjinnManager::RemoveGoldenActor ( class AActor* removeActor )
{
	static UFunction* pFnRemoveGoldenActor = NULL;

	if ( ! pFnRemoveGoldenActor )
		pFnRemoveGoldenActor = (UFunction*) UObject::GObjObjects()->Data[ 82346 ];

	ADunDefDjinnManager_execRemoveGoldenActor_Parms RemoveGoldenActor_Parms;
	RemoveGoldenActor_Parms.removeActor = removeActor;

	this->ProcessEvent ( pFnRemoveGoldenActor, &RemoveGoldenActor_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnManager.AddGoldenActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActor                       ( CPF_Parm )

void ADunDefDjinnManager::AddGoldenActor ( class AActor* NewActor )
{
	static UFunction* pFnAddGoldenActor = NULL;

	if ( ! pFnAddGoldenActor )
		pFnAddGoldenActor = (UFunction*) UObject::GObjObjects()->Data[ 82344 ];

	ADunDefDjinnManager_execAddGoldenActor_Parms AddGoldenActor_Parms;
	AddGoldenActor_Parms.NewActor = NewActor;

	this->ProcessEvent ( pFnAddGoldenActor, &AddGoldenActor_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyTargeted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  checkActor                     ( CPF_Parm )

bool ADunDefDjinnManager::IsActorAlreadyTargeted ( class AActor* checkActor )
{
	static UFunction* pFnIsActorAlreadyTargeted = NULL;

	if ( ! pFnIsActorAlreadyTargeted )
		pFnIsActorAlreadyTargeted = (UFunction*) UObject::GObjObjects()->Data[ 82219 ];

	ADunDefDjinnManager_execIsActorAlreadyTargeted_Parms IsActorAlreadyTargeted_Parms;
	IsActorAlreadyTargeted_Parms.checkActor = checkActor;

	this->ProcessEvent ( pFnIsActorAlreadyTargeted, &IsActorAlreadyTargeted_Parms, NULL );

	return IsActorAlreadyTargeted_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefDjinnManager.RemoveTargetedActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  removeActor                    ( CPF_Parm )

void ADunDefDjinnManager::RemoveTargetedActor ( class AActor* removeActor )
{
	static UFunction* pFnRemoveTargetedActor = NULL;

	if ( ! pFnRemoveTargetedActor )
		pFnRemoveTargetedActor = (UFunction*) UObject::GObjObjects()->Data[ 82341 ];

	ADunDefDjinnManager_execRemoveTargetedActor_Parms RemoveTargetedActor_Parms;
	RemoveTargetedActor_Parms.removeActor = removeActor;

	this->ProcessEvent ( pFnRemoveTargetedActor, &RemoveTargetedActor_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnManager.AddTargetedActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActor                       ( CPF_Parm )

void ADunDefDjinnManager::AddTargetedActor ( class AActor* NewActor )
{
	static UFunction* pFnAddTargetedActor = NULL;

	if ( ! pFnAddTargetedActor )
		pFnAddTargetedActor = (UFunction*) UObject::GObjObjects()->Data[ 82339 ];

	ADunDefDjinnManager_execAddTargetedActor_Parms AddTargetedActor_Parms;
	AddTargetedActor_Parms.NewActor = NewActor;

	this->ProcessEvent ( pFnAddTargetedActor, &AddTargetedActor_Parms, NULL );
};

// Function DunDefArabia.DunDefDjinnManager.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefDjinnManager::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 82337 ];

	ADunDefDjinnManager_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdatingDelayTurnOff
// [0x00024100] 
// Parameters infos:
// unsigned long                  Force                          ( CPF_Parm )
// float                          delayTurnOff                   ( CPF_OptionalParm | CPF_Parm )

void ADunDefGenieBoss::ForceSkelUpdatingDelayTurnOff ( unsigned long Force, float delayTurnOff )
{
	static UFunction* pFnForceSkelUpdatingDelayTurnOff = NULL;

	if ( ! pFnForceSkelUpdatingDelayTurnOff )
		pFnForceSkelUpdatingDelayTurnOff = (UFunction*) UObject::GObjObjects()->Data[ 82641 ];

	ADunDefGenieBoss_execForceSkelUpdatingDelayTurnOff_Parms ForceSkelUpdatingDelayTurnOff_Parms;
	ForceSkelUpdatingDelayTurnOff_Parms.Force = Force;
	ForceSkelUpdatingDelayTurnOff_Parms.delayTurnOff = delayTurnOff;

	this->ProcessEvent ( pFnForceSkelUpdatingDelayTurnOff, &ForceSkelUpdatingDelayTurnOff_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdating
// [0x00024100] 
// Parameters infos:
// unsigned long                  Force                          ( CPF_Parm )
// unsigned long                  bOnlyForceTickAnimNodes        ( CPF_OptionalParm | CPF_Parm )

void ADunDefGenieBoss::ForceSkelUpdating ( unsigned long Force, unsigned long bOnlyForceTickAnimNodes )
{
	static UFunction* pFnForceSkelUpdating = NULL;

	if ( ! pFnForceSkelUpdating )
		pFnForceSkelUpdating = (UFunction*) UObject::GObjObjects()->Data[ 82638 ];

	ADunDefGenieBoss_execForceSkelUpdating_Parms ForceSkelUpdating_Parms;
	ForceSkelUpdating_Parms.Force = Force;
	ForceSkelUpdating_Parms.bOnlyForceTickAnimNodes = bOnlyForceTickAnimNodes;

	this->ProcessEvent ( pFnForceSkelUpdating, &ForceSkelUpdating_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.ClearElementalEffect
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBoss::ClearElementalEffect ( )
{
	static UFunction* pFnClearElementalEffect = NULL;

	if ( ! pFnClearElementalEffect )
		pFnClearElementalEffect = (UFunction*) UObject::GObjObjects()->Data[ 82637 ];

	ADunDefGenieBoss_execClearElementalEffect_Parms ClearElementalEffect_Parms;

	this->ProcessEvent ( pFnClearElementalEffect, &ClearElementalEffect_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.GetElementalDamageType
// [0x00020102] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* ADunDefGenieBoss::GetElementalDamageType ( )
{
	static UFunction* pFnGetElementalDamageType = NULL;

	if ( ! pFnGetElementalDamageType )
		pFnGetElementalDamageType = (UFunction*) UObject::GObjObjects()->Data[ 82635 ];

	ADunDefGenieBoss_execGetElementalDamageType_Parms GetElementalDamageType_Parms;

	this->ProcessEvent ( pFnGetElementalDamageType, &GetElementalDamageType_Parms, NULL );

	return GetElementalDamageType_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.TakeDamage
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

void ADunDefGenieBoss::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 82626 ];

	ADunDefGenieBoss_eventTakeDamage_Parms TakeDamage_Parms;
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

// Function DunDefArabia.DunDefGenieBoss.GetMiniMapIconColor
// [0x00020102] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FColor ADunDefGenieBoss::GetMiniMapIconColor ( )
{
	static UFunction* pFnGetMiniMapIconColor = NULL;

	if ( ! pFnGetMiniMapIconColor )
		pFnGetMiniMapIconColor = (UFunction*) UObject::GObjObjects()->Data[ 82624 ];

	ADunDefGenieBoss_execGetMiniMapIconColor_Parms GetMiniMapIconColor_Parms;

	this->ProcessEvent ( pFnGetMiniMapIconColor, &GetMiniMapIconColor_Parms, NULL );

	return GetMiniMapIconColor_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.ActivateRageMode
// [0x00020102] 
// Parameters infos:

void ADunDefGenieBoss::ActivateRageMode ( )
{
	static UFunction* pFnActivateRageMode = NULL;

	if ( ! pFnActivateRageMode )
		pFnActivateRageMode = (UFunction*) UObject::GObjObjects()->Data[ 82623 ];

	ADunDefGenieBoss_execActivateRageMode_Parms ActivateRageMode_Parms;

	this->ProcessEvent ( pFnActivateRageMode, &ActivateRageMode_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.PauseAnimationAfterDeath
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventPauseAnimationAfterDeath ( )
{
	static UFunction* pFnPauseAnimationAfterDeath = NULL;

	if ( ! pFnPauseAnimationAfterDeath )
		pFnPauseAnimationAfterDeath = (UFunction*) UObject::GObjObjects()->Data[ 82622 ];

	ADunDefGenieBoss_eventPauseAnimationAfterDeath_Parms PauseAnimationAfterDeath_Parms;

	this->ProcessEvent ( pFnPauseAnimationAfterDeath, &PauseAnimationAfterDeath_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.GetBurpProjectileLocAndRot
// [0x00420002] 
// Parameters infos:
// struct FVector                 burpLoc                        ( CPF_Parm | CPF_OutParm )
// struct FRotator                burpRot                        ( CPF_Parm | CPF_OutParm )

void ADunDefGenieBoss::GetBurpProjectileLocAndRot ( struct FVector* burpLoc, struct FRotator* burpRot )
{
	static UFunction* pFnGetBurpProjectileLocAndRot = NULL;

	if ( ! pFnGetBurpProjectileLocAndRot )
		pFnGetBurpProjectileLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 82619 ];

	ADunDefGenieBoss_execGetBurpProjectileLocAndRot_Parms GetBurpProjectileLocAndRot_Parms;

	this->ProcessEvent ( pFnGetBurpProjectileLocAndRot, &GetBurpProjectileLocAndRot_Parms, NULL );

	if ( burpLoc )
		memcpy ( burpLoc, &GetBurpProjectileLocAndRot_Parms.burpLoc, 0xC );

	if ( burpRot )
		memcpy ( burpRot, &GetBurpProjectileLocAndRot_Parms.burpRot, 0xC );
};

// Function DunDefArabia.DunDefGenieBoss.GetRightEyeLocAndRot
// [0x00420102] 
// Parameters infos:
// struct FVector                 eyeLoc                         ( CPF_Parm | CPF_OutParm )
// struct FRotator                eyeRot                         ( CPF_Parm | CPF_OutParm )

void ADunDefGenieBoss::GetRightEyeLocAndRot ( struct FVector* eyeLoc, struct FRotator* eyeRot )
{
	static UFunction* pFnGetRightEyeLocAndRot = NULL;

	if ( ! pFnGetRightEyeLocAndRot )
		pFnGetRightEyeLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 82616 ];

	ADunDefGenieBoss_execGetRightEyeLocAndRot_Parms GetRightEyeLocAndRot_Parms;

	this->ProcessEvent ( pFnGetRightEyeLocAndRot, &GetRightEyeLocAndRot_Parms, NULL );

	if ( eyeLoc )
		memcpy ( eyeLoc, &GetRightEyeLocAndRot_Parms.eyeLoc, 0xC );

	if ( eyeRot )
		memcpy ( eyeRot, &GetRightEyeLocAndRot_Parms.eyeRot, 0xC );
};

// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeLocAndRot
// [0x00420102] 
// Parameters infos:
// struct FVector                 eyeLoc                         ( CPF_Parm | CPF_OutParm )
// struct FRotator                eyeRot                         ( CPF_Parm | CPF_OutParm )

void ADunDefGenieBoss::GetLeftEyeLocAndRot ( struct FVector* eyeLoc, struct FRotator* eyeRot )
{
	static UFunction* pFnGetLeftEyeLocAndRot = NULL;

	if ( ! pFnGetLeftEyeLocAndRot )
		pFnGetLeftEyeLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 82613 ];

	ADunDefGenieBoss_execGetLeftEyeLocAndRot_Parms GetLeftEyeLocAndRot_Parms;

	this->ProcessEvent ( pFnGetLeftEyeLocAndRot, &GetLeftEyeLocAndRot_Parms, NULL );

	if ( eyeLoc )
		memcpy ( eyeLoc, &GetLeftEyeLocAndRot_Parms.eyeLoc, 0xC );

	if ( eyeRot )
		memcpy ( eyeRot, &GetLeftEyeLocAndRot_Parms.eyeRot, 0xC );
};

// Function DunDefArabia.DunDefGenieBoss.GetRightEyeDmgType
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* ADunDefGenieBoss::GetRightEyeDmgType ( )
{
	static UFunction* pFnGetRightEyeDmgType = NULL;

	if ( ! pFnGetRightEyeDmgType )
		pFnGetRightEyeDmgType = (UFunction*) UObject::GObjObjects()->Data[ 82611 ];

	ADunDefGenieBoss_execGetRightEyeDmgType_Parms GetRightEyeDmgType_Parms;

	this->ProcessEvent ( pFnGetRightEyeDmgType, &GetRightEyeDmgType_Parms, NULL );

	return GetRightEyeDmgType_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeDmgType
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* ADunDefGenieBoss::GetLeftEyeDmgType ( )
{
	static UFunction* pFnGetLeftEyeDmgType = NULL;

	if ( ! pFnGetLeftEyeDmgType )
		pFnGetLeftEyeDmgType = (UFunction*) UObject::GObjObjects()->Data[ 82609 ];

	ADunDefGenieBoss_execGetLeftEyeDmgType_Parms GetLeftEyeDmgType_Parms;

	this->ProcessEvent ( pFnGetLeftEyeDmgType, &GetLeftEyeDmgType_Parms, NULL );

	return GetLeftEyeDmgType_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.PickRightEyeBeam
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBoss::PickRightEyeBeam ( )
{
	static UFunction* pFnPickRightEyeBeam = NULL;

	if ( ! pFnPickRightEyeBeam )
		pFnPickRightEyeBeam = (UFunction*) UObject::GObjObjects()->Data[ 82608 ];

	ADunDefGenieBoss_execPickRightEyeBeam_Parms PickRightEyeBeam_Parms;

	this->ProcessEvent ( pFnPickRightEyeBeam, &PickRightEyeBeam_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.PickLeftEyeBeam
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBoss::PickLeftEyeBeam ( )
{
	static UFunction* pFnPickLeftEyeBeam = NULL;

	if ( ! pFnPickLeftEyeBeam )
		pFnPickLeftEyeBeam = (UFunction*) UObject::GObjObjects()->Data[ 82607 ];

	ADunDefGenieBoss_execPickLeftEyeBeam_Parms PickLeftEyeBeam_Parms;

	this->ProcessEvent ( pFnPickLeftEyeBeam, &PickLeftEyeBeam_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.PlayBiteAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGenieBoss::PlayBiteAnim ( )
{
	static UFunction* pFnPlayBiteAnim = NULL;

	if ( ! pFnPlayBiteAnim )
		pFnPlayBiteAnim = (UFunction*) UObject::GObjObjects()->Data[ 82605 ];

	ADunDefGenieBoss_execPlayBiteAnim_Parms PlayBiteAnim_Parms;

	this->ProcessEvent ( pFnPlayBiteAnim, &PlayBiteAnim_Parms, NULL );

	return PlayBiteAnim_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.GetDjinnSpawnLocandRot
// [0x00420002] 
// Parameters infos:
// struct FName                   SocketName                     ( CPF_Parm )
// struct FVector                 SpawnLoc                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void ADunDefGenieBoss::GetDjinnSpawnLocandRot ( struct FName SocketName, struct FVector* SpawnLoc, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetDjinnSpawnLocandRot = NULL;

	if ( ! pFnGetDjinnSpawnLocandRot )
		pFnGetDjinnSpawnLocandRot = (UFunction*) UObject::GObjObjects()->Data[ 82601 ];

	ADunDefGenieBoss_execGetDjinnSpawnLocandRot_Parms GetDjinnSpawnLocandRot_Parms;
	memcpy ( &GetDjinnSpawnLocandRot_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnGetDjinnSpawnLocandRot, &GetDjinnSpawnLocandRot_Parms, NULL );

	if ( SpawnLoc )
		memcpy ( SpawnLoc, &GetDjinnSpawnLocandRot_Parms.SpawnLoc, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetDjinnSpawnLocandRot_Parms.SpawnRot, 0xC );
};

// Function DunDefArabia.DunDefGenieBoss.GetBiteLocation
// [0x00424002] 
// Parameters infos:
// struct FVector                 biteLocation                   ( CPF_Parm | CPF_OutParm )
// struct FRotator                biteRot                        ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void ADunDefGenieBoss::GetBiteLocation ( struct FVector* biteLocation, struct FRotator* biteRot )
{
	static UFunction* pFnGetBiteLocation = NULL;

	if ( ! pFnGetBiteLocation )
		pFnGetBiteLocation = (UFunction*) UObject::GObjObjects()->Data[ 82598 ];

	ADunDefGenieBoss_execGetBiteLocation_Parms GetBiteLocation_Parms;

	this->ProcessEvent ( pFnGetBiteLocation, &GetBiteLocation_Parms, NULL );

	if ( biteLocation )
		memcpy ( biteLocation, &GetBiteLocation_Parms.biteLocation, 0xC );

	if ( biteRot )
		memcpy ( biteRot, &GetBiteLocation_Parms.biteRot, 0xC );
};

// Function DunDefArabia.DunDefGenieBoss.SpawnBabyDjinn
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventSpawnBabyDjinn ( )
{
	static UFunction* pFnSpawnBabyDjinn = NULL;

	if ( ! pFnSpawnBabyDjinn )
		pFnSpawnBabyDjinn = (UFunction*) UObject::GObjObjects()->Data[ 82597 ];

	ADunDefGenieBoss_eventSpawnBabyDjinn_Parms SpawnBabyDjinn_Parms;

	this->ProcessEvent ( pFnSpawnBabyDjinn, &SpawnBabyDjinn_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.ClearHitList
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventClearHitList ( )
{
	static UFunction* pFnClearHitList = NULL;

	if ( ! pFnClearHitList )
		pFnClearHitList = (UFunction*) UObject::GObjObjects()->Data[ 82596 ];

	ADunDefGenieBoss_eventClearHitList_Parms ClearHitList_Parms;

	this->ProcessEvent ( pFnClearHitList, &ClearHitList_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.BiteStop
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventBiteStop ( )
{
	static UFunction* pFnBiteStop = NULL;

	if ( ! pFnBiteStop )
		pFnBiteStop = (UFunction*) UObject::GObjObjects()->Data[ 82595 ];

	ADunDefGenieBoss_eventBiteStop_Parms BiteStop_Parms;

	this->ProcessEvent ( pFnBiteStop, &BiteStop_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.BiteStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventBiteStart ( )
{
	static UFunction* pFnBiteStart = NULL;

	if ( ! pFnBiteStart )
		pFnBiteStart = (UFunction*) UObject::GObjObjects()->Data[ 82594 ];

	ADunDefGenieBoss_eventBiteStart_Parms BiteStart_Parms;

	this->ProcessEvent ( pFnBiteStart, &BiteStart_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.Burp
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventBurp ( )
{
	static UFunction* pFnBurp = NULL;

	if ( ! pFnBurp )
		pFnBurp = (UFunction*) UObject::GObjObjects()->Data[ 82593 ];

	ADunDefGenieBoss_eventBurp_Parms Burp_Parms;

	this->ProcessEvent ( pFnBurp, &Burp_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.SpawnMoveToLampVFX
// [0x00020102] 
// Parameters infos:
// struct FVector                 particleDir                    ( CPF_Parm )

void ADunDefGenieBoss::SpawnMoveToLampVFX ( struct FVector particleDir )
{
	static UFunction* pFnSpawnMoveToLampVFX = NULL;

	if ( ! pFnSpawnMoveToLampVFX )
		pFnSpawnMoveToLampVFX = (UFunction*) UObject::GObjObjects()->Data[ 82591 ];

	ADunDefGenieBoss_execSpawnMoveToLampVFX_Parms SpawnMoveToLampVFX_Parms;
	memcpy ( &SpawnMoveToLampVFX_Parms.particleDir, &particleDir, 0xC );

	this->ProcessEvent ( pFnSpawnMoveToLampVFX, &SpawnMoveToLampVFX_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.PlayBabySpawnAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGenieBoss::PlayBabySpawnAnim ( )
{
	static UFunction* pFnPlayBabySpawnAnim = NULL;

	if ( ! pFnPlayBabySpawnAnim )
		pFnPlayBabySpawnAnim = (UFunction*) UObject::GObjObjects()->Data[ 82589 ];

	ADunDefGenieBoss_execPlayBabySpawnAnim_Parms PlayBabySpawnAnim_Parms;

	this->ProcessEvent ( pFnPlayBabySpawnAnim, &PlayBabySpawnAnim_Parms, NULL );

	return PlayBabySpawnAnim_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.PlayBurpAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGenieBoss::PlayBurpAnim ( )
{
	static UFunction* pFnPlayBurpAnim = NULL;

	if ( ! pFnPlayBurpAnim )
		pFnPlayBurpAnim = (UFunction*) UObject::GObjObjects()->Data[ 82587 ];

	ADunDefGenieBoss_execPlayBurpAnim_Parms PlayBurpAnim_Parms;

	this->ProcessEvent ( pFnPlayBurpAnim, &PlayBurpAnim_Parms, NULL );

	return PlayBurpAnim_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.PlayDisappearAnim
// [0x00820102] 
// Parameters infos:
// unsigned long                  bPlayEffects                   ( CPF_Parm )
// class AActor*                  newLamp                        ( CPF_Parm )

void ADunDefGenieBoss::PlayDisappearAnim ( unsigned long bPlayEffects, class AActor* newLamp )
{
	static UFunction* pFnPlayDisappearAnim = NULL;

	if ( ! pFnPlayDisappearAnim )
		pFnPlayDisappearAnim = (UFunction*) UObject::GObjObjects()->Data[ 82583 ];

	ADunDefGenieBoss_execPlayDisappearAnim_Parms PlayDisappearAnim_Parms;
	PlayDisappearAnim_Parms.bPlayEffects = bPlayEffects;
	PlayDisappearAnim_Parms.newLamp = newLamp;

	this->ProcessEvent ( pFnPlayDisappearAnim, &PlayDisappearAnim_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.PlayLickAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGenieBoss::PlayLickAnim ( )
{
	static UFunction* pFnPlayLickAnim = NULL;

	if ( ! pFnPlayLickAnim )
		pFnPlayLickAnim = (UFunction*) UObject::GObjObjects()->Data[ 82581 ];

	ADunDefGenieBoss_execPlayLickAnim_Parms PlayLickAnim_Parms;

	this->ProcessEvent ( pFnPlayLickAnim, &PlayLickAnim_Parms, NULL );

	return PlayLickAnim_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.PlaySuperLickAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGenieBoss::PlaySuperLickAnim ( )
{
	static UFunction* pFnPlaySuperLickAnim = NULL;

	if ( ! pFnPlaySuperLickAnim )
		pFnPlaySuperLickAnim = (UFunction*) UObject::GObjObjects()->Data[ 82579 ];

	ADunDefGenieBoss_execPlaySuperLickAnim_Parms PlaySuperLickAnim_Parms;

	this->ProcessEvent ( pFnPlaySuperLickAnim, &PlaySuperLickAnim_Parms, NULL );

	return PlaySuperLickAnim_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.PlayEyeBeamLoop
// [0x00020102] 
// Parameters infos:

void ADunDefGenieBoss::PlayEyeBeamLoop ( )
{
	static UFunction* pFnPlayEyeBeamLoop = NULL;

	if ( ! pFnPlayEyeBeamLoop )
		pFnPlayEyeBeamLoop = (UFunction*) UObject::GObjObjects()->Data[ 82578 ];

	ADunDefGenieBoss_execPlayEyeBeamLoop_Parms PlayEyeBeamLoop_Parms;

	this->ProcessEvent ( pFnPlayEyeBeamLoop, &PlayEyeBeamLoop_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.TongueStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventTongueStart ( )
{
	static UFunction* pFnTongueStart = NULL;

	if ( ! pFnTongueStart )
		pFnTongueStart = (UFunction*) UObject::GObjObjects()->Data[ 82577 ];

	ADunDefGenieBoss_eventTongueStart_Parms TongueStart_Parms;

	this->ProcessEvent ( pFnTongueStart, &TongueStart_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.GetTongueSocketLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   currentSocket                  ( CPF_Parm )

struct FVector ADunDefGenieBoss::GetTongueSocketLocation ( struct FName currentSocket )
{
	static UFunction* pFnGetTongueSocketLocation = NULL;

	if ( ! pFnGetTongueSocketLocation )
		pFnGetTongueSocketLocation = (UFunction*) UObject::GObjObjects()->Data[ 82572 ];

	ADunDefGenieBoss_execGetTongueSocketLocation_Parms GetTongueSocketLocation_Parms;
	memcpy ( &GetTongueSocketLocation_Parms.currentSocket, &currentSocket, 0x8 );

	this->ProcessEvent ( pFnGetTongueSocketLocation, &GetTongueSocketLocation_Parms, NULL );

	return GetTongueSocketLocation_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.StopCrazyEye
// [0x00020102] 
// Parameters infos:

void ADunDefGenieBoss::StopCrazyEye ( )
{
	static UFunction* pFnStopCrazyEye = NULL;

	if ( ! pFnStopCrazyEye )
		pFnStopCrazyEye = (UFunction*) UObject::GObjObjects()->Data[ 82571 ];

	ADunDefGenieBoss_execStopCrazyEye_Parms StopCrazyEye_Parms;

	this->ProcessEvent ( pFnStopCrazyEye, &StopCrazyEye_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.PlayCrazyEyesAttack
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGenieBoss::PlayCrazyEyesAttack ( )
{
	static UFunction* pFnPlayCrazyEyesAttack = NULL;

	if ( ! pFnPlayCrazyEyesAttack )
		pFnPlayCrazyEyesAttack = (UFunction*) UObject::GObjObjects()->Data[ 82569 ];

	ADunDefGenieBoss_execPlayCrazyEyesAttack_Parms PlayCrazyEyesAttack_Parms;

	this->ProcessEvent ( pFnPlayCrazyEyesAttack, &PlayCrazyEyesAttack_Parms, NULL );

	return PlayCrazyEyesAttack_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.StartEyeDamage
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBoss::StartEyeDamage ( )
{
	static UFunction* pFnStartEyeDamage = NULL;

	if ( ! pFnStartEyeDamage )
		pFnStartEyeDamage = (UFunction*) UObject::GObjObjects()->Data[ 82568 ];

	ADunDefGenieBoss_execStartEyeDamage_Parms StartEyeDamage_Parms;

	this->ProcessEvent ( pFnStartEyeDamage, &StartEyeDamage_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeTarget
// [0x00020002] 
// Parameters infos:
// class AActor*                  newLeftEyeTarget               ( CPF_Parm )

void ADunDefGenieBoss::SetLeftEyeTarget ( class AActor* newLeftEyeTarget )
{
	static UFunction* pFnSetLeftEyeTarget = NULL;

	if ( ! pFnSetLeftEyeTarget )
		pFnSetLeftEyeTarget = (UFunction*) UObject::GObjObjects()->Data[ 82566 ];

	ADunDefGenieBoss_execSetLeftEyeTarget_Parms SetLeftEyeTarget_Parms;
	SetLeftEyeTarget_Parms.newLeftEyeTarget = newLeftEyeTarget;

	this->ProcessEvent ( pFnSetLeftEyeTarget, &SetLeftEyeTarget_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.SetRightEyeTarget
// [0x00020002] 
// Parameters infos:
// class AActor*                  newRightEyeTarget              ( CPF_Parm )

void ADunDefGenieBoss::SetRightEyeTarget ( class AActor* newRightEyeTarget )
{
	static UFunction* pFnSetRightEyeTarget = NULL;

	if ( ! pFnSetRightEyeTarget )
		pFnSetRightEyeTarget = (UFunction*) UObject::GObjObjects()->Data[ 82564 ];

	ADunDefGenieBoss_execSetRightEyeTarget_Parms SetRightEyeTarget_Parms;
	SetRightEyeTarget_Parms.newRightEyeTarget = newRightEyeTarget;

	this->ProcessEvent ( pFnSetRightEyeTarget, &SetRightEyeTarget_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.PlayEyeAttackStart
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIgnoreEyeTracking             ( CPF_Parm )

float ADunDefGenieBoss::PlayEyeAttackStart ( unsigned long bIgnoreEyeTracking )
{
	static UFunction* pFnPlayEyeAttackStart = NULL;

	if ( ! pFnPlayEyeAttackStart )
		pFnPlayEyeAttackStart = (UFunction*) UObject::GObjObjects()->Data[ 82560 ];

	ADunDefGenieBoss_execPlayEyeAttackStart_Parms PlayEyeAttackStart_Parms;
	PlayEyeAttackStart_Parms.bIgnoreEyeTracking = bIgnoreEyeTracking;

	this->ProcessEvent ( pFnPlayEyeAttackStart, &PlayEyeAttackStart_Parms, NULL );

	return PlayEyeAttackStart_Parms.ReturnValue;
};

// Function DunDefArabia.DunDefGenieBoss.StartUpEyes
// [0x00020002] 
// Parameters infos:
// float                          DamageTime                     ( CPF_Parm )

void ADunDefGenieBoss::StartUpEyes ( float DamageTime )
{
	static UFunction* pFnStartUpEyes = NULL;

	if ( ! pFnStartUpEyes )
		pFnStartUpEyes = (UFunction*) UObject::GObjObjects()->Data[ 82558 ];

	ADunDefGenieBoss_execStartUpEyes_Parms StartUpEyes_Parms;
	StartUpEyes_Parms.DamageTime = DamageTime;

	this->ProcessEvent ( pFnStartUpEyes, &StartUpEyes_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ADunDefGenieBoss::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 82550 ];

	ADunDefGenieBoss_execAdjustDamage_Parms AdjustDamage_Parms;
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

// Function DunDefArabia.DunDefGenieBoss.UnHideHead
// [0x00020102] 
// Parameters infos:

void ADunDefGenieBoss::UnHideHead ( )
{
	static UFunction* pFnUnHideHead = NULL;

	if ( ! pFnUnHideHead )
		pFnUnHideHead = (UFunction*) UObject::GObjObjects()->Data[ 82540 ];

	ADunDefGenieBoss_execUnHideHead_Parms UnHideHead_Parms;

	this->ProcessEvent ( pFnUnHideHead, &UnHideHead_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.HideHead
// [0x00020102] 
// Parameters infos:

void ADunDefGenieBoss::HideHead ( )
{
	static UFunction* pFnHideHead = NULL;

	if ( ! pFnHideHead )
		pFnHideHead = (UFunction*) UObject::GObjObjects()->Data[ 82539 ];

	ADunDefGenieBoss_execHideHead_Parms HideHead_Parms;

	this->ProcessEvent ( pFnHideHead, &HideHead_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.BringGenieOutOfLamp
// [0x00020102] 
// Parameters infos:
// struct FVector                 lampLoc                        ( CPF_Parm )

void ADunDefGenieBoss::BringGenieOutOfLamp ( struct FVector lampLoc )
{
	static UFunction* pFnBringGenieOutOfLamp = NULL;

	if ( ! pFnBringGenieOutOfLamp )
		pFnBringGenieOutOfLamp = (UFunction*) UObject::GObjObjects()->Data[ 82537 ];

	ADunDefGenieBoss_execBringGenieOutOfLamp_Parms BringGenieOutOfLamp_Parms;
	memcpy ( &BringGenieOutOfLamp_Parms.lampLoc, &lampLoc, 0xC );

	this->ProcessEvent ( pFnBringGenieOutOfLamp, &BringGenieOutOfLamp_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.ShutDownEyes
// [0x00020102] 
// Parameters infos:

void ADunDefGenieBoss::ShutDownEyes ( )
{
	static UFunction* pFnShutDownEyes = NULL;

	if ( ! pFnShutDownEyes )
		pFnShutDownEyes = (UFunction*) UObject::GObjObjects()->Data[ 82509 ];

	ADunDefGenieBoss_execShutDownEyes_Parms ShutDownEyes_Parms;

	this->ProcessEvent ( pFnShutDownEyes, &ShutDownEyes_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.SetRightEyeBeamLocation
// [0x00020102] 
// Parameters infos:
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// struct FVector                 BeamNormal                     ( CPF_Parm )

void ADunDefGenieBoss::SetRightEyeBeamLocation ( struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal )
{
	static UFunction* pFnSetRightEyeBeamLocation = NULL;

	if ( ! pFnSetRightEyeBeamLocation )
		pFnSetRightEyeBeamLocation = (UFunction*) UObject::GObjObjects()->Data[ 82505 ];

	ADunDefGenieBoss_execSetRightEyeBeamLocation_Parms SetRightEyeBeamLocation_Parms;
	memcpy ( &SetRightEyeBeamLocation_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &SetRightEyeBeamLocation_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	memcpy ( &SetRightEyeBeamLocation_Parms.BeamNormal, &BeamNormal, 0xC );

	this->ProcessEvent ( pFnSetRightEyeBeamLocation, &SetRightEyeBeamLocation_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeBeamLocation
// [0x00024102] 
// Parameters infos:
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// struct FVector                 BeamNormal                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefGenieBoss::SetLeftEyeBeamLocation ( struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal )
{
	static UFunction* pFnSetLeftEyeBeamLocation = NULL;

	if ( ! pFnSetLeftEyeBeamLocation )
		pFnSetLeftEyeBeamLocation = (UFunction*) UObject::GObjObjects()->Data[ 82501 ];

	ADunDefGenieBoss_execSetLeftEyeBeamLocation_Parms SetLeftEyeBeamLocation_Parms;
	memcpy ( &SetLeftEyeBeamLocation_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &SetLeftEyeBeamLocation_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	memcpy ( &SetLeftEyeBeamLocation_Parms.BeamNormal, &BeamNormal, 0xC );

	this->ProcessEvent ( pFnSetLeftEyeBeamLocation, &SetLeftEyeBeamLocation_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.TraceRightEye
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGenieBoss::TraceRightEye ( float DeltaTime )
{
	static UFunction* pFnTraceRightEye = NULL;

	if ( ! pFnTraceRightEye )
		pFnTraceRightEye = (UFunction*) UObject::GObjObjects()->Data[ 82489 ];

	ADunDefGenieBoss_execTraceRightEye_Parms TraceRightEye_Parms;
	TraceRightEye_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTraceRightEye, &TraceRightEye_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.TraceLeftEye
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGenieBoss::TraceLeftEye ( float DeltaTime )
{
	static UFunction* pFnTraceLeftEye = NULL;

	if ( ! pFnTraceLeftEye )
		pFnTraceLeftEye = (UFunction*) UObject::GObjObjects()->Data[ 82477 ];

	ADunDefGenieBoss_execTraceLeftEye_Parms TraceLeftEye_Parms;
	TraceLeftEye_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTraceLeftEye, &TraceLeftEye_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.EndEyeAttack
// [0x00020100] 
// Parameters infos:

void ADunDefGenieBoss::EndEyeAttack ( )
{
	static UFunction* pFnEndEyeAttack = NULL;

	if ( ! pFnEndEyeAttack )
		pFnEndEyeAttack = (UFunction*) UObject::GObjObjects()->Data[ 82464 ];

	ADunDefGenieBoss_execEndEyeAttack_Parms EndEyeAttack_Parms;

	this->ProcessEvent ( pFnEndEyeAttack, &EndEyeAttack_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.UpdateHeadLookAt
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGenieBoss::UpdateHeadLookAt ( float DeltaTime )
{
	static UFunction* pFnUpdateHeadLookAt = NULL;

	if ( ! pFnUpdateHeadLookAt )
		pFnUpdateHeadLookAt = (UFunction*) UObject::GObjObjects()->Data[ 82461 ];

	ADunDefGenieBoss_execUpdateHeadLookAt_Parms UpdateHeadLookAt_Parms;
	UpdateHeadLookAt_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateHeadLookAt, &UpdateHeadLookAt_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.SetMovementPhysics
// [0x00020002] 
// Parameters infos:

void ADunDefGenieBoss::SetMovementPhysics ( )
{
	static UFunction* pFnSetMovementPhysics = NULL;

	if ( ! pFnSetMovementPhysics )
		pFnSetMovementPhysics = (UFunction*) UObject::GObjObjects()->Data[ 82460 ];

	ADunDefGenieBoss_execSetMovementPhysics_Parms SetMovementPhysics_Parms;

	this->ProcessEvent ( pFnSetMovementPhysics, &SetMovementPhysics_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGenieBoss::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 82458 ];

	ADunDefGenieBoss_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.SetOnAllOverlappingAuras
// [0x00020002] 
// Parameters infos:
// unsigned long                  bSet                           ( CPF_Parm )

void ADunDefGenieBoss::SetOnAllOverlappingAuras ( unsigned long bSet )
{
	static UFunction* pFnSetOnAllOverlappingAuras = NULL;

	if ( ! pFnSetOnAllOverlappingAuras )
		pFnSetOnAllOverlappingAuras = (UFunction*) UObject::GObjObjects()->Data[ 82455 ];

	ADunDefGenieBoss_execSetOnAllOverlappingAuras_Parms SetOnAllOverlappingAuras_Parms;
	SetOnAllOverlappingAuras_Parms.bSet = bSet;

	this->ProcessEvent ( pFnSetOnAllOverlappingAuras, &SetOnAllOverlappingAuras_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 82454 ];

	ADunDefGenieBoss_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGenieBoss::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 82453 ];

	ADunDefGenieBoss_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefArabia.DunDefGenieBoss.ExecReplicatedFunction
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

void ADunDefGenieBoss::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 82436 ];

	ADunDefGenieBoss_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefArabia.DunDefGenieBoss.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefGenieBoss::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 82434 ];

	ADunDefGenieBoss_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif