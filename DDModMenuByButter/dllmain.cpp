#include "Header.h"
#include "ImGui/imgui.h"
// WARNING THIS CODE IS REALLY REALLY BAD
// IT IS THE PRODUCT OF SUPPORTING THIS MENU FOR A FEW YEARS
// IF YOU ARE TRYING LEARN GOOD CODING PRATICES FROM THIS DONT!
// IF YOU ARE TRYING TO UPDATE THIS CODE GOOD LUCK

// IF THE GAME UPDATES A NEW SDK WILL NEED TO BE GENERATED AND FIXED UP


bool bDebug				 = false; //internal debug
bool ConsoleDebug		 = false;
bool LogToFile			 = false;//D:\Logging\DDCheck.txt
bool bShowDEMOWINDOW	 = false;
bool ImGuiDebugMenu		 = false;

bool UnreleasedCheats = false; // cheats that will prob crash the game



// ProcessEvent Sig
#define ProcessEvent_Pattern	"\x74\x00\x83\xC0\x07\x83\xE0\xF8\xE8\x00\x00\x00\x00\x8B\xC4"
#define ProcessEvent_Mask		"x?xxxxxxx????xx"

#define ScoreHook_Pattern		"\x01\x03\x8b\x1b\x8b\x4c\x24\x14"
#define ScoreHook_Mask			"xxxxxxxx"

std::string ModMenuName = "Rebirth Final";
const wchar_t* ButterStringData = L"Butter";
FString ButterString = (wchar_t*)ButterStringData;


DWORD ScoreHookAddrOffset = (FindPattern((unsigned long)miGame.lpBaseOfDll, miGame.SizeOfImage,
                                         (unsigned char*)ScoreHook_Pattern, (char*)ScoreHook_Mask));

DWORD dllBase = (DWORD)GetModuleHandleA(NULL);
HWND gameHWND = FindWindow(NULL, "Dungeon Defenders");

// ue3 procevent hookProcessEvent_Pattern
DWORD BaseProcessEventAddress = (FindPattern((unsigned long)miGame.lpBaseOfDll, miGame.SizeOfImage,
                                             (unsigned char*)ProcessEvent_Pattern, (char*)ProcessEvent_Mask));
DWORD ProcessEventAddress = BaseProcessEventAddress - 0xe8;
typedef void(__thiscall* tProcessEvent)(UObject*, UFunction*, void*, void*);
tProcessEvent ProcessEvent = (tProcessEvent)ProcessEventAddress;
void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult);
// dx9 endscene hook
typedef HRESULT(APIENTRY* tEndScene)(LPDIRECT3DDEVICE9 pDevice);
tEndScene oScene;
HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice);
// menu hook allows inputs
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wPAram, LPARAM lParam);
typedef LRESULT(CALLBACK* WNDPROC)(const HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam);
WNDPROC oWndProc;
// hooks
void ScoreHook();
Hooking ProcEventHook((void*)ProcessEventAddress, HookedPE, 5);
Hooking EndSceneHook((void*)NULL, hkEndScene, 7);
Hooking ScoreHookObj((void*)(ScoreHookAddrOffset), ScoreHook, 8);

// BGRA
FColor fRed = { 0, 0, 255, 255 };
FColor fBlue = { 255, 0, 0, 255 };
FColor fCyan = { 255, 255, 0, 255 };
FColor fGreen = { 0, 255, 0, 255 };
FColor fWhite = { 255, 255, 255, 255 };




UDunDef_SeqAct_GiveEquipmentToPlayers* GEP = nullptr;
TArray< FGiveEquipmentEntry >   LastItemEntry;
FGiveEquipmentEntry tmpEntry;


UGameEngine*												gameEngine			= nullptr;  //EntityList
APlayerController*											controller			= nullptr;  //player controller/hero
ADunDefGameReplicationInfo*									plevel				= nullptr;  //level up
UDunDef_SeqAct_SetWaveNumber*								waveNum				= nullptr;  //wavNum
UDunDefHeroManager*											heroManager			= nullptr;  //Add items to box
ADunDefPlayer*												player				= nullptr;  //might not be needed
AMain*														pMain				= nullptr;  //Enemys Left for wave
AHUD*														hud					= nullptr;
UHeroEquipment*												LastDroppedWep		= nullptr;
FVector														VacuumHackPos		= { 0, 0, 0 };
FVector														NewLocation			= { 0, 0, 0 };
UDunDefSceneClient*											sceneClient			= nullptr;

// MENU
int ToggleKey                                                         = VK_INSERT;
bool bToggleKeyChangeRequest                                          = FALSE;
int EndKey                                                            = VK_END;
bool bEndKeyKeyChangeRequest                                          = FALSE;
bool bGetNewTeleportLocation                                          = FALSE;
bool bTeleportPlayer                                                  = FALSE;
int NewTeleportKey                                                    = VK_F3;
bool NewTeleportKeyKeyChangeRequest                                   = FALSE;
int TeleportPlayerKey                                                 = VK_F4;
bool TeleportPlayerKeyKeyChangeRequest                                = FALSE;



//imgui globals
int FilterAmmount = 500;

enum MenuOptions
{
  CHEATS,
  ESP,
  LOBBY,
  SETTINGS,
  ITEM_MODDING
};
MenuOptions MenuTab        = CHEATS;
bool ShowMenu              = TRUE;
bool bEspEnabled           = FALSE;
bool bEspLines             = FALSE;
bool bEspHealth            = FALSE;
bool bEspBox               = FALSE;
bool bGodMode              = FALSE;
bool bVacuumHack           = FALSE;
bool bShowVacuumPos        = FALSE;
bool bShowTeleportPos      = FALSE;
bool bLootShower           = FALSE;
bool bAutoPickUp           = FALSE;
bool bAutoKill             = FALSE;
bool bWaveSkip             = FALSE;
bool bModDroppedItem       = FALSE;
bool bKillOneToAdvance     = FALSE;
bool bLobbyGravity         = FALSE;
bool bLobbyScale           = FALSE;
bool bLobbyJump            = FALSE;
bool bMultiplyReward       = FALSE;
bool bPersonalTowers       = FALSE;
bool bUnlimManaBuild       = FALSE;
bool bUnlimManaShop        = FALSE;
bool bNoCD                 = FALSE;
bool bScaleEnemy           = FALSE;
bool bDrawRoute            = FALSE;
bool bLockLevelAt          = FALSE;
bool ChangeRewards         = FALSE;
bool bAutoXp               = FALSE;
bool bManaTrail            = FALSE;
bool bTeleportPlayersSafe  = FALSE;
bool bTeleportPlayersPoint = FALSE;
bool bEnableCosmetics      = FALSE;

int manaCount         = 9000;
int MultiplyRewardsBy = 10;

float Gravity         = 0;
float JumpHeight      = 2000.0f;
float DrawScale       = 1.0f;
float eDrawScale      = 1.0f;
int WaveSkipToNum     = 0;

int newScore          = 0;
bool UpdateScore      = false;

std::string refreshIndicator = "";
bool bRefreshAllItemVec = false;
bool * ItemSelectable = nullptr;
bool bGiveItems = false;
std::vector<std::string> AllItems;
std::vector<ACosmeticSetBonus*> Cosmetics;

//copy items on floor needed for thread safety
//this thread safety is no longer needed due to fixing the sdk
std::vector<UObject*> allDroppedEquipment;
std::queue<UHeroEquipment*> giveDroppedEquipment;
bool bRefreshDroppedEquipment = false;

//spawn enemys needed for thread safety
bool bRefreshEnemyEntrys = false;
std::vector< UObject* > enemys;
std::vector< UObject* > Spawner;
std::vector< std::string > enemyNames;
std::queue<int> enemysToSpawn;


//thread safety items
TArray<UHeroEquipment*>* PlayerEquipment;
std::vector<std::pair<std::string&,UObject*>> q_ThreadSafeStringRequests;


//end program
bool end = true;

//auto pickup settings
enum Stats
{
  eUnknown,
  eHHealth,
  eHSpeed,
  eHDamage,
  eHCast,
  Ability1,
  Ability2,
  eTHealth,
  eTSpeed,
  eTDamage,
  eTRange
};
const char* ItemQualitys[] = {
  "None",
  "Mythical",
  "Transcendent",
  "Supreme",
  "Ultimate",
  "Ultimate93",
  "Ultimate+",
  "Ultimate++" };



int ItemFilterQuality;
int ItemBoxFilterStats[11];
int ItemPickUpFilterStats[11];

int ItemsAdded, TotalItemsCkd;


void* d3d9Device[119];
LPDIRECT3DDEVICE9 d3Device;
LRESULT __stdcall WndProc(const HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam) {

  if (ShowMenu)
    if (ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lparam))
      return TRUE;


  return CallWindowProc(oWndProc, hwnd, uMsg, wParam, lparam);
}
UObject* GetInstanceByName(UClass* Class,std::string name)
{
  if (!UObject::GObjObjects())
    return 0;

  static UObject* ObjectInstance = NULL;

  for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
  {
    UObject* CheckObject = UObject::GObjObjects()->Data[i];
    if (CheckObject && CheckObject->IsA(Class))
    {
      std::string newname = CheckObject->GetFullName();
      if (!strstr(newname.c_str(), "Default"))
      {
        if(newname.find(name)!=std::string::npos)
        {
          ObjectInstance = CheckObject;
          return ObjectInstance;
        }
      }
    }
  }
  return ObjectInstance;
};
UObject* GetInstanceOf(UClass* Class)
{
  if (!UObject::GObjObjects())
    return 0;

  static UObject* ObjectInstance = NULL;

  for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
  {
    UObject* CheckObject = UObject::GObjObjects()->Data[i];
    if (CheckObject && CheckObject->IsA(Class))
    {
      if (!strstr(CheckObject->GetFullName(), "Default"))
      {
        ObjectInstance = CheckObject;

      }
    }
  }
  return ObjectInstance;
};
std::vector<UObject*> GetAllInstanceOf(UClass* Class)
{
  std::vector<UObject*> ret;
  if (!UObject::GObjObjects())
    return ret;
  static UObject* ObjectInstance = NULL;

  for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
  {
    UObject* CheckObject = UObject::GObjObjects()->Data[i];
    if (CheckObject && CheckObject->IsA(Class))
    {
      if (!strstr(CheckObject->GetFullName(), "Default"))
      {
        ObjectInstance = CheckObject;
        ret.push_back(ObjectInstance);
      }
    }
  }
  return ret;
}
bool GetDevicePointer(void** pTable, size_t size) {

  if (!pTable)
    return false;

  IDirect3D9* pD3D = Direct3DCreate9(D3D_SDK_VERSION);

  if (!pD3D)
    return false;

  IDirect3DDevice9* pDummyDevice = NULL;

  // options to create dummy device
  D3DPRESENT_PARAMETERS d3dpp = {};
  d3dpp.Windowed = true;
  d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;


  d3dpp.hDeviceWindow = gameHWND;

  HRESULT dummyDeviceCreated = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3dpp.hDeviceWindow, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pDummyDevice);

  if (dummyDeviceCreated != S_OK)
  {
    // may fail in windowed fullscreen mode, trying again with windowed mode
    d3dpp.Windowed = !d3dpp.Windowed;

    dummyDeviceCreated = pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, d3dpp.hDeviceWindow, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pDummyDevice);

    if (dummyDeviceCreated != S_OK)
    {
      pD3D->Release();
      return false;
    }
  }

  memcpy(pTable, *reinterpret_cast<void***>(pDummyDevice), size);

  pDummyDevice->Release();
  pD3D->Release();
  return true;
}
void MaxWeapon(UHeroEquipment*_Weap)
{
  _Weap->NameIndex_QualityDescriptor = 19;


  _Weap->Level = 69420;
  _Weap->MaxEquipmentLevel = 69420;
  _Weap->MyRating = 9000000.0f;
  _Weap->MyRatingPercent = 9000000.0f;


  _Weap->StatModifiers[eHHealth] = 9000;
  _Weap->StatModifiers[eHSpeed] = 9000;
  _Weap->StatModifiers[eHDamage] = 9000;
  _Weap->StatModifiers[eHCast] = 9000;
  _Weap->StatModifiers[Ability1] = 9000;
  _Weap->StatModifiers[Ability2] = 9000;
  _Weap->StatModifiers[eTHealth] = 9000;
  _Weap->StatModifiers[eTSpeed] = 9000;
  _Weap->StatModifiers[eTDamage] = 9000;
  _Weap->StatModifiers[eTRange] = 9000;
  (_Weap->DamageReductions[0].PercentageReduction) = 9000;
  (_Weap->DamageReductions[1].PercentageReduction) = 9000;
  (_Weap->DamageReductions[2].PercentageReduction) = 9000;
  (_Weap->DamageReductions[3].PercentageReduction) = 9000;
  (_Weap->WeaponDamageBonus) = 0x1fffffff;
  (_Weap->WeaponNumberOfProjectilesBonus) = 20;
  (_Weap->WeaponSpeedOfProjectilesBonus) = 9000;
  (_Weap->WeaponAdditionalDamageAmount) = 9000;
  _Weap->WeaponDrawScaleMultiplier = 1.0f;


  _Weap->MaxRandomElementalDamageMultiplier = 9000;
  _Weap->WeaponSwingSpeedMultiplier = 3;
  (_Weap->WeaponReloadSpeedBonus) = 9000;
  (_Weap->WeaponKnockbackBonus) = 9000;
  (_Weap->WeaponAltDamageBonus) = 9000;
  (_Weap->WeaponBlockingBonus) = 9000;
  (_Weap->WeaponClipAmmoBonus) = 9000;
  (_Weap->AdditionalAllowedUpgradeResistancePoints) = 9000;
  (_Weap->RequirementLevelOverride) = 9000;
  (_Weap->WeaponChargeSpeedBonus) = 9000;
  (_Weap->WeaponShotsPerSecondBonus) = 2;




  _Weap->PrimaryColorOverride.R = (rand() % 180) - 90;
  _Weap->PrimaryColorOverride.G = (rand() % 180) - 90;
  _Weap->PrimaryColorOverride.B = (rand() % 180) - 90;
  _Weap->SecondaryColorOverride.R = (rand() % 180) - 90;
  _Weap->SecondaryColorOverride.G = (rand() % 180) - 90;
  _Weap->SecondaryColorOverride.B = (rand() % 180) - 90;




}
bool CheckVarsForNull()
{
  // there is prob a way better way to do this
  if (!gameEngine)
  {
    if (ConsoleDebug)
      std::cout << "gameEngine Not Found\n";
    return FALSE;
  }
  if (!gameEngine->GamePlayers.Data[0])
  {
    if (ConsoleDebug)
      std::cout << "gameEngine Game Player Data Not Found\n";
    return FALSE;
  }
  if (!gameEngine->GamePlayers.Data[0]->Actor)
  {
    if (ConsoleDebug)
      std::cout << "Player Object Not Found\n";
    return FALSE;
  }
  controller = gameEngine->GamePlayers.Data[0]->Actor;


  if (!controller)
  {
    if (ConsoleDebug)
      std::cout << "Player Controller Not Found\n";
    return FALSE;
  }
  if (!controller->Pawn)
  {
    if (allDroppedEquipment.size())
    {
      allDroppedEquipment.clear();
    }
    if (ConsoleDebug)
      std::cout << "Player Pawn Not Found\n";
    GEP = nullptr;
    return FALSE;
  }
  if (!controller->Pawn->WorldInfo)
  {
    if (ConsoleDebug)
      std::cout << "Player WorldInfo Not Found\n";
    GEP = nullptr;
    return FALSE;
  }
  if (!controller->Pawn->WorldInfo->PawnList)
  {
    if (ConsoleDebug)
      std::cout << "Ent List Not Found\n";
    GEP = nullptr;
    return FALSE;
  }
  if (!heroManager)
  {
    if (ConsoleDebug)
      std::cout << "heroManager Not Found\n";
    GEP = nullptr;
    return FALSE;
  }


  return TRUE;
}
ADunDefPawn* GetFirstPawnInList()
{
  return (ADunDefPawn*)controller->Pawn->WorldInfo->PawnList;
}
TArray<ULocalPlayer*>* GetPlayerControllers()
{
  if (!CheckVarsForNull())
    return nullptr;
  //_Inarray = .Data;
  return &(gameEngine->GamePlayers);
}
void FStringTostring(std::string &_stringChanging, FString _string)
{

  if (!_string.Data)
  {
    return;
  }

  std::wstring tmpWString(_string.Data);
  std::string tmp(tmpWString.begin(), tmpWString.end());
  _stringChanging = tmp.c_str();
}
FString StringToFString(std::string _s)
{
  FString ret;
  for (int i = 0; i < _s.size(); i++)
  {
    ret.Add(_s.c_str()[i]);
  }
  return ret;
}

