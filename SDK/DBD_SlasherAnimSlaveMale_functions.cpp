// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_SlasherAnimSlaveMale_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SlasherAnimSlaveMale.SlasherAnimSlaveMale_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveMale_AnimGraphNode_CopyPoseFromMesh_ED2ADC5C482131F7C2F7B0B1D7B2DF09
// (BlueprintEvent)

void USlasherAnimSlaveMale_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveMale_AnimGraphNode_CopyPoseFromMesh_ED2ADC5C482131F7C2F7B0B1D7B2DF09()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlasherAnimSlaveMale.SlasherAnimSlaveMale_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveMale_AnimGraphNode_CopyPoseFromMesh_ED2ADC5C482131F7C2F7B0B1D7B2DF09");

	USlasherAnimSlaveMale_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveMale_AnimGraphNode_CopyPoseFromMesh_ED2ADC5C482131F7C2F7B0B1D7B2DF09_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlasherAnimSlaveMale.SlasherAnimSlaveMale_C.ExecuteUbergraph_SlasherAnimSlaveMale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USlasherAnimSlaveMale_C::ExecuteUbergraph_SlasherAnimSlaveMale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlasherAnimSlaveMale.SlasherAnimSlaveMale_C.ExecuteUbergraph_SlasherAnimSlaveMale");

	USlasherAnimSlaveMale_C_ExecuteUbergraph_SlasherAnimSlaveMale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
