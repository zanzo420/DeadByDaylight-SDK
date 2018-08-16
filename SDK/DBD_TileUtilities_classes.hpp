#pragma once

// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_TileUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TileUtilities.TileUtilities_C
// 0x0000 (0x0028 - 0x0028)
class UTileUtilities_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TileUtilities.TileUtilities_C");
		return ptr;
	}


	void STATIC_SelectSpawners(int MinCount, int MaxCount, class UObject* __WorldContext, TArray<class UActorSpawner*>* Spawners);
	void STATIC_SelectSpawner(class UObject* __WorldContext, TArray<class UActorSpawner*>* Spawners);
	void STATIC_SetSpawnerOnGeneratorDrivenElem(class UChildActorComponent* GeneratorDriven, class UActorSpawner* ActorSpawner, class UObject* __WorldContext);
	void STATIC_SetupGeneratorDrivenElements(class AActor* GeneratorSpawnPoint, class UObject* __WorldContext, TArray<class UChildActorComponent*>* SpawnPoints);
	void STATIC_SelectSpawnPoint(class UObject* __WorldContext, TArray<class UTileSpawnPoint*>* SpawnPoints);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
