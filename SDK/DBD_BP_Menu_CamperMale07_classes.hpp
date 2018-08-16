#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_CamperMale07_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_CamperMale07.BP_Menu_CamperMale07_C
// 0x0008 (0x08C0 - 0x08B8)
class ABP_Menu_CamperMale07_C : public ABP_Menu_Base_Camper_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_CamperMale07.BP_Menu_CamperMale07_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Menu_CamperMale07(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
