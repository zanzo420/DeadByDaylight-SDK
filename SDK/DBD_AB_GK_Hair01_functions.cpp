// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_GK_Hair01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_GK_Hair01.AB_GK_Hair01_C.IsOwnerViewed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsView                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAB_GK_Hair01_C::IsOwnerViewed(bool* IsView)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_GK_Hair01.AB_GK_Hair01_C.IsOwnerViewed");

	UAB_GK_Hair01_C_IsOwnerViewed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsView != nullptr)
		*IsView = params.IsView;
}


// Function AB_GK_Hair01.AB_GK_Hair01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Hair01_AnimGraphNode_BlendListByBool_F2CB322B4613FD4EA033CD8D424E8AEF
// (BlueprintEvent)

void UAB_GK_Hair01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Hair01_AnimGraphNode_BlendListByBool_F2CB322B4613FD4EA033CD8D424E8AEF()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_GK_Hair01.AB_GK_Hair01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Hair01_AnimGraphNode_BlendListByBool_F2CB322B4613FD4EA033CD8D424E8AEF");

	UAB_GK_Hair01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_GK_Hair01_AnimGraphNode_BlendListByBool_F2CB322B4613FD4EA033CD8D424E8AEF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_GK_Hair01.AB_GK_Hair01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_GK_Hair01_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_GK_Hair01.AB_GK_Hair01_C.BlueprintUpdateAnimation");

	UAB_GK_Hair01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_GK_Hair01.AB_GK_Hair01_C.ExecuteUbergraph_AB_GK_Hair01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_GK_Hair01_C::ExecuteUbergraph_AB_GK_Hair01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_GK_Hair01.AB_GK_Hair01_C.ExecuteUbergraph_AB_GK_Hair01");

	UAB_GK_Hair01_C_ExecuteUbergraph_AB_GK_Hair01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
