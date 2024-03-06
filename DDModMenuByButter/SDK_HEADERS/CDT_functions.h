/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT_functions.h
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

// Function CDT.DunDefHarbinger.FireAttackShootRight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbinger::eventFireAttackShootRight ( )
{
	static UFunction* pFnFireAttackShootRight = NULL;

	if ( ! pFnFireAttackShootRight )
		pFnFireAttackShootRight = (UFunction*) UObject::GObjObjects()->Data[ 80951 ];

	ADunDefHarbinger_eventFireAttackShootRight_Parms FireAttackShootRight_Parms;

	this->ProcessEvent ( pFnFireAttackShootRight, &FireAttackShootRight_Parms, NULL );
};

// Function CDT.DunDefHarbinger.FireAttackShootLeft
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbinger::eventFireAttackShootLeft ( )
{
	static UFunction* pFnFireAttackShootLeft = NULL;

	if ( ! pFnFireAttackShootLeft )
		pFnFireAttackShootLeft = (UFunction*) UObject::GObjObjects()->Data[ 80949 ];

	ADunDefHarbinger_eventFireAttackShootLeft_Parms FireAttackShootLeft_Parms;

	this->ProcessEvent ( pFnFireAttackShootLeft, &FireAttackShootLeft_Parms, NULL );
};

// Function CDT.DunDefHarbinger.FireAttackBegin
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbinger::eventFireAttackBegin ( )
{
	static UFunction* pFnFireAttackBegin = NULL;

	if ( ! pFnFireAttackBegin )
		pFnFireAttackBegin = (UFunction*) UObject::GObjObjects()->Data[ 80948 ];

	ADunDefHarbinger_eventFireAttackBegin_Parms FireAttackBegin_Parms;

	this->ProcessEvent ( pFnFireAttackBegin, &FireAttackBegin_Parms, NULL );
};

// Function CDT.DunDefHarbinger.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbinger::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 80947 ];

	ADunDefHarbinger_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT.DunDefHarbinger.GetProjectileSpawnTransformation
// [0x00420102] 
// Parameters infos:
// struct FName                   socketToUse                    ( CPF_Parm )
// struct FVector                 Position                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                Orientation                    ( CPF_Parm | CPF_OutParm )

void ADunDefHarbinger::GetProjectileSpawnTransformation ( struct FName socketToUse, struct FVector* Position, struct FRotator* Orientation )
{
	static UFunction* pFnGetProjectileSpawnTransformation = NULL;

	if ( ! pFnGetProjectileSpawnTransformation )
		pFnGetProjectileSpawnTransformation = (UFunction*) UObject::GObjObjects()->Data[ 80943 ];

	ADunDefHarbinger_execGetProjectileSpawnTransformation_Parms GetProjectileSpawnTransformation_Parms;
	memcpy ( &GetProjectileSpawnTransformation_Parms.socketToUse, &socketToUse, 0x8 );

	this->ProcessEvent ( pFnGetProjectileSpawnTransformation, &GetProjectileSpawnTransformation_Parms, NULL );

	if ( Position )
		memcpy ( Position, &GetProjectileSpawnTransformation_Parms.Position, 0xC );

	if ( Orientation )
		memcpy ( Orientation, &GetProjectileSpawnTransformation_Parms.Orientation, 0xC );
};

// Function CDT.DunDefHarbinger.IsCurrentlyPlayingAttackAnimation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefHarbinger::IsCurrentlyPlayingAttackAnimation ( )
{
	static UFunction* pFnIsCurrentlyPlayingAttackAnimation = NULL;

	if ( ! pFnIsCurrentlyPlayingAttackAnimation )
		pFnIsCurrentlyPlayingAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 80941 ];

	ADunDefHarbinger_execIsCurrentlyPlayingAttackAnimation_Parms IsCurrentlyPlayingAttackAnimation_Parms;

	this->ProcessEvent ( pFnIsCurrentlyPlayingAttackAnimation, &IsCurrentlyPlayingAttackAnimation_Parms, NULL );

	return IsCurrentlyPlayingAttackAnimation_Parms.ReturnValue;
};

// Function CDT.DunDefHarbinger.PlayShootFireAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefHarbinger::PlayShootFireAnimation ( )
{
	static UFunction* pFnPlayShootFireAnimation = NULL;

	if ( ! pFnPlayShootFireAnimation )
		pFnPlayShootFireAnimation = (UFunction*) UObject::GObjObjects()->Data[ 80939 ];

	ADunDefHarbinger_execPlayShootFireAnimation_Parms PlayShootFireAnimation_Parms;

	this->ProcessEvent ( pFnPlayShootFireAnimation, &PlayShootFireAnimation_Parms, NULL );

	return PlayShootFireAnimation_Parms.ReturnValue;
};

// Function CDT.DunDefHarbinger.IsCurrentlyPlayingChargeAnimation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefHarbinger::IsCurrentlyPlayingChargeAnimation ( )
{
	static UFunction* pFnIsCurrentlyPlayingChargeAnimation = NULL;

	if ( ! pFnIsCurrentlyPlayingChargeAnimation )
		pFnIsCurrentlyPlayingChargeAnimation = (UFunction*) UObject::GObjObjects()->Data[ 80937 ];

	ADunDefHarbinger_execIsCurrentlyPlayingChargeAnimation_Parms IsCurrentlyPlayingChargeAnimation_Parms;

	this->ProcessEvent ( pFnIsCurrentlyPlayingChargeAnimation, &IsCurrentlyPlayingChargeAnimation_Parms, NULL );

	return IsCurrentlyPlayingChargeAnimation_Parms.ReturnValue;
};

// Function CDT.DunDefHarbinger.PlayChargeFireAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefHarbinger::PlayChargeFireAnimation ( )
{
	static UFunction* pFnPlayChargeFireAnimation = NULL;

	if ( ! pFnPlayChargeFireAnimation )
		pFnPlayChargeFireAnimation = (UFunction*) UObject::GObjObjects()->Data[ 80935 ];

	ADunDefHarbinger_execPlayChargeFireAnimation_Parms PlayChargeFireAnimation_Parms;

	this->ProcessEvent ( pFnPlayChargeFireAnimation, &PlayChargeFireAnimation_Parms, NULL );

	return PlayChargeFireAnimation_Parms.ReturnValue;
};

// Function CDT.DunDefHarbinger.PlayHurtAnimation
// [0x00020100] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefHarbinger::PlayHurtAnimation ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayHurtAnimation = NULL;

	if ( ! pFnPlayHurtAnimation )
		pFnPlayHurtAnimation = (UFunction*) UObject::GObjObjects()->Data[ 80932 ];

	ADunDefHarbinger_execPlayHurtAnimation_Parms PlayHurtAnimation_Parms;
	PlayHurtAnimation_Parms.DamageType = DamageType;
	memcpy ( &PlayHurtAnimation_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayHurtAnimation, &PlayHurtAnimation_Parms, NULL );
};

// Function CDT.DunDefHarbinger.PlayJumpAnimation
// [0x00020100] 
// Parameters infos:

void ADunDefHarbinger::PlayJumpAnimation ( )
{
	static UFunction* pFnPlayJumpAnimation = NULL;

	if ( ! pFnPlayJumpAnimation )
		pFnPlayJumpAnimation = (UFunction*) UObject::GObjObjects()->Data[ 80931 ];

	ADunDefHarbinger_execPlayJumpAnimation_Parms PlayJumpAnimation_Parms;

	this->ProcessEvent ( pFnPlayJumpAnimation, &PlayJumpAnimation_Parms, NULL );
};

// Function CDT.DunDefHarbinger.ExecReplicatedFunction
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

void ADunDefHarbinger::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 80914 ];

	ADunDefHarbinger_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function CDT.DunDefHarbingerController.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ADunDefHarbingerController::PawnDied ( class APawn* inPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 80992 ];

	ADunDefHarbingerController_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function CDT.DunDefHarbingerController.CheckPlayer
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           aPlayer                        ( CPF_Parm )

