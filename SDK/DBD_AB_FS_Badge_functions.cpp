// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_FS_Badge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_FS_Badge.AB_FS_Badge_C.IsOwnerMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OwnerIsMenuCharacter           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAB_FS_Badge_C::IsOwnerMenu(bool* OwnerIsMenuCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FS_Badge.AB_FS_Badge_C.IsOwnerMenu");

	UAB_FS_Badge_C_IsOwnerMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwnerIsMenuCharacter != nullptr)
		*OwnerIsMenuCharacter = params.OwnerIsMenuCharacter;
}


// Function AB_FS_Badge.AB_FS_Badge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_FS_Badge_AnimGraphNode_TransitionResult_468222C34DF9F5429327FE93365B6A21
// (BlueprintEvent)

void UAB_FS_Badge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_FS_Badge_AnimGraphNode_TransitionResult_468222C34DF9F5429327FE93365B6A21()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FS_Badge.AB_FS_Badge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_FS_Badge_AnimGraphNode_TransitionResult_468222C34DF9F5429327FE93365B6A21");

	UAB_FS_Badge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_FS_Badge_AnimGraphNode_TransitionResult_468222C34DF9F5429327FE93365B6A21_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FS_Badge.AB_FS_Badge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_FS_Badge_AnimGraphNode_TransitionResult_FFC9C3E244331F61A155B68CC4F95572
// (BlueprintEvent)

void UAB_FS_Badge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_FS_Badge_AnimGraphNode_TransitionResult_FFC9C3E244331F61A155B68CC4F95572()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FS_Badge.AB_FS_Badge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_FS_Badge_AnimGraphNode_TransitionResult_FFC9C3E244331F61A155B68CC4F95572");

	UAB_FS_Badge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_FS_Badge_AnimGraphNode_TransitionResult_FFC9C3E244331F61A155B68CC4F95572_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_FS_Badge.AB_FS_Badge_C.ExecuteUbergraph_AB_FS_Badge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_FS_Badge_C::ExecuteUbergraph_AB_FS_Badge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_FS_Badge.AB_FS_Badge_C.ExecuteUbergraph_AB_FS_Badge");

	UAB_FS_Badge_C_ExecuteUbergraph_AB_FS_Badge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
