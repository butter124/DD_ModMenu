/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT4_functions.h
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

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AddRandomizeValues
// [0x00024002] 
// Parameters infos:
// float                          equipmentQuality               ( CPF_Parm )
// unsigned long                  doResetStatsToTemplate         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDontUseMissionRandomizerMultiplier ( CPF_OptionalParm | CPF_Parm )
// float                          RandomizerMultiplierOverride   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsForShop                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowTranscendentGear         ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_CoreHealer::AddRandomizeValues ( float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear )
{
	static UFunction* pFnAddRandomizeValues = NULL;

	if ( ! pFnAddRandomizeValues )
		pFnAddRandomizeValues = (UFunction*) UObject::GObjObjects()->Data[ 81160 ];

	UHeroEquipment_Familiar_CoreHealer_execAddRandomizeValues_Parms AddRandomizeValues_Parms;
	AddRandomizeValues_Parms.equipmentQuality = equipmentQuality;
	AddRandomizeValues_Parms.doResetStatsToTemplate = doResetStatsToTemplate;
	AddRandomizeValues_Parms.bDontUseMissionRandomizerMultiplier = bDontUseMissionRandomizerMultiplier;
	AddRandomizeValues_Parms.RandomizerMultiplierOverride = RandomizerMultiplierOverride;
	AddRandomizeValues_Parms.bIsForShop = bIsForShop;
	AddRandomizeValues_Parms.bAllowTranscendentGear = bAllowTranscendentGear;

	this->ProcessEvent ( pFnAddRandomizeValues, &AddRandomizeValues_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetStatLevelUpAmountIterations
// [0x00024002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EQS                            ( CPF_Parm )
// int                            Value                          ( CPF_Parm )
// int                            statSubIndex                   ( CPF_OptionalParm | CPF_Parm )

int UHeroEquipment_Familiar_CoreHealer::GetStatLevelUpAmountIterations ( unsigned char EQS, int Value, int statSubIndex )
{
	static UFunction* pFnGetStatLevelUpAmountIterations = NULL;

	if ( ! pFnGetStatLevelUpAmountIterations )
		pFnGetStatLevelUpAmountIterations = (UFunction*) UObject::GObjObjects()->Data[ 81155 ];

	UHeroEquipment_Familiar_CoreHealer_execGetStatLevelUpAmountIterations_Parms GetStatLevelUpAmountIterations_Parms;
	GetStatLevelUpAmountIterations_Parms.EQS = EQS;
	GetStatLevelUpAmountIterations_Parms.Value = Value;
	GetStatLevelUpAmountIterations_Parms.statSubIndex = statSubIndex;

	this->ProcessEvent ( pFnGetStatLevelUpAmountIterations, &GetStatLevelUpAmountIterations_Parms, NULL );

	return GetStatLevelUpAmountIterations_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetNextStatLevelUpValue
// [0x00024002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EQS                            ( CPF_Parm )
// int                            statSubIndex                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  SetAsValue                     ( CPF_OptionalParm | CPF_Parm )

int UHeroEquipment_Familiar_CoreHealer::GetNextStatLevelUpValue ( unsigned char EQS, int statSubIndex, unsigned long SetAsValue )
{
	static UFunction* pFnGetNextStatLevelUpValue = NULL;

	if ( ! pFnGetNextStatLevelUpValue )
		pFnGetNextStatLevelUpValue = (UFunction*) UObject::GObjObjects()->Data[ 81149 ];

	UHeroEquipment_Familiar_CoreHealer_execGetNextStatLevelUpValue_Parms GetNextStatLevelUpValue_Parms;
	GetNextStatLevelUpValue_Parms.EQS = EQS;
	GetNextStatLevelUpValue_Parms.statSubIndex = statSubIndex;
	GetNextStatLevelUpValue_Parms.SetAsValue = SetAsValue;

	this->ProcessEvent ( pFnGetNextStatLevelUpValue, &GetNextStatLevelUpValue_Parms, NULL );

	return GetNextStatLevelUpValue_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.InitFromNetInfo
// [0x00024002] 
// Parameters infos:
// struct FEquipmentNetInfo       Info                           ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 fromDroppedEquipment           ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_CoreHealer::InitFromNetInfo ( struct FEquipmentNetInfo Info, class UObject* fromDroppedEquipment )
{
	static UFunction* pFnInitFromNetInfo = NULL;

	if ( ! pFnInitFromNetInfo )
		pFnInitFromNetInfo = (UFunction*) UObject::GObjObjects()->Data[ 81146 ];

	UHeroEquipment_Familiar_CoreHealer_execInitFromNetInfo_Parms InitFromNetInfo_Parms;
	memcpy ( &InitFromNetInfo_Parms.Info, &Info, 0x120 );
	InitFromNetInfo_Parms.fromDroppedEquipment = fromDroppedEquipment;

	this->ProcessEvent ( pFnInitFromNetInfo, &InitFromNetInfo_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.CheckStatLevelUpIterations
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EQS                            ( CPF_Parm )
// int                            statSubIndex                   ( CPF_Parm )
// int                            EquipmentLevelToCheck          ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

bool UHeroEquipment_Familiar_CoreHealer::CheckStatLevelUpIterations ( unsigned char EQS, int statSubIndex, int EquipmentLevelToCheck, float Value )
{
	static UFunction* pFnCheckStatLevelUpIterations = NULL;

	if ( ! pFnCheckStatLevelUpIterations )
		pFnCheckStatLevelUpIterations = (UFunction*) UObject::GObjObjects()->Data[ 81140 ];

	UHeroEquipment_Familiar_CoreHealer_execCheckStatLevelUpIterations_Parms CheckStatLevelUpIterations_Parms;
	CheckStatLevelUpIterations_Parms.EQS = EQS;
	CheckStatLevelUpIterations_Parms.statSubIndex = statSubIndex;
	CheckStatLevelUpIterations_Parms.EquipmentLevelToCheck = EquipmentLevelToCheck;
	CheckStatLevelUpIterations_Parms.Value = Value;

	this->ProcessEvent ( pFnCheckStatLevelUpIterations, &CheckStatLevelUpIterations_Parms, NULL );

	return CheckStatLevelUpIterations_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AllowStatLevelUp
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EQS                            ( CPF_Parm )
// int                            statSubIndex                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  IsInForgeUI                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreManaRequirement         ( CPF_OptionalParm | CPF_Parm )

bool UHeroEquipment_Familiar_CoreHealer::AllowStatLevelUp ( unsigned char EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement )
{
	static UFunction* pFnAllowStatLevelUp = NULL;

	if ( ! pFnAllowStatLevelUp )
		pFnAllowStatLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 81134 ];

	UHeroEquipment_Familiar_CoreHealer_execAllowStatLevelUp_Parms AllowStatLevelUp_Parms;
	AllowStatLevelUp_Parms.EQS = EQS;
	AllowStatLevelUp_Parms.statSubIndex = statSubIndex;
	AllowStatLevelUp_Parms.IsInForgeUI = IsInForgeUI;
	AllowStatLevelUp_Parms.bIgnoreManaRequirement = bIgnoreManaRequirement;

	this->ProcessEvent ( pFnAllowStatLevelUp, &AllowStatLevelUp_Parms, NULL );

	return AllowStatLevelUp_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetWeaponDamage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHeroEquipment_Familiar_CoreHealer::GetWeaponDamage ( )
{
	static UFunction* pFnGetWeaponDamage = NULL;

	if ( ! pFnGetWeaponDamage )
		pFnGetWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 81132 ];

	UHeroEquipment_Familiar_CoreHealer_execGetWeaponDamage_Parms GetWeaponDamage_Parms;

	this->ProcessEvent ( pFnGetWeaponDamage, &GetWeaponDamage_Parms, NULL );

	return GetWeaponDamage_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.ApplyPrimaryDamageMultiplierDisplay
// [0x00420002] 
// Parameters infos:
// int                            StatValue                      ( CPF_Parm | CPF_OutParm )

void UHeroEquipment_Familiar_CoreHealer::ApplyPrimaryDamageMultiplierDisplay ( int* StatValue )
{
	static UFunction* pFnApplyPrimaryDamageMultiplierDisplay = NULL;

	if ( ! pFnApplyPrimaryDamageMultiplierDisplay )
		pFnApplyPrimaryDamageMultiplierDisplay = (UFunction*) UObject::GObjObjects()->Data[ 81130 ];

	UHeroEquipment_Familiar_CoreHealer_execApplyPrimaryDamageMultiplierDisplay_Parms ApplyPrimaryDamageMultiplierDisplay_Parms;

	this->ProcessEvent ( pFnApplyPrimaryDamageMultiplierDisplay, &ApplyPrimaryDamageMultiplierDisplay_Parms, NULL );

	if ( StatValue )
		*StatValue = ApplyPrimaryDamageMultiplierDisplay_Parms.StatValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatValue
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  equipmentStatType              ( CPF_Parm )
// unsigned long                  returnFinalAddedValue          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  includeStatLevelUp             ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_CoreHealer::GetEquipmentStatValue ( unsigned char equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp )
{
	static UFunction* pFnGetEquipmentStatValue = NULL;

	if ( ! pFnGetEquipmentStatValue )
		pFnGetEquipmentStatValue = (UFunction*) UObject::GObjObjects()->Data[ 81124 ];

	UHeroEquipment_Familiar_CoreHealer_execGetEquipmentStatValue_Parms GetEquipmentStatValue_Parms;
	GetEquipmentStatValue_Parms.equipmentStatType = equipmentStatType;
	GetEquipmentStatValue_Parms.returnFinalAddedValue = returnFinalAddedValue;
	GetEquipmentStatValue_Parms.includeStatLevelUp = includeStatLevelUp;

	this->ProcessEvent ( pFnGetEquipmentStatValue, &GetEquipmentStatValue_Parms, NULL );

	return GetEquipmentStatValue_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.NotifyEquipment_PawnAttacked
// [0x00020000] 
// Parameters infos:
// int                            FireMode                       ( CPF_Parm )

void UHeroEquipment_Familiar_CoreHealer::NotifyEquipment_PawnAttacked ( int FireMode )
{
	static UFunction* pFnNotifyEquipment_PawnAttacked = NULL;

	if ( ! pFnNotifyEquipment_PawnAttacked )
		pFnNotifyEquipment_PawnAttacked = (UFunction*) UObject::GObjObjects()->Data[ 81122 ];

	UHeroEquipment_Familiar_CoreHealer_execNotifyEquipment_PawnAttacked_Parms NotifyEquipment_PawnAttacked_Parms;
	NotifyEquipment_PawnAttacked_Parms.FireMode = FireMode;

	this->ProcessEvent ( pFnNotifyEquipment_PawnAttacked, &NotifyEquipment_PawnAttacked_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredSphereRotationalPlacement
// [0x00420002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USkeletalMeshComponent*  myMeshComp                     ( CPF_Parm | CPF_EditInline )
// class ADunDefPlayer*           myPlayer                       ( CPF_Parm )
// unsigned char                  HasTarget                      ( CPF_Parm | CPF_OutParm )

struct FRotator UHeroEquipment_Familiar_CoreHealer::GetDesiredSphereRotationalPlacement ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget )
{
	static UFunction* pFnGetDesiredSphereRotationalPlacement = NULL;

	if ( ! pFnGetDesiredSphereRotationalPlacement )
		pFnGetDesiredSphereRotationalPlacement = (UFunction*) UObject::GObjObjects()->Data[ 81117 ];

	UHeroEquipment_Familiar_CoreHealer_execGetDesiredSphereRotationalPlacement_Parms GetDesiredSphereRotationalPlacement_Parms;
	GetDesiredSphereRotationalPlacement_Parms.myMeshComp = myMeshComp;
	GetDesiredSphereRotationalPlacement_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetDesiredSphereRotationalPlacement, &GetDesiredSphereRotationalPlacement_Parms, NULL );

	if ( HasTarget )
		*HasTarget = GetDesiredSphereRotationalPlacement_Parms.HasTarget;

	return GetDesiredSphereRotationalPlacement_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredDirection
// [0x00020002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USkeletalMeshComponent*  myMeshComp                     ( CPF_Parm | CPF_EditInline )
// class ADunDefPlayer*           myPlayer                       ( CPF_Parm )

struct FRotator UHeroEquipment_Familiar_CoreHealer::GetDesiredDirection ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer )
{
	static UFunction* pFnGetDesiredDirection = NULL;

	if ( ! pFnGetDesiredDirection )
		pFnGetDesiredDirection = (UFunction*) UObject::GObjObjects()->Data[ 81113 ];

	UHeroEquipment_Familiar_CoreHealer_execGetDesiredDirection_Parms GetDesiredDirection_Parms;
	GetDesiredDirection_Parms.myMeshComp = myMeshComp;
	GetDesiredDirection_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetDesiredDirection, &GetDesiredDirection_Parms, NULL );

	return GetDesiredDirection_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetAttackInterval
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_CoreHealer::GetAttackInterval ( )
{
	static UFunction* pFnGetAttackInterval = NULL;

	if ( ! pFnGetAttackInterval )
		pFnGetAttackInterval = (UFunction*) UObject::GObjObjects()->Data[ 81111 ];

	UHeroEquipment_Familiar_CoreHealer_execGetAttackInterval_Parms GetAttackInterval_Parms;

	this->ProcessEvent ( pFnGetAttackInterval, &GetAttackInterval_Parms, NULL );

	return GetAttackInterval_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealAmount
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_CoreHealer::GetHealAmount ( )
{
	static UFunction* pFnGetHealAmount = NULL;

	if ( ! pFnGetHealAmount )
		pFnGetHealAmount = (UFunction*) UObject::GObjObjects()->Data[ 81109 ];

	UHeroEquipment_Familiar_CoreHealer_execGetHealAmount_Parms GetHealAmount_Parms;

	this->ProcessEvent ( pFnGetHealAmount, &GetHealAmount_Parms, NULL );

	return GetHealAmount_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetManaCost
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_CoreHealer::GetManaCost ( )
{
	static UFunction* pFnGetManaCost = NULL;

	if ( ! pFnGetManaCost )
		pFnGetManaCost = (UFunction*) UObject::GObjObjects()->Data[ 81107 ];

	UHeroEquipment_Familiar_CoreHealer_execGetManaCost_Parms GetManaCost_Parms;

	this->ProcessEvent ( pFnGetManaCost, &GetManaCost_Parms, NULL );

	return GetManaCost_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealRangeSq
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_CoreHealer::GetHealRangeSq ( )
{
	static UFunction* pFnGetHealRangeSq = NULL;

	if ( ! pFnGetHealRangeSq )
		pFnGetHealRangeSq = (UFunction*) UObject::GObjObjects()->Data[ 81103 ];

	UHeroEquipment_Familiar_CoreHealer_execGetHealRangeSq_Parms GetHealRangeSq_Parms;

	this->ProcessEvent ( pFnGetHealRangeSq, &GetHealRangeSq_Parms, NULL );

	return GetHealRangeSq_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  equipmentStatType              ( CPF_Parm )

struct FString UHeroEquipment_Familiar_CoreHealer::GetEquipmentStatName ( unsigned char equipmentStatType )
{
	static UFunction* pFnGetEquipmentStatName = NULL;

	if ( ! pFnGetEquipmentStatName )
		pFnGetEquipmentStatName = (UFunction*) UObject::GObjObjects()->Data[ 81100 ];

	UHeroEquipment_Familiar_CoreHealer_execGetEquipmentStatName_Parms GetEquipmentStatName_Parms;
	GetEquipmentStatName_Parms.equipmentStatType = equipmentStatType;

	this->ProcessEvent ( pFnGetEquipmentStatName, &GetEquipmentStatName_Parms, NULL );

	return GetEquipmentStatName_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateAI
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_CoreHealer::UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateAI = NULL;

	if ( ! pFnUpdateAI )
		pFnUpdateAI = (UFunction*) UObject::GObjObjects()->Data[ 81092 ];

	UHeroEquipment_Familiar_CoreHealer_execUpdateAI_Parms UpdateAI_Parms;
	UpdateAI_Parms.PlayerOwner = PlayerOwner;
	UpdateAI_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAI, &UpdateAI_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.TickedByPawn
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_CoreHealer::TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnTickedByPawn = NULL;

	if ( ! pFnTickedByPawn )
		pFnTickedByPawn = (UFunction*) UObject::GObjObjects()->Data[ 81089 ];

	UHeroEquipment_Familiar_CoreHealer_execTickedByPawn_Parms TickedByPawn_Parms;
	TickedByPawn_Parms.PlayerOwner = PlayerOwner;
	TickedByPawn_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickedByPawn, &TickedByPawn_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateRotation
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_CoreHealer::UpdateRotation ( float DeltaTime )
{
	static UFunction* pFnUpdateRotation = NULL;

	if ( ! pFnUpdateRotation )
		pFnUpdateRotation = (UFunction*) UObject::GObjObjects()->Data[ 81087 ];

	UHeroEquipment_Familiar_CoreHealer_execUpdateRotation_Parms UpdateRotation_Parms;
	UpdateRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateRotation, &UpdateRotation_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.ShutDown
// [0x00024002] 
// Parameters infos:
// unsigned long                  isDestruction                  ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_CoreHealer::ShutDown ( unsigned long isDestruction )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 81085 ];

	UHeroEquipment_Familiar_CoreHealer_execShutDown_Parms ShutDown_Parms;
	ShutDown_Parms.isDestruction = isDestruction;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AttachedComponent
// [0x00020002] 
// Parameters infos:
// class UPrimitiveComponent*     aComp                          ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_CoreHealer::AttachedComponent ( class UPrimitiveComponent* aComp )
{
	static UFunction* pFnAttachedComponent = NULL;

	if ( ! pFnAttachedComponent )
		pFnAttachedComponent = (UFunction*) UObject::GObjObjects()->Data[ 81083 ];

	UHeroEquipment_Familiar_CoreHealer_execAttachedComponent_Parms AttachedComponent_Parms;
	AttachedComponent_Parms.aComp = aComp;

	this->ProcessEvent ( pFnAttachedComponent, &AttachedComponent_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.GetBestTarget
// [0x00820002] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* UHeroEquipment_Familiar_MiniQueen::GetBestTarget ( )
{
	static UFunction* pFnGetBestTarget = NULL;

	if ( ! pFnGetBestTarget )
		pFnGetBestTarget = (UFunction*) UObject::GObjObjects()->Data[ 81182 ];

	UHeroEquipment_Familiar_MiniQueen_execGetBestTarget_Parms GetBestTarget_Parms;

	this->ProcessEvent ( pFnGetBestTarget, &GetBestTarget_Parms, NULL );

	return GetBestTarget_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginRangedAttack
// [0x00020002] 
// Parameters infos:

void UHeroEquipment_Familiar_MiniQueen::BeginRangedAttack ( )
{
	static UFunction* pFnBeginRangedAttack = NULL;

	if ( ! pFnBeginRangedAttack )
		pFnBeginRangedAttack = (UFunction*) UObject::GObjObjects()->Data[ 81181 ];

	UHeroEquipment_Familiar_MiniQueen_execBeginRangedAttack_Parms BeginRangedAttack_Parms;

	this->ProcessEvent ( pFnBeginRangedAttack, &BeginRangedAttack_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginMeleeAttack
// [0x00020002] 
// Parameters infos:

void UHeroEquipment_Familiar_MiniQueen::BeginMeleeAttack ( )
{
	static UFunction* pFnBeginMeleeAttack = NULL;

	if ( ! pFnBeginMeleeAttack )
		pFnBeginMeleeAttack = (UFunction*) UObject::GObjObjects()->Data[ 81180 ];

	UHeroEquipment_Familiar_MiniQueen_execBeginMeleeAttack_Parms BeginMeleeAttack_Parms;

	this->ProcessEvent ( pFnBeginMeleeAttack, &BeginMeleeAttack_Parms, NULL );
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.CanWebTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UDunDefTargetableInterface* Target                         ( CPF_Parm )

bool UHeroEquipment_Familiar_MiniQueen::CanWebTarget ( class UDunDefTargetableInterface* Target )
{
	static UFunction* pFnCanWebTarget = NULL;

	if ( ! pFnCanWebTarget )
		pFnCanWebTarget = (UFunction*) UObject::GObjObjects()->Data[ 81174 ];

	UHeroEquipment_Familiar_MiniQueen_execCanWebTarget_Parms CanWebTarget_Parms;
	CanWebTarget_Parms.Target = Target;

	this->ProcessEvent ( pFnCanWebTarget, &CanWebTarget_Parms, NULL );

	return CanWebTarget_Parms.ReturnValue;
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.UpdateAI
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_MiniQueen::UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateAI = NULL;

	if ( ! pFnUpdateAI )
		pFnUpdateAI = (UFunction*) UObject::GObjObjects()->Data[ 81171 ];

	UHeroEquipment_Familiar_MiniQueen_execUpdateAI_Parms UpdateAI_Parms;
	UpdateAI_Parms.PlayerOwner = PlayerOwner;
	UpdateAI_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAI, &UpdateAI_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif