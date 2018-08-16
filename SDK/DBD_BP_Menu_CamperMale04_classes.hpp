#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_CamperMale04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C
// 0x0018 (0x08D0 - 0x08B8)
class ABP_Menu_CamperMale04_C : public ABP_Menu_Base_Camper_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Cigarette_NewTrack_0_97E71C104E36EF0B3195F484D090F427;    // 0x08C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Cigarette__Direction_97E71C104E36EF0B3195F484D090F427;    // 0x08C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Cigarette;                                                // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C");
		return ptr;
	}


	void UserConstructionScript();
	void Cigarette__FinishedFunc();
	void Cigarette__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BeginDestroySequence();
	void ExecuteUbergraph_BP_Menu_CamperMale04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
