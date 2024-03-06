/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSpider_functions.h
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

// Function DunDefSpider.DunDefWebProjectile.GetBoostedTargets
// [0x00420000] 
// Parameters infos:
// TArray< class APawn* >         boostedTargets                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ADunDefWebProjectile::GetBoostedTargets ( TArray< class APawn* >* boostedTargets )
{
	static UFunction* pFnGetBoostedTargets = NULL;

	if ( ! pFnGetBoostedTargets )
		pFnGetBoostedTargets = (UFunction*) UObject::GObjObjects()->Data[ 94120 ];

	ADunDefWebProjectile_execGetBoostedTargets_Parms GetBoostedTargets_Parms;

	this->ProcessEvent ( pFnGetBoostedTargets, &GetBoostedTargets_Parms, NULL );

	if ( boostedTargets )
		memcpy ( boostedTargets, &GetBoostedTargets_Parms.boostedTargets, 0xC );
};

// Function DunDefSpider.DunDefWebProjectile.NotifyOfBoostedRemoval
// [0x00020000] 
// Parameters infos:
// class APawn*                   removedBoostee                 ( CPF_Parm )

void ADunDefWebProjectile::NotifyOfBoostedRemoval ( class APawn* removedBoostee )
{
	static UFunction* pFnNotifyOfBoostedRemoval = NULL;

	if ( ! pFnNotifyOfBoostedRemoval )
		pFnNotifyOfBoostedRemoval = (UFunction*) UObject::GObjObjects()->Data[ 94118 ];

	ADunDefWebProjectile_execNotifyOfBoostedRemoval_Parms NotifyOfBoostedRemoval_Parms;
	NotifyOfBoostedRemoval_Parms.removedBoostee = removedBoostee;

	this->ProcessEvent ( pFnNotifyOfBoostedRemoval, &NotifyOfBoostedRemoval_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.GetPawnBoostAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float ADunDefWebProjectile::GetPawnBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetPawnBoostAmount = NULL;

	if ( ! pFnGetPawnBoostAmount )
		pFnGetPawnBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 94115 ];

	ADunDefWebProjectile_execGetPawnBoostAmount_Parms GetPawnBoostAmount_Parms;
	GetPawnBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetPawnBoostAmount, &GetPawnBoostAmount_Parms, NULL );

	return GetPawnBoostAmount_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefWebProjectile.HasPawnBoostingType
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

bool ADunDefWebProjectile::HasPawnBoostingType ( unsigned char boostType )
{
	static UFunction* pFnHasPawnBoostingType = NULL;

	if ( ! pFnHasPawnBoostingType )
		pFnHasPawnBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 94112 ];

	ADunDefWebProjectile_execHasPawnBoostingType_Parms HasPawnBoostingType_Parms;
	HasPawnBoostingType_Parms.boostType = boostType;

	this->ProcessEvent ( pFnHasPawnBoostingType, &HasPawnBoostingType_Parms, NULL );

	return HasPawnBoostingType_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefWebProjectile.Destroyed
// [0x00020102] 
// Parameters infos:

void ADunDefWebProjectile::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 94111 ];

	ADunDefWebProjectile_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.RemoveWebEffect
// [0x00020102] 
// Parameters infos:
// class AActor*                  theAct                         ( CPF_Parm )

