#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Effect_HalloweenSlasher03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_HalloweenSlasher03.BP_Effect_HalloweenSlasher03_C
// 0x0013 (0x03B4 - 0x03A1)
class ABP_Effect_HalloweenSlasher03_C : public ABP_BaseItemVfx_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TotalTime;                                                // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_HalloweenSlasher03.BP_Effect_HalloweenSlasher03_C");
		return ptr;
	}


	void UserConstructionScript();
	void AttachToSkeletalMesh(class USkeletalMeshComponent** SkeletonPart);
	void ExecuteUbergraph_BP_Effect_HalloweenSlasher03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
