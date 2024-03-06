/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefPortal_functions.h
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

// Function DunDefPortal.DunDefPortalNode.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefPortalNode::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84688 ];

	ADunDefPortalNode_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefPortal.DunDefPortalNode.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefPortalNode::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84683 ];

	ADunDefPortalNode_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefPortal.DunDefPortalNode.AllowSpawn
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  theArchetype                   ( CPF_Parm )
// struct FVector                 theLoc                         ( CPF_Parm )
// struct FRotator                theRot                         ( CPF_Parm )

bool ADunDefPortalNode::eventAllowSpawn ( class AActor* theArchetype, struct FVector theLoc, struct FRotator theRot )
{
	static UFunction* pFnAllowSpawn = NULL;

	if ( ! pFnAllowSpawn )
		pFnAllowSpawn = (UFunction*) UObject::GObjObjects()->Data[ 84678 ];

	ADunDefPortalNode_eventAllowSpawn_Parms AllowSpawn_Parms;
	AllowSpawn_Parms.theArchetype = theArchetype;
	memcpy ( &AllowSpawn_Parms.theLoc, &theLoc, 0xC );
	memcpy ( &AllowSpawn_Parms.theRot, &theRot, 0xC );

	this->ProcessEvent ( pFnAllowSpawn, &AllowSpawn_Parms, NULL );

	return AllowSpawn_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefPortalNode.FadeOut
// [0x00024102] 
// Parameters infos:
// float                          theLightFadeOutTime            ( CPF_OptionalParm | CPF_Parm )

void ADunDefPortalNode::FadeOut ( float theLightFadeOutTime )
{
	static UFunction* pFnFadeOut = NULL;

	if ( ! pFnFadeOut )
		pFnFadeOut = (UFunction*) UObject::GObjObjects()->Data[ 84675 ];

	ADunDefPortalNode_execFadeOut_Parms FadeOut_Parms;
	FadeOut_Parms.theLightFadeOutTime = theLightFadeOutTime;

	this->ProcessEvent ( pFnFadeOut, &FadeOut_Parms, NULL );
};

// Function DunDefPortal.DunDefPortalNode.Touch
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefPortalNode::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 84660 ];

	ADunDefPortalNode_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function DunDefPortal.DunDefPortalNode.ExecReplicatedFunction
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

void ADunDefPortalNode::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84643 ];

	ADunDefPortalNode_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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

// Function DunDefPortal.DunDefPortalNode.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADunDefPortalNode::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 84641 ];

	ADunDefPortalNode_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HitBlockingVolume
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 End                            ( CPF_Parm )

