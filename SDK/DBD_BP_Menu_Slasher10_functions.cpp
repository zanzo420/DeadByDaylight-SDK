// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_Menu_Slasher10_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu_Slasher10_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.UserConstructionScript");

	ABP_Menu_Slasher10_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Menu_Slasher10_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay");

	ABP_Menu_Slasher10_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Slasher10_C::ExecuteUbergraph_BP_Menu_Slasher10(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10");

	ABP_Menu_Slasher10_C_ExecuteUbergraph_BP_Menu_Slasher10_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
