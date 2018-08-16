// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_TileBase01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TileBase01.TileBase01_C.SelectSpawnPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTileSpawnPoint*> Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATileBase01_C::SelectSpawnPoint(TArray<class UTileSpawnPoint*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SelectSpawnPoint");

	ATileBase01_C_SelectSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  GeneratorSpawnPoint            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UChildActorComponent*> GeneratorDrivenElements        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATileBase01_C::SetupGeneratorDrivenElements(class AActor* GeneratorSpawnPoint, TArray<class UChildActorComponent*>* GeneratorDrivenElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements");

	ATileBase01_C_SetupGeneratorDrivenElements_Params params;
	params.GeneratorSpawnPoint = GeneratorSpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GeneratorDrivenElements != nullptr)
		*GeneratorDrivenElements = params.GeneratorDrivenElements;
}


// Function TileBase01.TileBase01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATileBase01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.UserConstructionScript");

	ATileBase01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATileBase01_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.ReceiveTick");

	ATileBase01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.OnLevelLoaded
// (BlueprintCallable, BlueprintEvent)

void ATileBase01_C::OnLevelLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.OnLevelLoaded");

	ATileBase01_C_OnLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTileSpawnPoint*         SpawnPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  spawnedObject                  (Parm, ZeroConstructor, IsPlainOldData)

void ATileBase01_C::SetGeneratorDrivenObjects(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects");

	ATileBase01_C_SetGeneratorDrivenObjects_Params params;
	params.SpawnPoint = SpawnPoint;
	params.spawnedObject = spawnedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Generators                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATileBase01_C::SetGeneratorDrivenScoreEvent(TArray<class AActor*> Generators)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent");

	ATileBase01_C_SetGeneratorDrivenScoreEvent_Params params;
	params.Generators = Generators;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATileBase01_C::ExecuteUbergraph_TileBase01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01");

	ATileBase01_C_ExecuteUbergraph_TileBase01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
