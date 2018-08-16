#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_BaseItemVfx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C
// 0x0021 (0x03A1 - 0x0380)
class ABP_BaseItemVfx_C : public AItemVfx
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            ParticleSystems;                                          // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               AbsoluteRotation;                                         // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C");
		return ptr;
	}


	void ClearParticleSystems();
	void SpawnEmitter(class UParticleSystem* EmitterTemplate, class USkeletalMeshComponent* AttachToComponent, const struct FName& attachPointName, class UParticleSystemComponent** Particle_System);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDestroyed_Event(class AActor* DestroyedActor);
	void SetEmittersVisibility(bool* Visible);
	void ExecuteUbergraph_BP_BaseItemVfx(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
