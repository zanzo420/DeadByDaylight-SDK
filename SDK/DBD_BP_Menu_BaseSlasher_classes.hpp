#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_BaseSlasher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C
// 0x0040 (0x08B0 - 0x0870)
class ABP_Menu_BaseSlasher_C : public ADBDMenuPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialHelper*                             MaterialHelper;                                           // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomizedSkeletalMesh*                     CustomizedSkeletalMesh;                                   // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak_Audio_Menu_Base_Slasher;                               // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Dissolve_6A8353EF46DC9749463CE0935534B1A4;     // 0x0890(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6A8353EF46DC9749463CE0935534B1A4;   // 0x0894(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      Character_Name;                                           // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginDestroySequence();
	void BeginSmokeIn();
	void RestartInSequence();
	void ExecuteUbergraph_BP_Menu_BaseSlasher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
