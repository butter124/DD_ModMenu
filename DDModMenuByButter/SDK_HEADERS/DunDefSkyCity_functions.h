/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefSkyCity_functions.h
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

// Function DunDefSkyCity.DunDefProjectile_Meteor.Destroyed
// [0x00020102] 
// Parameters infos:

void ADunDefProjectile_Meteor::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 81039 ];

	ADunDefProjectile_Meteor_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.SpawnFires
// [0x00820002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_Meteor::SpawnFires ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnFires = NULL;

	if ( ! pFnSpawnFires )
		pFnSpawnFires = (UFunction*) UObject::GObjObjects()->Data[ 81030 ];

	ADunDefProjectile_Meteor_execSpawnFires_Parms SpawnFires_Parms;
	memcpy ( &SpawnFires_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnFires_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnFires, &SpawnFires_Parms, NULL );
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_Meteor::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 81027 ];

	ADunDefProjectile_Meteor_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateDecal
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefProjectile_Meteor::UpdateDecal ( float DeltaTime )
{
	static UFunction* pFnUpdateDecal = NULL;

	if ( ! pFnUpdateDecal )
		pFnUpdateDecal = (UFunction*) UObject::GObjObjects()->Data[ 81021 ];

	ADunDefProjectile_Meteor_execUpdateDecal_Parms UpdateDecal_Parms;
	UpdateDecal_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateDecal, &UpdateDecal_Parms, NULL );
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateShadow
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefProjectile_Meteor::UpdateShadow ( float DeltaTime )
{
	static UFunction* pFnUpdateShadow = NULL;

	if ( ! pFnUpdateShadow )
		pFnUpdateShadow = (UFunction*) UObject::GObjObjects()->Data[ 81015 ];

	ADunDefProjectile_Meteor_execUpdateShadow_Parms UpdateShadow_Parms;
	UpdateShadow_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateShadow, &UpdateShadow_Parms, NULL );
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.DoHoming
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefProjectile_Meteor::DoHoming ( float DeltaTime )
{
	static UFunction* pFnDoHoming = NULL;

	if ( ! pFnDoHoming )
		pFnDoHoming = (UFunction*) UObject::GObjObjects()->Data[ 81013 ];

	ADunDefProjectile_Meteor_execDoHoming_Parms DoHoming_Parms;
	DoHoming_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnDoHoming, &DoHoming_Parms, NULL );
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefProjectile_Meteor::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 81011 ];

	ADunDefProjectile_Meteor_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefProjectile_Meteor::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 81010 ];

	ADunDefProjectile_Meteor_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSkyCity.DropOffPoint.GetIsBeingUsed
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADropOffPoint::GetIsBeingUsed ( )
{
	static UFunction* pFnGetIsBeingUsed = NULL;

	if ( ! pFnGetIsBeingUsed )
		pFnGetIsBeingUsed = (UFunction*) UObject::GObjObjects()->Data[ 84800 ];

	ADropOffPoint_execGetIsBeingUsed_Parms GetIsBeingUsed_Parms;

	this->ProcessEvent ( pFnGetIsBeingUsed, &GetIsBeingUsed_Parms, NULL );

	return GetIsBeingUsed_Parms.ReturnValue;
};

// Function DunDefSkyCity.DropOffPoint.SetBeingUsed
// [0x00020002] 
// Parameters infos:
// unsigned long                  bNowBeingUsed                  ( CPF_Parm )

