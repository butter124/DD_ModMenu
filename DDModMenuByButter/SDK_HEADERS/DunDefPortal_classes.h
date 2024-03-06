/*
#############################################################################################
# Dungeon Defender (v8.7.2) SDK
# Generated with TheFeckless UE3 SDK Generator v8.7.2
# ========================================================================================= #
# File: DunDefPortal_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class DunDefPortal.DunDefDamageType_Hearts
// 0x0000 (0x00D4 - 0x00D4)
class UDunDefDamageType_Hearts : public UDunDefDamageType_ForceKnockBack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84609 ];

		return pClassPointer;
	};

};

UClass* UDunDefDamageType_Hearts::pClassPointer = NULL;

// Class DunDefPortal.DunDefPortalNode
// 0x004C (0x0320 - 0x02D4)
class ADunDefPortalNode : public ADunDefEmitterSpawnable
{
public:
	class ADunDefEmitterSpawnable*                     TeleportedEffect;                                 		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefEmitterSpawnable*                     ProjectileTeleportedEffect;                       		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USceneCapturePortalComponent*                MyPortalComponent;                                		// 0x02DC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   PortalMaterial;                                   		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   EnterPortalSound;                                 		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ExitPortalSound;                                  		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   CreationSound;                                    		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeletionSound;                                    		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReteleportInterval;                               		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   PortalMaterialInstance;                           		// 0x02F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ADunDefPortalNode*                           LastSibling;                                      		// 0x02FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIsActive : 1;                                    		// 0x0300 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bFadingMICUp : 1;                                 		// 0x0300 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDeleted : 1;                                     		// 0x0300 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bPortalEffectEnabled : 1;                         		// 0x0300 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	class AActor*                                      IgnoreActor;                                      		// 0x0304 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FadingMICValue;                                   		// 0x0308 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastFadingMICValue;                               		// 0x030C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FRecentTeleport >                   RecentTeleports;                                  		// 0x0310 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class ADunDefWeapon_PortalGun*                     InstigatorWeapon;                                 		// 0x031C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84615 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
	void eventTick ( float DeltaTime );
	bool eventAllowSpawn ( class AActor* theArchetype, struct FVector theLoc, struct FRotator theRot );
	void FadeOut ( float theLightFadeOutTime );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ADunDefPortalNode::pClassPointer = NULL;

// Class DunDefPortal.DunDefWeapon_PortalGun
// 0x00AA (0x0594 - 0x04EA)
class ADunDefWeapon_PortalGun : public ADunDefWeapon
{
public:
	struct FName                                       CustomAnimNodeName;                               		// 0x04EC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PrimaryShootAnimName;                             		// 0x04F4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AltShootAnimName;                                 		// 0x04FC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PrimaryCancelAnimName;                            		// 0x0504 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AltCancelAnimName;                                		// 0x050C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ADunDefPortalNode*                           PortalNodeTemplates[ 0x2 ];                       		// 0x0514 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      AltTemplate;                                      		// 0x051C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PortalFireInterval;                               		// 0x0520 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PortalKillRadius;                                 		// 0x0524 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AmmoRegenInterval;                                		// 0x0528 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AmmoRegenAmount;                                  		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AmmoConsumeInterval;                              		// 0x0530 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AmmoConsumeAmount;                                		// 0x0534 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullDrainRegenTimePenalty;                        		// 0x0538 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                PrimaryFireColor;                                 		// 0x053C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                AltFireColor;                                     		// 0x054C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      PrimaryFireLightColor;                            		// 0x055C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      AltFireLightColor;                                		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    InUseParticleComponent;                           		// 0x0564 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   NotAllowedToPortalSound;                          		// 0x0568 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTextureRenderTarget2D*                      PortalTextureTargets[ 0x2 ];                      		// 0x056C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UPointLightComponent*                        MyLightComp;                                      		// 0x0574 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastFireTimes[ 0x2 ];                             		// 0x0578 (0x0008) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                   		// 0x0580 (0x0004) [0x0000000000000000]              
	class ADunDefPortalNode*                           PortalNodes[ 0x2 ];                               		// 0x0584 (0x0008) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                CurrentAmmo;                                      		// 0x058C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastRegenTime;                                    		// 0x0590 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84622 ];

		return pClassPointer;
	};

	bool HitBlockingVolume ( struct FVector Start, struct FVector End );
	bool IsInAnyPortalBlockingVolume ( struct FVector aPoint );
	void eventTick ( float DeltaTime );
	bool GetReloadingColors ( struct FLinearColor* BarColor, struct FLinearColor* TextColor );
	bool HasBothPortals ( );
	void ClearPortal ( int portalIndex );
	void eventDestroyed ( );
	void DetachWeapon ( );
	void HolderDied ( );
	void CustomFire ( int theFireMode );
	void ShootProjectiles ( int theFireMode );
	bool HasAnyAmmo ( );
	void BeginFire ( unsigned char FireModeNum );
	class ADunDefPortalNode* GetSiblingPortal ( class ADunDefPortalNode* aPortal, class ADunDefPortalNode** aSibling, class UTextureRenderTarget2D** portalTextureTarget );
	void eventPostBeginPlay ( );
	void PlayCancelAnimation ( unsigned long bIsPrimary );
	void PlayedShootAnimation ( unsigned long isBigShot );
	int GetTotalAmmo ( );
	int GetMaxAmmo ( );
	int GetAmmo ( );
	float GetAmmoPercent ( );
	bool UsesAmmo ( );
	void ExecReplicatedFunction ( struct FName FunctionName, struct FName nameParam1, struct FName nameParam2, class AActor* actorParam1, class AActor* actorParam2, struct FVector vecParam1, struct FRotator rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, struct FString stringParam1, class UObject* objectParam1 );
};

UClass* ADunDefWeapon_PortalGun::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif