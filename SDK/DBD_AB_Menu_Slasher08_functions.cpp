// DeadByDaylight (2.0.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DBD_AB_Menu_Slasher08_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Menu_Slasher08_C*    Menu_Slasher_08                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAB_Menu_Slasher08_C::GetKiller(class ABP_Menu_Slasher08_C** Menu_Slasher_08)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.GetKiller");

	UAB_Menu_Slasher08_C_GetKiller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Menu_Slasher_08 != nullptr)
		*Menu_Slasher_08 = params.Menu_Slasher_08;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_56DB53CC4F40B595C6227E9FCF076699
// (BlueprintEvent)

void UAB_Menu_Slasher08_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_56DB53CC4F40B595C6227E9FCF076699()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_56DB53CC4F40B595C6227E9FCF076699");

	UAB_Menu_Slasher08_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_56DB53CC4F40B595C6227E9FCF076699_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_6AC91EC94D8E613514B24DAEA7AA217F
// (BlueprintEvent)

void UAB_Menu_Slasher08_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_6AC91EC94D8E613514B24DAEA7AA217F()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_6AC91EC94D8E613514B24DAEA7AA217F");

	UAB_Menu_Slasher08_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher08_AnimGraphNode_BlendListByBool_6AC91EC94D8E613514B24DAEA7AA217F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_Menu_Slasher08_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.BlueprintUpdateAnimation");

	UAB_Menu_Slasher08_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear
// (BlueprintCallable, BlueprintEvent)

void UAB_Menu_Slasher08_C::AnimNotify_FX_MakeHatchetAppear()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetAppear");

	UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear
// (BlueprintCallable, BlueprintEvent)

void UAB_Menu_Slasher08_C::AnimNotify_FX_MakeHatchetDisappear()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.AnimNotify_FX_MakeHatchetDisappear");

	UAB_Menu_Slasher08_C_AnimNotify_FX_MakeHatchetDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_Menu_Slasher08_C::ExecuteUbergraph_AB_Menu_Slasher08(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher08.AB_Menu_Slasher08_C.ExecuteUbergraph_AB_Menu_Slasher08");

	UAB_Menu_Slasher08_C_ExecuteUbergraph_AB_Menu_Slasher08_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
