// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_BP_TESTDECAL_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TESTDECAL.BP_TESTDECAL_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TESTDECAL_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TESTDECAL.BP_TESTDECAL_C.UserConstructionScript");

	ABP_TESTDECAL_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TESTDECAL.BP_TESTDECAL_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TESTDECAL_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TESTDECAL.BP_TESTDECAL_C.ReceiveBeginPlay");

	ABP_TESTDECAL_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TESTDECAL.BP_TESTDECAL_C.ExecuteUbergraph_BP_TESTDECAL
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TESTDECAL_C::ExecuteUbergraph_BP_TESTDECAL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TESTDECAL.BP_TESTDECAL_C.ExecuteUbergraph_BP_TESTDECAL");

	ABP_TESTDECAL_C_ExecuteUbergraph_BP_TESTDECAL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
