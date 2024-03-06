/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: CDT7_functions.h
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

// Function CDT7.DunDefProjectile_HarpoonDot.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_HarpoonDot::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 81213 ];

	ADunDefProjectile_HarpoonDot_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function CDT7.DunDefProjectile_HarpoonDot.SpawnDot
// [0x00020002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_HarpoonDot::SpawnDot ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnDot = NULL;

	if ( ! pFnSpawnDot )
		pFnSpawnDot = (UFunction*) UObject::GObjObjects()->Data[ 81209 ];

	ADunDefProjectile_HarpoonDot_execSpawnDot_Parms SpawnDot_Parms;
	memcpy ( &SpawnDot_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnDot_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnDot, &SpawnDot_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnEffect
// [0x00020002] 
// Parameters infos:

void ADunDefProjectile_StaffDot::SpawnEffect ( )
{
	static UFunction* pFnSpawnEffect = NULL;

	if ( ! pFnSpawnEffect )
		pFnSpawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 81249 ];

	ADunDefProjectile_StaffDot_execSpawnEffect_Parms SpawnEffect_Parms;

	this->ProcessEvent ( pFnSpawnEffect, &SpawnEffect_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.Landed
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Floor                          ( CPF_Parm )

void ADunDefProjectile_StaffDot::Landed ( struct FVector HitNormal, class AActor* Floor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 81246 ];

	ADunDefProjectile_StaffDot_execLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.Floor = Floor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.SpawnDot
// [0x00020002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_StaffDot::SpawnDot ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnDot = NULL;

	if ( ! pFnSpawnDot )
		pFnSpawnDot = (UFunction*) UObject::GObjObjects()->Data[ 81242 ];

	ADunDefProjectile_StaffDot_execSpawnDot_Parms SpawnDot_Parms;
	memcpy ( &SpawnDot_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnDot_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnDot, &SpawnDot_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.DoEffect
// [0x00020002] 
// Parameters infos:

void ADunDefProjectile_StaffDot::DoEffect ( )
{
	static UFunction* pFnDoEffect = NULL;

	if ( ! pFnDoEffect )
		pFnDoEffect = (UFunction*) UObject::GObjObjects()->Data[ 81241 ];

	ADunDefProjectile_StaffDot_execDoEffect_Parms DoEffect_Parms;

	this->ProcessEvent ( pFnDoEffect, &DoEffect_Parms, NULL );
};

// Function CDT7.DunDefProjectile_StaffDot.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ADunDefProjectile_StaffDot::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 81236 ];

	ADunDefProjectile_StaffDot_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function CDT7.DunDefWeapon_MagicStaff_Dot.ShootProjectiles
// [0x00824102] 
// Parameters infos:
// int                            theFireMode                    ( CPF_OptionalParm | CPF_Parm )

void ADunDefWeapon_MagicStaff_Dot::ShootProjectiles ( int theFireMode )
{
	static UFunction* pFnShootProjectiles = NULL;

	if ( ! pFnShootProjectiles )
		pFnShootProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 81256 ];

	ADunDefWeapon_MagicStaff_Dot_execShootProjectiles_Parms ShootProjectiles_Parms;
	ShootProjectiles_Parms.theFireMode = theFireMode;

	this->ProcessEvent ( pFnShootProjectiles, &ShootProjectiles_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetHealAmount
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetHealAmount ( )
{
	static UFunction* pFnGetHealAmount = NULL;

	if ( ! pFnGetHealAmount )
		pFnGetHealAmount = (UFunction*) UObject::GObjObjects()->Data[ 81467 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetHealAmount_Parms GetHealAmount_Parms;

	this->ProcessEvent ( pFnGetHealAmount, &GetHealAmount_Parms, NULL );

	return GetHealAmount_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.OnDunDefProjectileImpacted
// [0x00020002] 
// Parameters infos:
// class ADunDefProjectile*       aProjectile                    ( CPF_Parm )
// class AActor*                  impactedOn                     ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::OnDunDefProjectileImpacted ( class ADunDefProjectile* aProjectile, class AActor* impactedOn )
{
	static UFunction* pFnOnDunDefProjectileImpacted = NULL;

	if ( ! pFnOnDunDefProjectileImpacted )
		pFnOnDunDefProjectileImpacted = (UFunction*) UObject::GObjObjects()->Data[ 81462 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execOnDunDefProjectileImpacted_Parms OnDunDefProjectileImpacted_Parms;
	OnDunDefProjectileImpacted_Parms.aProjectile = aProjectile;
	OnDunDefProjectileImpacted_Parms.impactedOn = impactedOn;

	this->ProcessEvent ( pFnOnDunDefProjectileImpacted, &OnDunDefProjectileImpacted_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_PawnTookDamage
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::NotifyEquipment_PawnTookDamage ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser )
{
	static UFunction* pFnNotifyEquipment_PawnTookDamage = NULL;

	if ( ! pFnNotifyEquipment_PawnTookDamage )
		pFnNotifyEquipment_PawnTookDamage = (UFunction*) UObject::GObjObjects()->Data[ 81455 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execNotifyEquipment_PawnTookDamage_Parms NotifyEquipment_PawnTookDamage_Parms;
	NotifyEquipment_PawnTookDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyEquipment_PawnTookDamage_Parms.HitLocation, &HitLocation, 0xC );
	NotifyEquipment_PawnTookDamage_Parms.Damage = Damage;
	NotifyEquipment_PawnTookDamage_Parms.DamageType = DamageType;
	memcpy ( &NotifyEquipment_PawnTookDamage_Parms.Momentum, &Momentum, 0xC );
	NotifyEquipment_PawnTookDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnNotifyEquipment_PawnTookDamage, &NotifyEquipment_PawnTookDamage_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
// Parameters infos:
// int                            NotifyID                       ( CPF_Parm )
// class USkeletalMeshComponent*  equipmentSkelComp              ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_TowerDamageScaling::NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp )
{
	static UFunction* pFnNotifyEquipment_AnimNotifyAttachment = NULL;

	if ( ! pFnNotifyEquipment_AnimNotifyAttachment )
		pFnNotifyEquipment_AnimNotifyAttachment = (UFunction*) UObject::GObjObjects()->Data[ 81452 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execNotifyEquipment_AnimNotifyAttachment_Parms NotifyEquipment_AnimNotifyAttachment_Parms;
	NotifyEquipment_AnimNotifyAttachment_Parms.NotifyID = NotifyID;
	NotifyEquipment_AnimNotifyAttachment_Parms.equipmentSkelComp = equipmentSkelComp;

	this->ProcessEvent ( pFnNotifyEquipment_AnimNotifyAttachment, &NotifyEquipment_AnimNotifyAttachment_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShootProjectile
// [0x00824002] 
// Parameters infos:
// unsigned long                  bIsAltProjectile               ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::ShootProjectile ( unsigned long bIsAltProjectile )
{
	static UFunction* pFnShootProjectile = NULL;

	if ( ! pFnShootProjectile )
		pFnShootProjectile = (UFunction*) UObject::GObjObjects()->Data[ 81439 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execShootProjectile_Parms ShootProjectile_Parms;
	ShootProjectile_Parms.bIsAltProjectile = bIsAltProjectile;

	this->ProcessEvent ( pFnShootProjectile, &ShootProjectile_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetMuzzleTransformation
// [0x00420002] 
// Parameters infos:
// class USkeletalMeshComponent*  myMeshComp                     ( CPF_Parm | CPF_EditInline )
// struct FVector                 SpawnLocation                  ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRotation                  ( CPF_Parm | CPF_OutParm )

void UHeroEquipment_Familiar_TowerDamageScaling::GetMuzzleTransformation ( class USkeletalMeshComponent* myMeshComp, struct FVector* SpawnLocation, struct FRotator* SpawnRotation )
{
	static UFunction* pFnGetMuzzleTransformation = NULL;

	if ( ! pFnGetMuzzleTransformation )
		pFnGetMuzzleTransformation = (UFunction*) UObject::GObjObjects()->Data[ 81435 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetMuzzleTransformation_Parms GetMuzzleTransformation_Parms;
	GetMuzzleTransformation_Parms.myMeshComp = myMeshComp;

	this->ProcessEvent ( pFnGetMuzzleTransformation, &GetMuzzleTransformation_Parms, NULL );

	if ( SpawnLocation )
		memcpy ( SpawnLocation, &GetMuzzleTransformation_Parms.SpawnLocation, 0xC );

	if ( SpawnRotation )
		memcpy ( SpawnRotation, &GetMuzzleTransformation_Parms.SpawnRotation, 0xC );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetWeaponDamage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHeroEquipment_Familiar_TowerDamageScaling::GetWeaponDamage ( )
{
	static UFunction* pFnGetWeaponDamage = NULL;

	if ( ! pFnGetWeaponDamage )
		pFnGetWeaponDamage = (UFunction*) UObject::GObjObjects()->Data[ 81433 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetWeaponDamage_Parms GetWeaponDamage_Parms;

	this->ProcessEvent ( pFnGetWeaponDamage, &GetWeaponDamage_Parms, NULL );

	return GetWeaponDamage_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ApplyPrimaryDamageMultiplierDisplay
// [0x00420002] 
// Parameters infos:
// int                            StatValue                      ( CPF_Parm | CPF_OutParm )

void UHeroEquipment_Familiar_TowerDamageScaling::ApplyPrimaryDamageMultiplierDisplay ( int* StatValue )
{
	static UFunction* pFnApplyPrimaryDamageMultiplierDisplay = NULL;

	if ( ! pFnApplyPrimaryDamageMultiplierDisplay )
		pFnApplyPrimaryDamageMultiplierDisplay = (UFunction*) UObject::GObjObjects()->Data[ 81431 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execApplyPrimaryDamageMultiplierDisplay_Parms ApplyPrimaryDamageMultiplierDisplay_Parms;

	this->ProcessEvent ( pFnApplyPrimaryDamageMultiplierDisplay, &ApplyPrimaryDamageMultiplierDisplay_Parms, NULL );

	if ( StatValue )
		*StatValue = ApplyPrimaryDamageMultiplierDisplay_Parms.StatValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetEquipmentStatValue
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  equipmentStatType              ( CPF_Parm )
// unsigned long                  returnFinalAddedValue          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  includeStatLevelUp             ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetEquipmentStatValue ( unsigned char equipmentStatType, unsigned long returnFinalAddedValue, unsigned long includeStatLevelUp )
{
	static UFunction* pFnGetEquipmentStatValue = NULL;

	if ( ! pFnGetEquipmentStatValue )
		pFnGetEquipmentStatValue = (UFunction*) UObject::GObjObjects()->Data[ 81425 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetEquipmentStatValue_Parms GetEquipmentStatValue_Parms;
	GetEquipmentStatValue_Parms.equipmentStatType = equipmentStatType;
	GetEquipmentStatValue_Parms.returnFinalAddedValue = returnFinalAddedValue;
	GetEquipmentStatValue_Parms.includeStatLevelUp = includeStatLevelUp;

	this->ProcessEvent ( pFnGetEquipmentStatValue, &GetEquipmentStatValue_Parms, NULL );

	return GetEquipmentStatValue_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AddRandomizeValues
// [0x00024002] 
// Parameters infos:
// float                          equipmentQuality               ( CPF_Parm )
// unsigned long                  doResetStatsToTemplate         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDontUseMissionRandomizerMultiplier ( CPF_OptionalParm | CPF_Parm )
// float                          RandomizerMultiplierOverride   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsForShop                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowTranscendentGear         ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::AddRandomizeValues ( float equipmentQuality, unsigned long doResetStatsToTemplate, unsigned long bDontUseMissionRandomizerMultiplier, float RandomizerMultiplierOverride, unsigned long bIsForShop, unsigned long bAllowTranscendentGear )
{
	static UFunction* pFnAddRandomizeValues = NULL;

	if ( ! pFnAddRandomizeValues )
		pFnAddRandomizeValues = (UFunction*) UObject::GObjObjects()->Data[ 81418 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execAddRandomizeValues_Parms AddRandomizeValues_Parms;
	AddRandomizeValues_Parms.equipmentQuality = equipmentQuality;
	AddRandomizeValues_Parms.doResetStatsToTemplate = doResetStatsToTemplate;
	AddRandomizeValues_Parms.bDontUseMissionRandomizerMultiplier = bDontUseMissionRandomizerMultiplier;
	AddRandomizeValues_Parms.RandomizerMultiplierOverride = RandomizerMultiplierOverride;
	AddRandomizeValues_Parms.bIsForShop = bIsForShop;
	AddRandomizeValues_Parms.bAllowTranscendentGear = bAllowTranscendentGear;

	this->ProcessEvent ( pFnAddRandomizeValues, &AddRandomizeValues_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AllowStatLevelUp
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EQS                            ( CPF_Parm )
// int                            statSubIndex                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  IsInForgeUI                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreManaRequirement         ( CPF_OptionalParm | CPF_Parm )

bool UHeroEquipment_Familiar_TowerDamageScaling::AllowStatLevelUp ( unsigned char EQS, int statSubIndex, unsigned long IsInForgeUI, unsigned long bIgnoreManaRequirement )
{
	static UFunction* pFnAllowStatLevelUp = NULL;

	if ( ! pFnAllowStatLevelUp )
		pFnAllowStatLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 81412 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execAllowStatLevelUp_Parms AllowStatLevelUp_Parms;
	AllowStatLevelUp_Parms.EQS = EQS;
	AllowStatLevelUp_Parms.statSubIndex = statSubIndex;
	AllowStatLevelUp_Parms.IsInForgeUI = IsInForgeUI;
	AllowStatLevelUp_Parms.bIgnoreManaRequirement = bIgnoreManaRequirement;

	this->ProcessEvent ( pFnAllowStatLevelUp, &AllowStatLevelUp_Parms, NULL );

	return AllowStatLevelUp_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetAttackInterval
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIncludeShotsPerSecondExponent ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetAttackInterval ( unsigned long bIncludeShotsPerSecondExponent )
{
	static UFunction* pFnGetAttackInterval = NULL;

	if ( ! pFnGetAttackInterval )
		pFnGetAttackInterval = (UFunction*) UObject::GObjObjects()->Data[ 81409 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetAttackInterval_Parms GetAttackInterval_Parms;
	GetAttackInterval_Parms.bIncludeShotsPerSecondExponent = bIncludeShotsPerSecondExponent;

	this->ProcessEvent ( pFnGetAttackInterval, &GetAttackInterval_Parms, NULL );

	return GetAttackInterval_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetElementalDamageType
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* UHeroEquipment_Familiar_TowerDamageScaling::GetElementalDamageType ( )
{
	static UFunction* pFnGetElementalDamageType = NULL;

	if ( ! pFnGetElementalDamageType )
		pFnGetElementalDamageType = (UFunction*) UObject::GObjObjects()->Data[ 81407 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetElementalDamageType_Parms GetElementalDamageType_Parms;

	this->ProcessEvent ( pFnGetElementalDamageType, &GetElementalDamageType_Parms, NULL );

	return GetElementalDamageType_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileElementalDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileElementalDamage ( )
{
	static UFunction* pFnGetProjectileElementalDamage = NULL;

	if ( ! pFnGetProjectileElementalDamage )
		pFnGetProjectileElementalDamage = (UFunction*) UObject::GObjObjects()->Data[ 81405 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileElementalDamage_Parms GetProjectileElementalDamage_Parms;

	this->ProcessEvent ( pFnGetProjectileElementalDamage, &GetProjectileElementalDamage_Parms, NULL );

	return GetProjectileElementalDamage_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileDamage
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefProjectile*       projectileArch                 ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileDamage ( class ADunDefProjectile* projectileArch )
{
	static UFunction* pFnGetProjectileDamage = NULL;

	if ( ! pFnGetProjectileDamage )
		pFnGetProjectileDamage = (UFunction*) UObject::GObjObjects()->Data[ 81402 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileDamage_Parms GetProjectileDamage_Parms;
	GetProjectileDamage_Parms.projectileArch = projectileArch;

	this->ProcessEvent ( pFnGetProjectileDamage, &GetProjectileDamage_Parms, NULL );

	return GetProjectileDamage_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetProjectileSpeed
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefProjectile*       projectileArch                 ( CPF_OptionalParm | CPF_Parm )

float UHeroEquipment_Familiar_TowerDamageScaling::GetProjectileSpeed ( class ADunDefProjectile* projectileArch )
{
	static UFunction* pFnGetProjectileSpeed = NULL;

	if ( ! pFnGetProjectileSpeed )
		pFnGetProjectileSpeed = (UFunction*) UObject::GObjObjects()->Data[ 81399 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetProjectileSpeed_Parms GetProjectileSpeed_Parms;
	GetProjectileSpeed_Parms.projectileArch = projectileArch;

	this->ProcessEvent ( pFnGetProjectileSpeed, &GetProjectileSpeed_Parms, NULL );

	return GetProjectileSpeed_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetNumProjectiles
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHeroEquipment_Familiar_TowerDamageScaling::GetNumProjectiles ( )
{
	static UFunction* pFnGetNumProjectiles = NULL;

	if ( ! pFnGetNumProjectiles )
		pFnGetNumProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 81397 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetNumProjectiles_Parms GetNumProjectiles_Parms;

	this->ProcessEvent ( pFnGetNumProjectiles, &GetNumProjectiles_Parms, NULL );

	return GetNumProjectiles_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredSphereRotationalPlacement
// [0x00420002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USkeletalMeshComponent*  myMeshComp                     ( CPF_Parm | CPF_EditInline )
// class ADunDefPlayer*           myPlayer                       ( CPF_Parm )
// unsigned char                  HasTarget                      ( CPF_Parm | CPF_OutParm )

struct FRotator UHeroEquipment_Familiar_TowerDamageScaling::GetDesiredSphereRotationalPlacement ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer, unsigned char* HasTarget )
{
	static UFunction* pFnGetDesiredSphereRotationalPlacement = NULL;

	if ( ! pFnGetDesiredSphereRotationalPlacement )
		pFnGetDesiredSphereRotationalPlacement = (UFunction*) UObject::GObjObjects()->Data[ 81392 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetDesiredSphereRotationalPlacement_Parms GetDesiredSphereRotationalPlacement_Parms;
	GetDesiredSphereRotationalPlacement_Parms.myMeshComp = myMeshComp;
	GetDesiredSphereRotationalPlacement_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetDesiredSphereRotationalPlacement, &GetDesiredSphereRotationalPlacement_Parms, NULL );

	if ( HasTarget )
		*HasTarget = GetDesiredSphereRotationalPlacement_Parms.HasTarget;

	return GetDesiredSphereRotationalPlacement_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetDesiredDirection
// [0x00020002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USkeletalMeshComponent*  myMeshComp                     ( CPF_Parm | CPF_EditInline )
// class ADunDefPlayer*           myPlayer                       ( CPF_Parm )

struct FRotator UHeroEquipment_Familiar_TowerDamageScaling::GetDesiredDirection ( class USkeletalMeshComponent* myMeshComp, class ADunDefPlayer* myPlayer )
{
	static UFunction* pFnGetDesiredDirection = NULL;

	if ( ! pFnGetDesiredDirection )
		pFnGetDesiredDirection = (UFunction*) UObject::GObjObjects()->Data[ 81388 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetDesiredDirection_Parms GetDesiredDirection_Parms;
	GetDesiredDirection_Parms.myMeshComp = myMeshComp;
	GetDesiredDirection_Parms.myPlayer = myPlayer;

	this->ProcessEvent ( pFnGetDesiredDirection, &GetDesiredDirection_Parms, NULL );

	return GetDesiredDirection_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.ShutDown
// [0x00024002] 
// Parameters infos:
// unsigned long                  isDestruction                  ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::ShutDown ( unsigned long isDestruction )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 81386 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execShutDown_Parms ShutDown_Parms;
	ShutDown_Parms.isDestruction = isDestruction;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.AttachedComponent
// [0x00020002] 
// Parameters infos:
// class UPrimitiveComponent*     aComp                          ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_TowerDamageScaling::AttachedComponent ( class UPrimitiveComponent* aComp )
{
	static UFunction* pFnAttachedComponent = NULL;

	if ( ! pFnAttachedComponent )
		pFnAttachedComponent = (UFunction*) UObject::GObjObjects()->Data[ 81384 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execAttachedComponent_Parms AttachedComponent_Parms;
	AttachedComponent_Parms.aComp = aComp;

	this->ProcessEvent ( pFnAttachedComponent, &AttachedComponent_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateAI
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateAI = NULL;

	if ( ! pFnUpdateAI )
		pFnUpdateAI = (UFunction*) UObject::GObjObjects()->Data[ 81381 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execUpdateAI_Parms UpdateAI_Parms;
	UpdateAI_Parms.PlayerOwner = PlayerOwner;
	UpdateAI_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAI, &UpdateAI_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.UpdateDelayedShots
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::UpdateDelayedShots ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateDelayedShots = NULL;

	if ( ! pFnUpdateDelayedShots )
		pFnUpdateDelayedShots = (UFunction*) UObject::GObjObjects()->Data[ 81377 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execUpdateDelayedShots_Parms UpdateDelayedShots_Parms;
	UpdateDelayedShots_Parms.PlayerOwner = PlayerOwner;
	UpdateDelayedShots_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateDelayedShots, &UpdateDelayedShots_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.TickedByPawn
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_TowerDamageScaling::TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnTickedByPawn = NULL;

	if ( ! pFnTickedByPawn )
		pFnTickedByPawn = (UFunction*) UObject::GObjObjects()->Data[ 81374 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execTickedByPawn_Parms TickedByPawn_Parms;
	TickedByPawn_Parms.PlayerOwner = PlayerOwner;
	TickedByPawn_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickedByPawn, &TickedByPawn_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestTarget
// [0x00820002] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UDunDefTargetableInterface* UHeroEquipment_Familiar_TowerDamageScaling::GetBestTarget ( )
{
	static UFunction* pFnGetBestTarget = NULL;

	if ( ! pFnGetBestTarget )
		pFnGetBestTarget = (UFunction*) UObject::GObjObjects()->Data[ 81363 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetBestTarget_Parms GetBestTarget_Parms;

	this->ProcessEvent ( pFnGetBestTarget, &GetBestTarget_Parms, NULL );

	return GetBestTarget_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_TowerDamageScaling.GetBestHealingTarget
// [0x00024002] 
// Parameters infos:
// class UDunDefTargetableInterface* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          CheckHealthPercentageThreshold ( CPF_OptionalParm | CPF_Parm )

class UDunDefTargetableInterface* UHeroEquipment_Familiar_TowerDamageScaling::GetBestHealingTarget ( float CheckHealthPercentageThreshold )
{
	static UFunction* pFnGetBestHealingTarget = NULL;

	if ( ! pFnGetBestHealingTarget )
		pFnGetBestHealingTarget = (UFunction*) UObject::GObjObjects()->Data[ 81354 ];

	UHeroEquipment_Familiar_TowerDamageScaling_execGetBestHealingTarget_Parms GetBestHealingTarget_Parms;
	GetBestHealingTarget_Parms.CheckHealthPercentageThreshold = CheckHealthPercentageThreshold;

	this->ProcessEvent ( pFnGetBestHealingTarget, &GetBestHealingTarget_Parms, NULL );

	return GetBestHealingTarget_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AttachedComponent
// [0x00020002] 
// Parameters infos:
// class UPrimitiveComponent*     aComp                          ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_Melee_TowerScaling::AttachedComponent ( class UPrimitiveComponent* aComp )
{
	static UFunction* pFnAttachedComponent = NULL;

	if ( ! pFnAttachedComponent )
		pFnAttachedComponent = (UFunction*) UObject::GObjObjects()->Data[ 81532 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execAttachedComponent_Parms AttachedComponent_Parms;
	AttachedComponent_Parms.aComp = aComp;

	this->ProcessEvent ( pFnAttachedComponent, &AttachedComponent_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.NotifyEquipment_AnimNotifyAttachment
// [0x00020002] 
// Parameters infos:
// int                            NotifyID                       ( CPF_Parm )
// class USkeletalMeshComponent*  equipmentSkelComp              ( CPF_Parm | CPF_EditInline )

void UHeroEquipment_Familiar_Melee_TowerScaling::NotifyEquipment_AnimNotifyAttachment ( int NotifyID, class USkeletalMeshComponent* equipmentSkelComp )
{
	static UFunction* pFnNotifyEquipment_AnimNotifyAttachment = NULL;

	if ( ! pFnNotifyEquipment_AnimNotifyAttachment )
		pFnNotifyEquipment_AnimNotifyAttachment = (UFunction*) UObject::GObjObjects()->Data[ 81529 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execNotifyEquipment_AnimNotifyAttachment_Parms NotifyEquipment_AnimNotifyAttachment_Parms;
	NotifyEquipment_AnimNotifyAttachment_Parms.NotifyID = NotifyID;
	NotifyEquipment_AnimNotifyAttachment_Parms.equipmentSkelComp = equipmentSkelComp;

	this->ProcessEvent ( pFnNotifyEquipment_AnimNotifyAttachment, &NotifyEquipment_AnimNotifyAttachment_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.ShutDown
// [0x00024002] 
// Parameters infos:
// unsigned long                  isDestruction                  ( CPF_OptionalParm | CPF_Parm )

void UHeroEquipment_Familiar_Melee_TowerScaling::ShutDown ( unsigned long isDestruction )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 81527 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execShutDown_Parms ShutDown_Parms;
	ShutDown_Parms.isDestruction = isDestruction;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAI
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_Melee_TowerScaling::UpdateAI ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnUpdateAI = NULL;

	if ( ! pFnUpdateAI )
		pFnUpdateAI = (UFunction*) UObject::GObjObjects()->Data[ 81524 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execUpdateAI_Parms UpdateAI_Parms;
	UpdateAI_Parms.PlayerOwner = PlayerOwner;
	UpdateAI_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAI, &UpdateAI_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetHealMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_Melee_TowerScaling::GetHealMultiplier ( )
{
	static UFunction* pFnGetHealMultiplier = NULL;

	if ( ! pFnGetHealMultiplier )
		pFnGetHealMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 81522 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execGetHealMultiplier_Parms GetHealMultiplier_Parms;

	this->ProcessEvent ( pFnGetHealMultiplier, &GetHealMultiplier_Parms, NULL );

	return GetHealMultiplier_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.GetMomentumMultiplier
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UHeroEquipment_Familiar_Melee_TowerScaling::GetMomentumMultiplier ( )
{
	static UFunction* pFnGetMomentumMultiplier = NULL;

	if ( ! pFnGetMomentumMultiplier )
		pFnGetMomentumMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 81520 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execGetMomentumMultiplier_Parms GetMomentumMultiplier_Parms;

	this->ProcessEvent ( pFnGetMomentumMultiplier, &GetMomentumMultiplier_Parms, NULL );

	return GetMomentumMultiplier_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.UpdateAttackSwing
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_Melee_TowerScaling::UpdateAttackSwing ( float DeltaTime )
{
	static UFunction* pFnUpdateAttackSwing = NULL;

	if ( ! pFnUpdateAttackSwing )
		pFnUpdateAttackSwing = (UFunction*) UObject::GObjObjects()->Data[ 81505 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execUpdateAttackSwing_Parms UpdateAttackSwing_Parms;
	UpdateAttackSwing_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAttackSwing, &UpdateAttackSwing_Parms, NULL );
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.AddToSwingHurtList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ADunDefPlayer*           myOwner                        ( CPF_Parm )
// class AActor*                  newEntry                       ( CPF_Parm )

bool UHeroEquipment_Familiar_Melee_TowerScaling::AddToSwingHurtList ( class ADunDefPlayer* myOwner, class AActor* newEntry )
{
	static UFunction* pFnAddToSwingHurtList = NULL;

	if ( ! pFnAddToSwingHurtList )
		pFnAddToSwingHurtList = (UFunction*) UObject::GObjObjects()->Data[ 81501 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execAddToSwingHurtList_Parms AddToSwingHurtList_Parms;
	AddToSwingHurtList_Parms.myOwner = myOwner;
	AddToSwingHurtList_Parms.newEntry = newEntry;

	this->ProcessEvent ( pFnAddToSwingHurtList, &AddToSwingHurtList_Parms, NULL );

	return AddToSwingHurtList_Parms.ReturnValue;
};

// Function CDT7.HeroEquipment_Familiar_Melee_TowerScaling.TickedByPawn
// [0x00020002] 
// Parameters infos:
// class ADunDefPlayer*           PlayerOwner                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UHeroEquipment_Familiar_Melee_TowerScaling::TickedByPawn ( class ADunDefPlayer* PlayerOwner, float DeltaTime )
{
	static UFunction* pFnTickedByPawn = NULL;

	if ( ! pFnTickedByPawn )
		pFnTickedByPawn = (UFunction*) UObject::GObjObjects()->Data[ 81498 ];

	UHeroEquipment_Familiar_Melee_TowerScaling_execTickedByPawn_Parms TickedByPawn_Parms;
	TickedByPawn_Parms.PlayerOwner = PlayerOwner;
	TickedByPawn_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickedByPawn, &TickedByPawn_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif