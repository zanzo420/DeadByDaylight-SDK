#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Effect_DO_Head01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_DO_Head01.BP_Effect_DO_Head01_C
// 0x0037 (0x03D8 - 0x03A1)
class ABP_Effect_DO_Head01_C : public ABP_BaseItemVfx_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TotalTime;                                                // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Sparks1;                                                  // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Sparks_2;                                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Sparks_3;                                                 // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Sparks4;                                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_DO_Head01.BP_Effect_DO_Head01_C");
		return ptr;
	}


	void UserConstructionScript();
	void AttachToSkeletalMesh(class USkeletalMeshComponent** SkeletonPart);
	void ExecuteUbergraph_BP_Effect_DO_Head01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
