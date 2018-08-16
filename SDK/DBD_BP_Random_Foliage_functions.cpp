// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Random_Foliage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Random_Foliage.BP_Random_Foliage_C.IsGenerated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Generated                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Random_Foliage_C::IsGenerated(bool* Generated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Foliage.BP_Random_Foliage_C.IsGenerated");

	ABP_Random_Foliage_C_IsGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Generated != nullptr)
		*Generated = params.Generated;
}


// Function BP_Random_Foliage.BP_Random_Foliage_C.GenerateFoliage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Random_Foliage_C::GenerateFoliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Foliage.BP_Random_Foliage_C.GenerateFoliage");

	ABP_Random_Foliage_C_GenerateFoliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Random_Foliage.BP_Random_Foliage_C.ComputeTotalProbability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Random_Foliage_C::ComputeTotalProbability()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Foliage.BP_Random_Foliage_C.ComputeTotalProbability");

	ABP_Random_Foliage_C_ComputeTotalProbability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Random_Foliage.BP_Random_Foliage_C.CreateBoundingBoxes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Random_Foliage_C::CreateBoundingBoxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Foliage.BP_Random_Foliage_C.CreateBoundingBoxes");

	ABP_Random_Foliage_C_CreateBoundingBoxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Random_Foliage.BP_Random_Foliage_C.CreateStaticInstances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Random_Foliage_C::CreateStaticInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Foliage.BP_Random_Foliage_C.CreateStaticInstances");

	ABP_Random_Foliage_C_CreateStaticInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Random_Foliage.BP_Random_Foliage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Random_Foliage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Foliage.BP_Random_Foliage_C.UserConstructionScript");

	ABP_Random_Foliage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Random_Foliage.BP_Random_Foliage_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Random_Foliage_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Foliage.BP_Random_Foliage_C.ReceiveTick");

	ABP_Random_Foliage_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Random_Foliage.BP_Random_Foliage_C.ExecuteUbergraph_BP_Random_Foliage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Random_Foliage_C::ExecuteUbergraph_BP_Random_Foliage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Random_Foliage.BP_Random_Foliage_C.ExecuteUbergraph_BP_Random_Foliage");

	ABP_Random_Foliage_C_ExecuteUbergraph_BP_Random_Foliage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
