// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_SpawnOnEvent_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.SetSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorSpawner*           spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnOnEvent_01_C::SetSpawner(class UActorSpawner* spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.SetSpawner");

	ABP_SpawnOnEvent_01_C_SetSpawner_Params params;
	params.spawner = spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnOnEvent_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.UserConstructionScript");

	ABP_SpawnOnEvent_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnInitGeneratorDrivenActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGenerator**             Generator                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnOnEvent_01_C::OnInitGeneratorDrivenActor(class AGenerator** Generator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnInitGeneratorDrivenActor");

	ABP_SpawnOnEvent_01_C_OnInitGeneratorDrivenActor_Params params;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnAsyncActorSpawned_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  actorSpawned                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnOnEvent_01_C::OnAsyncActorSpawned_Event_1(class AActor* actorSpawned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnAsyncActorSpawned_Event_1");

	ABP_SpawnOnEvent_01_C_OnAsyncActorSpawned_Event_1_Params params;
	params.actorSpawned = actorSpawned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnActivateGeneratorDrivenActor
// (Event, Public, BlueprintEvent)

void ABP_SpawnOnEvent_01_C::OnActivateGeneratorDrivenActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.OnActivateGeneratorDrivenActor");

	ABP_SpawnOnEvent_01_C_OnActivateGeneratorDrivenActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.ExecuteUbergraph_BP_SpawnOnEvent_01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnOnEvent_01_C::ExecuteUbergraph_BP_SpawnOnEvent_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnOnEvent_01.BP_SpawnOnEvent_01_C.ExecuteUbergraph_BP_SpawnOnEvent_01");

	ABP_SpawnOnEvent_01_C_ExecuteUbergraph_BP_SpawnOnEvent_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
