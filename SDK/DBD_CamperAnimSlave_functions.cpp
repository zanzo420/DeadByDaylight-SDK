// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_CamperAnimSlave_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CamperAnimSlave.CamperAnimSlave_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CamperAnimSlave_AnimGraphNode_CopyPoseFromMesh_D0677EBB45427B5EC9169893A25E29CF
// (BlueprintEvent)

void UCamperAnimSlave_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CamperAnimSlave_AnimGraphNode_CopyPoseFromMesh_D0677EBB45427B5EC9169893A25E29CF()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamperAnimSlave.CamperAnimSlave_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CamperAnimSlave_AnimGraphNode_CopyPoseFromMesh_D0677EBB45427B5EC9169893A25E29CF");

	UCamperAnimSlave_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CamperAnimSlave_AnimGraphNode_CopyPoseFromMesh_D0677EBB45427B5EC9169893A25E29CF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamperAnimSlave.CamperAnimSlave_C.ExecuteUbergraph_CamperAnimSlave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCamperAnimSlave_C::ExecuteUbergraph_CamperAnimSlave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamperAnimSlave.CamperAnimSlave_C.ExecuteUbergraph_CamperAnimSlave");

	UCamperAnimSlave_C_ExecuteUbergraph_CamperAnimSlave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