void ADunDefHarbingerController::CheckPlayer ( class ADunDefPlayer* aPlayer )
{
	static UFunction* pFnCheckPlayer = NULL;

	if ( ! pFnCheckPlayer )
		pFnCheckPlayer = (UFunction*) UObject::GObjObjects()->Data[ 80987 ];

	ADunDefHarbingerController_execCheckPlayer_Parms CheckPlayer_Parms;
	CheckPlayer_Parms.aPlayer = aPlayer;

	this->ProcessEvent ( pFnCheckPlayer, &CheckPlayer_Parms, NULL );
};

// Function CDT.DunDefHarbingerController.CheckForNearbyPlayers
// [0x00020002] 
// Parameters infos:

void ADunDefHarbingerController::CheckForNearbyPlayers ( )
{
	static UFunction* pFnCheckForNearbyPlayers = NULL;

	if ( ! pFnCheckForNearbyPlayers )
		pFnCheckForNearbyPlayers = (UFunction*) UObject::GObjObjects()->Data[ 80985 ];

	ADunDefHarbingerController_execCheckForNearbyPlayers_Parms CheckForNearbyPlayers_Parms;

	this->ProcessEvent ( pFnCheckForNearbyPlayers, &CheckForNearbyPlayers_Parms, NULL );
};

// Function CDT.DunDefHarbingerController.ObstructionJump
// [0x00020000] 
// Parameters infos:
// struct FVector                 jumpForwardDir                 ( CPF_Parm )
// struct FVector                 jumpSideDir                    ( CPF_Parm )

void ADunDefHarbingerController::ObstructionJump ( struct FVector jumpForwardDir, struct FVector jumpSideDir )
{
	static UFunction* pFnObstructionJump = NULL;

	if ( ! pFnObstructionJump )
		pFnObstructionJump = (UFunction*) UObject::GObjObjects()->Data[ 80982 ];

	ADunDefHarbingerController_execObstructionJump_Parms ObstructionJump_Parms;
	memcpy ( &ObstructionJump_Parms.jumpForwardDir, &jumpForwardDir, 0xC );
	memcpy ( &ObstructionJump_Parms.jumpSideDir, &jumpSideDir, 0xC );

	this->ProcessEvent ( pFnObstructionJump, &ObstructionJump_Parms, NULL );
};

// Function CDT.DunDefHarbingerController.NotifyTakeHitEX
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDefHarbingerController::NotifyTakeHitEX ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyTakeHitEX = NULL;

	if ( ! pFnNotifyTakeHitEX )
		pFnNotifyTakeHitEX = (UFunction*) UObject::GObjObjects()->Data[ 80968 ];

	ADunDefHarbingerController_execNotifyTakeHitEX_Parms NotifyTakeHitEX_Parms;
	NotifyTakeHitEX_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHitEX_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHitEX_Parms.Damage = Damage;
	NotifyTakeHitEX_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHitEX_Parms.Momentum, &Momentum, 0xC );
	NotifyTakeHitEX_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyTakeHitEX, &NotifyTakeHitEX_Parms, NULL );
};

// Function CDT.DunDefHarbingerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefHarbingerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 80967 ];

	ADunDefHarbingerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function CDT.DunDefHarbingerController.FireProjectiles
// [0x00020000] 
// Parameters infos:
// struct FName                   socketToUse                    ( CPF_Parm )

void ADunDefHarbingerController::FireProjectiles ( struct FName socketToUse )
{
	static UFunction* pFnFireProjectiles = NULL;

	if ( ! pFnFireProjectiles )
		pFnFireProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 80965 ];

	ADunDefHarbingerController_execFireProjectiles_Parms FireProjectiles_Parms;
	memcpy ( &FireProjectiles_Parms.socketToUse, &socketToUse, 0x8 );

	this->ProcessEvent ( pFnFireProjectiles, &FireProjectiles_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif