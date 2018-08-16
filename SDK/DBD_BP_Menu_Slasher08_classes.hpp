#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_Slasher08_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Menu_Slasher08.BP_Menu_Slasher08_C
// 0x0020 (0x08D0 - 0x08B0)
class ABP_Menu_Slasher08_C : public ABP_Menu_BaseSlasher_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      ItemMesh_Axe;                                             // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_Dissolve_01C466A74EFEFADB8976FC84BC95D44F;     // 0x08C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_01C466A74EFEFADB8976FC84BC95D44F;   // 0x08C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher08.BP_Menu_Slasher08_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void FX_MakeHatchetAppear();
	void FX_MakeHatchetDisappear();
	void ExecuteUbergraph_BP_Menu_Slasher08(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
