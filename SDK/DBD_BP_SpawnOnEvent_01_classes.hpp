#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_SpawnOnEvent_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C
// 0x0020 (0x03B0 - 0x0390)
class ABP_SpawnOnEvent_01_C : public AGeneratorDrivenActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      spawnedObject;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UActorSpawner*                               spawner;                                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C");
		return ptr;
	}


	void SetSpawner(class UActorSpawner* spawner);
	void UserConstructionScript();
	void OnInitGeneratorDrivenActor(class AGenerator** Generator);
	void OnAsyncActorSpawned_Event_1(class AActor* actorSpawned);
	void OnActivateGeneratorDrivenActor();
	void ExecuteUbergraph_BP_SpawnOnEvent_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