void CopyItem(UHeroEquipment* to, UHeroEquipment* from)
{
  memcpy(to->StatModifiers, from->StatModifiers, 11 * sizeof(int));//to->StatModifiers = from->StatModifiers;
  memcpy(to->DamageReductions, from->DamageReductions, 4 * sizeof(FDamageReduction));// to->DamageReductions = from->DamageReductions;
  to->WeaponDamageBonus = from->WeaponDamageBonus;
  to->WeaponNumberOfProjectilesBonus = from->WeaponNumberOfProjectilesBonus;
  to->WeaponSpeedOfProjectilesBonus = from->WeaponSpeedOfProjectilesBonus;
  to->WeaponAdditionalDamageType = from->WeaponAdditionalDamageType;
  to->WeaponAdditionalDamageAmount = from->WeaponAdditionalDamageAmount;
  to->WeaponDrawScaleMultiplier = from->WeaponDrawScaleMultiplier;
  to->MaxRandomElementalDamageMultiplier = from->MaxRandomElementalDamageMultiplier;
  to->WeaponSwingSpeedMultiplier = from->WeaponSwingSpeedMultiplier;
  to->WeaponReloadSpeedBonusUse = from->WeaponReloadSpeedBonusUse;
  to->bIgnoreLevelRequirement = from->bIgnoreLevelRequirement;
  to->WeaponKnockbackBonusUse = from->WeaponKnockbackBonusUse;
  to->bCanBeUpgraded = from->bCanBeUpgraded;
  to->AllowRenamingAtMaxUpgrade = from->AllowRenamingAtMaxUpgrade;
  to->bForceUseParentTemplate = from->bForceUseParentTemplate;
  to->WeaponAltDamageBonusUse = from->WeaponAltDamageBonusUse;
  to->bDisableTheRandomization = from->bDisableTheRandomization;
  to->WeaponBlockingBonusUse = from->WeaponBlockingBonusUse;
  to->bDontCalculateLevelRequirement = from->bDontCalculateLevelRequirement;
  to->WeaponClipAmmoBonusUse = from->WeaponClipAmmoBonusUse;
  to->bDontUseLevelName = from->bDontUseLevelName;
  to->WeaponChargeSpeedBonusUse = from->WeaponChargeSpeedBonusUse;
  to->WeaponShotsPerSecondBonusUse = from->WeaponShotsPerSecondBonusUse;
  to->UseWeaponCoreStats = from->UseWeaponCoreStats;
  to->bIsLocked = from->bIsLocked;
  to->bWasAttached = from->bWasAttached;
  to->bIsShopEquipment = from->bIsShopEquipment;
  to->bIsSecondary = from->bIsSecondary;
  to->bIsNameOnlineVerified = from->bIsNameOnlineVerified;
  to->bIsForgerNameOnlineVerified = from->bIsForgerNameOnlineVerified;
  to->bWasAddedToDefenderStore = from->bWasAddedToDefenderStore;
  to->WeaponReloadSpeedBonus = from->WeaponReloadSpeedBonus;
  to->WeaponKnockbackBonus = from->WeaponKnockbackBonus;
  to->WeaponAltDamageBonus = from->WeaponAltDamageBonus;
  to->WeaponBlockingBonus = from->WeaponBlockingBonus;
  to->WeaponClipAmmoBonus = from->WeaponClipAmmoBonus;
  to->AdditionalAllowedUpgradeResistancePoints = from->AdditionalAllowedUpgradeResistancePoints;
  to->RequirementLevelOverride = from->RequirementLevelOverride;
  to->WeaponChargeSpeedBonus = from->WeaponChargeSpeedBonus;
  to->WeaponShotsPerSecondBonus = from->WeaponShotsPerSecondBonus;
  to->NameIndex_Base = from->NameIndex_Base;
  to->NameIndex_QualityDescriptor = from->NameIndex_QualityDescriptor;
  to->NameIndex_DamageReduction = from->NameIndex_DamageReduction;
  to->PrimaryColorSet = from->PrimaryColorSet;
  to->SecondaryColorSet = from->SecondaryColorSet;
  to->bCantBeDropped = from->bCantBeDropped;
  to->bCantBeSold = from->bCantBeSold;
  to->bAutoLockInItemBox = from->bAutoLockInItemBox;
  to->bDidOnetimeEffect = from->bDidOnetimeEffect;
  to->ManualLR = from->ManualLR;
  to->EquipmentType = from->EquipmentType;
  to->PrimaryColorSets = from->PrimaryColorSets;
  to->SecondaryColorSets = from->SecondaryColorSets;
  to->PrimaryColorOverride = from->PrimaryColorOverride;
  to->SecondaryColorOverride = from->SecondaryColorOverride;
  to->MaximumSellWorth = from->MaximumSellWorth;
  to->MinimumSellWorth = from->MinimumSellWorth;
  to->ShopMinimumSellWorth = from->ShopMinimumSellWorth;
  to->MaxEquipmentLevel = from->MaxEquipmentLevel;
  to->UserEquipmentName = from->UserEquipmentName;
  to->EquipmentDescription = from->EquipmentDescription;
  to->UserForgerName = from->UserForgerName;
  to->DroppedLocation = from->DroppedLocation;
  to->FolderID = from->FolderID;
  to->Level = from->Level;
  to->StoredMana = from->StoredMana;
  to->UserID = from->UserID;
  to->MyRatingPercent = from->MyRatingPercent;
  to->MyRating = from->MyRating;
  //to->EquipmentID1 = from->EquipmentID1;
  //to->EquipmentID2 = from->EquipmentID2;
  to->EquipmentName = from->EquipmentName;
  memcpy(to->StatModifierRandomizers, from->StatModifierRandomizers, 11 * sizeof(FEG_StatRandomizer)); //to->StatModifierRandomizers = from->StatModifierRandomizers;
  to->bForceRandomDLCColor = from->bForceRandomDLCColor;
  to->bUseShotsPerSecondRandomizerMult = from->bUseShotsPerSecondRandomizerMult;
  to->bForceAllowDropping = from->bForceAllowDropping;
  to->bForceAllowSelling = from->bForceAllowSelling;
  to->bDoTranscendentLevelBoost = from->bDoTranscendentLevelBoost;
  to->bUseLevelRequirementOverrides = from->bUseLevelRequirementOverrides;
  to->bForceRandomizerWithMinEquipmentLevel = from->bForceRandomizerWithMinEquipmentLevel;
  to->bAllowSellingToExceedSoftManaCap = from->bAllowSellingToExceedSoftManaCap;
  to->bCanBeEquipped = from->bCanBeEquipped;
  to->bForceUseEquipmentDrawScale = from->bForceUseEquipmentDrawScale;
  to->bDistributeManaUponDroppedDestruction = from->bDistributeManaUponDroppedDestruction;
  to->bAllowDroppedDestruction = from->bAllowDroppedDestruction;
  to->bDontHideEquipmentAttachmentInFPV = from->bDontHideEquipmentAttachmentInFPV;
  to->bEncumberHero = from->bEncumberHero;
  to->bIconUseEquipmentRating = from->bIconUseEquipmentRating;
  to->bPlayerShopForceToMinimumSellWorth = from->bPlayerShopForceToMinimumSellWorth;
  to->bMaxEquipLevelUseAltCalc = from->bMaxEquipLevelUseAltCalc;
  to->AllowNameRandomization = from->AllowNameRandomization;
  to->OnlyRandomizeBaseName = from->OnlyRandomizeBaseName;
  to->bNoNegativeRandomizations = from->bNoNegativeRandomizations;
  to->UsesEquipmentAttachments = from->UsesEquipmentAttachments;
  to->UseColorSets = from->UseColorSets;
  to->RandomizeColorSets = from->RandomizeColorSets;
  to->bUsePreviewZOffsetting = from->bUsePreviewZOffsetting;
  to->bUseSelectionPreviewScale = from->bUseSelectionPreviewScale;
  to->bUsePawnWeaponDamageCallback = from->bUsePawnWeaponDamageCallback;
  to->bUsePawnDamageCallback = from->bUsePawnDamageCallback;
  to->bCantSave = from->bCantSave;
  to->bCantPutInItemBox = from->bCantPutInItemBox;
  to->bSetRandomizerMultipliers = from->bSetRandomizerMultipliers;
  to->bPlayerShopPurchasePending = from->bPlayerShopPurchasePending;
  to->bCanModifyParticleColour = from->bCanModifyParticleColour;
  to->bUseHighDigitManaTokenValue = from->bUseHighDigitManaTokenValue;
  to->RandomizerStatModifierGoNegativeThreshold = from->RandomizerStatModifierGoNegativeThreshold;
  to->RandomizerStatModifierGoNegativeMultiplier = from->RandomizerStatModifierGoNegativeMultiplier;
  to->RandomizerStatModifierGoNegativeChance = from->RandomizerStatModifierGoNegativeChance;
  to->EquipmentWeaponTemplate = from->EquipmentWeaponTemplate;
  to->RandomizerQualityMultiplier = from->RandomizerQualityMultiplier;
  to->LevelRequirementRatingOffset = from->LevelRequirementRatingOffset;
  to->MinElementalDamageIncreasePerLevel = from->MinElementalDamageIncreasePerLevel;
  to->HighLevelRequirementsRatingThreshold = from->HighLevelRequirementsRatingThreshold;
  to->MaximumSellWorthUpgradeDepreciationFactor = from->MaximumSellWorthUpgradeDepreciationFactor;
  to->TranscendentLevelBoostAmount = from->TranscendentLevelBoostAmount;
  to->TranscendentLevelBoostRandomizerPower = from->TranscendentLevelBoostRandomizerPower;
  to->HighResaleWorthPower = from->HighResaleWorthPower;
  to->SupremeLevelBoostAmount = from->SupremeLevelBoostAmount;
  to->SupremeLevelBoostRandomizerPower = from->SupremeLevelBoostRandomizerPower;
  to->UltimateLevelBoostAmount = from->UltimateLevelBoostAmount;
  to->UltimateLevelBoostRandomizerPower = from->UltimateLevelBoostRandomizerPower;
  to->LevelRequirementOverrides = from->LevelRequirementOverrides;
  to->WeaponDamageBonusRandomizer = from->WeaponDamageBonusRandomizer;
  to->OneTime_ExpBonus = from->OneTime_ExpBonus;
  to->HighLevelThreshold = from->HighLevelThreshold;
  to->MaxHeroStatValue = from->MaxHeroStatValue;
  to->TranscendentMaxHeroStatValue = from->TranscendentMaxHeroStatValue;
  to->SupremeMaxHeroStatValue = from->SupremeMaxHeroStatValue;
  to->MinTranscendentLevel = from->MinTranscendentLevel;
  to->MinSupremeLevel = from->MinSupremeLevel;
  to->UltimateMaxHeroStatValue = from->UltimateMaxHeroStatValue;
  to->UltimatePlusMaxHeroStatValue = from->UltimatePlusMaxHeroStatValue;
  to->MinUltimateLevel = from->MinUltimateLevel;
  to->DescriptionStringOriginalReplacements = from->DescriptionStringOriginalReplacements;
  to->DescriptionStringNewReplacements = from->DescriptionStringNewReplacements;
  to->WeaponAltDamageBonusRandomizer = from->WeaponAltDamageBonusRandomizer;
  memcpy(to->DamageReductionRandomizers, from->DamageReductionRandomizers, 4 * sizeof(FEG_StatRandomizer));// to->DamageReductionRandomizers = from->DamageReductionRandomizers;
  to->WeaponClipAmmoBonusRandomizer = from->WeaponClipAmmoBonusRandomizer;
  to->WeaponReloadSpeedBonusRandomizer = from->WeaponReloadSpeedBonusRandomizer;
  to->WeaponKnockbackBonusRandomizer = from->WeaponKnockbackBonusRandomizer;
  to->WeaponChargeSpeedBonusRandomizer = from->WeaponChargeSpeedBonusRandomizer;
  to->WeaponBlockingBonusRandomizer = from->WeaponBlockingBonusRandomizer;
  to->MaxEquipmentLevelRandomizer = from->MaxEquipmentLevelRandomizer;
  to->SellWorthLinearFactor = from->SellWorthLinearFactor;
  to->SellWorthExponentialFactor = from->SellWorthExponentialFactor;
  to->SellWorthMin = from->SellWorthMin;
  to->SellWorthMax = from->SellWorthMax;
  to->SellRatingExponent = from->SellRatingExponent;
  to->SellWorthEquipmentRatingBase = from->SellWorthEquipmentRatingBase;
  to->ElementalDamageMultiplier = from->ElementalDamageMultiplier;
  to->ShopSellWorthLinearFactor = from->ShopSellWorthLinearFactor;
  to->ShopSellWorthExponentialFactor = from->ShopSellWorthExponentialFactor;
  to->ShopSellWorthMin = from->ShopSellWorthMin;
  to->ShopSellWorthMax = from->ShopSellWorthMax;
  to->ShopSellRatingExponent = from->ShopSellRatingExponent;
  to->ShopSellWorthEquipmentRatingBase = from->ShopSellWorthEquipmentRatingBase;
  to->ShopSellWorthWeaponMultiplier = from->ShopSellWorthWeaponMultiplier;
  to->ShopSellWorthWeaponExponentialFactorMult = from->ShopSellWorthWeaponExponentialFactorMult;
  to->AltDamageRandomizerMult = from->AltDamageRandomizerMult;
  to->MaxShopSellWorth = from->MaxShopSellWorth;
  to->ShopSellWorthMinWeaponMultiplier = from->ShopSellWorthMinWeaponMultiplier;
  to->ShopSellWorthMaxWeaponMultiplier = from->ShopSellWorthMaxWeaponMultiplier;
  to->ShopSellWorthRatingWeaponMultiplier = from->ShopSellWorthRatingWeaponMultiplier;
  to->ManaCostPerLevelMaxQualityMultiplierAdditional = from->ManaCostPerLevelMaxQualityMultiplierAdditional;
  to->HighLevelManaCostPerLevelMaxQualityMultiplierAdditional = from->HighLevelManaCostPerLevelMaxQualityMultiplierAdditional;
  to->ManaCostPerLevelExponentialFactorAdditional = from->ManaCostPerLevelExponentialFactorAdditional;
  to->HighLevelManaCostPerLevelExponentialFactorAdditional = from->HighLevelManaCostPerLevelExponentialFactorAdditional;
  to->WeaponDrawScaleRandomizerExtraMultiplier = from->WeaponDrawScaleRandomizerExtraMultiplier;
  to->EquipLevelRequirements = from->EquipLevelRequirements;
  to->ElementalDamageIncreasePerLevelMultiplier = from->ElementalDamageIncreasePerLevelMultiplier;
  to->DamageIncreasePerLevelMultiplier = from->DamageIncreasePerLevelMultiplier;
  to->UltimateDamageIncreasePerLevelMultiplier = from->UltimateDamageIncreasePerLevelMultiplier;
  to->MaxElementalDamageIncreasePerLevel = from->MaxElementalDamageIncreasePerLevel;
  to->MaxDamageIncreasePerLevel = from->MaxDamageIncreasePerLevel;
  to->UltimateMaxDamageIncreasePerLevel = from->UltimateMaxDamageIncreasePerLevel;
  to->SelectionPreviewScaleMultiplier = from->SelectionPreviewScaleMultiplier;
  to->AltDamageIncreasePerLevelMultiplier = from->AltDamageIncreasePerLevelMultiplier;
  to->AltMaxDamageIncreasePerLevel = from->AltMaxDamageIncreasePerLevel;
  to->PrimaryColorOverrideMultiplier = from->PrimaryColorOverrideMultiplier;
  to->SecondaryColorOverrideMultiplier = from->SecondaryColorOverrideMultiplier;
  to->GlobalSelectionPreviewScaleMultiplier = from->GlobalSelectionPreviewScaleMultiplier;
  to->ShopSellWorthMaxExponentAbsolute = from->ShopSellWorthMaxExponentAbsolute;
  to->EquipmentRatingPercentBase = from->EquipmentRatingPercentBase;
  to->WeaponEquipmentRatingPercentBase = from->WeaponEquipmentRatingPercentBase;
  to->QualityShopCostMultipliers = from->QualityShopCostMultipliers;
  to->QualityShopCostCaps = from->QualityShopCostCaps;
  to->WeaponKnockbackMax = from->WeaponKnockbackMax;
  to->MaxNonTranscendentStatRollValue = from->MaxNonTranscendentStatRollValue;
  to->MinDamageBonus = from->MinDamageBonus;
  to->MinEquipmentLevels = from->MinEquipmentLevels;
  to->LevelRequirementOffset = from->LevelRequirementOffset;
  to->WeaponShotsPerSecondBonusRandomizer = from->WeaponShotsPerSecondBonusRandomizer;
  to->WeaponNumberOfProjectilesQualityBaseline = from->WeaponNumberOfProjectilesQualityBaseline;
  to->DamageReductionUpgradeInterval = from->DamageReductionUpgradeInterval;
  to->WeaponNumberOfProjectilesBonusRandomizer = from->WeaponNumberOfProjectilesBonusRandomizer;
  to->WeaponSpeedOfProjectilesBonusRandomizer = from->WeaponSpeedOfProjectilesBonusRandomizer;
  to->WeaponAdditionalDamageAmountRandomizer = from->WeaponAdditionalDamageAmountRandomizer;
  to->WeaponDrawScaleMultiplierRandomizer = from->WeaponDrawScaleMultiplierRandomizer;
  to->DroppedEquipmentTemplates = from->DroppedEquipmentTemplates;
  to->weaponType = from->weaponType;
  to->EquipmentSetID = from->EquipmentSetID;
  to->AccessoryRequirements = from->AccessoryRequirements;
  to->ManaCostPerLevelLinearFactor = from->ManaCostPerLevelLinearFactor;
  to->IconColorMultPrimary = from->IconColorMultPrimary;
  to->IconColorMultSecondary = from->IconColorMultSecondary;
  to->ManaCostPerLevelExponentialFactor = from->ManaCostPerLevelExponentialFactor;
  to->ManaCostPerLevelMinQualityMultiplier = from->ManaCostPerLevelMinQualityMultiplier;
  to->ManaCostPerLevelMaxQualityMultiplier = from->ManaCostPerLevelMaxQualityMultiplier;
  to->RespawnTimeMultiplier = from->RespawnTimeMultiplier;
  to->TotalRandomizerMultiplier = from->TotalRandomizerMultiplier;
  to->EquipmentAttachmentInfos = from->EquipmentAttachmentInfos;
  to->LevelString = from->LevelString;
  to->ForgedByDescription = from->ForgedByDescription;
  to->PrimaryColorSetIntensity = from->PrimaryColorSetIntensity;
  to->PrimaryColorSetPow = from->PrimaryColorSetPow;
  to->SecondaryColorSetIntensity = from->SecondaryColorSetIntensity;
  to->SecondaryColorSetPow = from->SecondaryColorSetPow;
  to->WeaponDrawScaleGlobalMultiplier = from->WeaponDrawScaleGlobalMultiplier;
  to->IconScaleMultiplier = from->IconScaleMultiplier;
  to->FullEquipmentSetStatMultiplier = from->FullEquipmentSetStatMultiplier;
  to->MythicalFullEquipmentSetStatMultiplier = from->MythicalFullEquipmentSetStatMultiplier;
  to->TranscendentFullEquipmentSetStatMultiplier = from->TranscendentFullEquipmentSetStatMultiplier;
  to->SupremeFullEquipmentSetStatMultiplier = from->SupremeFullEquipmentSetStatMultiplier;
  to->UltimateFullEquipmentSetStatMultiplier = from->UltimateFullEquipmentSetStatMultiplier;
  to->WeaponDamageDisplayValueScale = from->WeaponDamageDisplayValueScale;
  to->RatingPercentForLevelUpCostExponent = from->RatingPercentForLevelUpCostExponent;
  to->WeaponDamageBonusRandomizerMultiplier = from->WeaponDamageBonusRandomizerMultiplier;
  to->AdditionalWeaponDamageBonusRandomizerMultiplier = from->AdditionalWeaponDamageBonusRandomizerMultiplier;
  to->SellWorthMultiplierLevelBase = from->SellWorthMultiplierLevelBase;
  to->SellWorthMultiplierLevelMin = from->SellWorthMultiplierLevelMin;
  to->SellWorthMultiplierLevelMax = from->SellWorthMultiplierLevelMax;
  to->ExtraEquipmentColorMultiplier = from->ExtraEquipmentColorMultiplier;
  to->ExtraEquipmentColorMultiplierMaterialParamName = from->ExtraEquipmentColorMultiplierMaterialParamName;
  to->PreviewMinOffsetScale = from->PreviewMinOffsetScale;
  to->PreviewMinOffsetZ = from->PreviewMinOffsetZ;
  to->PreviewMaxOffsetScale = from->PreviewMaxOffsetScale;
  to->PreviewMaxOffsetZ = from->PreviewMaxOffsetZ;
  to->EquipmentIconMat = from->EquipmentIconMat;
  to->AdditionalDescription = from->AdditionalDescription;
  to->DamageDescription = from->DamageDescription;
  to->EquipmentStatNames = from->EquipmentStatNames;
  to->EquipmentStatDescriptions = from->EquipmentStatDescriptions;
  to->EquipmentStatIcons = from->EquipmentStatIcons;
  to->IconColorAddPrimary = from->IconColorAddPrimary;
  to->IconColorAddSecondary = from->IconColorAddSecondary;
  to->BaseForgerName = from->BaseForgerName;
  to->ComparisonSimilarRatingAllowance = from->ComparisonSimilarRatingAllowance;
  to->ComparisonRatingExponent = from->ComparisonRatingExponent;
  to->PlayerSpeedMultiplier = from->PlayerSpeedMultiplier;
  to->PlayerGravityMultiplier = from->PlayerGravityMultiplier;
  to->GivenEquipmentMessageColor = from->GivenEquipmentMessageColor;
  to->GivenEquipmentMessageString = from->GivenEquipmentMessageString;
  to->RequiredLevelString = from->RequiredLevelString;
  to->RequiredClassString = from->RequiredClassString;
  to->EquipSound = from->EquipSound;
  to->PreviewTranslationOffset = from->PreviewTranslationOffset;
  to->ProtonChargeBlastDamageMultiplier = from->ProtonChargeBlastDamageMultiplier;
  to->BackupUserForgerName = from->BackupUserForgerName;
  to->BackupUserEquipmentName = from->BackupUserEquipmentName;
  to->MyNonUpgradeLevelRating = from->MyNonUpgradeLevelRating;
  to->PlayerShopSellAmount = from->PlayerShopSellAmount;
  to->PlayerShopSellAmountHDI = from->PlayerShopSellAmountHDI;
  to->DebugPreTranscendentEquipmentRating = from->DebugPreTranscendentEquipmentRating;
  to->RandomBaseNames = from->RandomBaseNames;
  to->DamageReductionNames = from->DamageReductionNames;
  to->QualityDescriptorNames = from->QualityDescriptorNames;
  to->QualityDescriptorRealNames = from->QualityDescriptorRealNames;
  to->MinWeaponScale = from->MinWeaponScale;
  to->WeaponDamageMultiplier = from->WeaponDamageMultiplier;
  to->WeaponAltDamageMultiplier = from->WeaponAltDamageMultiplier;
  to->CosmeticSet = from->CosmeticSet;
  to->MaxLevelRangeDifficultyArray = from->MaxLevelRangeDifficultyArray;
  to->compareSets = from->compareSets;
  to->EquipmentHero = from->EquipmentHero;
}

std::vector<std::string> GetAllItemsInGame()
{
  //set up the retuning vector by adding all item names to it
  std::vector<std::string> retVec;
  auto equipVector = GetAllInstanceOf(UHeroEquipmentNative::StaticClass());
  for (auto v : equipVector)
  {
    UHeroEquipment* item = (UHeroEquipment*)v;
    //item = (UHeroEquipment*)item->GetBaseArchetype();
    std::string itemName = item->GetName();
    if (std::find(retVec.begin(), retVec.end(), itemName) == retVec.end())
      retVec.push_back(itemName);
  }
  //sort vector alphbeticlly
  std::sort(retVec.begin(), retVec.end());
  //setup bool array
  bool * newItemSelectable = new bool[retVec.size()];
  //delete old one
  if (ItemSelectable) delete[] ItemSelectable;
  //make new one the correct one
  ItemSelectable = newItemSelectable;
  //make sure the memeory is zeroed
  for (int i = 0; i < retVec.size(); i++) ItemSelectable[i] = false;

  return retVec;
}
void GiveItemCopy(UHeroEquipment* _item)
{
  UHeroEquipment* temp = (UHeroEquipment*)_item->GetBaseArchetype();
  CopyItem(temp, _item);

  //get object to give items
  UDunDef_SeqAct_GiveEquipmentToPlayers* give = (UDunDef_SeqAct_GiveEquipmentToPlayers*)GetInstanceOf(UDunDef_SeqAct_GiveEquipmentToPlayers::StaticClass());

  //save old template
  FGiveEquipmentEntry oldtemp;
  oldtemp = give->GiveEquipmentEntries.Data[0];

  //setup new template
  FGiveEquipmentEntry newtemp = oldtemp;

  newtemp.ForHeroArchetype = NULL;
  newtemp.EquipmentArchetype = temp;
  //newtemp.EquipmentArchetypesRandom;
  newtemp.BaseForceRandomizationQuality = 0;
  newtemp.MaxRandomizationQuality = 0;
  newtemp.RandomizerMultiplierOverride = 0;
  newtemp.bUseEquipmentArchetypeAsTemplate = 1;
  newtemp.bRandomGlobalDontUseAdditionalItemEntries = 0;
  newtemp.ForceHeroArchetypeExactMatch = 1;
  newtemp.bDontIgnoreEquipmentMinUpgradeLevels = 0;
  newtemp.bGetRandomGlobalEquipmentDrop = 0;
  newtemp.bRandomGlobalDontUseShopDrops = 0;
  newtemp.RandomGlobalEquipmentDropExtraRarityWeighting = 0;
  newtemp.RandomGlobalEquipmentDropValueMin = 0;
  newtemp.RandomGlobalEquipmentDropValueMax = 0;
  newtemp.bUsed = 0;

  //change template to new one
  give->GiveEquipmentEntries.Data[0] = newtemp;

  //give item
  //give->eventActivated();
  give->GiveEquipment((ADunDefPlayerController*)controller);

  //reset the template
  give->GiveEquipmentEntries.Data[0] = oldtemp;
}
void GiveItem(std::string itemname)
{	
  //find object in memory
  auto e = (UHeroEquipment*)GetInstanceByName(UHeroEquipment::StaticClass(),itemname);
  if (!e) return;
  //get object to give items
  UDunDef_SeqAct_GiveEquipmentToPlayers* give = (UDunDef_SeqAct_GiveEquipmentToPlayers*)GetInstanceOf(UDunDef_SeqAct_GiveEquipmentToPlayers::StaticClass());

  //save old template
  FGiveEquipmentEntry oldtemp;
  oldtemp = give->GiveEquipmentEntries.Data[0];

  //setup new template
  FGiveEquipmentEntry newtemp = oldtemp;

  newtemp.ForHeroArchetype = NULL;
  newtemp.EquipmentArchetype = e;
  //newtemp.EquipmentArchetypesRandom;
  newtemp.BaseForceRandomizationQuality = 1.5f;
  newtemp.MaxRandomizationQuality = 1.5f;
  newtemp.RandomizerMultiplierOverride = 9.0f;
  newtemp.bUseEquipmentArchetypeAsTemplate = 1;
  newtemp.bRandomGlobalDontUseAdditionalItemEntries = 0;
  newtemp.ForceHeroArchetypeExactMatch = 0;
  newtemp.bDontIgnoreEquipmentMinUpgradeLevels = 0;
  newtemp.bGetRandomGlobalEquipmentDrop  = 0;
  newtemp.bRandomGlobalDontUseShopDrops  = 0;
  newtemp.RandomGlobalEquipmentDropExtraRarityWeighting = 0;
  newtemp.RandomGlobalEquipmentDropValueMin = 0;
  newtemp.RandomGlobalEquipmentDropValueMax = 0;
  newtemp.bUsed = 0;



  //change template to new one
  give->GiveEquipmentEntries.Data[0] = newtemp;

  //give item
  //give->eventActivated();
  give->GiveEquipment((ADunDefPlayerController*)controller);

  //reset the template
  give->GiveEquipmentEntries.Data[0] = oldtemp;
}
void GiveItems()
{
  //get object to give items
  UDunDef_SeqAct_GiveEquipmentToPlayers* give = (UDunDef_SeqAct_GiveEquipmentToPlayers*)GetInstanceOf(UDunDef_SeqAct_GiveEquipmentToPlayers::StaticClass());
  //save old template
  TArray<FGiveEquipmentEntry>oldtemp;
  oldtemp = give->GiveEquipmentEntries;

  TArray<FGiveEquipmentEntry>newtemp;

  for (int i = 0; i < AllItems.size(); i++)
  {
    if (!ItemSelectable[i]) continue;
    //find object in memory
    auto e = (UHeroEquipment*)GetInstanceByName(UHeroEquipment::StaticClass(), AllItems[i]);
    if (!e) continue;


    //setup new template
    FGiveEquipmentEntry newentry;
    newentry.ForHeroArchetype = NULL;
    newentry.EquipmentArchetype = e;
    //newtemp.EquipmentArchetypesRandom;
    newentry.BaseForceRandomizationQuality = 1.5f;
    newentry.MaxRandomizationQuality = 1.5f;
    newentry.RandomizerMultiplierOverride = 9.0f;
    newentry.bUseEquipmentArchetypeAsTemplate = 1;
    newentry.bRandomGlobalDontUseAdditionalItemEntries = 0;
    newentry.ForceHeroArchetypeExactMatch = 0;
    newentry.bDontIgnoreEquipmentMinUpgradeLevels = 0;
    newentry.bGetRandomGlobalEquipmentDrop = 0;
    newentry.bRandomGlobalDontUseShopDrops = 0;
    newentry.RandomGlobalEquipmentDropExtraRarityWeighting = 0;
    newentry.RandomGlobalEquipmentDropValueMin = 0;
    newentry.RandomGlobalEquipmentDropValueMax = 0;
    newentry.bUsed = 0;

    //add entry to Tarray
    newtemp.Add(newentry);
  }

  //change template to new one
  give->GiveEquipmentEntries = newtemp;

  //give item
  //give->eventActivated();
  give->GiveEquipment((ADunDefPlayerController*)controller);

  //reset the template
  give->GiveEquipmentEntries = oldtemp;

}
void DrawTextCentered(UCanvas* canvas, FString _Text, float _x, float _y, FColor _Color)
{
  FVector2D tmpCanvasPos = { canvas->CurX, canvas->CurY };
  FColor tmpCanvasColor = canvas->DrawColor;


  float MaxX = 0;
  float MaxY = 0;
  canvas->TextSize(_Text, &MaxX, &MaxY);
  _x = _x - (MaxX / 2);
  _y = _y - (MaxY / 2);

  canvas->SetPos(_x, _y);
  canvas->DrawColor = _Color;


  canvas->DrawTextA(_Text, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);


  canvas->DrawColor = tmpCanvasColor;
  canvas->SetPos(tmpCanvasPos.X, tmpCanvasPos.Y);

}
void DrawTexta(UCanvas* canvas, FString _Text, float _x, float _y, FColor _Color)
{
  FVector2D tmpCanvasPos = { canvas->CurX, canvas->CurY };
  FColor tmpCanvasColor = canvas->DrawColor;

  canvas->SetPos(_x, _y);
  canvas->DrawColor = _Color;

  canvas->DrawTextA(_Text, false, 1.0f, 1.0f, NULL, 100, 100, 100, 100, NULL, NULL);

  canvas->DrawColor = tmpCanvasColor;
  canvas->SetPos(tmpCanvasPos.X, tmpCanvasPos.Y);

}
bool CheckItemQuality(UHeroEquipment* tempweap, int *ItemFilterStats)
{
  if (!CheckVarsForNull())
    return FALSE;
  if (tempweap)
  {
    if(ItemFilterQuality > 1)
      if (tempweap->NameIndex_QualityDescriptor < ItemFilterQuality + 12)
        return FALSE;
    if (ItemFilterStats[eHHealth] > 1)
      if (tempweap->StatModifiers[eHHealth] <= ItemFilterStats[eHHealth])
        return FALSE;
    if (ItemFilterStats[eHSpeed] > 1)
      if (tempweap->StatModifiers[eHSpeed] <= ItemFilterStats[eHSpeed])
        return FALSE;
    if (ItemFilterStats[eHDamage] > 1)
      if (tempweap->StatModifiers[eHDamage] <= ItemFilterStats[eHDamage])
        return FALSE;
    if (ItemFilterStats[eHCast] > 1)
      if (tempweap->StatModifiers[eHCast] <= ItemFilterStats[eHCast])
        return FALSE;
    if (ItemFilterStats[Ability1] > 1)
      if (tempweap->StatModifiers[Ability1] <= ItemFilterStats[Ability1])
        return FALSE;
    if (ItemFilterStats[Ability2] > 1)
      if (tempweap->StatModifiers[Ability2] <= ItemFilterStats[Ability2])
        return FALSE;
    if (ItemFilterStats[eTHealth] > 1)
      if (tempweap->StatModifiers[eTHealth] <= ItemFilterStats[eTHealth])
        return FALSE;
    if (ItemFilterStats[eTSpeed] > 1)
      if (tempweap->StatModifiers[eTSpeed] <= ItemFilterStats[eTSpeed])
        return FALSE;
    if (ItemFilterStats[eTDamage] > 1)
      if (tempweap->StatModifiers[eTDamage] <= ItemFilterStats[eTDamage])
        return FALSE;
    if (ItemFilterStats[eTRange] > 1)
      if (tempweap->StatModifiers[eTRange] <= ItemFilterStats[eTRange])
        return FALSE;
  }
  return TRUE;
}
bool MaxItemBox(TArray< UHeroEquipment* > tmpItemEquipment)
{
  static int LastIValue = 0;
  static int FilterAmmount = 500;
  static bool Done = 0;


  int NewTotal = LastIValue + FilterAmmount;
  if (NewTotal > tmpItemEquipment.Count)
    NewTotal = tmpItemEquipment.Count;

  if (LastIValue >= tmpItemEquipment.Count)
    LastIValue = 0;


  for (int i = LastIValue; i < NewTotal; i++)
  {
    MaxWeapon(tmpItemEquipment.Data[i]);
  }
  LastIValue += FilterAmmount;

  if (LastIValue < tmpItemEquipment.Count)
    return false;
  return true;
}
FVector TargetLocationOnScreen;
wchar_t buffer[255];
void Cheats()
{
  ADunDefPlayerController* tmpPlayerController = ((ADunDefPlayerController*)controller);

  if (!tmpPlayerController)
    return;

  if (bNoCD)
  {
    for (int i = 0; i < tmpPlayerController->PlayerAbilities.Count; i++)
    {
      tmpPlayerController->PlayerAbilities.Data[i]->ActivationInterval = 0;
      tmpPlayerController->PlayerAbilities.Data[i]->MinimumReactivationInterval = 0;
      tmpPlayerController->PlayerAbilities.Data[i]->LobbyActivationInterval = 0;
      tmpPlayerController->PlayerAbilities.Data[i]->bForceAllowInBuildPhase = 1;
    }
  }


  if (bUnlimManaBuild)
  {
    tmpPlayerController->ManaPower = manaCount;
  }
  if (bUnlimManaShop)
  {
    FHighDigitInt tmp = { 1, 1, 1, 1 };
    tmpPlayerController->SetBankedMana(tmp, 0, 1);
  }
}
bool FilterItemBoxByStats(TArray< UHeroEquipment* > tmpItemEquipment, bool bLock, bool Below,int* FilterArray)
{
  static int LastIValue = 0;
  static int FilterAmmount = 500;



  int NewTotal = LastIValue + FilterAmmount;
  if (NewTotal > tmpItemEquipment.Count)
    NewTotal = tmpItemEquipment.Count;

  if (LastIValue >= tmpItemEquipment.Count)
    LastIValue = 0;


  if (Below)
    for (int i = LastIValue; i < NewTotal; i++)
    {

      if (!CheckItemQuality(tmpItemEquipment.Data[i], FilterArray))
      {
        tmpItemEquipment.Data[i]->bIsLocked = bLock;
      }


    }
  else
    for (int i = LastIValue; i < NewTotal; i++)
  {

    if (CheckItemQuality(tmpItemEquipment.Data[i], FilterArray))
    {
      tmpItemEquipment.Data[i]->bIsLocked = bLock;
    }
  }




  LastIValue += FilterAmmount;

  if (LastIValue < tmpItemEquipment.Count)
    return false;
  return true;

}
bool FilterItemBox(TArray< UHeroEquipment* > tmpItemEquipment, int itemFilterQuality, int bLock, int Below)
{

  static int LastIValue = 0;
  static int FilterAmmount = 500;
  static bool Done = 0;


  int NewTotal = LastIValue + FilterAmmount;
  if (NewTotal > tmpItemEquipment.Count)
    NewTotal = tmpItemEquipment.Count;

  if (LastIValue >= tmpItemEquipment.Count)
    LastIValue = 0;






  if (Below)
  {
    for (int i = LastIValue; i < NewTotal; i++)
    {
      if (tmpItemEquipment.Data[i]->GetLevelRequirement() <= itemFilterQuality)
      {
        tmpItemEquipment.Data[i]->bIsLocked = bLock;
      }

    }
  }
  else
  {
    for (int i = LastIValue; i < NewTotal; i++)
    {
      if (tmpItemEquipment.Data[i]->GetLevelRequirement() >= itemFilterQuality)
      {
        tmpItemEquipment.Data[i]->bIsLocked = bLock;
      }

    }
  }






  LastIValue += FilterAmmount;

  if (LastIValue < tmpItemEquipment.Count)
    return false;
  return true;
}
void GetPoints(UCanvas* canvas, ADunDefPawn* Target, FVector* arrayin) {


  FBoxSphereBounds PlayerBounds = Target->Mesh->Bounds;
  FVector Top = {
    PlayerBounds.Origin.X,
    PlayerBounds.Origin.Y,
    PlayerBounds.Origin.Z + PlayerBounds.BoxExtent.Z };
  FVector Left = {
    PlayerBounds.Origin.X,
    PlayerBounds.Origin.Y + PlayerBounds.BoxExtent.Y,
    PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
  FVector Right = {
    PlayerBounds.Origin.X,
    PlayerBounds.Origin.Y - PlayerBounds.BoxExtent.Y,
    PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
  FVector Front = {
    PlayerBounds.Origin.X + PlayerBounds.BoxExtent.X,
    PlayerBounds.Origin.Y,
    PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };
  FVector Back = {
    PlayerBounds.Origin.X - PlayerBounds.BoxExtent.X,
    PlayerBounds.Origin.Y,
    PlayerBounds.Origin.Z - PlayerBounds.BoxExtent.Z };


  FVector screencordTop = canvas->ProjectNoClip(Top);
  FVector screencordLeft = canvas->ProjectNoClip(Left);
  FVector screencordRight = canvas->ProjectNoClip(Right);
  FVector screencordFront = canvas->ProjectNoClip(Front);
  FVector screencordBack = canvas->ProjectNoClip(Back);



  FVector screenarray[] = {
    screencordTop,
    screencordLeft,
    screencordRight,
    screencordFront,
    screencordBack };


  FVector TopLeft = screencordTop;
  FVector BottomRight = screencordRight;




  for (int i = 0; i < 5; i++)
  {
    if (TopLeft.X > screenarray[i].X)
      TopLeft.X = screenarray[i].X;

    if (BottomRight.X < screenarray[i].X)
      BottomRight.X = screenarray[i].X;

    if (TopLeft.Y > screenarray[i].Y)
      TopLeft.Y = screenarray[i].Y;

    if (BottomRight.Y < screenarray[i].Y)
      BottomRight.Y = screenarray[i].Y;

  }


  BottomRight.X -= TopLeft.X;
  BottomRight.Y -= TopLeft.Y;

  //canvas->SetPos(TopLeft.X, TopLeft.Y);
  //canvas->DrawBox(BottomRight.X, BottomRight.Y);


  FVector ret[] = { TopLeft, BottomRight };

  arrayin[0] = ret[0];
  arrayin[1] = ret[1];

}
void DrawEspBox(UCanvas* canvas, ADunDefPawn* Target, FVector* arrayin, FColor color)
{



  FVector2D	tmpPos = { canvas->CurX, canvas->CurY };
  FColor		tmpColor = canvas->DrawColor;

  canvas->SetPos(arrayin[0].X, arrayin[0].Y);
  canvas->DrawColor = color;


  canvas->DrawBox(arrayin[1].X, arrayin[1].Y);


  canvas->SetPos(tmpPos.X, tmpPos.Y);
  canvas->DrawColor = tmpColor;

}
void ESPTarget(UCanvas* _canvas, ADunDefPawn* _Target)
{


  if (!bEspEnabled)
    return;

  FVector TargetLocationOnScreen = _canvas->ProjectNoClip(_Target->Location);

  if (TargetLocationOnScreen.Z > 1.0f)
    return;



  if (bDrawRoute)
    controller->myHUD->DrawRoute(_Target);



  FVector TargetBoundingBox[2];
  GetPoints(_canvas, _Target, TargetBoundingBox);

  if (bEspLines)
  {
    if (controller->myHUD)
      controller->myHUD->Draw3DLine(controller->Pawn->Location, _Target->Location, fRed);

  }

  if (_Target->bPostRenderIfNotVisible)
    return;



  if (bEspBox)
  {
    DrawEspBox(_canvas, _Target, TargetBoundingBox, fRed);
  }
  if (bEspHealth)
  {

    swprintf_s(buffer, L"%d", _Target->Health);
    DrawTexta(_canvas, FString(buffer), TargetBoundingBox[0].X, TargetBoundingBox[0].Y - 20.0f, fGreen);
  }
}


void RequestThreadSafeString(std::string& out, UObject* obj)
{
  std::pair<std::string&, UObject*> t = { out , obj };

  for(auto tt: q_ThreadSafeStringRequests)
  {
    if (t == tt)
      return;
  }

  q_ThreadSafeStringRequests.push_back(t);
}

ImVec2 ButtonProperty = { 100, 20 };
void ShowCombo(TArray< FEG_StatMatchingString > names, FString _CurrentSelected, unsigned char& _changeChar, std::string comboName)
{
  std::string CurrentSelected;
  FStringTostring(CurrentSelected, _CurrentSelected);

  static int CurrentSelectedIndex = 0;
  if (ImGui::BeginCombo(comboName.c_str(), CurrentSelected.c_str()))
  {
    for (int i = 0; i < names.Count; i++)
    {
      if (!(names.Data[i].StringValue.Data))
        continue;
      std::string ComboName;
      FStringTostring(ComboName, names.Data[i].StringValue);

      const bool is_selected = (CurrentSelectedIndex == i);
      if (ImGui::Selectable(ComboName.c_str(), is_selected))
      {
        CurrentSelectedIndex = i;
        _changeChar = i;
      }
      // Set the initial focus when opening the combo (scrolling + keyboard navigation focus)
      if (is_selected)
        ImGui::SetItemDefaultFocus();
    }
    ImGui::EndCombo();
  }
}
void aShowCombo(std::vector< UHeroEquipment* > equipment, FString _CurrentSelected, int & select, std::string comboName)
{
  std::string CurrentSelected;
  FStringTostring(CurrentSelected, _CurrentSelected);




  static int CurrentSelectedIndex = 0;
  if (ImGui::BeginCombo(comboName.c_str(), CurrentSelected.c_str()))
  {
    for (int i = 0; i < equipment.size(); i++)
    {
      if (!equipment[i])
      {
        equipment.erase(equipment.begin()+i);
        continue;
      }

      std::string ComboName;
      FStringTostring(ComboName, equipment[i]->EquipmentName);

      ComboName = std::to_string(i) + " " + ComboName;

      const bool is_selected = (CurrentSelectedIndex == i);

      if (ImGui::Selectable(ComboName.c_str(), is_selected))
      {
        CurrentSelectedIndex = i;
        select = i;
      }
      // Set the initial focus when opening the combo (scrolling + keyboard navigation focus)
      if (is_selected)
        ImGui::SetItemDefaultFocus();
    }
    ImGui::EndCombo();
  }
}
wchar_t* charToWChar(char* s)
{
  //get len required for memory
  int len = strlen(s)+1;
  //create memory to write to
  wchar_t* bufPtr = (wchar_t*)VirtualAlloc(0,len*2, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
  //write to memory
  mbstowcs(bufPtr, s, len);

  return bufPtr;
}
void ImGuiDroppedEquipment(ADunDefDroppedEquipment* _drop,std::string name)
{
  std::string WeapName;

  if (!_drop->MyEquipmentObject) return;

  auto _Weap = _drop->MyEquipmentObject;

  if (ImGui::Button("Give"))
  {
    giveDroppedEquipment.push((UHeroEquipment*)_Weap);
  }


  ImGui::Text("InternalName : %s", name.c_str());
  ImGui::Text("ItemAddr          :  0x%p", _Weap); ImGui::SameLine();
  if (ImGui::Button("Copy to clipboard"))
  {
    ImGui::LogToClipboard();
    ImGui::LogText("%p", _Weap);
    ImGui::LogFinish();
  }


  if (_Weap->EquipmentName.Data)
  {
    FStringTostring(WeapName, _Weap->EquipmentName.Data);
    ImGui::Text("EquipmentName     :  %s", WeapName.c_str());
  }
  else
  {
    ImGui::Text("EquipmentName     :  ");
  }
  //item name
  if (_Weap->UserEquipmentName.Data)
  {

    FStringTostring(WeapName, _Weap->UserEquipmentName.Data);
    ImGui::Text("UserEquipmentName :  %s", WeapName.c_str());

    //change item name
    static char charBuff[32];
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    ImGui::InputText("Name  ", charBuff, sizeof(charBuff), IM_ARRAYSIZE(charBuff));
    ImGui::PopItemWidth();
    ImGui::SameLine();

    if (ImGui::Button("Change Name", ButtonProperty))
    {
      _Weap->UserEquipmentName.Data = charToWChar(charBuff);
      _Weap->UserEquipmentName.Count = strlen(charBuff) + 1;
      _Weap->UserEquipmentName.Max = strlen(charBuff) + 1;
    }
  }
  //forger name
  if (_Weap->UserForgerName.Data)
  {
    FStringTostring(WeapName, _Weap->UserForgerName.Data);
    ImGui::Text("UserForgerName    :  %s", WeapName.c_str());

    //change forger name
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    static char ncharBuff[32];
    ImGui::InputText("Forger", ncharBuff, sizeof(ncharBuff), IM_ARRAYSIZE(ncharBuff));
    ImGui::PopItemWidth();
    ImGui::SameLine();

    if (ImGui::Button("Change Forger Name", ButtonProperty))
    {
      _Weap->UserForgerName.Data = charToWChar(ncharBuff);// newNames.back();
      _Weap->UserForgerName.Count = strlen(ncharBuff) + 1;//wcslen(t)+1;
      _Weap->UserForgerName.Max = strlen(ncharBuff) + 1;//wcslen(t)+1;
    }
  }

  if (ImGui::TreeNode("___Main___"))
  {
    ImGui::Text("___Name___");


    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    if (_Weap->RandomBaseNames.Data)
      ShowCombo(_Weap->RandomBaseNames, _Weap->RandomBaseNames.Data[_Weap->NameIndex_Base].StringValue, _Weap->NameIndex_Base, "Base");
    else
      ImGui::Text("No RandomBaseNames found");


    if (_Weap->DamageReductionNames.Data)
      ShowCombo(_Weap->DamageReductionNames, _Weap->DamageReductionNames.Data[_Weap->NameIndex_DamageReduction].StringValue, _Weap->NameIndex_DamageReduction, "DamageReduction");
    else
      ImGui::Text("No DamageReductionNames found");
    if (_Weap->QualityDescriptorRealNames.Data)
      ShowCombo(_Weap->QualityDescriptorRealNames, _Weap->QualityDescriptorRealNames.Data[_Weap->NameIndex_QualityDescriptor].StringValue, _Weap->NameIndex_QualityDescriptor, "Quality");
    else
      ImGui::Text("No QualityDescriptorRealNames found");





    ImGui::InputFloat("WeaponDrawScaleMultiplier", &_Weap->WeaponDrawScaleMultiplier, 1, 100, "%.3f");
    ImGui::PopItemWidth();

    ImGui::Text("___Color___");
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    ImGui::ColorPicker4("Primary", &(*(float*)&_Weap->PrimaryColorOverride.R)); ImGui::SameLine();
    ImGui::ColorPicker4("Secondary", &(*(float*)&_Weap->SecondaryColorOverride.R));

    ImGui::PopItemWidth();



    ImGui::TreePop();
  }


  if (ImGui::TreeNode("___Stats___"))
  {
    ImGui::InputInt("HHealth   ", &_Weap->StatModifiers[eHHealth]);
    ImGui::InputInt("HSpeed    ", &_Weap->StatModifiers[eHSpeed]);
    ImGui::InputInt("HDamage   ", &_Weap->StatModifiers[eHDamage]);
    ImGui::InputInt("HCast     ", &_Weap->StatModifiers[eHCast]);
    ImGui::InputInt("Ability1  ", &_Weap->StatModifiers[Ability1]);
    ImGui::InputInt("Ability2  ", &_Weap->StatModifiers[Ability2]);
    ImGui::InputInt("THealth   ", &_Weap->StatModifiers[eTHealth]);
    ImGui::InputInt("TSpeed    ", &_Weap->StatModifiers[eTSpeed]);
    ImGui::InputInt("TDamage   ", &_Weap->StatModifiers[eTDamage]);
    ImGui::InputInt("TRange    ", &_Weap->StatModifiers[eTRange]);
    ImGui::TreePop();
  }


  if (ImGui::TreeNode("___Other___"))
  {

    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    ImGui::InputInt("MaxEquipmentLevel    ", &(_Weap->MaxEquipmentLevel));
    ImGui::InputInt("DamageReductions1    ", &(_Weap->DamageReductions[0].PercentageReduction));
    ImGui::InputInt("DamageReductions2    ", &(_Weap->DamageReductions[1].PercentageReduction));
    ImGui::InputInt("DamageReductions3    ", &(_Weap->DamageReductions[2].PercentageReduction));
    ImGui::InputInt("DamageReductions4    ", &(_Weap->DamageReductions[3].PercentageReduction));

    ImGui::InputInt("DamageBonus    ", &(_Weap->WeaponDamageBonus));
    ImGui::InputInt("NumberOfProjectilesBonus    ", &(_Weap->WeaponNumberOfProjectilesBonus));
    ImGui::InputInt("SpeedOfProjectilesBonus    ", &(_Weap->WeaponSpeedOfProjectilesBonus));
    ImGui::InputInt("WeaponAdditionalDamageAmount    ", &(_Weap->WeaponAdditionalDamageAmount));

    ImGui::InputFloat("MaxRandomElementalDamageMultiplier", &_Weap->MaxRandomElementalDamageMultiplier, 1, 100, "%.3f");
    ImGui::InputFloat("WeaponSwingSpeedMultiplier", &_Weap->WeaponSwingSpeedMultiplier, 1, 100, "%.3f");

    ImGui::InputInt("WeaponReloadSpeedBonus                       ", &(_Weap->WeaponReloadSpeedBonus));
    ImGui::InputInt("WeaponKnockbackBonus                         ", &(_Weap->WeaponKnockbackBonus));
    ImGui::InputInt("WeaponAltDamageBonus                         ", &(_Weap->WeaponAltDamageBonus));
    ImGui::InputInt("WeaponBlockingBonus                          ", &(_Weap->WeaponBlockingBonus));
    ImGui::InputInt("WeaponClipAmmoBonus                          ", &(_Weap->WeaponClipAmmoBonus));
    ImGui::InputInt("AdditionalAllowedUpgradeResistancePoints     ", &(_Weap->AdditionalAllowedUpgradeResistancePoints));
    ImGui::InputInt("RequirementLevelOverride                     ", &(_Weap->RequirementLevelOverride));
    ImGui::InputInt("WeaponChargeSpeedBonus                       ", &(_Weap->WeaponChargeSpeedBonus));
    ImGui::InputInt("WeaponShotsPerSecondBonus                    ", &(_Weap->WeaponShotsPerSecondBonus));

    ImGui::InputInt("MaximumSellWorth", &_Weap->MaximumSellWorth);
    ImGui::InputInt("MinimumSellWorth", &_Weap->MinimumSellWorth);
    ImGui::InputInt("ShopMinimumSellWorth", &_Weap->ShopMinimumSellWorth);
    ImGui::InputInt("MaxEquipmentLevel", &_Weap->MaxEquipmentLevel);
    ImGui::InputInt("Level", &_Weap->Level);
    ImGui::InputInt("StoredMana", &_Weap->StoredMana);
    ImGui::InputInt("UserID", &_Weap->UserID);
    ImGui::InputFloat("MyRatingPercent", &_Weap->MyRatingPercent, 1.0f);
    ImGui::InputFloat("MyRating", &_Weap->MyRating, 1.0f);
    ImGui::InputInt("EquipmentID1", &_Weap->EquipmentID1);
    ImGui::InputInt("EquipmentID2", &_Weap->EquipmentID2);


    ImGui::PopItemWidth();
    ImGui::TreePop();
  }
  _Weap->bIsNameOnlineVerified = 1;
  _Weap->bIsForgerNameOnlineVerified = 1;
}
void ImGuiWeapon(UHeroEquipment*_Weap,std::string name)
{
  std::string WeapName;

  if (ImGui::Button("Give##weap"))
  {
    giveDroppedEquipment.push((UHeroEquipment*)_Weap);
  }
  //ImGui::Text("EquipmentTemplate : %p", _Weap->EquipmentWeaponTemplate);//_Weap->EquipmentWeaponTemplate;
  //ImGui::Text("FullName : %s", name.c_str());
  ImGui::Text("InternalName : %s", name.c_str());



  ImGui::Text("ItemAddr          :  0x%p", _Weap); ImGui::SameLine();
  if (ImGui::Button("Copy to clipboard"))
  {
    ImGui::LogToClipboard();
    ImGui::LogText("%p", _Weap);
    ImGui::LogFinish();
  }


  if (_Weap->EquipmentName.Data)
  {
    FStringTostring(WeapName, _Weap->EquipmentName.Data);
    ImGui::Text("EquipmentName     :  %s", WeapName.c_str());
  }
  else
  {
    ImGui::Text("EquipmentName     :  ");
  }
  //item name
  if (_Weap->UserEquipmentName.Data)
  {

    FStringTostring(WeapName, _Weap->UserEquipmentName.Data);
    ImGui::Text("UserEquipmentName :  %s", WeapName.c_str());

    //change item name
    static char charBuff[32];
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    ImGui::InputText("Name  ", charBuff, sizeof(charBuff), IM_ARRAYSIZE(charBuff));
    ImGui::PopItemWidth();
    ImGui::SameLine();

    if (ImGui::Button("Change Name", ButtonProperty))
    {
      _Weap->UserEquipmentName.Data = charToWChar(charBuff);
      _Weap->UserEquipmentName.Count = strlen(charBuff)+1;
      _Weap->UserEquipmentName.Max = strlen(charBuff)+1;
    }

  }
  //forger name
  if (_Weap->UserForgerName.Data)
  {
    FStringTostring(WeapName, _Weap->UserForgerName.Data);
    ImGui::Text("UserForgerName    :  %s", WeapName.c_str());

    //change forger name
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    static char ncharBuff[32];
    ImGui::InputText("Forger", ncharBuff, sizeof(ncharBuff), IM_ARRAYSIZE(ncharBuff));
    ImGui::PopItemWidth();
    ImGui::SameLine();

    if (ImGui::Button("Change Forger Name", ButtonProperty))
    {
      _Weap->UserForgerName.Data = charToWChar(ncharBuff);// newNames.back();
      _Weap->UserForgerName.Count = strlen(ncharBuff)+1;//wcslen(t)+1;
      _Weap->UserForgerName.Max = strlen(ncharBuff)+1;//wcslen(t)+1;
    }
  }

  if (ImGui::TreeNode("___Main___"))
  {
    ImGui::Text("___Name___");


    ImGui::PushItemWidth(ImGui::GetWindowWidth()*.25f);
    if (_Weap->RandomBaseNames.Data)
      ShowCombo(_Weap->RandomBaseNames, _Weap->RandomBaseNames.Data[_Weap->NameIndex_Base].StringValue, _Weap->NameIndex_Base, "Base");
    else
      ImGui::Text("No RandomBaseNames found");


    if (_Weap->DamageReductionNames.Data)
      ShowCombo(_Weap->DamageReductionNames, _Weap->DamageReductionNames.Data[_Weap->NameIndex_DamageReduction].StringValue, _Weap->NameIndex_DamageReduction, "DamageReduction");
    else
      ImGui::Text("No DamageReductionNames found");
    if (_Weap->QualityDescriptorRealNames.Data)
      ShowCombo(_Weap->QualityDescriptorRealNames, _Weap->QualityDescriptorRealNames.Data[_Weap->NameIndex_QualityDescriptor].StringValue, _Weap->NameIndex_QualityDescriptor, "Quality");
    else
      ImGui::Text("No QualityDescriptorRealNames found");





    ImGui::InputFloat("WeaponDrawScaleMultiplier", &_Weap->WeaponDrawScaleMultiplier, 1, 100, "%.3f");
    ImGui::PopItemWidth();

    ImGui::Text("___Color___");
    ImGui::PushItemWidth(ImGui::GetWindowWidth()*.25f);
    //ImGui::InputFloat("R1", &_Weap->PrimaryColorOverride.R, 1, 100, "%.3f"); ImGui::SameLine();
    //ImGui::InputFloat("G1", &_Weap->PrimaryColorOverride.G, 1, 100, "%.3f"); ImGui::SameLine();
    //ImGui::InputFloat("B1", &_Weap->PrimaryColorOverride.B, 1, 100, "%.3f");

    //ImGui::InputFloat("R2", &_Weap->SecondaryColorOverride.R, 1, 100, "%.3f"); ImGui::SameLine();
    //ImGui::InputFloat("G2", &_Weap->SecondaryColorOverride.G, 1, 100, "%.3f"); ImGui::SameLine();
    //ImGui::InputFloat("B2", &_Weap->SecondaryColorOverride.B, 1, 100, "%.3f");

    ImGui::ColorPicker4("Primary", &(*(float*)&_Weap->PrimaryColorOverride.R)); ImGui::SameLine();
    ImGui::ColorPicker4("Secondary", &(*(float*)&_Weap->SecondaryColorOverride.R));

    ImGui::PopItemWidth();



    ImGui::TreePop();
  }


  if (ImGui::TreeNode("___Stats___"))
  {
    ImGui::InputInt("HHealth   ", &_Weap->StatModifiers[eHHealth]);
    ImGui::InputInt("HSpeed    ", &_Weap->StatModifiers[eHSpeed]);
    ImGui::InputInt("HDamage   ", &_Weap->StatModifiers[eHDamage]);
    ImGui::InputInt("HCast     ", &_Weap->StatModifiers[eHCast]);
    ImGui::InputInt("Ability1  ", &_Weap->StatModifiers[Ability1]);
    ImGui::InputInt("Ability2  ", &_Weap->StatModifiers[Ability2]);
    ImGui::InputInt("THealth   ", &_Weap->StatModifiers[eTHealth]);
    ImGui::InputInt("TSpeed    ", &_Weap->StatModifiers[eTSpeed]);
    ImGui::InputInt("TDamage   ", &_Weap->StatModifiers[eTDamage]);
    ImGui::InputInt("TRange    ", &_Weap->StatModifiers[eTRange]);
    ImGui::TreePop();
  }


  if (ImGui::TreeNode("___Other___"))
  {

    ImGui::PushItemWidth(ImGui::GetWindowWidth()*.25f);
    ImGui::InputInt("MaxEquipmentLevel    ", &(_Weap->MaxEquipmentLevel));
    ImGui::InputInt("DamageReductions1    ", &(_Weap->DamageReductions[0].PercentageReduction));
    ImGui::InputInt("DamageReductions2    ", &(_Weap->DamageReductions[1].PercentageReduction));
    ImGui::InputInt("DamageReductions3    ", &(_Weap->DamageReductions[2].PercentageReduction));
    ImGui::InputInt("DamageReductions4    ", &(_Weap->DamageReductions[3].PercentageReduction));

    ImGui::InputInt("DamageBonus    ", &(_Weap->WeaponDamageBonus));
    ImGui::InputInt("NumberOfProjectilesBonus    ", &(_Weap->WeaponNumberOfProjectilesBonus));
    ImGui::InputInt("SpeedOfProjectilesBonus    ", &(_Weap->WeaponSpeedOfProjectilesBonus));
    ImGui::InputInt("WeaponAdditionalDamageAmount    ", &(_Weap->WeaponAdditionalDamageAmount));

    ImGui::InputFloat("MaxRandomElementalDamageMultiplier", &_Weap->MaxRandomElementalDamageMultiplier, 1, 100, "%.3f");
    ImGui::InputFloat("WeaponSwingSpeedMultiplier", &_Weap->WeaponSwingSpeedMultiplier, 1, 100, "%.3f");

    ImGui::InputInt("WeaponReloadSpeedBonus                       ", &(_Weap->WeaponReloadSpeedBonus));
    ImGui::InputInt("WeaponKnockbackBonus                         ", &(_Weap->WeaponKnockbackBonus));
    ImGui::InputInt("WeaponAltDamageBonus                         ", &(_Weap->WeaponAltDamageBonus));
    ImGui::InputInt("WeaponBlockingBonus                          ", &(_Weap->WeaponBlockingBonus));
    ImGui::InputInt("WeaponClipAmmoBonus                          ", &(_Weap->WeaponClipAmmoBonus));
    ImGui::InputInt("AdditionalAllowedUpgradeResistancePoints     ", &(_Weap->AdditionalAllowedUpgradeResistancePoints));
    ImGui::InputInt("RequirementLevelOverride                     ", &(_Weap->RequirementLevelOverride));
    ImGui::InputInt("WeaponChargeSpeedBonus                       ", &(_Weap->WeaponChargeSpeedBonus));
    ImGui::InputInt("WeaponShotsPerSecondBonus                    ", &(_Weap->WeaponShotsPerSecondBonus));

    ImGui::InputInt("MaximumSellWorth", &_Weap->MaximumSellWorth);
    ImGui::InputInt("MinimumSellWorth", &_Weap->MinimumSellWorth);
    ImGui::InputInt("ShopMinimumSellWorth", &_Weap->ShopMinimumSellWorth);
    ImGui::InputInt("MaxEquipmentLevel", &_Weap->MaxEquipmentLevel);
    ImGui::InputInt("Level", &_Weap->Level);
    ImGui::InputInt("StoredMana", &_Weap->StoredMana);
    ImGui::InputInt("UserID", &_Weap->UserID);
    ImGui::InputFloat("MyRatingPercent", &_Weap->MyRatingPercent,1.0f);
    ImGui::InputFloat("MyRating", &_Weap->MyRating,1.0f);
    ImGui::InputInt("EquipmentID1", &_Weap->EquipmentID1);
    ImGui::InputInt("EquipmentID2", &_Weap->EquipmentID2);


    ImGui::PopItemWidth();
    ImGui::TreePop();
  }
  _Weap->bIsNameOnlineVerified = 1;
  _Weap->bIsForgerNameOnlineVerified = 1;
}
void ImGuiNonModableWeapon(UHeroEquipment* _Weap)
{
  std::string WeapName;

  if (ImGui::Button("Give##weap"))
  {
    giveDroppedEquipment.push((UHeroEquipment*)_Weap);
  }




  ImGui::Text("ItemAddr          :  0x%p", _Weap); ImGui::SameLine();


  if (_Weap->EquipmentName.Data)
  {
    FStringTostring(WeapName, _Weap->EquipmentName.Data);
    ImGui::Text("EquipmentName     :  %s", WeapName.c_str());
  }
  else
  {
    ImGui::Text("EquipmentName     :  ");
  }
  //item name
  if (_Weap->UserEquipmentName.Data)
  {

    FStringTostring(WeapName, _Weap->UserEquipmentName.Data);
    ImGui::Text("UserEquipmentName :  %s", WeapName.c_str());
  }
  //forger name
  if (_Weap->UserForgerName.Data)
  {
    FStringTostring(WeapName, _Weap->UserForgerName.Data);
    ImGui::Text("UserForgerName    :  %s", WeapName.c_str());
  }

  if (ImGui::TreeNode("___Main___"))
  {
    ImGui::Text("___Name___");


    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    // Item basename display
    std::string RandomBaseNames;
    FStringTostring(RandomBaseNames, _Weap->RandomBaseNames.Data[_Weap->NameIndex_Base].StringValue);
    ImGui::Text(std::string("RandomBaseNames : "+ RandomBaseNames).c_str());



    // Item damagereductionName display
    std::string DamageReductionNames;
    FStringTostring(DamageReductionNames, _Weap->DamageReductionNames.Data[_Weap->NameIndex_DamageReduction].StringValue);
    ImGui::Text(std::string("DamageReductionNames : "+ DamageReductionNames).c_str());


    // Item QualityDescriptorRealNames display
    std::string QualityDescriptorRealNames;
    FStringTostring(QualityDescriptorRealNames, _Weap->QualityDescriptorRealNames.Data[_Weap->NameIndex_QualityDescriptor].StringValue);
    ImGui::Text(std::string("QualityDescriptorRealNames : "+ QualityDescriptorRealNames).c_str());

    ImGui::TreePop();
  }


  if (ImGui::TreeNode("___Stats___"))
  {
    ImGui::Text(std::string("HHealth   : " + std::to_string(_Weap->StatModifiers[eHHealth])).c_str());
    ImGui::Text(std::string("HSpeed    : " + std::to_string(_Weap->StatModifiers[eHSpeed])).c_str());
    ImGui::Text(std::string("HDamage   : " + std::to_string(_Weap->StatModifiers[eHDamage])).c_str());
    ImGui::Text(std::string("HCast     : " + std::to_string(_Weap->StatModifiers[eHCast])).c_str());
    ImGui::Text(std::string("Ability1  : " + std::to_string(_Weap->StatModifiers[Ability1])).c_str());
    ImGui::Text(std::string("Ability2  : " + std::to_string(_Weap->StatModifiers[Ability2])).c_str());
    ImGui::Text(std::string("THealth   : " + std::to_string(_Weap->StatModifiers[eTHealth])).c_str());
    ImGui::Text(std::string("TSpeed    : " + std::to_string(_Weap->StatModifiers[eTSpeed])).c_str());
    ImGui::Text(std::string("TDamage   : " + std::to_string(_Weap->StatModifiers[eTDamage])).c_str());
    ImGui::Text(std::string("TRange    : " + std::to_string(_Weap->StatModifiers[eTRange])).c_str());
    ImGui::TreePop();
  }
}
std::string VirtualKeyCodeToString(UCHAR virtualKey)
{
  UINT scanCode = MapVirtualKey(virtualKey, MAPVK_VK_TO_VSC);

  CHAR szName[128];
  int result = 0;
  switch (virtualKey)
  {
    case VK_LEFT: case VK_UP: case VK_RIGHT: case VK_DOWN:
    case VK_RCONTROL: case VK_RMENU:
    case VK_LWIN: case VK_RWIN: case VK_APPS:
    case VK_PRIOR: case VK_NEXT:
    case VK_END: case VK_HOME:
    case VK_INSERT: case VK_DELETE:
    case VK_DIVIDE:
    case VK_NUMLOCK:
      scanCode |= KF_EXTENDED;
    default:
      result = GetKeyNameTextA(scanCode << 16, szName, 128);
  }
  if (result == 0)
    throw std::system_error(std::error_code(GetLastError(), std::system_category()),
                            "WinAPI Error occured.");
  return szName;
}
void ImguiPlayer(APlayerController* _controller)
{


  std::string tmpName;
  ADunDefPlayer* pPawn = (ADunDefPlayer*)_controller->Pawn;
  if (pPawn->MyPlayerHero &&pPawn->MyPlayerHero->HeroName.Data)
  {
    FStringTostring(tmpName, pPawn->MyPlayerHero->HeroName);
  }
  if (!tmpName.length() >= 1)
    tmpName = "NONE";

  ImGui::Text("PlayerName : ", tmpName.c_str());
  ImGui::PushItemWidth(ImGui::GetWindowWidth()*.70f);

  ImGui::InputInt("Health", &pPawn->Health);
  ImGui::InputFloat3("Location", &((pPawn->Location.X)), 2);
  ImGui::InputFloat("Speed", &((pPawn->PlayerGroundSpeed)), 2);
  ImGui::InputFloat("Size", &pPawn->DrawScale, .1);



  ImGui::InputFloat3("color1", &((pPawn->MyPlayerHero->color1.R)), 2);
  ImGui::InputFloat3("color2", &((pPawn->MyPlayerHero->color2.R)), 2);
  ImGui::InputFloat3("color3", &((pPawn->MyPlayerHero->color3.R)), 2);

  if (ImGui::Button("Randomize Colors"))
  {


    pPawn->MyPlayerHero->color1.R = (rand() % 180) - 90;
    pPawn->MyPlayerHero->color1.G = (rand() % 180) - 90;
    pPawn->MyPlayerHero->color1.B = (rand() % 180) - 90;

    pPawn->MyPlayerHero->color2.R = (rand() % 180) - 90;
    pPawn->MyPlayerHero->color2.G = (rand() % 180) - 90;
    pPawn->MyPlayerHero->color2.B = (rand() % 180) - 90;

    pPawn->MyPlayerHero->color3.R = (rand() % 180) - 90;
    pPawn->MyPlayerHero->color3.G = (rand() % 180) - 90;
    pPawn->MyPlayerHero->color3.B = (rand() % 180) - 90;


  }


  ImGui::InputInt("XP", &((pPawn->MyPlayerHero->HeroExperience)), 2);
  ImGui::SameLine();

  if (ImGui::Button("Max XP"))
  {
    pPawn->MyPlayerHero->HeroExperience = 1155827506;
  }
  ImGui::PopItemWidth();

}
void GetKeybinds()
{
  std::ifstream SettingsFile("d.txt");
  SettingsFile >> ToggleKey;
  SettingsFile >> EndKey;
  SettingsFile >> TeleportPlayerKey;
  SettingsFile >> NewTeleportKey;
  SettingsFile.close();
}
void SaveKeybinds()
{
  std::ofstream SettingsFile("d.txt");
  SettingsFile << ToggleKey;
  SettingsFile << "\n";
  SettingsFile << EndKey;
  SettingsFile << "\n";
  SettingsFile << TeleportPlayerKey;
  SettingsFile << "\n";
  SettingsFile << NewTeleportKey;
  SettingsFile.close();
}
bool ChangeKeybindRequest(bool & _bKeyChangeRequest, int & _Key)
{

  ImGuiIO& io = ImGui::GetIO();



  static bool localKeyGrabbed = FALSE;
  static int KeyChangeWindow = 0;
  static int KeyPressed = 0;

  if (_bKeyChangeRequest)
  {

    if (!localKeyGrabbed)
    {
      ImGui::Text("Press a key to set a keybind");
      for (int i = 0; i < IM_ARRAYSIZE(io.KeysDown); i++) if (ImGui::IsKeyPressed(i))
        {
          KeyPressed = i;
          localKeyGrabbed = TRUE;

      }
    }
    else if (KeyChangeWindow > 5)
    {
      KeyChangeWindow = 0;
      localKeyGrabbed = FALSE;
      _Key = KeyPressed;
      SaveKeybinds();
      //_bKeyChangeRequest = TRUE;
    }
    else
    {
      KeyChangeWindow++;
      ImGui::Text("%d", KeyChangeWindow);
      return FALSE;
    }

  }
  return TRUE;
}
void ImguiInit()
{



  ImGui::SetWindowSize({580.0f,400.0f});

  ImGuiStyle& style = ImGui::GetStyle();
  ImVec4* colors = ImGui::GetStyle().Colors;
  colors[ImGuiCol_FrameBg] = ImVec4(0.23f, 0.23f, 0.23f, 0.54f);
  colors[ImGuiCol_FrameBgHovered] = ImVec4(0.00f, 0.69f, 0.25f, 0.40f);
  colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.49f, 0.16f, 1.00f);
  colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 0.73f, 0.11f, 1.00f);
  colors[ImGuiCol_CheckMark] = ImVec4(0.00f, 0.73f, 0.11f, 1.00f);
  colors[ImGuiCol_SliderGrab] = ImVec4(0.07f, 0.58f, 0.23f, 0.40f);
  colors[ImGuiCol_SliderGrabActive] = ImVec4(0.00f, 0.73f, 0.11f, 1.00f);
  colors[ImGuiCol_Button] = ImVec4(0.06f, 0.59f, 0.23f, 0.40f);
  colors[ImGuiCol_ButtonHovered] = ImVec4(0.00f, 0.72f, 0.73f, 1.00f);
  colors[ImGuiCol_ButtonActive] = ImVec4(0.00f, 0.73f, 0.11f, 1.00f);
  colors[ImGuiCol_Header] = ImVec4(0.00f, 0.56f, 0.00f, 1.00f);



  style.WindowRounding = 0;
  style.WindowTitleAlign = ImVec2(0.5f, 0.5f);

}
void ImguiMenuItemModding()
{

  // LAST DROPPED ITEM
  if (ImGui::CollapsingHeader("Last Dropped Item", ImGuiTreeNodeFlags_None))
  {

    if (ConsoleDebug)
    {
      std::cout << "LastDropped Node\n";
    }

    if (LastDroppedWep)
    {
      static std::string lastdropName;
      RequestThreadSafeString(lastdropName, LastDroppedWep);
      ImGuiWeapon(LastDroppedWep,lastdropName);

    }
    else
    ImGui::Text("Drop an item to start modding");
  }
  // ALL ITEMS ON HERO
  if (ImGui::CollapsingHeader("Equipped Item", ImGuiTreeNodeFlags_None))
  {
    bool valid = true;
    if (!CheckVarsForNull())
    {
      valid = false;
    }
    if(valid)
    {
      auto tmpPlayerHero = ((ADunDefPlayerController*)controller)->MyHero;//->HeroEquipments;
      static int tmpIterator = 0;

      if (tmpPlayerHero->HeroEquipments.Count <= 0) valid = false;

      if(valid)
      {


        if (tmpIterator > tmpPlayerHero->HeroEquipments.Count - 1)
        {
          tmpIterator = 0;
        }
        ImGui::Text("%d / %d", tmpIterator + 1, tmpPlayerHero->HeroEquipments.Count); ImGui::SameLine();
        if (ImGui::Button("<<"))
        {
          tmpIterator = 0;
        }ImGui::SameLine();
        if (ImGui::Button("<"))
        {
          if (tmpIterator > 0)
            tmpIterator -= 1;
        } ImGui::SameLine();
        if (ImGui::Button(">"))
        {
          if (tmpIterator < tmpPlayerHero->HeroEquipments.Count - 1)
            tmpIterator += 1;
        }ImGui::SameLine();
        if (ImGui::Button(">>"))
        {
          if (tmpIterator < tmpPlayerHero->HeroEquipments.Count - 1)
            tmpIterator = tmpPlayerHero->HeroEquipments.Count - 1;
        }


        ImGui::SameLine();
        if (ImGui::Button("Max"))
        {

          MaxWeapon(tmpPlayerHero->HeroEquipments.Data[tmpIterator]);
        }

        static std::string heroEqipmentName;
        RequestThreadSafeString(heroEqipmentName, tmpPlayerHero->HeroEquipments.Data[tmpIterator]->ObjectArchetype);
        ImGuiWeapon(tmpPlayerHero->HeroEquipments.Data[tmpIterator], heroEqipmentName);

        //ImGui::TreePop();
      }
      else
      {
        ImGui::Text("No equiped items");
      }
    }
  }
  // ITEM BOX ITEMS
  if (ImGui::CollapsingHeader("Item box", ImGuiTreeNodeFlags_None))
  {
    bool validItemBox = true;
    if (!CheckVarsForNull())
    {
      validItemBox = false;
    }

    if (!heroManager)
    {
      validItemBox = false;
    }

    if(validItemBox)
    {
      auto tmpItemEquipment = heroManager->ItemBoxEquipments;
      auto tmpPlayerHero = ((ADunDefPlayerController*)controller)->MyHero;//->HeroEquipments;
      static int tmpIterator = 0;
      ImGui::Text("%d items in forge", tmpItemEquipment.Count); //ImGui::SameLine();
      if (tmpItemEquipment.Count <= 0)
      {
        validItemBox = false;
      }
      //filter
      if (ImGui::TreeNode("Filter Item box"))
      {

        ImGui::InputInt("Hero Health", &ItemBoxFilterStats[eHHealth]);
        ImGui::InputInt("Hero Speed", &ItemBoxFilterStats[eHSpeed]);
        ImGui::InputInt("Hero Damage", &ItemBoxFilterStats[eHDamage]);
        ImGui::InputInt("Hero Cast", &ItemBoxFilterStats[eHCast]);
        ImGui::InputInt("Ability1", &ItemBoxFilterStats[Ability1]);
        ImGui::InputInt("Ability2", &ItemBoxFilterStats[Ability2]);
        ImGui::InputInt("Tower Health", &ItemBoxFilterStats[eTHealth]);
        ImGui::InputInt("Tower Speed", &ItemBoxFilterStats[eTSpeed]);
        ImGui::InputInt("Tower Damage", &ItemBoxFilterStats[eTDamage]);
        ImGui::InputInt("Tower Range", &ItemBoxFilterStats[eTRange]);




        static bool bFilterByStatLockAbove = TRUE;
        static bool bFilterByStatLockBelow = TRUE;
        static bool bFilterByStatUnlockAbove = TRUE;
        static bool bFilterByStatUnlockBelow = TRUE;

        if (!bFilterByStatUnlockAbove)
          bFilterByStatUnlockAbove = FilterItemBoxByStats(tmpItemEquipment, FALSE, TRUE, ItemBoxFilterStats);
          else if (!bFilterByStatUnlockBelow)
          bFilterByStatUnlockBelow = FilterItemBoxByStats(tmpItemEquipment, FALSE, TRUE, ItemBoxFilterStats);

          else if (!bFilterByStatLockAbove)
          bFilterByStatLockAbove = FilterItemBoxByStats(tmpItemEquipment, TRUE, FALSE, ItemBoxFilterStats);
          else if (!bFilterByStatLockBelow)
          bFilterByStatLockBelow = FilterItemBoxByStats(tmpItemEquipment, TRUE, FALSE, ItemBoxFilterStats);

        if (ImGui::Button("Lock /\\"))
        {
          bFilterByStatLockAbove = FALSE;
        }ImGui::SameLine();
        if (ImGui::Button("Lock \\/"))
        {
          bFilterByStatLockBelow = FALSE;
        }ImGui::SameLine();
        if (ImGui::Button("Unlock /\\"))
        {
          bFilterByStatUnlockAbove = FALSE;
        }ImGui::SameLine();
        if (ImGui::Button("Unlock \\/"))
        {
          bFilterByStatUnlockBelow = FALSE;
        }

        if (tmpIterator > tmpItemEquipment.Count - 1)
        {
          tmpIterator = 0;
        }


        ImGui::TreePop();
      }
      if (ImGui::TreeNode("Mod Item box"))
      {
        bool valid = true;
        if (!tmpItemEquipment.Count)
        {
          ImGui::Text("No items in box");
          ImGui::TreePop();
          valid = false;
        }

        //item modding
        ImGui::Text("%d / %d", tmpIterator + 1, tmpItemEquipment.Count); ImGui::SameLine();
        if (ImGui::Button("<<"))
        {
          tmpIterator = 0;
        }ImGui::SameLine();
        if (ImGui::Button("<"))
        {
          if (tmpIterator > 0)
            tmpIterator -= 1;
        } ImGui::SameLine();
        if (ImGui::Button(">"))
        {
          if (tmpIterator < tmpItemEquipment.Count - 1)
            tmpIterator += 1;
        }ImGui::SameLine();
        if (ImGui::Button(">>"))
        {
          if (tmpIterator < tmpItemEquipment.Count - 1)
            tmpIterator = tmpItemEquipment.Count - 1;
        }
        ImGui::SameLine();
        if (ImGui::Button("Max"))
        {
          MaxWeapon(tmpItemEquipment.Data[tmpIterator]);
        }
        ImGui::SameLine();

        static bool bMaxItemBox = TRUE;
        if (!bMaxItemBox)
          bMaxItemBox = MaxItemBox(tmpItemEquipment);
        if (ImGui::Button("Max box"))
        {
          bMaxItemBox = FALSE;
        }
        if(valid)
        {
          static std::string itemBoxName;
          RequestThreadSafeString(itemBoxName, tmpItemEquipment.Data[tmpIterator]->ObjectArchetype);
          ImGuiWeapon(tmpItemEquipment.Data[tmpIterator], itemBoxName);

          ImGui::TreePop();
        }
      }
    }
  }
  // Give items
  if (ImGui::CollapsingHeader("Spawn Items", ImGuiTreeNodeFlags_None))
  {
    static char FilterItemsBuffer[255];
    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .25f);
    ImGui::InputText("##Filter Items", FilterItemsBuffer, sizeof(FilterItemsBuffer));
    ImGui::PopItemWidth();
    ImGui::SameLine();
    if (ImGui::Button("AddItem"))
    {
      bGiveItems = true;
    }
    ImGui::SameLine();
    if (ImGui::Button("Select All"))
    {
      for (int i = 0; i < AllItems.size(); i++)
      {
        ItemSelectable[i] = TRUE;
      }
    }
    ImGui::SameLine();
    if (ImGui::Button("Refresh Item list"))
    {
      bRefreshAllItemVec = true;
      refreshIndicator = "Refreshing...";
    }
    ImGui::SameLine();
    ImGui::Text(refreshIndicator.c_str());

    ImGui::Text("Items Found %d", AllItems.size());
    ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), "Hold Ctrl to select multiple.");
    ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 5.0f);
    ImGui::BeginChild("Items", ImVec2(0, 0), true);


    ImGui::Columns(3, NULL, false);
    for (int n = 0; n < AllItems.size(); n++)
    {
      std::string filterbuff(AllItems[n]);
      std::transform(filterbuff.begin(), filterbuff.end(), filterbuff.begin(), [](unsigned char c) { return std::tolower(c); });
      if (filterbuff.length() > 0)
      {
        if (filterbuff.find(FilterItemsBuffer) != std::string::npos) {
          if (ImGui::Selectable(AllItems[n].c_str(), ItemSelectable[n]))
          {
            if (!ImGui::GetIO().KeyCtrl)    // Clear selection when CTRL is not held
              memset(ItemSelectable, 0, AllItems.size());
            ItemSelectable[n] ^= 1;
          }
          ImGui::NextColumn();
        }
      }
      else
      {
        if (ImGui::Selectable(AllItems[n].c_str(), ItemSelectable[n]))
        {
          if (!ImGui::GetIO().KeyCtrl)    // Clear selection when CTRL is not held
            memset(ItemSelectable, 0, AllItems.size());
          ItemSelectable[n] ^= 1;
        }
        ImGui::NextColumn();
      }
    }
    ImGui::Columns(1);
    ImGui::EndChild();
    ImGui::PopStyleVar();
    //ImGui::TreePop();
  }
  // TODO : STRESS TEST THIS
  if (ImGui::CollapsingHeader("Floor Items", ImGuiTreeNodeFlags_None))
  {

    if (ImGui::Button("Refresh Dropped Equipment"))
      bRefreshDroppedEquipment = true;

    static int tmpIterator = 0;
    if (tmpIterator > allDroppedEquipment.size() - 1 || allDroppedEquipment.size() == 0 ) tmpIterator = 0;

    ImGui::Text("%d / %d", tmpIterator + 1, allDroppedEquipment.size()); ImGui::SameLine();
    if (ImGui::Button("<<"))
    {
      tmpIterator = 0;
    }ImGui::SameLine();
    if (ImGui::Button("<"))
    {
      if (tmpIterator > 0)
        tmpIterator -= 1;
    } ImGui::SameLine();
    if (ImGui::Button(">"))
    {
      if (tmpIterator < allDroppedEquipment.size() - 1)
        tmpIterator += 1;
    }ImGui::SameLine();
    if (ImGui::Button(">>"))
    {
      if (tmpIterator < allDroppedEquipment.size() - 1)
        tmpIterator = allDroppedEquipment.size() - 1;
    }
    if(allDroppedEquipment.size() > 0)
    {
      static std::string name;
      RequestThreadSafeString(name, (ADunDefDroppedEquipment*)allDroppedEquipment[tmpIterator]->ObjectArchetype);
      ImGuiDroppedEquipment((ADunDefDroppedEquipment*)allDroppedEquipment[tmpIterator],name);
    }
  }

  //// TODO : FIX THIS FIND HOW TO ACCESS OTHER PLAYERS ITEMS
  //if (ImGui::CollapsingHeader("Heroes", ImGuiTreeNodeFlags_None))
  //{
  //	ADunDefPawn* Pawn = GetFirstPawnInList();
  //	while (Pawn)
  //	{
  //		if (!Pawn->IsPlayerPawn()) continue;
  //		auto Player = (ADunDefPlayer*)Pawn;
  //		std::string PlayerName;
  //		FStringTostring(PlayerName, Player->MyPlayerHero->GetCustomName());

  //		if(ImGui::TreeNode(PlayerName.c_str())){


  //			static int tmpIterator = 0;
  //			if (tmpIterator > Player->MyPlayerHero->HeroEquipments.Count - 1 || Player->MyPlayerHero->HeroEquipments.Count == 0) tmpIterator = 0;

  //			ImGui::Text("%d / %d", tmpIterator + 1, Player->MyPlayerHero->HeroEquipments.Count); ImGui::SameLine();
  //			if (ImGui::Button("<<"))
  //			{
  //				tmpIterator = 0;
  //			}ImGui::SameLine();
  //			if (ImGui::Button("<"))
  //			{
  //				if (tmpIterator > 0)
  //					tmpIterator -= 1;
  //			} ImGui::SameLine();
  //			if (ImGui::Button(">"))
  //			{
  //				if (tmpIterator < Player->MyPlayerHero->HeroEquipments.Count - 1)
  //					tmpIterator += 1;
  //			}ImGui::SameLine();
  //			if (ImGui::Button(">>"))
  //			{
  //				if (tmpIterator < Player->MyPlayerHero->HeroEquipments.Count - 1)
  //					tmpIterator = Player->MyPlayerHero->HeroEquipments.Count - 1;
  //			}
  //			if (Player->MyPlayerHero->HeroEquipments.Count > 0)
  //			{
  //				ImGuiNonModableWeapon(Player->MyPlayerHero->HeroEquipments.Data[tmpIterator]);
  //			}
  //			ImGui::TreePop();
  //		}
  //		Pawn = (ADunDefPawn*)Pawn->NextPawn;
  //	}

  //	
  //}

}
void ImguiChangeKeyBinds()
{
  if (bToggleKeyChangeRequest)
    ChangeKeybindRequest(bToggleKeyChangeRequest, ToggleKey);
  if (bEndKeyKeyChangeRequest)
    ChangeKeybindRequest(bEndKeyKeyChangeRequest, EndKey);
  if (NewTeleportKeyKeyChangeRequest)
    ChangeKeybindRequest(NewTeleportKeyKeyChangeRequest, NewTeleportKey);
  if (TeleportPlayerKeyKeyChangeRequest)
    ChangeKeybindRequest(TeleportPlayerKeyKeyChangeRequest, TeleportPlayerKey);
}
void ImguiMenuSettings()
{
  ImVec2 settingsbuttonProperty = ImVec2(275, 20);
  if (ImGui::TreeNode("Menu Settings"))
  {

    if (ImGui::Button("Set Menu Toggle Keybind", settingsbuttonProperty))
    {
      bToggleKeyChangeRequest = TRUE;
    }
    ImGui::SameLine();

    std::string tmpString = "Current : " + VirtualKeyCodeToString(ToggleKey);
    ImGui::Text(tmpString.c_str(), ToggleKey, ToggleKey);

    if (ImGui::Button("Set Menu End Keybind", settingsbuttonProperty))
    {
      bEndKeyKeyChangeRequest = TRUE;
    }
    ImGui::SameLine();
    tmpString = "Current : " + VirtualKeyCodeToString(EndKey);
    ImGui::Text(tmpString.c_str(), EndKey, EndKey);

    if (ImGui::Button("Set Get Teleport Keybind", settingsbuttonProperty))
    {
      NewTeleportKeyKeyChangeRequest = TRUE;
    }
    ImGui::SameLine();
    tmpString = "Current : " + VirtualKeyCodeToString(NewTeleportKey);
    ImGui::Text(tmpString.c_str(), NewTeleportKey, NewTeleportKey);


    if (ImGui::Button("Set Teleport Keybind", settingsbuttonProperty))
    {
      TeleportPlayerKeyKeyChangeRequest = TRUE;
    }
    ImGui::SameLine();
    tmpString = "Current : " + VirtualKeyCodeToString(TeleportPlayerKey);
    ImGui::Text(tmpString.c_str(), TeleportPlayerKey, TeleportPlayerKey);


    ImguiChangeKeyBinds();

    ImGui::TreePop();
  }
  if (ImGui::TreeNode("Cheat Settings"))
  {
    ImGui::InputInt("Multiply By", &MultiplyRewardsBy);
    //ImGui::SliderInt("Reward Multiply", &MultiplyRewardsBy, 0, 10000);
    ImGui::TreePop();
  }
  if (ImGui::TreeNode("AutoLoot Settings"))
  {
    int FilterMax = 500;
    ImGui::InputInt("Hero Health", &ItemPickUpFilterStats[eHHealth]);
    ImGui::InputInt("Hero Speed", &ItemPickUpFilterStats[eHSpeed]);
    ImGui::InputInt("Hero Damage", &ItemPickUpFilterStats[eHDamage]);
    ImGui::InputInt("Hero Cast", &ItemPickUpFilterStats[eHCast]);
    ImGui::InputInt("Ability1", &ItemPickUpFilterStats[Ability1]);
    ImGui::InputInt("Ability2", &ItemPickUpFilterStats[Ability2]);
    ImGui::InputInt("Tower Health", &ItemPickUpFilterStats[eTHealth]);
    ImGui::InputInt("Tower Speed", &ItemPickUpFilterStats[eTSpeed]);
    ImGui::InputInt("Tower Damage", &ItemPickUpFilterStats[eTDamage]);
    ImGui::InputInt("Tower Range", &ItemPickUpFilterStats[eTRange]);

    ImGui::Combo("Quality", &ItemFilterQuality, ItemQualitys,IM_ARRAYSIZE(ItemQualitys));

    //ImGui::Combo("combo 3 (array)", &item_current_3, items, IM_ARRAYSIZE(items));

    ImGui::Text("Items Added : %d   |  Items Filtered : %d", ItemsAdded, TotalItemsCkd); ImGui::SameLine();
    if (ImGui::Button("Reset"))
    {
      ItemsAdded = 0;
      TotalItemsCkd = 0;
    }
    ImGui::TreePop();
  }
}
void ImguiMenuLobby()
{
  if (!CheckVarsForNull()){return;}

  if (ImGui::TreeNode("Lobby Settings"))
  {
    ImGui::Checkbox(("Enable Gravity"), &bLobbyGravity);
    ImGui::Checkbox(("Enable Jump Height"), &bLobbyJump);
    ImGui::Checkbox(("Enable Scale"), &bLobbyScale); ImGui::SameLine();
    ImGui::Checkbox(("Enable Enemy Scale"), &bScaleEnemy);

    ImGui::PushItemWidth(ImGui::GetWindowWidth() * .50f);
    ImGui::InputFloat("Gravity", &Gravity, .1, 100, "%.3f");
    ImGui::InputFloat("Jump Height", &JumpHeight, 100, 100, "%.3f");
    ImGui::InputFloat("Scale", &DrawScale, .1, 100, "%.3f");
    ImGui::InputFloat("Enemy Scale", &eDrawScale, .1, 100, "%.3f");

    //player
    ImGui::InputFloat3("Teleport Location", &((NewLocation.X)), 2);

    ImGui::PopItemWidth();



    if (ImGui::Button("Move Player", ImVec2(125, 25)))
    {

      controller->Pawn->Location = NewLocation;

    }ImGui::SameLine();
    if (ImGui::Button("Get Location", ImVec2(125, 25)))
    {

      NewLocation = controller->Pawn->Location;

    }

    ImGui::TreePop();
  }

  if (ImGui::TreeNode("Spawn enemy"))
  {
    if (!CheckVarsForNull())
    {
      ImGui::TreePop();
    }
    else
    {
      static bool bInit = false;
      if (!bInit)
      {
        bInit = true;
        bRefreshEnemyEntrys = true;
      }
      if (ImGui::Button("Refresh Enemy Entrys"))
      {
        bRefreshEnemyEntrys = true;
      }

      FVector pos; pos.X = 0; pos.Y = 0; pos.Z = 0;
      FRotator r; r.Pitch = 0; r.Roll = 0; r.Yaw = 0;

      static int summonAmmount = 1;
      static int ammountLeftToSpawn = 0;
      ImGui::InputInt("SummonAmmount", &summonAmmount);

      for (int i = 0; i < enemys.size(); i++)
      {
        std::string eName = enemyNames[i];
				if (eName.find("PersistentLevel") != std::string::npos) break;
				std::string s = "Spawn##" + std::to_string(i);
				
				if (ImGui::Button(s.c_str()))
				{
					for (int j = 0; j < summonAmmount; j++)
						enemysToSpawn.push(i);
						
				}ImGui::SameLine();
				ImGui::Text(eName.c_str());
			}

			ImGui::TreePop();
		}
	}

	TArray<ULocalPlayer*>*Contollers = GetPlayerControllers();

	if (Contollers)
		for (int i = 0; i < Contollers->Count; i++)
		{
			std::string NodeName = "Player : " + std::to_string(i);
			if (ImGui::TreeNode(NodeName.c_str()))
			{
				ImguiPlayer((APlayerController*)Contollers->Data[i]->Actor);
				ImGui::TreePop();
			}
		}
}
void ImguiMenuESP()
{
	ImGui::Checkbox(("Enable ESP"), &bEspEnabled);
	ImGui::Checkbox(("Draw Route "), &bDrawRoute);
	ImGui::Checkbox(("Enable Trace Lines"), &bEspLines);
	ImGui::Checkbox(("Enable Health"), &bEspHealth);
	ImGui::Checkbox(("Enable Box"), &bEspBox);
	ImGui::Checkbox(("Show Vacuum Point"), &bShowVacuumPos);
	ImGui::Checkbox(("Show Teleport Point"), &bShowTeleportPos);
}
void ImguiMenuCheats()
{
	ImGui::Columns(2, "mixed");
	ImGui::Separator();
	ImGui::Checkbox(("Enable Godmode    "), &bGodMode);
	ImGui::Checkbox(("1 Kill Per Wave"), &bKillOneToAdvance);
	ImGui::Checkbox(("AutoKill"), &bAutoKill);
	ImGui::Checkbox(("No Abilities Cooldown"), &bNoCD);
	ImGui::Checkbox(("Unlimited mana for towers"), &bUnlimManaBuild);
	ImGui::Checkbox(("Unlimited mana for shops"), &bUnlimManaShop);
	ImGui::Checkbox(("Multiply Wave rewards"), &bMultiplyReward);
	ImGui::Checkbox(("Personal Towers"), &bPersonalTowers);

	ImGui::NextColumn();
	ImGui::Checkbox(("Enable AutoPickup "), &bAutoPickUp);
	ImGui::Checkbox(("Enable LootShower "), &bLootShower);
	ImGui::Checkbox(("Enable Vacuum Hack"), &bVacuumHack);


	if (ImGui::Button("Move Vaccum Point", ImVec2(125, 25)))
	{
		if (CheckVarsForNull())
		{
			VacuumHackPos = controller->Pawn->Location;
		}
	}
	
	ImGui::Checkbox(("Teleport Players Safe"), &bTeleportPlayersSafe);
	ImGui::Checkbox(("Teleport Players Point"), &bTeleportPlayersPoint);
	
	ImGui::Checkbox(("AutoXp"), &bAutoXp);

	if (UnreleasedCheats)
	{
		ImGui::Checkbox(("ChangeRewards"), &ChangeRewards);
		ImGui::Checkbox(("ManaTrail"), &bManaTrail);
	}


	ImGui::Columns(1);
	ImGui::Separator();
	ImGui::PushItemWidth(ImGui::GetWindowWidth()*.50f);
	ImGui::InputInt("WaveNum", &WaveSkipToNum); ImGui::SameLine();
	ImGui::Checkbox(("Skip Next Wave"), &bWaveSkip); ImGui::SameLine();
	ImGui::Checkbox(("Lock"), &bLockLevelAt);

	if (UnreleasedCheats){

		ImGui::InputInt("ManaAmmount", &manaCount);

		ImGui::InputInt("Score", &newScore); ImGui::SameLine();
		if (ImGui::Button("Update Score", ButtonProperty))
		{
			((ADunDefPlayerController*)controller)->Score = newScore;
		}ImGui::SameLine();
		ImGui::Checkbox(("LockScore"), &UpdateScore);



		/*if (ImGui::Button("Unlock All Achievements", ImVec2(125, 25)))
		{
			heroManager->AchievementEntries;
			for (int i = 0; i < heroManager->TheAchievementManager->AchievementEntries.Count; i++)
			{
				heroManager->TheAchievementManager->DoUnlockAchivement((ADunDefPlayerController*)controller,
					heroManager->TheAchievementManager->AchievementEntries.Data[i].AchievementName.Data[0],
					2,
					0,
					1,
					0);
			}
		}*/
		if (ImGui::Button("Cosmetics On"))
		{
			for (auto v : Cosmetics)
			{
				((ADunDefPawn*)(((ADunDefPlayerController*)controller)->Pawn))->SpawnCharacterNonLoopingEmitter(v->EffectToSpawn, 0, NULL);
			}
		}
	}

	ImGui::PopItemWidth();

	ImGui::SameLine();
	/*if (ImGui::Button("Update name", ButtonProperty))
	{
		((ADunDefPlayerController*)controller)->MyHero->HeroName = (wchar_t*)L"\0";
	}*/

	


}
void ImGuiDebug()
{
	ImGui::Begin("DebugMenu");

	if (!CheckVarsForNull())
	{
		ImGui::End();
		return;
	}

	//auto tmpItemEquipment = heroManager->ItemBoxEquipments;
	//
	//for (int i = 0; i < heroManager->ItemBoxEquipments.Count; i++)
	//{
	//	ImGui::Text("%s", heroManager->ItemBoxEquipments.Data[i]->ObjectArchetype->GetFullName());
	//}




	ImGui::End();
}
void ImguiMenu()
{

	if (!ShowMenu)
		return;
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	static bool init = FALSE;
	if (!init)
	{
		init = !init;
		ImguiInit();
	}
	if (bShowDEMOWINDOW)
	{
		bool tmp = TRUE;
		ImGui::ShowDemoWindow(&tmp);
	}

	if (ImGuiDebugMenu)
		ImGuiDebug();



	ImGui::Begin(ModMenuName.c_str(), NULL);
	ImGui::BeginGroup();

	static float buttonPropertyY = 40;

	//ImGui::Text("X : %f    |     Y : %f", tmpImGuiSize.x, tmpImGuiSize.y);
	ImGui::Columns(5, "mixed");

	if (ImGui::Button("Cheats", ImVec2(-FLT_MIN, buttonPropertyY)))
	{
		MenuTab = CHEATS;
	}

	ImGui::NextColumn();
	if (ImGui::Button("ESP", ImVec2(-FLT_MIN, buttonPropertyY)))
	{
		MenuTab = ESP;
	}

	ImGui::NextColumn();
	if (ImGui::Button("LOBBY", ImVec2(-FLT_MIN, buttonPropertyY)))
	{
		MenuTab = LOBBY;
	}

	ImGui::NextColumn();
	if (ImGui::Button("SETTINGS", ImVec2(-FLT_MIN, buttonPropertyY)))
	{
		MenuTab = SETTINGS;
	}

	ImGui::NextColumn();
	if (ImGui::Button("ITEM MODDING", ImVec2(-FLT_MIN, buttonPropertyY)))
	{
		MenuTab = ITEM_MODDING;
	}
	ImGui::Columns(1);
	ImGui::EndGroup();



	auto tmo = ((ADunDefPlayerController*)controller);
	static bool bAntiCheatDetected = FALSE;
	if (CheckVarsForNull() && tmo)
	{

		if (((ADunDefPlayerController*)controller)->bWasSpeedHack)
		{
			bAntiCheatDetected = TRUE;
			tmo->bWasSpeedHack = 0;

		}

		if (((ADunDefPlayerController*)controller)->bCheatFlying)
		{
			bAntiCheatDetected = TRUE;
			tmo->bCheatFlying = 0;

		}
		if (((ADunDefPlayerController*)controller)->bWasSaturated)
		{
			bAntiCheatDetected = TRUE;
			//tmo->bWasSaturated = 0;

		}
		if (bAntiCheatDetected)
			ImGui::Text("ANTI CHEAT DETECTED.");
		//ImGui::Text("%f", tmo->LastSpeedHackLog);
	}
	

	static bool LockScore = FALSE;






	if (MenuTab == CHEATS)
	{
		ImguiMenuCheats();
	}
	else if (MenuTab == ESP)
	{
		ImguiMenuESP();
	}
	else if (MenuTab == LOBBY)
	{
		ImguiMenuLobby();
	}
	else if (MenuTab == SETTINGS)
	{
		ImguiMenuSettings();
	}
	else if (MenuTab == ITEM_MODDING)
	{
		ImguiMenuItemModding();
	}

	ImGui::End();

	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
}



//directx9 hook for imgui
HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice) {
	static bool init = false;
	if (!init) {
		d3Device = pDevice;
		init = true;

		IMGUI_CHECKVERSION();
		ImGui::CreateContext();

		ImGuiIO& io = ImGui::GetIO();
		ImGui_ImplWin32_Init(gameHWND);
		io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
		ImGui_ImplDX9_Init(pDevice);
	}


	ImguiMenu();



	return ((tEndScene)(EndSceneHook.HookAddr))(pDevice);
}
DWORD PlayerCheckScoreHack = 0;
DWORD EaxCheck = 0;
// Score hack to change instance score to zero or x
bool isController = false;
bool ScoreHookFunc()
{
	TArray<ULocalPlayer*> *controllers = GetPlayerControllers();
	
	if (controllers)
		if (controllers->Count)
			for (int ScroreHookI = 0; ScroreHookI < controllers->Count; ScroreHookI++)
			{
				if (PlayerCheckScoreHack == (DWORD)(controllers->Data[ScroreHookI]->Actor))
					if (EaxCheck != (DWORD)(controllers->Data[ScroreHookI]->Actor))
					{
						return true;
					}
			}
	return false;
}
__declspec(naked) void ScoreHook()
{
	__asm
	{
		pushf;
		pushad;
		mov[PlayerCheckScoreHack], edi;
		mov[EaxCheck], eax;
	}



	isController = ScoreHookFunc();

	if (isController)
		__asm
	{

		popad;
		mov eax, 0;
		popf;
		jmp ScoreHookObj.HookAddr;
	}


	__asm
	{
		popad;
		popf;
		jmp ScoreHookObj.HookAddr;
	}

}
//cheats
void InternalDebug(UCanvas* canvas)
{
	if (GEP)
		DrawTexta(canvas, ButterString, 10, 25, fGreen);
	else
		DrawTexta(canvas, ButterString, 10, 25, fRed);
}
void PostRender(UCanvas* canvas)
{
	if (bDebug)
		InternalDebug(canvas);

	if (!CheckVarsForNull())
	{
		DrawTexta(canvas, ButterString, 10, 5, fRed);
		return;
	}
	DrawTexta(canvas, ButterString, 10, 5, fGreen);
	if (bGiveItems)
	{
		bGiveItems = false;
		GiveItems();
	}

	if (enemysToSpawn.size())
	{
		FRotator r{0,0,0};
		pMain->WaveSpawnerCreateEnemy((UDunDef_SeqAct_EnemyWaveSpawner*)Spawner[0], ((ADunDefEnemy*)enemys[enemysToSpawn.front()]), VacuumHackPos, r);
		enemysToSpawn.pop();
	}
	if (giveDroppedEquipment.size())
	{
		GiveItemCopy(giveDroppedEquipment.front());
		giveDroppedEquipment.pop();
	}

	
	if (bAutoXp)
	{
		auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();
		for (int i = 0; i < 10; i++)
		{
			t->AwardWaveCompletion(999);
		}
	}


	if (bGetNewTeleportLocation)
	{
		bGetNewTeleportLocation = FALSE;
		NewLocation = controller->Pawn->Location;
	}
	if (bTeleportPlayer)
	{
		bTeleportPlayer = FALSE;
		controller->Pawn->Location = NewLocation;
	}


	if (bManaTrail && UnreleasedCheats)
		((ADunDefPlayerController*)controller)->DropMana(900000000);


	

	//if (bManaTrail)
	//Target->SpawnManaTokens(Target, Target, NULL);
	Cheats();
	//get first pawn in ent list
	ADunDefPawn* Target = GetFirstPawnInList();

	static bool Init = FALSE;
	static float OGrav = 1.0f;
	static float OJumpZ = 1300.0f;
	static float ODrawScale = 1.0f;
	if (!Init)
	{
		Gravity = Target->GravityZMultiplier;
		JumpHeight = Target->JumpZ;
		DrawScale = Target->DrawScale;
		eDrawScale = Target->DrawScale;
		Init = !Init;
	}

	while (Target != NULL)
	{
		if (Target->IsPlayerPawn())
		{
			auto t = (ADunDefPlayer*)Target;
			//std::string PlayerName;
			//FStringTostring(PlayerName, t->MyPlayerHero->GetCustomName());
			//std::cout << PlayerName << "\n";

			if (bGodMode)
				Target->Controller->bGodMode = TRUE;
			else
				Target->Controller->bGodMode = FALSE;


			if (bLobbyGravity)
			{
				Target->GravityZMultiplier = Gravity;
			}
			else
			{
				Target->GravityZMultiplier = OGrav;
			}
			if (bLobbyScale)
			{
				Target->DrawScale = DrawScale;
			}
			if (bLobbyJump)
			{
				Target->JumpZ = JumpHeight;
			}
			else
			{
				Target->JumpZ = OJumpZ;
			}

			if (Target != controller->Pawn)
			{
				if (bTeleportPlayersSafe)
				{


					Target->Location = controller->Pawn->Location;
				}
				if (bTeleportPlayersPoint)
				{

					Target->Location = NewLocation;
				}
				if (Target->Controller)
				{

					((ADunDefPlayerController*)(Target->Controller))->Score = 0;

				}
			}
			//if (bManaTrail)
			//	Target->SpawnManaTokens(Target, Target, NULL);

			Target = (ADunDefPawn*)Target->NextPawn;
			continue;
		}

		ESPTarget(canvas, Target);

		if (bScaleEnemy)
		{
			Target->DrawScale = eDrawScale;
		}
		else
		{
			Target->DrawScale = 1.0f;
		}


		if (bVacuumHack)
		{

			Target->Location = VacuumHackPos;
		}


		if (bAutoKill)
		{
			FVector tempVec = FVector();
			FTraceHitInfo tempHit = FTraceHitInfo();
			Target->eventTakeDamage(Target->HealthMax, NULL, tempVec, tempVec, NULL, tempHit, NULL, NULL);
		}

		ADunDefEnemy* enemy = (ADunDefEnemy*)Target;
		if (bLootShower)
		{
			enemy->SpawnDroppedEquipment();
		}


		//enemy->SetGolded();
		//if (!enemy->eventIsSameTeam(controller->AcknowledgedPawn))
		//	enemy->PlayerChangedTeam();
		Target = (ADunDefPawn*)Target->NextPawn;
	}


	if (bShowVacuumPos && controller->myHUD)
	{
		controller->myHUD->Draw3DLine(controller->Pawn->Location, VacuumHackPos, fGreen);

		FLinearColor tmp = { 0, 1, 0, 1 };
		FString v = (wchar_t*)"v\0";
		auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();

		if (t)
		{
			t->AddCustomFloatingText(v, VacuumHackPos, 0, 0.1f, 2, TRUE, tmp);
		}
	}

	if (bShowTeleportPos && controller->myHUD)
	{
		controller->myHUD->Draw3DLine(controller->Pawn->Location, NewLocation, fGreen);

		FLinearColor tmp = { 0, 1, 0, 1 };
		FString tt = (wchar_t*)"t\0";
		auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();

		if (t)
		{
			t->AddCustomFloatingText(tt, NewLocation, 0, 0.1f, 2, TRUE, tmp);
		}
	}
	if (bPersonalTowers)
	{
		auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();
		auto tmpPlayerLocation = controller->Pawn->Location;
		tmpPlayerLocation.Z += 150.0f;
		
		for (int i = 0; i < t->TowerUpdate.Count; i++)
		{
			t->TowerUpdate.Data[i]->DrawScale = 0.1f;
			t->TowerUpdate.Data[i]->Location = tmpPlayerLocation;
		}
	}


	//SAY TESTING--------------------------------------------

	/*controller->Say(ButterString);
	controller->ServerSay(ButterString);
	controller->ServerTeamSay(ButterString);
	controller->TeamSay(ButterString);*/
	
	//lmao this is great controller->SpeakTTS(ButterString, controller->PlayerReplicationInfo);

	//SAY TESTING--------------------------------------------
}

bool CheckGRI()
{

	if (!CheckVarsForNull())
		return false;

	auto t = ((ADunDefBasePlayerController*)controller)->GetGRI();
	if (!t)
		return false;

	if (!t->IsInGameplayLevel())
		return false;
	if (!t->IsInLobbyLevel())
		return false;
	if (!t->IsNonLobbyBuildPhase())
		return false;
	if (!t->IsGameplayFinished())
		return false;
	if (!t->IsTheGameplayFinished())
		return false;

	return true;
}
std::ofstream myfile;
void Debug(UFunction* pFunction, UObject* pObject)
{
	myfile.open("D:\\Logging\\DDCheck.txt", std::ios_base::app);
	char* szName = pFunction->GetFullName();
	//std::cout << "OBJECT ADDR : " << (DWORD)pObject << "\n";	
	myfile << std::left << std::setw(50) << pObject->Name.GetName() << " || " << szName << "\n";
	//myfile << std::hex << std::left << "[" << std::setw(8) << (DWORD)pObject << "]" << std::setw(40) << pObject->Name.GetName() << " || " << "[" << std::setw(8) << (DWORD)pFunction << "]" << szName << "\n";
	myfile.close();
}

int frame = 0;
int counter = 0;
void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult)
{

	char* szName = pFunction->GetFullName();
	char * objectName = pObject->Name.GetName();

	if (LogToFile)
		Debug(pFunction, pObject);
	
	srand(time(NULL));
	
	if (bRefreshEnemyEntrys)
	{
		Spawner = GetAllInstanceOf(UDunDef_SeqAct_EnemyWaveSpawner::StaticClass());
		enemys = GetAllInstanceOf(ADunDefEnemy::StaticClass());

		for (auto t : enemys)
		{
			enemyNames.push_back(t->GetFullName());
		}

		bRefreshEnemyEntrys = false;
	}
	if (bRefreshDroppedEquipment)
	{
		auto t  = GetAllInstanceOf(ADunDefDroppedEquipment::StaticClass());
		// clear vector without destroying objects
		while(allDroppedEquipment.size())
			allDroppedEquipment.pop_back();

		for (auto tt : t)
		{
			if (((ADunDefDroppedEquipment*)tt)->MyEquipmentObject)
				allDroppedEquipment.push_back(tt);
		}
		bRefreshDroppedEquipment = false;
	}
	if (bRefreshAllItemVec)
	{
		bRefreshAllItemVec = false;
		AllItems = GetAllItemsInGame();
		refreshIndicator = "Done";
	}
	if (q_ThreadSafeStringRequests.size())
	{
		int vecSize = q_ThreadSafeStringRequests.size();
		for (int i = 0; i < vecSize; i++)
		{
			std::string tname = std::string(q_ThreadSafeStringRequests[i].second->GetName());
			q_ThreadSafeStringRequests[i].first = tname;
		}
		q_ThreadSafeStringRequests.clear();

	}
	if (ShowMenu && sceneClient){
		sceneClient->bRenderCursor = 1;
	}

	// this code is used to kill all towers on the map for any 
	// assualt missions
	if (bAutoKill) {
		std::string t(szName);
		if (t.find("DunDefTower") != std::string::npos && t.find("Tick") != std::string::npos)
		{
			ADunDefTower* e = ((ADunDefTower*)(pObject));
			if (controller && controller->Pawn && e->TargetingTeam == 2)
			{

				FVector tempVec = FVector();
				FTraceHitInfo tempHit = FTraceHitInfo();
				e->eventTakeDamage(e->MaxHealth, NULL, tempVec, tempVec, NULL, tempHit, NULL,NULL);
			}
		}
	}
	// update score to x
	if (UpdateScore && controller)
	{
		((ADunDefPlayerController*)controller)->Score = newScore;
	}
	// menu toggle
	if (ShowMenu) {
		if (strcmp(objectName, "UIState_Pressed") == 0)
		{
			return;
		}
	}
	
	
	if (strcmp(szName, "Function UDKGame.DunDefDroppedEquipment.Destroyed") == 0)
	{
		auto t = std::find(allDroppedEquipment.begin(), allDroppedEquipment.end(), pObject);
		if (t != allDroppedEquipment.end())
		{
			allDroppedEquipment.erase(t);
		}
	}
	if (strcmp(szName, "Function UDKGame.DunDefForge.Tick") == 0) {
		ADunDefForge* temp = ((ADunDefForge*)(pObject));
		if (temp) {
			temp->IsActive = TRUE;
			temp->bAllowActivationInCombatPhase = TRUE;
		}
	}
	if (strcmp(szName, "Function DunDefPlayer.Dying.BeginState") == 0) {
		if (bGodMode)
			return;
	}
	if (strcmp(szName, "Function DunDefPlayerController.Dead.BeginState") == 0) {
		if (bGodMode)
			return;
	}
	if (UnreleasedCheats)
	{
		//nightmare unlock
		if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_SetNightmareUnlocked.Activated") == 0) {
			UDunDef_SeqAct_SetNightmareUnlocked* temp = ((UDunDef_SeqAct_SetNightmareUnlocked*)(pObject));
			if (temp) {
				temp->bSetUnlocked = 1;
				temp->bActuallyDoSet = 1;
			}
		}
	}
	//reward multiply
	if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_GiveEquipmentToPlayers.Activated") == 0)
	{
		UDunDef_SeqAct_GiveEquipmentToPlayers* rewarditems = ((UDunDef_SeqAct_GiveEquipmentToPlayers*)(pObject));
		GEP = rewarditems;

		if (bMultiplyReward)
		{
			TArray< FGiveEquipmentEntry >   tmpItemEntry;

			if (ChangeRewards && UnreleasedCheats)
				for (int i = 0; i < rewarditems->GiveEquipmentEntries.Count; i++)
				{
					rewarditems->GiveEquipmentEntries.Data[i].ForceHeroArchetypeExactMatch = 1;
					rewarditems->GiveEquipmentEntries.Data[i].EquipmentArchetype = (UHeroEquipment*)(((ADunDefPlayerController*)controller)->MyHero->HeroEquipments.Data[0]->ObjectArchetype);

				}
			static int currentRewardInteration = 0;
			if (currentRewardInteration < MultiplyRewardsBy)
			{
				currentRewardInteration++;
				rewarditems->eventActivated();
				//tmpItemEntry = rewarditems->GiveEquipmentEntries;
			}
			else
			{
				currentRewardInteration = 0;
			}
		}
	}
	//Drawing on screen
	if (strcmp(szName, "Function Engine.Interaction.PostRender") == 0)
	{
		PostRender(((UGameViewportClient_eventPostRender_Parms*)(pParms))->Canvas);
	}
	//set wave number
	if (strcmp(szName, "Function UDKGame.DunDef_SeqAct_SetWaveNumber.Activated") == 0) {
		waveNum = ((UDunDef_SeqAct_SetWaveNumber*)(pObject));
		if (bWaveSkip)
		{
			waveNum->waveNumber = WaveSkipToNum;
			if (!bLockLevelAt)
				bWaveSkip = FALSE;
		}
	}
	//kill 1 to advance wave
	if (strcmp(szName, "Function UDKGame.Main.Tick") == 0)
	{
		pMain = ((AMain*)(pObject));
		//pMain->PrintToConsole(ButterString);
		if (bKillOneToAdvance && pMain && pMain->CurrentKillCountUI)
		{
			if (pMain->CurrentKillCountUI->KillCountRemaining > 1)
				pMain->CurrentKillCountUI->KillCountRemaining = 1;
		}
		if (pMain && bGodMode)
		{
			pMain->bCrystalCoreInvincible = 1;
		}
		else
		{
			pMain->bCrystalCoreInvincible = 0;
		}
		pMain->MaxPlayersAllowed = 10;

	}
	//lootshower and item modding
	if (strcmp(szName, "Function UDKGame.DunDefDroppedEquipment.ReportEquipmentToStats") == 0)
	{
		UHeroEquipment* tempweap = ((ADunDefDroppedEquipment*)(pObject))->MyEquipmentObject;

		if (MenuTab == ITEM_MODDING)
		{
			LastDroppedWep = tempweap;	
		}
		else
		{
			LastDroppedWep = nullptr;
		}
		if (bAutoPickUp)
		{
			TotalItemsCkd++;
			bool PutItemIn = CheckItemQuality(tempweap,ItemPickUpFilterStats);

			if (PutItemIn)
			{
				heroManager->AddEquipmentObjectToItemBox(((ADunDefPlayer*)(controller->Pawn))->MyPlayerHero, tempweap, 1);
				ItemsAdded++;
			}
		}
	}
	//crash check
	if (strcmp(szName, "Function UDKGame.DunDefGameReplicationInfo.IsAtLobbyLevel") == 0) {
		player = nullptr;
		LastDroppedWep = nullptr;
		//GEP = nullptr;
		//TArray< FGiveEquipmentEntry > empty;
		//LastItemEntry = empty;
	}
	//anti cheat
	if (strcmp(szName, "Function UDKGame.Main.RunAntiCheat") == 0) {
		if (bDebug)
		printf("[+]Blocked %s\n", szName);
		return;
	}
	if (strcmp(szName, "Function UDKGame.Main.HandleCheater") == 0) {
		if(bDebug)
		printf("[+]Blocked %s\n", szName);
		return;
	}
	

	((tProcessEvent)(ProcEventHook.HookAddr))(pObject, pFunction, pParms, pResult);
}



BOOL APIENTRY OnAttach(HMODULE hModule)
{
	GetKeybinds();
	if (LogToFile)
		myfile.open("D:\\Logging\\DDCheck.txt");
	FILE* f = nullptr;

	if (ConsoleDebug)
	{
		AllocConsole();
		freopen_s(&f, "CONOUT$", "w", stdout);
		std::cout << "[+] Successfully attached to process.\n";
		
		std::cout << std::hex << "[+] GObjects : " << GObjects << " GNames : " << GNames << std::endl;
	}
	if (GetDevicePointer(d3d9Device, sizeof(d3d9Device))) {
		oScene = (tEndScene)d3d9Device[42];
	}
	if (oScene)
		if (ConsoleDebug)
			std::cout << "[+] Dx9 Virtual Table Found at " << oScene << std::endl;

	gameEngine = (UGameEngine*)GetInstanceOf(UGameEngine::StaticClass());
	sceneClient = (UDunDefSceneClient*)GetInstanceOf(UDunDefSceneClient::StaticClass());
	

	for (auto v : GetAllInstanceOf(ACosmeticSetBonus::StaticClass()))
	{
		Cosmetics.push_back((ACosmeticSetBonus*)v);
	}
	if (gameEngine)
	{
		if (ConsoleDebug)
			std::cout << "[+] GameEngine Found.\n";
	}
	else
	{
		if (ConsoleDebug)
			std::cout << "[-] GameEngine Not Found.\n";
	}
	heroManager = (UDunDefHeroManager*)GetInstanceOf(UDunDefHeroManager::StaticClass());


	if (heroManager)
	{
		if (ConsoleDebug)
			std::cout << "[+] heroManager Found.\n";
	}
	else
	{
		if (ConsoleDebug)
			std::cout << "[-] heroManager Not Found.\n";
	}
	//hooks

	oWndProc = (WNDPROC)SetWindowLongPtr(FindWindow(NULL, "Dungeon Defenders"), GWL_WNDPROC, (LONG_PTR)WndProc);
	if (!oWndProc)
	{
		auto e = GetLastError();
		if (ConsoleDebug) std::cout << "Failed to hook window input with error: " << e << "\n";
	}
	else
	{
		EndSceneHook.UpdateHookAddr(oScene);
		EndSceneHook.HookFunction();
		ProcEventHook.HookFunction();
		ScoreHookObj.HookFunction();
		while (end) {
			if (GetAsyncKeyState(EndKey) & 1)
			{
				if (bEndKeyKeyChangeRequest)
				{
					bEndKeyKeyChangeRequest = FALSE;
				}
				else
				{
					if (ConsoleDebug)
						std::cout << "[+] Closing Cheat\n";
					end = false;
				}
			}
			if (GetAsyncKeyState(ToggleKey) & 1)
			{

				if (bToggleKeyChangeRequest)
				{
					bToggleKeyChangeRequest = FALSE;
				}
				else
				{
					ShowMenu = !ShowMenu;
				}

			}

			if (GetAsyncKeyState(NewTeleportKey) & 1)
			{
				if (NewTeleportKeyKeyChangeRequest)
					NewTeleportKeyKeyChangeRequest = FALSE;
				else
					bGetNewTeleportLocation = TRUE;

			}
			if (GetAsyncKeyState(TeleportPlayerKey) & 1)
			{
				if (TeleportPlayerKeyKeyChangeRequest)
					TeleportPlayerKeyKeyChangeRequest = FALSE;
				else
					bTeleportPlayer = TRUE;
			}


			Sleep(10);
		}
		//unhook
		if (LogToFile)
			myfile.close();

		auto tmp = (WNDPROC)SetWindowLongPtr(gameHWND, GWL_WNDPROC, (LONG_PTR)oWndProc);
		EndSceneHook.UnHookFunction();
		ProcEventHook.UnHookFunction();
		ScoreHookObj.UnHookFunction();
	}
	if (ConsoleDebug)
	{
		std::cout << "[+] Closing window in 5 secs.\n";
		Sleep(5000);
		fclose(f);
		FreeConsole();
	}
	FreeLibraryAndExitThread(hModule, 0);
	return 0;
}


BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
	)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)OnAttach, hModule, 0, NULL);
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}


