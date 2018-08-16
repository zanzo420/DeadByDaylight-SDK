// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_TextDesignTunables_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_TextDesignTunables_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.UserConstructionScript");

	UBP_TextDesignTunables_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_TextDesignTunables_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay");

	UBP_TextDesignTunables_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TextDesignTunables_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick");

	UBP_TextDesignTunables_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TextDesignTunables_C::ExecuteUbergraph_BP_TextDesignTunables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables");

	UBP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