void ADunDefWebProjectile::RemoveWebEffect ( class AActor* theAct )
{
	static UFunction* pFnRemoveWebEffect = NULL;

	if ( ! pFnRemoveWebEffect )
		pFnRemoveWebEffect = (UFunction*) UObject::GObjObjects()->Data[ 94108 ];

	ADunDefWebProjectile_execRemoveWebEffect_Parms RemoveWebEffect_Parms;
	RemoveWebEffect_Parms.theAct = theAct;

	this->ProcessEvent ( pFnRemoveWebEffect, &RemoveWebEffect_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.AddWebEffect
// [0x00820102] 
// Parameters infos:
// class AActor*                  theAct                         ( CPF_Parm )

void ADunDefWebProjectile::AddWebEffect ( class AActor* theAct )
{
	static UFunction* pFnAddWebEffect = NULL;

	if ( ! pFnAddWebEffect )
		pFnAddWebEffect = (UFunction*) UObject::GObjObjects()->Data[ 94102 ];

	ADunDefWebProjectile_execAddWebEffect_Parms AddWebEffect_Parms;
	AddWebEffect_Parms.theAct = theAct;

	this->ProcessEvent ( pFnAddWebEffect, &AddWebEffect_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.CanAddWebAffect
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  theAct                         ( CPF_Parm )

bool ADunDefWebProjectile::CanAddWebAffect ( class AActor* theAct )
{
	static UFunction* pFnCanAddWebAffect = NULL;

	if ( ! pFnCanAddWebAffect )
		pFnCanAddWebAffect = (UFunction*) UObject::GObjObjects()->Data[ 94097 ];

	ADunDefWebProjectile_execCanAddWebAffect_Parms CanAddWebAffect_Parms;
	CanAddWebAffect_Parms.theAct = theAct;

	this->ProcessEvent ( pFnCanAddWebAffect, &CanAddWebAffect_Parms, NULL );

	return CanAddWebAffect_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefWebProjectile.EndRadiusDamage
// [0x00020102] 
// Parameters infos:

void ADunDefWebProjectile::EndRadiusDamage ( )
{
	static UFunction* pFnEndRadiusDamage = NULL;

	if ( ! pFnEndRadiusDamage )
		pFnEndRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 94096 ];

	ADunDefWebProjectile_execEndRadiusDamage_Parms EndRadiusDamage_Parms;

	this->ProcessEvent ( pFnEndRadiusDamage, &EndRadiusDamage_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.AffectVictim
// [0x00020102] 
// Parameters infos:
// class AActor*                  Victim                         ( CPF_Parm )

void ADunDefWebProjectile::AffectVictim ( class AActor* Victim )
{
	static UFunction* pFnAffectVictim = NULL;

	if ( ! pFnAffectVictim )
		pFnAffectVictim = (UFunction*) UObject::GObjObjects()->Data[ 94094 ];

	ADunDefWebProjectile_execAffectVictim_Parms AffectVictim_Parms;
	AffectVictim_Parms.Victim = Victim;

	this->ProcessEvent ( pFnAffectVictim, &AffectVictim_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.StartRadiusDamage
// [0x00020102] 
// Parameters infos:

void ADunDefWebProjectile::StartRadiusDamage ( )
{
	static UFunction* pFnStartRadiusDamage = NULL;

	if ( ! pFnStartRadiusDamage )
		pFnStartRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 94093 ];

	ADunDefWebProjectile_execStartRadiusDamage_Parms StartRadiusDamage_Parms;

	this->ProcessEvent ( pFnStartRadiusDamage, &StartRadiusDamage_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.SetHomingTarget
// [0x00024102] 
// Parameters infos:
// class AActor*                  NewTarget                      ( CPF_Parm )
// struct FVector                 HomingLocation                 ( CPF_OptionalParm | CPF_Parm )

void ADunDefWebProjectile::SetHomingTarget ( class AActor* NewTarget, struct FVector HomingLocation )
{
	static UFunction* pFnSetHomingTarget = NULL;

	if ( ! pFnSetHomingTarget )
		pFnSetHomingTarget = (UFunction*) UObject::GObjObjects()->Data[ 94090 ];

	ADunDefWebProjectile_execSetHomingTarget_Parms SetHomingTarget_Parms;
	SetHomingTarget_Parms.NewTarget = NewTarget;
	memcpy ( &SetHomingTarget_Parms.HomingLocation, &HomingLocation, 0xC );

	this->ProcessEvent ( pFnSetHomingTarget, &SetHomingTarget_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.GetTowerBoostAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  checkBoostType                 ( CPF_Parm )

float ADunDefWebProjectile::GetTowerBoostAmount ( unsigned char checkBoostType )
{
	static UFunction* pFnGetTowerBoostAmount = NULL;

	if ( ! pFnGetTowerBoostAmount )
		pFnGetTowerBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 94087 ];

	ADunDefWebProjectile_execGetTowerBoostAmount_Parms GetTowerBoostAmount_Parms;
	GetTowerBoostAmount_Parms.checkBoostType = checkBoostType;

	this->ProcessEvent ( pFnGetTowerBoostAmount, &GetTowerBoostAmount_Parms, NULL );

	return GetTowerBoostAmount_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefWebProjectile.HasTowerBoostingType
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  checkType                      ( CPF_Parm )

bool ADunDefWebProjectile::HasTowerBoostingType ( unsigned char checkType )
{
	static UFunction* pFnHasTowerBoostingType = NULL;

	if ( ! pFnHasTowerBoostingType )
		pFnHasTowerBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 94084 ];

	ADunDefWebProjectile_execHasTowerBoostingType_Parms HasTowerBoostingType_Parms;
	HasTowerBoostingType_Parms.checkType = checkType;

	this->ProcessEvent ( pFnHasTowerBoostingType, &HasTowerBoostingType_Parms, NULL );

	return HasTowerBoostingType_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefWebProjectile.GetTowerBoostingTarget
// [0x00020000] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* ADunDefWebProjectile::GetTowerBoostingTarget ( )
{
	static UFunction* pFnGetTowerBoostingTarget = NULL;

	if ( ! pFnGetTowerBoostingTarget )
		pFnGetTowerBoostingTarget = (UFunction*) UObject::GObjObjects()->Data[ 94082 ];

	ADunDefWebProjectile_execGetTowerBoostingTarget_Parms GetTowerBoostingTarget_Parms;

	this->ProcessEvent ( pFnGetTowerBoostingTarget, &GetTowerBoostingTarget_Parms, NULL );

	return GetTowerBoostingTarget_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefWebProjectile.EndAttachment
// [0x00820102] 
// Parameters infos:
// unsigned long                  bClearList                     ( CPF_Parm )

void ADunDefWebProjectile::EndAttachment ( unsigned long bClearList )
{
	static UFunction* pFnEndAttachment = NULL;

	if ( ! pFnEndAttachment )
		pFnEndAttachment = (UFunction*) UObject::GObjObjects()->Data[ 94076 ];

	ADunDefWebProjectile_execEndAttachment_Parms EndAttachment_Parms;
	EndAttachment_Parms.bClearList = bClearList;

	this->ProcessEvent ( pFnEndAttachment, &EndAttachment_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.SetScaleTime
// [0x00024102] 
// Parameters infos:
// unsigned long                  bDoScaleUp                     ( CPF_OptionalParm | CPF_Parm )

void ADunDefWebProjectile::SetScaleTime ( unsigned long bDoScaleUp )
{
	static UFunction* pFnSetScaleTime = NULL;

	if ( ! pFnSetScaleTime )
		pFnSetScaleTime = (UFunction*) UObject::GObjObjects()->Data[ 94074 ];

	ADunDefWebProjectile_execSetScaleTime_Parms SetScaleTime_Parms;
	SetScaleTime_Parms.bDoScaleUp = bDoScaleUp;

	this->ProcessEvent ( pFnSetScaleTime, &SetScaleTime_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.AddNewAffected
// [0x00020102] 
// Parameters infos:
// class AActor*                  newAffected                    ( CPF_Parm )

void ADunDefWebProjectile::AddNewAffected ( class AActor* newAffected )
{
	static UFunction* pFnAddNewAffected = NULL;

	if ( ! pFnAddNewAffected )
		pFnAddNewAffected = (UFunction*) UObject::GObjObjects()->Data[ 94070 ];

	ADunDefWebProjectile_execAddNewAffected_Parms AddNewAffected_Parms;
	AddNewAffected_Parms.newAffected = newAffected;

	this->ProcessEvent ( pFnAddNewAffected, &AddNewAffected_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.Expire
// [0x00020102] 
// Parameters infos:

void ADunDefWebProjectile::Expire ( )
{
	static UFunction* pFnExpire = NULL;

	if ( ! pFnExpire )
		pFnExpire = (UFunction*) UObject::GObjObjects()->Data[ 94069 ];

	ADunDefWebProjectile_execExpire_Parms Expire_Parms;

	this->ProcessEvent ( pFnExpire, &Expire_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.Explode
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefWebProjectile::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 94063 ];

	ADunDefWebProjectile_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.UpdateAttachStatus
// [0x00020102] 
// Parameters infos:
// class AActor*                  updateActor                    ( CPF_Parm )

void ADunDefWebProjectile::UpdateAttachStatus ( class AActor* updateActor )
{
	static UFunction* pFnUpdateAttachStatus = NULL;

	if ( ! pFnUpdateAttachStatus )
		pFnUpdateAttachStatus = (UFunction*) UObject::GObjObjects()->Data[ 94061 ];

	ADunDefWebProjectile_execUpdateAttachStatus_Parms UpdateAttachStatus_Parms;
	UpdateAttachStatus_Parms.updateActor = updateActor;

	this->ProcessEvent ( pFnUpdateAttachStatus, &UpdateAttachStatus_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.Landed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void ADunDefWebProjectile::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 94058 ];

	ADunDefWebProjectile_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.DoHoming
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefWebProjectile::DoHoming ( float DeltaTime )
{
	static UFunction* pFnDoHoming = NULL;

	if ( ! pFnDoHoming )
		pFnDoHoming = (UFunction*) UObject::GObjObjects()->Data[ 94053 ];

	ADunDefWebProjectile_execDoHoming_Parms DoHoming_Parms;
	DoHoming_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnDoHoming, &DoHoming_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefWebProjectile::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 94049 ];

	ADunDefWebProjectile_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefWebProjectile::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 94047 ];

	ADunDefWebProjectile_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpider.DunDefWebProjectile.ExecReplicatedFunction
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

void ADunDefWebProjectile::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 94030 ];

	ADunDefWebProjectile_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.DrawMyHUD
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDefCrystalCore_PortalDefense::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 93340 ];

	ADunDefCrystalCore_PortalDefense_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.MakeInvincible
// [0x00020002] 
// Parameters infos:

void ADunDefCrystalCore_PortalDefense::MakeInvincible ( )
{
	static UFunction* pFnMakeInvincible = NULL;

	if ( ! pFnMakeInvincible )
		pFnMakeInvincible = (UFunction*) UObject::GObjObjects()->Data[ 93338 ];

	ADunDefCrystalCore_PortalDefense_execMakeInvincible_Parms MakeInvincible_Parms;

	this->ProcessEvent ( pFnMakeInvincible, &MakeInvincible_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.EndWarpInvincibility
// [0x00020002] 
// Parameters infos:

void ADunDefCrystalCore_PortalDefense::EndWarpInvincibility ( )
{
	static UFunction* pFnEndWarpInvincibility = NULL;

	if ( ! pFnEndWarpInvincibility )
		pFnEndWarpInvincibility = (UFunction*) UObject::GObjObjects()->Data[ 93336 ];

	ADunDefCrystalCore_PortalDefense_execEndWarpInvincibility_Parms EndWarpInvincibility_Parms;

	this->ProcessEvent ( pFnEndWarpInvincibility, &EndWarpInvincibility_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.OnTeleport
// [0x00020102] 
// Parameters infos:
// class USeqAct_Teleport*        Action                         ( CPF_Parm )

void ADunDefCrystalCore_PortalDefense::OnTeleport ( class USeqAct_Teleport* Action )
{
	static UFunction* pFnOnTeleport = NULL;

	if ( ! pFnOnTeleport )
		pFnOnTeleport = (UFunction*) UObject::GObjObjects()->Data[ 93334 ];

	ADunDefCrystalCore_PortalDefense_execOnTeleport_Parms OnTeleport_Parms;
	OnTeleport_Parms.Action = Action;

	this->ProcessEvent ( pFnOnTeleport, &OnTeleport_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.UpdateCrystalCore
// [0x00024102] 
// Parameters infos:
// unsigned long                  locked                         ( CPF_OptionalParm | CPF_Parm )

void ADunDefCrystalCore_PortalDefense::UpdateCrystalCore ( unsigned long locked )
{
	static UFunction* pFnUpdateCrystalCore = NULL;

	if ( ! pFnUpdateCrystalCore )
		pFnUpdateCrystalCore = (UFunction*) UObject::GObjObjects()->Data[ 93330 ];

	ADunDefCrystalCore_PortalDefense_execUpdateCrystalCore_Parms UpdateCrystalCore_Parms;
	UpdateCrystalCore_Parms.locked = locked;

	this->ProcessEvent ( pFnUpdateCrystalCore, &UpdateCrystalCore_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.TakeDamage
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefCrystalCore_PortalDefense::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 93321 ];

	ADunDefCrystalCore_PortalDefense_eventTakeDamage_Parms TakeDamage_Parms;
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

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.PlayWarpedFX
// [0x00020102] 
// Parameters infos:

void ADunDefCrystalCore_PortalDefense::PlayWarpedFX ( )
{
	static UFunction* pFnPlayWarpedFX = NULL;

	if ( ! pFnPlayWarpedFX )
		pFnPlayWarpedFX = (UFunction*) UObject::GObjObjects()->Data[ 93320 ];

	ADunDefCrystalCore_PortalDefense_execPlayWarpedFX_Parms PlayWarpedFX_Parms;

	this->ProcessEvent ( pFnPlayWarpedFX, &PlayWarpedFX_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.HandleCoreTouched
// [0x00020002] 
// Parameters infos:
// class AActor*                  TouchingActor                  ( CPF_Parm )

void ADunDefCrystalCore_PortalDefense::HandleCoreTouched ( class AActor* TouchingActor )
{
	static UFunction* pFnHandleCoreTouched = NULL;

	if ( ! pFnHandleCoreTouched )
		pFnHandleCoreTouched = (UFunction*) UObject::GObjObjects()->Data[ 93317 ];

	ADunDefCrystalCore_PortalDefense_execHandleCoreTouched_Parms HandleCoreTouched_Parms;
	HandleCoreTouched_Parms.TouchingActor = TouchingActor;

	this->ProcessEvent ( pFnHandleCoreTouched, &HandleCoreTouched_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.Bump
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefCrystalCore_PortalDefense::eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 93313 ];

	ADunDefCrystalCore_PortalDefense_eventBump_Parms Bump_Parms;
	Bump_Parms.Other = Other;
	Bump_Parms.OtherComp = OtherComp;
	memcpy ( &Bump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.Touch
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefCrystalCore_PortalDefense::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 93308 ];

	ADunDefCrystalCore_PortalDefense_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ADunDefCrystalCore_PortalDefense::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 93304 ];

	ADunDefCrystalCore_PortalDefense_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpider.DunDefCrystalCore_PortalDefense.ExecReplicatedFunction
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

void ADunDefCrystalCore_PortalDefense::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 93287 ];

	ADunDefCrystalCore_PortalDefense_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyEndWarpInvincibility
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_PortalDefense::NotifyEndWarpInvincibility ( )
{
	static UFunction* pFnNotifyEndWarpInvincibility = NULL;

	if ( ! pFnNotifyEndWarpInvincibility )
		pFnNotifyEndWarpInvincibility = (UFunction*) UObject::GObjObjects()->Data[ 93385 ];

	ADunDefGRI_PortalDefense_execNotifyEndWarpInvincibility_Parms NotifyEndWarpInvincibility_Parms;

	this->ProcessEvent ( pFnNotifyEndWarpInvincibility, &NotifyEndWarpInvincibility_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyWarpInvincibility
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_PortalDefense::NotifyWarpInvincibility ( )
{
	static UFunction* pFnNotifyWarpInvincibility = NULL;

	if ( ! pFnNotifyWarpInvincibility )
		pFnNotifyWarpInvincibility = (UFunction*) UObject::GObjObjects()->Data[ 93384 ];

	ADunDefGRI_PortalDefense_execNotifyWarpInvincibility_Parms NotifyWarpInvincibility_Parms;

	this->ProcessEvent ( pFnNotifyWarpInvincibility, &NotifyWarpInvincibility_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_PortalDefense.DrawMyHUD
// [0x00020102] 
// Parameters infos:
// class ADunDefHUD*              H                              ( CPF_Parm )

void ADunDefGRI_PortalDefense::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 93380 ];

	ADunDefGRI_PortalDefense_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_PortalDefense.NotifyPortalHit
// [0x00020002] 
// Parameters infos:

void ADunDefGRI_PortalDefense::NotifyPortalHit ( )
{
	static UFunction* pFnNotifyPortalHit = NULL;

	if ( ! pFnNotifyPortalHit )
		pFnNotifyPortalHit = (UFunction*) UObject::GObjObjects()->Data[ 93376 ];

	ADunDefGRI_PortalDefense_execNotifyPortalHit_Parms NotifyPortalHit_Parms;

	this->ProcessEvent ( pFnNotifyPortalHit, &NotifyPortalHit_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_PortalDefense.SetInCombatPhase
// [0x00020102] 
// Parameters infos:
// unsigned long                  inCombatPhase                  ( CPF_Parm )

void ADunDefGRI_PortalDefense::SetInCombatPhase ( unsigned long inCombatPhase )
{
	static UFunction* pFnSetInCombatPhase = NULL;

	if ( ! pFnSetInCombatPhase )
		pFnSetInCombatPhase = (UFunction*) UObject::GObjObjects()->Data[ 93374 ];

	ADunDefGRI_PortalDefense_execSetInCombatPhase_Parms SetInCombatPhase_Parms;
	SetInCombatPhase_Parms.inCombatPhase = inCombatPhase;

	this->ProcessEvent ( pFnSetInCombatPhase, &SetInCombatPhase_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_PortalDefense.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGRI_PortalDefense::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 93369 ];

	ADunDefGRI_PortalDefense_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.PlayDying
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )

void ADunDefSpider::PlayDying ( class UClass* DamageType, struct FVector HitLoc )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 93540 ];

	ADunDefSpider_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefSpider::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 93535 ];

	ADunDefSpider_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpider.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefSpider::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 93533 ];

	ADunDefSpider_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.SetWebChargeTime
// [0x00020102] 
// Parameters infos:
// float                          NewWebChargeTime               ( CPF_Parm )

void ADunDefSpider::SetWebChargeTime ( float NewWebChargeTime )
{
	static UFunction* pFnSetWebChargeTime = NULL;

	if ( ! pFnSetWebChargeTime )
		pFnSetWebChargeTime = (UFunction*) UObject::GObjObjects()->Data[ 93531 ];

	ADunDefSpider_execSetWebChargeTime_Parms SetWebChargeTime_Parms;
	SetWebChargeTime_Parms.NewWebChargeTime = NewWebChargeTime;

	this->ProcessEvent ( pFnSetWebChargeTime, &SetWebChargeTime_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.UpdateWebParticle
// [0x00020102] 
// Parameters infos:
// float                          NewScale                       ( CPF_Parm )

void ADunDefSpider::UpdateWebParticle ( float NewScale )
{
	static UFunction* pFnUpdateWebParticle = NULL;

	if ( ! pFnUpdateWebParticle )
		pFnUpdateWebParticle = (UFunction*) UObject::GObjObjects()->Data[ 93528 ];

	ADunDefSpider_execUpdateWebParticle_Parms UpdateWebParticle_Parms;
	UpdateWebParticle_Parms.NewScale = NewScale;

	this->ProcessEvent ( pFnUpdateWebParticle, &UpdateWebParticle_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.PlayMeleeAttackAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AnimationIndex                 ( CPF_Parm )

float ADunDefSpider::PlayMeleeAttackAnimation ( int AnimationIndex )
{
	static UFunction* pFnPlayMeleeAttackAnimation = NULL;

	if ( ! pFnPlayMeleeAttackAnimation )
		pFnPlayMeleeAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 93525 ];

	ADunDefSpider_execPlayMeleeAttackAnimation_Parms PlayMeleeAttackAnimation_Parms;
	PlayMeleeAttackAnimation_Parms.AnimationIndex = AnimationIndex;

	this->ProcessEvent ( pFnPlayMeleeAttackAnimation, &PlayMeleeAttackAnimation_Parms, NULL );

	return PlayMeleeAttackAnimation_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpider.ShutDownWebCharge
// [0x00020102] 
// Parameters infos:

void ADunDefSpider::ShutDownWebCharge ( )
{
	static UFunction* pFnShutDownWebCharge = NULL;

	if ( ! pFnShutDownWebCharge )
		pFnShutDownWebCharge = (UFunction*) UObject::GObjObjects()->Data[ 93524 ];

	ADunDefSpider_execShutDownWebCharge_Parms ShutDownWebCharge_Parms;

	this->ProcessEvent ( pFnShutDownWebCharge, &ShutDownWebCharge_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.ShootWeb
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSpider::eventShootWeb ( )
{
	static UFunction* pFnShootWeb = NULL;

	if ( ! pFnShootWeb )
		pFnShootWeb = (UFunction*) UObject::GObjObjects()->Data[ 93523 ];

	ADunDefSpider_eventShootWeb_Parms ShootWeb_Parms;

	this->ProcessEvent ( pFnShootWeb, &ShootWeb_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.MeleeSwingEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSpider::eventMeleeSwingEnd ( )
{
	static UFunction* pFnMeleeSwingEnd = NULL;

	if ( ! pFnMeleeSwingEnd )
		pFnMeleeSwingEnd = (UFunction*) UObject::GObjObjects()->Data[ 93522 ];

	ADunDefSpider_eventMeleeSwingEnd_Parms MeleeSwingEnd_Parms;

	this->ProcessEvent ( pFnMeleeSwingEnd, &MeleeSwingEnd_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.MeleeSwingStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSpider::eventMeleeSwingStart ( )
{
	static UFunction* pFnMeleeSwingStart = NULL;

	if ( ! pFnMeleeSwingStart )
		pFnMeleeSwingStart = (UFunction*) UObject::GObjObjects()->Data[ 93520 ];

	ADunDefSpider_eventMeleeSwingStart_Parms MeleeSwingStart_Parms;

	this->ProcessEvent ( pFnMeleeSwingStart, &MeleeSwingStart_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.GetMeleeSwingLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefSpider::GetMeleeSwingLocation ( )
{
	static UFunction* pFnGetMeleeSwingLocation = NULL;

	if ( ! pFnGetMeleeSwingLocation )
		pFnGetMeleeSwingLocation = (UFunction*) UObject::GObjObjects()->Data[ 93516 ];

	ADunDefSpider_execGetMeleeSwingLocation_Parms GetMeleeSwingLocation_Parms;

	this->ProcessEvent ( pFnGetMeleeSwingLocation, &GetMeleeSwingLocation_Parms, NULL );

	return GetMeleeSwingLocation_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpider.GetWebProjectileLocAndRot
// [0x00420102] 
// Parameters infos:
// struct FVector                 Position                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                Orientation                    ( CPF_Parm | CPF_OutParm )

void ADunDefSpider::GetWebProjectileLocAndRot ( struct FVector* Position, struct FRotator* Orientation )
{
	static UFunction* pFnGetWebProjectileLocAndRot = NULL;

	if ( ! pFnGetWebProjectileLocAndRot )
		pFnGetWebProjectileLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 93513 ];

	ADunDefSpider_execGetWebProjectileLocAndRot_Parms GetWebProjectileLocAndRot_Parms;

	this->ProcessEvent ( pFnGetWebProjectileLocAndRot, &GetWebProjectileLocAndRot_Parms, NULL );

	if ( Position )
		memcpy ( Position, &GetWebProjectileLocAndRot_Parms.Position, 0xC );

	if ( Orientation )
		memcpy ( Orientation, &GetWebProjectileLocAndRot_Parms.Orientation, 0xC );
};

// Function DunDefSpider.DunDefSpider.PlayAttackAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpider::PlayAttackAnimation ( )
{
	static UFunction* pFnPlayAttackAnimation = NULL;

	if ( ! pFnPlayAttackAnimation )
		pFnPlayAttackAnimation = (UFunction*) UObject::GObjObjects()->Data[ 93511 ];

	ADunDefSpider_execPlayAttackAnimation_Parms PlayAttackAnimation_Parms;

	this->ProcessEvent ( pFnPlayAttackAnimation, &PlayAttackAnimation_Parms, NULL );

	return PlayAttackAnimation_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpider.PlayWebChargeAnim
// [0x00020102] 
// Parameters infos:

void ADunDefSpider::PlayWebChargeAnim ( )
{
	static UFunction* pFnPlayWebChargeAnim = NULL;

	if ( ! pFnPlayWebChargeAnim )
		pFnPlayWebChargeAnim = (UFunction*) UObject::GObjObjects()->Data[ 93510 ];

	ADunDefSpider_execPlayWebChargeAnim_Parms PlayWebChargeAnim_Parms;

	this->ProcessEvent ( pFnPlayWebChargeAnim, &PlayWebChargeAnim_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.PlayWebShootAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpider::PlayWebShootAnim ( )
{
	static UFunction* pFnPlayWebShootAnim = NULL;

	if ( ! pFnPlayWebShootAnim )
		pFnPlayWebShootAnim = (UFunction*) UObject::GObjObjects()->Data[ 93508 ];

	ADunDefSpider_execPlayWebShootAnim_Parms PlayWebShootAnim_Parms;

	this->ProcessEvent ( pFnPlayWebShootAnim, &PlayWebShootAnim_Parms, NULL );

	return PlayWebShootAnim_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpider.PlayLungeAnimation
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpider::PlayLungeAnimation ( )
{
	static UFunction* pFnPlayLungeAnimation = NULL;

	if ( ! pFnPlayLungeAnimation )
		pFnPlayLungeAnimation = (UFunction*) UObject::GObjObjects()->Data[ 93506 ];

	ADunDefSpider_execPlayLungeAnimation_Parms PlayLungeAnimation_Parms;

	this->ProcessEvent ( pFnPlayLungeAnimation, &PlayLungeAnimation_Parms, NULL );

	return PlayLungeAnimation_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpider.UpdateDifficultyValues
// [0x00024002] 
// Parameters infos:
// unsigned long                  UpdateMaterial                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  onlyDynamicValues              ( CPF_OptionalParm | CPF_Parm )

void ADunDefSpider::UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues )
{
	static UFunction* pFnUpdateDifficultyValues = NULL;

	if ( ! pFnUpdateDifficultyValues )
		pFnUpdateDifficultyValues = (UFunction*) UObject::GObjObjects()->Data[ 93496 ];

	ADunDefSpider_execUpdateDifficultyValues_Parms UpdateDifficultyValues_Parms;
	UpdateDifficultyValues_Parms.UpdateMaterial = UpdateMaterial;
	UpdateDifficultyValues_Parms.onlyDynamicValues = onlyDynamicValues;

	this->ProcessEvent ( pFnUpdateDifficultyValues, &UpdateDifficultyValues_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.PlaySpawnEffect
// [0x00020102] 
// Parameters infos:

void ADunDefSpider::PlaySpawnEffect ( )
{
	static UFunction* pFnPlaySpawnEffect = NULL;

	if ( ! pFnPlaySpawnEffect )
		pFnPlaySpawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 93495 ];

	ADunDefSpider_execPlaySpawnEffect_Parms PlaySpawnEffect_Parms;

	this->ProcessEvent ( pFnPlaySpawnEffect, &PlaySpawnEffect_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.ClearSpawnEffect
// [0x00020002] 
// Parameters infos:

void ADunDefSpider::ClearSpawnEffect ( )
{
	static UFunction* pFnClearSpawnEffect = NULL;

	if ( ! pFnClearSpawnEffect )
		pFnClearSpawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 93494 ];

	ADunDefSpider_execClearSpawnEffect_Parms ClearSpawnEffect_Parms;

	this->ProcessEvent ( pFnClearSpawnEffect, &ClearSpawnEffect_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefSpider::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 93492 ];

	ADunDefSpider_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSpider.DunDefSpider.ExecReplicatedFunction
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

void ADunDefSpider::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 93475 ];

	ADunDefSpider_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefSpider.DunDefSpider.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefSpider::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 93474 ];

	ADunDefSpider_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpider.DunDefMapInfo_PortalDefense.GetMaxAllowedCoreHits
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            difficulty                     ( CPF_Parm )

int UDunDefMapInfo_PortalDefense::GetMaxAllowedCoreHits ( int difficulty )
{
	static UFunction* pFnGetMaxAllowedCoreHits = NULL;

	if ( ! pFnGetMaxAllowedCoreHits )
		pFnGetMaxAllowedCoreHits = (UFunction*) UObject::GObjObjects()->Data[ 93371 ];

	UDunDefMapInfo_PortalDefense_execGetMaxAllowedCoreHits_Parms GetMaxAllowedCoreHits_Parms;
	GetMaxAllowedCoreHits_Parms.difficulty = difficulty;

	this->ProcessEvent ( pFnGetMaxAllowedCoreHits, &GetMaxAllowedCoreHits_Parms, NULL );

	return GetMaxAllowedCoreHits_Parms.ReturnValue;
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameScaleMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameInfo_PortalDefense::GetGameScaleMultiplier ( )
{
	static UFunction* pFnGetGameScaleMultiplier = NULL;

	if ( ! pFnGetGameScaleMultiplier )
		pFnGetGameScaleMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 93502 ];

	AGameInfo_PortalDefense_execGetGameScaleMultiplier_Parms GetGameScaleMultiplier_Parms;

	this->ProcessEvent ( pFnGetGameScaleMultiplier, &GetGameScaleMultiplier_Parms, NULL );

	return GetGameScaleMultiplier_Parms.ReturnValue;
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameDamageMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameInfo_PortalDefense::GetGameDamageMultiplier ( )
{
	static UFunction* pFnGetGameDamageMultiplier = NULL;

	if ( ! pFnGetGameDamageMultiplier )
		pFnGetGameDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 93500 ];

	AGameInfo_PortalDefense_execGetGameDamageMultiplier_Parms GetGameDamageMultiplier_Parms;

	this->ProcessEvent ( pFnGetGameDamageMultiplier, &GetGameDamageMultiplier_Parms, NULL );

	return GetGameDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefSpider.GameInfo_PortalDefense.GetGameHealthMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameInfo_PortalDefense::GetGameHealthMultiplier ( )
{
	static UFunction* pFnGetGameHealthMultiplier = NULL;

	if ( ! pFnGetGameHealthMultiplier )
		pFnGetGameHealthMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 93504 ];

	AGameInfo_PortalDefense_execGetGameHealthMultiplier_Parms GetGameHealthMultiplier_Parms;

	this->ProcessEvent ( pFnGetGameHealthMultiplier, &GetGameHealthMultiplier_Parms, NULL );

	return GetGameHealthMultiplier_Parms.ReturnValue;
};

// Function DunDefSpider.GameInfo_PortalDefense.UpdateEnemyMultipliers
// [0x00820002] 
// Parameters infos:
// float                          DmgPct                         ( CPF_Parm )

void AGameInfo_PortalDefense::UpdateEnemyMultipliers ( float DmgPct )
{
	static UFunction* pFnUpdateEnemyMultipliers = NULL;

	if ( ! pFnUpdateEnemyMultipliers )
		pFnUpdateEnemyMultipliers = (UFunction*) UObject::GObjObjects()->Data[ 94135 ];

	AGameInfo_PortalDefense_execUpdateEnemyMultipliers_Parms UpdateEnemyMultipliers_Parms;
	UpdateEnemyMultipliers_Parms.DmgPct = DmgPct;

	this->ProcessEvent ( pFnUpdateEnemyMultipliers, &UpdateEnemyMultipliers_Parms, NULL );
};

// Function DunDefSpider.GameInfo_PortalDefense.SetWaveNumber
// [0x00020002] 
// Parameters infos:
// int                            theWaveNumber                  ( CPF_Parm )

void AGameInfo_PortalDefense::SetWaveNumber ( int theWaveNumber )
{
	static UFunction* pFnSetWaveNumber = NULL;

	if ( ! pFnSetWaveNumber )
		pFnSetWaveNumber = (UFunction*) UObject::GObjObjects()->Data[ 94133 ];

	AGameInfo_PortalDefense_execSetWaveNumber_Parms SetWaveNumber_Parms;
	SetWaveNumber_Parms.theWaveNumber = theWaveNumber;

	this->ProcessEvent ( pFnSetWaveNumber, &SetWaveNumber_Parms, NULL );
};

// Function DunDefSpider.GameInfo_PortalDefense.DoWaveSkipping
// [0x00024002] 
// Parameters infos:
// unsigned long                  bAllowArbritraryWaveSkipping   ( CPF_OptionalParm | CPF_Parm )

void AGameInfo_PortalDefense::DoWaveSkipping ( unsigned long bAllowArbritraryWaveSkipping )
{
	static UFunction* pFnDoWaveSkipping = NULL;

	if ( ! pFnDoWaveSkipping )
		pFnDoWaveSkipping = (UFunction*) UObject::GObjObjects()->Data[ 94131 ];

	AGameInfo_PortalDefense_execDoWaveSkipping_Parms DoWaveSkipping_Parms;
	DoWaveSkipping_Parms.bAllowArbritraryWaveSkipping = bAllowArbritraryWaveSkipping;

	this->ProcessEvent ( pFnDoWaveSkipping, &DoWaveSkipping_Parms, NULL );
};

// Function DunDefSpider.GameInfo_PortalDefense.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameInfo_PortalDefense::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 94130 ];

	AGameInfo_PortalDefense_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_VDay.DrawExtraEnemyMinimapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )
// class ADunDefEnemy*            Enemy                          ( CPF_Parm )

void ADunDefGRI_VDay::DrawExtraEnemyMinimapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap, class ADunDefEnemy* Enemy )
{
	static UFunction* pFnDrawExtraEnemyMinimapIcon = NULL;

	if ( ! pFnDrawExtraEnemyMinimapIcon )
		pFnDrawExtraEnemyMinimapIcon = (UFunction*) UObject::GObjObjects()->Data[ 93417 ];

	ADunDefGRI_VDay_execDrawExtraEnemyMinimapIcon_Parms DrawExtraEnemyMinimapIcon_Parms;
	DrawExtraEnemyMinimapIcon_Parms.Canvas = Canvas;
	DrawExtraEnemyMinimapIcon_Parms.MiniMap = MiniMap;
	DrawExtraEnemyMinimapIcon_Parms.Enemy = Enemy;

	this->ProcessEvent ( pFnDrawExtraEnemyMinimapIcon, &DrawExtraEnemyMinimapIcon_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_VDay.GenderSpawned
// [0x00020102] 
// Parameters infos:
// class ADunDefEnemy*            enemyActor                     ( CPF_Parm )
// unsigned long                  isBoy                          ( CPF_Parm )

void ADunDefGRI_VDay::GenderSpawned ( class ADunDefEnemy* enemyActor, unsigned long isBoy )
{
	static UFunction* pFnGenderSpawned = NULL;

	if ( ! pFnGenderSpawned )
		pFnGenderSpawned = (UFunction*) UObject::GObjObjects()->Data[ 93413 ];

	ADunDefGRI_VDay_execGenderSpawned_Parms GenderSpawned_Parms;
	GenderSpawned_Parms.enemyActor = enemyActor;
	GenderSpawned_Parms.isBoy = isBoy;

	this->ProcessEvent ( pFnGenderSpawned, &GenderSpawned_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_VDay.PairMatched
// [0x00020102] 
// Parameters infos:
// struct FVector                 Loc1                           ( CPF_Parm )
// struct FVector                 Loc2                           ( CPF_Parm )
// class ADunDefEnemy*            enemyArch                      ( CPF_Parm )

void ADunDefGRI_VDay::PairMatched ( struct FVector Loc1, struct FVector Loc2, class ADunDefEnemy* enemyArch )
{
	static UFunction* pFnPairMatched = NULL;

	if ( ! pFnPairMatched )
		pFnPairMatched = (UFunction*) UObject::GObjObjects()->Data[ 93408 ];

	ADunDefGRI_VDay_execPairMatched_Parms PairMatched_Parms;
	memcpy ( &PairMatched_Parms.Loc1, &Loc1, 0xC );
	memcpy ( &PairMatched_Parms.Loc2, &Loc2, 0xC );
	PairMatched_Parms.enemyArch = enemyArch;

	this->ProcessEvent ( pFnPairMatched, &PairMatched_Parms, NULL );
};

// Function DunDefSpider.DunDefGRI_VDay.ExecReplicatedFunction
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

void ADunDefGRI_VDay::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 93391 ];

	ADunDefGRI_VDay_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefSpider.DunDefSpiderController.GetToolTipAttackRange
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpiderController::GetToolTipAttackRange ( )
{
	static UFunction* pFnGetToolTipAttackRange = NULL;

	if ( ! pFnGetToolTipAttackRange )
		pFnGetToolTipAttackRange = (UFunction*) UObject::GObjObjects()->Data[ 93692 ];

	ADunDefSpiderController_execGetToolTipAttackRange_Parms GetToolTipAttackRange_Parms;

	this->ProcessEvent ( pFnGetToolTipAttackRange, &GetToolTipAttackRange_Parms, NULL );

	return GetToolTipAttackRange_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderController.GetTargetableRange
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bCheckAttackRange              ( CPF_OptionalParm | CPF_Parm )

float ADunDefSpiderController::GetTargetableRange ( unsigned long bCheckAttackRange )
{
	static UFunction* pFnGetTargetableRange = NULL;

	if ( ! pFnGetTargetableRange )
		pFnGetTargetableRange = (UFunction*) UObject::GObjObjects()->Data[ 93689 ];

	ADunDefSpiderController_execGetTargetableRange_Parms GetTargetableRange_Parms;
	GetTargetableRange_Parms.bCheckAttackRange = bCheckAttackRange;

	this->ProcessEvent ( pFnGetTargetableRange, &GetTargetableRange_Parms, NULL );

	return GetTargetableRange_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderController.GetAttackDamage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefSpiderController::GetAttackDamage ( )
{
	static UFunction* pFnGetAttackDamage = NULL;

	if ( ! pFnGetAttackDamage )
		pFnGetAttackDamage = (UFunction*) UObject::GObjObjects()->Data[ 93687 ];

	ADunDefSpiderController_execGetAttackDamage_Parms GetAttackDamage_Parms;

	this->ProcessEvent ( pFnGetAttackDamage, &GetAttackDamage_Parms, NULL );

	return GetAttackDamage_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderController.CancelCurrentTarget
// [0x00020000] 
// Parameters infos:
// int                            Reason                         ( CPF_Parm )

void ADunDefSpiderController::CancelCurrentTarget ( int Reason )
{
	static UFunction* pFnCancelCurrentTarget = NULL;

	if ( ! pFnCancelCurrentTarget )
		pFnCancelCurrentTarget = (UFunction*) UObject::GObjObjects()->Data[ 93685 ];

	ADunDefSpiderController_execCancelCurrentTarget_Parms CancelCurrentTarget_Parms;
	CancelCurrentTarget_Parms.Reason = Reason;

	this->ProcessEvent ( pFnCancelCurrentTarget, &CancelCurrentTarget_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.SetMyQueen
// [0x00020002] 
// Parameters infos:
// class ADunDefSpiderQueenController* newQueen                       ( CPF_Parm )

void ADunDefSpiderController::SetMyQueen ( class ADunDefSpiderQueenController* newQueen )
{
	static UFunction* pFnSetMyQueen = NULL;

	if ( ! pFnSetMyQueen )
		pFnSetMyQueen = (UFunction*) UObject::GObjObjects()->Data[ 93683 ];

	ADunDefSpiderController_execSetMyQueen_Parms SetMyQueen_Parms;
	SetMyQueen_Parms.newQueen = newQueen;

	this->ProcessEvent ( pFnSetMyQueen, &SetMyQueen_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.NotifyQueenOfDeath
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ADunDefSpiderController::NotifyQueenOfDeath ( class APawn* inPawn )
{
	static UFunction* pFnNotifyQueenOfDeath = NULL;

	if ( ! pFnNotifyQueenOfDeath )
		pFnNotifyQueenOfDeath = (UFunction*) UObject::GObjObjects()->Data[ 93681 ];

	ADunDefSpiderController_execNotifyQueenOfDeath_Parms NotifyQueenOfDeath_Parms;
	NotifyQueenOfDeath_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnNotifyQueenOfDeath, &NotifyQueenOfDeath_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.PawnDied
// [0x00020002] 
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )

void ADunDefSpiderController::PawnDied ( class APawn* inPawn )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 93679 ];

	ADunDefSpiderController_execPawnDied_Parms PawnDied_Parms;
	PawnDied_Parms.inPawn = inPawn;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.IsWithinAttackRange
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )
// float                          AttackRangeOffset              ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCheckDeltaZ                   ( CPF_OptionalParm | CPF_Parm )

bool ADunDefSpiderController::IsWithinAttackRange ( class AActor* Other, float AttackRangeOffset, unsigned long bCheckDeltaZ )
{
	static UFunction* pFnIsWithinAttackRange = NULL;

	if ( ! pFnIsWithinAttackRange )
		pFnIsWithinAttackRange = (UFunction*) UObject::GObjObjects()->Data[ 93674 ];

	ADunDefSpiderController_execIsWithinAttackRange_Parms IsWithinAttackRange_Parms;
	IsWithinAttackRange_Parms.Other = Other;
	IsWithinAttackRange_Parms.AttackRangeOffset = AttackRangeOffset;
	IsWithinAttackRange_Parms.bCheckDeltaZ = bCheckDeltaZ;

	this->ProcessEvent ( pFnIsWithinAttackRange, &IsWithinAttackRange_Parms, NULL );

	return IsWithinAttackRange_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderController.ShootWeb
// [0x00820002] 
// Parameters infos:

void ADunDefSpiderController::ShootWeb ( )
{
	static UFunction* pFnShootWeb = NULL;

	if ( ! pFnShootWeb )
		pFnShootWeb = (UFunction*) UObject::GObjObjects()->Data[ 93666 ];

	ADunDefSpiderController_execShootWeb_Parms ShootWeb_Parms;

	this->ProcessEvent ( pFnShootWeb, &ShootWeb_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.GetAttackRange
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpiderController::GetAttackRange ( )
{
	static UFunction* pFnGetAttackRange = NULL;

	if ( ! pFnGetAttackRange )
		pFnGetAttackRange = (UFunction*) UObject::GObjObjects()->Data[ 93664 ];

	ADunDefSpiderController_execGetAttackRange_Parms GetAttackRange_Parms;

	this->ProcessEvent ( pFnGetAttackRange, &GetAttackRange_Parms, NULL );

	return GetAttackRange_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderController.DoLungeAttack
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderController::DoLungeAttack ( )
{
	static UFunction* pFnDoLungeAttack = NULL;

	if ( ! pFnDoLungeAttack )
		pFnDoLungeAttack = (UFunction*) UObject::GObjObjects()->Data[ 93659 ];

	ADunDefSpiderController_execDoLungeAttack_Parms DoLungeAttack_Parms;

	this->ProcessEvent ( pFnDoLungeAttack, &DoLungeAttack_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.DoWebAttack
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderController::DoWebAttack ( )
{
	static UFunction* pFnDoWebAttack = NULL;

	if ( ! pFnDoWebAttack )
		pFnDoWebAttack = (UFunction*) UObject::GObjObjects()->Data[ 93657 ];

	ADunDefSpiderController_execDoWebAttack_Parms DoWebAttack_Parms;

	this->ProcessEvent ( pFnDoWebAttack, &DoWebAttack_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.CheckForCustomAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderController::CheckForCustomAttacks ( )
{
	static UFunction* pFnCheckForCustomAttacks = NULL;

	if ( ! pFnCheckForCustomAttacks )
		pFnCheckForCustomAttacks = (UFunction*) UObject::GObjObjects()->Data[ 93654 ];

	ADunDefSpiderController_execCheckForCustomAttacks_Parms CheckForCustomAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomAttacks, &CheckForCustomAttacks_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.AllowWebAttack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefSpiderController::AllowWebAttack ( )
{
	static UFunction* pFnAllowWebAttack = NULL;

	if ( ! pFnAllowWebAttack )
		pFnAllowWebAttack = (UFunction*) UObject::GObjObjects()->Data[ 93652 ];

	ADunDefSpiderController_execAllowWebAttack_Parms AllowWebAttack_Parms;

	this->ProcessEvent ( pFnAllowWebAttack, &AllowWebAttack_Parms, NULL );

	return AllowWebAttack_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderController.AddToSwingHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  newEntry                       ( CPF_Parm )

bool ADunDefSpiderController::AddToSwingHurtList ( class AActor* newEntry )
{
	static UFunction* pFnAddToSwingHurtList = NULL;

	if ( ! pFnAddToSwingHurtList )
		pFnAddToSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 93635 ];

	ADunDefSpiderController_execAddToSwingHurtList_Parms AddToSwingHurtList_Parms;
	AddToSwingHurtList_Parms.newEntry = newEntry;

	this->ProcessEvent ( pFnAddToSwingHurtList, &AddToSwingHurtList_Parms, NULL );

	return AddToSwingHurtList_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderController.EndMeleeSwing
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderController::EndMeleeSwing ( )
{
	static UFunction* pFnEndMeleeSwing = NULL;

	if ( ! pFnEndMeleeSwing )
		pFnEndMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 93634 ];

	ADunDefSpiderController_execEndMeleeSwing_Parms EndMeleeSwing_Parms;

	this->ProcessEvent ( pFnEndMeleeSwing, &EndMeleeSwing_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.StartMeleeSwing
// [0x00020000] 
// Parameters infos:

void ADunDefSpiderController::StartMeleeSwing ( )
{
	static UFunction* pFnStartMeleeSwing = NULL;

	if ( ! pFnStartMeleeSwing )
		pFnStartMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 93633 ];

	ADunDefSpiderController_execStartMeleeSwing_Parms StartMeleeSwing_Parms;

	this->ProcessEvent ( pFnStartMeleeSwing, &StartMeleeSwing_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderController.GetWebChargeTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpiderController::GetWebChargeTime ( )
{
	static UFunction* pFnGetWebChargeTime = NULL;

	if ( ! pFnGetWebChargeTime )
		pFnGetWebChargeTime = (UFunction*) UObject::GObjObjects()->Data[ 93631 ];

	ADunDefSpiderController_execGetWebChargeTime_Parms GetWebChargeTime_Parms;

	this->ProcessEvent ( pFnGetWebChargeTime, &GetWebChargeTime_Parms, NULL );

	return GetWebChargeTime_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderController.NotifyBump
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ADunDefSpiderController::eventNotifyBump ( class AActor* Other, struct FVector HitNormal )
{
	static UFunction* pFnNotifyBump = NULL;

	if ( ! pFnNotifyBump )
		pFnNotifyBump = (UFunction*) UObject::GObjObjects()->Data[ 93586 ];

	ADunDefSpiderController_eventNotifyBump_Parms NotifyBump_Parms;
	NotifyBump_Parms.Other = Other;
	memcpy ( &NotifyBump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnNotifyBump, &NotifyBump_Parms, NULL );

	return NotifyBump_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueenController.SetTarget
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  NewTarget                      ( CPF_Parm )
// unsigned long                  bDontClearIgnoreList           ( CPF_OptionalParm | CPF_Parm )

void ADunDefSpiderQueenController::eventSetTarget ( class AActor* NewTarget, unsigned long bDontClearIgnoreList )
{
	static UFunction* pFnSetTarget = NULL;

	if ( ! pFnSetTarget )
		pFnSetTarget = (UFunction*) UObject::GObjObjects()->Data[ 93987 ];

	ADunDefSpiderQueenController_eventSetTarget_Parms SetTarget_Parms;
	SetTarget_Parms.NewTarget = NewTarget;
	SetTarget_Parms.bDontClearIgnoreList = bDontClearIgnoreList;

	this->ProcessEvent ( pFnSetTarget, &SetTarget_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.ShootWeb
// [0x00820002] 
// Parameters infos:

void ADunDefSpiderQueenController::ShootWeb ( )
{
	static UFunction* pFnShootWeb = NULL;

	if ( ! pFnShootWeb )
		pFnShootWeb = (UFunction*) UObject::GObjObjects()->Data[ 93954 ];

	ADunDefSpiderQueenController_execShootWeb_Parms ShootWeb_Parms;

	this->ProcessEvent ( pFnShootWeb, &ShootWeb_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.GetWebChargeTime
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpiderQueenController::GetWebChargeTime ( )
{
	static UFunction* pFnGetWebChargeTime = NULL;

	if ( ! pFnGetWebChargeTime )
		pFnGetWebChargeTime = (UFunction*) UObject::GObjObjects()->Data[ 93952 ];

	ADunDefSpiderQueenController_execGetWebChargeTime_Parms GetWebChargeTime_Parms;

	this->ProcessEvent ( pFnGetWebChargeTime, &GetWebChargeTime_Parms, NULL );

	return GetWebChargeTime_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueenController.DoWebAttack
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderQueenController::DoWebAttack ( )
{
	static UFunction* pFnDoWebAttack = NULL;

	if ( ! pFnDoWebAttack )
		pFnDoWebAttack = (UFunction*) UObject::GObjObjects()->Data[ 93950 ];

	ADunDefSpiderQueenController_execDoWebAttack_Parms DoWebAttack_Parms;

	this->ProcessEvent ( pFnDoWebAttack, &DoWebAttack_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.NotifyBabyDeath
// [0x00020002] 
// Parameters infos:
// class ADunDefSpider*           DeadBaby                       ( CPF_Parm )

void ADunDefSpiderQueenController::NotifyBabyDeath ( class ADunDefSpider* DeadBaby )
{
	static UFunction* pFnNotifyBabyDeath = NULL;

	if ( ! pFnNotifyBabyDeath )
		pFnNotifyBabyDeath = (UFunction*) UObject::GObjObjects()->Data[ 93947 ];

	ADunDefSpiderQueenController_execNotifyBabyDeath_Parms NotifyBabyDeath_Parms;
	NotifyBabyDeath_Parms.DeadBaby = DeadBaby;

	this->ProcessEvent ( pFnNotifyBabyDeath, &NotifyBabyDeath_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.GetAttackInterval
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Victim                         ( CPF_OptionalParm | CPF_Parm )

float ADunDefSpiderQueenController::GetAttackInterval ( class AActor* Victim )
{
	static UFunction* pFnGetAttackInterval = NULL;

	if ( ! pFnGetAttackInterval )
		pFnGetAttackInterval = (UFunction*) UObject::GObjObjects()->Data[ 93944 ];

	ADunDefSpiderQueenController_execGetAttackInterval_Parms GetAttackInterval_Parms;
	GetAttackInterval_Parms.Victim = Victim;

	this->ProcessEvent ( pFnGetAttackInterval, &GetAttackInterval_Parms, NULL );

	return GetAttackInterval_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueenController.CheckForCustomAttacks
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderQueenController::CheckForCustomAttacks ( )
{
	static UFunction* pFnCheckForCustomAttacks = NULL;

	if ( ! pFnCheckForCustomAttacks )
		pFnCheckForCustomAttacks = (UFunction*) UObject::GObjObjects()->Data[ 93942 ];

	ADunDefSpiderQueenController_execCheckForCustomAttacks_Parms CheckForCustomAttacks_Parms;

	this->ProcessEvent ( pFnCheckForCustomAttacks, &CheckForCustomAttacks_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.FindValidBabyShootLoc
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefSpiderQueenController::FindValidBabyShootLoc ( )
{
	static UFunction* pFnFindValidBabyShootLoc = NULL;

	if ( ! pFnFindValidBabyShootLoc )
		pFnFindValidBabyShootLoc = (UFunction*) UObject::GObjObjects()->Data[ 93933 ];

	ADunDefSpiderQueenController_execFindValidBabyShootLoc_Parms FindValidBabyShootLoc_Parms;

	this->ProcessEvent ( pFnFindValidBabyShootLoc, &FindValidBabyShootLoc_Parms, NULL );

	return FindValidBabyShootLoc_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueenController.SpawnBaby
// [0x00820002] 
// Parameters infos:

void ADunDefSpiderQueenController::SpawnBaby ( )
{
	static UFunction* pFnSpawnBaby = NULL;

	if ( ! pFnSpawnBaby )
		pFnSpawnBaby = (UFunction*) UObject::GObjObjects()->Data[ 93925 ];

	ADunDefSpiderQueenController_execSpawnBaby_Parms SpawnBaby_Parms;

	this->ProcessEvent ( pFnSpawnBaby, &SpawnBaby_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.FlagSpawnBaby
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderQueenController::FlagSpawnBaby ( )
{
	static UFunction* pFnFlagSpawnBaby = NULL;

	if ( ! pFnFlagSpawnBaby )
		pFnFlagSpawnBaby = (UFunction*) UObject::GObjObjects()->Data[ 93924 ];

	ADunDefSpiderQueenController_execFlagSpawnBaby_Parms FlagSpawnBaby_Parms;

	this->ProcessEvent ( pFnFlagSpawnBaby, &FlagSpawnBaby_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.StartBabySpawn
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderQueenController::StartBabySpawn ( )
{
	static UFunction* pFnStartBabySpawn = NULL;

	if ( ! pFnStartBabySpawn )
		pFnStartBabySpawn = (UFunction*) UObject::GObjObjects()->Data[ 93922 ];

	ADunDefSpiderQueenController_execStartBabySpawn_Parms StartBabySpawn_Parms;

	this->ProcessEvent ( pFnStartBabySpawn, &StartBabySpawn_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.ForceWakeUp
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderQueenController::ForceWakeUp ( )
{
	static UFunction* pFnForceWakeUp = NULL;

	if ( ! pFnForceWakeUp )
		pFnForceWakeUp = (UFunction*) UObject::GObjObjects()->Data[ 93909 ];

	ADunDefSpiderQueenController_execForceWakeUp_Parms ForceWakeUp_Parms;

	this->ProcessEvent ( pFnForceWakeUp, &ForceWakeUp_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.AddToSwingHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  newEntry                       ( CPF_Parm )

bool ADunDefSpiderQueenController::AddToSwingHurtList ( class AActor* newEntry )
{
	static UFunction* pFnAddToSwingHurtList = NULL;

	if ( ! pFnAddToSwingHurtList )
		pFnAddToSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 93887 ];

	ADunDefSpiderQueenController_execAddToSwingHurtList_Parms AddToSwingHurtList_Parms;
	AddToSwingHurtList_Parms.newEntry = newEntry;

	this->ProcessEvent ( pFnAddToSwingHurtList, &AddToSwingHurtList_Parms, NULL );

	return AddToSwingHurtList_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueenController.EndMeleeSwing
// [0x00020002] 
// Parameters infos:

void ADunDefSpiderQueenController::EndMeleeSwing ( )
{
	static UFunction* pFnEndMeleeSwing = NULL;

	if ( ! pFnEndMeleeSwing )
		pFnEndMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 93886 ];

	ADunDefSpiderQueenController_execEndMeleeSwing_Parms EndMeleeSwing_Parms;

	this->ProcessEvent ( pFnEndMeleeSwing, &EndMeleeSwing_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.StartMeleeSwing
// [0x00020000] 
// Parameters infos:

void ADunDefSpiderQueenController::StartMeleeSwing ( )
{
	static UFunction* pFnStartMeleeSwing = NULL;

	if ( ! pFnStartMeleeSwing )
		pFnStartMeleeSwing = (UFunction*) UObject::GObjObjects()->Data[ 93885 ];

	ADunDefSpiderQueenController_execStartMeleeSwing_Parms StartMeleeSwing_Parms;

	this->ProcessEvent ( pFnStartMeleeSwing, &StartMeleeSwing_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueenController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefSpiderQueenController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 93884 ];

	ADunDefSpiderQueenController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.SetDyingPhysics
// [0x00020100] 
// Parameters infos:

void ADunDefSpiderQueen::SetDyingPhysics ( )
{
	static UFunction* pFnSetDyingPhysics = NULL;

	if ( ! pFnSetDyingPhysics )
		pFnSetDyingPhysics = (UFunction*) UObject::GObjObjects()->Data[ 93829 ];

	ADunDefSpiderQueen_execSetDyingPhysics_Parms SetDyingPhysics_Parms;

	this->ProcessEvent ( pFnSetDyingPhysics, &SetDyingPhysics_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefSpiderQueen::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 93824 ];

	ADunDefSpiderQueen_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueen.SetUpperBodyLookAt
// [0x00020102] 
// Parameters infos:
// unsigned long                  bTurnOn                        ( CPF_Parm )

void ADunDefSpiderQueen::SetUpperBodyLookAt ( unsigned long bTurnOn )
{
	static UFunction* pFnSetUpperBodyLookAt = NULL;

	if ( ! pFnSetUpperBodyLookAt )
		pFnSetUpperBodyLookAt = (UFunction*) UObject::GObjObjects()->Data[ 93822 ];

	ADunDefSpiderQueen_execSetUpperBodyLookAt_Parms SetUpperBodyLookAt_Parms;
	SetUpperBodyLookAt_Parms.bTurnOn = bTurnOn;

	this->ProcessEvent ( pFnSetUpperBodyLookAt, &SetUpperBodyLookAt_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefSpiderQueen::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 93820 ];

	ADunDefSpiderQueen_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.PlayStunnedHurtEffect
// [0x00820102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDefSpiderQueen::PlayStunnedHurtEffect ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayStunnedHurtEffect = NULL;

	if ( ! pFnPlayStunnedHurtEffect )
		pFnPlayStunnedHurtEffect = (UFunction*) UObject::GObjObjects()->Data[ 93816 ];

	ADunDefSpiderQueen_execPlayStunnedHurtEffect_Parms PlayStunnedHurtEffect_Parms;
	PlayStunnedHurtEffect_Parms.DamageType = DamageType;
	memcpy ( &PlayStunnedHurtEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayStunnedHurtEffect, &PlayStunnedHurtEffect_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.ShootWeb
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSpiderQueen::eventShootWeb ( )
{
	static UFunction* pFnShootWeb = NULL;

	if ( ! pFnShootWeb )
		pFnShootWeb = (UFunction*) UObject::GObjObjects()->Data[ 93815 ];

	ADunDefSpiderQueen_eventShootWeb_Parms ShootWeb_Parms;

	this->ProcessEvent ( pFnShootWeb, &ShootWeb_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.PlayWebShootAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpiderQueen::PlayWebShootAnim ( )
{
	static UFunction* pFnPlayWebShootAnim = NULL;

	if ( ! pFnPlayWebShootAnim )
		pFnPlayWebShootAnim = (UFunction*) UObject::GObjObjects()->Data[ 93813 ];

	ADunDefSpiderQueen_execPlayWebShootAnim_Parms PlayWebShootAnim_Parms;

	this->ProcessEvent ( pFnPlayWebShootAnim, &PlayWebShootAnim_Parms, NULL );

	return PlayWebShootAnim_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueen.PlayWebChargeAnim
// [0x00020102] 
// Parameters infos:

void ADunDefSpiderQueen::PlayWebChargeAnim ( )
{
	static UFunction* pFnPlayWebChargeAnim = NULL;

	if ( ! pFnPlayWebChargeAnim )
		pFnPlayWebChargeAnim = (UFunction*) UObject::GObjObjects()->Data[ 93812 ];

	ADunDefSpiderQueen_execPlayWebChargeAnim_Parms PlayWebChargeAnim_Parms;

	this->ProcessEvent ( pFnPlayWebChargeAnim, &PlayWebChargeAnim_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.SetWebChargeTime
// [0x00020102] 
// Parameters infos:
// float                          NewWebChargeTime               ( CPF_Parm )

void ADunDefSpiderQueen::SetWebChargeTime ( float NewWebChargeTime )
{
	static UFunction* pFnSetWebChargeTime = NULL;

	if ( ! pFnSetWebChargeTime )
		pFnSetWebChargeTime = (UFunction*) UObject::GObjObjects()->Data[ 93810 ];

	ADunDefSpiderQueen_execSetWebChargeTime_Parms SetWebChargeTime_Parms;
	SetWebChargeTime_Parms.NewWebChargeTime = NewWebChargeTime;

	this->ProcessEvent ( pFnSetWebChargeTime, &SetWebChargeTime_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.GetWebProjectileLocAndRot
// [0x00420102] 
// Parameters infos:
// struct FVector                 Position                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                Orientation                    ( CPF_Parm | CPF_OutParm )

void ADunDefSpiderQueen::GetWebProjectileLocAndRot ( struct FVector* Position, struct FRotator* Orientation )
{
	static UFunction* pFnGetWebProjectileLocAndRot = NULL;

	if ( ! pFnGetWebProjectileLocAndRot )
		pFnGetWebProjectileLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 93807 ];

	ADunDefSpiderQueen_execGetWebProjectileLocAndRot_Parms GetWebProjectileLocAndRot_Parms;

	this->ProcessEvent ( pFnGetWebProjectileLocAndRot, &GetWebProjectileLocAndRot_Parms, NULL );

	if ( Position )
		memcpy ( Position, &GetWebProjectileLocAndRot_Parms.Position, 0xC );

	if ( Orientation )
		memcpy ( Orientation, &GetWebProjectileLocAndRot_Parms.Orientation, 0xC );
};

// Function DunDefSpider.DunDefSpiderQueen.GetMeleeSwingLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ADunDefSpiderQueen::GetMeleeSwingLocation ( )
{
	static UFunction* pFnGetMeleeSwingLocation = NULL;

	if ( ! pFnGetMeleeSwingLocation )
		pFnGetMeleeSwingLocation = (UFunction*) UObject::GObjObjects()->Data[ 93803 ];

	ADunDefSpiderQueen_execGetMeleeSwingLocation_Parms GetMeleeSwingLocation_Parms;

	this->ProcessEvent ( pFnGetMeleeSwingLocation, &GetMeleeSwingLocation_Parms, NULL );

	return GetMeleeSwingLocation_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueen.MeleeSwingEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSpiderQueen::eventMeleeSwingEnd ( )
{
	static UFunction* pFnMeleeSwingEnd = NULL;

	if ( ! pFnMeleeSwingEnd )
		pFnMeleeSwingEnd = (UFunction*) UObject::GObjObjects()->Data[ 93802 ];

	ADunDefSpiderQueen_eventMeleeSwingEnd_Parms MeleeSwingEnd_Parms;

	this->ProcessEvent ( pFnMeleeSwingEnd, &MeleeSwingEnd_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.MeleeSwingStart
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSpiderQueen::eventMeleeSwingStart ( )
{
	static UFunction* pFnMeleeSwingStart = NULL;

	if ( ! pFnMeleeSwingStart )
		pFnMeleeSwingStart = (UFunction*) UObject::GObjObjects()->Data[ 93801 ];

	ADunDefSpiderQueen_eventMeleeSwingStart_Parms MeleeSwingStart_Parms;

	this->ProcessEvent ( pFnMeleeSwingStart, &MeleeSwingStart_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.SetRageMode
// [0x00020102] 
// Parameters infos:

void ADunDefSpiderQueen::SetRageMode ( )
{
	static UFunction* pFnSetRageMode = NULL;

	if ( ! pFnSetRageMode )
		pFnSetRageMode = (UFunction*) UObject::GObjObjects()->Data[ 93800 ];

	ADunDefSpiderQueen_execSetRageMode_Parms SetRageMode_Parms;

	this->ProcessEvent ( pFnSetRageMode, &SetRageMode_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.GetEnrageIntervalMult
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefSpiderQueen::GetEnrageIntervalMult ( )
{
	static UFunction* pFnGetEnrageIntervalMult = NULL;

	if ( ! pFnGetEnrageIntervalMult )
		pFnGetEnrageIntervalMult = (UFunction*) UObject::GObjObjects()->Data[ 93798 ];

	ADunDefSpiderQueen_execGetEnrageIntervalMult_Parms GetEnrageIntervalMult_Parms;

	this->ProcessEvent ( pFnGetEnrageIntervalMult, &GetEnrageIntervalMult_Parms, NULL );

	return GetEnrageIntervalMult_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueen.TakeDamage
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

void ADunDefSpiderQueen::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 93789 ];

	ADunDefSpiderQueen_eventTakeDamage_Parms TakeDamage_Parms;
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

// Function DunDefSpider.DunDefSpiderQueen.CheckSpecialCoreDmg
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefSpiderQueen::CheckSpecialCoreDmg ( struct FVector HitLocation )
{
	static UFunction* pFnCheckSpecialCoreDmg = NULL;

	if ( ! pFnCheckSpecialCoreDmg )
		pFnCheckSpecialCoreDmg = (UFunction*) UObject::GObjObjects()->Data[ 93784 ];

	ADunDefSpiderQueen_execCheckSpecialCoreDmg_Parms CheckSpecialCoreDmg_Parms;
	memcpy ( &CheckSpecialCoreDmg_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnCheckSpecialCoreDmg, &CheckSpecialCoreDmg_Parms, NULL );

	return CheckSpecialCoreDmg_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueen.AdjustDamage
// [0x00424002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void ADunDefSpiderQueen::AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class UObject* WhatHitMe, int* inDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 93776 ];

	ADunDefSpiderQueen_execAdjustDamage_Parms AdjustDamage_Parms;
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

// Function DunDefSpider.DunDefSpiderQueen.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ADunDefSpiderQueen::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 93770 ];

	ADunDefSpiderQueen_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.GetBabySpawnLocandRot
// [0x00420002] 
// Parameters infos:
// struct FVector                 SpawnLoc                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void ADunDefSpiderQueen::GetBabySpawnLocandRot ( struct FVector* SpawnLoc, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetBabySpawnLocandRot = NULL;

	if ( ! pFnGetBabySpawnLocandRot )
		pFnGetBabySpawnLocandRot = (UFunction*) UObject::GObjObjects()->Data[ 93767 ];

	ADunDefSpiderQueen_execGetBabySpawnLocandRot_Parms GetBabySpawnLocandRot_Parms;

	this->ProcessEvent ( pFnGetBabySpawnLocandRot, &GetBabySpawnLocandRot_Parms, NULL );

	if ( SpawnLoc )
		memcpy ( SpawnLoc, &GetBabySpawnLocandRot_Parms.SpawnLoc, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetBabySpawnLocandRot_Parms.SpawnRot, 0xC );
};

// Function DunDefSpider.DunDefSpiderQueen.DoSpawnBaby
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefSpiderQueen::eventDoSpawnBaby ( )
{
	static UFunction* pFnDoSpawnBaby = NULL;

	if ( ! pFnDoSpawnBaby )
		pFnDoSpawnBaby = (UFunction*) UObject::GObjObjects()->Data[ 93766 ];

	ADunDefSpiderQueen_eventDoSpawnBaby_Parms DoSpawnBaby_Parms;

	this->ProcessEvent ( pFnDoSpawnBaby, &DoSpawnBaby_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.StopStunAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefSpiderQueen::StopStunAnimation ( )
{
	static UFunction* pFnStopStunAnimation = NULL;

	if ( ! pFnStopStunAnimation )
		pFnStopStunAnimation = (UFunction*) UObject::GObjObjects()->Data[ 93765 ];

	ADunDefSpiderQueen_execStopStunAnimation_Parms StopStunAnimation_Parms;

	this->ProcessEvent ( pFnStopStunAnimation, &StopStunAnimation_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.PlayStunAnimation
// [0x00020102] 
// Parameters infos:

void ADunDefSpiderQueen::PlayStunAnimation ( )
{
	static UFunction* pFnPlayStunAnimation = NULL;

	if ( ! pFnPlayStunAnimation )
		pFnPlayStunAnimation = (UFunction*) UObject::GObjObjects()->Data[ 93764 ];

	ADunDefSpiderQueen_execPlayStunAnimation_Parms PlayStunAnimation_Parms;

	this->ProcessEvent ( pFnPlayStunAnimation, &PlayStunAnimation_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.PlayBabySpawnAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          playSpeed                      ( CPF_Parm )

float ADunDefSpiderQueen::PlayBabySpawnAnim ( float playSpeed )
{
	static UFunction* pFnPlayBabySpawnAnim = NULL;

	if ( ! pFnPlayBabySpawnAnim )
		pFnPlayBabySpawnAnim = (UFunction*) UObject::GObjObjects()->Data[ 93761 ];

	ADunDefSpiderQueen_execPlayBabySpawnAnim_Parms PlayBabySpawnAnim_Parms;
	PlayBabySpawnAnim_Parms.playSpeed = playSpeed;

	this->ProcessEvent ( pFnPlayBabySpawnAnim, &PlayBabySpawnAnim_Parms, NULL );

	return PlayBabySpawnAnim_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueen.GetPawnDamageModifier
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bDontIncludeAbilities          ( CPF_OptionalParm | CPF_Parm )

float ADunDefSpiderQueen::GetPawnDamageModifier ( unsigned long bDontIncludeAbilities )
{
	static UFunction* pFnGetPawnDamageModifier = NULL;

	if ( ! pFnGetPawnDamageModifier )
		pFnGetPawnDamageModifier = (UFunction*) UObject::GObjObjects()->Data[ 93758 ];

	ADunDefSpiderQueen_execGetPawnDamageModifier_Parms GetPawnDamageModifier_Parms;
	GetPawnDamageModifier_Parms.bDontIncludeAbilities = bDontIncludeAbilities;

	this->ProcessEvent ( pFnGetPawnDamageModifier, &GetPawnDamageModifier_Parms, NULL );

	return GetPawnDamageModifier_Parms.ReturnValue;
};

// Function DunDefSpider.DunDefSpiderQueen.UpdateDifficultyValues
// [0x00024002] 
// Parameters infos:
// unsigned long                  UpdateMaterial                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  onlyDynamicValues              ( CPF_OptionalParm | CPF_Parm )

void ADunDefSpiderQueen::UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues )
{
	static UFunction* pFnUpdateDifficultyValues = NULL;

	if ( ! pFnUpdateDifficultyValues )
		pFnUpdateDifficultyValues = (UFunction*) UObject::GObjObjects()->Data[ 93755 ];

	ADunDefSpiderQueen_execUpdateDifficultyValues_Parms UpdateDifficultyValues_Parms;
	UpdateDifficultyValues_Parms.UpdateMaterial = UpdateMaterial;
	UpdateDifficultyValues_Parms.onlyDynamicValues = onlyDynamicValues;

	this->ProcessEvent ( pFnUpdateDifficultyValues, &UpdateDifficultyValues_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefSpiderQueen::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 93754 ];

	ADunDefSpiderQueen_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.PlayJumpAnimation
// [0x00020100] 
// Parameters infos:

void ADunDefSpiderQueen::PlayJumpAnimation ( )
{
	static UFunction* pFnPlayJumpAnimation = NULL;

	if ( ! pFnPlayJumpAnimation )
		pFnPlayJumpAnimation = (UFunction*) UObject::GObjObjects()->Data[ 93753 ];

	ADunDefSpiderQueen_execPlayJumpAnimation_Parms PlayJumpAnimation_Parms;

	this->ProcessEvent ( pFnPlayJumpAnimation, &PlayJumpAnimation_Parms, NULL );
};

// Function DunDefSpider.DunDefSpiderQueen.ExecReplicatedFunction
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

void ADunDefSpiderQueen::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 93736 ];

	ADunDefSpiderQueen_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefSpider.TowerDeboosterObject.GetTowerBoostAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float UTowerDeboosterObject::GetTowerBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetTowerBoostAmount = NULL;

	if ( ! pFnGetTowerBoostAmount )
		pFnGetTowerBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 94195 ];

	UTowerDeboosterObject_execGetTowerBoostAmount_Parms GetTowerBoostAmount_Parms;
	GetTowerBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetTowerBoostAmount, &GetTowerBoostAmount_Parms, NULL );

	return GetTowerBoostAmount_Parms.ReturnValue;
};

// Function DunDefSpider.TowerDeboosterObject.HasTowerBoostingType
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  checkType                      ( CPF_Parm )

bool UTowerDeboosterObject::HasTowerBoostingType ( unsigned char checkType )
{
	static UFunction* pFnHasTowerBoostingType = NULL;

	if ( ! pFnHasTowerBoostingType )
		pFnHasTowerBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 94192 ];

	UTowerDeboosterObject_execHasTowerBoostingType_Parms HasTowerBoostingType_Parms;
	HasTowerBoostingType_Parms.checkType = checkType;

	this->ProcessEvent ( pFnHasTowerBoostingType, &HasTowerBoostingType_Parms, NULL );

	return HasTowerBoostingType_Parms.ReturnValue;
};

// Function DunDefSpider.TowerDeboosterObject.GetTowerBoostingTarget
// [0x00020000] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* UTowerDeboosterObject::GetTowerBoostingTarget ( )
{
	static UFunction* pFnGetTowerBoostingTarget = NULL;

	if ( ! pFnGetTowerBoostingTarget )
		pFnGetTowerBoostingTarget = (UFunction*) UObject::GObjObjects()->Data[ 94190 ];

	UTowerDeboosterObject_execGetTowerBoostingTarget_Parms GetTowerBoostingTarget_Parms;

	this->ProcessEvent ( pFnGetTowerBoostingTarget, &GetTowerBoostingTarget_Parms, NULL );

	return GetTowerBoostingTarget_Parms.ReturnValue;
};

// Function DunDefSpider.TowerDeboosterObject.SetBoostAmount
// [0x00020002] 
// Parameters infos:
// float                          newBoostAmount                 ( CPF_Parm )

void UTowerDeboosterObject::SetBoostAmount ( float newBoostAmount )
{
	static UFunction* pFnSetBoostAmount = NULL;

	if ( ! pFnSetBoostAmount )
		pFnSetBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 94188 ];

	UTowerDeboosterObject_execSetBoostAmount_Parms SetBoostAmount_Parms;
	SetBoostAmount_Parms.newBoostAmount = newBoostAmount;

	this->ProcessEvent ( pFnSetBoostAmount, &SetBoostAmount_Parms, NULL );
};

// Function DunDefSpider.TowerDeboosterObject.SetBoostType
// [0x00020002] 
// Parameters infos:
// unsigned char                  newBoostType                   ( CPF_Parm )

void UTowerDeboosterObject::SetBoostType ( unsigned char newBoostType )
{
	static UFunction* pFnSetBoostType = NULL;

	if ( ! pFnSetBoostType )
		pFnSetBoostType = (UFunction*) UObject::GObjObjects()->Data[ 94186 ];

	UTowerDeboosterObject_execSetBoostType_Parms SetBoostType_Parms;
	SetBoostType_Parms.newBoostType = newBoostType;

	this->ProcessEvent ( pFnSetBoostType, &SetBoostType_Parms, NULL );
};

// Function DunDefSpider.GameInfo_VDay.PairMatched
// [0x00020002] 
// Parameters infos:
// class ADunDefEnemy*            Boy                            ( CPF_Parm )
// class ADunDefEnemy*            Girl                           ( CPF_Parm )

void AGameInfo_VDay::PairMatched ( class ADunDefEnemy* Boy, class ADunDefEnemy* Girl )
{
	static UFunction* pFnPairMatched = NULL;

	if ( ! pFnPairMatched )
		pFnPairMatched = (UFunction*) UObject::GObjObjects()->Data[ 94180 ];

	AGameInfo_VDay_execPairMatched_Parms PairMatched_Parms;
	PairMatched_Parms.Boy = Boy;
	PairMatched_Parms.Girl = Girl;

	this->ProcessEvent ( pFnPairMatched, &PairMatched_Parms, NULL );
};

// Function DunDefSpider.GameInfo_VDay.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameInfo_VDay::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 94174 ];

	AGameInfo_VDay_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSpider.GameInfo_VDay.FindBestTemplate
// [0x00424002] 
// Parameters infos:
// class ADunDefEnemy*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 GenderString                   ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class ADunDefEnemy* AGameInfo_VDay::FindBestTemplate ( struct FString* GenderString )
{
	static UFunction* pFnFindBestTemplate = NULL;

	if ( ! pFnFindBestTemplate )
		pFnFindBestTemplate = (UFunction*) UObject::GObjObjects()->Data[ 94161 ];

	AGameInfo_VDay_execFindBestTemplate_Parms FindBestTemplate_Parms;

	this->ProcessEvent ( pFnFindBestTemplate, &FindBestTemplate_Parms, NULL );

	if ( GenderString )
		memcpy ( GenderString, &FindBestTemplate_Parms.GenderString, 0xC );

	return FindBestTemplate_Parms.ReturnValue;
};

// Function DunDefSpider.GameInfo_VDay.WaveSpawnerCreateEnemy
// [0x00020002] 
// Parameters infos:
// class ADunDefEnemy*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner                       ( CPF_Parm )
// class ADunDefEnemy*            EnemyTemplate                  ( CPF_Parm )
// struct FVector                 SpawnLocation                  ( CPF_Parm )
// struct FRotator                SpawnRotation                  ( CPF_Parm )

class ADunDefEnemy* AGameInfo_VDay::WaveSpawnerCreateEnemy ( class UDunDef_SeqAct_EnemyWaveSpawner* aSpawner, class ADunDefEnemy* EnemyTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation )
{
	static UFunction* pFnWaveSpawnerCreateEnemy = NULL;

	if ( ! pFnWaveSpawnerCreateEnemy )
		pFnWaveSpawnerCreateEnemy = (UFunction*) UObject::GObjObjects()->Data[ 94150 ];

	AGameInfo_VDay_execWaveSpawnerCreateEnemy_Parms WaveSpawnerCreateEnemy_Parms;
	WaveSpawnerCreateEnemy_Parms.aSpawner = aSpawner;
	WaveSpawnerCreateEnemy_Parms.EnemyTemplate = EnemyTemplate;
	memcpy ( &WaveSpawnerCreateEnemy_Parms.SpawnLocation, &SpawnLocation, 0xC );
	memcpy ( &WaveSpawnerCreateEnemy_Parms.SpawnRotation, &SpawnRotation, 0xC );

	this->ProcessEvent ( pFnWaveSpawnerCreateEnemy, &WaveSpawnerCreateEnemy_Parms, NULL );

	return WaveSpawnerCreateEnemy_Parms.ReturnValue;
};

// Function DunDefSpider.GameInfo_VDay.OpenedKillCountUI
// [0x00020002] 
// Parameters infos:
// class UUI_KillCount*           aKillCountUI                   ( CPF_Parm )

void AGameInfo_VDay::OpenedKillCountUI ( class UUI_KillCount* aKillCountUI )
{
	static UFunction* pFnOpenedKillCountUI = NULL;

	if ( ! pFnOpenedKillCountUI )
		pFnOpenedKillCountUI = (UFunction*) UObject::GObjObjects()->Data[ 94148 ];

	AGameInfo_VDay_execOpenedKillCountUI_Parms OpenedKillCountUI_Parms;
	OpenedKillCountUI_Parms.aKillCountUI = aKillCountUI;

	this->ProcessEvent ( pFnOpenedKillCountUI, &OpenedKillCountUI_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif