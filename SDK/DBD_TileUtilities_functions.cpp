// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_TileUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TileUtilities.TileUtilities_C.SelectSpawners
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorSpawner*>   Spawners                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MinCount                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxCount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UTileUtilities_C::STATIC_SelectSpawners(int MinCount, int MaxCount, class UObject* __WorldContext, TArray<class UActorSpawner*>* Spawners)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawners");

	UTileUtilities_C_SelectSpawners_Params params;
	params.MinCount = MinCount;
	params.MaxCount = MaxCount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawners != nullptr)
		*Spawners = params.Spawners;
}


// Function TileUtilities.TileUtilities_C.SelectSpawner
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorSpawner*>   Spawners                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UTileUtilities_C::STATIC_SelectSpawner(class UObject* __WorldContext, TArray<class UActorSpawner*>* Spawners)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawner");

	UTileUtilities_C_SelectSpawner_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawners != nullptr)
		*Spawners = params.Spawners;
}


// Function TileUtilities.TileUtilities_C.SetSpawnerOnGeneratorDrivenElem
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    GeneratorDriven                (Parm, ZeroConstructor, IsPlainOldData)
// class UActorSpawner*           ActorSpawner                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UTileUtilities_C::STATIC_SetSpawnerOnGeneratorDrivenElem(class UChildActorComponent* GeneratorDriven, class UActorSpawner* ActorSpawner, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SetSpawnerOnGeneratorDrivenElem");

	UTileUtilities_C_SetSpawnerOnGeneratorDrivenElem_Params params;
	params.GeneratorDriven = GeneratorDriven;
	params.ActorSpawner = ActorSpawner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UChildActorComponent*> SpawnPoints                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  GeneratorSpawnPoint            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UTileUtilities_C::STATIC_SetupGeneratorDrivenElements(class AActor* GeneratorSpawnPoint, class UObject* __WorldContext, TArray<class UChildActorComponent*>* SpawnPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements");

	UTileUtilities_C_SetupGeneratorDrivenElements_Params params;
	params.GeneratorSpawnPoint = GeneratorSpawnPoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPoints != nullptr)
		*SpawnPoints = params.SpawnPoints;
}


// Function TileUtilities.TileUtilities_C.SelectSpawnPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTileSpawnPoint*> SpawnPoints                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UTileUtilities_C::STATIC_SelectSpawnPoint(class UObject* __WorldContext, TArray<class UTileSpawnPoint*>* SpawnPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawnPoint");

	UTileUtilities_C_SelectSpawnPoint_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPoints != nullptr)
		*SpawnPoints = params.SpawnPoints;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