bool ADunDefWeapon_PortalGun::HitBlockingVolume ( struct FVector Start, struct FVector End )
{
	static UFunction* pFnHitBlockingVolume = NULL;

	if ( ! pFnHitBlockingVolume )
		pFnHitBlockingVolume = (UFunction*) UObject::GObjObjects()->Data[ 84785 ];

	ADunDefWeapon_PortalGun_execHitBlockingVolume_Parms HitBlockingVolume_Parms;
	memcpy ( &HitBlockingVolume_Parms.Start, &Start, 0xC );
	memcpy ( &HitBlockingVolume_Parms.End, &End, 0xC );

	this->ProcessEvent ( pFnHitBlockingVolume, &HitBlockingVolume_Parms, NULL );

	return HitBlockingVolume_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.IsInAnyPortalBlockingVolume
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 aPoint                         ( CPF_Parm )

bool ADunDefWeapon_PortalGun::IsInAnyPortalBlockingVolume ( struct FVector aPoint )
{
	static UFunction* pFnIsInAnyPortalBlockingVolume = NULL;

	if ( ! pFnIsInAnyPortalBlockingVolume )
		pFnIsInAnyPortalBlockingVolume = (UFunction*) UObject::GObjObjects()->Data[ 84781 ];

	ADunDefWeapon_PortalGun_execIsInAnyPortalBlockingVolume_Parms IsInAnyPortalBlockingVolume_Parms;
	memcpy ( &IsInAnyPortalBlockingVolume_Parms.aPoint, &aPoint, 0xC );

	this->ProcessEvent ( pFnIsInAnyPortalBlockingVolume, &IsInAnyPortalBlockingVolume_Parms, NULL );

	return IsInAnyPortalBlockingVolume_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ADunDefWeapon_PortalGun::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 84779 ];

	ADunDefWeapon_PortalGun_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetReloadingColors
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            BarColor                       ( CPF_Parm | CPF_OutParm )
// struct FLinearColor            TextColor                      ( CPF_Parm | CPF_OutParm )

bool ADunDefWeapon_PortalGun::GetReloadingColors ( struct FLinearColor* BarColor, struct FLinearColor* TextColor )
{
	static UFunction* pFnGetReloadingColors = NULL;

	if ( ! pFnGetReloadingColors )
		pFnGetReloadingColors = (UFunction*) UObject::GObjObjects()->Data[ 84775 ];

	ADunDefWeapon_PortalGun_execGetReloadingColors_Parms GetReloadingColors_Parms;

	this->ProcessEvent ( pFnGetReloadingColors, &GetReloadingColors_Parms, NULL );

	if ( BarColor )
		memcpy ( BarColor, &GetReloadingColors_Parms.BarColor, 0x10 );

	if ( TextColor )
		memcpy ( TextColor, &GetReloadingColors_Parms.TextColor, 0x10 );

	return GetReloadingColors_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HasBothPortals
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefWeapon_PortalGun::HasBothPortals ( )
{
	static UFunction* pFnHasBothPortals = NULL;

	if ( ! pFnHasBothPortals )
		pFnHasBothPortals = (UFunction*) UObject::GObjObjects()->Data[ 84773 ];

	ADunDefWeapon_PortalGun_execHasBothPortals_Parms HasBothPortals_Parms;

	this->ProcessEvent ( pFnHasBothPortals, &HasBothPortals_Parms, NULL );

	return HasBothPortals_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ClearPortal
// [0x00020002] 
// Parameters infos:
// int                            portalIndex                    ( CPF_Parm )

void ADunDefWeapon_PortalGun::ClearPortal ( int portalIndex )
{
	static UFunction* pFnClearPortal = NULL;

	if ( ! pFnClearPortal )
		pFnClearPortal = (UFunction*) UObject::GObjObjects()->Data[ 84771 ];

	ADunDefWeapon_PortalGun_execClearPortal_Parms ClearPortal_Parms;
	ClearPortal_Parms.portalIndex = portalIndex;

	this->ProcessEvent ( pFnClearPortal, &ClearPortal_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefWeapon_PortalGun::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 84770 ];

	ADunDefWeapon_PortalGun_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.DetachWeapon
// [0x00020102] 
// Parameters infos:

void ADunDefWeapon_PortalGun::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 84769 ];

	ADunDefWeapon_PortalGun_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HolderDied
// [0x00020002] 
// Parameters infos:

void ADunDefWeapon_PortalGun::HolderDied ( )
{
	static UFunction* pFnHolderDied = NULL;

	if ( ! pFnHolderDied )
		pFnHolderDied = (UFunction*) UObject::GObjObjects()->Data[ 84768 ];

	ADunDefWeapon_PortalGun_execHolderDied_Parms HolderDied_Parms;

	this->ProcessEvent ( pFnHolderDied, &HolderDied_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.CustomFire
// [0x00820102] 
// Parameters infos:
// int                            theFireMode                    ( CPF_Parm )

void ADunDefWeapon_PortalGun::CustomFire ( int theFireMode )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 84762 ];

	ADunDefWeapon_PortalGun_execCustomFire_Parms CustomFire_Parms;
	CustomFire_Parms.theFireMode = theFireMode;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ShootProjectiles
// [0x00024100] 
// Parameters infos:
// int                            theFireMode                    ( CPF_OptionalParm | CPF_Parm )

void ADunDefWeapon_PortalGun::ShootProjectiles ( int theFireMode )
{
	static UFunction* pFnShootProjectiles = NULL;

	if ( ! pFnShootProjectiles )
		pFnShootProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 84760 ];

	ADunDefWeapon_PortalGun_execShootProjectiles_Parms ShootProjectiles_Parms;
	ShootProjectiles_Parms.theFireMode = theFireMode;

	this->ProcessEvent ( pFnShootProjectiles, &ShootProjectiles_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.HasAnyAmmo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefWeapon_PortalGun::HasAnyAmmo ( )
{
	static UFunction* pFnHasAnyAmmo = NULL;

	if ( ! pFnHasAnyAmmo )
		pFnHasAnyAmmo = (UFunction*) UObject::GObjObjects()->Data[ 84758 ];

	ADunDefWeapon_PortalGun_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

	this->ProcessEvent ( pFnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );

	return HasAnyAmmo_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.BeginFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ADunDefWeapon_PortalGun::BeginFire ( unsigned char FireModeNum )
{
	static UFunction* pFnBeginFire = NULL;

	if ( ! pFnBeginFire )
		pFnBeginFire = (UFunction*) UObject::GObjObjects()->Data[ 84756 ];

	ADunDefWeapon_PortalGun_execBeginFire_Parms BeginFire_Parms;
	BeginFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnBeginFire, &BeginFire_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetSiblingPortal
// [0x00424102] 
// Parameters infos:
// class ADunDefPortalNode*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPortalNode*       aPortal                        ( CPF_Parm )
// class ADunDefPortalNode*       aSibling                       ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// class UTextureRenderTarget2D*  portalTextureTarget            ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

class ADunDefPortalNode* ADunDefWeapon_PortalGun::GetSiblingPortal ( class ADunDefPortalNode* aPortal, class ADunDefPortalNode** aSibling, class UTextureRenderTarget2D** portalTextureTarget )
{
	static UFunction* pFnGetSiblingPortal = NULL;

	if ( ! pFnGetSiblingPortal )
		pFnGetSiblingPortal = (UFunction*) UObject::GObjObjects()->Data[ 84673 ];

	ADunDefWeapon_PortalGun_execGetSiblingPortal_Parms GetSiblingPortal_Parms;
	GetSiblingPortal_Parms.aPortal = aPortal;

	this->ProcessEvent ( pFnGetSiblingPortal, &GetSiblingPortal_Parms, NULL );

	if ( aSibling )
		*aSibling = GetSiblingPortal_Parms.aSibling;

	if ( portalTextureTarget )
		*portalTextureTarget = GetSiblingPortal_Parms.portalTextureTarget;

	return GetSiblingPortal_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADunDefWeapon_PortalGun::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 84752 ];

	ADunDefWeapon_PortalGun_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PlayCancelAnimation
// [0x00020102] 
// Parameters infos:
// unsigned long                  bIsPrimary                     ( CPF_Parm )

void ADunDefWeapon_PortalGun::PlayCancelAnimation ( unsigned long bIsPrimary )
{
	static UFunction* pFnPlayCancelAnimation = NULL;

	if ( ! pFnPlayCancelAnimation )
		pFnPlayCancelAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84750 ];

	ADunDefWeapon_PortalGun_execPlayCancelAnimation_Parms PlayCancelAnimation_Parms;
	PlayCancelAnimation_Parms.bIsPrimary = bIsPrimary;

	this->ProcessEvent ( pFnPlayCancelAnimation, &PlayCancelAnimation_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.PlayedShootAnimation
// [0x00024102] 
// Parameters infos:
// unsigned long                  isBigShot                      ( CPF_OptionalParm | CPF_Parm )

void ADunDefWeapon_PortalGun::PlayedShootAnimation ( unsigned long isBigShot )
{
	static UFunction* pFnPlayedShootAnimation = NULL;

	if ( ! pFnPlayedShootAnimation )
		pFnPlayedShootAnimation = (UFunction*) UObject::GObjObjects()->Data[ 84748 ];

	ADunDefWeapon_PortalGun_execPlayedShootAnimation_Parms PlayedShootAnimation_Parms;
	PlayedShootAnimation_Parms.isBigShot = isBigShot;

	this->ProcessEvent ( pFnPlayedShootAnimation, &PlayedShootAnimation_Parms, NULL );
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetTotalAmmo
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefWeapon_PortalGun::GetTotalAmmo ( )
{
	static UFunction* pFnGetTotalAmmo = NULL;

	if ( ! pFnGetTotalAmmo )
		pFnGetTotalAmmo = (UFunction*) UObject::GObjObjects()->Data[ 84746 ];

	ADunDefWeapon_PortalGun_execGetTotalAmmo_Parms GetTotalAmmo_Parms;

	this->ProcessEvent ( pFnGetTotalAmmo, &GetTotalAmmo_Parms, NULL );

	return GetTotalAmmo_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetMaxAmmo
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefWeapon_PortalGun::GetMaxAmmo ( )
{
	static UFunction* pFnGetMaxAmmo = NULL;

	if ( ! pFnGetMaxAmmo )
		pFnGetMaxAmmo = (UFunction*) UObject::GObjObjects()->Data[ 84744 ];

	ADunDefWeapon_PortalGun_execGetMaxAmmo_Parms GetMaxAmmo_Parms;

	this->ProcessEvent ( pFnGetMaxAmmo, &GetMaxAmmo_Parms, NULL );

	return GetMaxAmmo_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmo
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int ADunDefWeapon_PortalGun::GetAmmo ( )
{
	static UFunction* pFnGetAmmo = NULL;

	if ( ! pFnGetAmmo )
		pFnGetAmmo = (UFunction*) UObject::GObjObjects()->Data[ 84742 ];

	ADunDefWeapon_PortalGun_execGetAmmo_Parms GetAmmo_Parms;

	this->ProcessEvent ( pFnGetAmmo, &GetAmmo_Parms, NULL );

	return GetAmmo_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmoPercent
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ADunDefWeapon_PortalGun::GetAmmoPercent ( )
{
	static UFunction* pFnGetAmmoPercent = NULL;

	if ( ! pFnGetAmmoPercent )
		pFnGetAmmoPercent = (UFunction*) UObject::GObjObjects()->Data[ 84740 ];

	ADunDefWeapon_PortalGun_execGetAmmoPercent_Parms GetAmmoPercent_Parms;

	this->ProcessEvent ( pFnGetAmmoPercent, &GetAmmoPercent_Parms, NULL );

	return GetAmmoPercent_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.UsesAmmo
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ADunDefWeapon_PortalGun::UsesAmmo ( )
{
	static UFunction* pFnUsesAmmo = NULL;

	if ( ! pFnUsesAmmo )
		pFnUsesAmmo = (UFunction*) UObject::GObjObjects()->Data[ 84738 ];

	ADunDefWeapon_PortalGun_execUsesAmmo_Parms UsesAmmo_Parms;

	this->ProcessEvent ( pFnUsesAmmo, &UsesAmmo_Parms, NULL );

	return UsesAmmo_Parms.ReturnValue;
};

// Function DunDefPortal.DunDefWeapon_PortalGun.ExecReplicatedFunction
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

void ADunDefWeapon_PortalGun::ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 )
{
	static UFunction* pFnExecReplicatedFunction = NULL;

	if ( ! pFnExecReplicatedFunction )
		pFnExecReplicatedFunction = (UFunction*) UObject::GObjObjects()->Data[ 84721 ];

	ADunDefWeapon_PortalGun_execExecReplicatedFunction_Parms ExecReplicatedFunction_Parms;
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