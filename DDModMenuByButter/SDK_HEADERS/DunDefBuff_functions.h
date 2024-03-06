/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefBuff_functions.h
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

// Function DunDefBuff.DunDefBuff_Boost.GetBoostedTargets
// [0x00420002] 
// Parameters infos:
// TArray< class APawn* >         boostedTargets                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UDunDefBuff_Boost::GetBoostedTargets ( TArray< class APawn* >* boostedTargets )
{
	static UFunction* pFnGetBoostedTargets = NULL;

	if ( ! pFnGetBoostedTargets )
		pFnGetBoostedTargets = (UFunction*) UObject::GObjObjects()->Data[ 84299 ];

	UDunDefBuff_Boost_execGetBoostedTargets_Parms GetBoostedTargets_Parms;

	this->ProcessEvent ( pFnGetBoostedTargets, &GetBoostedTargets_Parms, NULL );

	if ( boostedTargets )
		memcpy ( boostedTargets, &GetBoostedTargets_Parms.boostedTargets, 0xC );
};

// Function DunDefBuff.DunDefBuff_Boost.NotifyOfBoostedRemoval
// [0x00020000] 
// Parameters infos:
// class APawn*                   removedBoostee                 ( CPF_Parm )

void UDunDefBuff_Boost::NotifyOfBoostedRemoval ( class APawn* removedBoostee )
{
	static UFunction* pFnNotifyOfBoostedRemoval = NULL;

	if ( ! pFnNotifyOfBoostedRemoval )
		pFnNotifyOfBoostedRemoval = (UFunction*) UObject::GObjObjects()->Data[ 84297 ];

	UDunDefBuff_Boost_execNotifyOfBoostedRemoval_Parms NotifyOfBoostedRemoval_Parms;
	NotifyOfBoostedRemoval_Parms.removedBoostee = removedBoostee;

	this->ProcessEvent ( pFnNotifyOfBoostedRemoval, &NotifyOfBoostedRemoval_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Boost.GetPawnBoostAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float UDunDefBuff_Boost::GetPawnBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetPawnBoostAmount = NULL;

	if ( ! pFnGetPawnBoostAmount )
		pFnGetPawnBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 84293 ];

	UDunDefBuff_Boost_execGetPawnBoostAmount_Parms GetPawnBoostAmount_Parms;
	GetPawnBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetPawnBoostAmount, &GetPawnBoostAmount_Parms, NULL );

	return GetPawnBoostAmount_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Boost.HasPawnBoostingType
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

bool UDunDefBuff_Boost::HasPawnBoostingType ( unsigned char boostType )
{
	static UFunction* pFnHasPawnBoostingType = NULL;

	if ( ! pFnHasPawnBoostingType )
		pFnHasPawnBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 84290 ];

	UDunDefBuff_Boost_execHasPawnBoostingType_Parms HasPawnBoostingType_Parms;
	HasPawnBoostingType_Parms.boostType = boostType;

	this->ProcessEvent ( pFnHasPawnBoostingType, &HasPawnBoostingType_Parms, NULL );

	return HasPawnBoostingType_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float UDunDefBuff_Boost::GetTowerBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetTowerBoostAmount = NULL;

	if ( ! pFnGetTowerBoostAmount )
		pFnGetTowerBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 84286 ];

	UDunDefBuff_Boost_execGetTowerBoostAmount_Parms GetTowerBoostAmount_Parms;
	GetTowerBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetTowerBoostAmount, &GetTowerBoostAmount_Parms, NULL );

	return GetTowerBoostAmount_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Boost.HasTowerBoostingType
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

