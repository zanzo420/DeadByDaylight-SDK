#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_Lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby.Lobby_C
// 0x0080 (0x0408 - 0x0388)
class ALobby_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_2_Fade_917FB6DD4AA9645820530CAC64BAE04D;         // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_917FB6DD4AA9645820530CAC64BAE04D;   // 0x0394(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_Fade_B8B29D74431D7D0AFD150886CC86EFCA;         // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_B8B29D74431D7D0AFD150886CC86EFCA;   // 0x03A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_4_Fade_30D719F346D996C848FB59BE2A00BF55;         // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_30D719F346D996C848FB59BE2A00BF55;   // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmokePanel_Fade_Fade_BA955DC944BB37097EBD0481F673901E;    // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SmokePanel_Fade__Direction_BA955DC944BB37097EBD0481F673901E;// 0x03C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SmokePanel_Fade;                                          // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6BCAC4DC4705E136D9CCEFB969A7C00E;   // 0x03D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       ExponentialHeightFog_2_ExecuteUbergraph_Lobby_RefProperty;// 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    P_SmokePanelUI3_ExecuteUbergraph_Lobby_RefProperty;       // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    P_SmokePanelUI5_ExecuteUbergraph_Lobby_RefProperty;       // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    P_SmokePanelUI4_ExecuteUbergraph_Lobby_RefProperty;       // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEmitter*                                    P_SmokePanelUI6_ExecuteUbergraph_Lobby_RefProperty;       // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Lobby.Lobby_C");
		return ptr;
	}


	void NewFunction_1();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SmokePanel_Fade__FinishedFunc();
	void SmokePanel_Fade__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void FX_OfflineSurvivorCam();
	void FX_OfflineSurvivorCam_Off();
	void FX_OnlineKillerCam();
	void FX_OnlineKillerCam_Off();
	void FX_OnlineSurvivorCam();
	void FX_OnlineSurvivorCam_Off();
	void FX_OfflineKillerCam();
	void FX_OfflineKillerCam_Off();
	void ExecuteUbergraph_Lobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
