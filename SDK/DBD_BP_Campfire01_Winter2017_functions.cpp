// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Campfire01_Winter2017_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Campfire01_Winter2017_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.UserConstructionScript");

	ABP_Campfire01_Winter2017_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Campfire01_Winter2017_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.Timeline_0__FinishedFunc");

	ABP_Campfire01_Winter2017_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Campfire01_Winter2017_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.Timeline_0__UpdateFunc");

	ABP_Campfire01_Winter2017_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Campfire01_Winter2017_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.ReceiveBeginPlay");

	ABP_Campfire01_Winter2017_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Campfire01_Winter2017_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.ReceiveTick");

	ABP_Campfire01_Winter2017_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.ExecuteUbergraph_BP_Campfire01_Winter2017
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Campfire01_Winter2017_C::ExecuteUbergraph_BP_Campfire01_Winter2017(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campfire01_Winter2017.BP_Campfire01_Winter2017_C.ExecuteUbergraph_BP_Campfire01_Winter2017");

	ABP_Campfire01_Winter2017_C_ExecuteUbergraph_BP_Campfire01_Winter2017_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