bool UDunDefBuff_Boost::HasTowerBoostingType ( unsigned char boostType )
{
	static UFunction* pFnHasTowerBoostingType = NULL;

	if ( ! pFnHasTowerBoostingType )
		pFnHasTowerBoostingType = (UFunction*) UObject::GObjObjects()->Data[ 84283 ];

	UDunDefBuff_Boost_execHasTowerBoostingType_Parms HasTowerBoostingType_Parms;
	HasTowerBoostingType_Parms.boostType = boostType;

	this->ProcessEvent ( pFnHasTowerBoostingType, &HasTowerBoostingType_Parms, NULL );

	return HasTowerBoostingType_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostingTarget
// [0x00020002] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* UDunDefBuff_Boost::GetTowerBoostingTarget ( )
{
	static UFunction* pFnGetTowerBoostingTarget = NULL;

	if ( ! pFnGetTowerBoostingTarget )
		pFnGetTowerBoostingTarget = (UFunction*) UObject::GObjObjects()->Data[ 84281 ];

	UDunDefBuff_Boost_execGetTowerBoostingTarget_Parms GetTowerBoostingTarget_Parms;

	this->ProcessEvent ( pFnGetTowerBoostingTarget, &GetTowerBoostingTarget_Parms, NULL );

	return GetTowerBoostingTarget_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Boost.InitalizeActorStats
// [0x00024102] 
// Parameters infos:
// class UIActorModifierInterface* ActorStatObject                ( CPF_Parm )
// class UObject*                 CallingObject                  ( CPF_OptionalParm | CPF_Parm )
// int                            Tier                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBaseValueOnly                 ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_Boost::InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly )
{
	static UFunction* pFnInitalizeActorStats = NULL;

	if ( ! pFnInitalizeActorStats )
		pFnInitalizeActorStats = (UFunction*) UObject::GObjObjects()->Data[ 84275 ];

	UDunDefBuff_Boost_execInitalizeActorStats_Parms InitalizeActorStats_Parms;
	InitalizeActorStats_Parms.ActorStatObject = ActorStatObject;
	InitalizeActorStats_Parms.CallingObject = CallingObject;
	InitalizeActorStats_Parms.Tier = Tier;
	InitalizeActorStats_Parms.bBaseValueOnly = bBaseValueOnly;

	this->ProcessEvent ( pFnInitalizeActorStats, &InitalizeActorStats_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Boost.DeactivateBuff
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Boost::DeactivateBuff ( )
{
	static UFunction* pFnDeactivateBuff = NULL;

	if ( ! pFnDeactivateBuff )
		pFnDeactivateBuff = (UFunction*) UObject::GObjObjects()->Data[ 84274 ];

	UDunDefBuff_Boost_execDeactivateBuff_Parms DeactivateBuff_Parms;

	this->ProcessEvent ( pFnDeactivateBuff, &DeactivateBuff_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Boost.ActivateBuff
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Boost::ActivateBuff ( )
{
	static UFunction* pFnActivateBuff = NULL;

	if ( ! pFnActivateBuff )
		pFnActivateBuff = (UFunction*) UObject::GObjObjects()->Data[ 84273 ];

	UDunDefBuff_Boost_execActivateBuff_Parms ActivateBuff_Parms;

	this->ProcessEvent ( pFnActivateBuff, &ActivateBuff_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Contagion.CanAffectTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

bool UDunDefBuff_Contagion::CanAffectTarget ( class AActor* Target )
{
	static UFunction* pFnCanAffectTarget = NULL;

	if ( ! pFnCanAffectTarget )
		pFnCanAffectTarget = (UFunction*) UObject::GObjObjects()->Data[ 84329 ];

	UDunDefBuff_Contagion_execCanAffectTarget_Parms CanAffectTarget_Parms;
	CanAffectTarget_Parms.Target = Target;

	this->ProcessEvent ( pFnCanAffectTarget, &CanAffectTarget_Parms, NULL );

	return CanAffectTarget_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Contagion.GetNearestTarget
// [0x00020102] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* UDunDefBuff_Contagion::GetNearestTarget ( )
{
	static UFunction* pFnGetNearestTarget = NULL;

	if ( ! pFnGetNearestTarget )
		pFnGetNearestTarget = (UFunction*) UObject::GObjObjects()->Data[ 84322 ];

	UDunDefBuff_Contagion_execGetNearestTarget_Parms GetNearestTarget_Parms;

	this->ProcessEvent ( pFnGetNearestTarget, &GetNearestTarget_Parms, NULL );

	return GetNearestTarget_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Contagion.Initialize
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Contagion::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 84320 ];

	UDunDefBuff_Contagion_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Contagion.BuffEffect
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Contagion::BuffEffect ( )
{
	static UFunction* pFnBuffEffect = NULL;

	if ( ! pFnBuffEffect )
		pFnBuffEffect = (UFunction*) UObject::GObjObjects()->Data[ 84315 ];

	UDunDefBuff_Contagion_execBuffEffect_Parms BuffEffect_Parms;

	this->ProcessEvent ( pFnBuffEffect, &BuffEffect_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Damage.InitalizeActorStats
// [0x00024102] 
// Parameters infos:
// class UIActorModifierInterface* ActorStatObject                ( CPF_Parm )
// class UObject*                 CallingObject                  ( CPF_OptionalParm | CPF_Parm )
// int                            Tier                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBaseValueOnly                 ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_Damage::InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly )
{
	static UFunction* pFnInitalizeActorStats = NULL;

	if ( ! pFnInitalizeActorStats )
		pFnInitalizeActorStats = (UFunction*) UObject::GObjObjects()->Data[ 84362 ];

	UDunDefBuff_Damage_execInitalizeActorStats_Parms InitalizeActorStats_Parms;
	InitalizeActorStats_Parms.ActorStatObject = ActorStatObject;
	InitalizeActorStats_Parms.CallingObject = CallingObject;
	InitalizeActorStats_Parms.Tier = Tier;
	InitalizeActorStats_Parms.bBaseValueOnly = bBaseValueOnly;

	this->ProcessEvent ( pFnInitalizeActorStats, &InitalizeActorStats_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Damage.CanDamage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )

bool UDunDefBuff_Damage::CanDamage ( class AActor* Target )
{
	static UFunction* pFnCanDamage = NULL;

	if ( ! pFnCanDamage )
		pFnCanDamage = (UFunction*) UObject::GObjObjects()->Data[ 84358 ];

	UDunDefBuff_Damage_execCanDamage_Parms CanDamage_Parms;
	CanDamage_Parms.Target = Target;

	this->ProcessEvent ( pFnCanDamage, &CanDamage_Parms, NULL );

	return CanDamage_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Damage.GetBuffDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UDunDefBuff_Damage::GetBuffDamage ( )
{
	static UFunction* pFnGetBuffDamage = NULL;

	if ( ! pFnGetBuffDamage )
		pFnGetBuffDamage = (UFunction*) UObject::GObjObjects()->Data[ 84356 ];

	UDunDefBuff_Damage_execGetBuffDamage_Parms GetBuffDamage_Parms;

	this->ProcessEvent ( pFnGetBuffDamage, &GetBuffDamage_Parms, NULL );

	return GetBuffDamage_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Damage.BuffEffect
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Damage::BuffEffect ( )
{
	static UFunction* pFnBuffEffect = NULL;

	if ( ! pFnBuffEffect )
		pFnBuffEffect = (UFunction*) UObject::GObjObjects()->Data[ 84350 ];

	UDunDefBuff_Damage_execBuffEffect_Parms BuffEffect_Parms;

	this->ProcessEvent ( pFnBuffEffect, &BuffEffect_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.ResetTimer
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_DamageAdjuster::ResetTimer ( )
{
	static UFunction* pFnResetTimer = NULL;

	if ( ! pFnResetTimer )
		pFnResetTimer = (UFunction*) UObject::GObjObjects()->Data[ 84408 ];

	UDunDefBuff_DamageAdjuster_execResetTimer_Parms ResetTimer_Parms;

	this->ProcessEvent ( pFnResetTimer, &ResetTimer_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.IsBetween
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Value                          ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

bool UDunDefBuff_DamageAdjuster::IsBetween ( float Value, float X, float Y )
{
	static UFunction* pFnIsBetween = NULL;

	if ( ! pFnIsBetween )
		pFnIsBetween = (UFunction*) UObject::GObjObjects()->Data[ 84403 ];

	UDunDefBuff_DamageAdjuster_execIsBetween_Parms IsBetween_Parms;
	IsBetween_Parms.Value = Value;
	IsBetween_Parms.X = X;
	IsBetween_Parms.Y = Y;

	this->ProcessEvent ( pFnIsBetween, &IsBetween_Parms, NULL );

	return IsBetween_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.InitalizeActorStats
// [0x00024102] 
// Parameters infos:
// class UIActorModifierInterface* ActorStatObject                ( CPF_Parm )
// class UObject*                 CallingObject                  ( CPF_OptionalParm | CPF_Parm )
// int                            Tier                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBaseValueOnly                 ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_DamageAdjuster::InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly )
{
	static UFunction* pFnInitalizeActorStats = NULL;

	if ( ! pFnInitalizeActorStats )
		pFnInitalizeActorStats = (UFunction*) UObject::GObjObjects()->Data[ 84398 ];

	UDunDefBuff_DamageAdjuster_execInitalizeActorStats_Parms InitalizeActorStats_Parms;
	InitalizeActorStats_Parms.ActorStatObject = ActorStatObject;
	InitalizeActorStats_Parms.CallingObject = CallingObject;
	InitalizeActorStats_Parms.Tier = Tier;
	InitalizeActorStats_Parms.bBaseValueOnly = bBaseValueOnly;

	this->ProcessEvent ( pFnInitalizeActorStats, &InitalizeActorStats_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.GetDamageMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  damagedTarget                  ( CPF_Parm )

float UDunDefBuff_DamageAdjuster::GetDamageMultiplier ( class AActor* damagedTarget )
{
	static UFunction* pFnGetDamageMultiplier = NULL;

	if ( ! pFnGetDamageMultiplier )
		pFnGetDamageMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 84393 ];

	UDunDefBuff_DamageAdjuster_execGetDamageMultiplier_Parms GetDamageMultiplier_Parms;
	GetDamageMultiplier_Parms.damagedTarget = damagedTarget;

	this->ProcessEvent ( pFnGetDamageMultiplier, &GetDamageMultiplier_Parms, NULL );

	return GetDamageMultiplier_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.IsAdjustAllowed
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 Target                         ( CPF_Parm )
// struct FsLastDamageInfo        TheDamageInfo                  ( CPF_Parm )

bool UDunDefBuff_DamageAdjuster::IsAdjustAllowed ( class UObject* Target, struct FsLastDamageInfo TheDamageInfo )
{
	static UFunction* pFnIsAdjustAllowed = NULL;

	if ( ! pFnIsAdjustAllowed )
		pFnIsAdjustAllowed = (UFunction*) UObject::GObjObjects()->Data[ 84389 ];

	UDunDefBuff_DamageAdjuster_execIsAdjustAllowed_Parms IsAdjustAllowed_Parms;
	IsAdjustAllowed_Parms.Target = Target;
	memcpy ( &IsAdjustAllowed_Parms.TheDamageInfo, &TheDamageInfo, 0x10 );

	this->ProcessEvent ( pFnIsAdjustAllowed, &IsAdjustAllowed_Parms, NULL );

	return IsAdjustAllowed_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.AdjustDealtDamage
// [0x00424002] 
// Parameters infos:
// class AActor*                  damagedTarget                  ( CPF_Parm )
// int                            OriginalDamage                 ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FsLastDamageInfo        damageInfo                     ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void UDunDefBuff_DamageAdjuster::AdjustDealtDamage ( class AActor* damagedTarget, int OriginalDamage, int* inDamage, struct FsLastDamageInfo* damageInfo, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDealtDamage = NULL;

	if ( ! pFnAdjustDealtDamage )
		pFnAdjustDealtDamage = (UFunction*) UObject::GObjObjects()->Data[ 84383 ];

	UDunDefBuff_DamageAdjuster_execAdjustDealtDamage_Parms AdjustDealtDamage_Parms;
	AdjustDealtDamage_Parms.damagedTarget = damagedTarget;
	AdjustDealtDamage_Parms.OriginalDamage = OriginalDamage;

	this->ProcessEvent ( pFnAdjustDealtDamage, &AdjustDealtDamage_Parms, NULL );

	if ( inDamage )
		*inDamage = AdjustDealtDamage_Parms.inDamage;

	if ( damageInfo )
		memcpy ( damageInfo, &AdjustDealtDamage_Parms.damageInfo, 0x10 );

	if ( Momentum )
		memcpy ( Momentum, &AdjustDealtDamage_Parms.Momentum, 0xC );
};

// Function DunDefBuff.DunDefBuff_ExtraLife.DisableInvincibility
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_ExtraLife::DisableInvincibility ( )
{
	static UFunction* pFnDisableInvincibility = NULL;

	if ( ! pFnDisableInvincibility )
		pFnDisableInvincibility = (UFunction*) UObject::GObjObjects()->Data[ 84441 ];

	UDunDefBuff_ExtraLife_execDisableInvincibility_Parms DisableInvincibility_Parms;

	this->ProcessEvent ( pFnDisableInvincibility, &DisableInvincibility_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_ExtraLife.AdjustTargetDamage
// [0x00424002] 
// Parameters infos:
// class AActor*                  forActor                       ( CPF_Parm )
// class AController*             fromController                 ( CPF_Parm )
// class UClass*                  TheDamageType                  ( CPF_Parm )
// class UObject*                 WhatHitMe                      ( CPF_OptionalParm | CPF_Parm )
// struct FsLastDamageInfo        damageInfo                     ( CPF_OptionalParm | CPF_Parm )
// int                            howMuchDamage                  ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void UDunDefBuff_ExtraLife::AdjustTargetDamage ( class AActor* forActor, class AController* fromController, class UClass* TheDamageType, class UObject* WhatHitMe, struct FsLastDamageInfo damageInfo, int* howMuchDamage, struct FVector* Momentum )
{
	static UFunction* pFnAdjustTargetDamage = NULL;

	if ( ! pFnAdjustTargetDamage )
		pFnAdjustTargetDamage = (UFunction*) UObject::GObjObjects()->Data[ 84433 ];

	UDunDefBuff_ExtraLife_execAdjustTargetDamage_Parms AdjustTargetDamage_Parms;
	AdjustTargetDamage_Parms.forActor = forActor;
	AdjustTargetDamage_Parms.fromController = fromController;
	AdjustTargetDamage_Parms.TheDamageType = TheDamageType;
	AdjustTargetDamage_Parms.WhatHitMe = WhatHitMe;
	memcpy ( &AdjustTargetDamage_Parms.damageInfo, &damageInfo, 0x10 );

	this->ProcessEvent ( pFnAdjustTargetDamage, &AdjustTargetDamage_Parms, NULL );

	if ( howMuchDamage )
		*howMuchDamage = AdjustTargetDamage_Parms.howMuchDamage;

	if ( Momentum )
		memcpy ( Momentum, &AdjustTargetDamage_Parms.Momentum, 0xC );
};

// Function DunDefBuff.DunDefBuff_ExtraLife.BuffEffect
// [0x00020100] 
// Parameters infos:

void UDunDefBuff_ExtraLife::BuffEffect ( )
{
	static UFunction* pFnBuffEffect = NULL;

	if ( ! pFnBuffEffect )
		pFnBuffEffect = (UFunction*) UObject::GObjObjects()->Data[ 84432 ];

	UDunDefBuff_ExtraLife_execBuffEffect_Parms BuffEffect_Parms;

	this->ProcessEvent ( pFnBuffEffect, &BuffEffect_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_ExtraLife.DeactivateBuff
// [0x00820102] 
// Parameters infos:

void UDunDefBuff_ExtraLife::DeactivateBuff ( )
{
	static UFunction* pFnDeactivateBuff = NULL;

	if ( ! pFnDeactivateBuff )
		pFnDeactivateBuff = (UFunction*) UObject::GObjObjects()->Data[ 84430 ];

	UDunDefBuff_ExtraLife_execDeactivateBuff_Parms DeactivateBuff_Parms;

	this->ProcessEvent ( pFnDeactivateBuff, &DeactivateBuff_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_ExtraLife.ActivateBuff
// [0x00820102] 
// Parameters infos:

void UDunDefBuff_ExtraLife::ActivateBuff ( )
{
	static UFunction* pFnActivateBuff = NULL;

	if ( ! pFnActivateBuff )
		pFnActivateBuff = (UFunction*) UObject::GObjObjects()->Data[ 84427 ];

	UDunDefBuff_ExtraLife_execActivateBuff_Parms ActivateBuff_Parms;

	this->ProcessEvent ( pFnActivateBuff, &ActivateBuff_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_ExtraLife.CanProc
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  aActor                         ( CPF_Parm )

bool UDunDefBuff_ExtraLife::CanProc ( class AActor* aActor )
{
	static UFunction* pFnCanProc = NULL;

	if ( ! pFnCanProc )
		pFnCanProc = (UFunction*) UObject::GObjObjects()->Data[ 84424 ];

	UDunDefBuff_ExtraLife_execCanProc_Parms CanProc_Parms;
	CanProc_Parms.aActor = aActor;

	this->ProcessEvent ( pFnCanProc, &CanProc_Parms, NULL );

	return CanProc_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_ExtraLife.InitalizeActorStats
// [0x00024102] 
// Parameters infos:
// class UIActorModifierInterface* ActorStatObject                ( CPF_Parm )
// class UObject*                 CallingObject                  ( CPF_OptionalParm | CPF_Parm )
// int                            Tier                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBaseValueOnly                 ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_ExtraLife::InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly )
{
	static UFunction* pFnInitalizeActorStats = NULL;

	if ( ! pFnInitalizeActorStats )
		pFnInitalizeActorStats = (UFunction*) UObject::GObjObjects()->Data[ 84419 ];

	UDunDefBuff_ExtraLife_execInitalizeActorStats_Parms InitalizeActorStats_Parms;
	InitalizeActorStats_Parms.ActorStatObject = ActorStatObject;
	InitalizeActorStats_Parms.CallingObject = CallingObject;
	InitalizeActorStats_Parms.Tier = Tier;
	InitalizeActorStats_Parms.bBaseValueOnly = bBaseValueOnly;

	this->ProcessEvent ( pFnInitalizeActorStats, &InitalizeActorStats_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_OnHit.InitalizeActorStats
// [0x00024102] 
// Parameters infos:
// class UIActorModifierInterface* ActorStatObject                ( CPF_Parm )
// class UObject*                 CallingObject                  ( CPF_OptionalParm | CPF_Parm )
// int                            Tier                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBaseValueOnly                 ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_OnHit::InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly )
{
	static UFunction* pFnInitalizeActorStats = NULL;

	if ( ! pFnInitalizeActorStats )
		pFnInitalizeActorStats = (UFunction*) UObject::GObjObjects()->Data[ 84489 ];

	UDunDefBuff_OnHit_execInitalizeActorStats_Parms InitalizeActorStats_Parms;
	InitalizeActorStats_Parms.ActorStatObject = ActorStatObject;
	InitalizeActorStats_Parms.CallingObject = CallingObject;
	InitalizeActorStats_Parms.Tier = Tier;
	InitalizeActorStats_Parms.bBaseValueOnly = bBaseValueOnly;

	this->ProcessEvent ( pFnInitalizeActorStats, &InitalizeActorStats_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_OnHit.GetExtraDamageAmount
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          dealtDamage                    ( CPF_OptionalParm | CPF_Parm )

float UDunDefBuff_OnHit::GetExtraDamageAmount ( float dealtDamage )
{
	static UFunction* pFnGetExtraDamageAmount = NULL;

	if ( ! pFnGetExtraDamageAmount )
		pFnGetExtraDamageAmount = (UFunction*) UObject::GObjObjects()->Data[ 84486 ];

	UDunDefBuff_OnHit_execGetExtraDamageAmount_Parms GetExtraDamageAmount_Parms;
	GetExtraDamageAmount_Parms.dealtDamage = dealtDamage;

	this->ProcessEvent ( pFnGetExtraDamageAmount, &GetExtraDamageAmount_Parms, NULL );

	return GetExtraDamageAmount_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_OnHit.IsValidHitTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TargetActor                    ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// class AController*             DamageInstigator               ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// class UObject*                 whatDidDamage                  ( CPF_Parm )

bool UDunDefBuff_OnHit::IsValidHitTarget ( class AActor* TargetActor, class AActor* DamageCauser, class AController* DamageInstigator, class UClass* DamageType, class UObject* whatDidDamage )
{
	static UFunction* pFnIsValidHitTarget = NULL;

	if ( ! pFnIsValidHitTarget )
		pFnIsValidHitTarget = (UFunction*) UObject::GObjObjects()->Data[ 84479 ];

	UDunDefBuff_OnHit_execIsValidHitTarget_Parms IsValidHitTarget_Parms;
	IsValidHitTarget_Parms.TargetActor = TargetActor;
	IsValidHitTarget_Parms.DamageCauser = DamageCauser;
	IsValidHitTarget_Parms.DamageInstigator = DamageInstigator;
	IsValidHitTarget_Parms.DamageType = DamageType;
	IsValidHitTarget_Parms.whatDidDamage = whatDidDamage;

	this->ProcessEvent ( pFnIsValidHitTarget, &IsValidHitTarget_Parms, NULL );

	return IsValidHitTarget_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_OnHit.ReportActorDealtDamage
// [0x00024002] 
// Parameters infos:
// int                            dealtDamage                    ( CPF_Parm )
// class AActor*                  Victim                         ( CPF_Parm )
// class UClass*                  TheDamageType                  ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// class AController*             DamageInstigator               ( CPF_Parm )
// int                            adjustedDamage                 ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 whatDidDamage                  ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_OnHit::ReportActorDealtDamage ( int dealtDamage, class AActor* Victim, class UClass* TheDamageType, class AActor* DamageCauser, class AController* DamageInstigator, int adjustedDamage, class UObject* whatDidDamage )
{
	static UFunction* pFnReportActorDealtDamage = NULL;

	if ( ! pFnReportActorDealtDamage )
		pFnReportActorDealtDamage = (UFunction*) UObject::GObjObjects()->Data[ 84470 ];

	UDunDefBuff_OnHit_execReportActorDealtDamage_Parms ReportActorDealtDamage_Parms;
	ReportActorDealtDamage_Parms.dealtDamage = dealtDamage;
	ReportActorDealtDamage_Parms.Victim = Victim;
	ReportActorDealtDamage_Parms.TheDamageType = TheDamageType;
	ReportActorDealtDamage_Parms.DamageCauser = DamageCauser;
	ReportActorDealtDamage_Parms.DamageInstigator = DamageInstigator;
	ReportActorDealtDamage_Parms.adjustedDamage = adjustedDamage;
	ReportActorDealtDamage_Parms.whatDidDamage = whatDidDamage;

	this->ProcessEvent ( pFnReportActorDealtDamage, &ReportActorDealtDamage_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_OnHit.AdjustDealtDamage
// [0x00424000] 
// Parameters infos:
// class AActor*                  damagedTarget                  ( CPF_Parm )
// int                            OriginalDamage                 ( CPF_OptionalParm | CPF_Parm )
// int                            inDamage                       ( CPF_Parm | CPF_OutParm )
// struct FsLastDamageInfo        damageInfo                     ( CPF_Parm | CPF_OutParm )
// struct FVector                 Momentum                       ( CPF_Parm | CPF_OutParm )

void UDunDefBuff_OnHit::AdjustDealtDamage ( class AActor* damagedTarget, int OriginalDamage, int* inDamage, struct FsLastDamageInfo* damageInfo, struct FVector* Momentum )
{
	static UFunction* pFnAdjustDealtDamage = NULL;

	if ( ! pFnAdjustDealtDamage )
		pFnAdjustDealtDamage = (UFunction*) UObject::GObjObjects()->Data[ 84464 ];

	UDunDefBuff_OnHit_execAdjustDealtDamage_Parms AdjustDealtDamage_Parms;
	AdjustDealtDamage_Parms.damagedTarget = damagedTarget;
	AdjustDealtDamage_Parms.OriginalDamage = OriginalDamage;

	this->ProcessEvent ( pFnAdjustDealtDamage, &AdjustDealtDamage_Parms, NULL );

	if ( inDamage )
		*inDamage = AdjustDealtDamage_Parms.inDamage;

	if ( damageInfo )
		memcpy ( damageInfo, &AdjustDealtDamage_Parms.damageInfo, 0x10 );

	if ( Momentum )
		memcpy ( Momentum, &AdjustDealtDamage_Parms.Momentum, 0xC );
};

// Function DunDefBuff.DunDefBuff_Spawn.CanSpawn
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 EventCauser                    ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 EventOwner                     ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 whatDidDamage                  ( CPF_OptionalParm | CPF_Parm )

bool UDunDefBuff_Spawn::CanSpawn ( class UObject* EventCauser, class UObject* EventOwner, class UObject* whatDidDamage )
{
	static UFunction* pFnCanSpawn = NULL;

	if ( ! pFnCanSpawn )
		pFnCanSpawn = (UFunction*) UObject::GObjObjects()->Data[ 84572 ];

	UDunDefBuff_Spawn_execCanSpawn_Parms CanSpawn_Parms;
	CanSpawn_Parms.EventCauser = EventCauser;
	CanSpawn_Parms.EventOwner = EventOwner;
	CanSpawn_Parms.whatDidDamage = whatDidDamage;

	this->ProcessEvent ( pFnCanSpawn, &CanSpawn_Parms, NULL );

	return CanSpawn_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Spawn.DestroySpawn
// [0x00080002] 
// Parameters infos:
// class UObject*                 theObject                      ( CPF_Parm )

void UDunDefBuff_Spawn::DestroySpawn ( class UObject* theObject )
{
	static UFunction* pFnDestroySpawn = NULL;

	if ( ! pFnDestroySpawn )
		pFnDestroySpawn = (UFunction*) UObject::GObjObjects()->Data[ 84570 ];

	UDunDefBuff_Spawn_execDestroySpawn_Parms DestroySpawn_Parms;
	DestroySpawn_Parms.theObject = theObject;

	this->ProcessEvent ( pFnDestroySpawn, &DestroySpawn_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.EnforceSpawnLimit
// [0x00080002] 
// Parameters infos:
// int                            aspawnCount                    ( CPF_Parm )

void UDunDefBuff_Spawn::EnforceSpawnLimit ( int aspawnCount )
{
	static UFunction* pFnEnforceSpawnLimit = NULL;

	if ( ! pFnEnforceSpawnLimit )
		pFnEnforceSpawnLimit = (UFunction*) UObject::GObjObjects()->Data[ 84566 ];

	UDunDefBuff_Spawn_execEnforceSpawnLimit_Parms EnforceSpawnLimit_Parms;
	EnforceSpawnLimit_Parms.aspawnCount = aspawnCount;

	this->ProcessEvent ( pFnEnforceSpawnLimit, &EnforceSpawnLimit_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.CheckSpawnCount
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UDunDefBuff_Spawn::CheckSpawnCount ( )
{
	static UFunction* pFnCheckSpawnCount = NULL;

	if ( ! pFnCheckSpawnCount )
		pFnCheckSpawnCount = (UFunction*) UObject::GObjObjects()->Data[ 84563 ];

	UDunDefBuff_Spawn_execCheckSpawnCount_Parms CheckSpawnCount_Parms;

	this->ProcessEvent ( pFnCheckSpawnCount, &CheckSpawnCount_Parms, NULL );

	return CheckSpawnCount_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Spawn.GetSpawnCount
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UDunDefBuff_Spawn::GetSpawnCount ( )
{
	static UFunction* pFnGetSpawnCount = NULL;

	if ( ! pFnGetSpawnCount )
		pFnGetSpawnCount = (UFunction*) UObject::GObjObjects()->Data[ 84561 ];

	UDunDefBuff_Spawn_execGetSpawnCount_Parms GetSpawnCount_Parms;

	this->ProcessEvent ( pFnGetSpawnCount, &GetSpawnCount_Parms, NULL );

	return GetSpawnCount_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Spawn.SpawnArchetype
// [0x00020002] 
// Parameters infos:
// class AActor*                  TargetActor                    ( CPF_Parm )

void UDunDefBuff_Spawn::SpawnArchetype ( class AActor* TargetActor )
{
	static UFunction* pFnSpawnArchetype = NULL;

	if ( ! pFnSpawnArchetype )
		pFnSpawnArchetype = (UFunction*) UObject::GObjObjects()->Data[ 84553 ];

	UDunDefBuff_Spawn_execSpawnArchetype_Parms SpawnArchetype_Parms;
	SpawnArchetype_Parms.TargetActor = TargetActor;

	this->ProcessEvent ( pFnSpawnArchetype, &SpawnArchetype_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportBuffRemoved
// [0x00020000] 
// Parameters infos:
// class UDunDefBuff*             BuffRemoved                    ( CPF_Parm )

void UDunDefBuff_Spawn::ReportBuffRemoved ( class UDunDefBuff* BuffRemoved )
{
	static UFunction* pFnReportBuffRemoved = NULL;

	if ( ! pFnReportBuffRemoved )
		pFnReportBuffRemoved = (UFunction*) UObject::GObjObjects()->Data[ 84551 ];

	UDunDefBuff_Spawn_execReportBuffRemoved_Parms ReportBuffRemoved_Parms;
	ReportBuffRemoved_Parms.BuffRemoved = BuffRemoved;

	this->ProcessEvent ( pFnReportBuffRemoved, &ReportBuffRemoved_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportBuffAdded
// [0x00020000] 
// Parameters infos:
// class UDunDefBuff*             BuffAdded                      ( CPF_Parm )

void UDunDefBuff_Spawn::ReportBuffAdded ( class UDunDefBuff* BuffAdded )
{
	static UFunction* pFnReportBuffAdded = NULL;

	if ( ! pFnReportBuffAdded )
		pFnReportBuffAdded = (UFunction*) UObject::GObjObjects()->Data[ 84549 ];

	UDunDefBuff_Spawn_execReportBuffAdded_Parms ReportBuffAdded_Parms;
	ReportBuffAdded_Parms.BuffAdded = BuffAdded;

	this->ProcessEvent ( pFnReportBuffAdded, &ReportBuffAdded_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerJumped
// [0x00020002] 
// Parameters infos:

void UDunDefBuff_Spawn::ReportOwnerJumped ( )
{
	static UFunction* pFnReportOwnerJumped = NULL;

	if ( ! pFnReportOwnerJumped )
		pFnReportOwnerJumped = (UFunction*) UObject::GObjObjects()->Data[ 84548 ];

	UDunDefBuff_Spawn_execReportOwnerJumped_Parms ReportOwnerJumped_Parms;

	this->ProcessEvent ( pFnReportOwnerJumped, &ReportOwnerJumped_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.TriggerEvent
// [0x00020002] 
// Parameters infos:
// unsigned char                  EventToTrigger                 ( CPF_Parm )

void UDunDefBuff_Spawn::TriggerEvent ( unsigned char EventToTrigger )
{
	static UFunction* pFnTriggerEvent = NULL;

	if ( ! pFnTriggerEvent )
		pFnTriggerEvent = (UFunction*) UObject::GObjObjects()->Data[ 84546 ];

	UDunDefBuff_Spawn_execTriggerEvent_Parms TriggerEvent_Parms;
	TriggerEvent_Parms.EventToTrigger = EventToTrigger;

	this->ProcessEvent ( pFnTriggerEvent, &TriggerEvent_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerDeath
// [0x00020002] 
// Parameters infos:

void UDunDefBuff_Spawn::ReportOwnerDeath ( )
{
	static UFunction* pFnReportOwnerDeath = NULL;

	if ( ! pFnReportOwnerDeath )
		pFnReportOwnerDeath = (UFunction*) UObject::GObjObjects()->Data[ 84545 ];

	UDunDefBuff_Spawn_execReportOwnerDeath_Parms ReportOwnerDeath_Parms;

	this->ProcessEvent ( pFnReportOwnerDeath, &ReportOwnerDeath_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportHealedActor
// [0x00020002] 
// Parameters infos:
// int                            healedAmount                   ( CPF_Parm )
// class AActor*                  healed                         ( CPF_Parm )

void UDunDefBuff_Spawn::ReportHealedActor ( int healedAmount, class AActor* healed )
{
	static UFunction* pFnReportHealedActor = NULL;

	if ( ! pFnReportHealedActor )
		pFnReportHealedActor = (UFunction*) UObject::GObjObjects()->Data[ 84542 ];

	UDunDefBuff_Spawn_execReportHealedActor_Parms ReportHealedActor_Parms;
	ReportHealedActor_Parms.healedAmount = healedAmount;
	ReportHealedActor_Parms.healed = healed;

	this->ProcessEvent ( pFnReportHealedActor, &ReportHealedActor_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportHealed
// [0x00020002] 
// Parameters infos:
// int                            healedAmount                   ( CPF_Parm )
// class AActor*                  Healer                         ( CPF_Parm )

void UDunDefBuff_Spawn::ReportHealed ( int healedAmount, class AActor* Healer )
{
	static UFunction* pFnReportHealed = NULL;

	if ( ! pFnReportHealed )
		pFnReportHealed = (UFunction*) UObject::GObjObjects()->Data[ 84539 ];

	UDunDefBuff_Spawn_execReportHealed_Parms ReportHealed_Parms;
	ReportHealed_Parms.healedAmount = healedAmount;
	ReportHealed_Parms.Healer = Healer;

	this->ProcessEvent ( pFnReportHealed, &ReportHealed_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportKilledActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  killedActor                    ( CPF_Parm )
// class UClass*                  TheDamageType                  ( CPF_Parm )
// class AController*             Killer                         ( CPF_Parm )
// class AActor*                  KillingActor                   ( CPF_Parm )
// class UObject*                 WhatKilledThem                 ( CPF_Parm )

void UDunDefBuff_Spawn::ReportKilledActor ( class AActor* killedActor, class UClass* TheDamageType, class AController* Killer, class AActor* KillingActor, class UObject* WhatKilledThem )
{
	static UFunction* pFnReportKilledActor = NULL;

	if ( ! pFnReportKilledActor )
		pFnReportKilledActor = (UFunction*) UObject::GObjObjects()->Data[ 84533 ];

	UDunDefBuff_Spawn_execReportKilledActor_Parms ReportKilledActor_Parms;
	ReportKilledActor_Parms.killedActor = killedActor;
	ReportKilledActor_Parms.TheDamageType = TheDamageType;
	ReportKilledActor_Parms.Killer = Killer;
	ReportKilledActor_Parms.KillingActor = KillingActor;
	ReportKilledActor_Parms.WhatKilledThem = WhatKilledThem;

	this->ProcessEvent ( pFnReportKilledActor, &ReportKilledActor_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportTookDamage
// [0x00024002] 
// Parameters infos:
// int                            dealtDamage                    ( CPF_Parm )
// class AActor*                  damager                        ( CPF_Parm )
// class UClass*                  TheDamageType                  ( CPF_Parm )
// int                            adjustedDamage                 ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_Spawn::ReportTookDamage ( int dealtDamage, class AActor* damager, class UClass* TheDamageType, int adjustedDamage )
{
	static UFunction* pFnReportTookDamage = NULL;

	if ( ! pFnReportTookDamage )
		pFnReportTookDamage = (UFunction*) UObject::GObjObjects()->Data[ 84528 ];

	UDunDefBuff_Spawn_execReportTookDamage_Parms ReportTookDamage_Parms;
	ReportTookDamage_Parms.dealtDamage = dealtDamage;
	ReportTookDamage_Parms.damager = damager;
	ReportTookDamage_Parms.TheDamageType = TheDamageType;
	ReportTookDamage_Parms.adjustedDamage = adjustedDamage;

	this->ProcessEvent ( pFnReportTookDamage, &ReportTookDamage_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportActorDealtDamage
// [0x00024002] 
// Parameters infos:
// int                            dealtDamage                    ( CPF_Parm )
// class AActor*                  Victim                         ( CPF_Parm )
// class UClass*                  TheDamageType                  ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// class AController*             DamageInstigator               ( CPF_Parm )
// int                            adjustedDamage                 ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 whatDidDamage                  ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_Spawn::ReportActorDealtDamage ( int dealtDamage, class AActor* Victim, class UClass* TheDamageType, class AActor* DamageCauser, class AController* DamageInstigator, int adjustedDamage, class UObject* whatDidDamage )
{
	static UFunction* pFnReportActorDealtDamage = NULL;

	if ( ! pFnReportActorDealtDamage )
		pFnReportActorDealtDamage = (UFunction*) UObject::GObjObjects()->Data[ 84520 ];

	UDunDefBuff_Spawn_execReportActorDealtDamage_Parms ReportActorDealtDamage_Parms;
	ReportActorDealtDamage_Parms.dealtDamage = dealtDamage;
	ReportActorDealtDamage_Parms.Victim = Victim;
	ReportActorDealtDamage_Parms.TheDamageType = TheDamageType;
	ReportActorDealtDamage_Parms.DamageCauser = DamageCauser;
	ReportActorDealtDamage_Parms.DamageInstigator = DamageInstigator;
	ReportActorDealtDamage_Parms.adjustedDamage = adjustedDamage;
	ReportActorDealtDamage_Parms.whatDidDamage = whatDidDamage;

	this->ProcessEvent ( pFnReportActorDealtDamage, &ReportActorDealtDamage_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Web.GetPawnBoostAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  boostType                      ( CPF_Parm )

float UDunDefBuff_Web::GetPawnBoostAmount ( unsigned char boostType )
{
	static UFunction* pFnGetPawnBoostAmount = NULL;

	if ( ! pFnGetPawnBoostAmount )
		pFnGetPawnBoostAmount = (UFunction*) UObject::GObjObjects()->Data[ 84603 ];

	UDunDefBuff_Web_execGetPawnBoostAmount_Parms GetPawnBoostAmount_Parms;
	GetPawnBoostAmount_Parms.boostType = boostType;

	this->ProcessEvent ( pFnGetPawnBoostAmount, &GetPawnBoostAmount_Parms, NULL );

	return GetPawnBoostAmount_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Web.RemoveDebuff
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Web::RemoveDebuff ( )
{
	static UFunction* pFnRemoveDebuff = NULL;

	if ( ! pFnRemoveDebuff )
		pFnRemoveDebuff = (UFunction*) UObject::GObjObjects()->Data[ 84602 ];

	UDunDefBuff_Web_execRemoveDebuff_Parms RemoveDebuff_Parms;

	this->ProcessEvent ( pFnRemoveDebuff, &RemoveDebuff_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Web.ApplyDebuff
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Web::ApplyDebuff ( )
{
	static UFunction* pFnApplyDebuff = NULL;

	if ( ! pFnApplyDebuff )
		pFnApplyDebuff = (UFunction*) UObject::GObjObjects()->Data[ 84601 ];

	UDunDefBuff_Web_execApplyDebuff_Parms ApplyDebuff_Parms;

	this->ProcessEvent ( pFnApplyDebuff, &ApplyDebuff_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Web.InitalizeActorStats
// [0x00024102] 
// Parameters infos:
// class UIActorModifierInterface* ActorStatObject                ( CPF_Parm )
// class UObject*                 CallingObject                  ( CPF_OptionalParm | CPF_Parm )
// int                            Tier                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBaseValueOnly                 ( CPF_OptionalParm | CPF_Parm )

void UDunDefBuff_Web::InitalizeActorStats ( class UIActorModifierInterface* ActorStatObject, class UObject* CallingObject, int Tier, unsigned long bBaseValueOnly )
{
	static UFunction* pFnInitalizeActorStats = NULL;

	if ( ! pFnInitalizeActorStats )
		pFnInitalizeActorStats = (UFunction*) UObject::GObjObjects()->Data[ 84596 ];

	UDunDefBuff_Web_execInitalizeActorStats_Parms InitalizeActorStats_Parms;
	InitalizeActorStats_Parms.ActorStatObject = ActorStatObject;
	InitalizeActorStats_Parms.CallingObject = CallingObject;
	InitalizeActorStats_Parms.Tier = Tier;
	InitalizeActorStats_Parms.bBaseValueOnly = bBaseValueOnly;

	this->ProcessEvent ( pFnInitalizeActorStats, &InitalizeActorStats_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Web.BuffEffect
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Web::BuffEffect ( )
{
	static UFunction* pFnBuffEffect = NULL;

	if ( ! pFnBuffEffect )
		pFnBuffEffect = (UFunction*) UObject::GObjObjects()->Data[ 84595 ];

	UDunDefBuff_Web_execBuffEffect_Parms BuffEffect_Parms;

	this->ProcessEvent ( pFnBuffEffect, &BuffEffect_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Web.IsValidTarget
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Target                         ( CPF_Parm )
// class AActor*                  BuffOwner                      ( CPF_Parm )
// class UDunDefBuff*             aBuffTemplate                  ( CPF_Parm )

bool UDunDefBuff_Web::IsValidTarget ( class AActor* Target, class AActor* BuffOwner, class UDunDefBuff* aBuffTemplate )
{
	static UFunction* pFnIsValidTarget = NULL;

	if ( ! pFnIsValidTarget )
		pFnIsValidTarget = (UFunction*) UObject::GObjObjects()->Data[ 84590 ];

	UDunDefBuff_Web_execIsValidTarget_Parms IsValidTarget_Parms;
	IsValidTarget_Parms.Target = Target;
	IsValidTarget_Parms.BuffOwner = BuffOwner;
	IsValidTarget_Parms.aBuffTemplate = aBuffTemplate;

	this->ProcessEvent ( pFnIsValidTarget, &IsValidTarget_Parms, NULL );

	return IsValidTarget_Parms.ReturnValue;
};

// Function DunDefBuff.DunDefBuff_Web.DeactivateBuff
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Web::DeactivateBuff ( )
{
	static UFunction* pFnDeactivateBuff = NULL;

	if ( ! pFnDeactivateBuff )
		pFnDeactivateBuff = (UFunction*) UObject::GObjObjects()->Data[ 84589 ];

	UDunDefBuff_Web_execDeactivateBuff_Parms DeactivateBuff_Parms;

	this->ProcessEvent ( pFnDeactivateBuff, &DeactivateBuff_Parms, NULL );
};

// Function DunDefBuff.DunDefBuff_Web.ActivateBuff
// [0x00020102] 
// Parameters infos:

void UDunDefBuff_Web::ActivateBuff ( )
{
	static UFunction* pFnActivateBuff = NULL;

	if ( ! pFnActivateBuff )
		pFnActivateBuff = (UFunction*) UObject::GObjObjects()->Data[ 84588 ];

	UDunDefBuff_Web_execActivateBuff_Parms ActivateBuff_Parms;

	this->ProcessEvent ( pFnActivateBuff, &ActivateBuff_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif