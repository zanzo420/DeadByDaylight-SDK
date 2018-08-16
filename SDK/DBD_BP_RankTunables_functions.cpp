// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_RankTunables_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RankTunables.BP_RankTunables_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_RankTunables_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankTunables.BP_RankTunables_C.UserConstructionScript");

	UBP_RankTunables_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RankTunables.BP_RankTunables_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_RankTunables_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankTunables.BP_RankTunables_C.ReceiveBeginPlay");

	UBP_RankTunables_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RankTunables.BP_RankTunables_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_RankTunables_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankTunables.BP_RankTunables_C.ReceiveTick");

	UBP_RankTunables_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RankTunables.BP_RankTunables_C.ExecuteUbergraph_BP_RankTunables
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_RankTunables_C::ExecuteUbergraph_BP_RankTunables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RankTunables.BP_RankTunables_C.ExecuteUbergraph_BP_RankTunables");

	UBP_RankTunables_C_ExecuteUbergraph_BP_RankTunables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
