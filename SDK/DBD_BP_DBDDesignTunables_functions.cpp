// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_DBDDesignTunables_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.UserConstructionScript
// (BlueprintCallable, BlueprintEvent)

void UBP_DBDDesignTunables_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.UserConstructionScript");

	UBP_DBDDesignTunables_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UBP_DBDDesignTunables_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveBeginPlay");

	UBP_DBDDesignTunables_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_DBDDesignTunables_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ReceiveTick");

	UBP_DBDDesignTunables_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ExecuteUbergraph_BP_DBDDesignTunables
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_DBDDesignTunables_C::ExecuteUbergraph_BP_DBDDesignTunables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DBDDesignTunables.BP_DBDDesignTunables_C.ExecuteUbergraph_BP_DBDDesignTunables");

	UBP_DBDDesignTunables_C_ExecuteUbergraph_BP_DBDDesignTunables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