void ADropOffPoint::SetBeingUsed ( unsigned long bNowBeingUsed )
{
	static UFunction* pFnSetBeingUsed = NULL;

	if ( ! pFnSetBeingUsed )
		pFnSetBeingUsed = (UFunction*) UObject::GObjObjects()->Data[ 84798 ];

	ADropOffPoint_execSetBeingUsed_Parms SetBeingUsed_Parms;
	SetBeingUsed_Parms.bNowBeingUsed = bNowBeingUsed;

	this->ProcessEvent ( pFnSetBeingUsed, &SetBeingUsed_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.StopsProjectile
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AProjectile*             P                              ( CPF_Parm )

bool ADunDef_DamagingInterpActor::StopsProjectile ( class AProjectile* P )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 84831 ];

	ADunDef_DamagingInterpActor_execStopsProjectile_Parms StopsProjectile_Parms;
	StopsProjectile_Parms.P = P;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );

	return StopsProjectile_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.GetDamageAmount
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDef_DamagingInterpActor::GetDamageAmount ( )
{
	static UFunction* pFnGetDamageAmount = NULL;

	if ( ! pFnGetDamageAmount )
		pFnGetDamageAmount = (UFunction*) UObject::GObjObjects()->Data[ 84829 ];

	ADunDef_DamagingInterpActor_execGetDamageAmount_Parms GetDamageAmount_Parms;

	this->ProcessEvent ( pFnGetDamageAmount, &GetDamageAmount_Parms, NULL );

	return GetDamageAmount_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.RanInto
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ADunDef_DamagingInterpActor::eventRanInto ( class AActor* Other )
{
	static UFunction* pFnRanInto = NULL;

	if ( ! pFnRanInto )
		pFnRanInto = (UFunction*) UObject::GObjObjects()->Data[ 84825 ];

	ADunDef_DamagingInterpActor_eventRanInto_Parms RanInto_Parms;
	RanInto_Parms.Other = Other;

	this->ProcessEvent ( pFnRanInto, &RanInto_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.EncroachingOn
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool ADunDef_DamagingInterpActor::eventEncroachingOn ( class AActor* Other )
{
	static UFunction* pFnEncroachingOn = NULL;

	if ( ! pFnEncroachingOn )
		pFnEncroachingOn = (UFunction*) UObject::GObjObjects()->Data[ 84822 ];

	ADunDef_DamagingInterpActor_eventEncroachingOn_Parms EncroachingOn_Parms;
	EncroachingOn_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachingOn, &EncroachingOn_Parms, NULL );

	return EncroachingOn_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.ClearDamageList
// [0x00020002] 
// Parameters infos:

void ADunDef_DamagingInterpActor::ClearDamageList ( )
{
	static UFunction* pFnClearDamageList = NULL;

	if ( ! pFnClearDamageList )
		pFnClearDamageList = (UFunction*) UObject::GObjObjects()->Data[ 84821 ];

	ADunDef_DamagingInterpActor_execClearDamageList_Parms ClearDamageList_Parms;

	this->ProcessEvent ( pFnClearDamageList, &ClearDamageList_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.SetDoDamage
// [0x00024002] 
// Parameters infos:
// unsigned long                  bSetDamage                     ( CPF_Parm )
// unsigned long                  bToggleCollision               ( CPF_OptionalParm | CPF_Parm )

void ADunDef_DamagingInterpActor::SetDoDamage ( unsigned long bSetDamage, unsigned long bToggleCollision )
{
	static UFunction* pFnSetDoDamage = NULL;

	if ( ! pFnSetDoDamage )
		pFnSetDoDamage = (UFunction*) UObject::GObjObjects()->Data[ 84818 ];

	ADunDef_DamagingInterpActor_execSetDoDamage_Parms SetDoDamage_Parms;
	SetDoDamage_Parms.bSetDamage = bSetDamage;
	SetDoDamage_Parms.bToggleCollision = bToggleCollision;

	this->ProcessEvent ( pFnSetDoDamage, &SetDoDamage_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.GetLightningTowerDamagePercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDef_OldOne::GetLightningTowerDamagePercent ( )
{
	static UFunction* pFnGetLightningTowerDamagePercent = NULL;

	if ( ! pFnGetLightningTowerDamagePercent )
		pFnGetLightningTowerDamagePercent = (UFunction*) UObject::GObjObjects()->Data[ 85781 ];

	ADunDef_OldOne_execGetLightningTowerDamagePercent_Parms GetLightningTowerDamagePercent_Parms;

	this->ProcessEvent ( pFnGetLightningTowerDamagePercent, &GetLightningTowerDamagePercent_Parms, NULL );

	return GetLightningTowerDamagePercent_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.setIsWebbed
// [0x00020002] 
// Parameters infos:
// unsigned long                  isWebbed                       ( CPF_Parm )

void ADunDef_OldOne::setIsWebbed ( unsigned long isWebbed )
{
	static UFunction* pFnsetIsWebbed = NULL;

	if ( ! pFnsetIsWebbed )
		pFnsetIsWebbed = (UFunction*) UObject::GObjObjects()->Data[ 85779 ];

	ADunDef_OldOne_execsetIsWebbed_Parms setIsWebbed_Parms;
	setIsWebbed_Parms.isWebbed = isWebbed;

	this->ProcessEvent ( pFnsetIsWebbed, &setIsWebbed_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.isWebbed
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::isWebbed ( )
{
	static UFunction* pFnisWebbed = NULL;

	if ( ! pFnisWebbed )
		pFnisWebbed = (UFunction*) UObject::GObjObjects()->Data[ 85777 ];

	ADunDef_OldOne_execisWebbed_Parms isWebbed_Parms;

	this->ProcessEvent ( pFnisWebbed, &isWebbed_Parms, NULL );

	return isWebbed_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetChainIgnore
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::GetChainIgnore ( )
{
	static UFunction* pFnGetChainIgnore = NULL;

	if ( ! pFnGetChainIgnore )
		pFnGetChainIgnore = (UFunction*) UObject::GObjObjects()->Data[ 85775 ];

	ADunDef_OldOne_execGetChainIgnore_Parms GetChainIgnore_Parms;

	this->ProcessEvent ( pFnGetChainIgnore, &GetChainIgnore_Parms, NULL );

	return GetChainIgnore_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.SetChainIgnore
// [0x00020002] 
// Parameters infos:
// unsigned long                  ignore                         ( CPF_Parm )

void ADunDef_OldOne::SetChainIgnore ( unsigned long ignore )
{
	static UFunction* pFnSetChainIgnore = NULL;

	if ( ! pFnSetChainIgnore )
		pFnSetChainIgnore = (UFunction*) UObject::GObjObjects()->Data[ 85773 ];

	ADunDef_OldOne_execSetChainIgnore_Parms SetChainIgnore_Parms;
	SetChainIgnore_Parms.ignore = ignore;

	this->ProcessEvent ( pFnSetChainIgnore, &SetChainIgnore_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.IsBeingChainedBy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower_ChainLightning* Tower                          ( CPF_Parm )

bool ADunDef_OldOne::IsBeingChainedBy ( class ADunDefTower_ChainLightning* Tower )
{
	static UFunction* pFnIsBeingChainedBy = NULL;

	if ( ! pFnIsBeingChainedBy )
		pFnIsBeingChainedBy = (UFunction*) UObject::GObjObjects()->Data[ 85770 ];

	ADunDef_OldOne_execIsBeingChainedBy_Parms IsBeingChainedBy_Parms;
	IsBeingChainedBy_Parms.Tower = Tower;

	this->ProcessEvent ( pFnIsBeingChainedBy, &IsBeingChainedBy_Parms, NULL );

	return IsBeingChainedBy_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.RemoveFromChainingTowers
// [0x00020002] 
// Parameters infos:
// class ADunDefTower_ChainLightning* Tower                          ( CPF_Parm )

void ADunDef_OldOne::RemoveFromChainingTowers ( class ADunDefTower_ChainLightning* Tower )
{
	static UFunction* pFnRemoveFromChainingTowers = NULL;

	if ( ! pFnRemoveFromChainingTowers )
		pFnRemoveFromChainingTowers = (UFunction*) UObject::GObjObjects()->Data[ 85768 ];

	ADunDef_OldOne_execRemoveFromChainingTowers_Parms RemoveFromChainingTowers_Parms;
	RemoveFromChainingTowers_Parms.Tower = Tower;

	this->ProcessEvent ( pFnRemoveFromChainingTowers, &RemoveFromChainingTowers_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.AddToChainingTowers
// [0x00020002] 
// Parameters infos:
// class ADunDefTower_ChainLightning* Tower                          ( CPF_Parm )

void ADunDef_OldOne::AddToChainingTowers ( class ADunDefTower_ChainLightning* Tower )
{
	static UFunction* pFnAddToChainingTowers = NULL;

	if ( ! pFnAddToChainingTowers )
		pFnAddToChainingTowers = (UFunction*) UObject::GObjObjects()->Data[ 85766 ];

	ADunDef_OldOne_execAddToChainingTowers_Parms AddToChainingTowers_Parms;
	AddToChainingTowers_Parms.Tower = Tower;

	this->ProcessEvent ( pFnAddToChainingTowers, &AddToChainingTowers_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.AllowSuction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::AllowSuction ( )
{
	static UFunction* pFnAllowSuction = NULL;

	if ( ! pFnAllowSuction )
		pFnAllowSuction = (UFunction*) UObject::GObjObjects()->Data[ 85764 ];

	ADunDef_OldOne_execAllowSuction_Parms AllowSuction_Parms;

	this->ProcessEvent ( pFnAllowSuction, &AllowSuction_Parms, NULL );

	return AllowSuction_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.IsPlayingCustomAnim
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   inAnim                         ( CPF_Parm )
// float                          TimeFromEndToConsiderFinished  ( CPF_OptionalParm | CPF_Parm )

bool ADunDef_OldOne::IsPlayingCustomAnim ( struct FName inAnim, float TimeFromEndToConsiderFinished )
{
	static UFunction* pFnIsPlayingCustomAnim = NULL;

	if ( ! pFnIsPlayingCustomAnim )
		pFnIsPlayingCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 85758 ];

	ADunDef_OldOne_execIsPlayingCustomAnim_Parms IsPlayingCustomAnim_Parms;
	memcpy ( &IsPlayingCustomAnim_Parms.inAnim, &inAnim, 0x8 );
	IsPlayingCustomAnim_Parms.TimeFromEndToConsiderFinished = TimeFromEndToConsiderFinished;

	this->ProcessEvent ( pFnIsPlayingCustomAnim, &IsPlayingCustomAnim_Parms, NULL );

	return IsPlayingCustomAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.SetupDamageFlashing
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOne::SetupDamageFlashing ( )
{
	static UFunction* pFnSetupDamageFlashing = NULL;

	if ( ! pFnSetupDamageFlashing )
		pFnSetupDamageFlashing = (UFunction*) UObject::GObjObjects()->Data[ 85755 ];

	ADunDef_OldOne_execSetupDamageFlashing_Parms SetupDamageFlashing_Parms;

	this->ProcessEvent ( pFnSetupDamageFlashing, &SetupDamageFlashing_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.UpdateDamageFlashing
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOne::UpdateDamageFlashing ( )
{
	static UFunction* pFnUpdateDamageFlashing = NULL;

	if ( ! pFnUpdateDamageFlashing )
		pFnUpdateDamageFlashing = (UFunction*) UObject::GObjObjects()->Data[ 85752 ];

	ADunDef_OldOne_execUpdateDamageFlashing_Parms UpdateDamageFlashing_Parms;

	this->ProcessEvent ( pFnUpdateDamageFlashing, &UpdateDamageFlashing_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.LocalTookDamage
// [0x00020102] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// struct FVector                 atPosition                     ( CPF_Parm )
// class UClass*                  fromDamageType                 ( CPF_Parm )

void ADunDef_OldOne::LocalTookDamage ( int DamageAmount, struct FVector atPosition, class UClass* fromDamageType )
{
	static UFunction* pFnLocalTookDamage = NULL;

	if ( ! pFnLocalTookDamage )
		pFnLocalTookDamage = (UFunction*) UObject::GObjObjects()->Data[ 85748 ];

	ADunDef_OldOne_execLocalTookDamage_Parms LocalTookDamage_Parms;
	LocalTookDamage_Parms.DamageAmount = DamageAmount;
	memcpy ( &LocalTookDamage_Parms.atPosition, &atPosition, 0xC );
	LocalTookDamage_Parms.fromDamageType = fromDamageType;

	this->ProcessEvent ( pFnLocalTookDamage, &LocalTookDamage_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.NotifyHealthLevel
// [0x00020002] 
// Parameters infos:
// class ADunDef_OldOneCrystals*  healthCrystal                  ( CPF_Parm )

void ADunDef_OldOne::NotifyHealthLevel ( class ADunDef_OldOneCrystals* healthCrystal )
{
	static UFunction* pFnNotifyHealthLevel = NULL;

	if ( ! pFnNotifyHealthLevel )
		pFnNotifyHealthLevel = (UFunction*) UObject::GObjObjects()->Data[ 85746 ];

	ADunDef_OldOne_execNotifyHealthLevel_Parms NotifyHealthLevel_Parms;
	NotifyHealthLevel_Parms.healthCrystal = healthCrystal;

	this->ProcessEvent ( pFnNotifyHealthLevel, &NotifyHealthLevel_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.HealPctOfMaxHealth
// [0x00024002] 
// Parameters infos:
// float                          HealPct                        ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// unsigned long                  bShowFloatingNumbers           ( CPF_OptionalParm | CPF_Parm )

void ADunDef_OldOne::HealPctOfMaxHealth ( float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers )
{
	static UFunction* pFnHealPctOfMaxHealth = NULL;

	if ( ! pFnHealPctOfMaxHealth )
		pFnHealPctOfMaxHealth = (UFunction*) UObject::GObjObjects()->Data[ 85741 ];

	ADunDef_OldOne_execHealPctOfMaxHealth_Parms HealPctOfMaxHealth_Parms;
	HealPctOfMaxHealth_Parms.HealPct = HealPct;
	HealPctOfMaxHealth_Parms.Healer = Healer;
	HealPctOfMaxHealth_Parms.DamageType = DamageType;
	HealPctOfMaxHealth_Parms.bShowFloatingNumbers = bShowFloatingNumbers;

	this->ProcessEvent ( pFnHealPctOfMaxHealth, &HealPctOfMaxHealth_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.GetHealthPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDef_OldOne::GetHealthPercent ( )
{
	static UFunction* pFnGetHealthPercent = NULL;

	if ( ! pFnGetHealthPercent )
		pFnGetHealthPercent = (UFunction*) UObject::GObjObjects()->Data[ 85739 ];

	ADunDef_OldOne_execGetHealthPercent_Parms GetHealthPercent_Parms;

	this->ProcessEvent ( pFnGetHealthPercent, &GetHealthPercent_Parms, NULL );

	return GetHealthPercent_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetHealth
// [0x00024102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bGetMax                        ( CPF_OptionalParm | CPF_Parm )

int ADunDef_OldOne::GetHealth ( unsigned long bGetMax )
{
	static UFunction* pFnGetHealth = NULL;

	if ( ! pFnGetHealth )
		pFnGetHealth = (UFunction*) UObject::GObjObjects()->Data[ 85736 ];

	ADunDef_OldOne_execGetHealth_Parms GetHealth_Parms;
	GetHealth_Parms.bGetMax = bGetMax;

	this->ProcessEvent ( pFnGetHealth, &GetHealth_Parms, NULL );

	return GetHealth_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.ForceMoveActor
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Mover                          ( CPF_Parm )
// struct FVector                 NewLoc                         ( CPF_Parm )

bool ADunDef_OldOne::ForceMoveActor ( class AActor* Mover, struct FVector NewLoc )
{
	static UFunction* pFnForceMoveActor = NULL;

	if ( ! pFnForceMoveActor )
		pFnForceMoveActor = (UFunction*) UObject::GObjObjects()->Data[ 85732 ];

	ADunDef_OldOne_execForceMoveActor_Parms ForceMoveActor_Parms;
	ForceMoveActor_Parms.Mover = Mover;
	memcpy ( &ForceMoveActor_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnForceMoveActor, &ForceMoveActor_Parms, NULL );

	return ForceMoveActor_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetOverrideTargetComponent
// [0x00020100] 
// Parameters infos:
// class UPrimitiveComponent*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UPrimitiveComponent* ADunDef_OldOne::GetOverrideTargetComponent ( )
{
	static UFunction* pFnGetOverrideTargetComponent = NULL;

	if ( ! pFnGetOverrideTargetComponent )
		pFnGetOverrideTargetComponent = (UFunction*) UObject::GObjObjects()->Data[ 85730 ];

	ADunDef_OldOne_execGetOverrideTargetComponent_Parms GetOverrideTargetComponent_Parms;

	this->ProcessEvent ( pFnGetOverrideTargetComponent, &GetOverrideTargetComponent_Parms, NULL );

	return GetOverrideTargetComponent_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetMass
// [0x00020100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDef_OldOne::GetMass ( )
{
	static UFunction* pFnGetMass = NULL;

	if ( ! pFnGetMass )
		pFnGetMass = (UFunction*) UObject::GObjObjects()->Data[ 85728 ];

	ADunDef_OldOne_execGetMass_Parms GetMass_Parms;

	this->ProcessEvent ( pFnGetMass, &GetMass_Parms, NULL );

	return GetMass_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.AllowDarknessIgnorance
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::AllowDarknessIgnorance ( )
{
	static UFunction* pFnAllowDarknessIgnorance = NULL;

	if ( ! pFnAllowDarknessIgnorance )
		pFnAllowDarknessIgnorance = (UFunction*) UObject::GObjObjects()->Data[ 85726 ];

	ADunDef_OldOne_execAllowDarknessIgnorance_Parms AllowDarknessIgnorance_Parms;

	this->ProcessEvent ( pFnAllowDarknessIgnorance, &AllowDarknessIgnorance_Parms, NULL );

	return AllowDarknessIgnorance_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.ForceFriendlyFire
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_OptionalParm | CPF_Parm )

bool ADunDef_OldOne::ForceFriendlyFire ( class AActor* Target )
{
	static UFunction* pFnForceFriendlyFire = NULL;

	if ( ! pFnForceFriendlyFire )
		pFnForceFriendlyFire = (UFunction*) UObject::GObjObjects()->Data[ 85723 ];

	ADunDef_OldOne_execForceFriendlyFire_Parms ForceFriendlyFire_Parms;
	ForceFriendlyFire_Parms.Target = Target;

	this->ProcessEvent ( pFnForceFriendlyFire, &ForceFriendlyFire_Parms, NULL );

	return ForceFriendlyFire_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetInterpolatedTargetingLocation
// [0x00024100] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )

struct FVector ADunDef_OldOne::GetInterpolatedTargetingLocation ( class AActor* RequestedBy )
{
	static UFunction* pFnGetInterpolatedTargetingLocation = NULL;

	if ( ! pFnGetInterpolatedTargetingLocation )
		pFnGetInterpolatedTargetingLocation = (UFunction*) UObject::GObjObjects()->Data[ 85720 ];

	ADunDef_OldOne_execGetInterpolatedTargetingLocation_Parms GetInterpolatedTargetingLocation_Parms;
	GetInterpolatedTargetingLocation_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnGetInterpolatedTargetingLocation, &GetInterpolatedTargetingLocation_Parms, NULL );

	return GetInterpolatedTargetingLocation_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetTargetingLocation
// [0x00024100] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )

struct FVector ADunDef_OldOne::GetTargetingLocation ( class AActor* RequestedBy )
{
	static UFunction* pFnGetTargetingLocation = NULL;

	if ( ! pFnGetTargetingLocation )
		pFnGetTargetingLocation = (UFunction*) UObject::GObjObjects()->Data[ 85717 ];

	ADunDef_OldOne_execGetTargetingLocation_Parms GetTargetingLocation_Parms;
	GetTargetingLocation_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnGetTargetingLocation, &GetTargetingLocation_Parms, NULL );

	return GetTargetingLocation_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.OnDestroy_RemoveFromTargetableList
// [0x00020000] 
// Parameters infos:

void ADunDef_OldOne::OnDestroy_RemoveFromTargetableList ( )
{
	static UFunction* pFnOnDestroy_RemoveFromTargetableList = NULL;

	if ( ! pFnOnDestroy_RemoveFromTargetableList )
		pFnOnDestroy_RemoveFromTargetableList = (UFunction*) UObject::GObjObjects()->Data[ 85716 ];

	ADunDef_OldOne_execOnDestroy_RemoveFromTargetableList_Parms OnDestroy_RemoveFromTargetableList_Parms;

	this->ProcessEvent ( pFnOnDestroy_RemoveFromTargetableList, &OnDestroy_RemoveFromTargetableList_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.OnPostBeginPlay_AddToTargetableList
// [0x00020000] 
// Parameters infos:

void ADunDef_OldOne::OnPostBeginPlay_AddToTargetableList ( )
{
	static UFunction* pFnOnPostBeginPlay_AddToTargetableList = NULL;

	if ( ! pFnOnPostBeginPlay_AddToTargetableList )
		pFnOnPostBeginPlay_AddToTargetableList = (UFunction*) UObject::GObjObjects()->Data[ 85715 ];

	ADunDef_OldOne_execOnPostBeginPlay_AddToTargetableList_Parms OnPostBeginPlay_AddToTargetableList_Parms;

	this->ProcessEvent ( pFnOnPostBeginPlay_AddToTargetableList, &OnPostBeginPlay_AddToTargetableList_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.UnregisterAttacker
// [0x00020000] 
// Parameters infos:
// class ADunDefEnemyController*  forController                  ( CPF_Parm )

void ADunDef_OldOne::UnregisterAttacker ( class ADunDefEnemyController* forController )
{
	static UFunction* pFnUnregisterAttacker = NULL;

	if ( ! pFnUnregisterAttacker )
		pFnUnregisterAttacker = (UFunction*) UObject::GObjObjects()->Data[ 85713 ];

	ADunDef_OldOne_execUnregisterAttacker_Parms UnregisterAttacker_Parms;
	UnregisterAttacker_Parms.forController = forController;

	this->ProcessEvent ( pFnUnregisterAttacker, &UnregisterAttacker_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.RegisterAttacker
// [0x00020000] 
// Parameters infos:
// class ADunDefEnemyController*  forController                  ( CPF_Parm )

void ADunDef_OldOne::RegisterAttacker ( class ADunDefEnemyController* forController )
{
	static UFunction* pFnRegisterAttacker = NULL;

	if ( ! pFnRegisterAttacker )
		pFnRegisterAttacker = (UFunction*) UObject::GObjObjects()->Data[ 85711 ];

	ADunDef_OldOne_execRegisterAttacker_Parms RegisterAttacker_Parms;
	RegisterAttacker_Parms.forController = forController;

	this->ProcessEvent ( pFnRegisterAttacker, &RegisterAttacker_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.GetAttackRangeOffset
// [0x00020000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDef_OldOne::GetAttackRangeOffset ( )
{
	static UFunction* pFnGetAttackRangeOffset = NULL;

	if ( ! pFnGetAttackRangeOffset )
		pFnGetAttackRangeOffset = (UFunction*) UObject::GObjObjects()->Data[ 85709 ];

	ADunDef_OldOne_execGetAttackRangeOffset_Parms GetAttackRangeOffset_Parms;

	this->ProcessEvent ( pFnGetAttackRangeOffset, &GetAttackRangeOffset_Parms, NULL );

	return GetAttackRangeOffset_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.IgnoreFriendlyFireDamage
// [0x00024100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefTargetableInterface* instigatorActor                ( CPF_Parm )
// class AController*             OptionalController             ( CPF_OptionalParm | CPF_Parm )

bool ADunDef_OldOne::IgnoreFriendlyFireDamage ( class UDunDefTargetableInterface* instigatorActor, class AController* OptionalController )
{
	static UFunction* pFnIgnoreFriendlyFireDamage = NULL;

	if ( ! pFnIgnoreFriendlyFireDamage )
		pFnIgnoreFriendlyFireDamage = (UFunction*) UObject::GObjObjects()->Data[ 85705 ];

	ADunDef_OldOne_execIgnoreFriendlyFireDamage_Parms IgnoreFriendlyFireDamage_Parms;
	IgnoreFriendlyFireDamage_Parms.instigatorActor = instigatorActor;
	IgnoreFriendlyFireDamage_Parms.OptionalController = OptionalController;

	this->ProcessEvent ( pFnIgnoreFriendlyFireDamage, &IgnoreFriendlyFireDamage_Parms, NULL );

	return IgnoreFriendlyFireDamage_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetTargetingTeam
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDef_OldOne::GetTargetingTeam ( )
{
	static UFunction* pFnGetTargetingTeam = NULL;

	if ( ! pFnGetTargetingTeam )
		pFnGetTargetingTeam = (UFunction*) UObject::GObjObjects()->Data[ 85703 ];

	ADunDef_OldOne_execGetTargetingTeam_Parms GetTargetingTeam_Parms;

	this->ProcessEvent ( pFnGetTargetingTeam, &GetTargetingTeam_Parms, NULL );

	return GetTargetingTeam_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetTowerTargetingDesirability
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            forTower                       ( CPF_Parm )

float ADunDef_OldOne::GetTowerTargetingDesirability ( class ADunDefTower* forTower )
{
	static UFunction* pFnGetTowerTargetingDesirability = NULL;

	if ( ! pFnGetTowerTargetingDesirability )
		pFnGetTowerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 85700 ];

	ADunDef_OldOne_execGetTowerTargetingDesirability_Parms GetTowerTargetingDesirability_Parms;
	GetTowerTargetingDesirability_Parms.forTower = forTower;

	this->ProcessEvent ( pFnGetTowerTargetingDesirability, &GetTowerTargetingDesirability_Parms, NULL );

	return GetTowerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.GetPlayerTargetingDesirability
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* forController                  ( CPF_Parm )
// class ADunDefPlayer*           ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

float ADunDef_OldOne::GetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer )
{
	static UFunction* pFnGetPlayerTargetingDesirability = NULL;

	if ( ! pFnGetPlayerTargetingDesirability )
		pFnGetPlayerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 85696 ];

	ADunDef_OldOne_execGetPlayerTargetingDesirability_Parms GetPlayerTargetingDesirability_Parms;
	GetPlayerTargetingDesirability_Parms.forController = forController;
	GetPlayerTargetingDesirability_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnGetPlayerTargetingDesirability, &GetPlayerTargetingDesirability_Parms, NULL );

	return GetPlayerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.TraceEyeMultiBeamDmg
// [0x00820002] 
// Parameters infos:
// int                            beamIdx                        ( CPF_Parm )
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )

void ADunDef_OldOne::TraceEyeMultiBeamDmg ( int beamIdx, struct FVector beamStartLoc, struct FVector BeamEndLoc )
{
	static UFunction* pFnTraceEyeMultiBeamDmg = NULL;

	if ( ! pFnTraceEyeMultiBeamDmg )
		pFnTraceEyeMultiBeamDmg = (UFunction*) UObject::GObjObjects()->Data[ 85685 ];

	ADunDef_OldOne_execTraceEyeMultiBeamDmg_Parms TraceEyeMultiBeamDmg_Parms;
	TraceEyeMultiBeamDmg_Parms.beamIdx = beamIdx;
	memcpy ( &TraceEyeMultiBeamDmg_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &TraceEyeMultiBeamDmg_Parms.BeamEndLoc, &BeamEndLoc, 0xC );

	this->ProcessEvent ( pFnTraceEyeMultiBeamDmg, &TraceEyeMultiBeamDmg_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SetMultiEyeBeamLocation
// [0x00024102] 
// Parameters infos:
// int                            beamIdx                        ( CPF_Parm )
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// struct FVector                 BeamNormal                     ( CPF_OptionalParm | CPF_Parm )

void ADunDef_OldOne::SetMultiEyeBeamLocation ( int beamIdx, struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal )
{
	static UFunction* pFnSetMultiEyeBeamLocation = NULL;

	if ( ! pFnSetMultiEyeBeamLocation )
		pFnSetMultiEyeBeamLocation = (UFunction*) UObject::GObjObjects()->Data[ 85680 ];

	ADunDef_OldOne_execSetMultiEyeBeamLocation_Parms SetMultiEyeBeamLocation_Parms;
	SetMultiEyeBeamLocation_Parms.beamIdx = beamIdx;
	memcpy ( &SetMultiEyeBeamLocation_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &SetMultiEyeBeamLocation_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	memcpy ( &SetMultiEyeBeamLocation_Parms.BeamNormal, &BeamNormal, 0xC );

	this->ProcessEvent ( pFnSetMultiEyeBeamLocation, &SetMultiEyeBeamLocation_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceMultiEyeBeam
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDef_OldOne::TraceMultiEyeBeam ( float DeltaTime )
{
	static UFunction* pFnTraceMultiEyeBeam = NULL;

	if ( ! pFnTraceMultiEyeBeam )
		pFnTraceMultiEyeBeam = (UFunction*) UObject::GObjObjects()->Data[ 85670 ];

	ADunDef_OldOne_execTraceMultiEyeBeam_Parms TraceMultiEyeBeam_Parms;
	TraceMultiEyeBeam_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTraceMultiEyeBeam, &TraceMultiEyeBeam_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnFire
// [0x00020002] 
// Parameters infos:
// class ADunDefGasCloud*         fireTemplate                   ( CPF_Parm )
// struct FVector                 SpawnLoc                       ( CPF_Parm )

void ADunDef_OldOne::SpawnFire ( class ADunDefGasCloud* fireTemplate, struct FVector SpawnLoc )
{
	static UFunction* pFnSpawnFire = NULL;

	if ( ! pFnSpawnFire )
		pFnSpawnFire = (UFunction*) UObject::GObjObjects()->Data[ 85666 ];

	ADunDef_OldOne_execSpawnFire_Parms SpawnFire_Parms;
	SpawnFire_Parms.fireTemplate = fireTemplate;
	memcpy ( &SpawnFire_Parms.SpawnLoc, &SpawnLoc, 0xC );

	this->ProcessEvent ( pFnSpawnFire, &SpawnFire_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceRightEyeDmg
// [0x00820002] 
// Parameters infos:
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )

void ADunDef_OldOne::TraceRightEyeDmg ( struct FVector beamStartLoc, struct FVector BeamEndLoc )
{
	static UFunction* pFnTraceRightEyeDmg = NULL;

	if ( ! pFnTraceRightEyeDmg )
		pFnTraceRightEyeDmg = (UFunction*) UObject::GObjObjects()->Data[ 85656 ];

	ADunDef_OldOne_execTraceRightEyeDmg_Parms TraceRightEyeDmg_Parms;
	memcpy ( &TraceRightEyeDmg_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &TraceRightEyeDmg_Parms.BeamEndLoc, &BeamEndLoc, 0xC );

	this->ProcessEvent ( pFnTraceRightEyeDmg, &TraceRightEyeDmg_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SetRightEyeBeamLocation
// [0x00024102] 
// Parameters infos:
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// struct FVector                 BeamNormal                     ( CPF_OptionalParm | CPF_Parm )

void ADunDef_OldOne::SetRightEyeBeamLocation ( struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal )
{
	static UFunction* pFnSetRightEyeBeamLocation = NULL;

	if ( ! pFnSetRightEyeBeamLocation )
		pFnSetRightEyeBeamLocation = (UFunction*) UObject::GObjObjects()->Data[ 85652 ];

	ADunDef_OldOne_execSetRightEyeBeamLocation_Parms SetRightEyeBeamLocation_Parms;
	memcpy ( &SetRightEyeBeamLocation_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &SetRightEyeBeamLocation_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	memcpy ( &SetRightEyeBeamLocation_Parms.BeamNormal, &BeamNormal, 0xC );

	this->ProcessEvent ( pFnSetRightEyeBeamLocation, &SetRightEyeBeamLocation_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEyeDmg
// [0x00820002] 
// Parameters infos:
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )

void ADunDef_OldOne::TraceLeftEyeDmg ( struct FVector beamStartLoc, struct FVector BeamEndLoc )
{
	static UFunction* pFnTraceLeftEyeDmg = NULL;

	if ( ! pFnTraceLeftEyeDmg )
		pFnTraceLeftEyeDmg = (UFunction*) UObject::GObjObjects()->Data[ 85642 ];

	ADunDef_OldOne_execTraceLeftEyeDmg_Parms TraceLeftEyeDmg_Parms;
	memcpy ( &TraceLeftEyeDmg_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &TraceLeftEyeDmg_Parms.BeamEndLoc, &BeamEndLoc, 0xC );

	this->ProcessEvent ( pFnTraceLeftEyeDmg, &TraceLeftEyeDmg_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SetLeftEyeBeamLocation
// [0x00024102] 
// Parameters infos:
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// struct FVector                 BeamNormal                     ( CPF_OptionalParm | CPF_Parm )

void ADunDef_OldOne::SetLeftEyeBeamLocation ( struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal )
{
	static UFunction* pFnSetLeftEyeBeamLocation = NULL;

	if ( ! pFnSetLeftEyeBeamLocation )
		pFnSetLeftEyeBeamLocation = (UFunction*) UObject::GObjObjects()->Data[ 85638 ];

	ADunDef_OldOne_execSetLeftEyeBeamLocation_Parms SetLeftEyeBeamLocation_Parms;
	memcpy ( &SetLeftEyeBeamLocation_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &SetLeftEyeBeamLocation_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	memcpy ( &SetLeftEyeBeamLocation_Parms.BeamNormal, &BeamNormal, 0xC );

	this->ProcessEvent ( pFnSetLeftEyeBeamLocation, &SetLeftEyeBeamLocation_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceRightEye
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDef_OldOne::TraceRightEye ( float DeltaTime )
{
	static UFunction* pFnTraceRightEye = NULL;

	if ( ! pFnTraceRightEye )
		pFnTraceRightEye = (UFunction*) UObject::GObjObjects()->Data[ 85629 ];

	ADunDef_OldOne_execTraceRightEye_Parms TraceRightEye_Parms;
	TraceRightEye_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTraceRightEye, &TraceRightEye_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEye
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDef_OldOne::TraceLeftEye ( float DeltaTime )
{
	static UFunction* pFnTraceLeftEye = NULL;

	if ( ! pFnTraceLeftEye )
		pFnTraceLeftEye = (UFunction*) UObject::GObjObjects()->Data[ 85620 ];

	ADunDef_OldOne_execTraceLeftEye_Parms TraceLeftEye_Parms;
	TraceLeftEye_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTraceLeftEye, &TraceLeftEye_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyMultiBeamDmg
// [0x00820002] 
// Parameters infos:
// int                            beamIdx                        ( CPF_Parm )
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )

void ADunDef_OldOne::TraceBellyMultiBeamDmg ( int beamIdx, struct FVector beamStartLoc, struct FVector BeamEndLoc )
{
	static UFunction* pFnTraceBellyMultiBeamDmg = NULL;

	if ( ! pFnTraceBellyMultiBeamDmg )
		pFnTraceBellyMultiBeamDmg = (UFunction*) UObject::GObjObjects()->Data[ 85609 ];

	ADunDef_OldOne_execTraceBellyMultiBeamDmg_Parms TraceBellyMultiBeamDmg_Parms;
	TraceBellyMultiBeamDmg_Parms.beamIdx = beamIdx;
	memcpy ( &TraceBellyMultiBeamDmg_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &TraceBellyMultiBeamDmg_Parms.BeamEndLoc, &BeamEndLoc, 0xC );

	this->ProcessEvent ( pFnTraceBellyMultiBeamDmg, &TraceBellyMultiBeamDmg_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeamDmg
// [0x00820002] 
// Parameters infos:
// int                            Idx                            ( CPF_Parm )
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )

void ADunDef_OldOne::TraceBellyBeamDmg ( int Idx, struct FVector beamStartLoc, struct FVector BeamEndLoc )
{
	static UFunction* pFnTraceBellyBeamDmg = NULL;

	if ( ! pFnTraceBellyBeamDmg )
		pFnTraceBellyBeamDmg = (UFunction*) UObject::GObjObjects()->Data[ 85598 ];

	ADunDef_OldOne_execTraceBellyBeamDmg_Parms TraceBellyBeamDmg_Parms;
	TraceBellyBeamDmg_Parms.Idx = Idx;
	memcpy ( &TraceBellyBeamDmg_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &TraceBellyBeamDmg_Parms.BeamEndLoc, &BeamEndLoc, 0xC );

	this->ProcessEvent ( pFnTraceBellyBeamDmg, &TraceBellyBeamDmg_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SetBellyBeamLocation
// [0x00024102] 
// Parameters infos:
// int                            Idx                            ( CPF_Parm )
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// struct FVector                 BeamNormal                     ( CPF_OptionalParm | CPF_Parm )

void ADunDef_OldOne::SetBellyBeamLocation ( int Idx, struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal )
{
	static UFunction* pFnSetBellyBeamLocation = NULL;

	if ( ! pFnSetBellyBeamLocation )
		pFnSetBellyBeamLocation = (UFunction*) UObject::GObjObjects()->Data[ 85593 ];

	ADunDef_OldOne_execSetBellyBeamLocation_Parms SetBellyBeamLocation_Parms;
	SetBellyBeamLocation_Parms.Idx = Idx;
	memcpy ( &SetBellyBeamLocation_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &SetBellyBeamLocation_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	memcpy ( &SetBellyBeamLocation_Parms.BeamNormal, &BeamNormal, 0xC );

	this->ProcessEvent ( pFnSetBellyBeamLocation, &SetBellyBeamLocation_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SetMultiBellyBeamLocation
// [0x00024102] 
// Parameters infos:
// int                            beamIdx                        ( CPF_Parm )
// struct FVector                 beamStartLoc                   ( CPF_Parm )
// struct FVector                 BeamEndLoc                     ( CPF_Parm )
// struct FVector                 BeamNormal                     ( CPF_OptionalParm | CPF_Parm )

void ADunDef_OldOne::SetMultiBellyBeamLocation ( int beamIdx, struct FVector beamStartLoc, struct FVector BeamEndLoc, struct FVector BeamNormal )
{
	static UFunction* pFnSetMultiBellyBeamLocation = NULL;

	if ( ! pFnSetMultiBellyBeamLocation )
		pFnSetMultiBellyBeamLocation = (UFunction*) UObject::GObjObjects()->Data[ 85588 ];

	ADunDef_OldOne_execSetMultiBellyBeamLocation_Parms SetMultiBellyBeamLocation_Parms;
	SetMultiBellyBeamLocation_Parms.beamIdx = beamIdx;
	memcpy ( &SetMultiBellyBeamLocation_Parms.beamStartLoc, &beamStartLoc, 0xC );
	memcpy ( &SetMultiBellyBeamLocation_Parms.BeamEndLoc, &BeamEndLoc, 0xC );
	memcpy ( &SetMultiBellyBeamLocation_Parms.BeamNormal, &BeamNormal, 0xC );

	this->ProcessEvent ( pFnSetMultiBellyBeamLocation, &SetMultiBellyBeamLocation_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceMultiBellyBeam
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDef_OldOne::TraceMultiBellyBeam ( float DeltaTime )
{
	static UFunction* pFnTraceMultiBellyBeam = NULL;

	if ( ! pFnTraceMultiBellyBeam )
		pFnTraceMultiBellyBeam = (UFunction*) UObject::GObjObjects()->Data[ 85578 ];

	ADunDef_OldOne_execTraceMultiBellyBeam_Parms TraceMultiBellyBeam_Parms;
	TraceMultiBellyBeam_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTraceMultiBellyBeam, &TraceMultiBellyBeam_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SetRandomLazerPoint
// [0x00020102] 
// Parameters infos:
// int                            lazerIdx                       ( CPF_Parm )
// struct FVector                 lazerPoint                     ( CPF_Parm )

void ADunDef_OldOne::SetRandomLazerPoint ( int lazerIdx, struct FVector lazerPoint )
{
	static UFunction* pFnSetRandomLazerPoint = NULL;

	if ( ! pFnSetRandomLazerPoint )
		pFnSetRandomLazerPoint = (UFunction*) UObject::GObjObjects()->Data[ 85575 ];

	ADunDef_OldOne_execSetRandomLazerPoint_Parms SetRandomLazerPoint_Parms;
	SetRandomLazerPoint_Parms.lazerIdx = lazerIdx;
	memcpy ( &SetRandomLazerPoint_Parms.lazerPoint, &lazerPoint, 0xC );

	this->ProcessEvent ( pFnSetRandomLazerPoint, &SetRandomLazerPoint_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeam
// [0x00820102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDef_OldOne::TraceBellyBeam ( float DeltaTime )
{
	static UFunction* pFnTraceBellyBeam = NULL;

	if ( ! pFnTraceBellyBeam )
		pFnTraceBellyBeam = (UFunction*) UObject::GObjObjects()->Data[ 85565 ];

	ADunDef_OldOne_execTraceBellyBeam_Parms TraceBellyBeam_Parms;
	TraceBellyBeam_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTraceBellyBeam, &TraceBellyBeam_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SetNormalBellyTarget
// [0x00020102] 
// Parameters infos:
// int                            Idx                            ( CPF_Parm )

void ADunDef_OldOne::SetNormalBellyTarget ( int Idx )
{
	static UFunction* pFnSetNormalBellyTarget = NULL;

	if ( ! pFnSetNormalBellyTarget )
		pFnSetNormalBellyTarget = (UFunction*) UObject::GObjObjects()->Data[ 85562 ];

	ADunDef_OldOne_execSetNormalBellyTarget_Parms SetNormalBellyTarget_Parms;
	SetNormalBellyTarget_Parms.Idx = Idx;

	this->ProcessEvent ( pFnSetNormalBellyTarget, &SetNormalBellyTarget_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.InitNormalBeams
// [0x00820102] 
// Parameters infos:

void ADunDef_OldOne::InitNormalBeams ( )
{
	static UFunction* pFnInitNormalBeams = NULL;

	if ( ! pFnInitNormalBeams )
		pFnInitNormalBeams = (UFunction*) UObject::GObjObjects()->Data[ 85559 ];

	ADunDef_OldOne_execInitNormalBeams_Parms InitNormalBeams_Parms;

	this->ProcessEvent ( pFnInitNormalBeams, &InitNormalBeams_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ChooseTarget
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* ADunDef_OldOne::ChooseTarget ( )
{
	static UFunction* pFnChooseTarget = NULL;

	if ( ! pFnChooseTarget )
		pFnChooseTarget = (UFunction*) UObject::GObjObjects()->Data[ 85554 ];

	ADunDef_OldOne_execChooseTarget_Parms ChooseTarget_Parms;

	this->ProcessEvent ( pFnChooseTarget, &ChooseTarget_Parms, NULL );

	return ChooseTarget_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.StartLazers
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventStartLazers ( )
{
	static UFunction* pFnStartLazers = NULL;

	if ( ! pFnStartLazers )
		pFnStartLazers = (UFunction*) UObject::GObjObjects()->Data[ 85553 ];

	ADunDef_OldOne_eventStartLazers_Parms StartLazers_Parms;

	this->ProcessEvent ( pFnStartLazers, &StartLazers_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.StopFlameBreath
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventStopFlameBreath ( )
{
	static UFunction* pFnStopFlameBreath = NULL;

	if ( ! pFnStopFlameBreath )
		pFnStopFlameBreath = (UFunction*) UObject::GObjObjects()->Data[ 85552 ];

	ADunDef_OldOne_eventStopFlameBreath_Parms StopFlameBreath_Parms;

	this->ProcessEvent ( pFnStopFlameBreath, &StopFlameBreath_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.StartFlameSweep
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventStartFlameSweep ( )
{
	static UFunction* pFnStartFlameSweep = NULL;

	if ( ! pFnStartFlameSweep )
		pFnStartFlameSweep = (UFunction*) UObject::GObjObjects()->Data[ 85549 ];

	ADunDef_OldOne_eventStartFlameSweep_Parms StartFlameSweep_Parms;

	this->ProcessEvent ( pFnStartFlameSweep, &StartFlameSweep_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.StartFlameburst
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventStartFlameburst ( )
{
	static UFunction* pFnStartFlameburst = NULL;

	if ( ! pFnStartFlameburst )
		pFnStartFlameburst = (UFunction*) UObject::GObjObjects()->Data[ 85546 ];

	ADunDef_OldOne_eventStartFlameburst_Parms StartFlameburst_Parms;

	this->ProcessEvent ( pFnStartFlameburst, &StartFlameburst_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateChestCrystal
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventActivateChestCrystal ( )
{
	static UFunction* pFnActivateChestCrystal = NULL;

	if ( ! pFnActivateChestCrystal )
		pFnActivateChestCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85544 ];

	ADunDef_OldOne_eventActivateChestCrystal_Parms ActivateChestCrystal_Parms;

	this->ProcessEvent ( pFnActivateChestCrystal, &ActivateChestCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateRightHandCrystal
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventActivateRightHandCrystal ( )
{
	static UFunction* pFnActivateRightHandCrystal = NULL;

	if ( ! pFnActivateRightHandCrystal )
		pFnActivateRightHandCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85542 ];

	ADunDef_OldOne_eventActivateRightHandCrystal_Parms ActivateRightHandCrystal_Parms;

	this->ProcessEvent ( pFnActivateRightHandCrystal, &ActivateRightHandCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateLeftHandCrystal
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventActivateLeftHandCrystal ( )
{
	static UFunction* pFnActivateLeftHandCrystal = NULL;

	if ( ! pFnActivateLeftHandCrystal )
		pFnActivateLeftHandCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85540 ];

	ADunDef_OldOne_eventActivateLeftHandCrystal_Parms ActivateLeftHandCrystal_Parms;

	this->ProcessEvent ( pFnActivateLeftHandCrystal, &ActivateLeftHandCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateChestCrystal
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventDeactivateChestCrystal ( )
{
	static UFunction* pFnDeactivateChestCrystal = NULL;

	if ( ! pFnDeactivateChestCrystal )
		pFnDeactivateChestCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85538 ];

	ADunDef_OldOne_eventDeactivateChestCrystal_Parms DeactivateChestCrystal_Parms;

	this->ProcessEvent ( pFnDeactivateChestCrystal, &DeactivateChestCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateRightHandCrystal
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventDeactivateRightHandCrystal ( )
{
	static UFunction* pFnDeactivateRightHandCrystal = NULL;

	if ( ! pFnDeactivateRightHandCrystal )
		pFnDeactivateRightHandCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85536 ];

	ADunDef_OldOne_eventDeactivateRightHandCrystal_Parms DeactivateRightHandCrystal_Parms;

	this->ProcessEvent ( pFnDeactivateRightHandCrystal, &DeactivateRightHandCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateLeftHandCrystal
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventDeactivateLeftHandCrystal ( )
{
	static UFunction* pFnDeactivateLeftHandCrystal = NULL;

	if ( ! pFnDeactivateLeftHandCrystal )
		pFnDeactivateLeftHandCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85534 ];

	ADunDef_OldOne_eventDeactivateLeftHandCrystal_Parms DeactivateLeftHandCrystal_Parms;

	this->ProcessEvent ( pFnDeactivateLeftHandCrystal, &DeactivateLeftHandCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnDoubleSlamEmitter
// [0x00020102] 
// Parameters infos:
// struct FVector                 SpawnLoc                       ( CPF_Parm )
// class ADunDefEmitterShockwave* EmitterTemplate                ( CPF_Parm )

void ADunDef_OldOne::SpawnDoubleSlamEmitter ( struct FVector SpawnLoc, class ADunDefEmitterShockwave* EmitterTemplate )
{
	static UFunction* pFnSpawnDoubleSlamEmitter = NULL;

	if ( ! pFnSpawnDoubleSlamEmitter )
		pFnSpawnDoubleSlamEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85530 ];

	ADunDef_OldOne_execSpawnDoubleSlamEmitter_Parms SpawnDoubleSlamEmitter_Parms;
	memcpy ( &SpawnDoubleSlamEmitter_Parms.SpawnLoc, &SpawnLoc, 0xC );
	SpawnDoubleSlamEmitter_Parms.EmitterTemplate = EmitterTemplate;

	this->ProcessEvent ( pFnSpawnDoubleSlamEmitter, &SpawnDoubleSlamEmitter_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnSingleSlamEmitter
// [0x00020102] 
// Parameters infos:
// struct FVector                 SpawnLoc                       ( CPF_Parm )

void ADunDef_OldOne::SpawnSingleSlamEmitter ( struct FVector SpawnLoc )
{
	static UFunction* pFnSpawnSingleSlamEmitter = NULL;

	if ( ! pFnSpawnSingleSlamEmitter )
		pFnSpawnSingleSlamEmitter = (UFunction*) UObject::GObjObjects()->Data[ 85526 ];

	ADunDef_OldOne_execSpawnSingleSlamEmitter_Parms SpawnSingleSlamEmitter_Parms;
	memcpy ( &SpawnSingleSlamEmitter_Parms.SpawnLoc, &SpawnLoc, 0xC );

	this->ProcessEvent ( pFnSpawnSingleSlamEmitter, &SpawnSingleSlamEmitter_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleStomp
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventDoubleStomp ( )
{
	static UFunction* pFnDoubleStomp = NULL;

	if ( ! pFnDoubleStomp )
		pFnDoubleStomp = (UFunction*) UObject::GObjObjects()->Data[ 85521 ];

	ADunDef_OldOne_eventDoubleStomp_Parms DoubleStomp_Parms;

	this->ProcessEvent ( pFnDoubleStomp, &DoubleStomp_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.RightFootStomp
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventRightFootStomp ( )
{
	static UFunction* pFnRightFootStomp = NULL;

	if ( ! pFnRightFootStomp )
		pFnRightFootStomp = (UFunction*) UObject::GObjObjects()->Data[ 85516 ];

	ADunDef_OldOne_eventRightFootStomp_Parms RightFootStomp_Parms;

	this->ProcessEvent ( pFnRightFootStomp, &RightFootStomp_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.LeftFootStomp
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventLeftFootStomp ( )
{
	static UFunction* pFnLeftFootStomp = NULL;

	if ( ! pFnLeftFootStomp )
		pFnLeftFootStomp = (UFunction*) UObject::GObjObjects()->Data[ 85511 ];

	ADunDef_OldOne_eventLeftFootStomp_Parms LeftFootStomp_Parms;

	this->ProcessEvent ( pFnLeftFootStomp, &LeftFootStomp_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.UpdateDifficultyValues
// [0x00020002] 
// Parameters infos:

void ADunDef_OldOne::UpdateDifficultyValues ( )
{
	static UFunction* pFnUpdateDifficultyValues = NULL;

	if ( ! pFnUpdateDifficultyValues )
		pFnUpdateDifficultyValues = (UFunction*) UObject::GObjObjects()->Data[ 85510 ];

	ADunDef_OldOne_execUpdateDifficultyValues_Parms UpdateDifficultyValues_Parms;

	this->ProcessEvent ( pFnUpdateDifficultyValues, &UpdateDifficultyValues_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.DeActivateCollisionDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventDeActivateCollisionDamage ( )
{
	static UFunction* pFnDeActivateCollisionDamage = NULL;

	if ( ! pFnDeActivateCollisionDamage )
		pFnDeActivateCollisionDamage = (UFunction*) UObject::GObjObjects()->Data[ 85508 ];

	ADunDef_OldOne_eventDeActivateCollisionDamage_Parms DeActivateCollisionDamage_Parms;

	this->ProcessEvent ( pFnDeActivateCollisionDamage, &DeActivateCollisionDamage_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateCollisionDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventActivateCollisionDamage ( )
{
	static UFunction* pFnActivateCollisionDamage = NULL;

	if ( ! pFnActivateCollisionDamage )
		pFnActivateCollisionDamage = (UFunction*) UObject::GObjObjects()->Data[ 85506 ];

	ADunDef_OldOne_eventActivateCollisionDamage_Parms ActivateCollisionDamage_Parms;

	this->ProcessEvent ( pFnActivateCollisionDamage, &ActivateCollisionDamage_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.GetNumCrystalsThisPhase
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDef_OldOne::GetNumCrystalsThisPhase ( )
{
	static UFunction* pFnGetNumCrystalsThisPhase = NULL;

	if ( ! pFnGetNumCrystalsThisPhase )
		pFnGetNumCrystalsThisPhase = (UFunction*) UObject::GObjObjects()->Data[ 85504 ];

	ADunDef_OldOne_execGetNumCrystalsThisPhase_Parms GetNumCrystalsThisPhase_Parms;

	this->ProcessEvent ( pFnGetNumCrystalsThisPhase, &GetNumCrystalsThisPhase_Parms, NULL );

	return GetNumCrystalsThisPhase_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.DoPhaseShift
// [0x00020002] 
// Parameters infos:

void ADunDef_OldOne::DoPhaseShift ( )
{
	static UFunction* pFnDoPhaseShift = NULL;

	if ( ! pFnDoPhaseShift )
		pFnDoPhaseShift = (UFunction*) UObject::GObjObjects()->Data[ 85503 ];

	ADunDef_OldOne_execDoPhaseShift_Parms DoPhaseShift_Parms;

	this->ProcessEvent ( pFnDoPhaseShift, &DoPhaseShift_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ArePlayersWithinRange
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 LocCheck                       ( CPF_Parm )
// float                          distCheck                      ( CPF_Parm )

bool ADunDef_OldOne::ArePlayersWithinRange ( struct FVector LocCheck, float distCheck )
{
	static UFunction* pFnArePlayersWithinRange = NULL;

	if ( ! pFnArePlayersWithinRange )
		pFnArePlayersWithinRange = (UFunction*) UObject::GObjObjects()->Data[ 85498 ];

	ADunDef_OldOne_execArePlayersWithinRange_Parms ArePlayersWithinRange_Parms;
	memcpy ( &ArePlayersWithinRange_Parms.LocCheck, &LocCheck, 0xC );
	ArePlayersWithinRange_Parms.distCheck = distCheck;

	this->ProcessEvent ( pFnArePlayersWithinRange, &ArePlayersWithinRange_Parms, NULL );

	return ArePlayersWithinRange_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.DoDeath
// [0x00820002] 
// Parameters infos:

void ADunDef_OldOne::DoDeath ( )
{
	static UFunction* pFnDoDeath = NULL;

	if ( ! pFnDoDeath )
		pFnDoDeath = (UFunction*) UObject::GObjObjects()->Data[ 85494 ];

	ADunDef_OldOne_execDoDeath_Parms DoDeath_Parms;

	this->ProcessEvent ( pFnDoDeath, &DoDeath_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.CheckCrystalDeaths
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::CheckCrystalDeaths ( )
{
	static UFunction* pFnCheckCrystalDeaths = NULL;

	if ( ! pFnCheckCrystalDeaths )
		pFnCheckCrystalDeaths = (UFunction*) UObject::GObjObjects()->Data[ 85492 ];

	ADunDef_OldOne_execCheckCrystalDeaths_Parms CheckCrystalDeaths_Parms;

	this->ProcessEvent ( pFnCheckCrystalDeaths, &CheckCrystalDeaths_Parms, NULL );

	return CheckCrystalDeaths_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.NotifyCrystalDeath
// [0x00020002] 
// Parameters infos:
// class ADunDef_OldOneCrystals*  diedCrystal                    ( CPF_Parm )

void ADunDef_OldOne::NotifyCrystalDeath ( class ADunDef_OldOneCrystals* diedCrystal )
{
	static UFunction* pFnNotifyCrystalDeath = NULL;

	if ( ! pFnNotifyCrystalDeath )
		pFnNotifyCrystalDeath = (UFunction*) UObject::GObjObjects()->Data[ 85488 ];

	ADunDef_OldOne_execNotifyCrystalDeath_Parms NotifyCrystalDeath_Parms;
	NotifyCrystalDeath_Parms.diedCrystal = diedCrystal;

	this->ProcessEvent ( pFnNotifyCrystalDeath, &NotifyCrystalDeath_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleFootStomp
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventDoubleFootStomp ( )
{
	static UFunction* pFnDoubleFootStomp = NULL;

	if ( ! pFnDoubleFootStomp )
		pFnDoubleFootStomp = (UFunction*) UObject::GObjObjects()->Data[ 85485 ];

	ADunDef_OldOne_eventDoubleFootStomp_Parms DoubleFootStomp_Parms;

	this->ProcessEvent ( pFnDoubleFootStomp, &DoubleFootStomp_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.LeftHandProjectile
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventLeftHandProjectile ( )
{
	static UFunction* pFnLeftHandProjectile = NULL;

	if ( ! pFnLeftHandProjectile )
		pFnLeftHandProjectile = (UFunction*) UObject::GObjObjects()->Data[ 85484 ];

	ADunDef_OldOne_eventLeftHandProjectile_Parms LeftHandProjectile_Parms;

	this->ProcessEvent ( pFnLeftHandProjectile, &LeftHandProjectile_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.RightHandProjectile
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventRightHandProjectile ( )
{
	static UFunction* pFnRightHandProjectile = NULL;

	if ( ! pFnRightHandProjectile )
		pFnRightHandProjectile = (UFunction*) UObject::GObjObjects()->Data[ 85483 ];

	ADunDef_OldOne_eventRightHandProjectile_Parms RightHandProjectile_Parms;

	this->ProcessEvent ( pFnRightHandProjectile, &RightHandProjectile_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.PickSmashAttack
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::PickSmashAttack ( )
{
	static UFunction* pFnPickSmashAttack = NULL;

	if ( ! pFnPickSmashAttack )
		pFnPickSmashAttack = (UFunction*) UObject::GObjObjects()->Data[ 85481 ];

	ADunDef_OldOne_execPickSmashAttack_Parms PickSmashAttack_Parms;

	this->ProcessEvent ( pFnPickSmashAttack, &PickSmashAttack_Parms, NULL );

	return PickSmashAttack_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.DoProjectileAttack
// [0x00020100] 
// Parameters infos:

void ADunDef_OldOne::DoProjectileAttack ( )
{
	static UFunction* pFnDoProjectileAttack = NULL;

	if ( ! pFnDoProjectileAttack )
		pFnDoProjectileAttack = (UFunction*) UObject::GObjObjects()->Data[ 85480 ];

	ADunDef_OldOne_execDoProjectileAttack_Parms DoProjectileAttack_Parms;

	this->ProcessEvent ( pFnDoProjectileAttack, &DoProjectileAttack_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.CheckProjectileAttack
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::CheckProjectileAttack ( )
{
	static UFunction* pFnCheckProjectileAttack = NULL;

	if ( ! pFnCheckProjectileAttack )
		pFnCheckProjectileAttack = (UFunction*) UObject::GObjObjects()->Data[ 85478 ];

	ADunDef_OldOne_execCheckProjectileAttack_Parms CheckProjectileAttack_Parms;

	this->ProcessEvent ( pFnCheckProjectileAttack, &CheckProjectileAttack_Parms, NULL );

	return CheckProjectileAttack_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForTaunt
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::CheckForTaunt ( )
{
	static UFunction* pFnCheckForTaunt = NULL;

	if ( ! pFnCheckForTaunt )
		pFnCheckForTaunt = (UFunction*) UObject::GObjObjects()->Data[ 85476 ];

	ADunDef_OldOne_execCheckForTaunt_Parms CheckForTaunt_Parms;

	this->ProcessEvent ( pFnCheckForTaunt, &CheckForTaunt_Parms, NULL );

	return CheckForTaunt_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForBeamAttack
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::CheckForBeamAttack ( )
{
	static UFunction* pFnCheckForBeamAttack = NULL;

	if ( ! pFnCheckForBeamAttack )
		pFnCheckForBeamAttack = (UFunction*) UObject::GObjObjects()->Data[ 85474 ];

	ADunDef_OldOne_execCheckForBeamAttack_Parms CheckForBeamAttack_Parms;

	this->ProcessEvent ( pFnCheckForBeamAttack, &CheckForBeamAttack_Parms, NULL );

	return CheckForBeamAttack_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.DoTaunt
// [0x00020100] 
// Parameters infos:

void ADunDef_OldOne::DoTaunt ( )
{
	static UFunction* pFnDoTaunt = NULL;

	if ( ! pFnDoTaunt )
		pFnDoTaunt = (UFunction*) UObject::GObjObjects()->Data[ 85473 ];

	ADunDef_OldOne_execDoTaunt_Parms DoTaunt_Parms;

	this->ProcessEvent ( pFnDoTaunt, &DoTaunt_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.GetTauntAnim
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName ADunDef_OldOne::GetTauntAnim ( )
{
	static UFunction* pFnGetTauntAnim = NULL;

	if ( ! pFnGetTauntAnim )
		pFnGetTauntAnim = (UFunction*) UObject::GObjObjects()->Data[ 85471 ];

	ADunDef_OldOne_execGetTauntAnim_Parms GetTauntAnim_Parms;

	this->ProcessEvent ( pFnGetTauntAnim, &GetTauntAnim_Parms, NULL );

	return GetTauntAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.PlayHurtAnim
// [0x00020102] 
// Parameters infos:
// struct FName                   theHurtAnim                    ( CPF_Parm )

void ADunDef_OldOne::PlayHurtAnim ( struct FName theHurtAnim )
{
	static UFunction* pFnPlayHurtAnim = NULL;

	if ( ! pFnPlayHurtAnim )
		pFnPlayHurtAnim = (UFunction*) UObject::GObjObjects()->Data[ 85396 ];

	ADunDef_OldOne_execPlayHurtAnim_Parms PlayHurtAnim_Parms;
	memcpy ( &PlayHurtAnim_Parms.theHurtAnim, &theHurtAnim, 0x8 );

	this->ProcessEvent ( pFnPlayHurtAnim, &PlayHurtAnim_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.FinishTaunt
// [0x00020002] 
// Parameters infos:

void ADunDef_OldOne::FinishTaunt ( )
{
	static UFunction* pFnFinishTaunt = NULL;

	if ( ! pFnFinishTaunt )
		pFnFinishTaunt = (UFunction*) UObject::GObjObjects()->Data[ 85459 ];

	ADunDef_OldOne_execFinishTaunt_Parms FinishTaunt_Parms;

	this->ProcessEvent ( pFnFinishTaunt, &FinishTaunt_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnMeteor
// [0x00820002] 
// Parameters infos:
// class ADunDefCustomNode*       theNode                        ( CPF_Parm )

void ADunDef_OldOne::SpawnMeteor ( class ADunDefCustomNode* theNode )
{
	static UFunction* pFnSpawnMeteor = NULL;

	if ( ! pFnSpawnMeteor )
		pFnSpawnMeteor = (UFunction*) UObject::GObjObjects()->Data[ 85455 ];

	ADunDef_OldOne_execSpawnMeteor_Parms SpawnMeteor_Parms;
	SpawnMeteor_Parms.theNode = theNode;

	this->ProcessEvent ( pFnSpawnMeteor, &SpawnMeteor_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.StartMeteorAttack
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventStartMeteorAttack ( )
{
	static UFunction* pFnStartMeteorAttack = NULL;

	if ( ! pFnStartMeteorAttack )
		pFnStartMeteorAttack = (UFunction*) UObject::GObjObjects()->Data[ 85449 ];

	ADunDef_OldOne_eventStartMeteorAttack_Parms StartMeteorAttack_Parms;

	this->ProcessEvent ( pFnStartMeteorAttack, &StartMeteorAttack_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForMeteorAttack
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::CheckForMeteorAttack ( )
{
	static UFunction* pFnCheckForMeteorAttack = NULL;

	if ( ! pFnCheckForMeteorAttack )
		pFnCheckForMeteorAttack = (UFunction*) UObject::GObjObjects()->Data[ 85447 ];

	ADunDef_OldOne_execCheckForMeteorAttack_Parms CheckForMeteorAttack_Parms;

	this->ProcessEvent ( pFnCheckForMeteorAttack, &CheckForMeteorAttack_Parms, NULL );

	return CheckForMeteorAttack_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForFlame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::CheckForFlame ( )
{
	static UFunction* pFnCheckForFlame = NULL;

	if ( ! pFnCheckForFlame )
		pFnCheckForFlame = (UFunction*) UObject::GObjObjects()->Data[ 85445 ];

	ADunDef_OldOne_execCheckForFlame_Parms CheckForFlame_Parms;

	this->ProcessEvent ( pFnCheckForFlame, &CheckForFlame_Parms, NULL );

	return CheckForFlame_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForLazer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::CheckForLazer ( )
{
	static UFunction* pFnCheckForLazer = NULL;

	if ( ! pFnCheckForLazer )
		pFnCheckForLazer = (UFunction*) UObject::GObjObjects()->Data[ 85443 ];

	ADunDef_OldOne_execCheckForLazer_Parms CheckForLazer_Parms;

	this->ProcessEvent ( pFnCheckForLazer, &CheckForLazer_Parms, NULL );

	return CheckForLazer_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForSweep
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDef_OldOne::CheckForSweep ( )
{
	static UFunction* pFnCheckForSweep = NULL;

	if ( ! pFnCheckForSweep )
		pFnCheckForSweep = (UFunction*) UObject::GObjObjects()->Data[ 85441 ];

	ADunDef_OldOne_execCheckForSweep_Parms CheckForSweep_Parms;

	this->ProcessEvent ( pFnCheckForSweep, &CheckForSweep_Parms, NULL );

	return CheckForSweep_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.EndAttack
// [0x00024000] 
// Parameters infos:
// unsigned long                  bDontEndState                  ( CPF_OptionalParm | CPF_Parm )

void ADunDef_OldOne::EndAttack ( unsigned long bDontEndState )
{
	static UFunction* pFnEndAttack = NULL;

	if ( ! pFnEndAttack )
		pFnEndAttack = (UFunction*) UObject::GObjObjects()->Data[ 85439 ];

	ADunDef_OldOne_execEndAttack_Parms EndAttack_Parms;
	EndAttack_Parms.bDontEndState = bDontEndState;

	this->ProcessEvent ( pFnEndAttack, &EndAttack_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ShutDownLazers
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOne::ShutDownLazers ( )
{
	static UFunction* pFnShutDownLazers = NULL;

	if ( ! pFnShutDownLazers )
		pFnShutDownLazers = (UFunction*) UObject::GObjObjects()->Data[ 85437 ];

	ADunDef_OldOne_execShutDownLazers_Parms ShutDownLazers_Parms;

	this->ProcessEvent ( pFnShutDownLazers, &ShutDownLazers_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.SetInitalEyeLazerTarget
// [0x00020102] 
// Parameters infos:
// class AActor*                  newLazerTarget                 ( CPF_Parm )

void ADunDef_OldOne::SetInitalEyeLazerTarget ( class AActor* newLazerTarget )
{
	static UFunction* pFnSetInitalEyeLazerTarget = NULL;

	if ( ! pFnSetInitalEyeLazerTarget )
		pFnSetInitalEyeLazerTarget = (UFunction*) UObject::GObjObjects()->Data[ 85424 ];

	ADunDef_OldOne_execSetInitalEyeLazerTarget_Parms SetInitalEyeLazerTarget_Parms;
	SetInitalEyeLazerTarget_Parms.newLazerTarget = newLazerTarget;

	this->ProcessEvent ( pFnSetInitalEyeLazerTarget, &SetInitalEyeLazerTarget_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.StartBellyLazer
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOne::StartBellyLazer ( )
{
	static UFunction* pFnStartBellyLazer = NULL;

	if ( ! pFnStartBellyLazer )
		pFnStartBellyLazer = (UFunction*) UObject::GObjObjects()->Data[ 85422 ];

	ADunDef_OldOne_execStartBellyLazer_Parms StartBellyLazer_Parms;

	this->ProcessEvent ( pFnStartBellyLazer, &StartBellyLazer_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.StartEyeLazer
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOne::StartEyeLazer ( )
{
	static UFunction* pFnStartEyeLazer = NULL;

	if ( ! pFnStartEyeLazer )
		pFnStartEyeLazer = (UFunction*) UObject::GObjObjects()->Data[ 85419 ];

	ADunDef_OldOne_execStartEyeLazer_Parms StartEyeLazer_Parms;

	this->ProcessEvent ( pFnStartEyeLazer, &StartEyeLazer_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.BeginFlameSweepAnim
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventBeginFlameSweepAnim ( )
{
	static UFunction* pFnBeginFlameSweepAnim = NULL;

	if ( ! pFnBeginFlameSweepAnim )
		pFnBeginFlameSweepAnim = (UFunction*) UObject::GObjObjects()->Data[ 85418 ];

	ADunDef_OldOne_eventBeginFlameSweepAnim_Parms BeginFlameSweepAnim_Parms;

	this->ProcessEvent ( pFnBeginFlameSweepAnim, &BeginFlameSweepAnim_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.DoFlameSweep
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOne::DoFlameSweep ( )
{
	static UFunction* pFnDoFlameSweep = NULL;

	if ( ! pFnDoFlameSweep )
		pFnDoFlameSweep = (UFunction*) UObject::GObjObjects()->Data[ 85417 ];

	ADunDef_OldOne_execDoFlameSweep_Parms DoFlameSweep_Parms;

	this->ProcessEvent ( pFnDoFlameSweep, &DoFlameSweep_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleHandStomp
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventDoubleHandStomp ( )
{
	static UFunction* pFnDoubleHandStomp = NULL;

	if ( ! pFnDoubleHandStomp )
		pFnDoubleHandStomp = (UFunction*) UObject::GObjObjects()->Data[ 85271 ];

	ADunDef_OldOne_eventDoubleHandStomp_Parms DoubleHandStomp_Parms;

	this->ProcessEvent ( pFnDoubleHandStomp, &DoubleHandStomp_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.LeftHandStomp
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventLeftHandStomp ( )
{
	static UFunction* pFnLeftHandStomp = NULL;

	if ( ! pFnLeftHandStomp )
		pFnLeftHandStomp = (UFunction*) UObject::GObjObjects()->Data[ 85266 ];

	ADunDef_OldOne_eventLeftHandStomp_Parms LeftHandStomp_Parms;

	this->ProcessEvent ( pFnLeftHandStomp, &LeftHandStomp_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.RightHandStomp
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventRightHandStomp ( )
{
	static UFunction* pFnRightHandStomp = NULL;

	if ( ! pFnRightHandStomp )
		pFnRightHandStomp = (UFunction*) UObject::GObjObjects()->Data[ 85261 ];

	ADunDef_OldOne_eventRightHandStomp_Parms RightHandStomp_Parms;

	this->ProcessEvent ( pFnRightHandStomp, &RightHandStomp_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.GetAttackDelay
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDef_OldOne::GetAttackDelay ( )
{
	static UFunction* pFnGetAttackDelay = NULL;

	if ( ! pFnGetAttackDelay )
		pFnGetAttackDelay = (UFunction*) UObject::GObjObjects()->Data[ 85212 ];

	ADunDef_OldOne_execGetAttackDelay_Parms GetAttackDelay_Parms;

	this->ProcessEvent ( pFnGetAttackDelay, &GetAttackDelay_Parms, NULL );

	return GetAttackDelay_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.SetPhase
// [0x00020002] 
// Parameters infos:
// unsigned char                  newPhase                       ( CPF_Parm )

void ADunDef_OldOne::SetPhase ( unsigned char newPhase )
{
	static UFunction* pFnSetPhase = NULL;

	if ( ! pFnSetPhase )
		pFnSetPhase = (UFunction*) UObject::GObjObjects()->Data[ 85203 ];

	ADunDef_OldOne_execSetPhase_Parms SetPhase_Parms;
	SetPhase_Parms.newPhase = newPhase;

	this->ProcessEvent ( pFnSetPhase, &SetPhase_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.OnToggle
// [0x00020102] 
// Parameters infos:
// class USeqAct_Toggle*          Action                         ( CPF_Parm )

void ADunDef_OldOne::OnToggle ( class USeqAct_Toggle* Action )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 85201 ];

	ADunDef_OldOne_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.StartAttack
// [0x00020100] 
// Parameters infos:

void ADunDef_OldOne::StartAttack ( )
{
	static UFunction* pFnStartAttack = NULL;

	if ( ! pFnStartAttack )
		pFnStartAttack = (UFunction*) UObject::GObjObjects()->Data[ 85200 ];

	ADunDef_OldOne_execStartAttack_Parms StartAttack_Parms;

	this->ProcessEvent ( pFnStartAttack, &StartAttack_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.PickAttack
// [0x00020000] 
// Parameters infos:

void ADunDef_OldOne::PickAttack ( )
{
	static UFunction* pFnPickAttack = NULL;

	if ( ! pFnPickAttack )
		pFnPickAttack = (UFunction*) UObject::GObjObjects()->Data[ 85199 ];

	ADunDef_OldOne_execPickAttack_Parms PickAttack_Parms;

	this->ProcessEvent ( pFnPickAttack, &PickAttack_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.StopCustomAnim
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          blendTimeOut                   ( CPF_OptionalParm | CPF_Parm )
// struct FName                   CustomAnimationToStop          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReplicate                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForceReplication              ( CPF_OptionalParm | CPF_Parm )

bool ADunDef_OldOne::StopCustomAnim ( float blendTimeOut, struct FName CustomAnimationToStop, unsigned long bReplicate, unsigned long bForceReplication )
{
	static UFunction* pFnStopCustomAnim = NULL;

	if ( ! pFnStopCustomAnim )
		pFnStopCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 85190 ];

	ADunDef_OldOne_execStopCustomAnim_Parms StopCustomAnim_Parms;
	StopCustomAnim_Parms.blendTimeOut = blendTimeOut;
	memcpy ( &StopCustomAnim_Parms.CustomAnimationToStop, &CustomAnimationToStop, 0x8 );
	StopCustomAnim_Parms.bReplicate = bReplicate;
	StopCustomAnim_Parms.bForceReplication = bForceReplication;

	this->ProcessEvent ( pFnStopCustomAnim, &StopCustomAnim_Parms, NULL );

	return StopCustomAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.PlayCustomAnim
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   inAnim                         ( CPF_Parm )
// float                          blendTimeIn                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  Looping                        ( CPF_OptionalParm | CPF_Parm )
// float                          Speed                          ( CPF_OptionalParm | CPF_Parm )
// float                          BlendOutTime                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverride                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  Replicate                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUninterruptable               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReplicateToOwners             ( CPF_OptionalParm | CPF_Parm )

float ADunDef_OldOne::PlayCustomAnim ( struct FName inAnim, float blendTimeIn, unsigned long Looping, float Speed, float BlendOutTime, unsigned long bOverride, unsigned long Replicate, unsigned long bUninterruptable, unsigned long bReplicateToOwners )
{
	static UFunction* pFnPlayCustomAnim = NULL;

	if ( ! pFnPlayCustomAnim )
		pFnPlayCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 85178 ];

	ADunDef_OldOne_execPlayCustomAnim_Parms PlayCustomAnim_Parms;
	memcpy ( &PlayCustomAnim_Parms.inAnim, &inAnim, 0x8 );
	PlayCustomAnim_Parms.blendTimeIn = blendTimeIn;
	PlayCustomAnim_Parms.Looping = Looping;
	PlayCustomAnim_Parms.Speed = Speed;
	PlayCustomAnim_Parms.BlendOutTime = BlendOutTime;
	PlayCustomAnim_Parms.bOverride = bOverride;
	PlayCustomAnim_Parms.Replicate = Replicate;
	PlayCustomAnim_Parms.bUninterruptable = bUninterruptable;
	PlayCustomAnim_Parms.bReplicateToOwners = bReplicateToOwners;

	this->ProcessEvent ( pFnPlayCustomAnim, &PlayCustomAnim_Parms, NULL );

	return PlayCustomAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOne.InitCrystals
// [0x00020002] 
// Parameters infos:

void ADunDef_OldOne::InitCrystals ( )
{
	static UFunction* pFnInitCrystals = NULL;

	if ( ! pFnInitCrystals )
		pFnInitCrystals = (UFunction*) UObject::GObjObjects()->Data[ 85176 ];

	ADunDef_OldOne_execInitCrystals_Parms InitCrystals_Parms;

	this->ProcessEvent ( pFnInitCrystals, &InitCrystals_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ClearCrystalsRefs
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOne::ClearCrystalsRefs ( )
{
	static UFunction* pFnClearCrystalsRefs = NULL;

	if ( ! pFnClearCrystalsRefs )
		pFnClearCrystalsRefs = (UFunction*) UObject::GObjObjects()->Data[ 85174 ];

	ADunDef_OldOne_execClearCrystalsRefs_Parms ClearCrystalsRefs_Parms;

	this->ProcessEvent ( pFnClearCrystalsRefs, &ClearCrystalsRefs_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.PopulateCustomNode
// [0x00020002] 
// Parameters infos:

void ADunDef_OldOne::PopulateCustomNode ( )
{
	static UFunction* pFnPopulateCustomNode = NULL;

	if ( ! pFnPopulateCustomNode )
		pFnPopulateCustomNode = (UFunction*) UObject::GObjObjects()->Data[ 85170 ];

	ADunDef_OldOne_execPopulateCustomNode_Parms PopulateCustomNode_Parms;

	this->ProcessEvent ( pFnPopulateCustomNode, &PopulateCustomNode_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.PostBeginPlay
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOne::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 85163 ];

	ADunDef_OldOne_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOne.ExecReplicatedFunction
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

void ADunDef_OldOne::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 85146 ];

	ADunDef_OldOne_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetPlayerTargetingDesirability
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayerController* forController                  ( CPF_Parm )
// class ADunDefPlayer*           ForPlayer                      ( CPF_OptionalParm | CPF_Parm )

float ADunDef_OldOneCrystals::DTGetPlayerTargetingDesirability ( class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer )
{
	static UFunction* pFnDTGetPlayerTargetingDesirability = NULL;

	if ( ! pFnDTGetPlayerTargetingDesirability )
		pFnDTGetPlayerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 85886 ];

	ADunDef_OldOneCrystals_execDTGetPlayerTargetingDesirability_Parms DTGetPlayerTargetingDesirability_Parms;
	DTGetPlayerTargetingDesirability_Parms.forController = forController;
	DTGetPlayerTargetingDesirability_Parms.ForPlayer = ForPlayer;

	this->ProcessEvent ( pFnDTGetPlayerTargetingDesirability, &DTGetPlayerTargetingDesirability_Parms, NULL );

	return DTGetPlayerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetTowerTargetingDesirability
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefTower*            forTower                       ( CPF_Parm )

float ADunDef_OldOneCrystals::DTGetTowerTargetingDesirability ( class ADunDefTower* forTower )
{
	static UFunction* pFnDTGetTowerTargetingDesirability = NULL;

	if ( ! pFnDTGetTowerTargetingDesirability )
		pFnDTGetTowerTargetingDesirability = (UFunction*) UObject::GObjObjects()->Data[ 85883 ];

	ADunDef_OldOneCrystals_execDTGetTowerTargetingDesirability_Parms DTGetTowerTargetingDesirability_Parms;
	DTGetTowerTargetingDesirability_Parms.forTower = forTower;

	this->ProcessEvent ( pFnDTGetTowerTargetingDesirability, &DTGetTowerTargetingDesirability_Parms, NULL );

	return DTGetTowerTargetingDesirability_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.IgnoreFriendlyFireDamage
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefTargetableInterface* instigatorActor                ( CPF_Parm )
// class AController*             OptionalController             ( CPF_OptionalParm | CPF_Parm )

bool ADunDef_OldOneCrystals::IgnoreFriendlyFireDamage ( class UDunDefTargetableInterface* instigatorActor, class AController* OptionalController )
{
	static UFunction* pFnIgnoreFriendlyFireDamage = NULL;

	if ( ! pFnIgnoreFriendlyFireDamage )
		pFnIgnoreFriendlyFireDamage = (UFunction*) UObject::GObjObjects()->Data[ 85879 ];

	ADunDef_OldOneCrystals_execIgnoreFriendlyFireDamage_Parms IgnoreFriendlyFireDamage_Parms;
	IgnoreFriendlyFireDamage_Parms.instigatorActor = instigatorActor;
	IgnoreFriendlyFireDamage_Parms.OptionalController = OptionalController;

	this->ProcessEvent ( pFnIgnoreFriendlyFireDamage, &IgnoreFriendlyFireDamage_Parms, NULL );

	return IgnoreFriendlyFireDamage_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DrawMyHUD
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefHUD*              H                              ( CPF_Parm )

bool ADunDef_OldOneCrystals::DrawMyHUD ( class ADunDefHUD* H )
{
	static UFunction* pFnDrawMyHUD = NULL;

	if ( ! pFnDrawMyHUD )
		pFnDrawMyHUD = (UFunction*) UObject::GObjObjects()->Data[ 85869 ];

	ADunDef_OldOneCrystals_execDrawMyHUD_Parms DrawMyHUD_Parms;
	DrawMyHUD_Parms.H = H;

	this->ProcessEvent ( pFnDrawMyHUD, &DrawMyHUD_Parms, NULL );

	return DrawMyHUD_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayHitEffect
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ADunDef_OldOneCrystals::PlayHitEffect ( class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPlayHitEffect = NULL;

	if ( ! pFnPlayHitEffect )
		pFnPlayHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 85866 ];

	ADunDef_OldOneCrystals_execPlayHitEffect_Parms PlayHitEffect_Parms;
	PlayHitEffect_Parms.DamageType = DamageType;
	memcpy ( &PlayHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayHitEffect, &PlayHitEffect_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDamageFlashing
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOneCrystals::UpdateDamageFlashing ( )
{
	static UFunction* pFnUpdateDamageFlashing = NULL;

	if ( ! pFnUpdateDamageFlashing )
		pFnUpdateDamageFlashing = (UFunction*) UObject::GObjObjects()->Data[ 85864 ];

	ADunDef_OldOneCrystals_execUpdateDamageFlashing_Parms UpdateDamageFlashing_Parms;

	this->ProcessEvent ( pFnUpdateDamageFlashing, &UpdateDamageFlashing_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.LocalTookDamage
// [0x00020102] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// struct FVector                 atPosition                     ( CPF_Parm )
// class UClass*                  fromDamageType                 ( CPF_Parm )

void ADunDef_OldOneCrystals::LocalTookDamage ( int DamageAmount, struct FVector atPosition, class UClass* fromDamageType )
{
	static UFunction* pFnLocalTookDamage = NULL;

	if ( ! pFnLocalTookDamage )
		pFnLocalTookDamage = (UFunction*) UObject::GObjObjects()->Data[ 85860 ];

	ADunDef_OldOneCrystals_execLocalTookDamage_Parms LocalTookDamage_Parms;
	LocalTookDamage_Parms.DamageAmount = DamageAmount;
	memcpy ( &LocalTookDamage_Parms.atPosition, &atPosition, 0xC );
	LocalTookDamage_Parms.fromDamageType = fromDamageType;

	this->ProcessEvent ( pFnLocalTookDamage, &LocalTookDamage_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.SubtractHealth
// [0x00020002] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )

void ADunDef_OldOneCrystals::SubtractHealth ( int DamageAmount )
{
	static UFunction* pFnSubtractHealth = NULL;

	if ( ! pFnSubtractHealth )
		pFnSubtractHealth = (UFunction*) UObject::GObjObjects()->Data[ 85857 ];

	ADunDef_OldOneCrystals_execSubtractHealth_Parms SubtractHealth_Parms;
	SubtractHealth_Parms.DamageAmount = DamageAmount;

	this->ProcessEvent ( pFnSubtractHealth, &SubtractHealth_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.SetInPlay
// [0x00020002] 
// Parameters infos:

void ADunDef_OldOneCrystals::SetInPlay ( )
{
	static UFunction* pFnSetInPlay = NULL;

	if ( ! pFnSetInPlay )
		pFnSetInPlay = (UFunction*) UObject::GObjObjects()->Data[ 85856 ];

	ADunDef_OldOneCrystals_execSetInPlay_Parms SetInPlay_Parms;

	this->ProcessEvent ( pFnSetInPlay, &SetInPlay_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.RepairCrystal
// [0x00020002] 
// Parameters infos:

void ADunDef_OldOneCrystals::RepairCrystal ( )
{
	static UFunction* pFnRepairCrystal = NULL;

	if ( ! pFnRepairCrystal )
		pFnRepairCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85855 ];

	ADunDef_OldOneCrystals_execRepairCrystal_Parms RepairCrystal_Parms;

	this->ProcessEvent ( pFnRepairCrystal, &RepairCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.StopsProjectile
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AProjectile*             P                              ( CPF_Parm )

bool ADunDef_OldOneCrystals::StopsProjectile ( class AProjectile* P )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 85852 ];

	ADunDef_OldOneCrystals_execStopsProjectile_Parms StopsProjectile_Parms;
	StopsProjectile_Parms.P = P;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );

	return StopsProjectile_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateHealthColor
// [0x00020100] 
// Parameters infos:

void ADunDef_OldOneCrystals::UpdateHealthColor ( )
{
	static UFunction* pFnUpdateHealthColor = NULL;

	if ( ! pFnUpdateHealthColor )
		pFnUpdateHealthColor = (UFunction*) UObject::GObjObjects()->Data[ 85851 ];

	ADunDef_OldOneCrystals_execUpdateHealthColor_Parms UpdateHealthColor_Parms;

	this->ProcessEvent ( pFnUpdateHealthColor, &UpdateHealthColor_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.NotifyHealthChange
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOneCrystals::NotifyHealthChange ( )
{
	static UFunction* pFnNotifyHealthChange = NULL;

	if ( ! pFnNotifyHealthChange )
		pFnNotifyHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 85850 ];

	ADunDef_OldOneCrystals_execNotifyHealthChange_Parms NotifyHealthChange_Parms;

	this->ProcessEvent ( pFnNotifyHealthChange, &NotifyHealthChange_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateActivate
// [0x00820102] 
// Parameters infos:

void ADunDef_OldOneCrystals::UpdateActivate ( )
{
	static UFunction* pFnUpdateActivate = NULL;

	if ( ! pFnUpdateActivate )
		pFnUpdateActivate = (UFunction*) UObject::GObjObjects()->Data[ 85848 ];

	ADunDef_OldOneCrystals_execUpdateActivate_Parms UpdateActivate_Parms;

	this->ProcessEvent ( pFnUpdateActivate, &UpdateActivate_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Deactivate
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOneCrystals::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 85847 ];

	ADunDef_OldOneCrystals_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Activate
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOneCrystals::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 85846 ];

	ADunDef_OldOneCrystals_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.BaseChange
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ADunDef_OldOneCrystals::eventBaseChange ( )
{
	static UFunction* pFnBaseChange = NULL;

	if ( ! pFnBaseChange )
		pFnBaseChange = (UFunction*) UObject::GObjObjects()->Data[ 85845 ];

	ADunDef_OldOneCrystals_eventBaseChange_Parms BaseChange_Parms;

	this->ProcessEvent ( pFnBaseChange, &BaseChange_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.ShutDownCrystal
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOneCrystals::ShutDownCrystal ( )
{
	static UFunction* pFnShutDownCrystal = NULL;

	if ( ! pFnShutDownCrystal )
		pFnShutDownCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85844 ];

	ADunDef_OldOneCrystals_execShutDownCrystal_Parms ShutDownCrystal_Parms;

	this->ProcessEvent ( pFnShutDownCrystal, &ShutDownCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDissolve
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOneCrystals::UpdateDissolve ( )
{
	static UFunction* pFnUpdateDissolve = NULL;

	if ( ! pFnUpdateDissolve )
		pFnUpdateDissolve = (UFunction*) UObject::GObjObjects()->Data[ 85842 ];

	ADunDef_OldOneCrystals_execUpdateDissolve_Parms UpdateDissolve_Parms;

	this->ProcessEvent ( pFnUpdateDissolve, &UpdateDissolve_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DissolveCrystal
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOneCrystals::DissolveCrystal ( )
{
	static UFunction* pFnDissolveCrystal = NULL;

	if ( ! pFnDissolveCrystal )
		pFnDissolveCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85841 ];

	ADunDef_OldOneCrystals_execDissolveCrystal_Parms DissolveCrystal_Parms;

	this->ProcessEvent ( pFnDissolveCrystal, &DissolveCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayDeath
// [0x00020102] 
// Parameters infos:

void ADunDef_OldOneCrystals::PlayDeath ( )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 85840 ];

	ADunDef_OldOneCrystals_execPlayDeath_Parms PlayDeath_Parms;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Died
// [0x00020002] 
// Parameters infos:
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void ADunDef_OldOneCrystals::Died ( class AController* EventInstigator, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 85835 ];

	ADunDef_OldOneCrystals_execDied_Parms Died_Parms;
	Died_Parms.EventInstigator = EventInstigator;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );
	Died_Parms.DamageType = DamageType;
	Died_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.InitCrystal
// [0x00820102] 
// Parameters infos:
// class ADunDef_OldOne*          owningOldOne                   ( CPF_Parm )

void ADunDef_OldOneCrystals::InitCrystal ( class ADunDef_OldOne* owningOldOne )
{
	static UFunction* pFnInitCrystal = NULL;

	if ( ! pFnInitCrystal )
		pFnInitCrystal = (UFunction*) UObject::GObjObjects()->Data[ 85831 ];

	ADunDef_OldOneCrystals_execInitCrystal_Parms InitCrystal_Parms;
	InitCrystal_Parms.owningOldOne = owningOldOne;

	this->ProcessEvent ( pFnInitCrystal, &InitCrystal_Parms, NULL );
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDef_OldOneCrystals::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 85829 ];

	ADunDef_OldOneCrystals_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSkyCity.DunDefOldOneBreath.HurtRadius
// [0x00824102] 
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

bool ADunDefOldOneBreath::HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnHurtRadius = NULL;

	if ( ! pFnHurtRadius )
		pFnHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 86266 ];

	ADunDefOldOneBreath_execHurtRadius_Parms HurtRadius_Parms;
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

// Function DunDefSkyCity.DunDefEmitterShockwave.RingHurtRadius
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

bool ADunDefEmitterShockwave::RingHurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnRingHurtRadius = NULL;

	if ( ! pFnRingHurtRadius )
		pFnRingHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 85940 ];

	ADunDefEmitterShockwave_execRingHurtRadius_Parms RingHurtRadius_Parms;
	RingHurtRadius_Parms.BaseDamage = BaseDamage;
	RingHurtRadius_Parms.DamageRadius = DamageRadius;
	RingHurtRadius_Parms.DamageType = DamageType;
	RingHurtRadius_Parms.Momentum = Momentum;
	memcpy ( &RingHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	RingHurtRadius_Parms.IgnoredActor = IgnoredActor;
	RingHurtRadius_Parms.InstigatedByController = InstigatedByController;
	RingHurtRadius_Parms.bDoFullDamage = bDoFullDamage;

	this->ProcessEvent ( pFnRingHurtRadius, &RingHurtRadius_Parms, NULL );

	return RingHurtRadius_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefEmitterShockwave.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefEmitterShockwave::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 85937 ];

	ADunDefEmitterShockwave_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSkyCity.DunDefEmitterShockwave.AllowSpawn
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  theArchetype                   ( CPF_Parm )
// struct FVector                 theLoc                         ( CPF_Parm )
// struct FRotator                theRot                         ( CPF_Parm )

bool ADunDefEmitterShockwave::eventAllowSpawn ( class AActor* theArchetype, struct FVector theLoc, struct FRotator theRot )
{
	static UFunction* pFnAllowSpawn = NULL;

	if ( ! pFnAllowSpawn )
		pFnAllowSpawn = (UFunction*) UObject::GObjObjects()->Data[ 85932 ];

	ADunDefEmitterShockwave_eventAllowSpawn_Parms AllowSpawn_Parms;
	AllowSpawn_Parms.theArchetype = theArchetype;
	memcpy ( &AllowSpawn_Parms.theLoc, &theLoc, 0xC );
	memcpy ( &AllowSpawn_Parms.theRot, &theRot, 0xC );

	this->ProcessEvent ( pFnAllowSpawn, &AllowSpawn_Parms, NULL );

	return AllowSpawn_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefEmitterShockwave.HurtRadius
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

bool ADunDefEmitterShockwave::HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnHurtRadius = NULL;

	if ( ! pFnHurtRadius )
		pFnHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 85919 ];

	ADunDefEmitterShockwave_execHurtRadius_Parms HurtRadius_Parms;
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

// Function DunDefSkyCity.DunDefEmitterShockwave.DoDamage
// [0x00020002] 
// Parameters infos:

void ADunDefEmitterShockwave::DoDamage ( )
{
	static UFunction* pFnDoDamage = NULL;

	if ( ! pFnDoDamage )
		pFnDoDamage = (UFunction*) UObject::GObjObjects()->Data[ 85918 ];

	ADunDefEmitterShockwave_execDoDamage_Parms DoDamage_Parms;

	this->ProcessEvent ( pFnDoDamage, &DoDamage_Parms, NULL );
};

// Function DunDefSkyCity.DunDefEmitterShockwave.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefEmitterShockwave::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 85917 ];

	ADunDefEmitterShockwave_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.TakeDamage
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

void ADunDefGoblinCopter::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 86116 ];

	ADunDefGoblinCopter_eventTakeDamage_Parms TakeDamage_Parms;
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

// Function DunDefSkyCity.DunDefGoblinCopter.GetTargetingLocation
// [0x00024102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )

struct FVector ADunDefGoblinCopter::GetTargetingLocation ( class AActor* RequestedBy )
{
	static UFunction* pFnGetTargetingLocation = NULL;

	if ( ! pFnGetTargetingLocation )
		pFnGetTargetingLocation = (UFunction*) UObject::GObjObjects()->Data[ 86113 ];

	ADunDefGoblinCopter_execGetTargetingLocation_Parms GetTargetingLocation_Parms;
	GetTargetingLocation_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnGetTargetingLocation, &GetTargetingLocation_Parms, NULL );

	return GetTargetingLocation_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.SpawnFlare
// [0x00020102] 
// Parameters infos:
// struct FVector                 flareLoc                       ( CPF_Parm )
// struct FRotator                flareRot                       ( CPF_Parm )

void ADunDefGoblinCopter::SpawnFlare ( struct FVector flareLoc, struct FRotator flareRot )
{
	static UFunction* pFnSpawnFlare = NULL;

	if ( ! pFnSpawnFlare )
		pFnSpawnFlare = (UFunction*) UObject::GObjObjects()->Data[ 86110 ];

	ADunDefGoblinCopter_execSpawnFlare_Parms SpawnFlare_Parms;
	memcpy ( &SpawnFlare_Parms.flareLoc, &flareLoc, 0xC );
	memcpy ( &SpawnFlare_Parms.flareRot, &flareRot, 0xC );

	this->ProcessEvent ( pFnSpawnFlare, &SpawnFlare_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetFlareSpawnLocAndRot
// [0x00C20002] 
// Parameters infos:
// struct FVector                 flareLoc                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                flareRot                       ( CPF_Parm | CPF_OutParm )

void ADunDefGoblinCopter::GetFlareSpawnLocAndRot ( struct FVector* flareLoc, struct FRotator* flareRot )
{
	static UFunction* pFnGetFlareSpawnLocAndRot = NULL;

	if ( ! pFnGetFlareSpawnLocAndRot )
		pFnGetFlareSpawnLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 86105 ];

	ADunDefGoblinCopter_execGetFlareSpawnLocAndRot_Parms GetFlareSpawnLocAndRot_Parms;

	this->ProcessEvent ( pFnGetFlareSpawnLocAndRot, &GetFlareSpawnLocAndRot_Parms, NULL );

	if ( flareLoc )
		memcpy ( flareLoc, &GetFlareSpawnLocAndRot_Parms.flareLoc, 0xC );

	if ( flareRot )
		memcpy ( flareRot, &GetFlareSpawnLocAndRot_Parms.flareRot, 0xC );
};

// Function DunDefSkyCity.DunDefGoblinCopter.CheckGCopterProximity
// [0x00820002] 
// Parameters infos:

void ADunDefGoblinCopter::CheckGCopterProximity ( )
{
	static UFunction* pFnCheckGCopterProximity = NULL;

	if ( ! pFnCheckGCopterProximity )
		pFnCheckGCopterProximity = (UFunction*) UObject::GObjObjects()->Data[ 86102 ];

	ADunDefGoblinCopter_execCheckGCopterProximity_Parms CheckGCopterProximity_Parms;

	this->ProcessEvent ( pFnCheckGCopterProximity, &CheckGCopterProximity_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyValues
// [0x00024002] 
// Parameters infos:
// unsigned long                  UpdateMaterial                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  onlyDynamicValues              ( CPF_OptionalParm | CPF_Parm )

void ADunDefGoblinCopter::UpdateDifficultyValues ( unsigned long UpdateMaterial, unsigned long onlyDynamicValues )
{
	static UFunction* pFnUpdateDifficultyValues = NULL;

	if ( ! pFnUpdateDifficultyValues )
		pFnUpdateDifficultyValues = (UFunction*) UObject::GObjObjects()->Data[ 86099 ];

	ADunDefGoblinCopter_execUpdateDifficultyValues_Parms UpdateDifficultyValues_Parms;
	UpdateDifficultyValues_Parms.UpdateMaterial = UpdateMaterial;
	UpdateDifficultyValues_Parms.onlyDynamicValues = onlyDynamicValues;

	this->ProcessEvent ( pFnUpdateDifficultyValues, &UpdateDifficultyValues_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.DrawMiniMapIcon
// [0x00820102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// class ADunDefMiniMap*          MiniMap                        ( CPF_Parm )

void ADunDefGoblinCopter::DrawMiniMapIcon ( class UCanvas* Canvas, class ADunDefMiniMap* MiniMap )
{
	static UFunction* pFnDrawMiniMapIcon = NULL;

	if ( ! pFnDrawMiniMapIcon )
		pFnDrawMiniMapIcon = (UFunction*) UObject::GObjObjects()->Data[ 86093 ];

	ADunDefGoblinCopter_execDrawMiniMapIcon_Parms DrawMiniMapIcon_Parms;
	DrawMiniMapIcon_Parms.Canvas = Canvas;
	DrawMiniMapIcon_Parms.MiniMap = MiniMap;

	this->ProcessEvent ( pFnDrawMiniMapIcon, &DrawMiniMapIcon_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.PauseAnimationAfterDeath
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGoblinCopter::eventPauseAnimationAfterDeath ( )
{
	static UFunction* pFnPauseAnimationAfterDeath = NULL;

	if ( ! pFnPauseAnimationAfterDeath )
		pFnPauseAnimationAfterDeath = (UFunction*) UObject::GObjObjects()->Data[ 86092 ];

	ADunDefGoblinCopter_eventPauseAnimationAfterDeath_Parms PauseAnimationAfterDeath_Parms;

	this->ProcessEvent ( pFnPauseAnimationAfterDeath, &PauseAnimationAfterDeath_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDying
// [0x00020102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )

void ADunDefGoblinCopter::PlayDying ( class UClass* DamageType, struct FVector HitLoc )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 86089 ];

	ADunDefGoblinCopter_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ADunDefGoblinCopter::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 86076 ];

	ADunDefGoblinCopter_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoDoubleShoot
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefGoblinCopter::eventDoDoubleShoot ( )
{
	static UFunction* pFnDoDoubleShoot = NULL;

	if ( ! pFnDoDoubleShoot )
		pFnDoDoubleShoot = (UFunction*) UObject::GObjObjects()->Data[ 86075 ];

	ADunDefGoblinCopter_eventDoDoubleShoot_Parms DoDoubleShoot_Parms;

	this->ProcessEvent ( pFnDoDoubleShoot, &DoDoubleShoot_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoRightShoot
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ADunDefGoblinCopter::eventDoRightShoot ( )
{
	static UFunction* pFnDoRightShoot = NULL;

	if ( ! pFnDoRightShoot )
		pFnDoRightShoot = (UFunction*) UObject::GObjObjects()->Data[ 86072 ];

	ADunDefGoblinCopter_eventDoRightShoot_Parms DoRightShoot_Parms;

	this->ProcessEvent ( pFnDoRightShoot, &DoRightShoot_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoLeftShoot
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ADunDefGoblinCopter::eventDoLeftShoot ( )
{
	static UFunction* pFnDoLeftShoot = NULL;

	if ( ! pFnDoLeftShoot )
		pFnDoLeftShoot = (UFunction*) UObject::GObjObjects()->Data[ 86068 ];

	ADunDefGoblinCopter_eventDoLeftShoot_Parms DoLeftShoot_Parms;

	this->ProcessEvent ( pFnDoLeftShoot, &DoLeftShoot_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDoubleShootAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGoblinCopter::PlayDoubleShootAnim ( )
{
	static UFunction* pFnPlayDoubleShootAnim = NULL;

	if ( ! pFnPlayDoubleShootAnim )
		pFnPlayDoubleShootAnim = (UFunction*) UObject::GObjObjects()->Data[ 86066 ];

	ADunDefGoblinCopter_execPlayDoubleShootAnim_Parms PlayDoubleShootAnim_Parms;

	this->ProcessEvent ( pFnPlayDoubleShootAnim, &PlayDoubleShootAnim_Parms, NULL );

	return PlayDoubleShootAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayRightShootAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          shootPlayRate                  ( CPF_Parm )

float ADunDefGoblinCopter::PlayRightShootAnim ( float shootPlayRate )
{
	static UFunction* pFnPlayRightShootAnim = NULL;

	if ( ! pFnPlayRightShootAnim )
		pFnPlayRightShootAnim = (UFunction*) UObject::GObjObjects()->Data[ 86063 ];

	ADunDefGoblinCopter_execPlayRightShootAnim_Parms PlayRightShootAnim_Parms;
	PlayRightShootAnim_Parms.shootPlayRate = shootPlayRate;

	this->ProcessEvent ( pFnPlayRightShootAnim, &PlayRightShootAnim_Parms, NULL );

	return PlayRightShootAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayLeftShootAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          shootPlayRate                  ( CPF_Parm )

float ADunDefGoblinCopter::PlayLeftShootAnim ( float shootPlayRate )
{
	static UFunction* pFnPlayLeftShootAnim = NULL;

	if ( ! pFnPlayLeftShootAnim )
		pFnPlayLeftShootAnim = (UFunction*) UObject::GObjObjects()->Data[ 86060 ];

	ADunDefGoblinCopter_execPlayLeftShootAnim_Parms PlayLeftShootAnim_Parms;
	PlayLeftShootAnim_Parms.shootPlayRate = shootPlayRate;

	this->ProcessEvent ( pFnPlayLeftShootAnim, &PlayLeftShootAnim_Parms, NULL );

	return PlayLeftShootAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.ResetHeldPawnValues
// [0x00020102] 
// Parameters infos:
// class ADunDefEnemy*            thePawn                        ( CPF_Parm )

void ADunDefGoblinCopter::ResetHeldPawnValues ( class ADunDefEnemy* thePawn )
{
	static UFunction* pFnResetHeldPawnValues = NULL;

	if ( ! pFnResetHeldPawnValues )
		pFnResetHeldPawnValues = (UFunction*) UObject::GObjObjects()->Data[ 86058 ];

	ADunDefGoblinCopter_execResetHeldPawnValues_Parms ResetHeldPawnValues_Parms;
	ResetHeldPawnValues_Parms.thePawn = thePawn;

	this->ProcessEvent ( pFnResetHeldPawnValues, &ResetHeldPawnValues_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.DropPawn
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ADunDefGoblinCopter::eventDropPawn ( )
{
	static UFunction* pFnDropPawn = NULL;

	if ( ! pFnDropPawn )
		pFnDropPawn = (UFunction*) UObject::GObjObjects()->Data[ 86057 ];

	ADunDefGoblinCopter_eventDropPawn_Parms DropPawn_Parms;

	this->ProcessEvent ( pFnDropPawn, &DropPawn_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDropOffAnim
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGoblinCopter::PlayDropOffAnim ( )
{
	static UFunction* pFnPlayDropOffAnim = NULL;

	if ( ! pFnPlayDropOffAnim )
		pFnPlayDropOffAnim = (UFunction*) UObject::GObjObjects()->Data[ 86055 ];

	ADunDefGoblinCopter_execPlayDropOffAnim_Parms PlayDropOffAnim_Parms;

	this->ProcessEvent ( pFnPlayDropOffAnim, &PlayDropOffAnim_Parms, NULL );

	return PlayDropOffAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.SetMovementPhysics
// [0x00020002] 
// Parameters infos:

void ADunDefGoblinCopter::SetMovementPhysics ( )
{
	static UFunction* pFnSetMovementPhysics = NULL;

	if ( ! pFnSetMovementPhysics )
		pFnSetMovementPhysics = (UFunction*) UObject::GObjObjects()->Data[ 86054 ];

	ADunDefGoblinCopter_execSetMovementPhysics_Parms SetMovementPhysics_Parms;

	this->ProcessEvent ( pFnSetMovementPhysics, &SetMovementPhysics_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.CanBeBaseForPawn
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   aPawn                          ( CPF_Parm )

bool ADunDefGoblinCopter::CanBeBaseForPawn ( class APawn* aPawn )
{
	static UFunction* pFnCanBeBaseForPawn = NULL;

	if ( ! pFnCanBeBaseForPawn )
		pFnCanBeBaseForPawn = (UFunction*) UObject::GObjObjects()->Data[ 86051 ];

	ADunDefGoblinCopter_execCanBeBaseForPawn_Parms CanBeBaseForPawn_Parms;
	CanBeBaseForPawn_Parms.aPawn = aPawn;

	this->ProcessEvent ( pFnCanBeBaseForPawn, &CanBeBaseForPawn_Parms, NULL );

	return CanBeBaseForPawn_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.InitNewHeldPawn
// [0x00020102] 
// Parameters infos:

void ADunDefGoblinCopter::InitNewHeldPawn ( )
{
	static UFunction* pFnInitNewHeldPawn = NULL;

	if ( ! pFnInitNewHeldPawn )
		pFnInitNewHeldPawn = (UFunction*) UObject::GObjObjects()->Data[ 86050 ];

	ADunDefGoblinCopter_execInitNewHeldPawn_Parms InitNewHeldPawn_Parms;

	this->ProcessEvent ( pFnInitNewHeldPawn, &InitNewHeldPawn_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.SetUpHoldingPawn
// [0x00820102] 
// Parameters infos:
// class ADunDefEnemy*            newHeldPawn                    ( CPF_Parm )

void ADunDefGoblinCopter::SetUpHoldingPawn ( class ADunDefEnemy* newHeldPawn )
{
	static UFunction* pFnSetUpHoldingPawn = NULL;

	if ( ! pFnSetUpHoldingPawn )
		pFnSetUpHoldingPawn = (UFunction*) UObject::GObjObjects()->Data[ 86046 ];

	ADunDefGoblinCopter_execSetUpHoldingPawn_Parms SetUpHoldingPawn_Parms;
	SetUpHoldingPawn_Parms.newHeldPawn = newHeldPawn;

	this->ProcessEvent ( pFnSetUpHoldingPawn, &SetUpHoldingPawn_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.SpawnHoldingPawn
// [0x00820002] 
// Parameters infos:

void ADunDefGoblinCopter::SpawnHoldingPawn ( )
{
	static UFunction* pFnSpawnHoldingPawn = NULL;

	if ( ! pFnSpawnHoldingPawn )
		pFnSpawnHoldingPawn = (UFunction*) UObject::GObjObjects()->Data[ 86039 ];

	ADunDefGoblinCopter_execSpawnHoldingPawn_Parms SpawnHoldingPawn_Parms;

	this->ProcessEvent ( pFnSpawnHoldingPawn, &SpawnHoldingPawn_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetHeldPawnExtraDifficultyOffset
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGoblinCopter::GetHeldPawnExtraDifficultyOffset ( )
{
	static UFunction* pFnGetHeldPawnExtraDifficultyOffset = NULL;

	if ( ! pFnGetHeldPawnExtraDifficultyOffset )
		pFnGetHeldPawnExtraDifficultyOffset = (UFunction*) UObject::GObjObjects()->Data[ 86036 ];

	ADunDefGoblinCopter_execGetHeldPawnExtraDifficultyOffset_Parms GetHeldPawnExtraDifficultyOffset_Parms;

	this->ProcessEvent ( pFnGetHeldPawnExtraDifficultyOffset, &GetHeldPawnExtraDifficultyOffset_Parms, NULL );

	return GetHeldPawnExtraDifficultyOffset_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefGoblinCopter::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 86034 ];

	ADunDefGoblinCopter_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.TurnOnVFX
// [0x00020102] 
// Parameters infos:

void ADunDefGoblinCopter::TurnOnVFX ( )
{
	static UFunction* pFnTurnOnVFX = NULL;

	if ( ! pFnTurnOnVFX )
		pFnTurnOnVFX = (UFunction*) UObject::GObjObjects()->Data[ 86030 ];

	ADunDefGoblinCopter_execTurnOnVFX_Parms TurnOnVFX_Parms;

	this->ProcessEvent ( pFnTurnOnVFX, &TurnOnVFX_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyMaterial
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefGoblinCopter::UpdateDifficultyMaterial ( )
{
	static UFunction* pFnUpdateDifficultyMaterial = NULL;

	if ( ! pFnUpdateDifficultyMaterial )
		pFnUpdateDifficultyMaterial = (UFunction*) UObject::GObjObjects()->Data[ 86028 ];

	ADunDefGoblinCopter_execUpdateDifficultyMaterial_Parms UpdateDifficultyMaterial_Parms;

	this->ProcessEvent ( pFnUpdateDifficultyMaterial, &UpdateDifficultyMaterial_Parms, NULL );

	return UpdateDifficultyMaterial_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopter.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGoblinCopter::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 86027 ];

	ADunDefGoblinCopter_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopter.ExecReplicatedFunction
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

void ADunDefGoblinCopter::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 86010 ];

	ADunDefGoblinCopter_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefSkyCity.DunDefGoblinCopter.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefGoblinCopter::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 86008 ];

	ADunDefGoblinCopter_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.SpawnRocket
// [0x00820002] 
// Parameters infos:
// struct FVector                 SpawnLoc                       ( CPF_Parm )

void ADunDefGoblinCopterController::SpawnRocket ( struct FVector SpawnLoc )
{
	static UFunction* pFnSpawnRocket = NULL;

	if ( ! pFnSpawnRocket )
		pFnSpawnRocket = (UFunction*) UObject::GObjObjects()->Data[ 86254 ];

	ADunDefGoblinCopterController_execSpawnRocket_Parms SpawnRocket_Parms;
	memcpy ( &SpawnRocket_Parms.SpawnLoc, &SpawnLoc, 0xC );

	this->ProcessEvent ( pFnSpawnRocket, &SpawnRocket_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.PlayMissileShootAnim
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefGoblinCopterController::PlayMissileShootAnim ( )
{
	static UFunction* pFnPlayMissileShootAnim = NULL;

	if ( ! pFnPlayMissileShootAnim )
		pFnPlayMissileShootAnim = (UFunction*) UObject::GObjObjects()->Data[ 86252 ];

	ADunDefGoblinCopterController_execPlayMissileShootAnim_Parms PlayMissileShootAnim_Parms;

	this->ProcessEvent ( pFnPlayMissileShootAnim, &PlayMissileShootAnim_Parms, NULL );

	return PlayMissileShootAnim_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinDropRange
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefGoblinCopterController::IsWithinDropRange ( )
{
	static UFunction* pFnIsWithinDropRange = NULL;

	if ( ! pFnIsWithinDropRange )
		pFnIsWithinDropRange = (UFunction*) UObject::GObjObjects()->Data[ 86224 ];

	ADunDefGoblinCopterController_execIsWithinDropRange_Parms IsWithinDropRange_Parms;

	this->ProcessEvent ( pFnIsWithinDropRange, &IsWithinDropRange_Parms, NULL );

	return IsWithinDropRange_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDropOffLoS
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool ADunDefGoblinCopterController::CheckDropOffLoS ( class AActor* Other )
{
	static UFunction* pFnCheckDropOffLoS = NULL;

	if ( ! pFnCheckDropOffLoS )
		pFnCheckDropOffLoS = (UFunction*) UObject::GObjObjects()->Data[ 86213 ];

	ADunDefGoblinCopterController_execCheckDropOffLoS_Parms CheckDropOffLoS_Parms;
	CheckDropOffLoS_Parms.Other = Other;

	this->ProcessEvent ( pFnCheckDropOffLoS, &CheckDropOffLoS_Parms, NULL );

	return CheckDropOffLoS_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopterController.ShootFlare
// [0x00820002] 
// Parameters infos:

void ADunDefGoblinCopterController::ShootFlare ( )
{
	static UFunction* pFnShootFlare = NULL;

	if ( ! pFnShootFlare )
		pFnShootFlare = (UFunction*) UObject::GObjObjects()->Data[ 86209 ];

	ADunDefGoblinCopterController_execShootFlare_Parms ShootFlare_Parms;

	this->ProcessEvent ( pFnShootFlare, &ShootFlare_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckForDropOffRange
// [0x00020002] 
// Parameters infos:

void ADunDefGoblinCopterController::CheckForDropOffRange ( )
{
	static UFunction* pFnCheckForDropOffRange = NULL;

	if ( ! pFnCheckForDropOffRange )
		pFnCheckForDropOffRange = (UFunction*) UObject::GObjObjects()->Data[ 86208 ];

	ADunDefGoblinCopterController_execCheckForDropOffRange_Parms CheckForDropOffRange_Parms;

	this->ProcessEvent ( pFnCheckForDropOffRange, &CheckForDropOffRange_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckAttackSight
// [0x00020002] 
// Parameters infos:

void ADunDefGoblinCopterController::CheckAttackSight ( )
{
	static UFunction* pFnCheckAttackSight = NULL;

	if ( ! pFnCheckAttackSight )
		pFnCheckAttackSight = (UFunction*) UObject::GObjObjects()->Data[ 86203 ];

	ADunDefGoblinCopterController_execCheckAttackSight_Parms CheckAttackSight_Parms;

	this->ProcessEvent ( pFnCheckAttackSight, &CheckAttackSight_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinAttackRange
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )
// float                          AttackRangeOffset              ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCheckDeltaZ                   ( CPF_OptionalParm | CPF_Parm )

bool ADunDefGoblinCopterController::IsWithinAttackRange ( class AActor* Other, float AttackRangeOffset, unsigned long bCheckDeltaZ )
{
	static UFunction* pFnIsWithinAttackRange = NULL;

	if ( ! pFnIsWithinAttackRange )
		pFnIsWithinAttackRange = (UFunction*) UObject::GObjObjects()->Data[ 86192 ];

	ADunDefGoblinCopterController_execIsWithinAttackRange_Parms IsWithinAttackRange_Parms;
	IsWithinAttackRange_Parms.Other = Other;
	IsWithinAttackRange_Parms.AttackRangeOffset = AttackRangeOffset;
	IsWithinAttackRange_Parms.bCheckDeltaZ = bCheckDeltaZ;

	this->ProcessEvent ( pFnIsWithinAttackRange, &IsWithinAttackRange_Parms, NULL );

	return IsWithinAttackRange_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopterController.DoAttack
// [0x00020002] 
// Parameters infos:

void ADunDefGoblinCopterController::DoAttack ( )
{
	static UFunction* pFnDoAttack = NULL;

	if ( ! pFnDoAttack )
		pFnDoAttack = (UFunction*) UObject::GObjObjects()->Data[ 86191 ];

	ADunDefGoblinCopterController_execDoAttack_Parms DoAttack_Parms;

	this->ProcessEvent ( pFnDoAttack, &DoAttack_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.FindDropOffPoint
// [0x00020002] 
// Parameters infos:

void ADunDefGoblinCopterController::FindDropOffPoint ( )
{
	static UFunction* pFnFindDropOffPoint = NULL;

	if ( ! pFnFindDropOffPoint )
		pFnFindDropOffPoint = (UFunction*) UObject::GObjObjects()->Data[ 86186 ];

	ADunDefGoblinCopterController_execFindDropOffPoint_Parms FindDropOffPoint_Parms;

	this->ProcessEvent ( pFnFindDropOffPoint, &FindDropOffPoint_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GetTargetMoveToPoint
// [0x00020002] 
// Parameters infos:
// class AActor*                  moveToActor                    ( CPF_Parm )

void ADunDefGoblinCopterController::GetTargetMoveToPoint ( class AActor* moveToActor )
{
	static UFunction* pFnGetTargetMoveToPoint = NULL;

	if ( ! pFnGetTargetMoveToPoint )
		pFnGetTargetMoveToPoint = (UFunction*) UObject::GObjObjects()->Data[ 86183 ];

	ADunDefGoblinCopterController_execGetTargetMoveToPoint_Parms GetTargetMoveToPoint_Parms;
	GetTargetMoveToPoint_Parms.moveToActor = moveToActor;

	this->ProcessEvent ( pFnGetTargetMoveToPoint, &GetTargetMoveToPoint_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GetZDifference
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  zActor                         ( CPF_Parm )

float ADunDefGoblinCopterController::GetZDifference ( class AActor* zActor )
{
	static UFunction* pFnGetZDifference = NULL;

	if ( ! pFnGetZDifference )
		pFnGetZDifference = (UFunction*) UObject::GObjObjects()->Data[ 86180 ];

	ADunDefGoblinCopterController_execGetZDifference_Parms GetZDifference_Parms;
	GetZDifference_Parms.zActor = zActor;

	this->ProcessEvent ( pFnGetZDifference, &GetZDifference_Parms, NULL );

	return GetZDifference_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDirectReachability
// [0x00020002] 
// Parameters infos:

void ADunDefGoblinCopterController::CheckDirectReachability ( )
{
	static UFunction* pFnCheckDirectReachability = NULL;

	if ( ! pFnCheckDirectReachability )
		pFnCheckDirectReachability = (UFunction*) UObject::GObjObjects()->Data[ 86178 ];

	ADunDefGoblinCopterController_execCheckDirectReachability_Parms CheckDirectReachability_Parms;

	this->ProcessEvent ( pFnCheckDirectReachability, &CheckDirectReachability_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckIndirectReachability
// [0x00020002] 
// Parameters infos:

void ADunDefGoblinCopterController::CheckIndirectReachability ( )
{
	static UFunction* pFnCheckIndirectReachability = NULL;

	if ( ! pFnCheckIndirectReachability )
		pFnCheckIndirectReachability = (UFunction*) UObject::GObjObjects()->Data[ 86176 ];

	ADunDefGoblinCopterController_execCheckIndirectReachability_Parms CheckIndirectReachability_Parms;

	this->ProcessEvent ( pFnCheckIndirectReachability, &CheckIndirectReachability_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

struct FVector ADunDefGoblinCopterController::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 86170 ];

	ADunDefGoblinCopterController_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopterController.NavActorReachable
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool ADunDefGoblinCopterController::NavActorReachable ( class AActor* A )
{
	static UFunction* pFnNavActorReachable = NULL;

	if ( ! pFnNavActorReachable )
		pFnNavActorReachable = (UFunction*) UObject::GObjObjects()->Data[ 86167 ];

	ADunDefGoblinCopterController_execNavActorReachable_Parms NavActorReachable_Parms;
	NavActorReachable_Parms.A = A;

	this->ProcessEvent ( pFnNavActorReachable, &NavActorReachable_Parms, NULL );

	return NavActorReachable_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopterController.FindNearestNavPointTo
// [0x00024002] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )
// unsigned long                  bCheckVisible                  ( CPF_OptionalParm | CPF_Parm )

class ANavigationPoint* ADunDefGoblinCopterController::FindNearestNavPointTo ( class AActor* A, unsigned long bCheckVisible )
{
	static UFunction* pFnFindNearestNavPointTo = NULL;

	if ( ! pFnFindNearestNavPointTo )
		pFnFindNearestNavPointTo = (UFunction*) UObject::GObjObjects()->Data[ 86163 ];

	ADunDefGoblinCopterController_execFindNearestNavPointTo_Parms FindNearestNavPointTo_Parms;
	FindNearestNavPointTo_Parms.A = A;
	FindNearestNavPointTo_Parms.bCheckVisible = bCheckVisible;

	this->ProcessEvent ( pFnFindNearestNavPointTo, &FindNearestNavPointTo_Parms, NULL );

	return FindNearestNavPointTo_Parms.ReturnValue;
};

// Function DunDefSkyCity.DunDefGoblinCopterController.SetMyPawn
// [0x00020002] 
// Parameters infos:

void ADunDefGoblinCopterController::SetMyPawn ( )
{
	static UFunction* pFnSetMyPawn = NULL;

	if ( ! pFnSetMyPawn )
		pFnSetMyPawn = (UFunction*) UObject::GObjObjects()->Data[ 86162 ];

	ADunDefGoblinCopterController_execSetMyPawn_Parms SetMyPawn_Parms;

	this->ProcessEvent ( pFnSetMyPawn, &SetMyPawn_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ADunDefGoblinCopterController::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 86159 ];

	ADunDefGoblinCopterController_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGoblinCopterController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 86158 ];

	ADunDefGoblinCopterController_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefSkyCity.DunDefGoblinCopterController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefGoblinCopterController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 86156 ];

	ADunDefGoblinCopterController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif