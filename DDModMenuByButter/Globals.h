#pragma once
#include "Header.h"



bool bDebug = FALSE;//internal debug
bool ConsoleDebug = TRUE;
bool LogToFile = FALSE;
bool bShowDEMOWINDOW = FALSE;

bool UnreleasedCheats = FALSE;





std::string ModMenuName = "Rebirth Final";
const wchar_t* ButterStringData = L"Butter";
FString ButterString = (wchar_t*)ButterStringData;


DWORD ScoreHookAddrOffset = 0x7E0f1;

DWORD dllBase = (DWORD)GetModuleHandleA(NULL);
HWND gameHWND = FindWindow(NULL, TEXT("Dungeon Defenders"));
//ue3 procevent hook
DWORD BaseProcessEventAddress = 0x090B00;
DWORD ProcessEventAddress = (dllBase + BaseProcessEventAddress);
typedef void(__thiscall* tProcessEvent)(UObject*, UFunction*, void*, void*);
tProcessEvent ProcessEvent = (tProcessEvent)ProcessEventAddress;
void __fastcall HookedPE(UObject* pObject, void* edx, UFunction* pFunction, void* pParms, void* pResult);
//dx9 endscene hook
typedef HRESULT(APIENTRY* tEndScene)(LPDIRECT3DDEVICE9 pDevice);
tEndScene oScene;
HRESULT APIENTRY hkEndScene(LPDIRECT3DDEVICE9 pDevice);
//menu hook allows inputs
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wPAram, LPARAM lParam);
typedef LRESULT(CALLBACK* WNDPROC)(const HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam);
WNDPROC oWndProc;
//hooks
void ScoreHook();


bool end = true;
bool UpdateScore = false;
int newScore = 0;
bool AddItem = FALSE;



//BGRA
FColor fRed = { 0, 0, 255, 255 };
FColor fBlue = { 255, 0, 0, 255 };
FColor fCyan = { 255, 255, 0, 255 };
FColor fGreen = { 0, 255, 0, 255 };
FColor fWhite = { 255, 255, 255, 255 };



//GLOBALS
UDunDef_SeqAct_GiveEquipmentToPlayers* GEP = nullptr;
TArray< FGiveEquipmentEntry >   LastItemEntry;
FGiveEquipmentEntry tmpEntry;


UGameEngine* gameEngine = nullptr;  //EntityList
APlayerController* controller = nullptr;  //player controller/hero
ADunDefGameReplicationInfo* plevel = nullptr;  //level up
UDunDef_SeqAct_SetWaveNumber* waveNum = nullptr;  //wavNum
UDunDefHeroManager* heroManager = nullptr;  //Add items to box
ADunDefPlayer* player = nullptr;  //might not be needed
AMain* pMain = nullptr;  //Enemys Left for wave
AHUD* hud = nullptr;
UHeroEquipment* LastDroppedWep = nullptr;
FVector									VacuumHackPos = { 0, 0, 0 };
FVector									NewLocation = { 0, 0, 0 };

Hooking ProcEventHook((void*)ProcessEventAddress, HookedPE, 5);
Hooking EndSceneHook((void*)NULL, hkEndScene, 7);
Hooking ScoreHookObj((void*)(dllBase + ScoreHookAddrOffset), ScoreHook, 8);




void* d3d9Device[119];
LPDIRECT3DDEVICE9 d3Device;
LRESULT __stdcall WndProc(const HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam);